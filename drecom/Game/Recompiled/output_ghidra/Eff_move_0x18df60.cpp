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

// Function: Eff_move
// Address: 0x18df60 - 0x18e558
void Eff_move_0x18df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_move_0x18df60");
#endif

    switch (ctx->pc) {
        case 0x18df60u: goto label_18df60;
        case 0x18df64u: goto label_18df64;
        case 0x18df68u: goto label_18df68;
        case 0x18df6cu: goto label_18df6c;
        case 0x18df70u: goto label_18df70;
        case 0x18df74u: goto label_18df74;
        case 0x18df78u: goto label_18df78;
        case 0x18df7cu: goto label_18df7c;
        case 0x18df80u: goto label_18df80;
        case 0x18df84u: goto label_18df84;
        case 0x18df88u: goto label_18df88;
        case 0x18df8cu: goto label_18df8c;
        case 0x18df90u: goto label_18df90;
        case 0x18df94u: goto label_18df94;
        case 0x18df98u: goto label_18df98;
        case 0x18df9cu: goto label_18df9c;
        case 0x18dfa0u: goto label_18dfa0;
        case 0x18dfa4u: goto label_18dfa4;
        case 0x18dfa8u: goto label_18dfa8;
        case 0x18dfacu: goto label_18dfac;
        case 0x18dfb0u: goto label_18dfb0;
        case 0x18dfb4u: goto label_18dfb4;
        case 0x18dfb8u: goto label_18dfb8;
        case 0x18dfbcu: goto label_18dfbc;
        case 0x18dfc0u: goto label_18dfc0;
        case 0x18dfc4u: goto label_18dfc4;
        case 0x18dfc8u: goto label_18dfc8;
        case 0x18dfccu: goto label_18dfcc;
        case 0x18dfd0u: goto label_18dfd0;
        case 0x18dfd4u: goto label_18dfd4;
        case 0x18dfd8u: goto label_18dfd8;
        case 0x18dfdcu: goto label_18dfdc;
        case 0x18dfe0u: goto label_18dfe0;
        case 0x18dfe4u: goto label_18dfe4;
        case 0x18dfe8u: goto label_18dfe8;
        case 0x18dfecu: goto label_18dfec;
        case 0x18dff0u: goto label_18dff0;
        case 0x18dff4u: goto label_18dff4;
        case 0x18dff8u: goto label_18dff8;
        case 0x18dffcu: goto label_18dffc;
        case 0x18e000u: goto label_18e000;
        case 0x18e004u: goto label_18e004;
        case 0x18e008u: goto label_18e008;
        case 0x18e00cu: goto label_18e00c;
        case 0x18e010u: goto label_18e010;
        case 0x18e014u: goto label_18e014;
        case 0x18e018u: goto label_18e018;
        case 0x18e01cu: goto label_18e01c;
        case 0x18e020u: goto label_18e020;
        case 0x18e024u: goto label_18e024;
        case 0x18e028u: goto label_18e028;
        case 0x18e02cu: goto label_18e02c;
        case 0x18e030u: goto label_18e030;
        case 0x18e034u: goto label_18e034;
        case 0x18e038u: goto label_18e038;
        case 0x18e03cu: goto label_18e03c;
        case 0x18e040u: goto label_18e040;
        case 0x18e044u: goto label_18e044;
        case 0x18e048u: goto label_18e048;
        case 0x18e04cu: goto label_18e04c;
        case 0x18e050u: goto label_18e050;
        case 0x18e054u: goto label_18e054;
        case 0x18e058u: goto label_18e058;
        case 0x18e05cu: goto label_18e05c;
        case 0x18e060u: goto label_18e060;
        case 0x18e064u: goto label_18e064;
        case 0x18e068u: goto label_18e068;
        case 0x18e06cu: goto label_18e06c;
        case 0x18e070u: goto label_18e070;
        case 0x18e074u: goto label_18e074;
        case 0x18e078u: goto label_18e078;
        case 0x18e07cu: goto label_18e07c;
        case 0x18e080u: goto label_18e080;
        case 0x18e084u: goto label_18e084;
        case 0x18e088u: goto label_18e088;
        case 0x18e08cu: goto label_18e08c;
        case 0x18e090u: goto label_18e090;
        case 0x18e094u: goto label_18e094;
        case 0x18e098u: goto label_18e098;
        case 0x18e09cu: goto label_18e09c;
        case 0x18e0a0u: goto label_18e0a0;
        case 0x18e0a4u: goto label_18e0a4;
        case 0x18e0a8u: goto label_18e0a8;
        case 0x18e0acu: goto label_18e0ac;
        case 0x18e0b0u: goto label_18e0b0;
        case 0x18e0b4u: goto label_18e0b4;
        case 0x18e0b8u: goto label_18e0b8;
        case 0x18e0bcu: goto label_18e0bc;
        case 0x18e0c0u: goto label_18e0c0;
        case 0x18e0c4u: goto label_18e0c4;
        case 0x18e0c8u: goto label_18e0c8;
        case 0x18e0ccu: goto label_18e0cc;
        case 0x18e0d0u: goto label_18e0d0;
        case 0x18e0d4u: goto label_18e0d4;
        case 0x18e0d8u: goto label_18e0d8;
        case 0x18e0dcu: goto label_18e0dc;
        case 0x18e0e0u: goto label_18e0e0;
        case 0x18e0e4u: goto label_18e0e4;
        case 0x18e0e8u: goto label_18e0e8;
        case 0x18e0ecu: goto label_18e0ec;
        case 0x18e0f0u: goto label_18e0f0;
        case 0x18e0f4u: goto label_18e0f4;
        case 0x18e0f8u: goto label_18e0f8;
        case 0x18e0fcu: goto label_18e0fc;
        case 0x18e100u: goto label_18e100;
        case 0x18e104u: goto label_18e104;
        case 0x18e108u: goto label_18e108;
        case 0x18e10cu: goto label_18e10c;
        case 0x18e110u: goto label_18e110;
        case 0x18e114u: goto label_18e114;
        case 0x18e118u: goto label_18e118;
        case 0x18e11cu: goto label_18e11c;
        case 0x18e120u: goto label_18e120;
        case 0x18e124u: goto label_18e124;
        case 0x18e128u: goto label_18e128;
        case 0x18e12cu: goto label_18e12c;
        case 0x18e130u: goto label_18e130;
        case 0x18e134u: goto label_18e134;
        case 0x18e138u: goto label_18e138;
        case 0x18e13cu: goto label_18e13c;
        case 0x18e140u: goto label_18e140;
        case 0x18e144u: goto label_18e144;
        case 0x18e148u: goto label_18e148;
        case 0x18e14cu: goto label_18e14c;
        case 0x18e150u: goto label_18e150;
        case 0x18e154u: goto label_18e154;
        case 0x18e158u: goto label_18e158;
        case 0x18e15cu: goto label_18e15c;
        case 0x18e160u: goto label_18e160;
        case 0x18e164u: goto label_18e164;
        case 0x18e168u: goto label_18e168;
        case 0x18e16cu: goto label_18e16c;
        case 0x18e170u: goto label_18e170;
        case 0x18e174u: goto label_18e174;
        case 0x18e178u: goto label_18e178;
        case 0x18e17cu: goto label_18e17c;
        case 0x18e180u: goto label_18e180;
        case 0x18e184u: goto label_18e184;
        case 0x18e188u: goto label_18e188;
        case 0x18e18cu: goto label_18e18c;
        case 0x18e190u: goto label_18e190;
        case 0x18e194u: goto label_18e194;
        case 0x18e198u: goto label_18e198;
        case 0x18e19cu: goto label_18e19c;
        case 0x18e1a0u: goto label_18e1a0;
        case 0x18e1a4u: goto label_18e1a4;
        case 0x18e1a8u: goto label_18e1a8;
        case 0x18e1acu: goto label_18e1ac;
        case 0x18e1b0u: goto label_18e1b0;
        case 0x18e1b4u: goto label_18e1b4;
        case 0x18e1b8u: goto label_18e1b8;
        case 0x18e1bcu: goto label_18e1bc;
        case 0x18e1c0u: goto label_18e1c0;
        case 0x18e1c4u: goto label_18e1c4;
        case 0x18e1c8u: goto label_18e1c8;
        case 0x18e1ccu: goto label_18e1cc;
        case 0x18e1d0u: goto label_18e1d0;
        case 0x18e1d4u: goto label_18e1d4;
        case 0x18e1d8u: goto label_18e1d8;
        case 0x18e1dcu: goto label_18e1dc;
        case 0x18e1e0u: goto label_18e1e0;
        case 0x18e1e4u: goto label_18e1e4;
        case 0x18e1e8u: goto label_18e1e8;
        case 0x18e1ecu: goto label_18e1ec;
        case 0x18e1f0u: goto label_18e1f0;
        case 0x18e1f4u: goto label_18e1f4;
        case 0x18e1f8u: goto label_18e1f8;
        case 0x18e1fcu: goto label_18e1fc;
        case 0x18e200u: goto label_18e200;
        case 0x18e204u: goto label_18e204;
        case 0x18e208u: goto label_18e208;
        case 0x18e20cu: goto label_18e20c;
        case 0x18e210u: goto label_18e210;
        case 0x18e214u: goto label_18e214;
        case 0x18e218u: goto label_18e218;
        case 0x18e21cu: goto label_18e21c;
        case 0x18e220u: goto label_18e220;
        case 0x18e224u: goto label_18e224;
        case 0x18e228u: goto label_18e228;
        case 0x18e22cu: goto label_18e22c;
        case 0x18e230u: goto label_18e230;
        case 0x18e234u: goto label_18e234;
        case 0x18e238u: goto label_18e238;
        case 0x18e23cu: goto label_18e23c;
        case 0x18e240u: goto label_18e240;
        case 0x18e244u: goto label_18e244;
        case 0x18e248u: goto label_18e248;
        case 0x18e24cu: goto label_18e24c;
        case 0x18e250u: goto label_18e250;
        case 0x18e254u: goto label_18e254;
        case 0x18e258u: goto label_18e258;
        case 0x18e25cu: goto label_18e25c;
        case 0x18e260u: goto label_18e260;
        case 0x18e264u: goto label_18e264;
        case 0x18e268u: goto label_18e268;
        case 0x18e26cu: goto label_18e26c;
        case 0x18e270u: goto label_18e270;
        case 0x18e274u: goto label_18e274;
        case 0x18e278u: goto label_18e278;
        case 0x18e27cu: goto label_18e27c;
        case 0x18e280u: goto label_18e280;
        case 0x18e284u: goto label_18e284;
        case 0x18e288u: goto label_18e288;
        case 0x18e28cu: goto label_18e28c;
        case 0x18e290u: goto label_18e290;
        case 0x18e294u: goto label_18e294;
        case 0x18e298u: goto label_18e298;
        case 0x18e29cu: goto label_18e29c;
        case 0x18e2a0u: goto label_18e2a0;
        case 0x18e2a4u: goto label_18e2a4;
        case 0x18e2a8u: goto label_18e2a8;
        case 0x18e2acu: goto label_18e2ac;
        case 0x18e2b0u: goto label_18e2b0;
        case 0x18e2b4u: goto label_18e2b4;
        case 0x18e2b8u: goto label_18e2b8;
        case 0x18e2bcu: goto label_18e2bc;
        case 0x18e2c0u: goto label_18e2c0;
        case 0x18e2c4u: goto label_18e2c4;
        case 0x18e2c8u: goto label_18e2c8;
        case 0x18e2ccu: goto label_18e2cc;
        case 0x18e2d0u: goto label_18e2d0;
        case 0x18e2d4u: goto label_18e2d4;
        case 0x18e2d8u: goto label_18e2d8;
        case 0x18e2dcu: goto label_18e2dc;
        case 0x18e2e0u: goto label_18e2e0;
        case 0x18e2e4u: goto label_18e2e4;
        case 0x18e2e8u: goto label_18e2e8;
        case 0x18e2ecu: goto label_18e2ec;
        case 0x18e2f0u: goto label_18e2f0;
        case 0x18e2f4u: goto label_18e2f4;
        case 0x18e2f8u: goto label_18e2f8;
        case 0x18e2fcu: goto label_18e2fc;
        case 0x18e300u: goto label_18e300;
        case 0x18e304u: goto label_18e304;
        case 0x18e308u: goto label_18e308;
        case 0x18e30cu: goto label_18e30c;
        case 0x18e310u: goto label_18e310;
        case 0x18e314u: goto label_18e314;
        case 0x18e318u: goto label_18e318;
        case 0x18e31cu: goto label_18e31c;
        case 0x18e320u: goto label_18e320;
        case 0x18e324u: goto label_18e324;
        case 0x18e328u: goto label_18e328;
        case 0x18e32cu: goto label_18e32c;
        case 0x18e330u: goto label_18e330;
        case 0x18e334u: goto label_18e334;
        case 0x18e338u: goto label_18e338;
        case 0x18e33cu: goto label_18e33c;
        case 0x18e340u: goto label_18e340;
        case 0x18e344u: goto label_18e344;
        case 0x18e348u: goto label_18e348;
        case 0x18e34cu: goto label_18e34c;
        case 0x18e350u: goto label_18e350;
        case 0x18e354u: goto label_18e354;
        case 0x18e358u: goto label_18e358;
        case 0x18e35cu: goto label_18e35c;
        case 0x18e360u: goto label_18e360;
        case 0x18e364u: goto label_18e364;
        case 0x18e368u: goto label_18e368;
        case 0x18e36cu: goto label_18e36c;
        case 0x18e370u: goto label_18e370;
        case 0x18e374u: goto label_18e374;
        case 0x18e378u: goto label_18e378;
        case 0x18e37cu: goto label_18e37c;
        case 0x18e380u: goto label_18e380;
        case 0x18e384u: goto label_18e384;
        case 0x18e388u: goto label_18e388;
        case 0x18e38cu: goto label_18e38c;
        case 0x18e390u: goto label_18e390;
        case 0x18e394u: goto label_18e394;
        case 0x18e398u: goto label_18e398;
        case 0x18e39cu: goto label_18e39c;
        case 0x18e3a0u: goto label_18e3a0;
        case 0x18e3a4u: goto label_18e3a4;
        case 0x18e3a8u: goto label_18e3a8;
        case 0x18e3acu: goto label_18e3ac;
        case 0x18e3b0u: goto label_18e3b0;
        case 0x18e3b4u: goto label_18e3b4;
        case 0x18e3b8u: goto label_18e3b8;
        case 0x18e3bcu: goto label_18e3bc;
        case 0x18e3c0u: goto label_18e3c0;
        case 0x18e3c4u: goto label_18e3c4;
        case 0x18e3c8u: goto label_18e3c8;
        case 0x18e3ccu: goto label_18e3cc;
        case 0x18e3d0u: goto label_18e3d0;
        case 0x18e3d4u: goto label_18e3d4;
        case 0x18e3d8u: goto label_18e3d8;
        case 0x18e3dcu: goto label_18e3dc;
        case 0x18e3e0u: goto label_18e3e0;
        case 0x18e3e4u: goto label_18e3e4;
        case 0x18e3e8u: goto label_18e3e8;
        case 0x18e3ecu: goto label_18e3ec;
        case 0x18e3f0u: goto label_18e3f0;
        case 0x18e3f4u: goto label_18e3f4;
        case 0x18e3f8u: goto label_18e3f8;
        case 0x18e3fcu: goto label_18e3fc;
        case 0x18e400u: goto label_18e400;
        case 0x18e404u: goto label_18e404;
        case 0x18e408u: goto label_18e408;
        case 0x18e40cu: goto label_18e40c;
        case 0x18e410u: goto label_18e410;
        case 0x18e414u: goto label_18e414;
        case 0x18e418u: goto label_18e418;
        case 0x18e41cu: goto label_18e41c;
        case 0x18e420u: goto label_18e420;
        case 0x18e424u: goto label_18e424;
        case 0x18e428u: goto label_18e428;
        case 0x18e42cu: goto label_18e42c;
        case 0x18e430u: goto label_18e430;
        case 0x18e434u: goto label_18e434;
        case 0x18e438u: goto label_18e438;
        case 0x18e43cu: goto label_18e43c;
        case 0x18e440u: goto label_18e440;
        case 0x18e444u: goto label_18e444;
        case 0x18e448u: goto label_18e448;
        case 0x18e44cu: goto label_18e44c;
        case 0x18e450u: goto label_18e450;
        case 0x18e454u: goto label_18e454;
        case 0x18e458u: goto label_18e458;
        case 0x18e45cu: goto label_18e45c;
        case 0x18e460u: goto label_18e460;
        case 0x18e464u: goto label_18e464;
        case 0x18e468u: goto label_18e468;
        case 0x18e46cu: goto label_18e46c;
        case 0x18e470u: goto label_18e470;
        case 0x18e474u: goto label_18e474;
        case 0x18e478u: goto label_18e478;
        case 0x18e47cu: goto label_18e47c;
        case 0x18e480u: goto label_18e480;
        case 0x18e484u: goto label_18e484;
        case 0x18e488u: goto label_18e488;
        case 0x18e48cu: goto label_18e48c;
        case 0x18e490u: goto label_18e490;
        case 0x18e494u: goto label_18e494;
        case 0x18e498u: goto label_18e498;
        case 0x18e49cu: goto label_18e49c;
        case 0x18e4a0u: goto label_18e4a0;
        case 0x18e4a4u: goto label_18e4a4;
        case 0x18e4a8u: goto label_18e4a8;
        case 0x18e4acu: goto label_18e4ac;
        case 0x18e4b0u: goto label_18e4b0;
        case 0x18e4b4u: goto label_18e4b4;
        case 0x18e4b8u: goto label_18e4b8;
        case 0x18e4bcu: goto label_18e4bc;
        case 0x18e4c0u: goto label_18e4c0;
        case 0x18e4c4u: goto label_18e4c4;
        case 0x18e4c8u: goto label_18e4c8;
        case 0x18e4ccu: goto label_18e4cc;
        case 0x18e4d0u: goto label_18e4d0;
        case 0x18e4d4u: goto label_18e4d4;
        case 0x18e4d8u: goto label_18e4d8;
        case 0x18e4dcu: goto label_18e4dc;
        case 0x18e4e0u: goto label_18e4e0;
        case 0x18e4e4u: goto label_18e4e4;
        case 0x18e4e8u: goto label_18e4e8;
        case 0x18e4ecu: goto label_18e4ec;
        case 0x18e4f0u: goto label_18e4f0;
        case 0x18e4f4u: goto label_18e4f4;
        case 0x18e4f8u: goto label_18e4f8;
        case 0x18e4fcu: goto label_18e4fc;
        case 0x18e500u: goto label_18e500;
        case 0x18e504u: goto label_18e504;
        case 0x18e508u: goto label_18e508;
        case 0x18e50cu: goto label_18e50c;
        case 0x18e510u: goto label_18e510;
        case 0x18e514u: goto label_18e514;
        case 0x18e518u: goto label_18e518;
        case 0x18e51cu: goto label_18e51c;
        case 0x18e520u: goto label_18e520;
        case 0x18e524u: goto label_18e524;
        case 0x18e528u: goto label_18e528;
        case 0x18e52cu: goto label_18e52c;
        case 0x18e530u: goto label_18e530;
        case 0x18e534u: goto label_18e534;
        case 0x18e538u: goto label_18e538;
        case 0x18e53cu: goto label_18e53c;
        case 0x18e540u: goto label_18e540;
        case 0x18e544u: goto label_18e544;
        case 0x18e548u: goto label_18e548;
        case 0x18e54cu: goto label_18e54c;
        case 0x18e550u: goto label_18e550;
        case 0x18e554u: goto label_18e554;
        default: break;
    }

    ctx->pc = 0x18df60u;

