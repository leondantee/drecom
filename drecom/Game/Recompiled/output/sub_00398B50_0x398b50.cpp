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

// Function: sub_00398B50
// Address: 0x398b50 - 0x399290
void sub_00398B50_0x398b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398B50_0x398b50");
#endif

    switch (ctx->pc) {
        case 0x398b50u: goto label_398b50;
        case 0x398b54u: goto label_398b54;
        case 0x398b58u: goto label_398b58;
        case 0x398b5cu: goto label_398b5c;
        case 0x398b60u: goto label_398b60;
        case 0x398b64u: goto label_398b64;
        case 0x398b68u: goto label_398b68;
        case 0x398b6cu: goto label_398b6c;
        case 0x398b70u: goto label_398b70;
        case 0x398b74u: goto label_398b74;
        case 0x398b78u: goto label_398b78;
        case 0x398b7cu: goto label_398b7c;
        case 0x398b80u: goto label_398b80;
        case 0x398b84u: goto label_398b84;
        case 0x398b88u: goto label_398b88;
        case 0x398b8cu: goto label_398b8c;
        case 0x398b90u: goto label_398b90;
        case 0x398b94u: goto label_398b94;
        case 0x398b98u: goto label_398b98;
        case 0x398b9cu: goto label_398b9c;
        case 0x398ba0u: goto label_398ba0;
        case 0x398ba4u: goto label_398ba4;
        case 0x398ba8u: goto label_398ba8;
        case 0x398bacu: goto label_398bac;
        case 0x398bb0u: goto label_398bb0;
        case 0x398bb4u: goto label_398bb4;
        case 0x398bb8u: goto label_398bb8;
        case 0x398bbcu: goto label_398bbc;
        case 0x398bc0u: goto label_398bc0;
        case 0x398bc4u: goto label_398bc4;
        case 0x398bc8u: goto label_398bc8;
        case 0x398bccu: goto label_398bcc;
        case 0x398bd0u: goto label_398bd0;
        case 0x398bd4u: goto label_398bd4;
        case 0x398bd8u: goto label_398bd8;
        case 0x398bdcu: goto label_398bdc;
        case 0x398be0u: goto label_398be0;
        case 0x398be4u: goto label_398be4;
        case 0x398be8u: goto label_398be8;
        case 0x398becu: goto label_398bec;
        case 0x398bf0u: goto label_398bf0;
        case 0x398bf4u: goto label_398bf4;
        case 0x398bf8u: goto label_398bf8;
        case 0x398bfcu: goto label_398bfc;
        case 0x398c00u: goto label_398c00;
        case 0x398c04u: goto label_398c04;
        case 0x398c08u: goto label_398c08;
        case 0x398c0cu: goto label_398c0c;
        case 0x398c10u: goto label_398c10;
        case 0x398c14u: goto label_398c14;
        case 0x398c18u: goto label_398c18;
        case 0x398c1cu: goto label_398c1c;
        case 0x398c20u: goto label_398c20;
        case 0x398c24u: goto label_398c24;
        case 0x398c28u: goto label_398c28;
        case 0x398c2cu: goto label_398c2c;
        case 0x398c30u: goto label_398c30;
        case 0x398c34u: goto label_398c34;
        case 0x398c38u: goto label_398c38;
        case 0x398c3cu: goto label_398c3c;
        case 0x398c40u: goto label_398c40;
        case 0x398c44u: goto label_398c44;
        case 0x398c48u: goto label_398c48;
        case 0x398c4cu: goto label_398c4c;
        case 0x398c50u: goto label_398c50;
        case 0x398c54u: goto label_398c54;
        case 0x398c58u: goto label_398c58;
        case 0x398c5cu: goto label_398c5c;
        case 0x398c60u: goto label_398c60;
        case 0x398c64u: goto label_398c64;
        case 0x398c68u: goto label_398c68;
        case 0x398c6cu: goto label_398c6c;
        case 0x398c70u: goto label_398c70;
        case 0x398c74u: goto label_398c74;
        case 0x398c78u: goto label_398c78;
        case 0x398c7cu: goto label_398c7c;
        case 0x398c80u: goto label_398c80;
        case 0x398c84u: goto label_398c84;
        case 0x398c88u: goto label_398c88;
        case 0x398c8cu: goto label_398c8c;
        case 0x398c90u: goto label_398c90;
        case 0x398c94u: goto label_398c94;
        case 0x398c98u: goto label_398c98;
        case 0x398c9cu: goto label_398c9c;
        case 0x398ca0u: goto label_398ca0;
        case 0x398ca4u: goto label_398ca4;
        case 0x398ca8u: goto label_398ca8;
        case 0x398cacu: goto label_398cac;
        case 0x398cb0u: goto label_398cb0;
        case 0x398cb4u: goto label_398cb4;
        case 0x398cb8u: goto label_398cb8;
        case 0x398cbcu: goto label_398cbc;
        case 0x398cc0u: goto label_398cc0;
        case 0x398cc4u: goto label_398cc4;
        case 0x398cc8u: goto label_398cc8;
        case 0x398cccu: goto label_398ccc;
        case 0x398cd0u: goto label_398cd0;
        case 0x398cd4u: goto label_398cd4;
        case 0x398cd8u: goto label_398cd8;
        case 0x398cdcu: goto label_398cdc;
        case 0x398ce0u: goto label_398ce0;
        case 0x398ce4u: goto label_398ce4;
        case 0x398ce8u: goto label_398ce8;
        case 0x398cecu: goto label_398cec;
        case 0x398cf0u: goto label_398cf0;
        case 0x398cf4u: goto label_398cf4;
        case 0x398cf8u: goto label_398cf8;
        case 0x398cfcu: goto label_398cfc;
        case 0x398d00u: goto label_398d00;
        case 0x398d04u: goto label_398d04;
        case 0x398d08u: goto label_398d08;
        case 0x398d0cu: goto label_398d0c;
        case 0x398d10u: goto label_398d10;
        case 0x398d14u: goto label_398d14;
        case 0x398d18u: goto label_398d18;
        case 0x398d1cu: goto label_398d1c;
        case 0x398d20u: goto label_398d20;
        case 0x398d24u: goto label_398d24;
        case 0x398d28u: goto label_398d28;
        case 0x398d2cu: goto label_398d2c;
        case 0x398d30u: goto label_398d30;
        case 0x398d34u: goto label_398d34;
        case 0x398d38u: goto label_398d38;
        case 0x398d3cu: goto label_398d3c;
        case 0x398d40u: goto label_398d40;
        case 0x398d44u: goto label_398d44;
        case 0x398d48u: goto label_398d48;
        case 0x398d4cu: goto label_398d4c;
        case 0x398d50u: goto label_398d50;
        case 0x398d54u: goto label_398d54;
        case 0x398d58u: goto label_398d58;
        case 0x398d5cu: goto label_398d5c;
        case 0x398d60u: goto label_398d60;
        case 0x398d64u: goto label_398d64;
        case 0x398d68u: goto label_398d68;
        case 0x398d6cu: goto label_398d6c;
        case 0x398d70u: goto label_398d70;
        case 0x398d74u: goto label_398d74;
        case 0x398d78u: goto label_398d78;
        case 0x398d7cu: goto label_398d7c;
        case 0x398d80u: goto label_398d80;
        case 0x398d84u: goto label_398d84;
        case 0x398d88u: goto label_398d88;
        case 0x398d8cu: goto label_398d8c;
        case 0x398d90u: goto label_398d90;
        case 0x398d94u: goto label_398d94;
        case 0x398d98u: goto label_398d98;
        case 0x398d9cu: goto label_398d9c;
        case 0x398da0u: goto label_398da0;
        case 0x398da4u: goto label_398da4;
        case 0x398da8u: goto label_398da8;
        case 0x398dacu: goto label_398dac;
        case 0x398db0u: goto label_398db0;
        case 0x398db4u: goto label_398db4;
        case 0x398db8u: goto label_398db8;
        case 0x398dbcu: goto label_398dbc;
        case 0x398dc0u: goto label_398dc0;
        case 0x398dc4u: goto label_398dc4;
        case 0x398dc8u: goto label_398dc8;
        case 0x398dccu: goto label_398dcc;
        case 0x398dd0u: goto label_398dd0;
        case 0x398dd4u: goto label_398dd4;
        case 0x398dd8u: goto label_398dd8;
        case 0x398ddcu: goto label_398ddc;
        case 0x398de0u: goto label_398de0;
        case 0x398de4u: goto label_398de4;
        case 0x398de8u: goto label_398de8;
        case 0x398decu: goto label_398dec;
        case 0x398df0u: goto label_398df0;
        case 0x398df4u: goto label_398df4;
        case 0x398df8u: goto label_398df8;
        case 0x398dfcu: goto label_398dfc;
        case 0x398e00u: goto label_398e00;
        case 0x398e04u: goto label_398e04;
        case 0x398e08u: goto label_398e08;
        case 0x398e0cu: goto label_398e0c;
        case 0x398e10u: goto label_398e10;
        case 0x398e14u: goto label_398e14;
        case 0x398e18u: goto label_398e18;
        case 0x398e1cu: goto label_398e1c;
        case 0x398e20u: goto label_398e20;
        case 0x398e24u: goto label_398e24;
        case 0x398e28u: goto label_398e28;
        case 0x398e2cu: goto label_398e2c;
        case 0x398e30u: goto label_398e30;
        case 0x398e34u: goto label_398e34;
        case 0x398e38u: goto label_398e38;
        case 0x398e3cu: goto label_398e3c;
        case 0x398e40u: goto label_398e40;
        case 0x398e44u: goto label_398e44;
        case 0x398e48u: goto label_398e48;
        case 0x398e4cu: goto label_398e4c;
        case 0x398e50u: goto label_398e50;
        case 0x398e54u: goto label_398e54;
        case 0x398e58u: goto label_398e58;
        case 0x398e5cu: goto label_398e5c;
        case 0x398e60u: goto label_398e60;
        case 0x398e64u: goto label_398e64;
        case 0x398e68u: goto label_398e68;
        case 0x398e6cu: goto label_398e6c;
        case 0x398e70u: goto label_398e70;
        case 0x398e74u: goto label_398e74;
        case 0x398e78u: goto label_398e78;
        case 0x398e7cu: goto label_398e7c;
        case 0x398e80u: goto label_398e80;
        case 0x398e84u: goto label_398e84;
        case 0x398e88u: goto label_398e88;
        case 0x398e8cu: goto label_398e8c;
        case 0x398e90u: goto label_398e90;
        case 0x398e94u: goto label_398e94;
        case 0x398e98u: goto label_398e98;
        case 0x398e9cu: goto label_398e9c;
        case 0x398ea0u: goto label_398ea0;
        case 0x398ea4u: goto label_398ea4;
        case 0x398ea8u: goto label_398ea8;
        case 0x398eacu: goto label_398eac;
        case 0x398eb0u: goto label_398eb0;
        case 0x398eb4u: goto label_398eb4;
        case 0x398eb8u: goto label_398eb8;
        case 0x398ebcu: goto label_398ebc;
        case 0x398ec0u: goto label_398ec0;
        case 0x398ec4u: goto label_398ec4;
        case 0x398ec8u: goto label_398ec8;
        case 0x398eccu: goto label_398ecc;
        case 0x398ed0u: goto label_398ed0;
        case 0x398ed4u: goto label_398ed4;
        case 0x398ed8u: goto label_398ed8;
        case 0x398edcu: goto label_398edc;
        case 0x398ee0u: goto label_398ee0;
        case 0x398ee4u: goto label_398ee4;
        case 0x398ee8u: goto label_398ee8;
        case 0x398eecu: goto label_398eec;
        case 0x398ef0u: goto label_398ef0;
        case 0x398ef4u: goto label_398ef4;
        case 0x398ef8u: goto label_398ef8;
        case 0x398efcu: goto label_398efc;
        case 0x398f00u: goto label_398f00;
        case 0x398f04u: goto label_398f04;
        case 0x398f08u: goto label_398f08;
        case 0x398f0cu: goto label_398f0c;
        case 0x398f10u: goto label_398f10;
        case 0x398f14u: goto label_398f14;
        case 0x398f18u: goto label_398f18;
        case 0x398f1cu: goto label_398f1c;
        case 0x398f20u: goto label_398f20;
        case 0x398f24u: goto label_398f24;
        case 0x398f28u: goto label_398f28;
        case 0x398f2cu: goto label_398f2c;
        case 0x398f30u: goto label_398f30;
        case 0x398f34u: goto label_398f34;
        case 0x398f38u: goto label_398f38;
        case 0x398f3cu: goto label_398f3c;
        case 0x398f40u: goto label_398f40;
        case 0x398f44u: goto label_398f44;
        case 0x398f48u: goto label_398f48;
        case 0x398f4cu: goto label_398f4c;
        case 0x398f50u: goto label_398f50;
        case 0x398f54u: goto label_398f54;
        case 0x398f58u: goto label_398f58;
        case 0x398f5cu: goto label_398f5c;
        case 0x398f60u: goto label_398f60;
        case 0x398f64u: goto label_398f64;
        case 0x398f68u: goto label_398f68;
        case 0x398f6cu: goto label_398f6c;
        case 0x398f70u: goto label_398f70;
        case 0x398f74u: goto label_398f74;
        case 0x398f78u: goto label_398f78;
        case 0x398f7cu: goto label_398f7c;
        case 0x398f80u: goto label_398f80;
        case 0x398f84u: goto label_398f84;
        case 0x398f88u: goto label_398f88;
        case 0x398f8cu: goto label_398f8c;
        case 0x398f90u: goto label_398f90;
        case 0x398f94u: goto label_398f94;
        case 0x398f98u: goto label_398f98;
        case 0x398f9cu: goto label_398f9c;
        case 0x398fa0u: goto label_398fa0;
        case 0x398fa4u: goto label_398fa4;
        case 0x398fa8u: goto label_398fa8;
        case 0x398facu: goto label_398fac;
        case 0x398fb0u: goto label_398fb0;
        case 0x398fb4u: goto label_398fb4;
        case 0x398fb8u: goto label_398fb8;
        case 0x398fbcu: goto label_398fbc;
        case 0x398fc0u: goto label_398fc0;
        case 0x398fc4u: goto label_398fc4;
        case 0x398fc8u: goto label_398fc8;
        case 0x398fccu: goto label_398fcc;
        case 0x398fd0u: goto label_398fd0;
        case 0x398fd4u: goto label_398fd4;
        case 0x398fd8u: goto label_398fd8;
        case 0x398fdcu: goto label_398fdc;
        case 0x398fe0u: goto label_398fe0;
        case 0x398fe4u: goto label_398fe4;
        case 0x398fe8u: goto label_398fe8;
        case 0x398fecu: goto label_398fec;
        case 0x398ff0u: goto label_398ff0;
        case 0x398ff4u: goto label_398ff4;
        case 0x398ff8u: goto label_398ff8;
        case 0x398ffcu: goto label_398ffc;
        case 0x399000u: goto label_399000;
        case 0x399004u: goto label_399004;
        case 0x399008u: goto label_399008;
        case 0x39900cu: goto label_39900c;
        case 0x399010u: goto label_399010;
        case 0x399014u: goto label_399014;
        case 0x399018u: goto label_399018;
        case 0x39901cu: goto label_39901c;
        case 0x399020u: goto label_399020;
        case 0x399024u: goto label_399024;
        case 0x399028u: goto label_399028;
        case 0x39902cu: goto label_39902c;
        case 0x399030u: goto label_399030;
        case 0x399034u: goto label_399034;
        case 0x399038u: goto label_399038;
        case 0x39903cu: goto label_39903c;
        case 0x399040u: goto label_399040;
        case 0x399044u: goto label_399044;
        case 0x399048u: goto label_399048;
        case 0x39904cu: goto label_39904c;
        case 0x399050u: goto label_399050;
        case 0x399054u: goto label_399054;
        case 0x399058u: goto label_399058;
        case 0x39905cu: goto label_39905c;
        case 0x399060u: goto label_399060;
        case 0x399064u: goto label_399064;
        case 0x399068u: goto label_399068;
        case 0x39906cu: goto label_39906c;
        case 0x399070u: goto label_399070;
        case 0x399074u: goto label_399074;
        case 0x399078u: goto label_399078;
        case 0x39907cu: goto label_39907c;
        case 0x399080u: goto label_399080;
        case 0x399084u: goto label_399084;
        case 0x399088u: goto label_399088;
        case 0x39908cu: goto label_39908c;
        case 0x399090u: goto label_399090;
        case 0x399094u: goto label_399094;
        case 0x399098u: goto label_399098;
        case 0x39909cu: goto label_39909c;
        case 0x3990a0u: goto label_3990a0;
        case 0x3990a4u: goto label_3990a4;
        case 0x3990a8u: goto label_3990a8;
        case 0x3990acu: goto label_3990ac;
        case 0x3990b0u: goto label_3990b0;
        case 0x3990b4u: goto label_3990b4;
        case 0x3990b8u: goto label_3990b8;
        case 0x3990bcu: goto label_3990bc;
        case 0x3990c0u: goto label_3990c0;
        case 0x3990c4u: goto label_3990c4;
        case 0x3990c8u: goto label_3990c8;
        case 0x3990ccu: goto label_3990cc;
        case 0x3990d0u: goto label_3990d0;
        case 0x3990d4u: goto label_3990d4;
        case 0x3990d8u: goto label_3990d8;
        case 0x3990dcu: goto label_3990dc;
        case 0x3990e0u: goto label_3990e0;
        case 0x3990e4u: goto label_3990e4;
        case 0x3990e8u: goto label_3990e8;
        case 0x3990ecu: goto label_3990ec;
        case 0x3990f0u: goto label_3990f0;
        case 0x3990f4u: goto label_3990f4;
        case 0x3990f8u: goto label_3990f8;
        case 0x3990fcu: goto label_3990fc;
        case 0x399100u: goto label_399100;
        case 0x399104u: goto label_399104;
        case 0x399108u: goto label_399108;
        case 0x39910cu: goto label_39910c;
        case 0x399110u: goto label_399110;
        case 0x399114u: goto label_399114;
        case 0x399118u: goto label_399118;
        case 0x39911cu: goto label_39911c;
        case 0x399120u: goto label_399120;
        case 0x399124u: goto label_399124;
        case 0x399128u: goto label_399128;
        case 0x39912cu: goto label_39912c;
        case 0x399130u: goto label_399130;
        case 0x399134u: goto label_399134;
        case 0x399138u: goto label_399138;
        case 0x39913cu: goto label_39913c;
        case 0x399140u: goto label_399140;
        case 0x399144u: goto label_399144;
        case 0x399148u: goto label_399148;
        case 0x39914cu: goto label_39914c;
        case 0x399150u: goto label_399150;
        case 0x399154u: goto label_399154;
        case 0x399158u: goto label_399158;
        case 0x39915cu: goto label_39915c;
        case 0x399160u: goto label_399160;
        case 0x399164u: goto label_399164;
        case 0x399168u: goto label_399168;
        case 0x39916cu: goto label_39916c;
        case 0x399170u: goto label_399170;
        case 0x399174u: goto label_399174;
        case 0x399178u: goto label_399178;
        case 0x39917cu: goto label_39917c;
        case 0x399180u: goto label_399180;
        case 0x399184u: goto label_399184;
        case 0x399188u: goto label_399188;
        case 0x39918cu: goto label_39918c;
        case 0x399190u: goto label_399190;
        case 0x399194u: goto label_399194;
        case 0x399198u: goto label_399198;
        case 0x39919cu: goto label_39919c;
        case 0x3991a0u: goto label_3991a0;
        case 0x3991a4u: goto label_3991a4;
        case 0x3991a8u: goto label_3991a8;
        case 0x3991acu: goto label_3991ac;
        case 0x3991b0u: goto label_3991b0;
        case 0x3991b4u: goto label_3991b4;
        case 0x3991b8u: goto label_3991b8;
        case 0x3991bcu: goto label_3991bc;
        case 0x3991c0u: goto label_3991c0;
        case 0x3991c4u: goto label_3991c4;
        case 0x3991c8u: goto label_3991c8;
        case 0x3991ccu: goto label_3991cc;
        case 0x3991d0u: goto label_3991d0;
        case 0x3991d4u: goto label_3991d4;
        case 0x3991d8u: goto label_3991d8;
        case 0x3991dcu: goto label_3991dc;
        case 0x3991e0u: goto label_3991e0;
        case 0x3991e4u: goto label_3991e4;
        case 0x3991e8u: goto label_3991e8;
        case 0x3991ecu: goto label_3991ec;
        case 0x3991f0u: goto label_3991f0;
        case 0x3991f4u: goto label_3991f4;
        case 0x3991f8u: goto label_3991f8;
        case 0x3991fcu: goto label_3991fc;
        case 0x399200u: goto label_399200;
        case 0x399204u: goto label_399204;
        case 0x399208u: goto label_399208;
        case 0x39920cu: goto label_39920c;
        case 0x399210u: goto label_399210;
        case 0x399214u: goto label_399214;
        case 0x399218u: goto label_399218;
        case 0x39921cu: goto label_39921c;
        case 0x399220u: goto label_399220;
        case 0x399224u: goto label_399224;
        case 0x399228u: goto label_399228;
        case 0x39922cu: goto label_39922c;
        case 0x399230u: goto label_399230;
        case 0x399234u: goto label_399234;
        case 0x399238u: goto label_399238;
        case 0x39923cu: goto label_39923c;
        case 0x399240u: goto label_399240;
        case 0x399244u: goto label_399244;
        case 0x399248u: goto label_399248;
        case 0x39924cu: goto label_39924c;
        case 0x399250u: goto label_399250;
        case 0x399254u: goto label_399254;
        case 0x399258u: goto label_399258;
        case 0x39925cu: goto label_39925c;
        case 0x399260u: goto label_399260;
        case 0x399264u: goto label_399264;
        case 0x399268u: goto label_399268;
        case 0x39926cu: goto label_39926c;
        case 0x399270u: goto label_399270;
        case 0x399274u: goto label_399274;
        case 0x399278u: goto label_399278;
        case 0x39927cu: goto label_39927c;
        case 0x399280u: goto label_399280;
        case 0x399284u: goto label_399284;
        case 0x399288u: goto label_399288;
        case 0x39928cu: goto label_39928c;
        default: break;
    }

    ctx->pc = 0x398b50u;

