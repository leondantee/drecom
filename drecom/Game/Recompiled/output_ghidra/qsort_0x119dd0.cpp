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

// Function: qsort
// Address: 0x119dd0 - 0x11a7f4
void qsort_0x119dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("qsort_0x119dd0");
#endif

    switch (ctx->pc) {
        case 0x119dd0u: goto label_119dd0;
        case 0x119dd4u: goto label_119dd4;
        case 0x119dd8u: goto label_119dd8;
        case 0x119ddcu: goto label_119ddc;
        case 0x119de0u: goto label_119de0;
        case 0x119de4u: goto label_119de4;
        case 0x119de8u: goto label_119de8;
        case 0x119decu: goto label_119dec;
        case 0x119df0u: goto label_119df0;
        case 0x119df4u: goto label_119df4;
        case 0x119df8u: goto label_119df8;
        case 0x119dfcu: goto label_119dfc;
        case 0x119e00u: goto label_119e00;
        case 0x119e04u: goto label_119e04;
        case 0x119e08u: goto label_119e08;
        case 0x119e0cu: goto label_119e0c;
        case 0x119e10u: goto label_119e10;
        case 0x119e14u: goto label_119e14;
        case 0x119e18u: goto label_119e18;
        case 0x119e1cu: goto label_119e1c;
        case 0x119e20u: goto label_119e20;
        case 0x119e24u: goto label_119e24;
        case 0x119e28u: goto label_119e28;
        case 0x119e2cu: goto label_119e2c;
        case 0x119e30u: goto label_119e30;
        case 0x119e34u: goto label_119e34;
        case 0x119e38u: goto label_119e38;
        case 0x119e3cu: goto label_119e3c;
        case 0x119e40u: goto label_119e40;
        case 0x119e44u: goto label_119e44;
        case 0x119e48u: goto label_119e48;
        case 0x119e4cu: goto label_119e4c;
        case 0x119e50u: goto label_119e50;
        case 0x119e54u: goto label_119e54;
        case 0x119e58u: goto label_119e58;
        case 0x119e5cu: goto label_119e5c;
        case 0x119e60u: goto label_119e60;
        case 0x119e64u: goto label_119e64;
        case 0x119e68u: goto label_119e68;
        case 0x119e6cu: goto label_119e6c;
        case 0x119e70u: goto label_119e70;
        case 0x119e74u: goto label_119e74;
        case 0x119e78u: goto label_119e78;
        case 0x119e7cu: goto label_119e7c;
        case 0x119e80u: goto label_119e80;
        case 0x119e84u: goto label_119e84;
        case 0x119e88u: goto label_119e88;
        case 0x119e8cu: goto label_119e8c;
        case 0x119e90u: goto label_119e90;
        case 0x119e94u: goto label_119e94;
        case 0x119e98u: goto label_119e98;
        case 0x119e9cu: goto label_119e9c;
        case 0x119ea0u: goto label_119ea0;
        case 0x119ea4u: goto label_119ea4;
        case 0x119ea8u: goto label_119ea8;
        case 0x119eacu: goto label_119eac;
        case 0x119eb0u: goto label_119eb0;
        case 0x119eb4u: goto label_119eb4;
        case 0x119eb8u: goto label_119eb8;
        case 0x119ebcu: goto label_119ebc;
        case 0x119ec0u: goto label_119ec0;
        case 0x119ec4u: goto label_119ec4;
        case 0x119ec8u: goto label_119ec8;
        case 0x119eccu: goto label_119ecc;
        case 0x119ed0u: goto label_119ed0;
        case 0x119ed4u: goto label_119ed4;
        case 0x119ed8u: goto label_119ed8;
        case 0x119edcu: goto label_119edc;
        case 0x119ee0u: goto label_119ee0;
        case 0x119ee4u: goto label_119ee4;
        case 0x119ee8u: goto label_119ee8;
        case 0x119eecu: goto label_119eec;
        case 0x119ef0u: goto label_119ef0;
        case 0x119ef4u: goto label_119ef4;
        case 0x119ef8u: goto label_119ef8;
        case 0x119efcu: goto label_119efc;
        case 0x119f00u: goto label_119f00;
        case 0x119f04u: goto label_119f04;
        case 0x119f08u: goto label_119f08;
        case 0x119f0cu: goto label_119f0c;
        case 0x119f10u: goto label_119f10;
        case 0x119f14u: goto label_119f14;
        case 0x119f18u: goto label_119f18;
        case 0x119f1cu: goto label_119f1c;
        case 0x119f20u: goto label_119f20;
        case 0x119f24u: goto label_119f24;
        case 0x119f28u: goto label_119f28;
        case 0x119f2cu: goto label_119f2c;
        case 0x119f30u: goto label_119f30;
        case 0x119f34u: goto label_119f34;
        case 0x119f38u: goto label_119f38;
        case 0x119f3cu: goto label_119f3c;
        case 0x119f40u: goto label_119f40;
        case 0x119f44u: goto label_119f44;
        case 0x119f48u: goto label_119f48;
        case 0x119f4cu: goto label_119f4c;
        case 0x119f50u: goto label_119f50;
        case 0x119f54u: goto label_119f54;
        case 0x119f58u: goto label_119f58;
        case 0x119f5cu: goto label_119f5c;
        case 0x119f60u: goto label_119f60;
        case 0x119f64u: goto label_119f64;
        case 0x119f68u: goto label_119f68;
        case 0x119f6cu: goto label_119f6c;
        case 0x119f70u: goto label_119f70;
        case 0x119f74u: goto label_119f74;
        case 0x119f78u: goto label_119f78;
        case 0x119f7cu: goto label_119f7c;
        case 0x119f80u: goto label_119f80;
        case 0x119f84u: goto label_119f84;
        case 0x119f88u: goto label_119f88;
        case 0x119f8cu: goto label_119f8c;
        case 0x119f90u: goto label_119f90;
        case 0x119f94u: goto label_119f94;
        case 0x119f98u: goto label_119f98;
        case 0x119f9cu: goto label_119f9c;
        case 0x119fa0u: goto label_119fa0;
        case 0x119fa4u: goto label_119fa4;
        case 0x119fa8u: goto label_119fa8;
        case 0x119facu: goto label_119fac;
        case 0x119fb0u: goto label_119fb0;
        case 0x119fb4u: goto label_119fb4;
        case 0x119fb8u: goto label_119fb8;
        case 0x119fbcu: goto label_119fbc;
        case 0x119fc0u: goto label_119fc0;
        case 0x119fc4u: goto label_119fc4;
        case 0x119fc8u: goto label_119fc8;
        case 0x119fccu: goto label_119fcc;
        case 0x119fd0u: goto label_119fd0;
        case 0x119fd4u: goto label_119fd4;
        case 0x119fd8u: goto label_119fd8;
        case 0x119fdcu: goto label_119fdc;
        case 0x119fe0u: goto label_119fe0;
        case 0x119fe4u: goto label_119fe4;
        case 0x119fe8u: goto label_119fe8;
        case 0x119fecu: goto label_119fec;
        case 0x119ff0u: goto label_119ff0;
        case 0x119ff4u: goto label_119ff4;
        case 0x119ff8u: goto label_119ff8;
        case 0x119ffcu: goto label_119ffc;
        case 0x11a000u: goto label_11a000;
        case 0x11a004u: goto label_11a004;
        case 0x11a008u: goto label_11a008;
        case 0x11a00cu: goto label_11a00c;
        case 0x11a010u: goto label_11a010;
        case 0x11a014u: goto label_11a014;
        case 0x11a018u: goto label_11a018;
        case 0x11a01cu: goto label_11a01c;
        case 0x11a020u: goto label_11a020;
        case 0x11a024u: goto label_11a024;
        case 0x11a028u: goto label_11a028;
        case 0x11a02cu: goto label_11a02c;
        case 0x11a030u: goto label_11a030;
        case 0x11a034u: goto label_11a034;
        case 0x11a038u: goto label_11a038;
        case 0x11a03cu: goto label_11a03c;
        case 0x11a040u: goto label_11a040;
        case 0x11a044u: goto label_11a044;
        case 0x11a048u: goto label_11a048;
        case 0x11a04cu: goto label_11a04c;
        case 0x11a050u: goto label_11a050;
        case 0x11a054u: goto label_11a054;
        case 0x11a058u: goto label_11a058;
        case 0x11a05cu: goto label_11a05c;
        case 0x11a060u: goto label_11a060;
        case 0x11a064u: goto label_11a064;
        case 0x11a068u: goto label_11a068;
        case 0x11a06cu: goto label_11a06c;
        case 0x11a070u: goto label_11a070;
        case 0x11a074u: goto label_11a074;
        case 0x11a078u: goto label_11a078;
        case 0x11a07cu: goto label_11a07c;
        case 0x11a080u: goto label_11a080;
        case 0x11a084u: goto label_11a084;
        case 0x11a088u: goto label_11a088;
        case 0x11a08cu: goto label_11a08c;
        case 0x11a090u: goto label_11a090;
        case 0x11a094u: goto label_11a094;
        case 0x11a098u: goto label_11a098;
        case 0x11a09cu: goto label_11a09c;
        case 0x11a0a0u: goto label_11a0a0;
        case 0x11a0a4u: goto label_11a0a4;
        case 0x11a0a8u: goto label_11a0a8;
        case 0x11a0acu: goto label_11a0ac;
        case 0x11a0b0u: goto label_11a0b0;
        case 0x11a0b4u: goto label_11a0b4;
        case 0x11a0b8u: goto label_11a0b8;
        case 0x11a0bcu: goto label_11a0bc;
        case 0x11a0c0u: goto label_11a0c0;
        case 0x11a0c4u: goto label_11a0c4;
        case 0x11a0c8u: goto label_11a0c8;
        case 0x11a0ccu: goto label_11a0cc;
        case 0x11a0d0u: goto label_11a0d0;
        case 0x11a0d4u: goto label_11a0d4;
        case 0x11a0d8u: goto label_11a0d8;
        case 0x11a0dcu: goto label_11a0dc;
        case 0x11a0e0u: goto label_11a0e0;
        case 0x11a0e4u: goto label_11a0e4;
        case 0x11a0e8u: goto label_11a0e8;
        case 0x11a0ecu: goto label_11a0ec;
        case 0x11a0f0u: goto label_11a0f0;
        case 0x11a0f4u: goto label_11a0f4;
        case 0x11a0f8u: goto label_11a0f8;
        case 0x11a0fcu: goto label_11a0fc;
        case 0x11a100u: goto label_11a100;
        case 0x11a104u: goto label_11a104;
        case 0x11a108u: goto label_11a108;
        case 0x11a10cu: goto label_11a10c;
        case 0x11a110u: goto label_11a110;
        case 0x11a114u: goto label_11a114;
        case 0x11a118u: goto label_11a118;
        case 0x11a11cu: goto label_11a11c;
        case 0x11a120u: goto label_11a120;
        case 0x11a124u: goto label_11a124;
        case 0x11a128u: goto label_11a128;
        case 0x11a12cu: goto label_11a12c;
        case 0x11a130u: goto label_11a130;
        case 0x11a134u: goto label_11a134;
        case 0x11a138u: goto label_11a138;
        case 0x11a13cu: goto label_11a13c;
        case 0x11a140u: goto label_11a140;
        case 0x11a144u: goto label_11a144;
        case 0x11a148u: goto label_11a148;
        case 0x11a14cu: goto label_11a14c;
        case 0x11a150u: goto label_11a150;
        case 0x11a154u: goto label_11a154;
        case 0x11a158u: goto label_11a158;
        case 0x11a15cu: goto label_11a15c;
        case 0x11a160u: goto label_11a160;
        case 0x11a164u: goto label_11a164;
        case 0x11a168u: goto label_11a168;
        case 0x11a16cu: goto label_11a16c;
        case 0x11a170u: goto label_11a170;
        case 0x11a174u: goto label_11a174;
        case 0x11a178u: goto label_11a178;
        case 0x11a17cu: goto label_11a17c;
        case 0x11a180u: goto label_11a180;
        case 0x11a184u: goto label_11a184;
        case 0x11a188u: goto label_11a188;
        case 0x11a18cu: goto label_11a18c;
        case 0x11a190u: goto label_11a190;
        case 0x11a194u: goto label_11a194;
        case 0x11a198u: goto label_11a198;
        case 0x11a19cu: goto label_11a19c;
        case 0x11a1a0u: goto label_11a1a0;
        case 0x11a1a4u: goto label_11a1a4;
        case 0x11a1a8u: goto label_11a1a8;
        case 0x11a1acu: goto label_11a1ac;
        case 0x11a1b0u: goto label_11a1b0;
        case 0x11a1b4u: goto label_11a1b4;
        case 0x11a1b8u: goto label_11a1b8;
        case 0x11a1bcu: goto label_11a1bc;
        case 0x11a1c0u: goto label_11a1c0;
        case 0x11a1c4u: goto label_11a1c4;
        case 0x11a1c8u: goto label_11a1c8;
        case 0x11a1ccu: goto label_11a1cc;
        case 0x11a1d0u: goto label_11a1d0;
        case 0x11a1d4u: goto label_11a1d4;
        case 0x11a1d8u: goto label_11a1d8;
        case 0x11a1dcu: goto label_11a1dc;
        case 0x11a1e0u: goto label_11a1e0;
        case 0x11a1e4u: goto label_11a1e4;
        case 0x11a1e8u: goto label_11a1e8;
        case 0x11a1ecu: goto label_11a1ec;
        case 0x11a1f0u: goto label_11a1f0;
        case 0x11a1f4u: goto label_11a1f4;
        case 0x11a1f8u: goto label_11a1f8;
        case 0x11a1fcu: goto label_11a1fc;
        case 0x11a200u: goto label_11a200;
        case 0x11a204u: goto label_11a204;
        case 0x11a208u: goto label_11a208;
        case 0x11a20cu: goto label_11a20c;
        case 0x11a210u: goto label_11a210;
        case 0x11a214u: goto label_11a214;
        case 0x11a218u: goto label_11a218;
        case 0x11a21cu: goto label_11a21c;
        case 0x11a220u: goto label_11a220;
        case 0x11a224u: goto label_11a224;
        case 0x11a228u: goto label_11a228;
        case 0x11a22cu: goto label_11a22c;
        case 0x11a230u: goto label_11a230;
        case 0x11a234u: goto label_11a234;
        case 0x11a238u: goto label_11a238;
        case 0x11a23cu: goto label_11a23c;
        case 0x11a240u: goto label_11a240;
        case 0x11a244u: goto label_11a244;
        case 0x11a248u: goto label_11a248;
        case 0x11a24cu: goto label_11a24c;
        case 0x11a250u: goto label_11a250;
        case 0x11a254u: goto label_11a254;
        case 0x11a258u: goto label_11a258;
        case 0x11a25cu: goto label_11a25c;
        case 0x11a260u: goto label_11a260;
        case 0x11a264u: goto label_11a264;
        case 0x11a268u: goto label_11a268;
        case 0x11a26cu: goto label_11a26c;
        case 0x11a270u: goto label_11a270;
        case 0x11a274u: goto label_11a274;
        case 0x11a278u: goto label_11a278;
        case 0x11a27cu: goto label_11a27c;
        case 0x11a280u: goto label_11a280;
        case 0x11a284u: goto label_11a284;
        case 0x11a288u: goto label_11a288;
        case 0x11a28cu: goto label_11a28c;
        case 0x11a290u: goto label_11a290;
        case 0x11a294u: goto label_11a294;
        case 0x11a298u: goto label_11a298;
        case 0x11a29cu: goto label_11a29c;
        case 0x11a2a0u: goto label_11a2a0;
        case 0x11a2a4u: goto label_11a2a4;
        case 0x11a2a8u: goto label_11a2a8;
        case 0x11a2acu: goto label_11a2ac;
        case 0x11a2b0u: goto label_11a2b0;
        case 0x11a2b4u: goto label_11a2b4;
        case 0x11a2b8u: goto label_11a2b8;
        case 0x11a2bcu: goto label_11a2bc;
        case 0x11a2c0u: goto label_11a2c0;
        case 0x11a2c4u: goto label_11a2c4;
        case 0x11a2c8u: goto label_11a2c8;
        case 0x11a2ccu: goto label_11a2cc;
        case 0x11a2d0u: goto label_11a2d0;
        case 0x11a2d4u: goto label_11a2d4;
        case 0x11a2d8u: goto label_11a2d8;
        case 0x11a2dcu: goto label_11a2dc;
        case 0x11a2e0u: goto label_11a2e0;
        case 0x11a2e4u: goto label_11a2e4;
        case 0x11a2e8u: goto label_11a2e8;
        case 0x11a2ecu: goto label_11a2ec;
        case 0x11a2f0u: goto label_11a2f0;
        case 0x11a2f4u: goto label_11a2f4;
        case 0x11a2f8u: goto label_11a2f8;
        case 0x11a2fcu: goto label_11a2fc;
        case 0x11a300u: goto label_11a300;
        case 0x11a304u: goto label_11a304;
        case 0x11a308u: goto label_11a308;
        case 0x11a30cu: goto label_11a30c;
        case 0x11a310u: goto label_11a310;
        case 0x11a314u: goto label_11a314;
        case 0x11a318u: goto label_11a318;
        case 0x11a31cu: goto label_11a31c;
        case 0x11a320u: goto label_11a320;
        case 0x11a324u: goto label_11a324;
        case 0x11a328u: goto label_11a328;
        case 0x11a32cu: goto label_11a32c;
        case 0x11a330u: goto label_11a330;
        case 0x11a334u: goto label_11a334;
        case 0x11a338u: goto label_11a338;
        case 0x11a33cu: goto label_11a33c;
        case 0x11a340u: goto label_11a340;
        case 0x11a344u: goto label_11a344;
        case 0x11a348u: goto label_11a348;
        case 0x11a34cu: goto label_11a34c;
        case 0x11a350u: goto label_11a350;
        case 0x11a354u: goto label_11a354;
        case 0x11a358u: goto label_11a358;
        case 0x11a35cu: goto label_11a35c;
        case 0x11a360u: goto label_11a360;
        case 0x11a364u: goto label_11a364;
        case 0x11a368u: goto label_11a368;
        case 0x11a36cu: goto label_11a36c;
        case 0x11a370u: goto label_11a370;
        case 0x11a374u: goto label_11a374;
        case 0x11a378u: goto label_11a378;
        case 0x11a37cu: goto label_11a37c;
        case 0x11a380u: goto label_11a380;
        case 0x11a384u: goto label_11a384;
        case 0x11a388u: goto label_11a388;
        case 0x11a38cu: goto label_11a38c;
        case 0x11a390u: goto label_11a390;
        case 0x11a394u: goto label_11a394;
        case 0x11a398u: goto label_11a398;
        case 0x11a39cu: goto label_11a39c;
        case 0x11a3a0u: goto label_11a3a0;
        case 0x11a3a4u: goto label_11a3a4;
        case 0x11a3a8u: goto label_11a3a8;
        case 0x11a3acu: goto label_11a3ac;
        case 0x11a3b0u: goto label_11a3b0;
        case 0x11a3b4u: goto label_11a3b4;
        case 0x11a3b8u: goto label_11a3b8;
        case 0x11a3bcu: goto label_11a3bc;
        case 0x11a3c0u: goto label_11a3c0;
        case 0x11a3c4u: goto label_11a3c4;
        case 0x11a3c8u: goto label_11a3c8;
        case 0x11a3ccu: goto label_11a3cc;
        case 0x11a3d0u: goto label_11a3d0;
        case 0x11a3d4u: goto label_11a3d4;
        case 0x11a3d8u: goto label_11a3d8;
        case 0x11a3dcu: goto label_11a3dc;
        case 0x11a3e0u: goto label_11a3e0;
        case 0x11a3e4u: goto label_11a3e4;
        case 0x11a3e8u: goto label_11a3e8;
        case 0x11a3ecu: goto label_11a3ec;
        case 0x11a3f0u: goto label_11a3f0;
        case 0x11a3f4u: goto label_11a3f4;
        case 0x11a3f8u: goto label_11a3f8;
        case 0x11a3fcu: goto label_11a3fc;
        case 0x11a400u: goto label_11a400;
        case 0x11a404u: goto label_11a404;
        case 0x11a408u: goto label_11a408;
        case 0x11a40cu: goto label_11a40c;
        case 0x11a410u: goto label_11a410;
        case 0x11a414u: goto label_11a414;
        case 0x11a418u: goto label_11a418;
        case 0x11a41cu: goto label_11a41c;
        case 0x11a420u: goto label_11a420;
        case 0x11a424u: goto label_11a424;
        case 0x11a428u: goto label_11a428;
        case 0x11a42cu: goto label_11a42c;
        case 0x11a430u: goto label_11a430;
        case 0x11a434u: goto label_11a434;
        case 0x11a438u: goto label_11a438;
        case 0x11a43cu: goto label_11a43c;
        case 0x11a440u: goto label_11a440;
        case 0x11a444u: goto label_11a444;
        case 0x11a448u: goto label_11a448;
        case 0x11a44cu: goto label_11a44c;
        case 0x11a450u: goto label_11a450;
        case 0x11a454u: goto label_11a454;
        case 0x11a458u: goto label_11a458;
        case 0x11a45cu: goto label_11a45c;
        case 0x11a460u: goto label_11a460;
        case 0x11a464u: goto label_11a464;
        case 0x11a468u: goto label_11a468;
        case 0x11a46cu: goto label_11a46c;
        case 0x11a470u: goto label_11a470;
        case 0x11a474u: goto label_11a474;
        case 0x11a478u: goto label_11a478;
        case 0x11a47cu: goto label_11a47c;
        case 0x11a480u: goto label_11a480;
        case 0x11a484u: goto label_11a484;
        case 0x11a488u: goto label_11a488;
        case 0x11a48cu: goto label_11a48c;
        case 0x11a490u: goto label_11a490;
        case 0x11a494u: goto label_11a494;
        case 0x11a498u: goto label_11a498;
        case 0x11a49cu: goto label_11a49c;
        case 0x11a4a0u: goto label_11a4a0;
        case 0x11a4a4u: goto label_11a4a4;
        case 0x11a4a8u: goto label_11a4a8;
        case 0x11a4acu: goto label_11a4ac;
        case 0x11a4b0u: goto label_11a4b0;
        case 0x11a4b4u: goto label_11a4b4;
        case 0x11a4b8u: goto label_11a4b8;
        case 0x11a4bcu: goto label_11a4bc;
        case 0x11a4c0u: goto label_11a4c0;
        case 0x11a4c4u: goto label_11a4c4;
        case 0x11a4c8u: goto label_11a4c8;
        case 0x11a4ccu: goto label_11a4cc;
        case 0x11a4d0u: goto label_11a4d0;
        case 0x11a4d4u: goto label_11a4d4;
        case 0x11a4d8u: goto label_11a4d8;
        case 0x11a4dcu: goto label_11a4dc;
        case 0x11a4e0u: goto label_11a4e0;
        case 0x11a4e4u: goto label_11a4e4;
        case 0x11a4e8u: goto label_11a4e8;
        case 0x11a4ecu: goto label_11a4ec;
        case 0x11a4f0u: goto label_11a4f0;
        case 0x11a4f4u: goto label_11a4f4;
        case 0x11a4f8u: goto label_11a4f8;
        case 0x11a4fcu: goto label_11a4fc;
        case 0x11a500u: goto label_11a500;
        case 0x11a504u: goto label_11a504;
        case 0x11a508u: goto label_11a508;
        case 0x11a50cu: goto label_11a50c;
        case 0x11a510u: goto label_11a510;
        case 0x11a514u: goto label_11a514;
        case 0x11a518u: goto label_11a518;
        case 0x11a51cu: goto label_11a51c;
        case 0x11a520u: goto label_11a520;
        case 0x11a524u: goto label_11a524;
        case 0x11a528u: goto label_11a528;
        case 0x11a52cu: goto label_11a52c;
        case 0x11a530u: goto label_11a530;
        case 0x11a534u: goto label_11a534;
        case 0x11a538u: goto label_11a538;
        case 0x11a53cu: goto label_11a53c;
        case 0x11a540u: goto label_11a540;
        case 0x11a544u: goto label_11a544;
        case 0x11a548u: goto label_11a548;
        case 0x11a54cu: goto label_11a54c;
        case 0x11a550u: goto label_11a550;
        case 0x11a554u: goto label_11a554;
        case 0x11a558u: goto label_11a558;
        case 0x11a55cu: goto label_11a55c;
        case 0x11a560u: goto label_11a560;
        case 0x11a564u: goto label_11a564;
        case 0x11a568u: goto label_11a568;
        case 0x11a56cu: goto label_11a56c;
        case 0x11a570u: goto label_11a570;
        case 0x11a574u: goto label_11a574;
        case 0x11a578u: goto label_11a578;
        case 0x11a57cu: goto label_11a57c;
        case 0x11a580u: goto label_11a580;
        case 0x11a584u: goto label_11a584;
        case 0x11a588u: goto label_11a588;
        case 0x11a58cu: goto label_11a58c;
        case 0x11a590u: goto label_11a590;
        case 0x11a594u: goto label_11a594;
        case 0x11a598u: goto label_11a598;
        case 0x11a59cu: goto label_11a59c;
        case 0x11a5a0u: goto label_11a5a0;
        case 0x11a5a4u: goto label_11a5a4;
        case 0x11a5a8u: goto label_11a5a8;
        case 0x11a5acu: goto label_11a5ac;
        case 0x11a5b0u: goto label_11a5b0;
        case 0x11a5b4u: goto label_11a5b4;
        case 0x11a5b8u: goto label_11a5b8;
        case 0x11a5bcu: goto label_11a5bc;
        case 0x11a5c0u: goto label_11a5c0;
        case 0x11a5c4u: goto label_11a5c4;
        case 0x11a5c8u: goto label_11a5c8;
        case 0x11a5ccu: goto label_11a5cc;
        case 0x11a5d0u: goto label_11a5d0;
        case 0x11a5d4u: goto label_11a5d4;
        case 0x11a5d8u: goto label_11a5d8;
        case 0x11a5dcu: goto label_11a5dc;
        case 0x11a5e0u: goto label_11a5e0;
        case 0x11a5e4u: goto label_11a5e4;
        case 0x11a5e8u: goto label_11a5e8;
        case 0x11a5ecu: goto label_11a5ec;
        case 0x11a5f0u: goto label_11a5f0;
        case 0x11a5f4u: goto label_11a5f4;
        case 0x11a5f8u: goto label_11a5f8;
        case 0x11a5fcu: goto label_11a5fc;
        case 0x11a600u: goto label_11a600;
        case 0x11a604u: goto label_11a604;
        case 0x11a608u: goto label_11a608;
        case 0x11a60cu: goto label_11a60c;
        case 0x11a610u: goto label_11a610;
        case 0x11a614u: goto label_11a614;
        case 0x11a618u: goto label_11a618;
        case 0x11a61cu: goto label_11a61c;
        case 0x11a620u: goto label_11a620;
        case 0x11a624u: goto label_11a624;
        case 0x11a628u: goto label_11a628;
        case 0x11a62cu: goto label_11a62c;
        case 0x11a630u: goto label_11a630;
        case 0x11a634u: goto label_11a634;
        case 0x11a638u: goto label_11a638;
        case 0x11a63cu: goto label_11a63c;
        case 0x11a640u: goto label_11a640;
        case 0x11a644u: goto label_11a644;
        case 0x11a648u: goto label_11a648;
        case 0x11a64cu: goto label_11a64c;
        case 0x11a650u: goto label_11a650;
        case 0x11a654u: goto label_11a654;
        case 0x11a658u: goto label_11a658;
        case 0x11a65cu: goto label_11a65c;
        case 0x11a660u: goto label_11a660;
        case 0x11a664u: goto label_11a664;
        case 0x11a668u: goto label_11a668;
        case 0x11a66cu: goto label_11a66c;
        case 0x11a670u: goto label_11a670;
        case 0x11a674u: goto label_11a674;
        case 0x11a678u: goto label_11a678;
        case 0x11a67cu: goto label_11a67c;
        case 0x11a680u: goto label_11a680;
        case 0x11a684u: goto label_11a684;
        case 0x11a688u: goto label_11a688;
        case 0x11a68cu: goto label_11a68c;
        case 0x11a690u: goto label_11a690;
        case 0x11a694u: goto label_11a694;
        case 0x11a698u: goto label_11a698;
        case 0x11a69cu: goto label_11a69c;
        case 0x11a6a0u: goto label_11a6a0;
        case 0x11a6a4u: goto label_11a6a4;
        case 0x11a6a8u: goto label_11a6a8;
        case 0x11a6acu: goto label_11a6ac;
        case 0x11a6b0u: goto label_11a6b0;
        case 0x11a6b4u: goto label_11a6b4;
        case 0x11a6b8u: goto label_11a6b8;
        case 0x11a6bcu: goto label_11a6bc;
        case 0x11a6c0u: goto label_11a6c0;
        case 0x11a6c4u: goto label_11a6c4;
        case 0x11a6c8u: goto label_11a6c8;
        case 0x11a6ccu: goto label_11a6cc;
        case 0x11a6d0u: goto label_11a6d0;
        case 0x11a6d4u: goto label_11a6d4;
        case 0x11a6d8u: goto label_11a6d8;
        case 0x11a6dcu: goto label_11a6dc;
        case 0x11a6e0u: goto label_11a6e0;
        case 0x11a6e4u: goto label_11a6e4;
        case 0x11a6e8u: goto label_11a6e8;
        case 0x11a6ecu: goto label_11a6ec;
        case 0x11a6f0u: goto label_11a6f0;
        case 0x11a6f4u: goto label_11a6f4;
        case 0x11a6f8u: goto label_11a6f8;
        case 0x11a6fcu: goto label_11a6fc;
        case 0x11a700u: goto label_11a700;
        case 0x11a704u: goto label_11a704;
        case 0x11a708u: goto label_11a708;
        case 0x11a70cu: goto label_11a70c;
        case 0x11a710u: goto label_11a710;
        case 0x11a714u: goto label_11a714;
        case 0x11a718u: goto label_11a718;
        case 0x11a71cu: goto label_11a71c;
        case 0x11a720u: goto label_11a720;
        case 0x11a724u: goto label_11a724;
        case 0x11a728u: goto label_11a728;
        case 0x11a72cu: goto label_11a72c;
        case 0x11a730u: goto label_11a730;
        case 0x11a734u: goto label_11a734;
        case 0x11a738u: goto label_11a738;
        case 0x11a73cu: goto label_11a73c;
        case 0x11a740u: goto label_11a740;
        case 0x11a744u: goto label_11a744;
        case 0x11a748u: goto label_11a748;
        case 0x11a74cu: goto label_11a74c;
        case 0x11a750u: goto label_11a750;
        case 0x11a754u: goto label_11a754;
        case 0x11a758u: goto label_11a758;
        case 0x11a75cu: goto label_11a75c;
        case 0x11a760u: goto label_11a760;
        case 0x11a764u: goto label_11a764;
        case 0x11a768u: goto label_11a768;
        case 0x11a76cu: goto label_11a76c;
        case 0x11a770u: goto label_11a770;
        case 0x11a774u: goto label_11a774;
        case 0x11a778u: goto label_11a778;
        case 0x11a77cu: goto label_11a77c;
        case 0x11a780u: goto label_11a780;
        case 0x11a784u: goto label_11a784;
        case 0x11a788u: goto label_11a788;
        case 0x11a78cu: goto label_11a78c;
        case 0x11a790u: goto label_11a790;
        case 0x11a794u: goto label_11a794;
        case 0x11a798u: goto label_11a798;
        case 0x11a79cu: goto label_11a79c;
        case 0x11a7a0u: goto label_11a7a0;
        case 0x11a7a4u: goto label_11a7a4;
        case 0x11a7a8u: goto label_11a7a8;
        case 0x11a7acu: goto label_11a7ac;
        case 0x11a7b0u: goto label_11a7b0;
        case 0x11a7b4u: goto label_11a7b4;
        case 0x11a7b8u: goto label_11a7b8;
        case 0x11a7bcu: goto label_11a7bc;
        case 0x11a7c0u: goto label_11a7c0;
        case 0x11a7c4u: goto label_11a7c4;
        case 0x11a7c8u: goto label_11a7c8;
        case 0x11a7ccu: goto label_11a7cc;
        case 0x11a7d0u: goto label_11a7d0;
        case 0x11a7d4u: goto label_11a7d4;
        case 0x11a7d8u: goto label_11a7d8;
        case 0x11a7dcu: goto label_11a7dc;
        case 0x11a7e0u: goto label_11a7e0;
        case 0x11a7e4u: goto label_11a7e4;
        case 0x11a7e8u: goto label_11a7e8;
        case 0x11a7ecu: goto label_11a7ec;
        case 0x11a7f0u: goto label_11a7f0;
        default: break;
    }

    ctx->pc = 0x119dd0u;

