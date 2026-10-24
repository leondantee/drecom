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

// Function: Em10_act_chk_dancer
// Address: 0x129d90 - 0x12a550
void Em10_act_chk_dancer_0x129d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_dancer_0x129d90");
#endif

    switch (ctx->pc) {
        case 0x129d90u: goto label_129d90;
        case 0x129d94u: goto label_129d94;
        case 0x129d98u: goto label_129d98;
        case 0x129d9cu: goto label_129d9c;
        case 0x129da0u: goto label_129da0;
        case 0x129da4u: goto label_129da4;
        case 0x129da8u: goto label_129da8;
        case 0x129dacu: goto label_129dac;
        case 0x129db0u: goto label_129db0;
        case 0x129db4u: goto label_129db4;
        case 0x129db8u: goto label_129db8;
        case 0x129dbcu: goto label_129dbc;
        case 0x129dc0u: goto label_129dc0;
        case 0x129dc4u: goto label_129dc4;
        case 0x129dc8u: goto label_129dc8;
        case 0x129dccu: goto label_129dcc;
        case 0x129dd0u: goto label_129dd0;
        case 0x129dd4u: goto label_129dd4;
        case 0x129dd8u: goto label_129dd8;
        case 0x129ddcu: goto label_129ddc;
        case 0x129de0u: goto label_129de0;
        case 0x129de4u: goto label_129de4;
        case 0x129de8u: goto label_129de8;
        case 0x129decu: goto label_129dec;
        case 0x129df0u: goto label_129df0;
        case 0x129df4u: goto label_129df4;
        case 0x129df8u: goto label_129df8;
        case 0x129dfcu: goto label_129dfc;
        case 0x129e00u: goto label_129e00;
        case 0x129e04u: goto label_129e04;
        case 0x129e08u: goto label_129e08;
        case 0x129e0cu: goto label_129e0c;
        case 0x129e10u: goto label_129e10;
        case 0x129e14u: goto label_129e14;
        case 0x129e18u: goto label_129e18;
        case 0x129e1cu: goto label_129e1c;
        case 0x129e20u: goto label_129e20;
        case 0x129e24u: goto label_129e24;
        case 0x129e28u: goto label_129e28;
        case 0x129e2cu: goto label_129e2c;
        case 0x129e30u: goto label_129e30;
        case 0x129e34u: goto label_129e34;
        case 0x129e38u: goto label_129e38;
        case 0x129e3cu: goto label_129e3c;
        case 0x129e40u: goto label_129e40;
        case 0x129e44u: goto label_129e44;
        case 0x129e48u: goto label_129e48;
        case 0x129e4cu: goto label_129e4c;
        case 0x129e50u: goto label_129e50;
        case 0x129e54u: goto label_129e54;
        case 0x129e58u: goto label_129e58;
        case 0x129e5cu: goto label_129e5c;
        case 0x129e60u: goto label_129e60;
        case 0x129e64u: goto label_129e64;
        case 0x129e68u: goto label_129e68;
        case 0x129e6cu: goto label_129e6c;
        case 0x129e70u: goto label_129e70;
        case 0x129e74u: goto label_129e74;
        case 0x129e78u: goto label_129e78;
        case 0x129e7cu: goto label_129e7c;
        case 0x129e80u: goto label_129e80;
        case 0x129e84u: goto label_129e84;
        case 0x129e88u: goto label_129e88;
        case 0x129e8cu: goto label_129e8c;
        case 0x129e90u: goto label_129e90;
        case 0x129e94u: goto label_129e94;
        case 0x129e98u: goto label_129e98;
        case 0x129e9cu: goto label_129e9c;
        case 0x129ea0u: goto label_129ea0;
        case 0x129ea4u: goto label_129ea4;
        case 0x129ea8u: goto label_129ea8;
        case 0x129eacu: goto label_129eac;
        case 0x129eb0u: goto label_129eb0;
        case 0x129eb4u: goto label_129eb4;
        case 0x129eb8u: goto label_129eb8;
        case 0x129ebcu: goto label_129ebc;
        case 0x129ec0u: goto label_129ec0;
        case 0x129ec4u: goto label_129ec4;
        case 0x129ec8u: goto label_129ec8;
        case 0x129eccu: goto label_129ecc;
        case 0x129ed0u: goto label_129ed0;
        case 0x129ed4u: goto label_129ed4;
        case 0x129ed8u: goto label_129ed8;
        case 0x129edcu: goto label_129edc;
        case 0x129ee0u: goto label_129ee0;
        case 0x129ee4u: goto label_129ee4;
        case 0x129ee8u: goto label_129ee8;
        case 0x129eecu: goto label_129eec;
        case 0x129ef0u: goto label_129ef0;
        case 0x129ef4u: goto label_129ef4;
        case 0x129ef8u: goto label_129ef8;
        case 0x129efcu: goto label_129efc;
        case 0x129f00u: goto label_129f00;
        case 0x129f04u: goto label_129f04;
        case 0x129f08u: goto label_129f08;
        case 0x129f0cu: goto label_129f0c;
        case 0x129f10u: goto label_129f10;
        case 0x129f14u: goto label_129f14;
        case 0x129f18u: goto label_129f18;
        case 0x129f1cu: goto label_129f1c;
        case 0x129f20u: goto label_129f20;
        case 0x129f24u: goto label_129f24;
        case 0x129f28u: goto label_129f28;
        case 0x129f2cu: goto label_129f2c;
        case 0x129f30u: goto label_129f30;
        case 0x129f34u: goto label_129f34;
        case 0x129f38u: goto label_129f38;
        case 0x129f3cu: goto label_129f3c;
        case 0x129f40u: goto label_129f40;
        case 0x129f44u: goto label_129f44;
        case 0x129f48u: goto label_129f48;
        case 0x129f4cu: goto label_129f4c;
        case 0x129f50u: goto label_129f50;
        case 0x129f54u: goto label_129f54;
        case 0x129f58u: goto label_129f58;
        case 0x129f5cu: goto label_129f5c;
        case 0x129f60u: goto label_129f60;
        case 0x129f64u: goto label_129f64;
        case 0x129f68u: goto label_129f68;
        case 0x129f6cu: goto label_129f6c;
        case 0x129f70u: goto label_129f70;
        case 0x129f74u: goto label_129f74;
        case 0x129f78u: goto label_129f78;
        case 0x129f7cu: goto label_129f7c;
        case 0x129f80u: goto label_129f80;
        case 0x129f84u: goto label_129f84;
        case 0x129f88u: goto label_129f88;
        case 0x129f8cu: goto label_129f8c;
        case 0x129f90u: goto label_129f90;
        case 0x129f94u: goto label_129f94;
        case 0x129f98u: goto label_129f98;
        case 0x129f9cu: goto label_129f9c;
        case 0x129fa0u: goto label_129fa0;
        case 0x129fa4u: goto label_129fa4;
        case 0x129fa8u: goto label_129fa8;
        case 0x129facu: goto label_129fac;
        case 0x129fb0u: goto label_129fb0;
        case 0x129fb4u: goto label_129fb4;
        case 0x129fb8u: goto label_129fb8;
        case 0x129fbcu: goto label_129fbc;
        case 0x129fc0u: goto label_129fc0;
        case 0x129fc4u: goto label_129fc4;
        case 0x129fc8u: goto label_129fc8;
        case 0x129fccu: goto label_129fcc;
        case 0x129fd0u: goto label_129fd0;
        case 0x129fd4u: goto label_129fd4;
        case 0x129fd8u: goto label_129fd8;
        case 0x129fdcu: goto label_129fdc;
        case 0x129fe0u: goto label_129fe0;
        case 0x129fe4u: goto label_129fe4;
        case 0x129fe8u: goto label_129fe8;
        case 0x129fecu: goto label_129fec;
        case 0x129ff0u: goto label_129ff0;
        case 0x129ff4u: goto label_129ff4;
        case 0x129ff8u: goto label_129ff8;
        case 0x129ffcu: goto label_129ffc;
        case 0x12a000u: goto label_12a000;
        case 0x12a004u: goto label_12a004;
        case 0x12a008u: goto label_12a008;
        case 0x12a00cu: goto label_12a00c;
        case 0x12a010u: goto label_12a010;
        case 0x12a014u: goto label_12a014;
        case 0x12a018u: goto label_12a018;
        case 0x12a01cu: goto label_12a01c;
        case 0x12a020u: goto label_12a020;
        case 0x12a024u: goto label_12a024;
        case 0x12a028u: goto label_12a028;
        case 0x12a02cu: goto label_12a02c;
        case 0x12a030u: goto label_12a030;
        case 0x12a034u: goto label_12a034;
        case 0x12a038u: goto label_12a038;
        case 0x12a03cu: goto label_12a03c;
        case 0x12a040u: goto label_12a040;
        case 0x12a044u: goto label_12a044;
        case 0x12a048u: goto label_12a048;
        case 0x12a04cu: goto label_12a04c;
        case 0x12a050u: goto label_12a050;
        case 0x12a054u: goto label_12a054;
        case 0x12a058u: goto label_12a058;
        case 0x12a05cu: goto label_12a05c;
        case 0x12a060u: goto label_12a060;
        case 0x12a064u: goto label_12a064;
        case 0x12a068u: goto label_12a068;
        case 0x12a06cu: goto label_12a06c;
        case 0x12a070u: goto label_12a070;
        case 0x12a074u: goto label_12a074;
        case 0x12a078u: goto label_12a078;
        case 0x12a07cu: goto label_12a07c;
        case 0x12a080u: goto label_12a080;
        case 0x12a084u: goto label_12a084;
        case 0x12a088u: goto label_12a088;
        case 0x12a08cu: goto label_12a08c;
        case 0x12a090u: goto label_12a090;
        case 0x12a094u: goto label_12a094;
        case 0x12a098u: goto label_12a098;
        case 0x12a09cu: goto label_12a09c;
        case 0x12a0a0u: goto label_12a0a0;
        case 0x12a0a4u: goto label_12a0a4;
        case 0x12a0a8u: goto label_12a0a8;
        case 0x12a0acu: goto label_12a0ac;
        case 0x12a0b0u: goto label_12a0b0;
        case 0x12a0b4u: goto label_12a0b4;
        case 0x12a0b8u: goto label_12a0b8;
        case 0x12a0bcu: goto label_12a0bc;
        case 0x12a0c0u: goto label_12a0c0;
        case 0x12a0c4u: goto label_12a0c4;
        case 0x12a0c8u: goto label_12a0c8;
        case 0x12a0ccu: goto label_12a0cc;
        case 0x12a0d0u: goto label_12a0d0;
        case 0x12a0d4u: goto label_12a0d4;
        case 0x12a0d8u: goto label_12a0d8;
        case 0x12a0dcu: goto label_12a0dc;
        case 0x12a0e0u: goto label_12a0e0;
        case 0x12a0e4u: goto label_12a0e4;
        case 0x12a0e8u: goto label_12a0e8;
        case 0x12a0ecu: goto label_12a0ec;
        case 0x12a0f0u: goto label_12a0f0;
        case 0x12a0f4u: goto label_12a0f4;
        case 0x12a0f8u: goto label_12a0f8;
        case 0x12a0fcu: goto label_12a0fc;
        case 0x12a100u: goto label_12a100;
        case 0x12a104u: goto label_12a104;
        case 0x12a108u: goto label_12a108;
        case 0x12a10cu: goto label_12a10c;
        case 0x12a110u: goto label_12a110;
        case 0x12a114u: goto label_12a114;
        case 0x12a118u: goto label_12a118;
        case 0x12a11cu: goto label_12a11c;
        case 0x12a120u: goto label_12a120;
        case 0x12a124u: goto label_12a124;
        case 0x12a128u: goto label_12a128;
        case 0x12a12cu: goto label_12a12c;
        case 0x12a130u: goto label_12a130;
        case 0x12a134u: goto label_12a134;
        case 0x12a138u: goto label_12a138;
        case 0x12a13cu: goto label_12a13c;
        case 0x12a140u: goto label_12a140;
        case 0x12a144u: goto label_12a144;
        case 0x12a148u: goto label_12a148;
        case 0x12a14cu: goto label_12a14c;
        case 0x12a150u: goto label_12a150;
        case 0x12a154u: goto label_12a154;
        case 0x12a158u: goto label_12a158;
        case 0x12a15cu: goto label_12a15c;
        case 0x12a160u: goto label_12a160;
        case 0x12a164u: goto label_12a164;
        case 0x12a168u: goto label_12a168;
        case 0x12a16cu: goto label_12a16c;
        case 0x12a170u: goto label_12a170;
        case 0x12a174u: goto label_12a174;
        case 0x12a178u: goto label_12a178;
        case 0x12a17cu: goto label_12a17c;
        case 0x12a180u: goto label_12a180;
        case 0x12a184u: goto label_12a184;
        case 0x12a188u: goto label_12a188;
        case 0x12a18cu: goto label_12a18c;
        case 0x12a190u: goto label_12a190;
        case 0x12a194u: goto label_12a194;
        case 0x12a198u: goto label_12a198;
        case 0x12a19cu: goto label_12a19c;
        case 0x12a1a0u: goto label_12a1a0;
        case 0x12a1a4u: goto label_12a1a4;
        case 0x12a1a8u: goto label_12a1a8;
        case 0x12a1acu: goto label_12a1ac;
        case 0x12a1b0u: goto label_12a1b0;
        case 0x12a1b4u: goto label_12a1b4;
        case 0x12a1b8u: goto label_12a1b8;
        case 0x12a1bcu: goto label_12a1bc;
        case 0x12a1c0u: goto label_12a1c0;
        case 0x12a1c4u: goto label_12a1c4;
        case 0x12a1c8u: goto label_12a1c8;
        case 0x12a1ccu: goto label_12a1cc;
        case 0x12a1d0u: goto label_12a1d0;
        case 0x12a1d4u: goto label_12a1d4;
        case 0x12a1d8u: goto label_12a1d8;
        case 0x12a1dcu: goto label_12a1dc;
        case 0x12a1e0u: goto label_12a1e0;
        case 0x12a1e4u: goto label_12a1e4;
        case 0x12a1e8u: goto label_12a1e8;
        case 0x12a1ecu: goto label_12a1ec;
        case 0x12a1f0u: goto label_12a1f0;
        case 0x12a1f4u: goto label_12a1f4;
        case 0x12a1f8u: goto label_12a1f8;
        case 0x12a1fcu: goto label_12a1fc;
        case 0x12a200u: goto label_12a200;
        case 0x12a204u: goto label_12a204;
        case 0x12a208u: goto label_12a208;
        case 0x12a20cu: goto label_12a20c;
        case 0x12a210u: goto label_12a210;
        case 0x12a214u: goto label_12a214;
        case 0x12a218u: goto label_12a218;
        case 0x12a21cu: goto label_12a21c;
        case 0x12a220u: goto label_12a220;
        case 0x12a224u: goto label_12a224;
        case 0x12a228u: goto label_12a228;
        case 0x12a22cu: goto label_12a22c;
        case 0x12a230u: goto label_12a230;
        case 0x12a234u: goto label_12a234;
        case 0x12a238u: goto label_12a238;
        case 0x12a23cu: goto label_12a23c;
        case 0x12a240u: goto label_12a240;
        case 0x12a244u: goto label_12a244;
        case 0x12a248u: goto label_12a248;
        case 0x12a24cu: goto label_12a24c;
        case 0x12a250u: goto label_12a250;
        case 0x12a254u: goto label_12a254;
        case 0x12a258u: goto label_12a258;
        case 0x12a25cu: goto label_12a25c;
        case 0x12a260u: goto label_12a260;
        case 0x12a264u: goto label_12a264;
        case 0x12a268u: goto label_12a268;
        case 0x12a26cu: goto label_12a26c;
        case 0x12a270u: goto label_12a270;
        case 0x12a274u: goto label_12a274;
        case 0x12a278u: goto label_12a278;
        case 0x12a27cu: goto label_12a27c;
        case 0x12a280u: goto label_12a280;
        case 0x12a284u: goto label_12a284;
        case 0x12a288u: goto label_12a288;
        case 0x12a28cu: goto label_12a28c;
        case 0x12a290u: goto label_12a290;
        case 0x12a294u: goto label_12a294;
        case 0x12a298u: goto label_12a298;
        case 0x12a29cu: goto label_12a29c;
        case 0x12a2a0u: goto label_12a2a0;
        case 0x12a2a4u: goto label_12a2a4;
        case 0x12a2a8u: goto label_12a2a8;
        case 0x12a2acu: goto label_12a2ac;
        case 0x12a2b0u: goto label_12a2b0;
        case 0x12a2b4u: goto label_12a2b4;
        case 0x12a2b8u: goto label_12a2b8;
        case 0x12a2bcu: goto label_12a2bc;
        case 0x12a2c0u: goto label_12a2c0;
        case 0x12a2c4u: goto label_12a2c4;
        case 0x12a2c8u: goto label_12a2c8;
        case 0x12a2ccu: goto label_12a2cc;
        case 0x12a2d0u: goto label_12a2d0;
        case 0x12a2d4u: goto label_12a2d4;
        case 0x12a2d8u: goto label_12a2d8;
        case 0x12a2dcu: goto label_12a2dc;
        case 0x12a2e0u: goto label_12a2e0;
        case 0x12a2e4u: goto label_12a2e4;
        case 0x12a2e8u: goto label_12a2e8;
        case 0x12a2ecu: goto label_12a2ec;
        case 0x12a2f0u: goto label_12a2f0;
        case 0x12a2f4u: goto label_12a2f4;
        case 0x12a2f8u: goto label_12a2f8;
        case 0x12a2fcu: goto label_12a2fc;
        case 0x12a300u: goto label_12a300;
        case 0x12a304u: goto label_12a304;
        case 0x12a308u: goto label_12a308;
        case 0x12a30cu: goto label_12a30c;
        case 0x12a310u: goto label_12a310;
        case 0x12a314u: goto label_12a314;
        case 0x12a318u: goto label_12a318;
        case 0x12a31cu: goto label_12a31c;
        case 0x12a320u: goto label_12a320;
        case 0x12a324u: goto label_12a324;
        case 0x12a328u: goto label_12a328;
        case 0x12a32cu: goto label_12a32c;
        case 0x12a330u: goto label_12a330;
        case 0x12a334u: goto label_12a334;
        case 0x12a338u: goto label_12a338;
        case 0x12a33cu: goto label_12a33c;
        case 0x12a340u: goto label_12a340;
        case 0x12a344u: goto label_12a344;
        case 0x12a348u: goto label_12a348;
        case 0x12a34cu: goto label_12a34c;
        case 0x12a350u: goto label_12a350;
        case 0x12a354u: goto label_12a354;
        case 0x12a358u: goto label_12a358;
        case 0x12a35cu: goto label_12a35c;
        case 0x12a360u: goto label_12a360;
        case 0x12a364u: goto label_12a364;
        case 0x12a368u: goto label_12a368;
        case 0x12a36cu: goto label_12a36c;
        case 0x12a370u: goto label_12a370;
        case 0x12a374u: goto label_12a374;
        case 0x12a378u: goto label_12a378;
        case 0x12a37cu: goto label_12a37c;
        case 0x12a380u: goto label_12a380;
        case 0x12a384u: goto label_12a384;
        case 0x12a388u: goto label_12a388;
        case 0x12a38cu: goto label_12a38c;
        case 0x12a390u: goto label_12a390;
        case 0x12a394u: goto label_12a394;
        case 0x12a398u: goto label_12a398;
        case 0x12a39cu: goto label_12a39c;
        case 0x12a3a0u: goto label_12a3a0;
        case 0x12a3a4u: goto label_12a3a4;
        case 0x12a3a8u: goto label_12a3a8;
        case 0x12a3acu: goto label_12a3ac;
        case 0x12a3b0u: goto label_12a3b0;
        case 0x12a3b4u: goto label_12a3b4;
        case 0x12a3b8u: goto label_12a3b8;
        case 0x12a3bcu: goto label_12a3bc;
        case 0x12a3c0u: goto label_12a3c0;
        case 0x12a3c4u: goto label_12a3c4;
        case 0x12a3c8u: goto label_12a3c8;
        case 0x12a3ccu: goto label_12a3cc;
        case 0x12a3d0u: goto label_12a3d0;
        case 0x12a3d4u: goto label_12a3d4;
        case 0x12a3d8u: goto label_12a3d8;
        case 0x12a3dcu: goto label_12a3dc;
        case 0x12a3e0u: goto label_12a3e0;
        case 0x12a3e4u: goto label_12a3e4;
        case 0x12a3e8u: goto label_12a3e8;
        case 0x12a3ecu: goto label_12a3ec;
        case 0x12a3f0u: goto label_12a3f0;
        case 0x12a3f4u: goto label_12a3f4;
        case 0x12a3f8u: goto label_12a3f8;
        case 0x12a3fcu: goto label_12a3fc;
        case 0x12a400u: goto label_12a400;
        case 0x12a404u: goto label_12a404;
        case 0x12a408u: goto label_12a408;
        case 0x12a40cu: goto label_12a40c;
        case 0x12a410u: goto label_12a410;
        case 0x12a414u: goto label_12a414;
        case 0x12a418u: goto label_12a418;
        case 0x12a41cu: goto label_12a41c;
        case 0x12a420u: goto label_12a420;
        case 0x12a424u: goto label_12a424;
        case 0x12a428u: goto label_12a428;
        case 0x12a42cu: goto label_12a42c;
        case 0x12a430u: goto label_12a430;
        case 0x12a434u: goto label_12a434;
        case 0x12a438u: goto label_12a438;
        case 0x12a43cu: goto label_12a43c;
        case 0x12a440u: goto label_12a440;
        case 0x12a444u: goto label_12a444;
        case 0x12a448u: goto label_12a448;
        case 0x12a44cu: goto label_12a44c;
        case 0x12a450u: goto label_12a450;
        case 0x12a454u: goto label_12a454;
        case 0x12a458u: goto label_12a458;
        case 0x12a45cu: goto label_12a45c;
        case 0x12a460u: goto label_12a460;
        case 0x12a464u: goto label_12a464;
        case 0x12a468u: goto label_12a468;
        case 0x12a46cu: goto label_12a46c;
        case 0x12a470u: goto label_12a470;
        case 0x12a474u: goto label_12a474;
        case 0x12a478u: goto label_12a478;
        case 0x12a47cu: goto label_12a47c;
        case 0x12a480u: goto label_12a480;
        case 0x12a484u: goto label_12a484;
        case 0x12a488u: goto label_12a488;
        case 0x12a48cu: goto label_12a48c;
        case 0x12a490u: goto label_12a490;
        case 0x12a494u: goto label_12a494;
        case 0x12a498u: goto label_12a498;
        case 0x12a49cu: goto label_12a49c;
        case 0x12a4a0u: goto label_12a4a0;
        case 0x12a4a4u: goto label_12a4a4;
        case 0x12a4a8u: goto label_12a4a8;
        case 0x12a4acu: goto label_12a4ac;
        case 0x12a4b0u: goto label_12a4b0;
        case 0x12a4b4u: goto label_12a4b4;
        case 0x12a4b8u: goto label_12a4b8;
        case 0x12a4bcu: goto label_12a4bc;
        case 0x12a4c0u: goto label_12a4c0;
        case 0x12a4c4u: goto label_12a4c4;
        case 0x12a4c8u: goto label_12a4c8;
        case 0x12a4ccu: goto label_12a4cc;
        case 0x12a4d0u: goto label_12a4d0;
        case 0x12a4d4u: goto label_12a4d4;
        case 0x12a4d8u: goto label_12a4d8;
        case 0x12a4dcu: goto label_12a4dc;
        case 0x12a4e0u: goto label_12a4e0;
        case 0x12a4e4u: goto label_12a4e4;
        case 0x12a4e8u: goto label_12a4e8;
        case 0x12a4ecu: goto label_12a4ec;
        case 0x12a4f0u: goto label_12a4f0;
        case 0x12a4f4u: goto label_12a4f4;
        case 0x12a4f8u: goto label_12a4f8;
        case 0x12a4fcu: goto label_12a4fc;
        case 0x12a500u: goto label_12a500;
        case 0x12a504u: goto label_12a504;
        case 0x12a508u: goto label_12a508;
        case 0x12a50cu: goto label_12a50c;
        case 0x12a510u: goto label_12a510;
        case 0x12a514u: goto label_12a514;
        case 0x12a518u: goto label_12a518;
        case 0x12a51cu: goto label_12a51c;
        case 0x12a520u: goto label_12a520;
        case 0x12a524u: goto label_12a524;
        case 0x12a528u: goto label_12a528;
        case 0x12a52cu: goto label_12a52c;
        case 0x12a530u: goto label_12a530;
        case 0x12a534u: goto label_12a534;
        case 0x12a538u: goto label_12a538;
        case 0x12a53cu: goto label_12a53c;
        case 0x12a540u: goto label_12a540;
        case 0x12a544u: goto label_12a544;
        case 0x12a548u: goto label_12a548;
        case 0x12a54cu: goto label_12a54c;
        default: break;
    }

    ctx->pc = 0x129d90u;