label_18df60:
    // 0x18df60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18df64:
    // 0x18df64: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x18df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_18df68:
    // 0x18df68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_18df6c:
    // 0x18df6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18df70:
    // 0x18df70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18df74:
    // 0x18df74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18df74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18df78:
    // 0x18df78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18df78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18df7c:
    // 0x18df7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18df80:
    // 0x18df80: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18df80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_18df84:
    // 0x18df84: 0x2475a630  addiu       $s5, $v1, -0x59D0
    ctx->pc = 0x18df84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
label_18df88:
    // 0x18df88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18df88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18df8c:
    // 0x18df8c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x18df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_18df90:
    // 0x18df90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18df90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_18df94:
    // 0x18df94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18df94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_18df98:
    // 0x18df98: 0x14600165  bnez        $v1, . + 4 + (0x165 << 2)
label_18df9c:
    if (ctx->pc == 0x18DF9Cu) {
        ctx->pc = 0x18DFA0u;
        goto label_18dfa0;
    }
    ctx->pc = 0x18DF98u;
    {
        const bool branch_taken_0x18df98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18df98) {
            ctx->pc = 0x18E530u;
            goto label_18e530;
        }
    }
    ctx->pc = 0x18DFA0u;
label_18dfa0:
    // 0x18dfa0: 0x8eb40078  lw          $s4, 0x78($s5)
    ctx->pc = 0x18dfa0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_18dfa4:
    // 0x18dfa4: 0x10000024  b           . + 4 + (0x24 << 2)