label_119dd0:
    // 0x119dd0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x119dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_119dd4:
    // 0x119dd4: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x119dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
label_119dd8:
    // 0x119dd8: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x119dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
label_119ddc:
    // 0x119ddc: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x119ddcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_119de0:
    // 0x119de0: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x119de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
label_119de4:
    // 0x119de4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x119de4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119de8:
    // 0x119de8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x119de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_119dec:
    // 0x119dec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x119decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_119df0:
    // 0x119df0: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x119df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
label_119df4:
    // 0x119df4: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x119df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
label_119df8:
    // 0x119df8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x119df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_119dfc:
    // 0x119dfc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x119dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_119e00:
    // 0x119e00: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x119e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_119e04:
    // 0x119e04: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x119e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_119e08:
    // 0x119e08: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x119e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_119e0c:
    // 0x119e0c: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x119e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_119e10:
    // 0x119e10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_119e14:
    if (ctx->pc == 0x119E14u) {
        ctx->pc = 0x119E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E10u;
        // 0x119e14: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119E18u;
        goto label_119e18;
    }
    ctx->pc = 0x119E10u;
    {
        const bool branch_taken_0x119e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E10u;
        // 0x119e14: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e10) {
            ctx->pc = 0x119E30u;
            goto label_119e30;
        }
    }
    ctx->pc = 0x119E18u;