label_398b50:
    // 0x398b50: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398b50u;
    
label_398b54:
    // 0x398b54: 0xe0d0504  jal         func_8341410
label_398b58:
    if (ctx->pc == 0x398B58u) {
        ctx->pc = 0x398B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B54u;
        // 0x398b58: 0x1211100f  beq         $s0, $s1, . + 4 + (0x100F << 2) (Delay Slot)
        // Likely branch instruction at 0x398B58 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B5Cu;
        goto label_398b5c;
    }
    ctx->pc = 0x398B54u;
    SET_GPR_U32(ctx, 31, 0x398B5Cu);
    ctx->pc = 0x398B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B54u;
    // 0x398b58: 0x1211100f  beq         $s0, $s1, . + 4 + (0x100F << 2) (Delay Slot)
    // Likely branch instruction at 0x398B58 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8341410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8341410u, 0x398B54u, 0x398B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B5Cu;
label_398b5c:
    // 0x398b5c: 0x8070613  j           func_1C184C
label_398b60:
    if (ctx->pc == 0x398B60u) {
        ctx->pc = 0x398B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B5Cu;
        // 0x398b60: 0xc0b0a09  jal         func_2C2824 (Delay Slot)
        // JAL 0x2C2824 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B64u;
        goto label_398b64;
    }
    ctx->pc = 0x398B5Cu;
    ctx->pc = 0x398B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B5Cu;
    // 0x398b60: 0xc0b0a09  jal         func_2C2824 (Delay Slot)
    // JAL 0x2C2824 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C184Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C184Cu, 0x398B5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x398B64u;