label_18dfa8:
    if (ctx->pc == 0x18DFA8u) {
        ctx->pc = 0x18DFACu;
        goto label_18dfac;
    }
    ctx->pc = 0x18DFA4u;
    {
        const bool branch_taken_0x18dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dfa4) {
            ctx->pc = 0x18E038u;
            goto label_18e038;
        }
    }
    ctx->pc = 0x18DFACu;
label_18dfac:
    // 0x18dfac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_18dfb0:
    // 0x18dfb0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18dfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18dfb4:
    // 0x18dfb4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_18dfb8:
    if (ctx->pc == 0x18DFB8u) {
        ctx->pc = 0x18DFBCu;
        goto label_18dfbc;
    }
    ctx->pc = 0x18DFB4u;
    {
        const bool branch_taken_0x18dfb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dfb4) {
            ctx->pc = 0x18E008u;
            goto label_18e008;
        }
    }
    ctx->pc = 0x18DFBCu;
label_18dfbc:
    // 0x18dfbc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x18dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_18dfc0:
    // 0x18dfc0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_18dfc4:
    // 0x18dfc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18dfc8:
    if (ctx->pc == 0x18DFC8u) {
        ctx->pc = 0x18DFCCu;
        goto label_18dfcc;
    }
    ctx->pc = 0x18DFC4u;
    {
        const bool branch_taken_0x18dfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dfc4) {
            ctx->pc = 0x18DFE4u;
            goto label_18dfe4;
        }
    }
    ctx->pc = 0x18DFCCu;
label_18dfcc:
    // 0x18dfcc: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x18dfccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_18dfd0:
    // 0x18dfd0: 0xc063bec  jal         func_18EFB0
label_18dfd4:
    if (ctx->pc == 0x18DFD4u) {
        ctx->pc = 0x18DFD8u;
        goto label_18dfd8;
    }
    ctx->pc = 0x18DFD0u;
    SET_GPR_U32(ctx, 31, 0x18DFD8u);
    ctx->pc = 0x18EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EFB0u, 0x18DFD0u, 0x18DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFD8u;
label_18dfd8:
    // 0x18dfd8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x18dfd8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18dfdc:
    // 0x18dfdc: 0x10000016  b           . + 4 + (0x16 << 2)
label_18dfe0:
    if (ctx->pc == 0x18DFE0u) {
        ctx->pc = 0x18DFE4u;
        goto label_18dfe4;
    }
    ctx->pc = 0x18DFDCu;
    {
        const bool branch_taken_0x18dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dfdc) {
            ctx->pc = 0x18E038u;
            goto label_18e038;
        }
    }
    ctx->pc = 0x18DFE4u;
label_18dfe4:
    // 0x18dfe4: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x18dfe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_18dfe8:
    // 0x18dfe8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x18dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_18dfec:
    // 0x18dfec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18dff0:
    // 0x18dff0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18dff4:
    // 0x18dff4: 0x24426f30  addiu       $v0, $v0, 0x6F30
    ctx->pc = 0x18dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
label_18dff8:
    // 0x18dff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dffc:
    // 0x18dffc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e000:
    // 0x18e000: 0x40f809  jalr        $v0
label_18e004:
    if (ctx->pc == 0x18E004u) {
        ctx->pc = 0x18E008u;
        goto label_18e008;
    }
    ctx->pc = 0x18E000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E008u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E000u, 0x18E008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E008u;
label_18e008:
    // 0x18e008: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x18e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_18e00c:
    // 0x18e00c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18e010:
    // 0x18e010: 0xae8300d4  sw          $v1, 0xD4($s4)
    ctx->pc = 0x18e010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 3));
label_18e014:
    // 0x18e014: 0xc68100d8  lwc1        $f1, 0xD8($s4)
    ctx->pc = 0x18e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e018:
    // 0x18e018: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18e018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18e01c:
    // 0x18e01c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e01cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e020:
    // 0x18e020: 0x0  nop
    ctx->pc = 0x18e020u;
    // NOP
label_18e024:
    // 0x18e024: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18e028:
    // 0x18e028: 0xe68000d8  swc1        $f0, 0xD8($s4)
    ctx->pc = 0x18e028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
label_18e02c:
    // 0x18e02c: 0x8e9400e8  lw          $s4, 0xE8($s4)
    ctx->pc = 0x18e02cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_18e030:
    // 0x18e030: 0x0  nop
    ctx->pc = 0x18e030u;
    // NOP
label_18e034:
    // 0x18e034: 0x0  nop
    ctx->pc = 0x18e034u;
    // NOP
label_18e038:
    // 0x18e038: 0x1680ffdc  bnez        $s4, . + 4 + (-0x24 << 2)
label_18e03c:
    if (ctx->pc == 0x18E03Cu) {
        ctx->pc = 0x18E040u;
        goto label_18e040;
    }
    ctx->pc = 0x18E038u;
    {
        const bool branch_taken_0x18e038 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e038) {
            ctx->pc = 0x18DFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dfac;
        }
    }
    ctx->pc = 0x18E040u;
label_18e040:
    // 0x18e040: 0x8eb10038  lw          $s1, 0x38($s5)
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_18e044:
    // 0x18e044: 0x10000054  b           . + 4 + (0x54 << 2)