label_119e18:
    // 0x119e18: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x119e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_119e1c:
    // 0x119e1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_119e20:
    if (ctx->pc == 0x119E20u) {
        ctx->pc = 0x119E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E1Cu;
        // 0x119e20: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119E24u;
        goto label_119e24;
    }
    ctx->pc = 0x119E1Cu;
    {
        const bool branch_taken_0x119e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E1Cu;
        // 0x119e20: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e1c) {
            ctx->pc = 0x119E34u;
            goto label_119e34;
        }
    }
    ctx->pc = 0x119E24u;
label_119e24:
    // 0x119e24: 0x3a620008  xori        $v0, $s3, 0x8
    ctx->pc = 0x119e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
label_119e28:
    // 0x119e28: 0x10000002  b           . + 4 + (0x2 << 2)
label_119e2c:
    if (ctx->pc == 0x119E2Cu) {
        ctx->pc = 0x119E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E28u;
        // 0x119e2c: 0x2f02b  sltu        $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x119E30u;
        goto label_119e30;
    }
    ctx->pc = 0x119E28u;
    {
        const bool branch_taken_0x119e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E28u;
        // 0x119e2c: 0x2f02b  sltu        $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e28) {
            ctx->pc = 0x119E34u;
            goto label_119e34;
        }
    }
    ctx->pc = 0x119E30u;
label_119e30:
    // 0x119e30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x119e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119e34:
    // 0x119e34: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x119e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_119e38:
    // 0x119e38: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_119e3c:
    if (ctx->pc == 0x119E3Cu) {
        ctx->pc = 0x119E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E38u;
        // 0x119e3c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119E40u;
        goto label_119e40;
    }
    ctx->pc = 0x119E38u;
    {
        const bool branch_taken_0x119e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E38u;
        // 0x119e3c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e38) {
            ctx->pc = 0x119F40u;
            goto label_119f40;
        }
    }
    ctx->pc = 0x119E40u;
label_119e40:
    // 0x119e40: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x119e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_119e44:
    // 0x119e44: 0x2d38021  addu        $s0, $s6, $s3
    ctx->pc = 0x119e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_119e48:
    // 0x119e48: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x119e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_119e4c:
    // 0x119e4c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x119e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_119e50:
    // 0x119e50: 0x1040025c  beqz        $v0, . + 4 + (0x25C << 2)
label_119e54:
    if (ctx->pc == 0x119E54u) {
        ctx->pc = 0x119E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E50u;
        // 0x119e54: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119E58u;
        goto label_119e58;
    }
    ctx->pc = 0x119E50u;
    {
        const bool branch_taken_0x119e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E50u;
        // 0x119e54: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e50) {
            ctx->pc = 0x11A7C4u;
            goto label_11a7c4;
        }
    }
    ctx->pc = 0x119E58u;
label_119e58:
    // 0x119e58: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x119e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_119e5c:
    // 0x119e5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x119e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_119e60:
    // 0x119e60: 0x2bd50002  slti        $s5, $fp, 0x2
    ctx->pc = 0x119e60u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_119e64:
    // 0x119e64: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x119e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_119e68:
    // 0x119e68: 0x13a03c  dsll32      $s4, $s3, 0
    ctx->pc = 0x119e68u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << (32 + 0));
label_119e6c:
    // 0x119e6c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x119e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119e70:
    // 0x119e70: 0x10000024  b           . + 4 + (0x24 << 2)
label_119e74:
    if (ctx->pc == 0x119E74u) {
        ctx->pc = 0x119E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E70u;
        // 0x119e74: 0x2139021  addu        $s2, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119E78u;
        goto label_119e78;
    }
    ctx->pc = 0x119E70u;
    {
        const bool branch_taken_0x119e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E70u;
        // 0x119e74: 0x2139021  addu        $s2, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e70) {
            ctx->pc = 0x119F04u;
            goto label_119f04;
        }
    }
    ctx->pc = 0x119E78u;
label_119e78:
    // 0x119e78: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
label_119e7c:
    if (ctx->pc == 0x119E7Cu) {
        ctx->pc = 0x119E80u;
        goto label_119e80;
    }
    ctx->pc = 0x119E78u;
    {
        const bool branch_taken_0x119e78 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x119e78) {
            ctx->pc = 0x119E94u;
            goto label_119e94;
        }
    }
    ctx->pc = 0x119E80u;
label_119e80:
    // 0x119e80: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x119e80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_119e84:
    // 0x119e84: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x119e84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_119e88:
    // 0x119e88: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x119e88u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_119e8c:
    // 0x119e8c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_119e90:
    if (ctx->pc == 0x119E90u) {
        ctx->pc = 0x119E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E8Cu;
        // 0x119e90: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119E94u;
        goto label_119e94;
    }
    ctx->pc = 0x119E8Cu;
    {
        const bool branch_taken_0x119e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E8Cu;
        // 0x119e90: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e8c) {
            ctx->pc = 0x119F00u;
            goto label_119f00;
        }
    }
    ctx->pc = 0x119E94u;
label_119e94:
    // 0x119e94: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_119e98:
    if (ctx->pc == 0x119E98u) {
        ctx->pc = 0x119E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E94u;
        // 0x119e98: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119E9Cu;
        goto label_119e9c;
    }
    ctx->pc = 0x119E94u;
    {
        const bool branch_taken_0x119e94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E94u;
        // 0x119e98: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e94) {
            ctx->pc = 0x119ED0u;
            goto label_119ed0;
        }
    }
    ctx->pc = 0x119E9Cu;
label_119e9c:
    // 0x119e9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119ea0:
    // 0x119ea0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x119ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119ea4:
    // 0x119ea4: 0x3283e  dsrl32      $a1, $v1, 0
    ctx->pc = 0x119ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> (32 + 0));
label_119ea8:
    // 0x119ea8: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x119ea8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_119eac:
    // 0x119eac: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x119eacu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_119eb0:
    // 0x119eb0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x119eb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_119eb4:
    // 0x119eb4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x119eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_119eb8:
    // 0x119eb8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x119eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_119ebc:
    // 0x119ebc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x119ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_119ec0:
    // 0x119ec0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_119ec4:
    if (ctx->pc == 0x119EC4u) {
        ctx->pc = 0x119EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EC0u;
        // 0x119ec4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119EC8u;
        goto label_119ec8;
    }
    ctx->pc = 0x119EC0u;
    {
        const bool branch_taken_0x119ec0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x119EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EC0u;
        // 0x119ec4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ec0) {
            ctx->pc = 0x119EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119ea8;
        }
    }
    ctx->pc = 0x119EC8u;
label_119ec8:
    // 0x119ec8: 0x1000000e  b           . + 4 + (0xE << 2)
label_119ecc:
    if (ctx->pc == 0x119ECCu) {
        ctx->pc = 0x119ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EC8u;
        // 0x119ecc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119ED0u;
        goto label_119ed0;
    }
    ctx->pc = 0x119EC8u;
    {
        const bool branch_taken_0x119ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EC8u;
        // 0x119ecc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ec8) {
            ctx->pc = 0x119F04u;
            goto label_119f04;
        }
    }
    ctx->pc = 0x119ED0u;
label_119ed0:
    // 0x119ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119ed4:
    // 0x119ed4: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x119ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
label_119ed8:
    // 0x119ed8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x119ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119edc:
    // 0x119edc: 0x0  nop
    ctx->pc = 0x119edcu;
    // NOP
label_119ee0:
    // 0x119ee0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x119ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_119ee4:
    // 0x119ee4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x119ee4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_119ee8:
    // 0x119ee8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x119ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_119eec:
    // 0x119eec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x119eecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_119ef0:
    // 0x119ef0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x119ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_119ef4:
    // 0x119ef4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x119ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_119ef8:
    // 0x119ef8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_119efc:
    if (ctx->pc == 0x119EFCu) {
        ctx->pc = 0x119EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EF8u;
        // 0x119efc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F00u;
        goto label_119f00;
    }
    ctx->pc = 0x119EF8u;
    {
        const bool branch_taken_0x119ef8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x119EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EF8u;
        // 0x119efc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ef8) {
            ctx->pc = 0x119EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119ee0;
        }
    }
    ctx->pc = 0x119F00u;
label_119f00:
    // 0x119f00: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x119f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119f04:
    // 0x119f04: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x119f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_119f08:
    // 0x119f08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_119f0c:
    if (ctx->pc == 0x119F0Cu) {
        ctx->pc = 0x119F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F08u;
        // 0x119f0c: 0x2338023  subu        $s0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F10u;
        goto label_119f10;
    }
    ctx->pc = 0x119F08u;
    {
        const bool branch_taken_0x119f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F08u;
        // 0x119f0c: 0x2338023  subu        $s0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f08) {
            ctx->pc = 0x119F24u;
            goto label_119f24;
        }
    }
    ctx->pc = 0x119F10u;
label_119f10:
    // 0x119f10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119f14:
    // 0x119f14: 0x2e0f809  jalr        $s7
label_119f18:
    if (ctx->pc == 0x119F18u) {
        ctx->pc = 0x119F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F14u;
        // 0x119f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F1Cu;
        goto label_119f1c;
    }
    ctx->pc = 0x119F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119F1Cu);
        ctx->pc = 0x119F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F14u;
        // 0x119f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F14u, 0x119F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119F1Cu;
label_119f1c:
    // 0x119f1c: 0x1c40ffd6  bgtz        $v0, . + 4 + (-0x2A << 2)
label_119f20:
    if (ctx->pc == 0x119F20u) {
        ctx->pc = 0x119F24u;
        goto label_119f24;
    }
    ctx->pc = 0x119F1Cu;
    {
        const bool branch_taken_0x119f1c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x119f1c) {
            ctx->pc = 0x119E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119e78;
        }
    }
    ctx->pc = 0x119F24u;
label_119f24:
    // 0x119f24: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x119f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_119f28:
    // 0x119f28: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x119f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_119f2c:
    // 0x119f2c: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x119f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_119f30:
    // 0x119f30: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_119f34:
    if (ctx->pc == 0x119F34u) {
        ctx->pc = 0x119F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F30u;
        // 0x119f34: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F38u;
        goto label_119f38;
    }
    ctx->pc = 0x119F30u;
    {
        const bool branch_taken_0x119f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F30u;
        // 0x119f34: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f30) {
            ctx->pc = 0x119E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119e70;
        }
    }
    ctx->pc = 0x119F38u;
label_119f38:
    // 0x119f38: 0x10000223  b           . + 4 + (0x223 << 2)
label_119f3c:
    if (ctx->pc == 0x119F3Cu) {
        ctx->pc = 0x119F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F38u;
        // 0x119f3c: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F40u;
        goto label_119f40;
    }
    ctx->pc = 0x119F38u;
    {
        const bool branch_taken_0x119f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F38u;
        // 0x119f3c: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f38) {
            ctx->pc = 0x11A7C8u;
            goto label_11a7c8;
        }
    }
    ctx->pc = 0x119F40u;
label_119f40:
    // 0x119f40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x119f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119f44:
    // 0x119f44: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x119f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_119f48:
    // 0x119f48: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x119f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_119f4c:
    // 0x119f4c: 0x2c630008  sltiu       $v1, $v1, 0x8
    ctx->pc = 0x119f4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_119f50:
    // 0x119f50: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
label_119f54:
    if (ctx->pc == 0x119F54u) {
        ctx->pc = 0x119F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F50u;
        // 0x119f54: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F58u;
        goto label_119f58;
    }
    ctx->pc = 0x119F50u;
    {
        const bool branch_taken_0x119f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F50u;
        // 0x119f54: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f50) {
            ctx->pc = 0x11A19Cu;
            goto label_11a19c;
        }
    }
    ctx->pc = 0x119F58u;
label_119f58:
    // 0x119f58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x119f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119f5c:
    // 0x119f5c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x119f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119f60:
    // 0x119f60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x119f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119f64:
    // 0x119f64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_119f68:
    // 0x119f68: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x119f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_119f6c:
    // 0x119f6c: 0x2c620029  sltiu       $v0, $v1, 0x29
    ctx->pc = 0x119f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_119f70:
    // 0x119f70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x119f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_119f74:
    // 0x119f74: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x119f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_119f78:
    // 0x119f78: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_119f7c:
    if (ctx->pc == 0x119F7Cu) {
        ctx->pc = 0x119F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F78u;
        // 0x119f7c: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F80u;
        goto label_119f80;
    }
    ctx->pc = 0x119F78u;
    {
        const bool branch_taken_0x119f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F78u;
        // 0x119f7c: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f78) {
            ctx->pc = 0x11A120u;
            goto label_11a120;
        }
    }
    ctx->pc = 0x119F80u;