label_398b64:
    // 0x398b64: 0x1b1a1914  .word       0x1B1A1914                   # blez        $t8, . + 4 + (0x1914 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_398b68:
    if (ctx->pc == 0x398B68u) {
        ctx->pc = 0x398B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B64u;
        // 0x398b68: 0x1716151c  bne         $t8, $s6, . + 4 + (0x151C << 2) (Delay Slot)
        // Likely branch instruction at 0x398B68 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B6Cu;
        goto label_398b6c;
    }
    ctx->pc = 0x398B64u;
    {
        const bool branch_taken_0x398b64 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x398B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B64u;
        // 0x398b68: 0x1716151c  bne         $t8, $s6, . + 4 + (0x151C << 2) (Delay Slot)
        // Likely branch instruction at 0x398B68 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b64) {
            ctx->pc = 0x39EFB8u;
            return;
        }
    }
    ctx->pc = 0x398B6Cu;
label_398b6c:
    // 0x398b6c: 0x1f1d1e18  .word       0x1F1D1E18                   # bgtz        $t8, . + 4 + (0x1E18 << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
label_398b70:
    if (ctx->pc == 0x398B70u) {
        ctx->pc = 0x398B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B6Cu;
        // 0x398b70: 0x23222120  addi        $v0, $t9, 0x2120 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B74u;
        goto label_398b74;
    }
    ctx->pc = 0x398B6Cu;
    {
        const bool branch_taken_0x398b6c = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x398B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B6Cu;
        // 0x398b70: 0x23222120  addi        $v0, $t9, 0x2120 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b6c) {
            ctx->pc = 0x3A03D0u;
            return;
        }
    }
    ctx->pc = 0x398B74u;
label_398b74:
    // 0x398b74: 0x27262524  addiu       $a2, $t9, 0x2524
    ctx->pc = 0x398b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 9508));
label_398b78:
    // 0x398b78: 0x0  nop
    ctx->pc = 0x398b78u;
    // NOP
label_398b7c:
    // 0x398b7c: 0x0  nop
    ctx->pc = 0x398b7cu;
    // NOP
label_398b80:
    // 0x398b80: 0x0  nop
    ctx->pc = 0x398b80u;
    // NOP
label_398b84:
    // 0x398b84: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398b84u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x398B84 raw=0x437A0000");
label_398b88:
    // 0x398b88: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x398b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398b8c:
    // 0x398b8c: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398b8cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x398B8C raw=0x42F00000");
label_398b90:
    // 0x398b90: 0x0  nop
    ctx->pc = 0x398b90u;
    // NOP
label_398b94:
    // 0x398b94: 0x0  nop
    ctx->pc = 0x398b94u;
    // NOP
label_398b98:
    // 0x398b98: 0x0  nop
    ctx->pc = 0x398b98u;
    // NOP
label_398b9c:
    // 0x398b9c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398b9cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398ba0:
    // 0x398ba0: 0x2e38f0  tge         $at, $t6, 227
    ctx->pc = 0x398ba0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398ba4:
    // 0x398ba4: 0x2e3e10  .word       0x002E3E10                   # mfhi        $a3 # 002E0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398ba4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_398ba8:
    // 0x398ba8: 0x2e63b0  tge         $at, $t6, 398
    ctx->pc = 0x398ba8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398bac:
    // 0x398bac: 0x2e6b30  tge         $at, $t6, 428
    ctx->pc = 0x398bacu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398bb0:
    // 0x398bb0: 0x2e55c0  .word       0x002E55C0                   # sll         $t2, $t6, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 23));
label_398bb4:
    // 0x398bb4: 0x2e5960  .word       0x002E5960                   # add         $t3, $at, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398bb4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_398bb8:
    // 0x398bb8: 0x2e4df0  tge         $at, $t6, 311
    ctx->pc = 0x398bb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398bbc:
    // 0x398bbc: 0x2e5d50  .word       0x002E5D50                   # mfhi        $t3 # 002E0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398bbcu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_398bc0:
    // 0x398bc0: 0x2e5100  .word       0x002E5100                   # sll         $t2, $t6, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_398bc4:
    // 0x398bc4: 0x2e5390  .word       0x002E5390                   # mfhi        $t2 # 002E0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398bc4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_398bc8:
    // 0x398bc8: 0x0  nop
    ctx->pc = 0x398bc8u;
    // NOP
label_398bcc:
    // 0x398bcc: 0x0  nop
    ctx->pc = 0x398bccu;
    // NOP
label_398bd0:
    // 0x398bd0: 0x2e56f0  tge         $at, $t6, 347
    ctx->pc = 0x398bd0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398bd4:
    // 0x398bd4: 0x2e5ae0  .word       0x002E5AE0                   # add         $t3, $at, $t6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398bd4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_398bd8:
    // 0x398bd8: 0x2e4ff0  tge         $at, $t6, 319
    ctx->pc = 0x398bd8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398bdc:
    // 0x398bdc: 0x2e5d70  tge         $at, $t6, 373
    ctx->pc = 0x398bdcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398be0:
    // 0x398be0: 0x2e5120  .word       0x002E5120                   # add         $t2, $at, $t6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398be0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_398be4:
    // 0x398be4: 0x2e53b0  tge         $at, $t6, 334
    ctx->pc = 0x398be4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398be8:
    // 0x398be8: 0x2e6bb0  tge         $at, $t6, 430
    ctx->pc = 0x398be8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398bec:
    // 0x398bec: 0x0  nop
    ctx->pc = 0x398becu;
    // NOP
label_398bf0:
    // 0x398bf0: 0x2e6bd0  .word       0x002E6BD0                   # mfhi        $t5 # 002E03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398bf0u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_398bf4:
    // 0x398bf4: 0x0  nop
    ctx->pc = 0x398bf4u;
    // NOP
