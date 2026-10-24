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

// Function: sub_003AEF60
// Address: 0x3aef60 - 0x3b0d50
void sub_003AEF60_0x3aef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEF60_0x3aef60");
#endif

    switch (ctx->pc) {
        case 0x3aef60u: goto label_3aef60;
        case 0x3aef64u: goto label_3aef64;
        case 0x3aef68u: goto label_3aef68;
        case 0x3aef6cu: goto label_3aef6c;
        case 0x3aef70u: goto label_3aef70;
        case 0x3aef74u: goto label_3aef74;
        case 0x3aef78u: goto label_3aef78;
        case 0x3aef7cu: goto label_3aef7c;
        case 0x3aef80u: goto label_3aef80;
        case 0x3aef84u: goto label_3aef84;
        case 0x3aef88u: goto label_3aef88;
        case 0x3aef8cu: goto label_3aef8c;
        case 0x3aef90u: goto label_3aef90;
        case 0x3aef94u: goto label_3aef94;
        case 0x3aef98u: goto label_3aef98;
        case 0x3aef9cu: goto label_3aef9c;
        case 0x3aefa0u: goto label_3aefa0;
        case 0x3aefa4u: goto label_3aefa4;
        case 0x3aefa8u: goto label_3aefa8;
        case 0x3aefacu: goto label_3aefac;
        case 0x3aefb0u: goto label_3aefb0;
        case 0x3aefb4u: goto label_3aefb4;
        case 0x3aefb8u: goto label_3aefb8;
        case 0x3aefbcu: goto label_3aefbc;
        case 0x3aefc0u: goto label_3aefc0;
        case 0x3aefc4u: goto label_3aefc4;
        case 0x3aefc8u: goto label_3aefc8;
        case 0x3aefccu: goto label_3aefcc;
        case 0x3aefd0u: goto label_3aefd0;
        case 0x3aefd4u: goto label_3aefd4;
        case 0x3aefd8u: goto label_3aefd8;
        case 0x3aefdcu: goto label_3aefdc;
        case 0x3aefe0u: goto label_3aefe0;
        case 0x3aefe4u: goto label_3aefe4;
        case 0x3aefe8u: goto label_3aefe8;
        case 0x3aefecu: goto label_3aefec;
        case 0x3aeff0u: goto label_3aeff0;
        case 0x3aeff4u: goto label_3aeff4;
        case 0x3aeff8u: goto label_3aeff8;
        case 0x3aeffcu: goto label_3aeffc;
        case 0x3af000u: goto label_3af000;
        case 0x3af004u: goto label_3af004;
        case 0x3af008u: goto label_3af008;
        case 0x3af00cu: goto label_3af00c;
        case 0x3af010u: goto label_3af010;
        case 0x3af014u: goto label_3af014;
        case 0x3af018u: goto label_3af018;
        case 0x3af01cu: goto label_3af01c;
        case 0x3af020u: goto label_3af020;
        case 0x3af024u: goto label_3af024;
        case 0x3af028u: goto label_3af028;
        case 0x3af02cu: goto label_3af02c;
        case 0x3af030u: goto label_3af030;
        case 0x3af034u: goto label_3af034;
        case 0x3af038u: goto label_3af038;
        case 0x3af03cu: goto label_3af03c;
        case 0x3af040u: goto label_3af040;
        case 0x3af044u: goto label_3af044;
        case 0x3af048u: goto label_3af048;
        case 0x3af04cu: goto label_3af04c;
        case 0x3af050u: goto label_3af050;
        case 0x3af054u: goto label_3af054;
        case 0x3af058u: goto label_3af058;
        case 0x3af05cu: goto label_3af05c;
        case 0x3af060u: goto label_3af060;
        case 0x3af064u: goto label_3af064;
        case 0x3af068u: goto label_3af068;
        case 0x3af06cu: goto label_3af06c;
        case 0x3af070u: goto label_3af070;
        case 0x3af074u: goto label_3af074;
        case 0x3af078u: goto label_3af078;
        case 0x3af07cu: goto label_3af07c;
        case 0x3af080u: goto label_3af080;
        case 0x3af084u: goto label_3af084;
        case 0x3af088u: goto label_3af088;
        case 0x3af08cu: goto label_3af08c;
        case 0x3af090u: goto label_3af090;
        case 0x3af094u: goto label_3af094;
        case 0x3af098u: goto label_3af098;
        case 0x3af09cu: goto label_3af09c;
        case 0x3af0a0u: goto label_3af0a0;
        case 0x3af0a4u: goto label_3af0a4;
        case 0x3af0a8u: goto label_3af0a8;
        case 0x3af0acu: goto label_3af0ac;
        case 0x3af0b0u: goto label_3af0b0;
        case 0x3af0b4u: goto label_3af0b4;
        case 0x3af0b8u: goto label_3af0b8;
        case 0x3af0bcu: goto label_3af0bc;
        case 0x3af0c0u: goto label_3af0c0;
        case 0x3af0c4u: goto label_3af0c4;
        case 0x3af0c8u: goto label_3af0c8;
        case 0x3af0ccu: goto label_3af0cc;
        case 0x3af0d0u: goto label_3af0d0;
        case 0x3af0d4u: goto label_3af0d4;
        case 0x3af0d8u: goto label_3af0d8;
        case 0x3af0dcu: goto label_3af0dc;
        case 0x3af0e0u: goto label_3af0e0;
        case 0x3af0e4u: goto label_3af0e4;
        case 0x3af0e8u: goto label_3af0e8;
        case 0x3af0ecu: goto label_3af0ec;
        case 0x3af0f0u: goto label_3af0f0;
        case 0x3af0f4u: goto label_3af0f4;
        case 0x3af0f8u: goto label_3af0f8;
        case 0x3af0fcu: goto label_3af0fc;
        case 0x3af100u: goto label_3af100;
        case 0x3af104u: goto label_3af104;
        case 0x3af108u: goto label_3af108;
        case 0x3af10cu: goto label_3af10c;
        case 0x3af110u: goto label_3af110;
        case 0x3af114u: goto label_3af114;
        case 0x3af118u: goto label_3af118;
        case 0x3af11cu: goto label_3af11c;
        case 0x3af120u: goto label_3af120;
        case 0x3af124u: goto label_3af124;
        case 0x3af128u: goto label_3af128;
        case 0x3af12cu: goto label_3af12c;
        case 0x3af130u: goto label_3af130;
        case 0x3af134u: goto label_3af134;
        case 0x3af138u: goto label_3af138;
        case 0x3af13cu: goto label_3af13c;
        case 0x3af140u: goto label_3af140;
        case 0x3af144u: goto label_3af144;
        case 0x3af148u: goto label_3af148;
        case 0x3af14cu: goto label_3af14c;
        case 0x3af150u: goto label_3af150;
        case 0x3af154u: goto label_3af154;
        case 0x3af158u: goto label_3af158;
        case 0x3af15cu: goto label_3af15c;
        case 0x3af160u: goto label_3af160;
        case 0x3af164u: goto label_3af164;
        case 0x3af168u: goto label_3af168;
        case 0x3af16cu: goto label_3af16c;
        case 0x3af170u: goto label_3af170;
        case 0x3af174u: goto label_3af174;
        case 0x3af178u: goto label_3af178;
        case 0x3af17cu: goto label_3af17c;
        case 0x3af180u: goto label_3af180;
        case 0x3af184u: goto label_3af184;
        case 0x3af188u: goto label_3af188;
        case 0x3af18cu: goto label_3af18c;
        case 0x3af190u: goto label_3af190;
        case 0x3af194u: goto label_3af194;
        case 0x3af198u: goto label_3af198;
        case 0x3af19cu: goto label_3af19c;
        case 0x3af1a0u: goto label_3af1a0;
        case 0x3af1a4u: goto label_3af1a4;
        case 0x3af1a8u: goto label_3af1a8;
        case 0x3af1acu: goto label_3af1ac;
        case 0x3af1b0u: goto label_3af1b0;
        case 0x3af1b4u: goto label_3af1b4;
        case 0x3af1b8u: goto label_3af1b8;
        case 0x3af1bcu: goto label_3af1bc;
        case 0x3af1c0u: goto label_3af1c0;
        case 0x3af1c4u: goto label_3af1c4;
        case 0x3af1c8u: goto label_3af1c8;
        case 0x3af1ccu: goto label_3af1cc;
        case 0x3af1d0u: goto label_3af1d0;
        case 0x3af1d4u: goto label_3af1d4;
        case 0x3af1d8u: goto label_3af1d8;
        case 0x3af1dcu: goto label_3af1dc;
        case 0x3af1e0u: goto label_3af1e0;
        case 0x3af1e4u: goto label_3af1e4;
        case 0x3af1e8u: goto label_3af1e8;
        case 0x3af1ecu: goto label_3af1ec;
        case 0x3af1f0u: goto label_3af1f0;
        case 0x3af1f4u: goto label_3af1f4;
        case 0x3af1f8u: goto label_3af1f8;
        case 0x3af1fcu: goto label_3af1fc;
        case 0x3af200u: goto label_3af200;
        case 0x3af204u: goto label_3af204;
        case 0x3af208u: goto label_3af208;
        case 0x3af20cu: goto label_3af20c;
        case 0x3af210u: goto label_3af210;
        case 0x3af214u: goto label_3af214;
        case 0x3af218u: goto label_3af218;
        case 0x3af21cu: goto label_3af21c;
        case 0x3af220u: goto label_3af220;
        case 0x3af224u: goto label_3af224;
        case 0x3af228u: goto label_3af228;
        case 0x3af22cu: goto label_3af22c;
        case 0x3af230u: goto label_3af230;
        case 0x3af234u: goto label_3af234;
        case 0x3af238u: goto label_3af238;
        case 0x3af23cu: goto label_3af23c;
        case 0x3af240u: goto label_3af240;
        case 0x3af244u: goto label_3af244;
        case 0x3af248u: goto label_3af248;
        case 0x3af24cu: goto label_3af24c;
        case 0x3af250u: goto label_3af250;
        case 0x3af254u: goto label_3af254;
        case 0x3af258u: goto label_3af258;
        case 0x3af25cu: goto label_3af25c;
        case 0x3af260u: goto label_3af260;
        case 0x3af264u: goto label_3af264;
        case 0x3af268u: goto label_3af268;
        case 0x3af26cu: goto label_3af26c;
        case 0x3af270u: goto label_3af270;
        case 0x3af274u: goto label_3af274;
        case 0x3af278u: goto label_3af278;
        case 0x3af27cu: goto label_3af27c;
        case 0x3af280u: goto label_3af280;
        case 0x3af284u: goto label_3af284;
        case 0x3af288u: goto label_3af288;
        case 0x3af28cu: goto label_3af28c;
        case 0x3af290u: goto label_3af290;
        case 0x3af294u: goto label_3af294;
        case 0x3af298u: goto label_3af298;
        case 0x3af29cu: goto label_3af29c;
        case 0x3af2a0u: goto label_3af2a0;
        case 0x3af2a4u: goto label_3af2a4;
        case 0x3af2a8u: goto label_3af2a8;
        case 0x3af2acu: goto label_3af2ac;
        case 0x3af2b0u: goto label_3af2b0;
        case 0x3af2b4u: goto label_3af2b4;
        case 0x3af2b8u: goto label_3af2b8;
        case 0x3af2bcu: goto label_3af2bc;
        case 0x3af2c0u: goto label_3af2c0;
        case 0x3af2c4u: goto label_3af2c4;
        case 0x3af2c8u: goto label_3af2c8;
        case 0x3af2ccu: goto label_3af2cc;
        case 0x3af2d0u: goto label_3af2d0;
        case 0x3af2d4u: goto label_3af2d4;
        case 0x3af2d8u: goto label_3af2d8;
        case 0x3af2dcu: goto label_3af2dc;
        case 0x3af2e0u: goto label_3af2e0;
        case 0x3af2e4u: goto label_3af2e4;
        case 0x3af2e8u: goto label_3af2e8;
        case 0x3af2ecu: goto label_3af2ec;
        case 0x3af2f0u: goto label_3af2f0;
        case 0x3af2f4u: goto label_3af2f4;
        case 0x3af2f8u: goto label_3af2f8;
        case 0x3af2fcu: goto label_3af2fc;
        case 0x3af300u: goto label_3af300;
        case 0x3af304u: goto label_3af304;
        case 0x3af308u: goto label_3af308;
        case 0x3af30cu: goto label_3af30c;
        case 0x3af310u: goto label_3af310;
        case 0x3af314u: goto label_3af314;
        case 0x3af318u: goto label_3af318;
        case 0x3af31cu: goto label_3af31c;
        case 0x3af320u: goto label_3af320;
        case 0x3af324u: goto label_3af324;
        case 0x3af328u: goto label_3af328;
        case 0x3af32cu: goto label_3af32c;
        case 0x3af330u: goto label_3af330;
        case 0x3af334u: goto label_3af334;
        case 0x3af338u: goto label_3af338;
        case 0x3af33cu: goto label_3af33c;
        case 0x3af340u: goto label_3af340;
        case 0x3af344u: goto label_3af344;
        case 0x3af348u: goto label_3af348;
        case 0x3af34cu: goto label_3af34c;
        case 0x3af350u: goto label_3af350;
        case 0x3af354u: goto label_3af354;
        case 0x3af358u: goto label_3af358;
        case 0x3af35cu: goto label_3af35c;
        case 0x3af360u: goto label_3af360;
        case 0x3af364u: goto label_3af364;
        case 0x3af368u: goto label_3af368;
        case 0x3af36cu: goto label_3af36c;
        case 0x3af370u: goto label_3af370;
        case 0x3af374u: goto label_3af374;
        case 0x3af378u: goto label_3af378;
        case 0x3af37cu: goto label_3af37c;
        case 0x3af380u: goto label_3af380;
        case 0x3af384u: goto label_3af384;
        case 0x3af388u: goto label_3af388;
        case 0x3af38cu: goto label_3af38c;
        case 0x3af390u: goto label_3af390;
        case 0x3af394u: goto label_3af394;
        case 0x3af398u: goto label_3af398;
        case 0x3af39cu: goto label_3af39c;
        case 0x3af3a0u: goto label_3af3a0;
        case 0x3af3a4u: goto label_3af3a4;
        case 0x3af3a8u: goto label_3af3a8;
        case 0x3af3acu: goto label_3af3ac;
        case 0x3af3b0u: goto label_3af3b0;
        case 0x3af3b4u: goto label_3af3b4;
        case 0x3af3b8u: goto label_3af3b8;
        case 0x3af3bcu: goto label_3af3bc;
        case 0x3af3c0u: goto label_3af3c0;
        case 0x3af3c4u: goto label_3af3c4;
        case 0x3af3c8u: goto label_3af3c8;
        case 0x3af3ccu: goto label_3af3cc;
        case 0x3af3d0u: goto label_3af3d0;
        case 0x3af3d4u: goto label_3af3d4;
        case 0x3af3d8u: goto label_3af3d8;
        case 0x3af3dcu: goto label_3af3dc;
        case 0x3af3e0u: goto label_3af3e0;
        case 0x3af3e4u: goto label_3af3e4;
        case 0x3af3e8u: goto label_3af3e8;
        case 0x3af3ecu: goto label_3af3ec;
        case 0x3af3f0u: goto label_3af3f0;
        case 0x3af3f4u: goto label_3af3f4;
        case 0x3af3f8u: goto label_3af3f8;
        case 0x3af3fcu: goto label_3af3fc;
        case 0x3af400u: goto label_3af400;
        case 0x3af404u: goto label_3af404;
        case 0x3af408u: goto label_3af408;
        case 0x3af40cu: goto label_3af40c;
        case 0x3af410u: goto label_3af410;
        case 0x3af414u: goto label_3af414;
        case 0x3af418u: goto label_3af418;
        case 0x3af41cu: goto label_3af41c;
        case 0x3af420u: goto label_3af420;
        case 0x3af424u: goto label_3af424;
        case 0x3af428u: goto label_3af428;
        case 0x3af42cu: goto label_3af42c;
        case 0x3af430u: goto label_3af430;
        case 0x3af434u: goto label_3af434;
        case 0x3af438u: goto label_3af438;
        case 0x3af43cu: goto label_3af43c;
        case 0x3af440u: goto label_3af440;
        case 0x3af444u: goto label_3af444;
        case 0x3af448u: goto label_3af448;
        case 0x3af44cu: goto label_3af44c;
        case 0x3af450u: goto label_3af450;
        case 0x3af454u: goto label_3af454;
        case 0x3af458u: goto label_3af458;
        case 0x3af45cu: goto label_3af45c;
        case 0x3af460u: goto label_3af460;
        case 0x3af464u: goto label_3af464;
        case 0x3af468u: goto label_3af468;
        case 0x3af46cu: goto label_3af46c;
        case 0x3af470u: goto label_3af470;
        case 0x3af474u: goto label_3af474;
        case 0x3af478u: goto label_3af478;
        case 0x3af47cu: goto label_3af47c;
        case 0x3af480u: goto label_3af480;
        case 0x3af484u: goto label_3af484;
        case 0x3af488u: goto label_3af488;
        case 0x3af48cu: goto label_3af48c;
        case 0x3af490u: goto label_3af490;
        case 0x3af494u: goto label_3af494;
        case 0x3af498u: goto label_3af498;
        case 0x3af49cu: goto label_3af49c;
        case 0x3af4a0u: goto label_3af4a0;
        case 0x3af4a4u: goto label_3af4a4;
        case 0x3af4a8u: goto label_3af4a8;
        case 0x3af4acu: goto label_3af4ac;
        case 0x3af4b0u: goto label_3af4b0;
        case 0x3af4b4u: goto label_3af4b4;
        case 0x3af4b8u: goto label_3af4b8;
        case 0x3af4bcu: goto label_3af4bc;
        case 0x3af4c0u: goto label_3af4c0;
        case 0x3af4c4u: goto label_3af4c4;
        case 0x3af4c8u: goto label_3af4c8;
        case 0x3af4ccu: goto label_3af4cc;
        case 0x3af4d0u: goto label_3af4d0;
        case 0x3af4d4u: goto label_3af4d4;
        case 0x3af4d8u: goto label_3af4d8;
        case 0x3af4dcu: goto label_3af4dc;
        case 0x3af4e0u: goto label_3af4e0;
        case 0x3af4e4u: goto label_3af4e4;
        case 0x3af4e8u: goto label_3af4e8;
        case 0x3af4ecu: goto label_3af4ec;
        case 0x3af4f0u: goto label_3af4f0;
        case 0x3af4f4u: goto label_3af4f4;
        case 0x3af4f8u: goto label_3af4f8;
        case 0x3af4fcu: goto label_3af4fc;
        case 0x3af500u: goto label_3af500;
        case 0x3af504u: goto label_3af504;
        case 0x3af508u: goto label_3af508;
        case 0x3af50cu: goto label_3af50c;
        case 0x3af510u: goto label_3af510;
        case 0x3af514u: goto label_3af514;
        case 0x3af518u: goto label_3af518;
        case 0x3af51cu: goto label_3af51c;
        case 0x3af520u: goto label_3af520;
        case 0x3af524u: goto label_3af524;
        case 0x3af528u: goto label_3af528;
        case 0x3af52cu: goto label_3af52c;
        case 0x3af530u: goto label_3af530;
        case 0x3af534u: goto label_3af534;
        case 0x3af538u: goto label_3af538;
        case 0x3af53cu: goto label_3af53c;
        case 0x3af540u: goto label_3af540;
        case 0x3af544u: goto label_3af544;
        case 0x3af548u: goto label_3af548;
        case 0x3af54cu: goto label_3af54c;
        case 0x3af550u: goto label_3af550;
        case 0x3af554u: goto label_3af554;
        case 0x3af558u: goto label_3af558;
        case 0x3af55cu: goto label_3af55c;
        case 0x3af560u: goto label_3af560;
        case 0x3af564u: goto label_3af564;
        case 0x3af568u: goto label_3af568;
        case 0x3af56cu: goto label_3af56c;
        case 0x3af570u: goto label_3af570;
        case 0x3af574u: goto label_3af574;
        case 0x3af578u: goto label_3af578;
        case 0x3af57cu: goto label_3af57c;
        case 0x3af580u: goto label_3af580;
        case 0x3af584u: goto label_3af584;
        case 0x3af588u: goto label_3af588;
        case 0x3af58cu: goto label_3af58c;
        case 0x3af590u: goto label_3af590;
        case 0x3af594u: goto label_3af594;
        case 0x3af598u: goto label_3af598;
        case 0x3af59cu: goto label_3af59c;
        case 0x3af5a0u: goto label_3af5a0;
        case 0x3af5a4u: goto label_3af5a4;
        case 0x3af5a8u: goto label_3af5a8;
        case 0x3af5acu: goto label_3af5ac;
        case 0x3af5b0u: goto label_3af5b0;
        case 0x3af5b4u: goto label_3af5b4;
        case 0x3af5b8u: goto label_3af5b8;
        case 0x3af5bcu: goto label_3af5bc;
        case 0x3af5c0u: goto label_3af5c0;
        case 0x3af5c4u: goto label_3af5c4;
        case 0x3af5c8u: goto label_3af5c8;
        case 0x3af5ccu: goto label_3af5cc;
        case 0x3af5d0u: goto label_3af5d0;
        case 0x3af5d4u: goto label_3af5d4;
        case 0x3af5d8u: goto label_3af5d8;
        case 0x3af5dcu: goto label_3af5dc;
        case 0x3af5e0u: goto label_3af5e0;
        case 0x3af5e4u: goto label_3af5e4;
        case 0x3af5e8u: goto label_3af5e8;
        case 0x3af5ecu: goto label_3af5ec;
        case 0x3af5f0u: goto label_3af5f0;
        case 0x3af5f4u: goto label_3af5f4;
        case 0x3af5f8u: goto label_3af5f8;
        case 0x3af5fcu: goto label_3af5fc;
        case 0x3af600u: goto label_3af600;
        case 0x3af604u: goto label_3af604;
        case 0x3af608u: goto label_3af608;
        case 0x3af60cu: goto label_3af60c;
        case 0x3af610u: goto label_3af610;
        case 0x3af614u: goto label_3af614;
        case 0x3af618u: goto label_3af618;
        case 0x3af61cu: goto label_3af61c;
        case 0x3af620u: goto label_3af620;
        case 0x3af624u: goto label_3af624;
        case 0x3af628u: goto label_3af628;
        case 0x3af62cu: goto label_3af62c;
        case 0x3af630u: goto label_3af630;
        case 0x3af634u: goto label_3af634;
        case 0x3af638u: goto label_3af638;
        case 0x3af63cu: goto label_3af63c;
        case 0x3af640u: goto label_3af640;
        case 0x3af644u: goto label_3af644;
        case 0x3af648u: goto label_3af648;
        case 0x3af64cu: goto label_3af64c;
        case 0x3af650u: goto label_3af650;
        case 0x3af654u: goto label_3af654;
        case 0x3af658u: goto label_3af658;
        case 0x3af65cu: goto label_3af65c;
        case 0x3af660u: goto label_3af660;
        case 0x3af664u: goto label_3af664;
        case 0x3af668u: goto label_3af668;
        case 0x3af66cu: goto label_3af66c;
        case 0x3af670u: goto label_3af670;
        case 0x3af674u: goto label_3af674;
        case 0x3af678u: goto label_3af678;
        case 0x3af67cu: goto label_3af67c;
        case 0x3af680u: goto label_3af680;
        case 0x3af684u: goto label_3af684;
        case 0x3af688u: goto label_3af688;
        case 0x3af68cu: goto label_3af68c;
        case 0x3af690u: goto label_3af690;
        case 0x3af694u: goto label_3af694;
        case 0x3af698u: goto label_3af698;
        case 0x3af69cu: goto label_3af69c;
        case 0x3af6a0u: goto label_3af6a0;
        case 0x3af6a4u: goto label_3af6a4;
        case 0x3af6a8u: goto label_3af6a8;
        case 0x3af6acu: goto label_3af6ac;
        case 0x3af6b0u: goto label_3af6b0;
        case 0x3af6b4u: goto label_3af6b4;
        case 0x3af6b8u: goto label_3af6b8;
        case 0x3af6bcu: goto label_3af6bc;
        case 0x3af6c0u: goto label_3af6c0;
        case 0x3af6c4u: goto label_3af6c4;
        case 0x3af6c8u: goto label_3af6c8;
        case 0x3af6ccu: goto label_3af6cc;
        case 0x3af6d0u: goto label_3af6d0;
        case 0x3af6d4u: goto label_3af6d4;
        case 0x3af6d8u: goto label_3af6d8;
        case 0x3af6dcu: goto label_3af6dc;
        case 0x3af6e0u: goto label_3af6e0;
        case 0x3af6e4u: goto label_3af6e4;
        case 0x3af6e8u: goto label_3af6e8;
        case 0x3af6ecu: goto label_3af6ec;
        case 0x3af6f0u: goto label_3af6f0;
        case 0x3af6f4u: goto label_3af6f4;
        case 0x3af6f8u: goto label_3af6f8;
        case 0x3af6fcu: goto label_3af6fc;
        case 0x3af700u: goto label_3af700;
        case 0x3af704u: goto label_3af704;
        case 0x3af708u: goto label_3af708;
        case 0x3af70cu: goto label_3af70c;
        case 0x3af710u: goto label_3af710;
        case 0x3af714u: goto label_3af714;
        case 0x3af718u: goto label_3af718;
        case 0x3af71cu: goto label_3af71c;
        case 0x3af720u: goto label_3af720;
        case 0x3af724u: goto label_3af724;
        case 0x3af728u: goto label_3af728;
        case 0x3af72cu: goto label_3af72c;
        case 0x3af730u: goto label_3af730;
        case 0x3af734u: goto label_3af734;
        case 0x3af738u: goto label_3af738;
        case 0x3af73cu: goto label_3af73c;
        case 0x3af740u: goto label_3af740;
        case 0x3af744u: goto label_3af744;
        case 0x3af748u: goto label_3af748;
        case 0x3af74cu: goto label_3af74c;
        case 0x3af750u: goto label_3af750;
        case 0x3af754u: goto label_3af754;
        case 0x3af758u: goto label_3af758;
        case 0x3af75cu: goto label_3af75c;
        case 0x3af760u: goto label_3af760;
        case 0x3af764u: goto label_3af764;
        case 0x3af768u: goto label_3af768;
        case 0x3af76cu: goto label_3af76c;
        case 0x3af770u: goto label_3af770;
        case 0x3af774u: goto label_3af774;
        case 0x3af778u: goto label_3af778;
        case 0x3af77cu: goto label_3af77c;
        case 0x3af780u: goto label_3af780;
        case 0x3af784u: goto label_3af784;
        case 0x3af788u: goto label_3af788;
        case 0x3af78cu: goto label_3af78c;
        case 0x3af790u: goto label_3af790;
        case 0x3af794u: goto label_3af794;
        case 0x3af798u: goto label_3af798;
        case 0x3af79cu: goto label_3af79c;
        case 0x3af7a0u: goto label_3af7a0;
        case 0x3af7a4u: goto label_3af7a4;
        case 0x3af7a8u: goto label_3af7a8;
        case 0x3af7acu: goto label_3af7ac;
        case 0x3af7b0u: goto label_3af7b0;
        case 0x3af7b4u: goto label_3af7b4;
        case 0x3af7b8u: goto label_3af7b8;
        case 0x3af7bcu: goto label_3af7bc;
        case 0x3af7c0u: goto label_3af7c0;
        case 0x3af7c4u: goto label_3af7c4;
        case 0x3af7c8u: goto label_3af7c8;
        case 0x3af7ccu: goto label_3af7cc;
        case 0x3af7d0u: goto label_3af7d0;
        case 0x3af7d4u: goto label_3af7d4;
        case 0x3af7d8u: goto label_3af7d8;
        case 0x3af7dcu: goto label_3af7dc;
        case 0x3af7e0u: goto label_3af7e0;
        case 0x3af7e4u: goto label_3af7e4;
        case 0x3af7e8u: goto label_3af7e8;
        case 0x3af7ecu: goto label_3af7ec;
        case 0x3af7f0u: goto label_3af7f0;
        case 0x3af7f4u: goto label_3af7f4;
        case 0x3af7f8u: goto label_3af7f8;
        case 0x3af7fcu: goto label_3af7fc;
        case 0x3af800u: goto label_3af800;
        case 0x3af804u: goto label_3af804;
        case 0x3af808u: goto label_3af808;
        case 0x3af80cu: goto label_3af80c;
        case 0x3af810u: goto label_3af810;
        case 0x3af814u: goto label_3af814;
        case 0x3af818u: goto label_3af818;
        case 0x3af81cu: goto label_3af81c;
        case 0x3af820u: goto label_3af820;
        case 0x3af824u: goto label_3af824;
        case 0x3af828u: goto label_3af828;
        case 0x3af82cu: goto label_3af82c;
        case 0x3af830u: goto label_3af830;
        case 0x3af834u: goto label_3af834;
        case 0x3af838u: goto label_3af838;
        case 0x3af83cu: goto label_3af83c;
        case 0x3af840u: goto label_3af840;
        case 0x3af844u: goto label_3af844;
        case 0x3af848u: goto label_3af848;
        case 0x3af84cu: goto label_3af84c;
        case 0x3af850u: goto label_3af850;
        case 0x3af854u: goto label_3af854;
        case 0x3af858u: goto label_3af858;
        case 0x3af85cu: goto label_3af85c;
        case 0x3af860u: goto label_3af860;
        case 0x3af864u: goto label_3af864;
        case 0x3af868u: goto label_3af868;
        case 0x3af86cu: goto label_3af86c;
        case 0x3af870u: goto label_3af870;
        case 0x3af874u: goto label_3af874;
        case 0x3af878u: goto label_3af878;
        case 0x3af87cu: goto label_3af87c;
        case 0x3af880u: goto label_3af880;
        case 0x3af884u: goto label_3af884;
        case 0x3af888u: goto label_3af888;
        case 0x3af88cu: goto label_3af88c;
        case 0x3af890u: goto label_3af890;
        case 0x3af894u: goto label_3af894;
        case 0x3af898u: goto label_3af898;
        case 0x3af89cu: goto label_3af89c;
        case 0x3af8a0u: goto label_3af8a0;
        case 0x3af8a4u: goto label_3af8a4;
        case 0x3af8a8u: goto label_3af8a8;
        case 0x3af8acu: goto label_3af8ac;
        case 0x3af8b0u: goto label_3af8b0;
        case 0x3af8b4u: goto label_3af8b4;
        case 0x3af8b8u: goto label_3af8b8;
        case 0x3af8bcu: goto label_3af8bc;
        case 0x3af8c0u: goto label_3af8c0;
        case 0x3af8c4u: goto label_3af8c4;
        case 0x3af8c8u: goto label_3af8c8;
        case 0x3af8ccu: goto label_3af8cc;
        case 0x3af8d0u: goto label_3af8d0;
        case 0x3af8d4u: goto label_3af8d4;
        case 0x3af8d8u: goto label_3af8d8;
        case 0x3af8dcu: goto label_3af8dc;
        case 0x3af8e0u: goto label_3af8e0;
        case 0x3af8e4u: goto label_3af8e4;
        case 0x3af8e8u: goto label_3af8e8;
        case 0x3af8ecu: goto label_3af8ec;
        case 0x3af8f0u: goto label_3af8f0;
        case 0x3af8f4u: goto label_3af8f4;
        case 0x3af8f8u: goto label_3af8f8;
        case 0x3af8fcu: goto label_3af8fc;
        case 0x3af900u: goto label_3af900;
        case 0x3af904u: goto label_3af904;
        case 0x3af908u: goto label_3af908;
        case 0x3af90cu: goto label_3af90c;
        case 0x3af910u: goto label_3af910;
        case 0x3af914u: goto label_3af914;
        case 0x3af918u: goto label_3af918;
        case 0x3af91cu: goto label_3af91c;
        case 0x3af920u: goto label_3af920;
        case 0x3af924u: goto label_3af924;
        case 0x3af928u: goto label_3af928;
        case 0x3af92cu: goto label_3af92c;
        case 0x3af930u: goto label_3af930;
        case 0x3af934u: goto label_3af934;
        case 0x3af938u: goto label_3af938;
        case 0x3af93cu: goto label_3af93c;
        case 0x3af940u: goto label_3af940;
        case 0x3af944u: goto label_3af944;
        case 0x3af948u: goto label_3af948;
        case 0x3af94cu: goto label_3af94c;
        case 0x3af950u: goto label_3af950;
        case 0x3af954u: goto label_3af954;
        case 0x3af958u: goto label_3af958;
        case 0x3af95cu: goto label_3af95c;
        case 0x3af960u: goto label_3af960;
        case 0x3af964u: goto label_3af964;
        case 0x3af968u: goto label_3af968;
        case 0x3af96cu: goto label_3af96c;
        case 0x3af970u: goto label_3af970;
        case 0x3af974u: goto label_3af974;
        case 0x3af978u: goto label_3af978;
        case 0x3af97cu: goto label_3af97c;
        case 0x3af980u: goto label_3af980;
        case 0x3af984u: goto label_3af984;
        case 0x3af988u: goto label_3af988;
        case 0x3af98cu: goto label_3af98c;
        case 0x3af990u: goto label_3af990;
        case 0x3af994u: goto label_3af994;
        case 0x3af998u: goto label_3af998;
        case 0x3af99cu: goto label_3af99c;
        case 0x3af9a0u: goto label_3af9a0;
        case 0x3af9a4u: goto label_3af9a4;
        case 0x3af9a8u: goto label_3af9a8;
        case 0x3af9acu: goto label_3af9ac;
        case 0x3af9b0u: goto label_3af9b0;
        case 0x3af9b4u: goto label_3af9b4;
        case 0x3af9b8u: goto label_3af9b8;
        case 0x3af9bcu: goto label_3af9bc;
        case 0x3af9c0u: goto label_3af9c0;
        case 0x3af9c4u: goto label_3af9c4;
        case 0x3af9c8u: goto label_3af9c8;
        case 0x3af9ccu: goto label_3af9cc;
        case 0x3af9d0u: goto label_3af9d0;
        case 0x3af9d4u: goto label_3af9d4;
        case 0x3af9d8u: goto label_3af9d8;
        case 0x3af9dcu: goto label_3af9dc;
        case 0x3af9e0u: goto label_3af9e0;
        case 0x3af9e4u: goto label_3af9e4;
        case 0x3af9e8u: goto label_3af9e8;
        case 0x3af9ecu: goto label_3af9ec;
        case 0x3af9f0u: goto label_3af9f0;
        case 0x3af9f4u: goto label_3af9f4;
        case 0x3af9f8u: goto label_3af9f8;
        case 0x3af9fcu: goto label_3af9fc;
        case 0x3afa00u: goto label_3afa00;
        case 0x3afa04u: goto label_3afa04;
        case 0x3afa08u: goto label_3afa08;
        case 0x3afa0cu: goto label_3afa0c;
        case 0x3afa10u: goto label_3afa10;
        case 0x3afa14u: goto label_3afa14;
        case 0x3afa18u: goto label_3afa18;
        case 0x3afa1cu: goto label_3afa1c;
        case 0x3afa20u: goto label_3afa20;
        case 0x3afa24u: goto label_3afa24;
        case 0x3afa28u: goto label_3afa28;
        case 0x3afa2cu: goto label_3afa2c;
        case 0x3afa30u: goto label_3afa30;
        case 0x3afa34u: goto label_3afa34;
        case 0x3afa38u: goto label_3afa38;
        case 0x3afa3cu: goto label_3afa3c;
        case 0x3afa40u: goto label_3afa40;
        case 0x3afa44u: goto label_3afa44;
        case 0x3afa48u: goto label_3afa48;
        case 0x3afa4cu: goto label_3afa4c;
        case 0x3afa50u: goto label_3afa50;
        case 0x3afa54u: goto label_3afa54;
        case 0x3afa58u: goto label_3afa58;
        case 0x3afa5cu: goto label_3afa5c;
        case 0x3afa60u: goto label_3afa60;
        case 0x3afa64u: goto label_3afa64;
        case 0x3afa68u: goto label_3afa68;
        case 0x3afa6cu: goto label_3afa6c;
        case 0x3afa70u: goto label_3afa70;
        case 0x3afa74u: goto label_3afa74;
        case 0x3afa78u: goto label_3afa78;
        case 0x3afa7cu: goto label_3afa7c;
        case 0x3afa80u: goto label_3afa80;
        case 0x3afa84u: goto label_3afa84;
        case 0x3afa88u: goto label_3afa88;
        case 0x3afa8cu: goto label_3afa8c;
        case 0x3afa90u: goto label_3afa90;
        case 0x3afa94u: goto label_3afa94;
        case 0x3afa98u: goto label_3afa98;
        case 0x3afa9cu: goto label_3afa9c;
        case 0x3afaa0u: goto label_3afaa0;
        case 0x3afaa4u: goto label_3afaa4;
        case 0x3afaa8u: goto label_3afaa8;
        case 0x3afaacu: goto label_3afaac;
        case 0x3afab0u: goto label_3afab0;
        case 0x3afab4u: goto label_3afab4;
        case 0x3afab8u: goto label_3afab8;
        case 0x3afabcu: goto label_3afabc;
        case 0x3afac0u: goto label_3afac0;
        case 0x3afac4u: goto label_3afac4;
        case 0x3afac8u: goto label_3afac8;
        case 0x3afaccu: goto label_3afacc;
        case 0x3afad0u: goto label_3afad0;
        case 0x3afad4u: goto label_3afad4;
        case 0x3afad8u: goto label_3afad8;
        case 0x3afadcu: goto label_3afadc;
        case 0x3afae0u: goto label_3afae0;
        case 0x3afae4u: goto label_3afae4;
        case 0x3afae8u: goto label_3afae8;
        case 0x3afaecu: goto label_3afaec;
        case 0x3afaf0u: goto label_3afaf0;
        case 0x3afaf4u: goto label_3afaf4;
        case 0x3afaf8u: goto label_3afaf8;
        case 0x3afafcu: goto label_3afafc;
        case 0x3afb00u: goto label_3afb00;
        case 0x3afb04u: goto label_3afb04;
        case 0x3afb08u: goto label_3afb08;
        case 0x3afb0cu: goto label_3afb0c;
        case 0x3afb10u: goto label_3afb10;
        case 0x3afb14u: goto label_3afb14;
        case 0x3afb18u: goto label_3afb18;
        case 0x3afb1cu: goto label_3afb1c;
        case 0x3afb20u: goto label_3afb20;
        case 0x3afb24u: goto label_3afb24;
        case 0x3afb28u: goto label_3afb28;
        case 0x3afb2cu: goto label_3afb2c;
        case 0x3afb30u: goto label_3afb30;
        case 0x3afb34u: goto label_3afb34;
        case 0x3afb38u: goto label_3afb38;
        case 0x3afb3cu: goto label_3afb3c;
        case 0x3afb40u: goto label_3afb40;
        case 0x3afb44u: goto label_3afb44;
        case 0x3afb48u: goto label_3afb48;
        case 0x3afb4cu: goto label_3afb4c;
        case 0x3afb50u: goto label_3afb50;
        case 0x3afb54u: goto label_3afb54;
        case 0x3afb58u: goto label_3afb58;
        case 0x3afb5cu: goto label_3afb5c;
        case 0x3afb60u: goto label_3afb60;
        case 0x3afb64u: goto label_3afb64;
        case 0x3afb68u: goto label_3afb68;
        case 0x3afb6cu: goto label_3afb6c;
        case 0x3afb70u: goto label_3afb70;
        case 0x3afb74u: goto label_3afb74;
        case 0x3afb78u: goto label_3afb78;
        case 0x3afb7cu: goto label_3afb7c;
        case 0x3afb80u: goto label_3afb80;
        case 0x3afb84u: goto label_3afb84;
        case 0x3afb88u: goto label_3afb88;
        case 0x3afb8cu: goto label_3afb8c;
        case 0x3afb90u: goto label_3afb90;
        case 0x3afb94u: goto label_3afb94;
        case 0x3afb98u: goto label_3afb98;
        case 0x3afb9cu: goto label_3afb9c;
        case 0x3afba0u: goto label_3afba0;
        case 0x3afba4u: goto label_3afba4;
        case 0x3afba8u: goto label_3afba8;
        case 0x3afbacu: goto label_3afbac;
        case 0x3afbb0u: goto label_3afbb0;
        case 0x3afbb4u: goto label_3afbb4;
        case 0x3afbb8u: goto label_3afbb8;
        case 0x3afbbcu: goto label_3afbbc;
        case 0x3afbc0u: goto label_3afbc0;
        case 0x3afbc4u: goto label_3afbc4;
        case 0x3afbc8u: goto label_3afbc8;
        case 0x3afbccu: goto label_3afbcc;
        case 0x3afbd0u: goto label_3afbd0;
        case 0x3afbd4u: goto label_3afbd4;
        case 0x3afbd8u: goto label_3afbd8;
        case 0x3afbdcu: goto label_3afbdc;
        case 0x3afbe0u: goto label_3afbe0;
        case 0x3afbe4u: goto label_3afbe4;
        case 0x3afbe8u: goto label_3afbe8;
        case 0x3afbecu: goto label_3afbec;
        case 0x3afbf0u: goto label_3afbf0;
        case 0x3afbf4u: goto label_3afbf4;
        case 0x3afbf8u: goto label_3afbf8;
        case 0x3afbfcu: goto label_3afbfc;
        case 0x3afc00u: goto label_3afc00;
        case 0x3afc04u: goto label_3afc04;
        case 0x3afc08u: goto label_3afc08;
        case 0x3afc0cu: goto label_3afc0c;
        case 0x3afc10u: goto label_3afc10;
        case 0x3afc14u: goto label_3afc14;
        case 0x3afc18u: goto label_3afc18;
        case 0x3afc1cu: goto label_3afc1c;
        case 0x3afc20u: goto label_3afc20;
        case 0x3afc24u: goto label_3afc24;
        case 0x3afc28u: goto label_3afc28;
        case 0x3afc2cu: goto label_3afc2c;
        case 0x3afc30u: goto label_3afc30;
        case 0x3afc34u: goto label_3afc34;
        case 0x3afc38u: goto label_3afc38;
        case 0x3afc3cu: goto label_3afc3c;
        case 0x3afc40u: goto label_3afc40;
        case 0x3afc44u: goto label_3afc44;
        case 0x3afc48u: goto label_3afc48;
        case 0x3afc4cu: goto label_3afc4c;
        case 0x3afc50u: goto label_3afc50;
        case 0x3afc54u: goto label_3afc54;
        case 0x3afc58u: goto label_3afc58;
        case 0x3afc5cu: goto label_3afc5c;
        case 0x3afc60u: goto label_3afc60;
        case 0x3afc64u: goto label_3afc64;
        case 0x3afc68u: goto label_3afc68;
        case 0x3afc6cu: goto label_3afc6c;
        case 0x3afc70u: goto label_3afc70;
        case 0x3afc74u: goto label_3afc74;
        case 0x3afc78u: goto label_3afc78;
        case 0x3afc7cu: goto label_3afc7c;
        case 0x3afc80u: goto label_3afc80;
        case 0x3afc84u: goto label_3afc84;
        case 0x3afc88u: goto label_3afc88;
        case 0x3afc8cu: goto label_3afc8c;
        case 0x3afc90u: goto label_3afc90;
        case 0x3afc94u: goto label_3afc94;
        case 0x3afc98u: goto label_3afc98;
        case 0x3afc9cu: goto label_3afc9c;
        case 0x3afca0u: goto label_3afca0;
        case 0x3afca4u: goto label_3afca4;
        case 0x3afca8u: goto label_3afca8;
        case 0x3afcacu: goto label_3afcac;
        case 0x3afcb0u: goto label_3afcb0;
        case 0x3afcb4u: goto label_3afcb4;
        case 0x3afcb8u: goto label_3afcb8;
        case 0x3afcbcu: goto label_3afcbc;
        case 0x3afcc0u: goto label_3afcc0;
        case 0x3afcc4u: goto label_3afcc4;
        case 0x3afcc8u: goto label_3afcc8;
        case 0x3afcccu: goto label_3afccc;
        case 0x3afcd0u: goto label_3afcd0;
        case 0x3afcd4u: goto label_3afcd4;
        case 0x3afcd8u: goto label_3afcd8;
        case 0x3afcdcu: goto label_3afcdc;
        case 0x3afce0u: goto label_3afce0;
        case 0x3afce4u: goto label_3afce4;
        case 0x3afce8u: goto label_3afce8;
        case 0x3afcecu: goto label_3afcec;
        case 0x3afcf0u: goto label_3afcf0;
        case 0x3afcf4u: goto label_3afcf4;
        case 0x3afcf8u: goto label_3afcf8;
        case 0x3afcfcu: goto label_3afcfc;
        case 0x3afd00u: goto label_3afd00;
        case 0x3afd04u: goto label_3afd04;
        case 0x3afd08u: goto label_3afd08;
        case 0x3afd0cu: goto label_3afd0c;
        case 0x3afd10u: goto label_3afd10;
        case 0x3afd14u: goto label_3afd14;
        case 0x3afd18u: goto label_3afd18;
        case 0x3afd1cu: goto label_3afd1c;
        case 0x3afd20u: goto label_3afd20;
        case 0x3afd24u: goto label_3afd24;
        case 0x3afd28u: goto label_3afd28;
        case 0x3afd2cu: goto label_3afd2c;
        case 0x3afd30u: goto label_3afd30;
        case 0x3afd34u: goto label_3afd34;
        case 0x3afd38u: goto label_3afd38;
        case 0x3afd3cu: goto label_3afd3c;
        case 0x3afd40u: goto label_3afd40;
        case 0x3afd44u: goto label_3afd44;
        case 0x3afd48u: goto label_3afd48;
        case 0x3afd4cu: goto label_3afd4c;
        case 0x3afd50u: goto label_3afd50;
        case 0x3afd54u: goto label_3afd54;
        case 0x3afd58u: goto label_3afd58;
        case 0x3afd5cu: goto label_3afd5c;
        case 0x3afd60u: goto label_3afd60;
        case 0x3afd64u: goto label_3afd64;
        case 0x3afd68u: goto label_3afd68;
        case 0x3afd6cu: goto label_3afd6c;
        case 0x3afd70u: goto label_3afd70;
        case 0x3afd74u: goto label_3afd74;
        case 0x3afd78u: goto label_3afd78;
        case 0x3afd7cu: goto label_3afd7c;
        case 0x3afd80u: goto label_3afd80;
        case 0x3afd84u: goto label_3afd84;
        case 0x3afd88u: goto label_3afd88;
        case 0x3afd8cu: goto label_3afd8c;
        case 0x3afd90u: goto label_3afd90;
        case 0x3afd94u: goto label_3afd94;
        case 0x3afd98u: goto label_3afd98;
        case 0x3afd9cu: goto label_3afd9c;
        case 0x3afda0u: goto label_3afda0;
        case 0x3afda4u: goto label_3afda4;
        case 0x3afda8u: goto label_3afda8;
        case 0x3afdacu: goto label_3afdac;
        case 0x3afdb0u: goto label_3afdb0;
        case 0x3afdb4u: goto label_3afdb4;
        case 0x3afdb8u: goto label_3afdb8;
        case 0x3afdbcu: goto label_3afdbc;
        case 0x3afdc0u: goto label_3afdc0;
        case 0x3afdc4u: goto label_3afdc4;
        case 0x3afdc8u: goto label_3afdc8;
        case 0x3afdccu: goto label_3afdcc;
        case 0x3afdd0u: goto label_3afdd0;
        case 0x3afdd4u: goto label_3afdd4;
        case 0x3afdd8u: goto label_3afdd8;
        case 0x3afddcu: goto label_3afddc;
        case 0x3afde0u: goto label_3afde0;
        case 0x3afde4u: goto label_3afde4;
        case 0x3afde8u: goto label_3afde8;
        case 0x3afdecu: goto label_3afdec;
        case 0x3afdf0u: goto label_3afdf0;
        case 0x3afdf4u: goto label_3afdf4;
        case 0x3afdf8u: goto label_3afdf8;
        case 0x3afdfcu: goto label_3afdfc;
        case 0x3afe00u: goto label_3afe00;
        case 0x3afe04u: goto label_3afe04;
        case 0x3afe08u: goto label_3afe08;
        case 0x3afe0cu: goto label_3afe0c;
        case 0x3afe10u: goto label_3afe10;
        case 0x3afe14u: goto label_3afe14;
        case 0x3afe18u: goto label_3afe18;
        case 0x3afe1cu: goto label_3afe1c;
        case 0x3afe20u: goto label_3afe20;
        case 0x3afe24u: goto label_3afe24;
        case 0x3afe28u: goto label_3afe28;
        case 0x3afe2cu: goto label_3afe2c;
        case 0x3afe30u: goto label_3afe30;
        case 0x3afe34u: goto label_3afe34;
        case 0x3afe38u: goto label_3afe38;
        case 0x3afe3cu: goto label_3afe3c;
        case 0x3afe40u: goto label_3afe40;
        case 0x3afe44u: goto label_3afe44;
        case 0x3afe48u: goto label_3afe48;
        case 0x3afe4cu: goto label_3afe4c;
        case 0x3afe50u: goto label_3afe50;
        case 0x3afe54u: goto label_3afe54;
        case 0x3afe58u: goto label_3afe58;
        case 0x3afe5cu: goto label_3afe5c;
        case 0x3afe60u: goto label_3afe60;
        case 0x3afe64u: goto label_3afe64;
        case 0x3afe68u: goto label_3afe68;
        case 0x3afe6cu: goto label_3afe6c;
        case 0x3afe70u: goto label_3afe70;
        case 0x3afe74u: goto label_3afe74;
        case 0x3afe78u: goto label_3afe78;
        case 0x3afe7cu: goto label_3afe7c;
        case 0x3afe80u: goto label_3afe80;
        case 0x3afe84u: goto label_3afe84;
        case 0x3afe88u: goto label_3afe88;
        case 0x3afe8cu: goto label_3afe8c;
        case 0x3afe90u: goto label_3afe90;
        case 0x3afe94u: goto label_3afe94;
        case 0x3afe98u: goto label_3afe98;
        case 0x3afe9cu: goto label_3afe9c;
        case 0x3afea0u: goto label_3afea0;
        case 0x3afea4u: goto label_3afea4;
        case 0x3afea8u: goto label_3afea8;
        case 0x3afeacu: goto label_3afeac;
        case 0x3afeb0u: goto label_3afeb0;
        case 0x3afeb4u: goto label_3afeb4;
        case 0x3afeb8u: goto label_3afeb8;
        case 0x3afebcu: goto label_3afebc;
        case 0x3afec0u: goto label_3afec0;
        case 0x3afec4u: goto label_3afec4;
        case 0x3afec8u: goto label_3afec8;
        case 0x3afeccu: goto label_3afecc;
        case 0x3afed0u: goto label_3afed0;
        case 0x3afed4u: goto label_3afed4;
        case 0x3afed8u: goto label_3afed8;
        case 0x3afedcu: goto label_3afedc;
        case 0x3afee0u: goto label_3afee0;
        case 0x3afee4u: goto label_3afee4;
        case 0x3afee8u: goto label_3afee8;
        case 0x3afeecu: goto label_3afeec;
        case 0x3afef0u: goto label_3afef0;
        case 0x3afef4u: goto label_3afef4;
        case 0x3afef8u: goto label_3afef8;
        case 0x3afefcu: goto label_3afefc;
        case 0x3aff00u: goto label_3aff00;
        case 0x3aff04u: goto label_3aff04;
        case 0x3aff08u: goto label_3aff08;
        case 0x3aff0cu: goto label_3aff0c;
        case 0x3aff10u: goto label_3aff10;
        case 0x3aff14u: goto label_3aff14;
        case 0x3aff18u: goto label_3aff18;
        case 0x3aff1cu: goto label_3aff1c;
        case 0x3aff20u: goto label_3aff20;
        case 0x3aff24u: goto label_3aff24;
        case 0x3aff28u: goto label_3aff28;
        case 0x3aff2cu: goto label_3aff2c;
        case 0x3aff30u: goto label_3aff30;
        case 0x3aff34u: goto label_3aff34;
        case 0x3aff38u: goto label_3aff38;
        case 0x3aff3cu: goto label_3aff3c;
        case 0x3aff40u: goto label_3aff40;
        case 0x3aff44u: goto label_3aff44;
        case 0x3aff48u: goto label_3aff48;
        case 0x3aff4cu: goto label_3aff4c;
        case 0x3aff50u: goto label_3aff50;
        case 0x3aff54u: goto label_3aff54;
        case 0x3aff58u: goto label_3aff58;
        case 0x3aff5cu: goto label_3aff5c;
        case 0x3aff60u: goto label_3aff60;
        case 0x3aff64u: goto label_3aff64;
        case 0x3aff68u: goto label_3aff68;
        case 0x3aff6cu: goto label_3aff6c;
        case 0x3aff70u: goto label_3aff70;
        case 0x3aff74u: goto label_3aff74;
        case 0x3aff78u: goto label_3aff78;
        case 0x3aff7cu: goto label_3aff7c;
        case 0x3aff80u: goto label_3aff80;
        case 0x3aff84u: goto label_3aff84;
        case 0x3aff88u: goto label_3aff88;
        case 0x3aff8cu: goto label_3aff8c;
        case 0x3aff90u: goto label_3aff90;
        case 0x3aff94u: goto label_3aff94;
        case 0x3aff98u: goto label_3aff98;
        case 0x3aff9cu: goto label_3aff9c;
        case 0x3affa0u: goto label_3affa0;
        case 0x3affa4u: goto label_3affa4;
        case 0x3affa8u: goto label_3affa8;
        case 0x3affacu: goto label_3affac;
        case 0x3affb0u: goto label_3affb0;
        case 0x3affb4u: goto label_3affb4;
        case 0x3affb8u: goto label_3affb8;
        case 0x3affbcu: goto label_3affbc;
        case 0x3affc0u: goto label_3affc0;
        case 0x3affc4u: goto label_3affc4;
        case 0x3affc8u: goto label_3affc8;
        case 0x3affccu: goto label_3affcc;
        case 0x3affd0u: goto label_3affd0;
        case 0x3affd4u: goto label_3affd4;
        case 0x3affd8u: goto label_3affd8;
        case 0x3affdcu: goto label_3affdc;
        case 0x3affe0u: goto label_3affe0;
        case 0x3affe4u: goto label_3affe4;
        case 0x3affe8u: goto label_3affe8;
        case 0x3affecu: goto label_3affec;
        case 0x3afff0u: goto label_3afff0;
        case 0x3afff4u: goto label_3afff4;
        case 0x3afff8u: goto label_3afff8;
        case 0x3afffcu: goto label_3afffc;
        case 0x3b0000u: goto label_3b0000;
        case 0x3b0004u: goto label_3b0004;
        case 0x3b0008u: goto label_3b0008;
        case 0x3b000cu: goto label_3b000c;
        case 0x3b0010u: goto label_3b0010;
        case 0x3b0014u: goto label_3b0014;
        case 0x3b0018u: goto label_3b0018;
        case 0x3b001cu: goto label_3b001c;
        case 0x3b0020u: goto label_3b0020;
        case 0x3b0024u: goto label_3b0024;
        case 0x3b0028u: goto label_3b0028;
        case 0x3b002cu: goto label_3b002c;
        case 0x3b0030u: goto label_3b0030;
        case 0x3b0034u: goto label_3b0034;
        case 0x3b0038u: goto label_3b0038;
        case 0x3b003cu: goto label_3b003c;
        case 0x3b0040u: goto label_3b0040;
        case 0x3b0044u: goto label_3b0044;
        case 0x3b0048u: goto label_3b0048;
        case 0x3b004cu: goto label_3b004c;
        case 0x3b0050u: goto label_3b0050;
        case 0x3b0054u: goto label_3b0054;
        case 0x3b0058u: goto label_3b0058;
        case 0x3b005cu: goto label_3b005c;
        case 0x3b0060u: goto label_3b0060;
        case 0x3b0064u: goto label_3b0064;
        case 0x3b0068u: goto label_3b0068;
        case 0x3b006cu: goto label_3b006c;
        case 0x3b0070u: goto label_3b0070;
        case 0x3b0074u: goto label_3b0074;
        case 0x3b0078u: goto label_3b0078;
        case 0x3b007cu: goto label_3b007c;
        case 0x3b0080u: goto label_3b0080;
        case 0x3b0084u: goto label_3b0084;
        case 0x3b0088u: goto label_3b0088;
        case 0x3b008cu: goto label_3b008c;
        case 0x3b0090u: goto label_3b0090;
        case 0x3b0094u: goto label_3b0094;
        case 0x3b0098u: goto label_3b0098;
        case 0x3b009cu: goto label_3b009c;
        case 0x3b00a0u: goto label_3b00a0;
        case 0x3b00a4u: goto label_3b00a4;
        case 0x3b00a8u: goto label_3b00a8;
        case 0x3b00acu: goto label_3b00ac;
        case 0x3b00b0u: goto label_3b00b0;
        case 0x3b00b4u: goto label_3b00b4;
        case 0x3b00b8u: goto label_3b00b8;
        case 0x3b00bcu: goto label_3b00bc;
        case 0x3b00c0u: goto label_3b00c0;
        case 0x3b00c4u: goto label_3b00c4;
        case 0x3b00c8u: goto label_3b00c8;
        case 0x3b00ccu: goto label_3b00cc;
        case 0x3b00d0u: goto label_3b00d0;
        case 0x3b00d4u: goto label_3b00d4;
        case 0x3b00d8u: goto label_3b00d8;
        case 0x3b00dcu: goto label_3b00dc;
        case 0x3b00e0u: goto label_3b00e0;
        case 0x3b00e4u: goto label_3b00e4;
        case 0x3b00e8u: goto label_3b00e8;
        case 0x3b00ecu: goto label_3b00ec;
        case 0x3b00f0u: goto label_3b00f0;
        case 0x3b00f4u: goto label_3b00f4;
        case 0x3b00f8u: goto label_3b00f8;
        case 0x3b00fcu: goto label_3b00fc;
        case 0x3b0100u: goto label_3b0100;
        case 0x3b0104u: goto label_3b0104;
        case 0x3b0108u: goto label_3b0108;
        case 0x3b010cu: goto label_3b010c;
        case 0x3b0110u: goto label_3b0110;
        case 0x3b0114u: goto label_3b0114;
        case 0x3b0118u: goto label_3b0118;
        case 0x3b011cu: goto label_3b011c;
        case 0x3b0120u: goto label_3b0120;
        case 0x3b0124u: goto label_3b0124;
        case 0x3b0128u: goto label_3b0128;
        case 0x3b012cu: goto label_3b012c;
        case 0x3b0130u: goto label_3b0130;
        case 0x3b0134u: goto label_3b0134;
        case 0x3b0138u: goto label_3b0138;
        case 0x3b013cu: goto label_3b013c;
        case 0x3b0140u: goto label_3b0140;
        case 0x3b0144u: goto label_3b0144;
        case 0x3b0148u: goto label_3b0148;
        case 0x3b014cu: goto label_3b014c;
        case 0x3b0150u: goto label_3b0150;
        case 0x3b0154u: goto label_3b0154;
        case 0x3b0158u: goto label_3b0158;
        case 0x3b015cu: goto label_3b015c;
        case 0x3b0160u: goto label_3b0160;
        case 0x3b0164u: goto label_3b0164;
        case 0x3b0168u: goto label_3b0168;
        case 0x3b016cu: goto label_3b016c;
        case 0x3b0170u: goto label_3b0170;
        case 0x3b0174u: goto label_3b0174;
        case 0x3b0178u: goto label_3b0178;
        case 0x3b017cu: goto label_3b017c;
        case 0x3b0180u: goto label_3b0180;
        case 0x3b0184u: goto label_3b0184;
        case 0x3b0188u: goto label_3b0188;
        case 0x3b018cu: goto label_3b018c;
        case 0x3b0190u: goto label_3b0190;
        case 0x3b0194u: goto label_3b0194;
        case 0x3b0198u: goto label_3b0198;
        case 0x3b019cu: goto label_3b019c;
        case 0x3b01a0u: goto label_3b01a0;
        case 0x3b01a4u: goto label_3b01a4;
        case 0x3b01a8u: goto label_3b01a8;
        case 0x3b01acu: goto label_3b01ac;
        case 0x3b01b0u: goto label_3b01b0;
        case 0x3b01b4u: goto label_3b01b4;
        case 0x3b01b8u: goto label_3b01b8;
        case 0x3b01bcu: goto label_3b01bc;
        case 0x3b01c0u: goto label_3b01c0;
        case 0x3b01c4u: goto label_3b01c4;
        case 0x3b01c8u: goto label_3b01c8;
        case 0x3b01ccu: goto label_3b01cc;
        case 0x3b01d0u: goto label_3b01d0;
        case 0x3b01d4u: goto label_3b01d4;
        case 0x3b01d8u: goto label_3b01d8;
        case 0x3b01dcu: goto label_3b01dc;
        case 0x3b01e0u: goto label_3b01e0;
        case 0x3b01e4u: goto label_3b01e4;
        case 0x3b01e8u: goto label_3b01e8;
        case 0x3b01ecu: goto label_3b01ec;
        case 0x3b01f0u: goto label_3b01f0;
        case 0x3b01f4u: goto label_3b01f4;
        case 0x3b01f8u: goto label_3b01f8;
        case 0x3b01fcu: goto label_3b01fc;
        case 0x3b0200u: goto label_3b0200;
        case 0x3b0204u: goto label_3b0204;
        case 0x3b0208u: goto label_3b0208;
        case 0x3b020cu: goto label_3b020c;
        case 0x3b0210u: goto label_3b0210;
        case 0x3b0214u: goto label_3b0214;
        case 0x3b0218u: goto label_3b0218;
        case 0x3b021cu: goto label_3b021c;
        case 0x3b0220u: goto label_3b0220;
        case 0x3b0224u: goto label_3b0224;
        case 0x3b0228u: goto label_3b0228;
        case 0x3b022cu: goto label_3b022c;
        case 0x3b0230u: goto label_3b0230;
        case 0x3b0234u: goto label_3b0234;
        case 0x3b0238u: goto label_3b0238;
        case 0x3b023cu: goto label_3b023c;
        case 0x3b0240u: goto label_3b0240;
        case 0x3b0244u: goto label_3b0244;
        case 0x3b0248u: goto label_3b0248;
        case 0x3b024cu: goto label_3b024c;
        case 0x3b0250u: goto label_3b0250;
        case 0x3b0254u: goto label_3b0254;
        case 0x3b0258u: goto label_3b0258;
        case 0x3b025cu: goto label_3b025c;
        case 0x3b0260u: goto label_3b0260;
        case 0x3b0264u: goto label_3b0264;
        case 0x3b0268u: goto label_3b0268;
        case 0x3b026cu: goto label_3b026c;
        case 0x3b0270u: goto label_3b0270;
        case 0x3b0274u: goto label_3b0274;
        case 0x3b0278u: goto label_3b0278;
        case 0x3b027cu: goto label_3b027c;
        case 0x3b0280u: goto label_3b0280;
        case 0x3b0284u: goto label_3b0284;
        case 0x3b0288u: goto label_3b0288;
        case 0x3b028cu: goto label_3b028c;
        case 0x3b0290u: goto label_3b0290;
        case 0x3b0294u: goto label_3b0294;
        case 0x3b0298u: goto label_3b0298;
        case 0x3b029cu: goto label_3b029c;
        case 0x3b02a0u: goto label_3b02a0;
        case 0x3b02a4u: goto label_3b02a4;
        case 0x3b02a8u: goto label_3b02a8;
        case 0x3b02acu: goto label_3b02ac;
        case 0x3b02b0u: goto label_3b02b0;
        case 0x3b02b4u: goto label_3b02b4;
        case 0x3b02b8u: goto label_3b02b8;
        case 0x3b02bcu: goto label_3b02bc;
        case 0x3b02c0u: goto label_3b02c0;
        case 0x3b02c4u: goto label_3b02c4;
        case 0x3b02c8u: goto label_3b02c8;
        case 0x3b02ccu: goto label_3b02cc;
        case 0x3b02d0u: goto label_3b02d0;
        case 0x3b02d4u: goto label_3b02d4;
        case 0x3b02d8u: goto label_3b02d8;
        case 0x3b02dcu: goto label_3b02dc;
        case 0x3b02e0u: goto label_3b02e0;
        case 0x3b02e4u: goto label_3b02e4;
        case 0x3b02e8u: goto label_3b02e8;
        case 0x3b02ecu: goto label_3b02ec;
        case 0x3b02f0u: goto label_3b02f0;
        case 0x3b02f4u: goto label_3b02f4;
        case 0x3b02f8u: goto label_3b02f8;
        case 0x3b02fcu: goto label_3b02fc;
        case 0x3b0300u: goto label_3b0300;
        case 0x3b0304u: goto label_3b0304;
        case 0x3b0308u: goto label_3b0308;
        case 0x3b030cu: goto label_3b030c;
        case 0x3b0310u: goto label_3b0310;
        case 0x3b0314u: goto label_3b0314;
        case 0x3b0318u: goto label_3b0318;
        case 0x3b031cu: goto label_3b031c;
        case 0x3b0320u: goto label_3b0320;
        case 0x3b0324u: goto label_3b0324;
        case 0x3b0328u: goto label_3b0328;
        case 0x3b032cu: goto label_3b032c;
        case 0x3b0330u: goto label_3b0330;
        case 0x3b0334u: goto label_3b0334;
        case 0x3b0338u: goto label_3b0338;
        case 0x3b033cu: goto label_3b033c;
        case 0x3b0340u: goto label_3b0340;
        case 0x3b0344u: goto label_3b0344;
        case 0x3b0348u: goto label_3b0348;
        case 0x3b034cu: goto label_3b034c;
        case 0x3b0350u: goto label_3b0350;
        case 0x3b0354u: goto label_3b0354;
        case 0x3b0358u: goto label_3b0358;
        case 0x3b035cu: goto label_3b035c;
        case 0x3b0360u: goto label_3b0360;
        case 0x3b0364u: goto label_3b0364;
        case 0x3b0368u: goto label_3b0368;
        case 0x3b036cu: goto label_3b036c;
        case 0x3b0370u: goto label_3b0370;
        case 0x3b0374u: goto label_3b0374;
        case 0x3b0378u: goto label_3b0378;
        case 0x3b037cu: goto label_3b037c;
        case 0x3b0380u: goto label_3b0380;
        case 0x3b0384u: goto label_3b0384;
        case 0x3b0388u: goto label_3b0388;
        case 0x3b038cu: goto label_3b038c;
        case 0x3b0390u: goto label_3b0390;
        case 0x3b0394u: goto label_3b0394;
        case 0x3b0398u: goto label_3b0398;
        case 0x3b039cu: goto label_3b039c;
        case 0x3b03a0u: goto label_3b03a0;
        case 0x3b03a4u: goto label_3b03a4;
        case 0x3b03a8u: goto label_3b03a8;
        case 0x3b03acu: goto label_3b03ac;
        case 0x3b03b0u: goto label_3b03b0;
        case 0x3b03b4u: goto label_3b03b4;
        case 0x3b03b8u: goto label_3b03b8;
        case 0x3b03bcu: goto label_3b03bc;
        case 0x3b03c0u: goto label_3b03c0;
        case 0x3b03c4u: goto label_3b03c4;
        case 0x3b03c8u: goto label_3b03c8;
        case 0x3b03ccu: goto label_3b03cc;
        case 0x3b03d0u: goto label_3b03d0;
        case 0x3b03d4u: goto label_3b03d4;
        case 0x3b03d8u: goto label_3b03d8;
        case 0x3b03dcu: goto label_3b03dc;
        case 0x3b03e0u: goto label_3b03e0;
        case 0x3b03e4u: goto label_3b03e4;
        case 0x3b03e8u: goto label_3b03e8;
        case 0x3b03ecu: goto label_3b03ec;
        case 0x3b03f0u: goto label_3b03f0;
        case 0x3b03f4u: goto label_3b03f4;
        case 0x3b03f8u: goto label_3b03f8;
        case 0x3b03fcu: goto label_3b03fc;
        case 0x3b0400u: goto label_3b0400;
        case 0x3b0404u: goto label_3b0404;
        case 0x3b0408u: goto label_3b0408;
        case 0x3b040cu: goto label_3b040c;
        case 0x3b0410u: goto label_3b0410;
        case 0x3b0414u: goto label_3b0414;
        case 0x3b0418u: goto label_3b0418;
        case 0x3b041cu: goto label_3b041c;
        case 0x3b0420u: goto label_3b0420;
        case 0x3b0424u: goto label_3b0424;
        case 0x3b0428u: goto label_3b0428;
        case 0x3b042cu: goto label_3b042c;
        case 0x3b0430u: goto label_3b0430;
        case 0x3b0434u: goto label_3b0434;
        case 0x3b0438u: goto label_3b0438;
        case 0x3b043cu: goto label_3b043c;
        case 0x3b0440u: goto label_3b0440;
        case 0x3b0444u: goto label_3b0444;
        case 0x3b0448u: goto label_3b0448;
        case 0x3b044cu: goto label_3b044c;
        case 0x3b0450u: goto label_3b0450;
        case 0x3b0454u: goto label_3b0454;
        case 0x3b0458u: goto label_3b0458;
        case 0x3b045cu: goto label_3b045c;
        case 0x3b0460u: goto label_3b0460;
        case 0x3b0464u: goto label_3b0464;
        case 0x3b0468u: goto label_3b0468;
        case 0x3b046cu: goto label_3b046c;
        case 0x3b0470u: goto label_3b0470;
        case 0x3b0474u: goto label_3b0474;
        case 0x3b0478u: goto label_3b0478;
        case 0x3b047cu: goto label_3b047c;
        case 0x3b0480u: goto label_3b0480;
        case 0x3b0484u: goto label_3b0484;
        case 0x3b0488u: goto label_3b0488;
        case 0x3b048cu: goto label_3b048c;
        case 0x3b0490u: goto label_3b0490;
        case 0x3b0494u: goto label_3b0494;
        case 0x3b0498u: goto label_3b0498;
        case 0x3b049cu: goto label_3b049c;
        case 0x3b04a0u: goto label_3b04a0;
        case 0x3b04a4u: goto label_3b04a4;
        case 0x3b04a8u: goto label_3b04a8;
        case 0x3b04acu: goto label_3b04ac;
        case 0x3b04b0u: goto label_3b04b0;
        case 0x3b04b4u: goto label_3b04b4;
        case 0x3b04b8u: goto label_3b04b8;
        case 0x3b04bcu: goto label_3b04bc;
        case 0x3b04c0u: goto label_3b04c0;
        case 0x3b04c4u: goto label_3b04c4;
        case 0x3b04c8u: goto label_3b04c8;
        case 0x3b04ccu: goto label_3b04cc;
        case 0x3b04d0u: goto label_3b04d0;
        case 0x3b04d4u: goto label_3b04d4;
        case 0x3b04d8u: goto label_3b04d8;
        case 0x3b04dcu: goto label_3b04dc;
        case 0x3b04e0u: goto label_3b04e0;
        case 0x3b04e4u: goto label_3b04e4;
        case 0x3b04e8u: goto label_3b04e8;
        case 0x3b04ecu: goto label_3b04ec;
        case 0x3b04f0u: goto label_3b04f0;
        case 0x3b04f4u: goto label_3b04f4;
        case 0x3b04f8u: goto label_3b04f8;
        case 0x3b04fcu: goto label_3b04fc;
        case 0x3b0500u: goto label_3b0500;
        case 0x3b0504u: goto label_3b0504;
        case 0x3b0508u: goto label_3b0508;
        case 0x3b050cu: goto label_3b050c;
        case 0x3b0510u: goto label_3b0510;
        case 0x3b0514u: goto label_3b0514;
        case 0x3b0518u: goto label_3b0518;
        case 0x3b051cu: goto label_3b051c;
        case 0x3b0520u: goto label_3b0520;
        case 0x3b0524u: goto label_3b0524;
        case 0x3b0528u: goto label_3b0528;
        case 0x3b052cu: goto label_3b052c;
        case 0x3b0530u: goto label_3b0530;
        case 0x3b0534u: goto label_3b0534;
        case 0x3b0538u: goto label_3b0538;
        case 0x3b053cu: goto label_3b053c;
        case 0x3b0540u: goto label_3b0540;
        case 0x3b0544u: goto label_3b0544;
        case 0x3b0548u: goto label_3b0548;
        case 0x3b054cu: goto label_3b054c;
        case 0x3b0550u: goto label_3b0550;
        case 0x3b0554u: goto label_3b0554;
        case 0x3b0558u: goto label_3b0558;
        case 0x3b055cu: goto label_3b055c;
        case 0x3b0560u: goto label_3b0560;
        case 0x3b0564u: goto label_3b0564;
        case 0x3b0568u: goto label_3b0568;
        case 0x3b056cu: goto label_3b056c;
        case 0x3b0570u: goto label_3b0570;
        case 0x3b0574u: goto label_3b0574;
        case 0x3b0578u: goto label_3b0578;
        case 0x3b057cu: goto label_3b057c;
        case 0x3b0580u: goto label_3b0580;
        case 0x3b0584u: goto label_3b0584;
        case 0x3b0588u: goto label_3b0588;
        case 0x3b058cu: goto label_3b058c;
        case 0x3b0590u: goto label_3b0590;
        case 0x3b0594u: goto label_3b0594;
        case 0x3b0598u: goto label_3b0598;
        case 0x3b059cu: goto label_3b059c;
        case 0x3b05a0u: goto label_3b05a0;
        case 0x3b05a4u: goto label_3b05a4;
        case 0x3b05a8u: goto label_3b05a8;
        case 0x3b05acu: goto label_3b05ac;
        case 0x3b05b0u: goto label_3b05b0;
        case 0x3b05b4u: goto label_3b05b4;
        case 0x3b05b8u: goto label_3b05b8;
        case 0x3b05bcu: goto label_3b05bc;
        case 0x3b05c0u: goto label_3b05c0;
        case 0x3b05c4u: goto label_3b05c4;
        case 0x3b05c8u: goto label_3b05c8;
        case 0x3b05ccu: goto label_3b05cc;
        case 0x3b05d0u: goto label_3b05d0;
        case 0x3b05d4u: goto label_3b05d4;
        case 0x3b05d8u: goto label_3b05d8;
        case 0x3b05dcu: goto label_3b05dc;
        case 0x3b05e0u: goto label_3b05e0;
        case 0x3b05e4u: goto label_3b05e4;
        case 0x3b05e8u: goto label_3b05e8;
        case 0x3b05ecu: goto label_3b05ec;
        case 0x3b05f0u: goto label_3b05f0;
        case 0x3b05f4u: goto label_3b05f4;
        case 0x3b05f8u: goto label_3b05f8;
        case 0x3b05fcu: goto label_3b05fc;
        case 0x3b0600u: goto label_3b0600;
        case 0x3b0604u: goto label_3b0604;
        case 0x3b0608u: goto label_3b0608;
        case 0x3b060cu: goto label_3b060c;
        case 0x3b0610u: goto label_3b0610;
        case 0x3b0614u: goto label_3b0614;
        case 0x3b0618u: goto label_3b0618;
        case 0x3b061cu: goto label_3b061c;
        case 0x3b0620u: goto label_3b0620;
        case 0x3b0624u: goto label_3b0624;
        case 0x3b0628u: goto label_3b0628;
        case 0x3b062cu: goto label_3b062c;
        case 0x3b0630u: goto label_3b0630;
        case 0x3b0634u: goto label_3b0634;
        case 0x3b0638u: goto label_3b0638;
        case 0x3b063cu: goto label_3b063c;
        case 0x3b0640u: goto label_3b0640;
        case 0x3b0644u: goto label_3b0644;
        case 0x3b0648u: goto label_3b0648;
        case 0x3b064cu: goto label_3b064c;
        case 0x3b0650u: goto label_3b0650;
        case 0x3b0654u: goto label_3b0654;
        case 0x3b0658u: goto label_3b0658;
        case 0x3b065cu: goto label_3b065c;
        case 0x3b0660u: goto label_3b0660;
        case 0x3b0664u: goto label_3b0664;
        case 0x3b0668u: goto label_3b0668;
        case 0x3b066cu: goto label_3b066c;
        case 0x3b0670u: goto label_3b0670;
        case 0x3b0674u: goto label_3b0674;
        case 0x3b0678u: goto label_3b0678;
        case 0x3b067cu: goto label_3b067c;
        case 0x3b0680u: goto label_3b0680;
        case 0x3b0684u: goto label_3b0684;
        case 0x3b0688u: goto label_3b0688;
        case 0x3b068cu: goto label_3b068c;
        case 0x3b0690u: goto label_3b0690;
        case 0x3b0694u: goto label_3b0694;
        case 0x3b0698u: goto label_3b0698;
        case 0x3b069cu: goto label_3b069c;
        case 0x3b06a0u: goto label_3b06a0;
        case 0x3b06a4u: goto label_3b06a4;
        case 0x3b06a8u: goto label_3b06a8;
        case 0x3b06acu: goto label_3b06ac;
        case 0x3b06b0u: goto label_3b06b0;
        case 0x3b06b4u: goto label_3b06b4;
        case 0x3b06b8u: goto label_3b06b8;
        case 0x3b06bcu: goto label_3b06bc;
        case 0x3b06c0u: goto label_3b06c0;
        case 0x3b06c4u: goto label_3b06c4;
        case 0x3b06c8u: goto label_3b06c8;
        case 0x3b06ccu: goto label_3b06cc;
        case 0x3b06d0u: goto label_3b06d0;
        case 0x3b06d4u: goto label_3b06d4;
        case 0x3b06d8u: goto label_3b06d8;
        case 0x3b06dcu: goto label_3b06dc;
        case 0x3b06e0u: goto label_3b06e0;
        case 0x3b06e4u: goto label_3b06e4;
        case 0x3b06e8u: goto label_3b06e8;
        case 0x3b06ecu: goto label_3b06ec;
        case 0x3b06f0u: goto label_3b06f0;
        case 0x3b06f4u: goto label_3b06f4;
        case 0x3b06f8u: goto label_3b06f8;
        case 0x3b06fcu: goto label_3b06fc;
        case 0x3b0700u: goto label_3b0700;
        case 0x3b0704u: goto label_3b0704;
        case 0x3b0708u: goto label_3b0708;
        case 0x3b070cu: goto label_3b070c;
        case 0x3b0710u: goto label_3b0710;
        case 0x3b0714u: goto label_3b0714;
        case 0x3b0718u: goto label_3b0718;
        case 0x3b071cu: goto label_3b071c;
        case 0x3b0720u: goto label_3b0720;
        case 0x3b0724u: goto label_3b0724;
        case 0x3b0728u: goto label_3b0728;
        case 0x3b072cu: goto label_3b072c;
        case 0x3b0730u: goto label_3b0730;
        case 0x3b0734u: goto label_3b0734;
        case 0x3b0738u: goto label_3b0738;
        case 0x3b073cu: goto label_3b073c;
        case 0x3b0740u: goto label_3b0740;
        case 0x3b0744u: goto label_3b0744;
        case 0x3b0748u: goto label_3b0748;
        case 0x3b074cu: goto label_3b074c;
        case 0x3b0750u: goto label_3b0750;
        case 0x3b0754u: goto label_3b0754;
        case 0x3b0758u: goto label_3b0758;
        case 0x3b075cu: goto label_3b075c;
        case 0x3b0760u: goto label_3b0760;
        case 0x3b0764u: goto label_3b0764;
        case 0x3b0768u: goto label_3b0768;
        case 0x3b076cu: goto label_3b076c;
        case 0x3b0770u: goto label_3b0770;
        case 0x3b0774u: goto label_3b0774;
        case 0x3b0778u: goto label_3b0778;
        case 0x3b077cu: goto label_3b077c;
        case 0x3b0780u: goto label_3b0780;
        case 0x3b0784u: goto label_3b0784;
        case 0x3b0788u: goto label_3b0788;
        case 0x3b078cu: goto label_3b078c;
        case 0x3b0790u: goto label_3b0790;
        case 0x3b0794u: goto label_3b0794;
        case 0x3b0798u: goto label_3b0798;
        case 0x3b079cu: goto label_3b079c;
        case 0x3b07a0u: goto label_3b07a0;
        case 0x3b07a4u: goto label_3b07a4;
        case 0x3b07a8u: goto label_3b07a8;
        case 0x3b07acu: goto label_3b07ac;
        case 0x3b07b0u: goto label_3b07b0;
        case 0x3b07b4u: goto label_3b07b4;
        case 0x3b07b8u: goto label_3b07b8;
        case 0x3b07bcu: goto label_3b07bc;
        case 0x3b07c0u: goto label_3b07c0;
        case 0x3b07c4u: goto label_3b07c4;
        case 0x3b07c8u: goto label_3b07c8;
        case 0x3b07ccu: goto label_3b07cc;
        case 0x3b07d0u: goto label_3b07d0;
        case 0x3b07d4u: goto label_3b07d4;
        case 0x3b07d8u: goto label_3b07d8;
        case 0x3b07dcu: goto label_3b07dc;
        case 0x3b07e0u: goto label_3b07e0;
        case 0x3b07e4u: goto label_3b07e4;
        case 0x3b07e8u: goto label_3b07e8;
        case 0x3b07ecu: goto label_3b07ec;
        case 0x3b07f0u: goto label_3b07f0;
        case 0x3b07f4u: goto label_3b07f4;
        case 0x3b07f8u: goto label_3b07f8;
        case 0x3b07fcu: goto label_3b07fc;
        case 0x3b0800u: goto label_3b0800;
        case 0x3b0804u: goto label_3b0804;
        case 0x3b0808u: goto label_3b0808;
        case 0x3b080cu: goto label_3b080c;
        case 0x3b0810u: goto label_3b0810;
        case 0x3b0814u: goto label_3b0814;
        case 0x3b0818u: goto label_3b0818;
        case 0x3b081cu: goto label_3b081c;
        case 0x3b0820u: goto label_3b0820;
        case 0x3b0824u: goto label_3b0824;
        case 0x3b0828u: goto label_3b0828;
        case 0x3b082cu: goto label_3b082c;
        case 0x3b0830u: goto label_3b0830;
        case 0x3b0834u: goto label_3b0834;
        case 0x3b0838u: goto label_3b0838;
        case 0x3b083cu: goto label_3b083c;
        case 0x3b0840u: goto label_3b0840;
        case 0x3b0844u: goto label_3b0844;
        case 0x3b0848u: goto label_3b0848;
        case 0x3b084cu: goto label_3b084c;
        case 0x3b0850u: goto label_3b0850;
        case 0x3b0854u: goto label_3b0854;
        case 0x3b0858u: goto label_3b0858;
        case 0x3b085cu: goto label_3b085c;
        case 0x3b0860u: goto label_3b0860;
        case 0x3b0864u: goto label_3b0864;
        case 0x3b0868u: goto label_3b0868;
        case 0x3b086cu: goto label_3b086c;
        case 0x3b0870u: goto label_3b0870;
        case 0x3b0874u: goto label_3b0874;
        case 0x3b0878u: goto label_3b0878;
        case 0x3b087cu: goto label_3b087c;
        case 0x3b0880u: goto label_3b0880;
        case 0x3b0884u: goto label_3b0884;
        case 0x3b0888u: goto label_3b0888;
        case 0x3b088cu: goto label_3b088c;
        case 0x3b0890u: goto label_3b0890;
        case 0x3b0894u: goto label_3b0894;
        case 0x3b0898u: goto label_3b0898;
        case 0x3b089cu: goto label_3b089c;
        case 0x3b08a0u: goto label_3b08a0;
        case 0x3b08a4u: goto label_3b08a4;
        case 0x3b08a8u: goto label_3b08a8;
        case 0x3b08acu: goto label_3b08ac;
        case 0x3b08b0u: goto label_3b08b0;
        case 0x3b08b4u: goto label_3b08b4;
        case 0x3b08b8u: goto label_3b08b8;
        case 0x3b08bcu: goto label_3b08bc;
        case 0x3b08c0u: goto label_3b08c0;
        case 0x3b08c4u: goto label_3b08c4;
        case 0x3b08c8u: goto label_3b08c8;
        case 0x3b08ccu: goto label_3b08cc;
        case 0x3b08d0u: goto label_3b08d0;
        case 0x3b08d4u: goto label_3b08d4;
        case 0x3b08d8u: goto label_3b08d8;
        case 0x3b08dcu: goto label_3b08dc;
        case 0x3b08e0u: goto label_3b08e0;
        case 0x3b08e4u: goto label_3b08e4;
        case 0x3b08e8u: goto label_3b08e8;
        case 0x3b08ecu: goto label_3b08ec;
        case 0x3b08f0u: goto label_3b08f0;
        case 0x3b08f4u: goto label_3b08f4;
        case 0x3b08f8u: goto label_3b08f8;
        case 0x3b08fcu: goto label_3b08fc;
        case 0x3b0900u: goto label_3b0900;
        case 0x3b0904u: goto label_3b0904;
        case 0x3b0908u: goto label_3b0908;
        case 0x3b090cu: goto label_3b090c;
        case 0x3b0910u: goto label_3b0910;
        case 0x3b0914u: goto label_3b0914;
        case 0x3b0918u: goto label_3b0918;
        case 0x3b091cu: goto label_3b091c;
        case 0x3b0920u: goto label_3b0920;
        case 0x3b0924u: goto label_3b0924;
        case 0x3b0928u: goto label_3b0928;
        case 0x3b092cu: goto label_3b092c;
        case 0x3b0930u: goto label_3b0930;
        case 0x3b0934u: goto label_3b0934;
        case 0x3b0938u: goto label_3b0938;
        case 0x3b093cu: goto label_3b093c;
        case 0x3b0940u: goto label_3b0940;
        case 0x3b0944u: goto label_3b0944;
        case 0x3b0948u: goto label_3b0948;
        case 0x3b094cu: goto label_3b094c;
        case 0x3b0950u: goto label_3b0950;
        case 0x3b0954u: goto label_3b0954;
        case 0x3b0958u: goto label_3b0958;
        case 0x3b095cu: goto label_3b095c;
        case 0x3b0960u: goto label_3b0960;
        case 0x3b0964u: goto label_3b0964;
        case 0x3b0968u: goto label_3b0968;
        case 0x3b096cu: goto label_3b096c;
        case 0x3b0970u: goto label_3b0970;
        case 0x3b0974u: goto label_3b0974;
        case 0x3b0978u: goto label_3b0978;
        case 0x3b097cu: goto label_3b097c;
        case 0x3b0980u: goto label_3b0980;
        case 0x3b0984u: goto label_3b0984;
        case 0x3b0988u: goto label_3b0988;
        case 0x3b098cu: goto label_3b098c;
        case 0x3b0990u: goto label_3b0990;
        case 0x3b0994u: goto label_3b0994;
        case 0x3b0998u: goto label_3b0998;
        case 0x3b099cu: goto label_3b099c;
        case 0x3b09a0u: goto label_3b09a0;
        case 0x3b09a4u: goto label_3b09a4;
        case 0x3b09a8u: goto label_3b09a8;
        case 0x3b09acu: goto label_3b09ac;
        case 0x3b09b0u: goto label_3b09b0;
        case 0x3b09b4u: goto label_3b09b4;
        case 0x3b09b8u: goto label_3b09b8;
        case 0x3b09bcu: goto label_3b09bc;
        case 0x3b09c0u: goto label_3b09c0;
        case 0x3b09c4u: goto label_3b09c4;
        case 0x3b09c8u: goto label_3b09c8;
        case 0x3b09ccu: goto label_3b09cc;
        case 0x3b09d0u: goto label_3b09d0;
        case 0x3b09d4u: goto label_3b09d4;
        case 0x3b09d8u: goto label_3b09d8;
        case 0x3b09dcu: goto label_3b09dc;
        case 0x3b09e0u: goto label_3b09e0;
        case 0x3b09e4u: goto label_3b09e4;
        case 0x3b09e8u: goto label_3b09e8;
        case 0x3b09ecu: goto label_3b09ec;
        case 0x3b09f0u: goto label_3b09f0;
        case 0x3b09f4u: goto label_3b09f4;
        case 0x3b09f8u: goto label_3b09f8;
        case 0x3b09fcu: goto label_3b09fc;
        case 0x3b0a00u: goto label_3b0a00;
        case 0x3b0a04u: goto label_3b0a04;
        case 0x3b0a08u: goto label_3b0a08;
        case 0x3b0a0cu: goto label_3b0a0c;
        case 0x3b0a10u: goto label_3b0a10;
        case 0x3b0a14u: goto label_3b0a14;
        case 0x3b0a18u: goto label_3b0a18;
        case 0x3b0a1cu: goto label_3b0a1c;
        case 0x3b0a20u: goto label_3b0a20;
        case 0x3b0a24u: goto label_3b0a24;
        case 0x3b0a28u: goto label_3b0a28;
        case 0x3b0a2cu: goto label_3b0a2c;
        case 0x3b0a30u: goto label_3b0a30;
        case 0x3b0a34u: goto label_3b0a34;
        case 0x3b0a38u: goto label_3b0a38;
        case 0x3b0a3cu: goto label_3b0a3c;
        case 0x3b0a40u: goto label_3b0a40;
        case 0x3b0a44u: goto label_3b0a44;
        case 0x3b0a48u: goto label_3b0a48;
        case 0x3b0a4cu: goto label_3b0a4c;
        case 0x3b0a50u: goto label_3b0a50;
        case 0x3b0a54u: goto label_3b0a54;
        case 0x3b0a58u: goto label_3b0a58;
        case 0x3b0a5cu: goto label_3b0a5c;
        case 0x3b0a60u: goto label_3b0a60;
        case 0x3b0a64u: goto label_3b0a64;
        case 0x3b0a68u: goto label_3b0a68;
        case 0x3b0a6cu: goto label_3b0a6c;
        case 0x3b0a70u: goto label_3b0a70;
        case 0x3b0a74u: goto label_3b0a74;
        case 0x3b0a78u: goto label_3b0a78;
        case 0x3b0a7cu: goto label_3b0a7c;
        case 0x3b0a80u: goto label_3b0a80;
        case 0x3b0a84u: goto label_3b0a84;
        case 0x3b0a88u: goto label_3b0a88;
        case 0x3b0a8cu: goto label_3b0a8c;
        case 0x3b0a90u: goto label_3b0a90;
        case 0x3b0a94u: goto label_3b0a94;
        case 0x3b0a98u: goto label_3b0a98;
        case 0x3b0a9cu: goto label_3b0a9c;
        case 0x3b0aa0u: goto label_3b0aa0;
        case 0x3b0aa4u: goto label_3b0aa4;
        case 0x3b0aa8u: goto label_3b0aa8;
        case 0x3b0aacu: goto label_3b0aac;
        case 0x3b0ab0u: goto label_3b0ab0;
        case 0x3b0ab4u: goto label_3b0ab4;
        case 0x3b0ab8u: goto label_3b0ab8;
        case 0x3b0abcu: goto label_3b0abc;
        case 0x3b0ac0u: goto label_3b0ac0;
        case 0x3b0ac4u: goto label_3b0ac4;
        case 0x3b0ac8u: goto label_3b0ac8;
        case 0x3b0accu: goto label_3b0acc;
        case 0x3b0ad0u: goto label_3b0ad0;
        case 0x3b0ad4u: goto label_3b0ad4;
        case 0x3b0ad8u: goto label_3b0ad8;
        case 0x3b0adcu: goto label_3b0adc;
        case 0x3b0ae0u: goto label_3b0ae0;
        case 0x3b0ae4u: goto label_3b0ae4;
        case 0x3b0ae8u: goto label_3b0ae8;
        case 0x3b0aecu: goto label_3b0aec;
        case 0x3b0af0u: goto label_3b0af0;
        case 0x3b0af4u: goto label_3b0af4;
        case 0x3b0af8u: goto label_3b0af8;
        case 0x3b0afcu: goto label_3b0afc;
        case 0x3b0b00u: goto label_3b0b00;
        case 0x3b0b04u: goto label_3b0b04;
        case 0x3b0b08u: goto label_3b0b08;
        case 0x3b0b0cu: goto label_3b0b0c;
        case 0x3b0b10u: goto label_3b0b10;
        case 0x3b0b14u: goto label_3b0b14;
        case 0x3b0b18u: goto label_3b0b18;
        case 0x3b0b1cu: goto label_3b0b1c;
        case 0x3b0b20u: goto label_3b0b20;
        case 0x3b0b24u: goto label_3b0b24;
        case 0x3b0b28u: goto label_3b0b28;
        case 0x3b0b2cu: goto label_3b0b2c;
        case 0x3b0b30u: goto label_3b0b30;
        case 0x3b0b34u: goto label_3b0b34;
        case 0x3b0b38u: goto label_3b0b38;
        case 0x3b0b3cu: goto label_3b0b3c;
        case 0x3b0b40u: goto label_3b0b40;
        case 0x3b0b44u: goto label_3b0b44;
        case 0x3b0b48u: goto label_3b0b48;
        case 0x3b0b4cu: goto label_3b0b4c;
        case 0x3b0b50u: goto label_3b0b50;
        case 0x3b0b54u: goto label_3b0b54;
        case 0x3b0b58u: goto label_3b0b58;
        case 0x3b0b5cu: goto label_3b0b5c;
        case 0x3b0b60u: goto label_3b0b60;
        case 0x3b0b64u: goto label_3b0b64;
        case 0x3b0b68u: goto label_3b0b68;
        case 0x3b0b6cu: goto label_3b0b6c;
        case 0x3b0b70u: goto label_3b0b70;
        case 0x3b0b74u: goto label_3b0b74;
        case 0x3b0b78u: goto label_3b0b78;
        case 0x3b0b7cu: goto label_3b0b7c;
        case 0x3b0b80u: goto label_3b0b80;
        case 0x3b0b84u: goto label_3b0b84;
        case 0x3b0b88u: goto label_3b0b88;
        case 0x3b0b8cu: goto label_3b0b8c;
        case 0x3b0b90u: goto label_3b0b90;
        case 0x3b0b94u: goto label_3b0b94;
        case 0x3b0b98u: goto label_3b0b98;
        case 0x3b0b9cu: goto label_3b0b9c;
        case 0x3b0ba0u: goto label_3b0ba0;
        case 0x3b0ba4u: goto label_3b0ba4;
        case 0x3b0ba8u: goto label_3b0ba8;
        case 0x3b0bacu: goto label_3b0bac;
        case 0x3b0bb0u: goto label_3b0bb0;
        case 0x3b0bb4u: goto label_3b0bb4;
        case 0x3b0bb8u: goto label_3b0bb8;
        case 0x3b0bbcu: goto label_3b0bbc;
        case 0x3b0bc0u: goto label_3b0bc0;
        case 0x3b0bc4u: goto label_3b0bc4;
        case 0x3b0bc8u: goto label_3b0bc8;
        case 0x3b0bccu: goto label_3b0bcc;
        case 0x3b0bd0u: goto label_3b0bd0;
        case 0x3b0bd4u: goto label_3b0bd4;
        case 0x3b0bd8u: goto label_3b0bd8;
        case 0x3b0bdcu: goto label_3b0bdc;
        case 0x3b0be0u: goto label_3b0be0;
        case 0x3b0be4u: goto label_3b0be4;
        case 0x3b0be8u: goto label_3b0be8;
        case 0x3b0becu: goto label_3b0bec;
        case 0x3b0bf0u: goto label_3b0bf0;
        case 0x3b0bf4u: goto label_3b0bf4;
        case 0x3b0bf8u: goto label_3b0bf8;
        case 0x3b0bfcu: goto label_3b0bfc;
        case 0x3b0c00u: goto label_3b0c00;
        case 0x3b0c04u: goto label_3b0c04;
        case 0x3b0c08u: goto label_3b0c08;
        case 0x3b0c0cu: goto label_3b0c0c;
        case 0x3b0c10u: goto label_3b0c10;
        case 0x3b0c14u: goto label_3b0c14;
        case 0x3b0c18u: goto label_3b0c18;
        case 0x3b0c1cu: goto label_3b0c1c;
        case 0x3b0c20u: goto label_3b0c20;
        case 0x3b0c24u: goto label_3b0c24;
        case 0x3b0c28u: goto label_3b0c28;
        case 0x3b0c2cu: goto label_3b0c2c;
        case 0x3b0c30u: goto label_3b0c30;
        case 0x3b0c34u: goto label_3b0c34;
        case 0x3b0c38u: goto label_3b0c38;
        case 0x3b0c3cu: goto label_3b0c3c;
        case 0x3b0c40u: goto label_3b0c40;
        case 0x3b0c44u: goto label_3b0c44;
        case 0x3b0c48u: goto label_3b0c48;
        case 0x3b0c4cu: goto label_3b0c4c;
        case 0x3b0c50u: goto label_3b0c50;
        case 0x3b0c54u: goto label_3b0c54;
        case 0x3b0c58u: goto label_3b0c58;
        case 0x3b0c5cu: goto label_3b0c5c;
        case 0x3b0c60u: goto label_3b0c60;
        case 0x3b0c64u: goto label_3b0c64;
        case 0x3b0c68u: goto label_3b0c68;
        case 0x3b0c6cu: goto label_3b0c6c;
        case 0x3b0c70u: goto label_3b0c70;
        case 0x3b0c74u: goto label_3b0c74;
        case 0x3b0c78u: goto label_3b0c78;
        case 0x3b0c7cu: goto label_3b0c7c;
        case 0x3b0c80u: goto label_3b0c80;
        case 0x3b0c84u: goto label_3b0c84;
        case 0x3b0c88u: goto label_3b0c88;
        case 0x3b0c8cu: goto label_3b0c8c;
        case 0x3b0c90u: goto label_3b0c90;
        case 0x3b0c94u: goto label_3b0c94;
        case 0x3b0c98u: goto label_3b0c98;
        case 0x3b0c9cu: goto label_3b0c9c;
        case 0x3b0ca0u: goto label_3b0ca0;
        case 0x3b0ca4u: goto label_3b0ca4;
        case 0x3b0ca8u: goto label_3b0ca8;
        case 0x3b0cacu: goto label_3b0cac;
        case 0x3b0cb0u: goto label_3b0cb0;
        case 0x3b0cb4u: goto label_3b0cb4;
        case 0x3b0cb8u: goto label_3b0cb8;
        case 0x3b0cbcu: goto label_3b0cbc;
        case 0x3b0cc0u: goto label_3b0cc0;
        case 0x3b0cc4u: goto label_3b0cc4;
        case 0x3b0cc8u: goto label_3b0cc8;
        case 0x3b0cccu: goto label_3b0ccc;
        case 0x3b0cd0u: goto label_3b0cd0;
        case 0x3b0cd4u: goto label_3b0cd4;
        case 0x3b0cd8u: goto label_3b0cd8;
        case 0x3b0cdcu: goto label_3b0cdc;
        case 0x3b0ce0u: goto label_3b0ce0;
        case 0x3b0ce4u: goto label_3b0ce4;
        case 0x3b0ce8u: goto label_3b0ce8;
        case 0x3b0cecu: goto label_3b0cec;
        case 0x3b0cf0u: goto label_3b0cf0;
        case 0x3b0cf4u: goto label_3b0cf4;
        case 0x3b0cf8u: goto label_3b0cf8;
        case 0x3b0cfcu: goto label_3b0cfc;
        case 0x3b0d00u: goto label_3b0d00;
        case 0x3b0d04u: goto label_3b0d04;
        case 0x3b0d08u: goto label_3b0d08;
        case 0x3b0d0cu: goto label_3b0d0c;
        case 0x3b0d10u: goto label_3b0d10;
        case 0x3b0d14u: goto label_3b0d14;
        case 0x3b0d18u: goto label_3b0d18;
        case 0x3b0d1cu: goto label_3b0d1c;
        case 0x3b0d20u: goto label_3b0d20;
        case 0x3b0d24u: goto label_3b0d24;
        case 0x3b0d28u: goto label_3b0d28;
        case 0x3b0d2cu: goto label_3b0d2c;
        case 0x3b0d30u: goto label_3b0d30;
        case 0x3b0d34u: goto label_3b0d34;
        case 0x3b0d38u: goto label_3b0d38;
        case 0x3b0d3cu: goto label_3b0d3c;
        case 0x3b0d40u: goto label_3b0d40;
        case 0x3b0d44u: goto label_3b0d44;
        case 0x3b0d48u: goto label_3b0d48;
        case 0x3b0d4cu: goto label_3b0d4c;
        default: break;
    }

    ctx->pc = 0x3aef60u;

label_3aef60:
    // 0x3aef60: 0x503a474e  beql        $at, $k0, . + 4 + (0x474E << 2)
label_3aef64:
    if (ctx->pc == 0x3AEF64u) {
        ctx->pc = 0x3AEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF60u;
        // 0x3aef64: 0x695f6461  ldl         $ra, 0x6461($t2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25697); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF68u;
        goto label_3aef68;
    }
    ctx->pc = 0x3AEF60u;
    {
        const bool branch_taken_0x3aef60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 26));
        if (branch_taken_0x3aef60) {
            ctx->pc = 0x3AEF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEF60u;
            // 0x3aef64: 0x695f6461  ldl         $ra, 0x6461($t2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25697); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0C9Cu;
            return;
        }
    }
    ctx->pc = 0x3AEF68u;
label_3aef68:
    // 0x3aef68: 0xa74696e  j           func_9D1A5B8
label_3aef6c:
    if (ctx->pc == 0x3AEF6Cu) {
        ctx->pc = 0x3AEF70u;
        goto label_3aef70;
    }
    ctx->pc = 0x3AEF68u;
    ctx->pc = 0x9D1A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9D1A5B8u, 0x3AEF68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AEF70u;
label_3aef70:
    // 0x3aef70: 0x4f525245  .word       0x4F525245                   # INVALID     $k0, $s2, 0x5245 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aef70u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEF70 raw=0x4F525245");
label_3aef74:
    // 0x3aef74: 0x63733a52  daddi       $s3, $k1, 0x3A52
    ctx->pc = 0x3aef74u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)14930; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_3aef78:
    // 0x3aef78: 0x64615065  daddiu      $at, $v1, 0x5065
    ctx->pc = 0x3aef78u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)20581);
label_3aef7c:
    // 0x3aef7c: 0x74726f50  .word       0x74726F50                   # INVALID     $v1, $s2, 0x6F50 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aef7cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AEF7C raw=0x74726F50");
label_3aef80:
    // 0x3aef80: 0x6e65704f  ldr         $a1, 0x704F($s3)
    ctx->pc = 0x3aef80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3aef84:
    // 0x3aef84: 0xa31  tgeu        $zero, $zero, 40
    ctx->pc = 0x3aef84u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3aef88:
    // 0x3aef88: 0x0  nop
    ctx->pc = 0x3aef88u;
    // NOP
label_3aef8c:
    // 0x3aef8c: 0x0  nop
    ctx->pc = 0x3aef8cu;
    // NOP
label_3aef90:
    // 0x3aef90: 0x1a0688  .word       0x001A0688                   # jr          $zero # 001A0680 <InstrIdType: CPU_SPECIAL>
label_3aef94:
    if (ctx->pc == 0x3AEF94u) {
        ctx->pc = 0x3AEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF90u;
        // 0x3aef94: 0x1a0704  .word       0x001A0704                   # sllv        $zero, $k0, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 26), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF98u;
        goto label_3aef98;
    }
    ctx->pc = 0x3AEF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF90u;
        // 0x3aef94: 0x1a0704  .word       0x001A0704                   # sllv        $zero, $k0, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 26), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEF90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AEF98u;
label_3aef98:
    // 0x3aef98: 0x1a0754  .word       0x001A0754                   # dsllv       $zero, $k0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aef98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 26) << (GPR_U32(ctx, 0) & 0x3F));
label_3aef9c:
    // 0x3aef9c: 0x1a078c  .word       0x001A078C                   # syscall     30 # 001A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aef9cu;
    ctx->pc = 0x3AEFA0u;
runtime->handleSyscall(rdram, ctx, 0x681Eu);
label_3aefa0:
    // 0x3aefa0: 0x1a07f4  teq         $zero, $k0, 31
    ctx->pc = 0x3aefa0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_3aefa4:
    // 0x3aefa4: 0x1a0828  .word       0x001A0828                   # mfsa        $at # 001A0000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aefa4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_3aefa8:
    // 0x3aefa8: 0x1a0890  .word       0x001A0890                   # mfhi        $at # 001A0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aefa8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_3aefac:
    // 0x3aefac: 0x1a08dc  .word       0x001A08DC                   # dmult       $zero, $k0 # 000008C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aefacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AEFAC raw=0x001A08DC");
label_3aefb0:
    // 0x3aefb0: 0x1a0948  .word       0x001A0948                   # jr          $zero # 001A0940 <InstrIdType: CPU_SPECIAL>
label_3aefb4:
    if (ctx->pc == 0x3AEFB4u) {
        ctx->pc = 0x3AEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFB0u;
        // 0x3aefb4: 0x1a099c  .word       0x001A099C                   # dmult       $zero, $k0 # 00000980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AEFB4 raw=0x001A099C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEFB8u;
        goto label_3aefb8;
    }
    ctx->pc = 0x3AEFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFB0u;
        // 0x3aefb4: 0x1a099c  .word       0x001A099C                   # dmult       $zero, $k0 # 00000980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AEFB4 raw=0x001A099C");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEFB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AEFB8u;
label_3aefb8:
    // 0x3aefb8: 0x43202d2d  .word       0x43202D2D                   # INVALID     $t9, $zero, 0x2D2D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aefb8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3AEFB8 raw=0x43202D2D");
label_3aefbc:
    // 0x3aefbc: 0x72746e6f  .word       0x72746E6F                   # INVALID     $s3, $s4, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aefbcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3AEFBC raw=0x72746E6F");
label_3aefc0:
    // 0x3aefc0: 0x2d206c6f  sltiu       $zero, $t1, 0x6C6F
    ctx->pc = 0x3aefc0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)27759) ? 1 : 0);
label_3aefc4:
    // 0x3aefc4: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x3aefc4u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aefc8:
    // 0x3aefc8: 0x3a522d4c  xori        $s2, $s2, 0x2D4C
    ctx->pc = 0x3aefc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)11596);
label_3aefcc:
    // 0x3aefcc: 0x65676150  daddiu      $a3, $t3, 0x6150
    ctx->pc = 0x3aefccu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24912);
label_3aefd0:
    // 0x3aefd0: 0x65684320  daddiu      $t0, $t3, 0x4320
    ctx->pc = 0x3aefd0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17184);
label_3aefd4:
    // 0x3aefd4: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aefd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3aefd8:
    // 0x3aefd8: 0x3a442d55  xori        $a0, $s2, 0x2D55
    ctx->pc = 0x3aefd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)11605);
label_3aefdc:
    // 0x3aefdc: 0x6d6f6f5a  ldr         $t7, 0x6F5A($t3)
    ctx->pc = 0x3aefdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28506); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3aefe0:
    // 0x3aefe0: 0x44705520  .word       0x44705520                   # INVALID     $v1, $s0, 0x5520 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aefe0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x20 at 0x3AEFE0 raw=0x44705520");
label_3aefe4:
    // 0x3aefe4: 0x6e77  .word       0x00006E77                   # INVALID     $zero, $zero, 0x6E77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aefe4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3AEFE4 raw=0x00006E77");
label_3aefe8:
    // 0x3aefe8: 0x3a20314c  xori        $zero, $s1, 0x314C
    ctx->pc = 0x3aefe8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)12620);
label_3aefec:
    // 0x3aefec: 0x6d6f6f5a  ldr         $t7, 0x6F5A($t3)
    ctx->pc = 0x3aefecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28506); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3aeff0:
    // 0x3aeff0: 0x73655220  .word       0x73655220                   # madd1       $t2, $k1, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aeff0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3aeff4:
    // 0x3aeff4: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aeff4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3aeff8:
    // 0x3aeff8: 0x3a20324c  xori        $zero, $s1, 0x324C
    ctx->pc = 0x3aeff8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)12876);
label_3aeffc:
    // 0x3aeffc: 0x68706c41  ldl         $s0, 0x6C41($v1)
    ctx->pc = 0x3aeffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27713); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3af000:
    // 0x3af000: 0x4f6e4f20  .word       0x4F6E4F20                   # INVALID     $k1, $t6, 0x4F20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af000u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AF000 raw=0x4F6E4F20");
label_3af004:
    // 0x3af004: 0x6666  .word       0x00006666                   # xor         $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af004u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3af008:
    // 0x3af008: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3af008u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3af00c:
    // 0x3af00c: 0x0  nop
    ctx->pc = 0x3af00cu;
    // NOP
label_3af010:
    // 0x3af010: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3af010u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3af014:
    // 0x3af014: 0x0  nop
    ctx->pc = 0x3af014u;
    // NOP
label_3af018:
    // 0x3af018: 0x3a202d20  xori        $zero, $s1, 0x2D20
    ctx->pc = 0x3af018u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)11552);
label_3af01c:
    // 0x3af01c: 0x54554c43  bnel        $v0, $s5, . + 4 + (0x4C43 << 2)
label_3af020:
    if (ctx->pc == 0x3AF020u) {
        ctx->pc = 0x3AF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF01Cu;
        // 0x3af020: 0x65684320  daddiu      $t0, $t3, 0x4320 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17184);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF024u;
        goto label_3af024;
    }
    ctx->pc = 0x3AF01Cu;
    {
        const bool branch_taken_0x3af01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x3af01c) {
            ctx->pc = 0x3AF020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF01Cu;
            // 0x3af020: 0x65684320  daddiu      $t0, $t3, 0x4320 (Delay Slot)
            SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17184);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C212Cu;
            return;
        }
    }
    ctx->pc = 0x3AF024u;
label_3af024:
    // 0x3af024: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af024u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3af028:
    // 0x3af028: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x3af028u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3af02c:
    // 0x3af02c: 0x0  nop
    ctx->pc = 0x3af02cu;
    // NOP
label_3af030:
    // 0x3af030: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af030u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AF030 raw=0x00000001");
label_3af034:
    // 0x3af034: 0x0  nop
    ctx->pc = 0x3af034u;
    // NOP
label_3af038:
    // 0x3af038: 0x3a202d20  xori        $zero, $s1, 0x2D20
    ctx->pc = 0x3af038u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)11552);
label_3af03c:
    // 0x3af03c: 0x746f6e41  .word       0x746F6E41                   # INVALID     $v1, $t7, 0x6E41 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af03cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF03C raw=0x746F6E41");
label_3af040:
    // 0x3af040: 0x43726568  .word       0x43726568                   # INVALID     $k1, $s2, 0x6568 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3af040u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3AF040 raw=0x43726568");
label_3af044:
    // 0x3af044: 0x5042  srl         $t2, $zero, 1
    ctx->pc = 0x3af044u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_3af048:
    // 0x3af048: 0x3a203152  xori        $zero, $s1, 0x3152
    ctx->pc = 0x3af048u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)12626);
label_3af04c:
    // 0x3af04c: 0x54554c43  bnel        $v0, $s5, . + 4 + (0x4C43 << 2)
label_3af050:
    if (ctx->pc == 0x3AF050u) {
        ctx->pc = 0x3AF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF04Cu;
        // 0x3af050: 0x69644520  ldl         $a0, 0x4520($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF054u;
        goto label_3af054;
    }
    ctx->pc = 0x3AF04Cu;
    {
        const bool branch_taken_0x3af04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x3af04c) {
            ctx->pc = 0x3AF050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF04Cu;
            // 0x3af050: 0x69644520  ldl         $a0, 0x4520($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C215Cu;
            return;
        }
    }
    ctx->pc = 0x3AF054u;
label_3af054:
    // 0x3af054: 0x2074  teq         $zero, $zero, 129
    ctx->pc = 0x3af054u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3af058:
    // 0x3af058: 0x3a203252  xori        $zero, $s1, 0x3252
    ctx->pc = 0x3af058u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)12882);
label_3af05c:
    // 0x3af05c: 0x74786554  .word       0x74786554                   # INVALID     $v1, $t8, 0x6554 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af05cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF05C raw=0x74786554");
label_3af060:
    // 0x3af060: 0x666e4920  daddiu      $t6, $s3, 0x4920
    ctx->pc = 0x3af060u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)18720);
label_3af064:
    // 0x3af064: 0x206f  .word       0x0000206F                   # dsubu       $a0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_3af068:
    // 0x3af068: 0x3a415453  xori        $at, $s2, 0x5453
    ctx->pc = 0x3af068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21587);
label_3af06c:
    // 0x3af06c: 0x64616f4c  daddiu      $at, $v1, 0x6F4C
    ctx->pc = 0x3af06cu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28492);
label_3af070:
    // 0x3af070: 0x78655420  lq          $a1, 0x5420($v1)
    ctx->pc = 0x3af070u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 21536)));
label_3af074:
    // 0x3af074: 0x2074  teq         $zero, $zero, 129
    ctx->pc = 0x3af074u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3af078:
    // 0x3af078: 0x3a205520  xori        $zero, $s1, 0x5520
    ctx->pc = 0x3af078u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)21792);
label_3af07c:
    // 0x3af07c: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3af07cu;
    // NOP (addi to $zero)
label_3af080:
    // 0x3af080: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3af080u;
    // NOP (addi to $zero)
label_3af084:
    // 0x3af084: 0x2020  add         $a0, $zero, $zero
    ctx->pc = 0x3af084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3af088:
    // 0x3af088: 0x3a522b4c  xori        $s2, $s2, 0x2B4C
    ctx->pc = 0x3af088u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)11084);
label_3af08c:
    // 0x3af08c: 0x6f6c6f43  ldr         $t4, 0x6F43($k1)
    ctx->pc = 0x3af08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3af090:
    // 0x3af090: 0x6c532072  ldr         $s3, 0x2072($v0)
    ctx->pc = 0x3af090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_3af094:
    // 0x3af094: 0x7463  .word       0x00007463                   # negu        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af094u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3af098:
    // 0x3af098: 0x3a204420  xori        $zero, $s1, 0x4420
    ctx->pc = 0x3af098u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)17440);
label_3af09c:
    // 0x3af09c: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3af09cu;
    // NOP (addi to $zero)
label_3af0a0:
    // 0x3af0a0: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3af0a0u;
    // NOP (addi to $zero)
label_3af0a4:
    // 0x3af0a4: 0x2020  add         $a0, $zero, $zero
    ctx->pc = 0x3af0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3af0a8:
    // 0x3af0a8: 0x3a202d20  xori        $zero, $s1, 0x2D20
    ctx->pc = 0x3af0a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)11552);
label_3af0ac:
    // 0x3af0ac: 0x41424752  .word       0x41424752                   # INVALID     $t2, $v0, 0x4752 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3af0acu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AF0AC raw=0x41424752");
label_3af0b0:
    // 0x3af0b0: 0x636c5320  daddi       $t4, $k1, 0x5320
    ctx->pc = 0x3af0b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_3af0b4:
    // 0x3af0b4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x3af0b4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3af0b8:
    // 0x3af0b8: 0x3a202d20  xori        $zero, $s1, 0x2D20
    ctx->pc = 0x3af0b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)11552);
label_3af0bc:
    // 0x3af0bc: 0x77447055  .word       0x77447055                   # INVALID     $k0, $a0, 0x7055 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af0bcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF0BC raw=0x77447055");
label_3af0c0:
    // 0x3af0c0: 0x6156206e  daddi       $s6, $t2, 0x206E
    ctx->pc = 0x3af0c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_3af0c4:
    // 0x3af0c4: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af0c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3af0c8:
    // 0x3af0c8: 0x3a203152  xori        $zero, $s1, 0x3152
    ctx->pc = 0x3af0c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)12626);
label_3af0cc:
    // 0x3af0cc: 0x74697845  .word       0x74697845                   # INVALID     $v1, $t1, 0x7845 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af0ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF0CC raw=0x74697845");
label_3af0d0:
    // 0x3af0d0: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3af0d0u;
    // NOP (addi to $zero)
label_3af0d4:
    // 0x3af0d4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x3af0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3af0d8:
    // 0x3af0d8: 0x65676150  daddiu      $a3, $t3, 0x6150
    ctx->pc = 0x3af0d8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24912);
label_3af0dc:
    // 0x3af0dc: 0x25783020  addiu       $t8, $t3, 0x3020
    ctx->pc = 0x3af0dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12320));
label_3af0e0:
    // 0x3af0e0: 0x583230  tge         $v0, $t8, 200
    ctx->pc = 0x3af0e0u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3af0e4:
    // 0x3af0e4: 0x0  nop
    ctx->pc = 0x3af0e4u;
    // NOP
label_3af0e8:
    // 0x3af0e8: 0x30504254  andi        $s0, $v0, 0x4254
    ctx->pc = 0x3af0e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16980);
label_3af0ec:
    // 0x3af0ec: 0x25783020  addiu       $t8, $t3, 0x3020
    ctx->pc = 0x3af0ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12320));
label_3af0f0:
    // 0x3af0f0: 0x583430  tge         $v0, $t8, 208
    ctx->pc = 0x3af0f0u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3af0f4:
    // 0x3af0f4: 0x0  nop
    ctx->pc = 0x3af0f4u;
    // NOP
label_3af0f8:
    // 0x3af0f8: 0x74756c43  .word       0x74756C43                   # INVALID     $v1, $s5, 0x6C43 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af0f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF0F8 raw=0x74756C43");
label_3af0fc:
    // 0x3af0fc: 0x25783020  addiu       $t8, $t3, 0x3020
    ctx->pc = 0x3af0fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12320));
label_3af100:
    // 0x3af100: 0x583230  tge         $v0, $t8, 200
    ctx->pc = 0x3af100u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3af104:
    // 0x3af104: 0x0  nop
    ctx->pc = 0x3af104u;
    // NOP
label_3af108:
    // 0x3af108: 0x65707954  daddiu      $s0, $t3, 0x7954
    ctx->pc = 0x3af108u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)31060);
label_3af10c:
    // 0x3af10c: 0x64312520  daddiu      $s1, $at, 0x2520
    ctx->pc = 0x3af10cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9504);
label_3af110:
    // 0x3af110: 0x0  nop
    ctx->pc = 0x3af110u;
    // NOP
label_3af114:
    // 0x3af114: 0x0  nop
    ctx->pc = 0x3af114u;
    // NOP
label_3af118:
    // 0x3af118: 0x254c564c  addiu       $t4, $t2, 0x564C
    ctx->pc = 0x3af118u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 22092));
label_3af11c:
    // 0x3af11c: 0x30206431  andi        $zero, $at, 0x6431
    ctx->pc = 0x3af11cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25649);
label_3af120:
    // 0x3af120: 0x34302578  ori         $s0, $at, 0x2578
    ctx->pc = 0x3af120u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9592);
label_3af124:
    // 0x3af124: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3af128:
    // 0x3af128: 0x20504243  addi        $s0, $v0, 0x4243
    ctx->pc = 0x3af128u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)16963, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_3af12c:
    // 0x3af12c: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x3af12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_3af130:
    // 0x3af130: 0x5834  teq         $zero, $zero, 352
    ctx->pc = 0x3af130u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3af134:
    // 0x3af134: 0x0  nop
    ctx->pc = 0x3af134u;
    // NOP
label_3af138:
    // 0x3af138: 0x20415343  addi        $at, $v0, 0x5343
    ctx->pc = 0x3af138u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21315, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_3af13c:
    // 0x3af13c: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af13cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3af140:
    // 0x3af140: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x3af140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_3af144:
    // 0x3af144: 0x5838  dsll        $t3, $zero, 0
    ctx->pc = 0x3af144u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << 0);
label_3af148:
    // 0x3af148: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x3af148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_3af14c:
    // 0x3af14c: 0x5832  tlt         $zero, $zero, 352
    ctx->pc = 0x3af14cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3af150:
    // 0x3af150: 0x30504254  andi        $s0, $v0, 0x4254
    ctx->pc = 0x3af150u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16980);
label_3af154:
    // 0x3af154: 0x30203a20  andi        $zero, $at, 0x3A20
    ctx->pc = 0x3af154u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)14880);
label_3af158:
    // 0x3af158: 0x34302578  ori         $s0, $at, 0x2578
    ctx->pc = 0x3af158u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9592);
label_3af15c:
    // 0x3af15c: 0x202a2058  addi        $t2, $at, 0x2058
    ctx->pc = 0x3af15cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8280, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_3af160:
    // 0x3af160: 0x3436  tne         $zero, $zero, 208
    ctx->pc = 0x3af160u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3af164:
    // 0x3af164: 0x0  nop
    ctx->pc = 0x3af164u;
    // NOP
label_3af168:
    // 0x3af168: 0x0  nop
    ctx->pc = 0x3af168u;
    // NOP
label_3af16c:
    // 0x3af16c: 0x0  nop
    ctx->pc = 0x3af16cu;
    // NOP
label_3af170:
    // 0x3af170: 0x20574254  addi        $s7, $v0, 0x4254
    ctx->pc = 0x3af170u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)16980, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_3af174:
    // 0x3af174: 0x30203a20  andi        $zero, $at, 0x3A20
    ctx->pc = 0x3af174u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)14880);
label_3af178:
    // 0x3af178: 0x34302578  ori         $s0, $at, 0x2578
    ctx->pc = 0x3af178u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9592);
label_3af17c:
    // 0x3af17c: 0x202a2058  addi        $t2, $at, 0x2058
    ctx->pc = 0x3af17cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8280, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_3af180:
    // 0x3af180: 0x3436  tne         $zero, $zero, 208
    ctx->pc = 0x3af180u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3af184:
    // 0x3af184: 0x0  nop
    ctx->pc = 0x3af184u;
    // NOP
label_3af188:
    // 0x3af188: 0x204d5350  addi        $t5, $v0, 0x5350
    ctx->pc = 0x3af188u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21328, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_3af18c:
    // 0x3af18c: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x3af18cu;
    // NOP (addiu $zero, ...)
label_3af190:
    // 0x3af190: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af190u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af194:
    // 0x3af194: 0x0  nop
    ctx->pc = 0x3af194u;
    // NOP
label_3af198:
    // 0x3af198: 0x20205754  addi        $zero, $at, 0x5754
    ctx->pc = 0x3af198u;
    // NOP (addi to $zero)
label_3af19c:
    // 0x3af19c: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x3af19cu;
    // NOP (addiu $zero, ...)
label_3af1a0:
    // 0x3af1a0: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af1a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af1a4:
    // 0x3af1a4: 0x0  nop
    ctx->pc = 0x3af1a4u;
    // NOP
label_3af1a8:
    // 0x3af1a8: 0x20204854  addi        $zero, $at, 0x4854
    ctx->pc = 0x3af1a8u;
    // NOP (addi to $zero)
label_3af1ac:
    // 0x3af1ac: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x3af1acu;
    // NOP (addiu $zero, ...)
label_3af1b0:
    // 0x3af1b0: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af1b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af1b4:
    // 0x3af1b4: 0x0  nop
    ctx->pc = 0x3af1b4u;
    // NOP
label_3af1b8:
    // 0x3af1b8: 0x20434354  addi        $v1, $v0, 0x4354
    ctx->pc = 0x3af1b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)17236, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_3af1bc:
    // 0x3af1bc: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x3af1bcu;
    // NOP (addiu $zero, ...)
label_3af1c0:
    // 0x3af1c0: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af1c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af1c4:
    // 0x3af1c4: 0x0  nop
    ctx->pc = 0x3af1c4u;
    // NOP
label_3af1c8:
    // 0x3af1c8: 0x20584654  addi        $t8, $v0, 0x4654
    ctx->pc = 0x3af1c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)18004, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_3af1cc:
    // 0x3af1cc: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x3af1ccu;
    // NOP (addiu $zero, ...)
label_3af1d0:
    // 0x3af1d0: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af1d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af1d4:
    // 0x3af1d4: 0x0  nop
    ctx->pc = 0x3af1d4u;
    // NOP
label_3af1d8:
    // 0x3af1d8: 0x0  nop
    ctx->pc = 0x3af1d8u;
    // NOP
label_3af1dc:
    // 0x3af1dc: 0x0  nop
    ctx->pc = 0x3af1dcu;
    // NOP
label_3af1e0:
    // 0x3af1e0: 0x20504243  addi        $s0, $v0, 0x4243
    ctx->pc = 0x3af1e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)16963, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_3af1e4:
    // 0x3af1e4: 0x30203a20  andi        $zero, $at, 0x3A20
    ctx->pc = 0x3af1e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)14880);
label_3af1e8:
    // 0x3af1e8: 0x20582578  addi        $t8, $v0, 0x2578
    ctx->pc = 0x3af1e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)9592, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_3af1ec:
    // 0x3af1ec: 0x3436202a  ori         $s6, $at, 0x202A
    ctx->pc = 0x3af1ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8234);
label_3af1f0:
    // 0x3af1f0: 0x0  nop
    ctx->pc = 0x3af1f0u;
    // NOP
label_3af1f4:
    // 0x3af1f4: 0x0  nop
    ctx->pc = 0x3af1f4u;
    // NOP
label_3af1f8:
    // 0x3af1f8: 0x4d535043  .word       0x4D535043                   # INVALID     $t2, $s3, 0x5043 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af1f8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AF1F8 raw=0x4D535043");
label_3af1fc:
    // 0x3af1fc: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x3af1fcu;
    // NOP (addiu $zero, ...)
label_3af200:
    // 0x3af200: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af200u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af204:
    // 0x3af204: 0x0  nop
    ctx->pc = 0x3af204u;
    // NOP
label_3af208:
    // 0x3af208: 0x204d5343  addi        $t5, $v0, 0x5343
    ctx->pc = 0x3af208u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21315, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_3af20c:
    // 0x3af20c: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x3af20cu;
    // NOP (addiu $zero, ...)
label_3af210:
    // 0x3af210: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af210u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af214:
    // 0x3af214: 0x0  nop
    ctx->pc = 0x3af214u;
    // NOP
label_3af218:
    // 0x3af218: 0x20415343  addi        $at, $v0, 0x5343
    ctx->pc = 0x3af218u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21315, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_3af21c:
    // 0x3af21c: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x3af21cu;
    // NOP (addiu $zero, ...)
label_3af220:
    // 0x3af220: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af220u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af224:
    // 0x3af224: 0x0  nop
    ctx->pc = 0x3af224u;
    // NOP
label_3af228:
    // 0x3af228: 0x20444c43  addi        $a0, $v0, 0x4C43
    ctx->pc = 0x3af228u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19523, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_3af22c:
    // 0x3af22c: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x3af22cu;
    // NOP (addiu $zero, ...)
label_3af230:
    // 0x3af230: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af230u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af234:
    // 0x3af234: 0x0  nop
    ctx->pc = 0x3af234u;
    // NOP
label_3af238:
    // 0x3af238: 0x64695728  daddiu      $t1, $v1, 0x5728
    ctx->pc = 0x3af238u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)22312);
label_3af23c:
    // 0x3af23c: 0x20206874  addi        $zero, $at, 0x6874
    ctx->pc = 0x3af23cu;
    // NOP (addi to $zero)
label_3af240:
    // 0x3af240: 0x3425203d  ori         $a1, $at, 0x203D
    ctx->pc = 0x3af240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8253);
label_3af244:
    // 0x3af244: 0x2964  .word       0x00002964                   # and         $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af248:
    // 0x3af248: 0x69654828  ldl         $a1, 0x4828($t3)
    ctx->pc = 0x3af248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3af24c:
    // 0x3af24c: 0x20746867  addi        $s4, $v1, 0x6867
    ctx->pc = 0x3af24cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26727, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_3af250:
    // 0x3af250: 0x3425203d  ori         $a1, $at, 0x203D
    ctx->pc = 0x3af250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8253);
label_3af254:
    // 0x3af254: 0x2964  .word       0x00002964                   # and         $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3af258:
    // 0x3af258: 0x0  nop
    ctx->pc = 0x3af258u;
    // NOP
label_3af25c:
    // 0x3af25c: 0x0  nop
    ctx->pc = 0x3af25cu;
    // NOP
label_3af260:
    // 0x3af260: 0x64312528  daddiu      $s1, $at, 0x2528
    ctx->pc = 0x3af260u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9512);
label_3af264:
    // 0x3af264: 0x74696220  .word       0x74696220                   # INVALID     $v1, $t1, 0x6220 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af264u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF264 raw=0x74696220");
label_3af268:
    // 0x3af268: 0x646e4920  daddiu      $t6, $v1, 0x4920
    ctx->pc = 0x3af268u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)18720);
label_3af26c:
    // 0x3af26c: 0x297865  .word       0x00297865                   # or          $t7, $at, $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af26cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) | GPR_U64(ctx, 9));
label_3af270:
    // 0x3af270: 0x64322528  daddiu      $s2, $at, 0x2528
    ctx->pc = 0x3af270u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9512);
label_3af274:
    // 0x3af274: 0x74696220  .word       0x74696220                   # INVALID     $v1, $t1, 0x6220 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af274u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF274 raw=0x74696220");
label_3af278:
    // 0x3af278: 0x6c6f4320  ldr         $t7, 0x4320($v1)
    ctx->pc = 0x3af278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3af27c:
    // 0x3af27c: 0x29726f  .word       0x0029726F                   # dsubu       $t6, $at, $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af27cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) - GPR_U64(ctx, 9));
label_3af280:
    // 0x3af280: 0x1b4f84  .word       0x001B4F84                   # sllv        $t1, $k1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af280u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 27), GPR_U32(ctx, 0) & 0x1F));
label_3af284:
    // 0x3af284: 0x1b4fd0  .word       0x001B4FD0                   # mfhi        $t1 # 001B07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af284u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_3af288:
    // 0x3af288: 0x1b4f9c  .word       0x001B4F9C                   # dmult       $zero, $k1 # 00004F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af288u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AF288 raw=0x001B4F9C");
label_3af28c:
    // 0x3af28c: 0x1b4f9c  .word       0x001B4F9C                   # dmult       $zero, $k1 # 00004F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af28cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AF28C raw=0x001B4F9C");
label_3af290:
    // 0x3af290: 0x1b4fe8  .word       0x001B4FE8                   # mfsa        $t1 # 001B07C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af290u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_3af294:
    // 0x3af294: 0x1b503c  dsll32      $t2, $k1, 0
    ctx->pc = 0x3af294u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 27) << (32 + 0));
label_3af298:
    // 0x3af298: 0x0  nop
    ctx->pc = 0x3af298u;
    // NOP
label_3af29c:
    // 0x3af29c: 0x0  nop
    ctx->pc = 0x3af29cu;
    // NOP
label_3af2a0:
    // 0x3af2a0: 0x1b5834  teq         $zero, $k1, 352
    ctx->pc = 0x3af2a0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af2a4:
    // 0x3af2a4: 0x1b597c  dsll32      $t3, $k1, 5
    ctx->pc = 0x3af2a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 27) << (32 + 5));
label_3af2a8:
    // 0x3af2a8: 0x1b5a80  sll         $t3, $k1, 10
    ctx->pc = 0x3af2a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 27), 10));
label_3af2ac:
    // 0x3af2ac: 0x1b5b10  .word       0x001B5B10                   # mfhi        $t3 # 001B0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2acu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_3af2b0:
    // 0x3af2b0: 0x1b613c  dsll32      $t4, $k1, 4
    ctx->pc = 0x3af2b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 27) << (32 + 4));
label_3af2b4:
    // 0x3af2b4: 0x1b618c  .word       0x001B618C                   # syscall     390 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2b4u;
    ctx->pc = 0x3AF2B8u;
runtime->handleSyscall(rdram, ctx, 0x6D86u);
label_3af2b8:
    // 0x3af2b8: 0x1b6540  sll         $t4, $k1, 21
    ctx->pc = 0x3af2b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 27), 21));
label_3af2bc:
    // 0x3af2bc: 0x1b65e8  .word       0x001B65E8                   # mfsa        $t4 # 001B05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af2bcu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_3af2c0:
    // 0x3af2c0: 0x1b6920  .word       0x001B6920                   # add         $t5, $zero, $k1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_3af2c4:
    // 0x3af2c4: 0x1b6a0c  .word       0x001B6A0C                   # syscall     424 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2c4u;
    ctx->pc = 0x3AF2C8u;
runtime->handleSyscall(rdram, ctx, 0x6DA8u);
label_3af2c8:
    // 0x3af2c8: 0x0  nop
    ctx->pc = 0x3af2c8u;
    // NOP
label_3af2cc:
    // 0x3af2cc: 0x0  nop
    ctx->pc = 0x3af2ccu;
    // NOP
label_3af2d0:
    // 0x3af2d0: 0x1b6e20  .word       0x001B6E20                   # add         $t5, $zero, $k1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_3af2d4:
    // 0x3af2d4: 0x1b6ef4  teq         $zero, $k1, 443
    ctx->pc = 0x3af2d4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af2d8:
    // 0x3af2d8: 0x1b6f94  .word       0x001B6F94                   # dsllv       $t5, $k1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 27) << (GPR_U32(ctx, 0) & 0x3F));
label_3af2dc:
    // 0x3af2dc: 0x1b712c  .word       0x001B712C                   # dadd        $t6, $zero, $k1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2dcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3af2e0:
    // 0x3af2e0: 0x1b72ec  .word       0x001B72EC                   # dadd        $t6, $zero, $k1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3af2e4:
    // 0x3af2e4: 0x1b7334  teq         $zero, $k1, 460
    ctx->pc = 0x3af2e4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af2e8:
    // 0x3af2e8: 0x1b7770  tge         $zero, $k1, 477
    ctx->pc = 0x3af2e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af2ec:
    // 0x3af2ec: 0x1b77bc  dsll32      $t6, $k1, 30
    ctx->pc = 0x3af2ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 27) << (32 + 30));
label_3af2f0:
    // 0x3af2f0: 0x1b7b74  teq         $zero, $k1, 493
    ctx->pc = 0x3af2f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af2f4:
    // 0x3af2f4: 0x1b7c18  .word       0x001B7C18                   # mult        $t7, $zero, $k1 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af2f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 27); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3af2f8:
    // 0x3af2f8: 0x1b7f64  .word       0x001B7F64                   # and         $t7, $zero, $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 27));
label_3af2fc:
    // 0x3af2fc: 0x1b8050  .word       0x001B8050                   # mfhi        $s0 # 001B0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af2fcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_3af300:
    // 0x3af300: 0x1b8480  sll         $s0, $k1, 18
    ctx->pc = 0x3af300u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 27), 18));
label_3af304:
    // 0x3af304: 0x1b8550  .word       0x001B8550                   # mfhi        $s0 # 001B0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af304u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_3af308:
    // 0x3af308: 0x1b85e8  .word       0x001B85E8                   # mfsa        $s0 # 001B05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af308u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_3af30c:
    // 0x3af30c: 0x1b872c  .word       0x001B872C                   # dadd        $s0, $zero, $k1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af30cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_3af310:
    // 0x3af310: 0x1b88ec  .word       0x001B88EC                   # dadd        $s1, $zero, $k1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af310u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_3af314:
    // 0x3af314: 0x1b893c  dsll32      $s1, $k1, 4
    ctx->pc = 0x3af314u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 27) << (32 + 4));
label_3af318:
    // 0x3af318: 0x1b8d74  teq         $zero, $k1, 565
    ctx->pc = 0x3af318u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af31c:
    // 0x3af31c: 0x1b8dc0  sll         $s1, $k1, 23
    ctx->pc = 0x3af31cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 27), 23));
label_3af320:
    // 0x3af320: 0x1b9150  .word       0x001B9150                   # mfhi        $s2 # 001B0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af320u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_3af324:
    // 0x3af324: 0x1b91ec  .word       0x001B91EC                   # dadd        $s2, $zero, $k1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af324u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_3af328:
    // 0x3af328: 0x1b9504  .word       0x001B9504                   # sllv        $s2, $k1, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af328u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 27), GPR_U32(ctx, 0) & 0x1F));
label_3af32c:
    // 0x3af32c: 0x1b95f0  tge         $zero, $k1, 599
    ctx->pc = 0x3af32cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af330:
    // 0x3af330: 0x1b98d0  .word       0x001B98D0                   # mfhi        $s3 # 001B00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af330u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_3af334:
    // 0x3af334: 0x1b99a0  .word       0x001B99A0                   # add         $s3, $zero, $k1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_3af338:
    // 0x3af338: 0x1b9a38  dsll        $s3, $k1, 8
    ctx->pc = 0x3af338u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 27) << 8);
label_3af33c:
    // 0x3af33c: 0x1b9b70  tge         $zero, $k1, 621
    ctx->pc = 0x3af33cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af340:
    // 0x3af340: 0x1b9d30  tge         $zero, $k1, 628
    ctx->pc = 0x3af340u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af344:
    // 0x3af344: 0x1b9d74  teq         $zero, $k1, 629
    ctx->pc = 0x3af344u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af348:
    // 0x3af348: 0x1ba1ac  .word       0x001BA1AC                   # dadd        $s4, $zero, $k1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af348u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_3af34c:
    // 0x3af34c: 0x1ba1f8  dsll        $s4, $k1, 7
    ctx->pc = 0x3af34cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 27) << 7);
label_3af350:
    // 0x3af350: 0x1ba5ac  .word       0x001BA5AC                   # dadd        $s4, $zero, $k1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af350u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_3af354:
    // 0x3af354: 0x1ba650  .word       0x001BA650                   # mfhi        $s4 # 001B0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af354u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_3af358:
    // 0x3af358: 0x1ba994  .word       0x001BA994                   # dsllv       $s5, $k1, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af358u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 27) << (GPR_U32(ctx, 0) & 0x3F));
label_3af35c:
    // 0x3af35c: 0x1baa7c  dsll32      $s5, $k1, 9
    ctx->pc = 0x3af35cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 27) << (32 + 9));
label_3af360:
    // 0x3af360: 0x1bad9c  .word       0x001BAD9C                   # dmult       $zero, $k1 # 0000AD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af360u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AF360 raw=0x001BAD9C");
label_3af364:
    // 0x3af364: 0x1bae68  .word       0x001BAE68                   # mfsa        $s5 # 001B0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af364u;
    SET_GPR_U32(ctx, 21, ctx->sa);
label_3af368:
    // 0x3af368: 0x1baf08  .word       0x001BAF08                   # jr          $zero # 001BAF00 <InstrIdType: CPU_SPECIAL>
label_3af36c:
    if (ctx->pc == 0x3AF36Cu) {
        ctx->pc = 0x3AF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF368u;
        // 0x3af36c: 0x1bb030  tge         $zero, $k1, 704 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF370u;
        goto label_3af370;
    }
    ctx->pc = 0x3AF368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF368u;
        // 0x3af36c: 0x1bb030  tge         $zero, $k1, 704 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF368u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AF370u;
label_3af370:
    // 0x3af370: 0x1bb1b8  dsll        $s6, $k1, 6
    ctx->pc = 0x3af370u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 27) << 6);
label_3af374:
    // 0x3af374: 0x1bb1fc  dsll32      $s6, $k1, 7
    ctx->pc = 0x3af374u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 27) << (32 + 7));
label_3af378:
    // 0x3af378: 0x1bb3ac  .word       0x001BB3AC                   # dadd        $s6, $zero, $k1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af378u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 27); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_3af37c:
    // 0x3af37c: 0x1bb3f8  dsll        $s6, $k1, 15
    ctx->pc = 0x3af37cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 27) << 15);
label_3af380:
    // 0x3af380: 0x1bb5fc  dsll32      $s6, $k1, 23
    ctx->pc = 0x3af380u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 27) << (32 + 23));
label_3af384:
    // 0x3af384: 0x1bb690  .word       0x001BB690                   # mfhi        $s6 # 001B0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af384u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_3af388:
    // 0x3af388: 0x1bb85c  .word       0x001BB85C                   # dmult       $zero, $k1 # 0000B840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af388u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AF388 raw=0x001BB85C");
label_3af38c:
    // 0x3af38c: 0x1bb93c  dsll32      $s7, $k1, 4
    ctx->pc = 0x3af38cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 27) << (32 + 4));
label_3af390:
    // 0x3af390: 0x1bbc44  .word       0x001BBC44                   # sllv        $s7, $k1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af390u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 27), GPR_U32(ctx, 0) & 0x1F));
label_3af394:
    // 0x3af394: 0x1bbda4  .word       0x001BBDA4                   # and         $s7, $zero, $k1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af394u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 27));
label_3af398:
    // 0x3af398: 0x1bbea8  .word       0x001BBEA8                   # mfsa        $s7 # 001B0680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af398u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_3af39c:
    // 0x3af39c: 0x1bbf38  dsll        $s7, $k1, 28
    ctx->pc = 0x3af39cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 27) << 28);
label_3af3a0:
    // 0x3af3a0: 0x1bc574  teq         $zero, $k1, 789
    ctx->pc = 0x3af3a0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af3a4:
    // 0x3af3a4: 0x1bc5d0  .word       0x001BC5D0                   # mfhi        $t8 # 001B05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af3a4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_3af3a8:
    // 0x3af3a8: 0x1bc97c  dsll32      $t9, $k1, 5
    ctx->pc = 0x3af3a8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 27) << (32 + 5));
label_3af3ac:
    // 0x3af3ac: 0x1bca20  .word       0x001BCA20                   # add         $t9, $zero, $k1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af3acu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_3af3b0:
    // 0x3af3b0: 0x1bcd58  .word       0x001BCD58                   # mult        $t9, $zero, $k1 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af3b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 27); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_3af3b4:
    // 0x3af3b4: 0x1bce4c  .word       0x001BCE4C                   # syscall     825 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af3b4u;
    ctx->pc = 0x3AF3B8u;
runtime->handleSyscall(rdram, ctx, 0x6F39u);
label_3af3b8:
    // 0x3af3b8: 0x0  nop
    ctx->pc = 0x3af3b8u;
    // NOP
label_3af3bc:
    // 0x3af3bc: 0x0  nop
    ctx->pc = 0x3af3bcu;
    // NOP
label_3af3c0:
    // 0x3af3c0: 0x1bd7f0  tge         $zero, $k1, 863
    ctx->pc = 0x3af3c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af3c4:
    // 0x3af3c4: 0x1bd980  sll         $k1, $k1, 6
    ctx->pc = 0x3af3c4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 27), 6));
label_3af3c8:
    // 0x3af3c8: 0x1bdaf0  tge         $zero, $k1, 875
    ctx->pc = 0x3af3c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af3cc:
    // 0x3af3cc: 0x1bdb68  .word       0x001BDB68                   # mfsa        $k1 # 001B0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af3ccu;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_3af3d0:
    // 0x3af3d0: 0x1bdefc  dsll32      $k1, $k1, 27
    ctx->pc = 0x3af3d0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 27));
label_3af3d4:
    // 0x3af3d4: 0x1bdf4c  .word       0x001BDF4C                   # syscall     893 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af3d4u;
    ctx->pc = 0x3AF3D8u;
runtime->handleSyscall(rdram, ctx, 0x6F7Du);
label_3af3d8:
    // 0x3af3d8: 0x1be14c  .word       0x001BE14C                   # syscall     901 # 001B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af3d8u;
    ctx->pc = 0x3AF3DCu;
runtime->handleSyscall(rdram, ctx, 0x6F85u);
label_3af3dc:
    // 0x3af3dc: 0x1be188  .word       0x001BE188                   # jr          $zero # 001BE180 <InstrIdType: CPU_SPECIAL>
label_3af3e0:
    if (ctx->pc == 0x3AF3E0u) {
        ctx->pc = 0x3AF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3DCu;
        // 0x3af3e0: 0x1be350  .word       0x001BE350                   # mfhi        $gp # 001B0340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF3E4u;
        goto label_3af3e4;
    }
    ctx->pc = 0x3AF3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3DCu;
        // 0x3af3e0: 0x1be350  .word       0x001BE350                   # mfhi        $gp # 001B0340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF3DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AF3E4u;
label_3af3e4:
    // 0x3af3e4: 0x1be434  teq         $zero, $k1, 912
    ctx->pc = 0x3af3e4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_3af3e8:
    // 0x3af3e8: 0x0  nop
    ctx->pc = 0x3af3e8u;
    // NOP
label_3af3ec:
    // 0x3af3ec: 0x0  nop
    ctx->pc = 0x3af3ecu;
    // NOP
label_3af3f0:
    // 0x3af3f0: 0x1c6a78  dsll        $t5, $gp, 9
    ctx->pc = 0x3af3f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 28) << 9);
label_3af3f4:
    // 0x3af3f4: 0x1c6af4  teq         $zero, $gp, 427
    ctx->pc = 0x3af3f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af3f8:
    // 0x3af3f8: 0x1c6fa4  .word       0x001C6FA4                   # and         $t5, $zero, $gp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af3f8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 28));
label_3af3fc:
    // 0x3af3fc: 0x1c7024  and         $t6, $zero, $gp
    ctx->pc = 0x3af3fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 28));
label_3af400:
    // 0x3af400: 0x1c74c4  .word       0x001C74C4                   # sllv        $t6, $gp, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af400u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 28), GPR_U32(ctx, 0) & 0x1F));
label_3af404:
    // 0x3af404: 0x1c7540  sll         $t6, $gp, 21
    ctx->pc = 0x3af404u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 28), 21));
label_3af408:
    // 0x3af408: 0x1c7788  .word       0x001C7788                   # jr          $zero # 001C7780 <InstrIdType: CPU_SPECIAL>
label_3af40c:
    if (ctx->pc == 0x3AF40Cu) {
        ctx->pc = 0x3AF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF408u;
        // 0x3af40c: 0x1c77c0  sll         $t6, $gp, 31 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 28), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF410u;
        goto label_3af410;
    }
    ctx->pc = 0x3AF408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF408u;
        // 0x3af40c: 0x1c77c0  sll         $t6, $gp, 31 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 28), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF408u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AF410u;
label_3af410:
    // 0x3af410: 0x1c7944  .word       0x001C7944                   # sllv        $t7, $gp, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af410u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 28), GPR_U32(ctx, 0) & 0x1F));
label_3af414:
    // 0x3af414: 0x1c7978  dsll        $t7, $gp, 5
    ctx->pc = 0x3af414u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 28) << 5);
label_3af418:
    // 0x3af418: 0x1c7b18  .word       0x001C7B18                   # mult        $t7, $zero, $gp # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3af41c:
    // 0x3af41c: 0x1c7b54  .word       0x001C7B54                   # dsllv       $t7, $gp, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af41cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af420:
    // 0x3af420: 0x1c7d34  teq         $zero, $gp, 500
    ctx->pc = 0x3af420u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af424:
    // 0x3af424: 0x1c7dd0  .word       0x001C7DD0                   # mfhi        $t7 # 001C05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af424u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_3af428:
    // 0x3af428: 0x1c7f94  .word       0x001C7F94                   # dsllv       $t7, $gp, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af428u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af42c:
    // 0x3af42c: 0x1c8034  teq         $zero, $gp, 512
    ctx->pc = 0x3af42cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af430:
    // 0x3af430: 0x1c8100  sll         $s0, $gp, 4
    ctx->pc = 0x3af430u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 28), 4));
label_3af434:
    // 0x3af434: 0x1c819c  .word       0x001C819C                   # dmult       $zero, $gp # 00008180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af434u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AF434 raw=0x001C819C");
label_3af438:
    // 0x3af438: 0x0  nop
    ctx->pc = 0x3af438u;
    // NOP
label_3af43c:
    // 0x3af43c: 0x0  nop
    ctx->pc = 0x3af43cu;
    // NOP
label_3af440:
    // 0x3af440: 0x1c8410  .word       0x001C8410                   # mfhi        $s0 # 001C0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af440u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_3af444:
    // 0x3af444: 0x1c84fc  dsll32      $s0, $gp, 19
    ctx->pc = 0x3af444u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 28) << (32 + 19));
label_3af448:
    // 0x3af448: 0x1c8688  .word       0x001C8688                   # jr          $zero # 001C8680 <InstrIdType: CPU_SPECIAL>
label_3af44c:
    if (ctx->pc == 0x3AF44Cu) {
        ctx->pc = 0x3AF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF448u;
        // 0x3af44c: 0x1c873c  dsll32      $s0, $gp, 28 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 28) << (32 + 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF450u;
        goto label_3af450;
    }
    ctx->pc = 0x3AF448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF448u;
        // 0x3af44c: 0x1c873c  dsll32      $s0, $gp, 28 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 28) << (32 + 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF448u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AF450u;
label_3af450:
    // 0x3af450: 0x1c8ab4  teq         $zero, $gp, 554
    ctx->pc = 0x3af450u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af454:
    // 0x3af454: 0x1c8b4c  .word       0x001C8B4C                   # syscall     557 # 001C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af454u;
    ctx->pc = 0x3AF458u;
runtime->handleSyscall(rdram, ctx, 0x722Du);
label_3af458:
    // 0x3af458: 0x0  nop
    ctx->pc = 0x3af458u;
    // NOP
label_3af45c:
    // 0x3af45c: 0x0  nop
    ctx->pc = 0x3af45cu;
    // NOP
label_3af460:
    // 0x3af460: 0x1c9034  teq         $zero, $gp, 576
    ctx->pc = 0x3af460u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af464:
    // 0x3af464: 0x1c91f8  dsll        $s2, $gp, 7
    ctx->pc = 0x3af464u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 28) << 7);
label_3af468:
    // 0x3af468: 0x1c9704  .word       0x001C9704                   # sllv        $s2, $gp, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af468u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 28), GPR_U32(ctx, 0) & 0x1F));
label_3af46c:
    // 0x3af46c: 0x1c9740  sll         $s2, $gp, 29
    ctx->pc = 0x3af46cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 28), 29));
label_3af470:
    // 0x3af470: 0x1c9a90  .word       0x001C9A90                   # mfhi        $s3 # 001C0280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af470u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_3af474:
    // 0x3af474: 0x1c9ad4  .word       0x001C9AD4                   # dsllv       $s3, $gp, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af474u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af478:
    // 0x3af478: 0x0  nop
    ctx->pc = 0x3af478u;
    // NOP
label_3af47c:
    // 0x3af47c: 0x0  nop
    ctx->pc = 0x3af47cu;
    // NOP
label_3af480:
    // 0x3af480: 0x1cb9f8  dsll        $s7, $gp, 7
    ctx->pc = 0x3af480u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 7);
label_3af484:
    // 0x3af484: 0x1cb9f8  dsll        $s7, $gp, 7
    ctx->pc = 0x3af484u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 7);
label_3af488:
    // 0x3af488: 0x1cb9f8  dsll        $s7, $gp, 7
    ctx->pc = 0x3af488u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 7);
label_3af48c:
    // 0x3af48c: 0x1cb9f8  dsll        $s7, $gp, 7
    ctx->pc = 0x3af48cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 7);
label_3af490:
    // 0x3af490: 0x1cb9f8  dsll        $s7, $gp, 7
    ctx->pc = 0x3af490u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 7);
label_3af494:
    // 0x3af494: 0x1cb9d4  .word       0x001CB9D4                   # dsllv       $s7, $gp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af494u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af498:
    // 0x3af498: 0x1cb9d4  .word       0x001CB9D4                   # dsllv       $s7, $gp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af498u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af49c:
    // 0x3af49c: 0x1cb9d4  .word       0x001CB9D4                   # dsllv       $s7, $gp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af49cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af4a0:
    // 0x3af4a0: 0x1cb9d4  .word       0x001CB9D4                   # dsllv       $s7, $gp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af4a4:
    // 0x3af4a4: 0x1cb9d4  .word       0x001CB9D4                   # dsllv       $s7, $gp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af4a8:
    // 0x3af4a8: 0x1cb9d4  .word       0x001CB9D4                   # dsllv       $s7, $gp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4a8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af4ac:
    // 0x3af4ac: 0x0  nop
    ctx->pc = 0x3af4acu;
    // NOP
label_3af4b0:
    // 0x3af4b0: 0x1cc12c  .word       0x001CC12C                   # dadd        $t8, $zero, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_3af4b4:
    // 0x3af4b4: 0x1cc12c  .word       0x001CC12C                   # dadd        $t8, $zero, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_3af4b8:
    // 0x3af4b8: 0x1cc12c  .word       0x001CC12C                   # dadd        $t8, $zero, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_3af4bc:
    // 0x3af4bc: 0x1cc12c  .word       0x001CC12C                   # dadd        $t8, $zero, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4bcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_3af4c0:
    // 0x3af4c0: 0x1cc12c  .word       0x001CC12C                   # dadd        $t8, $zero, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_3af4c4:
    // 0x3af4c4: 0x1cc340  sll         $t8, $gp, 13
    ctx->pc = 0x3af4c4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 28), 13));
label_3af4c8:
    // 0x3af4c8: 0x1cc43c  dsll32      $t8, $gp, 16
    ctx->pc = 0x3af4c8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 28) << (32 + 16));
label_3af4cc:
    // 0x3af4cc: 0x1cc53c  dsll32      $t8, $gp, 20
    ctx->pc = 0x3af4ccu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 28) << (32 + 20));
label_3af4d0:
    // 0x3af4d0: 0x1cc63c  dsll32      $t8, $gp, 24
    ctx->pc = 0x3af4d0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 28) << (32 + 24));
label_3af4d4:
    // 0x3af4d4: 0x1cc6a4  .word       0x001CC6A4                   # and         $t8, $zero, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4d4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & GPR_U64(ctx, 28));
label_3af4d8:
    // 0x3af4d8: 0x1cc70c  .word       0x001CC70C                   # syscall     796 # 001C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af4d8u;
    ctx->pc = 0x3AF4DCu;
runtime->handleSyscall(rdram, ctx, 0x731Cu);
label_3af4dc:
    // 0x3af4dc: 0x0  nop
    ctx->pc = 0x3af4dcu;
    // NOP
label_3af4e0:
    // 0x3af4e0: 0x1cbd38  dsll        $s7, $gp, 20
    ctx->pc = 0x3af4e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 20);
label_3af4e4:
    // 0x3af4e4: 0x1cbd78  dsll        $s7, $gp, 21
    ctx->pc = 0x3af4e4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 21);
label_3af4e8:
    // 0x3af4e8: 0x1cbdb8  dsll        $s7, $gp, 22
    ctx->pc = 0x3af4e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 22);
label_3af4ec:
    // 0x3af4ec: 0x1cbdf4  teq         $zero, $gp, 759
    ctx->pc = 0x3af4ecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af4f0:
    // 0x3af4f0: 0x1cbe34  teq         $zero, $gp, 760
    ctx->pc = 0x3af4f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af4f4:
    // 0x3af4f4: 0x1cbe74  teq         $zero, $gp, 761
    ctx->pc = 0x3af4f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af4f8:
    // 0x3af4f8: 0x1cbeb8  dsll        $s7, $gp, 26
    ctx->pc = 0x3af4f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 26);
label_3af4fc:
    // 0x3af4fc: 0x1cbefc  dsll32      $s7, $gp, 27
    ctx->pc = 0x3af4fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << (32 + 27));
label_3af500:
    // 0x3af500: 0x1cbf40  sll         $s7, $gp, 29
    ctx->pc = 0x3af500u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 28), 29));
label_3af504:
    // 0x3af504: 0x1cbf80  sll         $s7, $gp, 30
    ctx->pc = 0x3af504u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 28), 30));
label_3af508:
    // 0x3af508: 0x1cbfb8  dsll        $s7, $gp, 30
    ctx->pc = 0x3af508u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << 30);
label_3af50c:
    // 0x3af50c: 0x0  nop
    ctx->pc = 0x3af50cu;
    // NOP
label_3af510:
    // 0x3af510: 0x1cc7cc  .word       0x001CC7CC                   # syscall     799 # 001C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af510u;
    ctx->pc = 0x3AF514u;
runtime->handleSyscall(rdram, ctx, 0x731Fu);
label_3af514:
    // 0x3af514: 0x1cc848  .word       0x001CC848                   # jr          $zero # 001CC840 <InstrIdType: CPU_SPECIAL>
label_3af518:
    if (ctx->pc == 0x3AF518u) {
        ctx->pc = 0x3AF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF514u;
        // 0x3af518: 0x1ccdfc  dsll32      $t9, $gp, 23 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 28) << (32 + 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF51Cu;
        goto label_3af51c;
    }
    ctx->pc = 0x3AF514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF514u;
        // 0x3af518: 0x1ccdfc  dsll32      $t9, $gp, 23 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 28) << (32 + 23));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF514u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AF51Cu;
label_3af51c:
    // 0x3af51c: 0x1cce88  .word       0x001CCE88                   # jr          $zero # 001CCE80 <InstrIdType: CPU_SPECIAL>
label_3af520:
    if (ctx->pc == 0x3AF520u) {
        ctx->pc = 0x3AF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF51Cu;
        // 0x3af520: 0x1cd4c8  .word       0x001CD4C8                   # jr          $zero # 001CD4C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF524u;
        goto label_3af524;
    }
    ctx->pc = 0x3AF51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF51Cu;
        // 0x3af520: 0x1cd4c8  .word       0x001CD4C8                   # jr          $zero # 001CD4C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF51Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AF524u;
label_3af524:
    // 0x3af524: 0x1cd540  sll         $k0, $gp, 21
    ctx->pc = 0x3af524u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 28), 21));
label_3af528:
    // 0x3af528: 0x0  nop
    ctx->pc = 0x3af528u;
    // NOP
label_3af52c:
    // 0x3af52c: 0x0  nop
    ctx->pc = 0x3af52cu;
    // NOP
label_3af530:
    // 0x3af530: 0x1ce988  .word       0x001CE988                   # jr          $zero # 001CE980 <InstrIdType: CPU_SPECIAL>
label_3af534:
    if (ctx->pc == 0x3AF534u) {
        ctx->pc = 0x3AF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF530u;
        // 0x3af534: 0x1cea20  .word       0x001CEA20                   # add         $sp, $zero, $gp # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF538u;
        goto label_3af538;
    }
    ctx->pc = 0x3AF530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF530u;
        // 0x3af534: 0x1cea20  .word       0x001CEA20                   # add         $sp, $zero, $gp # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF530u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AF538u;
label_3af538:
    // 0x3af538: 0x1ced14  .word       0x001CED14                   # dsllv       $sp, $gp, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af538u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af53c:
    // 0x3af53c: 0x1ceda8  .word       0x001CEDA8                   # mfsa        $sp # 001C0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af53cu;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_3af540:
    // 0x3af540: 0x1cf0d4  .word       0x001CF0D4                   # dsllv       $fp, $gp, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af540u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af544:
    // 0x3af544: 0x1cf174  teq         $zero, $gp, 965
    ctx->pc = 0x3af544u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af548:
    // 0x3af548: 0x1cf3a4  .word       0x001CF3A4                   # and         $fp, $zero, $gp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af548u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & GPR_U64(ctx, 28));
label_3af54c:
    // 0x3af54c: 0x1cf3d8  .word       0x001CF3D8                   # mult        $fp, $zero, $gp # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_3af550:
    // 0x3af550: 0x1cf554  .word       0x001CF554                   # dsllv       $fp, $gp, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af550u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af554:
    // 0x3af554: 0x1cf58c  .word       0x001CF58C                   # syscall     982 # 001C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af554u;
    ctx->pc = 0x3AF558u;
runtime->handleSyscall(rdram, ctx, 0x73D6u);
label_3af558:
    // 0x3af558: 0x1cf738  dsll        $fp, $gp, 28
    ctx->pc = 0x3af558u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 28) << 28);
label_3af55c:
    // 0x3af55c: 0x1cf770  tge         $zero, $gp, 989
    ctx->pc = 0x3af55cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af560:
    // 0x3af560: 0x1cf954  .word       0x001CF954                   # dsllv       $ra, $gp, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af560u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 28) << (GPR_U32(ctx, 0) & 0x3F));
label_3af564:
    // 0x3af564: 0x1cf9f4  teq         $zero, $gp, 999
    ctx->pc = 0x3af564u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_3af568:
    // 0x3af568: 0x1cfbbc  dsll32      $ra, $gp, 14
    ctx->pc = 0x3af568u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 28) << (32 + 14));
label_3af56c:
    // 0x3af56c: 0x1cfc60  .word       0x001CFC60                   # add         $ra, $zero, $gp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af56cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_3af570:
    // 0x3af570: 0x1cfd2c  .word       0x001CFD2C                   # dadd        $ra, $zero, $gp # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af570u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_3af574:
    // 0x3af574: 0x1cfdc8  .word       0x001CFDC8                   # jr          $zero # 001CFDC0 <InstrIdType: CPU_SPECIAL>
label_3af578:
    if (ctx->pc == 0x3AF578u) {
        ctx->pc = 0x3AF57Cu;
        goto label_3af57c;
    }
    ctx->pc = 0x3AF574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF574u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AF57Cu;
label_3af57c:
    // 0x3af57c: 0x0  nop
    ctx->pc = 0x3af57cu;
    // NOP
label_3af580:
    // 0x3af580: 0x1d01c0  sll         $zero, $sp, 7
    ctx->pc = 0x3af580u;
    
label_3af584:
    // 0x3af584: 0x1d0294  .word       0x001D0294                   # dsllv       $zero, $sp, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af584u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) << (GPR_U32(ctx, 0) & 0x3F));
label_3af588:
    // 0x3af588: 0x1d04f0  tge         $zero, $sp, 19
    ctx->pc = 0x3af588u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_3af58c:
    // 0x3af58c: 0x1d0528  .word       0x001D0528                   # mfsa        $zero # 001D0500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af58cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3af590:
    // 0x3af590: 0x1d0704  .word       0x001D0704                   # sllv        $zero, $sp, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af590u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 29), GPR_U32(ctx, 0) & 0x1F));
label_3af594:
    // 0x3af594: 0x1d0734  teq         $zero, $sp, 28
    ctx->pc = 0x3af594u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_3af598:
    // 0x3af598: 0x0  nop
    ctx->pc = 0x3af598u;
    // NOP
label_3af59c:
    // 0x3af59c: 0x0  nop
    ctx->pc = 0x3af59cu;
    // NOP
label_3af5a0:
    // 0x3af5a0: 0x502f2e2e  beql        $at, $t7, . + 4 + (0x2E2E << 2)
label_3af5a4:
    if (ctx->pc == 0x3AF5A4u) {
        ctx->pc = 0x3AF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5A0u;
        // 0x3af5a4: 0x2f474f52  sltiu       $a3, $k0, 0x4F52 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 26) < (uint64_t)(int64_t)(int32_t)20306) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF5A8u;
        goto label_3af5a8;
    }
    ctx->pc = 0x3AF5A0u;
    {
        const bool branch_taken_0x3af5a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 15));
        if (branch_taken_0x3af5a0) {
            ctx->pc = 0x3AF5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF5A0u;
            // 0x3af5a4: 0x2f474f52  sltiu       $a3, $k0, 0x4F52 (Delay Slot)
            SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 26) < (uint64_t)(int64_t)(int32_t)20306) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BAE5Cu;
            return;
        }
    }
    ctx->pc = 0x3AF5A8u;
label_3af5a8:
    // 0x3af5a8: 0x6e69616d  ldr         $t1, 0x616D($s3)
    ctx->pc = 0x3af5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3af5ac:
    // 0x3af5ac: 0x666c652e  daddiu      $t4, $s3, 0x652E
    ctx->pc = 0x3af5acu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25902);
label_3af5b0:
    // 0x3af5b0: 0x0  nop
    ctx->pc = 0x3af5b0u;
    // NOP
label_3af5b4:
    // 0x3af5b4: 0x0  nop
    ctx->pc = 0x3af5b4u;
    // NOP
label_3af5b8:
    // 0x3af5b8: 0x532f2e2e  beql        $t9, $t7, . + 4 + (0x2E2E << 2)
label_3af5bc:
    if (ctx->pc == 0x3AF5BCu) {
        ctx->pc = 0x3AF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5B8u;
        // 0x3af5bc: 0x2e4d4554  sltiu       $t5, $s2, 0x4554 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17748) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF5C0u;
        goto label_3af5c0;
    }
    ctx->pc = 0x3AF5B8u;
    {
        const bool branch_taken_0x3af5b8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 15));
        if (branch_taken_0x3af5b8) {
            ctx->pc = 0x3AF5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF5B8u;
            // 0x3af5bc: 0x2e4d4554  sltiu       $t5, $s2, 0x4554 (Delay Slot)
            SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17748) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BAE74u;
            return;
        }
    }
    ctx->pc = 0x3AF5C0u;
label_3af5c0:
    // 0x3af5c0: 0x464e43  .word       0x00464E43                   # sra         $t1, $a2, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3af5c0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 6), 25));
label_3af5c4:
    // 0x3af5c4: 0x0  nop
    ctx->pc = 0x3af5c4u;
    // NOP
label_3af5c8:
    // 0x3af5c8: 0x0  nop
    ctx->pc = 0x3af5c8u;
    // NOP
label_3af5cc:
    // 0x3af5cc: 0x0  nop
    ctx->pc = 0x3af5ccu;
    // NOP
label_3af5d0:
    // 0x3af5d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af5d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af5d4:
    // 0x3af5d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af5d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af5d8:
    // 0x3af5d8: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af5d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF5D8 raw=0x75646F6D");
label_3af5dc:
    // 0x3af5dc: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af5dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af5e0:
    // 0x3af5e0: 0x7362696c  .word       0x7362696C                   # INVALID     $k1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3af5e0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x3AF5E0 raw=0x7362696C");
label_3af5e4:
    // 0x3af5e4: 0x72692e64  .word       0x72692E64                   # INVALID     $s3, $t1, 0x2E64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3af5e4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3AF5E4 raw=0x72692E64");
label_3af5e8:
    // 0x3af5e8: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x3af5e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_3af5ec:
    // 0x3af5ec: 0x0  nop
    ctx->pc = 0x3af5ecu;
    // NOP
label_3af5f0:
    // 0x3af5f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af5f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af5f4:
    // 0x3af5f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af5f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af5f8:
    // 0x3af5f8: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af5f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF5F8 raw=0x75646F6D");
label_3af5fc:
    // 0x3af5fc: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af5fcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af600:
    // 0x3af600: 0x616d636d  daddi       $t5, $t3, 0x636D
    ctx->pc = 0x3af600u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25453; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_3af604:
    // 0x3af604: 0x72692e6e  .word       0x72692E6E                   # INVALID     $s3, $t1, 0x2E6E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3af604u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3AF604 raw=0x72692E6E");
label_3af608:
    // 0x3af608: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x3af608u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_3af60c:
    // 0x3af60c: 0x0  nop
    ctx->pc = 0x3af60cu;
    // NOP
label_3af610:
    // 0x3af610: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af610u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af614:
    // 0x3af614: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af618:
    // 0x3af618: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af618u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF618 raw=0x75646F6D");
label_3af61c:
    // 0x3af61c: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af61cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af620:
    // 0x3af620: 0x6573636d  daddiu      $s3, $t3, 0x636D
    ctx->pc = 0x3af620u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25453);
label_3af624:
    // 0x3af624: 0x692e7672  ldl         $t6, 0x7672($t1)
    ctx->pc = 0x3af624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 30322); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_3af628:
    // 0x3af628: 0x7872  tlt         $zero, $zero, 481
    ctx->pc = 0x3af628u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3af62c:
    // 0x3af62c: 0x0  nop
    ctx->pc = 0x3af62cu;
    // NOP
label_3af630:
    // 0x3af630: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af630u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af634:
    // 0x3af634: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af638:
    // 0x3af638: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af638u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF638 raw=0x75646F6D");
label_3af63c:
    // 0x3af63c: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af63cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af640:
    // 0x3af640: 0x68646f6d  ldl         $a0, 0x6F6D($v1)
    ctx->pc = 0x3af640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3af644:
    // 0x3af644: 0x2e6e7973  sltiu       $t6, $s3, 0x7973
    ctx->pc = 0x3af644u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)31091) ? 1 : 0);
label_3af648:
    // 0x3af648: 0x787269  .word       0x00787269                   # mtsa        $v1 # 00187240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af648u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_3af64c:
    // 0x3af64c: 0x0  nop
    ctx->pc = 0x3af64cu;
    // NOP
label_3af650:
    // 0x3af650: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af650u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af654:
    // 0x3af654: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af654u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af658:
    // 0x3af658: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af658u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF658 raw=0x75646F6D");
label_3af65c:
    // 0x3af65c: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af65cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af660:
    // 0x3af660: 0x6d646f6d  ldr         $a0, 0x6F6D($t3)
    ctx->pc = 0x3af660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3af664:
    // 0x3af664: 0x2e696469  sltiu       $t1, $s3, 0x6469
    ctx->pc = 0x3af664u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25705) ? 1 : 0);
label_3af668:
    // 0x3af668: 0x787269  .word       0x00787269                   # mtsa        $v1 # 00187240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af668u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_3af66c:
    // 0x3af66c: 0x0  nop
    ctx->pc = 0x3af66cu;
    // NOP
label_3af670:
    // 0x3af670: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af670u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af674:
    // 0x3af674: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af674u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af678:
    // 0x3af678: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af678u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF678 raw=0x75646F6D");
label_3af67c:
    // 0x3af67c: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af67cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af680:
    // 0x3af680: 0x6d646f6d  ldr         $a0, 0x6F6D($t3)
    ctx->pc = 0x3af680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3af684:
    // 0x3af684: 0x2e6e6973  sltiu       $t6, $s3, 0x6973
    ctx->pc = 0x3af684u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26995) ? 1 : 0);
label_3af688:
    // 0x3af688: 0x787269  .word       0x00787269                   # mtsa        $v1 # 00187240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af688u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_3af68c:
    // 0x3af68c: 0x0  nop
    ctx->pc = 0x3af68cu;
    // NOP
label_3af690:
    // 0x3af690: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af690u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af694:
    // 0x3af694: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af698:
    // 0x3af698: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af698u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF698 raw=0x75646F6D");
label_3af69c:
    // 0x3af69c: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af69cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af6a0:
    // 0x3af6a0: 0x6d646170  ldr         $a0, 0x6170($t3)
    ctx->pc = 0x3af6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24944); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3af6a4:
    // 0x3af6a4: 0x692e6e61  ldl         $t6, 0x6E61($t1)
    ctx->pc = 0x3af6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_3af6a8:
    // 0x3af6a8: 0x7872  tlt         $zero, $zero, 481
    ctx->pc = 0x3af6a8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3af6ac:
    // 0x3af6ac: 0x0  nop
    ctx->pc = 0x3af6acu;
    // NOP
label_3af6b0:
    // 0x3af6b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af6b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af6b4:
    // 0x3af6b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af6b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af6b8:
    // 0x3af6b8: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af6b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF6B8 raw=0x75646F6D");
label_3af6bc:
    // 0x3af6bc: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af6bcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af6c0:
    // 0x3af6c0: 0x326f6973  andi        $t7, $s3, 0x6973
    ctx->pc = 0x3af6c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)26995);
label_3af6c4:
    // 0x3af6c4: 0x2e6e616d  sltiu       $t6, $s3, 0x616D
    ctx->pc = 0x3af6c4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
label_3af6c8:
    // 0x3af6c8: 0x787269  .word       0x00787269                   # mtsa        $v1 # 00187240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3af6c8u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_3af6cc:
    // 0x3af6cc: 0x0  nop
    ctx->pc = 0x3af6ccu;
    // NOP
label_3af6d0:
    // 0x3af6d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af6d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af6d4:
    // 0x3af6d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af6d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af6d8:
    // 0x3af6d8: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af6d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF6D8 raw=0x75646F6D");
label_3af6dc:
    // 0x3af6dc: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af6dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af6e0:
    // 0x3af6e0: 0x6f6d6463  ldr         $t5, 0x6463($k1)
    ctx->pc = 0x3af6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_3af6e4:
    // 0x3af6e4: 0x656c7564  daddiu      $t4, $t3, 0x7564
    ctx->pc = 0x3af6e4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30052);
label_3af6e8:
    // 0x3af6e8: 0x7872692e  lq          $s2, 0x692E($v1)
    ctx->pc = 0x3af6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 26926)));
label_3af6ec:
    // 0x3af6ec: 0x0  nop
    ctx->pc = 0x3af6ecu;
    // NOP
label_3af6f0:
    // 0x3af6f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af6f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af6f4:
    // 0x3af6f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af6f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af6f8:
    // 0x3af6f8: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af6f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF6F8 raw=0x75646F6D");
label_3af6fc:
    // 0x3af6fc: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af6fcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af700:
    // 0x3af700: 0x646e7374  daddiu      $t6, $v1, 0x7374
    ctx->pc = 0x3af700u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29556);
label_3af704:
    // 0x3af704: 0x6d767264  ldr         $s6, 0x7264($t3)
    ctx->pc = 0x3af704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
label_3af708:
    // 0x3af708: 0x7872692e  lq          $s2, 0x692E($v1)
    ctx->pc = 0x3af708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 26926)));
label_3af70c:
    // 0x3af70c: 0x0  nop
    ctx->pc = 0x3af70cu;
    // NOP
label_3af710:
    // 0x3af710: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af710u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af714:
    // 0x3af714: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af714u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af718:
    // 0x3af718: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3af718u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AF718 raw=0x75646F6D");
label_3af71c:
    // 0x3af71c: 0x2f73656c  sltiu       $s3, $k1, 0x656C
    ctx->pc = 0x3af71cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_3af720:
    // 0x3af720: 0x72706f69  .word       0x72706F69                   # INVALID     $s3, $s0, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x3af720u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x3AF720 raw=0x72706F69");
label_3af724:
    // 0x3af724: 0x31313270  andi        $s1, $t1, 0x3270
    ctx->pc = 0x3af724u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12912);
label_3af728:
    // 0x3af728: 0x676d692e  daddiu      $t5, $k1, 0x692E
    ctx->pc = 0x3af728u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26926);
label_3af72c:
    // 0x3af72c: 0x0  nop
    ctx->pc = 0x3af72cu;
    // NOP
label_3af730:
    // 0x3af730: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af730u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af734:
    // 0x3af734: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af734u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af738:
    // 0x3af738: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af738u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af73c:
    // 0x3af73c: 0x62306d65  daddi       $s0, $s1, 0x6D65
    ctx->pc = 0x3af73cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)28005; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3af740:
    // 0x3af740: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af740u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af744:
    // 0x3af744: 0x0  nop
    ctx->pc = 0x3af744u;
    // NOP
label_3af748:
    // 0x3af748: 0x0  nop
    ctx->pc = 0x3af748u;
    // NOP
label_3af74c:
    // 0x3af74c: 0x0  nop
    ctx->pc = 0x3af74cu;
    // NOP
label_3af750:
    // 0x3af750: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af750u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af754:
    // 0x3af754: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af754u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af758:
    // 0x3af758: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af758u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af75c:
    // 0x3af75c: 0x30316d65  andi        $s1, $at, 0x6D65
    ctx->pc = 0x3af75cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)28005);
label_3af760:
    // 0x3af760: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af760u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af764:
    // 0x3af764: 0x0  nop
    ctx->pc = 0x3af764u;
    // NOP
label_3af768:
    // 0x3af768: 0x0  nop
    ctx->pc = 0x3af768u;
    // NOP
label_3af76c:
    // 0x3af76c: 0x0  nop
    ctx->pc = 0x3af76cu;
    // NOP
label_3af770:
    // 0x3af770: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af770u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af774:
    // 0x3af774: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af778:
    // 0x3af778: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af778u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af77c:
    // 0x3af77c: 0x35306d65  ori         $s0, $t1, 0x6D65
    ctx->pc = 0x3af77cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)28005);
label_3af780:
    // 0x3af780: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af780u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af784:
    // 0x3af784: 0x0  nop
    ctx->pc = 0x3af784u;
    // NOP
label_3af788:
    // 0x3af788: 0x0  nop
    ctx->pc = 0x3af788u;
    // NOP
label_3af78c:
    // 0x3af78c: 0x0  nop
    ctx->pc = 0x3af78cu;
    // NOP
label_3af790:
    // 0x3af790: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af790u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af794:
    // 0x3af794: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af794u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af798:
    // 0x3af798: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af798u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af79c:
    // 0x3af79c: 0x65306d65  daddiu      $s0, $t1, 0x6D65
    ctx->pc = 0x3af79cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)28005);
label_3af7a0:
    // 0x3af7a0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af7a0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af7a4:
    // 0x3af7a4: 0x0  nop
    ctx->pc = 0x3af7a4u;
    // NOP
label_3af7a8:
    // 0x3af7a8: 0x0  nop
    ctx->pc = 0x3af7a8u;
    // NOP
label_3af7ac:
    // 0x3af7ac: 0x0  nop
    ctx->pc = 0x3af7acu;
    // NOP
label_3af7b0:
    // 0x3af7b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af7b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af7b4:
    // 0x3af7b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af7b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af7b8:
    // 0x3af7b8: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af7b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af7bc:
    // 0x3af7bc: 0x64306d65  daddiu      $s0, $at, 0x6D65
    ctx->pc = 0x3af7bcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)28005);
label_3af7c0:
    // 0x3af7c0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af7c0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af7c4:
    // 0x3af7c4: 0x0  nop
    ctx->pc = 0x3af7c4u;
    // NOP
label_3af7c8:
    // 0x3af7c8: 0x0  nop
    ctx->pc = 0x3af7c8u;
    // NOP
label_3af7cc:
    // 0x3af7cc: 0x0  nop
    ctx->pc = 0x3af7ccu;
    // NOP
label_3af7d0:
    // 0x3af7d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af7d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af7d4:
    // 0x3af7d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af7d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af7d8:
    // 0x3af7d8: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af7d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af7dc:
    // 0x3af7dc: 0x63306d65  daddi       $s0, $t9, 0x6D65
    ctx->pc = 0x3af7dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28005; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3af7e0:
    // 0x3af7e0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af7e0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af7e4:
    // 0x3af7e4: 0x0  nop
    ctx->pc = 0x3af7e4u;
    // NOP
label_3af7e8:
    // 0x3af7e8: 0x0  nop
    ctx->pc = 0x3af7e8u;
    // NOP
label_3af7ec:
    // 0x3af7ec: 0x0  nop
    ctx->pc = 0x3af7ecu;
    // NOP
label_3af7f0:
    // 0x3af7f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af7f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af7f4:
    // 0x3af7f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af7f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af7f8:
    // 0x3af7f8: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af7f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af7fc:
    // 0x3af7fc: 0x66316d65  daddiu      $s1, $s1, 0x6D65
    ctx->pc = 0x3af7fcu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)28005);
label_3af800:
    // 0x3af800: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af800u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af804:
    // 0x3af804: 0x0  nop
    ctx->pc = 0x3af804u;
    // NOP
label_3af808:
    // 0x3af808: 0x0  nop
    ctx->pc = 0x3af808u;
    // NOP
label_3af80c:
    // 0x3af80c: 0x0  nop
    ctx->pc = 0x3af80cu;
    // NOP
label_3af810:
    // 0x3af810: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af810u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af814:
    // 0x3af814: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af814u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af818:
    // 0x3af818: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af818u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af81c:
    // 0x3af81c: 0x36306d65  ori         $s0, $s1, 0x6D65
    ctx->pc = 0x3af81cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)28005);
label_3af820:
    // 0x3af820: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af820u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af824:
    // 0x3af824: 0x0  nop
    ctx->pc = 0x3af824u;
    // NOP
label_3af828:
    // 0x3af828: 0x0  nop
    ctx->pc = 0x3af828u;
    // NOP
label_3af82c:
    // 0x3af82c: 0x0  nop
    ctx->pc = 0x3af82cu;
    // NOP
label_3af830:
    // 0x3af830: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af830u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af834:
    // 0x3af834: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af838:
    // 0x3af838: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af838u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af83c:
    // 0x3af83c: 0x30306d65  andi        $s0, $at, 0x6D65
    ctx->pc = 0x3af83cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)28005);
label_3af840:
    // 0x3af840: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af840u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af844:
    // 0x3af844: 0x0  nop
    ctx->pc = 0x3af844u;
    // NOP
label_3af848:
    // 0x3af848: 0x0  nop
    ctx->pc = 0x3af848u;
    // NOP
label_3af84c:
    // 0x3af84c: 0x0  nop
    ctx->pc = 0x3af84cu;
    // NOP
label_3af850:
    // 0x3af850: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af850u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af854:
    // 0x3af854: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af854u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af858:
    // 0x3af858: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af858u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af85c:
    // 0x3af85c: 0x32306d65  andi        $s0, $s1, 0x6D65
    ctx->pc = 0x3af85cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)28005);
label_3af860:
    // 0x3af860: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af860u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af864:
    // 0x3af864: 0x0  nop
    ctx->pc = 0x3af864u;
    // NOP
label_3af868:
    // 0x3af868: 0x0  nop
    ctx->pc = 0x3af868u;
    // NOP
label_3af86c:
    // 0x3af86c: 0x0  nop
    ctx->pc = 0x3af86cu;
    // NOP
label_3af870:
    // 0x3af870: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af870u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af874:
    // 0x3af874: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af874u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af878:
    // 0x3af878: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af878u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af87c:
    // 0x3af87c: 0x33306d65  andi        $s0, $t9, 0x6D65
    ctx->pc = 0x3af87cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)28005);
label_3af880:
    // 0x3af880: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af880u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af884:
    // 0x3af884: 0x0  nop
    ctx->pc = 0x3af884u;
    // NOP
label_3af888:
    // 0x3af888: 0x0  nop
    ctx->pc = 0x3af888u;
    // NOP
label_3af88c:
    // 0x3af88c: 0x0  nop
    ctx->pc = 0x3af88cu;
    // NOP
label_3af890:
    // 0x3af890: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af890u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af894:
    // 0x3af894: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af894u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af898:
    // 0x3af898: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af898u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af89c:
    // 0x3af89c: 0x37306d65  ori         $s0, $t9, 0x6D65
    ctx->pc = 0x3af89cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)28005);
label_3af8a0:
    // 0x3af8a0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af8a0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af8a4:
    // 0x3af8a4: 0x0  nop
    ctx->pc = 0x3af8a4u;
    // NOP
label_3af8a8:
    // 0x3af8a8: 0x0  nop
    ctx->pc = 0x3af8a8u;
    // NOP
label_3af8ac:
    // 0x3af8ac: 0x0  nop
    ctx->pc = 0x3af8acu;
    // NOP
label_3af8b0:
    // 0x3af8b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af8b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af8b4:
    // 0x3af8b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af8b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af8b8:
    // 0x3af8b8: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af8b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af8bc:
    // 0x3af8bc: 0x31306d65  andi        $s0, $t1, 0x6D65
    ctx->pc = 0x3af8bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)28005);
label_3af8c0:
    // 0x3af8c0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af8c0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af8c4:
    // 0x3af8c4: 0x0  nop
    ctx->pc = 0x3af8c4u;
    // NOP
label_3af8c8:
    // 0x3af8c8: 0x0  nop
    ctx->pc = 0x3af8c8u;
    // NOP
label_3af8cc:
    // 0x3af8cc: 0x0  nop
    ctx->pc = 0x3af8ccu;
    // NOP
label_3af8d0:
    // 0x3af8d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af8d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af8d4:
    // 0x3af8d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af8d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af8d8:
    // 0x3af8d8: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af8d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af8dc:
    // 0x3af8dc: 0x38316d65  xori        $s1, $at, 0x6D65
    ctx->pc = 0x3af8dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)28005);
label_3af8e0:
    // 0x3af8e0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af8e0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af8e4:
    // 0x3af8e4: 0x0  nop
    ctx->pc = 0x3af8e4u;
    // NOP
label_3af8e8:
    // 0x3af8e8: 0x0  nop
    ctx->pc = 0x3af8e8u;
    // NOP
label_3af8ec:
    // 0x3af8ec: 0x0  nop
    ctx->pc = 0x3af8ecu;
    // NOP
label_3af8f0:
    // 0x3af8f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af8f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af8f4:
    // 0x3af8f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af8f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af8f8:
    // 0x3af8f8: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af8f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af8fc:
    // 0x3af8fc: 0x39316d65  xori        $s1, $t1, 0x6D65
    ctx->pc = 0x3af8fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)28005);
label_3af900:
    // 0x3af900: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af900u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af904:
    // 0x3af904: 0x0  nop
    ctx->pc = 0x3af904u;
    // NOP
label_3af908:
    // 0x3af908: 0x0  nop
    ctx->pc = 0x3af908u;
    // NOP
label_3af90c:
    // 0x3af90c: 0x0  nop
    ctx->pc = 0x3af90cu;
    // NOP
label_3af910:
    // 0x3af910: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af910u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af914:
    // 0x3af914: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af918:
    // 0x3af918: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af918u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af91c:
    // 0x3af91c: 0x34316d65  ori         $s1, $at, 0x6D65
    ctx->pc = 0x3af91cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28005);
label_3af920:
    // 0x3af920: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af920u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af924:
    // 0x3af924: 0x0  nop
    ctx->pc = 0x3af924u;
    // NOP
label_3af928:
    // 0x3af928: 0x0  nop
    ctx->pc = 0x3af928u;
    // NOP
label_3af92c:
    // 0x3af92c: 0x0  nop
    ctx->pc = 0x3af92cu;
    // NOP
label_3af930:
    // 0x3af930: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af930u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af934:
    // 0x3af934: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af938:
    // 0x3af938: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af938u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af93c:
    // 0x3af93c: 0x66306d65  daddiu      $s0, $s1, 0x6D65
    ctx->pc = 0x3af93cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)28005);
label_3af940:
    // 0x3af940: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af940u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af944:
    // 0x3af944: 0x0  nop
    ctx->pc = 0x3af944u;
    // NOP
label_3af948:
    // 0x3af948: 0x0  nop
    ctx->pc = 0x3af948u;
    // NOP
label_3af94c:
    // 0x3af94c: 0x0  nop
    ctx->pc = 0x3af94cu;
    // NOP
label_3af950:
    // 0x3af950: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af950u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af954:
    // 0x3af954: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af958:
    // 0x3af958: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af958u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af95c:
    // 0x3af95c: 0x34306d65  ori         $s0, $at, 0x6D65
    ctx->pc = 0x3af95cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28005);
label_3af960:
    // 0x3af960: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af960u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af964:
    // 0x3af964: 0x0  nop
    ctx->pc = 0x3af964u;
    // NOP
label_3af968:
    // 0x3af968: 0x0  nop
    ctx->pc = 0x3af968u;
    // NOP
label_3af96c:
    // 0x3af96c: 0x0  nop
    ctx->pc = 0x3af96cu;
    // NOP
label_3af970:
    // 0x3af970: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af970u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af974:
    // 0x3af974: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af974u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af978:
    // 0x3af978: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af978u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af97c:
    // 0x3af97c: 0x39306d65  xori        $s0, $t1, 0x6D65
    ctx->pc = 0x3af97cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)28005);
label_3af980:
    // 0x3af980: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af980u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af984:
    // 0x3af984: 0x0  nop
    ctx->pc = 0x3af984u;
    // NOP
label_3af988:
    // 0x3af988: 0x0  nop
    ctx->pc = 0x3af988u;
    // NOP
label_3af98c:
    // 0x3af98c: 0x0  nop
    ctx->pc = 0x3af98cu;
    // NOP
label_3af990:
    // 0x3af990: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af990u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af994:
    // 0x3af994: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af994u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af998:
    // 0x3af998: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af998u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af99c:
    // 0x3af99c: 0x34326d65  ori         $s2, $at, 0x6D65
    ctx->pc = 0x3af99cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28005);
label_3af9a0:
    // 0x3af9a0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af9a0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af9a4:
    // 0x3af9a4: 0x0  nop
    ctx->pc = 0x3af9a4u;
    // NOP
label_3af9a8:
    // 0x3af9a8: 0x0  nop
    ctx->pc = 0x3af9a8u;
    // NOP
label_3af9ac:
    // 0x3af9ac: 0x0  nop
    ctx->pc = 0x3af9acu;
    // NOP
label_3af9b0:
    // 0x3af9b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af9b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af9b4:
    // 0x3af9b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af9b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af9b8:
    // 0x3af9b8: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af9b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af9bc:
    // 0x3af9bc: 0x30326d65  andi        $s2, $at, 0x6D65
    ctx->pc = 0x3af9bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)28005);
label_3af9c0:
    // 0x3af9c0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af9c0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af9c4:
    // 0x3af9c4: 0x0  nop
    ctx->pc = 0x3af9c4u;
    // NOP
label_3af9c8:
    // 0x3af9c8: 0x0  nop
    ctx->pc = 0x3af9c8u;
    // NOP
label_3af9cc:
    // 0x3af9cc: 0x0  nop
    ctx->pc = 0x3af9ccu;
    // NOP
label_3af9d0:
    // 0x3af9d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af9d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af9d4:
    // 0x3af9d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af9d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af9d8:
    // 0x3af9d8: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af9d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af9dc:
    // 0x3af9dc: 0x61316d65  daddi       $s1, $t1, 0x6D65
    ctx->pc = 0x3af9dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)28005; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, res); }
label_3af9e0:
    // 0x3af9e0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3af9e0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3af9e4:
    // 0x3af9e4: 0x0  nop
    ctx->pc = 0x3af9e4u;
    // NOP
label_3af9e8:
    // 0x3af9e8: 0x0  nop
    ctx->pc = 0x3af9e8u;
    // NOP
label_3af9ec:
    // 0x3af9ec: 0x0  nop
    ctx->pc = 0x3af9ecu;
    // NOP
label_3af9f0:
    // 0x3af9f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3af9f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3af9f4:
    // 0x3af9f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3af9f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3af9f8:
    // 0x3af9f8: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3af9f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3af9fc:
    // 0x3af9fc: 0x62316d65  daddi       $s1, $s1, 0x6D65
    ctx->pc = 0x3af9fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)28005; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, res); }
label_3afa00:
    // 0x3afa00: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3afa00u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3afa04:
    // 0x3afa04: 0x0  nop
    ctx->pc = 0x3afa04u;
    // NOP
label_3afa08:
    // 0x3afa08: 0x0  nop
    ctx->pc = 0x3afa08u;
    // NOP
label_3afa0c:
    // 0x3afa0c: 0x0  nop
    ctx->pc = 0x3afa0cu;
    // NOP
label_3afa10:
    // 0x3afa10: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afa10u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afa14:
    // 0x3afa14: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afa14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afa18:
    // 0x3afa18: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3afa18u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3afa1c:
    // 0x3afa1c: 0x61306d65  daddi       $s0, $t1, 0x6D65
    ctx->pc = 0x3afa1cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)28005; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3afa20:
    // 0x3afa20: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3afa20u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3afa24:
    // 0x3afa24: 0x0  nop
    ctx->pc = 0x3afa24u;
    // NOP
label_3afa28:
    // 0x3afa28: 0x0  nop
    ctx->pc = 0x3afa28u;
    // NOP
label_3afa2c:
    // 0x3afa2c: 0x0  nop
    ctx->pc = 0x3afa2cu;
    // NOP
label_3afa30:
    // 0x3afa30: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afa30u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afa34:
    // 0x3afa34: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afa34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afa38:
    // 0x3afa38: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3afa38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3afa3c:
    // 0x3afa3c: 0x63316d65  daddi       $s1, $t9, 0x6D65
    ctx->pc = 0x3afa3cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28005; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, res); }
label_3afa40:
    // 0x3afa40: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3afa40u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3afa44:
    // 0x3afa44: 0x0  nop
    ctx->pc = 0x3afa44u;
    // NOP
label_3afa48:
    // 0x3afa48: 0x0  nop
    ctx->pc = 0x3afa48u;
    // NOP
label_3afa4c:
    // 0x3afa4c: 0x0  nop
    ctx->pc = 0x3afa4cu;
    // NOP
label_3afa50:
    // 0x3afa50: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afa50u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afa54:
    // 0x3afa54: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afa54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afa58:
    // 0x3afa58: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3afa58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3afa5c:
    // 0x3afa5c: 0x64316d65  daddiu      $s1, $at, 0x6D65
    ctx->pc = 0x3afa5cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)28005);
label_3afa60:
    // 0x3afa60: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3afa60u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3afa64:
    // 0x3afa64: 0x0  nop
    ctx->pc = 0x3afa64u;
    // NOP
label_3afa68:
    // 0x3afa68: 0x0  nop
    ctx->pc = 0x3afa68u;
    // NOP
label_3afa6c:
    // 0x3afa6c: 0x0  nop
    ctx->pc = 0x3afa6cu;
    // NOP
label_3afa70:
    // 0x3afa70: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afa70u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afa74:
    // 0x3afa74: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afa74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afa78:
    // 0x3afa78: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3afa78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3afa7c:
    // 0x3afa7c: 0x65316d65  daddiu      $s1, $t1, 0x6D65
    ctx->pc = 0x3afa7cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)28005);
label_3afa80:
    // 0x3afa80: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3afa80u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3afa84:
    // 0x3afa84: 0x0  nop
    ctx->pc = 0x3afa84u;
    // NOP
label_3afa88:
    // 0x3afa88: 0x0  nop
    ctx->pc = 0x3afa88u;
    // NOP
label_3afa8c:
    // 0x3afa8c: 0x0  nop
    ctx->pc = 0x3afa8cu;
    // NOP
label_3afa90:
    // 0x3afa90: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afa90u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afa94:
    // 0x3afa94: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afa94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afa98:
    // 0x3afa98: 0x2f646d45  sltiu       $a0, $k1, 0x6D45
    ctx->pc = 0x3afa98u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27973) ? 1 : 0);
label_3afa9c:
    // 0x3afa9c: 0x38306d65  xori        $s0, $at, 0x6D65
    ctx->pc = 0x3afa9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)28005);
label_3afaa0:
    // 0x3afaa0: 0x646d652e  daddiu      $t5, $v1, 0x652E
    ctx->pc = 0x3afaa0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25902);
label_3afaa4:
    // 0x3afaa4: 0x0  nop
    ctx->pc = 0x3afaa4u;
    // NOP
label_3afaa8:
    // 0x3afaa8: 0x0  nop
    ctx->pc = 0x3afaa8u;
    // NOP
label_3afaac:
    // 0x3afaac: 0x0  nop
    ctx->pc = 0x3afaacu;
    // NOP
label_3afab0:
    // 0x3afab0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afab0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afab4:
    // 0x3afab4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afab8:
    // 0x3afab8: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afab8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afabc:
    // 0x3afabc: 0x63666665  daddi       $a2, $k1, 0x6665
    ctx->pc = 0x3afabcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_3afac0:
    // 0x3afac0: 0x612e6d6f  daddi       $t6, $t1, 0x6D6F
    ctx->pc = 0x3afac0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)28015; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_3afac4:
    // 0x3afac4: 0x6d6e  .word       0x00006D6E                   # dsub        $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3afac4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_3afac8:
    // 0x3afac8: 0x0  nop
    ctx->pc = 0x3afac8u;
    // NOP
label_3afacc:
    // 0x3afacc: 0x0  nop
    ctx->pc = 0x3afaccu;
    // NOP
label_3afad0:
    // 0x3afad0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afad0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afad4:
    // 0x3afad4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afad8:
    // 0x3afad8: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afad8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afadc:
    // 0x3afadc: 0x63706163  daddi       $s0, $k1, 0x6163
    ctx->pc = 0x3afadcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24931; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3afae0:
    // 0x3afae0: 0x742e6d6f  .word       0x742E6D6F                   # INVALID     $at, $t6, 0x6D6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3afae0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AFAE0 raw=0x742E6D6F");
label_3afae4:
    // 0x3afae4: 0x326d  .word       0x0000326D                   # daddu       $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3afae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3afae8:
    // 0x3afae8: 0x0  nop
    ctx->pc = 0x3afae8u;
    // NOP
label_3afaec:
    // 0x3afaec: 0x0  nop
    ctx->pc = 0x3afaecu;
    // NOP
label_3afaf0:
    // 0x3afaf0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afaf0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afaf4:
    // 0x3afaf4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afaf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afaf8:
    // 0x3afaf8: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afaf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afafc:
    // 0x3afafc: 0x696a6f6d  ldl         $t2, 0x6F6D($t3)
    ctx->pc = 0x3afafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3afb00:
    // 0x3afb00: 0x6d742e38  ldr         $s4, 0x2E38($t3)
    ctx->pc = 0x3afb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 11832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_3afb04:
    // 0x3afb04: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x3afb04u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3afb08:
    // 0x3afb08: 0x0  nop
    ctx->pc = 0x3afb08u;
    // NOP
label_3afb0c:
    // 0x3afb0c: 0x0  nop
    ctx->pc = 0x3afb0cu;
    // NOP
label_3afb10:
    // 0x3afb10: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afb10u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afb14:
    // 0x3afb14: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afb14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afb18:
    // 0x3afb18: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afb18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afb1c:
    // 0x3afb1c: 0x63666665  daddi       $a2, $k1, 0x6665
    ctx->pc = 0x3afb1cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_3afb20:
    // 0x3afb20: 0x742e6d6f  .word       0x742E6D6F                   # INVALID     $at, $t6, 0x6D6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3afb20u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AFB20 raw=0x742E6D6F");
label_3afb24:
    // 0x3afb24: 0x3233  tltu        $zero, $zero, 200
    ctx->pc = 0x3afb24u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3afb28:
    // 0x3afb28: 0x0  nop
    ctx->pc = 0x3afb28u;
    // NOP
label_3afb2c:
    // 0x3afb2c: 0x0  nop
    ctx->pc = 0x3afb2cu;
    // NOP
label_3afb30:
    // 0x3afb30: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afb30u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afb34:
    // 0x3afb34: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afb34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afb38:
    // 0x3afb38: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afb38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afb3c:
    // 0x3afb3c: 0x6c746954  ldr         $s4, 0x6954($v1)
    ctx->pc = 0x3afb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_3afb40:
    // 0x3afb40: 0x6d742e65  ldr         $s4, 0x2E65($t3)
    ctx->pc = 0x3afb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 11877); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_3afb44:
    // 0x3afb44: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x3afb44u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3afb48:
    // 0x3afb48: 0x0  nop
    ctx->pc = 0x3afb48u;
    // NOP
label_3afb4c:
    // 0x3afb4c: 0x0  nop
    ctx->pc = 0x3afb4cu;
    // NOP
label_3afb50:
    // 0x3afb50: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afb50u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afb54:
    // 0x3afb54: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afb54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afb58:
    // 0x3afb58: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afb58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afb5c:
    // 0x3afb5c: 0x63666665  daddi       $a2, $k1, 0x6665
    ctx->pc = 0x3afb5cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_3afb60:
    // 0x3afb60: 0x652e6d6f  daddiu      $t6, $t1, 0x6D6F
    ctx->pc = 0x3afb60u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)28015);
label_3afb64:
    // 0x3afb64: 0x6163  .word       0x00006163                   # negu        $t4, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3afb64u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3afb68:
    // 0x3afb68: 0x0  nop
    ctx->pc = 0x3afb68u;
    // NOP
label_3afb6c:
    // 0x3afb6c: 0x0  nop
    ctx->pc = 0x3afb6cu;
    // NOP
label_3afb70:
    // 0x3afb70: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afb70u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afb74:
    // 0x3afb74: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afb74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afb78:
    // 0x3afb78: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afb78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afb7c:
    // 0x3afb7c: 0x73726966  .word       0x73726966                   # INVALID     $k1, $s2, 0x6966 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3afb7cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x3AFB7C raw=0x73726966");
label_3afb80:
    // 0x3afb80: 0x61642e74  daddi       $a0, $t3, 0x2E74
    ctx->pc = 0x3afb80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11892; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_3afb84:
    // 0x3afb84: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x3afb84u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3afb88:
    // 0x3afb88: 0x0  nop
    ctx->pc = 0x3afb88u;
    // NOP
label_3afb8c:
    // 0x3afb8c: 0x0  nop
    ctx->pc = 0x3afb8cu;
    // NOP
label_3afb90:
    // 0x3afb90: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afb90u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afb94:
    // 0x3afb94: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afb94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afb98:
    // 0x3afb98: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afb98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afb9c:
    // 0x3afb9c: 0x63666665  daddi       $a2, $k1, 0x6665
    ctx->pc = 0x3afb9cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_3afba0:
    // 0x3afba0: 0x742e6d6f  .word       0x742E6D6F                   # INVALID     $at, $t6, 0x6D6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3afba0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AFBA0 raw=0x742E6D6F");
label_3afba4:
    // 0x3afba4: 0x326d  .word       0x0000326D                   # daddu       $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3afba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3afba8:
    // 0x3afba8: 0x0  nop
    ctx->pc = 0x3afba8u;
    // NOP
label_3afbac:
    // 0x3afbac: 0x0  nop
    ctx->pc = 0x3afbacu;
    // NOP
label_3afbb0:
    // 0x3afbb0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afbb0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afbb4:
    // 0x3afbb4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afbb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afbb8:
    // 0x3afbb8: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afbb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afbbc:
    // 0x3afbbc: 0x6f6c6f63  ldr         $t4, 0x6F63($k1)
    ctx->pc = 0x3afbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3afbc0:
    // 0x3afbc0: 0x6d742e72  ldr         $s4, 0x2E72($t3)
    ctx->pc = 0x3afbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 11890); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_3afbc4:
    // 0x3afbc4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x3afbc4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3afbc8:
    // 0x3afbc8: 0x0  nop
    ctx->pc = 0x3afbc8u;
    // NOP
label_3afbcc:
    // 0x3afbcc: 0x0  nop
    ctx->pc = 0x3afbccu;
    // NOP
label_3afbd0:
    // 0x3afbd0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afbd0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afbd4:
    // 0x3afbd4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afbd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afbd8:
    // 0x3afbd8: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afbd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afbdc:
    // 0x3afbdc: 0x5f666564  .word       0x5F666564                   # bgtzl       $k1, . + 4 + (0x6564 << 2) # 00060000 <InstrIdType: CPU_NORMAL>
label_3afbe0:
    if (ctx->pc == 0x3AFBE0u) {
        ctx->pc = 0x3AFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFBDCu;
        // 0x3afbe0: 0x2e6d6665  sltiu       $t5, $s3, 0x6665 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26213) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFBE4u;
        goto label_3afbe4;
    }
    ctx->pc = 0x3AFBDCu;
    {
        const bool branch_taken_0x3afbdc = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3afbdc) {
            ctx->pc = 0x3AFBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFBDCu;
            // 0x3afbe0: 0x2e6d6665  sltiu       $t5, $s3, 0x6665 (Delay Slot)
            SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26213) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9170u;
            return;
        }
    }
    ctx->pc = 0x3AFBE4u;
label_3afbe4:
    // 0x3afbe4: 0x646d6f  .word       0x00646D6F                   # dsubu       $t5, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3afbe4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_3afbe8:
    // 0x3afbe8: 0x0  nop
    ctx->pc = 0x3afbe8u;
    // NOP
label_3afbec:
    // 0x3afbec: 0x0  nop
    ctx->pc = 0x3afbecu;
    // NOP
label_3afbf0:
    // 0x3afbf0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afbf0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afbf4:
    // 0x3afbf4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afbf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afbf8:
    // 0x3afbf8: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afbf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afbfc:
    // 0x3afbfc: 0x64616f6c  daddiu      $at, $v1, 0x6F6C
    ctx->pc = 0x3afbfcu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
label_3afc00:
    // 0x3afc00: 0x326d742e  andi        $t5, $s3, 0x742E
    ctx->pc = 0x3afc00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)29742);
label_3afc04:
    // 0x3afc04: 0x0  nop
    ctx->pc = 0x3afc04u;
    // NOP
label_3afc08:
    // 0x3afc08: 0x0  nop
    ctx->pc = 0x3afc08u;
    // NOP
label_3afc0c:
    // 0x3afc0c: 0x0  nop
    ctx->pc = 0x3afc0cu;
    // NOP
label_3afc10:
    // 0x3afc10: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afc10u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afc14:
    // 0x3afc14: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afc14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afc18:
    // 0x3afc18: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afc18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afc1c:
    // 0x3afc1c: 0x5f797274  .word       0x5F797274                   # bgtzl       $k1, . + 4 + (0x7274 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_3afc20:
    if (ctx->pc == 0x3AFC20u) {
        ctx->pc = 0x3AFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC1Cu;
        // 0x3afc20: 0x2e6c7474  sltiu       $t4, $s3, 0x7474 (Delay Slot)
        SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29812) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFC24u;
        goto label_3afc24;
    }
    ctx->pc = 0x3AFC1Cu;
    {
        const bool branch_taken_0x3afc1c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3afc1c) {
            ctx->pc = 0x3AFC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFC1Cu;
            // 0x3afc20: 0x2e6c7474  sltiu       $t4, $s3, 0x7474 (Delay Slot)
            SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29812) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC5F0u;
            return;
        }
    }
    ctx->pc = 0x3AFC24u;
label_3afc24:
    // 0x3afc24: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3afc24u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3afc28:
    // 0x3afc28: 0x0  nop
    ctx->pc = 0x3afc28u;
    // NOP
label_3afc2c:
    // 0x3afc2c: 0x0  nop
    ctx->pc = 0x3afc2cu;
    // NOP
label_3afc30:
    // 0x3afc30: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afc30u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afc34:
    // 0x3afc34: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afc34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afc38:
    // 0x3afc38: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afc38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afc3c:
    // 0x3afc3c: 0x63706163  daddi       $s0, $k1, 0x6163
    ctx->pc = 0x3afc3cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24931; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3afc40:
    // 0x3afc40: 0x2e326d6f  sltiu       $s2, $s1, 0x6D6F
    ctx->pc = 0x3afc40u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)28015) ? 1 : 0);
label_3afc44:
    // 0x3afc44: 0x706d62  .word       0x00706D62                   # sub         $t5, $v1, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3afc44u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 16), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_3afc48:
    // 0x3afc48: 0x0  nop
    ctx->pc = 0x3afc48u;
    // NOP
label_3afc4c:
    // 0x3afc4c: 0x0  nop
    ctx->pc = 0x3afc4cu;
    // NOP
label_3afc50:
    // 0x3afc50: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afc50u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afc54:
    // 0x3afc54: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afc54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afc58:
    // 0x3afc58: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afc58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afc5c:
    // 0x3afc5c: 0x6c666665  ldr         $a2, 0x6665($v1)
    ctx->pc = 0x3afc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26213); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3afc60:
    // 0x3afc60: 0x2e656669  sltiu       $a1, $s3, 0x6669
    ctx->pc = 0x3afc60u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26217) ? 1 : 0);
label_3afc64:
    // 0x3afc64: 0x323374  teq         $at, $s2, 205
    ctx->pc = 0x3afc64u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3afc68:
    // 0x3afc68: 0x0  nop
    ctx->pc = 0x3afc68u;
    // NOP
label_3afc6c:
    // 0x3afc6c: 0x0  nop
    ctx->pc = 0x3afc6cu;
    // NOP
label_3afc70:
    // 0x3afc70: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afc70u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afc74:
    // 0x3afc74: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afc74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afc78:
    // 0x3afc78: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afc78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afc7c:
    // 0x3afc7c: 0x6c666665  ldr         $a2, 0x6665($v1)
    ctx->pc = 0x3afc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26213); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3afc80:
    // 0x3afc80: 0x2e656669  sltiu       $a1, $s3, 0x6669
    ctx->pc = 0x3afc80u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26217) ? 1 : 0);
label_3afc84:
    // 0x3afc84: 0x6d6e61  .word       0x006D6E61                   # addu        $t5, $v1, $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3afc84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_3afc88:
    // 0x3afc88: 0x0  nop
    ctx->pc = 0x3afc88u;
    // NOP
label_3afc8c:
    // 0x3afc8c: 0x0  nop
    ctx->pc = 0x3afc8cu;
    // NOP
label_3afc90:
    // 0x3afc90: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afc90u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afc94:
    // 0x3afc94: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afc94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afc98:
    // 0x3afc98: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afc98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afc9c:
    // 0x3afc9c: 0x2e646e65  sltiu       $a0, $s3, 0x6E65
    ctx->pc = 0x3afc9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28261) ? 1 : 0);
label_3afca0:
    // 0x3afca0: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3afca0u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3afca4:
    // 0x3afca4: 0x0  nop
    ctx->pc = 0x3afca4u;
    // NOP
label_3afca8:
    // 0x3afca8: 0x0  nop
    ctx->pc = 0x3afca8u;
    // NOP
label_3afcac:
    // 0x3afcac: 0x0  nop
    ctx->pc = 0x3afcacu;
    // NOP
label_3afcb0:
    // 0x3afcb0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afcb0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afcb4:
    // 0x3afcb4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afcb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afcb8:
    // 0x3afcb8: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afcb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afcbc:
    // 0x3afcbc: 0x65626f74  daddiu      $v0, $t3, 0x6F74
    ctx->pc = 0x3afcbcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28532);
label_3afcc0:
    // 0x3afcc0: 0x326d742e  andi        $t5, $s3, 0x742E
    ctx->pc = 0x3afcc0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)29742);
label_3afcc4:
    // 0x3afcc4: 0x0  nop
    ctx->pc = 0x3afcc4u;
    // NOP
label_3afcc8:
    // 0x3afcc8: 0x0  nop
    ctx->pc = 0x3afcc8u;
    // NOP
label_3afccc:
    // 0x3afccc: 0x0  nop
    ctx->pc = 0x3afcccu;
    // NOP
label_3afcd0:
    // 0x3afcd0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afcd0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afcd4:
    // 0x3afcd4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afcd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afcd8:
    // 0x3afcd8: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afcd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afcdc:
    // 0x3afcdc: 0x7467736d  .word       0x7467736D                   # INVALID     $v1, $a3, 0x736D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3afcdcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AFCDC raw=0x7467736D");
label_3afce0:
    // 0x3afce0: 0x6a5f7865  ldl         $ra, 0x7865($s2)
    ctx->pc = 0x3afce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 30821); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_3afce4:
    // 0x3afce4: 0x3233742e  andi        $s3, $s1, 0x742E
    ctx->pc = 0x3afce4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)29742);
label_3afce8:
    // 0x3afce8: 0x0  nop
    ctx->pc = 0x3afce8u;
    // NOP
label_3afcec:
    // 0x3afcec: 0x0  nop
    ctx->pc = 0x3afcecu;
    // NOP
label_3afcf0:
    // 0x3afcf0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afcf0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afcf4:
    // 0x3afcf4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afcf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afcf8:
    // 0x3afcf8: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afcf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afcfc:
    // 0x3afcfc: 0x746e6f66  .word       0x746E6F66                   # INVALID     $v1, $t6, 0x6F66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3afcfcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AFCFC raw=0x746E6F66");
label_3afd00:
    // 0x3afd00: 0x65646f63  daddiu      $a0, $t3, 0x6F63
    ctx->pc = 0x3afd00u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
label_3afd04:
    // 0x3afd04: 0x6c62742e  ldr         $v0, 0x742E($v1)
    ctx->pc = 0x3afd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29742); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3afd08:
    // 0x3afd08: 0x0  nop
    ctx->pc = 0x3afd08u;
    // NOP
label_3afd0c:
    // 0x3afd0c: 0x0  nop
    ctx->pc = 0x3afd0cu;
    // NOP
label_3afd10:
    // 0x3afd10: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afd10u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afd14:
    // 0x3afd14: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afd14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afd18:
    // 0x3afd18: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afd18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afd1c:
    // 0x3afd1c: 0x5f67736d  .word       0x5F67736D                   # bgtzl       $k1, . + 4 + (0x736D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_3afd20:
    if (ctx->pc == 0x3AFD20u) {
        ctx->pc = 0x3AFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD1Cu;
        // 0x3afd20: 0x2e786574  sltiu       $t8, $s3, 0x6574 (Delay Slot)
        SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25972) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AFD24u;
        goto label_3afd24;
    }
    ctx->pc = 0x3AFD1Cu;
    {
        const bool branch_taken_0x3afd1c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3afd1c) {
            ctx->pc = 0x3AFD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFD1Cu;
            // 0x3afd20: 0x2e786574  sltiu       $t8, $s3, 0x6574 (Delay Slot)
            SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25972) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCAD4u;
            return;
        }
    }
    ctx->pc = 0x3AFD24u;
label_3afd24:
    // 0x3afd24: 0x323374  teq         $at, $s2, 205
    ctx->pc = 0x3afd24u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3afd28:
    // 0x3afd28: 0x0  nop
    ctx->pc = 0x3afd28u;
    // NOP
label_3afd2c:
    // 0x3afd2c: 0x0  nop
    ctx->pc = 0x3afd2cu;
    // NOP
label_3afd30:
    // 0x3afd30: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afd30u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afd34:
    // 0x3afd34: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afd34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afd38:
    // 0x3afd38: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afd38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afd3c:
    // 0x3afd3c: 0x6d6d6f63  ldr         $t5, 0x6F63($t3)
    ctx->pc = 0x3afd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_3afd40:
    // 0x3afd40: 0x6d2e6e6f  ldr         $t6, 0x6E6F($t1)
    ctx->pc = 0x3afd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_3afd44:
    // 0x3afd44: 0x6773  tltu        $zero, $zero, 413
    ctx->pc = 0x3afd44u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3afd48:
    // 0x3afd48: 0x0  nop
    ctx->pc = 0x3afd48u;
    // NOP
label_3afd4c:
    // 0x3afd4c: 0x0  nop
    ctx->pc = 0x3afd4cu;
    // NOP
label_3afd50:
    // 0x3afd50: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afd50u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afd54:
    // 0x3afd54: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afd54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afd58:
    // 0x3afd58: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afd58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afd5c:
    // 0x3afd5c: 0x74756163  .word       0x74756163                   # INVALID     $v1, $s5, 0x6163 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3afd5cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AFD5C raw=0x74756163");
label_3afd60:
    // 0x3afd60: 0x2e6e6f69  sltiu       $t6, $s3, 0x6F69
    ctx->pc = 0x3afd60u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28521) ? 1 : 0);
label_3afd64:
    // 0x3afd64: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3afd64u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3afd68:
    // 0x3afd68: 0x0  nop
    ctx->pc = 0x3afd68u;
    // NOP
label_3afd6c:
    // 0x3afd6c: 0x0  nop
    ctx->pc = 0x3afd6cu;
    // NOP
label_3afd70:
    // 0x3afd70: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afd70u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afd74:
    // 0x3afd74: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afd74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afd78:
    // 0x3afd78: 0x2f637445  sltiu       $v1, $k1, 0x7445
    ctx->pc = 0x3afd78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29765) ? 1 : 0);
label_3afd7c:
    // 0x3afd7c: 0x6f6d5f74  ldr         $t5, 0x5F74($k1)
    ctx->pc = 0x3afd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_3afd80:
    // 0x3afd80: 0x742e696a  .word       0x742E696A                   # INVALID     $at, $t6, 0x696A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3afd80u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AFD80 raw=0x742E696A");
label_3afd84:
    // 0x3afd84: 0x326d  .word       0x0000326D                   # daddu       $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3afd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3afd88:
    // 0x3afd88: 0x0  nop
    ctx->pc = 0x3afd88u;
    // NOP
label_3afd8c:
    // 0x3afd8c: 0x0  nop
    ctx->pc = 0x3afd8cu;
    // NOP
label_3afd90:
    // 0x3afd90: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afd90u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afd94:
    // 0x3afd94: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afd94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afd98:
    // 0x3afd98: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afd98u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afd9c:
    // 0x3afd9c: 0x30303172  andi        $s0, $at, 0x3172
    ctx->pc = 0x3afd9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12658);
label_3afda0:
    // 0x3afda0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afda0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afda4:
    // 0x3afda4: 0x0  nop
    ctx->pc = 0x3afda4u;
    // NOP
label_3afda8:
    // 0x3afda8: 0x0  nop
    ctx->pc = 0x3afda8u;
    // NOP
label_3afdac:
    // 0x3afdac: 0x0  nop
    ctx->pc = 0x3afdacu;
    // NOP
label_3afdb0:
    // 0x3afdb0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afdb0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afdb4:
    // 0x3afdb4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afdb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afdb8:
    // 0x3afdb8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afdb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afdbc:
    // 0x3afdbc: 0x31303172  andi        $s0, $t1, 0x3172
    ctx->pc = 0x3afdbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12658);
label_3afdc0:
    // 0x3afdc0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afdc0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afdc4:
    // 0x3afdc4: 0x0  nop
    ctx->pc = 0x3afdc4u;
    // NOP
label_3afdc8:
    // 0x3afdc8: 0x0  nop
    ctx->pc = 0x3afdc8u;
    // NOP
label_3afdcc:
    // 0x3afdcc: 0x0  nop
    ctx->pc = 0x3afdccu;
    // NOP
label_3afdd0:
    // 0x3afdd0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afdd0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afdd4:
    // 0x3afdd4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afdd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afdd8:
    // 0x3afdd8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afdd8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afddc:
    // 0x3afddc: 0x32303172  andi        $s0, $s1, 0x3172
    ctx->pc = 0x3afddcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12658);
label_3afde0:
    // 0x3afde0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afde0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afde4:
    // 0x3afde4: 0x0  nop
    ctx->pc = 0x3afde4u;
    // NOP
label_3afde8:
    // 0x3afde8: 0x0  nop
    ctx->pc = 0x3afde8u;
    // NOP
label_3afdec:
    // 0x3afdec: 0x0  nop
    ctx->pc = 0x3afdecu;
    // NOP
label_3afdf0:
    // 0x3afdf0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afdf0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afdf4:
    // 0x3afdf4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afdf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afdf8:
    // 0x3afdf8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afdf8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afdfc:
    // 0x3afdfc: 0x33303172  andi        $s0, $t9, 0x3172
    ctx->pc = 0x3afdfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12658);
label_3afe00:
    // 0x3afe00: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afe00u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afe04:
    // 0x3afe04: 0x0  nop
    ctx->pc = 0x3afe04u;
    // NOP
label_3afe08:
    // 0x3afe08: 0x0  nop
    ctx->pc = 0x3afe08u;
    // NOP
label_3afe0c:
    // 0x3afe0c: 0x0  nop
    ctx->pc = 0x3afe0cu;
    // NOP
label_3afe10:
    // 0x3afe10: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afe10u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afe14:
    // 0x3afe14: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afe14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afe18:
    // 0x3afe18: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afe18u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afe1c:
    // 0x3afe1c: 0x34303172  ori         $s0, $at, 0x3172
    ctx->pc = 0x3afe1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12658);
label_3afe20:
    // 0x3afe20: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afe20u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afe24:
    // 0x3afe24: 0x0  nop
    ctx->pc = 0x3afe24u;
    // NOP
label_3afe28:
    // 0x3afe28: 0x0  nop
    ctx->pc = 0x3afe28u;
    // NOP
label_3afe2c:
    // 0x3afe2c: 0x0  nop
    ctx->pc = 0x3afe2cu;
    // NOP
label_3afe30:
    // 0x3afe30: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afe30u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afe34:
    // 0x3afe34: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afe34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afe38:
    // 0x3afe38: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afe38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afe3c:
    // 0x3afe3c: 0x35303172  ori         $s0, $t1, 0x3172
    ctx->pc = 0x3afe3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)12658);
label_3afe40:
    // 0x3afe40: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afe40u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afe44:
    // 0x3afe44: 0x0  nop
    ctx->pc = 0x3afe44u;
    // NOP
label_3afe48:
    // 0x3afe48: 0x0  nop
    ctx->pc = 0x3afe48u;
    // NOP
label_3afe4c:
    // 0x3afe4c: 0x0  nop
    ctx->pc = 0x3afe4cu;
    // NOP
label_3afe50:
    // 0x3afe50: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afe50u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afe54:
    // 0x3afe54: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afe54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afe58:
    // 0x3afe58: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afe58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afe5c:
    // 0x3afe5c: 0x36303172  ori         $s0, $s1, 0x3172
    ctx->pc = 0x3afe5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)12658);
label_3afe60:
    // 0x3afe60: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afe60u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afe64:
    // 0x3afe64: 0x0  nop
    ctx->pc = 0x3afe64u;
    // NOP
label_3afe68:
    // 0x3afe68: 0x0  nop
    ctx->pc = 0x3afe68u;
    // NOP
label_3afe6c:
    // 0x3afe6c: 0x0  nop
    ctx->pc = 0x3afe6cu;
    // NOP
label_3afe70:
    // 0x3afe70: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afe70u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afe74:
    // 0x3afe74: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afe74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afe78:
    // 0x3afe78: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afe78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afe7c:
    // 0x3afe7c: 0x37303172  ori         $s0, $t9, 0x3172
    ctx->pc = 0x3afe7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)12658);
label_3afe80:
    // 0x3afe80: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afe80u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afe84:
    // 0x3afe84: 0x0  nop
    ctx->pc = 0x3afe84u;
    // NOP
label_3afe88:
    // 0x3afe88: 0x0  nop
    ctx->pc = 0x3afe88u;
    // NOP
label_3afe8c:
    // 0x3afe8c: 0x0  nop
    ctx->pc = 0x3afe8cu;
    // NOP
label_3afe90:
    // 0x3afe90: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afe90u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afe94:
    // 0x3afe94: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afe94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afe98:
    // 0x3afe98: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afe98u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afe9c:
    // 0x3afe9c: 0x38303172  xori        $s0, $at, 0x3172
    ctx->pc = 0x3afe9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)12658);
label_3afea0:
    // 0x3afea0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afea0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afea4:
    // 0x3afea4: 0x0  nop
    ctx->pc = 0x3afea4u;
    // NOP
label_3afea8:
    // 0x3afea8: 0x0  nop
    ctx->pc = 0x3afea8u;
    // NOP
label_3afeac:
    // 0x3afeac: 0x0  nop
    ctx->pc = 0x3afeacu;
    // NOP
label_3afeb0:
    // 0x3afeb0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afeb0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afeb4:
    // 0x3afeb4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afeb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afeb8:
    // 0x3afeb8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afeb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afebc:
    // 0x3afebc: 0x39303172  xori        $s0, $t1, 0x3172
    ctx->pc = 0x3afebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)12658);
label_3afec0:
    // 0x3afec0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afec0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afec4:
    // 0x3afec4: 0x0  nop
    ctx->pc = 0x3afec4u;
    // NOP
label_3afec8:
    // 0x3afec8: 0x0  nop
    ctx->pc = 0x3afec8u;
    // NOP
label_3afecc:
    // 0x3afecc: 0x0  nop
    ctx->pc = 0x3afeccu;
    // NOP
label_3afed0:
    // 0x3afed0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afed0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afed4:
    // 0x3afed4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afed4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afed8:
    // 0x3afed8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afed8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afedc:
    // 0x3afedc: 0x61303172  daddi       $s0, $t1, 0x3172
    ctx->pc = 0x3afedcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)12658; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3afee0:
    // 0x3afee0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3afee0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3afee4:
    // 0x3afee4: 0x0  nop
    ctx->pc = 0x3afee4u;
    // NOP
label_3afee8:
    // 0x3afee8: 0x0  nop
    ctx->pc = 0x3afee8u;
    // NOP
label_3afeec:
    // 0x3afeec: 0x0  nop
    ctx->pc = 0x3afeecu;
    // NOP
label_3afef0:
    // 0x3afef0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afef0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afef4:
    // 0x3afef4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afef4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afef8:
    // 0x3afef8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afef8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afefc:
    // 0x3afefc: 0x62303172  daddi       $s0, $s1, 0x3172
    ctx->pc = 0x3afefcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)12658; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3aff00:
    // 0x3aff00: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3aff00u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3aff04:
    // 0x3aff04: 0x0  nop
    ctx->pc = 0x3aff04u;
    // NOP
label_3aff08:
    // 0x3aff08: 0x0  nop
    ctx->pc = 0x3aff08u;
    // NOP
label_3aff0c:
    // 0x3aff0c: 0x0  nop
    ctx->pc = 0x3aff0cu;
    // NOP
label_3aff10:
    // 0x3aff10: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3aff10u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3aff14:
    // 0x3aff14: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3aff14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3aff18:
    // 0x3aff18: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3aff18u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3aff1c:
    // 0x3aff1c: 0x63303172  daddi       $s0, $t9, 0x3172
    ctx->pc = 0x3aff1cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)12658; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3aff20:
    // 0x3aff20: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3aff20u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3aff24:
    // 0x3aff24: 0x0  nop
    ctx->pc = 0x3aff24u;
    // NOP
label_3aff28:
    // 0x3aff28: 0x0  nop
    ctx->pc = 0x3aff28u;
    // NOP
label_3aff2c:
    // 0x3aff2c: 0x0  nop
    ctx->pc = 0x3aff2cu;
    // NOP
label_3aff30:
    // 0x3aff30: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3aff30u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3aff34:
    // 0x3aff34: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3aff34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3aff38:
    // 0x3aff38: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3aff38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3aff3c:
    // 0x3aff3c: 0x64303172  daddiu      $s0, $at, 0x3172
    ctx->pc = 0x3aff3cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12658);
label_3aff40:
    // 0x3aff40: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3aff40u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3aff44:
    // 0x3aff44: 0x0  nop
    ctx->pc = 0x3aff44u;
    // NOP
label_3aff48:
    // 0x3aff48: 0x0  nop
    ctx->pc = 0x3aff48u;
    // NOP
label_3aff4c:
    // 0x3aff4c: 0x0  nop
    ctx->pc = 0x3aff4cu;
    // NOP
label_3aff50:
    // 0x3aff50: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3aff50u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3aff54:
    // 0x3aff54: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3aff54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3aff58:
    // 0x3aff58: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3aff58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3aff5c:
    // 0x3aff5c: 0x65303172  daddiu      $s0, $t1, 0x3172
    ctx->pc = 0x3aff5cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)12658);
label_3aff60:
    // 0x3aff60: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3aff60u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3aff64:
    // 0x3aff64: 0x0  nop
    ctx->pc = 0x3aff64u;
    // NOP
label_3aff68:
    // 0x3aff68: 0x0  nop
    ctx->pc = 0x3aff68u;
    // NOP
label_3aff6c:
    // 0x3aff6c: 0x0  nop
    ctx->pc = 0x3aff6cu;
    // NOP
label_3aff70:
    // 0x3aff70: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3aff70u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3aff74:
    // 0x3aff74: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3aff74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3aff78:
    // 0x3aff78: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3aff78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3aff7c:
    // 0x3aff7c: 0x66303172  daddiu      $s0, $s1, 0x3172
    ctx->pc = 0x3aff7cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)12658);
label_3aff80:
    // 0x3aff80: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3aff80u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3aff84:
    // 0x3aff84: 0x0  nop
    ctx->pc = 0x3aff84u;
    // NOP
label_3aff88:
    // 0x3aff88: 0x0  nop
    ctx->pc = 0x3aff88u;
    // NOP
label_3aff8c:
    // 0x3aff8c: 0x0  nop
    ctx->pc = 0x3aff8cu;
    // NOP
label_3aff90:
    // 0x3aff90: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3aff90u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3aff94:
    // 0x3aff94: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3aff94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3aff98:
    // 0x3aff98: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3aff98u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3aff9c:
    // 0x3aff9c: 0x30313172  andi        $s1, $at, 0x3172
    ctx->pc = 0x3aff9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12658);
label_3affa0:
    // 0x3affa0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3affa0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3affa4:
    // 0x3affa4: 0x0  nop
    ctx->pc = 0x3affa4u;
    // NOP
label_3affa8:
    // 0x3affa8: 0x0  nop
    ctx->pc = 0x3affa8u;
    // NOP
label_3affac:
    // 0x3affac: 0x0  nop
    ctx->pc = 0x3affacu;
    // NOP
label_3affb0:
    // 0x3affb0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3affb0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3affb4:
    // 0x3affb4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3affb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3affb8:
    // 0x3affb8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3affb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3affbc:
    // 0x3affbc: 0x31313172  andi        $s1, $t1, 0x3172
    ctx->pc = 0x3affbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12658);
label_3affc0:
    // 0x3affc0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3affc0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3affc4:
    // 0x3affc4: 0x0  nop
    ctx->pc = 0x3affc4u;
    // NOP
label_3affc8:
    // 0x3affc8: 0x0  nop
    ctx->pc = 0x3affc8u;
    // NOP
label_3affcc:
    // 0x3affcc: 0x0  nop
    ctx->pc = 0x3affccu;
    // NOP
label_3affd0:
    // 0x3affd0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3affd0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3affd4:
    // 0x3affd4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3affd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3affd8:
    // 0x3affd8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3affd8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3affdc:
    // 0x3affdc: 0x32313172  andi        $s1, $s1, 0x3172
    ctx->pc = 0x3affdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12658);
label_3affe0:
    // 0x3affe0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3affe0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3affe4:
    // 0x3affe4: 0x0  nop
    ctx->pc = 0x3affe4u;
    // NOP
label_3affe8:
    // 0x3affe8: 0x0  nop
    ctx->pc = 0x3affe8u;
    // NOP
label_3affec:
    // 0x3affec: 0x0  nop
    ctx->pc = 0x3affecu;
    // NOP
label_3afff0:
    // 0x3afff0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3afff0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3afff4:
    // 0x3afff4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3afff4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3afff8:
    // 0x3afff8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3afff8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3afffc:
    // 0x3afffc: 0x33313172  andi        $s1, $t9, 0x3172
    ctx->pc = 0x3afffcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12658);
label_3b0000:
    // 0x3b0000: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0000u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0004:
    // 0x3b0004: 0x0  nop
    ctx->pc = 0x3b0004u;
    // NOP
label_3b0008:
    // 0x3b0008: 0x0  nop
    ctx->pc = 0x3b0008u;
    // NOP
label_3b000c:
    // 0x3b000c: 0x0  nop
    ctx->pc = 0x3b000cu;
    // NOP
label_3b0010:
    // 0x3b0010: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0010u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0014:
    // 0x3b0014: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0018:
    // 0x3b0018: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0018u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b001c:
    // 0x3b001c: 0x34313172  ori         $s1, $at, 0x3172
    ctx->pc = 0x3b001cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12658);
label_3b0020:
    // 0x3b0020: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0020u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0024:
    // 0x3b0024: 0x0  nop
    ctx->pc = 0x3b0024u;
    // NOP
label_3b0028:
    // 0x3b0028: 0x0  nop
    ctx->pc = 0x3b0028u;
    // NOP
label_3b002c:
    // 0x3b002c: 0x0  nop
    ctx->pc = 0x3b002cu;
    // NOP
label_3b0030:
    // 0x3b0030: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0030u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0034:
    // 0x3b0034: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0038:
    // 0x3b0038: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0038u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b003c:
    // 0x3b003c: 0x35313172  ori         $s1, $t1, 0x3172
    ctx->pc = 0x3b003cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)12658);
label_3b0040:
    // 0x3b0040: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0040u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0044:
    // 0x3b0044: 0x0  nop
    ctx->pc = 0x3b0044u;
    // NOP
label_3b0048:
    // 0x3b0048: 0x0  nop
    ctx->pc = 0x3b0048u;
    // NOP
label_3b004c:
    // 0x3b004c: 0x0  nop
    ctx->pc = 0x3b004cu;
    // NOP
label_3b0050:
    // 0x3b0050: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0050u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0054:
    // 0x3b0054: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0054u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0058:
    // 0x3b0058: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0058u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b005c:
    // 0x3b005c: 0x36313172  ori         $s1, $s1, 0x3172
    ctx->pc = 0x3b005cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)12658);
label_3b0060:
    // 0x3b0060: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0060u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0064:
    // 0x3b0064: 0x0  nop
    ctx->pc = 0x3b0064u;
    // NOP
label_3b0068:
    // 0x3b0068: 0x0  nop
    ctx->pc = 0x3b0068u;
    // NOP
label_3b006c:
    // 0x3b006c: 0x0  nop
    ctx->pc = 0x3b006cu;
    // NOP
label_3b0070:
    // 0x3b0070: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0070u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0074:
    // 0x3b0074: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0074u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0078:
    // 0x3b0078: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0078u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b007c:
    // 0x3b007c: 0x37313172  ori         $s1, $t9, 0x3172
    ctx->pc = 0x3b007cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)12658);
label_3b0080:
    // 0x3b0080: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0080u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0084:
    // 0x3b0084: 0x0  nop
    ctx->pc = 0x3b0084u;
    // NOP
label_3b0088:
    // 0x3b0088: 0x0  nop
    ctx->pc = 0x3b0088u;
    // NOP
label_3b008c:
    // 0x3b008c: 0x0  nop
    ctx->pc = 0x3b008cu;
    // NOP
label_3b0090:
    // 0x3b0090: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0090u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0094:
    // 0x3b0094: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0094u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0098:
    // 0x3b0098: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0098u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b009c:
    // 0x3b009c: 0x38313172  xori        $s1, $at, 0x3172
    ctx->pc = 0x3b009cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)12658);
label_3b00a0:
    // 0x3b00a0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b00a0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b00a4:
    // 0x3b00a4: 0x0  nop
    ctx->pc = 0x3b00a4u;
    // NOP
label_3b00a8:
    // 0x3b00a8: 0x0  nop
    ctx->pc = 0x3b00a8u;
    // NOP
label_3b00ac:
    // 0x3b00ac: 0x0  nop
    ctx->pc = 0x3b00acu;
    // NOP
label_3b00b0:
    // 0x3b00b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b00b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b00b4:
    // 0x3b00b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b00b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b00b8:
    // 0x3b00b8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b00b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b00bc:
    // 0x3b00bc: 0x39313172  xori        $s1, $t1, 0x3172
    ctx->pc = 0x3b00bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)12658);
label_3b00c0:
    // 0x3b00c0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b00c0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b00c4:
    // 0x3b00c4: 0x0  nop
    ctx->pc = 0x3b00c4u;
    // NOP
label_3b00c8:
    // 0x3b00c8: 0x0  nop
    ctx->pc = 0x3b00c8u;
    // NOP
label_3b00cc:
    // 0x3b00cc: 0x0  nop
    ctx->pc = 0x3b00ccu;
    // NOP
label_3b00d0:
    // 0x3b00d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b00d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b00d4:
    // 0x3b00d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b00d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b00d8:
    // 0x3b00d8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b00d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b00dc:
    // 0x3b00dc: 0x61313172  daddi       $s1, $t1, 0x3172
    ctx->pc = 0x3b00dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)12658; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, res); }
label_3b00e0:
    // 0x3b00e0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b00e0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b00e4:
    // 0x3b00e4: 0x0  nop
    ctx->pc = 0x3b00e4u;
    // NOP
label_3b00e8:
    // 0x3b00e8: 0x0  nop
    ctx->pc = 0x3b00e8u;
    // NOP
label_3b00ec:
    // 0x3b00ec: 0x0  nop
    ctx->pc = 0x3b00ecu;
    // NOP
label_3b00f0:
    // 0x3b00f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b00f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b00f4:
    // 0x3b00f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b00f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b00f8:
    // 0x3b00f8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b00f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b00fc:
    // 0x3b00fc: 0x62313172  daddi       $s1, $s1, 0x3172
    ctx->pc = 0x3b00fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)12658; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, res); }
label_3b0100:
    // 0x3b0100: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0100u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0104:
    // 0x3b0104: 0x0  nop
    ctx->pc = 0x3b0104u;
    // NOP
label_3b0108:
    // 0x3b0108: 0x0  nop
    ctx->pc = 0x3b0108u;
    // NOP
label_3b010c:
    // 0x3b010c: 0x0  nop
    ctx->pc = 0x3b010cu;
    // NOP
label_3b0110:
    // 0x3b0110: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0110u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0114:
    // 0x3b0114: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0114u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0118:
    // 0x3b0118: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0118u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b011c:
    // 0x3b011c: 0x63313172  daddi       $s1, $t9, 0x3172
    ctx->pc = 0x3b011cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)12658; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, res); }
label_3b0120:
    // 0x3b0120: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0120u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0124:
    // 0x3b0124: 0x0  nop
    ctx->pc = 0x3b0124u;
    // NOP
label_3b0128:
    // 0x3b0128: 0x0  nop
    ctx->pc = 0x3b0128u;
    // NOP
label_3b012c:
    // 0x3b012c: 0x0  nop
    ctx->pc = 0x3b012cu;
    // NOP
label_3b0130:
    // 0x3b0130: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0130u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0134:
    // 0x3b0134: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0134u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0138:
    // 0x3b0138: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0138u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b013c:
    // 0x3b013c: 0x64313172  daddiu      $s1, $at, 0x3172
    ctx->pc = 0x3b013cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12658);
label_3b0140:
    // 0x3b0140: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0140u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0144:
    // 0x3b0144: 0x0  nop
    ctx->pc = 0x3b0144u;
    // NOP
label_3b0148:
    // 0x3b0148: 0x0  nop
    ctx->pc = 0x3b0148u;
    // NOP
label_3b014c:
    // 0x3b014c: 0x0  nop
    ctx->pc = 0x3b014cu;
    // NOP
label_3b0150:
    // 0x3b0150: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0150u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0154:
    // 0x3b0154: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0158:
    // 0x3b0158: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0158u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b015c:
    // 0x3b015c: 0x65313172  daddiu      $s1, $t1, 0x3172
    ctx->pc = 0x3b015cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)12658);
label_3b0160:
    // 0x3b0160: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0160u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0164:
    // 0x3b0164: 0x0  nop
    ctx->pc = 0x3b0164u;
    // NOP
label_3b0168:
    // 0x3b0168: 0x0  nop
    ctx->pc = 0x3b0168u;
    // NOP
label_3b016c:
    // 0x3b016c: 0x0  nop
    ctx->pc = 0x3b016cu;
    // NOP
label_3b0170:
    // 0x3b0170: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0170u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0174:
    // 0x3b0174: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0174u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0178:
    // 0x3b0178: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0178u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b017c:
    // 0x3b017c: 0x66313172  daddiu      $s1, $s1, 0x3172
    ctx->pc = 0x3b017cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)12658);
label_3b0180:
    // 0x3b0180: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0180u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0184:
    // 0x3b0184: 0x0  nop
    ctx->pc = 0x3b0184u;
    // NOP
label_3b0188:
    // 0x3b0188: 0x0  nop
    ctx->pc = 0x3b0188u;
    // NOP
label_3b018c:
    // 0x3b018c: 0x0  nop
    ctx->pc = 0x3b018cu;
    // NOP
label_3b0190:
    // 0x3b0190: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0190u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0194:
    // 0x3b0194: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0198:
    // 0x3b0198: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0198u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b019c:
    // 0x3b019c: 0x30323172  andi        $s2, $at, 0x3172
    ctx->pc = 0x3b019cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12658);
label_3b01a0:
    // 0x3b01a0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b01a0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b01a4:
    // 0x3b01a4: 0x0  nop
    ctx->pc = 0x3b01a4u;
    // NOP
label_3b01a8:
    // 0x3b01a8: 0x0  nop
    ctx->pc = 0x3b01a8u;
    // NOP
label_3b01ac:
    // 0x3b01ac: 0x0  nop
    ctx->pc = 0x3b01acu;
    // NOP
label_3b01b0:
    // 0x3b01b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b01b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b01b4:
    // 0x3b01b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b01b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b01b8:
    // 0x3b01b8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b01b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b01bc:
    // 0x3b01bc: 0x31323172  andi        $s2, $t1, 0x3172
    ctx->pc = 0x3b01bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12658);
label_3b01c0:
    // 0x3b01c0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b01c0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b01c4:
    // 0x3b01c4: 0x0  nop
    ctx->pc = 0x3b01c4u;
    // NOP
label_3b01c8:
    // 0x3b01c8: 0x0  nop
    ctx->pc = 0x3b01c8u;
    // NOP
label_3b01cc:
    // 0x3b01cc: 0x0  nop
    ctx->pc = 0x3b01ccu;
    // NOP
label_3b01d0:
    // 0x3b01d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b01d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b01d4:
    // 0x3b01d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b01d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b01d8:
    // 0x3b01d8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b01d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b01dc:
    // 0x3b01dc: 0x30303272  andi        $s0, $at, 0x3272
    ctx->pc = 0x3b01dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12914);
label_3b01e0:
    // 0x3b01e0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b01e0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b01e4:
    // 0x3b01e4: 0x0  nop
    ctx->pc = 0x3b01e4u;
    // NOP
label_3b01e8:
    // 0x3b01e8: 0x0  nop
    ctx->pc = 0x3b01e8u;
    // NOP
label_3b01ec:
    // 0x3b01ec: 0x0  nop
    ctx->pc = 0x3b01ecu;
    // NOP
label_3b01f0:
    // 0x3b01f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b01f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b01f4:
    // 0x3b01f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b01f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b01f8:
    // 0x3b01f8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b01f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b01fc:
    // 0x3b01fc: 0x31303272  andi        $s0, $t1, 0x3272
    ctx->pc = 0x3b01fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12914);
label_3b0200:
    // 0x3b0200: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0200u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0204:
    // 0x3b0204: 0x0  nop
    ctx->pc = 0x3b0204u;
    // NOP
label_3b0208:
    // 0x3b0208: 0x0  nop
    ctx->pc = 0x3b0208u;
    // NOP
label_3b020c:
    // 0x3b020c: 0x0  nop
    ctx->pc = 0x3b020cu;
    // NOP
label_3b0210:
    // 0x3b0210: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0210u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0214:
    // 0x3b0214: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0214u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0218:
    // 0x3b0218: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0218u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b021c:
    // 0x3b021c: 0x32303272  andi        $s0, $s1, 0x3272
    ctx->pc = 0x3b021cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12914);
label_3b0220:
    // 0x3b0220: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0220u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0224:
    // 0x3b0224: 0x0  nop
    ctx->pc = 0x3b0224u;
    // NOP
label_3b0228:
    // 0x3b0228: 0x0  nop
    ctx->pc = 0x3b0228u;
    // NOP
label_3b022c:
    // 0x3b022c: 0x0  nop
    ctx->pc = 0x3b022cu;
    // NOP
label_3b0230:
    // 0x3b0230: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0230u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0234:
    // 0x3b0234: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0238:
    // 0x3b0238: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0238u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b023c:
    // 0x3b023c: 0x33303272  andi        $s0, $t9, 0x3272
    ctx->pc = 0x3b023cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12914);
label_3b0240:
    // 0x3b0240: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0240u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0244:
    // 0x3b0244: 0x0  nop
    ctx->pc = 0x3b0244u;
    // NOP
label_3b0248:
    // 0x3b0248: 0x0  nop
    ctx->pc = 0x3b0248u;
    // NOP
label_3b024c:
    // 0x3b024c: 0x0  nop
    ctx->pc = 0x3b024cu;
    // NOP
label_3b0250:
    // 0x3b0250: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0250u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0254:
    // 0x3b0254: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0258:
    // 0x3b0258: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0258u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b025c:
    // 0x3b025c: 0x34303272  ori         $s0, $at, 0x3272
    ctx->pc = 0x3b025cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12914);
label_3b0260:
    // 0x3b0260: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0260u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0264:
    // 0x3b0264: 0x0  nop
    ctx->pc = 0x3b0264u;
    // NOP
label_3b0268:
    // 0x3b0268: 0x0  nop
    ctx->pc = 0x3b0268u;
    // NOP
label_3b026c:
    // 0x3b026c: 0x0  nop
    ctx->pc = 0x3b026cu;
    // NOP
label_3b0270:
    // 0x3b0270: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0270u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0274:
    // 0x3b0274: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0274u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0278:
    // 0x3b0278: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0278u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b027c:
    // 0x3b027c: 0x35303272  ori         $s0, $t1, 0x3272
    ctx->pc = 0x3b027cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)12914);
label_3b0280:
    // 0x3b0280: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0280u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0284:
    // 0x3b0284: 0x0  nop
    ctx->pc = 0x3b0284u;
    // NOP
label_3b0288:
    // 0x3b0288: 0x0  nop
    ctx->pc = 0x3b0288u;
    // NOP
label_3b028c:
    // 0x3b028c: 0x0  nop
    ctx->pc = 0x3b028cu;
    // NOP
label_3b0290:
    // 0x3b0290: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0290u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0294:
    // 0x3b0294: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0298:
    // 0x3b0298: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0298u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b029c:
    // 0x3b029c: 0x36303272  ori         $s0, $s1, 0x3272
    ctx->pc = 0x3b029cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)12914);
label_3b02a0:
    // 0x3b02a0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b02a0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b02a4:
    // 0x3b02a4: 0x0  nop
    ctx->pc = 0x3b02a4u;
    // NOP
label_3b02a8:
    // 0x3b02a8: 0x0  nop
    ctx->pc = 0x3b02a8u;
    // NOP
label_3b02ac:
    // 0x3b02ac: 0x0  nop
    ctx->pc = 0x3b02acu;
    // NOP
label_3b02b0:
    // 0x3b02b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b02b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b02b4:
    // 0x3b02b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b02b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b02b8:
    // 0x3b02b8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b02b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b02bc:
    // 0x3b02bc: 0x37303272  ori         $s0, $t9, 0x3272
    ctx->pc = 0x3b02bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)12914);
label_3b02c0:
    // 0x3b02c0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b02c0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b02c4:
    // 0x3b02c4: 0x0  nop
    ctx->pc = 0x3b02c4u;
    // NOP
label_3b02c8:
    // 0x3b02c8: 0x0  nop
    ctx->pc = 0x3b02c8u;
    // NOP
label_3b02cc:
    // 0x3b02cc: 0x0  nop
    ctx->pc = 0x3b02ccu;
    // NOP
label_3b02d0:
    // 0x3b02d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b02d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b02d4:
    // 0x3b02d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b02d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b02d8:
    // 0x3b02d8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b02d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b02dc:
    // 0x3b02dc: 0x38303272  xori        $s0, $at, 0x3272
    ctx->pc = 0x3b02dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)12914);
label_3b02e0:
    // 0x3b02e0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b02e0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b02e4:
    // 0x3b02e4: 0x0  nop
    ctx->pc = 0x3b02e4u;
    // NOP
label_3b02e8:
    // 0x3b02e8: 0x0  nop
    ctx->pc = 0x3b02e8u;
    // NOP
label_3b02ec:
    // 0x3b02ec: 0x0  nop
    ctx->pc = 0x3b02ecu;
    // NOP
label_3b02f0:
    // 0x3b02f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b02f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b02f4:
    // 0x3b02f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b02f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b02f8:
    // 0x3b02f8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b02f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b02fc:
    // 0x3b02fc: 0x39303272  xori        $s0, $t1, 0x3272
    ctx->pc = 0x3b02fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)12914);
label_3b0300:
    // 0x3b0300: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0300u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0304:
    // 0x3b0304: 0x0  nop
    ctx->pc = 0x3b0304u;
    // NOP
label_3b0308:
    // 0x3b0308: 0x0  nop
    ctx->pc = 0x3b0308u;
    // NOP
label_3b030c:
    // 0x3b030c: 0x0  nop
    ctx->pc = 0x3b030cu;
    // NOP
label_3b0310:
    // 0x3b0310: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0310u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0314:
    // 0x3b0314: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0318:
    // 0x3b0318: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0318u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b031c:
    // 0x3b031c: 0x61303272  daddi       $s0, $t1, 0x3272
    ctx->pc = 0x3b031cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)12914; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3b0320:
    // 0x3b0320: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0320u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0324:
    // 0x3b0324: 0x0  nop
    ctx->pc = 0x3b0324u;
    // NOP
label_3b0328:
    // 0x3b0328: 0x0  nop
    ctx->pc = 0x3b0328u;
    // NOP
label_3b032c:
    // 0x3b032c: 0x0  nop
    ctx->pc = 0x3b032cu;
    // NOP
label_3b0330:
    // 0x3b0330: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0330u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0334:
    // 0x3b0334: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0334u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0338:
    // 0x3b0338: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0338u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b033c:
    // 0x3b033c: 0x62303272  daddi       $s0, $s1, 0x3272
    ctx->pc = 0x3b033cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)12914; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3b0340:
    // 0x3b0340: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0340u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0344:
    // 0x3b0344: 0x0  nop
    ctx->pc = 0x3b0344u;
    // NOP
label_3b0348:
    // 0x3b0348: 0x0  nop
    ctx->pc = 0x3b0348u;
    // NOP
label_3b034c:
    // 0x3b034c: 0x0  nop
    ctx->pc = 0x3b034cu;
    // NOP
label_3b0350:
    // 0x3b0350: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0350u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0354:
    // 0x3b0354: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0358:
    // 0x3b0358: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0358u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b035c:
    // 0x3b035c: 0x63303272  daddi       $s0, $t9, 0x3272
    ctx->pc = 0x3b035cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)12914; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3b0360:
    // 0x3b0360: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0360u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0364:
    // 0x3b0364: 0x0  nop
    ctx->pc = 0x3b0364u;
    // NOP
label_3b0368:
    // 0x3b0368: 0x0  nop
    ctx->pc = 0x3b0368u;
    // NOP
label_3b036c:
    // 0x3b036c: 0x0  nop
    ctx->pc = 0x3b036cu;
    // NOP
label_3b0370:
    // 0x3b0370: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0370u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0374:
    // 0x3b0374: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0374u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0378:
    // 0x3b0378: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0378u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b037c:
    // 0x3b037c: 0x64303272  daddiu      $s0, $at, 0x3272
    ctx->pc = 0x3b037cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12914);
label_3b0380:
    // 0x3b0380: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0380u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0384:
    // 0x3b0384: 0x0  nop
    ctx->pc = 0x3b0384u;
    // NOP
label_3b0388:
    // 0x3b0388: 0x0  nop
    ctx->pc = 0x3b0388u;
    // NOP
label_3b038c:
    // 0x3b038c: 0x0  nop
    ctx->pc = 0x3b038cu;
    // NOP
label_3b0390:
    // 0x3b0390: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0390u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0394:
    // 0x3b0394: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0394u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0398:
    // 0x3b0398: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0398u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b039c:
    // 0x3b039c: 0x65303272  daddiu      $s0, $t1, 0x3272
    ctx->pc = 0x3b039cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)12914);
label_3b03a0:
    // 0x3b03a0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b03a0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b03a4:
    // 0x3b03a4: 0x0  nop
    ctx->pc = 0x3b03a4u;
    // NOP
label_3b03a8:
    // 0x3b03a8: 0x0  nop
    ctx->pc = 0x3b03a8u;
    // NOP
label_3b03ac:
    // 0x3b03ac: 0x0  nop
    ctx->pc = 0x3b03acu;
    // NOP
label_3b03b0:
    // 0x3b03b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b03b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b03b4:
    // 0x3b03b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b03b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b03b8:
    // 0x3b03b8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b03b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b03bc:
    // 0x3b03bc: 0x66303272  daddiu      $s0, $s1, 0x3272
    ctx->pc = 0x3b03bcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)12914);
label_3b03c0:
    // 0x3b03c0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b03c0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b03c4:
    // 0x3b03c4: 0x0  nop
    ctx->pc = 0x3b03c4u;
    // NOP
label_3b03c8:
    // 0x3b03c8: 0x0  nop
    ctx->pc = 0x3b03c8u;
    // NOP
label_3b03cc:
    // 0x3b03cc: 0x0  nop
    ctx->pc = 0x3b03ccu;
    // NOP
label_3b03d0:
    // 0x3b03d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b03d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b03d4:
    // 0x3b03d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b03d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b03d8:
    // 0x3b03d8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b03d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b03dc:
    // 0x3b03dc: 0x30313272  andi        $s1, $at, 0x3272
    ctx->pc = 0x3b03dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12914);
label_3b03e0:
    // 0x3b03e0: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b03e0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b03e4:
    // 0x3b03e4: 0x0  nop
    ctx->pc = 0x3b03e4u;
    // NOP
label_3b03e8:
    // 0x3b03e8: 0x0  nop
    ctx->pc = 0x3b03e8u;
    // NOP
label_3b03ec:
    // 0x3b03ec: 0x0  nop
    ctx->pc = 0x3b03ecu;
    // NOP
label_3b03f0:
    // 0x3b03f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b03f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b03f4:
    // 0x3b03f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b03f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b03f8:
    // 0x3b03f8: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b03f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b03fc:
    // 0x3b03fc: 0x31313272  andi        $s1, $t1, 0x3272
    ctx->pc = 0x3b03fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12914);
label_3b0400:
    // 0x3b0400: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0400u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0404:
    // 0x3b0404: 0x0  nop
    ctx->pc = 0x3b0404u;
    // NOP
label_3b0408:
    // 0x3b0408: 0x0  nop
    ctx->pc = 0x3b0408u;
    // NOP
label_3b040c:
    // 0x3b040c: 0x0  nop
    ctx->pc = 0x3b040cu;
    // NOP
label_3b0410:
    // 0x3b0410: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0410u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0414:
    // 0x3b0414: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0418:
    // 0x3b0418: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0418u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b041c:
    // 0x3b041c: 0x32313272  andi        $s1, $s1, 0x3272
    ctx->pc = 0x3b041cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12914);
label_3b0420:
    // 0x3b0420: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0420u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0424:
    // 0x3b0424: 0x0  nop
    ctx->pc = 0x3b0424u;
    // NOP
label_3b0428:
    // 0x3b0428: 0x0  nop
    ctx->pc = 0x3b0428u;
    // NOP
label_3b042c:
    // 0x3b042c: 0x0  nop
    ctx->pc = 0x3b042cu;
    // NOP
label_3b0430:
    // 0x3b0430: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0430u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0434:
    // 0x3b0434: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0434u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0438:
    // 0x3b0438: 0x2f647346  sltiu       $a0, $k1, 0x7346
    ctx->pc = 0x3b0438u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29510) ? 1 : 0);
label_3b043c:
    // 0x3b043c: 0x33313272  andi        $s1, $t9, 0x3272
    ctx->pc = 0x3b043cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12914);
label_3b0440:
    // 0x3b0440: 0x6473662e  daddiu      $s3, $v1, 0x662E
    ctx->pc = 0x3b0440u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26158);
label_3b0444:
    // 0x3b0444: 0x0  nop
    ctx->pc = 0x3b0444u;
    // NOP
label_3b0448:
    // 0x3b0448: 0x0  nop
    ctx->pc = 0x3b0448u;
    // NOP
label_3b044c:
    // 0x3b044c: 0x0  nop
    ctx->pc = 0x3b044cu;
    // NOP
label_3b0450:
    // 0x3b0450: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0450u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0454:
    // 0x3b0454: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0458:
    // 0x3b0458: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b0458u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b045c:
    // 0x3b045c: 0x30306c70  andi        $s0, $at, 0x6C70
    ctx->pc = 0x3b045cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)27760);
label_3b0460:
    // 0x3b0460: 0x646c702e  daddiu      $t4, $v1, 0x702E
    ctx->pc = 0x3b0460u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28718);
label_3b0464:
    // 0x3b0464: 0x0  nop
    ctx->pc = 0x3b0464u;
    // NOP
label_3b0468:
    // 0x3b0468: 0x0  nop
    ctx->pc = 0x3b0468u;
    // NOP
label_3b046c:
    // 0x3b046c: 0x0  nop
    ctx->pc = 0x3b046cu;
    // NOP
label_3b0470:
    // 0x3b0470: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0470u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0474:
    // 0x3b0474: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0474u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0478:
    // 0x3b0478: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b0478u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b047c:
    // 0x3b047c: 0x31307770  andi        $s0, $t1, 0x7770
    ctx->pc = 0x3b047cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)30576);
label_3b0480:
    // 0x3b0480: 0x7377702e  .word       0x7377702E                   # INVALID     $k1, $s7, 0x702E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0480u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B0480 raw=0x7377702E");
label_3b0484:
    // 0x3b0484: 0x0  nop
    ctx->pc = 0x3b0484u;
    // NOP
label_3b0488:
    // 0x3b0488: 0x0  nop
    ctx->pc = 0x3b0488u;
    // NOP
label_3b048c:
    // 0x3b048c: 0x0  nop
    ctx->pc = 0x3b048cu;
    // NOP
label_3b0490:
    // 0x3b0490: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0490u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0494:
    // 0x3b0494: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0498:
    // 0x3b0498: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b0498u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b049c:
    // 0x3b049c: 0x32307770  andi        $s0, $s1, 0x7770
    ctx->pc = 0x3b049cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)30576);
label_3b04a0:
    // 0x3b04a0: 0x7377702e  .word       0x7377702E                   # INVALID     $k1, $s7, 0x702E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b04a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B04A0 raw=0x7377702E");
label_3b04a4:
    // 0x3b04a4: 0x0  nop
    ctx->pc = 0x3b04a4u;
    // NOP
label_3b04a8:
    // 0x3b04a8: 0x0  nop
    ctx->pc = 0x3b04a8u;
    // NOP
label_3b04ac:
    // 0x3b04ac: 0x0  nop
    ctx->pc = 0x3b04acu;
    // NOP
label_3b04b0:
    // 0x3b04b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b04b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b04b4:
    // 0x3b04b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b04b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b04b8:
    // 0x3b04b8: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b04b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b04bc:
    // 0x3b04bc: 0x33307770  andi        $s0, $t9, 0x7770
    ctx->pc = 0x3b04bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)30576);
label_3b04c0:
    // 0x3b04c0: 0x7377702e  .word       0x7377702E                   # INVALID     $k1, $s7, 0x702E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b04c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B04C0 raw=0x7377702E");
label_3b04c4:
    // 0x3b04c4: 0x0  nop
    ctx->pc = 0x3b04c4u;
    // NOP
label_3b04c8:
    // 0x3b04c8: 0x0  nop
    ctx->pc = 0x3b04c8u;
    // NOP
label_3b04cc:
    // 0x3b04cc: 0x0  nop
    ctx->pc = 0x3b04ccu;
    // NOP
label_3b04d0:
    // 0x3b04d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b04d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b04d4:
    // 0x3b04d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b04d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b04d8:
    // 0x3b04d8: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b04d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b04dc:
    // 0x3b04dc: 0x34307770  ori         $s0, $at, 0x7770
    ctx->pc = 0x3b04dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30576);
label_3b04e0:
    // 0x3b04e0: 0x7377702e  .word       0x7377702E                   # INVALID     $k1, $s7, 0x702E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b04e0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B04E0 raw=0x7377702E");
label_3b04e4:
    // 0x3b04e4: 0x0  nop
    ctx->pc = 0x3b04e4u;
    // NOP
label_3b04e8:
    // 0x3b04e8: 0x0  nop
    ctx->pc = 0x3b04e8u;
    // NOP
label_3b04ec:
    // 0x3b04ec: 0x0  nop
    ctx->pc = 0x3b04ecu;
    // NOP
label_3b04f0:
    // 0x3b04f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b04f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b04f4:
    // 0x3b04f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b04f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b04f8:
    // 0x3b04f8: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b04f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b04fc:
    // 0x3b04fc: 0x35307770  ori         $s0, $t1, 0x7770
    ctx->pc = 0x3b04fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30576);
label_3b0500:
    // 0x3b0500: 0x7377702e  .word       0x7377702E                   # INVALID     $k1, $s7, 0x702E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0500u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B0500 raw=0x7377702E");
label_3b0504:
    // 0x3b0504: 0x0  nop
    ctx->pc = 0x3b0504u;
    // NOP
label_3b0508:
    // 0x3b0508: 0x0  nop
    ctx->pc = 0x3b0508u;
    // NOP
label_3b050c:
    // 0x3b050c: 0x0  nop
    ctx->pc = 0x3b050cu;
    // NOP
label_3b0510:
    // 0x3b0510: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0510u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0514:
    // 0x3b0514: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0518:
    // 0x3b0518: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b0518u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b051c:
    // 0x3b051c: 0x36307770  ori         $s0, $s1, 0x7770
    ctx->pc = 0x3b051cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)30576);
label_3b0520:
    // 0x3b0520: 0x7377702e  .word       0x7377702E                   # INVALID     $k1, $s7, 0x702E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0520u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B0520 raw=0x7377702E");
label_3b0524:
    // 0x3b0524: 0x0  nop
    ctx->pc = 0x3b0524u;
    // NOP
label_3b0528:
    // 0x3b0528: 0x0  nop
    ctx->pc = 0x3b0528u;
    // NOP
label_3b052c:
    // 0x3b052c: 0x0  nop
    ctx->pc = 0x3b052cu;
    // NOP
label_3b0530:
    // 0x3b0530: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0530u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0534:
    // 0x3b0534: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0538:
    // 0x3b0538: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b0538u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b053c:
    // 0x3b053c: 0x37307770  ori         $s0, $t9, 0x7770
    ctx->pc = 0x3b053cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)30576);
label_3b0540:
    // 0x3b0540: 0x7377702e  .word       0x7377702E                   # INVALID     $k1, $s7, 0x702E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0540u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B0540 raw=0x7377702E");
label_3b0544:
    // 0x3b0544: 0x0  nop
    ctx->pc = 0x3b0544u;
    // NOP
label_3b0548:
    // 0x3b0548: 0x0  nop
    ctx->pc = 0x3b0548u;
    // NOP
label_3b054c:
    // 0x3b054c: 0x0  nop
    ctx->pc = 0x3b054cu;
    // NOP
label_3b0550:
    // 0x3b0550: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0550u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0554:
    // 0x3b0554: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0558:
    // 0x3b0558: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b0558u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b055c:
    // 0x3b055c: 0x31306c70  andi        $s0, $t1, 0x6C70
    ctx->pc = 0x3b055cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)27760);
label_3b0560:
    // 0x3b0560: 0x646c702e  daddiu      $t4, $v1, 0x702E
    ctx->pc = 0x3b0560u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28718);
label_3b0564:
    // 0x3b0564: 0x0  nop
    ctx->pc = 0x3b0564u;
    // NOP
label_3b0568:
    // 0x3b0568: 0x0  nop
    ctx->pc = 0x3b0568u;
    // NOP
label_3b056c:
    // 0x3b056c: 0x0  nop
    ctx->pc = 0x3b056cu;
    // NOP
label_3b0570:
    // 0x3b0570: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0570u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0574:
    // 0x3b0574: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0574u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0578:
    // 0x3b0578: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b0578u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b057c:
    // 0x3b057c: 0x32306c70  andi        $s0, $s1, 0x6C70
    ctx->pc = 0x3b057cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)27760);
label_3b0580:
    // 0x3b0580: 0x646c702e  daddiu      $t4, $v1, 0x702E
    ctx->pc = 0x3b0580u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28718);
label_3b0584:
    // 0x3b0584: 0x0  nop
    ctx->pc = 0x3b0584u;
    // NOP
label_3b0588:
    // 0x3b0588: 0x0  nop
    ctx->pc = 0x3b0588u;
    // NOP
label_3b058c:
    // 0x3b058c: 0x0  nop
    ctx->pc = 0x3b058cu;
    // NOP
label_3b0590:
    // 0x3b0590: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0590u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0594:
    // 0x3b0594: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0594u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0598:
    // 0x3b0598: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b0598u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b059c:
    // 0x3b059c: 0x38307770  xori        $s0, $at, 0x7770
    ctx->pc = 0x3b059cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)30576);
label_3b05a0:
    // 0x3b05a0: 0x7377702e  .word       0x7377702E                   # INVALID     $k1, $s7, 0x702E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b05a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B05A0 raw=0x7377702E");
label_3b05a4:
    // 0x3b05a4: 0x0  nop
    ctx->pc = 0x3b05a4u;
    // NOP
label_3b05a8:
    // 0x3b05a8: 0x0  nop
    ctx->pc = 0x3b05a8u;
    // NOP
label_3b05ac:
    // 0x3b05ac: 0x0  nop
    ctx->pc = 0x3b05acu;
    // NOP
label_3b05b0:
    // 0x3b05b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b05b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b05b4:
    // 0x3b05b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b05b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b05b8:
    // 0x3b05b8: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b05b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b05bc:
    // 0x3b05bc: 0x33306c70  andi        $s0, $t9, 0x6C70
    ctx->pc = 0x3b05bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)27760);
label_3b05c0:
    // 0x3b05c0: 0x646c702e  daddiu      $t4, $v1, 0x702E
    ctx->pc = 0x3b05c0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28718);
label_3b05c4:
    // 0x3b05c4: 0x0  nop
    ctx->pc = 0x3b05c4u;
    // NOP
label_3b05c8:
    // 0x3b05c8: 0x0  nop
    ctx->pc = 0x3b05c8u;
    // NOP
label_3b05cc:
    // 0x3b05cc: 0x0  nop
    ctx->pc = 0x3b05ccu;
    // NOP
label_3b05d0:
    // 0x3b05d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b05d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b05d4:
    // 0x3b05d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b05d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b05d8:
    // 0x3b05d8: 0x2f646c50  sltiu       $a0, $k1, 0x6C50
    ctx->pc = 0x3b05d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27728) ? 1 : 0);
label_3b05dc:
    // 0x3b05dc: 0x34306c70  ori         $s0, $at, 0x6C70
    ctx->pc = 0x3b05dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27760);
label_3b05e0:
    // 0x3b05e0: 0x646c702e  daddiu      $t4, $v1, 0x702E
    ctx->pc = 0x3b05e0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28718);
label_3b05e4:
    // 0x3b05e4: 0x0  nop
    ctx->pc = 0x3b05e4u;
    // NOP
label_3b05e8:
    // 0x3b05e8: 0x0  nop
    ctx->pc = 0x3b05e8u;
    // NOP
label_3b05ec:
    // 0x3b05ec: 0x0  nop
    ctx->pc = 0x3b05ecu;
    // NOP
label_3b05f0:
    // 0x3b05f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b05f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b05f4:
    // 0x3b05f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b05f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b05f8:
    // 0x3b05f8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b05f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B05F8 raw=0x74617453");
label_3b05fc:
    // 0x3b05fc: 0x6d2f7375  ldr         $t7, 0x7375($t1)
    ctx->pc = 0x3b05fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29557); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b0600:
    // 0x3b0600: 0x3961796f  xori        $at, $t3, 0x796F
    ctx->pc = 0x3b0600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)31087);
label_3b0604:
    // 0x3b0604: 0x7370692e  .word       0x7370692E                   # INVALID     $k1, $s0, 0x692E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0604u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B0604 raw=0x7370692E");
label_3b0608:
    // 0x3b0608: 0x0  nop
    ctx->pc = 0x3b0608u;
    // NOP
label_3b060c:
    // 0x3b060c: 0x0  nop
    ctx->pc = 0x3b060cu;
    // NOP
label_3b0610:
    // 0x3b0610: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0610u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0614:
    // 0x3b0614: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0618:
    // 0x3b0618: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0618u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0618 raw=0x74617453");
label_3b061c:
    // 0x3b061c: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b061cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B061C raw=0x732F7375");
label_3b0620:
    // 0x3b0620: 0x32306477  andi        $s0, $s1, 0x6477
    ctx->pc = 0x3b0620u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)25719);
label_3b0624:
    // 0x3b0624: 0x646e622e  daddiu      $t6, $v1, 0x622E
    ctx->pc = 0x3b0624u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25134);
label_3b0628:
    // 0x3b0628: 0x0  nop
    ctx->pc = 0x3b0628u;
    // NOP
label_3b062c:
    // 0x3b062c: 0x0  nop
    ctx->pc = 0x3b062cu;
    // NOP
label_3b0630:
    // 0x3b0630: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0630u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0634:
    // 0x3b0634: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0638:
    // 0x3b0638: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0638u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0638 raw=0x74617453");
label_3b063c:
    // 0x3b063c: 0x692f7375  ldl         $t7, 0x7375($t1)
    ctx->pc = 0x3b063cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29557); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_3b0640:
    // 0x3b0640: 0x5f6d6574  .word       0x5F6D6574                   # bgtzl       $k1, . + 4 + (0x6574 << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_3b0644:
    if (ctx->pc == 0x3B0644u) {
        ctx->pc = 0x3B0644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0640u;
        // 0x3b0644: 0x2e676962  sltiu       $a3, $s3, 0x6962 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26978) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0648u;
        goto label_3b0648;
    }
    ctx->pc = 0x3B0640u;
    {
        const bool branch_taken_0x3b0640 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b0640) {
            ctx->pc = 0x3B0644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0640u;
            // 0x3b0644: 0x2e676962  sltiu       $a3, $s3, 0x6962 (Delay Slot)
            SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26978) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9C14u;
            return;
        }
    }
    ctx->pc = 0x3B0648u;
label_3b0648:
    // 0x3b0648: 0x6d7469  .word       0x006D7469                   # mtsa        $v1 # 000D7440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0648u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_3b064c:
    // 0x3b064c: 0x0  nop
    ctx->pc = 0x3b064cu;
    // NOP
label_3b0650:
    // 0x3b0650: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0650u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0654:
    // 0x3b0654: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0654u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0658:
    // 0x3b0658: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0658u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0658 raw=0x74617453");
label_3b065c:
    // 0x3b065c: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b065cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B065C raw=0x732F7375");
label_3b0660:
    // 0x3b0660: 0x5f746174  .word       0x5F746174                   # bgtzl       $k1, . + 4 + (0x6174 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_3b0664:
    if (ctx->pc == 0x3B0664u) {
        ctx->pc = 0x3B0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0660u;
        // 0x3b0664: 0x2e67736d  sltiu       $a3, $s3, 0x736D (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29549) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0668u;
        goto label_3b0668;
    }
    ctx->pc = 0x3B0660u;
    {
        const bool branch_taken_0x3b0660 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b0660) {
            ctx->pc = 0x3B0664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0660u;
            // 0x3b0664: 0x2e67736d  sltiu       $a3, $s3, 0x736D (Delay Slot)
            SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29549) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8C34u;
            return;
        }
    }
    ctx->pc = 0x3B0668u;
label_3b0668:
    // 0x3b0668: 0x323374  teq         $at, $s2, 205
    ctx->pc = 0x3b0668u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b066c:
    // 0x3b066c: 0x0  nop
    ctx->pc = 0x3b066cu;
    // NOP
label_3b0670:
    // 0x3b0670: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0670u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0674:
    // 0x3b0674: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0674u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0678:
    // 0x3b0678: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0678u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0678 raw=0x74617453");
label_3b067c:
    // 0x3b067c: 0x642f7375  daddiu      $t7, $at, 0x7375
    ctx->pc = 0x3b067cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29557);
label_3b0680:
    // 0x3b0680: 0x6d5f746e  ldr         $ra, 0x746E($t2)
    ctx->pc = 0x3b0680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29806); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_3b0684:
    // 0x3b0684: 0x692e6367  ldl         $t6, 0x6367($t1)
    ctx->pc = 0x3b0684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_3b0688:
    // 0x3b0688: 0x6d74  teq         $zero, $zero, 437
    ctx->pc = 0x3b0688u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b068c:
    // 0x3b068c: 0x0  nop
    ctx->pc = 0x3b068cu;
    // NOP
label_3b0690:
    // 0x3b0690: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0690u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0694:
    // 0x3b0694: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0698:
    // 0x3b0698: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0698u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0698 raw=0x74617453");
label_3b069c:
    // 0x3b069c: 0x672f7375  daddiu      $t7, $t9, 0x7375
    ctx->pc = 0x3b069cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)29557);
label_3b06a0:
    // 0x3b06a0: 0x5f656761  .word       0x5F656761                   # bgtzl       $k1, . + 4 + (0x6761 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_3b06a4:
    if (ctx->pc == 0x3B06A4u) {
        ctx->pc = 0x3B06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B06A0u;
        // 0x3b06a4: 0x2e303066  sltiu       $s0, $s1, 0x3066 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12390) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B06A8u;
        goto label_3b06a8;
    }
    ctx->pc = 0x3B06A0u;
    {
        const bool branch_taken_0x3b06a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b06a0) {
            ctx->pc = 0x3B06A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B06A0u;
            // 0x3b06a4: 0x2e303066  sltiu       $s0, $s1, 0x3066 (Delay Slot)
            SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12390) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA428u;
            return;
        }
    }
    ctx->pc = 0x3B06A8u;
label_3b06a8:
    // 0x3b06a8: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b06a8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b06ac:
    // 0x3b06ac: 0x0  nop
    ctx->pc = 0x3b06acu;
    // NOP
label_3b06b0:
    // 0x3b06b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b06b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b06b4:
    // 0x3b06b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b06b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b06b8:
    // 0x3b06b8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b06b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B06B8 raw=0x74617453");
label_3b06bc:
    // 0x3b06bc: 0x6d2f7375  ldr         $t7, 0x7375($t1)
    ctx->pc = 0x3b06bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29557); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b06c0:
    // 0x3b06c0: 0x74655f70  .word       0x74655F70                   # INVALID     $v1, $a1, 0x5F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b06c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B06C0 raw=0x74655F70");
label_3b06c4:
    // 0x3b06c4: 0x2e303063  sltiu       $s0, $s1, 0x3063
    ctx->pc = 0x3b06c4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12387) ? 1 : 0);
label_3b06c8:
    // 0x3b06c8: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b06c8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b06cc:
    // 0x3b06cc: 0x0  nop
    ctx->pc = 0x3b06ccu;
    // NOP
label_3b06d0:
    // 0x3b06d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b06d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b06d4:
    // 0x3b06d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b06d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b06d8:
    // 0x3b06d8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b06d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B06D8 raw=0x74617453");
label_3b06dc:
    // 0x3b06dc: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b06dcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B06DC raw=0x732F7375");
label_3b06e0:
    // 0x3b06e0: 0x75746174  .word       0x75746174                   # INVALID     $t3, $s4, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b06e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B06E0 raw=0x75746174");
label_3b06e4:
    // 0x3b06e4: 0x736d2e73  .word       0x736D2E73                   # INVALID     $k1, $t5, 0x2E73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b06e4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3B06E4 raw=0x736D2E73");
label_3b06e8:
    // 0x3b06e8: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b06e8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_3b06ec:
    // 0x3b06ec: 0x0  nop
    ctx->pc = 0x3b06ecu;
    // NOP
label_3b06f0:
    // 0x3b06f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b06f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b06f4:
    // 0x3b06f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b06f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b06f8:
    // 0x3b06f8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b06f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B06F8 raw=0x74617453");
label_3b06fc:
    // 0x3b06fc: 0x722f7375  .word       0x722F7375                   # INVALID     $s1, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b06fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B06FC raw=0x722F7375");
label_3b0700:
    // 0x3b0700: 0x2e6d6f6f  sltiu       $t5, $s3, 0x6F6F
    ctx->pc = 0x3b0700u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28527) ? 1 : 0);
label_3b0704:
    // 0x3b0704: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0704u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b0708:
    // 0x3b0708: 0x0  nop
    ctx->pc = 0x3b0708u;
    // NOP
label_3b070c:
    // 0x3b070c: 0x0  nop
    ctx->pc = 0x3b070cu;
    // NOP
label_3b0710:
    // 0x3b0710: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0710u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0714:
    // 0x3b0714: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0714u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0718:
    // 0x3b0718: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0718u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0718 raw=0x74617453");
label_3b071c:
    // 0x3b071c: 0x642f7375  daddiu      $t7, $at, 0x7375
    ctx->pc = 0x3b071cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29557);
label_3b0720:
    // 0x3b0720: 0x775f746e  .word       0x775F746E                   # INVALID     $k0, $ra, 0x746E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0720u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0720 raw=0x775F746E");
label_3b0724:
    // 0x3b0724: 0x692e6e70  ldl         $t6, 0x6E70($t1)
    ctx->pc = 0x3b0724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_3b0728:
    // 0x3b0728: 0x6d74  teq         $zero, $zero, 437
    ctx->pc = 0x3b0728u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b072c:
    // 0x3b072c: 0x0  nop
    ctx->pc = 0x3b072cu;
    // NOP
label_3b0730:
    // 0x3b0730: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0730u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0734:
    // 0x3b0734: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0734u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0738:
    // 0x3b0738: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0738u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0738 raw=0x74617453");
label_3b073c:
    // 0x3b073c: 0x672f7375  daddiu      $t7, $t9, 0x7375
    ctx->pc = 0x3b073cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)29557);
label_3b0740:
    // 0x3b0740: 0x5f656761  .word       0x5F656761                   # bgtzl       $k1, . + 4 + (0x6761 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_3b0744:
    if (ctx->pc == 0x3B0744u) {
        ctx->pc = 0x3B0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0740u;
        // 0x3b0744: 0x2e303062  sltiu       $s0, $s1, 0x3062 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12386) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0748u;
        goto label_3b0748;
    }
    ctx->pc = 0x3B0740u;
    {
        const bool branch_taken_0x3b0740 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b0740) {
            ctx->pc = 0x3B0744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0740u;
            // 0x3b0744: 0x2e303062  sltiu       $s0, $s1, 0x3062 (Delay Slot)
            SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12386) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA4C8u;
            return;
        }
    }
    ctx->pc = 0x3B0748u;
label_3b0748:
    // 0x3b0748: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0748u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b074c:
    // 0x3b074c: 0x0  nop
    ctx->pc = 0x3b074cu;
    // NOP
label_3b0750:
    // 0x3b0750: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0750u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0754:
    // 0x3b0754: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0754u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0758:
    // 0x3b0758: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0758u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0758 raw=0x74617453");
label_3b075c:
    // 0x3b075c: 0x632f7375  daddi       $t7, $t9, 0x7375
    ctx->pc = 0x3b075cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29557; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_3b0760:
    // 0x3b0760: 0x6e665f70  ldr         $a2, 0x5F70($s3)
    ctx->pc = 0x3b0760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3b0764:
    // 0x3b0764: 0x2e303074  sltiu       $s0, $s1, 0x3074
    ctx->pc = 0x3b0764u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12404) ? 1 : 0);
label_3b0768:
    // 0x3b0768: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0768u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b076c:
    // 0x3b076c: 0x0  nop
    ctx->pc = 0x3b076cu;
    // NOP
label_3b0770:
    // 0x3b0770: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0770u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0774:
    // 0x3b0774: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0778:
    // 0x3b0778: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0778u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0778 raw=0x74617453");
label_3b077c:
    // 0x3b077c: 0x632f7375  daddi       $t7, $t9, 0x7375
    ctx->pc = 0x3b077cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29557; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_3b0780:
    // 0x3b0780: 0x63695f70  daddi       $t1, $k1, 0x5F70
    ctx->pc = 0x3b0780u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24432; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_3b0784:
    // 0x3b0784: 0x2e30306e  sltiu       $s0, $s1, 0x306E
    ctx->pc = 0x3b0784u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12398) ? 1 : 0);
label_3b0788:
    // 0x3b0788: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0788u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b078c:
    // 0x3b078c: 0x0  nop
    ctx->pc = 0x3b078cu;
    // NOP
label_3b0790:
    // 0x3b0790: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0790u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0794:
    // 0x3b0794: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0794u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0798:
    // 0x3b0798: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0798u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0798 raw=0x74617453");
label_3b079c:
    // 0x3b079c: 0x642f7375  daddiu      $t7, $at, 0x7375
    ctx->pc = 0x3b079cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29557);
label_3b07a0:
    // 0x3b07a0: 0x74696769  .word       0x74696769                   # INVALID     $v1, $t1, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b07a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B07A0 raw=0x74696769");
label_3b07a4:
    // 0x3b07a4: 0x742e3030  .word       0x742E3030                   # INVALID     $at, $t6, 0x3030 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b07a4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B07A4 raw=0x742E3030");
label_3b07a8:
    // 0x3b07a8: 0x326d  .word       0x0000326D                   # daddu       $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b07a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b07ac:
    // 0x3b07ac: 0x0  nop
    ctx->pc = 0x3b07acu;
    // NOP
label_3b07b0:
    // 0x3b07b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b07b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b07b4:
    // 0x3b07b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b07b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b07b8:
    // 0x3b07b8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b07b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B07B8 raw=0x74617453");
label_3b07bc:
    // 0x3b07bc: 0x672f7375  daddiu      $t7, $t9, 0x7375
    ctx->pc = 0x3b07bcu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)29557);
label_3b07c0:
    // 0x3b07c0: 0x65677561  daddiu      $a3, $t3, 0x7561
    ctx->pc = 0x3b07c0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_3b07c4:
    // 0x3b07c4: 0x742e3030  .word       0x742E3030                   # INVALID     $at, $t6, 0x3030 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b07c4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B07C4 raw=0x742E3030");
label_3b07c8:
    // 0x3b07c8: 0x326d  .word       0x0000326D                   # daddu       $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b07c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b07cc:
    // 0x3b07cc: 0x0  nop
    ctx->pc = 0x3b07ccu;
    // NOP
label_3b07d0:
    // 0x3b07d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b07d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b07d4:
    // 0x3b07d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b07d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b07d8:
    // 0x3b07d8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b07d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B07D8 raw=0x74617453");
label_3b07dc:
    // 0x3b07dc: 0x642f7375  daddiu      $t7, $at, 0x7375
    ctx->pc = 0x3b07dcu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29557);
label_3b07e0:
    // 0x3b07e0: 0x2e746e61  sltiu       $s4, $s3, 0x6E61
    ctx->pc = 0x3b07e0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28257) ? 1 : 0);
label_3b07e4:
    // 0x3b07e4: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b07e4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b07e8:
    // 0x3b07e8: 0x0  nop
    ctx->pc = 0x3b07e8u;
    // NOP
label_3b07ec:
    // 0x3b07ec: 0x0  nop
    ctx->pc = 0x3b07ecu;
    // NOP
label_3b07f0:
    // 0x3b07f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b07f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b07f4:
    // 0x3b07f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b07f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b07f8:
    // 0x3b07f8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b07f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B07F8 raw=0x74617453");
label_3b07fc:
    // 0x3b07fc: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b07fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B07FC raw=0x732F7375");
label_3b0800:
    // 0x3b0800: 0x665f3174  daddiu      $ra, $s2, 0x3174
    ctx->pc = 0x3b0800u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)12660);
label_3b0804:
    // 0x3b0804: 0x2e323031  sltiu       $s2, $s1, 0x3031
    ctx->pc = 0x3b0804u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12337) ? 1 : 0);
label_3b0808:
    // 0x3b0808: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0808u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b080c:
    // 0x3b080c: 0x0  nop
    ctx->pc = 0x3b080cu;
    // NOP
label_3b0810:
    // 0x3b0810: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0810u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0814:
    // 0x3b0814: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0814u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0818:
    // 0x3b0818: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0818u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0818 raw=0x74617453");
label_3b081c:
    // 0x3b081c: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b081cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B081C raw=0x732F7375");
label_3b0820:
    // 0x3b0820: 0x665f3174  daddiu      $ra, $s2, 0x3174
    ctx->pc = 0x3b0820u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)12660);
label_3b0824:
    // 0x3b0824: 0x2e313031  sltiu       $s1, $s1, 0x3031
    ctx->pc = 0x3b0824u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12337) ? 1 : 0);
label_3b0828:
    // 0x3b0828: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0828u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b082c:
    // 0x3b082c: 0x0  nop
    ctx->pc = 0x3b082cu;
    // NOP
label_3b0830:
    // 0x3b0830: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0830u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0834:
    // 0x3b0834: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0838:
    // 0x3b0838: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0838u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0838 raw=0x74617453");
label_3b083c:
    // 0x3b083c: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b083cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B083C raw=0x732F7375");
label_3b0840:
    // 0x3b0840: 0x665f3174  daddiu      $ra, $s2, 0x3174
    ctx->pc = 0x3b0840u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)12660);
label_3b0844:
    // 0x3b0844: 0x2e303031  sltiu       $s0, $s1, 0x3031
    ctx->pc = 0x3b0844u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12337) ? 1 : 0);
label_3b0848:
    // 0x3b0848: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0848u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b084c:
    // 0x3b084c: 0x0  nop
    ctx->pc = 0x3b084cu;
    // NOP
label_3b0850:
    // 0x3b0850: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0850u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0854:
    // 0x3b0854: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0854u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0858:
    // 0x3b0858: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0858u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0858 raw=0x74617453");
label_3b085c:
    // 0x3b085c: 0x692f7375  ldl         $t7, 0x7375($t1)
    ctx->pc = 0x3b085cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29557); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_3b0860:
    // 0x3b0860: 0x5f6d6574  .word       0x5F6D6574                   # bgtzl       $k1, . + 4 + (0x6574 << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_3b0864:
    if (ctx->pc == 0x3B0864u) {
        ctx->pc = 0x3B0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0860u;
        // 0x3b0864: 0x2e326d74  sltiu       $s2, $s1, 0x6D74 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)28020) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0868u;
        goto label_3b0868;
    }
    ctx->pc = 0x3B0860u;
    {
        const bool branch_taken_0x3b0860 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b0860) {
            ctx->pc = 0x3B0864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0860u;
            // 0x3b0864: 0x2e326d74  sltiu       $s2, $s1, 0x6D74 (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)28020) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9E34u;
            return;
        }
    }
    ctx->pc = 0x3B0868u;
label_3b0868:
    // 0x3b0868: 0x6d7469  .word       0x006D7469                   # mtsa        $v1 # 000D7440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0868u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_3b086c:
    // 0x3b086c: 0x0  nop
    ctx->pc = 0x3b086cu;
    // NOP
label_3b0870:
    // 0x3b0870: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0870u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0874:
    // 0x3b0874: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0874u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0878:
    // 0x3b0878: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0878u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0878 raw=0x74617453");
label_3b087c:
    // 0x3b087c: 0x6d2f7375  ldr         $t7, 0x7375($t1)
    ctx->pc = 0x3b087cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29557); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b0880:
    // 0x3b0880: 0x6e665f70  ldr         $a2, 0x5F70($s3)
    ctx->pc = 0x3b0880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3b0884:
    // 0x3b0884: 0x2e303074  sltiu       $s0, $s1, 0x3074
    ctx->pc = 0x3b0884u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12404) ? 1 : 0);
label_3b0888:
    // 0x3b0888: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0888u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b088c:
    // 0x3b088c: 0x0  nop
    ctx->pc = 0x3b088cu;
    // NOP
label_3b0890:
    // 0x3b0890: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0890u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0894:
    // 0x3b0894: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0894u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0898:
    // 0x3b0898: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0898u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0898 raw=0x74617453");
label_3b089c:
    // 0x3b089c: 0x6d2f7375  ldr         $t7, 0x7375($t1)
    ctx->pc = 0x3b089cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29557); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b08a0:
    // 0x3b08a0: 0x616d5f70  daddi       $t5, $t3, 0x5F70
    ctx->pc = 0x3b08a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24432; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_3b08a4:
    // 0x3b08a4: 0x742e6b73  .word       0x742E6B73                   # INVALID     $at, $t6, 0x6B73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b08a4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B08A4 raw=0x742E6B73");
label_3b08a8:
    // 0x3b08a8: 0x326d  .word       0x0000326D                   # daddu       $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b08a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b08ac:
    // 0x3b08ac: 0x0  nop
    ctx->pc = 0x3b08acu;
    // NOP
label_3b08b0:
    // 0x3b08b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b08b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b08b4:
    // 0x3b08b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b08b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b08b8:
    // 0x3b08b8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b08b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B08B8 raw=0x74617453");
label_3b08bc:
    // 0x3b08bc: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b08bcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B08BC raw=0x732F7375");
label_3b08c0:
    // 0x3b08c0: 0x66655f74  daddiu      $a1, $s3, 0x5F74
    ctx->pc = 0x3b08c0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)24436);
label_3b08c4:
    // 0x3b08c4: 0x2e303066  sltiu       $s0, $s1, 0x3066
    ctx->pc = 0x3b08c4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12390) ? 1 : 0);
label_3b08c8:
    // 0x3b08c8: 0x323374  teq         $at, $s2, 205
    ctx->pc = 0x3b08c8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b08cc:
    // 0x3b08cc: 0x0  nop
    ctx->pc = 0x3b08ccu;
    // NOP
label_3b08d0:
    // 0x3b08d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b08d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b08d4:
    // 0x3b08d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b08d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b08d8:
    // 0x3b08d8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b08d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B08D8 raw=0x74617453");
label_3b08dc:
    // 0x3b08dc: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b08dcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B08DC raw=0x732F7375");
label_3b08e0:
    // 0x3b08e0: 0x66655f74  daddiu      $a1, $s3, 0x5F74
    ctx->pc = 0x3b08e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)24436);
label_3b08e4:
    // 0x3b08e4: 0x2e303066  sltiu       $s0, $s1, 0x3066
    ctx->pc = 0x3b08e4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12390) ? 1 : 0);
label_3b08e8:
    // 0x3b08e8: 0x6d6e61  .word       0x006D6E61                   # addu        $t5, $v1, $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b08e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_3b08ec:
    // 0x3b08ec: 0x0  nop
    ctx->pc = 0x3b08ecu;
    // NOP
label_3b08f0:
    // 0x3b08f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b08f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b08f4:
    // 0x3b08f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b08f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b08f8:
    // 0x3b08f8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b08f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B08F8 raw=0x74617453");
label_3b08fc:
    // 0x3b08fc: 0x772f7375  .word       0x772F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b08fcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B08FC raw=0x772F7375");
label_3b0900:
    // 0x3b0900: 0x31306e70  andi        $s0, $t1, 0x6E70
    ctx->pc = 0x3b0900u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)28272);
label_3b0904:
    // 0x3b0904: 0x646e622e  daddiu      $t6, $v1, 0x622E
    ctx->pc = 0x3b0904u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25134);
label_3b0908:
    // 0x3b0908: 0x0  nop
    ctx->pc = 0x3b0908u;
    // NOP
label_3b090c:
    // 0x3b090c: 0x0  nop
    ctx->pc = 0x3b090cu;
    // NOP
label_3b0910:
    // 0x3b0910: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0910u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0914:
    // 0x3b0914: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0918:
    // 0x3b0918: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0918u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0918 raw=0x74617453");
label_3b091c:
    // 0x3b091c: 0x772f7375  .word       0x772F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b091cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B091C raw=0x772F7375");
label_3b0920:
    // 0x3b0920: 0x32306e70  andi        $s0, $s1, 0x6E70
    ctx->pc = 0x3b0920u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)28272);
label_3b0924:
    // 0x3b0924: 0x646e622e  daddiu      $t6, $v1, 0x622E
    ctx->pc = 0x3b0924u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25134);
label_3b0928:
    // 0x3b0928: 0x0  nop
    ctx->pc = 0x3b0928u;
    // NOP
label_3b092c:
    // 0x3b092c: 0x0  nop
    ctx->pc = 0x3b092cu;
    // NOP
label_3b0930:
    // 0x3b0930: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0930u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0934:
    // 0x3b0934: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0938:
    // 0x3b0938: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0938u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0938 raw=0x74617453");
label_3b093c:
    // 0x3b093c: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b093cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B093C raw=0x732F7375");
label_3b0940:
    // 0x3b0940: 0x31306477  andi        $s0, $t1, 0x6477
    ctx->pc = 0x3b0940u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)25719);
label_3b0944:
    // 0x3b0944: 0x646e622e  daddiu      $t6, $v1, 0x622E
    ctx->pc = 0x3b0944u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25134);
label_3b0948:
    // 0x3b0948: 0x0  nop
    ctx->pc = 0x3b0948u;
    // NOP
label_3b094c:
    // 0x3b094c: 0x0  nop
    ctx->pc = 0x3b094cu;
    // NOP
label_3b0950:
    // 0x3b0950: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0950u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0954:
    // 0x3b0954: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0958:
    // 0x3b0958: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0958u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0958 raw=0x74617453");
label_3b095c:
    // 0x3b095c: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b095cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B095C raw=0x732F7375");
label_3b0960:
    // 0x3b0960: 0x665f3174  daddiu      $ra, $s2, 0x3174
    ctx->pc = 0x3b0960u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)12660);
label_3b0964:
    // 0x3b0964: 0x2e303030  sltiu       $s0, $s1, 0x3030
    ctx->pc = 0x3b0964u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12336) ? 1 : 0);
label_3b0968:
    // 0x3b0968: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0968u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b096c:
    // 0x3b096c: 0x0  nop
    ctx->pc = 0x3b096cu;
    // NOP
label_3b0970:
    // 0x3b0970: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0970u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0974:
    // 0x3b0974: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0974u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0978:
    // 0x3b0978: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0978u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0978 raw=0x74617453");
label_3b097c:
    // 0x3b097c: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b097cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B097C raw=0x732F7375");
label_3b0980:
    // 0x3b0980: 0x665f3174  daddiu      $ra, $s2, 0x3174
    ctx->pc = 0x3b0980u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)12660);
label_3b0984:
    // 0x3b0984: 0x2e303032  sltiu       $s0, $s1, 0x3032
    ctx->pc = 0x3b0984u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12338) ? 1 : 0);
label_3b0988:
    // 0x3b0988: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b0988u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b098c:
    // 0x3b098c: 0x0  nop
    ctx->pc = 0x3b098cu;
    // NOP
label_3b0990:
    // 0x3b0990: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0990u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0994:
    // 0x3b0994: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0994u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0998:
    // 0x3b0998: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0998u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0998 raw=0x74617453");
label_3b099c:
    // 0x3b099c: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b099cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B099C raw=0x732F7375");
label_3b09a0:
    // 0x3b09a0: 0x665f3174  daddiu      $ra, $s2, 0x3174
    ctx->pc = 0x3b09a0u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)12660);
label_3b09a4:
    // 0x3b09a4: 0x2e303033  sltiu       $s0, $s1, 0x3033
    ctx->pc = 0x3b09a4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12339) ? 1 : 0);
label_3b09a8:
    // 0x3b09a8: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b09a8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b09ac:
    // 0x3b09ac: 0x0  nop
    ctx->pc = 0x3b09acu;
    // NOP
label_3b09b0:
    // 0x3b09b0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b09b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b09b4:
    // 0x3b09b4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b09b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b09b8:
    // 0x3b09b8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b09b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B09B8 raw=0x74617453");
label_3b09bc:
    // 0x3b09bc: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b09bcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B09BC raw=0x732F7375");
label_3b09c0:
    // 0x3b09c0: 0x665f3174  daddiu      $ra, $s2, 0x3174
    ctx->pc = 0x3b09c0u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)12660);
label_3b09c4:
    // 0x3b09c4: 0x2e303034  sltiu       $s0, $s1, 0x3034
    ctx->pc = 0x3b09c4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12340) ? 1 : 0);
label_3b09c8:
    // 0x3b09c8: 0x326d74  teq         $at, $s2, 437
    ctx->pc = 0x3b09c8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3b09cc:
    // 0x3b09cc: 0x0  nop
    ctx->pc = 0x3b09ccu;
    // NOP
label_3b09d0:
    // 0x3b09d0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b09d0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b09d4:
    // 0x3b09d4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b09d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b09d8:
    // 0x3b09d8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b09d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B09D8 raw=0x74617453");
label_3b09dc:
    // 0x3b09dc: 0x732f7375  .word       0x732F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b09dcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x3B09DC raw=0x732F7375");
label_3b09e0:
    // 0x3b09e0: 0x6e695f74  ldr         $t1, 0x5F74($s3)
    ctx->pc = 0x3b09e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b09e4:
    // 0x3b09e4: 0x642e7469  daddiu      $t6, $at, 0x7469
    ctx->pc = 0x3b09e4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29801);
label_3b09e8:
    // 0x3b09e8: 0x7461  .word       0x00007461                   # addu        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b09e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b09ec:
    // 0x3b09ec: 0x0  nop
    ctx->pc = 0x3b09ecu;
    // NOP
label_3b09f0:
    // 0x3b09f0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b09f0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b09f4:
    // 0x3b09f4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b09f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b09f8:
    // 0x3b09f8: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b09f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B09F8 raw=0x74617453");
label_3b09fc:
    // 0x3b09fc: 0x772f7375  .word       0x772F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b09fcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B09FC raw=0x772F7375");
label_3b0a00:
    // 0x3b0a00: 0x6e695f70  ldr         $t1, 0x5F70($s3)
    ctx->pc = 0x3b0a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b0a04:
    // 0x3b0a04: 0x642e7469  daddiu      $t6, $at, 0x7469
    ctx->pc = 0x3b0a04u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29801);
label_3b0a08:
    // 0x3b0a08: 0x7461  .word       0x00007461                   # addu        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0a08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b0a0c:
    // 0x3b0a0c: 0x0  nop
    ctx->pc = 0x3b0a0cu;
    // NOP
label_3b0a10:
    // 0x3b0a10: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0a10u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0a14:
    // 0x3b0a14: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0a14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0a18:
    // 0x3b0a18: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0a18u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0A18 raw=0x74617453");
label_3b0a1c:
    // 0x3b0a1c: 0x772f7375  .word       0x772F7375                   # INVALID     $t9, $t7, 0x7375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0a1cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0A1C raw=0x772F7375");
label_3b0a20:
    // 0x3b0a20: 0x695f6e70  ldl         $ra, 0x6E70($t2)
    ctx->pc = 0x3b0a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_3b0a24:
    // 0x3b0a24: 0x692e676d  ldl         $t6, 0x676D($t1)
    ctx->pc = 0x3b0a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 26477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_3b0a28:
    // 0x3b0a28: 0x6d74  teq         $zero, $zero, 437
    ctx->pc = 0x3b0a28u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b0a2c:
    // 0x3b0a2c: 0x0  nop
    ctx->pc = 0x3b0a2cu;
    // NOP
label_3b0a30:
    // 0x3b0a30: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0a30u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0a34:
    // 0x3b0a34: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0a34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0a38:
    // 0x3b0a38: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0a38u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0A38 raw=0x74617453");
label_3b0a3c:
    // 0x3b0a3c: 0x742f7375  .word       0x742F7375                   # INVALID     $at, $t7, 0x7375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0a3cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0A3C raw=0x742F7375");
label_3b0a40:
    // 0x3b0a40: 0x695f6863  ldl         $ra, 0x6863($t2)
    ctx->pc = 0x3b0a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_3b0a44:
    // 0x3b0a44: 0x692e676d  ldl         $t6, 0x676D($t1)
    ctx->pc = 0x3b0a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 26477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_3b0a48:
    // 0x3b0a48: 0x6d74  teq         $zero, $zero, 437
    ctx->pc = 0x3b0a48u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b0a4c:
    // 0x3b0a4c: 0x0  nop
    ctx->pc = 0x3b0a4cu;
    // NOP
label_3b0a50:
    // 0x3b0a50: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0a50u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0a54:
    // 0x3b0a54: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0a54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0a58:
    // 0x3b0a58: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0a58u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0A58 raw=0x74617453");
label_3b0a5c:
    // 0x3b0a5c: 0x742f7375  .word       0x742F7375                   # INVALID     $at, $t7, 0x7375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0a5cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0A5C raw=0x742F7375");
label_3b0a60:
    // 0x3b0a60: 0x6e695f63  ldr         $t1, 0x5F63($s3)
    ctx->pc = 0x3b0a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24419); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b0a64:
    // 0x3b0a64: 0x642e7469  daddiu      $t6, $at, 0x7469
    ctx->pc = 0x3b0a64u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29801);
label_3b0a68:
    // 0x3b0a68: 0x7461  .word       0x00007461                   # addu        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0a68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b0a6c:
    // 0x3b0a6c: 0x0  nop
    ctx->pc = 0x3b0a6cu;
    // NOP
label_3b0a70:
    // 0x3b0a70: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0a70u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0a74:
    // 0x3b0a74: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0a74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0a78:
    // 0x3b0a78: 0x2f736461  sltiu       $s3, $k1, 0x6461
    ctx->pc = 0x3b0a78u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_3b0a7c:
    // 0x3b0a7c: 0x4f4d4544  .word       0x4F4D4544                   # INVALID     $k0, $t5, 0x4544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0a7cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B0A7C raw=0x4F4D4544");
label_3b0a80:
    // 0x3b0a80: 0x41582e30  .word       0x41582E30                   # INVALID     $t2, $t8, 0x2E30 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b0a80u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3B0A80 raw=0x41582E30");
label_3b0a84:
    // 0x3b0a84: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0a84u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3b0a88:
    // 0x3b0a88: 0x0  nop
    ctx->pc = 0x3b0a88u;
    // NOP
label_3b0a8c:
    // 0x3b0a8c: 0x0  nop
    ctx->pc = 0x3b0a8cu;
    // NOP
label_3b0a90:
    // 0x3b0a90: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0a90u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0a94:
    // 0x3b0a94: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0a94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0a98:
    // 0x3b0a98: 0x2f736461  sltiu       $s3, $k1, 0x6461
    ctx->pc = 0x3b0a98u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_3b0a9c:
    // 0x3b0a9c: 0x4f4d4544  .word       0x4F4D4544                   # INVALID     $k0, $t5, 0x4544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0a9cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B0A9C raw=0x4F4D4544");
label_3b0aa0:
    // 0x3b0aa0: 0x41582e31  .word       0x41582E31                   # INVALID     $t2, $t8, 0x2E31 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b0aa0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3B0AA0 raw=0x41582E31");
label_3b0aa4:
    // 0x3b0aa4: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0aa4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3b0aa8:
    // 0x3b0aa8: 0x0  nop
    ctx->pc = 0x3b0aa8u;
    // NOP
label_3b0aac:
    // 0x3b0aac: 0x0  nop
    ctx->pc = 0x3b0aacu;
    // NOP
label_3b0ab0:
    // 0x3b0ab0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0ab0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0ab4:
    // 0x3b0ab4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0ab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0ab8:
    // 0x3b0ab8: 0x2f736461  sltiu       $s3, $k1, 0x6461
    ctx->pc = 0x3b0ab8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_3b0abc:
    // 0x3b0abc: 0x4f4d4544  .word       0x4F4D4544                   # INVALID     $k0, $t5, 0x4544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0abcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B0ABC raw=0x4F4D4544");
label_3b0ac0:
    // 0x3b0ac0: 0x41582e32  .word       0x41582E32                   # INVALID     $t2, $t8, 0x2E32 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b0ac0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3B0AC0 raw=0x41582E32");
label_3b0ac4:
    // 0x3b0ac4: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0ac4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3b0ac8:
    // 0x3b0ac8: 0x0  nop
    ctx->pc = 0x3b0ac8u;
    // NOP
label_3b0acc:
    // 0x3b0acc: 0x0  nop
    ctx->pc = 0x3b0accu;
    // NOP
label_3b0ad0:
    // 0x3b0ad0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0ad0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0ad4:
    // 0x3b0ad4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0ad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0ad8:
    // 0x3b0ad8: 0x2f736461  sltiu       $s3, $k1, 0x6461
    ctx->pc = 0x3b0ad8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_3b0adc:
    // 0x3b0adc: 0x4f4d4544  .word       0x4F4D4544                   # INVALID     $k0, $t5, 0x4544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0adcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B0ADC raw=0x4F4D4544");
label_3b0ae0:
    // 0x3b0ae0: 0x41582e33  .word       0x41582E33                   # INVALID     $t2, $t8, 0x2E33 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b0ae0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3B0AE0 raw=0x41582E33");
label_3b0ae4:
    // 0x3b0ae4: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0ae4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3b0ae8:
    // 0x3b0ae8: 0x0  nop
    ctx->pc = 0x3b0ae8u;
    // NOP
label_3b0aec:
    // 0x3b0aec: 0x0  nop
    ctx->pc = 0x3b0aecu;
    // NOP
label_3b0af0:
    // 0x3b0af0: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0af0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0af4:
    // 0x3b0af4: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0af4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0af8:
    // 0x3b0af8: 0x2f736461  sltiu       $s3, $k1, 0x6461
    ctx->pc = 0x3b0af8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_3b0afc:
    // 0x3b0afc: 0x2e317473  sltiu       $s1, $s1, 0x7473
    ctx->pc = 0x3b0afcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)29811) ? 1 : 0);
label_3b0b00:
    // 0x3b0b00: 0x676178  .word       0x00676178                   # dsll        $t4, $a3, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0b00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) << 5);
label_3b0b04:
    // 0x3b0b04: 0x0  nop
    ctx->pc = 0x3b0b04u;
    // NOP
label_3b0b08:
    // 0x3b0b08: 0x0  nop
    ctx->pc = 0x3b0b08u;
    // NOP
label_3b0b0c:
    // 0x3b0b0c: 0x0  nop
    ctx->pc = 0x3b0b0cu;
    // NOP
label_3b0b10:
    // 0x3b0b10: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0b10u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0b14:
    // 0x3b0b14: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0b14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0b18:
    // 0x3b0b18: 0x2f736461  sltiu       $s3, $k1, 0x6461
    ctx->pc = 0x3b0b18u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_3b0b1c:
    // 0x3b0b1c: 0x54544142  bnel        $v0, $s4, . + 4 + (0x4142 << 2)
label_3b0b20:
    if (ctx->pc == 0x3B0B20u) {
        ctx->pc = 0x3B0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B1Cu;
        // 0x3b0b20: 0x582e454c  .word       0x582E454C                   # blezl       $at, . + 4 + (0x454C << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3B0B20 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0B24u;
        goto label_3b0b24;
    }
    ctx->pc = 0x3B0B1Cu;
    {
        const bool branch_taken_0x3b0b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3b0b1c) {
            ctx->pc = 0x3B0B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0B1Cu;
            // 0x3b0b20: 0x582e454c  .word       0x582E454C                   # blezl       $at, . + 4 + (0x454C << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x3B0B20 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1028u;
            return;
        }
    }
    ctx->pc = 0x3B0B24u;
label_3b0b24:
    // 0x3b0b24: 0x4741  .word       0x00004741                   # INVALID     $zero, $zero, 0x4741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0b24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3B0B24 raw=0x00004741");
label_3b0b28:
    // 0x3b0b28: 0x0  nop
    ctx->pc = 0x3b0b28u;
    // NOP
label_3b0b2c:
    // 0x3b0b2c: 0x0  nop
    ctx->pc = 0x3b0b2cu;
    // NOP
label_3b0b30:
    // 0x3b0b30: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0b30u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0b34:
    // 0x3b0b34: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0b34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0b38:
    // 0x3b0b38: 0x69766f6d  ldl         $s6, 0x6F6D($t3)
    ctx->pc = 0x3b0b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_3b0b3c:
    // 0x3b0b3c: 0x65642f65  daddiu      $a0, $t3, 0x2F65
    ctx->pc = 0x3b0b3cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)12133);
label_3b0b40:
    // 0x3b0b40: 0x2e306f6d  sltiu       $s0, $s1, 0x6F6D
    ctx->pc = 0x3b0b40u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)28525) ? 1 : 0);
label_3b0b44:
    // 0x3b0b44: 0x737370  tge         $v1, $s3, 461
    ctx->pc = 0x3b0b44u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b0b48:
    // 0x3b0b48: 0x0  nop
    ctx->pc = 0x3b0b48u;
    // NOP
label_3b0b4c:
    // 0x3b0b4c: 0x0  nop
    ctx->pc = 0x3b0b4cu;
    // NOP
label_3b0b50:
    // 0x3b0b50: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0b50u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0b54:
    // 0x3b0b54: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0b54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0b58:
    // 0x3b0b58: 0x69766f6d  ldl         $s6, 0x6F6D($t3)
    ctx->pc = 0x3b0b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_3b0b5c:
    // 0x3b0b5c: 0x65642f65  daddiu      $a0, $t3, 0x2F65
    ctx->pc = 0x3b0b5cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)12133);
label_3b0b60:
    // 0x3b0b60: 0x2e316f6d  sltiu       $s1, $s1, 0x6F6D
    ctx->pc = 0x3b0b60u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)28525) ? 1 : 0);
label_3b0b64:
    // 0x3b0b64: 0x737370  tge         $v1, $s3, 461
    ctx->pc = 0x3b0b64u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b0b68:
    // 0x3b0b68: 0x0  nop
    ctx->pc = 0x3b0b68u;
    // NOP
label_3b0b6c:
    // 0x3b0b6c: 0x0  nop
    ctx->pc = 0x3b0b6cu;
    // NOP
label_3b0b70:
    // 0x3b0b70: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0b70u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0b74:
    // 0x3b0b74: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0b74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0b78:
    // 0x3b0b78: 0x69766f6d  ldl         $s6, 0x6F6D($t3)
    ctx->pc = 0x3b0b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_3b0b7c:
    // 0x3b0b7c: 0x65642f65  daddiu      $a0, $t3, 0x2F65
    ctx->pc = 0x3b0b7cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)12133);
label_3b0b80:
    // 0x3b0b80: 0x2e326f6d  sltiu       $s2, $s1, 0x6F6D
    ctx->pc = 0x3b0b80u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)28525) ? 1 : 0);
label_3b0b84:
    // 0x3b0b84: 0x737370  tge         $v1, $s3, 461
    ctx->pc = 0x3b0b84u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b0b88:
    // 0x3b0b88: 0x0  nop
    ctx->pc = 0x3b0b88u;
    // NOP
label_3b0b8c:
    // 0x3b0b8c: 0x0  nop
    ctx->pc = 0x3b0b8cu;
    // NOP
label_3b0b90:
    // 0x3b0b90: 0x642f2e2e  daddiu      $t7, $at, 0x2E2E
    ctx->pc = 0x3b0b90u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_3b0b94:
    // 0x3b0b94: 0x2f617461  sltiu       $at, $k1, 0x7461
    ctx->pc = 0x3b0b94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_3b0b98:
    // 0x3b0b98: 0x69766f6d  ldl         $s6, 0x6F6D($t3)
    ctx->pc = 0x3b0b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_3b0b9c:
    // 0x3b0b9c: 0x65642f65  daddiu      $a0, $t3, 0x2F65
    ctx->pc = 0x3b0b9cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)12133);
label_3b0ba0:
    // 0x3b0ba0: 0x2e336f6d  sltiu       $s3, $s1, 0x6F6D
    ctx->pc = 0x3b0ba0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)28525) ? 1 : 0);
label_3b0ba4:
    // 0x3b0ba4: 0x737370  tge         $v1, $s3, 461
    ctx->pc = 0x3b0ba4u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b0ba8:
    // 0x3b0ba8: 0x752f2e2e  .word       0x752F2E2E                   # INVALID     $t1, $t7, 0x2E2E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0ba8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0BA8 raw=0x752F2E2E");
label_3b0bac:
    // 0x3b0bac: 0x642e6c6c  daddiu      $t6, $at, 0x6C6C
    ctx->pc = 0x3b0bacu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)27756);
label_3b0bb0:
    // 0x3b0bb0: 0x7461  .word       0x00007461                   # addu        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0bb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b0bb4:
    // 0x3b0bb4: 0x0  nop
    ctx->pc = 0x3b0bb4u;
    // NOP
label_3b0bb8:
    // 0x3b0bb8: 0x0  nop
    ctx->pc = 0x3b0bb8u;
    // NOP
label_3b0bbc:
    // 0x3b0bbc: 0x0  nop
    ctx->pc = 0x3b0bbcu;
    // NOP
label_3b0bc0:
    // 0x3b0bc0: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3b0bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b0bc4:
    // 0x3b0bc4: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_3b0bc8:
    if (ctx->pc == 0x3B0BC8u) {
        ctx->pc = 0x3B0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BC4u;
        // 0x3b0bc8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3B0BC8 raw=0x41544144");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BCCu;
        goto label_3b0bcc;
    }
    ctx->pc = 0x3B0BC4u;
    {
        const bool branch_taken_0x3b0bc4 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3b0bc4) {
            ctx->pc = 0x3B0BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0BC4u;
            // 0x3b0bc8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3B0BC8 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BCD7Cu;
            return;
        }
    }
    ctx->pc = 0x3B0BCCu;
label_3b0bcc:
    // 0x3b0bcc: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3b0bccu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_3b0bd0:
    // 0x3b0bd0: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_3b0bd4:
    if (ctx->pc == 0x3B0BD4u) {
        ctx->pc = 0x3B0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BD0u;
        // 0x3b0bd4: 0x4d44435c  .word       0x4D44435C                   # INVALID     $t2, $a0, 0x435C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B0BD4 raw=0x4D44435C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BD8u;
        goto label_3b0bd8;
    }
    ctx->pc = 0x3B0BD0u;
    {
        const bool branch_taken_0x3b0bd0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3b0bd0) {
            ctx->pc = 0x3B0BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0BD0u;
            // 0x3b0bd4: 0x4d44435c  .word       0x4D44435C                   # INVALID     $t2, $a0, 0x435C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B0BD4 raw=0x4D44435C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3D28u;
            return;
        }
    }
    ctx->pc = 0x3B0BD8u;
label_3b0bd8:
    // 0x3b0bd8: 0x4c55444f  .word       0x4C55444F                   # INVALID     $v0, $s5, 0x444F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0bd8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B0BD8 raw=0x4C55444F");
label_3b0bdc:
    // 0x3b0bdc: 0x52492e45  beql        $s2, $t1, . + 4 + (0x2E45 << 2)
label_3b0be0:
    if (ctx->pc == 0x3B0BE0u) {
        ctx->pc = 0x3B0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BDCu;
        // 0x3b0be0: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BE4u;
        goto label_3b0be4;
    }
    ctx->pc = 0x3B0BDCu;
    {
        const bool branch_taken_0x3b0bdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 9));
        if (branch_taken_0x3b0bdc) {
            ctx->pc = 0x3B0BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0BDCu;
            // 0x3b0be0: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC4F4u;
            return;
        }
    }
    ctx->pc = 0x3B0BE4u;
label_3b0be4:
    // 0x3b0be4: 0x0  nop
    ctx->pc = 0x3b0be4u;
    // NOP
label_3b0be8:
    // 0x3b0be8: 0x0  nop
    ctx->pc = 0x3b0be8u;
    // NOP
label_3b0bec:
    // 0x3b0bec: 0x0  nop
    ctx->pc = 0x3b0becu;
    // NOP
label_3b0bf0:
    // 0x3b0bf0: 0x6f6d6463  ldr         $t5, 0x6463($k1)
    ctx->pc = 0x3b0bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_3b0bf4:
    // 0x3b0bf4: 0x656c7564  daddiu      $t4, $t3, 0x7564
    ctx->pc = 0x3b0bf4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30052);
label_3b0bf8:
    // 0x3b0bf8: 0x7245203a  .word       0x7245203A                   # INVALID     $s2, $a1, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0bf8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x3B0BF8 raw=0x7245203A");
label_3b0bfc:
    // 0x3b0bfc: 0x21726f72  addi        $s2, $t3, 0x6F72
    ctx->pc = 0x3b0bfcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28530, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_3b0c00:
    // 0x3b0c00: 0x63732021  daddi       $s3, $k1, 0x2021
    ctx->pc = 0x3b0c00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8225; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_3b0c04:
    // 0x3b0c04: 0x66695365  daddiu      $t1, $s3, 0x5365
    ctx->pc = 0x3b0c04u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)21349);
label_3b0c08:
    // 0x3b0c08: 0x646e6942  daddiu      $t6, $v1, 0x6942
    ctx->pc = 0x3b0c08u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26946);
label_3b0c0c:
    // 0x3b0c0c: 0x20637052  addi        $v1, $v1, 0x7052
    ctx->pc = 0x3b0c0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28754, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_3b0c10:
    // 0x3b0c10: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b0c10u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b0c14:
    // 0x3b0c14: 0x0  nop
    ctx->pc = 0x3b0c14u;
    // NOP
label_3b0c18:
    // 0x3b0c18: 0x0  nop
    ctx->pc = 0x3b0c18u;
    // NOP
label_3b0c1c:
    // 0x3b0c1c: 0x0  nop
    ctx->pc = 0x3b0c1cu;
    // NOP
label_3b0c20:
    // 0x3b0c20: 0x6f6d6463  ldr         $t5, 0x6463($k1)
    ctx->pc = 0x3b0c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_3b0c24:
    // 0x3b0c24: 0x656c7564  daddiu      $t4, $t3, 0x7564
    ctx->pc = 0x3b0c24u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30052);
label_3b0c28:
    // 0x3b0c28: 0x6953203a  ldl         $s3, 0x203A($t2)
    ctx->pc = 0x3b0c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_3b0c2c:
    // 0x3b0c2c: 0x6f432066  ldr         $v1, 0x2066($k0)
    ctx->pc = 0x3b0c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8294); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3b0c30:
    // 0x3b0c30: 0x6e616d6d  ldr         $at, 0x6D6D($s3)
    ctx->pc = 0x3b0c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28013); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_3b0c34:
    // 0x3b0c34: 0x75642064  .word       0x75642064                   # INVALID     $t3, $a0, 0x2064 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0c34u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0C34 raw=0x75642064");
label_3b0c38:
    // 0x3b0c38: 0x676e6972  daddiu      $t6, $k1, 0x6972
    ctx->pc = 0x3b0c38u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26994);
label_3b0c3c:
    // 0x3b0c3c: 0x65786520  daddiu      $t8, $t3, 0x6520
    ctx->pc = 0x3b0c3cu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25888);
label_3b0c40:
    // 0x3b0c40: 0x69747563  ldl         $s4, 0x7563($t3)
    ctx->pc = 0x3b0c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30051); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_3b0c44:
    // 0x3b0c44: 0x2e2e6e6f  sltiu       $t6, $s1, 0x6E6F
    ctx->pc = 0x3b0c44u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)28271) ? 1 : 0);
label_3b0c48:
    // 0x3b0c48: 0x2e2e2e2e  sltiu       $t6, $s1, 0x2E2E
    ctx->pc = 0x3b0c48u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11822) ? 1 : 0);
label_3b0c4c:
    // 0x3b0c4c: 0x2e2e2e2e  sltiu       $t6, $s1, 0x2E2E
    ctx->pc = 0x3b0c4cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11822) ? 1 : 0);
label_3b0c50:
    // 0x3b0c50: 0xa2e  .word       0x00000A2E                   # dsub        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0c50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_3b0c54:
    // 0x3b0c54: 0x0  nop
    ctx->pc = 0x3b0c54u;
    // NOP
label_3b0c58:
    // 0x3b0c58: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0c58u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3b0c5c:
    // 0x3b0c5c: 0x0  nop
    ctx->pc = 0x3b0c5cu;
    // NOP
label_3b0c60:
    // 0x3b0c60: 0x1e4628  .word       0x001E4628                   # mfsa        $t0 # 001E0600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0c60u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_3b0c64:
    // 0x3b0c64: 0x1e4658  .word       0x001E4658                   # mult        $t0, $zero, $fp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3b0c68:
    // 0x3b0c68: 0x1e4688  .word       0x001E4688                   # jr          $zero # 001E4680 <InstrIdType: CPU_SPECIAL>
label_3b0c6c:
    if (ctx->pc == 0x3B0C6Cu) {
        ctx->pc = 0x3B0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C68u;
        // 0x3b0c6c: 0x1e46b8  dsll        $t0, $fp, 26 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) << 26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C70u;
        goto label_3b0c70;
    }
    ctx->pc = 0x3B0C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3B0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C68u;
        // 0x3b0c6c: 0x1e46b8  dsll        $t0, $fp, 26 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) << 26);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0C68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B0C70u;
label_3b0c70:
    // 0x3b0c70: 0x1e46e8  .word       0x001E46E8                   # mfsa        $t0 # 001E06C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0c70u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_3b0c74:
    // 0x3b0c74: 0x1e4718  .word       0x001E4718                   # mult        $t0, $zero, $fp # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3b0c78:
    // 0x3b0c78: 0x1e4748  .word       0x001E4748                   # jr          $zero # 001E4740 <InstrIdType: CPU_SPECIAL>
label_3b0c7c:
    if (ctx->pc == 0x3B0C7Cu) {
        ctx->pc = 0x3B0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C78u;
        // 0x3b0c7c: 0x1e4778  dsll        $t0, $fp, 29 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) << 29);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C80u;
        goto label_3b0c80;
    }
    ctx->pc = 0x3B0C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3B0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C78u;
        // 0x3b0c7c: 0x1e4778  dsll        $t0, $fp, 29 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) << 29);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0C78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B0C80u;
label_3b0c80:
    // 0x3b0c80: 0x1e924c  .word       0x001E924C                   # syscall     585 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0c80u;
    ctx->pc = 0x3B0C84u;
runtime->handleSyscall(rdram, ctx, 0x7A49u);
label_3b0c84:
    // 0x3b0c84: 0x1e924c  .word       0x001E924C                   # syscall     585 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0c84u;
    ctx->pc = 0x3B0C88u;
runtime->handleSyscall(rdram, ctx, 0x7A49u);
label_3b0c88:
    // 0x3b0c88: 0x1e924c  .word       0x001E924C                   # syscall     585 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0c88u;
    ctx->pc = 0x3B0C8Cu;
runtime->handleSyscall(rdram, ctx, 0x7A49u);
label_3b0c8c:
    // 0x3b0c8c: 0x1e92bc  dsll32      $s2, $fp, 10
    ctx->pc = 0x3b0c8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 30) << (32 + 10));
label_3b0c90:
    // 0x3b0c90: 0x1e924c  .word       0x001E924C                   # syscall     585 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0c90u;
    ctx->pc = 0x3B0C94u;
runtime->handleSyscall(rdram, ctx, 0x7A49u);
label_3b0c94:
    // 0x3b0c94: 0x1e924c  .word       0x001E924C                   # syscall     585 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0c94u;
    ctx->pc = 0x3B0C98u;
runtime->handleSyscall(rdram, ctx, 0x7A49u);
label_3b0c98:
    // 0x3b0c98: 0x1e924c  .word       0x001E924C                   # syscall     585 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0c98u;
    ctx->pc = 0x3B0C9Cu;
runtime->handleSyscall(rdram, ctx, 0x7A49u);
label_3b0c9c:
    // 0x3b0c9c: 0x1e924c  .word       0x001E924C                   # syscall     585 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0c9cu;
    ctx->pc = 0x3B0CA0u;
runtime->handleSyscall(rdram, ctx, 0x7A49u);
label_3b0ca0:
    // 0x3b0ca0: 0x2074654a  addi        $s4, $v1, 0x654A
    ctx->pc = 0x3b0ca0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25930, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_3b0ca4:
    // 0x3b0ca4: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0ca4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3b0ca8:
    // 0x3b0ca8: 0x20736f70  addi        $s3, $v1, 0x6F70
    ctx->pc = 0x3b0ca8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_3b0cac:
    // 0x3b0cac: 0x252c6625  addiu       $t4, $t1, 0x6625
    ctx->pc = 0x3b0cacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 26149));
label_3b0cb0:
    // 0x3b0cb0: 0x66252c66  daddiu      $a1, $s1, 0x2C66
    ctx->pc = 0x3b0cb0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11366);
label_3b0cb4:
    // 0x3b0cb4: 0x0  nop
    ctx->pc = 0x3b0cb4u;
    // NOP
label_3b0cb8:
    // 0x3b0cb8: 0x206e7472  addi        $t6, $v1, 0x7472
    ctx->pc = 0x3b0cb8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29810, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_3b0cbc:
    // 0x3b0cbc: 0x252c6425  addiu       $t4, $t1, 0x6425
    ctx->pc = 0x3b0cbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_3b0cc0:
    // 0x3b0cc0: 0x64252c64  daddiu      $a1, $at, 0x2C64
    ctx->pc = 0x3b0cc0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11364);
label_3b0cc4:
    // 0x3b0cc4: 0x0  nop
    ctx->pc = 0x3b0cc4u;
    // NOP
label_3b0cc8:
    // 0x3b0cc8: 0x0  nop
    ctx->pc = 0x3b0cc8u;
    // NOP
label_3b0ccc:
    // 0x3b0ccc: 0x0  nop
    ctx->pc = 0x3b0cccu;
    // NOP
label_3b0cd0:
    // 0x3b0cd0: 0x1f7180  sll         $t6, $ra, 6
    ctx->pc = 0x3b0cd0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 31), 6));
label_3b0cd4:
    // 0x3b0cd4: 0x1f73cc  .word       0x001F73CC                   # syscall     463 # 001F0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0cd4u;
    ctx->pc = 0x3B0CD8u;
runtime->handleSyscall(rdram, ctx, 0x7DCFu);
label_3b0cd8:
    // 0x3b0cd8: 0x1f74ec  .word       0x001F74EC                   # dadd        $t6, $zero, $ra # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0cd8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 31); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3b0cdc:
    // 0x3b0cdc: 0x1f77ec  .word       0x001F77EC                   # dadd        $t6, $zero, $ra # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0cdcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 31); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3b0ce0:
    // 0x3b0ce0: 0x1f77ec  .word       0x001F77EC                   # dadd        $t6, $zero, $ra # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0ce0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 31); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3b0ce4:
    // 0x3b0ce4: 0x1f785c  .word       0x001F785C                   # dmult       $zero, $ra # 00007840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0ce4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B0CE4 raw=0x001F785C");
label_3b0ce8:
    // 0x3b0ce8: 0x1f7874  teq         $zero, $ra, 481
    ctx->pc = 0x3b0ce8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
label_3b0cec:
    // 0x3b0cec: 0x1f7ac4  .word       0x001F7AC4                   # sllv        $t7, $ra, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0cecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 31), GPR_U32(ctx, 0) & 0x1F));
label_3b0cf0:
    // 0x3b0cf0: 0x20666665  addi        $a2, $v1, 0x6665
    ctx->pc = 0x3b0cf0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26213, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_3b0cf4:
    // 0x3b0cf4: 0x6c727463  ldr         $s2, 0x7463($v1)
    ctx->pc = 0x3b0cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b0cf8:
    // 0x3b0cf8: 0x6e696b20  ldr         $t1, 0x6B20($s3)
    ctx->pc = 0x3b0cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b0cfc:
    // 0x3b0cfc: 0x3f3f2064  .word       0x3F3F2064                   # lui         $ra, 0x2064 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0cfcu;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)8292 << 16));
label_3b0d00:
    // 0x3b0d00: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b0d00u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b0d04:
    // 0x3b0d04: 0x0  nop
    ctx->pc = 0x3b0d04u;
    // NOP
label_3b0d08:
    // 0x3b0d08: 0x6c696863  ldr         $t1, 0x6863($v1)
    ctx->pc = 0x3b0d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b0d0c:
    // 0x3b0d0c: 0x33252064  andi        $a1, $t9, 0x2064
    ctx->pc = 0x3b0d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)8292);
label_3b0d10:
    // 0x3b0d10: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0d10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b0d14:
    // 0x3b0d14: 0x0  nop
    ctx->pc = 0x3b0d14u;
    // NOP
label_3b0d18:
    // 0x3b0d18: 0x0  nop
    ctx->pc = 0x3b0d18u;
    // NOP
label_3b0d1c:
    // 0x3b0d1c: 0x0  nop
    ctx->pc = 0x3b0d1cu;
    // NOP
label_3b0d20:
    // 0x3b0d20: 0x656c6573  daddiu      $t4, $t3, 0x6573
    ctx->pc = 0x3b0d20u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
label_3b0d24:
    // 0x3b0d24: 0x6c5f7463  ldr         $ra, 0x7463($v0)
    ctx->pc = 0x3b0d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_3b0d28:
    // 0x3b0d28: 0x72657961  .word       0x72657961                   # maddu1      $t7, $s3, $a1 # 00000140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0d28u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3b0d2c:
    // 0x3b0d2c: 0x6425093a  daddiu      $a1, $at, 0x93A
    ctx->pc = 0x3b0d2cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)2362);
label_3b0d30:
    // 0x3b0d30: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b0d30u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b0d34:
    // 0x3b0d34: 0x0  nop
    ctx->pc = 0x3b0d34u;
    // NOP
label_3b0d38:
    // 0x3b0d38: 0x6d5f6742  ldr         $ra, 0x6742($t2)
    ctx->pc = 0x3b0d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 26434); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_3b0d3c:
    // 0x3b0d3c: 0x2865766f  slti        $a1, $v1, 0x766F
    ctx->pc = 0x3b0d3cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30319) ? 1 : 0);
label_3b0d40:
    // 0x3b0d40: 0x25093a29  addiu       $t1, $t0, 0x3A29
    ctx->pc = 0x3b0d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 14889));
label_3b0d44:
    // 0x3b0d44: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b0d48:
    // 0x3b0d48: 0x0  nop
    ctx->pc = 0x3b0d48u;
    // NOP
label_3b0d4c:
    // 0x3b0d4c: 0x0  nop
    ctx->pc = 0x3b0d4cu;
    // NOP
    ctx->pc = 0x3b0d50u;
}