label_119f80:
    // 0x119f80: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x119f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119f84:
    // 0x119f84: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x119f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_119f88:
    // 0x119f88: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x119f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_119f8c:
    // 0x119f8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119f90:
    // 0x119f90: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x119f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_119f94:
    // 0x119f94: 0x2c38821  addu        $s1, $s6, $v1
    ctx->pc = 0x119f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_119f98:
    // 0x119f98: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x119f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_119f9c:
    // 0x119f9c: 0x569021  addu        $s2, $v0, $s6
    ctx->pc = 0x119f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_119fa0:
    // 0x119fa0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x119fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_119fa4:
    // 0x119fa4: 0x2e0f809  jalr        $s7
label_119fa8:
    if (ctx->pc == 0x119FA8u) {
        ctx->pc = 0x119FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FA4u;
        // 0x119fa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FACu;
        goto label_119fac;
    }
    ctx->pc = 0x119FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119FACu);
        ctx->pc = 0x119FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FA4u;
        // 0x119fa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FA4u, 0x119FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119FACu;
label_119fac:
    // 0x119fac: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_119fb0:
    if (ctx->pc == 0x119FB0u) {
        ctx->pc = 0x119FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FACu;
        // 0x119fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FB4u;
        goto label_119fb4;
    }
    ctx->pc = 0x119FACu;
    {
        const bool branch_taken_0x119fac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FACu;
        // 0x119fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fac) {
            ctx->pc = 0x119FE4u;
            goto label_119fe4;
        }
    }
    ctx->pc = 0x119FB4u;
label_119fb4:
    // 0x119fb4: 0x2e0f809  jalr        $s7
label_119fb8:
    if (ctx->pc == 0x119FB8u) {
        ctx->pc = 0x119FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FB4u;
        // 0x119fb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FBCu;
        goto label_119fbc;
    }
    ctx->pc = 0x119FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119FBCu);
        ctx->pc = 0x119FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FB4u;
        // 0x119fb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FB4u, 0x119FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119FBCu;
label_119fbc:
    // 0x119fbc: 0x4420014  bltzl       $v0, . + 4 + (0x14 << 2)
label_119fc0:
    if (ctx->pc == 0x119FC0u) {
        ctx->pc = 0x119FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FBCu;
        // 0x119fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FC4u;
        goto label_119fc4;
    }
    ctx->pc = 0x119FBCu;
    {
        const bool branch_taken_0x119fbc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x119fbc) {
            ctx->pc = 0x119FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119FBCu;
            // 0x119fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A010u;
            goto label_11a010;
        }
    }
    ctx->pc = 0x119FC4u;
label_119fc4:
    // 0x119fc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119fc8:
    // 0x119fc8: 0x2e0f809  jalr        $s7
label_119fcc:
    if (ctx->pc == 0x119FCCu) {
        ctx->pc = 0x119FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FC8u;
        // 0x119fcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FD0u;
        goto label_119fd0;
    }
    ctx->pc = 0x119FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119FD0u);
        ctx->pc = 0x119FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FC8u;
        // 0x119fcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FC8u, 0x119FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119FD0u;
label_119fd0:
    // 0x119fd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x119fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119fd4:
    // 0x119fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_119fd8:
    // 0x119fd8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x119fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_119fdc:
    // 0x119fdc: 0x1000000c  b           . + 4 + (0xC << 2)
label_119fe0:
    if (ctx->pc == 0x119FE0u) {
        ctx->pc = 0x119FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FDCu;
        // 0x119fe0: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FE4u;
        goto label_119fe4;
    }
    ctx->pc = 0x119FDCu;
    {
        const bool branch_taken_0x119fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FDCu;
        // 0x119fe0: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fdc) {
            ctx->pc = 0x11A010u;
            goto label_11a010;
        }
    }
    ctx->pc = 0x119FE4u;
label_119fe4:
    // 0x119fe4: 0x2e0f809  jalr        $s7
label_119fe8:
    if (ctx->pc == 0x119FE8u) {
        ctx->pc = 0x119FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FE4u;
        // 0x119fe8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FECu;
        goto label_119fec;
    }
    ctx->pc = 0x119FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119FECu);
        ctx->pc = 0x119FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FE4u;
        // 0x119fe8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FE4u, 0x119FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119FECu;
label_119fec:
    // 0x119fec: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
label_119ff0:
    if (ctx->pc == 0x119FF0u) {
        ctx->pc = 0x119FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FECu;
        // 0x119ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FF4u;
        goto label_119ff4;
    }
    ctx->pc = 0x119FECu;
    {
        const bool branch_taken_0x119fec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x119fec) {
            ctx->pc = 0x119FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119FECu;
            // 0x119ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A010u;
            goto label_11a010;
        }
    }
    ctx->pc = 0x119FF4u;
label_119ff4:
    // 0x119ff4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119ff8:
    // 0x119ff8: 0x2e0f809  jalr        $s7
label_119ffc:
    if (ctx->pc == 0x119FFCu) {
        ctx->pc = 0x119FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FF8u;
        // 0x119ffc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A000u;
        goto label_11a000;
    }
    ctx->pc = 0x119FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A000u);
        ctx->pc = 0x119FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FF8u;
        // 0x119ffc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FF8u, 0x11A000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A000u;
label_11a000:
    // 0x11a000: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a004:
    // 0x11a004: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a008:
    // 0x11a008: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a00c:
    // 0x11a00c: 0x243200b  movn        $a0, $s2, $v1
    ctx->pc = 0x11a00cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
label_11a010:
    // 0x11a010: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11a014:
    // 0x11a014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a018:
    // 0x11a018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a01c:
    // 0x11a01c: 0x203a023  subu        $s4, $s0, $v1
    ctx->pc = 0x11a01cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_11a020:
    // 0x11a020: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x11a020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_11a024:
    // 0x11a024: 0x2e0f809  jalr        $s7
label_11a028:
    if (ctx->pc == 0x11A028u) {
        ctx->pc = 0x11A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A024u;
        // 0x11a028: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A02Cu;
        goto label_11a02c;
    }
    ctx->pc = 0x11A024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A02Cu);
        ctx->pc = 0x11A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A024u;
        // 0x11a028: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A024u, 0x11A02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A02Cu;
label_11a02c:
    // 0x11a02c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_11a030:
    if (ctx->pc == 0x11A030u) {
        ctx->pc = 0x11A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A02Cu;
        // 0x11a030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A034u;
        goto label_11a034;
    }
    ctx->pc = 0x11A02Cu;
    {
        const bool branch_taken_0x11a02c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A02Cu;
        // 0x11a030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a02c) {
            ctx->pc = 0x11A060u;
            goto label_11a060;
        }
    }
    ctx->pc = 0x11A034u;
label_11a034:
    // 0x11a034: 0x2e0f809  jalr        $s7
label_11a038:
    if (ctx->pc == 0x11A038u) {
        ctx->pc = 0x11A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A034u;
        // 0x11a038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A03Cu;
        goto label_11a03c;
    }
    ctx->pc = 0x11A034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A03Cu);
        ctx->pc = 0x11A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A034u;
        // 0x11a038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A034u, 0x11A03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A03Cu;
label_11a03c:
    // 0x11a03c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_11a040:
    if (ctx->pc == 0x11A040u) {
        ctx->pc = 0x11A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A03Cu;
        // 0x11a040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A044u;
        goto label_11a044;
    }
    ctx->pc = 0x11A03Cu;
    {
        const bool branch_taken_0x11a03c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A03Cu;
        // 0x11a040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a03c) {
            ctx->pc = 0x11A090u;
            goto label_11a090;
        }
    }
    ctx->pc = 0x11A044u;
label_11a044:
    // 0x11a044: 0x2e0f809  jalr        $s7
label_11a048:
    if (ctx->pc == 0x11A048u) {
        ctx->pc = 0x11A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A044u;
        // 0x11a048: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A04Cu;
        goto label_11a04c;
    }
    ctx->pc = 0x11A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A04Cu);
        ctx->pc = 0x11A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A044u;
        // 0x11a048: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A044u, 0x11A04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A04Cu;
label_11a04c:
    // 0x11a04c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a050:
    // 0x11a050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a054:
    // 0x11a054: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a058:
    // 0x11a058: 0x1000000e  b           . + 4 + (0xE << 2)
label_11a05c:
    if (ctx->pc == 0x11A05Cu) {
        ctx->pc = 0x11A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A058u;
        // 0x11a05c: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A060u;
        goto label_11a060;
    }
    ctx->pc = 0x11A058u;
    {
        const bool branch_taken_0x11a058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A058u;
        // 0x11a05c: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a058) {
            ctx->pc = 0x11A094u;
            goto label_11a094;
        }
    }
    ctx->pc = 0x11A060u;
label_11a060:
    // 0x11a060: 0x2e0f809  jalr        $s7
label_11a064:
    if (ctx->pc == 0x11A064u) {
        ctx->pc = 0x11A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A060u;
        // 0x11a064: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A068u;
        goto label_11a068;
    }
    ctx->pc = 0x11A060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A068u);
        ctx->pc = 0x11A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A060u;
        // 0x11a064: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A060u, 0x11A068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A068u;
label_11a068:
    // 0x11a068: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_11a06c:
    if (ctx->pc == 0x11A06Cu) {
        ctx->pc = 0x11A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A068u;
        // 0x11a06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A070u;
        goto label_11a070;
    }
    ctx->pc = 0x11A068u;
    {
        const bool branch_taken_0x11a068 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x11a068) {
            ctx->pc = 0x11A06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A068u;
            // 0x11a06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A094u;
            goto label_11a094;
        }
    }
    ctx->pc = 0x11A070u;
label_11a070:
    // 0x11a070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a074:
    // 0x11a074: 0x2e0f809  jalr        $s7
label_11a078:
    if (ctx->pc == 0x11A078u) {
        ctx->pc = 0x11A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A074u;
        // 0x11a078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A07Cu;
        goto label_11a07c;
    }
    ctx->pc = 0x11A074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A07Cu);
        ctx->pc = 0x11A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A074u;
        // 0x11a078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A074u, 0x11A07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A07Cu;
label_11a07c:
    // 0x11a07c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a080:
    // 0x11a080: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a084:
    // 0x11a084: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a088:
    // 0x11a088: 0x10000002  b           . + 4 + (0x2 << 2)
label_11a08c:
    if (ctx->pc == 0x11A08Cu) {
        ctx->pc = 0x11A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A088u;
        // 0x11a08c: 0x243200b  movn        $a0, $s2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A090u;
        goto label_11a090;
    }
    ctx->pc = 0x11A088u;
    {
        const bool branch_taken_0x11a088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A088u;
        // 0x11a08c: 0x243200b  movn        $a0, $s2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a088) {
            ctx->pc = 0x11A094u;
            goto label_11a094;
        }
    }
    ctx->pc = 0x11A090u;
label_11a090:
    // 0x11a090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a094:
    // 0x11a094: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_11a098:
    // 0x11a098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a09c:
    // 0x11a09c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11a0a0:
    // 0x11a0a0: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x11a0a0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_11a0a4:
    // 0x11a0a4: 0x2a39023  subu        $s2, $s5, $v1
    ctx->pc = 0x11a0a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_11a0a8:
    // 0x11a0a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a0ac:
    // 0x11a0ac: 0x2e0f809  jalr        $s7
label_11a0b0:
    if (ctx->pc == 0x11A0B0u) {
        ctx->pc = 0x11A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0ACu;
        // 0x11a0b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0B4u;
        goto label_11a0b4;
    }
    ctx->pc = 0x11A0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A0B4u);
        ctx->pc = 0x11A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0ACu;
        // 0x11a0b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0ACu, 0x11A0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A0B4u;
label_11a0b4:
    // 0x11a0b4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_11a0b8:
    if (ctx->pc == 0x11A0B8u) {
        ctx->pc = 0x11A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0B4u;
        // 0x11a0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0BCu;
        goto label_11a0bc;
    }
    ctx->pc = 0x11A0B4u;
    {
        const bool branch_taken_0x11a0b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0B4u;
        // 0x11a0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0b4) {
            ctx->pc = 0x11A0E8u;
            goto label_11a0e8;
        }
    }
    ctx->pc = 0x11A0BCu;
label_11a0bc:
    // 0x11a0bc: 0x2e0f809  jalr        $s7
label_11a0c0:
    if (ctx->pc == 0x11A0C0u) {
        ctx->pc = 0x11A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0BCu;
        // 0x11a0c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0C4u;
        goto label_11a0c4;
    }
    ctx->pc = 0x11A0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A0C4u);
        ctx->pc = 0x11A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0BCu;
        // 0x11a0c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0BCu, 0x11A0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A0C4u;
label_11a0c4:
    // 0x11a0c4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_11a0c8:
    if (ctx->pc == 0x11A0C8u) {
        ctx->pc = 0x11A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0C4u;
        // 0x11a0c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0CCu;
        goto label_11a0cc;
    }
    ctx->pc = 0x11A0C4u;
    {
        const bool branch_taken_0x11a0c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0C4u;
        // 0x11a0c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0c4) {
            ctx->pc = 0x11A118u;
            goto label_11a118;
        }
    }
    ctx->pc = 0x11A0CCu;
label_11a0cc:
    // 0x11a0cc: 0x2e0f809  jalr        $s7
label_11a0d0:
    if (ctx->pc == 0x11A0D0u) {
        ctx->pc = 0x11A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0CCu;
        // 0x11a0d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0D4u;
        goto label_11a0d4;
    }
    ctx->pc = 0x11A0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A0D4u);
        ctx->pc = 0x11A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0CCu;
        // 0x11a0d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0CCu, 0x11A0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A0D4u;
label_11a0d4:
    // 0x11a0d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a0d8:
    // 0x11a0d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a0dc:
    // 0x11a0dc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a0dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a0e0:
    // 0x11a0e0: 0x1000000e  b           . + 4 + (0xE << 2)
label_11a0e4:
    if (ctx->pc == 0x11A0E4u) {
        ctx->pc = 0x11A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E0u;
        // 0x11a0e4: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0E8u;
        goto label_11a0e8;
    }
    ctx->pc = 0x11A0E0u;
    {
        const bool branch_taken_0x11a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E0u;
        // 0x11a0e4: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0e0) {
            ctx->pc = 0x11A11Cu;
            goto label_11a11c;
        }
    }
    ctx->pc = 0x11A0E8u;
label_11a0e8:
    // 0x11a0e8: 0x2e0f809  jalr        $s7
label_11a0ec:
    if (ctx->pc == 0x11A0ECu) {
        ctx->pc = 0x11A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E8u;
        // 0x11a0ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0F0u;
        goto label_11a0f0;
    }
    ctx->pc = 0x11A0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A0F0u);
        ctx->pc = 0x11A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E8u;
        // 0x11a0ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0E8u, 0x11A0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A0F0u;