label_398bf8:
    // 0x398bf8: 0x2e6430  tge         $at, $t6, 400
    ctx->pc = 0x398bf8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398bfc:
    // 0x398bfc: 0x2e6750  .word       0x002E6750                   # mfhi        $t4 # 002E0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398bfcu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_398c00:
    // 0x398c00: 0x2e6450  .word       0x002E6450                   # mfhi        $t4 # 002E0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398c00u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_398c04:
    // 0x398c04: 0x2e6770  tge         $at, $t6, 413
    ctx->pc = 0x398c04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_398c08:
    // 0x398c08: 0x12  mflo        $zero
    ctx->pc = 0x398c08u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_398c0c:
    // 0x398c0c: 0x0  nop
    ctx->pc = 0x398c0cu;
    // NOP
label_398c10:
    // 0x398c10: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398c10u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x398C10 raw=0x00000001");
label_398c14:
    // 0x398c14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x398c14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_398c18:
    // 0x398c18: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x398c18u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_398c1c:
    // 0x398c1c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x398c1cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398c20:
    // 0x398c20: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398c20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x398C20 raw=0x00000005");
label_398c24:
    // 0x398c24: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x398c24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398c28:
    // 0x398c28: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x398c28u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398c2c:
    // 0x398c2c: 0x8  jr          $zero
label_398c30:
    if (ctx->pc == 0x398C30u) {
        ctx->pc = 0x398C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C2Cu;
        // 0x398c30: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398C34u;
        goto label_398c34;
    }
    ctx->pc = 0x398C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x398C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C2Cu;
        // 0x398c30: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398C2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x398C34u;
label_398c34:
    // 0x398c34: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x398c34u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_398c38:
    // 0x398c38: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x398c38u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_398c3c:
    // 0x398c3c: 0xc  syscall     0
    ctx->pc = 0x398c3cu;
    ctx->pc = 0x398C40u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_398c40:
    // 0x398c40: 0xd  break       0
    ctx->pc = 0x398c40u;
    runtime->handleBreak(rdram, ctx);
label_398c44:
    // 0x398c44: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398c44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x398C44 raw=0x0000000E");
label_398c48:
    // 0x398c48: 0xf  sync
    ctx->pc = 0x398c48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_398c4c:
    // 0x398c4c: 0x10  mfhi        $zero
    ctx->pc = 0x398c4cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_398c50:
    // 0x398c50: 0x0  nop
    ctx->pc = 0x398c50u;
    // NOP
label_398c54:
    // 0x398c54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398c54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x398C54 raw=0x00000001");
label_398c58:
    // 0x398c58: 0x25  move        $zero, $zero
    ctx->pc = 0x398c58u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_398c5c:
    // 0x398c5c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x398c5cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_398c60:
    // 0x398c60: 0x0  nop
    ctx->pc = 0x398c60u;
    // NOP
label_398c64:
    // 0x398c64: 0x0  nop
    ctx->pc = 0x398c64u;
    // NOP
label_398c68:
    // 0x398c68: 0x0  nop
    ctx->pc = 0x398c68u;
    // NOP
label_398c6c:
    // 0x398c6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398c6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398c70:
    // 0x398c70: 0x4b18967f  .word       0x4B18967F                   # INVALID     $t8, $t8, -0x6981 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x398c70u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x67 at 0x398C70 raw=0x4B18967F");
label_398c74:
    // 0x398c74: 0x4b18967f  .word       0x4B18967F                   # INVALID     $t8, $t8, -0x6981 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x398c74u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x67 at 0x398C74 raw=0x4B18967F");
label_398c78:
    // 0x398c78: 0x4b18967f  .word       0x4B18967F                   # INVALID     $t8, $t8, -0x6981 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x398c78u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x67 at 0x398C78 raw=0x4B18967F");
label_398c7c:
    // 0x398c7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398c7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398c80:
    // 0x398c80: 0x0  nop
    ctx->pc = 0x398c80u;
    // NOP
label_398c84:
    // 0x398c84: 0x0  nop
    ctx->pc = 0x398c84u;
    // NOP
label_398c88:
    // 0x398c88: 0x0  nop
    ctx->pc = 0x398c88u;
    // NOP
label_398c8c:
    // 0x398c8c: 0x0  nop
    ctx->pc = 0x398c8cu;
    // NOP
label_398c90:
    // 0x398c90: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398c90u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x398C90 raw=0x00000001");
label_398c94:
    // 0x398c94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398c94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x398C94 raw=0x00000001");
label_398c98:
    // 0x398c98: 0x25  move        $zero, $zero
    ctx->pc = 0x398c98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_398c9c:
    // 0x398c9c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x398c9cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_398ca0:
    // 0x398ca0: 0x0  nop
    ctx->pc = 0x398ca0u;
    // NOP
label_398ca4:
    // 0x398ca4: 0x0  nop
    ctx->pc = 0x398ca4u;
    // NOP
label_398ca8:
    // 0x398ca8: 0x0  nop
    ctx->pc = 0x398ca8u;
    // NOP
label_398cac:
    // 0x398cac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398cacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398cb0:
    // 0x398cb0: 0x4b18967f  .word       0x4B18967F                   # INVALID     $t8, $t8, -0x6981 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x398cb0u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x67 at 0x398CB0 raw=0x4B18967F");
label_398cb4:
    // 0x398cb4: 0x4b18967f  .word       0x4B18967F                   # INVALID     $t8, $t8, -0x6981 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x398cb4u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x67 at 0x398CB4 raw=0x4B18967F");
label_398cb8:
    // 0x398cb8: 0x4b18967f  .word       0x4B18967F                   # INVALID     $t8, $t8, -0x6981 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x398cb8u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x67 at 0x398CB8 raw=0x4B18967F");
label_398cbc:
    // 0x398cbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398cbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398cc0:
    // 0x398cc0: 0x0  nop
    ctx->pc = 0x398cc0u;
    // NOP
label_398cc4:
    // 0x398cc4: 0x0  nop
    ctx->pc = 0x398cc4u;
    // NOP
label_398cc8:
    // 0x398cc8: 0x0  nop
    ctx->pc = 0x398cc8u;
    // NOP
label_398ccc:
    // 0x398ccc: 0x0  nop
    ctx->pc = 0x398cccu;
    // NOP
label_398cd0:
    // 0x398cd0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x398cd0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_398cd4:
    // 0x398cd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398cd4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x398CD4 raw=0x00000001");
label_398cd8:
    // 0x398cd8: 0x25  move        $zero, $zero
    ctx->pc = 0x398cd8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_398cdc:
    // 0x398cdc: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x398cdcu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_398ce0:
    // 0x398ce0: 0x0  nop
    ctx->pc = 0x398ce0u;
    // NOP
label_398ce4:
    // 0x398ce4: 0x0  nop
    ctx->pc = 0x398ce4u;
    // NOP
label_398ce8:
    // 0x398ce8: 0x0  nop
    ctx->pc = 0x398ce8u;
    // NOP
label_398cec:
    // 0x398cec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398cecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398cf0:
    // 0x398cf0: 0x4b18967f  .word       0x4B18967F                   # INVALID     $t8, $t8, -0x6981 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x398cf0u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x67 at 0x398CF0 raw=0x4B18967F");
label_398cf4:
    // 0x398cf4: 0x4b18967f  .word       0x4B18967F                   # INVALID     $t8, $t8, -0x6981 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x398cf4u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x67 at 0x398CF4 raw=0x4B18967F");
label_398cf8:
    // 0x398cf8: 0x4b18967f  .word       0x4B18967F                   # INVALID     $t8, $t8, -0x6981 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x398cf8u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x67 at 0x398CF8 raw=0x4B18967F");
label_398cfc:
    // 0x398cfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398cfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398d00:
    // 0x398d00: 0x0  nop
    ctx->pc = 0x398d00u;
    // NOP
label_398d04:
    // 0x398d04: 0x0  nop
    ctx->pc = 0x398d04u;
    // NOP
label_398d08:
    // 0x398d08: 0x0  nop
    ctx->pc = 0x398d08u;
    // NOP
label_398d0c:
    // 0x398d0c: 0x0  nop
    ctx->pc = 0x398d0cu;
    // NOP
label_398d10:
    // 0x398d10: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x398d10u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_398d14:
    // 0x398d14: 0x398c50  .word       0x00398C50                   # mfhi        $s1 # 00390440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398d14u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_398d18:
    // 0x398d18: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398d18u;
    
label_398d1c:
    // 0x398d1c: 0x504  .word       0x00000504                   # sllv        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398d1cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_398d20:
    // 0x398d20: 0x9080706  j           func_4201C18
label_398d24:
    if (ctx->pc == 0x398D24u) {
        ctx->pc = 0x398D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D20u;
        // 0x398d24: 0xb0a  .word       0x00000B0A                   # movz        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D28u;
        goto label_398d28;
    }
    ctx->pc = 0x398D20u;
    ctx->pc = 0x398D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D20u;
    // 0x398d24: 0xb0a  .word       0x00000B0A                   # movz        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4201C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4201C18u, 0x398D20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x398D28u;
label_398d28:
    // 0x398d28: 0x0  nop
    ctx->pc = 0x398d28u;
    // NOP
label_398d2c:
    // 0x398d2c: 0x0  nop
    ctx->pc = 0x398d2cu;
    // NOP
label_398d30:
    // 0x398d30: 0x7060300  .word       0x07060300                   # INVALID     $t8, $a2, 0x300 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x398d30u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x398D30 raw=0x07060300");
label_398d34:
    // 0x398d34: 0xc0b0a09  jal         func_2C2824