label_18e048:
    if (ctx->pc == 0x18E048u) {
        ctx->pc = 0x18E04Cu;
        goto label_18e04c;
    }
    ctx->pc = 0x18E044u;
    {
        const bool branch_taken_0x18e044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e044) {
            ctx->pc = 0x18E198u;
            goto label_18e198;
        }
    }
    ctx->pc = 0x18E04Cu;
label_18e04c:
    // 0x18e04c: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x18e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_18e050:
    // 0x18e050: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18e054:
    // 0x18e054: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
label_18e058:
    if (ctx->pc == 0x18E058u) {
        ctx->pc = 0x18E05Cu;
        goto label_18e05c;
    }
    ctx->pc = 0x18E054u;
    {
        const bool branch_taken_0x18e054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e054) {
            ctx->pc = 0x18E190u;
            goto label_18e190;
        }
    }
    ctx->pc = 0x18E05Cu;
label_18e05c:
    // 0x18e05c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x18e05cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
label_18e060:
    // 0x18e060: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18e060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_18e064:
    // 0x18e064: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x18e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_18e068:
    // 0x18e068: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18e06c:
    if (ctx->pc == 0x18E06Cu) {
        ctx->pc = 0x18E070u;
        goto label_18e070;
    }
    ctx->pc = 0x18E068u;
    {
        const bool branch_taken_0x18e068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e068) {
            ctx->pc = 0x18E098u;
            goto label_18e098;
        }
    }
    ctx->pc = 0x18E070u;
label_18e070:
    // 0x18e070: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x18e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_18e074:
    // 0x18e074: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e078:
    // 0x18e078: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18e07c:
    if (ctx->pc == 0x18E07Cu) {
        ctx->pc = 0x18E080u;
        goto label_18e080;
    }
    ctx->pc = 0x18E078u;
    {
        const bool branch_taken_0x18e078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e078) {
            ctx->pc = 0x18E098u;
            goto label_18e098;
        }
    }
    ctx->pc = 0x18E080u;
label_18e080:
    // 0x18e080: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e080u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e084:
    // 0x18e084: 0xc063ab8  jal         func_18EAE0
label_18e088:
    if (ctx->pc == 0x18E088u) {
        ctx->pc = 0x18E08Cu;
        goto label_18e08c;
    }
    ctx->pc = 0x18E084u;
    SET_GPR_U32(ctx, 31, 0x18E08Cu);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E084u, 0x18E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E08Cu;
label_18e08c:
    // 0x18e08c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e08cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e090:
    // 0x18e090: 0x10000041  b           . + 4 + (0x41 << 2)
label_18e094:
    if (ctx->pc == 0x18E094u) {
        ctx->pc = 0x18E098u;
        goto label_18e098;
    }
    ctx->pc = 0x18E090u;
    {
        const bool branch_taken_0x18e090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e090) {
            ctx->pc = 0x18E198u;
            goto label_18e198;
        }
    }
    ctx->pc = 0x18E098u;
label_18e098:
    // 0x18e098: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x18e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_18e09c:
    // 0x18e09c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_18e0a0:
    // 0x18e0a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18e0a4:
    if (ctx->pc == 0x18E0A4u) {
        ctx->pc = 0x18E0A8u;
        goto label_18e0a8;
    }
    ctx->pc = 0x18E0A0u;
    {
        const bool branch_taken_0x18e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0a0) {
            ctx->pc = 0x18E0C0u;
            goto label_18e0c0;
        }
    }
    ctx->pc = 0x18E0A8u;
label_18e0a8:
    // 0x18e0a8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e0a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e0ac:
    // 0x18e0ac: 0xc063ab8  jal         func_18EAE0
label_18e0b0:
    if (ctx->pc == 0x18E0B0u) {
        ctx->pc = 0x18E0B4u;
        goto label_18e0b4;
    }
    ctx->pc = 0x18E0ACu;
    SET_GPR_U32(ctx, 31, 0x18E0B4u);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E0ACu, 0x18E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E0B4u;
label_18e0b4:
    // 0x18e0b4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e0b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e0b8:
    // 0x18e0b8: 0x10000037  b           . + 4 + (0x37 << 2)
label_18e0bc:
    if (ctx->pc == 0x18E0BCu) {
        ctx->pc = 0x18E0C0u;
        goto label_18e0c0;
    }
    ctx->pc = 0x18E0B8u;
    {
        const bool branch_taken_0x18e0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0b8) {
            ctx->pc = 0x18E198u;
            goto label_18e198;
        }
    }
    ctx->pc = 0x18E0C0u;
label_18e0c0:
    // 0x18e0c0: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x18e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_18e0c4:
    // 0x18e0c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18e0c8:
    if (ctx->pc == 0x18E0C8u) {
        ctx->pc = 0x18E0CCu;
        goto label_18e0cc;
    }
    ctx->pc = 0x18E0C4u;
    {
        const bool branch_taken_0x18e0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0c4) {
            ctx->pc = 0x18E0F8u;
            goto label_18e0f8;
        }
    }
    ctx->pc = 0x18E0CCu;
label_18e0cc:
    // 0x18e0cc: 0x8e2301f8  lw          $v1, 0x1F8($s1)
    ctx->pc = 0x18e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
label_18e0d0:
    // 0x18e0d0: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x18e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_18e0d4:
    // 0x18e0d4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18e0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18e0d8:
    // 0x18e0d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18e0dc:
    if (ctx->pc == 0x18E0DCu) {
        ctx->pc = 0x18E0E0u;
        goto label_18e0e0;
    }
    ctx->pc = 0x18E0D8u;
    {
        const bool branch_taken_0x18e0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e0d8) {
            ctx->pc = 0x18E0F8u;
            goto label_18e0f8;
        }
    }
    ctx->pc = 0x18E0E0u;
label_18e0e0:
    // 0x18e0e0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e0e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e0e4:
    // 0x18e0e4: 0xc063ab8  jal         func_18EAE0
label_18e0e8:
    if (ctx->pc == 0x18E0E8u) {
        ctx->pc = 0x18E0ECu;
        goto label_18e0ec;
    }
    ctx->pc = 0x18E0E4u;
    SET_GPR_U32(ctx, 31, 0x18E0ECu);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E0E4u, 0x18E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E0ECu;
label_18e0ec:
    // 0x18e0ec: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e0ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e0f0:
    // 0x18e0f0: 0x10000029  b           . + 4 + (0x29 << 2)
label_18e0f4:
    if (ctx->pc == 0x18E0F4u) {
        ctx->pc = 0x18E0F8u;
        goto label_18e0f8;
    }
    ctx->pc = 0x18E0F0u;
    {
        const bool branch_taken_0x18e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0f0) {
            ctx->pc = 0x18E198u;
            goto label_18e198;
        }
    }
    ctx->pc = 0x18E0F8u;
label_18e0f8:
    // 0x18e0f8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e0f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e0fc:
    // 0x18e0fc: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x18e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_18e100:
    // 0x18e100: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e104:
    // 0x18e104: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e108:
    // 0x18e108: 0x24426fc0  addiu       $v0, $v0, 0x6FC0
    ctx->pc = 0x18e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28608));
label_18e10c:
    // 0x18e10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e110:
    // 0x18e110: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e114:
    // 0x18e114: 0x40f809  jalr        $v0
label_18e118:
    if (ctx->pc == 0x18E118u) {
        ctx->pc = 0x18E11Cu;
        goto label_18e11c;
    }
    ctx->pc = 0x18E114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E11Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E114u, 0x18E11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E11Cu;
label_18e11c:
    // 0x18e11c: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x18e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_18e120:
    // 0x18e120: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18e120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18e124:
    // 0x18e124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_18e128:
    if (ctx->pc == 0x18E128u) {
        ctx->pc = 0x18E12Cu;
        goto label_18e12c;
    }
    ctx->pc = 0x18E124u;
    {
        const bool branch_taken_0x18e124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e124) {
            ctx->pc = 0x18E138u;
            goto label_18e138;
        }
    }
    ctx->pc = 0x18E12Cu;
label_18e12c:
    // 0x18e12c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e12cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e130:
    // 0x18e130: 0xc0c977c  jal         func_325DF0
label_18e134:
    if (ctx->pc == 0x18E134u) {
        ctx->pc = 0x18E138u;
        goto label_18e138;
    }
    ctx->pc = 0x18E130u;
    SET_GPR_U32(ctx, 31, 0x18E138u);
    ctx->pc = 0x325DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DF0u, 0x18E130u, 0x18E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E138u;
label_18e138:
    // 0x18e138: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x18e138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_18e13c:
    // 0x18e13c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x18e13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_18e140:
    // 0x18e140: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_18e144:
    if (ctx->pc == 0x18E144u) {
        ctx->pc = 0x18E148u;
        goto label_18e148;
    }
    ctx->pc = 0x18E140u;
    {
        const bool branch_taken_0x18e140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e140) {
            ctx->pc = 0x18E180u;
            goto label_18e180;
        }
    }
    ctx->pc = 0x18E148u;