label_129d90:
    // 0x129d90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x129d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_129d94:
    // 0x129d94: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x129d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_129d98:
    // 0x129d98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x129d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_129d9c:
    // 0x129d9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x129d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_129da0:
    // 0x129da0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_129da4:
    // 0x129da4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x129da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_129da8:
    // 0x129da8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x129da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129dac:
    // 0x129dac: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x129dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_129db0:
    // 0x129db0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129db4:
    // 0x129db4: 0xc05cdd8  jal         func_173760
label_129db8:
    if (ctx->pc == 0x129DB8u) {
        ctx->pc = 0x129DBCu;
        goto label_129dbc;
    }
    ctx->pc = 0x129DB4u;
    SET_GPR_U32(ctx, 31, 0x129DBCu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x129DB4u, 0x129DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DBCu;
label_129dbc:
    // 0x129dbc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x129dbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_129dc0:
    // 0x129dc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129dc4:
    // 0x129dc4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x129dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129dc8:
    // 0x129dc8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x129dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_129dcc:
    // 0x129dcc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x129dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129dd0:
    // 0x129dd0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x129dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_129dd4:
    // 0x129dd4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x129dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_129dd8:
    // 0x129dd8: 0xc05cc90  jal         func_173240
label_129ddc:
    if (ctx->pc == 0x129DDCu) {
        ctx->pc = 0x129DE0u;
        goto label_129de0;
    }
    ctx->pc = 0x129DD8u;
    SET_GPR_U32(ctx, 31, 0x129DE0u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x129DD8u, 0x129DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DE0u;
label_129de0:
    // 0x129de0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x129de0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_129de4:
    // 0x129de4: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x129de4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_129de8:
    // 0x129de8: 0x102001d2  beqz        $at, . + 4 + (0x1D2 << 2)
label_129dec:
    if (ctx->pc == 0x129DECu) {
        ctx->pc = 0x129DF0u;
        goto label_129df0;
    }
    ctx->pc = 0x129DE8u;
    {
        const bool branch_taken_0x129de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129de8) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x129DF0u;
label_129df0:
    // 0x129df0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x129df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_129df4:
    // 0x129df4: 0x2464e460  addiu       $a0, $v1, -0x1BA0
    ctx->pc = 0x129df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960224));
