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

// Function: Pl_r1_s_slope_b
// Address: 0x14af50 - 0x14b680
void Pl_r1_s_slope_b_0x14af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_s_slope_b_0x14af50");
#endif

    switch (ctx->pc) {
        case 0x14af50u: goto label_14af50;
        case 0x14af54u: goto label_14af54;
        case 0x14af58u: goto label_14af58;
        case 0x14af5cu: goto label_14af5c;
        case 0x14af60u: goto label_14af60;
        case 0x14af64u: goto label_14af64;
        case 0x14af68u: goto label_14af68;
        case 0x14af6cu: goto label_14af6c;
        case 0x14af70u: goto label_14af70;
        case 0x14af74u: goto label_14af74;
        case 0x14af78u: goto label_14af78;
        case 0x14af7cu: goto label_14af7c;
        case 0x14af80u: goto label_14af80;
        case 0x14af84u: goto label_14af84;
        case 0x14af88u: goto label_14af88;
        case 0x14af8cu: goto label_14af8c;
        case 0x14af90u: goto label_14af90;
        case 0x14af94u: goto label_14af94;
        case 0x14af98u: goto label_14af98;
        case 0x14af9cu: goto label_14af9c;
        case 0x14afa0u: goto label_14afa0;
        case 0x14afa4u: goto label_14afa4;
        case 0x14afa8u: goto label_14afa8;
        case 0x14afacu: goto label_14afac;
        case 0x14afb0u: goto label_14afb0;
        case 0x14afb4u: goto label_14afb4;
        case 0x14afb8u: goto label_14afb8;
        case 0x14afbcu: goto label_14afbc;
        case 0x14afc0u: goto label_14afc0;
        case 0x14afc4u: goto label_14afc4;
        case 0x14afc8u: goto label_14afc8;
        case 0x14afccu: goto label_14afcc;
        case 0x14afd0u: goto label_14afd0;
        case 0x14afd4u: goto label_14afd4;
        case 0x14afd8u: goto label_14afd8;
        case 0x14afdcu: goto label_14afdc;
        case 0x14afe0u: goto label_14afe0;
        case 0x14afe4u: goto label_14afe4;
        case 0x14afe8u: goto label_14afe8;
        case 0x14afecu: goto label_14afec;
        case 0x14aff0u: goto label_14aff0;
        case 0x14aff4u: goto label_14aff4;
        case 0x14aff8u: goto label_14aff8;
        case 0x14affcu: goto label_14affc;
        case 0x14b000u: goto label_14b000;
        case 0x14b004u: goto label_14b004;
        case 0x14b008u: goto label_14b008;
        case 0x14b00cu: goto label_14b00c;
        case 0x14b010u: goto label_14b010;
        case 0x14b014u: goto label_14b014;
        case 0x14b018u: goto label_14b018;
        case 0x14b01cu: goto label_14b01c;
        case 0x14b020u: goto label_14b020;
        case 0x14b024u: goto label_14b024;
        case 0x14b028u: goto label_14b028;
        case 0x14b02cu: goto label_14b02c;
        case 0x14b030u: goto label_14b030;
        case 0x14b034u: goto label_14b034;
        case 0x14b038u: goto label_14b038;
        case 0x14b03cu: goto label_14b03c;
        case 0x14b040u: goto label_14b040;
        case 0x14b044u: goto label_14b044;
        case 0x14b048u: goto label_14b048;
        case 0x14b04cu: goto label_14b04c;
        case 0x14b050u: goto label_14b050;
        case 0x14b054u: goto label_14b054;
        case 0x14b058u: goto label_14b058;
        case 0x14b05cu: goto label_14b05c;
        case 0x14b060u: goto label_14b060;
        case 0x14b064u: goto label_14b064;
        case 0x14b068u: goto label_14b068;
        case 0x14b06cu: goto label_14b06c;
        case 0x14b070u: goto label_14b070;
        case 0x14b074u: goto label_14b074;
        case 0x14b078u: goto label_14b078;
        case 0x14b07cu: goto label_14b07c;
        case 0x14b080u: goto label_14b080;
        case 0x14b084u: goto label_14b084;
        case 0x14b088u: goto label_14b088;
        case 0x14b08cu: goto label_14b08c;
        case 0x14b090u: goto label_14b090;
        case 0x14b094u: goto label_14b094;
        case 0x14b098u: goto label_14b098;
        case 0x14b09cu: goto label_14b09c;
        case 0x14b0a0u: goto label_14b0a0;
        case 0x14b0a4u: goto label_14b0a4;
        case 0x14b0a8u: goto label_14b0a8;
        case 0x14b0acu: goto label_14b0ac;
        case 0x14b0b0u: goto label_14b0b0;
        case 0x14b0b4u: goto label_14b0b4;
        case 0x14b0b8u: goto label_14b0b8;
        case 0x14b0bcu: goto label_14b0bc;
        case 0x14b0c0u: goto label_14b0c0;
        case 0x14b0c4u: goto label_14b0c4;
        case 0x14b0c8u: goto label_14b0c8;
        case 0x14b0ccu: goto label_14b0cc;
        case 0x14b0d0u: goto label_14b0d0;
        case 0x14b0d4u: goto label_14b0d4;
        case 0x14b0d8u: goto label_14b0d8;
        case 0x14b0dcu: goto label_14b0dc;
        case 0x14b0e0u: goto label_14b0e0;
        case 0x14b0e4u: goto label_14b0e4;
        case 0x14b0e8u: goto label_14b0e8;
        case 0x14b0ecu: goto label_14b0ec;
        case 0x14b0f0u: goto label_14b0f0;
        case 0x14b0f4u: goto label_14b0f4;
        case 0x14b0f8u: goto label_14b0f8;
        case 0x14b0fcu: goto label_14b0fc;
        case 0x14b100u: goto label_14b100;
        case 0x14b104u: goto label_14b104;
        case 0x14b108u: goto label_14b108;
        case 0x14b10cu: goto label_14b10c;
        case 0x14b110u: goto label_14b110;
        case 0x14b114u: goto label_14b114;
        case 0x14b118u: goto label_14b118;
        case 0x14b11cu: goto label_14b11c;
        case 0x14b120u: goto label_14b120;
        case 0x14b124u: goto label_14b124;
        case 0x14b128u: goto label_14b128;
        case 0x14b12cu: goto label_14b12c;
        case 0x14b130u: goto label_14b130;
        case 0x14b134u: goto label_14b134;
        case 0x14b138u: goto label_14b138;
        case 0x14b13cu: goto label_14b13c;
        case 0x14b140u: goto label_14b140;
        case 0x14b144u: goto label_14b144;
        case 0x14b148u: goto label_14b148;
        case 0x14b14cu: goto label_14b14c;
        case 0x14b150u: goto label_14b150;
        case 0x14b154u: goto label_14b154;
        case 0x14b158u: goto label_14b158;
        case 0x14b15cu: goto label_14b15c;
        case 0x14b160u: goto label_14b160;
        case 0x14b164u: goto label_14b164;
        case 0x14b168u: goto label_14b168;
        case 0x14b16cu: goto label_14b16c;
        case 0x14b170u: goto label_14b170;
        case 0x14b174u: goto label_14b174;
        case 0x14b178u: goto label_14b178;
        case 0x14b17cu: goto label_14b17c;
        case 0x14b180u: goto label_14b180;
        case 0x14b184u: goto label_14b184;
        case 0x14b188u: goto label_14b188;
        case 0x14b18cu: goto label_14b18c;
        case 0x14b190u: goto label_14b190;
        case 0x14b194u: goto label_14b194;
        case 0x14b198u: goto label_14b198;
        case 0x14b19cu: goto label_14b19c;
        case 0x14b1a0u: goto label_14b1a0;
        case 0x14b1a4u: goto label_14b1a4;
        case 0x14b1a8u: goto label_14b1a8;
        case 0x14b1acu: goto label_14b1ac;
        case 0x14b1b0u: goto label_14b1b0;
        case 0x14b1b4u: goto label_14b1b4;
        case 0x14b1b8u: goto label_14b1b8;
        case 0x14b1bcu: goto label_14b1bc;
        case 0x14b1c0u: goto label_14b1c0;
        case 0x14b1c4u: goto label_14b1c4;
        case 0x14b1c8u: goto label_14b1c8;
        case 0x14b1ccu: goto label_14b1cc;
        case 0x14b1d0u: goto label_14b1d0;
        case 0x14b1d4u: goto label_14b1d4;
        case 0x14b1d8u: goto label_14b1d8;
        case 0x14b1dcu: goto label_14b1dc;
        case 0x14b1e0u: goto label_14b1e0;
        case 0x14b1e4u: goto label_14b1e4;
        case 0x14b1e8u: goto label_14b1e8;
        case 0x14b1ecu: goto label_14b1ec;
        case 0x14b1f0u: goto label_14b1f0;
        case 0x14b1f4u: goto label_14b1f4;
        case 0x14b1f8u: goto label_14b1f8;
        case 0x14b1fcu: goto label_14b1fc;
        case 0x14b200u: goto label_14b200;
        case 0x14b204u: goto label_14b204;
        case 0x14b208u: goto label_14b208;
        case 0x14b20cu: goto label_14b20c;
        case 0x14b210u: goto label_14b210;
        case 0x14b214u: goto label_14b214;
        case 0x14b218u: goto label_14b218;
        case 0x14b21cu: goto label_14b21c;
        case 0x14b220u: goto label_14b220;
        case 0x14b224u: goto label_14b224;
        case 0x14b228u: goto label_14b228;
        case 0x14b22cu: goto label_14b22c;
        case 0x14b230u: goto label_14b230;
        case 0x14b234u: goto label_14b234;
        case 0x14b238u: goto label_14b238;
        case 0x14b23cu: goto label_14b23c;
        case 0x14b240u: goto label_14b240;
        case 0x14b244u: goto label_14b244;
        case 0x14b248u: goto label_14b248;
        case 0x14b24cu: goto label_14b24c;
        case 0x14b250u: goto label_14b250;
        case 0x14b254u: goto label_14b254;
        case 0x14b258u: goto label_14b258;
        case 0x14b25cu: goto label_14b25c;
        case 0x14b260u: goto label_14b260;
        case 0x14b264u: goto label_14b264;
        case 0x14b268u: goto label_14b268;
        case 0x14b26cu: goto label_14b26c;
        case 0x14b270u: goto label_14b270;
        case 0x14b274u: goto label_14b274;
        case 0x14b278u: goto label_14b278;
        case 0x14b27cu: goto label_14b27c;
        case 0x14b280u: goto label_14b280;
        case 0x14b284u: goto label_14b284;
        case 0x14b288u: goto label_14b288;
        case 0x14b28cu: goto label_14b28c;
        case 0x14b290u: goto label_14b290;
        case 0x14b294u: goto label_14b294;
        case 0x14b298u: goto label_14b298;
        case 0x14b29cu: goto label_14b29c;
        case 0x14b2a0u: goto label_14b2a0;
        case 0x14b2a4u: goto label_14b2a4;
        case 0x14b2a8u: goto label_14b2a8;
        case 0x14b2acu: goto label_14b2ac;
        case 0x14b2b0u: goto label_14b2b0;
        case 0x14b2b4u: goto label_14b2b4;
        case 0x14b2b8u: goto label_14b2b8;
        case 0x14b2bcu: goto label_14b2bc;
        case 0x14b2c0u: goto label_14b2c0;
        case 0x14b2c4u: goto label_14b2c4;
        case 0x14b2c8u: goto label_14b2c8;
        case 0x14b2ccu: goto label_14b2cc;
        case 0x14b2d0u: goto label_14b2d0;
        case 0x14b2d4u: goto label_14b2d4;
        case 0x14b2d8u: goto label_14b2d8;
        case 0x14b2dcu: goto label_14b2dc;
        case 0x14b2e0u: goto label_14b2e0;
        case 0x14b2e4u: goto label_14b2e4;
        case 0x14b2e8u: goto label_14b2e8;
        case 0x14b2ecu: goto label_14b2ec;
        case 0x14b2f0u: goto label_14b2f0;
        case 0x14b2f4u: goto label_14b2f4;
        case 0x14b2f8u: goto label_14b2f8;
        case 0x14b2fcu: goto label_14b2fc;
        case 0x14b300u: goto label_14b300;
        case 0x14b304u: goto label_14b304;
        case 0x14b308u: goto label_14b308;
        case 0x14b30cu: goto label_14b30c;
        case 0x14b310u: goto label_14b310;
        case 0x14b314u: goto label_14b314;
        case 0x14b318u: goto label_14b318;
        case 0x14b31cu: goto label_14b31c;
        case 0x14b320u: goto label_14b320;
        case 0x14b324u: goto label_14b324;
        case 0x14b328u: goto label_14b328;
        case 0x14b32cu: goto label_14b32c;
        case 0x14b330u: goto label_14b330;
        case 0x14b334u: goto label_14b334;
        case 0x14b338u: goto label_14b338;
        case 0x14b33cu: goto label_14b33c;
        case 0x14b340u: goto label_14b340;
        case 0x14b344u: goto label_14b344;
        case 0x14b348u: goto label_14b348;
        case 0x14b34cu: goto label_14b34c;
        case 0x14b350u: goto label_14b350;
        case 0x14b354u: goto label_14b354;
        case 0x14b358u: goto label_14b358;
        case 0x14b35cu: goto label_14b35c;
        case 0x14b360u: goto label_14b360;
        case 0x14b364u: goto label_14b364;
        case 0x14b368u: goto label_14b368;
        case 0x14b36cu: goto label_14b36c;
        case 0x14b370u: goto label_14b370;
        case 0x14b374u: goto label_14b374;
        case 0x14b378u: goto label_14b378;
        case 0x14b37cu: goto label_14b37c;
        case 0x14b380u: goto label_14b380;
        case 0x14b384u: goto label_14b384;
        case 0x14b388u: goto label_14b388;
        case 0x14b38cu: goto label_14b38c;
        case 0x14b390u: goto label_14b390;
        case 0x14b394u: goto label_14b394;
        case 0x14b398u: goto label_14b398;
        case 0x14b39cu: goto label_14b39c;
        case 0x14b3a0u: goto label_14b3a0;
        case 0x14b3a4u: goto label_14b3a4;
        case 0x14b3a8u: goto label_14b3a8;
        case 0x14b3acu: goto label_14b3ac;
        case 0x14b3b0u: goto label_14b3b0;
        case 0x14b3b4u: goto label_14b3b4;
        case 0x14b3b8u: goto label_14b3b8;
        case 0x14b3bcu: goto label_14b3bc;
        case 0x14b3c0u: goto label_14b3c0;
        case 0x14b3c4u: goto label_14b3c4;
        case 0x14b3c8u: goto label_14b3c8;
        case 0x14b3ccu: goto label_14b3cc;
        case 0x14b3d0u: goto label_14b3d0;
        case 0x14b3d4u: goto label_14b3d4;
        case 0x14b3d8u: goto label_14b3d8;
        case 0x14b3dcu: goto label_14b3dc;
        case 0x14b3e0u: goto label_14b3e0;
        case 0x14b3e4u: goto label_14b3e4;
        case 0x14b3e8u: goto label_14b3e8;
        case 0x14b3ecu: goto label_14b3ec;
        case 0x14b3f0u: goto label_14b3f0;
        case 0x14b3f4u: goto label_14b3f4;
        case 0x14b3f8u: goto label_14b3f8;
        case 0x14b3fcu: goto label_14b3fc;
        case 0x14b400u: goto label_14b400;
        case 0x14b404u: goto label_14b404;
        case 0x14b408u: goto label_14b408;
        case 0x14b40cu: goto label_14b40c;
        case 0x14b410u: goto label_14b410;
        case 0x14b414u: goto label_14b414;
        case 0x14b418u: goto label_14b418;
        case 0x14b41cu: goto label_14b41c;
        case 0x14b420u: goto label_14b420;
        case 0x14b424u: goto label_14b424;
        case 0x14b428u: goto label_14b428;
        case 0x14b42cu: goto label_14b42c;
        case 0x14b430u: goto label_14b430;
        case 0x14b434u: goto label_14b434;
        case 0x14b438u: goto label_14b438;
        case 0x14b43cu: goto label_14b43c;
        case 0x14b440u: goto label_14b440;
        case 0x14b444u: goto label_14b444;
        case 0x14b448u: goto label_14b448;
        case 0x14b44cu: goto label_14b44c;
        case 0x14b450u: goto label_14b450;
        case 0x14b454u: goto label_14b454;
        case 0x14b458u: goto label_14b458;
        case 0x14b45cu: goto label_14b45c;
        case 0x14b460u: goto label_14b460;
        case 0x14b464u: goto label_14b464;
        case 0x14b468u: goto label_14b468;
        case 0x14b46cu: goto label_14b46c;
        case 0x14b470u: goto label_14b470;
        case 0x14b474u: goto label_14b474;
        case 0x14b478u: goto label_14b478;
        case 0x14b47cu: goto label_14b47c;
        case 0x14b480u: goto label_14b480;
        case 0x14b484u: goto label_14b484;
        case 0x14b488u: goto label_14b488;
        case 0x14b48cu: goto label_14b48c;
        case 0x14b490u: goto label_14b490;
        case 0x14b494u: goto label_14b494;
        case 0x14b498u: goto label_14b498;
        case 0x14b49cu: goto label_14b49c;
        case 0x14b4a0u: goto label_14b4a0;
        case 0x14b4a4u: goto label_14b4a4;
        case 0x14b4a8u: goto label_14b4a8;
        case 0x14b4acu: goto label_14b4ac;
        case 0x14b4b0u: goto label_14b4b0;
        case 0x14b4b4u: goto label_14b4b4;
        case 0x14b4b8u: goto label_14b4b8;
        case 0x14b4bcu: goto label_14b4bc;
        case 0x14b4c0u: goto label_14b4c0;
        case 0x14b4c4u: goto label_14b4c4;
        case 0x14b4c8u: goto label_14b4c8;
        case 0x14b4ccu: goto label_14b4cc;
        case 0x14b4d0u: goto label_14b4d0;
        case 0x14b4d4u: goto label_14b4d4;
        case 0x14b4d8u: goto label_14b4d8;
        case 0x14b4dcu: goto label_14b4dc;
        case 0x14b4e0u: goto label_14b4e0;
        case 0x14b4e4u: goto label_14b4e4;
        case 0x14b4e8u: goto label_14b4e8;
        case 0x14b4ecu: goto label_14b4ec;
        case 0x14b4f0u: goto label_14b4f0;
        case 0x14b4f4u: goto label_14b4f4;
        case 0x14b4f8u: goto label_14b4f8;
        case 0x14b4fcu: goto label_14b4fc;
        case 0x14b500u: goto label_14b500;
        case 0x14b504u: goto label_14b504;
        case 0x14b508u: goto label_14b508;
        case 0x14b50cu: goto label_14b50c;
        case 0x14b510u: goto label_14b510;
        case 0x14b514u: goto label_14b514;
        case 0x14b518u: goto label_14b518;
        case 0x14b51cu: goto label_14b51c;
        case 0x14b520u: goto label_14b520;
        case 0x14b524u: goto label_14b524;
        case 0x14b528u: goto label_14b528;
        case 0x14b52cu: goto label_14b52c;
        case 0x14b530u: goto label_14b530;
        case 0x14b534u: goto label_14b534;
        case 0x14b538u: goto label_14b538;
        case 0x14b53cu: goto label_14b53c;
        case 0x14b540u: goto label_14b540;
        case 0x14b544u: goto label_14b544;
        case 0x14b548u: goto label_14b548;
        case 0x14b54cu: goto label_14b54c;
        case 0x14b550u: goto label_14b550;
        case 0x14b554u: goto label_14b554;
        case 0x14b558u: goto label_14b558;
        case 0x14b55cu: goto label_14b55c;
        case 0x14b560u: goto label_14b560;
        case 0x14b564u: goto label_14b564;
        case 0x14b568u: goto label_14b568;
        case 0x14b56cu: goto label_14b56c;
        case 0x14b570u: goto label_14b570;
        case 0x14b574u: goto label_14b574;
        case 0x14b578u: goto label_14b578;
        case 0x14b57cu: goto label_14b57c;
        case 0x14b580u: goto label_14b580;
        case 0x14b584u: goto label_14b584;
        case 0x14b588u: goto label_14b588;
        case 0x14b58cu: goto label_14b58c;
        case 0x14b590u: goto label_14b590;
        case 0x14b594u: goto label_14b594;
        case 0x14b598u: goto label_14b598;
        case 0x14b59cu: goto label_14b59c;
        case 0x14b5a0u: goto label_14b5a0;
        case 0x14b5a4u: goto label_14b5a4;
        case 0x14b5a8u: goto label_14b5a8;
        case 0x14b5acu: goto label_14b5ac;
        case 0x14b5b0u: goto label_14b5b0;
        case 0x14b5b4u: goto label_14b5b4;
        case 0x14b5b8u: goto label_14b5b8;
        case 0x14b5bcu: goto label_14b5bc;
        case 0x14b5c0u: goto label_14b5c0;
        case 0x14b5c4u: goto label_14b5c4;
        case 0x14b5c8u: goto label_14b5c8;
        case 0x14b5ccu: goto label_14b5cc;
        case 0x14b5d0u: goto label_14b5d0;
        case 0x14b5d4u: goto label_14b5d4;
        case 0x14b5d8u: goto label_14b5d8;
        case 0x14b5dcu: goto label_14b5dc;
        case 0x14b5e0u: goto label_14b5e0;
        case 0x14b5e4u: goto label_14b5e4;
        case 0x14b5e8u: goto label_14b5e8;
        case 0x14b5ecu: goto label_14b5ec;
        case 0x14b5f0u: goto label_14b5f0;
        case 0x14b5f4u: goto label_14b5f4;
        case 0x14b5f8u: goto label_14b5f8;
        case 0x14b5fcu: goto label_14b5fc;
        case 0x14b600u: goto label_14b600;
        case 0x14b604u: goto label_14b604;
        case 0x14b608u: goto label_14b608;
        case 0x14b60cu: goto label_14b60c;
        case 0x14b610u: goto label_14b610;
        case 0x14b614u: goto label_14b614;
        case 0x14b618u: goto label_14b618;
        case 0x14b61cu: goto label_14b61c;
        case 0x14b620u: goto label_14b620;
        case 0x14b624u: goto label_14b624;
        case 0x14b628u: goto label_14b628;
        case 0x14b62cu: goto label_14b62c;
        case 0x14b630u: goto label_14b630;
        case 0x14b634u: goto label_14b634;
        case 0x14b638u: goto label_14b638;
        case 0x14b63cu: goto label_14b63c;
        case 0x14b640u: goto label_14b640;
        case 0x14b644u: goto label_14b644;
        case 0x14b648u: goto label_14b648;
        case 0x14b64cu: goto label_14b64c;
        case 0x14b650u: goto label_14b650;
        case 0x14b654u: goto label_14b654;
        case 0x14b658u: goto label_14b658;
        case 0x14b65cu: goto label_14b65c;
        case 0x14b660u: goto label_14b660;
        case 0x14b664u: goto label_14b664;
        case 0x14b668u: goto label_14b668;
        case 0x14b66cu: goto label_14b66c;
        case 0x14b670u: goto label_14b670;
        case 0x14b674u: goto label_14b674;
        case 0x14b678u: goto label_14b678;
        case 0x14b67cu: goto label_14b67c;
        default: break;
    }

    ctx->pc = 0x14af50u;