label_398d38:
    if (ctx->pc == 0x398D38u) {
        ctx->pc = 0x398D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D34u;
        // 0x398d38: 0x11100e0d  beq         $t0, $s0, . + 4 + (0xE0D << 2) (Delay Slot)
        // Likely branch instruction at 0x398D38 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D3Cu;
        goto label_398d3c;
    }
    ctx->pc = 0x398D34u;
    SET_GPR_U32(ctx, 31, 0x398D3Cu);
    ctx->pc = 0x398D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D34u;
    // 0x398d38: 0x11100e0d  beq         $t0, $s0, . + 4 + (0xE0D << 2) (Delay Slot)
    // Likely branch instruction at 0x398D38 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2824u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2824u, 0x398D34u, 0x398D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D3Cu;
label_398d3c:
    // 0x398d3c: 0x15141312  bne         $t0, $s4, . + 4 + (0x1312 << 2)
label_398d40:
    if (ctx->pc == 0x398D40u) {
        ctx->pc = 0x398D44u;
        goto label_398d44;
    }
    ctx->pc = 0x398D3Cu;
    {
        const bool branch_taken_0x398d3c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 20));
        if (branch_taken_0x398d3c) {
            ctx->pc = 0x39D988u;
            return;
        }
    }
    ctx->pc = 0x398D44u;
label_398d44:
    // 0x398d44: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398d44u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x398D44 raw=0x41700000");
label_398d48:
    // 0x398d48: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x398d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398d4c:
    // 0x398d4c: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398d4cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x398D4C raw=0x41F00000");
label_398d50:
    // 0x398d50: 0x0  nop
    ctx->pc = 0x398d50u;
    // NOP
label_398d54:
    // 0x398d54: 0x0  nop
    ctx->pc = 0x398d54u;
    // NOP
label_398d58:
    // 0x398d58: 0x0  nop
    ctx->pc = 0x398d58u;
    // NOP
label_398d5c:
    // 0x398d5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398d5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398d60:
    // 0x398d60: 0x0  nop
    ctx->pc = 0x398d60u;
    // NOP
label_398d64:
    // 0x398d64: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x398d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398d68:
    // 0x398d68: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398d68u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398D68 raw=0x42C80000");
label_398d6c:
    // 0x398d6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398d6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398d70:
    // 0x398d70: 0x0  nop
    ctx->pc = 0x398d70u;
    // NOP
label_398d74:
    // 0x398d74: 0x0  nop
    ctx->pc = 0x398d74u;
    // NOP
label_398d78:
    // 0x398d78: 0x0  nop
    ctx->pc = 0x398d78u;
    // NOP
label_398d7c:
    // 0x398d7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398d7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398d80:
    // 0x398d80: 0xf081915  jal         func_C206454
label_398d84:
    if (ctx->pc == 0x398D84u) {
        ctx->pc = 0x398D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D80u;
        // 0x398d84: 0x1131814  dsllv       $v1, $s3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (GPR_U32(ctx, 8) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D88u;
        goto label_398d88;
    }
    ctx->pc = 0x398D80u;
    SET_GPR_U32(ctx, 31, 0x398D88u);
    ctx->pc = 0x398D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D80u;
    // 0x398d84: 0x1131814  dsllv       $v1, $s3, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (GPR_U32(ctx, 8) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC206454u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC206454u, 0x398D80u, 0x398D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D88u;
label_398d88:
    // 0x398d88: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x398d88u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_398d8c:
    // 0x398d8c: 0x0  nop
    ctx->pc = 0x398d8cu;
    // NOP
label_398d90:
    // 0x398d90: 0xc050403  jal         func_14100C
label_398d94:
    if (ctx->pc == 0x398D94u) {
        ctx->pc = 0x398D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D90u;
        // 0x398d94: 0xe070d06  jal         func_81C3418 (Delay Slot)
        // JAL 0x81C3418 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398D98u;
        goto label_398d98;
    }
    ctx->pc = 0x398D90u;
    SET_GPR_U32(ctx, 31, 0x398D98u);
    ctx->pc = 0x398D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D90u;
    // 0x398d94: 0xe070d06  jal         func_81C3418 (Delay Slot)
    // JAL 0x81C3418 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x14100Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14100Cu, 0x398D90u, 0x398D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D98u;
label_398d98:
    // 0x398d98: 0x0  nop
    ctx->pc = 0x398d98u;
    // NOP
label_398d9c:
    // 0x398d9c: 0x0  nop
    ctx->pc = 0x398d9cu;
    // NOP
label_398da0:
    // 0x398da0: 0x0  nop
    ctx->pc = 0x398da0u;
    // NOP
label_398da4:
    // 0x398da4: 0x0  nop
    ctx->pc = 0x398da4u;
    // NOP
label_398da8:
    // 0x398da8: 0x0  nop
    ctx->pc = 0x398da8u;
    // NOP
label_398dac:
    // 0x398dac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398dacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398db0:
    // 0x398db0: 0x0  nop
    ctx->pc = 0x398db0u;
    // NOP
label_398db4:
    // 0x398db4: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x398db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398db8:
    // 0x398db8: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398db8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398DB8 raw=0x42C80000");
label_398dbc:
    // 0x398dbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398dbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398dc0:
    // 0x398dc0: 0x0  nop
    ctx->pc = 0x398dc0u;
    // NOP
label_398dc4:
    // 0x398dc4: 0x0  nop
    ctx->pc = 0x398dc4u;
    // NOP
label_398dc8:
    // 0x398dc8: 0x0  nop
    ctx->pc = 0x398dc8u;
    // NOP
label_398dcc:
    // 0x398dcc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398dccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398dd0:
    // 0x398dd0: 0x6010e07  bgez        $s0, . + 4 + (0xE07 << 2)
label_398dd4:
    if (ctx->pc == 0x398DD4u) {
        ctx->pc = 0x398DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DD0u;
        // 0x398dd4: 0x40d  break       0, 16 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DD8u;
        goto label_398dd8;
    }
    ctx->pc = 0x398DD0u;
    {
        const bool branch_taken_0x398dd0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x398DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DD0u;
        // 0x398dd4: 0x40d  break       0, 16 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        if (branch_taken_0x398dd0) {
            ctx->pc = 0x39C5F0u;
            return;
        }
    }
    ctx->pc = 0x398DD8u;
label_398dd8:
    // 0x398dd8: 0x0  nop
    ctx->pc = 0x398dd8u;
    // NOP
label_398ddc:
    // 0x398ddc: 0x0  nop
    ctx->pc = 0x398ddcu;
    // NOP
label_398de0:
    // 0x398de0: 0x1519161a  bne         $t0, $t9, . + 4 + (0x161A << 2)
label_398de4:
    if (ctx->pc == 0x398DE4u) {
        ctx->pc = 0x398DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DE0u;
        // 0x398de4: 0x1131418  .word       0x01131418                   # mult        $v0, $t0, $s3 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x398DE8u;
        goto label_398de8;
    }
    ctx->pc = 0x398DE0u;
    {
        const bool branch_taken_0x398de0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 25));
        ctx->pc = 0x398DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DE0u;
        // 0x398de4: 0x1131418  .word       0x01131418                   # mult        $v0, $t0, $s3 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x398de0) {
            ctx->pc = 0x39E64Cu;
            return;
        }
    }
    ctx->pc = 0x398DE8u;
label_398de8:
    // 0x398de8: 0x5040302  .word       0x05040302                   # INVALID     $t0, $a0, 0x302 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x398de8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x398DE8 raw=0x05040302");
label_398dec:
    // 0x398dec: 0x70d060c  .word       0x070D060C                   # INVALID     $t8, $t5, 0x60C # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x398decu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0xD at 0x398DEC raw=0x070D060C");
label_398df0:
    // 0x398df0: 0xf080e  .word       0x000F080E                   # INVALID     $zero, $t7, 0x80E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398df0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x398DF0 raw=0x000F080E");
label_398df4:
    // 0x398df4: 0x0  nop
    ctx->pc = 0x398df4u;
    // NOP
label_398df8:
    // 0x398df8: 0x0  nop
    ctx->pc = 0x398df8u;
    // NOP
label_398dfc:
    // 0x398dfc: 0x0  nop
    ctx->pc = 0x398dfcu;
    // NOP
label_398e00:
    // 0x398e00: 0x0  nop
    ctx->pc = 0x398e00u;
    // NOP
label_398e04:
    // 0x398e04: 0x0  nop
    ctx->pc = 0x398e04u;
    // NOP
label_398e08:
    // 0x398e08: 0x0  nop
    ctx->pc = 0x398e08u;
    // NOP
label_398e0c:
    // 0x398e0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398e0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398e10:
    // 0x398e10: 0x0  nop
    ctx->pc = 0x398e10u;
    // NOP
label_398e14:
    // 0x398e14: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x398e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398e18:
    // 0x398e18: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398e18u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398E18 raw=0x42C80000");
label_398e1c:
    // 0x398e1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398e1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398e20:
    // 0x398e20: 0x0  nop
    ctx->pc = 0x398e20u;
    // NOP
label_398e24:
    // 0x398e24: 0x0  nop
    ctx->pc = 0x398e24u;
    // NOP
label_398e28:
    // 0x398e28: 0x0  nop
    ctx->pc = 0x398e28u;
    // NOP
label_398e2c:
    // 0x398e2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398e2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398e30:
    // 0x398e30: 0x0  nop
    ctx->pc = 0x398e30u;
    // NOP
label_398e34:
    // 0x398e34: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x398e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398e38:
    // 0x398e38: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398e38u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398E38 raw=0x42C80000");
label_398e3c:
    // 0x398e3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398e3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398e40:
    // 0x398e40: 0x0  nop
    ctx->pc = 0x398e40u;
    // NOP
label_398e44:
    // 0x398e44: 0x0  nop
    ctx->pc = 0x398e44u;
    // NOP
label_398e48:
    // 0x398e48: 0x0  nop
    ctx->pc = 0x398e48u;
    // NOP
label_398e4c:
    // 0x398e4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398e4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398e50:
    // 0x398e50: 0x0  nop
    ctx->pc = 0x398e50u;
    // NOP
label_398e54:
    // 0x398e54: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x398e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398e58:
    // 0x398e58: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398e58u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398E58 raw=0x42C80000");