label_11a0f0:
    // 0x11a0f0: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_11a0f4:
    if (ctx->pc == 0x11A0F4u) {
        ctx->pc = 0x11A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0F0u;
        // 0x11a0f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A0F8u;
        goto label_11a0f8;
    }
    ctx->pc = 0x11A0F0u;
    {
        const bool branch_taken_0x11a0f0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x11a0f0) {
            ctx->pc = 0x11A0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A0F0u;
            // 0x11a0f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A11Cu;
            goto label_11a11c;
        }
    }
    ctx->pc = 0x11A0F8u;
label_11a0f8:
    // 0x11a0f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a0fc:
    // 0x11a0fc: 0x2e0f809  jalr        $s7
label_11a100:
    if (ctx->pc == 0x11A100u) {
        ctx->pc = 0x11A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0FCu;
        // 0x11a100: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A104u;
        goto label_11a104;
    }
    ctx->pc = 0x11A0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A104u);
        ctx->pc = 0x11A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0FCu;
        // 0x11a100: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0FCu, 0x11A104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A104u;
label_11a104:
    // 0x11a104: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a108:
    // 0x11a108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a10c:
    // 0x11a10c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a10cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a110:
    // 0x11a110: 0x10000002  b           . + 4 + (0x2 << 2)
label_11a114:
    if (ctx->pc == 0x11A114u) {
        ctx->pc = 0x11A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A110u;
        // 0x11a114: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A118u;
        goto label_11a118;
    }
    ctx->pc = 0x11A110u;
    {
        const bool branch_taken_0x11a110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A110u;
        // 0x11a114: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a110) {
            ctx->pc = 0x11A11Cu;
            goto label_11a11c;
        }
    }
    ctx->pc = 0x11A118u;
label_11a118:
    // 0x11a118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a11c:
    // 0x11a11c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11a11cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a120:
    // 0x11a120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a124:
    // 0x11a124: 0x2e0f809  jalr        $s7
label_11a128:
    if (ctx->pc == 0x11A128u) {
        ctx->pc = 0x11A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A124u;
        // 0x11a128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A12Cu;
        goto label_11a12c;
    }
    ctx->pc = 0x11A124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A12Cu);
        ctx->pc = 0x11A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A124u;
        // 0x11a128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A124u, 0x11A12Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A12Cu;
label_11a12c:
    // 0x11a12c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_11a130:
    if (ctx->pc == 0x11A130u) {
        ctx->pc = 0x11A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A12Cu;
        // 0x11a130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A134u;
        goto label_11a134;
    }
    ctx->pc = 0x11A12Cu;
    {
        const bool branch_taken_0x11a12c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A12Cu;
        // 0x11a130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a12c) {
            ctx->pc = 0x11A160u;
            goto label_11a160;
        }
    }
    ctx->pc = 0x11A134u;
label_11a134:
    // 0x11a134: 0x2e0f809  jalr        $s7
label_11a138:
    if (ctx->pc == 0x11A138u) {
        ctx->pc = 0x11A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A134u;
        // 0x11a138: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A13Cu;
        goto label_11a13c;
    }
    ctx->pc = 0x11A134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A13Cu);
        ctx->pc = 0x11A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A134u;
        // 0x11a138: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A134u, 0x11A13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A13Cu;
label_11a13c:
    // 0x11a13c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_11a140:
    if (ctx->pc == 0x11A140u) {
        ctx->pc = 0x11A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A13Cu;
        // 0x11a140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A144u;
        goto label_11a144;
    }
    ctx->pc = 0x11A13Cu;
    {
        const bool branch_taken_0x11a13c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A13Cu;
        // 0x11a140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a13c) {
            ctx->pc = 0x11A190u;
            goto label_11a190;
        }
    }
    ctx->pc = 0x11A144u;
label_11a144:
    // 0x11a144: 0x2e0f809  jalr        $s7
label_11a148:
    if (ctx->pc == 0x11A148u) {
        ctx->pc = 0x11A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A144u;
        // 0x11a148: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A14Cu;
        goto label_11a14c;
    }
    ctx->pc = 0x11A144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A14Cu);
        ctx->pc = 0x11A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A144u;
        // 0x11a148: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A144u, 0x11A14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A14Cu;
label_11a14c:
    // 0x11a14c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a150:
    // 0x11a150: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a154:
    // 0x11a154: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a158:
    // 0x11a158: 0x1000000e  b           . + 4 + (0xE << 2)
label_11a15c:
    if (ctx->pc == 0x11A15Cu) {
        ctx->pc = 0x11A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A158u;
        // 0x11a15c: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A160u;
        goto label_11a160;
    }
    ctx->pc = 0x11A158u;
    {
        const bool branch_taken_0x11a158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A158u;
        // 0x11a15c: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a158) {
            ctx->pc = 0x11A194u;
            goto label_11a194;
        }
    }
    ctx->pc = 0x11A160u;
label_11a160:
    // 0x11a160: 0x2e0f809  jalr        $s7
label_11a164:
    if (ctx->pc == 0x11A164u) {
        ctx->pc = 0x11A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A160u;
        // 0x11a164: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A168u;
        goto label_11a168;
    }
    ctx->pc = 0x11A160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A168u);
        ctx->pc = 0x11A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A160u;
        // 0x11a164: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A160u, 0x11A168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A168u;
label_11a168:
    // 0x11a168: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_11a16c:
    if (ctx->pc == 0x11A16Cu) {
        ctx->pc = 0x11A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A168u;
        // 0x11a16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A170u;
        goto label_11a170;
    }
    ctx->pc = 0x11A168u;
    {
        const bool branch_taken_0x11a168 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x11a168) {
            ctx->pc = 0x11A16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A168u;
            // 0x11a16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A194u;
            goto label_11a194;
        }
    }
    ctx->pc = 0x11A170u;
label_11a170:
    // 0x11a170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a174:
    // 0x11a174: 0x2e0f809  jalr        $s7
label_11a178:
    if (ctx->pc == 0x11A178u) {
        ctx->pc = 0x11A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A174u;
        // 0x11a178: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A17Cu;
        goto label_11a17c;
    }
    ctx->pc = 0x11A174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A17Cu);
        ctx->pc = 0x11A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A174u;
        // 0x11a178: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A174u, 0x11A17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A17Cu;
label_11a17c:
    // 0x11a17c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a180:
    // 0x11a180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a184:
    // 0x11a184: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a188:
    // 0x11a188: 0x10000002  b           . + 4 + (0x2 << 2)
label_11a18c:
    if (ctx->pc == 0x11A18Cu) {
        ctx->pc = 0x11A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A188u;
        // 0x11a18c: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A190u;
        goto label_11a190;
    }
    ctx->pc = 0x11A188u;
    {
        const bool branch_taken_0x11a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A188u;
        // 0x11a18c: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a188) {
            ctx->pc = 0x11A194u;
            goto label_11a194;
        }
    }
    ctx->pc = 0x11A190u;
label_11a190:
    // 0x11a190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a194:
    // 0x11a194: 0x10000004  b           . + 4 + (0x4 << 2)
label_11a198:
    if (ctx->pc == 0x11A198u) {
        ctx->pc = 0x11A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A194u;
        // 0x11a198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A19Cu;
        goto label_11a19c;
    }
    ctx->pc = 0x11A194u;
    {
        const bool branch_taken_0x11a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A194u;
        // 0x11a198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a194) {
            ctx->pc = 0x11A1A8u;
            goto label_11a1a8;
        }
    }
    ctx->pc = 0x11A19Cu;
label_11a19c:
    // 0x11a19c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11a1a0:
    // 0x11a1a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_11a1a4:
    // 0x11a1a4: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x11a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_11a1a8:
    // 0x11a1a8: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
label_11a1ac:
    if (ctx->pc == 0x11A1ACu) {
        ctx->pc = 0x11A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1A8u;
        // 0x11a1ac: 0x2bc20002  slti        $v0, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A1B0u;
        goto label_11a1b0;
    }
    ctx->pc = 0x11A1A8u;
    {
        const bool branch_taken_0x11a1a8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1A8u;
        // 0x11a1ac: 0x2bc20002  slti        $v0, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1a8) {
            ctx->pc = 0x11A1CCu;
            goto label_11a1cc;
        }
    }
    ctx->pc = 0x11A1B0u;
label_11a1b0:
    // 0x11a1b0: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x11a1b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_11a1b4:
    // 0x11a1b4: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x11a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_11a1b8:
    // 0x11a1b8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x11a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_11a1bc:
    // 0x11a1bc: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x11a1bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_11a1c0:
    // 0x11a1c0: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x11a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
label_11a1c4:
    // 0x11a1c4: 0x10000022  b           . + 4 + (0x22 << 2)
label_11a1c8:
    if (ctx->pc == 0x11A1C8u) {
        ctx->pc = 0x11A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1C4u;
        // 0x11a1c8: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A1CCu;
        goto label_11a1cc;
    }
    ctx->pc = 0x11A1C4u;
    {
        const bool branch_taken_0x11a1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1C4u;
        // 0x11a1c8: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1c4) {
            ctx->pc = 0x11A250u;
            goto label_11a250;
        }
    }
    ctx->pc = 0x11A1CCu;
label_11a1cc:
    // 0x11a1cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_11a1d0:
    if (ctx->pc == 0x11A1D0u) {
        ctx->pc = 0x11A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1CCu;
        // 0x11a1d0: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A1D4u;
        goto label_11a1d4;
    }
    ctx->pc = 0x11A1CCu;
    {
        const bool branch_taken_0x11a1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1CCu;
        // 0x11a1d0: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1cc) {
            ctx->pc = 0x11A218u;
            goto label_11a218;
        }
    }
    ctx->pc = 0x11A1D4u;
label_11a1d4:
    // 0x11a1d4: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x11a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_11a1d8:
    // 0x11a1d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_11a1dc:
    // 0x11a1dc: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x11a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_11a1e0:
    // 0x11a1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a1e4:
    // 0x11a1e4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x11a1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a1e8:
    // 0x11a1e8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a1e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_11a1ec:
    // 0x11a1ec: 0x0  nop
    ctx->pc = 0x11a1ecu;
    // NOP
label_11a1f0:
    // 0x11a1f0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x11a1f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_11a1f4:
    // 0x11a1f4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a1f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_11a1f8:
    // 0x11a1f8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x11a1f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_11a1fc:
    // 0x11a1fc: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x11a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_11a200:
    // 0x11a200: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11a200u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_11a204:
    // 0x11a204: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x11a204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_11a208:
    // 0x11a208: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_11a20c:
    if (ctx->pc == 0x11A20Cu) {
        ctx->pc = 0x11A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A208u;
        // 0x11a20c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A210u;
        goto label_11a210;
    }
    ctx->pc = 0x11A208u;
    {
        const bool branch_taken_0x11a208 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A208u;
        // 0x11a20c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a208) {
            ctx->pc = 0x11A1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a1f0;
        }
    }
    ctx->pc = 0x11A210u;
label_11a210:
    // 0x11a210: 0x10000010  b           . + 4 + (0x10 << 2)
label_11a214:
    if (ctx->pc == 0x11A214u) {
        ctx->pc = 0x11A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A210u;
        // 0x11a214: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A218u;
        goto label_11a218;
    }
    ctx->pc = 0x11A210u;
    {
        const bool branch_taken_0x11a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A210u;
        // 0x11a214: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a210) {
            ctx->pc = 0x11A254u;
            goto label_11a254;
        }
    }
    ctx->pc = 0x11A218u;
label_11a218:
    // 0x11a218: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x11a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_11a21c:
    // 0x11a21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a220:
    // 0x11a220: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_11a224:
    // 0x11a224: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x11a224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a228:
    // 0x11a228: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_11a22c:
    // 0x11a22c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x11a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_11a230:
    // 0x11a230: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11a230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_11a234:
    // 0x11a234: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a234u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_11a238:
    // 0x11a238: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x11a238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_11a23c:
    // 0x11a23c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x11a23cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_11a240:
    // 0x11a240: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x11a240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_11a244:
    // 0x11a244: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11a244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11a248:
    // 0x11a248: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_11a24c:
    if (ctx->pc == 0x11A24Cu) {
        ctx->pc = 0x11A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A248u;
        // 0x11a24c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A250u;
        goto label_11a250;
    }
    ctx->pc = 0x11A248u;
    {
        const bool branch_taken_0x11a248 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A248u;
        // 0x11a24c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a248) {
            ctx->pc = 0x11A230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a230;
        }
    }
    ctx->pc = 0x11A250u;
label_11a250:
    // 0x11a250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x11a250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_11a254:
    // 0x11a254: 0x2bc30002  slti        $v1, $fp, 0x2
    ctx->pc = 0x11a254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_11a258:
    // 0x11a258: 0x8fb2003c  lw          $s2, 0x3C($sp)
    ctx->pc = 0x11a258u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_11a25c:
    // 0x11a25c: 0x13583c  dsll32      $t3, $s3, 0
    ctx->pc = 0x11a25cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) << (32 + 0));
label_11a260:
    // 0x11a260: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x11a260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_11a264:
    // 0x11a264: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x11a264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_11a268:
    // 0x11a268: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x11a268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a26c:
    // 0x11a26c: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x11a26cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_11a270:
    // 0x11a270: 0x1310c2  srl         $v0, $s3, 3
    ctx->pc = 0x11a270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
label_11a274:
    // 0x11a274: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x11a274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a278:
    // 0x11a278: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_11a27c:
    // 0x11a27c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_11a280:
    if (ctx->pc == 0x11A280u) {
        ctx->pc = 0x11A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A27Cu;
        // 0x11a280: 0xffa20020  sd          $v0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A284u;
        goto label_11a284;
    }
    ctx->pc = 0x11A27Cu;
    {
        const bool branch_taken_0x11a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A27Cu;
        // 0x11a280: 0xffa20020  sd          $v0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a27c) {
            ctx->pc = 0x11A3F0u;
            goto label_11a3f0;
        }
    }
    ctx->pc = 0x11A284u;
label_11a284:
    // 0x11a284: 0x0  nop
    ctx->pc = 0x11a284u;
    // NOP
label_11a288:
    // 0x11a288: 0x2534021  addu        $t0, $s2, $s3
    ctx->pc = 0x11a288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_11a28c:
    // 0x11a28c: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x11a28cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_11a290:
    // 0x11a290: 0x2333823  subu        $a3, $s1, $s3
    ctx->pc = 0x11a290u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_11a294:
    // 0x11a294: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x11a294u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_11a298:
    // 0x11a298: 0x10000021  b           . + 4 + (0x21 << 2)
label_11a29c:
    if (ctx->pc == 0x11A29Cu) {
        ctx->pc = 0x11A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A298u;
        // 0x11a29c: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2A0u;
        goto label_11a2a0;
    }
    ctx->pc = 0x11A298u;
    {
        const bool branch_taken_0x11a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A298u;
        // 0x11a29c: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a298) {
            ctx->pc = 0x11A320u;
            goto label_11a320;
        }
    }
    ctx->pc = 0x11A2A0u;
label_11a2a0:
    // 0x11a2a0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_11a2a4:
    if (ctx->pc == 0x11A2A4u) {
        ctx->pc = 0x11A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2A0u;
        // 0x11a2a4: 0xdfa20020  ld          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2A8u;
        goto label_11a2a8;
    }
    ctx->pc = 0x11A2A0u;
    {
        const bool branch_taken_0x11a2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2A0u;
        // 0x11a2a4: 0xdfa20020  ld          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2a0) {
            ctx->pc = 0x11A2E8u;
            goto label_11a2e8;
        }
    }
    ctx->pc = 0x11A2A8u;
