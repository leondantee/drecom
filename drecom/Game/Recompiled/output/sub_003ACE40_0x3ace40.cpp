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

// Function: sub_003ACE40
// Address: 0x3ace40 - 0x3aedd0
void sub_003ACE40_0x3ace40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACE40_0x3ace40");
#endif

    switch (ctx->pc) {
        case 0x3ace40u: goto label_3ace40;
        case 0x3ace44u: goto label_3ace44;
        case 0x3ace48u: goto label_3ace48;
        case 0x3ace4cu: goto label_3ace4c;
        case 0x3ace50u: goto label_3ace50;
        case 0x3ace54u: goto label_3ace54;
        case 0x3ace58u: goto label_3ace58;
        case 0x3ace5cu: goto label_3ace5c;
        case 0x3ace60u: goto label_3ace60;
        case 0x3ace64u: goto label_3ace64;
        case 0x3ace68u: goto label_3ace68;
        case 0x3ace6cu: goto label_3ace6c;
        case 0x3ace70u: goto label_3ace70;
        case 0x3ace74u: goto label_3ace74;
        case 0x3ace78u: goto label_3ace78;
        case 0x3ace7cu: goto label_3ace7c;
        case 0x3ace80u: goto label_3ace80;
        case 0x3ace84u: goto label_3ace84;
        case 0x3ace88u: goto label_3ace88;
        case 0x3ace8cu: goto label_3ace8c;
        case 0x3ace90u: goto label_3ace90;
        case 0x3ace94u: goto label_3ace94;
        case 0x3ace98u: goto label_3ace98;
        case 0x3ace9cu: goto label_3ace9c;
        case 0x3acea0u: goto label_3acea0;
        case 0x3acea4u: goto label_3acea4;
        case 0x3acea8u: goto label_3acea8;
        case 0x3aceacu: goto label_3aceac;
        case 0x3aceb0u: goto label_3aceb0;
        case 0x3aceb4u: goto label_3aceb4;
        case 0x3aceb8u: goto label_3aceb8;
        case 0x3acebcu: goto label_3acebc;
        case 0x3acec0u: goto label_3acec0;
        case 0x3acec4u: goto label_3acec4;
        case 0x3acec8u: goto label_3acec8;
        case 0x3aceccu: goto label_3acecc;
        case 0x3aced0u: goto label_3aced0;
        case 0x3aced4u: goto label_3aced4;
        case 0x3aced8u: goto label_3aced8;
        case 0x3acedcu: goto label_3acedc;
        case 0x3acee0u: goto label_3acee0;
        case 0x3acee4u: goto label_3acee4;
        case 0x3acee8u: goto label_3acee8;
        case 0x3aceecu: goto label_3aceec;
        case 0x3acef0u: goto label_3acef0;
        case 0x3acef4u: goto label_3acef4;
        case 0x3acef8u: goto label_3acef8;
        case 0x3acefcu: goto label_3acefc;
        case 0x3acf00u: goto label_3acf00;
        case 0x3acf04u: goto label_3acf04;
        case 0x3acf08u: goto label_3acf08;
        case 0x3acf0cu: goto label_3acf0c;
        case 0x3acf10u: goto label_3acf10;
        case 0x3acf14u: goto label_3acf14;
        case 0x3acf18u: goto label_3acf18;
        case 0x3acf1cu: goto label_3acf1c;
        case 0x3acf20u: goto label_3acf20;
        case 0x3acf24u: goto label_3acf24;
        case 0x3acf28u: goto label_3acf28;
        case 0x3acf2cu: goto label_3acf2c;
        case 0x3acf30u: goto label_3acf30;
        case 0x3acf34u: goto label_3acf34;
        case 0x3acf38u: goto label_3acf38;
        case 0x3acf3cu: goto label_3acf3c;
        case 0x3acf40u: goto label_3acf40;
        case 0x3acf44u: goto label_3acf44;
        case 0x3acf48u: goto label_3acf48;
        case 0x3acf4cu: goto label_3acf4c;
        case 0x3acf50u: goto label_3acf50;
        case 0x3acf54u: goto label_3acf54;
        case 0x3acf58u: goto label_3acf58;
        case 0x3acf5cu: goto label_3acf5c;
        case 0x3acf60u: goto label_3acf60;
        case 0x3acf64u: goto label_3acf64;
        case 0x3acf68u: goto label_3acf68;
        case 0x3acf6cu: goto label_3acf6c;
        case 0x3acf70u: goto label_3acf70;
        case 0x3acf74u: goto label_3acf74;
        case 0x3acf78u: goto label_3acf78;
        case 0x3acf7cu: goto label_3acf7c;
        case 0x3acf80u: goto label_3acf80;
        case 0x3acf84u: goto label_3acf84;
        case 0x3acf88u: goto label_3acf88;
        case 0x3acf8cu: goto label_3acf8c;
        case 0x3acf90u: goto label_3acf90;
        case 0x3acf94u: goto label_3acf94;
        case 0x3acf98u: goto label_3acf98;
        case 0x3acf9cu: goto label_3acf9c;
        case 0x3acfa0u: goto label_3acfa0;
        case 0x3acfa4u: goto label_3acfa4;
        case 0x3acfa8u: goto label_3acfa8;
        case 0x3acfacu: goto label_3acfac;
        case 0x3acfb0u: goto label_3acfb0;
        case 0x3acfb4u: goto label_3acfb4;
        case 0x3acfb8u: goto label_3acfb8;
        case 0x3acfbcu: goto label_3acfbc;
        case 0x3acfc0u: goto label_3acfc0;
        case 0x3acfc4u: goto label_3acfc4;
        case 0x3acfc8u: goto label_3acfc8;
        case 0x3acfccu: goto label_3acfcc;
        case 0x3acfd0u: goto label_3acfd0;
        case 0x3acfd4u: goto label_3acfd4;
        case 0x3acfd8u: goto label_3acfd8;
        case 0x3acfdcu: goto label_3acfdc;
        case 0x3acfe0u: goto label_3acfe0;
        case 0x3acfe4u: goto label_3acfe4;
        case 0x3acfe8u: goto label_3acfe8;
        case 0x3acfecu: goto label_3acfec;
        case 0x3acff0u: goto label_3acff0;
        case 0x3acff4u: goto label_3acff4;
        case 0x3acff8u: goto label_3acff8;
        case 0x3acffcu: goto label_3acffc;
        case 0x3ad000u: goto label_3ad000;
        case 0x3ad004u: goto label_3ad004;
        case 0x3ad008u: goto label_3ad008;
        case 0x3ad00cu: goto label_3ad00c;
        case 0x3ad010u: goto label_3ad010;
        case 0x3ad014u: goto label_3ad014;
        case 0x3ad018u: goto label_3ad018;
        case 0x3ad01cu: goto label_3ad01c;
        case 0x3ad020u: goto label_3ad020;
        case 0x3ad024u: goto label_3ad024;
        case 0x3ad028u: goto label_3ad028;
        case 0x3ad02cu: goto label_3ad02c;
        case 0x3ad030u: goto label_3ad030;
        case 0x3ad034u: goto label_3ad034;
        case 0x3ad038u: goto label_3ad038;
        case 0x3ad03cu: goto label_3ad03c;
        case 0x3ad040u: goto label_3ad040;
        case 0x3ad044u: goto label_3ad044;
        case 0x3ad048u: goto label_3ad048;
        case 0x3ad04cu: goto label_3ad04c;
        case 0x3ad050u: goto label_3ad050;
        case 0x3ad054u: goto label_3ad054;
        case 0x3ad058u: goto label_3ad058;
        case 0x3ad05cu: goto label_3ad05c;
        case 0x3ad060u: goto label_3ad060;
        case 0x3ad064u: goto label_3ad064;
        case 0x3ad068u: goto label_3ad068;
        case 0x3ad06cu: goto label_3ad06c;
        case 0x3ad070u: goto label_3ad070;
        case 0x3ad074u: goto label_3ad074;
        case 0x3ad078u: goto label_3ad078;
        case 0x3ad07cu: goto label_3ad07c;
        case 0x3ad080u: goto label_3ad080;
        case 0x3ad084u: goto label_3ad084;
        case 0x3ad088u: goto label_3ad088;
        case 0x3ad08cu: goto label_3ad08c;
        case 0x3ad090u: goto label_3ad090;
        case 0x3ad094u: goto label_3ad094;
        case 0x3ad098u: goto label_3ad098;
        case 0x3ad09cu: goto label_3ad09c;
        case 0x3ad0a0u: goto label_3ad0a0;
        case 0x3ad0a4u: goto label_3ad0a4;
        case 0x3ad0a8u: goto label_3ad0a8;
        case 0x3ad0acu: goto label_3ad0ac;
        case 0x3ad0b0u: goto label_3ad0b0;
        case 0x3ad0b4u: goto label_3ad0b4;
        case 0x3ad0b8u: goto label_3ad0b8;
        case 0x3ad0bcu: goto label_3ad0bc;
        case 0x3ad0c0u: goto label_3ad0c0;
        case 0x3ad0c4u: goto label_3ad0c4;
        case 0x3ad0c8u: goto label_3ad0c8;
        case 0x3ad0ccu: goto label_3ad0cc;
        case 0x3ad0d0u: goto label_3ad0d0;
        case 0x3ad0d4u: goto label_3ad0d4;
        case 0x3ad0d8u: goto label_3ad0d8;
        case 0x3ad0dcu: goto label_3ad0dc;
        case 0x3ad0e0u: goto label_3ad0e0;
        case 0x3ad0e4u: goto label_3ad0e4;
        case 0x3ad0e8u: goto label_3ad0e8;
        case 0x3ad0ecu: goto label_3ad0ec;
        case 0x3ad0f0u: goto label_3ad0f0;
        case 0x3ad0f4u: goto label_3ad0f4;
        case 0x3ad0f8u: goto label_3ad0f8;
        case 0x3ad0fcu: goto label_3ad0fc;
        case 0x3ad100u: goto label_3ad100;
        case 0x3ad104u: goto label_3ad104;
        case 0x3ad108u: goto label_3ad108;
        case 0x3ad10cu: goto label_3ad10c;
        case 0x3ad110u: goto label_3ad110;
        case 0x3ad114u: goto label_3ad114;
        case 0x3ad118u: goto label_3ad118;
        case 0x3ad11cu: goto label_3ad11c;
        case 0x3ad120u: goto label_3ad120;
        case 0x3ad124u: goto label_3ad124;
        case 0x3ad128u: goto label_3ad128;
        case 0x3ad12cu: goto label_3ad12c;
        case 0x3ad130u: goto label_3ad130;
        case 0x3ad134u: goto label_3ad134;
        case 0x3ad138u: goto label_3ad138;
        case 0x3ad13cu: goto label_3ad13c;
        case 0x3ad140u: goto label_3ad140;
        case 0x3ad144u: goto label_3ad144;
        case 0x3ad148u: goto label_3ad148;
        case 0x3ad14cu: goto label_3ad14c;
        case 0x3ad150u: goto label_3ad150;
        case 0x3ad154u: goto label_3ad154;
        case 0x3ad158u: goto label_3ad158;
        case 0x3ad15cu: goto label_3ad15c;
        case 0x3ad160u: goto label_3ad160;
        case 0x3ad164u: goto label_3ad164;
        case 0x3ad168u: goto label_3ad168;
        case 0x3ad16cu: goto label_3ad16c;
        case 0x3ad170u: goto label_3ad170;
        case 0x3ad174u: goto label_3ad174;
        case 0x3ad178u: goto label_3ad178;
        case 0x3ad17cu: goto label_3ad17c;
        case 0x3ad180u: goto label_3ad180;
        case 0x3ad184u: goto label_3ad184;
        case 0x3ad188u: goto label_3ad188;
        case 0x3ad18cu: goto label_3ad18c;
        case 0x3ad190u: goto label_3ad190;
        case 0x3ad194u: goto label_3ad194;
        case 0x3ad198u: goto label_3ad198;
        case 0x3ad19cu: goto label_3ad19c;
        case 0x3ad1a0u: goto label_3ad1a0;
        case 0x3ad1a4u: goto label_3ad1a4;
        case 0x3ad1a8u: goto label_3ad1a8;
        case 0x3ad1acu: goto label_3ad1ac;
        case 0x3ad1b0u: goto label_3ad1b0;
        case 0x3ad1b4u: goto label_3ad1b4;
        case 0x3ad1b8u: goto label_3ad1b8;
        case 0x3ad1bcu: goto label_3ad1bc;
        case 0x3ad1c0u: goto label_3ad1c0;
        case 0x3ad1c4u: goto label_3ad1c4;
        case 0x3ad1c8u: goto label_3ad1c8;
        case 0x3ad1ccu: goto label_3ad1cc;
        case 0x3ad1d0u: goto label_3ad1d0;
        case 0x3ad1d4u: goto label_3ad1d4;
        case 0x3ad1d8u: goto label_3ad1d8;
        case 0x3ad1dcu: goto label_3ad1dc;
        case 0x3ad1e0u: goto label_3ad1e0;
        case 0x3ad1e4u: goto label_3ad1e4;
        case 0x3ad1e8u: goto label_3ad1e8;
        case 0x3ad1ecu: goto label_3ad1ec;
        case 0x3ad1f0u: goto label_3ad1f0;
        case 0x3ad1f4u: goto label_3ad1f4;
        case 0x3ad1f8u: goto label_3ad1f8;
        case 0x3ad1fcu: goto label_3ad1fc;
        case 0x3ad200u: goto label_3ad200;
        case 0x3ad204u: goto label_3ad204;
        case 0x3ad208u: goto label_3ad208;
        case 0x3ad20cu: goto label_3ad20c;
        case 0x3ad210u: goto label_3ad210;
        case 0x3ad214u: goto label_3ad214;
        case 0x3ad218u: goto label_3ad218;
        case 0x3ad21cu: goto label_3ad21c;
        case 0x3ad220u: goto label_3ad220;
        case 0x3ad224u: goto label_3ad224;
        case 0x3ad228u: goto label_3ad228;
        case 0x3ad22cu: goto label_3ad22c;
        case 0x3ad230u: goto label_3ad230;
        case 0x3ad234u: goto label_3ad234;
        case 0x3ad238u: goto label_3ad238;
        case 0x3ad23cu: goto label_3ad23c;
        case 0x3ad240u: goto label_3ad240;
        case 0x3ad244u: goto label_3ad244;
        case 0x3ad248u: goto label_3ad248;
        case 0x3ad24cu: goto label_3ad24c;
        case 0x3ad250u: goto label_3ad250;
        case 0x3ad254u: goto label_3ad254;
        case 0x3ad258u: goto label_3ad258;
        case 0x3ad25cu: goto label_3ad25c;
        case 0x3ad260u: goto label_3ad260;
        case 0x3ad264u: goto label_3ad264;
        case 0x3ad268u: goto label_3ad268;
        case 0x3ad26cu: goto label_3ad26c;
        case 0x3ad270u: goto label_3ad270;
        case 0x3ad274u: goto label_3ad274;
        case 0x3ad278u: goto label_3ad278;
        case 0x3ad27cu: goto label_3ad27c;
        case 0x3ad280u: goto label_3ad280;
        case 0x3ad284u: goto label_3ad284;
        case 0x3ad288u: goto label_3ad288;
        case 0x3ad28cu: goto label_3ad28c;
        case 0x3ad290u: goto label_3ad290;
        case 0x3ad294u: goto label_3ad294;
        case 0x3ad298u: goto label_3ad298;
        case 0x3ad29cu: goto label_3ad29c;
        case 0x3ad2a0u: goto label_3ad2a0;
        case 0x3ad2a4u: goto label_3ad2a4;
        case 0x3ad2a8u: goto label_3ad2a8;
        case 0x3ad2acu: goto label_3ad2ac;
        case 0x3ad2b0u: goto label_3ad2b0;
        case 0x3ad2b4u: goto label_3ad2b4;
        case 0x3ad2b8u: goto label_3ad2b8;
        case 0x3ad2bcu: goto label_3ad2bc;
        case 0x3ad2c0u: goto label_3ad2c0;
        case 0x3ad2c4u: goto label_3ad2c4;
        case 0x3ad2c8u: goto label_3ad2c8;
        case 0x3ad2ccu: goto label_3ad2cc;
        case 0x3ad2d0u: goto label_3ad2d0;
        case 0x3ad2d4u: goto label_3ad2d4;
        case 0x3ad2d8u: goto label_3ad2d8;
        case 0x3ad2dcu: goto label_3ad2dc;
        case 0x3ad2e0u: goto label_3ad2e0;
        case 0x3ad2e4u: goto label_3ad2e4;
        case 0x3ad2e8u: goto label_3ad2e8;
        case 0x3ad2ecu: goto label_3ad2ec;
        case 0x3ad2f0u: goto label_3ad2f0;
        case 0x3ad2f4u: goto label_3ad2f4;
        case 0x3ad2f8u: goto label_3ad2f8;
        case 0x3ad2fcu: goto label_3ad2fc;
        case 0x3ad300u: goto label_3ad300;
        case 0x3ad304u: goto label_3ad304;
        case 0x3ad308u: goto label_3ad308;
        case 0x3ad30cu: goto label_3ad30c;
        case 0x3ad310u: goto label_3ad310;
        case 0x3ad314u: goto label_3ad314;
        case 0x3ad318u: goto label_3ad318;
        case 0x3ad31cu: goto label_3ad31c;
        case 0x3ad320u: goto label_3ad320;
        case 0x3ad324u: goto label_3ad324;
        case 0x3ad328u: goto label_3ad328;
        case 0x3ad32cu: goto label_3ad32c;
        case 0x3ad330u: goto label_3ad330;
        case 0x3ad334u: goto label_3ad334;
        case 0x3ad338u: goto label_3ad338;
        case 0x3ad33cu: goto label_3ad33c;
        case 0x3ad340u: goto label_3ad340;
        case 0x3ad344u: goto label_3ad344;
        case 0x3ad348u: goto label_3ad348;
        case 0x3ad34cu: goto label_3ad34c;
        case 0x3ad350u: goto label_3ad350;
        case 0x3ad354u: goto label_3ad354;
        case 0x3ad358u: goto label_3ad358;
        case 0x3ad35cu: goto label_3ad35c;
        case 0x3ad360u: goto label_3ad360;
        case 0x3ad364u: goto label_3ad364;
        case 0x3ad368u: goto label_3ad368;
        case 0x3ad36cu: goto label_3ad36c;
        case 0x3ad370u: goto label_3ad370;
        case 0x3ad374u: goto label_3ad374;
        case 0x3ad378u: goto label_3ad378;
        case 0x3ad37cu: goto label_3ad37c;
        case 0x3ad380u: goto label_3ad380;
        case 0x3ad384u: goto label_3ad384;
        case 0x3ad388u: goto label_3ad388;
        case 0x3ad38cu: goto label_3ad38c;
        case 0x3ad390u: goto label_3ad390;
        case 0x3ad394u: goto label_3ad394;
        case 0x3ad398u: goto label_3ad398;
        case 0x3ad39cu: goto label_3ad39c;
        case 0x3ad3a0u: goto label_3ad3a0;
        case 0x3ad3a4u: goto label_3ad3a4;
        case 0x3ad3a8u: goto label_3ad3a8;
        case 0x3ad3acu: goto label_3ad3ac;
        case 0x3ad3b0u: goto label_3ad3b0;
        case 0x3ad3b4u: goto label_3ad3b4;
        case 0x3ad3b8u: goto label_3ad3b8;
        case 0x3ad3bcu: goto label_3ad3bc;
        case 0x3ad3c0u: goto label_3ad3c0;
        case 0x3ad3c4u: goto label_3ad3c4;
        case 0x3ad3c8u: goto label_3ad3c8;
        case 0x3ad3ccu: goto label_3ad3cc;
        case 0x3ad3d0u: goto label_3ad3d0;
        case 0x3ad3d4u: goto label_3ad3d4;
        case 0x3ad3d8u: goto label_3ad3d8;
        case 0x3ad3dcu: goto label_3ad3dc;
        case 0x3ad3e0u: goto label_3ad3e0;
        case 0x3ad3e4u: goto label_3ad3e4;
        case 0x3ad3e8u: goto label_3ad3e8;
        case 0x3ad3ecu: goto label_3ad3ec;
        case 0x3ad3f0u: goto label_3ad3f0;
        case 0x3ad3f4u: goto label_3ad3f4;
        case 0x3ad3f8u: goto label_3ad3f8;
        case 0x3ad3fcu: goto label_3ad3fc;
        case 0x3ad400u: goto label_3ad400;
        case 0x3ad404u: goto label_3ad404;
        case 0x3ad408u: goto label_3ad408;
        case 0x3ad40cu: goto label_3ad40c;
        case 0x3ad410u: goto label_3ad410;
        case 0x3ad414u: goto label_3ad414;
        case 0x3ad418u: goto label_3ad418;
        case 0x3ad41cu: goto label_3ad41c;
        case 0x3ad420u: goto label_3ad420;
        case 0x3ad424u: goto label_3ad424;
        case 0x3ad428u: goto label_3ad428;
        case 0x3ad42cu: goto label_3ad42c;
        case 0x3ad430u: goto label_3ad430;
        case 0x3ad434u: goto label_3ad434;
        case 0x3ad438u: goto label_3ad438;
        case 0x3ad43cu: goto label_3ad43c;
        case 0x3ad440u: goto label_3ad440;
        case 0x3ad444u: goto label_3ad444;
        case 0x3ad448u: goto label_3ad448;
        case 0x3ad44cu: goto label_3ad44c;
        case 0x3ad450u: goto label_3ad450;
        case 0x3ad454u: goto label_3ad454;
        case 0x3ad458u: goto label_3ad458;
        case 0x3ad45cu: goto label_3ad45c;
        case 0x3ad460u: goto label_3ad460;
        case 0x3ad464u: goto label_3ad464;
        case 0x3ad468u: goto label_3ad468;
        case 0x3ad46cu: goto label_3ad46c;
        case 0x3ad470u: goto label_3ad470;
        case 0x3ad474u: goto label_3ad474;
        case 0x3ad478u: goto label_3ad478;
        case 0x3ad47cu: goto label_3ad47c;
        case 0x3ad480u: goto label_3ad480;
        case 0x3ad484u: goto label_3ad484;
        case 0x3ad488u: goto label_3ad488;
        case 0x3ad48cu: goto label_3ad48c;
        case 0x3ad490u: goto label_3ad490;
        case 0x3ad494u: goto label_3ad494;
        case 0x3ad498u: goto label_3ad498;
        case 0x3ad49cu: goto label_3ad49c;
        case 0x3ad4a0u: goto label_3ad4a0;
        case 0x3ad4a4u: goto label_3ad4a4;
        case 0x3ad4a8u: goto label_3ad4a8;
        case 0x3ad4acu: goto label_3ad4ac;
        case 0x3ad4b0u: goto label_3ad4b0;
        case 0x3ad4b4u: goto label_3ad4b4;
        case 0x3ad4b8u: goto label_3ad4b8;
        case 0x3ad4bcu: goto label_3ad4bc;
        case 0x3ad4c0u: goto label_3ad4c0;
        case 0x3ad4c4u: goto label_3ad4c4;
        case 0x3ad4c8u: goto label_3ad4c8;
        case 0x3ad4ccu: goto label_3ad4cc;
        case 0x3ad4d0u: goto label_3ad4d0;
        case 0x3ad4d4u: goto label_3ad4d4;
        case 0x3ad4d8u: goto label_3ad4d8;
        case 0x3ad4dcu: goto label_3ad4dc;
        case 0x3ad4e0u: goto label_3ad4e0;
        case 0x3ad4e4u: goto label_3ad4e4;
        case 0x3ad4e8u: goto label_3ad4e8;
        case 0x3ad4ecu: goto label_3ad4ec;
        case 0x3ad4f0u: goto label_3ad4f0;
        case 0x3ad4f4u: goto label_3ad4f4;
        case 0x3ad4f8u: goto label_3ad4f8;
        case 0x3ad4fcu: goto label_3ad4fc;
        case 0x3ad500u: goto label_3ad500;
        case 0x3ad504u: goto label_3ad504;
        case 0x3ad508u: goto label_3ad508;
        case 0x3ad50cu: goto label_3ad50c;
        case 0x3ad510u: goto label_3ad510;
        case 0x3ad514u: goto label_3ad514;
        case 0x3ad518u: goto label_3ad518;
        case 0x3ad51cu: goto label_3ad51c;
        case 0x3ad520u: goto label_3ad520;
        case 0x3ad524u: goto label_3ad524;
        case 0x3ad528u: goto label_3ad528;
        case 0x3ad52cu: goto label_3ad52c;
        case 0x3ad530u: goto label_3ad530;
        case 0x3ad534u: goto label_3ad534;
        case 0x3ad538u: goto label_3ad538;
        case 0x3ad53cu: goto label_3ad53c;
        case 0x3ad540u: goto label_3ad540;
        case 0x3ad544u: goto label_3ad544;
        case 0x3ad548u: goto label_3ad548;
        case 0x3ad54cu: goto label_3ad54c;
        case 0x3ad550u: goto label_3ad550;
        case 0x3ad554u: goto label_3ad554;
        case 0x3ad558u: goto label_3ad558;
        case 0x3ad55cu: goto label_3ad55c;
        case 0x3ad560u: goto label_3ad560;
        case 0x3ad564u: goto label_3ad564;
        case 0x3ad568u: goto label_3ad568;
        case 0x3ad56cu: goto label_3ad56c;
        case 0x3ad570u: goto label_3ad570;
        case 0x3ad574u: goto label_3ad574;
        case 0x3ad578u: goto label_3ad578;
        case 0x3ad57cu: goto label_3ad57c;
        case 0x3ad580u: goto label_3ad580;
        case 0x3ad584u: goto label_3ad584;
        case 0x3ad588u: goto label_3ad588;
        case 0x3ad58cu: goto label_3ad58c;
        case 0x3ad590u: goto label_3ad590;
        case 0x3ad594u: goto label_3ad594;
        case 0x3ad598u: goto label_3ad598;
        case 0x3ad59cu: goto label_3ad59c;
        case 0x3ad5a0u: goto label_3ad5a0;
        case 0x3ad5a4u: goto label_3ad5a4;
        case 0x3ad5a8u: goto label_3ad5a8;
        case 0x3ad5acu: goto label_3ad5ac;
        case 0x3ad5b0u: goto label_3ad5b0;
        case 0x3ad5b4u: goto label_3ad5b4;
        case 0x3ad5b8u: goto label_3ad5b8;
        case 0x3ad5bcu: goto label_3ad5bc;
        case 0x3ad5c0u: goto label_3ad5c0;
        case 0x3ad5c4u: goto label_3ad5c4;
        case 0x3ad5c8u: goto label_3ad5c8;
        case 0x3ad5ccu: goto label_3ad5cc;
        case 0x3ad5d0u: goto label_3ad5d0;
        case 0x3ad5d4u: goto label_3ad5d4;
        case 0x3ad5d8u: goto label_3ad5d8;
        case 0x3ad5dcu: goto label_3ad5dc;
        case 0x3ad5e0u: goto label_3ad5e0;
        case 0x3ad5e4u: goto label_3ad5e4;
        case 0x3ad5e8u: goto label_3ad5e8;
        case 0x3ad5ecu: goto label_3ad5ec;
        case 0x3ad5f0u: goto label_3ad5f0;
        case 0x3ad5f4u: goto label_3ad5f4;
        case 0x3ad5f8u: goto label_3ad5f8;
        case 0x3ad5fcu: goto label_3ad5fc;
        case 0x3ad600u: goto label_3ad600;
        case 0x3ad604u: goto label_3ad604;
        case 0x3ad608u: goto label_3ad608;
        case 0x3ad60cu: goto label_3ad60c;
        case 0x3ad610u: goto label_3ad610;
        case 0x3ad614u: goto label_3ad614;
        case 0x3ad618u: goto label_3ad618;
        case 0x3ad61cu: goto label_3ad61c;
        case 0x3ad620u: goto label_3ad620;
        case 0x3ad624u: goto label_3ad624;
        case 0x3ad628u: goto label_3ad628;
        case 0x3ad62cu: goto label_3ad62c;
        case 0x3ad630u: goto label_3ad630;
        case 0x3ad634u: goto label_3ad634;
        case 0x3ad638u: goto label_3ad638;
        case 0x3ad63cu: goto label_3ad63c;
        case 0x3ad640u: goto label_3ad640;
        case 0x3ad644u: goto label_3ad644;
        case 0x3ad648u: goto label_3ad648;
        case 0x3ad64cu: goto label_3ad64c;
        case 0x3ad650u: goto label_3ad650;
        case 0x3ad654u: goto label_3ad654;
        case 0x3ad658u: goto label_3ad658;
        case 0x3ad65cu: goto label_3ad65c;
        case 0x3ad660u: goto label_3ad660;
        case 0x3ad664u: goto label_3ad664;
        case 0x3ad668u: goto label_3ad668;
        case 0x3ad66cu: goto label_3ad66c;
        case 0x3ad670u: goto label_3ad670;
        case 0x3ad674u: goto label_3ad674;
        case 0x3ad678u: goto label_3ad678;
        case 0x3ad67cu: goto label_3ad67c;
        case 0x3ad680u: goto label_3ad680;
        case 0x3ad684u: goto label_3ad684;
        case 0x3ad688u: goto label_3ad688;
        case 0x3ad68cu: goto label_3ad68c;
        case 0x3ad690u: goto label_3ad690;
        case 0x3ad694u: goto label_3ad694;
        case 0x3ad698u: goto label_3ad698;
        case 0x3ad69cu: goto label_3ad69c;
        case 0x3ad6a0u: goto label_3ad6a0;
        case 0x3ad6a4u: goto label_3ad6a4;
        case 0x3ad6a8u: goto label_3ad6a8;
        case 0x3ad6acu: goto label_3ad6ac;
        case 0x3ad6b0u: goto label_3ad6b0;
        case 0x3ad6b4u: goto label_3ad6b4;
        case 0x3ad6b8u: goto label_3ad6b8;
        case 0x3ad6bcu: goto label_3ad6bc;
        case 0x3ad6c0u: goto label_3ad6c0;
        case 0x3ad6c4u: goto label_3ad6c4;
        case 0x3ad6c8u: goto label_3ad6c8;
        case 0x3ad6ccu: goto label_3ad6cc;
        case 0x3ad6d0u: goto label_3ad6d0;
        case 0x3ad6d4u: goto label_3ad6d4;
        case 0x3ad6d8u: goto label_3ad6d8;
        case 0x3ad6dcu: goto label_3ad6dc;
        case 0x3ad6e0u: goto label_3ad6e0;
        case 0x3ad6e4u: goto label_3ad6e4;
        case 0x3ad6e8u: goto label_3ad6e8;
        case 0x3ad6ecu: goto label_3ad6ec;
        case 0x3ad6f0u: goto label_3ad6f0;
        case 0x3ad6f4u: goto label_3ad6f4;
        case 0x3ad6f8u: goto label_3ad6f8;
        case 0x3ad6fcu: goto label_3ad6fc;
        case 0x3ad700u: goto label_3ad700;
        case 0x3ad704u: goto label_3ad704;
        case 0x3ad708u: goto label_3ad708;
        case 0x3ad70cu: goto label_3ad70c;
        case 0x3ad710u: goto label_3ad710;
        case 0x3ad714u: goto label_3ad714;
        case 0x3ad718u: goto label_3ad718;
        case 0x3ad71cu: goto label_3ad71c;
        case 0x3ad720u: goto label_3ad720;
        case 0x3ad724u: goto label_3ad724;
        case 0x3ad728u: goto label_3ad728;
        case 0x3ad72cu: goto label_3ad72c;
        case 0x3ad730u: goto label_3ad730;
        case 0x3ad734u: goto label_3ad734;
        case 0x3ad738u: goto label_3ad738;
        case 0x3ad73cu: goto label_3ad73c;
        case 0x3ad740u: goto label_3ad740;
        case 0x3ad744u: goto label_3ad744;
        case 0x3ad748u: goto label_3ad748;
        case 0x3ad74cu: goto label_3ad74c;
        case 0x3ad750u: goto label_3ad750;
        case 0x3ad754u: goto label_3ad754;
        case 0x3ad758u: goto label_3ad758;
        case 0x3ad75cu: goto label_3ad75c;
        case 0x3ad760u: goto label_3ad760;
        case 0x3ad764u: goto label_3ad764;
        case 0x3ad768u: goto label_3ad768;
        case 0x3ad76cu: goto label_3ad76c;
        case 0x3ad770u: goto label_3ad770;
        case 0x3ad774u: goto label_3ad774;
        case 0x3ad778u: goto label_3ad778;
        case 0x3ad77cu: goto label_3ad77c;
        case 0x3ad780u: goto label_3ad780;
        case 0x3ad784u: goto label_3ad784;
        case 0x3ad788u: goto label_3ad788;
        case 0x3ad78cu: goto label_3ad78c;
        case 0x3ad790u: goto label_3ad790;
        case 0x3ad794u: goto label_3ad794;
        case 0x3ad798u: goto label_3ad798;
        case 0x3ad79cu: goto label_3ad79c;
        case 0x3ad7a0u: goto label_3ad7a0;
        case 0x3ad7a4u: goto label_3ad7a4;
        case 0x3ad7a8u: goto label_3ad7a8;
        case 0x3ad7acu: goto label_3ad7ac;
        case 0x3ad7b0u: goto label_3ad7b0;
        case 0x3ad7b4u: goto label_3ad7b4;
        case 0x3ad7b8u: goto label_3ad7b8;
        case 0x3ad7bcu: goto label_3ad7bc;
        case 0x3ad7c0u: goto label_3ad7c0;
        case 0x3ad7c4u: goto label_3ad7c4;
        case 0x3ad7c8u: goto label_3ad7c8;
        case 0x3ad7ccu: goto label_3ad7cc;
        case 0x3ad7d0u: goto label_3ad7d0;
        case 0x3ad7d4u: goto label_3ad7d4;
        case 0x3ad7d8u: goto label_3ad7d8;
        case 0x3ad7dcu: goto label_3ad7dc;
        case 0x3ad7e0u: goto label_3ad7e0;
        case 0x3ad7e4u: goto label_3ad7e4;
        case 0x3ad7e8u: goto label_3ad7e8;
        case 0x3ad7ecu: goto label_3ad7ec;
        case 0x3ad7f0u: goto label_3ad7f0;
        case 0x3ad7f4u: goto label_3ad7f4;
        case 0x3ad7f8u: goto label_3ad7f8;
        case 0x3ad7fcu: goto label_3ad7fc;
        case 0x3ad800u: goto label_3ad800;
        case 0x3ad804u: goto label_3ad804;
        case 0x3ad808u: goto label_3ad808;
        case 0x3ad80cu: goto label_3ad80c;
        case 0x3ad810u: goto label_3ad810;
        case 0x3ad814u: goto label_3ad814;
        case 0x3ad818u: goto label_3ad818;
        case 0x3ad81cu: goto label_3ad81c;
        case 0x3ad820u: goto label_3ad820;
        case 0x3ad824u: goto label_3ad824;
        case 0x3ad828u: goto label_3ad828;
        case 0x3ad82cu: goto label_3ad82c;
        case 0x3ad830u: goto label_3ad830;
        case 0x3ad834u: goto label_3ad834;
        case 0x3ad838u: goto label_3ad838;
        case 0x3ad83cu: goto label_3ad83c;
        case 0x3ad840u: goto label_3ad840;
        case 0x3ad844u: goto label_3ad844;
        case 0x3ad848u: goto label_3ad848;
        case 0x3ad84cu: goto label_3ad84c;
        case 0x3ad850u: goto label_3ad850;
        case 0x3ad854u: goto label_3ad854;
        case 0x3ad858u: goto label_3ad858;
        case 0x3ad85cu: goto label_3ad85c;
        case 0x3ad860u: goto label_3ad860;
        case 0x3ad864u: goto label_3ad864;
        case 0x3ad868u: goto label_3ad868;
        case 0x3ad86cu: goto label_3ad86c;
        case 0x3ad870u: goto label_3ad870;
        case 0x3ad874u: goto label_3ad874;
        case 0x3ad878u: goto label_3ad878;
        case 0x3ad87cu: goto label_3ad87c;
        case 0x3ad880u: goto label_3ad880;
        case 0x3ad884u: goto label_3ad884;
        case 0x3ad888u: goto label_3ad888;
        case 0x3ad88cu: goto label_3ad88c;
        case 0x3ad890u: goto label_3ad890;
        case 0x3ad894u: goto label_3ad894;
        case 0x3ad898u: goto label_3ad898;
        case 0x3ad89cu: goto label_3ad89c;
        case 0x3ad8a0u: goto label_3ad8a0;
        case 0x3ad8a4u: goto label_3ad8a4;
        case 0x3ad8a8u: goto label_3ad8a8;
        case 0x3ad8acu: goto label_3ad8ac;
        case 0x3ad8b0u: goto label_3ad8b0;
        case 0x3ad8b4u: goto label_3ad8b4;
        case 0x3ad8b8u: goto label_3ad8b8;
        case 0x3ad8bcu: goto label_3ad8bc;
        case 0x3ad8c0u: goto label_3ad8c0;
        case 0x3ad8c4u: goto label_3ad8c4;
        case 0x3ad8c8u: goto label_3ad8c8;
        case 0x3ad8ccu: goto label_3ad8cc;
        case 0x3ad8d0u: goto label_3ad8d0;
        case 0x3ad8d4u: goto label_3ad8d4;
        case 0x3ad8d8u: goto label_3ad8d8;
        case 0x3ad8dcu: goto label_3ad8dc;
        case 0x3ad8e0u: goto label_3ad8e0;
        case 0x3ad8e4u: goto label_3ad8e4;
        case 0x3ad8e8u: goto label_3ad8e8;
        case 0x3ad8ecu: goto label_3ad8ec;
        case 0x3ad8f0u: goto label_3ad8f0;
        case 0x3ad8f4u: goto label_3ad8f4;
        case 0x3ad8f8u: goto label_3ad8f8;
        case 0x3ad8fcu: goto label_3ad8fc;
        case 0x3ad900u: goto label_3ad900;
        case 0x3ad904u: goto label_3ad904;
        case 0x3ad908u: goto label_3ad908;
        case 0x3ad90cu: goto label_3ad90c;
        case 0x3ad910u: goto label_3ad910;
        case 0x3ad914u: goto label_3ad914;
        case 0x3ad918u: goto label_3ad918;
        case 0x3ad91cu: goto label_3ad91c;
        case 0x3ad920u: goto label_3ad920;
        case 0x3ad924u: goto label_3ad924;
        case 0x3ad928u: goto label_3ad928;
        case 0x3ad92cu: goto label_3ad92c;
        case 0x3ad930u: goto label_3ad930;
        case 0x3ad934u: goto label_3ad934;
        case 0x3ad938u: goto label_3ad938;
        case 0x3ad93cu: goto label_3ad93c;
        case 0x3ad940u: goto label_3ad940;
        case 0x3ad944u: goto label_3ad944;
        case 0x3ad948u: goto label_3ad948;
        case 0x3ad94cu: goto label_3ad94c;
        case 0x3ad950u: goto label_3ad950;
        case 0x3ad954u: goto label_3ad954;
        case 0x3ad958u: goto label_3ad958;
        case 0x3ad95cu: goto label_3ad95c;
        case 0x3ad960u: goto label_3ad960;
        case 0x3ad964u: goto label_3ad964;
        case 0x3ad968u: goto label_3ad968;
        case 0x3ad96cu: goto label_3ad96c;
        case 0x3ad970u: goto label_3ad970;
        case 0x3ad974u: goto label_3ad974;
        case 0x3ad978u: goto label_3ad978;
        case 0x3ad97cu: goto label_3ad97c;
        case 0x3ad980u: goto label_3ad980;
        case 0x3ad984u: goto label_3ad984;
        case 0x3ad988u: goto label_3ad988;
        case 0x3ad98cu: goto label_3ad98c;
        case 0x3ad990u: goto label_3ad990;
        case 0x3ad994u: goto label_3ad994;
        case 0x3ad998u: goto label_3ad998;
        case 0x3ad99cu: goto label_3ad99c;
        case 0x3ad9a0u: goto label_3ad9a0;
        case 0x3ad9a4u: goto label_3ad9a4;
        case 0x3ad9a8u: goto label_3ad9a8;
        case 0x3ad9acu: goto label_3ad9ac;
        case 0x3ad9b0u: goto label_3ad9b0;
        case 0x3ad9b4u: goto label_3ad9b4;
        case 0x3ad9b8u: goto label_3ad9b8;
        case 0x3ad9bcu: goto label_3ad9bc;
        case 0x3ad9c0u: goto label_3ad9c0;
        case 0x3ad9c4u: goto label_3ad9c4;
        case 0x3ad9c8u: goto label_3ad9c8;
        case 0x3ad9ccu: goto label_3ad9cc;
        case 0x3ad9d0u: goto label_3ad9d0;
        case 0x3ad9d4u: goto label_3ad9d4;
        case 0x3ad9d8u: goto label_3ad9d8;
        case 0x3ad9dcu: goto label_3ad9dc;
        case 0x3ad9e0u: goto label_3ad9e0;
        case 0x3ad9e4u: goto label_3ad9e4;
        case 0x3ad9e8u: goto label_3ad9e8;
        case 0x3ad9ecu: goto label_3ad9ec;
        case 0x3ad9f0u: goto label_3ad9f0;
        case 0x3ad9f4u: goto label_3ad9f4;
        case 0x3ad9f8u: goto label_3ad9f8;
        case 0x3ad9fcu: goto label_3ad9fc;
        case 0x3ada00u: goto label_3ada00;
        case 0x3ada04u: goto label_3ada04;
        case 0x3ada08u: goto label_3ada08;
        case 0x3ada0cu: goto label_3ada0c;
        case 0x3ada10u: goto label_3ada10;
        case 0x3ada14u: goto label_3ada14;
        case 0x3ada18u: goto label_3ada18;
        case 0x3ada1cu: goto label_3ada1c;
        case 0x3ada20u: goto label_3ada20;
        case 0x3ada24u: goto label_3ada24;
        case 0x3ada28u: goto label_3ada28;
        case 0x3ada2cu: goto label_3ada2c;
        case 0x3ada30u: goto label_3ada30;
        case 0x3ada34u: goto label_3ada34;
        case 0x3ada38u: goto label_3ada38;
        case 0x3ada3cu: goto label_3ada3c;
        case 0x3ada40u: goto label_3ada40;
        case 0x3ada44u: goto label_3ada44;
        case 0x3ada48u: goto label_3ada48;
        case 0x3ada4cu: goto label_3ada4c;
        case 0x3ada50u: goto label_3ada50;
        case 0x3ada54u: goto label_3ada54;
        case 0x3ada58u: goto label_3ada58;
        case 0x3ada5cu: goto label_3ada5c;
        case 0x3ada60u: goto label_3ada60;
        case 0x3ada64u: goto label_3ada64;
        case 0x3ada68u: goto label_3ada68;
        case 0x3ada6cu: goto label_3ada6c;
        case 0x3ada70u: goto label_3ada70;
        case 0x3ada74u: goto label_3ada74;
        case 0x3ada78u: goto label_3ada78;
        case 0x3ada7cu: goto label_3ada7c;
        case 0x3ada80u: goto label_3ada80;
        case 0x3ada84u: goto label_3ada84;
        case 0x3ada88u: goto label_3ada88;
        case 0x3ada8cu: goto label_3ada8c;
        case 0x3ada90u: goto label_3ada90;
        case 0x3ada94u: goto label_3ada94;
        case 0x3ada98u: goto label_3ada98;
        case 0x3ada9cu: goto label_3ada9c;
        case 0x3adaa0u: goto label_3adaa0;
        case 0x3adaa4u: goto label_3adaa4;
        case 0x3adaa8u: goto label_3adaa8;
        case 0x3adaacu: goto label_3adaac;
        case 0x3adab0u: goto label_3adab0;
        case 0x3adab4u: goto label_3adab4;
        case 0x3adab8u: goto label_3adab8;
        case 0x3adabcu: goto label_3adabc;
        case 0x3adac0u: goto label_3adac0;
        case 0x3adac4u: goto label_3adac4;
        case 0x3adac8u: goto label_3adac8;
        case 0x3adaccu: goto label_3adacc;
        case 0x3adad0u: goto label_3adad0;
        case 0x3adad4u: goto label_3adad4;
        case 0x3adad8u: goto label_3adad8;
        case 0x3adadcu: goto label_3adadc;
        case 0x3adae0u: goto label_3adae0;
        case 0x3adae4u: goto label_3adae4;
        case 0x3adae8u: goto label_3adae8;
        case 0x3adaecu: goto label_3adaec;
        case 0x3adaf0u: goto label_3adaf0;
        case 0x3adaf4u: goto label_3adaf4;
        case 0x3adaf8u: goto label_3adaf8;
        case 0x3adafcu: goto label_3adafc;
        case 0x3adb00u: goto label_3adb00;
        case 0x3adb04u: goto label_3adb04;
        case 0x3adb08u: goto label_3adb08;
        case 0x3adb0cu: goto label_3adb0c;
        case 0x3adb10u: goto label_3adb10;
        case 0x3adb14u: goto label_3adb14;
        case 0x3adb18u: goto label_3adb18;
        case 0x3adb1cu: goto label_3adb1c;
        case 0x3adb20u: goto label_3adb20;
        case 0x3adb24u: goto label_3adb24;
        case 0x3adb28u: goto label_3adb28;
        case 0x3adb2cu: goto label_3adb2c;
        case 0x3adb30u: goto label_3adb30;
        case 0x3adb34u: goto label_3adb34;
        case 0x3adb38u: goto label_3adb38;
        case 0x3adb3cu: goto label_3adb3c;
        case 0x3adb40u: goto label_3adb40;
        case 0x3adb44u: goto label_3adb44;
        case 0x3adb48u: goto label_3adb48;
        case 0x3adb4cu: goto label_3adb4c;
        case 0x3adb50u: goto label_3adb50;
        case 0x3adb54u: goto label_3adb54;
        case 0x3adb58u: goto label_3adb58;
        case 0x3adb5cu: goto label_3adb5c;
        case 0x3adb60u: goto label_3adb60;
        case 0x3adb64u: goto label_3adb64;
        case 0x3adb68u: goto label_3adb68;
        case 0x3adb6cu: goto label_3adb6c;
        case 0x3adb70u: goto label_3adb70;
        case 0x3adb74u: goto label_3adb74;
        case 0x3adb78u: goto label_3adb78;
        case 0x3adb7cu: goto label_3adb7c;
        case 0x3adb80u: goto label_3adb80;
        case 0x3adb84u: goto label_3adb84;
        case 0x3adb88u: goto label_3adb88;
        case 0x3adb8cu: goto label_3adb8c;
        case 0x3adb90u: goto label_3adb90;
        case 0x3adb94u: goto label_3adb94;
        case 0x3adb98u: goto label_3adb98;
        case 0x3adb9cu: goto label_3adb9c;
        case 0x3adba0u: goto label_3adba0;
        case 0x3adba4u: goto label_3adba4;
        case 0x3adba8u: goto label_3adba8;
        case 0x3adbacu: goto label_3adbac;
        case 0x3adbb0u: goto label_3adbb0;
        case 0x3adbb4u: goto label_3adbb4;
        case 0x3adbb8u: goto label_3adbb8;
        case 0x3adbbcu: goto label_3adbbc;
        case 0x3adbc0u: goto label_3adbc0;
        case 0x3adbc4u: goto label_3adbc4;
        case 0x3adbc8u: goto label_3adbc8;
        case 0x3adbccu: goto label_3adbcc;
        case 0x3adbd0u: goto label_3adbd0;
        case 0x3adbd4u: goto label_3adbd4;
        case 0x3adbd8u: goto label_3adbd8;
        case 0x3adbdcu: goto label_3adbdc;
        case 0x3adbe0u: goto label_3adbe0;
        case 0x3adbe4u: goto label_3adbe4;
        case 0x3adbe8u: goto label_3adbe8;
        case 0x3adbecu: goto label_3adbec;
        case 0x3adbf0u: goto label_3adbf0;
        case 0x3adbf4u: goto label_3adbf4;
        case 0x3adbf8u: goto label_3adbf8;
        case 0x3adbfcu: goto label_3adbfc;
        case 0x3adc00u: goto label_3adc00;
        case 0x3adc04u: goto label_3adc04;
        case 0x3adc08u: goto label_3adc08;
        case 0x3adc0cu: goto label_3adc0c;
        case 0x3adc10u: goto label_3adc10;
        case 0x3adc14u: goto label_3adc14;
        case 0x3adc18u: goto label_3adc18;
        case 0x3adc1cu: goto label_3adc1c;
        case 0x3adc20u: goto label_3adc20;
        case 0x3adc24u: goto label_3adc24;
        case 0x3adc28u: goto label_3adc28;
        case 0x3adc2cu: goto label_3adc2c;
        case 0x3adc30u: goto label_3adc30;
        case 0x3adc34u: goto label_3adc34;
        case 0x3adc38u: goto label_3adc38;
        case 0x3adc3cu: goto label_3adc3c;
        case 0x3adc40u: goto label_3adc40;
        case 0x3adc44u: goto label_3adc44;
        case 0x3adc48u: goto label_3adc48;
        case 0x3adc4cu: goto label_3adc4c;
        case 0x3adc50u: goto label_3adc50;
        case 0x3adc54u: goto label_3adc54;
        case 0x3adc58u: goto label_3adc58;
        case 0x3adc5cu: goto label_3adc5c;
        case 0x3adc60u: goto label_3adc60;
        case 0x3adc64u: goto label_3adc64;
        case 0x3adc68u: goto label_3adc68;
        case 0x3adc6cu: goto label_3adc6c;
        case 0x3adc70u: goto label_3adc70;
        case 0x3adc74u: goto label_3adc74;
        case 0x3adc78u: goto label_3adc78;
        case 0x3adc7cu: goto label_3adc7c;
        case 0x3adc80u: goto label_3adc80;
        case 0x3adc84u: goto label_3adc84;
        case 0x3adc88u: goto label_3adc88;
        case 0x3adc8cu: goto label_3adc8c;
        case 0x3adc90u: goto label_3adc90;
        case 0x3adc94u: goto label_3adc94;
        case 0x3adc98u: goto label_3adc98;
        case 0x3adc9cu: goto label_3adc9c;
        case 0x3adca0u: goto label_3adca0;
        case 0x3adca4u: goto label_3adca4;
        case 0x3adca8u: goto label_3adca8;
        case 0x3adcacu: goto label_3adcac;
        case 0x3adcb0u: goto label_3adcb0;
        case 0x3adcb4u: goto label_3adcb4;
        case 0x3adcb8u: goto label_3adcb8;
        case 0x3adcbcu: goto label_3adcbc;
        case 0x3adcc0u: goto label_3adcc0;
        case 0x3adcc4u: goto label_3adcc4;
        case 0x3adcc8u: goto label_3adcc8;
        case 0x3adcccu: goto label_3adccc;
        case 0x3adcd0u: goto label_3adcd0;
        case 0x3adcd4u: goto label_3adcd4;
        case 0x3adcd8u: goto label_3adcd8;
        case 0x3adcdcu: goto label_3adcdc;
        case 0x3adce0u: goto label_3adce0;
        case 0x3adce4u: goto label_3adce4;
        case 0x3adce8u: goto label_3adce8;
        case 0x3adcecu: goto label_3adcec;
        case 0x3adcf0u: goto label_3adcf0;
        case 0x3adcf4u: goto label_3adcf4;
        case 0x3adcf8u: goto label_3adcf8;
        case 0x3adcfcu: goto label_3adcfc;
        case 0x3add00u: goto label_3add00;
        case 0x3add04u: goto label_3add04;
        case 0x3add08u: goto label_3add08;
        case 0x3add0cu: goto label_3add0c;
        case 0x3add10u: goto label_3add10;
        case 0x3add14u: goto label_3add14;
        case 0x3add18u: goto label_3add18;
        case 0x3add1cu: goto label_3add1c;
        case 0x3add20u: goto label_3add20;
        case 0x3add24u: goto label_3add24;
        case 0x3add28u: goto label_3add28;
        case 0x3add2cu: goto label_3add2c;
        case 0x3add30u: goto label_3add30;
        case 0x3add34u: goto label_3add34;
        case 0x3add38u: goto label_3add38;
        case 0x3add3cu: goto label_3add3c;
        case 0x3add40u: goto label_3add40;
        case 0x3add44u: goto label_3add44;
        case 0x3add48u: goto label_3add48;
        case 0x3add4cu: goto label_3add4c;
        case 0x3add50u: goto label_3add50;
        case 0x3add54u: goto label_3add54;
        case 0x3add58u: goto label_3add58;
        case 0x3add5cu: goto label_3add5c;
        case 0x3add60u: goto label_3add60;
        case 0x3add64u: goto label_3add64;
        case 0x3add68u: goto label_3add68;
        case 0x3add6cu: goto label_3add6c;
        case 0x3add70u: goto label_3add70;
        case 0x3add74u: goto label_3add74;
        case 0x3add78u: goto label_3add78;
        case 0x3add7cu: goto label_3add7c;
        case 0x3add80u: goto label_3add80;
        case 0x3add84u: goto label_3add84;
        case 0x3add88u: goto label_3add88;
        case 0x3add8cu: goto label_3add8c;
        case 0x3add90u: goto label_3add90;
        case 0x3add94u: goto label_3add94;
        case 0x3add98u: goto label_3add98;
        case 0x3add9cu: goto label_3add9c;
        case 0x3adda0u: goto label_3adda0;
        case 0x3adda4u: goto label_3adda4;
        case 0x3adda8u: goto label_3adda8;
        case 0x3addacu: goto label_3addac;
        case 0x3addb0u: goto label_3addb0;
        case 0x3addb4u: goto label_3addb4;
        case 0x3addb8u: goto label_3addb8;
        case 0x3addbcu: goto label_3addbc;
        case 0x3addc0u: goto label_3addc0;
        case 0x3addc4u: goto label_3addc4;
        case 0x3addc8u: goto label_3addc8;
        case 0x3addccu: goto label_3addcc;
        case 0x3addd0u: goto label_3addd0;
        case 0x3addd4u: goto label_3addd4;
        case 0x3addd8u: goto label_3addd8;
        case 0x3adddcu: goto label_3adddc;
        case 0x3adde0u: goto label_3adde0;
        case 0x3adde4u: goto label_3adde4;
        case 0x3adde8u: goto label_3adde8;
        case 0x3addecu: goto label_3addec;
        case 0x3addf0u: goto label_3addf0;
        case 0x3addf4u: goto label_3addf4;
        case 0x3addf8u: goto label_3addf8;
        case 0x3addfcu: goto label_3addfc;
        case 0x3ade00u: goto label_3ade00;
        case 0x3ade04u: goto label_3ade04;
        case 0x3ade08u: goto label_3ade08;
        case 0x3ade0cu: goto label_3ade0c;
        case 0x3ade10u: goto label_3ade10;
        case 0x3ade14u: goto label_3ade14;
        case 0x3ade18u: goto label_3ade18;
        case 0x3ade1cu: goto label_3ade1c;
        case 0x3ade20u: goto label_3ade20;
        case 0x3ade24u: goto label_3ade24;
        case 0x3ade28u: goto label_3ade28;
        case 0x3ade2cu: goto label_3ade2c;
        case 0x3ade30u: goto label_3ade30;
        case 0x3ade34u: goto label_3ade34;
        case 0x3ade38u: goto label_3ade38;
        case 0x3ade3cu: goto label_3ade3c;
        case 0x3ade40u: goto label_3ade40;
        case 0x3ade44u: goto label_3ade44;
        case 0x3ade48u: goto label_3ade48;
        case 0x3ade4cu: goto label_3ade4c;
        case 0x3ade50u: goto label_3ade50;
        case 0x3ade54u: goto label_3ade54;
        case 0x3ade58u: goto label_3ade58;
        case 0x3ade5cu: goto label_3ade5c;
        case 0x3ade60u: goto label_3ade60;
        case 0x3ade64u: goto label_3ade64;
        case 0x3ade68u: goto label_3ade68;
        case 0x3ade6cu: goto label_3ade6c;
        case 0x3ade70u: goto label_3ade70;
        case 0x3ade74u: goto label_3ade74;
        case 0x3ade78u: goto label_3ade78;
        case 0x3ade7cu: goto label_3ade7c;
        case 0x3ade80u: goto label_3ade80;
        case 0x3ade84u: goto label_3ade84;
        case 0x3ade88u: goto label_3ade88;
        case 0x3ade8cu: goto label_3ade8c;
        case 0x3ade90u: goto label_3ade90;
        case 0x3ade94u: goto label_3ade94;
        case 0x3ade98u: goto label_3ade98;
        case 0x3ade9cu: goto label_3ade9c;
        case 0x3adea0u: goto label_3adea0;
        case 0x3adea4u: goto label_3adea4;
        case 0x3adea8u: goto label_3adea8;
        case 0x3adeacu: goto label_3adeac;
        case 0x3adeb0u: goto label_3adeb0;
        case 0x3adeb4u: goto label_3adeb4;
        case 0x3adeb8u: goto label_3adeb8;
        case 0x3adebcu: goto label_3adebc;
        case 0x3adec0u: goto label_3adec0;
        case 0x3adec4u: goto label_3adec4;
        case 0x3adec8u: goto label_3adec8;
        case 0x3adeccu: goto label_3adecc;
        case 0x3aded0u: goto label_3aded0;
        case 0x3aded4u: goto label_3aded4;
        case 0x3aded8u: goto label_3aded8;
        case 0x3adedcu: goto label_3adedc;
        case 0x3adee0u: goto label_3adee0;
        case 0x3adee4u: goto label_3adee4;
        case 0x3adee8u: goto label_3adee8;
        case 0x3adeecu: goto label_3adeec;
        case 0x3adef0u: goto label_3adef0;
        case 0x3adef4u: goto label_3adef4;
        case 0x3adef8u: goto label_3adef8;
        case 0x3adefcu: goto label_3adefc;
        case 0x3adf00u: goto label_3adf00;
        case 0x3adf04u: goto label_3adf04;
        case 0x3adf08u: goto label_3adf08;
        case 0x3adf0cu: goto label_3adf0c;
        case 0x3adf10u: goto label_3adf10;
        case 0x3adf14u: goto label_3adf14;
        case 0x3adf18u: goto label_3adf18;
        case 0x3adf1cu: goto label_3adf1c;
        case 0x3adf20u: goto label_3adf20;
        case 0x3adf24u: goto label_3adf24;
        case 0x3adf28u: goto label_3adf28;
        case 0x3adf2cu: goto label_3adf2c;
        case 0x3adf30u: goto label_3adf30;
        case 0x3adf34u: goto label_3adf34;
        case 0x3adf38u: goto label_3adf38;
        case 0x3adf3cu: goto label_3adf3c;
        case 0x3adf40u: goto label_3adf40;
        case 0x3adf44u: goto label_3adf44;
        case 0x3adf48u: goto label_3adf48;
        case 0x3adf4cu: goto label_3adf4c;
        case 0x3adf50u: goto label_3adf50;
        case 0x3adf54u: goto label_3adf54;
        case 0x3adf58u: goto label_3adf58;
        case 0x3adf5cu: goto label_3adf5c;
        case 0x3adf60u: goto label_3adf60;
        case 0x3adf64u: goto label_3adf64;
        case 0x3adf68u: goto label_3adf68;
        case 0x3adf6cu: goto label_3adf6c;
        case 0x3adf70u: goto label_3adf70;
        case 0x3adf74u: goto label_3adf74;
        case 0x3adf78u: goto label_3adf78;
        case 0x3adf7cu: goto label_3adf7c;
        case 0x3adf80u: goto label_3adf80;
        case 0x3adf84u: goto label_3adf84;
        case 0x3adf88u: goto label_3adf88;
        case 0x3adf8cu: goto label_3adf8c;
        case 0x3adf90u: goto label_3adf90;
        case 0x3adf94u: goto label_3adf94;
        case 0x3adf98u: goto label_3adf98;
        case 0x3adf9cu: goto label_3adf9c;
        case 0x3adfa0u: goto label_3adfa0;
        case 0x3adfa4u: goto label_3adfa4;
        case 0x3adfa8u: goto label_3adfa8;
        case 0x3adfacu: goto label_3adfac;
        case 0x3adfb0u: goto label_3adfb0;
        case 0x3adfb4u: goto label_3adfb4;
        case 0x3adfb8u: goto label_3adfb8;
        case 0x3adfbcu: goto label_3adfbc;
        case 0x3adfc0u: goto label_3adfc0;
        case 0x3adfc4u: goto label_3adfc4;
        case 0x3adfc8u: goto label_3adfc8;
        case 0x3adfccu: goto label_3adfcc;
        case 0x3adfd0u: goto label_3adfd0;
        case 0x3adfd4u: goto label_3adfd4;
        case 0x3adfd8u: goto label_3adfd8;
        case 0x3adfdcu: goto label_3adfdc;
        case 0x3adfe0u: goto label_3adfe0;
        case 0x3adfe4u: goto label_3adfe4;
        case 0x3adfe8u: goto label_3adfe8;
        case 0x3adfecu: goto label_3adfec;
        case 0x3adff0u: goto label_3adff0;
        case 0x3adff4u: goto label_3adff4;
        case 0x3adff8u: goto label_3adff8;
        case 0x3adffcu: goto label_3adffc;
        case 0x3ae000u: goto label_3ae000;
        case 0x3ae004u: goto label_3ae004;
        case 0x3ae008u: goto label_3ae008;
        case 0x3ae00cu: goto label_3ae00c;
        case 0x3ae010u: goto label_3ae010;
        case 0x3ae014u: goto label_3ae014;
        case 0x3ae018u: goto label_3ae018;
        case 0x3ae01cu: goto label_3ae01c;
        case 0x3ae020u: goto label_3ae020;
        case 0x3ae024u: goto label_3ae024;
        case 0x3ae028u: goto label_3ae028;
        case 0x3ae02cu: goto label_3ae02c;
        case 0x3ae030u: goto label_3ae030;
        case 0x3ae034u: goto label_3ae034;
        case 0x3ae038u: goto label_3ae038;
        case 0x3ae03cu: goto label_3ae03c;
        case 0x3ae040u: goto label_3ae040;
        case 0x3ae044u: goto label_3ae044;
        case 0x3ae048u: goto label_3ae048;
        case 0x3ae04cu: goto label_3ae04c;
        case 0x3ae050u: goto label_3ae050;
        case 0x3ae054u: goto label_3ae054;
        case 0x3ae058u: goto label_3ae058;
        case 0x3ae05cu: goto label_3ae05c;
        case 0x3ae060u: goto label_3ae060;
        case 0x3ae064u: goto label_3ae064;
        case 0x3ae068u: goto label_3ae068;
        case 0x3ae06cu: goto label_3ae06c;
        case 0x3ae070u: goto label_3ae070;
        case 0x3ae074u: goto label_3ae074;
        case 0x3ae078u: goto label_3ae078;
        case 0x3ae07cu: goto label_3ae07c;
        case 0x3ae080u: goto label_3ae080;
        case 0x3ae084u: goto label_3ae084;
        case 0x3ae088u: goto label_3ae088;
        case 0x3ae08cu: goto label_3ae08c;
        case 0x3ae090u: goto label_3ae090;
        case 0x3ae094u: goto label_3ae094;
        case 0x3ae098u: goto label_3ae098;
        case 0x3ae09cu: goto label_3ae09c;
        case 0x3ae0a0u: goto label_3ae0a0;
        case 0x3ae0a4u: goto label_3ae0a4;
        case 0x3ae0a8u: goto label_3ae0a8;
        case 0x3ae0acu: goto label_3ae0ac;
        case 0x3ae0b0u: goto label_3ae0b0;
        case 0x3ae0b4u: goto label_3ae0b4;
        case 0x3ae0b8u: goto label_3ae0b8;
        case 0x3ae0bcu: goto label_3ae0bc;
        case 0x3ae0c0u: goto label_3ae0c0;
        case 0x3ae0c4u: goto label_3ae0c4;
        case 0x3ae0c8u: goto label_3ae0c8;
        case 0x3ae0ccu: goto label_3ae0cc;
        case 0x3ae0d0u: goto label_3ae0d0;
        case 0x3ae0d4u: goto label_3ae0d4;
        case 0x3ae0d8u: goto label_3ae0d8;
        case 0x3ae0dcu: goto label_3ae0dc;
        case 0x3ae0e0u: goto label_3ae0e0;
        case 0x3ae0e4u: goto label_3ae0e4;
        case 0x3ae0e8u: goto label_3ae0e8;
        case 0x3ae0ecu: goto label_3ae0ec;
        case 0x3ae0f0u: goto label_3ae0f0;
        case 0x3ae0f4u: goto label_3ae0f4;
        case 0x3ae0f8u: goto label_3ae0f8;
        case 0x3ae0fcu: goto label_3ae0fc;
        case 0x3ae100u: goto label_3ae100;
        case 0x3ae104u: goto label_3ae104;
        case 0x3ae108u: goto label_3ae108;
        case 0x3ae10cu: goto label_3ae10c;
        case 0x3ae110u: goto label_3ae110;
        case 0x3ae114u: goto label_3ae114;
        case 0x3ae118u: goto label_3ae118;
        case 0x3ae11cu: goto label_3ae11c;
        case 0x3ae120u: goto label_3ae120;
        case 0x3ae124u: goto label_3ae124;
        case 0x3ae128u: goto label_3ae128;
        case 0x3ae12cu: goto label_3ae12c;
        case 0x3ae130u: goto label_3ae130;
        case 0x3ae134u: goto label_3ae134;
        case 0x3ae138u: goto label_3ae138;
        case 0x3ae13cu: goto label_3ae13c;
        case 0x3ae140u: goto label_3ae140;
        case 0x3ae144u: goto label_3ae144;
        case 0x3ae148u: goto label_3ae148;
        case 0x3ae14cu: goto label_3ae14c;
        case 0x3ae150u: goto label_3ae150;
        case 0x3ae154u: goto label_3ae154;
        case 0x3ae158u: goto label_3ae158;
        case 0x3ae15cu: goto label_3ae15c;
        case 0x3ae160u: goto label_3ae160;
        case 0x3ae164u: goto label_3ae164;
        case 0x3ae168u: goto label_3ae168;
        case 0x3ae16cu: goto label_3ae16c;
        case 0x3ae170u: goto label_3ae170;
        case 0x3ae174u: goto label_3ae174;
        case 0x3ae178u: goto label_3ae178;
        case 0x3ae17cu: goto label_3ae17c;
        case 0x3ae180u: goto label_3ae180;
        case 0x3ae184u: goto label_3ae184;
        case 0x3ae188u: goto label_3ae188;
        case 0x3ae18cu: goto label_3ae18c;
        case 0x3ae190u: goto label_3ae190;
        case 0x3ae194u: goto label_3ae194;
        case 0x3ae198u: goto label_3ae198;
        case 0x3ae19cu: goto label_3ae19c;
        case 0x3ae1a0u: goto label_3ae1a0;
        case 0x3ae1a4u: goto label_3ae1a4;
        case 0x3ae1a8u: goto label_3ae1a8;
        case 0x3ae1acu: goto label_3ae1ac;
        case 0x3ae1b0u: goto label_3ae1b0;
        case 0x3ae1b4u: goto label_3ae1b4;
        case 0x3ae1b8u: goto label_3ae1b8;
        case 0x3ae1bcu: goto label_3ae1bc;
        case 0x3ae1c0u: goto label_3ae1c0;
        case 0x3ae1c4u: goto label_3ae1c4;
        case 0x3ae1c8u: goto label_3ae1c8;
        case 0x3ae1ccu: goto label_3ae1cc;
        case 0x3ae1d0u: goto label_3ae1d0;
        case 0x3ae1d4u: goto label_3ae1d4;
        case 0x3ae1d8u: goto label_3ae1d8;
        case 0x3ae1dcu: goto label_3ae1dc;
        case 0x3ae1e0u: goto label_3ae1e0;
        case 0x3ae1e4u: goto label_3ae1e4;
        case 0x3ae1e8u: goto label_3ae1e8;
        case 0x3ae1ecu: goto label_3ae1ec;
        case 0x3ae1f0u: goto label_3ae1f0;
        case 0x3ae1f4u: goto label_3ae1f4;
        case 0x3ae1f8u: goto label_3ae1f8;
        case 0x3ae1fcu: goto label_3ae1fc;
        case 0x3ae200u: goto label_3ae200;
        case 0x3ae204u: goto label_3ae204;
        case 0x3ae208u: goto label_3ae208;
        case 0x3ae20cu: goto label_3ae20c;
        case 0x3ae210u: goto label_3ae210;
        case 0x3ae214u: goto label_3ae214;
        case 0x3ae218u: goto label_3ae218;
        case 0x3ae21cu: goto label_3ae21c;
        case 0x3ae220u: goto label_3ae220;
        case 0x3ae224u: goto label_3ae224;
        case 0x3ae228u: goto label_3ae228;
        case 0x3ae22cu: goto label_3ae22c;
        case 0x3ae230u: goto label_3ae230;
        case 0x3ae234u: goto label_3ae234;
        case 0x3ae238u: goto label_3ae238;
        case 0x3ae23cu: goto label_3ae23c;
        case 0x3ae240u: goto label_3ae240;
        case 0x3ae244u: goto label_3ae244;
        case 0x3ae248u: goto label_3ae248;
        case 0x3ae24cu: goto label_3ae24c;
        case 0x3ae250u: goto label_3ae250;
        case 0x3ae254u: goto label_3ae254;
        case 0x3ae258u: goto label_3ae258;
        case 0x3ae25cu: goto label_3ae25c;
        case 0x3ae260u: goto label_3ae260;
        case 0x3ae264u: goto label_3ae264;
        case 0x3ae268u: goto label_3ae268;
        case 0x3ae26cu: goto label_3ae26c;
        case 0x3ae270u: goto label_3ae270;
        case 0x3ae274u: goto label_3ae274;
        case 0x3ae278u: goto label_3ae278;
        case 0x3ae27cu: goto label_3ae27c;
        case 0x3ae280u: goto label_3ae280;
        case 0x3ae284u: goto label_3ae284;
        case 0x3ae288u: goto label_3ae288;
        case 0x3ae28cu: goto label_3ae28c;
        case 0x3ae290u: goto label_3ae290;
        case 0x3ae294u: goto label_3ae294;
        case 0x3ae298u: goto label_3ae298;
        case 0x3ae29cu: goto label_3ae29c;
        case 0x3ae2a0u: goto label_3ae2a0;
        case 0x3ae2a4u: goto label_3ae2a4;
        case 0x3ae2a8u: goto label_3ae2a8;
        case 0x3ae2acu: goto label_3ae2ac;
        case 0x3ae2b0u: goto label_3ae2b0;
        case 0x3ae2b4u: goto label_3ae2b4;
        case 0x3ae2b8u: goto label_3ae2b8;
        case 0x3ae2bcu: goto label_3ae2bc;
        case 0x3ae2c0u: goto label_3ae2c0;
        case 0x3ae2c4u: goto label_3ae2c4;
        case 0x3ae2c8u: goto label_3ae2c8;
        case 0x3ae2ccu: goto label_3ae2cc;
        case 0x3ae2d0u: goto label_3ae2d0;
        case 0x3ae2d4u: goto label_3ae2d4;
        case 0x3ae2d8u: goto label_3ae2d8;
        case 0x3ae2dcu: goto label_3ae2dc;
        case 0x3ae2e0u: goto label_3ae2e0;
        case 0x3ae2e4u: goto label_3ae2e4;
        case 0x3ae2e8u: goto label_3ae2e8;
        case 0x3ae2ecu: goto label_3ae2ec;
        case 0x3ae2f0u: goto label_3ae2f0;
        case 0x3ae2f4u: goto label_3ae2f4;
        case 0x3ae2f8u: goto label_3ae2f8;
        case 0x3ae2fcu: goto label_3ae2fc;
        case 0x3ae300u: goto label_3ae300;
        case 0x3ae304u: goto label_3ae304;
        case 0x3ae308u: goto label_3ae308;
        case 0x3ae30cu: goto label_3ae30c;
        case 0x3ae310u: goto label_3ae310;
        case 0x3ae314u: goto label_3ae314;
        case 0x3ae318u: goto label_3ae318;
        case 0x3ae31cu: goto label_3ae31c;
        case 0x3ae320u: goto label_3ae320;
        case 0x3ae324u: goto label_3ae324;
        case 0x3ae328u: goto label_3ae328;
        case 0x3ae32cu: goto label_3ae32c;
        case 0x3ae330u: goto label_3ae330;
        case 0x3ae334u: goto label_3ae334;
        case 0x3ae338u: goto label_3ae338;
        case 0x3ae33cu: goto label_3ae33c;
        case 0x3ae340u: goto label_3ae340;
        case 0x3ae344u: goto label_3ae344;
        case 0x3ae348u: goto label_3ae348;
        case 0x3ae34cu: goto label_3ae34c;
        case 0x3ae350u: goto label_3ae350;
        case 0x3ae354u: goto label_3ae354;
        case 0x3ae358u: goto label_3ae358;
        case 0x3ae35cu: goto label_3ae35c;
        case 0x3ae360u: goto label_3ae360;
        case 0x3ae364u: goto label_3ae364;
        case 0x3ae368u: goto label_3ae368;
        case 0x3ae36cu: goto label_3ae36c;
        case 0x3ae370u: goto label_3ae370;
        case 0x3ae374u: goto label_3ae374;
        case 0x3ae378u: goto label_3ae378;
        case 0x3ae37cu: goto label_3ae37c;
        case 0x3ae380u: goto label_3ae380;
        case 0x3ae384u: goto label_3ae384;
        case 0x3ae388u: goto label_3ae388;
        case 0x3ae38cu: goto label_3ae38c;
        case 0x3ae390u: goto label_3ae390;
        case 0x3ae394u: goto label_3ae394;
        case 0x3ae398u: goto label_3ae398;
        case 0x3ae39cu: goto label_3ae39c;
        case 0x3ae3a0u: goto label_3ae3a0;
        case 0x3ae3a4u: goto label_3ae3a4;
        case 0x3ae3a8u: goto label_3ae3a8;
        case 0x3ae3acu: goto label_3ae3ac;
        case 0x3ae3b0u: goto label_3ae3b0;
        case 0x3ae3b4u: goto label_3ae3b4;
        case 0x3ae3b8u: goto label_3ae3b8;
        case 0x3ae3bcu: goto label_3ae3bc;
        case 0x3ae3c0u: goto label_3ae3c0;
        case 0x3ae3c4u: goto label_3ae3c4;
        case 0x3ae3c8u: goto label_3ae3c8;
        case 0x3ae3ccu: goto label_3ae3cc;
        case 0x3ae3d0u: goto label_3ae3d0;
        case 0x3ae3d4u: goto label_3ae3d4;
        case 0x3ae3d8u: goto label_3ae3d8;
        case 0x3ae3dcu: goto label_3ae3dc;
        case 0x3ae3e0u: goto label_3ae3e0;
        case 0x3ae3e4u: goto label_3ae3e4;
        case 0x3ae3e8u: goto label_3ae3e8;
        case 0x3ae3ecu: goto label_3ae3ec;
        case 0x3ae3f0u: goto label_3ae3f0;
        case 0x3ae3f4u: goto label_3ae3f4;
        case 0x3ae3f8u: goto label_3ae3f8;
        case 0x3ae3fcu: goto label_3ae3fc;
        case 0x3ae400u: goto label_3ae400;
        case 0x3ae404u: goto label_3ae404;
        case 0x3ae408u: goto label_3ae408;
        case 0x3ae40cu: goto label_3ae40c;
        case 0x3ae410u: goto label_3ae410;
        case 0x3ae414u: goto label_3ae414;
        case 0x3ae418u: goto label_3ae418;
        case 0x3ae41cu: goto label_3ae41c;
        case 0x3ae420u: goto label_3ae420;
        case 0x3ae424u: goto label_3ae424;
        case 0x3ae428u: goto label_3ae428;
        case 0x3ae42cu: goto label_3ae42c;
        case 0x3ae430u: goto label_3ae430;
        case 0x3ae434u: goto label_3ae434;
        case 0x3ae438u: goto label_3ae438;
        case 0x3ae43cu: goto label_3ae43c;
        case 0x3ae440u: goto label_3ae440;
        case 0x3ae444u: goto label_3ae444;
        case 0x3ae448u: goto label_3ae448;
        case 0x3ae44cu: goto label_3ae44c;
        case 0x3ae450u: goto label_3ae450;
        case 0x3ae454u: goto label_3ae454;
        case 0x3ae458u: goto label_3ae458;
        case 0x3ae45cu: goto label_3ae45c;
        case 0x3ae460u: goto label_3ae460;
        case 0x3ae464u: goto label_3ae464;
        case 0x3ae468u: goto label_3ae468;
        case 0x3ae46cu: goto label_3ae46c;
        case 0x3ae470u: goto label_3ae470;
        case 0x3ae474u: goto label_3ae474;
        case 0x3ae478u: goto label_3ae478;
        case 0x3ae47cu: goto label_3ae47c;
        case 0x3ae480u: goto label_3ae480;
        case 0x3ae484u: goto label_3ae484;
        case 0x3ae488u: goto label_3ae488;
        case 0x3ae48cu: goto label_3ae48c;
        case 0x3ae490u: goto label_3ae490;
        case 0x3ae494u: goto label_3ae494;
        case 0x3ae498u: goto label_3ae498;
        case 0x3ae49cu: goto label_3ae49c;
        case 0x3ae4a0u: goto label_3ae4a0;
        case 0x3ae4a4u: goto label_3ae4a4;
        case 0x3ae4a8u: goto label_3ae4a8;
        case 0x3ae4acu: goto label_3ae4ac;
        case 0x3ae4b0u: goto label_3ae4b0;
        case 0x3ae4b4u: goto label_3ae4b4;
        case 0x3ae4b8u: goto label_3ae4b8;
        case 0x3ae4bcu: goto label_3ae4bc;
        case 0x3ae4c0u: goto label_3ae4c0;
        case 0x3ae4c4u: goto label_3ae4c4;
        case 0x3ae4c8u: goto label_3ae4c8;
        case 0x3ae4ccu: goto label_3ae4cc;
        case 0x3ae4d0u: goto label_3ae4d0;
        case 0x3ae4d4u: goto label_3ae4d4;
        case 0x3ae4d8u: goto label_3ae4d8;
        case 0x3ae4dcu: goto label_3ae4dc;
        case 0x3ae4e0u: goto label_3ae4e0;
        case 0x3ae4e4u: goto label_3ae4e4;
        case 0x3ae4e8u: goto label_3ae4e8;
        case 0x3ae4ecu: goto label_3ae4ec;
        case 0x3ae4f0u: goto label_3ae4f0;
        case 0x3ae4f4u: goto label_3ae4f4;
        case 0x3ae4f8u: goto label_3ae4f8;
        case 0x3ae4fcu: goto label_3ae4fc;
        case 0x3ae500u: goto label_3ae500;
        case 0x3ae504u: goto label_3ae504;
        case 0x3ae508u: goto label_3ae508;
        case 0x3ae50cu: goto label_3ae50c;
        case 0x3ae510u: goto label_3ae510;
        case 0x3ae514u: goto label_3ae514;
        case 0x3ae518u: goto label_3ae518;
        case 0x3ae51cu: goto label_3ae51c;
        case 0x3ae520u: goto label_3ae520;
        case 0x3ae524u: goto label_3ae524;
        case 0x3ae528u: goto label_3ae528;
        case 0x3ae52cu: goto label_3ae52c;
        case 0x3ae530u: goto label_3ae530;
        case 0x3ae534u: goto label_3ae534;
        case 0x3ae538u: goto label_3ae538;
        case 0x3ae53cu: goto label_3ae53c;
        case 0x3ae540u: goto label_3ae540;
        case 0x3ae544u: goto label_3ae544;
        case 0x3ae548u: goto label_3ae548;
        case 0x3ae54cu: goto label_3ae54c;
        case 0x3ae550u: goto label_3ae550;
        case 0x3ae554u: goto label_3ae554;
        case 0x3ae558u: goto label_3ae558;
        case 0x3ae55cu: goto label_3ae55c;
        case 0x3ae560u: goto label_3ae560;
        case 0x3ae564u: goto label_3ae564;
        case 0x3ae568u: goto label_3ae568;
        case 0x3ae56cu: goto label_3ae56c;
        case 0x3ae570u: goto label_3ae570;
        case 0x3ae574u: goto label_3ae574;
        case 0x3ae578u: goto label_3ae578;
        case 0x3ae57cu: goto label_3ae57c;
        case 0x3ae580u: goto label_3ae580;
        case 0x3ae584u: goto label_3ae584;
        case 0x3ae588u: goto label_3ae588;
        case 0x3ae58cu: goto label_3ae58c;
        case 0x3ae590u: goto label_3ae590;
        case 0x3ae594u: goto label_3ae594;
        case 0x3ae598u: goto label_3ae598;
        case 0x3ae59cu: goto label_3ae59c;
        case 0x3ae5a0u: goto label_3ae5a0;
        case 0x3ae5a4u: goto label_3ae5a4;
        case 0x3ae5a8u: goto label_3ae5a8;
        case 0x3ae5acu: goto label_3ae5ac;
        case 0x3ae5b0u: goto label_3ae5b0;
        case 0x3ae5b4u: goto label_3ae5b4;
        case 0x3ae5b8u: goto label_3ae5b8;
        case 0x3ae5bcu: goto label_3ae5bc;
        case 0x3ae5c0u: goto label_3ae5c0;
        case 0x3ae5c4u: goto label_3ae5c4;
        case 0x3ae5c8u: goto label_3ae5c8;
        case 0x3ae5ccu: goto label_3ae5cc;
        case 0x3ae5d0u: goto label_3ae5d0;
        case 0x3ae5d4u: goto label_3ae5d4;
        case 0x3ae5d8u: goto label_3ae5d8;
        case 0x3ae5dcu: goto label_3ae5dc;
        case 0x3ae5e0u: goto label_3ae5e0;
        case 0x3ae5e4u: goto label_3ae5e4;
        case 0x3ae5e8u: goto label_3ae5e8;
        case 0x3ae5ecu: goto label_3ae5ec;
        case 0x3ae5f0u: goto label_3ae5f0;
        case 0x3ae5f4u: goto label_3ae5f4;
        case 0x3ae5f8u: goto label_3ae5f8;
        case 0x3ae5fcu: goto label_3ae5fc;
        case 0x3ae600u: goto label_3ae600;
        case 0x3ae604u: goto label_3ae604;
        case 0x3ae608u: goto label_3ae608;
        case 0x3ae60cu: goto label_3ae60c;
        case 0x3ae610u: goto label_3ae610;
        case 0x3ae614u: goto label_3ae614;
        case 0x3ae618u: goto label_3ae618;
        case 0x3ae61cu: goto label_3ae61c;
        case 0x3ae620u: goto label_3ae620;
        case 0x3ae624u: goto label_3ae624;
        case 0x3ae628u: goto label_3ae628;
        case 0x3ae62cu: goto label_3ae62c;
        case 0x3ae630u: goto label_3ae630;
        case 0x3ae634u: goto label_3ae634;
        case 0x3ae638u: goto label_3ae638;
        case 0x3ae63cu: goto label_3ae63c;
        case 0x3ae640u: goto label_3ae640;
        case 0x3ae644u: goto label_3ae644;
        case 0x3ae648u: goto label_3ae648;
        case 0x3ae64cu: goto label_3ae64c;
        case 0x3ae650u: goto label_3ae650;
        case 0x3ae654u: goto label_3ae654;
        case 0x3ae658u: goto label_3ae658;
        case 0x3ae65cu: goto label_3ae65c;
        case 0x3ae660u: goto label_3ae660;
        case 0x3ae664u: goto label_3ae664;
        case 0x3ae668u: goto label_3ae668;
        case 0x3ae66cu: goto label_3ae66c;
        case 0x3ae670u: goto label_3ae670;
        case 0x3ae674u: goto label_3ae674;
        case 0x3ae678u: goto label_3ae678;
        case 0x3ae67cu: goto label_3ae67c;
        case 0x3ae680u: goto label_3ae680;
        case 0x3ae684u: goto label_3ae684;
        case 0x3ae688u: goto label_3ae688;
        case 0x3ae68cu: goto label_3ae68c;
        case 0x3ae690u: goto label_3ae690;
        case 0x3ae694u: goto label_3ae694;
        case 0x3ae698u: goto label_3ae698;
        case 0x3ae69cu: goto label_3ae69c;
        case 0x3ae6a0u: goto label_3ae6a0;
        case 0x3ae6a4u: goto label_3ae6a4;
        case 0x3ae6a8u: goto label_3ae6a8;
        case 0x3ae6acu: goto label_3ae6ac;
        case 0x3ae6b0u: goto label_3ae6b0;
        case 0x3ae6b4u: goto label_3ae6b4;
        case 0x3ae6b8u: goto label_3ae6b8;
        case 0x3ae6bcu: goto label_3ae6bc;
        case 0x3ae6c0u: goto label_3ae6c0;
        case 0x3ae6c4u: goto label_3ae6c4;
        case 0x3ae6c8u: goto label_3ae6c8;
        case 0x3ae6ccu: goto label_3ae6cc;
        case 0x3ae6d0u: goto label_3ae6d0;
        case 0x3ae6d4u: goto label_3ae6d4;
        case 0x3ae6d8u: goto label_3ae6d8;
        case 0x3ae6dcu: goto label_3ae6dc;
        case 0x3ae6e0u: goto label_3ae6e0;
        case 0x3ae6e4u: goto label_3ae6e4;
        case 0x3ae6e8u: goto label_3ae6e8;
        case 0x3ae6ecu: goto label_3ae6ec;
        case 0x3ae6f0u: goto label_3ae6f0;
        case 0x3ae6f4u: goto label_3ae6f4;
        case 0x3ae6f8u: goto label_3ae6f8;
        case 0x3ae6fcu: goto label_3ae6fc;
        case 0x3ae700u: goto label_3ae700;
        case 0x3ae704u: goto label_3ae704;
        case 0x3ae708u: goto label_3ae708;
        case 0x3ae70cu: goto label_3ae70c;
        case 0x3ae710u: goto label_3ae710;
        case 0x3ae714u: goto label_3ae714;
        case 0x3ae718u: goto label_3ae718;
        case 0x3ae71cu: goto label_3ae71c;
        case 0x3ae720u: goto label_3ae720;
        case 0x3ae724u: goto label_3ae724;
        case 0x3ae728u: goto label_3ae728;
        case 0x3ae72cu: goto label_3ae72c;
        case 0x3ae730u: goto label_3ae730;
        case 0x3ae734u: goto label_3ae734;
        case 0x3ae738u: goto label_3ae738;
        case 0x3ae73cu: goto label_3ae73c;
        case 0x3ae740u: goto label_3ae740;
        case 0x3ae744u: goto label_3ae744;
        case 0x3ae748u: goto label_3ae748;
        case 0x3ae74cu: goto label_3ae74c;
        case 0x3ae750u: goto label_3ae750;
        case 0x3ae754u: goto label_3ae754;
        case 0x3ae758u: goto label_3ae758;
        case 0x3ae75cu: goto label_3ae75c;
        case 0x3ae760u: goto label_3ae760;
        case 0x3ae764u: goto label_3ae764;
        case 0x3ae768u: goto label_3ae768;
        case 0x3ae76cu: goto label_3ae76c;
        case 0x3ae770u: goto label_3ae770;
        case 0x3ae774u: goto label_3ae774;
        case 0x3ae778u: goto label_3ae778;
        case 0x3ae77cu: goto label_3ae77c;
        case 0x3ae780u: goto label_3ae780;
        case 0x3ae784u: goto label_3ae784;
        case 0x3ae788u: goto label_3ae788;
        case 0x3ae78cu: goto label_3ae78c;
        case 0x3ae790u: goto label_3ae790;
        case 0x3ae794u: goto label_3ae794;
        case 0x3ae798u: goto label_3ae798;
        case 0x3ae79cu: goto label_3ae79c;
        case 0x3ae7a0u: goto label_3ae7a0;
        case 0x3ae7a4u: goto label_3ae7a4;
        case 0x3ae7a8u: goto label_3ae7a8;
        case 0x3ae7acu: goto label_3ae7ac;
        case 0x3ae7b0u: goto label_3ae7b0;
        case 0x3ae7b4u: goto label_3ae7b4;
        case 0x3ae7b8u: goto label_3ae7b8;
        case 0x3ae7bcu: goto label_3ae7bc;
        case 0x3ae7c0u: goto label_3ae7c0;
        case 0x3ae7c4u: goto label_3ae7c4;
        case 0x3ae7c8u: goto label_3ae7c8;
        case 0x3ae7ccu: goto label_3ae7cc;
        case 0x3ae7d0u: goto label_3ae7d0;
        case 0x3ae7d4u: goto label_3ae7d4;
        case 0x3ae7d8u: goto label_3ae7d8;
        case 0x3ae7dcu: goto label_3ae7dc;
        case 0x3ae7e0u: goto label_3ae7e0;
        case 0x3ae7e4u: goto label_3ae7e4;
        case 0x3ae7e8u: goto label_3ae7e8;
        case 0x3ae7ecu: goto label_3ae7ec;
        case 0x3ae7f0u: goto label_3ae7f0;
        case 0x3ae7f4u: goto label_3ae7f4;
        case 0x3ae7f8u: goto label_3ae7f8;
        case 0x3ae7fcu: goto label_3ae7fc;
        case 0x3ae800u: goto label_3ae800;
        case 0x3ae804u: goto label_3ae804;
        case 0x3ae808u: goto label_3ae808;
        case 0x3ae80cu: goto label_3ae80c;
        case 0x3ae810u: goto label_3ae810;
        case 0x3ae814u: goto label_3ae814;
        case 0x3ae818u: goto label_3ae818;
        case 0x3ae81cu: goto label_3ae81c;
        case 0x3ae820u: goto label_3ae820;
        case 0x3ae824u: goto label_3ae824;
        case 0x3ae828u: goto label_3ae828;
        case 0x3ae82cu: goto label_3ae82c;
        case 0x3ae830u: goto label_3ae830;
        case 0x3ae834u: goto label_3ae834;
        case 0x3ae838u: goto label_3ae838;
        case 0x3ae83cu: goto label_3ae83c;
        case 0x3ae840u: goto label_3ae840;
        case 0x3ae844u: goto label_3ae844;
        case 0x3ae848u: goto label_3ae848;
        case 0x3ae84cu: goto label_3ae84c;
        case 0x3ae850u: goto label_3ae850;
        case 0x3ae854u: goto label_3ae854;
        case 0x3ae858u: goto label_3ae858;
        case 0x3ae85cu: goto label_3ae85c;
        case 0x3ae860u: goto label_3ae860;
        case 0x3ae864u: goto label_3ae864;
        case 0x3ae868u: goto label_3ae868;
        case 0x3ae86cu: goto label_3ae86c;
        case 0x3ae870u: goto label_3ae870;
        case 0x3ae874u: goto label_3ae874;
        case 0x3ae878u: goto label_3ae878;
        case 0x3ae87cu: goto label_3ae87c;
        case 0x3ae880u: goto label_3ae880;
        case 0x3ae884u: goto label_3ae884;
        case 0x3ae888u: goto label_3ae888;
        case 0x3ae88cu: goto label_3ae88c;
        case 0x3ae890u: goto label_3ae890;
        case 0x3ae894u: goto label_3ae894;
        case 0x3ae898u: goto label_3ae898;
        case 0x3ae89cu: goto label_3ae89c;
        case 0x3ae8a0u: goto label_3ae8a0;
        case 0x3ae8a4u: goto label_3ae8a4;
        case 0x3ae8a8u: goto label_3ae8a8;
        case 0x3ae8acu: goto label_3ae8ac;
        case 0x3ae8b0u: goto label_3ae8b0;
        case 0x3ae8b4u: goto label_3ae8b4;
        case 0x3ae8b8u: goto label_3ae8b8;
        case 0x3ae8bcu: goto label_3ae8bc;
        case 0x3ae8c0u: goto label_3ae8c0;
        case 0x3ae8c4u: goto label_3ae8c4;
        case 0x3ae8c8u: goto label_3ae8c8;
        case 0x3ae8ccu: goto label_3ae8cc;
        case 0x3ae8d0u: goto label_3ae8d0;
        case 0x3ae8d4u: goto label_3ae8d4;
        case 0x3ae8d8u: goto label_3ae8d8;
        case 0x3ae8dcu: goto label_3ae8dc;
        case 0x3ae8e0u: goto label_3ae8e0;
        case 0x3ae8e4u: goto label_3ae8e4;
        case 0x3ae8e8u: goto label_3ae8e8;
        case 0x3ae8ecu: goto label_3ae8ec;
        case 0x3ae8f0u: goto label_3ae8f0;
        case 0x3ae8f4u: goto label_3ae8f4;
        case 0x3ae8f8u: goto label_3ae8f8;
        case 0x3ae8fcu: goto label_3ae8fc;
        case 0x3ae900u: goto label_3ae900;
        case 0x3ae904u: goto label_3ae904;
        case 0x3ae908u: goto label_3ae908;
        case 0x3ae90cu: goto label_3ae90c;
        case 0x3ae910u: goto label_3ae910;
        case 0x3ae914u: goto label_3ae914;
        case 0x3ae918u: goto label_3ae918;
        case 0x3ae91cu: goto label_3ae91c;
        case 0x3ae920u: goto label_3ae920;
        case 0x3ae924u: goto label_3ae924;
        case 0x3ae928u: goto label_3ae928;
        case 0x3ae92cu: goto label_3ae92c;
        case 0x3ae930u: goto label_3ae930;
        case 0x3ae934u: goto label_3ae934;
        case 0x3ae938u: goto label_3ae938;
        case 0x3ae93cu: goto label_3ae93c;
        case 0x3ae940u: goto label_3ae940;
        case 0x3ae944u: goto label_3ae944;
        case 0x3ae948u: goto label_3ae948;
        case 0x3ae94cu: goto label_3ae94c;
        case 0x3ae950u: goto label_3ae950;
        case 0x3ae954u: goto label_3ae954;
        case 0x3ae958u: goto label_3ae958;
        case 0x3ae95cu: goto label_3ae95c;
        case 0x3ae960u: goto label_3ae960;
        case 0x3ae964u: goto label_3ae964;
        case 0x3ae968u: goto label_3ae968;
        case 0x3ae96cu: goto label_3ae96c;
        case 0x3ae970u: goto label_3ae970;
        case 0x3ae974u: goto label_3ae974;
        case 0x3ae978u: goto label_3ae978;
        case 0x3ae97cu: goto label_3ae97c;
        case 0x3ae980u: goto label_3ae980;
        case 0x3ae984u: goto label_3ae984;
        case 0x3ae988u: goto label_3ae988;
        case 0x3ae98cu: goto label_3ae98c;
        case 0x3ae990u: goto label_3ae990;
        case 0x3ae994u: goto label_3ae994;
        case 0x3ae998u: goto label_3ae998;
        case 0x3ae99cu: goto label_3ae99c;
        case 0x3ae9a0u: goto label_3ae9a0;
        case 0x3ae9a4u: goto label_3ae9a4;
        case 0x3ae9a8u: goto label_3ae9a8;
        case 0x3ae9acu: goto label_3ae9ac;
        case 0x3ae9b0u: goto label_3ae9b0;
        case 0x3ae9b4u: goto label_3ae9b4;
        case 0x3ae9b8u: goto label_3ae9b8;
        case 0x3ae9bcu: goto label_3ae9bc;
        case 0x3ae9c0u: goto label_3ae9c0;
        case 0x3ae9c4u: goto label_3ae9c4;
        case 0x3ae9c8u: goto label_3ae9c8;
        case 0x3ae9ccu: goto label_3ae9cc;
        case 0x3ae9d0u: goto label_3ae9d0;
        case 0x3ae9d4u: goto label_3ae9d4;
        case 0x3ae9d8u: goto label_3ae9d8;
        case 0x3ae9dcu: goto label_3ae9dc;
        case 0x3ae9e0u: goto label_3ae9e0;
        case 0x3ae9e4u: goto label_3ae9e4;
        case 0x3ae9e8u: goto label_3ae9e8;
        case 0x3ae9ecu: goto label_3ae9ec;
        case 0x3ae9f0u: goto label_3ae9f0;
        case 0x3ae9f4u: goto label_3ae9f4;
        case 0x3ae9f8u: goto label_3ae9f8;
        case 0x3ae9fcu: goto label_3ae9fc;
        case 0x3aea00u: goto label_3aea00;
        case 0x3aea04u: goto label_3aea04;
        case 0x3aea08u: goto label_3aea08;
        case 0x3aea0cu: goto label_3aea0c;
        case 0x3aea10u: goto label_3aea10;
        case 0x3aea14u: goto label_3aea14;
        case 0x3aea18u: goto label_3aea18;
        case 0x3aea1cu: goto label_3aea1c;
        case 0x3aea20u: goto label_3aea20;
        case 0x3aea24u: goto label_3aea24;
        case 0x3aea28u: goto label_3aea28;
        case 0x3aea2cu: goto label_3aea2c;
        case 0x3aea30u: goto label_3aea30;
        case 0x3aea34u: goto label_3aea34;
        case 0x3aea38u: goto label_3aea38;
        case 0x3aea3cu: goto label_3aea3c;
        case 0x3aea40u: goto label_3aea40;
        case 0x3aea44u: goto label_3aea44;
        case 0x3aea48u: goto label_3aea48;
        case 0x3aea4cu: goto label_3aea4c;
        case 0x3aea50u: goto label_3aea50;
        case 0x3aea54u: goto label_3aea54;
        case 0x3aea58u: goto label_3aea58;
        case 0x3aea5cu: goto label_3aea5c;
        case 0x3aea60u: goto label_3aea60;
        case 0x3aea64u: goto label_3aea64;
        case 0x3aea68u: goto label_3aea68;
        case 0x3aea6cu: goto label_3aea6c;
        case 0x3aea70u: goto label_3aea70;
        case 0x3aea74u: goto label_3aea74;
        case 0x3aea78u: goto label_3aea78;
        case 0x3aea7cu: goto label_3aea7c;
        case 0x3aea80u: goto label_3aea80;
        case 0x3aea84u: goto label_3aea84;
        case 0x3aea88u: goto label_3aea88;
        case 0x3aea8cu: goto label_3aea8c;
        case 0x3aea90u: goto label_3aea90;
        case 0x3aea94u: goto label_3aea94;
        case 0x3aea98u: goto label_3aea98;
        case 0x3aea9cu: goto label_3aea9c;
        case 0x3aeaa0u: goto label_3aeaa0;
        case 0x3aeaa4u: goto label_3aeaa4;
        case 0x3aeaa8u: goto label_3aeaa8;
        case 0x3aeaacu: goto label_3aeaac;
        case 0x3aeab0u: goto label_3aeab0;
        case 0x3aeab4u: goto label_3aeab4;
        case 0x3aeab8u: goto label_3aeab8;
        case 0x3aeabcu: goto label_3aeabc;
        case 0x3aeac0u: goto label_3aeac0;
        case 0x3aeac4u: goto label_3aeac4;
        case 0x3aeac8u: goto label_3aeac8;
        case 0x3aeaccu: goto label_3aeacc;
        case 0x3aead0u: goto label_3aead0;
        case 0x3aead4u: goto label_3aead4;
        case 0x3aead8u: goto label_3aead8;
        case 0x3aeadcu: goto label_3aeadc;
        case 0x3aeae0u: goto label_3aeae0;
        case 0x3aeae4u: goto label_3aeae4;
        case 0x3aeae8u: goto label_3aeae8;
        case 0x3aeaecu: goto label_3aeaec;
        case 0x3aeaf0u: goto label_3aeaf0;
        case 0x3aeaf4u: goto label_3aeaf4;
        case 0x3aeaf8u: goto label_3aeaf8;
        case 0x3aeafcu: goto label_3aeafc;
        case 0x3aeb00u: goto label_3aeb00;
        case 0x3aeb04u: goto label_3aeb04;
        case 0x3aeb08u: goto label_3aeb08;
        case 0x3aeb0cu: goto label_3aeb0c;
        case 0x3aeb10u: goto label_3aeb10;
        case 0x3aeb14u: goto label_3aeb14;
        case 0x3aeb18u: goto label_3aeb18;
        case 0x3aeb1cu: goto label_3aeb1c;
        case 0x3aeb20u: goto label_3aeb20;
        case 0x3aeb24u: goto label_3aeb24;
        case 0x3aeb28u: goto label_3aeb28;
        case 0x3aeb2cu: goto label_3aeb2c;
        case 0x3aeb30u: goto label_3aeb30;
        case 0x3aeb34u: goto label_3aeb34;
        case 0x3aeb38u: goto label_3aeb38;
        case 0x3aeb3cu: goto label_3aeb3c;
        case 0x3aeb40u: goto label_3aeb40;
        case 0x3aeb44u: goto label_3aeb44;
        case 0x3aeb48u: goto label_3aeb48;
        case 0x3aeb4cu: goto label_3aeb4c;
        case 0x3aeb50u: goto label_3aeb50;
        case 0x3aeb54u: goto label_3aeb54;
        case 0x3aeb58u: goto label_3aeb58;
        case 0x3aeb5cu: goto label_3aeb5c;
        case 0x3aeb60u: goto label_3aeb60;
        case 0x3aeb64u: goto label_3aeb64;
        case 0x3aeb68u: goto label_3aeb68;
        case 0x3aeb6cu: goto label_3aeb6c;
        case 0x3aeb70u: goto label_3aeb70;
        case 0x3aeb74u: goto label_3aeb74;
        case 0x3aeb78u: goto label_3aeb78;
        case 0x3aeb7cu: goto label_3aeb7c;
        case 0x3aeb80u: goto label_3aeb80;
        case 0x3aeb84u: goto label_3aeb84;
        case 0x3aeb88u: goto label_3aeb88;
        case 0x3aeb8cu: goto label_3aeb8c;
        case 0x3aeb90u: goto label_3aeb90;
        case 0x3aeb94u: goto label_3aeb94;
        case 0x3aeb98u: goto label_3aeb98;
        case 0x3aeb9cu: goto label_3aeb9c;
        case 0x3aeba0u: goto label_3aeba0;
        case 0x3aeba4u: goto label_3aeba4;
        case 0x3aeba8u: goto label_3aeba8;
        case 0x3aebacu: goto label_3aebac;
        case 0x3aebb0u: goto label_3aebb0;
        case 0x3aebb4u: goto label_3aebb4;
        case 0x3aebb8u: goto label_3aebb8;
        case 0x3aebbcu: goto label_3aebbc;
        case 0x3aebc0u: goto label_3aebc0;
        case 0x3aebc4u: goto label_3aebc4;
        case 0x3aebc8u: goto label_3aebc8;
        case 0x3aebccu: goto label_3aebcc;
        case 0x3aebd0u: goto label_3aebd0;
        case 0x3aebd4u: goto label_3aebd4;
        case 0x3aebd8u: goto label_3aebd8;
        case 0x3aebdcu: goto label_3aebdc;
        case 0x3aebe0u: goto label_3aebe0;
        case 0x3aebe4u: goto label_3aebe4;
        case 0x3aebe8u: goto label_3aebe8;
        case 0x3aebecu: goto label_3aebec;
        case 0x3aebf0u: goto label_3aebf0;
        case 0x3aebf4u: goto label_3aebf4;
        case 0x3aebf8u: goto label_3aebf8;
        case 0x3aebfcu: goto label_3aebfc;
        case 0x3aec00u: goto label_3aec00;
        case 0x3aec04u: goto label_3aec04;
        case 0x3aec08u: goto label_3aec08;
        case 0x3aec0cu: goto label_3aec0c;
        case 0x3aec10u: goto label_3aec10;
        case 0x3aec14u: goto label_3aec14;
        case 0x3aec18u: goto label_3aec18;
        case 0x3aec1cu: goto label_3aec1c;
        case 0x3aec20u: goto label_3aec20;
        case 0x3aec24u: goto label_3aec24;
        case 0x3aec28u: goto label_3aec28;
        case 0x3aec2cu: goto label_3aec2c;
        case 0x3aec30u: goto label_3aec30;
        case 0x3aec34u: goto label_3aec34;
        case 0x3aec38u: goto label_3aec38;
        case 0x3aec3cu: goto label_3aec3c;
        case 0x3aec40u: goto label_3aec40;
        case 0x3aec44u: goto label_3aec44;
        case 0x3aec48u: goto label_3aec48;
        case 0x3aec4cu: goto label_3aec4c;
        case 0x3aec50u: goto label_3aec50;
        case 0x3aec54u: goto label_3aec54;
        case 0x3aec58u: goto label_3aec58;
        case 0x3aec5cu: goto label_3aec5c;
        case 0x3aec60u: goto label_3aec60;
        case 0x3aec64u: goto label_3aec64;
        case 0x3aec68u: goto label_3aec68;
        case 0x3aec6cu: goto label_3aec6c;
        case 0x3aec70u: goto label_3aec70;
        case 0x3aec74u: goto label_3aec74;
        case 0x3aec78u: goto label_3aec78;
        case 0x3aec7cu: goto label_3aec7c;
        case 0x3aec80u: goto label_3aec80;
        case 0x3aec84u: goto label_3aec84;
        case 0x3aec88u: goto label_3aec88;
        case 0x3aec8cu: goto label_3aec8c;
        case 0x3aec90u: goto label_3aec90;
        case 0x3aec94u: goto label_3aec94;
        case 0x3aec98u: goto label_3aec98;
        case 0x3aec9cu: goto label_3aec9c;
        case 0x3aeca0u: goto label_3aeca0;
        case 0x3aeca4u: goto label_3aeca4;
        case 0x3aeca8u: goto label_3aeca8;
        case 0x3aecacu: goto label_3aecac;
        case 0x3aecb0u: goto label_3aecb0;
        case 0x3aecb4u: goto label_3aecb4;
        case 0x3aecb8u: goto label_3aecb8;
        case 0x3aecbcu: goto label_3aecbc;
        case 0x3aecc0u: goto label_3aecc0;
        case 0x3aecc4u: goto label_3aecc4;
        case 0x3aecc8u: goto label_3aecc8;
        case 0x3aecccu: goto label_3aeccc;
        case 0x3aecd0u: goto label_3aecd0;
        case 0x3aecd4u: goto label_3aecd4;
        case 0x3aecd8u: goto label_3aecd8;
        case 0x3aecdcu: goto label_3aecdc;
        case 0x3aece0u: goto label_3aece0;
        case 0x3aece4u: goto label_3aece4;
        case 0x3aece8u: goto label_3aece8;
        case 0x3aececu: goto label_3aecec;
        case 0x3aecf0u: goto label_3aecf0;
        case 0x3aecf4u: goto label_3aecf4;
        case 0x3aecf8u: goto label_3aecf8;
        case 0x3aecfcu: goto label_3aecfc;
        case 0x3aed00u: goto label_3aed00;
        case 0x3aed04u: goto label_3aed04;
        case 0x3aed08u: goto label_3aed08;
        case 0x3aed0cu: goto label_3aed0c;
        case 0x3aed10u: goto label_3aed10;
        case 0x3aed14u: goto label_3aed14;
        case 0x3aed18u: goto label_3aed18;
        case 0x3aed1cu: goto label_3aed1c;
        case 0x3aed20u: goto label_3aed20;
        case 0x3aed24u: goto label_3aed24;
        case 0x3aed28u: goto label_3aed28;
        case 0x3aed2cu: goto label_3aed2c;
        case 0x3aed30u: goto label_3aed30;
        case 0x3aed34u: goto label_3aed34;
        case 0x3aed38u: goto label_3aed38;
        case 0x3aed3cu: goto label_3aed3c;
        case 0x3aed40u: goto label_3aed40;
        case 0x3aed44u: goto label_3aed44;
        case 0x3aed48u: goto label_3aed48;
        case 0x3aed4cu: goto label_3aed4c;
        case 0x3aed50u: goto label_3aed50;
        case 0x3aed54u: goto label_3aed54;
        case 0x3aed58u: goto label_3aed58;
        case 0x3aed5cu: goto label_3aed5c;
        case 0x3aed60u: goto label_3aed60;
        case 0x3aed64u: goto label_3aed64;
        case 0x3aed68u: goto label_3aed68;
        case 0x3aed6cu: goto label_3aed6c;
        case 0x3aed70u: goto label_3aed70;
        case 0x3aed74u: goto label_3aed74;
        case 0x3aed78u: goto label_3aed78;
        case 0x3aed7cu: goto label_3aed7c;
        case 0x3aed80u: goto label_3aed80;
        case 0x3aed84u: goto label_3aed84;
        case 0x3aed88u: goto label_3aed88;
        case 0x3aed8cu: goto label_3aed8c;
        case 0x3aed90u: goto label_3aed90;
        case 0x3aed94u: goto label_3aed94;
        case 0x3aed98u: goto label_3aed98;
        case 0x3aed9cu: goto label_3aed9c;
        case 0x3aeda0u: goto label_3aeda0;
        case 0x3aeda4u: goto label_3aeda4;
        case 0x3aeda8u: goto label_3aeda8;
        case 0x3aedacu: goto label_3aedac;
        case 0x3aedb0u: goto label_3aedb0;
        case 0x3aedb4u: goto label_3aedb4;
        case 0x3aedb8u: goto label_3aedb8;
        case 0x3aedbcu: goto label_3aedbc;
        case 0x3aedc0u: goto label_3aedc0;
        case 0x3aedc4u: goto label_3aedc4;
        case 0x3aedc8u: goto label_3aedc8;
        case 0x3aedccu: goto label_3aedcc;
        default: break;
    }

    ctx->pc = 0x3ace40u;

label_3ace40:
    // 0x3ace40: 0x6b736944  ldl         $s3, 0x6944($k1)
    ctx->pc = 0x3ace40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_3ace44:
    // 0x3ace44: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x3ace44u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
label_3ace48:
    // 0x3ace48: 0x6e652079  ldr         $a1, 0x2079($s3)
    ctx->pc = 0x3ace48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3ace4c:
    // 0x3ace4c: 0xa646564  j           func_9919590
label_3ace50:
    if (ctx->pc == 0x3ACE50u) {
        ctx->pc = 0x3ACE54u;
        goto label_3ace54;
    }
    ctx->pc = 0x3ACE4Cu;
    ctx->pc = 0x9919590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9919590u, 0x3ACE4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACE54u;
label_3ace54:
    // 0x3ace54: 0x0  nop
    ctx->pc = 0x3ace54u;
    // NOP
label_3ace58:
    // 0x3ace58: 0x74617473  .word       0x74617473                   # INVALID     $v1, $at, 0x7473 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ace58u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACE58 raw=0x74617473");
label_3ace5c:
    // 0x3ace5c: 0x63207375  daddi       $zero, $t9, 0x7375
    ctx->pc = 0x3ace5cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29557; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_3ace60:
    // 0x3ace60: 0x656c6c61  daddiu      $t4, $t3, 0x6C61
    ctx->pc = 0x3ace60u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27745);
label_3ace64:
    // 0x3ace64: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ace64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3ace68:
    // 0x3ace68: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3ace68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_3ace6c:
    // 0x3ace6c: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3ace6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_3ace70:
    // 0x3ace70: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3ace70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3ace74:
    // 0x3ace74: 0x6f6c4320  ldr         $t4, 0x4320($k1)
    ctx->pc = 0x3ace74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3ace78:
    // 0x3ace78: 0x72206b63  .word       0x72206B63                   # INVALID     $s1, $zero, 0x6B63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ace78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x3ACE78 raw=0x72206B63");
label_3ace7c:
    // 0x3ace7c: 0x20646165  addi        $a0, $v1, 0x6165
    ctx->pc = 0x3ace7cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_3ace80:
    // 0x3ace80: 0xa31  tgeu        $zero, $zero, 40
    ctx->pc = 0x3ace80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ace84:
    // 0x3ace84: 0x0  nop
    ctx->pc = 0x3ace84u;
    // NOP
label_3ace88:
    // 0x3ace88: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3ace88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_3ace8c:
    // 0x3ace8c: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3ace8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_3ace90:
    // 0x3ace90: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3ace90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3ace94:
    // 0x3ace94: 0x6f6c4320  ldr         $t4, 0x4320($k1)
    ctx->pc = 0x3ace94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3ace98:
    // 0x3ace98: 0x72206b63  .word       0x72206B63                   # INVALID     $s1, $zero, 0x6B63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ace98u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x3ACE98 raw=0x72206B63");
label_3ace9c:
    // 0x3ace9c: 0x20646165  addi        $a0, $v1, 0x6165
    ctx->pc = 0x3ace9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_3acea0:
    // 0x3acea0: 0xa32  tlt         $zero, $zero, 40
    ctx->pc = 0x3acea0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3acea4:
    // 0x3acea4: 0x0  nop
    ctx->pc = 0x3acea4u;
    // NOP
label_3acea8:
    // 0x3acea8: 0x6c707041  ldr         $s0, 0x7041($v1)
    ctx->pc = 0x3acea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28737); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_3aceac:
    // 0x3aceac: 0x5f4e5f79  .word       0x5F4E5F79                   # bgtzl       $k0, . + 4 + (0x5F79 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_3aceb0:
    if (ctx->pc == 0x3ACEB0u) {
        ctx->pc = 0x3ACEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEACu;
        // 0x3aceb0: 0x20646d43  addi        $a0, $v1, 0x6D43 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACEB4u;
        goto label_3aceb4;
    }
    ctx->pc = 0x3ACEACu;
    {
        const bool branch_taken_0x3aceac = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x3aceac) {
            ctx->pc = 0x3ACEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACEACu;
            // 0x3aceb0: 0x20646d43  addi        $a0, $v1, 0x6D43 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4C94u;
            return;
        }
    }
    ctx->pc = 0x3ACEB4u;
label_3aceb4:
    // 0x3aceb4: 0xa30  tge         $zero, $zero, 40
    ctx->pc = 0x3aceb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3aceb8:
    // 0x3aceb8: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3aceb8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_3acebc:
    // 0x3acebc: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3acebcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_3acec0:
    // 0x3acec0: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x3acec0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
label_3acec4:
    // 0x3acec4: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acec4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3acec8:
    // 0x3acec8: 0x63204e20  daddi       $zero, $t9, 0x4E20
    ctx->pc = 0x3acec8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)20000; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_3acecc:
    // 0x3acecc: 0xa646d  .word       0x000A646D                   # daddu       $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aceccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 10));
label_3aced0:
    // 0x3aced0: 0x6c707041  ldr         $s0, 0x7041($v1)
    ctx->pc = 0x3aced0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28737); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_3aced4:
    // 0x3aced4: 0x5f4e5f79  .word       0x5F4E5F79                   # bgtzl       $k0, . + 4 + (0x5F79 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_3aced8:
    if (ctx->pc == 0x3ACED8u) {
        ctx->pc = 0x3ACED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACED4u;
        // 0x3aced8: 0x20646d43  addi        $a0, $v1, 0x6D43 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACEDCu;
        goto label_3acedc;
    }
    ctx->pc = 0x3ACED4u;
    {
        const bool branch_taken_0x3aced4 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x3aced4) {
            ctx->pc = 0x3ACED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACED4u;
            // 0x3aced8: 0x20646d43  addi        $a0, $v1, 0x6D43 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4CBCu;
            return;
        }
    }
    ctx->pc = 0x3ACEDCu;
label_3acedc:
    // 0x3acedc: 0xa31  tgeu        $zero, $zero, 40
    ctx->pc = 0x3acedcu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3acee0:
    // 0x3acee0: 0x6c707041  ldr         $s0, 0x7041($v1)
    ctx->pc = 0x3acee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28737); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_3acee4:
    // 0x3acee4: 0x5f4e5f79  .word       0x5F4E5F79                   # bgtzl       $k0, . + 4 + (0x5F79 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_3acee8:
    if (ctx->pc == 0x3ACEE8u) {
        ctx->pc = 0x3ACEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEE4u;
        // 0x3acee8: 0x20646d43  addi        $a0, $v1, 0x6D43 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACEECu;
        goto label_3aceec;
    }
    ctx->pc = 0x3ACEE4u;
    {
        const bool branch_taken_0x3acee4 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x3acee4) {
            ctx->pc = 0x3ACEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACEE4u;
            // 0x3acee8: 0x20646d43  addi        $a0, $v1, 0x6D43 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4CCCu;
            return;
        }
    }
    ctx->pc = 0x3ACEECu;
label_3aceec:
    // 0x3aceec: 0xa32  tlt         $zero, $zero, 40
    ctx->pc = 0x3aceecu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3acef0:
    // 0x3acef0: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acef0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACEF0 raw=0x43656373");
label_3acef4:
    // 0x3acef4: 0x52745364  beql        $s3, $s4, . + 4 + (0x5364 << 2)
label_3acef8:
    if (ctx->pc == 0x3ACEF8u) {
        ctx->pc = 0x3ACEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEF4u;
        // 0x3acef8: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACEFCu;
        goto label_3acefc;
    }
    ctx->pc = 0x3ACEF4u;
    {
        const bool branch_taken_0x3acef4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x3acef4) {
            ctx->pc = 0x3ACEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACEF4u;
            // 0x3acef8: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1C88u;
            return;
        }
    }
    ctx->pc = 0x3ACEFCu;
label_3acefc:
    // 0x3acefc: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3acefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3acf00:
    // 0x3acf00: 0x61657220  daddi       $a1, $t3, 0x7220
    ctx->pc = 0x3acf00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29216; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_3acf04:
    // 0x3acf04: 0x69732064  ldl         $s3, 0x2064($t3)
    ctx->pc = 0x3acf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_3acf08:
    // 0x3acf08: 0x203d657a  addi        $sp, $at, 0x657A
    ctx->pc = 0x3acf08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25978, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_3acf0c:
    // 0x3acf0c: 0x6d206425  ldr         $zero, 0x6425($t1)
    ctx->pc = 0x3acf0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25637); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3acf10:
    // 0x3acf10: 0x3d65646f  .word       0x3D65646F                   # lui         $a1, 0x646F # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acf10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25711 << 16));
label_3acf14:
    // 0x3acf14: 0xa642520  j           func_9909480
label_3acf18:
    if (ctx->pc == 0x3ACF18u) {
        ctx->pc = 0x3ACF1Cu;
        goto label_3acf1c;
    }
    ctx->pc = 0x3ACF14u;
    ctx->pc = 0x9909480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9909480u, 0x3ACF14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACF1Cu;
label_3acf1c:
    // 0x3acf1c: 0x0  nop
    ctx->pc = 0x3acf1cu;
    // NOP
label_3acf20:
    // 0x3acf20: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acf20u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACF20 raw=0x43656373");
label_3acf24:
    // 0x3acf24: 0x52745364  beql        $s3, $s4, . + 4 + (0x5364 << 2)
label_3acf28:
    if (ctx->pc == 0x3ACF28u) {
        ctx->pc = 0x3ACF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF24u;
        // 0x3acf28: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACF2Cu;
        goto label_3acf2c;
    }
    ctx->pc = 0x3ACF24u;
    {
        const bool branch_taken_0x3acf24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x3acf24) {
            ctx->pc = 0x3ACF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACF24u;
            // 0x3acf28: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1CB8u;
            return;
        }
    }
    ctx->pc = 0x3ACF2Cu;
label_3acf2c:
    // 0x3acf2c: 0x204b4c42  addi        $t3, $v0, 0x4C42
    ctx->pc = 0x3acf2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19522, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_3acf30:
    // 0x3acf30: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x3acf30u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
label_3acf34:
    // 0x3acf34: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acf34u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3acf38:
    // 0x3acf38: 0x7a69735f  lq          $t1, 0x735F($s3)
    ctx->pc = 0x3acf38u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 29535)));
label_3acf3c:
    // 0x3acf3c: 0x25203d65  addiu       $zero, $t1, 0x3D65
    ctx->pc = 0x3acf3cu;
    // NOP (addiu $zero, ...)
label_3acf40:
    // 0x3acf40: 0x65722064  daddiu      $s2, $t3, 0x2064
    ctx->pc = 0x3acf40u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
label_3acf44:
    // 0x3acf44: 0x735f6461  .word       0x735F6461                   # maddu1      $t4, $k0, $ra # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acf44u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 26) * (uint64_t)GPR_U32(ctx, 31); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3acf48:
    // 0x3acf48: 0x3d657a69  .word       0x3D657A69                   # lui         $a1, 0x7A69 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3acf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31337 << 16));
label_3acf4c:
    // 0x3acf4c: 0x20642520  addi        $a0, $v1, 0x2520
    ctx->pc = 0x3acf4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_3acf50:
    // 0x3acf50: 0x5f716572  .word       0x5F716572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_3acf54:
    if (ctx->pc == 0x3ACF54u) {
        ctx->pc = 0x3ACF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF50u;
        // 0x3acf54: 0x657a6973  daddiu      $k0, $t3, 0x6973 (Delay Slot)
        SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACF58u;
        goto label_3acf58;
    }
    ctx->pc = 0x3ACF50u;
    {
        const bool branch_taken_0x3acf50 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3acf50) {
            ctx->pc = 0x3ACF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACF50u;
            // 0x3acf54: 0x657a6973  daddiu      $k0, $t3, 0x6973 (Delay Slot)
            SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C651Cu;
            return;
        }
    }
    ctx->pc = 0x3ACF58u;
label_3acf58:
    // 0x3acf58: 0x6425203d  daddiu      $a1, $at, 0x203D
    ctx->pc = 0x3acf58u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8253);
label_3acf5c:
    // 0x3acf5c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acf5cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3acf60:
    // 0x3acf60: 0x25783020  addiu       $t8, $t3, 0x3020
    ctx->pc = 0x3acf60u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12320));
label_3acf64:
    // 0x3acf64: 0xa78  dsll        $at, $zero, 9
    ctx->pc = 0x3acf64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 9);
label_3acf68:
    // 0x3acf68: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acf68u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACF68 raw=0x43656373");
label_3acf6c:
    // 0x3acf6c: 0x52745364  beql        $s3, $s4, . + 4 + (0x5364 << 2)
label_3acf70:
    if (ctx->pc == 0x3ACF70u) {
        ctx->pc = 0x3ACF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF6Cu;
        // 0x3acf70: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACF74u;
        goto label_3acf74;
    }
    ctx->pc = 0x3ACF6Cu;
    {
        const bool branch_taken_0x3acf6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x3acf6c) {
            ctx->pc = 0x3ACF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACF6Cu;
            // 0x3acf70: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1D00u;
            return;
        }
    }
    ctx->pc = 0x3ACF74u;
label_3acf74:
    // 0x3acf74: 0x204b4c42  addi        $t3, $v0, 0x4C42
    ctx->pc = 0x3acf74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19522, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_3acf78:
    // 0x3acf78: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x3acf78u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
label_3acf7c:
    // 0x3acf7c: 0x646e4520  daddiu      $t6, $v1, 0x4520
    ctx->pc = 0x3acf7cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)17696);
label_3acf80:
    // 0x3acf80: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acf80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_3acf84:
    // 0x3acf84: 0x0  nop
    ctx->pc = 0x3acf84u;
    // NOP
label_3acf88:
    // 0x3acf88: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acf88u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACF88 raw=0x43656373");
label_3acf8c:
    // 0x3acf8c: 0x50745364  beql        $v1, $s4, . + 4 + (0x5364 << 2)
label_3acf90:
    if (ctx->pc == 0x3ACF90u) {
        ctx->pc = 0x3ACF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF8Cu;
        // 0x3acf90: 0x65737561  daddiu      $s3, $t3, 0x7561 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACF94u;
        goto label_3acf94;
    }
    ctx->pc = 0x3ACF8Cu;
    {
        const bool branch_taken_0x3acf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x3acf8c) {
            ctx->pc = 0x3ACF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACF8Cu;
            // 0x3acf90: 0x65737561  daddiu      $s3, $t3, 0x7561 (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1D20u;
            return;
        }
    }
    ctx->pc = 0x3ACF94u;
label_3acf94:
    // 0x3acf94: 0x6c616320  ldr         $at, 0x6320($v1)
    ctx->pc = 0x3acf94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_3acf98:
    // 0x3acf98: 0xa6c  .word       0x00000A6C                   # dadd        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acf98u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_3acf9c:
    // 0x3acf9c: 0x0  nop
    ctx->pc = 0x3acf9cu;
    // NOP
label_3acfa0:
    // 0x3acfa0: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acfa0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACFA0 raw=0x43656373");
label_3acfa4:
    // 0x3acfa4: 0x52745364  beql        $s3, $s4, . + 4 + (0x5364 << 2)
label_3acfa8:
    if (ctx->pc == 0x3ACFA8u) {
        ctx->pc = 0x3ACFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFA4u;
        // 0x3acfa8: 0x6d757365  ldr         $s5, 0x7365($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACFACu;
        goto label_3acfac;
    }
    ctx->pc = 0x3ACFA4u;
    {
        const bool branch_taken_0x3acfa4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x3acfa4) {
            ctx->pc = 0x3ACFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACFA4u;
            // 0x3acfa8: 0x6d757365  ldr         $s5, 0x7365($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1D38u;
            return;
        }
    }
    ctx->pc = 0x3ACFACu;
label_3acfac:
    // 0x3acfac: 0x61632065  daddi       $v1, $t3, 0x2065
    ctx->pc = 0x3acfacu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_3acfb0:
    // 0x3acfb0: 0xa6c6c  .word       0x000A6C6C                   # dadd        $t5, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acfb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_3acfb4:
    // 0x3acfb4: 0x0  nop
    ctx->pc = 0x3acfb4u;
    // NOP
label_3acfb8:
    // 0x3acfb8: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3acfb8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ACFB8 raw=0x43656373");
label_3acfbc:
    // 0x3acfbc: 0x53745364  beql        $k1, $s4, . + 4 + (0x5364 << 2)
label_3acfc0:
    if (ctx->pc == 0x3ACFC0u) {
        ctx->pc = 0x3ACFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFBCu;
        // 0x3acfc0: 0x20746174  addi        $s4, $v1, 0x6174 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24948, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACFC4u;
        goto label_3acfc4;
    }
    ctx->pc = 0x3ACFBCu;
    {
        const bool branch_taken_0x3acfbc = (GPR_U64(ctx, 27) == GPR_U64(ctx, 20));
        if (branch_taken_0x3acfbc) {
            ctx->pc = 0x3ACFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACFBCu;
            // 0x3acfc0: 0x20746174  addi        $s4, $v1, 0x6174 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24948, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1D50u;
            return;
        }
    }
    ctx->pc = 0x3ACFC4u;
label_3acfc4:
    // 0x3acfc4: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3acfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3acfc8:
    // 0x3acfc8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3acfc8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3acfcc:
    // 0x3acfcc: 0x0  nop
    ctx->pc = 0x3acfccu;
    // NOP
label_3acfd0:
    // 0x3acfd0: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3acfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3acfd4:
    // 0x3acfd4: 0x72646320  .word       0x72646320                   # madd1       $t4, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acfd4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3acfd8:
    // 0x3acfd8: 0x73646165  .word       0x73646165                   # INVALID     $k1, $a0, 0x6165 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acfd8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x3ACFD8 raw=0x73646165");
label_3acfdc:
    // 0x3acfdc: 0x63206d74  daddi       $zero, $t9, 0x6D74
    ctx->pc = 0x3acfdcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28020; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_3acfe0:
    // 0x3acfe0: 0xa6c6c61  j           func_9B1B184
label_3acfe4:
    if (ctx->pc == 0x3ACFE4u) {
        ctx->pc = 0x3ACFE8u;
        goto label_3acfe8;
    }
    ctx->pc = 0x3ACFE0u;
    ctx->pc = 0x9B1B184u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9B1B184u, 0x3ACFE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACFE8u;
label_3acfe8:
    // 0x3acfe8: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3acfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3acfec:
    // 0x3acfec: 0x72646320  .word       0x72646320                   # madd1       $t4, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acfecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3acff0:
    // 0x3acff0: 0x73646165  .word       0x73646165                   # INVALID     $k1, $a0, 0x6165 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acff0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x3ACFF0 raw=0x73646165");
label_3acff4:
    // 0x3acff4: 0x63206d74  daddi       $zero, $t9, 0x6D74
    ctx->pc = 0x3acff4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28020; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_3acff8:
    // 0x3acff8: 0xa646d  .word       0x000A646D                   # daddu       $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acff8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 10));
label_3acffc:
    // 0x3acffc: 0x0  nop
    ctx->pc = 0x3acffcu;
    // NOP
label_3ad000:
    // 0x3ad000: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x3ad000u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
label_3ad004:
    // 0x3ad004: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ad004u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3ad008:
    // 0x3ad008: 0x6c20726f  ldr         $zero, 0x726F($at)
    ctx->pc = 0x3ad008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3ad00c:
    // 0x3ad00c: 0x636d6269  daddi       $t5, $k1, 0x6269
    ctx->pc = 0x3ad00cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25193; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_3ad010:
    // 0x3ad010: 0xa20  .word       0x00000A20                   # add         $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad010u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_3ad014:
    // 0x3ad014: 0x0  nop
    ctx->pc = 0x3ad014u;
    // NOP
label_3ad018:
    // 0x3ad018: 0x6d62696c  ldr         $v0, 0x696C($t3)
    ctx->pc = 0x3ad018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3ad01c:
    // 0x3ad01c: 0x74203a63  .word       0x74203A63                   # INVALID     $at, $zero, 0x3A63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad01cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AD01C raw=0x74203A63");
label_3ad020:
    // 0x3ad020: 0x6f206f6f  ldr         $zero, 0x6F6F($t9)
    ctx->pc = 0x3ad020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3ad024:
    // 0x3ad024: 0x7220646c  .word       0x7220646C                   # INVALID     $s1, $zero, 0x646C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ad024u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x3AD024 raw=0x7220646C");
label_3ad028:
    // 0x3ad028: 0x61656c65  daddi       $a1, $t3, 0x6C65
    ctx->pc = 0x3ad028u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_3ad02c:
    // 0x3ad02c: 0x6f206573  ldr         $zero, 0x6573($t9)
    ctx->pc = 0x3ad02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3ad030:
    // 0x3ad030: 0x636d2066  daddi       $t5, $k1, 0x2066
    ctx->pc = 0x3ad030u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8294; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_3ad034:
    // 0x3ad034: 0x76726573  .word       0x76726573                   # INVALID     $s3, $s2, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad034u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AD034 raw=0x76726573");
label_3ad038:
    // 0x3ad038: 0x7872692e  lq          $s2, 0x692E($v1)
    ctx->pc = 0x3ad038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 26926)));
label_3ad03c:
    // 0x3ad03c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3ad03cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ad040:
    // 0x3ad040: 0x6d62696c  ldr         $v0, 0x696C($t3)
    ctx->pc = 0x3ad040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3ad044:
    // 0x3ad044: 0x74203a63  .word       0x74203A63                   # INVALID     $at, $zero, 0x3A63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad044u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AD044 raw=0x74203A63");
label_3ad048:
    // 0x3ad048: 0x6f206f6f  ldr         $zero, 0x6F6F($t9)
    ctx->pc = 0x3ad048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3ad04c:
    // 0x3ad04c: 0x7220646c  .word       0x7220646C                   # INVALID     $s1, $zero, 0x646C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ad04cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x3AD04C raw=0x7220646C");
label_3ad050:
    // 0x3ad050: 0x61656c65  daddi       $a1, $t3, 0x6C65
    ctx->pc = 0x3ad050u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_3ad054:
    // 0x3ad054: 0x6f206573  ldr         $zero, 0x6573($t9)
    ctx->pc = 0x3ad054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3ad058:
    // 0x3ad058: 0x636d2066  daddi       $t5, $k1, 0x2066
    ctx->pc = 0x3ad058u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8294; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_3ad05c:
    // 0x3ad05c: 0x2e6e616d  sltiu       $t6, $s3, 0x616D
    ctx->pc = 0x3ad05cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
label_3ad060:
    // 0x3ad060: 0xa787269  j           func_9E1C9A4
label_3ad064:
    if (ctx->pc == 0x3AD064u) {
        ctx->pc = 0x3AD068u;
        goto label_3ad068;
    }
    ctx->pc = 0x3AD060u;
    ctx->pc = 0x9E1C9A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9E1C9A4u, 0x3AD060u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AD068u;
label_3ad068:
    // 0x3ad068: 0xa2f983  .word       0x00A2F983                   # sra         $ra, $v0, 6 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad068u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 2), 6));
label_3ad06c:
    // 0x3ad06c: 0x6e4e44  .word       0x006E4E44                   # sllv        $t1, $t6, $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad06cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 3) & 0x1F));
label_3ad070:
    // 0x3ad070: 0x1529fc  dsll32      $a1, $s5, 7
    ctx->pc = 0x3ad070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 7));
label_3ad074:
    // 0x3ad074: 0x2757d1  .word       0x002757D1                   # mthi        $at # 000757C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad074u;
    ctx->hi = GPR_U64(ctx, 1);
label_3ad078:
    // 0x3ad078: 0xf534dd  .word       0x00F534DD                   # dmultu      $a3, $s5 # 000034C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad078u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x3AD078 raw=0x00F534DD");
label_3ad07c:
    // 0x3ad07c: 0xc0db62  .word       0x00C0DB62                   # sub         $k1, $a2, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad07cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 6), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 27, (int32_t)tmp); }
label_3ad080:
    // 0x3ad080: 0x95993c  .word       0x0095993C                   # dsll32      $s3, $s5, 4 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad080u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) << (32 + 4));
label_3ad084:
    // 0x3ad084: 0x439041  .word       0x00439041                   # INVALID     $v0, $v1, -0x6FBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad084u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AD084 raw=0x00439041");
label_3ad088:
    // 0x3ad088: 0xfe5163  .word       0x00FE5163                   # subu        $t2, $a3, $fp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad088u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
label_3ad08c:
    // 0x3ad08c: 0xabdebb  .word       0x00ABDEBB                   # dsra        $k1, $t3, 26 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad08cu;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 11) >> 26);
label_3ad090:
    // 0x3ad090: 0xc561b7  .word       0x00C561B7                   # INVALID     $a2, $a1, 0x61B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad090u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3AD090 raw=0x00C561B7");
label_3ad094:
    // 0x3ad094: 0x246e3a  .word       0x00246E3A                   # dsrl        $t5, $a0, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad094u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) >> 24);
label_3ad098:
    // 0x3ad098: 0x424dd2  .word       0x00424DD2                   # mflo        $t1 # 004205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad098u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_3ad09c:
    // 0x3ad09c: 0xe00649  .word       0x00E00649                   # jalr        $zero, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
label_3ad0a0:
    if (ctx->pc == 0x3AD0A0u) {
        ctx->pc = 0x3AD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD09Cu;
        // 0x3ad0a0: 0x2eea09  .word       0x002EEA09                   # jalr        $sp, $at # 000E0200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $29, $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD0A4u;
        goto label_3ad0a4;
    }
    ctx->pc = 0x3AD09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        ctx->pc = 0x3AD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD09Cu;
        // 0x3ad0a0: 0x2eea09  .word       0x002EEA09                   # jalr        $sp, $at # 000E0200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $29, $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD09Cu, 0x3AD0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD0A4u;
label_3ad0a4:
    // 0x3ad0a4: 0xd1921c  .word       0x00D1921C                   # dmult       $a2, $s1 # 00009200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AD0A4 raw=0x00D1921C");
label_3ad0a8:
    // 0x3ad0a8: 0xfe1deb  .word       0x00FE1DEB                   # sltu        $v1, $a3, $fp # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3ad0ac:
    // 0x3ad0ac: 0x1cb129  .word       0x001CB129                   # mtsa        $zero # 001CB100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad0acu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_3ad0b0:
    // 0x3ad0b0: 0xa73ee8  .word       0x00A73EE8                   # mfsa        $a3 # 00A706C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad0b0u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3ad0b4:
    // 0x3ad0b4: 0x8235f5  .word       0x008235F5                   # INVALID     $a0, $v0, 0x35F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x3AD0B4 raw=0x008235F5");
label_3ad0b8:
    // 0x3ad0b8: 0x2ebb44  .word       0x002EBB44                   # sllv        $s7, $t6, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0b8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 1) & 0x1F));
label_3ad0bc:
    // 0x3ad0bc: 0x84e99c  .word       0x0084E99C                   # dmult       $a0, $a0 # 0000E980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AD0BC raw=0x0084E99C");
label_3ad0c0:
    // 0x3ad0c0: 0x7026b4  teq         $v1, $s0, 154
    ctx->pc = 0x3ad0c0u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_3ad0c4:
    // 0x3ad0c4: 0x5f7e41  .word       0x005F7E41                   # INVALID     $v0, $ra, 0x7E41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AD0C4 raw=0x005F7E41");
label_3ad0c8:
    // 0x3ad0c8: 0x3991d6  .word       0x003991D6                   # dsrlv       $s2, $t9, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) >> (GPR_U32(ctx, 1) & 0x3F));
label_3ad0cc:
    // 0x3ad0cc: 0x398353  .word       0x00398353                   # mtlo        $at # 00198340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0ccu;
    ctx->lo = GPR_U64(ctx, 1);
label_3ad0d0:
    // 0x3ad0d0: 0x39f49c  .word       0x0039F49C                   # dmult       $at, $t9 # 0000F480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AD0D0 raw=0x0039F49C");
label_3ad0d4:
    // 0x3ad0d4: 0x845f8b  .word       0x00845F8B                   # movn        $t3, $a0, $a0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0d4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 4));
label_3ad0d8:
    // 0x3ad0d8: 0xbdf928  .word       0x00BDF928                   # mfsa        $ra # 00BD0100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad0d8u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_3ad0dc:
    // 0x3ad0dc: 0x3b1ff8  .word       0x003B1FF8                   # dsll        $v1, $k1, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 27) << 31);
label_3ad0e0:
    // 0x3ad0e0: 0x97ffde  .word       0x0097FFDE                   # ddiv        $ra, $a0, $s7 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AD0E0 raw=0x0097FFDE");
label_3ad0e4:
    // 0x3ad0e4: 0x5980f  .word       0x0005980F                   # sync # 00059800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3ad0e8:
    // 0x3ad0e8: 0xef2f11  .word       0x00EF2F11                   # mthi        $a3 # 000F2F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0e8u;
    ctx->hi = GPR_U64(ctx, 7);
label_3ad0ec:
    // 0x3ad0ec: 0x8b5a0a  .word       0x008B5A0A                   # movz        $t3, $a0, $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0ecu;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 4));
label_3ad0f0:
    // 0x3ad0f0: 0x6d1f6d  .word       0x006D1F6D                   # daddu       $v1, $v1, $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 13));
label_3ad0f4:
    // 0x3ad0f4: 0x367ecf  .word       0x00367ECF                   # sync.p # 00367800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad0f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3ad0f8:
    // 0x3ad0f8: 0x27cb09  .word       0x0027CB09                   # jalr        $t9, $at # 00070300 <InstrIdType: CPU_SPECIAL>
label_3ad0fc:
    if (ctx->pc == 0x3AD0FCu) {
        ctx->pc = 0x3AD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0F8u;
        // 0x3ad0fc: 0xb74f46  .word       0x00B74F46                   # srlv        $t1, $s7, $a1 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 23), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD100u;
        goto label_3ad100;
    }
    ctx->pc = 0x3AD0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 25, 0x3AD100u);
        ctx->pc = 0x3AD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0F8u;
        // 0x3ad0fc: 0xb74f46  .word       0x00B74F46                   # srlv        $t1, $s7, $a1 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 23), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD0F8u, 0x3AD100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD100u;
label_3ad100:
    // 0x3ad100: 0x3f669e  .word       0x003F669E                   # ddiv        $t4, $at, $ra # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad100u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AD100 raw=0x003F669E");
label_3ad104:
    // 0x3ad104: 0x5fea2d  .word       0x005FEA2D                   # daddu       $sp, $v0, $ra # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad104u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 31));
label_3ad108:
    // 0x3ad108: 0x7527ba  .word       0x007527BA                   # dsrl        $a0, $s5, 30 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) >> 30);
label_3ad10c:
    // 0x3ad10c: 0xc7ebe5  .word       0x00C7EBE5                   # or          $sp, $a2, $a3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad10cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_3ad110:
    // 0x3ad110: 0xf17b3d  .word       0x00F17B3D                   # INVALID     $a3, $s1, 0x7B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad110u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3AD110 raw=0x00F17B3D");
label_3ad114:
    // 0x3ad114: 0x739f7  .word       0x000739F7                   # INVALID     $zero, $a3, 0x39F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad114u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3AD114 raw=0x000739F7");
label_3ad118:
    // 0x3ad118: 0x8a5292  .word       0x008A5292                   # mflo        $t2 # 008A0280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad118u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_3ad11c:
    // 0x3ad11c: 0xea6bfb  .word       0x00EA6BFB                   # dsra        $t5, $t2, 15 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad11cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 10) >> 15);
label_3ad120:
    // 0x3ad120: 0x5fb11f  .word       0x005FB11F                   # ddivu       $s6, $v0, $ra # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad120u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD120 raw=0x005FB11F");
label_3ad124:
    // 0x3ad124: 0x8d5d08  .word       0x008D5D08                   # jr          $a0 # 000D5D00 <InstrIdType: CPU_SPECIAL>
label_3ad128:
    if (ctx->pc == 0x3AD128u) {
        ctx->pc = 0x3AD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD124u;
        // 0x3ad128: 0x560330  tge         $v0, $s6, 12 (Delay Slot)
        if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD12Cu;
        goto label_3ad12c;
    }
    ctx->pc = 0x3AD124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x3AD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD124u;
        // 0x3ad128: 0x560330  tge         $v0, $s6, 12 (Delay Slot)
        if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD124u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AD12Cu;
label_3ad12c:
    // 0x3ad12c: 0x46fc7b  .word       0x0046FC7B                   # dsra        $ra, $a2, 17 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad12cu;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 6) >> 17);
label_3ad130:
    // 0x3ad130: 0x6babf0  tge         $v1, $t3, 687
    ctx->pc = 0x3ad130u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_3ad134:
    // 0x3ad134: 0xcfbc20  .word       0x00CFBC20                   # add         $s7, $a2, $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad134u;
    {     int32_t rs_val = GPR_S32(ctx, 6);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3ad138:
    // 0x3ad138: 0x9af436  tne         $a0, $k0, 976
    ctx->pc = 0x3ad138u;
    if (GPR_U64(ctx, 4) != GPR_U64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_3ad13c:
    // 0x3ad13c: 0x1da9e3  .word       0x001DA9E3                   # negu        $s5, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad13cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 29)));
label_3ad140:
    // 0x3ad140: 0x91615e  .word       0x0091615E                   # ddiv        $t4, $a0, $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad140u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AD140 raw=0x0091615E");
label_3ad144:
    // 0x3ad144: 0xe61b08  .word       0x00E61B08                   # jr          $a3 # 00061B00 <InstrIdType: CPU_SPECIAL>
label_3ad148:
    if (ctx->pc == 0x3AD148u) {
        ctx->pc = 0x3AD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD144u;
        // 0x3ad148: 0x659985  .word       0x00659985                   # INVALID     $v1, $a1, -0x667B # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AD148 raw=0x00659985");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD14Cu;
        goto label_3ad14c;
    }
    ctx->pc = 0x3AD144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        ctx->pc = 0x3AD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD144u;
        // 0x3ad148: 0x659985  .word       0x00659985                   # INVALID     $v1, $a1, -0x667B # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AD148 raw=0x00659985");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD144u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AD14Cu;
label_3ad14c:
    // 0x3ad14c: 0x5f14a0  .word       0x005F14A0                   # add         $v0, $v0, $ra # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad14cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3ad150:
    // 0x3ad150: 0x68408d  break       104, 258
    ctx->pc = 0x3ad150u;
    runtime->handleBreak(rdram, ctx);
label_3ad154:
    // 0x3ad154: 0xffd880  .word       0x00FFD880                   # sll         $k1, $ra, 2 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad154u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 31), 2));
label_3ad158:
    // 0x3ad158: 0x4d7327  .word       0x004D7327                   # nor         $t6, $v0, $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad158u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 13)));
label_3ad15c:
    // 0x3ad15c: 0x310606  .word       0x00310606                   # srlv        $zero, $s1, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad15cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 1) & 0x1F));
label_3ad160:
    // 0x3ad160: 0x1556ca  .word       0x001556CA                   # movz        $t2, $zero, $s5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad160u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_3ad164:
    // 0x3ad164: 0x73a8c9  .word       0x0073A8C9                   # jalr        $s5, $v1 # 001300C0 <InstrIdType: CPU_SPECIAL>
label_3ad168:
    if (ctx->pc == 0x3AD168u) {
        ctx->pc = 0x3AD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD164u;
        // 0x3ad168: 0x60e27b  .word       0x0060E27B                   # dsra        $gp, $zero, 9 # 00600000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> 9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD16Cu;
        goto label_3ad16c;
    }
    ctx->pc = 0x3AD164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 21, 0x3AD16Cu);
        ctx->pc = 0x3AD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD164u;
        // 0x3ad168: 0x60e27b  .word       0x0060E27B                   # dsra        $gp, $zero, 9 # 00600000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> 9);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD164u, 0x3AD16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD16Cu;
label_3ad16c:
    // 0x3ad16c: 0xc08c6b  .word       0x00C08C6B                   # sltu        $s1, $a2, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad16cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ad170:
    // 0x3ad170: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad170u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
label_3ad174:
    // 0x3ad174: 0x400921fb  .word       0x400921FB                   # mfc0        $t1, Context # 000001FB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad174u;
    SET_GPR_S32(ctx, 9, (int32_t)ctx->cop0_context);
label_3ad178:
    // 0x3ad178: 0x4012d97c  .word       0x4012D97C                   # mfc0        $s2, CacheErr # 0000017C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad178u;
    SET_GPR_S32(ctx, 18, 0);  // Unimplemented COP0 register 27
label_3ad17c:
    // 0x3ad17c: 0x401921fb  .word       0x401921FB                   # mfc0        $t9, Context # 000001FB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad17cu;
    SET_GPR_S32(ctx, 25, (int32_t)ctx->cop0_context);
label_3ad180:
    // 0x3ad180: 0x401f6a7a  .word       0x401F6A7A                   # mfc0        $ra, Cause # 0000027A <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad180u;
    SET_GPR_S32(ctx, 31, (int32_t)ctx->cop0_cause);
label_3ad184:
    // 0x3ad184: 0x4022d97c  .word       0x4022D97C                   # dmfc0       $v0, CacheErr # 0000017C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad184u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD184 raw=0x4022D97C");
label_3ad188:
    // 0x3ad188: 0x4025fdbb  .word       0x4025FDBB                   # dmfc0       $a1, Reserved31 # 000005BB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad188u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD188 raw=0x4025FDBB");
label_3ad18c:
    // 0x3ad18c: 0x402921fb  .word       0x402921FB                   # dmfc0       $t1, Context # 000001FB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad18cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD18C raw=0x402921FB");
label_3ad190:
    // 0x3ad190: 0x402c463a  .word       0x402C463A                   # dmfc0       $t4, BadVaddr # 0000063A <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad190u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD190 raw=0x402C463A");
label_3ad194:
    // 0x3ad194: 0x402f6a7a  .word       0x402F6A7A                   # dmfc0       $t7, Cause # 0000027A <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad194u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD194 raw=0x402F6A7A");
label_3ad198:
    // 0x3ad198: 0x4031475c  .word       0x4031475C                   # dmfc0       $s1, BadVaddr # 0000075C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad198u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD198 raw=0x4031475C");
label_3ad19c:
    // 0x3ad19c: 0x4032d97c  .word       0x4032D97C                   # dmfc0       $s2, CacheErr # 0000017C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad19cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD19C raw=0x4032D97C");
label_3ad1a0:
    // 0x3ad1a0: 0x40346b9c  .word       0x40346B9C                   # dmfc0       $s4, Cause # 0000039C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1a0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD1A0 raw=0x40346B9C");
label_3ad1a4:
    // 0x3ad1a4: 0x4035fdbb  .word       0x4035FDBB                   # dmfc0       $s5, Reserved31 # 000005BB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD1A4 raw=0x4035FDBB");
label_3ad1a8:
    // 0x3ad1a8: 0x40378fdb  .word       0x40378FDB                   # dmfc0       $s7, LLAddr # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1a8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD1A8 raw=0x40378FDB");
label_3ad1ac:
    // 0x3ad1ac: 0x403921fb  .word       0x403921FB                   # dmfc0       $t9, Context # 000001FB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1acu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD1AC raw=0x403921FB");
label_3ad1b0:
    // 0x3ad1b0: 0x403ab41b  .word       0x403AB41B                   # dmfc0       $k0, Reserved22 # 0000041B <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1b0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD1B0 raw=0x403AB41B");
label_3ad1b4:
    // 0x3ad1b4: 0x403c463a  .word       0x403C463A                   # dmfc0       $gp, BadVaddr # 0000063A <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD1B4 raw=0x403C463A");
label_3ad1b8:
    // 0x3ad1b8: 0x403dd85a  .word       0x403DD85A                   # dmfc0       $sp, CacheErr # 0000005A <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1b8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD1B8 raw=0x403DD85A");
label_3ad1bc:
    // 0x3ad1bc: 0x403f6a7a  .word       0x403F6A7A                   # dmfc0       $ra, Cause # 0000027A <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1bcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3AD1BC raw=0x403F6A7A");
label_3ad1c0:
    // 0x3ad1c0: 0x40407e4c  .word       0x40407E4C                   # cfc0        $zero, PRevID # 0000064C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1c0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1C0 raw=0x40407E4C");
label_3ad1c4:
    // 0x3ad1c4: 0x4041475c  .word       0x4041475C                   # cfc0        $at, BadVaddr # 0000075C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1C4 raw=0x4041475C");
label_3ad1c8:
    // 0x3ad1c8: 0x4042106c  .word       0x4042106C                   # cfc0        $v0, EntryLo0 # 0000006C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1c8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1C8 raw=0x4042106C");
label_3ad1cc:
    // 0x3ad1cc: 0x4042d97c  .word       0x4042D97C                   # cfc0        $v0, CacheErr # 0000017C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1ccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1CC raw=0x4042D97C");
label_3ad1d0:
    // 0x3ad1d0: 0x4043a28c  .word       0x4043A28C                   # cfc0        $v1, XContext # 0000028C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1d0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1D0 raw=0x4043A28C");
label_3ad1d4:
    // 0x3ad1d4: 0x40446b9c  .word       0x40446B9C                   # cfc0        $a0, Cause # 0000039C <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1D4 raw=0x40446B9C");
label_3ad1d8:
    // 0x3ad1d8: 0x404534ac  .word       0x404534AC                   # cfc0        $a1, Wired # 000004AC <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1d8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1D8 raw=0x404534AC");
label_3ad1dc:
    // 0x3ad1dc: 0x4045fdbb  .word       0x4045FDBB                   # cfc0        $a1, Reserved31 # 000005BB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1dcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1DC raw=0x4045FDBB");
label_3ad1e0:
    // 0x3ad1e0: 0x4046c6cb  .word       0x4046C6CB                   # cfc0        $a2, Reserved24 # 000006CB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1e0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1E0 raw=0x4046C6CB");
label_3ad1e4:
    // 0x3ad1e4: 0x40478fdb  .word       0x40478FDB                   # cfc0        $a3, LLAddr # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1E4 raw=0x40478FDB");
label_3ad1e8:
    // 0x3ad1e8: 0x404858eb  .word       0x404858EB                   # cfc0        $t0, Compare # 000000EB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1e8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1E8 raw=0x404858EB");
label_3ad1ec:
    // 0x3ad1ec: 0x404921fb  .word       0x404921FB                   # cfc0        $t1, Context # 000001FB <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad1ecu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD1EC raw=0x404921FB");
label_3ad1f0:
    // 0x3ad1f0: 0x0  nop
    ctx->pc = 0x3ad1f0u;
    // NOP
label_3ad1f4:
    // 0x3ad1f4: 0x0  nop
    ctx->pc = 0x3ad1f4u;
    // NOP
label_3ad1f8:
    // 0x3ad1f8: 0x0  nop
    ctx->pc = 0x3ad1f8u;
    // NOP
label_3ad1fc:
    // 0x3ad1fc: 0x3fe00000  .word       0x3FE00000                   # lui         $zero, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad1fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ad200:
    // 0x3ad200: 0x0  nop
    ctx->pc = 0x3ad200u;
    // NOP
label_3ad204:
    // 0x3ad204: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad204u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x3AD204 raw=0x41700000");
label_3ad208:
    // 0x3ad208: 0x6dc9c883  ldr         $t1, -0x377D($t6)
    ctx->pc = 0x3ad208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294953091); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3ad20c:
    // 0x3ad20c: 0x3fe45f30  .word       0x3FE45F30                   # lui         $a0, 0x5F30 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24368 << 16));
label_3ad210:
    // 0x3ad210: 0x54400000  bnel        $v0, $zero, . + 4 + (0x0 << 2)
label_3ad214:
    if (ctx->pc == 0x3AD214u) {
        ctx->pc = 0x3AD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD210u;
        // 0x3ad214: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD218u;
        goto label_3ad218;
    }
    ctx->pc = 0x3AD210u;
    {
        const bool branch_taken_0x3ad210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad210) {
            ctx->pc = 0x3AD214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD210u;
            // 0x3ad214: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD214u;
            goto label_3ad214;
        }
    }
    ctx->pc = 0x3AD218u;
label_3ad218:
    // 0x3ad218: 0x1a626331  .word       0x1A626331                   # blez        $s3, . + 4 + (0x6331 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_3ad21c:
    if (ctx->pc == 0x3AD21Cu) {
        ctx->pc = 0x3AD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD218u;
        // 0x3ad21c: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD220u;
        goto label_3ad220;
    }
    ctx->pc = 0x3AD218u;
    {
        const bool branch_taken_0x3ad218 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3AD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD218u;
        // 0x3ad21c: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad218) {
            ctx->pc = 0x3C5EE0u;
            return;
        }
    }
    ctx->pc = 0x3AD220u;
label_3ad220:
    // 0x3ad220: 0x1a600000  blez        $s3, . + 4 + (0x0 << 2)
label_3ad224:
    if (ctx->pc == 0x3AD224u) {
        ctx->pc = 0x3AD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD220u;
        // 0x3ad224: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD228u;
        goto label_3ad228;
    }
    ctx->pc = 0x3AD220u;
    {
        const bool branch_taken_0x3ad220 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3AD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD220u;
        // 0x3ad224: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad220) {
            ctx->pc = 0x3AD224u;
            goto label_3ad224;
        }
    }
    ctx->pc = 0x3AD228u;
label_3ad228:
    // 0x3ad228: 0x2e037073  sltiu       $v1, $s0, 0x7073
    ctx->pc = 0x3ad228u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)28787) ? 1 : 0);
label_3ad22c:
    // 0x3ad22c: 0x3ba3198a  xori        $v1, $sp, 0x198A
    ctx->pc = 0x3ad22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)6538);
label_3ad230:
    // 0x3ad230: 0x2e000000  sltiu       $zero, $s0, 0x0
    ctx->pc = 0x3ad230u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)0) ? 1 : 0);
label_3ad234:
    // 0x3ad234: 0x3ba3198a  xori        $v1, $sp, 0x198A
    ctx->pc = 0x3ad234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)6538);
label_3ad238:
    // 0x3ad238: 0x252049c1  addiu       $zero, $t1, 0x49C1
    ctx->pc = 0x3ad238u;
    // NOP (addiu $zero, ...)
label_3ad23c:
    // 0x3ad23c: 0x397b839a  xori        $k1, $t3, 0x839A
    ctx->pc = 0x3ad23cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)33690);
label_3ad240:
    // 0x3ad240: 0x54400000  bnel        $v0, $zero, . + 4 + (0x0 << 2)
label_3ad244:
    if (ctx->pc == 0x3AD244u) {
        ctx->pc = 0x3AD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD240u;
        // 0x3ad244: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD248u;
        goto label_3ad248;
    }
    ctx->pc = 0x3AD240u;
    {
        const bool branch_taken_0x3ad240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad240) {
            ctx->pc = 0x3AD244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD240u;
            // 0x3ad244: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD244u;
            goto label_3ad244;
        }
    }
    ctx->pc = 0x3AD248u;
label_3ad248:
    // 0x3ad248: 0x1a626331  .word       0x1A626331                   # blez        $s3, . + 4 + (0x6331 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_3ad24c:
    if (ctx->pc == 0x3AD24Cu) {
        ctx->pc = 0x3AD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD248u;
        // 0x3ad24c: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD250u;
        goto label_3ad250;
    }
    ctx->pc = 0x3AD248u;
    {
        const bool branch_taken_0x3ad248 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3AD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD248u;
        // 0x3ad24c: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad248) {
            ctx->pc = 0x3C5F10u;
            return;
        }
    }
    ctx->pc = 0x3AD250u;
label_3ad250:
    // 0x3ad250: 0x1a600000  blez        $s3, . + 4 + (0x0 << 2)
label_3ad254:
    if (ctx->pc == 0x3AD254u) {
        ctx->pc = 0x3AD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD250u;
        // 0x3ad254: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD258u;
        goto label_3ad258;
    }
    ctx->pc = 0x3AD250u;
    {
        const bool branch_taken_0x3ad250 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3AD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD250u;
        // 0x3ad254: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad250) {
            ctx->pc = 0x3AD254u;
            goto label_3ad254;
        }
    }
    ctx->pc = 0x3AD258u;
label_3ad258:
    // 0x3ad258: 0x2e037073  sltiu       $v1, $s0, 0x7073
    ctx->pc = 0x3ad258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)28787) ? 1 : 0);
label_3ad25c:
    // 0x3ad25c: 0x3ba3198a  xori        $v1, $sp, 0x198A
    ctx->pc = 0x3ad25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)6538);
label_3ad260:
    // 0x3ad260: 0x54400000  bnel        $v0, $zero, . + 4 + (0x0 << 2)
label_3ad264:
    if (ctx->pc == 0x3AD264u) {
        ctx->pc = 0x3AD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD260u;
        // 0x3ad264: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD268u;
        goto label_3ad268;
    }
    ctx->pc = 0x3AD260u;
    {
        const bool branch_taken_0x3ad260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad260) {
            ctx->pc = 0x3AD264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD260u;
            // 0x3ad264: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD264u;
            goto label_3ad264;
        }
    }
    ctx->pc = 0x3AD268u;
label_3ad268:
    // 0x3ad268: 0x1a626331  .word       0x1A626331                   # blez        $s3, . + 4 + (0x6331 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_3ad26c:
    if (ctx->pc == 0x3AD26Cu) {
        ctx->pc = 0x3AD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD268u;
        // 0x3ad26c: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD270u;
        goto label_3ad270;
    }
    ctx->pc = 0x3AD268u;
    {
        const bool branch_taken_0x3ad268 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3AD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD268u;
        // 0x3ad26c: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad268) {
            ctx->pc = 0x3C5F30u;
            return;
        }
    }
    ctx->pc = 0x3AD270u;
label_3ad270:
    // 0x3ad270: 0x1a600000  blez        $s3, . + 4 + (0x0 << 2)
label_3ad274:
    if (ctx->pc == 0x3AD274u) {
        ctx->pc = 0x3AD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD270u;
        // 0x3ad274: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD278u;
        goto label_3ad278;
    }
    ctx->pc = 0x3AD270u;
    {
        const bool branch_taken_0x3ad270 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3AD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD270u;
        // 0x3ad274: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad270) {
            ctx->pc = 0x3AD274u;
            goto label_3ad274;
        }
    }
    ctx->pc = 0x3AD278u;
label_3ad278:
    // 0x3ad278: 0x2e037073  sltiu       $v1, $s0, 0x7073
    ctx->pc = 0x3ad278u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)28787) ? 1 : 0);
label_3ad27c:
    // 0x3ad27c: 0x3ba3198a  xori        $v1, $sp, 0x198A
    ctx->pc = 0x3ad27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)6538);
label_3ad280:
    // 0x3ad280: 0x6dc9c883  ldr         $t1, -0x377D($t6)
    ctx->pc = 0x3ad280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294953091); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3ad284:
    // 0x3ad284: 0x3fe45f30  .word       0x3FE45F30                   # lui         $a0, 0x5F30 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24368 << 16));
label_3ad288:
    // 0x3ad288: 0x54400000  bnel        $v0, $zero, . + 4 + (0x0 << 2)
label_3ad28c:
    if (ctx->pc == 0x3AD28Cu) {
        ctx->pc = 0x3AD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD288u;
        // 0x3ad28c: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD290u;
        goto label_3ad290;
    }
    ctx->pc = 0x3AD288u;
    {
        const bool branch_taken_0x3ad288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad288) {
            ctx->pc = 0x3AD28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD288u;
            // 0x3ad28c: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD28Cu;
            goto label_3ad28c;
        }
    }
    ctx->pc = 0x3AD290u;
label_3ad290:
    // 0x3ad290: 0x1a626331  .word       0x1A626331                   # blez        $s3, . + 4 + (0x6331 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_3ad294:
    if (ctx->pc == 0x3AD294u) {
        ctx->pc = 0x3AD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD290u;
        // 0x3ad294: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD298u;
        goto label_3ad298;
    }
    ctx->pc = 0x3AD290u;
    {
        const bool branch_taken_0x3ad290 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3AD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD290u;
        // 0x3ad294: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad290) {
            ctx->pc = 0x3C5F58u;
            return;
        }
    }
    ctx->pc = 0x3AD298u;
label_3ad298:
    // 0x3ad298: 0x1a600000  blez        $s3, . + 4 + (0x0 << 2)
label_3ad29c:
    if (ctx->pc == 0x3AD29Cu) {
        ctx->pc = 0x3AD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD298u;
        // 0x3ad29c: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2A0u;
        goto label_3ad2a0;
    }
    ctx->pc = 0x3AD298u;
    {
        const bool branch_taken_0x3ad298 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3AD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD298u;
        // 0x3ad29c: 0x3dd0b461  .word       0x3DD0B461                   # lui         $s0, 0xB461 # 01C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad298) {
            ctx->pc = 0x3AD29Cu;
            goto label_3ad29c;
        }
    }
    ctx->pc = 0x3AD2A0u;
label_3ad2a0:
    // 0x3ad2a0: 0x2e037073  sltiu       $v1, $s0, 0x7073
    ctx->pc = 0x3ad2a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)28787) ? 1 : 0);
label_3ad2a4:
    // 0x3ad2a4: 0x3ba3198a  xori        $v1, $sp, 0x198A
    ctx->pc = 0x3ad2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)6538);
label_3ad2a8:
    // 0x3ad2a8: 0x2e000000  sltiu       $zero, $s0, 0x0
    ctx->pc = 0x3ad2a8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)0) ? 1 : 0);
label_3ad2ac:
    // 0x3ad2ac: 0x3ba3198a  xori        $v1, $sp, 0x198A
    ctx->pc = 0x3ad2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)6538);
label_3ad2b0:
    // 0x3ad2b0: 0x252049c1  addiu       $zero, $t1, 0x49C1
    ctx->pc = 0x3ad2b0u;
    // NOP (addiu $zero, ...)
label_3ad2b4:
    // 0x3ad2b4: 0x397b839a  xori        $k1, $t3, 0x839A
    ctx->pc = 0x3ad2b4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)33690);
label_3ad2b8:
    // 0x3ad2b8: 0xda24260  jal         func_6890980
label_3ad2bc:
    if (ctx->pc == 0x3AD2BCu) {
        ctx->pc = 0x3AD2C0u;
        goto label_3ad2c0;
    }
    ctx->pc = 0x3AD2B8u;
    SET_GPR_U32(ctx, 31, 0x3AD2C0u);
    ctx->pc = 0x6890980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6890980u, 0x3AD2B8u, 0x3AD2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2C0u;
label_3ad2c0:
    // 0x3ad2c0: 0x3f490fdb  .word       0x3F490FDB                   # lui         $t1, 0xFDB # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_3ad2c4:
    // 0x3ad2c4: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_3ad2c8:
    // 0x3ad2c8: 0x40490fda  .word       0x40490FDA                   # cfc0        $t1, Random # 000007DA <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad2c8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD2C8 raw=0x40490FDA");
label_3ad2cc:
    // 0x3ad2cc: 0x34222168  ori         $v0, $at, 0x2168
    ctx->pc = 0x3ad2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_3ad2d0:
    // 0x3ad2d0: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x3ad2d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_3ad2d4:
    // 0x3ad2d4: 0x0  nop
    ctx->pc = 0x3ad2d4u;
    // NOP
label_3ad2d8:
    // 0x3ad2d8: 0xa2  .word       0x000000A2                   # neg         $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad2d8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_3ad2dc:
    // 0x3ad2dc: 0xf9  .word       0x000000F9                   # INVALID     $zero, $zero, 0xF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad2dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x3AD2DC raw=0x000000F9");
label_3ad2e0:
    // 0x3ad2e0: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x3ad2e0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_3ad2e4:
    // 0x3ad2e4: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad2e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3ad2e8:
    // 0x3ad2e8: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad2e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x3AD2E8 raw=0x0000004E");
label_3ad2ec:
    // 0x3ad2ec: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad2ecu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad2f0:
    // 0x3ad2f0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad2f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x3AD2F0 raw=0x00000015");
label_3ad2f4:
    // 0x3ad2f4: 0x29  mtsa        $zero
    ctx->pc = 0x3ad2f4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_3ad2f8:
    // 0x3ad2f8: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x3ad2f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_3ad2fc:
    // 0x3ad2fc: 0x27  not         $zero, $zero
    ctx->pc = 0x3ad2fcu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_3ad300:
    // 0x3ad300: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad300u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_3ad304:
    // 0x3ad304: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad304u;
    ctx->hi = GPR_U64(ctx, 0);
label_3ad308:
    // 0x3ad308: 0xf5  .word       0x000000F5                   # INVALID     $zero, $zero, 0xF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad308u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x3AD308 raw=0x000000F5");
label_3ad30c:
    // 0x3ad30c: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x3ad30cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad310:
    // 0x3ad310: 0xdd  .word       0x000000DD                   # dmultu      $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad310u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x3AD310 raw=0x000000DD");
label_3ad314:
    // 0x3ad314: 0xc0  sll         $zero, $zero, 3
    ctx->pc = 0x3ad314u;
    
label_3ad318:
    // 0x3ad318: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad318u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_3ad31c:
    // 0x3ad31c: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad31cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_3ad320:
    // 0x3ad320: 0x95  .word       0x00000095                   # INVALID     $zero, $zero, 0x95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad320u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x3AD320 raw=0x00000095");
label_3ad324:
    // 0x3ad324: 0x99  .word       0x00000099                   # multu       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad324u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ad328:
    // 0x3ad328: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x3ad328u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_3ad32c:
    // 0x3ad32c: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x3ad32cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_3ad330:
    // 0x3ad330: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad330u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_3ad334:
    // 0x3ad334: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad334u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AD334 raw=0x00000041");
label_3ad338:
    // 0x3ad338: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x3ad338u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_3ad33c:
    // 0x3ad33c: 0x51  .word       0x00000051                   # mthi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad33cu;
    ctx->hi = GPR_U64(ctx, 0);
label_3ad340:
    // 0x3ad340: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad340u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3ad344:
    // 0x3ad344: 0xab  .word       0x000000AB                   # sltu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad344u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ad348:
    // 0x3ad348: 0xde  .word       0x000000DE                   # ddiv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad348u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AD348 raw=0x000000DE");
label_3ad34c:
    // 0x3ad34c: 0xbb  dsra        $zero, $zero, 2
    ctx->pc = 0x3ad34cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 2);
label_3ad350:
    // 0x3ad350: 0xc5  .word       0x000000C5                   # INVALID     $zero, $zero, 0xC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad350u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AD350 raw=0x000000C5");
label_3ad354:
    // 0x3ad354: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad354u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3ad358:
    // 0x3ad358: 0xb7  .word       0x000000B7                   # INVALID     $zero, $zero, 0xB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad358u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3AD358 raw=0x000000B7");
label_3ad35c:
    // 0x3ad35c: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x3ad35cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3ad360:
    // 0x3ad360: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad360u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3ad364:
    // 0x3ad364: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x3ad364u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_3ad368:
    // 0x3ad368: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x3ad368u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_3ad36c:
    // 0x3ad36c: 0x4d  break       0, 1
    ctx->pc = 0x3ad36cu;
    runtime->handleBreak(rdram, ctx);
label_3ad370:
    // 0x3ad370: 0xd2  .word       0x000000D2                   # mflo        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad370u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_3ad374:
    // 0x3ad374: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ad378:
    // 0x3ad378: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x3ad378u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad37c:
    // 0x3ad37c: 0x49  .word       0x00000049                   # jalr        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_3ad380:
    if (ctx->pc == 0x3AD380u) {
        ctx->pc = 0x3AD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD37Cu;
        // 0x3ad380: 0x2e  dsub        $zero, $zero, $zero (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD384u;
        goto label_3ad384;
    }
    ctx->pc = 0x3AD37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD37Cu;
        // 0x3ad380: 0x2e  dsub        $zero, $zero, $zero (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD37Cu, 0x3AD384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD384u;
label_3ad384:
    // 0x3ad384: 0xea  .word       0x000000EA                   # slt         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad384u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_3ad388:
    // 0x3ad388: 0x9  jalr        $zero, $zero
label_3ad38c:
    if (ctx->pc == 0x3AD38Cu) {
        ctx->pc = 0x3AD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD388u;
        // 0x3ad38c: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD390u;
        goto label_3ad390;
    }
    ctx->pc = 0x3AD388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD388u;
        // 0x3ad38c: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD388u, 0x3AD390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD390u;
label_3ad390:
    // 0x3ad390: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad390u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_3ad394:
    // 0x3ad394: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x3ad394u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AD394 raw=0x0000001C");
label_3ad398:
    // 0x3ad398: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x3ad398u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_3ad39c:
    // 0x3ad39c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x3ad39cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x3AD39C raw=0x0000001D");
label_3ad3a0:
    // 0x3ad3a0: 0xeb  .word       0x000000EB                   # sltu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3a0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ad3a4:
    // 0x3ad3a4: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x3ad3a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AD3A4 raw=0x0000001C");
label_3ad3a8:
    // 0x3ad3a8: 0xb1  tgeu        $zero, $zero, 2
    ctx->pc = 0x3ad3a8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad3ac:
    // 0x3ad3ac: 0x29  mtsa        $zero
    ctx->pc = 0x3ad3acu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_3ad3b0:
    // 0x3ad3b0: 0xa7  .word       0x000000A7                   # not         $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3b0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_3ad3b4:
    // 0x3ad3b4: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x3ad3b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_3ad3b8:
    // 0x3ad3b8: 0xe8  .word       0x000000E8                   # mfsa        $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad3b8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3ad3bc:
    // 0x3ad3bc: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x3ad3bcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_3ad3c0:
    // 0x3ad3c0: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x3AD3C0 raw=0x00000035");
label_3ad3c4:
    // 0x3ad3c4: 0xf5  .word       0x000000F5                   # INVALID     $zero, $zero, 0xF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x3AD3C4 raw=0x000000F5");
label_3ad3c8:
    // 0x3ad3c8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x3ad3c8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3ad3cc:
    // 0x3ad3cc: 0xbb  dsra        $zero, $zero, 2
    ctx->pc = 0x3ad3ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 2);
label_3ad3d0:
    // 0x3ad3d0: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad3d4:
    // 0x3ad3d4: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad3d8:
    // 0x3ad3d8: 0xe9  .word       0x000000E9                   # mtsa        $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad3d8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_3ad3dc:
    // 0x3ad3dc: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AD3DC raw=0x0000009C");
label_3ad3e0:
    // 0x3ad3e0: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x3ad3e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad3e4:
    // 0x3ad3e4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x3ad3e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3ad3e8:
    // 0x3ad3e8: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x3ad3e8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad3ec:
    // 0x3ad3ec: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD3EC raw=0x0000005F");
label_3ad3f0:
    // 0x3ad3f0: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x3ad3f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_3ad3f4:
    // 0x3ad3f4: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AD3F4 raw=0x00000041");
label_3ad3f8:
    // 0x3ad3f8: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x3AD3F8 raw=0x00000039");
label_3ad3fc:
    // 0x3ad3fc: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad3fcu;
    ctx->hi = GPR_U64(ctx, 0);
label_3ad400:
    // 0x3ad400: 0xd6  .word       0x000000D6                   # dsrlv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad400u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_3ad404:
    // 0x3ad404: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad404u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x3AD404 raw=0x00000039");
label_3ad408:
    // 0x3ad408: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x3ad408u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_3ad40c:
    // 0x3ad40c: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad40cu;
    ctx->lo = GPR_U64(ctx, 0);
label_3ad410:
    // 0x3ad410: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad410u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x3AD410 raw=0x00000039");
label_3ad414:
    // 0x3ad414: 0xf4  teq         $zero, $zero, 3
    ctx->pc = 0x3ad414u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad418:
    // 0x3ad418: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad418u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AD418 raw=0x0000009C");
label_3ad41c:
    // 0x3ad41c: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad41cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad420:
    // 0x3ad420: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad420u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD420 raw=0x0000005F");
label_3ad424:
    // 0x3ad424: 0x8b  .word       0x0000008B                   # movn        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad424u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ad428:
    // 0x3ad428: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad428u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3AD428 raw=0x000000BD");
label_3ad42c:
    // 0x3ad42c: 0xf9  .word       0x000000F9                   # INVALID     $zero, $zero, 0xF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad42cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x3AD42C raw=0x000000F9");
label_3ad430:
    // 0x3ad430: 0x28  mfsa        $zero
    ctx->pc = 0x3ad430u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3ad434:
    // 0x3ad434: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x3ad434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_3ad438:
    // 0x3ad438: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x3ad438u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD438 raw=0x0000001F");
label_3ad43c:
    // 0x3ad43c: 0xf8  dsll        $zero, $zero, 3
    ctx->pc = 0x3ad43cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 3);
label_3ad440:
    // 0x3ad440: 0x97  .word       0x00000097                   # dsrav       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad440u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_3ad444:
    // 0x3ad444: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x3ad444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_3ad448:
    // 0x3ad448: 0xde  .word       0x000000DE                   # ddiv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad448u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AD448 raw=0x000000DE");
label_3ad44c:
    // 0x3ad44c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad44cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AD44C raw=0x00000005");
label_3ad450:
    // 0x3ad450: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ad454:
    // 0x3ad454: 0xf  sync
    ctx->pc = 0x3ad454u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3ad458:
    // 0x3ad458: 0xef  .word       0x000000EF                   # dsubu       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad458u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_3ad45c:
    // 0x3ad45c: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x3ad45cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_3ad460:
    // 0x3ad460: 0x11  mthi        $zero
    ctx->pc = 0x3ad460u;
    ctx->hi = GPR_U64(ctx, 0);
label_3ad464:
    // 0x3ad464: 0x8b  .word       0x0000008B                   # movn        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad464u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ad468:
    // 0x3ad468: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad468u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ad46c:
    // 0x3ad46c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3ad46cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ad470:
    // 0x3ad470: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad470u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad474:
    // 0x3ad474: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x3ad474u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD474 raw=0x0000001F");
label_3ad478:
    // 0x3ad478: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad478u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad47c:
    // 0x3ad47c: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x3ad47cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad480:
    // 0x3ad480: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x3ad480u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_3ad484:
    // 0x3ad484: 0xcf  sync
    ctx->pc = 0x3ad484u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3ad488:
    // 0x3ad488: 0x27  not         $zero, $zero
    ctx->pc = 0x3ad488u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_3ad48c:
    // 0x3ad48c: 0xcb  .word       0x000000CB                   # movn        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad48cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ad490:
    // 0x3ad490: 0x9  jalr        $zero, $zero
label_3ad494:
    if (ctx->pc == 0x3AD494u) {
        ctx->pc = 0x3AD494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD490u;
        // 0x3ad494: 0xb7  .word       0x000000B7                   # INVALID     $zero, $zero, 0xB7 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3AD494 raw=0x000000B7");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD498u;
        goto label_3ad498;
    }
    ctx->pc = 0x3AD490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AD494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD490u;
        // 0x3ad494: 0xb7  .word       0x000000B7                   # INVALID     $zero, $zero, 0xB7 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3AD494 raw=0x000000B7");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD490u, 0x3AD498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD498u;
label_3ad498:
    // 0x3ad498: 0x4f  sync
    ctx->pc = 0x3ad498u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3ad49c:
    // 0x3ad49c: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad49cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad4a0:
    // 0x3ad4a0: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x3ad4a0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_3ad4a4:
    // 0x3ad4a4: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3ad4a8:
    // 0x3ad4a8: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AD4A8 raw=0x0000009E");
label_3ad4ac:
    // 0x3ad4ac: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD4AC raw=0x0000005F");
label_3ad4b0:
    // 0x3ad4b0: 0xea  .word       0x000000EA                   # slt         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4b0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_3ad4b4:
    // 0x3ad4b4: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x3ad4b4u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad4b8:
    // 0x3ad4b8: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x3AD4B8 raw=0x00000075");
label_3ad4bc:
    // 0x3ad4bc: 0x27  not         $zero, $zero
    ctx->pc = 0x3ad4bcu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_3ad4c0:
    // 0x3ad4c0: 0xba  dsrl        $zero, $zero, 2
    ctx->pc = 0x3ad4c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 2);
label_3ad4c4:
    // 0x3ad4c4: 0xc7  .word       0x000000C7                   # srav        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad4c8:
    // 0x3ad4c8: 0xeb  .word       0x000000EB                   # sltu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4c8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ad4cc:
    // 0x3ad4cc: 0xe5  .word       0x000000E5                   # move        $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3ad4d0:
    // 0x3ad4d0: 0xf1  tgeu        $zero, $zero, 3
    ctx->pc = 0x3ad4d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad4d4:
    // 0x3ad4d4: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x3ad4d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_3ad4d8:
    // 0x3ad4d8: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3AD4D8 raw=0x0000003D");
label_3ad4dc:
    // 0x3ad4dc: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x3ad4dcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad4e0:
    // 0x3ad4e0: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x3AD4E0 raw=0x00000039");
label_3ad4e4:
    // 0x3ad4e4: 0xf7  .word       0x000000F7                   # INVALID     $zero, $zero, 0xF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3AD4E4 raw=0x000000F7");
label_3ad4e8:
    // 0x3ad4e8: 0x8a  .word       0x0000008A                   # movz        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4e8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ad4ec:
    // 0x3ad4ec: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4ecu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_3ad4f0:
    // 0x3ad4f0: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4f0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_3ad4f4:
    // 0x3ad4f4: 0xea  .word       0x000000EA                   # slt         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4f4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_3ad4f8:
    // 0x3ad4f8: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad4f8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ad4fc:
    // 0x3ad4fc: 0xfb  dsra        $zero, $zero, 3
    ctx->pc = 0x3ad4fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 3);
label_3ad500:
    // 0x3ad500: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad500u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD500 raw=0x0000005F");
label_3ad504:
    // 0x3ad504: 0xb1  tgeu        $zero, $zero, 2
    ctx->pc = 0x3ad504u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad508:
    // 0x3ad508: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x3ad508u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD508 raw=0x0000001F");
label_3ad50c:
    // 0x3ad50c: 0x8d  break       0, 2
    ctx->pc = 0x3ad50cu;
    runtime->handleBreak(rdram, ctx);
label_3ad510:
    // 0x3ad510: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad510u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x3AD510 raw=0x0000005D");
label_3ad514:
    // 0x3ad514: 0x8  jr          $zero
label_3ad518:
    if (ctx->pc == 0x3AD518u) {
        ctx->pc = 0x3AD518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD514u;
        // 0x3ad518: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD51Cu;
        goto label_3ad51c;
    }
    ctx->pc = 0x3AD514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AD518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD514u;
        // 0x3ad518: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD514u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AD51Cu;
label_3ad51c:
    // 0x3ad51c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ad51cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ad520:
    // 0x3ad520: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x3ad520u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad524:
    // 0x3ad524: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad524u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad528:
    // 0x3ad528: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x3ad528u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_3ad52c:
    // 0x3ad52c: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x3ad52cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_3ad530:
    // 0x3ad530: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad530u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ad534:
    // 0x3ad534: 0xab  .word       0x000000AB                   # sltu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad534u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ad538:
    // 0x3ad538: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x3ad538u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad53c:
    // 0x3ad53c: 0xcf  sync
    ctx->pc = 0x3ad53cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3ad540:
    // 0x3ad540: 0xbc  dsll32      $zero, $zero, 2
    ctx->pc = 0x3ad540u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 2));
label_3ad544:
    // 0x3ad544: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x3ad544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ad548:
    // 0x3ad548: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad548u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ad54c:
    // 0x3ad54c: 0xf4  teq         $zero, $zero, 3
    ctx->pc = 0x3ad54cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad550:
    // 0x3ad550: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x3ad550u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad554:
    // 0x3ad554: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x3ad554u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x3AD554 raw=0x0000001D");
label_3ad558:
    // 0x3ad558: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad558u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_3ad55c:
    // 0x3ad55c: 0xe3  .word       0x000000E3                   # negu        $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad55cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3ad560:
    // 0x3ad560: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad560u;
    ctx->hi = GPR_U64(ctx, 0);
label_3ad564:
    // 0x3ad564: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad564u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3ad568:
    // 0x3ad568: 0x5e  .word       0x0000005E                   # ddiv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad568u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AD568 raw=0x0000005E");
label_3ad56c:
    // 0x3ad56c: 0xe6  .word       0x000000E6                   # xor         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad56cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3ad570:
    // 0x3ad570: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x3ad570u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_3ad574:
    // 0x3ad574: 0x8  jr          $zero
label_3ad578:
    if (ctx->pc == 0x3AD578u) {
        ctx->pc = 0x3AD578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD574u;
        // 0x3ad578: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD57Cu;
        goto label_3ad57c;
    }
    ctx->pc = 0x3AD574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AD578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD574u;
        // 0x3ad578: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD574u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AD57Cu;
label_3ad57c:
    // 0x3ad57c: 0x99  .word       0x00000099                   # multu       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad57cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ad580:
    // 0x3ad580: 0x85  .word       0x00000085                   # INVALID     $zero, $zero, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad580u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AD580 raw=0x00000085");
label_3ad584:
    // 0x3ad584: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad584u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD584 raw=0x0000005F");
label_3ad588:
    // 0x3ad588: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x3ad588u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_3ad58c:
    // 0x3ad58c: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad58cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ad590:
    // 0x3ad590: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad590u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3ad594:
    // 0x3ad594: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x3ad594u;
    
label_3ad598:
    // 0x3ad598: 0x8d  break       0, 2
    ctx->pc = 0x3ad598u;
    runtime->handleBreak(rdram, ctx);
label_3ad59c:
    // 0x3ad59c: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x3ad59cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_3ad5a0:
    // 0x3ad5a0: 0xd8  .word       0x000000D8                   # mult        $zero, $zero, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ad5a4:
    // 0x3ad5a4: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x3ad5a4u;
    
label_3ad5a8:
    // 0x3ad5a8: 0x4d  break       0, 1
    ctx->pc = 0x3ad5a8u;
    runtime->handleBreak(rdram, ctx);
label_3ad5ac:
    // 0x3ad5ac: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x3ad5acu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad5b0:
    // 0x3ad5b0: 0x27  not         $zero, $zero
    ctx->pc = 0x3ad5b0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_3ad5b4:
    // 0x3ad5b4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x3ad5b4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad5b8:
    // 0x3ad5b8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x3ad5b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad5bc:
    // 0x3ad5bc: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x3ad5bcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad5c0:
    // 0x3ad5c0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad5c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x3AD5C0 raw=0x00000015");
label_3ad5c4:
    // 0x3ad5c4: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad5c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_3ad5c8:
    // 0x3ad5c8: 0xca  .word       0x000000CA                   # movz        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad5c8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3ad5cc:
    // 0x3ad5cc: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x3ad5ccu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad5d0:
    // 0x3ad5d0: 0xa8  .word       0x000000A8                   # mfsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad5d0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3ad5d4:
    // 0x3ad5d4: 0xc9  .word       0x000000C9                   # jalr        $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_3ad5d8:
    if (ctx->pc == 0x3AD5D8u) {
        ctx->pc = 0x3AD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5D4u;
        // 0x3ad5d8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5DCu;
        goto label_3ad5dc;
    }
    ctx->pc = 0x3AD5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5D4u;
        // 0x3ad5d8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD5D4u, 0x3AD5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD5DCu;
label_3ad5dc:
    // 0x3ad5dc: 0xe2  .word       0x000000E2                   # neg         $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad5dcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_3ad5e0:
    // 0x3ad5e0: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x3ad5e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_3ad5e4:
    // 0x3ad5e4: 0xc0  sll         $zero, $zero, 3
    ctx->pc = 0x3ad5e4u;
    
label_3ad5e8:
    // 0x3ad5e8: 0x8c  syscall     2
    ctx->pc = 0x3ad5e8u;
    ctx->pc = 0x3AD5ECu;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_3ad5ec:
    // 0x3ad5ec: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad5ecu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_3ad5f0:
    // 0x3ad5f0: 0x3fc90f00  .word       0x3FC90F00                   # lui         $t1, 0xF00 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3840 << 16));
label_3ad5f4:
    // 0x3ad5f4: 0x40490f00  .word       0x40490F00                   # cfc0        $t1, Random # 00000700 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad5f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AD5F4 raw=0x40490F00");
label_3ad5f8:
    // 0x3ad5f8: 0x4096cb00  .word       0x4096CB00                   # mtc0        $s6, Reserved25 # 00000300 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad5f8u;
    ctx->cop0_perf = GPR_U32(ctx, 22);
label_3ad5fc:
    // 0x3ad5fc: 0x40c90f00  .word       0x40C90F00                   # ctc0        $t1, Random # 00000700 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad5fcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x3AD5FC raw=0x40C90F00");
label_3ad600:
    // 0x3ad600: 0x40fb5300  .word       0x40FB5300                   # INVALID     $a3, $k1, 0x5300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad600u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x3AD600 raw=0x40FB5300");
label_3ad604:
    // 0x3ad604: 0x4116cb00  .word       0x4116CB00                   # INVALID     $t0, $s6, -0x3500 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x3ad604u;
    // BC0 (Condition: 0x16) - Handled by branch logic
label_3ad608:
    // 0x3ad608: 0x412fed00  .word       0x412FED00                   # INVALID     $t1, $t7, -0x1300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad608u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x3AD608 raw=0x412FED00");
label_3ad60c:
    // 0x3ad60c: 0x41490f00  .word       0x41490F00                   # INVALID     $t2, $t1, 0xF00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad60cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AD60C raw=0x41490F00");
label_3ad610:
    // 0x3ad610: 0x41623100  .word       0x41623100                   # INVALID     $t3, $v0, 0x3100 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad610u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x3AD610 raw=0x41623100");
label_3ad614:
    // 0x3ad614: 0x417b5300  .word       0x417B5300                   # INVALID     $t3, $k1, 0x5300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad614u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x3AD614 raw=0x417B5300");
label_3ad618:
    // 0x3ad618: 0x418a3a00  .word       0x418A3A00                   # INVALID     $t4, $t2, 0x3A00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad618u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x3AD618 raw=0x418A3A00");
label_3ad61c:
    // 0x3ad61c: 0x4196cb00  .word       0x4196CB00                   # INVALID     $t4, $s6, -0x3500 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad61cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x3AD61C raw=0x4196CB00");
label_3ad620:
    // 0x3ad620: 0x41a35c00  .word       0x41A35C00                   # INVALID     $t5, $v1, 0x5C00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad620u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3AD620 raw=0x41A35C00");
label_3ad624:
    // 0x3ad624: 0x41afed00  .word       0x41AFED00                   # INVALID     $t5, $t7, -0x1300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad624u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3AD624 raw=0x41AFED00");
label_3ad628:
    // 0x3ad628: 0x41bc7e00  .word       0x41BC7E00                   # INVALID     $t5, $gp, 0x7E00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad628u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3AD628 raw=0x41BC7E00");
label_3ad62c:
    // 0x3ad62c: 0x41c90f00  .word       0x41C90F00                   # INVALID     $t6, $t1, 0xF00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad62cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x3AD62C raw=0x41C90F00");
label_3ad630:
    // 0x3ad630: 0x41d5a000  .word       0x41D5A000                   # INVALID     $t6, $s5, -0x6000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad630u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x3AD630 raw=0x41D5A000");
label_3ad634:
    // 0x3ad634: 0x41e23100  .word       0x41E23100                   # INVALID     $t7, $v0, 0x3100 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad634u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AD634 raw=0x41E23100");
label_3ad638:
    // 0x3ad638: 0x41eec200  .word       0x41EEC200                   # INVALID     $t7, $t6, -0x3E00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad638u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AD638 raw=0x41EEC200");
label_3ad63c:
    // 0x3ad63c: 0x41fb5300  .word       0x41FB5300                   # INVALID     $t7, $k1, 0x5300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad63cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AD63C raw=0x41FB5300");
label_3ad640:
    // 0x3ad640: 0x4203f200  .word       0x4203F200                   # INVALID     $s0, $v1, -0xE00 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3ad640u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x3AD640 raw=0x4203F200");
label_3ad644:
    // 0x3ad644: 0x420a3a00  .word       0x420A3A00                   # INVALID     $s0, $t2, 0x3A00 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3ad644u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x3AD644 raw=0x420A3A00");
label_3ad648:
    // 0x3ad648: 0x42108300  .word       0x42108300                   # INVALID     $s0, $s0, -0x7D00 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3ad648u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x3AD648 raw=0x42108300");
label_3ad64c:
    // 0x3ad64c: 0x4216cb00  .word       0x4216CB00                   # INVALID     $s0, $s6, -0x3500 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3ad64cu;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x3AD64C raw=0x4216CB00");
label_3ad650:
    // 0x3ad650: 0x421d1400  .word       0x421D1400                   # INVALID     $s0, $sp, 0x1400 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3ad650u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x3AD650 raw=0x421D1400");
label_3ad654:
    // 0x3ad654: 0x42235c00  .word       0x42235C00                   # INVALID     $s1, $v1, 0x5C00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad654u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3AD654 raw=0x42235C00");
label_3ad658:
    // 0x3ad658: 0x4229a500  .word       0x4229A500                   # INVALID     $s1, $t1, -0x5B00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad658u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3AD658 raw=0x4229A500");
label_3ad65c:
    // 0x3ad65c: 0x422fed00  .word       0x422FED00                   # INVALID     $s1, $t7, -0x1300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad65cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3AD65C raw=0x422FED00");
label_3ad660:
    // 0x3ad660: 0x42363600  .word       0x42363600                   # INVALID     $s1, $s6, 0x3600 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad660u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3AD660 raw=0x42363600");
label_3ad664:
    // 0x3ad664: 0x423c7e00  .word       0x423C7E00                   # INVALID     $s1, $gp, 0x7E00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad664u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3AD664 raw=0x423C7E00");
label_3ad668:
    // 0x3ad668: 0x4242c700  .word       0x4242C700                   # INVALID     $s2, $v0, -0x3900 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad668u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AD668 raw=0x4242C700");
label_3ad66c:
    // 0x3ad66c: 0x42490f00  .word       0x42490F00                   # INVALID     $s2, $t1, 0xF00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad66cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AD66C raw=0x42490F00");
label_3ad670:
    // 0x3ad670: 0x0  nop
    ctx->pc = 0x3ad670u;
    // NOP
label_3ad674:
    // 0x3ad674: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad674u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ad678:
    // 0x3ad678: 0x43800000  .word       0x43800000                   # INVALID     $gp, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad678u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3AD678 raw=0x43800000");
label_3ad67c:
    // 0x3ad67c: 0x3f22f984  .word       0x3F22F984                   # lui         $v0, 0xF984 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63876 << 16));
label_3ad680:
    // 0x3ad680: 0x3fc90f80  .word       0x3FC90F80                   # lui         $t1, 0xF80 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad680u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3968 << 16));
label_3ad684:
    // 0x3ad684: 0x37354443  ori         $s5, $t9, 0x4443
    ctx->pc = 0x3ad684u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)17475);
label_3ad688:
    // 0x3ad688: 0x37354400  ori         $s5, $t9, 0x4400
    ctx->pc = 0x3ad688u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)17408);
label_3ad68c:
    // 0x3ad68c: 0x2e85a308  sltiu       $a1, $s4, -0x5CF8
    ctx->pc = 0x3ad68cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4294943496) ? 1 : 0);
label_3ad690:
    // 0x3ad690: 0x2e85a300  sltiu       $a1, $s4, -0x5D00
    ctx->pc = 0x3ad690u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4294943488) ? 1 : 0);
label_3ad694:
    // 0x3ad694: 0x248d3132  addiu       $t5, $a0, 0x3132
    ctx->pc = 0x3ad694u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 12594));
label_3ad698:
    // 0x3ad698: 0x0  nop
    ctx->pc = 0x3ad698u;
    // NOP
label_3ad69c:
    // 0x3ad69c: 0x3ff00000  .word       0x3FF00000                   # lui         $s0, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad69cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)0 << 16));
label_3ad6a0:
    // 0x3ad6a0: 0x5555554c  bnel        $t2, $s5, . + 4 + (0x554C << 2)
label_3ad6a4:
    if (ctx->pc == 0x3AD6A4u) {
        ctx->pc = 0x3AD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6A0u;
        // 0x3ad6a4: 0x3fa55555  .word       0x3FA55555                   # lui         $a1, 0x5555 # 03A00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6A8u;
        goto label_3ad6a8;
    }
    ctx->pc = 0x3AD6A0u;
    {
        const bool branch_taken_0x3ad6a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x3ad6a0) {
            ctx->pc = 0x3AD6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD6A0u;
            // 0x3ad6a4: 0x3fa55555  .word       0x3FA55555                   # lui         $a1, 0x5555 # 03A00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2BD4u;
            return;
        }
    }
    ctx->pc = 0x3AD6A8u;
label_3ad6a8:
    // 0x3ad6a8: 0x16c15177  bne         $s6, $at, . + 4 + (0x5177 << 2)
label_3ad6ac:
    if (ctx->pc == 0x3AD6ACu) {
        ctx->pc = 0x3AD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6A8u;
        // 0x3ad6ac: 0xbf56c16c  cache       0x16, -0x3E94($k0) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6B0u;
        goto label_3ad6b0;
    }
    ctx->pc = 0x3AD6A8u;
    {
        const bool branch_taken_0x3ad6a8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 1));
        ctx->pc = 0x3AD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6A8u;
        // 0x3ad6ac: 0xbf56c16c  cache       0x16, -0x3E94($k0) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6a8) {
            ctx->pc = 0x3C1C88u;
            return;
        }
    }
    ctx->pc = 0x3AD6B0u;
label_3ad6b0:
    // 0x3ad6b0: 0x19cb1590  .word       0x19CB1590                   # blez        $t6, . + 4 + (0x1590 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_3ad6b4:
    if (ctx->pc == 0x3AD6B4u) {
        ctx->pc = 0x3AD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6B0u;
        // 0x3ad6b4: 0x3efa01a0  .word       0x3EFA01A0                   # lui         $k0, 0x1A0 # 02E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)416 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6B8u;
        goto label_3ad6b8;
    }
    ctx->pc = 0x3AD6B0u;
    {
        const bool branch_taken_0x3ad6b0 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3AD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6B0u;
        // 0x3ad6b4: 0x3efa01a0  .word       0x3EFA01A0                   # lui         $k0, 0x1A0 # 02E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)416 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6b0) {
            ctx->pc = 0x3B2CF4u;
            return;
        }
    }
    ctx->pc = 0x3AD6B8u;
label_3ad6b8:
    // 0x3ad6b8: 0x809c52ad  lb          $gp, 0x52AD($a0)
    ctx->pc = 0x3ad6b8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 21165)));
label_3ad6bc:
    // 0x3ad6bc: 0xbe927e4f  cache       0x12, 0x7E4F($s4)
    ctx->pc = 0x3ad6bcu;
    // CACHE instruction (ignored)
label_3ad6c0:
    // 0x3ad6c0: 0xbdb4b1c4  cache       0x14, -0x4E3C($t5)
    ctx->pc = 0x3ad6c0u;
    // CACHE instruction (ignored)
label_3ad6c4:
    // 0x3ad6c4: 0x3e21ee9e  .word       0x3E21EE9E                   # lui         $at, 0xEE9E # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61086 << 16));
label_3ad6c8:
    // 0x3ad6c8: 0xbe8838d4  cache       0x08, 0x38D4($s4)
    ctx->pc = 0x3ad6c8u;
    // CACHE instruction (ignored)
label_3ad6cc:
    // 0x3ad6cc: 0xbda8fae9  cache       0x08, -0x517($t5)
    ctx->pc = 0x3ad6ccu;
    // CACHE instruction (ignored)
label_3ad6d0:
    // 0x3ad6d0: 0xbe8838d4  cache       0x08, 0x38D4($s4)
    ctx->pc = 0x3ad6d0u;
    // CACHE instruction (ignored)
label_3ad6d4:
    // 0x3ad6d4: 0xbda8fae9  cache       0x08, -0x517($t5)
    ctx->pc = 0x3ad6d4u;
    // CACHE instruction (ignored)
label_3ad6d8:
    // 0x3ad6d8: 0xbdb4b1c4  cache       0x14, -0x4E3C($t5)
    ctx->pc = 0x3ad6d8u;
    // CACHE instruction (ignored)
label_3ad6dc:
    // 0x3ad6dc: 0x3e21ee9e  .word       0x3E21EE9E                   # lui         $at, 0xEE9E # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61086 << 16));
label_3ad6e0:
    // 0x3ad6e0: 0x809c52ad  lb          $gp, 0x52AD($a0)
    ctx->pc = 0x3ad6e0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 21165)));
label_3ad6e4:
    // 0x3ad6e4: 0xbe927e4f  cache       0x12, 0x7E4F($s4)
    ctx->pc = 0x3ad6e4u;
    // CACHE instruction (ignored)
label_3ad6e8:
    // 0x3ad6e8: 0x19cb1590  .word       0x19CB1590                   # blez        $t6, . + 4 + (0x1590 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_3ad6ec:
    if (ctx->pc == 0x3AD6ECu) {
        ctx->pc = 0x3AD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6E8u;
        // 0x3ad6ec: 0x3efa01a0  .word       0x3EFA01A0                   # lui         $k0, 0x1A0 # 02E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)416 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6F0u;
        goto label_3ad6f0;
    }
    ctx->pc = 0x3AD6E8u;
    {
        const bool branch_taken_0x3ad6e8 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3AD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6E8u;
        // 0x3ad6ec: 0x3efa01a0  .word       0x3EFA01A0                   # lui         $k0, 0x1A0 # 02E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)416 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6e8) {
            ctx->pc = 0x3B2D2Cu;
            return;
        }
    }
    ctx->pc = 0x3AD6F0u;
label_3ad6f0:
    // 0x3ad6f0: 0x16c15177  bne         $s6, $at, . + 4 + (0x5177 << 2)
label_3ad6f4:
    if (ctx->pc == 0x3AD6F4u) {
        ctx->pc = 0x3AD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6F0u;
        // 0x3ad6f4: 0xbf56c16c  cache       0x16, -0x3E94($k0) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD6F8u;
        goto label_3ad6f8;
    }
    ctx->pc = 0x3AD6F0u;
    {
        const bool branch_taken_0x3ad6f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 1));
        ctx->pc = 0x3AD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6F0u;
        // 0x3ad6f4: 0xbf56c16c  cache       0x16, -0x3E94($k0) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6f0) {
            ctx->pc = 0x3C1CD0u;
            return;
        }
    }
    ctx->pc = 0x3AD6F8u;
label_3ad6f8:
    // 0x3ad6f8: 0x5555554c  bnel        $t2, $s5, . + 4 + (0x554C << 2)
label_3ad6fc:
    if (ctx->pc == 0x3AD6FCu) {
        ctx->pc = 0x3AD6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6F8u;
        // 0x3ad6fc: 0x3fa55555  .word       0x3FA55555                   # lui         $a1, 0x5555 # 03A00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD700u;
        goto label_3ad700;
    }
    ctx->pc = 0x3AD6F8u;
    {
        const bool branch_taken_0x3ad6f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x3ad6f8) {
            ctx->pc = 0x3AD6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD6F8u;
            // 0x3ad6fc: 0x3fa55555  .word       0x3FA55555                   # lui         $a1, 0x5555 # 03A00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2C2Cu;
            return;
        }
    }
    ctx->pc = 0x3AD700u;
label_3ad700:
    // 0x3ad700: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3ad700u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3ad704:
    // 0x3ad704: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3ad704u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3ad708:
    // 0x3ad708: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x3ad708u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad70c:
    // 0x3ad70c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x3ad70cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad710:
    // 0x3ad710: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x3ad710u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_3ad714:
    // 0x3ad714: 0x3ff921fb  .word       0x3FF921FB                   # lui         $t9, 0x21FB # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad714u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8699 << 16));
label_3ad718:
    // 0x3ad718: 0x0  nop
    ctx->pc = 0x3ad718u;
    // NOP
label_3ad71c:
    // 0x3ad71c: 0x3e74442d  .word       0x3E74442D                   # lui         $s4, 0x442D # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad71cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17453 << 16));
label_3ad720:
    // 0x3ad720: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x3ad720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_3ad724:
    // 0x3ad724: 0x3cf84698  .word       0x3CF84698                   # lui         $t8, 0x4698 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad724u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)18072 << 16));
label_3ad728:
    // 0x3ad728: 0x60000000  daddi       $zero, $zero, 0x0
    ctx->pc = 0x3ad728u;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)0; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_3ad72c:
    // 0x3ad72c: 0x3b78cc51  xori        $t8, $k1, 0xCC51
    ctx->pc = 0x3ad72cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 27) ^ (uint64_t)(uint16_t)52305);
label_3ad730:
    // 0x3ad730: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x3ad730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_3ad734:
    // 0x3ad734: 0x39f01b83  xori        $s0, $t7, 0x1B83
    ctx->pc = 0x3ad734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)7043);
label_3ad738:
    // 0x3ad738: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x3ad738u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_3ad73c:
    // 0x3ad73c: 0x387a2520  xori        $k0, $v1, 0x2520
    ctx->pc = 0x3ad73cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9504);
label_3ad740:
    // 0x3ad740: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x3ad740u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_3ad744:
    // 0x3ad744: 0x36e38222  ori         $v1, $s7, 0x8222
    ctx->pc = 0x3ad744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)33314);
label_3ad748:
    // 0x3ad748: 0x0  nop
    ctx->pc = 0x3ad748u;
    // NOP
label_3ad74c:
    // 0x3ad74c: 0x3569f31d  ori         $t1, $t3, 0xF31D
    ctx->pc = 0x3ad74cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)62237);
label_3ad750:
    // 0x3ad750: 0x0  nop
    ctx->pc = 0x3ad750u;
    // NOP
label_3ad754:
    // 0x3ad754: 0x0  nop
    ctx->pc = 0x3ad754u;
    // NOP
label_3ad758:
    // 0x3ad758: 0x0  nop
    ctx->pc = 0x3ad758u;
    // NOP
label_3ad75c:
    // 0x3ad75c: 0x3ff00000  .word       0x3FF00000                   # lui         $s0, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad75cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)0 << 16));
label_3ad760:
    // 0x3ad760: 0x0  nop
    ctx->pc = 0x3ad760u;
    // NOP
label_3ad764:
    // 0x3ad764: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad764u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x3AD764 raw=0x41700000");
label_3ad768:
    // 0x3ad768: 0x0  nop
    ctx->pc = 0x3ad768u;
    // NOP
label_3ad76c:
    // 0x3ad76c: 0x3e700000  .word       0x3E700000                   # lui         $s0, 0x0 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad76cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)0 << 16));
label_3ad770:
    // 0x3ad770: 0x0  nop
    ctx->pc = 0x3ad770u;
    // NOP
label_3ad774:
    // 0x3ad774: 0x3fe00000  .word       0x3FE00000                   # lui         $zero, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad774u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ad778:
    // 0x3ad778: 0x55555549  bnel        $t2, $s5, . + 4 + (0x5549 << 2)
label_3ad77c:
    if (ctx->pc == 0x3AD77Cu) {
        ctx->pc = 0x3AD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD778u;
        // 0x3ad77c: 0xbfc55555  cache       0x05, 0x5555($fp) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD780u;
        goto label_3ad780;
    }
    ctx->pc = 0x3AD778u;
    {
        const bool branch_taken_0x3ad778 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x3ad778) {
            ctx->pc = 0x3AD77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD778u;
            // 0x3ad77c: 0xbfc55555  cache       0x05, 0x5555($fp) (Delay Slot)
            // CACHE instruction (ignored)
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2CA0u;
            return;
        }
    }
    ctx->pc = 0x3AD780u;
label_3ad780:
    // 0x3ad780: 0x1110f8a6  beq         $t0, $s0, . + 4 + (-0x75A << 2)
label_3ad784:
    if (ctx->pc == 0x3AD784u) {
        ctx->pc = 0x3AD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD780u;
        // 0x3ad784: 0x3f811111  .word       0x3F811111                   # lui         $at, 0x1111 # 03800000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4369 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD788u;
        goto label_3ad788;
    }
    ctx->pc = 0x3AD780u;
    {
        const bool branch_taken_0x3ad780 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 16));
        ctx->pc = 0x3AD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD780u;
        // 0x3ad784: 0x3f811111  .word       0x3F811111                   # lui         $at, 0x1111 # 03800000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4369 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad780) {
            ctx->pc = 0x3ABA1Cu;
            return;
        }
    }
    ctx->pc = 0x3AD788u;
label_3ad788:
    // 0x3ad788: 0x19c161d5  .word       0x19C161D5                   # blez        $t6, . + 4 + (0x61D5 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_3ad78c:
    if (ctx->pc == 0x3AD78Cu) {
        ctx->pc = 0x3AD78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD788u;
        // 0x3ad78c: 0xbf2a01a0  cache       0x0A, 0x1A0($t9) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD790u;
        goto label_3ad790;
    }
    ctx->pc = 0x3AD788u;
    {
        const bool branch_taken_0x3ad788 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3AD78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD788u;
        // 0x3ad78c: 0xbf2a01a0  cache       0x0A, 0x1A0($t9) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad788) {
            ctx->pc = 0x3C5EE0u;
            return;
        }
    }
    ctx->pc = 0x3AD790u;
label_3ad790:
    // 0x3ad790: 0x57b1fe7d  bnel        $sp, $s1, . + 4 + (-0x183 << 2)
label_3ad794:
    if (ctx->pc == 0x3AD794u) {
        ctx->pc = 0x3AD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD790u;
        // 0x3ad794: 0x3ec71de3  .word       0x3EC71DE3                   # lui         $a3, 0x1DE3 # 02C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7651 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD798u;
        goto label_3ad798;
    }
    ctx->pc = 0x3AD790u;
    {
        const bool branch_taken_0x3ad790 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 17));
        if (branch_taken_0x3ad790) {
            ctx->pc = 0x3AD794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD790u;
            // 0x3ad794: 0x3ec71de3  .word       0x3EC71DE3                   # lui         $a3, 0x1DE3 # 02C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7651 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad188;
        }
    }
    ctx->pc = 0x3AD798u;
label_3ad798:
    // 0x3ad798: 0x8a2b9ceb  lwl         $t3, -0x6315($s1)
    ctx->pc = 0x3ad798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294941931); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_3ad79c:
    // 0x3ad79c: 0xbe5ae5e6  cache       0x1A, -0x1A1A($s2)
    ctx->pc = 0x3ad79cu;
    // CACHE instruction (ignored)
label_3ad7a0:
    // 0x3ad7a0: 0x5acfd57c  .word       0x5ACFD57C                   # blezl       $s6, . + 4 + (-0x2A84 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
label_3ad7a4:
    if (ctx->pc == 0x3AD7A4u) {
        ctx->pc = 0x3AD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7A0u;
        // 0x3ad7a4: 0x3de5d93a  .word       0x3DE5D93A                   # lui         $a1, 0xD93A # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55610 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7A8u;
        goto label_3ad7a8;
    }
    ctx->pc = 0x3AD7A0u;
    {
        const bool branch_taken_0x3ad7a0 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x3ad7a0) {
            ctx->pc = 0x3AD7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD7A0u;
            // 0x3ad7a4: 0x3de5d93a  .word       0x3DE5D93A                   # lui         $a1, 0xD93A # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55610 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2D94u;
            return;
        }
    }
    ctx->pc = 0x3AD7A8u;
label_3ad7a8:
    // 0x3ad7a8: 0x5acfd57c  .word       0x5ACFD57C                   # blezl       $s6, . + 4 + (-0x2A84 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
label_3ad7ac:
    if (ctx->pc == 0x3AD7ACu) {
        ctx->pc = 0x3AD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7A8u;
        // 0x3ad7ac: 0x3de5d93a  .word       0x3DE5D93A                   # lui         $a1, 0xD93A # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55610 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7B0u;
        goto label_3ad7b0;
    }
    ctx->pc = 0x3AD7A8u;
    {
        const bool branch_taken_0x3ad7a8 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x3ad7a8) {
            ctx->pc = 0x3AD7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD7A8u;
            // 0x3ad7ac: 0x3de5d93a  .word       0x3DE5D93A                   # lui         $a1, 0xD93A # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55610 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2D9Cu;
            return;
        }
    }
    ctx->pc = 0x3AD7B0u;
label_3ad7b0:
    // 0x3ad7b0: 0x8a2b9ceb  lwl         $t3, -0x6315($s1)
    ctx->pc = 0x3ad7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294941931); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_3ad7b4:
    // 0x3ad7b4: 0xbe5ae5e6  cache       0x1A, -0x1A1A($s2)
    ctx->pc = 0x3ad7b4u;
    // CACHE instruction (ignored)
label_3ad7b8:
    // 0x3ad7b8: 0x57b1fe7d  bnel        $sp, $s1, . + 4 + (-0x183 << 2)
label_3ad7bc:
    if (ctx->pc == 0x3AD7BCu) {
        ctx->pc = 0x3AD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7B8u;
        // 0x3ad7bc: 0x3ec71de3  .word       0x3EC71DE3                   # lui         $a3, 0x1DE3 # 02C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7651 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7C0u;
        goto label_3ad7c0;
    }
    ctx->pc = 0x3AD7B8u;
    {
        const bool branch_taken_0x3ad7b8 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 17));
        if (branch_taken_0x3ad7b8) {
            ctx->pc = 0x3AD7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD7B8u;
            // 0x3ad7bc: 0x3ec71de3  .word       0x3EC71DE3                   # lui         $a3, 0x1DE3 # 02C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7651 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad1b0;
        }
    }
    ctx->pc = 0x3AD7C0u;
label_3ad7c0:
    // 0x3ad7c0: 0x19c161d5  .word       0x19C161D5                   # blez        $t6, . + 4 + (0x61D5 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_3ad7c4:
    if (ctx->pc == 0x3AD7C4u) {
        ctx->pc = 0x3AD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7C0u;
        // 0x3ad7c4: 0xbf2a01a0  cache       0x0A, 0x1A0($t9) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7C8u;
        goto label_3ad7c8;
    }
    ctx->pc = 0x3AD7C0u;
    {
        const bool branch_taken_0x3ad7c0 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3AD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7C0u;
        // 0x3ad7c4: 0xbf2a01a0  cache       0x0A, 0x1A0($t9) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7c0) {
            ctx->pc = 0x3C5F18u;
            return;
        }
    }
    ctx->pc = 0x3AD7C8u;
label_3ad7c8:
    // 0x3ad7c8: 0x1110f8a6  beq         $t0, $s0, . + 4 + (-0x75A << 2)
label_3ad7cc:
    if (ctx->pc == 0x3AD7CCu) {
        ctx->pc = 0x3AD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7C8u;
        // 0x3ad7cc: 0x3f811111  .word       0x3F811111                   # lui         $at, 0x1111 # 03800000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4369 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7D0u;
        goto label_3ad7d0;
    }
    ctx->pc = 0x3AD7C8u;
    {
        const bool branch_taken_0x3ad7c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 16));
        ctx->pc = 0x3AD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7C8u;
        // 0x3ad7cc: 0x3f811111  .word       0x3F811111                   # lui         $at, 0x1111 # 03800000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4369 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7c8) {
            ctx->pc = 0x3ABA64u;
            return;
        }
    }
    ctx->pc = 0x3AD7D0u;
label_3ad7d0:
    // 0x3ad7d0: 0x55555549  bnel        $t2, $s5, . + 4 + (0x5549 << 2)
label_3ad7d4:
    if (ctx->pc == 0x3AD7D4u) {
        ctx->pc = 0x3AD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7D0u;
        // 0x3ad7d4: 0xbfc55555  cache       0x05, 0x5555($fp) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7D8u;
        goto label_3ad7d8;
    }
    ctx->pc = 0x3AD7D0u;
    {
        const bool branch_taken_0x3ad7d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x3ad7d0) {
            ctx->pc = 0x3AD7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD7D0u;
            // 0x3ad7d4: 0xbfc55555  cache       0x05, 0x5555($fp) (Delay Slot)
            // CACHE instruction (ignored)
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2CF8u;
            return;
        }
    }
    ctx->pc = 0x3AD7D8u;
label_3ad7d8:
    // 0x3ad7d8: 0x55555549  bnel        $t2, $s5, . + 4 + (0x5549 << 2)
label_3ad7dc:
    if (ctx->pc == 0x3AD7DCu) {
        ctx->pc = 0x3AD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7D8u;
        // 0x3ad7dc: 0xbfc55555  cache       0x05, 0x5555($fp) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7E0u;
        goto label_3ad7e0;
    }
    ctx->pc = 0x3AD7D8u;
    {
        const bool branch_taken_0x3ad7d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x3ad7d8) {
            ctx->pc = 0x3AD7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD7D8u;
            // 0x3ad7dc: 0xbfc55555  cache       0x05, 0x5555($fp) (Delay Slot)
            // CACHE instruction (ignored)
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2D00u;
            return;
        }
    }
    ctx->pc = 0x3AD7E0u;
label_3ad7e0:
    // 0x3ad7e0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x3ad7e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad7e4:
    // 0x3ad7e4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x3ad7e4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3ad7e8:
    // 0x3ad7e8: 0x9  jalr        $zero, $zero
label_3ad7ec:
    if (ctx->pc == 0x3AD7ECu) {
        ctx->pc = 0x3AD7F0u;
        goto label_3ad7f0;
    }
    ctx->pc = 0x3AD7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD7E8u, 0x3AD7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD7F0u;
label_3ad7f0:
    // 0x3ad7f0: 0x3fc90000  .word       0x3FC90000                   # lui         $t1, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad7f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)0 << 16));
label_3ad7f4:
    // 0x3ad7f4: 0x39f00000  xori        $s0, $t7, 0x0
    ctx->pc = 0x3ad7f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
label_3ad7f8:
    // 0x3ad7f8: 0x37da0000  ori         $k0, $fp, 0x0
    ctx->pc = 0x3ad7f8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)0);
label_3ad7fc:
    // 0x3ad7fc: 0x33a20000  andi        $v0, $sp, 0x0
    ctx->pc = 0x3ad7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)0);
label_3ad800:
    // 0x3ad800: 0x2e840000  sltiu       $a0, $s4, 0x0
    ctx->pc = 0x3ad800u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)0) ? 1 : 0);
label_3ad804:
    // 0x3ad804: 0x2b500000  slti        $s0, $k0, 0x0
    ctx->pc = 0x3ad804u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 26) < (int64_t)(int32_t)0) ? 1 : 0);
label_3ad808:
    // 0x3ad808: 0x27c20000  addiu       $v0, $fp, 0x0
    ctx->pc = 0x3ad808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 0));
label_3ad80c:
    // 0x3ad80c: 0x22d00000  addi        $s0, $s6, 0x0
    ctx->pc = 0x3ad80cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 22), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_3ad810:
    // 0x3ad810: 0x1fc40000  .word       0x1FC40000                   # bgtz        $fp, . + 4 + (0x0 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_3ad814:
    if (ctx->pc == 0x3AD814u) {
        ctx->pc = 0x3AD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD810u;
        // 0x3ad814: 0x1bc60000  .word       0x1BC60000                   # blez        $fp, . + 4 + (0x0 << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3AD814 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD818u;
        goto label_3ad818;
    }
    ctx->pc = 0x3AD810u;
    {
        const bool branch_taken_0x3ad810 = (GPR_S32(ctx, 30) > 0);
        ctx->pc = 0x3AD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD810u;
        // 0x3ad814: 0x1bc60000  .word       0x1BC60000                   # blez        $fp, . + 4 + (0x0 << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3AD814 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad810) {
            ctx->pc = 0x3AD814u;
            goto label_3ad814;
        }
    }
    ctx->pc = 0x3AD818u;
label_3ad818:
    // 0x3ad818: 0x17440000  bne         $k0, $a0, . + 4 + (0x0 << 2)
label_3ad81c:
    if (ctx->pc == 0x3AD81Cu) {
        ctx->pc = 0x3AD820u;
        goto label_3ad820;
    }
    ctx->pc = 0x3AD818u;
    {
        const bool branch_taken_0x3ad818 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ad818) {
            ctx->pc = 0x3AD81Cu;
            goto label_3ad81c;
        }
    }
    ctx->pc = 0x3AD820u;
label_3ad820:
    // 0x3ad820: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad820u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ad824:
    // 0x3ad824: 0x43800000  .word       0x43800000                   # INVALID     $gp, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad824u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3AD824 raw=0x43800000");
label_3ad828:
    // 0x3ad828: 0x3b800000  xori        $zero, $gp, 0x0
    ctx->pc = 0x3ad828u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)0);
label_3ad82c:
    // 0x3ad82c: 0x0  nop
    ctx->pc = 0x3ad82cu;
    // NOP
label_3ad830:
    // 0x3ad830: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad830u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ad834:
    // 0x3ad834: 0x3f490fda  .word       0x3F490FDA                   # lui         $t1, 0xFDA # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad834u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4058 << 16));
label_3ad838:
    // 0x3ad838: 0x33222168  andi        $v0, $t9, 0x2168
    ctx->pc = 0x3ad838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)8552);
label_3ad83c:
    // 0x3ad83c: 0x0  nop
    ctx->pc = 0x3ad83cu;
    // NOP
label_3ad840:
    // 0x3ad840: 0x3eaaaaab  .word       0x3EAAAAAB                   # lui         $t2, 0xAAAB # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad840u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_3ad844:
    // 0x3ad844: 0x3e088889  .word       0x3E088889                   # lui         $t0, 0x8889 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad844u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34953 << 16));
label_3ad848:
    // 0x3ad848: 0x3d5d0dd1  .word       0x3D5D0DD1                   # lui         $sp, 0xDD1 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad848u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)3537 << 16));
label_3ad84c:
    // 0x3ad84c: 0x3cb327a4  .word       0x3CB327A4                   # lui         $s3, 0x27A4 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad84cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)10148 << 16));
label_3ad850:
    // 0x3ad850: 0x3c11371f  lui         $s1, 0x371F
    ctx->pc = 0x3ad850u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)14111 << 16));
label_3ad854:
    // 0x3ad854: 0x3b6b6916  xori        $t3, $k1, 0x6916
    ctx->pc = 0x3ad854u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 27) ^ (uint64_t)(uint16_t)26902);
label_3ad858:
    // 0x3ad858: 0x3abede48  xori        $fp, $s5, 0xDE48
    ctx->pc = 0x3ad858u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)56904);
label_3ad85c:
    // 0x3ad85c: 0x3a1a26c8  xori        $k0, $s0, 0x26C8
    ctx->pc = 0x3ad85cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)9928);
label_3ad860:
    // 0x3ad860: 0x398137b9  xori        $at, $t4, 0x37B9
    ctx->pc = 0x3ad860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)14265);
label_3ad864:
    // 0x3ad864: 0x38a3f445  xori        $v1, $a1, 0xF445
    ctx->pc = 0x3ad864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)62533);
label_3ad868:
    // 0x3ad868: 0x3895c07a  xori        $s5, $a0, 0xC07A
    ctx->pc = 0x3ad868u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)49274);
label_3ad86c:
    // 0x3ad86c: 0xb79bae5f  sdr         $k1, -0x51A1($gp)
    ctx->pc = 0x3ad86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294946399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 27); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ad870:
    // 0x3ad870: 0x37d95384  ori         $t9, $fp, 0x5384
    ctx->pc = 0x3ad870u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)21380);
label_3ad874:
    // 0x3ad874: 0x0  nop
    ctx->pc = 0x3ad874u;
    // NOP
label_3ad878:
    // 0x3ad878: 0x8800759c  lwl         $zero, 0x759C($zero)
    ctx->pc = 0x3ad878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 30108); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_3ad87c:
    // 0x3ad87c: 0x7e37e43c  sq          $s7, -0x1BC4($s1)
    ctx->pc = 0x3ad87cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294960188), GPR_VEC(ctx, 23));
label_3ad880:
    // 0x3ad880: 0x8800759c  lwl         $zero, 0x759C($zero)
    ctx->pc = 0x3ad880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 30108); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_3ad884:
    // 0x3ad884: 0x7e37e43c  sq          $s7, -0x1BC4($s1)
    ctx->pc = 0x3ad884u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294960188), GPR_VEC(ctx, 23));
label_3ad888:
    // 0x3ad888: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad888u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AD888 raw=0x00000001");
label_3ad88c:
    // 0x3ad88c: 0x0  nop
    ctx->pc = 0x3ad88cu;
    // NOP
label_3ad890:
    // 0x3ad890: 0x0  nop
    ctx->pc = 0x3ad890u;
    // NOP
label_3ad894:
    // 0x3ad894: 0x43500000  .word       0x43500000                   # INVALID     $k0, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ad894u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AD894 raw=0x43500000");
label_3ad898:
    // 0x3ad898: 0x0  nop
    ctx->pc = 0x3ad898u;
    // NOP
label_3ad89c:
    // 0x3ad89c: 0x3c900000  .word       0x3C900000                   # lui         $s0, 0x0 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad89cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)0 << 16));
label_3ad8a0:
    // 0x3ad8a0: 0x8800759c  lwl         $zero, 0x759C($zero)
    ctx->pc = 0x3ad8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 30108); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_3ad8a4:
    // 0x3ad8a4: 0x7e37e43c  sq          $s7, -0x1BC4($s1)
    ctx->pc = 0x3ad8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294960188), GPR_VEC(ctx, 23));
label_3ad8a8:
    // 0x3ad8a8: 0xc2f8f359  ll          $t8, -0xCA7($s7)
    ctx->pc = 0x3ad8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294964057); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ad8ac:
    // 0x3ad8ac: 0x1a56e1f  .word       0x01A56E1F                   # ddivu       $t5, $t5, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad8acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD8AC raw=0x01A56E1F");
label_3ad8b0:
    // 0x3ad8b0: 0xc2f8f359  ll          $t8, -0xCA7($s7)
    ctx->pc = 0x3ad8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294964057); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3ad8b4:
    // 0x3ad8b4: 0x1a56e1f  .word       0x01A56E1F                   # ddivu       $t5, $t5, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad8b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x3AD8B4 raw=0x01A56E1F");
label_3ad8b8:
    // 0x3ad8b8: 0x8800759c  lwl         $zero, 0x759C($zero)
    ctx->pc = 0x3ad8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 30108); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_3ad8bc:
    // 0x3ad8bc: 0x7e37e43c  sq          $s7, -0x1BC4($s1)
    ctx->pc = 0x3ad8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294960188), GPR_VEC(ctx, 23));
label_3ad8c0:
    // 0x3ad8c0: 0x3eed6338  .word       0x3EED6338                   # lui         $t5, 0x6338 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad8c0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)25400 << 16));
label_3ad8c4:
    // 0x3ad8c4: 0x3f490fda  .word       0x3F490FDA                   # lui         $t1, 0xFDA # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4058 << 16));
label_3ad8c8:
    // 0x3ad8c8: 0x3f7b985e  .word       0x3F7B985E                   # lui         $k1, 0x985E # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad8c8u;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)39006 << 16));
label_3ad8cc:
    // 0x3ad8cc: 0x3fc90fda  .word       0x3FC90FDA                   # lui         $t1, 0xFDA # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad8ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4058 << 16));
label_3ad8d0:
    // 0x3ad8d0: 0x31ac3769  andi        $t4, $t5, 0x3769
    ctx->pc = 0x3ad8d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)14185);
label_3ad8d4:
    // 0x3ad8d4: 0x33222168  andi        $v0, $t9, 0x2168
    ctx->pc = 0x3ad8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)8552);
label_3ad8d8:
    // 0x3ad8d8: 0x33140fb4  andi        $s4, $t8, 0xFB4
    ctx->pc = 0x3ad8d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4020);
label_3ad8dc:
    // 0x3ad8dc: 0x33a22168  andi        $v0, $sp, 0x2168
    ctx->pc = 0x3ad8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)8552);
label_3ad8e0:
    // 0x3ad8e0: 0x3eaaaaab  .word       0x3EAAAAAB                   # lui         $t2, 0xAAAB # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_3ad8e4:
    // 0x3ad8e4: 0xbe4ccccd  cache       0x0C, -0x3333($s2)
    ctx->pc = 0x3ad8e4u;
    // CACHE instruction (ignored)
label_3ad8e8:
    // 0x3ad8e8: 0x3e124925  .word       0x3E124925                   # lui         $s2, 0x4925 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)18725 << 16));
label_3ad8ec:
    // 0x3ad8ec: 0xbde38e38  cache       0x03, -0x71C8($t7)
    ctx->pc = 0x3ad8ecu;
    // CACHE instruction (ignored)
label_3ad8f0:
    // 0x3ad8f0: 0x3dba2e6e  .word       0x3DBA2E6E                   # lui         $k0, 0x2E6E # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad8f0u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)11886 << 16));
label_3ad8f4:
    // 0x3ad8f4: 0xbd9d8795  cache       0x1D, -0x786B($t4)
    ctx->pc = 0x3ad8f4u;
    // CACHE instruction (ignored)
label_3ad8f8:
    // 0x3ad8f8: 0x3d886b35  .word       0x3D886B35                   # lui         $t0, 0x6B35 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)27445 << 16));
label_3ad8fc:
    // 0x3ad8fc: 0xbd6ef16b  cache       0x0E, -0xE95($t3)
    ctx->pc = 0x3ad8fcu;
    // CACHE instruction (ignored)
label_3ad900:
    // 0x3ad900: 0x3d4bda59  .word       0x3D4BDA59                   # lui         $t3, 0xDA59 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad900u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)55897 << 16));
label_3ad904:
    // 0x3ad904: 0xbd15a221  cache       0x15, -0x5DDF($t0)
    ctx->pc = 0x3ad904u;
    // CACHE instruction (ignored)
label_3ad908:
    // 0x3ad908: 0x3c8569d7  .word       0x3C8569D7                   # lui         $a1, 0x69D7 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27095 << 16));
label_3ad90c:
    // 0x3ad90c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad90cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3ad910:
    // 0x3ad910: 0x7149f2ca  .word       0x7149F2CA                   # INVALID     $t2, $t1, -0xD36 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ad910u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xA at 0x3AD910 raw=0x7149F2CA");
label_3ad914:
    // 0x3ad914: 0x0  nop
    ctx->pc = 0x3ad914u;
    // NOP
label_3ad918:
    // 0x3ad918: 0x74727173  .word       0x74727173                   # INVALID     $v1, $s2, 0x7173 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad918u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AD918 raw=0x74727173");
label_3ad91c:
    // 0x3ad91c: 0x0  nop
    ctx->pc = 0x3ad91cu;
    // NOP
label_3ad920:
    // 0x3ad920: 0x0  nop
    ctx->pc = 0x3ad920u;
    // NOP
label_3ad924:
    // 0x3ad924: 0x7ff80000  sq          $t8, 0x0($ra)
    ctx->pc = 0x3ad924u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 0), GPR_VEC(ctx, 24));
label_3ad928:
    // 0x3ad928: 0x736f6361  .word       0x736F6361                   # maddu1      $t4, $k1, $t7 # 00000340 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ad928u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 15); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3ad92c:
    // 0x3ad92c: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad92cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3ad930:
    // 0x3ad930: 0x6e697361  ldr         $t1, 0x7361($s3)
    ctx->pc = 0x3ad930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29537); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3ad934:
    // 0x3ad934: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad934u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3ad938:
    // 0x3ad938: 0x6e617461  ldr         $at, 0x7461($s3)
    ctx->pc = 0x3ad938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_3ad93c:
    // 0x3ad93c: 0x6632  tlt         $zero, $zero, 408
    ctx->pc = 0x3ad93cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad940:
    // 0x3ad940: 0x74727173  .word       0x74727173                   # INVALID     $v1, $s2, 0x7173 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad940u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AD940 raw=0x74727173");
label_3ad944:
    // 0x3ad944: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad944u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3ad948:
    // 0x3ad948: 0x0  nop
    ctx->pc = 0x3ad948u;
    // NOP
label_3ad94c:
    // 0x3ad94c: 0x7ff80000  sq          $t8, 0x0($ra)
    ctx->pc = 0x3ad94cu;
    WRITE128(ADD32(GPR_U32(ctx, 31), 0), GPR_VEC(ctx, 24));
label_3ad950:
    // 0x3ad950: 0x69666e49  ldl         $a2, 0x6E49($t3)
    ctx->pc = 0x3ad950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3ad954:
    // 0x3ad954: 0x7974696e  lq          $s4, 0x696E($t3)
    ctx->pc = 0x3ad954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 11), 26990)));
label_3ad958:
    // 0x3ad958: 0x0  nop
    ctx->pc = 0x3ad958u;
    // NOP
label_3ad95c:
    // 0x3ad95c: 0x0  nop
    ctx->pc = 0x3ad95cu;
    // NOP
label_3ad960:
    // 0x3ad960: 0x4e614e  .word       0x004E614E                   # INVALID     $v0, $t6, 0x614E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad960u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x3AD960 raw=0x004E614E");
label_3ad964:
    // 0x3ad964: 0x0  nop
    ctx->pc = 0x3ad964u;
    // NOP
label_3ad968:
    // 0x3ad968: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x3ad968u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ad96c:
    // 0x3ad96c: 0x0  nop
    ctx->pc = 0x3ad96cu;
    // NOP
label_3ad970:
    // 0x3ad970: 0x636f4361  daddi       $t7, $k1, 0x4361
    ctx->pc = 0x3ad970u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)17249; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_3ad974:
    // 0x3ad974: 0x3fd287a7  .word       0x3FD287A7                   # lui         $s2, 0x87A7 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad974u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34727 << 16));
label_3ad978:
    // 0x3ad978: 0x8b60c8b3  lwl         $zero, -0x374D($k1)
    ctx->pc = 0x3ad978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294953139); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_3ad97c:
    // 0x3ad97c: 0x3fc68a28  .word       0x3FC68A28                   # lui         $a2, 0x8A28 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ad97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35368 << 16));
label_3ad980:
    // 0x3ad980: 0x509f79fb  beql        $a0, $ra, . + 4 + (0x79FB << 2)
label_3ad984:
    if (ctx->pc == 0x3AD984u) {
        ctx->pc = 0x3AD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD980u;
        // 0x3ad984: 0x3fd34413  .word       0x3FD34413                   # lui         $s3, 0x4413 # 03C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)17427 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD988u;
        goto label_3ad988;
    }
    ctx->pc = 0x3AD980u;
    {
        const bool branch_taken_0x3ad980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 31));
        if (branch_taken_0x3ad980) {
            ctx->pc = 0x3AD984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD980u;
            // 0x3ad984: 0x3fd34413  .word       0x3FD34413                   # lui         $s3, 0x4413 # 03C00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)17427 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC170u;
            return;
        }
    }
    ctx->pc = 0x3AD988u;
label_3ad988:
    // 0x3ad988: 0x0  nop
    ctx->pc = 0x3ad988u;
    // NOP
label_3ad98c:
    // 0x3ad98c: 0x0  nop
    ctx->pc = 0x3ad98cu;
    // NOP
label_3ad990:
    // 0x3ad990: 0x116110  .word       0x00116110                   # mfhi        $t4 # 00110100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad990u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3ad994:
    // 0x3ad994: 0x116110  .word       0x00116110                   # mfhi        $t4 # 00110100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad994u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3ad998:
    // 0x3ad998: 0x11612c  .word       0x0011612C                   # dadd        $t4, $zero, $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad998u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3ad99c:
    // 0x3ad99c: 0x116150  .word       0x00116150                   # mfhi        $t4 # 00110140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad99cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3ad9a0:
    // 0x3ad9a0: 0x116130  tge         $zero, $s1, 388
    ctx->pc = 0x3ad9a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_3ad9a4:
    // 0x3ad9a4: 0x116154  .word       0x00116154                   # dsllv       $t4, $s1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 17) << (GPR_U32(ctx, 0) & 0x3F));
label_3ad9a8:
    // 0x3ad9a8: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x3ad9a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_3ad9ac:
    // 0x3ad9ac: 0x0  nop
    ctx->pc = 0x3ad9acu;
    // NOP
label_3ad9b0:
    // 0x3ad9b0: 0x3ad9e8  .word       0x003AD9E8                   # mfsa        $k1 # 003A01C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ad9b0u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_3ad9b4:
    // 0x3ad9b4: 0x3ad9e0  .word       0x003AD9E0                   # add         $k1, $at, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ad9b8:
    // 0x3ad9b8: 0x3ad9e0  .word       0x003AD9E0                   # add         $k1, $at, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ad9bc:
    // 0x3ad9bc: 0x3ad9e0  .word       0x003AD9E0                   # add         $k1, $at, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ad9c0:
    // 0x3ad9c0: 0x3ad9e0  .word       0x003AD9E0                   # add         $k1, $at, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ad9c4:
    // 0x3ad9c4: 0x3ad9e0  .word       0x003AD9E0                   # add         $k1, $at, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ad9c8:
    // 0x3ad9c8: 0x3ad9e0  .word       0x003AD9E0                   # add         $k1, $at, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ad9cc:
    // 0x3ad9cc: 0x3ad9e0  .word       0x003AD9E0                   # add         $k1, $at, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9ccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ad9d0:
    // 0x3ad9d0: 0x3ad9e0  .word       0x003AD9E0                   # add         $k1, $at, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ad9d4:
    // 0x3ad9d4: 0x3ad9e0  .word       0x003AD9E0                   # add         $k1, $at, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_3ad9d8:
    // 0x3ad9d8: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x3ad9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_3ad9dc:
    // 0x3ad9dc: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x3ad9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_3ad9e0:
    // 0x3ad9e0: 0x0  nop
    ctx->pc = 0x3ad9e0u;
    // NOP
label_3ad9e4:
    // 0x3ad9e4: 0x0  nop
    ctx->pc = 0x3ad9e4u;
    // NOP
label_3ad9e8:
    // 0x3ad9e8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x3ad9e8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3ad9ec:
    // 0x3ad9ec: 0x0  nop
    ctx->pc = 0x3ad9ecu;
    // NOP
label_3ad9f0:
    // 0x3ad9f0: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x3ad9f0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_3ad9f4:
    // 0x3ad9f4: 0x0  nop
    ctx->pc = 0x3ad9f4u;
    // NOP
label_3ad9f8:
    // 0x3ad9f8: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ad9f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AD9F8 raw=0x00000005");
label_3ad9fc:
    // 0x3ad9fc: 0x19  multu       $zero, $zero
    ctx->pc = 0x3ad9fcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ada00:
    // 0x3ada00: 0x7d  .word       0x0000007D                   # INVALID     $zero, $zero, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ada00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3ADA00 raw=0x0000007D");
label_3ada04:
    // 0x3ada04: 0x0  nop
    ctx->pc = 0x3ada04u;
    // NOP
label_3ada08:
    // 0x3ada08: 0x0  nop
    ctx->pc = 0x3ada08u;
    // NOP
label_3ada0c:
    // 0x3ada0c: 0x3ff00000  .word       0x3FF00000                   # lui         $s0, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ada0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)0 << 16));
label_3ada10:
    // 0x3ada10: 0x0  nop
    ctx->pc = 0x3ada10u;
    // NOP
label_3ada14:
    // 0x3ada14: 0x40240000  dmfc0       $a0, Index
    ctx->pc = 0x3ada14u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x3ADA14 raw=0x40240000");
label_3ada18:
    // 0x3ada18: 0x0  nop
    ctx->pc = 0x3ada18u;
    // NOP
label_3ada1c:
    // 0x3ada1c: 0x40590000  cfc0        $t9, Index
    ctx->pc = 0x3ada1cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3ADA1C raw=0x40590000");
label_3ada20:
    // 0x3ada20: 0x0  nop
    ctx->pc = 0x3ada20u;
    // NOP
label_3ada24:
    // 0x3ada24: 0x408f4000  mtc0        $t7, BadVaddr
    ctx->pc = 0x3ada24u;
    // MTC0 to BADVADDR register ignored (read-only)
label_3ada28:
    // 0x3ada28: 0x0  nop
    ctx->pc = 0x3ada28u;
    // NOP
label_3ada2c:
    // 0x3ada2c: 0x40c38800  ctc0        $v1, LLAddr
    ctx->pc = 0x3ada2cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x3ADA2C raw=0x40C38800");
label_3ada30:
    // 0x3ada30: 0x0  nop
    ctx->pc = 0x3ada30u;
    // NOP
label_3ada34:
    // 0x3ada34: 0x40f86a00  .word       0x40F86A00                   # INVALID     $a3, $t8, 0x6A00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada34u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x3ADA34 raw=0x40F86A00");
label_3ada38:
    // 0x3ada38: 0x0  nop
    ctx->pc = 0x3ada38u;
    // NOP
label_3ada3c:
    // 0x3ada3c: 0x412e8480  .word       0x412E8480                   # INVALID     $t1, $t6, -0x7B80 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada3cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x3ADA3C raw=0x412E8480");
label_3ada40:
    // 0x3ada40: 0x0  nop
    ctx->pc = 0x3ada40u;
    // NOP
label_3ada44:
    // 0x3ada44: 0x416312d0  .word       0x416312D0                   # INVALID     $t3, $v1, 0x12D0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada44u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x3ADA44 raw=0x416312D0");
label_3ada48:
    // 0x3ada48: 0x0  nop
    ctx->pc = 0x3ada48u;
    // NOP
label_3ada4c:
    // 0x3ada4c: 0x4197d784  .word       0x4197D784                   # INVALID     $t4, $s7, -0x287C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada4cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x3ADA4C raw=0x4197D784");
label_3ada50:
    // 0x3ada50: 0x0  nop
    ctx->pc = 0x3ada50u;
    // NOP
label_3ada54:
    // 0x3ada54: 0x41cdcd65  .word       0x41CDCD65                   # INVALID     $t6, $t5, -0x329B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada54u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x3ADA54 raw=0x41CDCD65");
label_3ada58:
    // 0x3ada58: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x3ada58u;
    // NOP (addi to $zero)
label_3ada5c:
    // 0x3ada5c: 0x4202a05f  .word       0x4202A05F                   # INVALID     $s0, $v0, -0x5FA1 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3ada5cu;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x1F at 0x3ADA5C raw=0x4202A05F");
label_3ada60:
    // 0x3ada60: 0xe8000000  swc2        $0, 0x0($zero)
    ctx->pc = 0x3ada60u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x3ADA60 raw=0xE8000000");
label_3ada64:
    // 0x3ada64: 0x42374876  .word       0x42374876                   # INVALID     $s1, $s7, 0x4876 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada64u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3ADA64 raw=0x42374876");
label_3ada68:
    // 0x3ada68: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3ada68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ada6c:
    // 0x3ada6c: 0x426d1a94  .word       0x426D1A94                   # INVALID     $s3, $t5, 0x1A94 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada6cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x3ADA6C raw=0x426D1A94");
label_3ada70:
    // 0x3ada70: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x3ada70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_3ada74:
    // 0x3ada74: 0x42a2309c  .word       0x42A2309C                   # INVALID     $s5, $v0, 0x309C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada74u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x3ADA74 raw=0x42A2309C");
label_3ada78:
    // 0x3ada78: 0x1e900000  .word       0x1E900000                   # bgtz        $s4, . + 4 + (0x0 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_3ada7c:
    if (ctx->pc == 0x3ADA7Cu) {
        ctx->pc = 0x3ADA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA78u;
        // 0x3ada7c: 0x42d6bcc4  .word       0x42D6BCC4                   # INVALID     $s6, $s6, -0x433C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3ADA7C raw=0x42D6BCC4");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADA80u;
        goto label_3ada80;
    }
    ctx->pc = 0x3ADA78u;
    {
        const bool branch_taken_0x3ada78 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x3ADA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA78u;
        // 0x3ada7c: 0x42d6bcc4  .word       0x42D6BCC4                   # INVALID     $s6, $s6, -0x433C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3ADA7C raw=0x42D6BCC4");
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada78) {
            ctx->pc = 0x3ADA7Cu;
            goto label_3ada7c;
        }
    }
    ctx->pc = 0x3ADA80u;
label_3ada80:
    // 0x3ada80: 0x26340000  addiu       $s4, $s1, 0x0
    ctx->pc = 0x3ada80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 0));
label_3ada84:
    // 0x3ada84: 0x430c6bf5  .word       0x430C6BF5                   # INVALID     $t8, $t4, 0x6BF5 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada84u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3ADA84 raw=0x430C6BF5");
label_3ada88:
    // 0x3ada88: 0x37e08000  ori         $zero, $ra, 0x8000
    ctx->pc = 0x3ada88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) | (uint64_t)(uint16_t)32768);
label_3ada8c:
    // 0x3ada8c: 0x4341c379  .word       0x4341C379                   # INVALID     $k0, $at, -0x3C87 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada8cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3ADA8C raw=0x4341C379");
label_3ada90:
    // 0x3ada90: 0x85d8a000  lh          $t8, -0x6000($t6)
    ctx->pc = 0x3ada90u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294942720)));
label_3ada94:
    // 0x3ada94: 0x43763457  .word       0x43763457                   # INVALID     $k1, $s6, 0x3457 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada94u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3ADA94 raw=0x43763457");
label_3ada98:
    // 0x3ada98: 0x674ec800  daddiu      $t6, $k0, -0x3800
    ctx->pc = 0x3ada98u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)4294952960);
label_3ada9c:
    // 0x3ada9c: 0x43abc16d  .word       0x43ABC16D                   # INVALID     $sp, $t3, -0x3E93 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3ada9cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x3ADA9C raw=0x43ABC16D");
label_3adaa0:
    // 0x3adaa0: 0x60913d00  daddi       $s1, $a0, 0x3D00
    ctx->pc = 0x3adaa0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 4); int64_t imm = (int64_t)(int32_t)15616; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, res); }
label_3adaa4:
    // 0x3adaa4: 0x43e158e4  .word       0x43E158E4                   # INVALID     $ra, $at, 0x58E4 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3adaa4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3ADAA4 raw=0x43E158E4");
label_3adaa8:
    // 0x3adaa8: 0x78b58c40  lq          $s5, -0x73C0($a1)
    ctx->pc = 0x3adaa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 5), 4294937664)));
label_3adaac:
    // 0x3adaac: 0x4415af1d  .word       0x4415AF1D                   # mfc1        $s5, $f21 # 0000071D <InstrIdType: R5900_COP1>
    ctx->pc = 0x3adaacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_3adab0:
    // 0x3adab0: 0xd6e2ef50  ldc1        $f2, -0x10B0($s7)
    ctx->pc = 0x3adab0u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x3ADAB0 raw=0xD6E2EF50");
label_3adab4:
    // 0x3adab4: 0x444b1ae4  .word       0x444B1AE4                   # cfc1        $t3, $3 # 000002E4 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3adab4u;
    SET_GPR_U32(ctx, 11, 0); // Unimplemented FCR3
label_3adab8:
    // 0x3adab8: 0x64dd592  .word       0x064DD592                   # INVALID     $s2, $t5, -0x2A6E # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adab8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0xD at 0x3ADAB8 raw=0x064DD592");
label_3adabc:
    // 0x3adabc: 0x4480f0cf  .word       0x4480F0CF                   # mtc1        $zero, $f30 # 000000CF <InstrIdType: R5900_COP1>
    ctx->pc = 0x3adabcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_3adac0:
    // 0x3adac0: 0xc7e14af6  lwc1        $f1, 0x4AF6($ra)
    ctx->pc = 0x3adac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 31), 19190)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3adac4:
    // 0x3adac4: 0x44b52d02  .word       0x44B52D02                   # dmtc1       $s5, $f5 # 00000502 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3adac4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x2 at 0x3ADAC4 raw=0x44B52D02");
label_3adac8:
    // 0x3adac8: 0x79d99db4  lq          $t9, -0x624C($t6)
    ctx->pc = 0x3adac8u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 14), 4294942132)));
label_3adacc:
    // 0x3adacc: 0x44ea7843  .word       0x44EA7843                   # INVALID     $a3, $t2, 0x7843 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3adaccu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x3 at 0x3ADACC raw=0x44EA7843");
label_3adad0:
    // 0x3adad0: 0x37e08000  ori         $zero, $ra, 0x8000
    ctx->pc = 0x3adad0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) | (uint64_t)(uint16_t)32768);
label_3adad4:
    // 0x3adad4: 0x4341c379  .word       0x4341C379                   # INVALID     $k0, $at, -0x3C87 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3adad4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3ADAD4 raw=0x4341C379");
label_3adad8:
    // 0x3adad8: 0xb5056e17  sdr         $a1, 0x6E17($t0)
    ctx->pc = 0x3adad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 28183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3adadc:
    // 0x3adadc: 0x4693b8b5  .word       0x4693B8B5                   # INVALID     $s4, $s3, -0x474B # 00000000 <InstrIdType: CPU_COP1_FPUW>
    ctx->pc = 0x3adadcu;
    throw std::runtime_error("Unhandled FPU.W instruction: function 0x35 at 0x3ADADC raw=0x4693B8B5");
label_3adae0:
    // 0x3adae0: 0xe93ff9f5  swc2        $31, -0x60B($t1)
    ctx->pc = 0x3adae0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x3ADAE0 raw=0xE93FF9F5");
label_3adae4:
    // 0x3adae4: 0x4d384f03  .word       0x4D384F03                   # INVALID     $t1, $t8, 0x4F03 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3adae4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3ADAE4 raw=0x4D384F03");
label_3adae8:
    // 0x3adae8: 0xf9301d32  sqc2        $vf16, 0x1D32($t1)
    ctx->pc = 0x3adae8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 7474), _mm_castps_si128(ctx->vu0_vf[16]));
label_3adaec:
    // 0x3adaec: 0x5a827748  .word       0x5A827748                   # blezl       $s4, . + 4 + (0x7748 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_3adaf0:
    if (ctx->pc == 0x3ADAF0u) {
        ctx->pc = 0x3ADAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAECu;
        // 0x3adaf0: 0x7f73bf3c  sq          $s3, -0x40C4($k1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 27), 4294950716), GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADAF4u;
        goto label_3adaf4;
    }
    ctx->pc = 0x3ADAECu;
    {
        const bool branch_taken_0x3adaec = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x3adaec) {
            ctx->pc = 0x3ADAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADAECu;
            // 0x3adaf0: 0x7f73bf3c  sq          $s3, -0x40C4($k1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 27), 4294950716), GPR_VEC(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CB810u;
            return;
        }
    }
    ctx->pc = 0x3ADAF4u;
label_3adaf4:
    // 0x3adaf4: 0x75154fdd  .word       0x75154FDD                   # INVALID     $t0, $s5, 0x4FDD # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3adaf4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ADAF4 raw=0x75154FDD");
label_3adaf8:
    // 0x3adaf8: 0x97d889bc  lhu         $t8, -0x7644($fp)
    ctx->pc = 0x3adaf8u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294937020)));
label_3adafc:
    // 0x3adafc: 0x3c9cd2b2  .word       0x3C9CD2B2                   # lui         $gp, 0xD2B2 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3adafcu;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)53938 << 16));
label_3adb00:
    // 0x3adb00: 0xd5a8a733  ldc1        $f8, -0x58CD($t5)
    ctx->pc = 0x3adb00u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x3ADB00 raw=0xD5A8A733");
label_3adb04:
    // 0x3adb04: 0x3949f623  xori        $t1, $t2, 0xF623
    ctx->pc = 0x3adb04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)63011);
label_3adb08:
    // 0x3adb08: 0x44f4a73d  .word       0x44F4A73D                   # INVALID     $a3, $s4, -0x58C3 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3adb08u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x3D at 0x3ADB08 raw=0x44F4A73D");
label_3adb0c:
    // 0x3adb0c: 0x32a50ffd  andi        $a1, $s5, 0xFFD
    ctx->pc = 0x3adb0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4093);
label_3adb10:
    // 0x3adb10: 0xcf8c979d  pref        0x0C, -0x6863($gp)
    ctx->pc = 0x3adb10u;
    // PREF instruction (ignored)
label_3adb14:
    // 0x3adb14: 0x255bba08  addiu       $k1, $t2, -0x45F8
    ctx->pc = 0x3adb14u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949384));
label_3adb18:
    // 0x3adb18: 0x64ac6f43  daddiu      $t4, $a1, 0x6F43
    ctx->pc = 0x3adb18u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)28483);
label_3adb1c:
    // 0x3adb1c: 0xac80628  j           func_B2018A0
label_3adb20:
    if (ctx->pc == 0x3ADB20u) {
        ctx->pc = 0x3ADB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB1Cu;
        // 0x3adb20: 0x20202020  addi        $zero, $at, 0x2020 (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADB24u;
        goto label_3adb24;
    }
    ctx->pc = 0x3ADB1Cu;
    ctx->pc = 0x3ADB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB1Cu;
    // 0x3adb20: 0x20202020  addi        $zero, $at, 0x2020 (Delay Slot)
    // NOP (addi to $zero)
    ctx->in_delay_slot = false;
    ctx->pc = 0xB2018A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB2018A0u, 0x3ADB1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADB24u;
label_3adb24:
    // 0x3adb24: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3adb24u;
    // NOP (addi to $zero)
label_3adb28:
    // 0x3adb28: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3adb28u;
    // NOP (addi to $zero)
label_3adb2c:
    // 0x3adb2c: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3adb2cu;
    // NOP (addi to $zero)
label_3adb30:
    // 0x3adb30: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x3adb30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_3adb34:
    // 0x3adb34: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x3adb34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_3adb38:
    // 0x3adb38: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x3adb38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_3adb3c:
    // 0x3adb3c: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x3adb3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
label_3adb40:
    // 0x3adb40: 0x666e49  .word       0x00666E49                   # jalr        $t5, $v1 # 00060640 <InstrIdType: CPU_SPECIAL>
label_3adb44:
    if (ctx->pc == 0x3ADB44u) {
        ctx->pc = 0x3ADB48u;
        goto label_3adb48;
    }
    ctx->pc = 0x3ADB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 13, 0x3ADB48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADB40u, 0x3ADB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ADB48u;
label_3adb48:
    // 0x3adb48: 0x4e614e  .word       0x004E614E                   # INVALID     $v0, $t6, 0x614E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adb48u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x3ADB48 raw=0x004E614E");
label_3adb4c:
    // 0x3adb4c: 0x0  nop
    ctx->pc = 0x3adb4cu;
    // NOP
label_3adb50:
    // 0x3adb50: 0x33323130  andi        $s2, $t9, 0x3130
    ctx->pc = 0x3adb50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12592);
label_3adb54:
    // 0x3adb54: 0x37363534  ori         $s6, $t9, 0x3534
    ctx->pc = 0x3adb54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)13620);
label_3adb58:
    // 0x3adb58: 0x62613938  daddi       $at, $s3, 0x3938
    ctx->pc = 0x3adb58u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)14648; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_3adb5c:
    // 0x3adb5c: 0x66656463  daddiu      $a1, $s3, 0x6463
    ctx->pc = 0x3adb5cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25699);
label_3adb60:
    // 0x3adb60: 0x0  nop
    ctx->pc = 0x3adb60u;
    // NOP
label_3adb64:
    // 0x3adb64: 0x0  nop
    ctx->pc = 0x3adb64u;
    // NOP
label_3adb68:
    // 0x3adb68: 0x6c756e28  ldr         $s5, 0x6E28($v1)
    ctx->pc = 0x3adb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_3adb6c:
    // 0x3adb6c: 0x296c  .word       0x0000296C                   # dadd        $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adb6cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_3adb70:
    // 0x3adb70: 0x33323130  andi        $s2, $t9, 0x3130
    ctx->pc = 0x3adb70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)12592);
label_3adb74:
    // 0x3adb74: 0x37363534  ori         $s6, $t9, 0x3534
    ctx->pc = 0x3adb74u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)13620);
label_3adb78:
    // 0x3adb78: 0x42413938  .word       0x42413938                   # INVALID     $s2, $at, 0x3938 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3adb78u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3ADB78 raw=0x42413938");
label_3adb7c:
    // 0x3adb7c: 0x46454443  .word       0x46454443                   # INVALID     $s2, $a1, 0x4443 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3adb7cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x3ADB7C raw=0x46454443");
label_3adb80:
    // 0x3adb80: 0x0  nop
    ctx->pc = 0x3adb80u;
    // NOP
label_3adb84:
    // 0x3adb84: 0x0  nop
    ctx->pc = 0x3adb84u;
    // NOP
label_3adb88:
    // 0x3adb88: 0x20677562  addi        $a3, $v1, 0x7562
    ctx->pc = 0x3adb88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30050, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_3adb8c:
    // 0x3adb8c: 0x76206e69  .word       0x76206E69                   # INVALID     $s1, $zero, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3adb8cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ADB8C raw=0x76206E69");
label_3adb90:
    // 0x3adb90: 0x69727066  ldl         $s2, 0x7066($t3)
    ctx->pc = 0x3adb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28774); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_3adb94:
    // 0x3adb94: 0x3a66746e  xori        $a2, $s3, 0x746E
    ctx->pc = 0x3adb94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29806);
label_3adb98:
    // 0x3adb98: 0x64616220  daddiu      $at, $v1, 0x6220
    ctx->pc = 0x3adb98u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25120);
label_3adb9c:
    // 0x3adb9c: 0x73616220  .word       0x73616220                   # madd1       $t4, $k1, $at # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3adb9cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3adba0:
    // 0x3adba0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adba0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3adba4:
    // 0x3adba4: 0x0  nop
    ctx->pc = 0x3adba4u;
    // NOP
label_3adba8:
    // 0x3adba8: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x3adba8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3adbac:
    // 0x3adbac: 0x0  nop
    ctx->pc = 0x3adbacu;
    // NOP
label_3adbb0:
    // 0x3adbb0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x3adbb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3adbb4:
    // 0x3adbb4: 0x0  nop
    ctx->pc = 0x3adbb4u;
    // NOP
label_3adbb8:
    // 0x3adbb8: 0x0  nop
    ctx->pc = 0x3adbb8u;
    // NOP
label_3adbbc:
    // 0x3adbbc: 0x0  nop
    ctx->pc = 0x3adbbcu;
    // NOP
label_3adbc0:
    // 0x3adbc0: 0x11b588  .word       0x0011B588                   # jr          $zero # 0011B580 <InstrIdType: CPU_SPECIAL>
label_3adbc4:
    if (ctx->pc == 0x3ADBC4u) {
        ctx->pc = 0x3ADBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBC0u;
        // 0x3adbc4: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADBC8u;
        goto label_3adbc8;
    }
    ctx->pc = 0x3ADBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3ADBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBC0u;
        // 0x3adbc4: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADBC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3ADBC8u;
label_3adbc8:
    // 0x3adbc8: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbc8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adbcc:
    // 0x3adbcc: 0x11b5a0  .word       0x0011B5A0                   # add         $s6, $zero, $s1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3adbd0:
    // 0x3adbd0: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbd0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adbd4:
    // 0x3adbd4: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbd4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adbd8:
    // 0x3adbd8: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbd8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adbdc:
    // 0x3adbdc: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbdcu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adbe0:
    // 0x3adbe0: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbe0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adbe4:
    // 0x3adbe4: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbe4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adbe8:
    // 0x3adbe8: 0x11b5b0  tge         $zero, $s1, 726
    ctx->pc = 0x3adbe8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_3adbec:
    // 0x3adbec: 0x11b5d4  .word       0x0011B5D4                   # dsllv       $s6, $s1, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) << (GPR_U32(ctx, 0) & 0x3F));
label_3adbf0:
    // 0x3adbf0: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbf0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adbf4:
    // 0x3adbf4: 0x11b5c8  .word       0x0011B5C8                   # jr          $zero # 0011B5C0 <InstrIdType: CPU_SPECIAL>
label_3adbf8:
    if (ctx->pc == 0x3ADBF8u) {
        ctx->pc = 0x3ADBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBF4u;
        // 0x3adbf8: 0x11b5e8  .word       0x0011B5E8                   # mfsa        $s6 # 001105C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 22, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADBFCu;
        goto label_3adbfc;
    }
    ctx->pc = 0x3ADBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3ADBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBF4u;
        // 0x3adbf8: 0x11b5e8  .word       0x0011B5E8                   # mfsa        $s6 # 001105C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 22, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADBF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3ADBFCu;
label_3adbfc:
    // 0x3adbfc: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adbfcu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc00:
    // 0x3adc00: 0x11b674  teq         $zero, $s1, 729
    ctx->pc = 0x3adc00u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_3adc04:
    // 0x3adc04: 0x11b680  sll         $s6, $s1, 26
    ctx->pc = 0x3adc04u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
label_3adc08:
    // 0x3adc08: 0x11b680  sll         $s6, $s1, 26
    ctx->pc = 0x3adc08u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
label_3adc0c:
    // 0x3adc0c: 0x11b680  sll         $s6, $s1, 26
    ctx->pc = 0x3adc0cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
label_3adc10:
    // 0x3adc10: 0x11b680  sll         $s6, $s1, 26
    ctx->pc = 0x3adc10u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
label_3adc14:
    // 0x3adc14: 0x11b680  sll         $s6, $s1, 26
    ctx->pc = 0x3adc14u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
label_3adc18:
    // 0x3adc18: 0x11b680  sll         $s6, $s1, 26
    ctx->pc = 0x3adc18u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
label_3adc1c:
    // 0x3adc1c: 0x11b680  sll         $s6, $s1, 26
    ctx->pc = 0x3adc1cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
label_3adc20:
    // 0x3adc20: 0x11b680  sll         $s6, $s1, 26
    ctx->pc = 0x3adc20u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
label_3adc24:
    // 0x3adc24: 0x11b680  sll         $s6, $s1, 26
    ctx->pc = 0x3adc24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 26));
label_3adc28:
    // 0x3adc28: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc28u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc2c:
    // 0x3adc2c: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc2cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc30:
    // 0x3adc30: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc30u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc34:
    // 0x3adc34: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc34u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc38:
    // 0x3adc38: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc38u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc3c:
    // 0x3adc3c: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc3cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc40:
    // 0x3adc40: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc40u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc44:
    // 0x3adc44: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc44u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc48:
    // 0x3adc48: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc48u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc4c:
    // 0x3adc4c: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc4cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc50:
    // 0x3adc50: 0x11b73c  dsll32      $s6, $s1, 28
    ctx->pc = 0x3adc50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) << (32 + 28));
label_3adc54:
    // 0x3adc54: 0x11b784  .word       0x0011B784                   # sllv        $s6, $s1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc54u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc58:
    // 0x3adc58: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc58u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc5c:
    // 0x3adc5c: 0x11b784  .word       0x0011B784                   # sllv        $s6, $s1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc5cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc60:
    // 0x3adc60: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc60u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc64:
    // 0x3adc64: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc64u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc68:
    // 0x3adc68: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc68u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc6c:
    // 0x3adc6c: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc6cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc70:
    // 0x3adc70: 0x11b6b8  dsll        $s6, $s1, 26
    ctx->pc = 0x3adc70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) << 26);
label_3adc74:
    // 0x3adc74: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc74u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc78:
    // 0x3adc78: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc78u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc7c:
    // 0x3adc7c: 0x11b998  .word       0x0011B998                   # mult        $s7, $zero, $s1 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3adc7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_3adc80:
    // 0x3adc80: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc80u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc84:
    // 0x3adc84: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc84u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc88:
    // 0x3adc88: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc88u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc8c:
    // 0x3adc8c: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc8cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc90:
    // 0x3adc90: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc90u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adc94:
    // 0x3adc94: 0x11ba48  .word       0x0011BA48                   # jr          $zero # 0011BA40 <InstrIdType: CPU_SPECIAL>
label_3adc98:
    if (ctx->pc == 0x3ADC98u) {
        ctx->pc = 0x3ADC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC94u;
        // 0x3adc98: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADC9Cu;
        goto label_3adc9c;
    }
    ctx->pc = 0x3ADC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3ADC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC94u;
        // 0x3adc98: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADC94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3ADC9Cu;
label_3adc9c:
    // 0x3adc9c: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adc9cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adca0:
    // 0x3adca0: 0x11ba80  sll         $s7, $s1, 10
    ctx->pc = 0x3adca0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), 10));
label_3adca4:
    // 0x3adca4: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adca4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adca8:
    // 0x3adca8: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adca8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcac:
    // 0x3adcac: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcacu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcb0:
    // 0x3adcb0: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcb0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcb4:
    // 0x3adcb4: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcb4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcb8:
    // 0x3adcb8: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcb8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcbc:
    // 0x3adcbc: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcbcu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcc0:
    // 0x3adcc0: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcc0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcc4:
    // 0x3adcc4: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcc4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcc8:
    // 0x3adcc8: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcc8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adccc:
    // 0x3adccc: 0x11b71c  .word       0x0011B71C                   # dmult       $zero, $s1 # 0000B700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3ADCCC raw=0x0011B71C");
label_3adcd0:
    // 0x3adcd0: 0x11b740  sll         $s6, $s1, 29
    ctx->pc = 0x3adcd0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 29));
label_3adcd4:
    // 0x3adcd4: 0x11b784  .word       0x0011B784                   # sllv        $s6, $s1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcd4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcd8:
    // 0x3adcd8: 0x11b784  .word       0x0011B784                   # sllv        $s6, $s1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcd8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcdc:
    // 0x3adcdc: 0x11b784  .word       0x0011B784                   # sllv        $s6, $s1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcdcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adce0:
    // 0x3adce0: 0x11b6c8  .word       0x0011B6C8                   # jr          $zero # 0011B6C0 <InstrIdType: CPU_SPECIAL>
label_3adce4:
    if (ctx->pc == 0x3ADCE4u) {
        ctx->pc = 0x3ADCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCE0u;
        // 0x3adce4: 0x11b740  sll         $s6, $s1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADCE8u;
        goto label_3adce8;
    }
    ctx->pc = 0x3ADCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3ADCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCE0u;
        // 0x3adce4: 0x11b740  sll         $s6, $s1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 29));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADCE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3ADCE8u;
label_3adce8:
    // 0x3adce8: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adce8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcec:
    // 0x3adcec: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcecu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcf0:
    // 0x3adcf0: 0x11b6d8  .word       0x0011B6D8                   # mult        $s6, $zero, $s1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3adcf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_3adcf4:
    // 0x3adcf4: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcf4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3adcf8:
    // 0x3adcf8: 0x11b94c  .word       0x0011B94C                   # syscall     741 # 00110000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcf8u;
    ctx->pc = 0x3ADCFCu;
runtime->handleSyscall(rdram, ctx, 0x46E5u);
label_3adcfc:
    // 0x3adcfc: 0x11b99c  .word       0x0011B99C                   # dmult       $zero, $s1 # 0000B980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adcfcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3ADCFC raw=0x0011B99C");
label_3add00:
    // 0x3add00: 0x11b9d0  .word       0x0011B9D0                   # mfhi        $s7 # 001101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add00u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_3add04:
    // 0x3add04: 0x11b70c  .word       0x0011B70C                   # syscall     732 # 00110000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add04u;
    ctx->pc = 0x3ADD08u;
runtime->handleSyscall(rdram, ctx, 0x46DCu);
label_3add08:
    // 0x3add08: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add08u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3add0c:
    // 0x3add0c: 0x11b9f4  teq         $zero, $s1, 743
    ctx->pc = 0x3add0cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_3add10:
    // 0x3add10: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add10u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3add14:
    // 0x3add14: 0x11ba4c  .word       0x0011BA4C                   # syscall     745 # 00110000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add14u;
    ctx->pc = 0x3ADD18u;
runtime->handleSyscall(rdram, ctx, 0x46E9u);
label_3add18:
    // 0x3add18: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add18u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3add1c:
    // 0x3add1c: 0x11bc44  .word       0x0011BC44                   # sllv        $s7, $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add1cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_3add20:
    // 0x3add20: 0x11ba8c  .word       0x0011BA8C                   # syscall     746 # 00110000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add20u;
    ctx->pc = 0x3ADD24u;
runtime->handleSyscall(rdram, ctx, 0x46EAu);
label_3add24:
    // 0x3add24: 0x0  nop
    ctx->pc = 0x3add24u;
    // NOP
label_3add28:
    // 0x3add28: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add28u;
    
label_3add2c:
    // 0x3add2c: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3add2cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_3add30:
    // 0x3add30: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add30u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3ADD30 raw=0x04040404");
label_3add34:
    // 0x3add34: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add34u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3ADD34 raw=0x04040404");
label_3add38:
    // 0x3add38: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add38u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADD38 raw=0x05050505");
label_3add3c:
    // 0x3add3c: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add3cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADD3C raw=0x05050505");
label_3add40:
    // 0x3add40: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add40u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADD40 raw=0x05050505");
label_3add44:
    // 0x3add44: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add44u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADD44 raw=0x05050505");
label_3add48:
    // 0x3add48: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add48u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADD48 raw=0x06060606");
label_3add4c:
    // 0x3add4c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add4cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADD4C raw=0x06060606");
label_3add50:
    // 0x3add50: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add50u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADD50 raw=0x06060606");
label_3add54:
    // 0x3add54: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add54u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADD54 raw=0x06060606");
label_3add58:
    // 0x3add58: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add58u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADD58 raw=0x06060606");
label_3add5c:
    // 0x3add5c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add5cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADD5C raw=0x06060606");
label_3add60:
    // 0x3add60: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add60u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADD60 raw=0x06060606");
label_3add64:
    // 0x3add64: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add64u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADD64 raw=0x06060606");
label_3add68:
    // 0x3add68: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add68u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD68 raw=0x07070707");
label_3add6c:
    // 0x3add6c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add6cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD6C raw=0x07070707");
label_3add70:
    // 0x3add70: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add70u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD70 raw=0x07070707");
label_3add74:
    // 0x3add74: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add74u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD74 raw=0x07070707");
label_3add78:
    // 0x3add78: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add78u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD78 raw=0x07070707");
label_3add7c:
    // 0x3add7c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add7cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD7C raw=0x07070707");
label_3add80:
    // 0x3add80: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add80u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD80 raw=0x07070707");
label_3add84:
    // 0x3add84: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add84u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD84 raw=0x07070707");
label_3add88:
    // 0x3add88: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add88u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD88 raw=0x07070707");
label_3add8c:
    // 0x3add8c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add8cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD8C raw=0x07070707");
label_3add90:
    // 0x3add90: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add90u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD90 raw=0x07070707");
label_3add94:
    // 0x3add94: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add94u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD94 raw=0x07070707");
label_3add98:
    // 0x3add98: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add98u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD98 raw=0x07070707");
label_3add9c:
    // 0x3add9c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3add9cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADD9C raw=0x07070707");
label_3adda0:
    // 0x3adda0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adda0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADDA0 raw=0x07070707");
label_3adda4:
    // 0x3adda4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adda4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADDA4 raw=0x07070707");
label_3adda8:
    // 0x3adda8: 0x8080808  j           func_202020
label_3addac:
    if (ctx->pc == 0x3ADDACu) {
        ctx->pc = 0x3ADDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDA8u;
        // 0x3addac: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDB0u;
        goto label_3addb0;
    }
    ctx->pc = 0x3ADDA8u;
    ctx->pc = 0x3ADDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDA8u;
    // 0x3addac: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDB0u;
label_3addb0:
    // 0x3addb0: 0x8080808  j           func_202020
label_3addb4:
    if (ctx->pc == 0x3ADDB4u) {
        ctx->pc = 0x3ADDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDB0u;
        // 0x3addb4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDB8u;
        goto label_3addb8;
    }
    ctx->pc = 0x3ADDB0u;
    ctx->pc = 0x3ADDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDB0u;
    // 0x3addb4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDB8u;
label_3addb8:
    // 0x3addb8: 0x8080808  j           func_202020
label_3addbc:
    if (ctx->pc == 0x3ADDBCu) {
        ctx->pc = 0x3ADDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDB8u;
        // 0x3addbc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDC0u;
        goto label_3addc0;
    }
    ctx->pc = 0x3ADDB8u;
    ctx->pc = 0x3ADDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDB8u;
    // 0x3addbc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDC0u;
label_3addc0:
    // 0x3addc0: 0x8080808  j           func_202020
label_3addc4:
    if (ctx->pc == 0x3ADDC4u) {
        ctx->pc = 0x3ADDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDC0u;
        // 0x3addc4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDC8u;
        goto label_3addc8;
    }
    ctx->pc = 0x3ADDC0u;
    ctx->pc = 0x3ADDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDC0u;
    // 0x3addc4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDC8u;
label_3addc8:
    // 0x3addc8: 0x8080808  j           func_202020
label_3addcc:
    if (ctx->pc == 0x3ADDCCu) {
        ctx->pc = 0x3ADDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDC8u;
        // 0x3addcc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDD0u;
        goto label_3addd0;
    }
    ctx->pc = 0x3ADDC8u;
    ctx->pc = 0x3ADDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDC8u;
    // 0x3addcc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDD0u;
label_3addd0:
    // 0x3addd0: 0x8080808  j           func_202020
label_3addd4:
    if (ctx->pc == 0x3ADDD4u) {
        ctx->pc = 0x3ADDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDD0u;
        // 0x3addd4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDD8u;
        goto label_3addd8;
    }
    ctx->pc = 0x3ADDD0u;
    ctx->pc = 0x3ADDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDD0u;
    // 0x3addd4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDD8u;
label_3addd8:
    // 0x3addd8: 0x8080808  j           func_202020
label_3adddc:
    if (ctx->pc == 0x3ADDDCu) {
        ctx->pc = 0x3ADDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDD8u;
        // 0x3adddc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDE0u;
        goto label_3adde0;
    }
    ctx->pc = 0x3ADDD8u;
    ctx->pc = 0x3ADDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDD8u;
    // 0x3adddc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDE0u;
label_3adde0:
    // 0x3adde0: 0x8080808  j           func_202020
label_3adde4:
    if (ctx->pc == 0x3ADDE4u) {
        ctx->pc = 0x3ADDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDE0u;
        // 0x3adde4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDE8u;
        goto label_3adde8;
    }
    ctx->pc = 0x3ADDE0u;
    ctx->pc = 0x3ADDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDE0u;
    // 0x3adde4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDE8u;
label_3adde8:
    // 0x3adde8: 0x8080808  j           func_202020
label_3addec:
    if (ctx->pc == 0x3ADDECu) {
        ctx->pc = 0x3ADDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDE8u;
        // 0x3addec: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDF0u;
        goto label_3addf0;
    }
    ctx->pc = 0x3ADDE8u;
    ctx->pc = 0x3ADDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDE8u;
    // 0x3addec: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDF0u;
label_3addf0:
    // 0x3addf0: 0x8080808  j           func_202020
label_3addf4:
    if (ctx->pc == 0x3ADDF4u) {
        ctx->pc = 0x3ADDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDF0u;
        // 0x3addf4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADDF8u;
        goto label_3addf8;
    }
    ctx->pc = 0x3ADDF0u;
    ctx->pc = 0x3ADDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDF0u;
    // 0x3addf4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADDF8u;
label_3addf8:
    // 0x3addf8: 0x8080808  j           func_202020
label_3addfc:
    if (ctx->pc == 0x3ADDFCu) {
        ctx->pc = 0x3ADDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDF8u;
        // 0x3addfc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE00u;
        goto label_3ade00;
    }
    ctx->pc = 0x3ADDF8u;
    ctx->pc = 0x3ADDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADDF8u;
    // 0x3addfc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADDF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADE00u;
label_3ade00:
    // 0x3ade00: 0x8080808  j           func_202020
label_3ade04:
    if (ctx->pc == 0x3ADE04u) {
        ctx->pc = 0x3ADE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE00u;
        // 0x3ade04: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE08u;
        goto label_3ade08;
    }
    ctx->pc = 0x3ADE00u;
    ctx->pc = 0x3ADE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE00u;
    // 0x3ade04: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADE00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADE08u;
label_3ade08:
    // 0x3ade08: 0x8080808  j           func_202020
label_3ade0c:
    if (ctx->pc == 0x3ADE0Cu) {
        ctx->pc = 0x3ADE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE08u;
        // 0x3ade0c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE10u;
        goto label_3ade10;
    }
    ctx->pc = 0x3ADE08u;
    ctx->pc = 0x3ADE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE08u;
    // 0x3ade0c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADE08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADE10u;
label_3ade10:
    // 0x3ade10: 0x8080808  j           func_202020
label_3ade14:
    if (ctx->pc == 0x3ADE14u) {
        ctx->pc = 0x3ADE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE10u;
        // 0x3ade14: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE18u;
        goto label_3ade18;
    }
    ctx->pc = 0x3ADE10u;
    ctx->pc = 0x3ADE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE10u;
    // 0x3ade14: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADE10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADE18u;
label_3ade18:
    // 0x3ade18: 0x8080808  j           func_202020
label_3ade1c:
    if (ctx->pc == 0x3ADE1Cu) {
        ctx->pc = 0x3ADE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE18u;
        // 0x3ade1c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE20u;
        goto label_3ade20;
    }
    ctx->pc = 0x3ADE18u;
    ctx->pc = 0x3ADE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE18u;
    // 0x3ade1c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADE18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADE20u;
label_3ade20:
    // 0x3ade20: 0x8080808  j           func_202020
label_3ade24:
    if (ctx->pc == 0x3ADE24u) {
        ctx->pc = 0x3ADE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE20u;
        // 0x3ade24: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADE28u;
        goto label_3ade28;
    }
    ctx->pc = 0x3ADE20u;
    ctx->pc = 0x3ADE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE20u;
    // 0x3ade24: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADE20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADE28u;
label_3ade28:
    // 0x3ade28: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ade28u;
    
label_3ade2c:
    // 0x3ade2c: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ade2cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_3ade30:
    // 0x3ade30: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade30u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3ADE30 raw=0x04040404");
label_3ade34:
    // 0x3ade34: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade34u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3ADE34 raw=0x04040404");
label_3ade38:
    // 0x3ade38: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade38u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADE38 raw=0x05050505");
label_3ade3c:
    // 0x3ade3c: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade3cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADE3C raw=0x05050505");
label_3ade40:
    // 0x3ade40: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade40u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADE40 raw=0x05050505");
label_3ade44:
    // 0x3ade44: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade44u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADE44 raw=0x05050505");
label_3ade48:
    // 0x3ade48: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade48u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADE48 raw=0x06060606");
label_3ade4c:
    // 0x3ade4c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade4cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADE4C raw=0x06060606");
label_3ade50:
    // 0x3ade50: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade50u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADE50 raw=0x06060606");
label_3ade54:
    // 0x3ade54: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade54u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADE54 raw=0x06060606");
label_3ade58:
    // 0x3ade58: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade58u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADE58 raw=0x06060606");
label_3ade5c:
    // 0x3ade5c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade5cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADE5C raw=0x06060606");
label_3ade60:
    // 0x3ade60: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade60u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADE60 raw=0x06060606");
label_3ade64:
    // 0x3ade64: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade64u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADE64 raw=0x06060606");
label_3ade68:
    // 0x3ade68: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade68u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE68 raw=0x07070707");
label_3ade6c:
    // 0x3ade6c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade6cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE6C raw=0x07070707");
label_3ade70:
    // 0x3ade70: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade70u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE70 raw=0x07070707");
label_3ade74:
    // 0x3ade74: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade74u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE74 raw=0x07070707");
label_3ade78:
    // 0x3ade78: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade78u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE78 raw=0x07070707");
label_3ade7c:
    // 0x3ade7c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade7cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE7C raw=0x07070707");
label_3ade80:
    // 0x3ade80: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade80u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE80 raw=0x07070707");
label_3ade84:
    // 0x3ade84: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade84u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE84 raw=0x07070707");
label_3ade88:
    // 0x3ade88: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade88u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE88 raw=0x07070707");
label_3ade8c:
    // 0x3ade8c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade8cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE8C raw=0x07070707");
label_3ade90:
    // 0x3ade90: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade90u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE90 raw=0x07070707");
label_3ade94:
    // 0x3ade94: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade94u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE94 raw=0x07070707");
label_3ade98:
    // 0x3ade98: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade98u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE98 raw=0x07070707");
label_3ade9c:
    // 0x3ade9c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ade9cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADE9C raw=0x07070707");
label_3adea0:
    // 0x3adea0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adea0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADEA0 raw=0x07070707");
label_3adea4:
    // 0x3adea4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adea4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADEA4 raw=0x07070707");
label_3adea8:
    // 0x3adea8: 0x8080808  j           func_202020
label_3adeac:
    if (ctx->pc == 0x3ADEACu) {
        ctx->pc = 0x3ADEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEA8u;
        // 0x3adeac: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEB0u;
        goto label_3adeb0;
    }
    ctx->pc = 0x3ADEA8u;
    ctx->pc = 0x3ADEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEA8u;
    // 0x3adeac: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADEA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADEB0u;
label_3adeb0:
    // 0x3adeb0: 0x8080808  j           func_202020
label_3adeb4:
    if (ctx->pc == 0x3ADEB4u) {
        ctx->pc = 0x3ADEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEB0u;
        // 0x3adeb4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEB8u;
        goto label_3adeb8;
    }
    ctx->pc = 0x3ADEB0u;
    ctx->pc = 0x3ADEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEB0u;
    // 0x3adeb4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADEB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADEB8u;
label_3adeb8:
    // 0x3adeb8: 0x8080808  j           func_202020
label_3adebc:
    if (ctx->pc == 0x3ADEBCu) {
        ctx->pc = 0x3ADEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEB8u;
        // 0x3adebc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEC0u;
        goto label_3adec0;
    }
    ctx->pc = 0x3ADEB8u;
    ctx->pc = 0x3ADEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEB8u;
    // 0x3adebc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADEB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADEC0u;
label_3adec0:
    // 0x3adec0: 0x8080808  j           func_202020
label_3adec4:
    if (ctx->pc == 0x3ADEC4u) {
        ctx->pc = 0x3ADEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEC0u;
        // 0x3adec4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEC8u;
        goto label_3adec8;
    }
    ctx->pc = 0x3ADEC0u;
    ctx->pc = 0x3ADEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEC0u;
    // 0x3adec4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADEC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADEC8u;
label_3adec8:
    // 0x3adec8: 0x8080808  j           func_202020
label_3adecc:
    if (ctx->pc == 0x3ADECCu) {
        ctx->pc = 0x3ADECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEC8u;
        // 0x3adecc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADED0u;
        goto label_3aded0;
    }
    ctx->pc = 0x3ADEC8u;
    ctx->pc = 0x3ADECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEC8u;
    // 0x3adecc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADEC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADED0u;
label_3aded0:
    // 0x3aded0: 0x8080808  j           func_202020
label_3aded4:
    if (ctx->pc == 0x3ADED4u) {
        ctx->pc = 0x3ADED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADED0u;
        // 0x3aded4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADED8u;
        goto label_3aded8;
    }
    ctx->pc = 0x3ADED0u;
    ctx->pc = 0x3ADED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADED0u;
    // 0x3aded4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADED0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADED8u;
label_3aded8:
    // 0x3aded8: 0x8080808  j           func_202020
label_3adedc:
    if (ctx->pc == 0x3ADEDCu) {
        ctx->pc = 0x3ADEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADED8u;
        // 0x3adedc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEE0u;
        goto label_3adee0;
    }
    ctx->pc = 0x3ADED8u;
    ctx->pc = 0x3ADEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADED8u;
    // 0x3adedc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADED8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADEE0u;
label_3adee0:
    // 0x3adee0: 0x8080808  j           func_202020
label_3adee4:
    if (ctx->pc == 0x3ADEE4u) {
        ctx->pc = 0x3ADEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEE0u;
        // 0x3adee4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEE8u;
        goto label_3adee8;
    }
    ctx->pc = 0x3ADEE0u;
    ctx->pc = 0x3ADEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEE0u;
    // 0x3adee4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADEE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADEE8u;
label_3adee8:
    // 0x3adee8: 0x8080808  j           func_202020
label_3adeec:
    if (ctx->pc == 0x3ADEECu) {
        ctx->pc = 0x3ADEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEE8u;
        // 0x3adeec: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEF0u;
        goto label_3adef0;
    }
    ctx->pc = 0x3ADEE8u;
    ctx->pc = 0x3ADEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEE8u;
    // 0x3adeec: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADEE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADEF0u;
label_3adef0:
    // 0x3adef0: 0x8080808  j           func_202020
label_3adef4:
    if (ctx->pc == 0x3ADEF4u) {
        ctx->pc = 0x3ADEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEF0u;
        // 0x3adef4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADEF8u;
        goto label_3adef8;
    }
    ctx->pc = 0x3ADEF0u;
    ctx->pc = 0x3ADEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEF0u;
    // 0x3adef4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADEF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADEF8u;
label_3adef8:
    // 0x3adef8: 0x8080808  j           func_202020
label_3adefc:
    if (ctx->pc == 0x3ADEFCu) {
        ctx->pc = 0x3ADEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEF8u;
        // 0x3adefc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADF00u;
        goto label_3adf00;
    }
    ctx->pc = 0x3ADEF8u;
    ctx->pc = 0x3ADEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEF8u;
    // 0x3adefc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADEF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADF00u;
label_3adf00:
    // 0x3adf00: 0x8080808  j           func_202020
label_3adf04:
    if (ctx->pc == 0x3ADF04u) {
        ctx->pc = 0x3ADF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF00u;
        // 0x3adf04: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADF08u;
        goto label_3adf08;
    }
    ctx->pc = 0x3ADF00u;
    ctx->pc = 0x3ADF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF00u;
    // 0x3adf04: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADF00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADF08u;
label_3adf08:
    // 0x3adf08: 0x8080808  j           func_202020
label_3adf0c:
    if (ctx->pc == 0x3ADF0Cu) {
        ctx->pc = 0x3ADF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF08u;
        // 0x3adf0c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADF10u;
        goto label_3adf10;
    }
    ctx->pc = 0x3ADF08u;
    ctx->pc = 0x3ADF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF08u;
    // 0x3adf0c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADF08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADF10u;
label_3adf10:
    // 0x3adf10: 0x8080808  j           func_202020
label_3adf14:
    if (ctx->pc == 0x3ADF14u) {
        ctx->pc = 0x3ADF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF10u;
        // 0x3adf14: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADF18u;
        goto label_3adf18;
    }
    ctx->pc = 0x3ADF10u;
    ctx->pc = 0x3ADF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF10u;
    // 0x3adf14: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADF10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADF18u;
label_3adf18:
    // 0x3adf18: 0x8080808  j           func_202020
label_3adf1c:
    if (ctx->pc == 0x3ADF1Cu) {
        ctx->pc = 0x3ADF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF18u;
        // 0x3adf1c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADF20u;
        goto label_3adf20;
    }
    ctx->pc = 0x3ADF18u;
    ctx->pc = 0x3ADF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF18u;
    // 0x3adf1c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADF18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADF20u;
label_3adf20:
    // 0x3adf20: 0x8080808  j           func_202020
label_3adf24:
    if (ctx->pc == 0x3ADF24u) {
        ctx->pc = 0x3ADF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADF20u;
        // 0x3adf24: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADF28u;
        goto label_3adf28;
    }
    ctx->pc = 0x3ADF20u;
    ctx->pc = 0x3ADF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF20u;
    // 0x3adf24: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADF20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADF28u;
label_3adf28:
    // 0x3adf28: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adf28u;
    
label_3adf2c:
    // 0x3adf2c: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3adf2cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_3adf30:
    // 0x3adf30: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf30u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3ADF30 raw=0x04040404");
label_3adf34:
    // 0x3adf34: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf34u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3ADF34 raw=0x04040404");
label_3adf38:
    // 0x3adf38: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf38u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADF38 raw=0x05050505");
label_3adf3c:
    // 0x3adf3c: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf3cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADF3C raw=0x05050505");
label_3adf40:
    // 0x3adf40: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf40u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADF40 raw=0x05050505");
label_3adf44:
    // 0x3adf44: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf44u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3ADF44 raw=0x05050505");
label_3adf48:
    // 0x3adf48: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf48u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADF48 raw=0x06060606");
label_3adf4c:
    // 0x3adf4c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf4cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADF4C raw=0x06060606");
label_3adf50:
    // 0x3adf50: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf50u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADF50 raw=0x06060606");
label_3adf54:
    // 0x3adf54: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf54u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADF54 raw=0x06060606");
label_3adf58:
    // 0x3adf58: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf58u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADF58 raw=0x06060606");
label_3adf5c:
    // 0x3adf5c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf5cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADF5C raw=0x06060606");
label_3adf60:
    // 0x3adf60: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf60u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADF60 raw=0x06060606");
label_3adf64:
    // 0x3adf64: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf64u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3ADF64 raw=0x06060606");
label_3adf68:
    // 0x3adf68: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf68u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF68 raw=0x07070707");
label_3adf6c:
    // 0x3adf6c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf6cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF6C raw=0x07070707");
label_3adf70:
    // 0x3adf70: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf70u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF70 raw=0x07070707");
label_3adf74:
    // 0x3adf74: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf74u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF74 raw=0x07070707");
label_3adf78:
    // 0x3adf78: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf78u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF78 raw=0x07070707");
label_3adf7c:
    // 0x3adf7c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf7cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF7C raw=0x07070707");
label_3adf80:
    // 0x3adf80: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf80u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF80 raw=0x07070707");
label_3adf84:
    // 0x3adf84: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf84u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF84 raw=0x07070707");
label_3adf88:
    // 0x3adf88: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf88u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF88 raw=0x07070707");
label_3adf8c:
    // 0x3adf8c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf8cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF8C raw=0x07070707");
label_3adf90:
    // 0x3adf90: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf90u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF90 raw=0x07070707");
label_3adf94:
    // 0x3adf94: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf94u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF94 raw=0x07070707");
label_3adf98:
    // 0x3adf98: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf98u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF98 raw=0x07070707");
label_3adf9c:
    // 0x3adf9c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adf9cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADF9C raw=0x07070707");
label_3adfa0:
    // 0x3adfa0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adfa0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADFA0 raw=0x07070707");
label_3adfa4:
    // 0x3adfa4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3adfa4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3ADFA4 raw=0x07070707");
label_3adfa8:
    // 0x3adfa8: 0x8080808  j           func_202020
label_3adfac:
    if (ctx->pc == 0x3ADFACu) {
        ctx->pc = 0x3ADFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFA8u;
        // 0x3adfac: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFB0u;
        goto label_3adfb0;
    }
    ctx->pc = 0x3ADFA8u;
    ctx->pc = 0x3ADFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFA8u;
    // 0x3adfac: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFB0u;
label_3adfb0:
    // 0x3adfb0: 0x8080808  j           func_202020
label_3adfb4:
    if (ctx->pc == 0x3ADFB4u) {
        ctx->pc = 0x3ADFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFB0u;
        // 0x3adfb4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFB8u;
        goto label_3adfb8;
    }
    ctx->pc = 0x3ADFB0u;
    ctx->pc = 0x3ADFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFB0u;
    // 0x3adfb4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFB8u;
label_3adfb8:
    // 0x3adfb8: 0x8080808  j           func_202020
label_3adfbc:
    if (ctx->pc == 0x3ADFBCu) {
        ctx->pc = 0x3ADFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFB8u;
        // 0x3adfbc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFC0u;
        goto label_3adfc0;
    }
    ctx->pc = 0x3ADFB8u;
    ctx->pc = 0x3ADFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFB8u;
    // 0x3adfbc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFC0u;
label_3adfc0:
    // 0x3adfc0: 0x8080808  j           func_202020
label_3adfc4:
    if (ctx->pc == 0x3ADFC4u) {
        ctx->pc = 0x3ADFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFC0u;
        // 0x3adfc4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFC8u;
        goto label_3adfc8;
    }
    ctx->pc = 0x3ADFC0u;
    ctx->pc = 0x3ADFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFC0u;
    // 0x3adfc4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFC8u;
label_3adfc8:
    // 0x3adfc8: 0x8080808  j           func_202020
label_3adfcc:
    if (ctx->pc == 0x3ADFCCu) {
        ctx->pc = 0x3ADFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFC8u;
        // 0x3adfcc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFD0u;
        goto label_3adfd0;
    }
    ctx->pc = 0x3ADFC8u;
    ctx->pc = 0x3ADFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFC8u;
    // 0x3adfcc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFD0u;
label_3adfd0:
    // 0x3adfd0: 0x8080808  j           func_202020
label_3adfd4:
    if (ctx->pc == 0x3ADFD4u) {
        ctx->pc = 0x3ADFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFD0u;
        // 0x3adfd4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFD8u;
        goto label_3adfd8;
    }
    ctx->pc = 0x3ADFD0u;
    ctx->pc = 0x3ADFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFD0u;
    // 0x3adfd4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFD8u;
label_3adfd8:
    // 0x3adfd8: 0x8080808  j           func_202020
label_3adfdc:
    if (ctx->pc == 0x3ADFDCu) {
        ctx->pc = 0x3ADFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFD8u;
        // 0x3adfdc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFE0u;
        goto label_3adfe0;
    }
    ctx->pc = 0x3ADFD8u;
    ctx->pc = 0x3ADFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFD8u;
    // 0x3adfdc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFE0u;
label_3adfe0:
    // 0x3adfe0: 0x8080808  j           func_202020
label_3adfe4:
    if (ctx->pc == 0x3ADFE4u) {
        ctx->pc = 0x3ADFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFE0u;
        // 0x3adfe4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFE8u;
        goto label_3adfe8;
    }
    ctx->pc = 0x3ADFE0u;
    ctx->pc = 0x3ADFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFE0u;
    // 0x3adfe4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFE8u;
label_3adfe8:
    // 0x3adfe8: 0x8080808  j           func_202020
label_3adfec:
    if (ctx->pc == 0x3ADFECu) {
        ctx->pc = 0x3ADFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFE8u;
        // 0x3adfec: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFF0u;
        goto label_3adff0;
    }
    ctx->pc = 0x3ADFE8u;
    ctx->pc = 0x3ADFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFE8u;
    // 0x3adfec: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFF0u;
label_3adff0:
    // 0x3adff0: 0x8080808  j           func_202020
label_3adff4:
    if (ctx->pc == 0x3ADFF4u) {
        ctx->pc = 0x3ADFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFF0u;
        // 0x3adff4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ADFF8u;
        goto label_3adff8;
    }
    ctx->pc = 0x3ADFF0u;
    ctx->pc = 0x3ADFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFF0u;
    // 0x3adff4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADFF8u;
label_3adff8:
    // 0x3adff8: 0x8080808  j           func_202020
label_3adffc:
    if (ctx->pc == 0x3ADFFCu) {
        ctx->pc = 0x3ADFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFF8u;
        // 0x3adffc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE000u;
        goto label_3ae000;
    }
    ctx->pc = 0x3ADFF8u;
    ctx->pc = 0x3ADFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFF8u;
    // 0x3adffc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3ADFF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE000u;
label_3ae000:
    // 0x3ae000: 0x8080808  j           func_202020
label_3ae004:
    if (ctx->pc == 0x3AE004u) {
        ctx->pc = 0x3AE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE000u;
        // 0x3ae004: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE008u;
        goto label_3ae008;
    }
    ctx->pc = 0x3AE000u;
    ctx->pc = 0x3AE004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE000u;
    // 0x3ae004: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE000u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE008u;
label_3ae008:
    // 0x3ae008: 0x8080808  j           func_202020
label_3ae00c:
    if (ctx->pc == 0x3AE00Cu) {
        ctx->pc = 0x3AE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE008u;
        // 0x3ae00c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE010u;
        goto label_3ae010;
    }
    ctx->pc = 0x3AE008u;
    ctx->pc = 0x3AE00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE008u;
    // 0x3ae00c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE010u;
label_3ae010:
    // 0x3ae010: 0x8080808  j           func_202020
label_3ae014:
    if (ctx->pc == 0x3AE014u) {
        ctx->pc = 0x3AE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE010u;
        // 0x3ae014: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE018u;
        goto label_3ae018;
    }
    ctx->pc = 0x3AE010u;
    ctx->pc = 0x3AE014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE010u;
    // 0x3ae014: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE010u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE018u;
label_3ae018:
    // 0x3ae018: 0x8080808  j           func_202020
label_3ae01c:
    if (ctx->pc == 0x3AE01Cu) {
        ctx->pc = 0x3AE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE018u;
        // 0x3ae01c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE020u;
        goto label_3ae020;
    }
    ctx->pc = 0x3AE018u;
    ctx->pc = 0x3AE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE018u;
    // 0x3ae01c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE018u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE020u;
label_3ae020:
    // 0x3ae020: 0x8080808  j           func_202020
label_3ae024:
    if (ctx->pc == 0x3AE024u) {
        ctx->pc = 0x3AE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE020u;
        // 0x3ae024: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE028u;
        goto label_3ae028;
    }
    ctx->pc = 0x3AE020u;
    ctx->pc = 0x3AE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE020u;
    // 0x3ae024: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE028u;
label_3ae028:
    // 0x3ae028: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae028u;
    
label_3ae02c:
    // 0x3ae02c: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae02cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_3ae030:
    // 0x3ae030: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae030u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3AE030 raw=0x04040404");
label_3ae034:
    // 0x3ae034: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae034u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3AE034 raw=0x04040404");
label_3ae038:
    // 0x3ae038: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae038u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3AE038 raw=0x05050505");
label_3ae03c:
    // 0x3ae03c: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae03cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3AE03C raw=0x05050505");
label_3ae040:
    // 0x3ae040: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae040u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3AE040 raw=0x05050505");
label_3ae044:
    // 0x3ae044: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae044u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x3AE044 raw=0x05050505");
label_3ae048:
    // 0x3ae048: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae048u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3AE048 raw=0x06060606");
label_3ae04c:
    // 0x3ae04c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae04cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3AE04C raw=0x06060606");
label_3ae050:
    // 0x3ae050: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae050u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3AE050 raw=0x06060606");
label_3ae054:
    // 0x3ae054: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae054u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3AE054 raw=0x06060606");
label_3ae058:
    // 0x3ae058: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae058u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3AE058 raw=0x06060606");
label_3ae05c:
    // 0x3ae05c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae05cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3AE05C raw=0x06060606");
label_3ae060:
    // 0x3ae060: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae060u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3AE060 raw=0x06060606");
label_3ae064:
    // 0x3ae064: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae064u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x3AE064 raw=0x06060606");
label_3ae068:
    // 0x3ae068: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae068u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE068 raw=0x07070707");
label_3ae06c:
    // 0x3ae06c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae06cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE06C raw=0x07070707");
label_3ae070:
    // 0x3ae070: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae070u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE070 raw=0x07070707");
label_3ae074:
    // 0x3ae074: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae074u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE074 raw=0x07070707");
label_3ae078:
    // 0x3ae078: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae078u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE078 raw=0x07070707");
label_3ae07c:
    // 0x3ae07c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae07cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE07C raw=0x07070707");
label_3ae080:
    // 0x3ae080: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae080u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE080 raw=0x07070707");
label_3ae084:
    // 0x3ae084: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae084u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE084 raw=0x07070707");
label_3ae088:
    // 0x3ae088: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae088u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE088 raw=0x07070707");
label_3ae08c:
    // 0x3ae08c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae08cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE08C raw=0x07070707");
label_3ae090:
    // 0x3ae090: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae090u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE090 raw=0x07070707");
label_3ae094:
    // 0x3ae094: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae094u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE094 raw=0x07070707");
label_3ae098:
    // 0x3ae098: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae098u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE098 raw=0x07070707");
label_3ae09c:
    // 0x3ae09c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae09cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE09C raw=0x07070707");
label_3ae0a0:
    // 0x3ae0a0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae0a0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE0A0 raw=0x07070707");
label_3ae0a4:
    // 0x3ae0a4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3ae0a4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x3AE0A4 raw=0x07070707");
label_3ae0a8:
    // 0x3ae0a8: 0x8080808  j           func_202020
label_3ae0ac:
    if (ctx->pc == 0x3AE0ACu) {
        ctx->pc = 0x3AE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0A8u;
        // 0x3ae0ac: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0B0u;
        goto label_3ae0b0;
    }
    ctx->pc = 0x3AE0A8u;
    ctx->pc = 0x3AE0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0A8u;
    // 0x3ae0ac: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0B0u;
label_3ae0b0:
    // 0x3ae0b0: 0x8080808  j           func_202020
label_3ae0b4:
    if (ctx->pc == 0x3AE0B4u) {
        ctx->pc = 0x3AE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0B0u;
        // 0x3ae0b4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0B8u;
        goto label_3ae0b8;
    }
    ctx->pc = 0x3AE0B0u;
    ctx->pc = 0x3AE0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0B0u;
    // 0x3ae0b4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0B8u;
label_3ae0b8:
    // 0x3ae0b8: 0x8080808  j           func_202020
label_3ae0bc:
    if (ctx->pc == 0x3AE0BCu) {
        ctx->pc = 0x3AE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0B8u;
        // 0x3ae0bc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0C0u;
        goto label_3ae0c0;
    }
    ctx->pc = 0x3AE0B8u;
    ctx->pc = 0x3AE0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0B8u;
    // 0x3ae0bc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0C0u;
label_3ae0c0:
    // 0x3ae0c0: 0x8080808  j           func_202020
label_3ae0c4:
    if (ctx->pc == 0x3AE0C4u) {
        ctx->pc = 0x3AE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0C0u;
        // 0x3ae0c4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0C8u;
        goto label_3ae0c8;
    }
    ctx->pc = 0x3AE0C0u;
    ctx->pc = 0x3AE0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0C0u;
    // 0x3ae0c4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0C8u;
label_3ae0c8:
    // 0x3ae0c8: 0x8080808  j           func_202020
label_3ae0cc:
    if (ctx->pc == 0x3AE0CCu) {
        ctx->pc = 0x3AE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0C8u;
        // 0x3ae0cc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0D0u;
        goto label_3ae0d0;
    }
    ctx->pc = 0x3AE0C8u;
    ctx->pc = 0x3AE0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0C8u;
    // 0x3ae0cc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0D0u;
label_3ae0d0:
    // 0x3ae0d0: 0x8080808  j           func_202020
label_3ae0d4:
    if (ctx->pc == 0x3AE0D4u) {
        ctx->pc = 0x3AE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0D0u;
        // 0x3ae0d4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0D8u;
        goto label_3ae0d8;
    }
    ctx->pc = 0x3AE0D0u;
    ctx->pc = 0x3AE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0D0u;
    // 0x3ae0d4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0D8u;
label_3ae0d8:
    // 0x3ae0d8: 0x8080808  j           func_202020
label_3ae0dc:
    if (ctx->pc == 0x3AE0DCu) {
        ctx->pc = 0x3AE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0D8u;
        // 0x3ae0dc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0E0u;
        goto label_3ae0e0;
    }
    ctx->pc = 0x3AE0D8u;
    ctx->pc = 0x3AE0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0D8u;
    // 0x3ae0dc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0E0u;
label_3ae0e0:
    // 0x3ae0e0: 0x8080808  j           func_202020
label_3ae0e4:
    if (ctx->pc == 0x3AE0E4u) {
        ctx->pc = 0x3AE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0E0u;
        // 0x3ae0e4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0E8u;
        goto label_3ae0e8;
    }
    ctx->pc = 0x3AE0E0u;
    ctx->pc = 0x3AE0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0E0u;
    // 0x3ae0e4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0E8u;
label_3ae0e8:
    // 0x3ae0e8: 0x8080808  j           func_202020
label_3ae0ec:
    if (ctx->pc == 0x3AE0ECu) {
        ctx->pc = 0x3AE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0E8u;
        // 0x3ae0ec: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0F0u;
        goto label_3ae0f0;
    }
    ctx->pc = 0x3AE0E8u;
    ctx->pc = 0x3AE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0E8u;
    // 0x3ae0ec: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0F0u;
label_3ae0f0:
    // 0x3ae0f0: 0x8080808  j           func_202020
label_3ae0f4:
    if (ctx->pc == 0x3AE0F4u) {
        ctx->pc = 0x3AE0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0F0u;
        // 0x3ae0f4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE0F8u;
        goto label_3ae0f8;
    }
    ctx->pc = 0x3AE0F0u;
    ctx->pc = 0x3AE0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0F0u;
    // 0x3ae0f4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0F8u;
label_3ae0f8:
    // 0x3ae0f8: 0x8080808  j           func_202020
label_3ae0fc:
    if (ctx->pc == 0x3AE0FCu) {
        ctx->pc = 0x3AE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0F8u;
        // 0x3ae0fc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE100u;
        goto label_3ae100;
    }
    ctx->pc = 0x3AE0F8u;
    ctx->pc = 0x3AE0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0F8u;
    // 0x3ae0fc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE0F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE100u;
label_3ae100:
    // 0x3ae100: 0x8080808  j           func_202020
label_3ae104:
    if (ctx->pc == 0x3AE104u) {
        ctx->pc = 0x3AE104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE100u;
        // 0x3ae104: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE108u;
        goto label_3ae108;
    }
    ctx->pc = 0x3AE100u;
    ctx->pc = 0x3AE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE100u;
    // 0x3ae104: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE100u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE108u;
label_3ae108:
    // 0x3ae108: 0x8080808  j           func_202020
label_3ae10c:
    if (ctx->pc == 0x3AE10Cu) {
        ctx->pc = 0x3AE10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE108u;
        // 0x3ae10c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE110u;
        goto label_3ae110;
    }
    ctx->pc = 0x3AE108u;
    ctx->pc = 0x3AE10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE108u;
    // 0x3ae10c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE108u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE110u;
label_3ae110:
    // 0x3ae110: 0x8080808  j           func_202020
label_3ae114:
    if (ctx->pc == 0x3AE114u) {
        ctx->pc = 0x3AE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE110u;
        // 0x3ae114: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE118u;
        goto label_3ae118;
    }
    ctx->pc = 0x3AE110u;
    ctx->pc = 0x3AE114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE110u;
    // 0x3ae114: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE110u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE118u;
label_3ae118:
    // 0x3ae118: 0x8080808  j           func_202020
label_3ae11c:
    if (ctx->pc == 0x3AE11Cu) {
        ctx->pc = 0x3AE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE118u;
        // 0x3ae11c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE120u;
        goto label_3ae120;
    }
    ctx->pc = 0x3AE118u;
    ctx->pc = 0x3AE11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE118u;
    // 0x3ae11c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE118u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE120u;
label_3ae120:
    // 0x3ae120: 0x8080808  j           func_202020
label_3ae124:
    if (ctx->pc == 0x3AE124u) {
        ctx->pc = 0x3AE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE120u;
        // 0x3ae124: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE128u;
        goto label_3ae128;
    }
    ctx->pc = 0x3AE120u;
    ctx->pc = 0x3AE124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE120u;
    // 0x3ae124: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x3AE120u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE128u;
label_3ae128:
    // 0x3ae128: 0x0  nop
    ctx->pc = 0x3ae128u;
    // NOP
label_3ae12c:
    // 0x3ae12c: 0x0  nop
    ctx->pc = 0x3ae12cu;
    // NOP
label_3ae130:
    // 0x3ae130: 0x120b00  sll         $at, $s2, 12
    ctx->pc = 0x3ae130u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 18), 12));
label_3ae134:
    // 0x3ae134: 0x120558  .word       0x00120558                   # mult        $zero, $zero, $s2 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ae138:
    // 0x3ae138: 0x120680  sll         $zero, $s2, 26
    ctx->pc = 0x3ae138u;
    
label_3ae13c:
    // 0x3ae13c: 0x120790  .word       0x00120790                   # mfhi        $zero # 00120780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae13cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_3ae140:
    // 0x3ae140: 0x1208b8  dsll        $at, $s2, 2
    ctx->pc = 0x3ae140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 18) << 2);
label_3ae144:
    // 0x3ae144: 0x1209e0  .word       0x001209E0                   # add         $at, $zero, $s2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_3ae148:
    // 0x3ae148: 0x0  nop
    ctx->pc = 0x3ae148u;
    // NOP
label_3ae14c:
    // 0x3ae14c: 0x0  nop
    ctx->pc = 0x3ae14cu;
    // NOP
label_3ae150:
    // 0x3ae150: 0x121118  .word       0x00121118                   # mult        $v0, $zero, $s2 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ae154:
    // 0x3ae154: 0x121118  .word       0x00121118                   # mult        $v0, $zero, $s2 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ae158:
    // 0x3ae158: 0x121118  .word       0x00121118                   # mult        $v0, $zero, $s2 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ae15c:
    // 0x3ae15c: 0x121118  .word       0x00121118                   # mult        $v0, $zero, $s2 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ae160:
    // 0x3ae160: 0x121118  .word       0x00121118                   # mult        $v0, $zero, $s2 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ae164:
    // 0x3ae164: 0x121118  .word       0x00121118                   # mult        $v0, $zero, $s2 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ae168:
    // 0x3ae168: 0x121118  .word       0x00121118                   # mult        $v0, $zero, $s2 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ae16c:
    // 0x3ae16c: 0x0  nop
    ctx->pc = 0x3ae16cu;
    // NOP
label_3ae170:
    // 0x3ae170: 0x123168  .word       0x00123168                   # mfsa        $a2 # 00120140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae170u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_3ae174:
    // 0x3ae174: 0x123180  sll         $a2, $s2, 6
    ctx->pc = 0x3ae174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_3ae178:
    // 0x3ae178: 0x123198  .word       0x00123198                   # mult        $a2, $zero, $s2 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3ae17c:
    // 0x3ae17c: 0x1231b0  tge         $zero, $s2, 198
    ctx->pc = 0x3ae17cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae180:
    // 0x3ae180: 0x1231c8  .word       0x001231C8                   # jr          $zero # 001231C0 <InstrIdType: CPU_SPECIAL>
label_3ae184:
    if (ctx->pc == 0x3AE184u) {
        ctx->pc = 0x3AE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE180u;
        // 0x3ae184: 0x1231e0  .word       0x001231E0                   # add         $a2, $zero, $s2 # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE188u;
        goto label_3ae188;
    }
    ctx->pc = 0x3AE180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE180u;
        // 0x3ae184: 0x1231e0  .word       0x001231E0                   # add         $a2, $zero, $s2 # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE180u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE188u;
label_3ae188:
    // 0x3ae188: 0x1231f8  dsll        $a2, $s2, 7
    ctx->pc = 0x3ae188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << 7);
label_3ae18c:
    // 0x3ae18c: 0x123210  .word       0x00123210                   # mfhi        $a2 # 00120200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae18cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_3ae190:
    // 0x3ae190: 0x123228  .word       0x00123228                   # mfsa        $a2 # 00120200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae190u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_3ae194:
    // 0x3ae194: 0x123240  sll         $a2, $s2, 9
    ctx->pc = 0x3ae194u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
label_3ae198:
    // 0x3ae198: 0x123258  .word       0x00123258                   # mult        $a2, $zero, $s2 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3ae19c:
    // 0x3ae19c: 0x123270  tge         $zero, $s2, 201
    ctx->pc = 0x3ae19cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae1a0:
    // 0x3ae1a0: 0x123288  .word       0x00123288                   # jr          $zero # 00123280 <InstrIdType: CPU_SPECIAL>
label_3ae1a4:
    if (ctx->pc == 0x3AE1A4u) {
        ctx->pc = 0x3AE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1A0u;
        // 0x3ae1a4: 0x1232a0  .word       0x001232A0                   # add         $a2, $zero, $s2 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE1A8u;
        goto label_3ae1a8;
    }
    ctx->pc = 0x3AE1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1A0u;
        // 0x3ae1a4: 0x1232a0  .word       0x001232A0                   # add         $a2, $zero, $s2 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE1A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE1A8u;
label_3ae1a8:
    // 0x3ae1a8: 0x1232b8  dsll        $a2, $s2, 10
    ctx->pc = 0x3ae1a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << 10);
label_3ae1ac:
    // 0x3ae1ac: 0x1232d0  .word       0x001232D0                   # mfhi        $a2 # 001202C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae1acu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_3ae1b0:
    // 0x3ae1b0: 0x123e68  .word       0x00123E68                   # mfsa        $a3 # 00120640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1b0u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3ae1b4:
    // 0x3ae1b4: 0x123d68  .word       0x00123D68                   # mfsa        $a3 # 00120540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1b4u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3ae1b8:
    // 0x3ae1b8: 0x123d80  sll         $a3, $s2, 22
    ctx->pc = 0x3ae1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 22));
label_3ae1bc:
    // 0x3ae1bc: 0x123d98  .word       0x00123D98                   # mult        $a3, $zero, $s2 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_3ae1c0:
    // 0x3ae1c0: 0x123db0  tge         $zero, $s2, 246
    ctx->pc = 0x3ae1c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae1c4:
    // 0x3ae1c4: 0x123dc8  .word       0x00123DC8                   # jr          $zero # 00123DC0 <InstrIdType: CPU_SPECIAL>
label_3ae1c8:
    if (ctx->pc == 0x3AE1C8u) {
        ctx->pc = 0x3AE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1C4u;
        // 0x3ae1c8: 0x123de0  .word       0x00123DE0                   # add         $a3, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE1CCu;
        goto label_3ae1cc;
    }
    ctx->pc = 0x3AE1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1C4u;
        // 0x3ae1c8: 0x123de0  .word       0x00123DE0                   # add         $a3, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE1C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE1CCu;
label_3ae1cc:
    // 0x3ae1cc: 0x123df8  dsll        $a3, $s2, 23
    ctx->pc = 0x3ae1ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << 23);
label_3ae1d0:
    // 0x3ae1d0: 0x123e40  sll         $a3, $s2, 25
    ctx->pc = 0x3ae1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 25));
label_3ae1d4:
    // 0x3ae1d4: 0x123e68  .word       0x00123E68                   # mfsa        $a3 # 00120640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1d4u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3ae1d8:
    // 0x3ae1d8: 0x123e68  .word       0x00123E68                   # mfsa        $a3 # 00120640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1d8u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3ae1dc:
    // 0x3ae1dc: 0x123e68  .word       0x00123E68                   # mfsa        $a3 # 00120640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1dcu;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3ae1e0:
    // 0x3ae1e0: 0x123e68  .word       0x00123E68                   # mfsa        $a3 # 00120640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1e0u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3ae1e4:
    // 0x3ae1e4: 0x123e68  .word       0x00123E68                   # mfsa        $a3 # 00120640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1e4u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3ae1e8:
    // 0x3ae1e8: 0x123e68  .word       0x00123E68                   # mfsa        $a3 # 00120640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1e8u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3ae1ec:
    // 0x3ae1ec: 0x123e58  .word       0x00123E58                   # mult        $a3, $zero, $s2 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_3ae1f0:
    // 0x3ae1f0: 0x12575c  .word       0x0012575C                   # dmult       $zero, $s2 # 00005740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae1f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE1F0 raw=0x0012575C");
label_3ae1f4:
    // 0x3ae1f4: 0x12575c  .word       0x0012575C                   # dmult       $zero, $s2 # 00005740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae1f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE1F4 raw=0x0012575C");
label_3ae1f8:
    // 0x3ae1f8: 0x12575c  .word       0x0012575C                   # dmult       $zero, $s2 # 00005740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae1f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE1F8 raw=0x0012575C");
label_3ae1fc:
    // 0x3ae1fc: 0x12575c  .word       0x0012575C                   # dmult       $zero, $s2 # 00005740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae1fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE1FC raw=0x0012575C");
label_3ae200:
    // 0x3ae200: 0x125d64  .word       0x00125D64                   # and         $t3, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae200u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae204:
    // 0x3ae204: 0x12575c  .word       0x0012575C                   # dmult       $zero, $s2 # 00005740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae204u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE204 raw=0x0012575C");
label_3ae208:
    // 0x3ae208: 0x125d64  .word       0x00125D64                   # and         $t3, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae208u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae20c:
    // 0x3ae20c: 0x12575c  .word       0x0012575C                   # dmult       $zero, $s2 # 00005740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae20cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE20C raw=0x0012575C");
label_3ae210:
    // 0x3ae210: 0x125e3c  dsll32      $t3, $s2, 24
    ctx->pc = 0x3ae210u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) << (32 + 24));
label_3ae214:
    // 0x3ae214: 0x125e3c  dsll32      $t3, $s2, 24
    ctx->pc = 0x3ae214u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) << (32 + 24));
label_3ae218:
    // 0x3ae218: 0x125e3c  dsll32      $t3, $s2, 24
    ctx->pc = 0x3ae218u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) << (32 + 24));
label_3ae21c:
    // 0x3ae21c: 0x125e3c  dsll32      $t3, $s2, 24
    ctx->pc = 0x3ae21cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) << (32 + 24));
label_3ae220:
    // 0x3ae220: 0x126510  .word       0x00126510                   # mfhi        $t4 # 00120500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae220u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3ae224:
    // 0x3ae224: 0x125e3c  dsll32      $t3, $s2, 24
    ctx->pc = 0x3ae224u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) << (32 + 24));
label_3ae228:
    // 0x3ae228: 0x126510  .word       0x00126510                   # mfhi        $t4 # 00120500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae228u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3ae22c:
    // 0x3ae22c: 0x125e3c  dsll32      $t3, $s2, 24
    ctx->pc = 0x3ae22cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) << (32 + 24));
label_3ae230:
    // 0x3ae230: 0x126bf0  tge         $zero, $s2, 431
    ctx->pc = 0x3ae230u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae234:
    // 0x3ae234: 0x126d9c  .word       0x00126D9C                   # dmult       $zero, $s2 # 00006D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae234u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE234 raw=0x00126D9C");
label_3ae238:
    // 0x3ae238: 0x126d9c  .word       0x00126D9C                   # dmult       $zero, $s2 # 00006D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae238u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE238 raw=0x00126D9C");
label_3ae23c:
    // 0x3ae23c: 0x126d9c  .word       0x00126D9C                   # dmult       $zero, $s2 # 00006D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae23cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE23C raw=0x00126D9C");
label_3ae240:
    // 0x3ae240: 0x126d9c  .word       0x00126D9C                   # dmult       $zero, $s2 # 00006D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae240u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE240 raw=0x00126D9C");
label_3ae244:
    // 0x3ae244: 0x126c58  .word       0x00126C58                   # mult        $t5, $zero, $s2 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3ae248:
    // 0x3ae248: 0x126c58  .word       0x00126C58                   # mult        $t5, $zero, $s2 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3ae24c:
    // 0x3ae24c: 0x126c58  .word       0x00126C58                   # mult        $t5, $zero, $s2 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3ae250:
    // 0x3ae250: 0x126c58  .word       0x00126C58                   # mult        $t5, $zero, $s2 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3ae254:
    // 0x3ae254: 0x126ce4  .word       0x00126CE4                   # and         $t5, $zero, $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae254u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae258:
    // 0x3ae258: 0x126ce4  .word       0x00126CE4                   # and         $t5, $zero, $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae258u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae25c:
    // 0x3ae25c: 0x126d34  teq         $zero, $s2, 436
    ctx->pc = 0x3ae25cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae260:
    // 0x3ae260: 0x1265ec  .word       0x001265EC                   # dadd        $t4, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae260u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3ae264:
    // 0x3ae264: 0x1265ec  .word       0x001265EC                   # dadd        $t4, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae264u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3ae268:
    // 0x3ae268: 0x1265ec  .word       0x001265EC                   # dadd        $t4, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae268u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3ae26c:
    // 0x3ae26c: 0x1265ec  .word       0x001265EC                   # dadd        $t4, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae26cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3ae270:
    // 0x3ae270: 0x126da4  .word       0x00126DA4                   # and         $t5, $zero, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae270u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae274:
    // 0x3ae274: 0x1265ec  .word       0x001265EC                   # dadd        $t4, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae274u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3ae278:
    // 0x3ae278: 0x126da4  .word       0x00126DA4                   # and         $t5, $zero, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae278u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae27c:
    // 0x3ae27c: 0x1265ec  .word       0x001265EC                   # dadd        $t4, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae27cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3ae280:
    // 0x3ae280: 0x127258  .word       0x00127258                   # mult        $t6, $zero, $s2 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3ae284:
    // 0x3ae284: 0x127258  .word       0x00127258                   # mult        $t6, $zero, $s2 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3ae288:
    // 0x3ae288: 0x127258  .word       0x00127258                   # mult        $t6, $zero, $s2 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3ae28c:
    // 0x3ae28c: 0x127258  .word       0x00127258                   # mult        $t6, $zero, $s2 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3ae290:
    // 0x3ae290: 0x127258  .word       0x00127258                   # mult        $t6, $zero, $s2 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3ae294:
    // 0x3ae294: 0x127290  .word       0x00127290                   # mfhi        $t6 # 00120280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae294u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3ae298:
    // 0x3ae298: 0x127290  .word       0x00127290                   # mfhi        $t6 # 00120280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae298u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3ae29c:
    // 0x3ae29c: 0x1272e4  .word       0x001272E4                   # and         $t6, $zero, $s2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae29cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae2a0:
    // 0x3ae2a0: 0x127048  .word       0x00127048                   # jr          $zero # 00127040 <InstrIdType: CPU_SPECIAL>
label_3ae2a4:
    if (ctx->pc == 0x3AE2A4u) {
        ctx->pc = 0x3AE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2A0u;
        // 0x3ae2a4: 0x127048  .word       0x00127048                   # jr          $zero # 00127040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2A8u;
        goto label_3ae2a8;
    }
    ctx->pc = 0x3AE2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2A0u;
        // 0x3ae2a4: 0x127048  .word       0x00127048                   # jr          $zero # 00127040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE2A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE2A8u;
label_3ae2a8:
    // 0x3ae2a8: 0x1270f4  teq         $zero, $s2, 451
    ctx->pc = 0x3ae2a8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2ac:
    // 0x3ae2ac: 0x1270f4  teq         $zero, $s2, 451
    ctx->pc = 0x3ae2acu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2b0:
    // 0x3ae2b0: 0x1270f4  teq         $zero, $s2, 451
    ctx->pc = 0x3ae2b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2b4:
    // 0x3ae2b4: 0x1270f4  teq         $zero, $s2, 451
    ctx->pc = 0x3ae2b4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2b8:
    // 0x3ae2b8: 0x0  nop
    ctx->pc = 0x3ae2b8u;
    // NOP
label_3ae2bc:
    // 0x3ae2bc: 0x0  nop
    ctx->pc = 0x3ae2bcu;
    // NOP
label_3ae2c0:
    // 0x3ae2c0: 0x126e7c  dsll32      $t5, $s2, 25
    ctx->pc = 0x3ae2c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) << (32 + 25));
label_3ae2c4:
    // 0x3ae2c4: 0x126e7c  dsll32      $t5, $s2, 25
    ctx->pc = 0x3ae2c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) << (32 + 25));
label_3ae2c8:
    // 0x3ae2c8: 0x126e7c  dsll32      $t5, $s2, 25
    ctx->pc = 0x3ae2c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) << (32 + 25));
label_3ae2cc:
    // 0x3ae2cc: 0x126e7c  dsll32      $t5, $s2, 25
    ctx->pc = 0x3ae2ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) << (32 + 25));
label_3ae2d0:
    // 0x3ae2d0: 0x12733c  dsll32      $t6, $s2, 12
    ctx->pc = 0x3ae2d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 12));
label_3ae2d4:
    // 0x3ae2d4: 0x126e7c  dsll32      $t5, $s2, 25
    ctx->pc = 0x3ae2d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) << (32 + 25));
label_3ae2d8:
    // 0x3ae2d8: 0x12733c  dsll32      $t6, $s2, 12
    ctx->pc = 0x3ae2d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 12));
label_3ae2dc:
    // 0x3ae2dc: 0x126e7c  dsll32      $t5, $s2, 25
    ctx->pc = 0x3ae2dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) << (32 + 25));
label_3ae2e0:
    // 0x3ae2e0: 0x1279b0  tge         $zero, $s2, 486
    ctx->pc = 0x3ae2e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2e4:
    // 0x3ae2e4: 0x1279b0  tge         $zero, $s2, 486
    ctx->pc = 0x3ae2e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2e8:
    // 0x3ae2e8: 0x1279b0  tge         $zero, $s2, 486
    ctx->pc = 0x3ae2e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2ec:
    // 0x3ae2ec: 0x1279b0  tge         $zero, $s2, 486
    ctx->pc = 0x3ae2ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2f0:
    // 0x3ae2f0: 0x1279b0  tge         $zero, $s2, 486
    ctx->pc = 0x3ae2f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2f4:
    // 0x3ae2f4: 0x1279b0  tge         $zero, $s2, 486
    ctx->pc = 0x3ae2f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae2f8:
    // 0x3ae2f8: 0x127a18  .word       0x00127A18                   # mult        $t7, $zero, $s2 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae2f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3ae2fc:
    // 0x3ae2fc: 0x127a18  .word       0x00127A18                   # mult        $t7, $zero, $s2 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3ae300:
    // 0x3ae300: 0x12740c  .word       0x0012740C                   # syscall     464 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae300u;
    ctx->pc = 0x3AE304u;
runtime->handleSyscall(rdram, ctx, 0x49D0u);
label_3ae304:
    // 0x3ae304: 0x12740c  .word       0x0012740C                   # syscall     464 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae304u;
    ctx->pc = 0x3AE308u;
runtime->handleSyscall(rdram, ctx, 0x49D0u);
label_3ae308:
    // 0x3ae308: 0x12740c  .word       0x0012740C                   # syscall     464 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae308u;
    ctx->pc = 0x3AE30Cu;
runtime->handleSyscall(rdram, ctx, 0x49D0u);
label_3ae30c:
    // 0x3ae30c: 0x12740c  .word       0x0012740C                   # syscall     464 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae30cu;
    ctx->pc = 0x3AE310u;
runtime->handleSyscall(rdram, ctx, 0x49D0u);
label_3ae310:
    // 0x3ae310: 0x127a20  .word       0x00127A20                   # add         $t7, $zero, $s2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae310u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3ae314:
    // 0x3ae314: 0x12740c  .word       0x0012740C                   # syscall     464 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae314u;
    ctx->pc = 0x3AE318u;
runtime->handleSyscall(rdram, ctx, 0x49D0u);
label_3ae318:
    // 0x3ae318: 0x127a20  .word       0x00127A20                   # add         $t7, $zero, $s2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae318u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3ae31c:
    // 0x3ae31c: 0x12740c  .word       0x0012740C                   # syscall     464 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae31cu;
    ctx->pc = 0x3AE320u;
runtime->handleSyscall(rdram, ctx, 0x49D0u);
label_3ae320:
    // 0x3ae320: 0x127afc  dsll32      $t7, $s2, 11
    ctx->pc = 0x3ae320u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 11));
label_3ae324:
    // 0x3ae324: 0x127afc  dsll32      $t7, $s2, 11
    ctx->pc = 0x3ae324u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 11));
label_3ae328:
    // 0x3ae328: 0x127afc  dsll32      $t7, $s2, 11
    ctx->pc = 0x3ae328u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 11));
label_3ae32c:
    // 0x3ae32c: 0x127afc  dsll32      $t7, $s2, 11
    ctx->pc = 0x3ae32cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 11));
label_3ae330:
    // 0x3ae330: 0x12839c  .word       0x0012839C                   # dmult       $zero, $s2 # 00008380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae330u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE330 raw=0x0012839C");
label_3ae334:
    // 0x3ae334: 0x127afc  dsll32      $t7, $s2, 11
    ctx->pc = 0x3ae334u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 11));
label_3ae338:
    // 0x3ae338: 0x12839c  .word       0x0012839C                   # dmult       $zero, $s2 # 00008380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae338u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE338 raw=0x0012839C");
label_3ae33c:
    // 0x3ae33c: 0x127afc  dsll32      $t7, $s2, 11
    ctx->pc = 0x3ae33cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 11));
label_3ae340:
    // 0x3ae340: 0x128cbc  dsll32      $s1, $s2, 18
    ctx->pc = 0x3ae340u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 18));
label_3ae344:
    // 0x3ae344: 0x128cbc  dsll32      $s1, $s2, 18
    ctx->pc = 0x3ae344u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 18));
label_3ae348:
    // 0x3ae348: 0x128cbc  dsll32      $s1, $s2, 18
    ctx->pc = 0x3ae348u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 18));
label_3ae34c:
    // 0x3ae34c: 0x128cbc  dsll32      $s1, $s2, 18
    ctx->pc = 0x3ae34cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 18));
label_3ae350:
    // 0x3ae350: 0x128cbc  dsll32      $s1, $s2, 18
    ctx->pc = 0x3ae350u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 18));
label_3ae354:
    // 0x3ae354: 0x128cbc  dsll32      $s1, $s2, 18
    ctx->pc = 0x3ae354u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 18));
label_3ae358:
    // 0x3ae358: 0x0  nop
    ctx->pc = 0x3ae358u;
    // NOP
label_3ae35c:
    // 0x3ae35c: 0x0  nop
    ctx->pc = 0x3ae35cu;
    // NOP
label_3ae360:
    // 0x3ae360: 0x128b34  teq         $zero, $s2, 556
    ctx->pc = 0x3ae360u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae364:
    // 0x3ae364: 0x128b34  teq         $zero, $s2, 556
    ctx->pc = 0x3ae364u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae368:
    // 0x3ae368: 0x128b34  teq         $zero, $s2, 556
    ctx->pc = 0x3ae368u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae36c:
    // 0x3ae36c: 0x128b34  teq         $zero, $s2, 556
    ctx->pc = 0x3ae36cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae370:
    // 0x3ae370: 0x128b34  teq         $zero, $s2, 556
    ctx->pc = 0x3ae370u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae374:
    // 0x3ae374: 0x128b34  teq         $zero, $s2, 556
    ctx->pc = 0x3ae374u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae378:
    // 0x3ae378: 0x0  nop
    ctx->pc = 0x3ae378u;
    // NOP
label_3ae37c:
    // 0x3ae37c: 0x0  nop
    ctx->pc = 0x3ae37cu;
    // NOP
label_3ae380:
    // 0x3ae380: 0x12891c  .word       0x0012891C                   # dmult       $zero, $s2 # 00008900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae380u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE380 raw=0x0012891C");
label_3ae384:
    // 0x3ae384: 0x12891c  .word       0x0012891C                   # dmult       $zero, $s2 # 00008900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae384u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE384 raw=0x0012891C");
label_3ae388:
    // 0x3ae388: 0x12891c  .word       0x0012891C                   # dmult       $zero, $s2 # 00008900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae388u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE388 raw=0x0012891C");
label_3ae38c:
    // 0x3ae38c: 0x12891c  .word       0x0012891C                   # dmult       $zero, $s2 # 00008900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae38cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE38C raw=0x0012891C");
label_3ae390:
    // 0x3ae390: 0x12891c  .word       0x0012891C                   # dmult       $zero, $s2 # 00008900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae390u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE390 raw=0x0012891C");
label_3ae394:
    // 0x3ae394: 0x12891c  .word       0x0012891C                   # dmult       $zero, $s2 # 00008900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae394u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE394 raw=0x0012891C");
label_3ae398:
    // 0x3ae398: 0x0  nop
    ctx->pc = 0x3ae398u;
    // NOP
label_3ae39c:
    // 0x3ae39c: 0x0  nop
    ctx->pc = 0x3ae39cu;
    // NOP
label_3ae3a0:
    // 0x3ae3a0: 0x1286d4  .word       0x001286D4                   # dsllv       $s0, $s2, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae3a4:
    // 0x3ae3a4: 0x1286d4  .word       0x001286D4                   # dsllv       $s0, $s2, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae3a8:
    // 0x3ae3a8: 0x1286d4  .word       0x001286D4                   # dsllv       $s0, $s2, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae3ac:
    // 0x3ae3ac: 0x1286d4  .word       0x001286D4                   # dsllv       $s0, $s2, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae3b0:
    // 0x3ae3b0: 0x1286d4  .word       0x001286D4                   # dsllv       $s0, $s2, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae3b4:
    // 0x3ae3b4: 0x1286d4  .word       0x001286D4                   # dsllv       $s0, $s2, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae3b8:
    // 0x3ae3b8: 0x0  nop
    ctx->pc = 0x3ae3b8u;
    // NOP
label_3ae3bc:
    // 0x3ae3bc: 0x0  nop
    ctx->pc = 0x3ae3bcu;
    // NOP
label_3ae3c0:
    // 0x3ae3c0: 0x12846c  .word       0x0012846C                   # dadd        $s0, $zero, $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_3ae3c4:
    // 0x3ae3c4: 0x12846c  .word       0x0012846C                   # dadd        $s0, $zero, $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_3ae3c8:
    // 0x3ae3c8: 0x12846c  .word       0x0012846C                   # dadd        $s0, $zero, $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3c8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_3ae3cc:
    // 0x3ae3cc: 0x12846c  .word       0x0012846C                   # dadd        $s0, $zero, $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_3ae3d0:
    // 0x3ae3d0: 0x128d1c  .word       0x00128D1C                   # dmult       $zero, $s2 # 00008D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE3D0 raw=0x00128D1C");
label_3ae3d4:
    // 0x3ae3d4: 0x12846c  .word       0x0012846C                   # dadd        $s0, $zero, $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_3ae3d8:
    // 0x3ae3d8: 0x128d1c  .word       0x00128D1C                   # dmult       $zero, $s2 # 00008D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE3D8 raw=0x00128D1C");
label_3ae3dc:
    // 0x3ae3dc: 0x12846c  .word       0x0012846C                   # dadd        $s0, $zero, $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3dcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_3ae3e0:
    // 0x3ae3e0: 0x128dec  .word       0x00128DEC                   # dadd        $s1, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_3ae3e4:
    // 0x3ae3e4: 0x128dec  .word       0x00128DEC                   # dadd        $s1, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_3ae3e8:
    // 0x3ae3e8: 0x128dec  .word       0x00128DEC                   # dadd        $s1, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3e8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_3ae3ec:
    // 0x3ae3ec: 0x128dec  .word       0x00128DEC                   # dadd        $s1, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_3ae3f0:
    // 0x3ae3f0: 0x129578  dsll        $s2, $s2, 21
    ctx->pc = 0x3ae3f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 21);
label_3ae3f4:
    // 0x3ae3f4: 0x128dec  .word       0x00128DEC                   # dadd        $s1, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3f4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_3ae3f8:
    // 0x3ae3f8: 0x129578  dsll        $s2, $s2, 21
    ctx->pc = 0x3ae3f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 21);
label_3ae3fc:
    // 0x3ae3fc: 0x128dec  .word       0x00128DEC                   # dadd        $s1, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae3fcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_3ae400:
    // 0x3ae400: 0x1298b8  dsll        $s3, $s2, 2
    ctx->pc = 0x3ae400u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << 2);
label_3ae404:
    // 0x3ae404: 0x1298b8  dsll        $s3, $s2, 2
    ctx->pc = 0x3ae404u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << 2);
label_3ae408:
    // 0x3ae408: 0x129964  .word       0x00129964                   # and         $s3, $zero, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae408u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae40c:
    // 0x3ae40c: 0x129964  .word       0x00129964                   # and         $s3, $zero, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae40cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae410:
    // 0x3ae410: 0x129964  .word       0x00129964                   # and         $s3, $zero, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae410u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae414:
    // 0x3ae414: 0x129964  .word       0x00129964                   # and         $s3, $zero, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae414u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae418:
    // 0x3ae418: 0x0  nop
    ctx->pc = 0x3ae418u;
    // NOP
label_3ae41c:
    // 0x3ae41c: 0x0  nop
    ctx->pc = 0x3ae41cu;
    // NOP
label_3ae420:
    // 0x3ae420: 0x12964c  .word       0x0012964C                   # syscall     601 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae420u;
    ctx->pc = 0x3AE424u;
runtime->handleSyscall(rdram, ctx, 0x4A59u);
label_3ae424:
    // 0x3ae424: 0x12964c  .word       0x0012964C                   # syscall     601 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae424u;
    ctx->pc = 0x3AE428u;
runtime->handleSyscall(rdram, ctx, 0x4A59u);
label_3ae428:
    // 0x3ae428: 0x12964c  .word       0x0012964C                   # syscall     601 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae428u;
    ctx->pc = 0x3AE42Cu;
runtime->handleSyscall(rdram, ctx, 0x4A59u);
label_3ae42c:
    // 0x3ae42c: 0x12964c  .word       0x0012964C                   # syscall     601 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae42cu;
    ctx->pc = 0x3AE430u;
runtime->handleSyscall(rdram, ctx, 0x4A59u);
label_3ae430:
    // 0x3ae430: 0x129d3c  dsll32      $s3, $s2, 20
    ctx->pc = 0x3ae430u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 20));
label_3ae434:
    // 0x3ae434: 0x12964c  .word       0x0012964C                   # syscall     601 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae434u;
    ctx->pc = 0x3AE438u;
runtime->handleSyscall(rdram, ctx, 0x4A59u);
label_3ae438:
    // 0x3ae438: 0x129d3c  dsll32      $s3, $s2, 20
    ctx->pc = 0x3ae438u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 20));
label_3ae43c:
    // 0x3ae43c: 0x12964c  .word       0x0012964C                   # syscall     601 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae43cu;
    ctx->pc = 0x3AE440u;
runtime->handleSyscall(rdram, ctx, 0x4A59u);
label_3ae440:
    // 0x3ae440: 0x12a078  dsll        $s4, $s2, 1
    ctx->pc = 0x3ae440u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << 1);
label_3ae444:
    // 0x3ae444: 0x12a078  dsll        $s4, $s2, 1
    ctx->pc = 0x3ae444u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << 1);
label_3ae448:
    // 0x3ae448: 0x12a124  .word       0x0012A124                   # and         $s4, $zero, $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae448u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae44c:
    // 0x3ae44c: 0x12a124  .word       0x0012A124                   # and         $s4, $zero, $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae44cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae450:
    // 0x3ae450: 0x12a124  .word       0x0012A124                   # and         $s4, $zero, $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae450u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae454:
    // 0x3ae454: 0x12a124  .word       0x0012A124                   # and         $s4, $zero, $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae454u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae458:
    // 0x3ae458: 0x0  nop
    ctx->pc = 0x3ae458u;
    // NOP
label_3ae45c:
    // 0x3ae45c: 0x0  nop
    ctx->pc = 0x3ae45cu;
    // NOP
label_3ae460:
    // 0x3ae460: 0x129e0c  .word       0x00129E0C                   # syscall     632 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae460u;
    ctx->pc = 0x3AE464u;
runtime->handleSyscall(rdram, ctx, 0x4A78u);
label_3ae464:
    // 0x3ae464: 0x129e0c  .word       0x00129E0C                   # syscall     632 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae464u;
    ctx->pc = 0x3AE468u;
runtime->handleSyscall(rdram, ctx, 0x4A78u);
label_3ae468:
    // 0x3ae468: 0x129e0c  .word       0x00129E0C                   # syscall     632 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae468u;
    ctx->pc = 0x3AE46Cu;
runtime->handleSyscall(rdram, ctx, 0x4A78u);
label_3ae46c:
    // 0x3ae46c: 0x129e0c  .word       0x00129E0C                   # syscall     632 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae46cu;
    ctx->pc = 0x3AE470u;
runtime->handleSyscall(rdram, ctx, 0x4A78u);
label_3ae470:
    // 0x3ae470: 0x12a4fc  dsll32      $s4, $s2, 19
    ctx->pc = 0x3ae470u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 19));
label_3ae474:
    // 0x3ae474: 0x129e0c  .word       0x00129E0C                   # syscall     632 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae474u;
    ctx->pc = 0x3AE478u;
runtime->handleSyscall(rdram, ctx, 0x4A78u);
label_3ae478:
    // 0x3ae478: 0x12a4fc  dsll32      $s4, $s2, 19
    ctx->pc = 0x3ae478u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 19));
label_3ae47c:
    // 0x3ae47c: 0x129e0c  .word       0x00129E0C                   # syscall     632 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae47cu;
    ctx->pc = 0x3AE480u;
runtime->handleSyscall(rdram, ctx, 0x4A78u);
label_3ae480:
    // 0x3ae480: 0x12b2e0  .word       0x0012B2E0                   # add         $s6, $zero, $s2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae480u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3ae484:
    // 0x3ae484: 0x12b354  .word       0x0012B354                   # dsllv       $s6, $s2, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae484u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae488:
    // 0x3ae488: 0x12b3c8  .word       0x0012B3C8                   # jr          $zero # 0012B3C0 <InstrIdType: CPU_SPECIAL>
label_3ae48c:
    if (ctx->pc == 0x3AE48Cu) {
        ctx->pc = 0x3AE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE488u;
        // 0x3ae48c: 0x12b48c  .word       0x0012B48C                   # syscall     722 # 00120000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x3AE490u;
        runtime->handleSyscall(rdram, ctx, 0x4AD2u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE490u;
        goto label_3ae490;
    }
    ctx->pc = 0x3AE488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE488u;
        // 0x3ae48c: 0x12b48c  .word       0x0012B48C                   # syscall     722 # 00120000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x3AE490u;
        runtime->handleSyscall(rdram, ctx, 0x4AD2u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE488u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE490u;
label_3ae490:
    // 0x3ae490: 0x12b500  sll         $s6, $s2, 20
    ctx->pc = 0x3ae490u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 20));
label_3ae494:
    // 0x3ae494: 0x12b570  tge         $zero, $s2, 725
    ctx->pc = 0x3ae494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae498:
    // 0x3ae498: 0x0  nop
    ctx->pc = 0x3ae498u;
    // NOP
label_3ae49c:
    // 0x3ae49c: 0x0  nop
    ctx->pc = 0x3ae49cu;
    // NOP
label_3ae4a0:
    // 0x3ae4a0: 0x12bf2c  .word       0x0012BF2C                   # dadd        $s7, $zero, $s2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_3ae4a4:
    // 0x3ae4a4: 0x12bfa0  .word       0x0012BFA0                   # add         $s7, $zero, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3ae4a8:
    // 0x3ae4a8: 0x12c0cc  .word       0x0012C0CC                   # syscall     771 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4a8u;
    ctx->pc = 0x3AE4ACu;
runtime->handleSyscall(rdram, ctx, 0x4B03u);
label_3ae4ac:
    // 0x3ae4ac: 0x12c0fc  dsll32      $t8, $s2, 3
    ctx->pc = 0x3ae4acu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 18) << (32 + 3));
label_3ae4b0:
    // 0x3ae4b0: 0x12c334  teq         $zero, $s2, 780
    ctx->pc = 0x3ae4b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae4b4:
    // 0x3ae4b4: 0x12c364  .word       0x0012C364                   # and         $t8, $zero, $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4b4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae4b8:
    // 0x3ae4b8: 0x12c58c  .word       0x0012C58C                   # syscall     790 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4b8u;
    ctx->pc = 0x3AE4BCu;
runtime->handleSyscall(rdram, ctx, 0x4B16u);
label_3ae4bc:
    // 0x3ae4bc: 0x12c5c8  .word       0x0012C5C8                   # jr          $zero # 0012C5C0 <InstrIdType: CPU_SPECIAL>
label_3ae4c0:
    if (ctx->pc == 0x3AE4C0u) {
        ctx->pc = 0x3AE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4BCu;
        // 0x3ae4c0: 0x12c660  .word       0x0012C660                   # add         $t8, $zero, $s2 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE4C4u;
        goto label_3ae4c4;
    }
    ctx->pc = 0x3AE4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4BCu;
        // 0x3ae4c0: 0x12c660  .word       0x0012C660                   # add         $t8, $zero, $s2 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE4BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE4C4u;
label_3ae4c4:
    // 0x3ae4c4: 0x12c6ac  .word       0x0012C6AC                   # dadd        $t8, $zero, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_3ae4c8:
    // 0x3ae4c8: 0x0  nop
    ctx->pc = 0x3ae4c8u;
    // NOP
label_3ae4cc:
    // 0x3ae4cc: 0x0  nop
    ctx->pc = 0x3ae4ccu;
    // NOP
label_3ae4d0:
    // 0x3ae4d0: 0x12c92c  .word       0x0012C92C                   # dadd        $t9, $zero, $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3ae4d4:
    // 0x3ae4d4: 0x12c9a8  .word       0x0012C9A8                   # mfsa        $t9 # 00120180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae4d4u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_3ae4d8:
    // 0x3ae4d8: 0x12cac4  .word       0x0012CAC4                   # sllv        $t9, $s2, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 0) & 0x1F));
label_3ae4dc:
    // 0x3ae4dc: 0x12caf8  dsll        $t9, $s2, 11
    ctx->pc = 0x3ae4dcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) << 11);
label_3ae4e0:
    // 0x3ae4e0: 0x12cd34  teq         $zero, $s2, 820
    ctx->pc = 0x3ae4e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae4e4:
    // 0x3ae4e4: 0x12cd64  .word       0x0012CD64                   # and         $t9, $zero, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4e4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_3ae4e8:
    // 0x3ae4e8: 0x12cf90  .word       0x0012CF90                   # mfhi        $t9 # 00120780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4e8u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_3ae4ec:
    // 0x3ae4ec: 0x12cfd0  .word       0x0012CFD0                   # mfhi        $t9 # 001207C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4ecu;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_3ae4f0:
    // 0x3ae4f0: 0x12d06c  .word       0x0012D06C                   # dadd        $k0, $zero, $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae4f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_3ae4f4:
    // 0x3ae4f4: 0x12d0b8  dsll        $k0, $s2, 2
    ctx->pc = 0x3ae4f4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 18) << 2);
label_3ae4f8:
    // 0x3ae4f8: 0x0  nop
    ctx->pc = 0x3ae4f8u;
    // NOP
label_3ae4fc:
    // 0x3ae4fc: 0x0  nop
    ctx->pc = 0x3ae4fcu;
    // NOP
label_3ae500:
    // 0x3ae500: 0x12d934  teq         $zero, $s2, 868
    ctx->pc = 0x3ae500u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae504:
    // 0x3ae504: 0x12db84  .word       0x0012DB84                   # sllv        $k1, $s2, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae504u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 0) & 0x1F));
label_3ae508:
    // 0x3ae508: 0x12de40  sll         $k1, $s2, 25
    ctx->pc = 0x3ae508u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 18), 25));
label_3ae50c:
    // 0x3ae50c: 0x12de70  tge         $zero, $s2, 889
    ctx->pc = 0x3ae50cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae510:
    // 0x3ae510: 0x12def4  teq         $zero, $s2, 891
    ctx->pc = 0x3ae510u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3ae514:
    // 0x3ae514: 0x12df28  .word       0x0012DF28                   # mfsa        $k1 # 00120700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae514u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_3ae518:
    // 0x3ae518: 0x0  nop
    ctx->pc = 0x3ae518u;
    // NOP
label_3ae51c:
    // 0x3ae51c: 0x0  nop
    ctx->pc = 0x3ae51cu;
    // NOP
label_3ae520:
    // 0x3ae520: 0x12fe10  .word       0x0012FE10                   # mfhi        $ra # 00120600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae520u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_3ae524:
    // 0x3ae524: 0x12ff20  .word       0x0012FF20                   # add         $ra, $zero, $s2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_3ae528:
    // 0x3ae528: 0x12fff8  dsll        $ra, $s2, 31
    ctx->pc = 0x3ae528u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 18) << 31);
label_3ae52c:
    // 0x3ae52c: 0x130060  .word       0x00130060                   # add         $zero, $zero, $s3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae52cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ae530:
    // 0x3ae530: 0x1302fc  dsll32      $zero, $s3, 11
    ctx->pc = 0x3ae530u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 19) << (32 + 11));
label_3ae534:
    // 0x3ae534: 0x13033c  dsll32      $zero, $s3, 12
    ctx->pc = 0x3ae534u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 19) << (32 + 12));
label_3ae538:
    // 0x3ae538: 0x1305b4  teq         $zero, $s3, 22
    ctx->pc = 0x3ae538u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae53c:
    // 0x3ae53c: 0x1305ec  .word       0x001305EC                   # dadd        $zero, $zero, $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae53cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3ae540:
    // 0x3ae540: 0x131e5c  .word       0x00131E5C                   # dmult       $zero, $s3 # 00001E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae540u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE540 raw=0x00131E5C");
label_3ae544:
    // 0x3ae544: 0x131f84  .word       0x00131F84                   # sllv        $v1, $s3, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 0) & 0x1F));
label_3ae548:
    // 0x3ae548: 0x132170  tge         $zero, $s3, 133
    ctx->pc = 0x3ae548u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae54c:
    // 0x3ae54c: 0x1321a0  .word       0x001321A0                   # add         $a0, $zero, $s3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae54cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3ae550:
    // 0x3ae550: 0x13232c  .word       0x0013232C                   # dadd        $a0, $zero, $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae550u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_3ae554:
    // 0x3ae554: 0x13235c  .word       0x0013235C                   # dmult       $zero, $s3 # 00002340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae554u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE554 raw=0x0013235C");
label_3ae558:
    // 0x3ae558: 0x1323bc  dsll32      $a0, $s3, 14
    ctx->pc = 0x3ae558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 14));
label_3ae55c:
    // 0x3ae55c: 0x1323ec  .word       0x001323EC                   # dadd        $a0, $zero, $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae55cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_3ae560:
    // 0x3ae560: 0x1324fc  dsll32      $a0, $s3, 19
    ctx->pc = 0x3ae560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 19));
label_3ae564:
    // 0x3ae564: 0x1326bc  dsll32      $a0, $s3, 26
    ctx->pc = 0x3ae564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 26));
label_3ae568:
    // 0x3ae568: 0x132878  dsll        $a1, $s3, 1
    ctx->pc = 0x3ae568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << 1);
label_3ae56c:
    // 0x3ae56c: 0x1328a8  .word       0x001328A8                   # mfsa        $a1 # 00130080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae56cu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_3ae570:
    // 0x3ae570: 0x132a34  teq         $zero, $s3, 168
    ctx->pc = 0x3ae570u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae574:
    // 0x3ae574: 0x132a64  .word       0x00132A64                   # and         $a1, $zero, $s3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 19));
label_3ae578:
    // 0x3ae578: 0x132ac4  .word       0x00132AC4                   # sllv        $a1, $s3, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 0) & 0x1F));
label_3ae57c:
    // 0x3ae57c: 0x132af4  teq         $zero, $s3, 171
    ctx->pc = 0x3ae57cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae580:
    // 0x3ae580: 0x132c80  sll         $a1, $s3, 18
    ctx->pc = 0x3ae580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 18));
label_3ae584:
    // 0x3ae584: 0x132cb0  tge         $zero, $s3, 178
    ctx->pc = 0x3ae584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae588:
    // 0x3ae588: 0x132d10  .word       0x00132D10                   # mfhi        $a1 # 00130500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae588u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3ae58c:
    // 0x3ae58c: 0x132df0  tge         $zero, $s3, 183
    ctx->pc = 0x3ae58cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae590:
    // 0x3ae590: 0x132e44  .word       0x00132E44                   # sllv        $a1, $s3, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 0) & 0x1F));
label_3ae594:
    // 0x3ae594: 0x132ec4  .word       0x00132EC4                   # sllv        $a1, $s3, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 0) & 0x1F));
label_3ae598:
    // 0x3ae598: 0x132fe0  .word       0x00132FE0                   # add         $a1, $zero, $s3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ae59c:
    // 0x3ae59c: 0x0  nop
    ctx->pc = 0x3ae59cu;
    // NOP
label_3ae5a0:
    // 0x3ae5a0: 0x1330e0  .word       0x001330E0                   # add         $a2, $zero, $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_3ae5a4:
    // 0x3ae5a4: 0x133110  .word       0x00133110                   # mfhi        $a2 # 00130100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_3ae5a8:
    // 0x3ae5a8: 0x133170  tge         $zero, $s3, 197
    ctx->pc = 0x3ae5a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae5ac:
    // 0x3ae5ac: 0x13322c  .word       0x0013322C                   # dadd        $a2, $zero, $s3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_3ae5b0:
    // 0x3ae5b0: 0x1332a4  .word       0x001332A4                   # and         $a2, $zero, $s3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 19));
label_3ae5b4:
    // 0x3ae5b4: 0x133324  .word       0x00133324                   # and         $a2, $zero, $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 19));
label_3ae5b8:
    // 0x3ae5b8: 0x133440  sll         $a2, $s3, 17
    ctx->pc = 0x3ae5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 17));
label_3ae5bc:
    // 0x3ae5bc: 0x0  nop
    ctx->pc = 0x3ae5bcu;
    // NOP
label_3ae5c0:
    // 0x3ae5c0: 0x137880  sll         $t7, $s3, 2
    ctx->pc = 0x3ae5c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3ae5c4:
    // 0x3ae5c4: 0x137a0c  .word       0x00137A0C                   # syscall     488 # 00130000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5c4u;
    ctx->pc = 0x3AE5C8u;
runtime->handleSyscall(rdram, ctx, 0x4DE8u);
label_3ae5c8:
    // 0x3ae5c8: 0x137bd8  .word       0x00137BD8                   # mult        $t7, $zero, $s3 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3ae5cc:
    // 0x3ae5cc: 0x137c84  .word       0x00137C84                   # sllv        $t7, $s3, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 0) & 0x1F));
label_3ae5d0:
    // 0x3ae5d0: 0x137e38  dsll        $t7, $s3, 24
    ctx->pc = 0x3ae5d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) << 24);
label_3ae5d4:
    // 0x3ae5d4: 0x137ee4  .word       0x00137EE4                   # and         $t7, $zero, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 19));
label_3ae5d8:
    // 0x3ae5d8: 0x1380b0  tge         $zero, $s3, 514
    ctx->pc = 0x3ae5d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae5dc:
    // 0x3ae5dc: 0x138110  .word       0x00138110                   # mfhi        $s0 # 00130100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5dcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_3ae5e0:
    // 0x3ae5e0: 0x13995c  .word       0x0013995C                   # dmult       $zero, $s3 # 00009940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE5E0 raw=0x0013995C");
label_3ae5e4:
    // 0x3ae5e4: 0x1399c4  .word       0x001399C4                   # sllv        $s3, $s3, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 0) & 0x1F));
label_3ae5e8:
    // 0x3ae5e8: 0x139ab4  teq         $zero, $s3, 618
    ctx->pc = 0x3ae5e8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae5ec:
    // 0x3ae5ec: 0x139af8  dsll        $s3, $s3, 11
    ctx->pc = 0x3ae5ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 11);
label_3ae5f0:
    // 0x3ae5f0: 0x139bc8  .word       0x00139BC8                   # jr          $zero # 00139BC0 <InstrIdType: CPU_SPECIAL>
label_3ae5f4:
    if (ctx->pc == 0x3AE5F4u) {
        ctx->pc = 0x3AE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE5F0u;
        // 0x3ae5f4: 0x139c0c  .word       0x00139C0C                   # syscall     624 # 00130000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x3AE5F8u;
        runtime->handleSyscall(rdram, ctx, 0x4E70u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE5F8u;
        goto label_3ae5f8;
    }
    ctx->pc = 0x3AE5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE5F0u;
        // 0x3ae5f4: 0x139c0c  .word       0x00139C0C                   # syscall     624 # 00130000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x3AE5F8u;
        runtime->handleSyscall(rdram, ctx, 0x4E70u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE5F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE5F8u;
label_3ae5f8:
    // 0x3ae5f8: 0x139cdc  .word       0x00139CDC                   # dmult       $zero, $s3 # 00009CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE5F8 raw=0x00139CDC");
label_3ae5fc:
    // 0x3ae5fc: 0x139d20  .word       0x00139D20                   # add         $s3, $zero, $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae5fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_3ae600:
    // 0x3ae600: 0x139e5c  .word       0x00139E5C                   # dmult       $zero, $s3 # 00009E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae600u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE600 raw=0x00139E5C");
label_3ae604:
    // 0x3ae604: 0x139ee0  .word       0x00139EE0                   # add         $s3, $zero, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_3ae608:
    // 0x3ae608: 0x139fd0  .word       0x00139FD0                   # mfhi        $s3 # 001307C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae608u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_3ae60c:
    // 0x3ae60c: 0x13a014  dsllv       $s4, $s3, $zero
    ctx->pc = 0x3ae60cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae610:
    // 0x3ae610: 0x13a0e8  .word       0x0013A0E8                   # mfsa        $s4 # 001300C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae610u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_3ae614:
    // 0x3ae614: 0x13a12c  .word       0x0013A12C                   # dadd        $s4, $zero, $s3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae614u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_3ae618:
    // 0x3ae618: 0x13a200  sll         $s4, $s3, 8
    ctx->pc = 0x3ae618u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_3ae61c:
    // 0x3ae61c: 0x13a244  .word       0x0013A244                   # sllv        $s4, $s3, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae61cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 0) & 0x1F));
label_3ae620:
    // 0x3ae620: 0x13a8b4  teq         $zero, $s3, 674
    ctx->pc = 0x3ae620u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3ae624:
    // 0x3ae624: 0x13a8dc  .word       0x0013A8DC                   # dmult       $zero, $s3 # 0000A8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae624u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE624 raw=0x0013A8DC");
label_3ae628:
    // 0x3ae628: 0x13a904  .word       0x0013A904                   # sllv        $s5, $s3, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae628u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 0) & 0x1F));
label_3ae62c:
    // 0x3ae62c: 0x13a92c  .word       0x0013A92C                   # dadd        $s5, $zero, $s3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae62cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_3ae630:
    // 0x3ae630: 0x13a954  .word       0x0013A954                   # dsllv       $s5, $s3, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae630u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 19) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae634:
    // 0x3ae634: 0x13a99c  .word       0x0013A99C                   # dmult       $zero, $s3 # 0000A980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae634u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE634 raw=0x0013A99C");
label_3ae638:
    // 0x3ae638: 0x13a9e4  .word       0x0013A9E4                   # and         $s5, $zero, $s3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae638u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 19));
label_3ae63c:
    // 0x3ae63c: 0x13aa2c  .word       0x0013AA2C                   # dadd        $s5, $zero, $s3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae63cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_3ae640:
    // 0x3ae640: 0x13a53c  dsll32      $s4, $s3, 20
    ctx->pc = 0x3ae640u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << (32 + 20));
label_3ae644:
    // 0x3ae644: 0x13a5a8  .word       0x0013A5A8                   # mfsa        $s4 # 00130580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae644u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_3ae648:
    // 0x3ae648: 0x13a618  .word       0x0013A618                   # mult        $s4, $zero, $s3 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_3ae64c:
    // 0x3ae64c: 0x13a688  .word       0x0013A688                   # jr          $zero # 0013A680 <InstrIdType: CPU_SPECIAL>
label_3ae650:
    if (ctx->pc == 0x3AE650u) {
        ctx->pc = 0x3AE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE64Cu;
        // 0x3ae650: 0x13a6f8  dsll        $s4, $s3, 27 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << 27);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE654u;
        goto label_3ae654;
    }
    ctx->pc = 0x3AE64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE64Cu;
        // 0x3ae650: 0x13a6f8  dsll        $s4, $s3, 27 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << 27);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE64Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE654u;
label_3ae654:
    // 0x3ae654: 0x13a75c  .word       0x0013A75C                   # dmult       $zero, $s3 # 0000A740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae654u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE654 raw=0x0013A75C");
label_3ae658:
    // 0x3ae658: 0x253a7a53  addiu       $k0, $t1, 0x7A53
    ctx->pc = 0x3ae658u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 31315));
label_3ae65c:
    // 0x3ae65c: 0x744f0a64  .word       0x744F0A64                   # INVALID     $v0, $t7, 0xA64 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ae65cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AE65C raw=0x744F0A64");
label_3ae660:
    // 0x3ae660: 0x64253a7a  daddiu      $a1, $at, 0x3A7A
    ctx->pc = 0x3ae660u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14970);
label_3ae664:
    // 0x3ae664: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x3ae664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ae668:
    // 0x3ae668: 0x0  nop
    ctx->pc = 0x3ae668u;
    // NOP
label_3ae66c:
    // 0x3ae66c: 0x0  nop
    ctx->pc = 0x3ae66cu;
    // NOP
label_3ae670:
    // 0x3ae670: 0x140f98  .word       0x00140F98                   # mult        $at, $zero, $s4 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_3ae674:
    // 0x3ae674: 0x140fb0  tge         $zero, $s4, 62
    ctx->pc = 0x3ae674u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae678:
    // 0x3ae678: 0x141014  dsllv       $v0, $s4, $zero
    ctx->pc = 0x3ae678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae67c:
    // 0x3ae67c: 0x1412a0  .word       0x001412A0                   # add         $v0, $zero, $s4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae67cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3ae680:
    // 0x3ae680: 0x1413f4  teq         $zero, $s4, 79
    ctx->pc = 0x3ae680u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae684:
    // 0x3ae684: 0x141478  dsll        $v0, $s4, 17
    ctx->pc = 0x3ae684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << 17);
label_3ae688:
    // 0x3ae688: 0x4e494152  .word       0x4E494152                   # INVALID     $s2, $t1, 0x4152 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ae688u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AE688 raw=0x4E494152");
label_3ae68c:
    // 0x3ae68c: 0x642520  .word       0x00642520                   # add         $a0, $v1, $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae68cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3ae690:
    // 0x3ae690: 0x143118  .word       0x00143118                   # mult        $a2, $zero, $s4 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3ae694:
    // 0x3ae694: 0x142ea0  .word       0x00142EA0                   # add         $a1, $zero, $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3ae698:
    // 0x3ae698: 0x142eb8  dsll        $a1, $s4, 26
    ctx->pc = 0x3ae698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << 26);
label_3ae69c:
    // 0x3ae69c: 0x142ee8  .word       0x00142EE8                   # mfsa        $a1 # 001406C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae69cu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_3ae6a0:
    // 0x3ae6a0: 0x142f18  .word       0x00142F18                   # mult        $a1, $zero, $s4 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae6a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3ae6a4:
    // 0x3ae6a4: 0x142f40  sll         $a1, $s4, 29
    ctx->pc = 0x3ae6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 29));
label_3ae6a8:
    // 0x3ae6a8: 0x142f84  .word       0x00142F84                   # sllv        $a1, $s4, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae6ac:
    // 0x3ae6ac: 0x14300c  .word       0x0014300C                   # syscall     192 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6acu;
    ctx->pc = 0x3AE6B0u;
runtime->handleSyscall(rdram, ctx, 0x50C0u);
label_3ae6b0:
    // 0x3ae6b0: 0x1430e4  .word       0x001430E4                   # and         $a2, $zero, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_3ae6b4:
    // 0x3ae6b4: 0x0  nop
    ctx->pc = 0x3ae6b4u;
    // NOP
label_3ae6b8:
    // 0x3ae6b8: 0x0  nop
    ctx->pc = 0x3ae6b8u;
    // NOP
label_3ae6bc:
    // 0x3ae6bc: 0x0  nop
    ctx->pc = 0x3ae6bcu;
    // NOP
label_3ae6c0:
    // 0x3ae6c0: 0x1465a4  .word       0x001465A4                   # and         $t4, $zero, $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_3ae6c4:
    // 0x3ae6c4: 0x14665c  .word       0x0014665C                   # dmult       $zero, $s4 # 00006640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE6C4 raw=0x0014665C");
label_3ae6c8:
    // 0x3ae6c8: 0x14674c  .word       0x0014674C                   # syscall     413 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6c8u;
    ctx->pc = 0x3AE6CCu;
runtime->handleSyscall(rdram, ctx, 0x519Du);
label_3ae6cc:
    // 0x3ae6cc: 0x146814  dsllv       $t5, $s4, $zero
    ctx->pc = 0x3ae6ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae6d0:
    // 0x3ae6d0: 0x1468fc  dsll32      $t5, $s4, 3
    ctx->pc = 0x3ae6d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << (32 + 3));
label_3ae6d4:
    // 0x3ae6d4: 0x146984  .word       0x00146984                   # sllv        $t5, $s4, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae6d8:
    // 0x3ae6d8: 0x146ab8  dsll        $t5, $s4, 10
    ctx->pc = 0x3ae6d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << 10);
label_3ae6dc:
    // 0x3ae6dc: 0x146b00  sll         $t5, $s4, 12
    ctx->pc = 0x3ae6dcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
label_3ae6e0:
    // 0x3ae6e0: 0x146b6c  .word       0x00146B6C                   # dadd        $t5, $zero, $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_3ae6e4:
    // 0x3ae6e4: 0x146bac  .word       0x00146BAC                   # dadd        $t5, $zero, $s4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_3ae6e8:
    // 0x3ae6e8: 0x146c2c  .word       0x00146C2C                   # dadd        $t5, $zero, $s4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6e8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_3ae6ec:
    // 0x3ae6ec: 0x146c9c  .word       0x00146C9C                   # dmult       $zero, $s4 # 00006C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE6EC raw=0x00146C9C");
label_3ae6f0:
    // 0x3ae6f0: 0x146d14  .word       0x00146D14                   # dsllv       $t5, $s4, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae6f4:
    // 0x3ae6f4: 0x146d54  .word       0x00146D54                   # dsllv       $t5, $s4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae6f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae6f8:
    // 0x3ae6f8: 0x146dc8  .word       0x00146DC8                   # jr          $zero # 00146DC0 <InstrIdType: CPU_SPECIAL>
label_3ae6fc:
    if (ctx->pc == 0x3AE6FCu) {
        ctx->pc = 0x3AE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6F8u;
        // 0x3ae6fc: 0x146e00  sll         $t5, $s4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE700u;
        goto label_3ae700;
    }
    ctx->pc = 0x3AE6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6F8u;
        // 0x3ae6fc: 0x146e00  sll         $t5, $s4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE6F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE700u;
label_3ae700:
    // 0x3ae700: 0x146e80  sll         $t5, $s4, 26
    ctx->pc = 0x3ae700u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 26));
label_3ae704:
    // 0x3ae704: 0x146ed4  .word       0x00146ED4                   # dsllv       $t5, $s4, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae704u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae708:
    // 0x3ae708: 0x146f68  .word       0x00146F68                   # mfsa        $t5 # 00140740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae708u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_3ae70c:
    // 0x3ae70c: 0x146f98  .word       0x00146F98                   # mult        $t5, $zero, $s4 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3ae710:
    // 0x3ae710: 0x14706c  .word       0x0014706C                   # dadd        $t6, $zero, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae710u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3ae714:
    // 0x3ae714: 0x1470a0  .word       0x001470A0                   # add         $t6, $zero, $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3ae718:
    // 0x3ae718: 0x14717c  dsll32      $t6, $s4, 5
    ctx->pc = 0x3ae718u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) << (32 + 5));
label_3ae71c:
    // 0x3ae71c: 0x1471b0  tge         $zero, $s4, 454
    ctx->pc = 0x3ae71cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae720:
    // 0x3ae720: 0x14721c  .word       0x0014721C                   # dmult       $zero, $s4 # 00007200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae720u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE720 raw=0x0014721C");
label_3ae724:
    // 0x3ae724: 0x147290  .word       0x00147290                   # mfhi        $t6 # 00140280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae724u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3ae728:
    // 0x3ae728: 0x14730c  .word       0x0014730C                   # syscall     460 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae728u;
    ctx->pc = 0x3AE72Cu;
runtime->handleSyscall(rdram, ctx, 0x51CCu);
label_3ae72c:
    // 0x3ae72c: 0x147350  .word       0x00147350                   # mfhi        $t6 # 00140340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae72cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3ae730:
    // 0x3ae730: 0x14742c  .word       0x0014742C                   # dadd        $t6, $zero, $s4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae730u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3ae734:
    // 0x3ae734: 0x1474b0  tge         $zero, $s4, 466
    ctx->pc = 0x3ae734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae738:
    // 0x3ae738: 0x0  nop
    ctx->pc = 0x3ae738u;
    // NOP
label_3ae73c:
    // 0x3ae73c: 0x0  nop
    ctx->pc = 0x3ae73cu;
    // NOP
label_3ae740:
    // 0x3ae740: 0x147664  .word       0x00147664                   # and         $t6, $zero, $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae740u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_3ae744:
    // 0x3ae744: 0x1476a0  .word       0x001476A0                   # add         $t6, $zero, $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3ae748:
    // 0x3ae748: 0x1477ac  .word       0x001477AC                   # dadd        $t6, $zero, $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae748u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3ae74c:
    // 0x3ae74c: 0x147ac8  .word       0x00147AC8                   # jr          $zero # 00147AC0 <InstrIdType: CPU_SPECIAL>
label_3ae750:
    if (ctx->pc == 0x3AE750u) {
        ctx->pc = 0x3AE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE74Cu;
        // 0x3ae750: 0x147c74  teq         $zero, $s4, 497 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE754u;
        goto label_3ae754;
    }
    ctx->pc = 0x3AE74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE74Cu;
        // 0x3ae750: 0x147c74  teq         $zero, $s4, 497 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE74Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE754u;
label_3ae754:
    // 0x3ae754: 0x147cb0  tge         $zero, $s4, 498
    ctx->pc = 0x3ae754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae758:
    // 0x3ae758: 0x147d64  .word       0x00147D64                   # and         $t7, $zero, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae758u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_3ae75c:
    // 0x3ae75c: 0x147da0  .word       0x00147DA0                   # add         $t7, $zero, $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae75cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3ae760:
    // 0x3ae760: 0x147eac  .word       0x00147EAC                   # dadd        $t7, $zero, $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae760u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_3ae764:
    // 0x3ae764: 0x147ef0  tge         $zero, $s4, 507
    ctx->pc = 0x3ae764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae768:
    // 0x3ae768: 0x0  nop
    ctx->pc = 0x3ae768u;
    // NOP
label_3ae76c:
    // 0x3ae76c: 0x0  nop
    ctx->pc = 0x3ae76cu;
    // NOP
label_3ae770:
    // 0x3ae770: 0x14814c  .word       0x0014814C                   # syscall     517 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae770u;
    ctx->pc = 0x3AE774u;
runtime->handleSyscall(rdram, ctx, 0x5205u);
label_3ae774:
    // 0x3ae774: 0x148190  .word       0x00148190                   # mfhi        $s0 # 00140180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae774u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_3ae778:
    // 0x3ae778: 0x14823c  dsll32      $s0, $s4, 8
    ctx->pc = 0x3ae778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 8));
label_3ae77c:
    // 0x3ae77c: 0x1482b4  teq         $zero, $s4, 522
    ctx->pc = 0x3ae77cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae780:
    // 0x3ae780: 0x148388  .word       0x00148388                   # jr          $zero # 00148380 <InstrIdType: CPU_SPECIAL>
label_3ae784:
    if (ctx->pc == 0x3AE784u) {
        ctx->pc = 0x3AE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE780u;
        // 0x3ae784: 0x148434  teq         $zero, $s4, 528 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE788u;
        goto label_3ae788;
    }
    ctx->pc = 0x3AE780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE780u;
        // 0x3ae784: 0x148434  teq         $zero, $s4, 528 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE780u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE788u;
label_3ae788:
    // 0x3ae788: 0x0  nop
    ctx->pc = 0x3ae788u;
    // NOP
label_3ae78c:
    // 0x3ae78c: 0x0  nop
    ctx->pc = 0x3ae78cu;
    // NOP
label_3ae790:
    // 0x3ae790: 0x14858c  .word       0x0014858C                   # syscall     534 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae790u;
    ctx->pc = 0x3AE794u;
runtime->handleSyscall(rdram, ctx, 0x5216u);
label_3ae794:
    // 0x3ae794: 0x148650  .word       0x00148650                   # mfhi        $s0 # 00140640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae794u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_3ae798:
    // 0x3ae798: 0x14873c  dsll32      $s0, $s4, 28
    ctx->pc = 0x3ae798u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 28));
label_3ae79c:
    // 0x3ae79c: 0x1487c4  .word       0x001487C4                   # sllv        $s0, $s4, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae79cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae7a0:
    // 0x3ae7a0: 0x148858  .word       0x00148858                   # mult        $s1, $zero, $s4 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3ae7a4:
    // 0x3ae7a4: 0x148890  .word       0x00148890                   # mfhi        $s1 # 00140080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae7a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_3ae7a8:
    // 0x3ae7a8: 0x148930  tge         $zero, $s4, 548
    ctx->pc = 0x3ae7a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae7ac:
    // 0x3ae7ac: 0x1489e8  .word       0x001489E8                   # mfsa        $s1 # 001401C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae7acu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_3ae7b0:
    // 0x3ae7b0: 0x20574f4e  addi        $s7, $v0, 0x4F4E
    ctx->pc = 0x3ae7b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)20302, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_3ae7b4:
    // 0x3ae7b4: 0x494b414d  .word       0x494B414D                   # INVALID     $t2, $t3, 0x414D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3ae7b4u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x3AE7B4 raw=0x494B414D");
label_3ae7b8:
    // 0x3ae7b8: 0x21474e  .word       0x0021474E                   # INVALID     $at, $at, 0x474E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae7b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x3AE7B8 raw=0x0021474E");
label_3ae7bc:
    // 0x3ae7bc: 0x0  nop
    ctx->pc = 0x3ae7bcu;
    // NOP
label_3ae7c0:
    // 0x3ae7c0: 0x148f04  .word       0x00148F04                   # sllv        $s1, $s4, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae7c4:
    // 0x3ae7c4: 0x148fd8  .word       0x00148FD8                   # mult        $s1, $zero, $s4 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3ae7c8:
    // 0x3ae7c8: 0x1490e8  .word       0x001490E8                   # mfsa        $s2 # 001400C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae7c8u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_3ae7cc:
    // 0x3ae7cc: 0x149118  .word       0x00149118                   # mult        $s2, $zero, $s4 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3ae7d0:
    // 0x3ae7d0: 0x149230  tge         $zero, $s4, 584
    ctx->pc = 0x3ae7d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae7d4:
    // 0x3ae7d4: 0x149260  .word       0x00149260                   # add         $s2, $zero, $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae7d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_3ae7d8:
    // 0x3ae7d8: 0x0  nop
    ctx->pc = 0x3ae7d8u;
    // NOP
label_3ae7dc:
    // 0x3ae7dc: 0x0  nop
    ctx->pc = 0x3ae7dcu;
    // NOP
label_3ae7e0:
    // 0x3ae7e0: 0x1494a0  .word       0x001494A0                   # add         $s2, $zero, $s4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae7e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_3ae7e4:
    // 0x3ae7e4: 0x149578  dsll        $s2, $s4, 21
    ctx->pc = 0x3ae7e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << 21);
label_3ae7e8:
    // 0x3ae7e8: 0x14964c  .word       0x0014964C                   # syscall     601 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae7e8u;
    ctx->pc = 0x3AE7ECu;
runtime->handleSyscall(rdram, ctx, 0x5259u);
label_3ae7ec:
    // 0x3ae7ec: 0x14967c  dsll32      $s2, $s4, 25
    ctx->pc = 0x3ae7ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 25));
label_3ae7f0:
    // 0x3ae7f0: 0x149720  .word       0x00149720                   # add         $s2, $zero, $s4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae7f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_3ae7f4:
    // 0x3ae7f4: 0x149750  .word       0x00149750                   # mfhi        $s2 # 00140740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae7f4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_3ae7f8:
    // 0x3ae7f8: 0x0  nop
    ctx->pc = 0x3ae7f8u;
    // NOP
label_3ae7fc:
    // 0x3ae7fc: 0x0  nop
    ctx->pc = 0x3ae7fcu;
    // NOP
label_3ae800:
    // 0x3ae800: 0x1499a0  .word       0x001499A0                   # add         $s3, $zero, $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae800u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_3ae804:
    // 0x3ae804: 0x149a68  .word       0x00149A68                   # mfsa        $s3 # 00140240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae804u;
    SET_GPR_U32(ctx, 19, ctx->sa);
label_3ae808:
    // 0x3ae808: 0x149b1c  .word       0x00149B1C                   # dmult       $zero, $s4 # 00009B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae808u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE808 raw=0x00149B1C");
label_3ae80c:
    // 0x3ae80c: 0x149b84  .word       0x00149B84                   # sllv        $s3, $s4, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae80cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae810:
    // 0x3ae810: 0x149cb4  teq         $zero, $s4, 626
    ctx->pc = 0x3ae810u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae814:
    // 0x3ae814: 0x149d1c  .word       0x00149D1C                   # dmult       $zero, $s4 # 00009D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae814u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE814 raw=0x00149D1C");
label_3ae818:
    // 0x3ae818: 0x0  nop
    ctx->pc = 0x3ae818u;
    // NOP
label_3ae81c:
    // 0x3ae81c: 0x0  nop
    ctx->pc = 0x3ae81cu;
    // NOP
label_3ae820:
    // 0x3ae820: 0x149e60  .word       0x00149E60                   # add         $s3, $zero, $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae820u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_3ae824:
    // 0x3ae824: 0x149f88  .word       0x00149F88                   # jr          $zero # 00149F80 <InstrIdType: CPU_SPECIAL>
label_3ae828:
    if (ctx->pc == 0x3AE828u) {
        ctx->pc = 0x3AE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE824u;
        // 0x3ae828: 0x14a03c  dsll32      $s4, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE82Cu;
        goto label_3ae82c;
    }
    ctx->pc = 0x3AE824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE824u;
        // 0x3ae828: 0x14a03c  dsll32      $s4, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE824u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE82Cu;
label_3ae82c:
    // 0x3ae82c: 0x14a0a4  .word       0x0014A0A4                   # and         $s4, $zero, $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae82cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_3ae830:
    // 0x3ae830: 0x14a218  .word       0x0014A218                   # mult        $s4, $zero, $s4 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_3ae834:
    // 0x3ae834: 0x14a280  sll         $s4, $s4, 10
    ctx->pc = 0x3ae834u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 10));
label_3ae838:
    // 0x3ae838: 0x0  nop
    ctx->pc = 0x3ae838u;
    // NOP
label_3ae83c:
    // 0x3ae83c: 0x0  nop
    ctx->pc = 0x3ae83cu;
    // NOP
label_3ae840:
    // 0x3ae840: 0x14a3e0  .word       0x0014A3E0                   # add         $s4, $zero, $s4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae840u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_3ae844:
    // 0x3ae844: 0x14a4b8  dsll        $s4, $s4, 18
    ctx->pc = 0x3ae844u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 18);
label_3ae848:
    // 0x3ae848: 0x14a550  .word       0x0014A550                   # mfhi        $s4 # 00140540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae848u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_3ae84c:
    // 0x3ae84c: 0x14a580  sll         $s4, $s4, 22
    ctx->pc = 0x3ae84cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 22));
label_3ae850:
    // 0x3ae850: 0x14a718  .word       0x0014A718                   # mult        $s4, $zero, $s4 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_3ae854:
    // 0x3ae854: 0x14a748  .word       0x0014A748                   # jr          $zero # 0014A740 <InstrIdType: CPU_SPECIAL>
label_3ae858:
    if (ctx->pc == 0x3AE858u) {
        ctx->pc = 0x3AE85Cu;
        goto label_3ae85c;
    }
    ctx->pc = 0x3AE854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE854u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE85Cu;
label_3ae85c:
    // 0x3ae85c: 0x0  nop
    ctx->pc = 0x3ae85cu;
    // NOP
label_3ae860:
    // 0x3ae860: 0x14a860  .word       0x0014A860                   # add         $s5, $zero, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae860u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_3ae864:
    // 0x3ae864: 0x14a8fc  dsll32      $s5, $s4, 3
    ctx->pc = 0x3ae864u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) << (32 + 3));
label_3ae868:
    // 0x3ae868: 0x14ab58  .word       0x0014AB58                   # mult        $s5, $zero, $s4 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3ae86c:
    // 0x3ae86c: 0x14ab8c  .word       0x0014AB8C                   # syscall     686 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae86cu;
    ctx->pc = 0x3AE870u;
runtime->handleSyscall(rdram, ctx, 0x52AEu);
label_3ae870:
    // 0x3ae870: 0x14ace0  .word       0x0014ACE0                   # add         $s5, $zero, $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae870u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_3ae874:
    // 0x3ae874: 0x14ad10  .word       0x0014AD10                   # mfhi        $s5 # 00140500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae874u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_3ae878:
    // 0x3ae878: 0x14ae10  .word       0x0014AE10                   # mfhi        $s5 # 00140600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae878u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_3ae87c:
    // 0x3ae87c: 0x14ae40  sll         $s5, $s4, 25
    ctx->pc = 0x3ae87cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 25));
label_3ae880:
    // 0x3ae880: 0x14af90  .word       0x0014AF90                   # mfhi        $s5 # 00140780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae880u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_3ae884:
    // 0x3ae884: 0x14b02c  dadd        $s6, $zero, $s4
    ctx->pc = 0x3ae884u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_3ae888:
    // 0x3ae888: 0x14b288  .word       0x0014B288                   # jr          $zero # 0014B280 <InstrIdType: CPU_SPECIAL>
label_3ae88c:
    if (ctx->pc == 0x3AE88Cu) {
        ctx->pc = 0x3AE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE888u;
        // 0x3ae88c: 0x14b2bc  dsll32      $s6, $s4, 10 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) << (32 + 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE890u;
        goto label_3ae890;
    }
    ctx->pc = 0x3AE888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE888u;
        // 0x3ae88c: 0x14b2bc  dsll32      $s6, $s4, 10 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) << (32 + 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE888u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE890u;
label_3ae890:
    // 0x3ae890: 0x14b410  .word       0x0014B410                   # mfhi        $s6 # 00140400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae890u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_3ae894:
    // 0x3ae894: 0x14b440  sll         $s6, $s4, 17
    ctx->pc = 0x3ae894u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 17));
label_3ae898:
    // 0x3ae898: 0x14b540  sll         $s6, $s4, 21
    ctx->pc = 0x3ae898u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 21));
label_3ae89c:
    // 0x3ae89c: 0x14b570  tge         $zero, $s4, 725
    ctx->pc = 0x3ae89cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae8a0:
    // 0x3ae8a0: 0x14b6c0  sll         $s6, $s4, 27
    ctx->pc = 0x3ae8a0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 27));
label_3ae8a4:
    // 0x3ae8a4: 0x14b75c  .word       0x0014B75C                   # dmult       $zero, $s4 # 0000B740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae8a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE8A4 raw=0x0014B75C");
label_3ae8a8:
    // 0x3ae8a8: 0x14b9b8  dsll        $s7, $s4, 6
    ctx->pc = 0x3ae8a8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) << 6);
label_3ae8ac:
    // 0x3ae8ac: 0x14b9ec  .word       0x0014B9EC                   # dadd        $s7, $zero, $s4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae8acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_3ae8b0:
    // 0x3ae8b0: 0x14bb40  sll         $s7, $s4, 13
    ctx->pc = 0x3ae8b0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 13));
label_3ae8b4:
    // 0x3ae8b4: 0x14bb70  tge         $zero, $s4, 749
    ctx->pc = 0x3ae8b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae8b8:
    // 0x3ae8b8: 0x14bc70  tge         $zero, $s4, 753
    ctx->pc = 0x3ae8b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae8bc:
    // 0x3ae8bc: 0x14bca0  .word       0x0014BCA0                   # add         $s7, $zero, $s4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae8bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3ae8c0:
    // 0x3ae8c0: 0x14bfb4  teq         $zero, $s4, 766
    ctx->pc = 0x3ae8c0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae8c4:
    // 0x3ae8c4: 0x14c058  .word       0x0014C058                   # mult        $t8, $zero, $s4 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae8c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_3ae8c8:
    // 0x3ae8c8: 0x14c110  .word       0x0014C110                   # mfhi        $t8 # 00140100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae8c8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_3ae8cc:
    // 0x3ae8cc: 0x14c140  sll         $t8, $s4, 5
    ctx->pc = 0x3ae8ccu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
label_3ae8d0:
    // 0x3ae8d0: 0x14c1c8  .word       0x0014C1C8                   # jr          $zero # 0014C1C0 <InstrIdType: CPU_SPECIAL>
label_3ae8d4:
    if (ctx->pc == 0x3AE8D4u) {
        ctx->pc = 0x3AE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8D0u;
        // 0x3ae8d4: 0x14c204  .word       0x0014C204                   # sllv        $t8, $s4, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE8D8u;
        goto label_3ae8d8;
    }
    ctx->pc = 0x3AE8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8D0u;
        // 0x3ae8d4: 0x14c204  .word       0x0014C204                   # sllv        $t8, $s4, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE8D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE8D8u;
label_3ae8d8:
    // 0x3ae8d8: 0x0  nop
    ctx->pc = 0x3ae8d8u;
    // NOP
label_3ae8dc:
    // 0x3ae8dc: 0x0  nop
    ctx->pc = 0x3ae8dcu;
    // NOP
label_3ae8e0:
    // 0x3ae8e0: 0x14cf7c  dsll32      $t9, $s4, 29
    ctx->pc = 0x3ae8e0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 20) << (32 + 29));
label_3ae8e4:
    // 0x3ae8e4: 0x14d00c  .word       0x0014D00C                   # syscall     832 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae8e4u;
    ctx->pc = 0x3AE8E8u;
runtime->handleSyscall(rdram, ctx, 0x5340u);
label_3ae8e8:
    // 0x3ae8e8: 0x14d0f0  tge         $zero, $s4, 835
    ctx->pc = 0x3ae8e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae8ec:
    // 0x3ae8ec: 0x14d138  dsll        $k0, $s4, 4
    ctx->pc = 0x3ae8ecu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 20) << 4);
label_3ae8f0:
    // 0x3ae8f0: 0x14d1c0  sll         $k0, $s4, 7
    ctx->pc = 0x3ae8f0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
label_3ae8f4:
    // 0x3ae8f4: 0x14d1f0  tge         $zero, $s4, 839
    ctx->pc = 0x3ae8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae8f8:
    // 0x3ae8f8: 0x0  nop
    ctx->pc = 0x3ae8f8u;
    // NOP
label_3ae8fc:
    // 0x3ae8fc: 0x0  nop
    ctx->pc = 0x3ae8fcu;
    // NOP
label_3ae900:
    // 0x3ae900: 0x14dbec  .word       0x0014DBEC                   # dadd        $k1, $zero, $s4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae900u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_3ae904:
    // 0x3ae904: 0x14dbc4  .word       0x0014DBC4                   # sllv        $k1, $s4, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae904u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae908:
    // 0x3ae908: 0x14dbc4  .word       0x0014DBC4                   # sllv        $k1, $s4, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae908u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae90c:
    // 0x3ae90c: 0x14dbd8  .word       0x0014DBD8                   # mult        $k1, $zero, $s4 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae90cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_3ae910:
    // 0x3ae910: 0x14dbec  .word       0x0014DBEC                   # dadd        $k1, $zero, $s4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae910u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_3ae914:
    // 0x3ae914: 0x14dbf8  dsll        $k1, $s4, 15
    ctx->pc = 0x3ae914u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 20) << 15);
label_3ae918:
    // 0x3ae918: 0x14dbf8  dsll        $k1, $s4, 15
    ctx->pc = 0x3ae918u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 20) << 15);
label_3ae91c:
    // 0x3ae91c: 0x0  nop
    ctx->pc = 0x3ae91cu;
    // NOP
label_3ae920:
    // 0x3ae920: 0x14f290  .word       0x0014F290                   # mfhi        $fp # 00140280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae920u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_3ae924:
    // 0x3ae924: 0x14f290  .word       0x0014F290                   # mfhi        $fp # 00140280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae924u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_3ae928:
    // 0x3ae928: 0x14f2c4  .word       0x0014F2C4                   # sllv        $fp, $s4, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae928u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae92c:
    // 0x3ae92c: 0x14f2e8  .word       0x0014F2E8                   # mfsa        $fp # 001402C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae92cu;
    SET_GPR_U32(ctx, 30, ctx->sa);
label_3ae930:
    // 0x3ae930: 0x14f30c  .word       0x0014F30C                   # syscall     972 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae930u;
    ctx->pc = 0x3AE934u;
runtime->handleSyscall(rdram, ctx, 0x53CCu);
label_3ae934:
    // 0x3ae934: 0x14f330  tge         $zero, $s4, 972
    ctx->pc = 0x3ae934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae938:
    // 0x3ae938: 0x14f360  .word       0x0014F360                   # add         $fp, $zero, $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae938u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_3ae93c:
    // 0x3ae93c: 0x14f398  .word       0x0014F398                   # mult        $fp, $zero, $s4 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_3ae940:
    // 0x3ae940: 0x14f92c  .word       0x0014F92C                   # dadd        $ra, $zero, $s4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae940u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_3ae944:
    // 0x3ae944: 0x14f8f4  teq         $zero, $s4, 995
    ctx->pc = 0x3ae944u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae948:
    // 0x3ae948: 0x14f8f4  teq         $zero, $s4, 995
    ctx->pc = 0x3ae948u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3ae94c:
    // 0x3ae94c: 0x14f904  .word       0x0014F904                   # sllv        $ra, $s4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae94cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae950:
    // 0x3ae950: 0x14f914  .word       0x0014F914                   # dsllv       $ra, $s4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae950u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae954:
    // 0x3ae954: 0x14f924  .word       0x0014F924                   # and         $ra, $zero, $s4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae954u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_3ae958:
    // 0x3ae958: 0x14f924  .word       0x0014F924                   # and         $ra, $zero, $s4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae958u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_3ae95c:
    // 0x3ae95c: 0x0  nop
    ctx->pc = 0x3ae95cu;
    // NOP
label_3ae960:
    // 0x3ae960: 0x14ff14  .word       0x0014FF14                   # dsllv       $ra, $s4, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae960u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
label_3ae964:
    // 0x3ae964: 0x14ff84  .word       0x0014FF84                   # sllv        $ra, $s4, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae964u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_3ae968:
    // 0x3ae968: 0x1501c0  sll         $zero, $s5, 7
    ctx->pc = 0x3ae968u;
    
label_3ae96c:
    // 0x3ae96c: 0x150070  tge         $zero, $s5, 1
    ctx->pc = 0x3ae96cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_3ae970:
    // 0x3ae970: 0x1500e0  .word       0x001500E0                   # add         $zero, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae970u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ae974:
    // 0x3ae974: 0x150150  .word       0x00150150                   # mfhi        $zero # 00150140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae974u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_3ae978:
    // 0x3ae978: 0x150230  tge         $zero, $s5, 8
    ctx->pc = 0x3ae978u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_3ae97c:
    // 0x3ae97c: 0x1502a0  .word       0x001502A0                   # add         $zero, $zero, $s5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae97cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ae980:
    // 0x3ae980: 0x150310  .word       0x00150310                   # mfhi        $zero # 00150300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae980u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_3ae984:
    // 0x3ae984: 0x150380  sll         $zero, $s5, 14
    ctx->pc = 0x3ae984u;
    
label_3ae988:
    // 0x3ae988: 0x1503f0  tge         $zero, $s5, 15
    ctx->pc = 0x3ae988u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_3ae98c:
    // 0x3ae98c: 0x150460  .word       0x00150460                   # add         $zero, $zero, $s5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae98cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3ae990:
    // 0x3ae990: 0x152ec8  .word       0x00152EC8                   # jr          $zero # 00152EC0 <InstrIdType: CPU_SPECIAL>
label_3ae994:
    if (ctx->pc == 0x3AE994u) {
        ctx->pc = 0x3AE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE990u;
        // 0x3ae994: 0x152f28  .word       0x00152F28                   # mfsa        $a1 # 00150700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 5, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE998u;
        goto label_3ae998;
    }
    ctx->pc = 0x3AE990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE990u;
        // 0x3ae994: 0x152f28  .word       0x00152F28                   # mfsa        $a1 # 00150700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 5, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE990u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AE998u;
label_3ae998:
    // 0x3ae998: 0x153168  .word       0x00153168                   # mfsa        $a2 # 00150140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae998u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_3ae99c:
    // 0x3ae99c: 0x1533a8  .word       0x001533A8                   # mfsa        $a2 # 00150380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae99cu;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_3ae9a0:
    // 0x3ae9a0: 0x1535e8  .word       0x001535E8                   # mfsa        $a2 # 001505C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae9a0u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_3ae9a4:
    // 0x3ae9a4: 0x153a5c  .word       0x00153A5C                   # dmult       $zero, $s5 # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE9A4 raw=0x00153A5C");
label_3ae9a8:
    // 0x3ae9a8: 0x153ed0  .word       0x00153ED0                   # mfhi        $a3 # 001506C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9a8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_3ae9ac:
    // 0x3ae9ac: 0x154344  .word       0x00154344                   # sllv        $t0, $s5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 0) & 0x1F));
label_3ae9b0:
    // 0x3ae9b0: 0x155844  .word       0x00155844                   # sllv        $t3, $s5, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 0) & 0x1F));
label_3ae9b4:
    // 0x3ae9b4: 0x155868  .word       0x00155868                   # mfsa        $t3 # 00150040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae9b4u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_3ae9b8:
    // 0x3ae9b8: 0x155868  .word       0x00155868                   # mfsa        $t3 # 00150040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae9b8u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_3ae9bc:
    // 0x3ae9bc: 0x1558c0  sll         $t3, $s5, 3
    ctx->pc = 0x3ae9bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_3ae9c0:
    // 0x3ae9c0: 0x155918  .word       0x00155918                   # mult        $t3, $zero, $s5 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3ae9c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_3ae9c4:
    // 0x3ae9c4: 0x155984  .word       0x00155984                   # sllv        $t3, $s5, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 0) & 0x1F));
label_3ae9c8:
    // 0x3ae9c8: 0x1559dc  .word       0x001559DC                   # dmult       $zero, $s5 # 000059C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AE9C8 raw=0x001559DC");
label_3ae9cc:
    // 0x3ae9cc: 0x0  nop
    ctx->pc = 0x3ae9ccu;
    // NOP
label_3ae9d0:
    // 0x3ae9d0: 0x68706c41  ldl         $s0, 0x6C41($v1)
    ctx->pc = 0x3ae9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27713); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3ae9d4:
    // 0x3ae9d4: 0x30252061  andi        $a1, $at, 0x2061
    ctx->pc = 0x3ae9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)8289);
label_3ae9d8:
    // 0x3ae9d8: 0x7832  tlt         $zero, $zero, 480
    ctx->pc = 0x3ae9d8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3ae9dc:
    // 0x3ae9dc: 0x0  nop
    ctx->pc = 0x3ae9dcu;
    // NOP
label_3ae9e0:
    // 0x3ae9e0: 0x15b0b0  tge         $zero, $s5, 706
    ctx->pc = 0x3ae9e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_3ae9e4:
    // 0x3ae9e4: 0x15b0b0  tge         $zero, $s5, 706
    ctx->pc = 0x3ae9e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_3ae9e8:
    // 0x3ae9e8: 0x15b0b0  tge         $zero, $s5, 706
    ctx->pc = 0x3ae9e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_3ae9ec:
    // 0x3ae9ec: 0x15b0b0  tge         $zero, $s5, 706
    ctx->pc = 0x3ae9ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_3ae9f0:
    // 0x3ae9f0: 0x15b0e0  .word       0x0015B0E0                   # add         $s6, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3ae9f4:
    // 0x3ae9f4: 0x15b0e0  .word       0x0015B0E0                   # add         $s6, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3ae9f8:
    // 0x3ae9f8: 0x15b0e0  .word       0x0015B0E0                   # add         $s6, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3ae9fc:
    // 0x3ae9fc: 0x15b0e0  .word       0x0015B0E0                   # add         $s6, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3ae9fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3aea00:
    // 0x3aea00: 0x15b0e0  .word       0x0015B0E0                   # add         $s6, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3aea04:
    // 0x3aea04: 0x15b0e0  .word       0x0015B0E0                   # add         $s6, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3aea08:
    // 0x3aea08: 0x15b0e0  .word       0x0015B0E0                   # add         $s6, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3aea0c:
    // 0x3aea0c: 0x15b0e0  .word       0x0015B0E0                   # add         $s6, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3aea10:
    // 0x3aea10: 0x15b0e0  .word       0x0015B0E0                   # add         $s6, $zero, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_3aea14:
    // 0x3aea14: 0x0  nop
    ctx->pc = 0x3aea14u;
    // NOP
label_3aea18:
    // 0x3aea18: 0x0  nop
    ctx->pc = 0x3aea18u;
    // NOP
label_3aea1c:
    // 0x3aea1c: 0x0  nop
    ctx->pc = 0x3aea1cu;
    // NOP
label_3aea20:
    // 0x3aea20: 0x161750  .word       0x00161750                   # mfhi        $v0 # 00160740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3aea24:
    // 0x3aea24: 0x161750  .word       0x00161750                   # mfhi        $v0 # 00160740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3aea28:
    // 0x3aea28: 0x161380  sll         $v0, $s6, 14
    ctx->pc = 0x3aea28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 14));
label_3aea2c:
    // 0x3aea2c: 0x161498  .word       0x00161498                   # mult        $v0, $zero, $s6 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aea2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3aea30:
    // 0x3aea30: 0x161594  .word       0x00161594                   # dsllv       $v0, $s6, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_3aea34:
    // 0x3aea34: 0x161654  .word       0x00161654                   # dsllv       $v0, $s6, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_3aea38:
    // 0x3aea38: 0x161654  .word       0x00161654                   # dsllv       $v0, $s6, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_3aea3c:
    // 0x3aea3c: 0x161654  .word       0x00161654                   # dsllv       $v0, $s6, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_3aea40:
    // 0x3aea40: 0x161654  .word       0x00161654                   # dsllv       $v0, $s6, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_3aea44:
    // 0x3aea44: 0x161654  .word       0x00161654                   # dsllv       $v0, $s6, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_3aea48:
    // 0x3aea48: 0x0  nop
    ctx->pc = 0x3aea48u;
    // NOP
label_3aea4c:
    // 0x3aea4c: 0x0  nop
    ctx->pc = 0x3aea4cu;
    // NOP
label_3aea50:
    // 0x3aea50: 0x162638  dsll        $a0, $s6, 24
    ctx->pc = 0x3aea50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << 24);
label_3aea54:
    // 0x3aea54: 0x162690  .word       0x00162690                   # mfhi        $a0 # 00160680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3aea58:
    // 0x3aea58: 0x1626e8  .word       0x001626E8                   # mfsa        $a0 # 001606C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aea58u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_3aea5c:
    // 0x3aea5c: 0x162800  sll         $a1, $s6, 0
    ctx->pc = 0x3aea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 0));
label_3aea60:
    // 0x3aea60: 0x162918  .word       0x00162918                   # mult        $a1, $zero, $s6 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aea60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3aea64:
    // 0x3aea64: 0x162970  tge         $zero, $s6, 165
    ctx->pc = 0x3aea64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3aea68:
    // 0x3aea68: 0x0  nop
    ctx->pc = 0x3aea68u;
    // NOP
label_3aea6c:
    // 0x3aea6c: 0x0  nop
    ctx->pc = 0x3aea6cu;
    // NOP
label_3aea70:
    // 0x3aea70: 0x162b90  .word       0x00162B90                   # mfhi        $a1 # 00160380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea70u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3aea74:
    // 0x3aea74: 0x162b90  .word       0x00162B90                   # mfhi        $a1 # 00160380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea74u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3aea78:
    // 0x3aea78: 0x162aec  .word       0x00162AEC                   # dadd        $a1, $zero, $s6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea78u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 22); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_3aea7c:
    // 0x3aea7c: 0x162b18  .word       0x00162B18                   # mult        $a1, $zero, $s6 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aea7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3aea80:
    // 0x3aea80: 0x162b44  .word       0x00162B44                   # sllv        $a1, $s6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 0) & 0x1F));
label_3aea84:
    // 0x3aea84: 0x162b6c  .word       0x00162B6C                   # dadd        $a1, $zero, $s6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aea84u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 22); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_3aea88:
    // 0x3aea88: 0x0  nop
    ctx->pc = 0x3aea88u;
    // NOP
label_3aea8c:
    // 0x3aea8c: 0x0  nop
    ctx->pc = 0x3aea8cu;
    // NOP
label_3aea90:
    // 0x3aea90: 0x5f6d654d  .word       0x5F6D654D                   # bgtzl       $k1, . + 4 + (0x654D << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_3aea94:
    if (ctx->pc == 0x3AEA94u) {
        ctx->pc = 0x3AEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA90u;
        // 0x3aea94: 0x6f6c6c61  ldr         $t4, 0x6C61($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA98u;
        goto label_3aea98;
    }
    ctx->pc = 0x3AEA90u;
    {
        const bool branch_taken_0x3aea90 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3aea90) {
            ctx->pc = 0x3AEA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEA90u;
            // 0x3aea94: 0x6f6c6c61  ldr         $t4, 0x6C61($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7FC8u;
            return;
        }
    }
    ctx->pc = 0x3AEA98u;
label_3aea98:
    // 0x3aea98: 0x64615f63  daddiu      $at, $v1, 0x5F63
    ctx->pc = 0x3aea98u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24419);
label_3aea9c:
    // 0x3aea9c: 0x4d207264  .word       0x4D207264                   # INVALID     $t1, $zero, 0x7264 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aea9cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEA9C raw=0x4D207264");
label_3aeaa0:
    // 0x3aeaa0: 0x4d495841  .word       0x4D495841                   # INVALID     $t2, $t1, 0x5841 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aeaa0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEAA0 raw=0x4D495841");
label_3aeaa4:
    // 0x3aeaa4: 0x6f204d55  ldr         $zero, 0x4D55($t9)
    ctx->pc = 0x3aeaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 19797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3aeaa8:
    // 0x3aeaa8: 0x21726576  addi        $s2, $t3, 0x6576
    ctx->pc = 0x3aeaa8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25974, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_3aeaac:
    // 0x3aeaac: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x3aeaacu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3aeab0:
    // 0x3aeab0: 0x5f6d654d  .word       0x5F6D654D                   # bgtzl       $k1, . + 4 + (0x654D << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_3aeab4:
    if (ctx->pc == 0x3AEAB4u) {
        ctx->pc = 0x3AEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAB0u;
        // 0x3aeab4: 0x6f6c6c61  ldr         $t4, 0x6C61($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAB8u;
        goto label_3aeab8;
    }
    ctx->pc = 0x3AEAB0u;
    {
        const bool branch_taken_0x3aeab0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3aeab0) {
            ctx->pc = 0x3AEAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEAB0u;
            // 0x3aeab4: 0x6f6c6c61  ldr         $t4, 0x6C61($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7FE8u;
            return;
        }
    }
    ctx->pc = 0x3AEAB8u;
label_3aeab8:
    // 0x3aeab8: 0x64615f63  daddiu      $at, $v1, 0x5F63
    ctx->pc = 0x3aeab8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24419);
label_3aeabc:
    // 0x3aeabc: 0x4d207264  .word       0x4D207264                   # INVALID     $t1, $zero, 0x7264 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aeabcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEABC raw=0x4D207264");
label_3aeac0:
    // 0x3aeac0: 0x4d494e49  .word       0x4D494E49                   # INVALID     $t2, $t1, 0x4E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aeac0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEAC0 raw=0x4D494E49");
label_3aeac4:
    // 0x3aeac4: 0x6f204d55  ldr         $zero, 0x4D55($t9)
    ctx->pc = 0x3aeac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 19797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3aeac8:
    // 0x3aeac8: 0x21726576  addi        $s2, $t3, 0x6576
    ctx->pc = 0x3aeac8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25974, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_3aeacc:
    // 0x3aeacc: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x3aeaccu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3aead0:
    // 0x3aead0: 0x5f6d654d  .word       0x5F6D654D                   # bgtzl       $k1, . + 4 + (0x654D << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_3aead4:
    if (ctx->pc == 0x3AEAD4u) {
        ctx->pc = 0x3AEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAD0u;
        // 0x3aead4: 0x6f6c6c61  ldr         $t4, 0x6C61($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAD8u;
        goto label_3aead8;
    }
    ctx->pc = 0x3AEAD0u;
    {
        const bool branch_taken_0x3aead0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3aead0) {
            ctx->pc = 0x3AEAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEAD0u;
            // 0x3aead4: 0x6f6c6c61  ldr         $t4, 0x6C61($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8008u;
            return;
        }
    }
    ctx->pc = 0x3AEAD8u;
label_3aead8:
    // 0x3aead8: 0x20525f63  addi        $s2, $v0, 0x5F63
    ctx->pc = 0x3aead8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)24419, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_3aeadc:
    // 0x3aeadc: 0x6f6c6c61  ldr         $t4, 0x6C61($k1)
    ctx->pc = 0x3aeadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3aeae0:
    // 0x3aeae0: 0x72652063  .word       0x72652063                   # INVALID     $s3, $a1, 0x2063 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aeae0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x3AEAE0 raw=0x72652063");
label_3aeae4:
    // 0x3aeae4: 0x212172  tlt         $at, $at, 133
    ctx->pc = 0x3aeae4u;
    if (GPR_S64(ctx, 1) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_3aeae8:
    // 0x3aeae8: 0x64383025  daddiu      $t8, $at, 0x3025
    ctx->pc = 0x3aeae8u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_3aeaec:
    // 0x3aeaec: 0x0  nop
    ctx->pc = 0x3aeaecu;
    // NOP
label_3aeaf0:
    // 0x3aeaf0: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aeaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3aeaf4:
    // 0x3aeaf4: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_3aeaf8:
    if (ctx->pc == 0x3AEAF8u) {
        ctx->pc = 0x3AEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAF4u;
        // 0x3aeaf8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEAF8 raw=0x41544144");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAFCu;
        goto label_3aeafc;
    }
    ctx->pc = 0x3AEAF4u;
    {
        const bool branch_taken_0x3aeaf4 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aeaf4) {
            ctx->pc = 0x3AEAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEAF4u;
            // 0x3aeaf8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEAF8 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BACACu;
            return;
        }
    }
    ctx->pc = 0x3AEAFCu;
label_3aeafc:
    // 0x3aeafc: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aeafcu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_3aeb00:
    // 0x3aeb00: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_3aeb04:
    if (ctx->pc == 0x3AEB04u) {
        ctx->pc = 0x3AEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB00u;
        // 0x3aeb04: 0x504f495c  beql        $v0, $t7, . + 4 + (0x495C << 2) (Delay Slot)
        // Likely branch instruction at 0x3AEB04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB08u;
        goto label_3aeb08;
    }
    ctx->pc = 0x3AEB00u;
    {
        const bool branch_taken_0x3aeb00 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aeb00) {
            ctx->pc = 0x3AEB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB00u;
            // 0x3aeb04: 0x504f495c  beql        $v0, $t7, . + 4 + (0x495C << 2) (Delay Slot)
            // Likely branch instruction at 0x3AEB04 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1C58u;
            return;
        }
    }
    ctx->pc = 0x3AEB08u;
label_3aeb08:
    // 0x3aeb08: 0x31325052  andi        $s2, $t1, 0x5052
    ctx->pc = 0x3aeb08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)20562);
label_3aeb0c:
    // 0x3aeb0c: 0x4d492e31  .word       0x4D492E31                   # INVALID     $t2, $t1, 0x2E31 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aeb0cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEB0C raw=0x4D492E31");
label_3aeb10:
    // 0x3aeb10: 0x313b47  .word       0x00313B47                   # srav        $a3, $s1, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aeb10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 1) & 0x1F));
label_3aeb14:
    // 0x3aeb14: 0x0  nop
    ctx->pc = 0x3aeb14u;
    // NOP
label_3aeb18:
    // 0x3aeb18: 0x0  nop
    ctx->pc = 0x3aeb18u;
    // NOP
label_3aeb1c:
    // 0x3aeb1c: 0x0  nop
    ctx->pc = 0x3aeb1cu;
    // NOP
label_3aeb20:
    // 0x3aeb20: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x3aeb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3aeb24:
    // 0x3aeb24: 0x63733a72  daddi       $s3, $k1, 0x3A72
    ctx->pc = 0x3aeb24u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)14962; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_3aeb28:
    // 0x3aeb28: 0x66695365  daddiu      $t1, $s3, 0x5365
    ctx->pc = 0x3aeb28u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)21349);
label_3aeb2c:
    // 0x3aeb2c: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aeb2cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AEB2C raw=0x74696E49");
label_3aeb30:
    // 0x3aeb30: 0x48706f49  .word       0x48706F49                   # INVALID     $v1, $s0, 0x6F49 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3aeb30u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x3AEB30 raw=0x48706F49");
label_3aeb34:
    // 0x3aeb34: 0x20706165  addi        $s0, $v1, 0x6165
    ctx->pc = 0x3aeb34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_3aeb38:
    // 0x3aeb38: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x3aeb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3aeb3c:
    // 0x3aeb3c: 0xa72  tlt         $zero, $zero, 41
    ctx->pc = 0x3aeb3cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3aeb40:
    // 0x3aeb40: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aeb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3aeb44:
    // 0x3aeb44: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_3aeb48:
    if (ctx->pc == 0x3AEB48u) {
        ctx->pc = 0x3AEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB44u;
        // 0x3aeb48: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEB48 raw=0x41544144");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB4Cu;
        goto label_3aeb4c;
    }
    ctx->pc = 0x3AEB44u;
    {
        const bool branch_taken_0x3aeb44 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aeb44) {
            ctx->pc = 0x3AEB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB44u;
            // 0x3aeb48: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEB48 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BACFCu;
            return;
        }
    }
    ctx->pc = 0x3AEB4Cu;
label_3aeb4c:
    // 0x3aeb4c: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aeb4cu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_3aeb50:
    // 0x3aeb50: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_3aeb54:
    if (ctx->pc == 0x3AEB54u) {
        ctx->pc = 0x3AEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB50u;
        // 0x3aeb54: 0x4f49535c  .word       0x4F49535C                   # INVALID     $k0, $t1, 0x535C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEB54 raw=0x4F49535C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB58u;
        goto label_3aeb58;
    }
    ctx->pc = 0x3AEB50u;
    {
        const bool branch_taken_0x3aeb50 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aeb50) {
            ctx->pc = 0x3AEB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB50u;
            // 0x3aeb54: 0x4f49535c  .word       0x4F49535C                   # INVALID     $k0, $t1, 0x535C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEB54 raw=0x4F49535C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1CA8u;
            return;
        }
    }
    ctx->pc = 0x3AEB58u;
label_3aeb58:
    // 0x3aeb58: 0x4e414d32  .word       0x4E414D32                   # INVALID     $s2, $at, 0x4D32 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aeb58u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEB58 raw=0x4E414D32");
label_3aeb5c:
    // 0x3aeb5c: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_3aeb60:
    if (ctx->pc == 0x3AEB60u) {
        ctx->pc = 0x3AEB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB5Cu;
        // 0x3aeb60: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB64u;
        goto label_3aeb64;
    }
    ctx->pc = 0x3AEB5Cu;
    {
        const bool branch_taken_0x3aeb5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3aeb5c) {
            ctx->pc = 0x3AEB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB5Cu;
            // 0x3aeb60: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
            SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1018u;
            return;
        }
    }
    ctx->pc = 0x3AEB64u;
label_3aeb64:
    // 0x3aeb64: 0x0  nop
    ctx->pc = 0x3aeb64u;
    // NOP
label_3aeb68:
    // 0x3aeb68: 0x0  nop
    ctx->pc = 0x3aeb68u;
    // NOP
label_3aeb6c:
    // 0x3aeb6c: 0x0  nop
    ctx->pc = 0x3aeb6cu;
    // NOP
label_3aeb70:
    // 0x3aeb70: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aeb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3aeb74:
    // 0x3aeb74: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_3aeb78:
    if (ctx->pc == 0x3AEB78u) {
        ctx->pc = 0x3AEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB74u;
        // 0x3aeb78: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEB78 raw=0x41544144");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB7Cu;
        goto label_3aeb7c;
    }
    ctx->pc = 0x3AEB74u;
    {
        const bool branch_taken_0x3aeb74 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aeb74) {
            ctx->pc = 0x3AEB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB74u;
            // 0x3aeb78: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEB78 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BAD2Cu;
            return;
        }
    }
    ctx->pc = 0x3AEB7Cu;
label_3aeb7c:
    // 0x3aeb7c: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aeb7cu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_3aeb80:
    // 0x3aeb80: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_3aeb84:
    if (ctx->pc == 0x3AEB84u) {
        ctx->pc = 0x3AEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB80u;
        // 0x3aeb84: 0x4441505c  .word       0x4441505C                   # cfc1        $at, $10 # 0000005C <InstrIdType: R5900_COP1> (Delay Slot)
        SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR10
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB88u;
        goto label_3aeb88;
    }
    ctx->pc = 0x3AEB80u;
    {
        const bool branch_taken_0x3aeb80 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aeb80) {
            ctx->pc = 0x3AEB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB80u;
            // 0x3aeb84: 0x4441505c  .word       0x4441505C                   # cfc1        $at, $10 # 0000005C <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR10
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1CD8u;
            return;
        }
    }
    ctx->pc = 0x3AEB88u;
label_3aeb88:
    // 0x3aeb88: 0x2e4e414d  sltiu       $t6, $s2, 0x414D
    ctx->pc = 0x3aeb88u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16717) ? 1 : 0);
label_3aeb8c:
    // 0x3aeb8c: 0x3b585249  xori        $t8, $k0, 0x5249
    ctx->pc = 0x3aeb8cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21065);
label_3aeb90:
    // 0x3aeb90: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x3aeb90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3aeb94:
    // 0x3aeb94: 0x0  nop
    ctx->pc = 0x3aeb94u;
    // NOP
label_3aeb98:
    // 0x3aeb98: 0x0  nop
    ctx->pc = 0x3aeb98u;
    // NOP
label_3aeb9c:
    // 0x3aeb9c: 0x0  nop
    ctx->pc = 0x3aeb9cu;
    // NOP
label_3aeba0:
    // 0x3aeba0: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aeba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3aeba4:
    // 0x3aeba4: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_3aeba8:
    if (ctx->pc == 0x3AEBA8u) {
        ctx->pc = 0x3AEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBA4u;
        // 0x3aeba8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEBA8 raw=0x41544144");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBACu;
        goto label_3aebac;
    }
    ctx->pc = 0x3AEBA4u;
    {
        const bool branch_taken_0x3aeba4 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aeba4) {
            ctx->pc = 0x3AEBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEBA4u;
            // 0x3aeba8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEBA8 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BAD5Cu;
            return;
        }
    }
    ctx->pc = 0x3AEBACu;
label_3aebac:
    // 0x3aebac: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aebacu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_3aebb0:
    // 0x3aebb0: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_3aebb4:
    if (ctx->pc == 0x3AEBB4u) {
        ctx->pc = 0x3AEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBB0u;
        // 0x3aebb4: 0x4d434d5c  .word       0x4D434D5C                   # INVALID     $t2, $v1, 0x4D5C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEBB4 raw=0x4D434D5C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBB8u;
        goto label_3aebb8;
    }
    ctx->pc = 0x3AEBB0u;
    {
        const bool branch_taken_0x3aebb0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aebb0) {
            ctx->pc = 0x3AEBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEBB0u;
            // 0x3aebb4: 0x4d434d5c  .word       0x4D434D5C                   # INVALID     $t2, $v1, 0x4D5C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEBB4 raw=0x4D434D5C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1D08u;
            return;
        }
    }
    ctx->pc = 0x3AEBB8u;
label_3aebb8:
    // 0x3aebb8: 0x492e4e41  .word       0x492E4E41                   # INVALID     $t1, $t6, 0x4E41 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3aebb8u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x3AEBB8 raw=0x492E4E41");
label_3aebbc:
    // 0x3aebbc: 0x313b5852  andi        $k1, $t1, 0x5852
    ctx->pc = 0x3aebbcu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)22610);
label_3aebc0:
    // 0x3aebc0: 0x0  nop
    ctx->pc = 0x3aebc0u;
    // NOP
label_3aebc4:
    // 0x3aebc4: 0x0  nop
    ctx->pc = 0x3aebc4u;
    // NOP
label_3aebc8:
    // 0x3aebc8: 0x0  nop
    ctx->pc = 0x3aebc8u;
    // NOP
label_3aebcc:
    // 0x3aebcc: 0x0  nop
    ctx->pc = 0x3aebccu;
    // NOP
label_3aebd0:
    // 0x3aebd0: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aebd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3aebd4:
    // 0x3aebd4: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_3aebd8:
    if (ctx->pc == 0x3AEBD8u) {
        ctx->pc = 0x3AEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBD4u;
        // 0x3aebd8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEBD8 raw=0x41544144");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBDCu;
        goto label_3aebdc;
    }
    ctx->pc = 0x3AEBD4u;
    {
        const bool branch_taken_0x3aebd4 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aebd4) {
            ctx->pc = 0x3AEBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEBD4u;
            // 0x3aebd8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEBD8 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BAD8Cu;
            return;
        }
    }
    ctx->pc = 0x3AEBDCu;
label_3aebdc:
    // 0x3aebdc: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aebdcu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_3aebe0:
    // 0x3aebe0: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
label_3aebe4:
    if (ctx->pc == 0x3AEBE4u) {
        ctx->pc = 0x3AEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBE0u;
        // 0x3aebe4: 0x53434d5c  beql        $k0, $v1, . + 4 + (0x4D5C << 2) (Delay Slot)
        // Likely branch instruction at 0x3AEBE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBE8u;
        goto label_3aebe8;
    }
    ctx->pc = 0x3AEBE0u;
    {
        const bool branch_taken_0x3aebe0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aebe0) {
            ctx->pc = 0x3AEBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEBE0u;
            // 0x3aebe4: 0x53434d5c  beql        $k0, $v1, . + 4 + (0x4D5C << 2) (Delay Slot)
            // Likely branch instruction at 0x3AEBE4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1D38u;
            return;
        }
    }
    ctx->pc = 0x3AEBE8u;
label_3aebe8:
    // 0x3aebe8: 0x2e565245  sltiu       $s6, $s2, 0x5245
    ctx->pc = 0x3aebe8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)21061) ? 1 : 0);
label_3aebec:
    // 0x3aebec: 0x3b585249  xori        $t8, $k0, 0x5249
    ctx->pc = 0x3aebecu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21065);
label_3aebf0:
    // 0x3aebf0: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x3aebf0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3aebf4:
    // 0x3aebf4: 0x0  nop
    ctx->pc = 0x3aebf4u;
    // NOP
label_3aebf8:
    // 0x3aebf8: 0x0  nop
    ctx->pc = 0x3aebf8u;
    // NOP
label_3aebfc:
    // 0x3aebfc: 0x0  nop
    ctx->pc = 0x3aebfcu;
    // NOP
label_3aec00:
    // 0x3aec00: 0x6867696c  ldl         $a3, 0x696C($v1)
    ctx->pc = 0x3aec00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3aec04:
    // 0x3aec04: 0x65762074  daddiu      $s6, $t3, 0x2074
    ctx->pc = 0x3aec04u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8308);
label_3aec08:
    // 0x3aec08: 0x6f697372  ldr         $t1, 0x7372($k1)
    ctx->pc = 0x3aec08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29554); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3aec0c:
    // 0x3aec0c: 0x6c6f206e  ldr         $t7, 0x206E($v1)
    ctx->pc = 0x3aec0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3aec10:
    // 0x3aec10: 0xa2064  .word       0x000A2064                   # and         $a0, $zero, $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aec10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 10));
label_3aec14:
    // 0x3aec14: 0x0  nop
    ctx->pc = 0x3aec14u;
    // NOP
label_3aec18:
    // 0x3aec18: 0x0  nop
    ctx->pc = 0x3aec18u;
    // NOP
label_3aec1c:
    // 0x3aec1c: 0x0  nop
    ctx->pc = 0x3aec1cu;
    // NOP
label_3aec20:
    // 0x3aec20: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3aec20u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3aec24:
    // 0x3aec24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aec24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3AEC24 raw=0x00000001");
label_3aec28:
    // 0x3aec28: 0x0  nop
    ctx->pc = 0x3aec28u;
    // NOP
label_3aec2c:
    // 0x3aec2c: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x3aec2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_3aec30:
    // 0x3aec30: 0x13  mtlo        $zero
    ctx->pc = 0x3aec30u;
    ctx->lo = GPR_U64(ctx, 0);
label_3aec34:
    // 0x3aec34: 0x0  nop
    ctx->pc = 0x3aec34u;
    // NOP
label_3aec38:
    // 0x3aec38: 0x3e31523c  .word       0x3E31523C                   # lui         $s1, 0x523C # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aec38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21052 << 16));
label_3aec3c:
    // 0x3aec3c: 0x0  nop
    ctx->pc = 0x3aec3cu;
    // NOP
label_3aec40:
    // 0x3aec40: 0x3e32523c  .word       0x3E32523C                   # lui         $s2, 0x523C # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aec40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21052 << 16));
label_3aec44:
    // 0x3aec44: 0x20647073  addi        $a0, $v1, 0x7073
    ctx->pc = 0x3aec44u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28787, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_3aec48:
    // 0x3aec48: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aec48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3aec4c:
    // 0x3aec4c: 0x0  nop
    ctx->pc = 0x3aec4cu;
    // NOP
label_3aec50:
    // 0x3aec50: 0x69736f70  ldl         $s3, 0x6F70($t3)
    ctx->pc = 0x3aec50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_3aec54:
    // 0x3aec54: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x3aec54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3aec58:
    // 0x3aec58: 0x0  nop
    ctx->pc = 0x3aec58u;
    // NOP
label_3aec5c:
    // 0x3aec5c: 0x0  nop
    ctx->pc = 0x3aec5cu;
    // NOP
label_3aec60:
    // 0x3aec60: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x3aec60u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_3aec64:
    // 0x3aec64: 0x20202072  addi        $zero, $at, 0x2072
    ctx->pc = 0x3aec64u;
    // NOP (addi to $zero)
label_3aec68:
    // 0x3aec68: 0x0  nop
    ctx->pc = 0x3aec68u;
    // NOP
label_3aec6c:
    // 0x3aec6c: 0x0  nop
    ctx->pc = 0x3aec6cu;
    // NOP
label_3aec70:
    // 0x3aec70: 0x6c6c6f64  ldr         $t4, 0x6F64($v1)
    ctx->pc = 0x3aec70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28516); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3aec74:
    // 0x3aec74: 0x20202079  addi        $zero, $at, 0x2079
    ctx->pc = 0x3aec74u;
    // NOP (addi to $zero)
label_3aec78:
    // 0x3aec78: 0x0  nop
    ctx->pc = 0x3aec78u;
    // NOP
label_3aec7c:
    // 0x3aec7c: 0x0  nop
    ctx->pc = 0x3aec7cu;
    // NOP
label_3aec80:
    // 0x3aec80: 0x676e6172  daddiu      $t6, $k1, 0x6172
    ctx->pc = 0x3aec80u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24946);
label_3aec84:
    // 0x3aec84: 0x20202065  addi        $zero, $at, 0x2065
    ctx->pc = 0x3aec84u;
    // NOP (addi to $zero)
label_3aec88:
    // 0x3aec88: 0x0  nop
    ctx->pc = 0x3aec88u;
    // NOP
label_3aec8c:
    // 0x3aec8c: 0x0  nop
    ctx->pc = 0x3aec8cu;
    // NOP
label_3aec90:
    // 0x3aec90: 0x65736572  daddiu      $s3, $t3, 0x6572
    ctx->pc = 0x3aec90u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_3aec94:
    // 0x3aec94: 0x20202074  addi        $zero, $at, 0x2074
    ctx->pc = 0x3aec94u;
    // NOP (addi to $zero)
label_3aec98:
    // 0x3aec98: 0x0  nop
    ctx->pc = 0x3aec98u;
    // NOP
label_3aec9c:
    // 0x3aec9c: 0x0  nop
    ctx->pc = 0x3aec9cu;
    // NOP
label_3aeca0:
    // 0x3aeca0: 0x20736f70  addi        $s3, $v1, 0x6F70
    ctx->pc = 0x3aeca0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_3aeca4:
    // 0x3aeca4: 0x76252020  .word       0x76252020                   # INVALID     $s1, $a1, 0x2020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aeca4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AECA4 raw=0x76252020");
label_3aeca8:
    // 0x3aeca8: 0x0  nop
    ctx->pc = 0x3aeca8u;
    // NOP
label_3aecac:
    // 0x3aecac: 0x0  nop
    ctx->pc = 0x3aecacu;
    // NOP
label_3aecb0:
    // 0x3aecb0: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x3aecb0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_3aecb4:
    // 0x3aecb4: 0x76252072  .word       0x76252072                   # INVALID     $s1, $a1, 0x2072 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aecb4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AECB4 raw=0x76252072");
label_3aecb8:
    // 0x3aecb8: 0x0  nop
    ctx->pc = 0x3aecb8u;
    // NOP
label_3aecbc:
    // 0x3aecbc: 0x0  nop
    ctx->pc = 0x3aecbcu;
    // NOP
label_3aecc0:
    // 0x3aecc0: 0x74736964  .word       0x74736964                   # INVALID     $v1, $s3, 0x6964 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aecc0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AECC0 raw=0x74736964");
label_3aecc4:
    // 0x3aecc4: 0x66252020  daddiu      $a1, $s1, 0x2020
    ctx->pc = 0x3aecc4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)8224);
label_3aecc8:
    // 0x3aecc8: 0x0  nop
    ctx->pc = 0x3aecc8u;
    // NOP
label_3aeccc:
    // 0x3aeccc: 0x0  nop
    ctx->pc = 0x3aecccu;
    // NOP
label_3aecd0:
    // 0x3aecd0: 0x676e6172  daddiu      $t6, $k1, 0x6172
    ctx->pc = 0x3aecd0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24946);
label_3aecd4:
    // 0x3aecd4: 0x66252065  daddiu      $a1, $s1, 0x2065
    ctx->pc = 0x3aecd4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)8293);
label_3aecd8:
    // 0x3aecd8: 0x0  nop
    ctx->pc = 0x3aecd8u;
    // NOP
label_3aecdc:
    // 0x3aecdc: 0x0  nop
    ctx->pc = 0x3aecdcu;
    // NOP
label_3aece0:
    // 0x3aece0: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aece0u;
    // NOP (addi to $zero)
label_3aece4:
    // 0x3aece4: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aece4u;
    // NOP (addi to $zero)
label_3aece8:
    // 0x3aece8: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aece8u;
    // NOP (addi to $zero)
label_3aecec:
    // 0x3aecec: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aececu;
    // NOP (addi to $zero)
label_3aecf0:
    // 0x3aecf0: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aecf0u;
    // NOP (addi to $zero)
label_3aecf4:
    // 0x3aecf4: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aecf4u;
    // NOP (addi to $zero)
label_3aecf8:
    // 0x3aecf8: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aecf8u;
    // NOP (addi to $zero)
label_3aecfc:
    // 0x3aecfc: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aecfcu;
    // NOP (addi to $zero)
label_3aed00:
    // 0x3aed00: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aed00u;
    // NOP (addi to $zero)
label_3aed04:
    // 0x3aed04: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x3aed04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3aed08:
    // 0x3aed08: 0x0  nop
    ctx->pc = 0x3aed08u;
    // NOP
label_3aed0c:
    // 0x3aed0c: 0x0  nop
    ctx->pc = 0x3aed0cu;
    // NOP
label_3aed10:
    // 0x3aed10: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aed10u;
    // NOP (addi to $zero)
label_3aed14:
    // 0x3aed14: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aed14u;
    // NOP (addi to $zero)
label_3aed18:
    // 0x3aed18: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aed18u;
    // NOP (addi to $zero)
label_3aed1c:
    // 0x3aed1c: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aed1cu;
    // NOP (addi to $zero)
label_3aed20:
    // 0x3aed20: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aed20u;
    // NOP (addi to $zero)
label_3aed24:
    // 0x3aed24: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aed24u;
    // NOP (addi to $zero)
label_3aed28:
    // 0x3aed28: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3aed28u;
    // NOP (addi to $zero)
label_3aed2c:
    // 0x3aed2c: 0x0  nop
    ctx->pc = 0x3aed2cu;
    // NOP
label_3aed30:
    // 0x3aed30: 0x726576  tne         $v1, $s2, 405
    ctx->pc = 0x3aed30u;
    if (GPR_U64(ctx, 3) != GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_3aed34:
    // 0x3aed34: 0x0  nop
    ctx->pc = 0x3aed34u;
    // NOP
label_3aed38:
    // 0x3aed38: 0x0  nop
    ctx->pc = 0x3aed38u;
    // NOP
label_3aed3c:
    // 0x3aed3c: 0x0  nop
    ctx->pc = 0x3aed3cu;
    // NOP
label_3aed40:
    // 0x3aed40: 0x41455241  .word       0x41455241                   # INVALID     $t2, $a1, 0x5241 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aed40u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AED40 raw=0x41455241");
label_3aed44:
    // 0x3aed44: 0x54455320  bnel        $v0, $a1, . + 4 + (0x5320 << 2)
label_3aed48:
    if (ctx->pc == 0x3AED48u) {
        ctx->pc = 0x3AED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED44u;
        // 0x3aed48: 0x52524520  beql        $s2, $s2, . + 4 + (0x4520 << 2) (Delay Slot)
        // Likely branch instruction at 0x3AED48 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AED4Cu;
        goto label_3aed4c;
    }
    ctx->pc = 0x3AED44u;
    {
        const bool branch_taken_0x3aed44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3aed44) {
            ctx->pc = 0x3AED48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AED44u;
            // 0x3aed48: 0x52524520  beql        $s2, $s2, . + 4 + (0x4520 << 2) (Delay Slot)
            // Likely branch instruction at 0x3AED48 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C39C8u;
            return;
        }
    }
    ctx->pc = 0x3AED4Cu;
label_3aed4c:
    // 0x3aed4c: 0x6a28524f  ldl         $t0, 0x524F($s1)
    ctx->pc = 0x3aed4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 21071); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3aed50:
    // 0x3aed50: 0x203d3e20  addi        $sp, $at, 0x3E20
    ctx->pc = 0x3aed50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)15904, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_3aed54:
    // 0x3aed54: 0x296425  .word       0x00296425                   # or          $t4, $at, $t1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aed54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 9));
label_3aed58:
    // 0x3aed58: 0x0  nop
    ctx->pc = 0x3aed58u;
    // NOP
label_3aed5c:
    // 0x3aed5c: 0x0  nop
    ctx->pc = 0x3aed5cu;
    // NOP
label_3aed60:
    // 0x3aed60: 0x186ca0  .word       0x00186CA0                   # add         $t5, $zero, $t8 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aed60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_3aed64:
    // 0x3aed64: 0x186718  .word       0x00186718                   # mult        $t4, $zero, $t8 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aed64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3aed68:
    // 0x3aed68: 0x186718  .word       0x00186718                   # mult        $t4, $zero, $t8 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aed68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3aed6c:
    // 0x3aed6c: 0x186874  teq         $zero, $t8, 417
    ctx->pc = 0x3aed6cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3aed70:
    // 0x3aed70: 0x186874  teq         $zero, $t8, 417
    ctx->pc = 0x3aed70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3aed74:
    // 0x3aed74: 0x1869d4  .word       0x001869D4                   # dsllv       $t5, $t8, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aed74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) << (GPR_U32(ctx, 0) & 0x3F));
label_3aed78:
    // 0x3aed78: 0x186b3c  dsll32      $t5, $t8, 12
    ctx->pc = 0x3aed78u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) << (32 + 12));
label_3aed7c:
    // 0x3aed7c: 0x0  nop
    ctx->pc = 0x3aed7cu;
    // NOP
label_3aed80:
    // 0x3aed80: 0x187460  .word       0x00187460                   # add         $t6, $zero, $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aed80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3aed84:
    // 0x3aed84: 0x18756c  .word       0x0018756C                   # dadd        $t6, $zero, $t8 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aed84u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 24); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3aed88:
    // 0x3aed88: 0x187608  .word       0x00187608                   # jr          $zero # 00187600 <InstrIdType: CPU_SPECIAL>
label_3aed8c:
    if (ctx->pc == 0x3AED8Cu) {
        ctx->pc = 0x3AED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED88u;
        // 0x3aed8c: 0x18769c  .word       0x0018769C                   # dmult       $zero, $t8 # 00007680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AED8C raw=0x0018769C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AED90u;
        goto label_3aed90;
    }
    ctx->pc = 0x3AED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED88u;
        // 0x3aed8c: 0x18769c  .word       0x0018769C                   # dmult       $zero, $t8 # 00007680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AED8C raw=0x0018769C");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AED88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AED90u;
label_3aed90:
    // 0x3aed90: 0x1876b0  tge         $zero, $t8, 474
    ctx->pc = 0x3aed90u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3aed94:
    // 0x3aed94: 0x1876d8  .word       0x001876D8                   # mult        $t6, $zero, $t8 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aed94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3aed98:
    // 0x3aed98: 0x187714  .word       0x00187714                   # dsllv       $t6, $t8, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aed98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) << (GPR_U32(ctx, 0) & 0x3F));
label_3aed9c:
    // 0x3aed9c: 0x187744  .word       0x00187744                   # sllv        $t6, $t8, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aed9cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 0) & 0x1F));
label_3aeda0:
    // 0x3aeda0: 0x187798  .word       0x00187798                   # mult        $t6, $zero, $t8 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aeda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3aeda4:
    // 0x3aeda4: 0x187834  teq         $zero, $t8, 480
    ctx->pc = 0x3aeda4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3aeda8:
    // 0x3aeda8: 0x18788c  .word       0x0018788C                   # syscall     482 # 00180000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aeda8u;
    ctx->pc = 0x3AEDACu;
runtime->handleSyscall(rdram, ctx, 0x61E2u);
label_3aedac:
    // 0x3aedac: 0x1878ac  .word       0x001878AC                   # dadd        $t7, $zero, $t8 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aedacu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 24); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_3aedb0:
    // 0x3aedb0: 0x188474  teq         $zero, $t8, 529
    ctx->pc = 0x3aedb0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3aedb4:
    // 0x3aedb4: 0x18839c  .word       0x0018839C                   # dmult       $zero, $t8 # 00008380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aedb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3AEDB4 raw=0x0018839C");
label_3aedb8:
    // 0x3aedb8: 0x1883c0  sll         $s0, $t8, 15
    ctx->pc = 0x3aedb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 24), 15));
label_3aedbc:
    // 0x3aedbc: 0x1883e4  .word       0x001883E4                   # and         $s0, $zero, $t8 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aedbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & GPR_U64(ctx, 24));
label_3aedc0:
    // 0x3aedc0: 0x188408  .word       0x00188408                   # jr          $zero # 00188400 <InstrIdType: CPU_SPECIAL>
label_3aedc4:
    if (ctx->pc == 0x3AEDC4u) {
        ctx->pc = 0x3AEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDC0u;
        // 0x3aedc4: 0x18842c  .word       0x0018842C                   # dadd        $s0, $zero, $t8 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 24); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEDC8u;
        goto label_3aedc8;
    }
    ctx->pc = 0x3AEDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x3AEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDC0u;
        // 0x3aedc4: 0x18842c  .word       0x0018842C                   # dadd        $s0, $zero, $t8 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 24); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEDC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AEDC8u;
label_3aedc8:
    // 0x3aedc8: 0x188450  .word       0x00188450                   # mfhi        $s0 # 00180440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aedc8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_3aedcc:
    // 0x3aedcc: 0x0  nop
    ctx->pc = 0x3aedccu;
    // NOP
    ctx->pc = 0x3aedd0u;
}