label_398e5c:
    // 0x398e5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398e5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398e60:
    // 0x398e60: 0x0  nop
    ctx->pc = 0x398e60u;
    // NOP
label_398e64:
    // 0x398e64: 0x0  nop
    ctx->pc = 0x398e64u;
    // NOP
label_398e68:
    // 0x398e68: 0x0  nop
    ctx->pc = 0x398e68u;
    // NOP
label_398e6c:
    // 0x398e6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398e6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398e70:
    // 0x398e70: 0x0  nop
    ctx->pc = 0x398e70u;
    // NOP
label_398e74:
    // 0x398e74: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x398e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398e78:
    // 0x398e78: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398e78u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398E78 raw=0x42C80000");
label_398e7c:
    // 0x398e7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398e7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398e80:
    // 0x398e80: 0x0  nop
    ctx->pc = 0x398e80u;
    // NOP
label_398e84:
    // 0x398e84: 0x0  nop
    ctx->pc = 0x398e84u;
    // NOP
label_398e88:
    // 0x398e88: 0x0  nop
    ctx->pc = 0x398e88u;
    // NOP
label_398e8c:
    // 0x398e8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398e8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398e90:
    // 0x398e90: 0x6010e07  bgez        $s0, . + 4 + (0xE07 << 2)
label_398e94:
    if (ctx->pc == 0x398E94u) {
        ctx->pc = 0x398E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E90u;
        // 0x398e94: 0x40d  break       0, 16 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E98u;
        goto label_398e98;
    }
    ctx->pc = 0x398E90u;
    {
        const bool branch_taken_0x398e90 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x398E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E90u;
        // 0x398e94: 0x40d  break       0, 16 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e90) {
            ctx->pc = 0x39C6B0u;
            return;
        }
    }
    ctx->pc = 0x398E98u;
label_398e98:
    // 0x398e98: 0x0  nop
    ctx->pc = 0x398e98u;
    // NOP
label_398e9c:
    // 0x398e9c: 0x0  nop
    ctx->pc = 0x398e9cu;
    // NOP
label_398ea0:
    // 0x398ea0: 0x0  nop
    ctx->pc = 0x398ea0u;
    // NOP
label_398ea4:
    // 0x398ea4: 0x0  nop
    ctx->pc = 0x398ea4u;
    // NOP
label_398ea8:
    // 0x398ea8: 0x0  nop
    ctx->pc = 0x398ea8u;
    // NOP
label_398eac:
    // 0x398eac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398eacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398eb0:
    // 0x398eb0: 0x0  nop
    ctx->pc = 0x398eb0u;
    // NOP
label_398eb4:
    // 0x398eb4: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x398eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398eb8:
    // 0x398eb8: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398eb8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398EB8 raw=0x42C80000");
label_398ebc:
    // 0x398ebc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398ebcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398ec0:
    // 0x398ec0: 0x0  nop
    ctx->pc = 0x398ec0u;
    // NOP
label_398ec4:
    // 0x398ec4: 0x0  nop
    ctx->pc = 0x398ec4u;
    // NOP
label_398ec8:
    // 0x398ec8: 0x0  nop
    ctx->pc = 0x398ec8u;
    // NOP
label_398ecc:
    // 0x398ecc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398eccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398ed0:
    // 0x398ed0: 0xe070d06  jal         func_81C3418
label_398ed4:
    if (ctx->pc == 0x398ED4u) {
        ctx->pc = 0x398ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398ED0u;
        // 0x398ed4: 0x110a0f08  beq         $t0, $t2, . + 4 + (0xF08 << 2) (Delay Slot)
        // Likely branch instruction at 0x398ED4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x398ED8u;
        goto label_398ed8;
    }
    ctx->pc = 0x398ED0u;
    SET_GPR_U32(ctx, 31, 0x398ED8u);
    ctx->pc = 0x398ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398ED0u;
    // 0x398ed4: 0x110a0f08  beq         $t0, $t2, . + 4 + (0xF08 << 2) (Delay Slot)
    // Likely branch instruction at 0x398ED4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x81C3418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x81C3418u, 0x398ED0u, 0x398ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398ED8u;
label_398ed8:
    // 0x398ed8: 0x1d1c120b  .word       0x1D1C120B                   # bgtz        $t0, . + 4 + (0x120B << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
label_398edc:
    if (ctx->pc == 0x398EDCu) {
        ctx->pc = 0x398EE0u;
        goto label_398ee0;
    }
    ctx->pc = 0x398ED8u;
    {
        const bool branch_taken_0x398ed8 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x398ed8) {
            ctx->pc = 0x39D708u;
            return;
        }
    }
    ctx->pc = 0x398EE0u;
label_398ee0:
    // 0x398ee0: 0x0  nop
    ctx->pc = 0x398ee0u;
    // NOP
label_398ee4:
    // 0x398ee4: 0x0  nop
    ctx->pc = 0x398ee4u;
    // NOP
label_398ee8:
    // 0x398ee8: 0x0  nop
    ctx->pc = 0x398ee8u;
    // NOP
label_398eec:
    // 0x398eec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398eecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398ef0:
    // 0x398ef0: 0x0  nop
    ctx->pc = 0x398ef0u;
    // NOP
label_398ef4:
    // 0x398ef4: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x398ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_398ef8:
    // 0x398ef8: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398ef8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x398EF8 raw=0x42C80000");
label_398efc:
    // 0x398efc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398efcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398f00:
    // 0x398f00: 0x0  nop
    ctx->pc = 0x398f00u;
    // NOP
label_398f04:
    // 0x398f04: 0x0  nop
    ctx->pc = 0x398f04u;
    // NOP
label_398f08:
    // 0x398f08: 0x0  nop
    ctx->pc = 0x398f08u;
    // NOP
label_398f0c:
    // 0x398f0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398f0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398f10:
    // 0x398f10: 0x110f0e0d  beq         $t0, $t7, . + 4 + (0xE0D << 2)
label_398f14:
    if (ctx->pc == 0x398F14u) {
        ctx->pc = 0x398F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F10u;
        // 0x398f14: 0x1d12  .word       0x00001D12                   # mflo        $v1 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 3, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = 0x398F18u;
        goto label_398f18;
    }
    ctx->pc = 0x398F10u;
    {
        const bool branch_taken_0x398f10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 15));
        ctx->pc = 0x398F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F10u;
        // 0x398f14: 0x1d12  .word       0x00001D12                   # mflo        $v1 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 3, ctx->lo);
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f10) {
            ctx->pc = 0x39C748u;
            return;
        }
    }
    ctx->pc = 0x398F18u;
label_398f18:
    // 0x398f18: 0x0  nop
    ctx->pc = 0x398f18u;
    // NOP
label_398f1c:
    // 0x398f1c: 0x0  nop
    ctx->pc = 0x398f1cu;
    // NOP
label_398f20:
    // 0x398f20: 0x0  nop
    ctx->pc = 0x398f20u;
    // NOP
label_398f24:
    // 0x398f24: 0x0  nop
    ctx->pc = 0x398f24u;
    // NOP
label_398f28:
    // 0x398f28: 0x0  nop
    ctx->pc = 0x398f28u;
    // NOP
label_398f2c:
    // 0x398f2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398f2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398f30:
    // 0x398f30: 0x0  nop
    ctx->pc = 0x398f30u;
    // NOP
label_398f34:
    // 0x398f34: 0x0  nop
    ctx->pc = 0x398f34u;
    // NOP
label_398f38:
    // 0x398f38: 0x0  nop
    ctx->pc = 0x398f38u;
    // NOP
label_398f3c:
    // 0x398f3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398f3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398f40:
    // 0x398f40: 0x0  nop
    ctx->pc = 0x398f40u;
    // NOP
label_398f44:
    // 0x398f44: 0x0  nop
    ctx->pc = 0x398f44u;
    // NOP
label_398f48:
    // 0x398f48: 0x42780000  .word       0x42780000                   # INVALID     $s3, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398f48u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x398F48 raw=0x42780000");
label_398f4c:
    // 0x398f4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398f4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398f50:
    // 0x398f50: 0x2f5300  .word       0x002F5300                   # sll         $t2, $t7, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398f50u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), 12));
label_398f54:
    // 0x398f54: 0x2f55d0  .word       0x002F55D0                   # mfhi        $t2 # 002F05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398f54u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_398f58:
    // 0x398f58: 0x0  nop
    ctx->pc = 0x398f58u;
    // NOP
label_398f5c:
    // 0x398f5c: 0x0  nop
    ctx->pc = 0x398f5cu;
    // NOP
label_398f60:
    // 0x398f60: 0x0  nop
    ctx->pc = 0x398f60u;
    // NOP
label_398f64:
    // 0x398f64: 0x0  nop
    ctx->pc = 0x398f64u;
    // NOP
label_398f68:
    // 0x398f68: 0x0  nop
    ctx->pc = 0x398f68u;
    // NOP
label_398f6c:
    // 0x398f6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398f6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398f70:
    // 0x398f70: 0x0  nop
    ctx->pc = 0x398f70u;
    // NOP
label_398f74:
    // 0x398f74: 0x0  nop
    ctx->pc = 0x398f74u;
    // NOP
label_398f78:
    // 0x398f78: 0x0  nop
    ctx->pc = 0x398f78u;
    // NOP
label_398f7c:
    // 0x398f7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398f7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398f80:
    // 0x398f80: 0x0  nop
    ctx->pc = 0x398f80u;
    // NOP
label_398f84:
    // 0x398f84: 0x41300000  .word       0x41300000                   # INVALID     $t1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398f84u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x398F84 raw=0x41300000");
label_398f88:
    // 0x398f88: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x398f88u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x398F88 raw=0x42000000");
label_398f8c:
    // 0x398f8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398f8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398f90:
    // 0x398f90: 0x2f5a40  .word       0x002F5A40                   # sll         $t3, $t7, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398f90u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 9));