label_11a2a8:
    // 0x11a2a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a2ac:
    // 0x11a2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a2b0:
    // 0x11a2b0: 0xb34021  addu        $t0, $a1, $s3
    ctx->pc = 0x11a2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_11a2b4:
    // 0x11a2b4: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x11a2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_11a2b8:
    // 0x11a2b8: 0x933823  subu        $a3, $a0, $s3
    ctx->pc = 0x11a2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_11a2bc:
    // 0x11a2bc: 0x0  nop
    ctx->pc = 0x11a2bcu;
    // NOP
label_11a2c0:
    // 0x11a2c0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x11a2c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_11a2c4:
    // 0x11a2c4: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a2c4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_11a2c8:
    // 0x11a2c8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x11a2c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_11a2cc:
    // 0x11a2cc: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x11a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_11a2d0:
    // 0x11a2d0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_11a2d4:
    // 0x11a2d4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x11a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_11a2d8:
    // 0x11a2d8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_11a2dc:
    if (ctx->pc == 0x11A2DCu) {
        ctx->pc = 0x11A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2D8u;
        // 0x11a2dc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2E0u;
        goto label_11a2e0;
    }
    ctx->pc = 0x11A2D8u;
    {
        const bool branch_taken_0x11a2d8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2D8u;
        // 0x11a2dc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2d8) {
            ctx->pc = 0x11A2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a2c0;
        }
    }
    ctx->pc = 0x11A2E0u;
label_11a2e0:
    // 0x11a2e0: 0x10000010  b           . + 4 + (0x10 << 2)
label_11a2e4:
    if (ctx->pc == 0x11A2E4u) {
        ctx->pc = 0x11A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2E0u;
        // 0x11a2e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A2E8u;
        goto label_11a2e8;
    }
    ctx->pc = 0x11A2E0u;
    {
        const bool branch_taken_0x11a2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2E0u;
        // 0x11a2e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2e0) {
            ctx->pc = 0x11A324u;
            goto label_11a324;
        }
    }
    ctx->pc = 0x11A2E8u;
label_11a2e8:
    // 0x11a2e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a2ec:
    // 0x11a2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a2f0:
    // 0x11a2f0: 0xb303e  dsrl32      $a2, $t3, 0
    ctx->pc = 0x11a2f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
label_11a2f4:
    // 0x11a2f4: 0xb34021  addu        $t0, $a1, $s3
    ctx->pc = 0x11a2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_11a2f8:
    // 0x11a2f8: 0x933823  subu        $a3, $a0, $s3
    ctx->pc = 0x11a2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_11a2fc:
    // 0x11a2fc: 0x0  nop
    ctx->pc = 0x11a2fcu;
    // NOP
label_11a300:
    // 0x11a300: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11a300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_11a304:
    // 0x11a304: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a304u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_11a308:
    // 0x11a308: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x11a308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_11a30c:
    // 0x11a30c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11a30cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_11a310:
    // 0x11a310: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x11a310u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_11a314:
    // 0x11a314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11a314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11a318:
    // 0x11a318: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_11a31c:
    if (ctx->pc == 0x11A31Cu) {
        ctx->pc = 0x11A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A318u;
        // 0x11a31c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A320u;
        goto label_11a320;
    }
    ctx->pc = 0x11A318u;
    {
        const bool branch_taken_0x11a318 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A318u;
        // 0x11a31c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a318) {
            ctx->pc = 0x11A300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a300;
        }
    }
    ctx->pc = 0x11A320u;
label_11a320:
    // 0x11a320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11a320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a324:
    // 0x11a324: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x11a324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_11a328:
    // 0x11a328: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x11a328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_11a32c:
    // 0x11a32c: 0x10000030  b           . + 4 + (0x30 << 2)
label_11a330:
    if (ctx->pc == 0x11A330u) {
        ctx->pc = 0x11A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A32Cu;
        // 0x11a330: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A334u;
        goto label_11a334;
    }
    ctx->pc = 0x11A32Cu;
    {
        const bool branch_taken_0x11a32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A32Cu;
        // 0x11a330: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a32c) {
            ctx->pc = 0x11A3F0u;
            goto label_11a3f0;
        }
    }
    ctx->pc = 0x11A334u;
label_11a334:
    // 0x11a334: 0x0  nop
    ctx->pc = 0x11a334u;
    // NOP
label_11a338:
    // 0x11a338: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
label_11a33c:
    if (ctx->pc == 0x11A33Cu) {
        ctx->pc = 0x11A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A338u;
        // 0x11a33c: 0x2534021  addu        $t0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A340u;
        goto label_11a340;
    }
    ctx->pc = 0x11A338u;
    {
        const bool branch_taken_0x11a338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A338u;
        // 0x11a33c: 0x2534021  addu        $t0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a338) {
            ctx->pc = 0x11A3ECu;
            goto label_11a3ec;
        }
    }
    ctx->pc = 0x11A340u;
label_11a340:
    // 0x11a340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a344:
    // 0x11a344: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
label_11a348:
    if (ctx->pc == 0x11A348u) {
        ctx->pc = 0x11A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A344u;
        // 0x11a348: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A34Cu;
        goto label_11a34c;
    }
    ctx->pc = 0x11A344u;
    {
        const bool branch_taken_0x11a344 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A344u;
        // 0x11a348: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a344) {
            ctx->pc = 0x11A368u;
            goto label_11a368;
        }
    }
    ctx->pc = 0x11A34Cu;
label_11a34c:
    // 0x11a34c: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x11a34cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_11a350:
    // 0x11a350: 0x2534021  addu        $t0, $s2, $s3
    ctx->pc = 0x11a350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_11a354:
    // 0x11a354: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x11a354u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_11a358:
    // 0x11a358: 0x2b33821  addu        $a3, $s5, $s3
    ctx->pc = 0x11a358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_11a35c:
    // 0x11a35c: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x11a35cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_11a360:
    // 0x11a360: 0x10000021  b           . + 4 + (0x21 << 2)
label_11a364:
    if (ctx->pc == 0x11A364u) {
        ctx->pc = 0x11A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A360u;
        // 0x11a364: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A368u;
        goto label_11a368;
    }
    ctx->pc = 0x11A360u;
    {
        const bool branch_taken_0x11a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A360u;
        // 0x11a364: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a360) {
            ctx->pc = 0x11A3E8u;
            goto label_11a3e8;
        }
    }
    ctx->pc = 0x11A368u;
label_11a368:
    // 0x11a368: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x11a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_11a36c:
    // 0x11a36c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_11a370:
    if (ctx->pc == 0x11A370u) {
        ctx->pc = 0x11A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A36Cu;
        // 0x11a370: 0xdfa30020  ld          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A374u;
        goto label_11a374;
    }
    ctx->pc = 0x11A36Cu;
    {
        const bool branch_taken_0x11a36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A36Cu;
        // 0x11a370: 0xdfa30020  ld          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a36c) {
            ctx->pc = 0x11A3B0u;
            goto label_11a3b0;
        }
    }
    ctx->pc = 0x11A374u;
label_11a374:
    // 0x11a374: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11a374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a378:
    // 0x11a378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a37c:
    // 0x11a37c: 0xb33821  addu        $a3, $a1, $s3
    ctx->pc = 0x11a37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_11a380:
    // 0x11a380: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x11a380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
label_11a384:
    // 0x11a384: 0x934021  addu        $t0, $a0, $s3
    ctx->pc = 0x11a384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_11a388:
    // 0x11a388: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x11a388u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_11a38c:
    // 0x11a38c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a38cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_11a390:
    // 0x11a390: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x11a390u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_11a394:
    // 0x11a394: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x11a394u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_11a398:
    // 0x11a398: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11a398u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_11a39c:
    // 0x11a39c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x11a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_11a3a0:
    // 0x11a3a0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_11a3a4:
    if (ctx->pc == 0x11A3A4u) {
        ctx->pc = 0x11A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3A0u;
        // 0x11a3a4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3A8u;
        goto label_11a3a8;
    }
    ctx->pc = 0x11A3A0u;
    {
        const bool branch_taken_0x11a3a0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3A0u;
        // 0x11a3a4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3a0) {
            ctx->pc = 0x11A388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a388;
        }
    }
    ctx->pc = 0x11A3A8u;
label_11a3a8:
    // 0x11a3a8: 0x10000010  b           . + 4 + (0x10 << 2)
label_11a3ac:
    if (ctx->pc == 0x11A3ACu) {
        ctx->pc = 0x11A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3A8u;
        // 0x11a3ac: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3B0u;
        goto label_11a3b0;
    }
    ctx->pc = 0x11A3A8u;
    {
        const bool branch_taken_0x11a3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3A8u;
        // 0x11a3ac: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3a8) {
            ctx->pc = 0x11A3ECu;
            goto label_11a3ec;
        }
    }
    ctx->pc = 0x11A3B0u;
label_11a3b0:
    // 0x11a3b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11a3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a3b4:
    // 0x11a3b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a3b8:
    // 0x11a3b8: 0xb303e  dsrl32      $a2, $t3, 0
    ctx->pc = 0x11a3b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
label_11a3bc:
    // 0x11a3bc: 0x934021  addu        $t0, $a0, $s3
    ctx->pc = 0x11a3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_11a3c0:
    // 0x11a3c0: 0xb33821  addu        $a3, $a1, $s3
    ctx->pc = 0x11a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_11a3c4:
    // 0x11a3c4: 0x0  nop
    ctx->pc = 0x11a3c4u;
    // NOP
label_11a3c8:
    // 0x11a3c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11a3c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_11a3cc:
    // 0x11a3cc: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a3ccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_11a3d0:
    // 0x11a3d0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x11a3d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_11a3d4:
    // 0x11a3d4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11a3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_11a3d8:
    // 0x11a3d8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x11a3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_11a3dc:
    // 0x11a3dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11a3e0:
    // 0x11a3e0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_11a3e4:
    if (ctx->pc == 0x11A3E4u) {
        ctx->pc = 0x11A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3E0u;
        // 0x11a3e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3E8u;
        goto label_11a3e8;
    }
    ctx->pc = 0x11A3E0u;
    {
        const bool branch_taken_0x11a3e0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3E0u;
        // 0x11a3e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3e0) {
            ctx->pc = 0x11A3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a3c8;
        }
    }
    ctx->pc = 0x11A3E8u;
label_11a3e8:
    // 0x11a3e8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x11a3e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11a3ec:
    // 0x11a3ec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x11a3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_11a3f0:
    // 0x11a3f0: 0x232802b  sltu        $s0, $s1, $s2
    ctx->pc = 0x11a3f0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_11a3f4:
    // 0x11a3f4: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_11a3f8:
    if (ctx->pc == 0x11A3F8u) {
        ctx->pc = 0x11A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3F4u;
        // 0x11a3f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A3FCu;
        goto label_11a3fc;
    }
    ctx->pc = 0x11A3F4u;
    {
        const bool branch_taken_0x11a3f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3F4u;
        // 0x11a3f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3f4) {
            ctx->pc = 0x11A414u;
            goto label_11a414;
        }
    }
    ctx->pc = 0x11A3FCu;
label_11a3fc:
    // 0x11a3fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11a3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a400:
    // 0x11a400: 0x2e0f809  jalr        $s7
label_11a404:
    if (ctx->pc == 0x11A404u) {
        ctx->pc = 0x11A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A400u;
        // 0x11a404: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A408u;
        goto label_11a408;
    }
    ctx->pc = 0x11A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A408u);
        ctx->pc = 0x11A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A400u;
        // 0x11a404: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A400u, 0x11A408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A408u;
label_11a408:
    // 0x11a408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a40c:
    // 0x11a40c: 0x18a0ffca  blez        $a1, . + 4 + (-0x36 << 2)
label_11a410:
    if (ctx->pc == 0x11A410u) {
        ctx->pc = 0x11A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A40Cu;
        // 0x11a410: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A414u;
        goto label_11a414;
    }
    ctx->pc = 0x11A40Cu;
    {
        const bool branch_taken_0x11a40c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A40Cu;
        // 0x11a410: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a40c) {
            ctx->pc = 0x11A338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a338;
        }
    }
    ctx->pc = 0x11A414u;
label_11a414:
    // 0x11a414: 0x1310c2  srl         $v0, $s3, 3
    ctx->pc = 0x11a414u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
label_11a418:
    // 0x11a418: 0x2bca0002  slti        $t2, $fp, 0x2
    ctx->pc = 0x11a418u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_11a41c:
    // 0x11a41c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_11a420:
    if (ctx->pc == 0x11A420u) {
        ctx->pc = 0x11A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A41Cu;
        // 0x11a420: 0x2483c  dsll32      $t1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A424u;
        goto label_11a424;
    }
    ctx->pc = 0x11A41Cu;
    {
        const bool branch_taken_0x11a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A41Cu;
        // 0x11a420: 0x2483c  dsll32      $t1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a41c) {
            ctx->pc = 0x11A4D4u;
            goto label_11a4d4;
        }
    }
    ctx->pc = 0x11A424u;
label_11a424:
    // 0x11a424: 0x0  nop
    ctx->pc = 0x11a424u;
    // NOP
label_11a428:
    // 0x11a428: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
label_11a42c:
    if (ctx->pc == 0x11A42Cu) {
        ctx->pc = 0x11A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A428u;
        // 0x11a42c: 0x2333823  subu        $a3, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A430u;
        goto label_11a430;
    }
    ctx->pc = 0x11A428u;
    {
        const bool branch_taken_0x11a428 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A428u;
        // 0x11a42c: 0x2333823  subu        $a3, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a428) {
            ctx->pc = 0x11A4CCu;
            goto label_11a4cc;
        }
    }
    ctx->pc = 0x11A430u;
label_11a430:
    // 0x11a430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a434:
    // 0x11a434: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
label_11a438:
    if (ctx->pc == 0x11A438u) {
        ctx->pc = 0x11A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A434u;
        // 0x11a438: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A43Cu;
        goto label_11a43c;
    }
    ctx->pc = 0x11A434u;
    {
        const bool branch_taken_0x11a434 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A434u;
        // 0x11a438: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a434) {
            ctx->pc = 0x11A458u;
            goto label_11a458;
        }
    }
    ctx->pc = 0x11A43Cu;
label_11a43c:
    // 0x11a43c: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x11a43cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_11a440:
    // 0x11a440: 0x2333823  subu        $a3, $s1, $s3
    ctx->pc = 0x11a440u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_11a444:
    // 0x11a444: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x11a444u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_11a448:
    // 0x11a448: 0x2934023  subu        $t0, $s4, $s3
    ctx->pc = 0x11a448u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_11a44c:
    // 0x11a44c: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x11a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_11a450:
    // 0x11a450: 0x1000001d  b           . + 4 + (0x1D << 2)
label_11a454:
    if (ctx->pc == 0x11A454u) {
        ctx->pc = 0x11A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A450u;
        // 0x11a454: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A458u;
        goto label_11a458;
    }
    ctx->pc = 0x11A450u;
    {
        const bool branch_taken_0x11a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A450u;
        // 0x11a454: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a450) {
            ctx->pc = 0x11A4C8u;
            goto label_11a4c8;
        }
    }
    ctx->pc = 0x11A458u;
label_11a458:
    // 0x11a458: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
label_11a45c:
    if (ctx->pc == 0x11A45Cu) {
        ctx->pc = 0x11A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A458u;
        // 0x11a45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A460u;
        goto label_11a460;
    }
    ctx->pc = 0x11A458u;
    {
        const bool branch_taken_0x11a458 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A458u;
        // 0x11a45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a458) {
            ctx->pc = 0x11A498u;
            goto label_11a498;
        }
    }
    ctx->pc = 0x11A460u;