label_14af50:
    // 0x14af50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14af50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14af54:
    // 0x14af54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14af54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_14af58:
    // 0x14af58: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14af58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_14af5c:
    // 0x14af5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14af60:
    // 0x14af60: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14af60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14af64:
    // 0x14af64: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14af64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14af68:
    // 0x14af68: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x14af68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_14af6c:
    // 0x14af6c: 0x102001c0  beqz        $at, . + 4 + (0x1C0 << 2)
label_14af70:
    if (ctx->pc == 0x14AF70u) {
        ctx->pc = 0x14AF74u;
        goto label_14af74;
    }
    ctx->pc = 0x14AF6Cu;
    {
        const bool branch_taken_0x14af6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14af6c) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14AF74u;
label_14af74:
    // 0x14af74: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14af74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14af78:
    // 0x14af78: 0x2464e880  addiu       $a0, $v1, -0x1780
    ctx->pc = 0x14af78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_14af7c:
    // 0x14af7c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14af80:
    // 0x14af80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14af84:
    // 0x14af84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14af84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14af88:
    // 0x14af88: 0x600008  jr          $v1
label_14af8c:
    if (ctx->pc == 0x14AF8Cu) {
        ctx->pc = 0x14AF90u;
        goto label_14af90;
    }
    ctx->pc = 0x14AF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AF88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14AF90u;