label_398f94:
    // 0x398f94: 0x2f5f50  .word       0x002F5F50                   # mfhi        $t3 # 002F0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398f94u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_398f98:
    // 0x398f98: 0x2f64b0  tge         $at, $t7, 402
    ctx->pc = 0x398f98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_398f9c:
    // 0x398f9c: 0x2f64f0  tge         $at, $t7, 403
    ctx->pc = 0x398f9cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_398fa0:
    // 0x398fa0: 0x0  nop
    ctx->pc = 0x398fa0u;
    // NOP
label_398fa4:
    // 0x398fa4: 0x0  nop
    ctx->pc = 0x398fa4u;
    // NOP
label_398fa8:
    // 0x398fa8: 0x0  nop
    ctx->pc = 0x398fa8u;
    // NOP
label_398fac:
    // 0x398fac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398facu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398fb0:
    // 0x398fb0: 0x0  nop
    ctx->pc = 0x398fb0u;
    // NOP
label_398fb4:
    // 0x398fb4: 0x0  nop
    ctx->pc = 0x398fb4u;
    // NOP
label_398fb8:
    // 0x398fb8: 0x0  nop
    ctx->pc = 0x398fb8u;
    // NOP
label_398fbc:
    // 0x398fbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398fbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398fc0:
    // 0x398fc0: 0x0  nop
    ctx->pc = 0x398fc0u;
    // NOP
label_398fc4:
    // 0x398fc4: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398fc4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x398FC4 raw=0x41600000");
label_398fc8:
    // 0x398fc8: 0x42780000  .word       0x42780000                   # INVALID     $s3, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x398fc8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x398FC8 raw=0x42780000");
label_398fcc:
    // 0x398fcc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398fccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_398fd0:
    // 0x398fd0: 0x2f6800  .word       0x002F6800                   # sll         $t5, $t7, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398fd0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_398fd4:
    // 0x398fd4: 0x2f6840  .word       0x002F6840                   # sll         $t5, $t7, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398fd4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_398fd8:
    // 0x398fd8: 0x2f7dc0  .word       0x002F7DC0                   # sll         $t7, $t7, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398fd8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 23));
label_398fdc:
    // 0x398fdc: 0x2f7e00  .word       0x002F7E00                   # sll         $t7, $t7, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
label_398fe0:
    // 0x398fe0: 0x2f8c20  .word       0x002F8C20                   # add         $s1, $at, $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398fe0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_398fe4:
    // 0x398fe4: 0x2f8c40  .word       0x002F8C40                   # sll         $s1, $t7, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x398fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 15), 17));
label_398fe8:
    // 0x398fe8: 0x0  nop
    ctx->pc = 0x398fe8u;
    // NOP
label_398fec:
    // 0x398fec: 0x0  nop
    ctx->pc = 0x398fecu;
    // NOP
label_398ff0:
    // 0x398ff0: 0x0  nop
    ctx->pc = 0x398ff0u;
    // NOP
label_398ff4:
    // 0x398ff4: 0x0  nop
    ctx->pc = 0x398ff4u;
    // NOP
label_398ff8:
    // 0x398ff8: 0x0  nop
    ctx->pc = 0x398ff8u;
    // NOP
label_398ffc:
    // 0x398ffc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x398ffcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399000:
    // 0x399000: 0x2f92b0  tge         $at, $t7, 586
    ctx->pc = 0x399000u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_399004:
    // 0x399004: 0x2f94d0  .word       0x002F94D0                   # mfhi        $s2 # 002F04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399004u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_399008:
    // 0x399008: 0x0  nop
    ctx->pc = 0x399008u;
    // NOP
label_39900c:
    // 0x39900c: 0x0  nop
    ctx->pc = 0x39900cu;
    // NOP
label_399010:
    // 0x399010: 0x0  nop
    ctx->pc = 0x399010u;
    // NOP
label_399014:
    // 0x399014: 0x0  nop
    ctx->pc = 0x399014u;
    // NOP
label_399018:
    // 0x399018: 0x0  nop
    ctx->pc = 0x399018u;
    // NOP
label_39901c:
    // 0x39901c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39901cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399020:
    // 0x399020: 0x2fa240  .word       0x002FA240                   # sll         $s4, $t7, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399020u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 15), 9));
label_399024:
    // 0x399024: 0x2fa270  tge         $at, $t7, 649
    ctx->pc = 0x399024u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_399028:
    // 0x399028: 0x0  nop
    ctx->pc = 0x399028u;
    // NOP
label_39902c:
    // 0x39902c: 0x0  nop
    ctx->pc = 0x39902cu;
    // NOP
label_399030:
    // 0x399030: 0x0  nop
    ctx->pc = 0x399030u;
    // NOP
label_399034:
    // 0x399034: 0x0  nop
    ctx->pc = 0x399034u;
    // NOP
label_399038:
    // 0x399038: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x399038u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x399038 raw=0x43160000");
label_39903c:
    // 0x39903c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39903cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399040:
    // 0x399040: 0x0  nop
    ctx->pc = 0x399040u;
    // NOP
label_399044:
    // 0x399044: 0x0  nop
    ctx->pc = 0x399044u;
    // NOP
label_399048:
    // 0x399048: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x399048u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x399048 raw=0x43960000");
label_39904c:
    // 0x39904c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39904cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399050:
    // 0x399050: 0x0  nop
    ctx->pc = 0x399050u;
    // NOP
label_399054:
    // 0x399054: 0x0  nop
    ctx->pc = 0x399054u;
    // NOP
label_399058:
    // 0x399058: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x399058u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x399058 raw=0x43C80000");
label_39905c:
    // 0x39905c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39905cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399060:
    // 0x399060: 0x0  nop
    ctx->pc = 0x399060u;
    // NOP
label_399064:
    // 0x399064: 0x0  nop
    ctx->pc = 0x399064u;
    // NOP
label_399068:
    // 0x399068: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x399068u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x399068 raw=0x43FA0000");
label_39906c:
    // 0x39906c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39906cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399070:
    // 0x399070: 0x0  nop
    ctx->pc = 0x399070u;
    // NOP
label_399074:
    // 0x399074: 0x0  nop
    ctx->pc = 0x399074u;
    // NOP
label_399078:
    // 0x399078: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x399078u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_39907c:
    // 0x39907c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39907cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399080:
    // 0x399080: 0x2faf10  .word       0x002FAF10                   # mfhi        $s5 # 002F0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399080u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_399084:
    // 0x399084: 0x2faf50  .word       0x002FAF50                   # mfhi        $s5 # 002F0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399084u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_399088:
    // 0x399088: 0x0  nop
    ctx->pc = 0x399088u;
    // NOP
label_39908c:
    // 0x39908c: 0x0  nop
    ctx->pc = 0x39908cu;
    // NOP
label_399090:
    // 0x399090: 0x0  nop
    ctx->pc = 0x399090u;
    // NOP
label_399094:
    // 0x399094: 0x0  nop
    ctx->pc = 0x399094u;
    // NOP
label_399098:
    // 0x399098: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x399098u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x399098 raw=0x43160000");
label_39909c:
    // 0x39909c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39909cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3990a0:
    // 0x3990a0: 0x0  nop
    ctx->pc = 0x3990a0u;
    // NOP
label_3990a4:
    // 0x3990a4: 0x0  nop
    ctx->pc = 0x3990a4u;
    // NOP
label_3990a8:
    // 0x3990a8: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3990a8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3990A8 raw=0x43960000");
label_3990ac:
    // 0x3990ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3990acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3990b0:
    // 0x3990b0: 0x0  nop
    ctx->pc = 0x3990b0u;
    // NOP
label_3990b4:
    // 0x3990b4: 0x0  nop
    ctx->pc = 0x3990b4u;
    // NOP
label_3990b8:
    // 0x3990b8: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3990b8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x3990B8 raw=0x43C80000");
label_3990bc:
    // 0x3990bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3990bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3990c0:
    // 0x3990c0: 0x0  nop
    ctx->pc = 0x3990c0u;
    // NOP
label_3990c4:
    // 0x3990c4: 0x0  nop
    ctx->pc = 0x3990c4u;
    // NOP
label_3990c8:
    // 0x3990c8: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3990c8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3990C8 raw=0x43FA0000");
label_3990cc:
    // 0x3990cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3990ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3990d0:
    // 0x3990d0: 0x0  nop
    ctx->pc = 0x3990d0u;
    // NOP
label_3990d4:
    // 0x3990d4: 0x0  nop
    ctx->pc = 0x3990d4u;
    // NOP
label_3990d8:
    // 0x3990d8: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x3990d8u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_3990dc:
    // 0x3990dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3990dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3990e0:
    // 0x3990e0: 0x2fcfd0  .word       0x002FCFD0                   # mfhi        $t9 # 002F07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3990e0u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_3990e4:
    // 0x3990e4: 0x2fd000  .word       0x002FD000                   # sll         $k0, $t7, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3990e4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_3990e8:
    // 0x3990e8: 0x0  nop
    ctx->pc = 0x3990e8u;
    // NOP
label_3990ec:
    // 0x3990ec: 0x0  nop
    ctx->pc = 0x3990ecu;
    // NOP
label_3990f0:
    // 0x3990f0: 0x0  nop
    ctx->pc = 0x3990f0u;
    // NOP
label_3990f4:
    // 0x3990f4: 0x0  nop
    ctx->pc = 0x3990f4u;
    // NOP
label_3990f8:
    // 0x3990f8: 0x0  nop
    ctx->pc = 0x3990f8u;
    // NOP
label_3990fc:
    // 0x3990fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3990fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399100:
    // 0x399100: 0x2fd750  .word       0x002FD750                   # mfhi        $k0 # 002F0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399100u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_399104:
    // 0x399104: 0x2fd780  .word       0x002FD780                   # sll         $k0, $t7, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399104u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 15), 30));
label_399108:
    // 0x399108: 0x0  nop
    ctx->pc = 0x399108u;
    // NOP
label_39910c:
    // 0x39910c: 0x0  nop
    ctx->pc = 0x39910cu;
    // NOP