label_11a460:
    // 0x11a460: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a464:
    // 0x11a464: 0x9303e  dsrl32      $a2, $t1, 0
    ctx->pc = 0x11a464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) >> (32 + 0));
label_11a468:
    // 0x11a468: 0x933823  subu        $a3, $a0, $s3
    ctx->pc = 0x11a468u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_11a46c:
    // 0x11a46c: 0xb34023  subu        $t0, $a1, $s3
    ctx->pc = 0x11a46cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_11a470:
    // 0x11a470: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x11a470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_11a474:
    // 0x11a474: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a474u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_11a478:
    // 0x11a478: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11a478u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_11a47c:
    // 0x11a47c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x11a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_11a480:
    // 0x11a480: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x11a480u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_11a484:
    // 0x11a484: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x11a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_11a488:
    // 0x11a488: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_11a48c:
    if (ctx->pc == 0x11A48Cu) {
        ctx->pc = 0x11A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A488u;
        // 0x11a48c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A490u;
        goto label_11a490;
    }
    ctx->pc = 0x11A488u;
    {
        const bool branch_taken_0x11a488 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A488u;
        // 0x11a48c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a488) {
            ctx->pc = 0x11A470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a470;
        }
    }
    ctx->pc = 0x11A490u;
label_11a490:
    // 0x11a490: 0x1000000e  b           . + 4 + (0xE << 2)
label_11a494:
    if (ctx->pc == 0x11A494u) {
        ctx->pc = 0x11A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A490u;
        // 0x11a494: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A498u;
        goto label_11a498;
    }
    ctx->pc = 0x11A490u;
    {
        const bool branch_taken_0x11a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A490u;
        // 0x11a494: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a490) {
            ctx->pc = 0x11A4CCu;
            goto label_11a4cc;
        }
    }
    ctx->pc = 0x11A498u;
label_11a498:
    // 0x11a498: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a49c:
    // 0x11a49c: 0xb303e  dsrl32      $a2, $t3, 0
    ctx->pc = 0x11a49cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
label_11a4a0:
    // 0x11a4a0: 0x933823  subu        $a3, $a0, $s3
    ctx->pc = 0x11a4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_11a4a4:
    // 0x11a4a4: 0xb34023  subu        $t0, $a1, $s3
    ctx->pc = 0x11a4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_11a4a8:
    // 0x11a4a8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x11a4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_11a4ac:
    // 0x11a4ac: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a4acu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_11a4b0:
    // 0x11a4b0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x11a4b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_11a4b4:
    // 0x11a4b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11a4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11a4b8:
    // 0x11a4b8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x11a4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_11a4bc:
    // 0x11a4bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_11a4c0:
    // 0x11a4c0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_11a4c4:
    if (ctx->pc == 0x11A4C4u) {
        ctx->pc = 0x11A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4C0u;
        // 0x11a4c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A4C8u;
        goto label_11a4c8;
    }
    ctx->pc = 0x11A4C0u;
    {
        const bool branch_taken_0x11a4c0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4C0u;
        // 0x11a4c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4c0) {
            ctx->pc = 0x11A4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a4a8;
        }
    }
    ctx->pc = 0x11A4C8u;
label_11a4c8:
    // 0x11a4c8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x11a4c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_11a4cc:
    // 0x11a4cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x11a4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11a4d0:
    // 0x11a4d0: 0x232802b  sltu        $s0, $s1, $s2
    ctx->pc = 0x11a4d0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_11a4d4:
    // 0x11a4d4: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_11a4d8:
    if (ctx->pc == 0x11A4D8u) {
        ctx->pc = 0x11A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4D4u;
        // 0x11a4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A4DCu;
        goto label_11a4dc;
    }
    ctx->pc = 0x11A4D4u;
    {
        const bool branch_taken_0x11a4d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4D4u;
        // 0x11a4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4d4) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A4DCu;
label_11a4dc:
    // 0x11a4dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11a4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a4e0:
    // 0x11a4e0: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x11a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_11a4e4:
    // 0x11a4e4: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x11a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
label_11a4e8:
    // 0x11a4e8: 0x2e0f809  jalr        $s7
label_11a4ec:
    if (ctx->pc == 0x11A4ECu) {
        ctx->pc = 0x11A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4E8u;
        // 0x11a4ec: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A4F0u;
        goto label_11a4f0;
    }
    ctx->pc = 0x11A4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A4F0u);
        ctx->pc = 0x11A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4E8u;
        // 0x11a4ec: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A4E8u, 0x11A4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A4F0u;
label_11a4f0:
    // 0x11a4f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a4f4:
    // 0x11a4f4: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x11a4f4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11a4f8:
    // 0x11a4f8: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x11a4f8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11a4fc:
    // 0x11a4fc: 0x4a1ffca  bgez        $a1, . + 4 + (-0x36 << 2)
label_11a500:
    if (ctx->pc == 0x11A500u) {
        ctx->pc = 0x11A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4FCu;
        // 0x11a500: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A504u;
        goto label_11a504;
    }
    ctx->pc = 0x11A4FCu;
    {
        const bool branch_taken_0x11a4fc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4FCu;
        // 0x11a500: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4fc) {
            ctx->pc = 0x11A428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a428;
        }
    }
    ctx->pc = 0x11A504u;
label_11a504:
    // 0x11a504: 0x17c0ff66  bnez        $fp, . + 4 + (-0x9A << 2)
label_11a508:
    if (ctx->pc == 0x11A508u) {
        ctx->pc = 0x11A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A504u;
        // 0x11a508: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A50Cu;
        goto label_11a50c;
    }
    ctx->pc = 0x11A504u;
    {
        const bool branch_taken_0x11a504 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A504u;
        // 0x11a508: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a504) {
            ctx->pc = 0x11A2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a2a0;
        }
    }
    ctx->pc = 0x11A50Cu;
label_11a50c:
    // 0x11a50c: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
label_11a510:
    if (ctx->pc == 0x11A510u) {
        ctx->pc = 0x11A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A50Cu;
        // 0x11a510: 0xde230000  ld          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A514u;
        goto label_11a514;
    }
    ctx->pc = 0x11A50Cu;
    {
        const bool branch_taken_0x11a50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A50Cu;
        // 0x11a510: 0xde230000  ld          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a50c) {
            ctx->pc = 0x11A288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a288;
        }
    }
    ctx->pc = 0x11A514u;
label_11a514:
    // 0x11a514: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x11a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_11a518:
    // 0x11a518: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_11a51c:
    if (ctx->pc == 0x11A51Cu) {
        ctx->pc = 0x11A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A518u;
        // 0x11a51c: 0x2552823  subu        $a1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A520u;
        goto label_11a520;
    }
    ctx->pc = 0x11A518u;
    {
        const bool branch_taken_0x11a518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A518u;
        // 0x11a51c: 0x2552823  subu        $a1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a518) {
            ctx->pc = 0x11A628u;
            goto label_11a628;
        }
    }
    ctx->pc = 0x11A520u;
label_11a520:
    // 0x11a520: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11a524:
    // 0x11a524: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x11a524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_11a528:
    // 0x11a528: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x11a528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_11a52c:
    // 0x11a52c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x11a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_11a530:
    // 0x11a530: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x11a530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_11a534:
    // 0x11a534: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_11a538:
    if (ctx->pc == 0x11A538u) {
        ctx->pc = 0x11A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A534u;
        // 0x11a538: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A53Cu;
        goto label_11a53c;
    }
    ctx->pc = 0x11A534u;
    {
        const bool branch_taken_0x11a534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A534u;
        // 0x11a538: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a534) {
            ctx->pc = 0x11A7C4u;
            goto label_11a7c4;
        }
    }
    ctx->pc = 0x11A53Cu;
label_11a53c:
    // 0x11a53c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x11a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_11a540:
    // 0x11a540: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_11a544:
    // 0x11a544: 0x2bd50002  slti        $s5, $fp, 0x2
    ctx->pc = 0x11a544u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_11a548:
    // 0x11a548: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x11a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
label_11a54c:
    // 0x11a54c: 0x13a03c  dsll32      $s4, $s3, 0
    ctx->pc = 0x11a54cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << (32 + 0));
label_11a550:
    // 0x11a550: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11a550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a554:
    // 0x11a554: 0x0  nop
    ctx->pc = 0x11a554u;
    // NOP
label_11a558:
    // 0x11a558: 0x10000024  b           . + 4 + (0x24 << 2)
label_11a55c:
    if (ctx->pc == 0x11A55Cu) {
        ctx->pc = 0x11A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A558u;
        // 0x11a55c: 0x2139021  addu        $s2, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A560u;
        goto label_11a560;
    }
    ctx->pc = 0x11A558u;
    {
        const bool branch_taken_0x11a558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A558u;
        // 0x11a55c: 0x2139021  addu        $s2, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a558) {
            ctx->pc = 0x11A5ECu;
            goto label_11a5ec;
        }
    }
    ctx->pc = 0x11A560u;
label_11a560:
    // 0x11a560: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
label_11a564:
    if (ctx->pc == 0x11A564u) {
        ctx->pc = 0x11A568u;
        goto label_11a568;
    }
    ctx->pc = 0x11A560u;
    {
        const bool branch_taken_0x11a560 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a560) {
            ctx->pc = 0x11A57Cu;
            goto label_11a57c;
        }
    }
    ctx->pc = 0x11A568u;
label_11a568:
    // 0x11a568: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x11a568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_11a56c:
    // 0x11a56c: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x11a56cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_11a570:
    // 0x11a570: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x11a570u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_11a574:
    // 0x11a574: 0x1000001c  b           . + 4 + (0x1C << 2)
label_11a578:
    if (ctx->pc == 0x11A578u) {
        ctx->pc = 0x11A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A574u;
        // 0x11a578: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A57Cu;
        goto label_11a57c;
    }
    ctx->pc = 0x11A574u;
    {
        const bool branch_taken_0x11a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A574u;
        // 0x11a578: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a574) {
            ctx->pc = 0x11A5E8u;
            goto label_11a5e8;
        }
    }
    ctx->pc = 0x11A57Cu;
label_11a57c:
    // 0x11a57c: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_11a580:
    if (ctx->pc == 0x11A580u) {
        ctx->pc = 0x11A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A57Cu;
        // 0x11a580: 0xdfa30030  ld          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A584u;
        goto label_11a584;
    }
    ctx->pc = 0x11A57Cu;
    {
        const bool branch_taken_0x11a57c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A57Cu;
        // 0x11a580: 0xdfa30030  ld          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a57c) {
            ctx->pc = 0x11A5B8u;
            goto label_11a5b8;
        }
    }
    ctx->pc = 0x11A584u;
label_11a584:
    // 0x11a584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a588:
    // 0x11a588: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11a588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a58c:
    // 0x11a58c: 0x3283e  dsrl32      $a1, $v1, 0
    ctx->pc = 0x11a58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> (32 + 0));
label_11a590:
    // 0x11a590: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x11a590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_11a594:
    // 0x11a594: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a594u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_11a598:
    // 0x11a598: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11a598u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_11a59c:
    // 0x11a59c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x11a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_11a5a0:
    // 0x11a5a0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x11a5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_11a5a4:
    // 0x11a5a4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x11a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_11a5a8:
    // 0x11a5a8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_11a5ac:
    if (ctx->pc == 0x11A5ACu) {
        ctx->pc = 0x11A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5A8u;
        // 0x11a5ac: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A5B0u;
        goto label_11a5b0;
    }
    ctx->pc = 0x11A5A8u;
    {
        const bool branch_taken_0x11a5a8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5A8u;
        // 0x11a5ac: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5a8) {
            ctx->pc = 0x11A590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a590;
        }
    }
    ctx->pc = 0x11A5B0u;
label_11a5b0:
    // 0x11a5b0: 0x1000000e  b           . + 4 + (0xE << 2)
label_11a5b4:
    if (ctx->pc == 0x11A5B4u) {
        ctx->pc = 0x11A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5B0u;
        // 0x11a5b4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A5B8u;
        goto label_11a5b8;
    }
    ctx->pc = 0x11A5B0u;
    {
        const bool branch_taken_0x11a5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5B0u;
        // 0x11a5b4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5b0) {
            ctx->pc = 0x11A5ECu;
            goto label_11a5ec;
        }
    }
    ctx->pc = 0x11A5B8u;
label_11a5b8:
    // 0x11a5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a5bc:
    // 0x11a5bc: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x11a5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
label_11a5c0:
    // 0x11a5c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11a5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a5c4:
    // 0x11a5c4: 0x0  nop
    ctx->pc = 0x11a5c4u;
    // NOP
label_11a5c8:
    // 0x11a5c8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x11a5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_11a5cc:
    // 0x11a5cc: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a5ccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_11a5d0:
    // 0x11a5d0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x11a5d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_11a5d4:
    // 0x11a5d4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11a5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11a5d8:
    // 0x11a5d8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x11a5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_11a5dc:
    // 0x11a5dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_11a5e0:
    // 0x11a5e0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_11a5e4:
    if (ctx->pc == 0x11A5E4u) {
        ctx->pc = 0x11A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5E0u;
        // 0x11a5e4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A5E8u;
        goto label_11a5e8;
    }
    ctx->pc = 0x11A5E0u;
    {
        const bool branch_taken_0x11a5e0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5E0u;
        // 0x11a5e4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5e0) {
            ctx->pc = 0x11A5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a5c8;
        }
    }
    ctx->pc = 0x11A5E8u;
label_11a5e8:
    // 0x11a5e8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11a5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a5ec:
    // 0x11a5ec: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x11a5ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_11a5f0:
    // 0x11a5f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11a5f4:
    if (ctx->pc == 0x11A5F4u) {
        ctx->pc = 0x11A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5F0u;
        // 0x11a5f4: 0x2338023  subu        $s0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A5F8u;
        goto label_11a5f8;
    }
    ctx->pc = 0x11A5F0u;
    {
        const bool branch_taken_0x11a5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5F0u;
        // 0x11a5f4: 0x2338023  subu        $s0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5f0) {
            ctx->pc = 0x11A60Cu;
            goto label_11a60c;
        }
    }
    ctx->pc = 0x11A5F8u;
label_11a5f8:
    // 0x11a5f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a5fc:
    // 0x11a5fc: 0x2e0f809  jalr        $s7
label_11a600:
    if (ctx->pc == 0x11A600u) {
        ctx->pc = 0x11A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5FCu;
        // 0x11a600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A604u;
        goto label_11a604;
    }
    ctx->pc = 0x11A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A604u);
        ctx->pc = 0x11A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5FCu;
        // 0x11a600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A5FCu, 0x11A604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A604u;
label_11a604:
    // 0x11a604: 0x1c40ffd6  bgtz        $v0, . + 4 + (-0x2A << 2)
label_11a608:
    if (ctx->pc == 0x11A608u) {
        ctx->pc = 0x11A60Cu;
        goto label_11a60c;
    }
    ctx->pc = 0x11A604u;
    {
        const bool branch_taken_0x11a604 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x11a604) {
            ctx->pc = 0x11A560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a560;
        }
    }
    ctx->pc = 0x11A60Cu;
label_11a60c:
    // 0x11a60c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x11a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_11a610:
    // 0x11a610: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x11a610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a614:
    // 0x11a614: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x11a614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_11a618:
    // 0x11a618: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_11a61c:
    if (ctx->pc == 0x11A61Cu) {
        ctx->pc = 0x11A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A618u;
        // 0x11a61c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A620u;
        goto label_11a620;
    }
    ctx->pc = 0x11A618u;
    {
        const bool branch_taken_0x11a618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A618u;
        // 0x11a61c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a618) {
            ctx->pc = 0x11A558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a558;
        }
    }
    ctx->pc = 0x11A620u;