label_14af90:
    // 0x14af90: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14af90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14af94:
    // 0x14af94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14af98:
    // 0x14af98: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14af98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_14af9c:
    // 0x14af9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14afa0:
    // 0x14afa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14afa4:
    // 0x14afa4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14afa8:
    // 0x14afa8: 0x24060a27  addiu       $a2, $zero, 0xA27
    ctx->pc = 0x14afa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2599));
label_14afac:
    // 0x14afac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14afacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14afb0:
    // 0x14afb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14afb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14afb4:
    // 0x14afb4: 0xc0965d0  jal         func_259740
label_14afb8:
    if (ctx->pc == 0x14AFB8u) {
        ctx->pc = 0x14AFBCu;
        goto label_14afbc;
    }
    ctx->pc = 0x14AFB4u;
    SET_GPR_U32(ctx, 31, 0x14AFBCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14AFB4u, 0x14AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFBCu;
label_14afbc:
    // 0x14afbc: 0x3c02bf40  lui         $v0, 0xBF40
    ctx->pc = 0x14afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48960 << 16));
label_14afc0:
    // 0x14afc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14afc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14afc4:
    // 0x14afc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14afc8:
    // 0x14afc8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14afcc:
    // 0x14afcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14afccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14afd0:
    // 0x14afd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14afd4:
    // 0x14afd4: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14afd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14afd8:
    // 0x14afd8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x14afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_14afdc:
    // 0x14afdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14afe0:
    // 0x14afe0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14afe0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_14afe4:
    // 0x14afe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14afe8:
    // 0x14afe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14afec:
    // 0x14afec: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14aff0:
    // 0x14aff0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14aff4:
    // 0x14aff4: 0xc058f20  jal         func_163C80