label_18e148:
    // 0x18e148: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e148u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e14c:
    // 0x18e14c: 0x8e2501fc  lw          $a1, 0x1FC($s1)
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
label_18e150:
    // 0x18e150: 0xc0c9838  jal         func_3260E0
label_18e154:
    if (ctx->pc == 0x18E154u) {
        ctx->pc = 0x18E158u;
        goto label_18e158;
    }
    ctx->pc = 0x18E150u;
    SET_GPR_U32(ctx, 31, 0x18E158u);
    ctx->pc = 0x3260E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260E0u, 0x18E150u, 0x18E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E158u;
label_18e158:
    // 0x18e158: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x18e158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_18e15c:
    // 0x18e15c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x18e15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_18e160:
    // 0x18e160: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18e164:
    if (ctx->pc == 0x18E164u) {
        ctx->pc = 0x18E168u;
        goto label_18e168;
    }
    ctx->pc = 0x18E160u;
    {
        const bool branch_taken_0x18e160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e160) {
            ctx->pc = 0x18E180u;
            goto label_18e180;
        }
    }
    ctx->pc = 0x18E168u;
label_18e168:
    // 0x18e168: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e168u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e16c:
    // 0x18e16c: 0xc063ab8  jal         func_18EAE0
label_18e170:
    if (ctx->pc == 0x18E170u) {
        ctx->pc = 0x18E174u;
        goto label_18e174;
    }
    ctx->pc = 0x18E16Cu;
    SET_GPR_U32(ctx, 31, 0x18E174u);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E16Cu, 0x18E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E174u;
label_18e174:
    // 0x18e174: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e174u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e178:
    // 0x18e178: 0x10000007  b           . + 4 + (0x7 << 2)
label_18e17c:
    if (ctx->pc == 0x18E17Cu) {
        ctx->pc = 0x18E180u;
        goto label_18e180;
    }
    ctx->pc = 0x18E178u;
    {
        const bool branch_taken_0x18e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e178) {
            ctx->pc = 0x18E198u;
            goto label_18e198;
        }
    }
    ctx->pc = 0x18E180u;
label_18e180:
    // 0x18e180: 0x8e2301f8  lw          $v1, 0x1F8($s1)
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
label_18e184:
    // 0x18e184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18e188:
    // 0x18e188: 0xae2301f8  sw          $v1, 0x1F8($s1)
    ctx->pc = 0x18e188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 3));
label_18e18c:
    // 0x18e18c: 0x0  nop
    ctx->pc = 0x18e18cu;
    // NOP
label_18e190:
    // 0x18e190: 0x8e310218  lw          $s1, 0x218($s1)
    ctx->pc = 0x18e190u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_18e194:
    // 0x18e194: 0x0  nop
    ctx->pc = 0x18e194u;
    // NOP
label_18e198:
    // 0x18e198: 0x1620ffac  bnez        $s1, . + 4 + (-0x54 << 2)
label_18e19c:
    if (ctx->pc == 0x18E19Cu) {
        ctx->pc = 0x18E1A0u;
        goto label_18e1a0;
    }
    ctx->pc = 0x18E198u;
    {
        const bool branch_taken_0x18e198 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e198) {
            ctx->pc = 0x18E04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e04c;
        }
    }
    ctx->pc = 0x18E1A0u;
label_18e1a0:
    // 0x18e1a0: 0x8eb20048  lw          $s2, 0x48($s5)
    ctx->pc = 0x18e1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_18e1a4:
    // 0x18e1a4: 0x10000040  b           . + 4 + (0x40 << 2)
label_18e1a8:
    if (ctx->pc == 0x18E1A8u) {
        ctx->pc = 0x18E1ACu;
        goto label_18e1ac;
    }
    ctx->pc = 0x18E1A4u;
    {
        const bool branch_taken_0x18e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1a4) {
            ctx->pc = 0x18E2A8u;
            goto label_18e2a8;
        }
    }
    ctx->pc = 0x18E1ACu;
label_18e1ac:
    // 0x18e1ac: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_18e1b0:
    // 0x18e1b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18e1b4:
    // 0x18e1b4: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_18e1b8:
    if (ctx->pc == 0x18E1B8u) {
        ctx->pc = 0x18E1BCu;
        goto label_18e1bc;
    }
    ctx->pc = 0x18E1B4u;
    {
        const bool branch_taken_0x18e1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1b4) {
            ctx->pc = 0x18E2A0u;
            goto label_18e2a0;
        }
    }
    ctx->pc = 0x18E1BCu;
label_18e1bc:
    // 0x18e1bc: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x18e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_18e1c0:
    // 0x18e1c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_18e1c4:
    // 0x18e1c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18e1c8:
    if (ctx->pc == 0x18E1C8u) {
        ctx->pc = 0x18E1CCu;
        goto label_18e1cc;
    }
    ctx->pc = 0x18E1C4u;
    {
        const bool branch_taken_0x18e1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1c4) {
            ctx->pc = 0x18E1E4u;
            goto label_18e1e4;
        }
    }
    ctx->pc = 0x18E1CCu;
label_18e1cc:
    // 0x18e1cc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e1ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e1d0:
    // 0x18e1d0: 0xc063b08  jal         func_18EC20
label_18e1d4:
    if (ctx->pc == 0x18E1D4u) {
        ctx->pc = 0x18E1D8u;
        goto label_18e1d8;
    }
    ctx->pc = 0x18E1D0u;
    SET_GPR_U32(ctx, 31, 0x18E1D8u);
    ctx->pc = 0x18EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC20u, 0x18E1D0u, 0x18E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1D8u;
label_18e1d8:
    // 0x18e1d8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18e1d8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e1dc:
    // 0x18e1dc: 0x10000032  b           . + 4 + (0x32 << 2)
label_18e1e0:
    if (ctx->pc == 0x18E1E0u) {
        ctx->pc = 0x18E1E4u;
        goto label_18e1e4;
    }
    ctx->pc = 0x18E1DCu;
    {
        const bool branch_taken_0x18e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1dc) {
            ctx->pc = 0x18E2A8u;
            goto label_18e2a8;
        }
    }
    ctx->pc = 0x18E1E4u;
label_18e1e4:
    // 0x18e1e4: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x18e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_18e1e8:
    // 0x18e1e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18e1ec:
    if (ctx->pc == 0x18E1ECu) {
        ctx->pc = 0x18E1F0u;
        goto label_18e1f0;
    }
    ctx->pc = 0x18E1E8u;
    {
        const bool branch_taken_0x18e1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1e8) {
            ctx->pc = 0x18E21Cu;
            goto label_18e21c;
        }
    }
    ctx->pc = 0x18E1F0u;
label_18e1f0:
    // 0x18e1f0: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x18e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_18e1f4:
    // 0x18e1f4: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x18e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_18e1f8:
    // 0x18e1f8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18e1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18e1fc:
    // 0x18e1fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18e200:
    if (ctx->pc == 0x18E200u) {
        ctx->pc = 0x18E204u;
        goto label_18e204;
    }
    ctx->pc = 0x18E1FCu;
    {
        const bool branch_taken_0x18e1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e1fc) {
            ctx->pc = 0x18E21Cu;
            goto label_18e21c;
        }
    }
    ctx->pc = 0x18E204u;
label_18e204:
    // 0x18e204: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e208:
    // 0x18e208: 0xc063b08  jal         func_18EC20
label_18e20c:
    if (ctx->pc == 0x18E20Cu) {
        ctx->pc = 0x18E210u;
        goto label_18e210;
    }
    ctx->pc = 0x18E208u;
    SET_GPR_U32(ctx, 31, 0x18E210u);
    ctx->pc = 0x18EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC20u, 0x18E208u, 0x18E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E210u;
label_18e210:
    // 0x18e210: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18e210u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e214:
    // 0x18e214: 0x10000024  b           . + 4 + (0x24 << 2)
label_18e218:
    if (ctx->pc == 0x18E218u) {
        ctx->pc = 0x18E21Cu;
        goto label_18e21c;
    }
    ctx->pc = 0x18E214u;
    {
        const bool branch_taken_0x18e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e214) {
            ctx->pc = 0x18E2A8u;
            goto label_18e2a8;
        }
    }
    ctx->pc = 0x18E21Cu;
label_18e21c:
    // 0x18e21c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e220:
    // 0x18e220: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x18e220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_18e224:
    // 0x18e224: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e228:
    // 0x18e228: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e22c:
    // 0x18e22c: 0x24427280  addiu       $v0, $v0, 0x7280
    ctx->pc = 0x18e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29312));
label_18e230:
    // 0x18e230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e234:
    // 0x18e234: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e238:
    // 0x18e238: 0x40f809  jalr        $v0