label_11a620:
    // 0x11a620: 0x10000069  b           . + 4 + (0x69 << 2)
label_11a624:
    if (ctx->pc == 0x11A624u) {
        ctx->pc = 0x11A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A620u;
        // 0x11a624: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A628u;
        goto label_11a628;
    }
    ctx->pc = 0x11A620u;
    {
        const bool branch_taken_0x11a620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A620u;
        // 0x11a624: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a620) {
            ctx->pc = 0x11A7C8u;
            goto label_11a7c8;
        }
    }
    ctx->pc = 0x11A628u;
label_11a628:
    // 0x11a628: 0x2b61823  subu        $v1, $s5, $s6
    ctx->pc = 0x11a628u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_11a62c:
    // 0x11a62c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x11a62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_11a630:
    // 0x11a630: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x11a630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11a634:
    // 0x11a634: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x11a634u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_11a638:
    // 0x11a638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11a63c:
    // 0x11a63c: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x11a63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_11a640:
    // 0x11a640: 0x18a00025  blez        $a1, . + 4 + (0x25 << 2)
label_11a644:
    if (ctx->pc == 0x11A644u) {
        ctx->pc = 0x11A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A640u;
        // 0x11a644: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A648u;
        goto label_11a648;
    }
    ctx->pc = 0x11A640u;
    {
        const bool branch_taken_0x11a640 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A640u;
        // 0x11a644: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a640) {
            ctx->pc = 0x11A6D8u;
            goto label_11a6d8;
        }
    }
    ctx->pc = 0x11A648u;
label_11a648:
    // 0x11a648: 0x2bc20002  slti        $v0, $fp, 0x2
    ctx->pc = 0x11a648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_11a64c:
    // 0x11a64c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_11a650:
    if (ctx->pc == 0x11A650u) {
        ctx->pc = 0x11A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A64Cu;
        // 0x11a650: 0x2451823  subu        $v1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A654u;
        goto label_11a654;
    }
    ctx->pc = 0x11A64Cu;
    {
        const bool branch_taken_0x11a64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A64Cu;
        // 0x11a650: 0x2451823  subu        $v1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a64c) {
            ctx->pc = 0x11A698u;
            goto label_11a698;
        }
    }
    ctx->pc = 0x11A654u;
label_11a654:
    // 0x11a654: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x11a654u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_11a658:
    // 0x11a658: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11a658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11a65c:
    // 0x11a65c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_11a660:
    // 0x11a660: 0x2918023  subu        $s0, $s4, $s1
    ctx->pc = 0x11a660u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_11a664:
    // 0x11a664: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_11a668:
    // 0x11a668: 0x2b43823  subu        $a3, $s5, $s4
    ctx->pc = 0x11a668u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_11a66c:
    // 0x11a66c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a670:
    // 0x11a670: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x11a670u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_11a674:
    // 0x11a674: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a674u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_11a678:
    // 0x11a678: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11a678u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_11a67c:
    // 0x11a67c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x11a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_11a680:
    // 0x11a680: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x11a680u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_11a684:
    // 0x11a684: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x11a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_11a688:
    // 0x11a688: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_11a68c:
    if (ctx->pc == 0x11A68Cu) {
        ctx->pc = 0x11A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A688u;
        // 0x11a68c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A690u;
        goto label_11a690;
    }
    ctx->pc = 0x11A688u;
    {
        const bool branch_taken_0x11a688 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A688u;
        // 0x11a68c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a688) {
            ctx->pc = 0x11A670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a670;
        }
    }
    ctx->pc = 0x11A690u;
label_11a690:
    // 0x11a690: 0x10000014  b           . + 4 + (0x14 << 2)
label_11a694:
    if (ctx->pc == 0x11A694u) {
        ctx->pc = 0x11A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A690u;
        // 0x11a694: 0xf32823  subu        $a1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A698u;
        goto label_11a698;
    }
    ctx->pc = 0x11A690u;
    {
        const bool branch_taken_0x11a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A690u;
        // 0x11a694: 0xf32823  subu        $a1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a690) {
            ctx->pc = 0x11A6E4u;
            goto label_11a6e4;
        }
    }
    ctx->pc = 0x11A698u;
label_11a698:
    // 0x11a698: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x11a698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_11a69c:
    // 0x11a69c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11a69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11a6a0:
    // 0x11a6a0: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_11a6a4:
    // 0x11a6a4: 0x2918023  subu        $s0, $s4, $s1
    ctx->pc = 0x11a6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_11a6a8:
    // 0x11a6a8: 0x2b43823  subu        $a3, $s5, $s4
    ctx->pc = 0x11a6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_11a6ac:
    // 0x11a6ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a6b0:
    // 0x11a6b0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x11a6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_11a6b4:
    // 0x11a6b4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a6b4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_11a6b8:
    // 0x11a6b8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x11a6b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_11a6bc:
    // 0x11a6bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11a6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11a6c0:
    // 0x11a6c0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x11a6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_11a6c4:
    // 0x11a6c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_11a6c8:
    // 0x11a6c8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_11a6cc:
    if (ctx->pc == 0x11A6CCu) {
        ctx->pc = 0x11A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6C8u;
        // 0x11a6cc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A6D0u;
        goto label_11a6d0;
    }
    ctx->pc = 0x11A6C8u;
    {
        const bool branch_taken_0x11a6c8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6C8u;
        // 0x11a6cc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6c8) {
            ctx->pc = 0x11A6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a6b0;
        }
    }
    ctx->pc = 0x11A6D0u;
label_11a6d0:
    // 0x11a6d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_11a6d4:
    if (ctx->pc == 0x11A6D4u) {
        ctx->pc = 0x11A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6D0u;
        // 0x11a6d4: 0xf32823  subu        $a1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A6D8u;
        goto label_11a6d8;
    }
    ctx->pc = 0x11A6D0u;
    {
        const bool branch_taken_0x11a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6D0u;
        // 0x11a6d4: 0xf32823  subu        $a1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6d0) {
            ctx->pc = 0x11A6E4u;
            goto label_11a6e4;
        }
    }
    ctx->pc = 0x11A6D8u;
label_11a6d8:
    // 0x11a6d8: 0x2918023  subu        $s0, $s4, $s1
    ctx->pc = 0x11a6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_11a6dc:
    // 0x11a6dc: 0x2b43823  subu        $a3, $s5, $s4
    ctx->pc = 0x11a6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_11a6e0:
    // 0x11a6e0: 0xf32823  subu        $a1, $a3, $s3
    ctx->pc = 0x11a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_11a6e4:
    // 0x11a6e4: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x11a6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_11a6e8:
    // 0x11a6e8: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x11a6e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_11a6ec:
    // 0x11a6ec: 0x18a0001e  blez        $a1, . + 4 + (0x1E << 2)
label_11a6f0:
    if (ctx->pc == 0x11A6F0u) {
        ctx->pc = 0x11A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6ECu;
        // 0x11a6f0: 0x2bc20002  slti        $v0, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A6F4u;
        goto label_11a6f4;
    }
    ctx->pc = 0x11A6ECu;
    {
        const bool branch_taken_0x11a6ec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6ECu;
        // 0x11a6f0: 0x2bc20002  slti        $v0, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6ec) {
            ctx->pc = 0x11A768u;
            goto label_11a768;
        }
    }
    ctx->pc = 0x11A6F4u;
label_11a6f4:
    // 0x11a6f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_11a6f8:
    if (ctx->pc == 0x11A6F8u) {
        ctx->pc = 0x11A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6F4u;
        // 0x11a6f8: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A6FCu;
        goto label_11a6fc;
    }
    ctx->pc = 0x11A6F4u;
    {
        const bool branch_taken_0x11a6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6F4u;
        // 0x11a6f8: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6f4) {
            ctx->pc = 0x11A738u;
            goto label_11a738;
        }
    }
    ctx->pc = 0x11A6FCu;
label_11a6fc:
    // 0x11a6fc: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x11a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_11a700:
    // 0x11a700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a704:
    // 0x11a704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_11a708:
    // 0x11a708: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11a708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11a70c:
    // 0x11a70c: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_11a710:
    // 0x11a710: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x11a710u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_11a714:
    // 0x11a714: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a714u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_11a718:
    // 0x11a718: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11a718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_11a71c:
    // 0x11a71c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x11a71cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_11a720:
    // 0x11a720: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x11a720u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_11a724:
    // 0x11a724: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x11a724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_11a728:
    // 0x11a728: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_11a72c:
    if (ctx->pc == 0x11A72Cu) {
        ctx->pc = 0x11A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A728u;
        // 0x11a72c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A730u;
        goto label_11a730;
    }
    ctx->pc = 0x11A728u;
    {
        const bool branch_taken_0x11a728 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A728u;
        // 0x11a72c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a728) {
            ctx->pc = 0x11A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a710;
        }
    }
    ctx->pc = 0x11A730u;
label_11a730:
    // 0x11a730: 0x1000000e  b           . + 4 + (0xE << 2)
label_11a734:
    if (ctx->pc == 0x11A734u) {
        ctx->pc = 0x11A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A730u;
        // 0x11a734: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A738u;
        goto label_11a738;
    }
    ctx->pc = 0x11A730u;
    {
        const bool branch_taken_0x11a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A730u;
        // 0x11a734: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a730) {
            ctx->pc = 0x11A76Cu;
            goto label_11a76c;
        }
    }
    ctx->pc = 0x11A738u;
label_11a738:
    // 0x11a738: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x11a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_11a73c:
    // 0x11a73c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a740:
    // 0x11a740: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_11a744:
    // 0x11a744: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11a744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11a748:
    // 0x11a748: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x11a748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_11a74c:
    // 0x11a74c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a74cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_11a750:
    // 0x11a750: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x11a750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_11a754:
    // 0x11a754: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11a754u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11a758:
    // 0x11a758: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x11a758u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_11a75c:
    // 0x11a75c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_11a760:
    // 0x11a760: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_11a764:
    if (ctx->pc == 0x11A764u) {
        ctx->pc = 0x11A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A760u;
        // 0x11a764: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A768u;
        goto label_11a768;
    }
    ctx->pc = 0x11A760u;
    {
        const bool branch_taken_0x11a760 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A760u;
        // 0x11a764: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a760) {
            ctx->pc = 0x11A748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a748;
        }
    }
    ctx->pc = 0x11A768u;
label_11a768:
    // 0x11a768: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x11a768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_11a76c:
    // 0x11a76c: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x11a76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_11a770:
    // 0x11a770: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_11a774:
    if (ctx->pc == 0x11A774u) {
        ctx->pc = 0x11A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A770u;
        // 0x11a774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A778u;
        goto label_11a778;
    }
    ctx->pc = 0x11A770u;
    {
        const bool branch_taken_0x11a770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a770) {
            ctx->pc = 0x11A774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A770u;
            // 0x11a774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A79Cu;
            goto label_11a79c;
        }
    }
    ctx->pc = 0x11A778u;
label_11a778:
    // 0x11a778: 0xb3001b  divu        $zero, $a1, $s3
    ctx->pc = 0x11a778u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_11a77c:
    // 0x11a77c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_11a780:
    if (ctx->pc == 0x11A780u) {
        ctx->pc = 0x11A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A77Cu;
        // 0x11a780: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A784u;
        goto label_11a784;
    }
    ctx->pc = 0x11A77Cu;
    {
        const bool branch_taken_0x11a77c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a77c) {
            ctx->pc = 0x11A780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A77Cu;
            // 0x11a780: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A784u;
            goto label_11a784;
        }
    }
    ctx->pc = 0x11A784u;
label_11a784:
    // 0x11a784: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a788:
    // 0x11a788: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x11a788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11a78c:
    // 0x11a78c: 0x2812  mflo        $a1
    ctx->pc = 0x11a78cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_11a790:
    // 0x11a790: 0xc046774  jal         func_119DD0
label_11a794:
    if (ctx->pc == 0x11A794u) {
        ctx->pc = 0x11A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A790u;
        // 0x11a794: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A798u;
        goto label_11a798;
    }
    ctx->pc = 0x11A790u;
    SET_GPR_U32(ctx, 31, 0x11A798u);
    ctx->pc = 0x11A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A790u;
    // 0x11a794: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119DD0u;
    goto label_119dd0;
    ctx->pc = 0x11A798u;
label_11a798:
    // 0x11a798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a79c:
    // 0x11a79c: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x11a79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_11a7a0:
    // 0x11a7a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11a7a4:
    if (ctx->pc == 0x11A7A4u) {
        ctx->pc = 0x11A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7A0u;
        // 0x11a7a4: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A7A8u;
        goto label_11a7a8;
    }
    ctx->pc = 0x11A7A0u;
    {
        const bool branch_taken_0x11a7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7A0u;
        // 0x11a7a4: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7a0) {
            ctx->pc = 0x11A7C8u;
            goto label_11a7c8;
        }
    }
    ctx->pc = 0x11A7A8u;
label_11a7a8:
    // 0x11a7a8: 0xb3001b  divu        $zero, $a1, $s3
    ctx->pc = 0x11a7a8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_11a7ac:
    // 0x11a7ac: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_11a7b0:
    if (ctx->pc == 0x11A7B0u) {
        ctx->pc = 0x11A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7ACu;
        // 0x11a7b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A7B4u;
        goto label_11a7b4;
    }
    ctx->pc = 0x11A7ACu;
    {
        const bool branch_taken_0x11a7ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a7ac) {
            ctx->pc = 0x11A7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A7ACu;
            // 0x11a7b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A7B4u;
            goto label_11a7b4;
        }
    }
    ctx->pc = 0x11A7B4u;
label_11a7b4:
    // 0x11a7b4: 0x2a5b023  subu        $s6, $s5, $a1
    ctx->pc = 0x11a7b4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_11a7b8:
    // 0x11a7b8: 0x1012  mflo        $v0
    ctx->pc = 0x11a7b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_11a7bc:
    // 0x11a7bc: 0x1000fd93  b           . + 4 + (-0x26D << 2)
label_11a7c0:
    if (ctx->pc == 0x11A7C0u) {
        ctx->pc = 0x11A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7BCu;
        // 0x11a7c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A7C4u;
        goto label_11a7c4;
    }
    ctx->pc = 0x11A7BCu;
    {
        const bool branch_taken_0x11a7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7BCu;
        // 0x11a7c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7bc) {
            ctx->pc = 0x119E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119e0c;
        }
    }
    ctx->pc = 0x11A7C4u;
label_11a7c4:
    // 0x11a7c4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x11a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_11a7c8:
    // 0x11a7c8: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x11a7c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_11a7cc:
    // 0x11a7cc: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x11a7ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_11a7d0:
    // 0x11a7d0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x11a7d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_11a7d4:
    // 0x11a7d4: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x11a7d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_11a7d8:
    // 0x11a7d8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x11a7d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_11a7dc:
    // 0x11a7dc: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x11a7dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_11a7e0:
    // 0x11a7e0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x11a7e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11a7e4:
    // 0x11a7e4: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x11a7e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11a7e8:
    // 0x11a7e8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x11a7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11a7ec:
    // 0x11a7ec: 0x3e00008  jr          $ra
label_11a7f0:
    if (ctx->pc == 0x11A7F0u) {
        ctx->pc = 0x11A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7ECu;
        // 0x11a7f0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A7F4u;
        goto label_fallthrough_0x11a7ec;
    }
    ctx->pc = 0x11A7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7ECu;
        // 0x11a7f0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11a7ec:
    ctx->pc = 0x11A7F4u;
}