label_14aff8:
    if (ctx->pc == 0x14AFF8u) {
        ctx->pc = 0x14AFFCu;
        goto label_14affc;
    }
    ctx->pc = 0x14AFF4u;
    SET_GPR_U32(ctx, 31, 0x14AFFCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14AFF4u, 0x14AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFFCu;
label_14affc:
    // 0x14affc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b000:
    // 0x14b000: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14b000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14b004:
    // 0x14b004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14b008:
    // 0x14b008: 0x0  nop
    ctx->pc = 0x14b008u;
    // NOP
label_14b00c:
    // 0x14b00c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14b00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14b010:
    // 0x14b010: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14b010u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_14b014:
    // 0x14b014: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b018:
    // 0x14b018: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x14b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
label_14b01c:
    // 0x14b01c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b020:
    // 0x14b020: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b024:
    // 0x14b024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14b028:
    // 0x14b028: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14b02c:
    // 0x14b02c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b030:
    // 0x14b030: 0x944209ee  lhu         $v0, 0x9EE($v0)
    ctx->pc = 0x14b030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2542)));
label_14b034:
    // 0x14b034: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14b038:
    // 0x14b038: 0x28420035  slti        $v0, $v0, 0x35
    ctx->pc = 0x14b038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)53) ? 1 : 0);
label_14b03c:
    // 0x14b03c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_14b040:
    if (ctx->pc == 0x14B040u) {
        ctx->pc = 0x14B044u;
        goto label_14b044;
    }
    ctx->pc = 0x14B03Cu;
    {
        const bool branch_taken_0x14b03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b03c) {
            ctx->pc = 0x14B068u;
            goto label_14b068;
        }
    }
    ctx->pc = 0x14B044u;
label_14b044:
    // 0x14b044: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b048:
    // 0x14b048: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b04c:
    // 0x14b04c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14b050:
    // 0x14b050: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x14b050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_14b054:
    // 0x14b054: 0x34460027  ori         $a2, $v0, 0x27
    ctx->pc = 0x14b054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
label_14b058:
    // 0x14b058: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b05c:
    // 0x14b05c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b05cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14b060:
    // 0x14b060: 0xc0965d0  jal         func_259740