label_129df8:
    // 0x129df8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x129df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_129dfc:
    // 0x129dfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x129dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_129e00:
    // 0x129e00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x129e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_129e04:
    // 0x129e04: 0x600008  jr          $v1
label_129e08:
    if (ctx->pc == 0x129E08u) {
        ctx->pc = 0x129E0Cu;
        goto label_129e0c;
    }
    ctx->pc = 0x129E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129E04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x129E0Cu;
label_129e0c:
    // 0x129e0c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x129e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_129e10:
    // 0x129e10: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x129e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_129e14:
    // 0x129e14: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_129e18:
    if (ctx->pc == 0x129E18u) {
        ctx->pc = 0x129E1Cu;
        goto label_129e1c;
    }
    ctx->pc = 0x129E14u;
    {
        const bool branch_taken_0x129e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129e14) {
            ctx->pc = 0x129E2Cu;
            goto label_129e2c;
        }
    }
    ctx->pc = 0x129E1Cu;
label_129e1c:
    // 0x129e1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129e20:
    // 0x129e20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x129e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_129e24:
    // 0x129e24: 0x106001c3  beqz        $v1, . + 4 + (0x1C3 << 2)
label_129e28:
    if (ctx->pc == 0x129E28u) {
        ctx->pc = 0x129E2Cu;
        goto label_129e2c;
    }
    ctx->pc = 0x129E24u;
    {
        const bool branch_taken_0x129e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e24) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x129E2Cu;