label_399110:
    // 0x399110: 0x0  nop
    ctx->pc = 0x399110u;
    // NOP
label_399114:
    // 0x399114: 0x0  nop
    ctx->pc = 0x399114u;
    // NOP
label_399118:
    // 0x399118: 0x0  nop
    ctx->pc = 0x399118u;
    // NOP
label_39911c:
    // 0x39911c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39911cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399120:
    // 0x399120: 0x2fdad0  .word       0x002FDAD0                   # mfhi        $k1 # 002F02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399120u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_399124:
    // 0x399124: 0x2fdb00  .word       0x002FDB00                   # sll         $k1, $t7, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399124u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 15), 12));
label_399128:
    // 0x399128: 0x0  nop
    ctx->pc = 0x399128u;
    // NOP
label_39912c:
    // 0x39912c: 0x0  nop
    ctx->pc = 0x39912cu;
    // NOP
label_399130:
    // 0x399130: 0x0  nop
    ctx->pc = 0x399130u;
    // NOP
label_399134:
    // 0x399134: 0x0  nop
    ctx->pc = 0x399134u;
    // NOP
label_399138:
    // 0x399138: 0x0  nop
    ctx->pc = 0x399138u;
    // NOP
label_39913c:
    // 0x39913c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39913cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399140:
    // 0x399140: 0x0  nop
    ctx->pc = 0x399140u;
    // NOP
label_399144:
    // 0x399144: 0x0  nop
    ctx->pc = 0x399144u;
    // NOP
label_399148:
    // 0x399148: 0x0  nop
    ctx->pc = 0x399148u;
    // NOP
label_39914c:
    // 0x39914c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39914cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399150:
    // 0x399150: 0x0  nop
    ctx->pc = 0x399150u;
    // NOP
label_399154:
    // 0x399154: 0x0  nop
    ctx->pc = 0x399154u;
    // NOP
label_399158:
    // 0x399158: 0x0  nop
    ctx->pc = 0x399158u;
    // NOP
label_39915c:
    // 0x39915c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39915cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399160:
    // 0x399160: 0x2fdba0  .word       0x002FDBA0                   # add         $k1, $at, $t7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399160u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_399164:
    // 0x399164: 0x2fe010  .word       0x002FE010                   # mfhi        $gp # 002F0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399164u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_399168:
    // 0x399168: 0x0  nop
    ctx->pc = 0x399168u;
    // NOP
label_39916c:
    // 0x39916c: 0x0  nop
    ctx->pc = 0x39916cu;
    // NOP
label_399170:
    // 0x399170: 0x461a6000  add.s       $f0, $f12, $f26
    ctx->pc = 0x399170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[26]);
label_399174:
    // 0x399174: 0xc4fa2000  lwc1        $f26, 0x2000($a3)
    ctx->pc = 0x399174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_399178:
    // 0x399178: 0x4541f000  .word       0x4541F000                   # INVALID     $t2, $at, -0x1000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x399178u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x0 at 0x399178 raw=0x4541F000");
label_39917c:
    // 0x39917c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39917cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399180:
    // 0x399180: 0x0  nop
    ctx->pc = 0x399180u;
    // NOP
label_399184:
    // 0x399184: 0x0  nop
    ctx->pc = 0x399184u;
    // NOP
label_399188:
    // 0x399188: 0x0  nop
    ctx->pc = 0x399188u;
    // NOP
label_39918c:
    // 0x39918c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39918cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399190:
    // 0x399190: 0x461cec00  add.s       $f16, $f29, $f28
    ctx->pc = 0x399190u;
    ctx->f[16] = FPU_ADD_S(ctx->f[29], ctx->f[28]);
label_399194:
    // 0x399194: 0xc5229000  lwc1        $f2, -0x7000($t1)
    ctx->pc = 0x399194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294938624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_399198:
    // 0x399198: 0x4543e000  .word       0x4543E000                   # INVALID     $t2, $v1, -0x2000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x399198u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x0 at 0x399198 raw=0x4543E000");
label_39919c:
    // 0x39919c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39919cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3991a0:
    // 0x3991a0: 0x0  nop
    ctx->pc = 0x3991a0u;
    // NOP
label_3991a4:
    // 0x3991a4: 0x0  nop
    ctx->pc = 0x3991a4u;
    // NOP
label_3991a8:
    // 0x3991a8: 0x0  nop
    ctx->pc = 0x3991a8u;
    // NOP
label_3991ac:
    // 0x3991ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3991acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3991b0:
    // 0x3991b0: 0x4618d000  add.s       $f0, $f26, $f24
    ctx->pc = 0x3991b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[24]);
label_3991b4:
    // 0x3991b4: 0xc5639000  lwc1        $f3, -0x7000($t3)
    ctx->pc = 0x3991b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294938624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3991b8:
    // 0x3991b8: 0x4537a000  .word       0x4537A000                   # INVALID     $t1, $s7, -0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3991b8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x3991B8 raw=0x4537A000");
label_3991bc:
    // 0x3991bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3991bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3991c0:
    // 0x3991c0: 0x0  nop
    ctx->pc = 0x3991c0u;
    // NOP
label_3991c4:
    // 0x3991c4: 0x0  nop
    ctx->pc = 0x3991c4u;
    // NOP
label_3991c8:
    // 0x3991c8: 0x0  nop
    ctx->pc = 0x3991c8u;
    // NOP
label_3991cc:
    // 0x3991cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3991ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3991d0:
    // 0x3991d0: 0x2fea10  .word       0x002FEA10                   # mfhi        $sp # 002F0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3991d0u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_3991d4:
    // 0x3991d4: 0x2fea30  tge         $at, $t7, 936
    ctx->pc = 0x3991d4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_3991d8:
    // 0x3991d8: 0x0  nop
    ctx->pc = 0x3991d8u;
    // NOP
label_3991dc:
    // 0x3991dc: 0x0  nop
    ctx->pc = 0x3991dcu;
    // NOP
label_3991e0:
    // 0x3991e0: 0x461a6000  add.s       $f0, $f12, $f26
    ctx->pc = 0x3991e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[26]);
label_3991e4:
    // 0x3991e4: 0xc4fa2000  lwc1        $f26, 0x2000($a3)
    ctx->pc = 0x3991e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3991e8:
    // 0x3991e8: 0x453bb000  .word       0x453BB000                   # INVALID     $t1, $k1, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3991e8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x3991E8 raw=0x453BB000");
label_3991ec:
    // 0x3991ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3991ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3991f0:
    // 0x3991f0: 0x0  nop
    ctx->pc = 0x3991f0u;
    // NOP
label_3991f4:
    // 0x3991f4: 0x0  nop
    ctx->pc = 0x3991f4u;
    // NOP
label_3991f8:
    // 0x3991f8: 0x0  nop
    ctx->pc = 0x3991f8u;
    // NOP
label_3991fc:
    // 0x3991fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3991fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399200:
    // 0x399200: 0x2fef50  .word       0x002FEF50                   # mfhi        $sp # 002F0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399200u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_399204:
    // 0x399204: 0x2fef80  .word       0x002FEF80                   # sll         $sp, $t7, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399204u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 15), 30));
label_399208:
    // 0x399208: 0x0  nop
    ctx->pc = 0x399208u;
    // NOP
label_39920c:
    // 0x39920c: 0x0  nop
    ctx->pc = 0x39920cu;
    // NOP
label_399210:
    // 0x399210: 0x0  nop
    ctx->pc = 0x399210u;
    // NOP
label_399214:
    // 0x399214: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x399214u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x399214 raw=0x41200000");
label_399218:
    // 0x399218: 0x0  nop
    ctx->pc = 0x399218u;
    // NOP
label_39921c:
    // 0x39921c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39921cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399220:
    // 0x399220: 0x0  nop
    ctx->pc = 0x399220u;
    // NOP
label_399224:
    // 0x399224: 0x0  nop
    ctx->pc = 0x399224u;
    // NOP
label_399228:
    // 0x399228: 0x0  nop
    ctx->pc = 0x399228u;
    // NOP
label_39922c:
    // 0x39922c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39922cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399230:
    // 0x399230: 0x0  nop
    ctx->pc = 0x399230u;
    // NOP
label_399234:
    // 0x399234: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x399234u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x399234 raw=0x41200000");
label_399238:
    // 0x399238: 0x0  nop
    ctx->pc = 0x399238u;
    // NOP
label_39923c:
    // 0x39923c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39923cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_399240:
    // 0x399240: 0x2ff040  .word       0x002FF040                   # sll         $fp, $t7, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399240u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_399244:
    // 0x399244: 0x2ff070  tge         $at, $t7, 961
    ctx->pc = 0x399244u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_399248:
    // 0x399248: 0x3000c0  .word       0x003000C0                   # sll         $zero, $s0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399248u;
    
label_39924c:
    // 0x39924c: 0x0  nop
    ctx->pc = 0x39924cu;
    // NOP
label_399250:
    // 0x399250: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x399250u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_399254:
    // 0x399254: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x399254u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_399258:
    // 0x399258: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x399258u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_39925c:
    // 0x39925c: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x39925cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_399260:
    // 0x399260: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x399260u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_399264:
    // 0x399264: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x399264u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_399268:
    // 0x399268: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x399268u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_39926c:
    // 0x39926c: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x39926cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_399270:
    // 0x399270: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x399270u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x399270 raw=0x00000005");
label_399274:
    // 0x399274: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x399274u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x399274 raw=0x43FA0000");
label_399278:
    // 0x399278: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x399278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_39927c:
    // 0x39927c: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x39927cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x39927C raw=0x437A0000");
label_399280:
    // 0x399280: 0x0  nop
    ctx->pc = 0x399280u;
    // NOP
label_399284:
    // 0x399284: 0x0  nop
    ctx->pc = 0x399284u;
    // NOP
label_399288:
    // 0x399288: 0x0  nop
    ctx->pc = 0x399288u;
    // NOP
label_39928c:
    // 0x39928c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x39928cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x399290u;
}