label_14b064:
    if (ctx->pc == 0x14B064u) {
        ctx->pc = 0x14B068u;
        goto label_14b068;
    }
    ctx->pc = 0x14B060u;
    SET_GPR_U32(ctx, 31, 0x14B068u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B060u, 0x14B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B068u;
label_14b068:
    // 0x14b068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b06c:
    // 0x14b06c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b06cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b070:
    // 0x14b070: 0xc096b40  jal         func_25AD00
label_14b074:
    if (ctx->pc == 0x14B074u) {
        ctx->pc = 0x14B078u;
        goto label_14b078;
    }
    ctx->pc = 0x14B070u;
    SET_GPR_U32(ctx, 31, 0x14B078u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B070u, 0x14B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B078u;
label_14b078:
    // 0x14b078: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b07c:
    // 0x14b07c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14b07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14b080:
    // 0x14b080: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_14b084:
    if (ctx->pc == 0x14B084u) {
        ctx->pc = 0x14B088u;
        goto label_14b088;
    }
    ctx->pc = 0x14B080u;
    {
        const bool branch_taken_0x14b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b080) {
            ctx->pc = 0x14B0C4u;
            goto label_14b0c4;
        }
    }
    ctx->pc = 0x14B088u;
label_14b088:
    // 0x14b088: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b08c:
    // 0x14b08c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14b08cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_14b090:
    // 0x14b090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14b094:
    // 0x14b094: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14b094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_14b098:
    // 0x14b098: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b09c:
    // 0x14b09c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b0a0:
    // 0x14b0a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b0a4:
    // 0x14b0a4: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x14b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b0a8:
    // 0x14b0a8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x14b0a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14b0ac:
    // 0x14b0ac: 0xc058fec  jal         func_163FB0
label_14b0b0:
    if (ctx->pc == 0x14B0B0u) {
        ctx->pc = 0x14B0B4u;
        goto label_14b0b4;
    }
    ctx->pc = 0x14B0ACu;
    SET_GPR_U32(ctx, 31, 0x14B0B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14B0ACu, 0x14B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0B4u;
label_14b0b4:
    // 0x14b0b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b0b8:
    // 0x14b0b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14b0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14b0bc:
    // 0x14b0bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_14b0c0:
    if (ctx->pc == 0x14B0C0u) {
        ctx->pc = 0x14B0C4u;
        goto label_14b0c4;
    }
    ctx->pc = 0x14B0BCu;
    {
        const bool branch_taken_0x14b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b0bc) {
            ctx->pc = 0x14B0D4u;
            goto label_14b0d4;
        }
    }
    ctx->pc = 0x14B0C4u;
label_14b0c4:
    // 0x14b0c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b0c8:
    // 0x14b0c8: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x14b0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b0cc:
    // 0x14b0cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b0d0:
    // 0x14b0d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14b0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14b0d4:
    // 0x14b0d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b0d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b0d8:
    // 0x14b0d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b0dc:
    // 0x14b0dc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x14b0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_14b0e0:
    // 0x14b0e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b0e4:
    // 0x14b0e4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b0e8:
    // 0x14b0e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b0ec:
    // 0x14b0ec: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b0f0:
    // 0x14b0f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b0f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14b0f4:
    // 0x14b0f4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14b0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_14b0f8:
    // 0x14b0f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b0fc:
    // 0x14b0fc: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x14b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b100:
    // 0x14b100: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_14b104:
    // 0x14b104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b108:
    // 0x14b108: 0x0  nop
    ctx->pc = 0x14b108u;
    // NOP
label_14b10c:
    // 0x14b10c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b10cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14b110:
    // 0x14b110: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14b110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_14b114:
    // 0x14b114: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b118:
    // 0x14b118: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b11c:
    // 0x14b11c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14b11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14b120:
    // 0x14b120: 0xc05cd58  jal         func_173560
label_14b124:
    if (ctx->pc == 0x14B124u) {
        ctx->pc = 0x14B128u;
        goto label_14b128;
    }
    ctx->pc = 0x14B120u;
    SET_GPR_U32(ctx, 31, 0x14B128u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14B120u, 0x14B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B128u;
label_14b128:
    // 0x14b128: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14b12c:
    // 0x14b12c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b130:
    // 0x14b130: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14b130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14b134:
    // 0x14b134: 0xc0573d8  jal         func_15CF60
label_14b138:
    if (ctx->pc == 0x14B138u) {
        ctx->pc = 0x14B13Cu;
        goto label_14b13c;
    }
    ctx->pc = 0x14B134u;
    SET_GPR_U32(ctx, 31, 0x14B13Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B134u, 0x14B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B13Cu;
label_14b13c:
    // 0x14b13c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b140:
    // 0x14b140: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b144:
    // 0x14b144: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14b144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14b148:
    // 0x14b148: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14b14c:
    // 0x14b14c: 0xc05cf7c  jal         func_173DF0
label_14b150:
    if (ctx->pc == 0x14B150u) {
        ctx->pc = 0x14B154u;
        goto label_14b154;
    }
    ctx->pc = 0x14B14Cu;
    SET_GPR_U32(ctx, 31, 0x14B154u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14B14Cu, 0x14B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B154u;
label_14b154:
    // 0x14b154: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14b154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14b158:
    // 0x14b158: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b15c:
    // 0x14b15c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b160:
    // 0x14b160: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b164:
    // 0x14b164: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14b168:
    // 0x14b168: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14b168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14b16c:
    // 0x14b16c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b170:
    // 0x14b170: 0x8c4312c4  lw          $v1, 0x12C4($v0)
    ctx->pc = 0x14b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
label_14b174:
    // 0x14b174: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14b178:
    // 0x14b178: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_14b17c:
    if (ctx->pc == 0x14B17Cu) {
        ctx->pc = 0x14B180u;
        goto label_14b180;
    }
    ctx->pc = 0x14B178u;
    {
        const bool branch_taken_0x14b178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b178) {
            ctx->pc = 0x14B250u;
            goto label_14b250;
        }
    }
    ctx->pc = 0x14B180u;
label_14b180:
    // 0x14b180: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14b180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b184:
    // 0x14b184: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x14b184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_14b188:
    // 0x14b188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b18c:
    // 0x14b18c: 0x0  nop
    ctx->pc = 0x14b18cu;
    // NOP
label_14b190:
    // 0x14b190: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14b190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14b194:
    // 0x14b194: 0x0  nop
    ctx->pc = 0x14b194u;
    // NOP
label_14b198:
    // 0x14b198: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_14b19c:
    if (ctx->pc == 0x14B19Cu) {
        ctx->pc = 0x14B1A0u;
        goto label_14b1a0;
    }
    ctx->pc = 0x14B198u;
    {
        const bool branch_taken_0x14b198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b198) {
            ctx->pc = 0x14B204u;
            goto label_14b204;
        }
    }
    ctx->pc = 0x14B1A0u;
label_14b1a0:
    // 0x14b1a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_14b1a4:
    // 0x14b1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b1a8:
    // 0x14b1a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b1ac:
    // 0x14b1ac: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14b1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_14b1b0:
    // 0x14b1b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b1b4:
    // 0x14b1b4: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b1b8:
    // 0x14b1b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b1bc:
    // 0x14b1bc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b1c0:
    // 0x14b1c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14b1c4:
    // 0x14b1c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14b1c8:
    // 0x14b1c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b1cc:
    // 0x14b1cc: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b1d0:
    // 0x14b1d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b1d4:
    // 0x14b1d4: 0xc4401280  lwc1        $f0, 0x1280($v0)
    ctx->pc = 0x14b1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b1d8:
    // 0x14b1d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b1d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14b1dc:
    // 0x14b1dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b1e0:
    // 0x14b1e0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14b1e4:
    // 0x14b1e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b1e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b1e8:
    // 0x14b1e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b1ec:
    // 0x14b1ec: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14b1f0:
    // 0x14b1f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14b1f4:
    // 0x14b1f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b1f8:
    // 0x14b1f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x14b1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_14b1fc:
    // 0x14b1fc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_14b200:
    if (ctx->pc == 0x14B200u) {
        ctx->pc = 0x14B204u;
        goto label_14b204;
    }
    ctx->pc = 0x14B1FCu;
    {
        const bool branch_taken_0x14b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1fc) {
            ctx->pc = 0x14B274u;
            goto label_14b274;
        }
    }
    ctx->pc = 0x14B204u;
label_14b204:
    // 0x14b204: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b208:
    // 0x14b208: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b20c:
    // 0x14b20c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14b210:
    // 0x14b210: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b214:
    // 0x14b214: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14b214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14b218:
    // 0x14b218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14b21c:
    // 0x14b21c: 0xc4601b50  lwc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b220:
    // 0x14b220: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14b220u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_14b224:
    // 0x14b224: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b228:
    // 0x14b228: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14b22c:
    // 0x14b22c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x14b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_14b230:
    // 0x14b230: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b234:
    // 0x14b234: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x14b234u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
label_14b238:
    // 0x14b238: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b23c:
    // 0x14b23c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b240:
    // 0x14b240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14b244:
    // 0x14b244: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14b248:
    // 0x14b248: 0x1000000a  b           . + 4 + (0xA << 2)
label_14b24c:
    if (ctx->pc == 0x14B24Cu) {
        ctx->pc = 0x14B250u;
        goto label_14b250;
    }
    ctx->pc = 0x14B248u;
    {
        const bool branch_taken_0x14b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b248) {
            ctx->pc = 0x14B274u;
            goto label_14b274;
        }
    }
    ctx->pc = 0x14B250u;
label_14b250:
    // 0x14b250: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b254:
    // 0x14b254: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b258:
    // 0x14b258: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b25c:
    // 0x14b25c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14b25cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14b260:
    // 0x14b260: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b264:
    // 0x14b264: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14b268:
    // 0x14b268: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b26c:
    // 0x14b26c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b270:
    // 0x14b270: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14b274:
    // 0x14b274: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14b274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b278:
    // 0x14b278: 0xc097530  jal         func_25D4C0