label_129e2c:
    // 0x129e2c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x129e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_129e30:
    // 0x129e30: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_129e34:
    if (ctx->pc == 0x129E34u) {
        ctx->pc = 0x129E38u;
        goto label_129e38;
    }
    ctx->pc = 0x129E30u;
    {
        const bool branch_taken_0x129e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e30) {
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129E38u;
label_129e38:
    // 0x129e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129e3c:
    // 0x129e3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129e40:
    // 0x129e40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129e44:
    // 0x129e44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x129e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_129e48:
    // 0x129e48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129e4c:
    // 0x129e4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129e50:
    // 0x129e50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129e54:
    // 0x129e54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129e58:
    // 0x129e58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129e5c:
    // 0x129e5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129e60:
    // 0x129e60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x129e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_129e64:
    // 0x129e64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129e68:
    // 0x129e68: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x129e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_129e6c:
    // 0x129e6c: 0x100001b1  b           . + 4 + (0x1B1 << 2)
label_129e70:
    if (ctx->pc == 0x129E70u) {
        ctx->pc = 0x129E74u;
        goto label_129e74;
    }
    ctx->pc = 0x129E6Cu;
    {
        const bool branch_taken_0x129e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e6c) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x129E74u;
label_129e74:
    // 0x129e74: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x129e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_129e78:
    // 0x129e78: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x129e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_129e7c:
    // 0x129e7c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_129e80:
    if (ctx->pc == 0x129E80u) {
        ctx->pc = 0x129E84u;
        goto label_129e84;
    }
    ctx->pc = 0x129E7Cu;
    {
        const bool branch_taken_0x129e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e7c) {
            ctx->pc = 0x129E9Cu;
            goto label_129e9c;
        }
    }
    ctx->pc = 0x129E84u;
label_129e84:
    // 0x129e84: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x129e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_129e88:
    // 0x129e88: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_129e8c:
    // 0x129e8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x129e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_129e90:
    // 0x129e90: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x129e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_129e94:
    // 0x129e94: 0x100001a7  b           . + 4 + (0x1A7 << 2)
label_129e98:
    if (ctx->pc == 0x129E98u) {
        ctx->pc = 0x129E9Cu;
        goto label_129e9c;
    }
    ctx->pc = 0x129E94u;
    {
        const bool branch_taken_0x129e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e94) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x129E9Cu;
label_129e9c:
    // 0x129e9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129ea0:
    // 0x129ea0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x129ea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_129ea4:
    // 0x129ea4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x129ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_129ea8:
    // 0x129ea8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x129ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_129eac:
    // 0x129eac: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
label_129eb0:
    if (ctx->pc == 0x129EB0u) {
        ctx->pc = 0x129EB4u;
        goto label_129eb4;
    }
    ctx->pc = 0x129EACu;
    {
        const bool branch_taken_0x129eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129eac) {
            ctx->pc = 0x12A15Cu;
            goto label_12a15c;
        }
    }
    ctx->pc = 0x129EB4u;
label_129eb4:
    // 0x129eb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129eb8:
    // 0x129eb8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129ebc:
    // 0x129ebc: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x129ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_129ec0:
    // 0x129ec0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x129ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_129ec4:
    // 0x129ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129ec8:
    // 0x129ec8: 0x0  nop
    ctx->pc = 0x129ec8u;
    // NOP
label_129ecc:
    // 0x129ecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129ed0:
    // 0x129ed0: 0x0  nop
    ctx->pc = 0x129ed0u;
    // NOP
label_129ed4:
    // 0x129ed4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_129ed8:
    if (ctx->pc == 0x129ED8u) {
        ctx->pc = 0x129EDCu;
        goto label_129edc;
    }
    ctx->pc = 0x129ED4u;
    {
        const bool branch_taken_0x129ed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129ed4) {
            ctx->pc = 0x129F20u;
            goto label_129f20;
        }
    }
    ctx->pc = 0x129EDCu;
label_129edc:
    // 0x129edc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x129edcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_129ee0:
    // 0x129ee0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_129ee4:
    if (ctx->pc == 0x129EE4u) {
        ctx->pc = 0x129EE8u;
        goto label_129ee8;
    }
    ctx->pc = 0x129EE0u;
    {
        const bool branch_taken_0x129ee0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129ee0) {
            ctx->pc = 0x129F18u;
            goto label_129f18;
        }
    }
    ctx->pc = 0x129EE8u;
label_129ee8:
    // 0x129ee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129eec:
    // 0x129eec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129ef0:
    // 0x129ef0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129ef4:
    // 0x129ef4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x129ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_129ef8:
    // 0x129ef8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129efc:
    // 0x129efc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129f00:
    // 0x129f00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129f04:
    // 0x129f04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129f04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129f08:
    // 0x129f08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129f0c:
    // 0x129f0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129f10:
    // 0x129f10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129f14:
    // 0x129f14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129f18:
    // 0x129f18: 0x10000186  b           . + 4 + (0x186 << 2)
label_129f1c:
    if (ctx->pc == 0x129F1Cu) {
        ctx->pc = 0x129F20u;
        goto label_129f20;
    }
    ctx->pc = 0x129F18u;
    {
        const bool branch_taken_0x129f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129f18) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x129F20u;
label_129f20:
    // 0x129f20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129f24:
    // 0x129f24: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129f28:
    // 0x129f28: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x129f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
label_129f2c:
    // 0x129f2c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x129f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_129f30:
    // 0x129f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129f34:
    // 0x129f34: 0x0  nop
    ctx->pc = 0x129f34u;
    // NOP
label_129f38:
    // 0x129f38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129f3c:
    // 0x129f3c: 0x0  nop
    ctx->pc = 0x129f3cu;
    // NOP
label_129f40:
    // 0x129f40: 0x4500017c  bc1f        . + 4 + (0x17C << 2)
label_129f44:
    if (ctx->pc == 0x129F44u) {
        ctx->pc = 0x129F48u;
        goto label_129f48;
    }
    ctx->pc = 0x129F40u;
    {
        const bool branch_taken_0x129f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129f40) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x129F48u;