label_18e23c:
    if (ctx->pc == 0x18E23Cu) {
        ctx->pc = 0x18E240u;
        goto label_18e240;
    }
    ctx->pc = 0x18E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E240u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E238u, 0x18E240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E240u;
label_18e240:
    // 0x18e240: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_18e244:
    // 0x18e244: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18e244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18e248:
    // 0x18e248: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x18e248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_18e24c:
    // 0x18e24c: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_18e250:
    // 0x18e250: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x18e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_18e254:
    // 0x18e254: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_18e258:
    if (ctx->pc == 0x18E258u) {
        ctx->pc = 0x18E25Cu;
        goto label_18e25c;
    }
    ctx->pc = 0x18E254u;
    {
        const bool branch_taken_0x18e254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e254) {
            ctx->pc = 0x18E294u;
            goto label_18e294;
        }
    }
    ctx->pc = 0x18E25Cu;
label_18e25c:
    // 0x18e25c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e25cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e260:
    // 0x18e260: 0x8e4501fc  lw          $a1, 0x1FC($s2)
    ctx->pc = 0x18e260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_18e264:
    // 0x18e264: 0xc0c9838  jal         func_3260E0
label_18e268:
    if (ctx->pc == 0x18E268u) {
        ctx->pc = 0x18E26Cu;
        goto label_18e26c;
    }
    ctx->pc = 0x18E264u;
    SET_GPR_U32(ctx, 31, 0x18E26Cu);
    ctx->pc = 0x3260E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260E0u, 0x18E264u, 0x18E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E26Cu;
label_18e26c:
    // 0x18e26c: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_18e270:
    // 0x18e270: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x18e270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_18e274:
    // 0x18e274: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18e278:
    if (ctx->pc == 0x18E278u) {
        ctx->pc = 0x18E27Cu;
        goto label_18e27c;
    }
    ctx->pc = 0x18E274u;
    {
        const bool branch_taken_0x18e274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e274) {
            ctx->pc = 0x18E294u;
            goto label_18e294;
        }
    }
    ctx->pc = 0x18E27Cu;
label_18e27c:
    // 0x18e27c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e27cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_18e280:
    // 0x18e280: 0xc063b08  jal         func_18EC20
label_18e284:
    if (ctx->pc == 0x18E284u) {
        ctx->pc = 0x18E288u;
        goto label_18e288;
    }
    ctx->pc = 0x18E280u;
    SET_GPR_U32(ctx, 31, 0x18E288u);
    ctx->pc = 0x18EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC20u, 0x18E280u, 0x18E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E288u;
label_18e288:
    // 0x18e288: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18e288u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e28c:
    // 0x18e28c: 0x10000006  b           . + 4 + (0x6 << 2)
label_18e290:
    if (ctx->pc == 0x18E290u) {
        ctx->pc = 0x18E294u;
        goto label_18e294;
    }
    ctx->pc = 0x18E28Cu;
    {
        const bool branch_taken_0x18e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e28c) {
            ctx->pc = 0x18E2A8u;
            goto label_18e2a8;
        }
    }
    ctx->pc = 0x18E294u;
label_18e294:
    // 0x18e294: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x18e294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_18e298:
    // 0x18e298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18e29c:
    // 0x18e29c: 0xae4301f8  sw          $v1, 0x1F8($s2)
    ctx->pc = 0x18e29cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 3));
label_18e2a0:
    // 0x18e2a0: 0x8e520218  lw          $s2, 0x218($s2)
    ctx->pc = 0x18e2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_18e2a4:
    // 0x18e2a4: 0x0  nop
    ctx->pc = 0x18e2a4u;
    // NOP
label_18e2a8:
    // 0x18e2a8: 0x1640ffc0  bnez        $s2, . + 4 + (-0x40 << 2)
label_18e2ac:
    if (ctx->pc == 0x18E2ACu) {
        ctx->pc = 0x18E2B0u;
        goto label_18e2b0;
    }
    ctx->pc = 0x18E2A8u;
    {
        const bool branch_taken_0x18e2a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e2a8) {
            ctx->pc = 0x18E1ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1ac;
        }
    }
    ctx->pc = 0x18E2B0u;
label_18e2b0:
    // 0x18e2b0: 0x8eb00058  lw          $s0, 0x58($s5)
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_18e2b4:
    // 0x18e2b4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_18e2b8:
    if (ctx->pc == 0x18E2B8u) {
        ctx->pc = 0x18E2BCu;
        goto label_18e2bc;
    }
    ctx->pc = 0x18E2B4u;
    {
        const bool branch_taken_0x18e2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2b4) {
            ctx->pc = 0x18E420u;
            goto label_18e420;
        }
    }
    ctx->pc = 0x18E2BCu;
label_18e2bc:
    // 0x18e2bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e2c0:
    // 0x18e2c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18e2c4:
    // 0x18e2c4: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_18e2c8:
    if (ctx->pc == 0x18E2C8u) {
        ctx->pc = 0x18E2CCu;
        goto label_18e2cc;
    }
    ctx->pc = 0x18E2C4u;
    {
        const bool branch_taken_0x18e2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2c4) {
            ctx->pc = 0x18E418u;
            goto label_18e418;
        }
    }
    ctx->pc = 0x18E2CCu;
label_18e2cc:
    // 0x18e2cc: 0x960201a8  lhu         $v0, 0x1A8($s0)
    ctx->pc = 0x18e2ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 424)));
label_18e2d0:
    // 0x18e2d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18e2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_18e2d4:
    // 0x18e2d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_18e2d8:
    // 0x18e2d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18e2dc:
    if (ctx->pc == 0x18E2DCu) {
        ctx->pc = 0x18E2E0u;
        goto label_18e2e0;
    }
    ctx->pc = 0x18E2D8u;
    {
        const bool branch_taken_0x18e2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2d8) {
            ctx->pc = 0x18E308u;
            goto label_18e308;
        }
    }
    ctx->pc = 0x18E2E0u;
label_18e2e0:
    // 0x18e2e0: 0x8e02019c  lw          $v0, 0x19C($s0)
    ctx->pc = 0x18e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
label_18e2e4:
    // 0x18e2e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e2e8:
    // 0x18e2e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18e2ec:
    if (ctx->pc == 0x18E2ECu) {
        ctx->pc = 0x18E2F0u;
        goto label_18e2f0;
    }
    ctx->pc = 0x18E2E8u;
    {
        const bool branch_taken_0x18e2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e2e8) {
            ctx->pc = 0x18E308u;
            goto label_18e308;
        }
    }
    ctx->pc = 0x18E2F0u;
label_18e2f0:
    // 0x18e2f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e2f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e2f4:
    // 0x18e2f4: 0xc063b4c  jal         func_18ED30
label_18e2f8:
    if (ctx->pc == 0x18E2F8u) {
        ctx->pc = 0x18E2FCu;
        goto label_18e2fc;
    }
    ctx->pc = 0x18E2F4u;
    SET_GPR_U32(ctx, 31, 0x18E2FCu);
    ctx->pc = 0x18ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED30u, 0x18E2F4u, 0x18E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2FCu;
label_18e2fc:
    // 0x18e2fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e2fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e300:
    // 0x18e300: 0x10000047  b           . + 4 + (0x47 << 2)
label_18e304:
    if (ctx->pc == 0x18E304u) {
        ctx->pc = 0x18E308u;
        goto label_18e308;
    }
    ctx->pc = 0x18E300u;
    {
        const bool branch_taken_0x18e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e300) {
            ctx->pc = 0x18E420u;
            goto label_18e420;
        }
    }
    ctx->pc = 0x18E308u;
label_18e308:
    // 0x18e308: 0x8e030294  lw          $v1, 0x294($s0)
    ctx->pc = 0x18e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_18e30c:
    // 0x18e30c: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x18e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_18e310:
    // 0x18e310: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18e310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18e314:
    // 0x18e314: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18e318:
    if (ctx->pc == 0x18E318u) {
        ctx->pc = 0x18E31Cu;
        goto label_18e31c;
    }
    ctx->pc = 0x18E314u;
    {
        const bool branch_taken_0x18e314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e314) {
            ctx->pc = 0x18E334u;
            goto label_18e334;
        }
    }
    ctx->pc = 0x18E31Cu;
label_18e31c:
    // 0x18e31c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e31cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e320:
    // 0x18e320: 0xc063b4c  jal         func_18ED30
label_18e324:
    if (ctx->pc == 0x18E324u) {
        ctx->pc = 0x18E328u;
        goto label_18e328;
    }
    ctx->pc = 0x18E320u;
    SET_GPR_U32(ctx, 31, 0x18E328u);
    ctx->pc = 0x18ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED30u, 0x18E320u, 0x18E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E328u;
label_18e328:
    // 0x18e328: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e328u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e32c:
    // 0x18e32c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_18e330:
    if (ctx->pc == 0x18E330u) {
        ctx->pc = 0x18E334u;
        goto label_18e334;
    }
    ctx->pc = 0x18E32Cu;
    {
        const bool branch_taken_0x18e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e32c) {
            ctx->pc = 0x18E420u;
            goto label_18e420;
        }
    }
    ctx->pc = 0x18E334u;