label_14b27c:
    if (ctx->pc == 0x14B27Cu) {
        ctx->pc = 0x14B280u;
        goto label_14b280;
    }
    ctx->pc = 0x14B278u;
    SET_GPR_U32(ctx, 31, 0x14B280u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14B278u, 0x14B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B280u;
label_14b280:
    // 0x14b280: 0x100000fb  b           . + 4 + (0xFB << 2)
label_14b284:
    if (ctx->pc == 0x14B284u) {
        ctx->pc = 0x14B288u;
        goto label_14b288;
    }
    ctx->pc = 0x14B280u;
    {
        const bool branch_taken_0x14b280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b280) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14B288u;
label_14b288:
    // 0x14b288: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b28c:
    // 0x14b28c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b290:
    // 0x14b290: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14b294:
    // 0x14b294: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x14b294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_14b298:
    // 0x14b298: 0x34460027  ori         $a2, $v0, 0x27
    ctx->pc = 0x14b298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
label_14b29c:
    // 0x14b29c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b2a0:
    // 0x14b2a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14b2a4:
    // 0x14b2a4: 0xc0965d0  jal         func_259740
label_14b2a8:
    if (ctx->pc == 0x14B2A8u) {
        ctx->pc = 0x14B2ACu;
        goto label_14b2ac;
    }
    ctx->pc = 0x14B2A4u;
    SET_GPR_U32(ctx, 31, 0x14B2ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B2A4u, 0x14B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2ACu;
label_14b2ac:
    // 0x14b2ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b2b0:
    // 0x14b2b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b2b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b2b4:
    // 0x14b2b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14b2b8:
    // 0x14b2b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14b2bc:
    // 0x14b2bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b2c0:
    // 0x14b2c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b2c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b2c4:
    // 0x14b2c4: 0xc096b40  jal         func_25AD00
label_14b2c8:
    if (ctx->pc == 0x14B2C8u) {
        ctx->pc = 0x14B2CCu;
        goto label_14b2cc;
    }
    ctx->pc = 0x14B2C4u;
    SET_GPR_U32(ctx, 31, 0x14B2CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B2C4u, 0x14B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2CCu;
label_14b2cc:
    // 0x14b2cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b2d0:
    // 0x14b2d0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b2d4:
    // 0x14b2d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b2d8:
    // 0x14b2d8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b2dc:
    // 0x14b2dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b2dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14b2e0:
    // 0x14b2e0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14b2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_14b2e4:
    // 0x14b2e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b2e8:
    // 0x14b2e8: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b2ec:
    // 0x14b2ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b2f0:
    // 0x14b2f0: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b2f4:
    // 0x14b2f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14b2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14b2f8:
    // 0x14b2f8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14b2fc:
    // 0x14b2fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b300:
    // 0x14b300: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b304:
    // 0x14b304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b308:
    // 0x14b308: 0x0  nop
    ctx->pc = 0x14b308u;
    // NOP
label_14b30c:
    // 0x14b30c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14b30cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14b310:
    // 0x14b310: 0x0  nop
    ctx->pc = 0x14b310u;
    // NOP
label_14b314:
    // 0x14b314: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_14b318:
    if (ctx->pc == 0x14B318u) {
        ctx->pc = 0x14B31Cu;
        goto label_14b31c;
    }
    ctx->pc = 0x14B314u;
    {
        const bool branch_taken_0x14b314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b314) {
            ctx->pc = 0x14B328u;
            goto label_14b328;
        }
    }
    ctx->pc = 0x14B31Cu;
label_14b31c:
    // 0x14b31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b320:
    // 0x14b320: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b324:
    // 0x14b324: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14b328:
    // 0x14b328: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b32c:
    // 0x14b32c: 0xc05cd10  jal         func_173440
label_14b330:
    if (ctx->pc == 0x14B330u) {
        ctx->pc = 0x14B334u;
        goto label_14b334;
    }
    ctx->pc = 0x14B32Cu;
    SET_GPR_U32(ctx, 31, 0x14B334u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14B32Cu, 0x14B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B334u;
label_14b334:
    // 0x14b334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14b338:
    // 0x14b338: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b33c:
    // 0x14b33c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14b340:
    // 0x14b340: 0xc0573d8  jal         func_15CF60
label_14b344:
    if (ctx->pc == 0x14B344u) {
        ctx->pc = 0x14B348u;
        goto label_14b348;
    }
    ctx->pc = 0x14B340u;
    SET_GPR_U32(ctx, 31, 0x14B348u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B340u, 0x14B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B348u;
label_14b348:
    // 0x14b348: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b34c:
    // 0x14b34c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b350:
    // 0x14b350: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14b350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14b354:
    // 0x14b354: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14b358:
    // 0x14b358: 0xc05cf7c  jal         func_173DF0
label_14b35c:
    if (ctx->pc == 0x14B35Cu) {
        ctx->pc = 0x14B360u;
        goto label_14b360;
    }
    ctx->pc = 0x14B358u;
    SET_GPR_U32(ctx, 31, 0x14B360u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14B358u, 0x14B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B360u;
label_14b360:
    // 0x14b360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b364:
    // 0x14b364: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14b368:
    // 0x14b368: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14b368u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b36c:
    // 0x14b36c: 0xc097530  jal         func_25D4C0
label_14b370:
    if (ctx->pc == 0x14B370u) {
        ctx->pc = 0x14B374u;
        goto label_14b374;
    }
    ctx->pc = 0x14B36Cu;
    SET_GPR_U32(ctx, 31, 0x14B374u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14B36Cu, 0x14B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B374u;
label_14b374:
    // 0x14b374: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b378:
    // 0x14b378: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14b378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
label_14b37c:
    // 0x14b37c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14b37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14b380:
    // 0x14b380: 0x28610051  slti        $at, $v1, 0x51
    ctx->pc = 0x14b380u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)81) ? 1 : 0);
label_14b384:
    // 0x14b384: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_14b388:
    if (ctx->pc == 0x14B388u) {
        ctx->pc = 0x14B38Cu;
        goto label_14b38c;
    }
    ctx->pc = 0x14B384u;
    {
        const bool branch_taken_0x14b384 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b384) {
            ctx->pc = 0x14B3BCu;
            goto label_14b3bc;
        }
    }
    ctx->pc = 0x14B38Cu;
label_14b38c:
    // 0x14b38c: 0xc057acc  jal         func_15EB30
label_14b390:
    if (ctx->pc == 0x14B390u) {
        ctx->pc = 0x14B394u;
        goto label_14b394;
    }
    ctx->pc = 0x14B38Cu;
    SET_GPR_U32(ctx, 31, 0x14B394u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14B38Cu, 0x14B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B394u;
label_14b394:
    // 0x14b394: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14b398:
    if (ctx->pc == 0x14B398u) {
        ctx->pc = 0x14B39Cu;
        goto label_14b39c;
    }
    ctx->pc = 0x14B394u;
    {
        const bool branch_taken_0x14b394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b394) {
            ctx->pc = 0x14B3BCu;
            goto label_14b3bc;
        }
    }
    ctx->pc = 0x14B39Cu;
label_14b39c:
    // 0x14b39c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14b3a0:
    // 0x14b3a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b3a4:
    // 0x14b3a4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14b3a8:
    // 0x14b3a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b3ac:
    // 0x14b3ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b3b0:
    // 0x14b3b0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14b3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14b3b4:
    // 0x14b3b4: 0x100000ae  b           . + 4 + (0xAE << 2)
label_14b3b8:
    if (ctx->pc == 0x14B3B8u) {
        ctx->pc = 0x14B3BCu;
        goto label_14b3bc;
    }
    ctx->pc = 0x14B3B4u;
    {
        const bool branch_taken_0x14b3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b3b4) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14B3BCu;
label_14b3bc:
    // 0x14b3bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b3c0:
    // 0x14b3c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14b3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14b3c4:
    // 0x14b3c4: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
label_14b3c8:
    if (ctx->pc == 0x14B3C8u) {
        ctx->pc = 0x14B3CCu;
        goto label_14b3cc;
    }
    ctx->pc = 0x14B3C4u;
    {
        const bool branch_taken_0x14b3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b3c4) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14B3CCu;
label_14b3cc:
    // 0x14b3cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b3d0:
    // 0x14b3d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b3d4:
    // 0x14b3d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14b3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14b3d8:
    // 0x14b3d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b3dc:
    // 0x14b3dc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14b3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14b3e0:
    // 0x14b3e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b3e4:
    // 0x14b3e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14b3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14b3e8:
    // 0x14b3e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b3ec:
    // 0x14b3ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14b3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14b3f0:
    // 0x14b3f0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14b3f4:
    // 0x14b3f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b3f8:
    // 0x14b3f8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14b3fc:
    // 0x14b3fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b400:
    // 0x14b400: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b404:
    // 0x14b404: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14b404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14b408:
    // 0x14b408: 0x10000099  b           . + 4 + (0x99 << 2)
label_14b40c:
    if (ctx->pc == 0x14B40Cu) {
        ctx->pc = 0x14B410u;
        goto label_14b410;
    }
    ctx->pc = 0x14B408u;
    {
        const bool branch_taken_0x14b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b408) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14B410u;
label_14b410:
    // 0x14b410: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b414:
    // 0x14b414: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b418:
    // 0x14b418: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14b41c:
    // 0x14b41c: 0x24060a1b  addiu       $a2, $zero, 0xA1B
    ctx->pc = 0x14b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2587));