label_129f48:
    // 0x129f48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x129f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129f4c:
    // 0x129f4c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x129f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129f50:
    // 0x129f50: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x129f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_129f54:
    // 0x129f54: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x129f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_129f58:
    // 0x129f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129f5c:
    // 0x129f5c: 0x0  nop
    ctx->pc = 0x129f5cu;
    // NOP
label_129f60:
    // 0x129f60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x129f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129f64:
    // 0x129f64: 0x0  nop
    ctx->pc = 0x129f64u;
    // NOP
label_129f68:
    // 0x129f68: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_129f6c:
    if (ctx->pc == 0x129F6Cu) {
        ctx->pc = 0x129F70u;
        goto label_129f70;
    }
    ctx->pc = 0x129F68u;
    {
        const bool branch_taken_0x129f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129f68) {
            ctx->pc = 0x12A040u;
            goto label_12a040;
        }
    }
    ctx->pc = 0x129F70u;
label_129f70:
    // 0x129f70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_129f74:
    // 0x129f74: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x129f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_129f78:
    // 0x129f78: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x129f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_129f7c:
    // 0x129f7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_129f80:
    if (ctx->pc == 0x129F80u) {
        ctx->pc = 0x129F84u;
        goto label_129f84;
    }
    ctx->pc = 0x129F7Cu;
    {
        const bool branch_taken_0x129f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129f7c) {
            ctx->pc = 0x129F94u;
            goto label_129f94;
        }
    }
    ctx->pc = 0x129F84u;
label_129f84:
    // 0x129f84: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x129f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_129f88:
    // 0x129f88: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x129f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_129f8c:
    // 0x129f8c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_129f90:
    if (ctx->pc == 0x129F90u) {
        ctx->pc = 0x129F94u;
        goto label_129f94;
    }
    ctx->pc = 0x129F8Cu;
    {
        const bool branch_taken_0x129f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129f8c) {
            ctx->pc = 0x12A040u;
            goto label_12a040;
        }
    }
    ctx->pc = 0x129F94u;
label_129f94:
    // 0x129f94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129f98:
    // 0x129f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129f9c:
    // 0x129f9c: 0xc05d25c  jal         func_174970
label_129fa0:
    if (ctx->pc == 0x129FA0u) {
        ctx->pc = 0x129FA4u;
        goto label_129fa4;
    }
    ctx->pc = 0x129F9Cu;
    SET_GPR_U32(ctx, 31, 0x129FA4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x129F9Cu, 0x129FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FA4u;
label_129fa4:
    // 0x129fa4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_129fa8:
    if (ctx->pc == 0x129FA8u) {
        ctx->pc = 0x129FACu;
        goto label_129fac;
    }
    ctx->pc = 0x129FA4u;
    {
        const bool branch_taken_0x129fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129fa4) {
            ctx->pc = 0x12A040u;
            goto label_12a040;
        }
    }
    ctx->pc = 0x129FACu;
label_129fac:
    // 0x129fac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129fb0:
    // 0x129fb0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x129fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129fb4:
    // 0x129fb4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x129fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_129fb8:
    // 0x129fb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x129fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129fbc:
    // 0x129fbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x129fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_129fc0:
    // 0x129fc0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x129fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129fc4:
    // 0x129fc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x129fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_129fc8:
    // 0x129fc8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x129fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129fcc:
    // 0x129fcc: 0x0  nop
    ctx->pc = 0x129fccu;
    // NOP
label_129fd0:
    // 0x129fd0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_129fd4:
    if (ctx->pc == 0x129FD4u) {
        ctx->pc = 0x129FD8u;
        goto label_129fd8;
    }
    ctx->pc = 0x129FD0u;
    {
        const bool branch_taken_0x129fd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129fd0) {
            ctx->pc = 0x12A040u;
            goto label_12a040;
        }
    }
    ctx->pc = 0x129FD8u;
label_129fd8:
    // 0x129fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129fdc:
    // 0x129fdc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x129fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129fe0:
    // 0x129fe0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x129fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_129fe4:
    // 0x129fe4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x129fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129fe8:
    // 0x129fe8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x129fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_129fec:
    // 0x129fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129ff0:
    // 0x129ff0: 0x0  nop
    ctx->pc = 0x129ff0u;
    // NOP
label_129ff4:
    // 0x129ff4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x129ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_129ff8:
    // 0x129ff8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x129ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129ffc:
    // 0x129ffc: 0x0  nop
    ctx->pc = 0x129ffcu;
    // NOP
label_12a000:
    // 0x12a000: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_12a004:
    if (ctx->pc == 0x12A004u) {
        ctx->pc = 0x12A008u;
        goto label_12a008;
    }
    ctx->pc = 0x12A000u;
    {
        const bool branch_taken_0x12a000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a000) {
            ctx->pc = 0x12A040u;
            goto label_12a040;
        }
    }
    ctx->pc = 0x12A008u;
label_12a008:
    // 0x12a008: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a00c:
    // 0x12a00c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a010:
    // 0x12a010: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a014:
    // 0x12a014: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x12a014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_12a018:
    // 0x12a018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a01c:
    // 0x12a01c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a01cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a020:
    // 0x12a020: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a024:
    // 0x12a024: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a028:
    // 0x12a028: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a02c:
    // 0x12a02c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a030:
    // 0x12a030: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a034:
    // 0x12a034: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a038:
    // 0x12a038: 0x1000013e  b           . + 4 + (0x13E << 2)
label_12a03c:
    if (ctx->pc == 0x12A03Cu) {
        ctx->pc = 0x12A040u;
        goto label_12a040;
    }
    ctx->pc = 0x12A038u;
    {
        const bool branch_taken_0x12a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a038) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A040u;
label_12a040:
    // 0x12a040: 0xc067694  jal         func_19DA50
label_12a044:
    if (ctx->pc == 0x12A044u) {
        ctx->pc = 0x12A048u;
        goto label_12a048;
    }
    ctx->pc = 0x12A040u;
    SET_GPR_U32(ctx, 31, 0x12A048u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A040u, 0x12A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A048u;
label_12a048:
    // 0x12a048: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12a04c:
    // 0x12a04c: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x12a04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_12a050:
    // 0x12a050: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x12a050u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_12a054:
    // 0x12a054: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_12a058:
    if (ctx->pc == 0x12A058u) {
        ctx->pc = 0x12A05Cu;
        goto label_12a05c;
    }
    ctx->pc = 0x12A054u;
    {
        const bool branch_taken_0x12a054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a054) {
            ctx->pc = 0x12A154u;
            goto label_12a154;
        }
    }
    ctx->pc = 0x12A05Cu;
label_12a05c:
    // 0x12a05c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_12a060:
    // 0x12a060: 0x2464e440  addiu       $a0, $v1, -0x1BC0
    ctx->pc = 0x12a060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960192));
label_12a064:
    // 0x12a064: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12a064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_12a068:
    // 0x12a068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12a06c:
    // 0x12a06c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12a070:
    // 0x12a070: 0x600008  jr          $v1
label_12a074:
    if (ctx->pc == 0x12A074u) {
        ctx->pc = 0x12A078u;
        goto label_12a078;
    }
    ctx->pc = 0x12A070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A070u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12A078u;
label_12a078:
    // 0x12a078: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a07c:
    // 0x12a07c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12a07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a080:
    // 0x12a080: 0xc05d25c  jal         func_174970
label_12a084:
    if (ctx->pc == 0x12A084u) {
        ctx->pc = 0x12A088u;
        goto label_12a088;
    }
    ctx->pc = 0x12A080u;
    SET_GPR_U32(ctx, 31, 0x12A088u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12A080u, 0x12A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A088u;
label_12a088:
    // 0x12a088: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_12a08c:
    if (ctx->pc == 0x12A08Cu) {
        ctx->pc = 0x12A090u;
        goto label_12a090;
    }
    ctx->pc = 0x12A088u;
    {
        const bool branch_taken_0x12a088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a088) {
            ctx->pc = 0x12A11Cu;
            goto label_12a11c;
        }
    }
    ctx->pc = 0x12A090u;
label_12a090:
    // 0x12a090: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a094:
    // 0x12a094: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12a098:
    // 0x12a098: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12a098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_12a09c:
    // 0x12a09c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12a09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a0a0:
    // 0x12a0a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12a0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_12a0a4:
    // 0x12a0a4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x12a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a0a8:
    // 0x12a0a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12a0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12a0ac:
    // 0x12a0ac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12a0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a0b0:
    // 0x12a0b0: 0x0  nop
    ctx->pc = 0x12a0b0u;
    // NOP