label_18e334:
    // 0x18e334: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x18e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_18e338:
    // 0x18e338: 0x92020240  lbu         $v0, 0x240($s0)
    ctx->pc = 0x18e338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 576)));
label_18e33c:
    // 0x18e33c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e340:
    // 0x18e340: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x18e340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18e344:
    // 0x18e344: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_18e348:
    if (ctx->pc == 0x18E348u) {
        ctx->pc = 0x18E34Cu;
        goto label_18e34c;
    }
    ctx->pc = 0x18E344u;
    {
        const bool branch_taken_0x18e344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e344) {
            ctx->pc = 0x18E364u;
            goto label_18e364;
        }
    }
    ctx->pc = 0x18E34Cu;
label_18e34c:
    // 0x18e34c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e34cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e350:
    // 0x18e350: 0xc063b4c  jal         func_18ED30
label_18e354:
    if (ctx->pc == 0x18E354u) {
        ctx->pc = 0x18E358u;
        goto label_18e358;
    }
    ctx->pc = 0x18E350u;
    SET_GPR_U32(ctx, 31, 0x18E358u);
    ctx->pc = 0x18ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED30u, 0x18E350u, 0x18E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E358u;
label_18e358:
    // 0x18e358: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e358u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e35c:
    // 0x18e35c: 0x10000030  b           . + 4 + (0x30 << 2)
label_18e360:
    if (ctx->pc == 0x18E360u) {
        ctx->pc = 0x18E364u;
        goto label_18e364;
    }
    ctx->pc = 0x18E35Cu;
    {
        const bool branch_taken_0x18e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e35c) {
            ctx->pc = 0x18E420u;
            goto label_18e420;
        }
    }
    ctx->pc = 0x18E364u;
label_18e364:
    // 0x18e364: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x18e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_18e368:
    // 0x18e368: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x18e368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_18e36c:
    // 0x18e36c: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x18e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_18e370:
    // 0x18e370: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x18e370u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18e374:
    // 0x18e374: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_18e378:
    if (ctx->pc == 0x18E378u) {
        ctx->pc = 0x18E37Cu;
        goto label_18e37c;
    }
    ctx->pc = 0x18E374u;
    {
        const bool branch_taken_0x18e374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e374) {
            ctx->pc = 0x18E390u;
            goto label_18e390;
        }
    }
    ctx->pc = 0x18E37Cu;
label_18e37c:
    // 0x18e37c: 0x92020240  lbu         $v0, 0x240($s0)
    ctx->pc = 0x18e37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 576)));
label_18e380:
    // 0x18e380: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18e380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e384:
    // 0x18e384: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x18e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_18e388:
    // 0x18e388: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e388u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e38c:
    // 0x18e38c: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x18e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
label_18e390:
    // 0x18e390: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x18e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_18e394:
    // 0x18e394: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18e398:
    if (ctx->pc == 0x18E398u) {
        ctx->pc = 0x18E39Cu;
        goto label_18e39c;
    }
    ctx->pc = 0x18E394u;
    {
        const bool branch_taken_0x18e394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e394) {
            ctx->pc = 0x18E3B4u;
            goto label_18e3b4;
        }
    }
    ctx->pc = 0x18E39Cu;
label_18e39c:
    // 0x18e39c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e39cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e3a0:
    // 0x18e3a0: 0xc063b4c  jal         func_18ED30
label_18e3a4:
    if (ctx->pc == 0x18E3A4u) {
        ctx->pc = 0x18E3A8u;
        goto label_18e3a8;
    }
    ctx->pc = 0x18E3A0u;
    SET_GPR_U32(ctx, 31, 0x18E3A8u);
    ctx->pc = 0x18ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED30u, 0x18E3A0u, 0x18E3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3A8u;
label_18e3a8:
    // 0x18e3a8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e3a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e3ac:
    // 0x18e3ac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_18e3b0:
    if (ctx->pc == 0x18E3B0u) {
        ctx->pc = 0x18E3B4u;
        goto label_18e3b4;
    }
    ctx->pc = 0x18E3ACu;
    {
        const bool branch_taken_0x18e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3ac) {
            ctx->pc = 0x18E420u;
            goto label_18e420;
        }
    }
    ctx->pc = 0x18E3B4u;
label_18e3b4:
    // 0x18e3b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e3b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e3b8:
    // 0x18e3b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e3bc:
    // 0x18e3bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e3c0:
    // 0x18e3c0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e3c4:
    // 0x18e3c4: 0x24427288  addiu       $v0, $v0, 0x7288
    ctx->pc = 0x18e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29320));
label_18e3c8:
    // 0x18e3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e3cc:
    // 0x18e3cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e3d0:
    // 0x18e3d0: 0x40f809  jalr        $v0
label_18e3d4:
    if (ctx->pc == 0x18E3D4u) {
        ctx->pc = 0x18E3D8u;
        goto label_18e3d8;
    }
    ctx->pc = 0x18E3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E3D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E3D0u, 0x18E3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E3D8u;
label_18e3d8:
    // 0x18e3d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e3dc:
    // 0x18e3dc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18e3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18e3e0:
    // 0x18e3e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_18e3e4:
    if (ctx->pc == 0x18E3E4u) {
        ctx->pc = 0x18E3E8u;
        goto label_18e3e8;
    }
    ctx->pc = 0x18E3E0u;
    {
        const bool branch_taken_0x18e3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3e0) {
            ctx->pc = 0x18E3F8u;
            goto label_18e3f8;
        }
    }
    ctx->pc = 0x18E3E8u;
label_18e3e8:
    // 0x18e3e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e3e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e3ec:
    // 0x18e3ec: 0xc0c9ce0  jal         func_327380
label_18e3f0:
    if (ctx->pc == 0x18E3F0u) {
        ctx->pc = 0x18E3F4u;
        goto label_18e3f4;
    }
    ctx->pc = 0x18E3ECu;
    SET_GPR_U32(ctx, 31, 0x18E3F4u);
    ctx->pc = 0x327380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327380u, 0x18E3ECu, 0x18E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3F4u;
label_18e3f4:
    // 0x18e3f4: 0x0  nop
    ctx->pc = 0x18e3f4u;
    // NOP
label_18e3f8:
    // 0x18e3f8: 0xc601018c  lwc1        $f1, 0x18C($s0)
    ctx->pc = 0x18e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e3fc:
    // 0x18e3fc: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x18e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e400:
    // 0x18e400: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18e400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18e404:
    // 0x18e404: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x18e404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_18e408:
    // 0x18e408: 0x8e030294  lw          $v1, 0x294($s0)
    ctx->pc = 0x18e408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_18e40c:
    // 0x18e40c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18e410:
    // 0x18e410: 0xae030294  sw          $v1, 0x294($s0)
    ctx->pc = 0x18e410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
label_18e414:
    // 0x18e414: 0x0  nop
    ctx->pc = 0x18e414u;
    // NOP
label_18e418:
    // 0x18e418: 0x8e1002ac  lw          $s0, 0x2AC($s0)
    ctx->pc = 0x18e418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
label_18e41c:
    // 0x18e41c: 0x0  nop
    ctx->pc = 0x18e41cu;
    // NOP
label_18e420:
    // 0x18e420: 0x1600ffa6  bnez        $s0, . + 4 + (-0x5A << 2)
label_18e424:
    if (ctx->pc == 0x18E424u) {
        ctx->pc = 0x18E428u;
        goto label_18e428;
    }
    ctx->pc = 0x18E420u;
    {
        const bool branch_taken_0x18e420 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e420) {
            ctx->pc = 0x18E2BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e2bc;
        }
    }
    ctx->pc = 0x18E428u;
label_18e428:
    // 0x18e428: 0x8eb30068  lw          $s3, 0x68($s5)
    ctx->pc = 0x18e428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_18e42c:
    // 0x18e42c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_18e430:
    if (ctx->pc == 0x18E430u) {
        ctx->pc = 0x18E434u;
        goto label_18e434;
    }
    ctx->pc = 0x18E42Cu;
    {
        const bool branch_taken_0x18e42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e42c) {
            ctx->pc = 0x18E528u;
            goto label_18e528;
        }
    }
    ctx->pc = 0x18E434u;
label_18e434:
    // 0x18e434: 0x8e630b18  lw          $v1, 0xB18($s3)
    ctx->pc = 0x18e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