label_14b420:
    // 0x14b420: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14b420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_14b424:
    // 0x14b424: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14b428:
    // 0x14b428: 0xc0965d0  jal         func_259740
label_14b42c:
    if (ctx->pc == 0x14B42Cu) {
        ctx->pc = 0x14B430u;
        goto label_14b430;
    }
    ctx->pc = 0x14B428u;
    SET_GPR_U32(ctx, 31, 0x14B430u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B428u, 0x14B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B430u;
label_14b430:
    // 0x14b430: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b434:
    // 0x14b434: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b438:
    // 0x14b438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14b43c:
    // 0x14b43c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14b440:
    // 0x14b440: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b444:
    // 0x14b444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b448:
    // 0x14b448: 0xc096b40  jal         func_25AD00
label_14b44c:
    if (ctx->pc == 0x14B44Cu) {
        ctx->pc = 0x14B450u;
        goto label_14b450;
    }
    ctx->pc = 0x14B448u;
    SET_GPR_U32(ctx, 31, 0x14B450u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B448u, 0x14B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B450u;
label_14b450:
    // 0x14b450: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b454:
    // 0x14b454: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b458:
    // 0x14b458: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b45c:
    // 0x14b45c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b460:
    // 0x14b460: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14b464:
    // 0x14b464: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14b464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_14b468:
    // 0x14b468: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b46c:
    // 0x14b46c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b470:
    // 0x14b470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b474:
    // 0x14b474: 0x0  nop
    ctx->pc = 0x14b474u;
    // NOP
label_14b478:
    // 0x14b478: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14b478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14b47c:
    // 0x14b47c: 0x0  nop
    ctx->pc = 0x14b47cu;
    // NOP
label_14b480:
    // 0x14b480: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_14b484:
    if (ctx->pc == 0x14B484u) {
        ctx->pc = 0x14B488u;
        goto label_14b488;
    }
    ctx->pc = 0x14B480u;
    {
        const bool branch_taken_0x14b480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b480) {
            ctx->pc = 0x14B494u;
            goto label_14b494;
        }
    }
    ctx->pc = 0x14B488u;
label_14b488:
    // 0x14b488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b48c:
    // 0x14b48c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b490:
    // 0x14b490: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14b494:
    // 0x14b494: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b498:
    // 0x14b498: 0xc05cd10  jal         func_173440
label_14b49c:
    if (ctx->pc == 0x14B49Cu) {
        ctx->pc = 0x14B4A0u;
        goto label_14b4a0;
    }
    ctx->pc = 0x14B498u;
    SET_GPR_U32(ctx, 31, 0x14B4A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14B498u, 0x14B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4A0u;
label_14b4a0:
    // 0x14b4a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14b4a4:
    // 0x14b4a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b4a8:
    // 0x14b4a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14b4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14b4ac:
    // 0x14b4ac: 0xc0573d8  jal         func_15CF60
label_14b4b0:
    if (ctx->pc == 0x14B4B0u) {
        ctx->pc = 0x14B4B4u;
        goto label_14b4b4;
    }
    ctx->pc = 0x14B4ACu;
    SET_GPR_U32(ctx, 31, 0x14B4B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B4ACu, 0x14B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4B4u;
label_14b4b4:
    // 0x14b4b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b4b8:
    // 0x14b4b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b4bc:
    // 0x14b4bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14b4c0:
    // 0x14b4c0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14b4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14b4c4:
    // 0x14b4c4: 0xc05cf7c  jal         func_173DF0
label_14b4c8:
    if (ctx->pc == 0x14B4C8u) {
        ctx->pc = 0x14B4CCu;
        goto label_14b4cc;
    }
    ctx->pc = 0x14B4C4u;
    SET_GPR_U32(ctx, 31, 0x14B4CCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14B4C4u, 0x14B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4CCu;
label_14b4cc:
    // 0x14b4cc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14b4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14b4d0:
    // 0x14b4d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b4d4:
    // 0x14b4d4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b4d8:
    // 0x14b4d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b4dc:
    // 0x14b4dc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b4e0:
    // 0x14b4e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14b4e4:
    // 0x14b4e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14b4e8:
    // 0x14b4e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b4ec:
    // 0x14b4ec: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b4f0:
    // 0x14b4f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b4f4:
    // 0x14b4f4: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14b4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b4f8:
    // 0x14b4f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14b4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14b4fc:
    // 0x14b4fc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14b4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14b500:
    // 0x14b500: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b504:
    // 0x14b504: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b508:
    // 0x14b508: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b50c:
    // 0x14b50c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14b50cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14b510:
    // 0x14b510: 0x0  nop
    ctx->pc = 0x14b510u;
    // NOP
label_14b514:
    // 0x14b514: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14b518:
    if (ctx->pc == 0x14B518u) {
        ctx->pc = 0x14B51Cu;
        goto label_14b51c;
    }
    ctx->pc = 0x14B514u;
    {
        const bool branch_taken_0x14b514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b514) {
            ctx->pc = 0x14B52Cu;
            goto label_14b52c;
        }
    }
    ctx->pc = 0x14B51Cu;
label_14b51c:
    // 0x14b51c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b520:
    // 0x14b520: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b524:
    // 0x14b524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14b528:
    // 0x14b528: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14b52c:
    // 0x14b52c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14b52cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b530:
    // 0x14b530: 0xc097530  jal         func_25D4C0
label_14b534:
    if (ctx->pc == 0x14B534u) {
        ctx->pc = 0x14B538u;
        goto label_14b538;
    }
    ctx->pc = 0x14B530u;
    SET_GPR_U32(ctx, 31, 0x14B538u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14B530u, 0x14B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B538u;
label_14b538:
    // 0x14b538: 0x1000004d  b           . + 4 + (0x4D << 2)
label_14b53c:
    if (ctx->pc == 0x14B53Cu) {
        ctx->pc = 0x14B540u;
        goto label_14b540;
    }
    ctx->pc = 0x14B538u;
    {
        const bool branch_taken_0x14b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b538) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14B540u;
label_14b540:
    // 0x14b540: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b544:
    // 0x14b544: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b548:
    // 0x14b548: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14b54c:
    // 0x14b54c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x14b54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_14b550:
    // 0x14b550: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b554:
    // 0x14b554: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14b558:
    // 0x14b558: 0xc0965d0  jal         func_259740
label_14b55c:
    if (ctx->pc == 0x14B55Cu) {
        ctx->pc = 0x14B560u;
        goto label_14b560;
    }
    ctx->pc = 0x14B558u;
    SET_GPR_U32(ctx, 31, 0x14B560u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B558u, 0x14B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B560u;
label_14b560:
    // 0x14b560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b564:
    // 0x14b564: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b568:
    // 0x14b568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14b56c:
    // 0x14b56c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b56cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14b570:
    // 0x14b570: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b574:
    // 0x14b574: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b578:
    // 0x14b578: 0xc096b40  jal         func_25AD00
label_14b57c:
    if (ctx->pc == 0x14B57Cu) {
        ctx->pc = 0x14B580u;
        goto label_14b580;
    }
    ctx->pc = 0x14B578u;
    SET_GPR_U32(ctx, 31, 0x14B580u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B578u, 0x14B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B580u;
label_14b580:
    // 0x14b580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b584:
    // 0x14b584: 0xc05cd10  jal         func_173440
label_14b588:
    if (ctx->pc == 0x14B588u) {
        ctx->pc = 0x14B58Cu;
        goto label_14b58c;
    }
    ctx->pc = 0x14B584u;
    SET_GPR_U32(ctx, 31, 0x14B58Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14B584u, 0x14B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B58Cu;
label_14b58c:
    // 0x14b58c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14b590:
    // 0x14b590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b594:
    // 0x14b594: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b598:
    // 0x14b598: 0xc0573d8  jal         func_15CF60
label_14b59c:
    if (ctx->pc == 0x14B59Cu) {
        ctx->pc = 0x14B5A0u;
        goto label_14b5a0;
    }
    ctx->pc = 0x14B598u;
    SET_GPR_U32(ctx, 31, 0x14B5A0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B598u, 0x14B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5A0u;
label_14b5a0:
    // 0x14b5a0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14b5a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b5a4:
    // 0x14b5a4: 0xc097530  jal         func_25D4C0
label_14b5a8:
    if (ctx->pc == 0x14B5A8u) {
        ctx->pc = 0x14B5ACu;
        goto label_14b5ac;
    }
    ctx->pc = 0x14B5A4u;
    SET_GPR_U32(ctx, 31, 0x14B5ACu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14B5A4u, 0x14B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5ACu;
label_14b5ac:
    // 0x14b5ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b5b0:
    // 0x14b5b0: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14b5b4:
    // 0x14b5b4: 0xc057b54  jal         func_15ED50
label_14b5b8:
    if (ctx->pc == 0x14B5B8u) {
        ctx->pc = 0x14B5BCu;
        goto label_14b5bc;
    }
    ctx->pc = 0x14B5B4u;
    SET_GPR_U32(ctx, 31, 0x14B5BCu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x14B5B4u, 0x14B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5BCu;
label_14b5bc:
    // 0x14b5bc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_14b5c0:
    if (ctx->pc == 0x14B5C0u) {
        ctx->pc = 0x14B5C4u;
        goto label_14b5c4;
    }
    ctx->pc = 0x14B5BCu;
    {
        const bool branch_taken_0x14b5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b5bc) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14B5C4u;
label_14b5c4:
    // 0x14b5c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b5c8:
    // 0x14b5c8: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14b5cc:
    // 0x14b5cc: 0xc057b04  jal         func_15EC10
label_14b5d0:
    if (ctx->pc == 0x14B5D0u) {
        ctx->pc = 0x14B5D4u;
        goto label_14b5d4;
    }
    ctx->pc = 0x14B5CCu;
    SET_GPR_U32(ctx, 31, 0x14B5D4u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x14B5CCu, 0x14B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5D4u;
label_14b5d4:
    // 0x14b5d4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_14b5d8:
    if (ctx->pc == 0x14B5D8u) {
        ctx->pc = 0x14B5DCu;
        goto label_14b5dc;
    }
    ctx->pc = 0x14B5D4u;
    {
        const bool branch_taken_0x14b5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b5d4) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14B5DCu;
label_14b5dc:
    // 0x14b5dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b5e0:
    // 0x14b5e0: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14b5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
label_14b5e4:
    // 0x14b5e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14b5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14b5e8:
    // 0x14b5e8: 0x28610030  slti        $at, $v1, 0x30
    ctx->pc = 0x14b5e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
label_14b5ec:
    // 0x14b5ec: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_14b5f0:
    if (ctx->pc == 0x14B5F0u) {
        ctx->pc = 0x14B5F4u;
        goto label_14b5f4;
    }
    ctx->pc = 0x14B5ECu;
    {
        const bool branch_taken_0x14b5ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b5ec) {
            ctx->pc = 0x14B624u;
            goto label_14b624;
        }
    }
    ctx->pc = 0x14B5F4u;
label_14b5f4:
    // 0x14b5f4: 0xc057acc  jal         func_15EB30
label_14b5f8:
    if (ctx->pc == 0x14B5F8u) {
        ctx->pc = 0x14B5FCu;
        goto label_14b5fc;
    }
    ctx->pc = 0x14B5F4u;
    SET_GPR_U32(ctx, 31, 0x14B5FCu);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14B5F4u, 0x14B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5FCu;
label_14b5fc:
    // 0x14b5fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14b600:
    if (ctx->pc == 0x14B600u) {
        ctx->pc = 0x14B604u;
        goto label_14b604;
    }
    ctx->pc = 0x14B5FCu;
    {
        const bool branch_taken_0x14b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b5fc) {
            ctx->pc = 0x14B624u;
            goto label_14b624;
        }
    }
    ctx->pc = 0x14B604u;
label_14b604:
    // 0x14b604: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14b608:
    // 0x14b608: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b60c:
    // 0x14b60c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14b610:
    // 0x14b610: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b614:
    // 0x14b614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b618:
    // 0x14b618: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14b618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14b61c:
    // 0x14b61c: 0x10000014  b           . + 4 + (0x14 << 2)
label_14b620:
    if (ctx->pc == 0x14B620u) {
        ctx->pc = 0x14B624u;
        goto label_14b624;
    }
    ctx->pc = 0x14B61Cu;
    {
        const bool branch_taken_0x14b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b61c) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14B624u;
label_14b624:
    // 0x14b624: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b628:
    // 0x14b628: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14b628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14b62c:
    // 0x14b62c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_14b630:
    if (ctx->pc == 0x14B630u) {
        ctx->pc = 0x14B634u;
        goto label_14b634;
    }
    ctx->pc = 0x14B62Cu;
    {
        const bool branch_taken_0x14b62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b62c) {
            ctx->pc = 0x14B670u;
            goto label_14b670;
        }
    }
    ctx->pc = 0x14B634u;
label_14b634:
    // 0x14b634: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b638:
    // 0x14b638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b63c:
    // 0x14b63c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14b63cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14b640:
    // 0x14b640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b644:
    // 0x14b644: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14b644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14b648:
    // 0x14b648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b64c:
    // 0x14b64c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14b64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14b650:
    // 0x14b650: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b654:
    // 0x14b654: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14b654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14b658:
    // 0x14b658: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14b658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14b65c:
    // 0x14b65c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b660:
    // 0x14b660: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14b660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14b664:
    // 0x14b664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b668:
    // 0x14b668: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b66c:
    // 0x14b66c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14b66cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14b670:
    // 0x14b670: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14b670u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14b674:
    // 0x14b674: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14b674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14b678:
    // 0x14b678: 0x3e00008  jr          $ra
label_14b67c:
    if (ctx->pc == 0x14B67Cu) {
        ctx->pc = 0x14B680u;
        goto label_fallthrough_0x14b678;
    }
    ctx->pc = 0x14B678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14b678:
    ctx->pc = 0x14B680u;
}