label_12a0b4:
    // 0x12a0b4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_12a0b8:
    if (ctx->pc == 0x12A0B8u) {
        ctx->pc = 0x12A0BCu;
        goto label_12a0bc;
    }
    ctx->pc = 0x12A0B4u;
    {
        const bool branch_taken_0x12a0b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a0b4) {
            ctx->pc = 0x12A11Cu;
            goto label_12a11c;
        }
    }
    ctx->pc = 0x12A0BCu;
label_12a0bc:
    // 0x12a0bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a0c0:
    // 0x12a0c0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12a0c4:
    // 0x12a0c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12a0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_12a0c8:
    // 0x12a0c8: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x12a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a0cc:
    // 0x12a0cc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_12a0d0:
    // 0x12a0d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a0d4:
    // 0x12a0d4: 0x0  nop
    ctx->pc = 0x12a0d4u;
    // NOP
label_12a0d8:
    // 0x12a0d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12a0d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12a0dc:
    // 0x12a0dc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12a0dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a0e0:
    // 0x12a0e0: 0x0  nop
    ctx->pc = 0x12a0e0u;
    // NOP
label_12a0e4:
    // 0x12a0e4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_12a0e8:
    if (ctx->pc == 0x12A0E8u) {
        ctx->pc = 0x12A0ECu;
        goto label_12a0ec;
    }
    ctx->pc = 0x12A0E4u;
    {
        const bool branch_taken_0x12a0e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a0e4) {
            ctx->pc = 0x12A11Cu;
            goto label_12a11c;
        }
    }
    ctx->pc = 0x12A0ECu;
label_12a0ec:
    // 0x12a0ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a0f0:
    // 0x12a0f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a0f4:
    // 0x12a0f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a0f8:
    // 0x12a0f8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x12a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_12a0fc:
    // 0x12a0fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a100:
    // 0x12a100: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a104:
    // 0x12a104: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a108:
    // 0x12a108: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a10c:
    // 0x12a10c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a110:
    // 0x12a110: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a114:
    // 0x12a114: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a118:
    // 0x12a118: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a11c:
    // 0x12a11c: 0x10000105  b           . + 4 + (0x105 << 2)
label_12a120:
    if (ctx->pc == 0x12A120u) {
        ctx->pc = 0x12A124u;
        goto label_12a124;
    }
    ctx->pc = 0x12A11Cu;
    {
        const bool branch_taken_0x12a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a11c) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A124u;
label_12a124:
    // 0x12a124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a128:
    // 0x12a128: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a12c:
    // 0x12a12c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a130:
    // 0x12a130: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x12a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_12a134:
    // 0x12a134: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a138:
    // 0x12a138: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a13c:
    // 0x12a13c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a140:
    // 0x12a140: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a144:
    // 0x12a144: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a148:
    // 0x12a148: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a14c:
    // 0x12a14c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a150:
    // 0x12a150: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a154:
    // 0x12a154: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_12a158:
    if (ctx->pc == 0x12A158u) {
        ctx->pc = 0x12A15Cu;
        goto label_12a15c;
    }
    ctx->pc = 0x12A154u;
    {
        const bool branch_taken_0x12a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a154) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A15Cu;
label_12a15c:
    // 0x12a15c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a160:
    // 0x12a160: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a164:
    // 0x12a164: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x12a164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_12a168:
    // 0x12a168: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12a168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_12a16c:
    // 0x12a16c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a170:
    // 0x12a170: 0x0  nop
    ctx->pc = 0x12a170u;
    // NOP
label_12a174:
    // 0x12a174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a178:
    // 0x12a178: 0x0  nop
    ctx->pc = 0x12a178u;
    // NOP
label_12a17c:
    // 0x12a17c: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_12a180:
    if (ctx->pc == 0x12A180u) {
        ctx->pc = 0x12A184u;
        goto label_12a184;
    }
    ctx->pc = 0x12A17Cu;
    {
        const bool branch_taken_0x12a17c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a17c) {
            ctx->pc = 0x12A28Cu;
            goto label_12a28c;
        }
    }
    ctx->pc = 0x12A184u;
label_12a184:
    // 0x12a184: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12a188:
    // 0x12a188: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x12a188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_12a18c:
    // 0x12a18c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x12a18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_12a190:
    // 0x12a190: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_12a194:
    if (ctx->pc == 0x12A194u) {
        ctx->pc = 0x12A198u;
        goto label_12a198;
    }
    ctx->pc = 0x12A190u;
    {
        const bool branch_taken_0x12a190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a190) {
            ctx->pc = 0x12A1D0u;
            goto label_12a1d0;
        }
    }
    ctx->pc = 0x12A198u;
label_12a198:
    // 0x12a198: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a19c:
    // 0x12a19c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a1a0:
    // 0x12a1a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a1a4:
    // 0x12a1a4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12a1a8:
    // 0x12a1a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a1ac:
    // 0x12a1ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a1b0:
    // 0x12a1b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a1b4:
    // 0x12a1b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a1b8:
    // 0x12a1b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a1bc:
    // 0x12a1bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a1c0:
    // 0x12a1c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a1c4:
    // 0x12a1c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a1c8:
    // 0x12a1c8: 0x100000da  b           . + 4 + (0xDA << 2)
label_12a1cc:
    if (ctx->pc == 0x12A1CCu) {
        ctx->pc = 0x12A1D0u;
        goto label_12a1d0;
    }
    ctx->pc = 0x12A1C8u;
    {
        const bool branch_taken_0x12a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1c8) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A1D0u;
label_12a1d0:
    // 0x12a1d0: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12a1d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12a1d4:
    // 0x12a1d4: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_12a1d8:
    if (ctx->pc == 0x12A1D8u) {
        ctx->pc = 0x12A1DCu;
        goto label_12a1dc;
    }
    ctx->pc = 0x12A1D4u;
    {
        const bool branch_taken_0x12a1d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1d4) {
            ctx->pc = 0x12A284u;
            goto label_12a284;
        }
    }
    ctx->pc = 0x12A1DCu;
label_12a1dc:
    // 0x12a1dc: 0xc067694  jal         func_19DA50
label_12a1e0:
    if (ctx->pc == 0x12A1E0u) {
        ctx->pc = 0x12A1E4u;
        goto label_12a1e4;
    }
    ctx->pc = 0x12A1DCu;
    SET_GPR_U32(ctx, 31, 0x12A1E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A1DCu, 0x12A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1E4u;
label_12a1e4:
    // 0x12a1e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12a1e8:
    // 0x12a1e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12a1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_12a1ec:
    // 0x12a1ec: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_12a1f0:
    if (ctx->pc == 0x12A1F0u) {
        ctx->pc = 0x12A1F4u;
        goto label_12a1f4;
    }
    ctx->pc = 0x12A1ECu;
    {
        const bool branch_taken_0x12a1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1ec) {
            ctx->pc = 0x12A254u;
            goto label_12a254;
        }
    }
    ctx->pc = 0x12A1F4u;
label_12a1f4:
    // 0x12a1f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a1f8:
    // 0x12a1f8: 0xc04d8bc  jal         func_1362F0
label_12a1fc:
    if (ctx->pc == 0x12A1FCu) {
        ctx->pc = 0x12A200u;
        goto label_12a200;
    }
    ctx->pc = 0x12A1F8u;
    SET_GPR_U32(ctx, 31, 0x12A200u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x12A1F8u, 0x12A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A200u;
label_12a200:
    // 0x12a200: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_12a204:
    if (ctx->pc == 0x12A204u) {
        ctx->pc = 0x12A208u;
        goto label_12a208;
    }
    ctx->pc = 0x12A200u;
    {
        const bool branch_taken_0x12a200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a200) {
            ctx->pc = 0x12A284u;
            goto label_12a284;
        }
    }
    ctx->pc = 0x12A208u;
label_12a208:
    // 0x12a208: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a20c:
    // 0x12a20c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a210:
    // 0x12a210: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a214:
    // 0x12a214: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x12a214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12a218:
    // 0x12a218: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a21c:
    // 0x12a21c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a21cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a220:
    // 0x12a220: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a224:
    // 0x12a224: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a228:
    // 0x12a228: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a22c:
    // 0x12a22c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a22cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a230:
    // 0x12a230: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a234:
    // 0x12a234: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a238:
    // 0x12a238: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a23c:
    // 0x12a23c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_12a240:
    // 0x12a240: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12a240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_12a244:
    // 0x12a244: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_12a248:
    // 0x12a248: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12a248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_12a24c:
    // 0x12a24c: 0x1000000d  b           . + 4 + (0xD << 2)
label_12a250:
    if (ctx->pc == 0x12A250u) {
        ctx->pc = 0x12A254u;
        goto label_12a254;
    }
    ctx->pc = 0x12A24Cu;
    {
        const bool branch_taken_0x12a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a24c) {
            ctx->pc = 0x12A284u;
            goto label_12a284;
        }
    }
    ctx->pc = 0x12A254u;