label_18e438:
    // 0x18e438: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18e43c:
    // 0x18e43c: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_18e440:
    if (ctx->pc == 0x18E440u) {
        ctx->pc = 0x18E444u;
        goto label_18e444;
    }
    ctx->pc = 0x18E43Cu;
    {
        const bool branch_taken_0x18e43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e43c) {
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E444u;
label_18e444:
    // 0x18e444: 0x8e620b18  lw          $v0, 0xB18($s3)
    ctx->pc = 0x18e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
label_18e448:
    // 0x18e448: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_18e44c:
    // 0x18e44c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18e450:
    if (ctx->pc == 0x18E450u) {
        ctx->pc = 0x18E454u;
        goto label_18e454;
    }
    ctx->pc = 0x18E44Cu;
    {
        const bool branch_taken_0x18e44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e44c) {
            ctx->pc = 0x18E46Cu;
            goto label_18e46c;
        }
    }
    ctx->pc = 0x18E454u;
label_18e454:
    // 0x18e454: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_18e458:
    // 0x18e458: 0xc063b9c  jal         func_18EE70
label_18e45c:
    if (ctx->pc == 0x18E45Cu) {
        ctx->pc = 0x18E460u;
        goto label_18e460;
    }
    ctx->pc = 0x18E458u;
    SET_GPR_U32(ctx, 31, 0x18E460u);
    ctx->pc = 0x18EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EE70u, 0x18E458u, 0x18E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E460u;
label_18e460:
    // 0x18e460: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x18e460u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e464:
    // 0x18e464: 0x10000030  b           . + 4 + (0x30 << 2)
label_18e468:
    if (ctx->pc == 0x18E468u) {
        ctx->pc = 0x18E46Cu;
        goto label_18e46c;
    }
    ctx->pc = 0x18E464u;
    {
        const bool branch_taken_0x18e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e464) {
            ctx->pc = 0x18E528u;
            goto label_18e528;
        }
    }
    ctx->pc = 0x18E46Cu;
label_18e46c:
    // 0x18e46c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e46cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_18e470:
    // 0x18e470: 0x8e620350  lw          $v0, 0x350($s3)
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
label_18e474:
    // 0x18e474: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e478:
    // 0x18e478: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e47c:
    // 0x18e47c: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x18e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_18e480:
    // 0x18e480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e484:
    // 0x18e484: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e488:
    // 0x18e488: 0x40f809  jalr        $v0
label_18e48c:
    if (ctx->pc == 0x18E48Cu) {
        ctx->pc = 0x18E490u;
        goto label_18e490;
    }
    ctx->pc = 0x18E488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E490u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E488u, 0x18E490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E490u;
label_18e490:
    // 0x18e490: 0x8e620b18  lw          $v0, 0xB18($s3)
    ctx->pc = 0x18e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
label_18e494:
    // 0x18e494: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18e494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_18e498:
    // 0x18e498: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18e49c:
    if (ctx->pc == 0x18E49Cu) {
        ctx->pc = 0x18E4A0u;
        goto label_18e4a0;
    }
    ctx->pc = 0x18E498u;
    {
        const bool branch_taken_0x18e498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e498) {
            ctx->pc = 0x18E4B0u;
            goto label_18e4b0;
        }
    }
    ctx->pc = 0x18E4A0u;
label_18e4a0:
    // 0x18e4a0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_18e4a4:
    // 0x18e4a4: 0xc0c9970  jal         func_3265C0
label_18e4a8:
    if (ctx->pc == 0x18E4A8u) {
        ctx->pc = 0x18E4ACu;
        goto label_18e4ac;
    }
    ctx->pc = 0x18E4A4u;
    SET_GPR_U32(ctx, 31, 0x18E4ACu);
    ctx->pc = 0x3265C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265C0u, 0x18E4A4u, 0x18E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4ACu;
label_18e4ac:
    // 0x18e4ac: 0x0  nop
    ctx->pc = 0x18e4acu;
    // NOP
label_18e4b0:
    // 0x18e4b0: 0x8e620ac0  lw          $v0, 0xAC0($s3)
    ctx->pc = 0x18e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2752)));
label_18e4b4:
    // 0x18e4b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18e4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18e4b8:
    // 0x18e4b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e4bc:
    // 0x18e4bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18e4c0:
    // 0x18e4c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18e4c4:
    if (ctx->pc == 0x18E4C4u) {
        ctx->pc = 0x18E4C8u;
        goto label_18e4c8;
    }
    ctx->pc = 0x18E4C0u;
    {
        const bool branch_taken_0x18e4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4c0) {
            ctx->pc = 0x18E4DCu;
            goto label_18e4dc;
        }
    }
    ctx->pc = 0x18E4C8u;
label_18e4c8:
    // 0x18e4c8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e4c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_18e4cc:
    // 0x18e4cc: 0xc0c9ae4  jal         func_326B90
label_18e4d0:
    if (ctx->pc == 0x18E4D0u) {
        ctx->pc = 0x18E4D4u;
        goto label_18e4d4;
    }
    ctx->pc = 0x18E4CCu;
    SET_GPR_U32(ctx, 31, 0x18E4D4u);
    ctx->pc = 0x326B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B90u, 0x18E4CCu, 0x18E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4D4u;
label_18e4d4:
    // 0x18e4d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_18e4d8:
    if (ctx->pc == 0x18E4D8u) {
        ctx->pc = 0x18E4DCu;
        goto label_18e4dc;
    }
    ctx->pc = 0x18E4D4u;
    {
        const bool branch_taken_0x18e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4d4) {
            ctx->pc = 0x18E4E8u;
            goto label_18e4e8;
        }
    }
    ctx->pc = 0x18E4DCu;
label_18e4dc:
    // 0x18e4dc: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e4dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_18e4e0:
    // 0x18e4e0: 0xc0c99d8  jal         func_326760
label_18e4e4:
    if (ctx->pc == 0x18E4E4u) {
        ctx->pc = 0x18E4E8u;
        goto label_18e4e8;
    }
    ctx->pc = 0x18E4E0u;
    SET_GPR_U32(ctx, 31, 0x18E4E8u);
    ctx->pc = 0x326760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326760u, 0x18E4E0u, 0x18E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4E8u;
label_18e4e8:
    // 0x18e4e8: 0x8e630ab8  lw          $v1, 0xAB8($s3)
    ctx->pc = 0x18e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2744)));
label_18e4ec:
    // 0x18e4ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18e4f0:
    // 0x18e4f0: 0xae630ab8  sw          $v1, 0xAB8($s3)
    ctx->pc = 0x18e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2744), GPR_U32(ctx, 3));
label_18e4f4:
    // 0x18e4f4: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x18e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_18e4f8:
    // 0x18e4f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_18e4fc:
    if (ctx->pc == 0x18E4FCu) {
        ctx->pc = 0x18E500u;
        goto label_18e500;
    }
    ctx->pc = 0x18E4F8u;
    {
        const bool branch_taken_0x18e4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4f8) {
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E500u;
label_18e500:
    // 0x18e500: 0x8e640ab8  lw          $a0, 0xAB8($s3)
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2744)));
label_18e504:
    // 0x18e504: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x18e504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_18e508:
    // 0x18e508: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x18e508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_18e50c:
    // 0x18e50c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_18e510:
    if (ctx->pc == 0x18E510u) {
        ctx->pc = 0x18E514u;
        goto label_18e514;
    }
    ctx->pc = 0x18E50Cu;
    {
        const bool branch_taken_0x18e50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e50c) {
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E514u;
label_18e514:
    // 0x18e514: 0x8e630b18  lw          $v1, 0xB18($s3)
    ctx->pc = 0x18e514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
label_18e518:
    // 0x18e518: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x18e518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_18e51c:
    // 0x18e51c: 0xae630b18  sw          $v1, 0xB18($s3)
    ctx->pc = 0x18e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2840), GPR_U32(ctx, 3));
label_18e520:
    // 0x18e520: 0x8e730b24  lw          $s3, 0xB24($s3)
    ctx->pc = 0x18e520u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2852)));
label_18e524:
    // 0x18e524: 0x0  nop
    ctx->pc = 0x18e524u;
    // NOP
label_18e528:
    // 0x18e528: 0x1660ffc2  bnez        $s3, . + 4 + (-0x3E << 2)
label_18e52c:
    if (ctx->pc == 0x18E52Cu) {
        ctx->pc = 0x18E530u;
        goto label_18e530;
    }
    ctx->pc = 0x18E528u;
    {
        const bool branch_taken_0x18e528 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e528) {
            ctx->pc = 0x18E434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e434;
        }
    }
    ctx->pc = 0x18E530u;
label_18e530:
    // 0x18e530: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x18e530u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18e534:
    // 0x18e534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18e534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18e538:
    // 0x18e538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18e538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18e53c:
    // 0x18e53c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18e53cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18e540:
    // 0x18e540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e544:
    // 0x18e544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18e548:
    // 0x18e548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18e54c:
    // 0x18e54c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18e54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18e550:
    // 0x18e550: 0x3e00008  jr          $ra
label_18e554:
    if (ctx->pc == 0x18E554u) {
        ctx->pc = 0x18E558u;
        goto label_fallthrough_0x18e550;
    }
    ctx->pc = 0x18E550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18e550:
    ctx->pc = 0x18E558u;
}