label_12a254:
    // 0x12a254: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a258:
    // 0x12a258: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a25c:
    // 0x12a25c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a260:
    // 0x12a260: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12a264:
    // 0x12a264: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a268:
    // 0x12a268: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a268u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a26c:
    // 0x12a26c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a270:
    // 0x12a270: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a274:
    // 0x12a274: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a278:
    // 0x12a278: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a27c:
    // 0x12a27c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a280:
    // 0x12a280: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a284:
    // 0x12a284: 0x100000ab  b           . + 4 + (0xAB << 2)
label_12a288:
    if (ctx->pc == 0x12A288u) {
        ctx->pc = 0x12A28Cu;
        goto label_12a28c;
    }
    ctx->pc = 0x12A284u;
    {
        const bool branch_taken_0x12a284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a284) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A28Cu;
label_12a28c:
    // 0x12a28c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a290:
    // 0x12a290: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a294:
    // 0x12a294: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x12a294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
label_12a298:
    // 0x12a298: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12a298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_12a29c:
    // 0x12a29c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a29cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a2a0:
    // 0x12a2a0: 0x0  nop
    ctx->pc = 0x12a2a0u;
    // NOP
label_12a2a4:
    // 0x12a2a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a2a8:
    // 0x12a2a8: 0x0  nop
    ctx->pc = 0x12a2a8u;
    // NOP
label_12a2ac:
    // 0x12a2ac: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_12a2b0:
    if (ctx->pc == 0x12A2B0u) {
        ctx->pc = 0x12A2B4u;
        goto label_12a2b4;
    }
    ctx->pc = 0x12A2ACu;
    {
        const bool branch_taken_0x12a2ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a2ac) {
            ctx->pc = 0x12A348u;
            goto label_12a348;
        }
    }
    ctx->pc = 0x12A2B4u;
label_12a2b4:
    // 0x12a2b4: 0xc067694  jal         func_19DA50
label_12a2b8:
    if (ctx->pc == 0x12A2B8u) {
        ctx->pc = 0x12A2BCu;
        goto label_12a2bc;
    }
    ctx->pc = 0x12A2B4u;
    SET_GPR_U32(ctx, 31, 0x12A2BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A2B4u, 0x12A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A2BCu;
label_12a2bc:
    // 0x12a2bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12a2c0:
    // 0x12a2c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12a2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_12a2c4:
    // 0x12a2c4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_12a2c8:
    if (ctx->pc == 0x12A2C8u) {
        ctx->pc = 0x12A2CCu;
        goto label_12a2cc;
    }
    ctx->pc = 0x12A2C4u;
    {
        const bool branch_taken_0x12a2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a2c4) {
            ctx->pc = 0x12A310u;
            goto label_12a310;
        }
    }
    ctx->pc = 0x12A2CCu;
label_12a2cc:
    // 0x12a2cc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12a2ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12a2d0:
    // 0x12a2d0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_12a2d4:
    if (ctx->pc == 0x12A2D4u) {
        ctx->pc = 0x12A2D8u;
        goto label_12a2d8;
    }
    ctx->pc = 0x12A2D0u;
    {
        const bool branch_taken_0x12a2d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a2d0) {
            ctx->pc = 0x12A340u;
            goto label_12a340;
        }
    }
    ctx->pc = 0x12A2D8u;
label_12a2d8:
    // 0x12a2d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a2dc:
    // 0x12a2dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a2e0:
    // 0x12a2e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a2e4:
    // 0x12a2e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12a2e8:
    // 0x12a2e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a2ec:
    // 0x12a2ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a2f0:
    // 0x12a2f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a2f4:
    // 0x12a2f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a2f8:
    // 0x12a2f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a2fc:
    // 0x12a2fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a300:
    // 0x12a300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a304:
    // 0x12a304: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a308:
    // 0x12a308: 0x1000000d  b           . + 4 + (0xD << 2)
label_12a30c:
    if (ctx->pc == 0x12A30Cu) {
        ctx->pc = 0x12A310u;
        goto label_12a310;
    }
    ctx->pc = 0x12A308u;
    {
        const bool branch_taken_0x12a308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a308) {
            ctx->pc = 0x12A340u;
            goto label_12a340;
        }
    }
    ctx->pc = 0x12A310u;
label_12a310:
    // 0x12a310: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a314:
    // 0x12a314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a318:
    // 0x12a318: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a31c:
    // 0x12a31c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x12a31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_12a320:
    // 0x12a320: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a324:
    // 0x12a324: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a328:
    // 0x12a328: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a32c:
    // 0x12a32c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a32cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a330:
    // 0x12a330: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a334:
    // 0x12a334: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a338:
    // 0x12a338: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a33c:
    // 0x12a33c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a340:
    // 0x12a340: 0x1000007c  b           . + 4 + (0x7C << 2)
label_12a344:
    if (ctx->pc == 0x12A344u) {
        ctx->pc = 0x12A348u;
        goto label_12a348;
    }
    ctx->pc = 0x12A340u;
    {
        const bool branch_taken_0x12a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a340) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A348u;
label_12a348:
    // 0x12a348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a34c:
    // 0x12a34c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a350:
    // 0x12a350: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x12a350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_12a354:
    // 0x12a354: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x12a354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_12a358:
    // 0x12a358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a35c:
    // 0x12a35c: 0x0  nop
    ctx->pc = 0x12a35cu;
    // NOP
label_12a360:
    // 0x12a360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a364:
    // 0x12a364: 0x0  nop
    ctx->pc = 0x12a364u;
    // NOP
label_12a368:
    // 0x12a368: 0x45000072  bc1f        . + 4 + (0x72 << 2)
label_12a36c:
    if (ctx->pc == 0x12A36Cu) {
        ctx->pc = 0x12A370u;
        goto label_12a370;
    }
    ctx->pc = 0x12A368u;
    {
        const bool branch_taken_0x12a368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a368) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A370u;
label_12a370:
    // 0x12a370: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a374:
    // 0x12a374: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a378:
    // 0x12a378: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x12a378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_12a37c:
    // 0x12a37c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_12a380:
    // 0x12a380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a384:
    // 0x12a384: 0x0  nop
    ctx->pc = 0x12a384u;
    // NOP
label_12a388:
    // 0x12a388: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12a388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a38c:
    // 0x12a38c: 0x0  nop
    ctx->pc = 0x12a38cu;
    // NOP
label_12a390:
    // 0x12a390: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_12a394:
    if (ctx->pc == 0x12A394u) {
        ctx->pc = 0x12A398u;
        goto label_12a398;
    }
    ctx->pc = 0x12A390u;
    {
        const bool branch_taken_0x12a390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a390) {
            ctx->pc = 0x12A40Cu;
            goto label_12a40c;
        }
    }
    ctx->pc = 0x12A398u;
label_12a398:
    // 0x12a398: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12a39c:
    // 0x12a39c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x12a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_12a3a0:
    // 0x12a3a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_12a3a4:
    // 0x12a3a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_12a3a8:
    if (ctx->pc == 0x12A3A8u) {
        ctx->pc = 0x12A3ACu;
        goto label_12a3ac;
    }
    ctx->pc = 0x12A3A4u;
    {
        const bool branch_taken_0x12a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a3a4) {
            ctx->pc = 0x12A3BCu;
            goto label_12a3bc;
        }
    }
    ctx->pc = 0x12A3ACu;
label_12a3ac:
    // 0x12a3ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x12a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_12a3b0:
    // 0x12a3b0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_12a3b4:
    // 0x12a3b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_12a3b8:
    if (ctx->pc == 0x12A3B8u) {
        ctx->pc = 0x12A3BCu;
        goto label_12a3bc;
    }
    ctx->pc = 0x12A3B4u;
    {
        const bool branch_taken_0x12a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a3b4) {
            ctx->pc = 0x12A40Cu;
            goto label_12a40c;
        }
    }
    ctx->pc = 0x12A3BCu;
label_12a3bc:
    // 0x12a3bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a3c0:
    // 0x12a3c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a3c4:
    // 0x12a3c4: 0xc05d25c  jal         func_174970
label_12a3c8:
    if (ctx->pc == 0x12A3C8u) {
        ctx->pc = 0x12A3CCu;
        goto label_12a3cc;
    }
    ctx->pc = 0x12A3C4u;
    SET_GPR_U32(ctx, 31, 0x12A3CCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12A3C4u, 0x12A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3CCu;
label_12a3cc:
    // 0x12a3cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_12a3d0:
    if (ctx->pc == 0x12A3D0u) {
        ctx->pc = 0x12A3D4u;
        goto label_12a3d4;
    }
    ctx->pc = 0x12A3CCu;
    {
        const bool branch_taken_0x12a3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a3cc) {
            ctx->pc = 0x12A40Cu;
            goto label_12a40c;
        }
    }
    ctx->pc = 0x12A3D4u;
label_12a3d4:
    // 0x12a3d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a3d8:
    // 0x12a3d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a3dc:
    // 0x12a3dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a3e0:
    // 0x12a3e0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x12a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_12a3e4:
    // 0x12a3e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a3e8:
    // 0x12a3e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a3ec:
    // 0x12a3ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a3f0:
    // 0x12a3f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a3f4:
    // 0x12a3f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a3f8:
    // 0x12a3f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a3fc:
    // 0x12a3fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a400:
    // 0x12a400: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a404:
    // 0x12a404: 0x1000004b  b           . + 4 + (0x4B << 2)
label_12a408:
    if (ctx->pc == 0x12A408u) {
        ctx->pc = 0x12A40Cu;
        goto label_12a40c;
    }
    ctx->pc = 0x12A404u;
    {
        const bool branch_taken_0x12a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a404) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A40Cu;
label_12a40c:
    // 0x12a40c: 0xc067694  jal         func_19DA50
label_12a410:
    if (ctx->pc == 0x12A410u) {
        ctx->pc = 0x12A414u;
        goto label_12a414;
    }
    ctx->pc = 0x12A40Cu;
    SET_GPR_U32(ctx, 31, 0x12A414u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A40Cu, 0x12A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A414u;
label_12a414:
    // 0x12a414: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12a418:
    // 0x12a418: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12a418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_12a41c:
    // 0x12a41c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x12a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_12a420:
    // 0x12a420: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_12a424:
    if (ctx->pc == 0x12A424u) {
        ctx->pc = 0x12A428u;
        goto label_12a428;
    }
    ctx->pc = 0x12A420u;
    {
        const bool branch_taken_0x12a420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12a420) {
            ctx->pc = 0x12A4C4u;
            goto label_12a4c4;
        }
    }
    ctx->pc = 0x12A428u;
label_12a428:
    // 0x12a428: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12a42c:
    // 0x12a42c: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_12a430:
    if (ctx->pc == 0x12A430u) {
        ctx->pc = 0x12A434u;
        goto label_12a434;
    }
    ctx->pc = 0x12A42Cu;
    {
        const bool branch_taken_0x12a42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12a42c) {
            ctx->pc = 0x12A4C4u;
            goto label_12a4c4;
        }
    }
    ctx->pc = 0x12A434u;
label_12a434:
    // 0x12a434: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12a434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12a438:
    // 0x12a438: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_12a43c:
    if (ctx->pc == 0x12A43Cu) {
        ctx->pc = 0x12A440u;
        goto label_12a440;
    }
    ctx->pc = 0x12A438u;
    {
        const bool branch_taken_0x12a438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12a438) {
            ctx->pc = 0x12A4C4u;
            goto label_12a4c4;
        }
    }
    ctx->pc = 0x12A440u;
label_12a440:
    // 0x12a440: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12a440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12a444:
    // 0x12a444: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_12a448:
    if (ctx->pc == 0x12A448u) {
        ctx->pc = 0x12A44Cu;
        goto label_12a44c;
    }
    ctx->pc = 0x12A444u;
    {
        const bool branch_taken_0x12a444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12a444) {
            ctx->pc = 0x12A4C4u;
            goto label_12a4c4;
        }
    }
    ctx->pc = 0x12A44Cu;
label_12a44c:
    // 0x12a44c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_12a450:
    if (ctx->pc == 0x12A450u) {
        ctx->pc = 0x12A454u;
        goto label_12a454;
    }
    ctx->pc = 0x12A44Cu;
    {
        const bool branch_taken_0x12a44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a44c) {
            ctx->pc = 0x12A45Cu;
            goto label_12a45c;
        }
    }
    ctx->pc = 0x12A454u;
label_12a454:
    // 0x12a454: 0x10000027  b           . + 4 + (0x27 << 2)
label_12a458:
    if (ctx->pc == 0x12A458u) {
        ctx->pc = 0x12A45Cu;
        goto label_12a45c;
    }
    ctx->pc = 0x12A454u;
    {
        const bool branch_taken_0x12a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a454) {
            ctx->pc = 0x12A4F4u;
            goto label_12a4f4;
        }
    }
    ctx->pc = 0x12A45Cu;
label_12a45c:
    // 0x12a45c: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
label_12a460:
    if (ctx->pc == 0x12A460u) {
        ctx->pc = 0x12A464u;
        goto label_12a464;
    }
    ctx->pc = 0x12A45Cu;
    {
        const bool branch_taken_0x12a45c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a45c) {
            ctx->pc = 0x12A4BCu;
            goto label_12a4bc;
        }
    }
    ctx->pc = 0x12A464u;
label_12a464:
    // 0x12a464: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12a464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a468:
    // 0x12a468: 0xc04d8bc  jal         func_1362F0
label_12a46c:
    if (ctx->pc == 0x12A46Cu) {
        ctx->pc = 0x12A470u;
        goto label_12a470;
    }
    ctx->pc = 0x12A468u;
    SET_GPR_U32(ctx, 31, 0x12A470u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x12A468u, 0x12A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A470u;
label_12a470:
    // 0x12a470: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_12a474:
    if (ctx->pc == 0x12A474u) {
        ctx->pc = 0x12A478u;
        goto label_12a478;
    }
    ctx->pc = 0x12A470u;
    {
        const bool branch_taken_0x12a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a470) {
            ctx->pc = 0x12A4BCu;
            goto label_12a4bc;
        }
    }
    ctx->pc = 0x12A478u;
label_12a478:
    // 0x12a478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a47c:
    // 0x12a47c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a480:
    // 0x12a480: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a484:
    // 0x12a484: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_12a488:
    // 0x12a488: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a48c:
    // 0x12a48c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a48cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a490:
    // 0x12a490: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a494:
    // 0x12a494: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a498:
    // 0x12a498: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a49c:
    // 0x12a49c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a49cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a4a0:
    // 0x12a4a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a4a4:
    // 0x12a4a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a4a8:
    // 0x12a4a8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a4ac:
    // 0x12a4ac: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_12a4b0:
    // 0x12a4b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_12a4b4:
    // 0x12a4b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_12a4b8:
    // 0x12a4b8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_12a4bc:
    // 0x12a4bc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_12a4c0:
    if (ctx->pc == 0x12A4C0u) {
        ctx->pc = 0x12A4C4u;
        goto label_12a4c4;
    }
    ctx->pc = 0x12A4BCu;
    {
        const bool branch_taken_0x12a4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a4bc) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A4C4u;
label_12a4c4:
    // 0x12a4c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a4c8:
    // 0x12a4c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a4cc:
    // 0x12a4cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a4d0:
    // 0x12a4d0: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x12a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_12a4d4:
    // 0x12a4d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a4d8:
    // 0x12a4d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a4dc:
    // 0x12a4dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a4e0:
    // 0x12a4e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a4e4:
    // 0x12a4e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a4e8:
    // 0x12a4e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a4ec:
    // 0x12a4ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a4f0:
    // 0x12a4f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a4f4:
    // 0x12a4f4: 0x1000000f  b           . + 4 + (0xF << 2)
label_12a4f8:
    if (ctx->pc == 0x12A4F8u) {
        ctx->pc = 0x12A4FCu;
        goto label_12a4fc;
    }
    ctx->pc = 0x12A4F4u;
    {
        const bool branch_taken_0x12a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a4f4) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A4FCu;
label_12a4fc:
    // 0x12a4fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a500:
    // 0x12a500: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a504:
    // 0x12a504: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12a508:
    // 0x12a508: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x12a508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_12a50c:
    // 0x12a50c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a510:
    // 0x12a510: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12a514:
    // 0x12a514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a518:
    // 0x12a518: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12a51c:
    // 0x12a51c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a520:
    // 0x12a520: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12a524:
    // 0x12a524: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a528:
    // 0x12a528: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12a52c:
    // 0x12a52c: 0x10000001  b           . + 4 + (0x1 << 2)
label_12a530:
    if (ctx->pc == 0x12A530u) {
        ctx->pc = 0x12A534u;
        goto label_12a534;
    }
    ctx->pc = 0x12A52Cu;
    {
        const bool branch_taken_0x12a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a52c) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A534u;
label_12a534:
    // 0x12a534: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x12a534u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12a538:
    // 0x12a538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12a538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12a53c:
    // 0x12a53c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12a53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12a540:
    // 0x12a540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12a544:
    // 0x12a544: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12a544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12a548:
    // 0x12a548: 0x3e00008  jr          $ra
label_12a54c:
    if (ctx->pc == 0x12A54Cu) {
        ctx->pc = 0x12A550u;
        goto label_fallthrough_0x12a548;
    }
    ctx->pc = 0x12A548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12a548:
    ctx->pc = 0x12A550u;
}
