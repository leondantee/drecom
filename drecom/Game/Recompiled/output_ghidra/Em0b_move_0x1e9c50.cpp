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

// Function: Em0b_move
// Address: 0x1e9c50 - 0x1ea6c8
void Em0b_move_0x1e9c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_move_0x1e9c50");
#endif

    switch (ctx->pc) {
        case 0x1e9c50u: goto label_1e9c50;
        case 0x1e9c54u: goto label_1e9c54;
        case 0x1e9c58u: goto label_1e9c58;
        case 0x1e9c5cu: goto label_1e9c5c;
        case 0x1e9c60u: goto label_1e9c60;
        case 0x1e9c64u: goto label_1e9c64;
        case 0x1e9c68u: goto label_1e9c68;
        case 0x1e9c6cu: goto label_1e9c6c;
        case 0x1e9c70u: goto label_1e9c70;
        case 0x1e9c74u: goto label_1e9c74;
        case 0x1e9c78u: goto label_1e9c78;
        case 0x1e9c7cu: goto label_1e9c7c;
        case 0x1e9c80u: goto label_1e9c80;
        case 0x1e9c84u: goto label_1e9c84;
        case 0x1e9c88u: goto label_1e9c88;
        case 0x1e9c8cu: goto label_1e9c8c;
        case 0x1e9c90u: goto label_1e9c90;
        case 0x1e9c94u: goto label_1e9c94;
        case 0x1e9c98u: goto label_1e9c98;
        case 0x1e9c9cu: goto label_1e9c9c;
        case 0x1e9ca0u: goto label_1e9ca0;
        case 0x1e9ca4u: goto label_1e9ca4;
        case 0x1e9ca8u: goto label_1e9ca8;
        case 0x1e9cacu: goto label_1e9cac;
        case 0x1e9cb0u: goto label_1e9cb0;
        case 0x1e9cb4u: goto label_1e9cb4;
        case 0x1e9cb8u: goto label_1e9cb8;
        case 0x1e9cbcu: goto label_1e9cbc;
        case 0x1e9cc0u: goto label_1e9cc0;
        case 0x1e9cc4u: goto label_1e9cc4;
        case 0x1e9cc8u: goto label_1e9cc8;
        case 0x1e9cccu: goto label_1e9ccc;
        case 0x1e9cd0u: goto label_1e9cd0;
        case 0x1e9cd4u: goto label_1e9cd4;
        case 0x1e9cd8u: goto label_1e9cd8;
        case 0x1e9cdcu: goto label_1e9cdc;
        case 0x1e9ce0u: goto label_1e9ce0;
        case 0x1e9ce4u: goto label_1e9ce4;
        case 0x1e9ce8u: goto label_1e9ce8;
        case 0x1e9cecu: goto label_1e9cec;
        case 0x1e9cf0u: goto label_1e9cf0;
        case 0x1e9cf4u: goto label_1e9cf4;
        case 0x1e9cf8u: goto label_1e9cf8;
        case 0x1e9cfcu: goto label_1e9cfc;
        case 0x1e9d00u: goto label_1e9d00;
        case 0x1e9d04u: goto label_1e9d04;
        case 0x1e9d08u: goto label_1e9d08;
        case 0x1e9d0cu: goto label_1e9d0c;
        case 0x1e9d10u: goto label_1e9d10;
        case 0x1e9d14u: goto label_1e9d14;
        case 0x1e9d18u: goto label_1e9d18;
        case 0x1e9d1cu: goto label_1e9d1c;
        case 0x1e9d20u: goto label_1e9d20;
        case 0x1e9d24u: goto label_1e9d24;
        case 0x1e9d28u: goto label_1e9d28;
        case 0x1e9d2cu: goto label_1e9d2c;
        case 0x1e9d30u: goto label_1e9d30;
        case 0x1e9d34u: goto label_1e9d34;
        case 0x1e9d38u: goto label_1e9d38;
        case 0x1e9d3cu: goto label_1e9d3c;
        case 0x1e9d40u: goto label_1e9d40;
        case 0x1e9d44u: goto label_1e9d44;
        case 0x1e9d48u: goto label_1e9d48;
        case 0x1e9d4cu: goto label_1e9d4c;
        case 0x1e9d50u: goto label_1e9d50;
        case 0x1e9d54u: goto label_1e9d54;
        case 0x1e9d58u: goto label_1e9d58;
        case 0x1e9d5cu: goto label_1e9d5c;
        case 0x1e9d60u: goto label_1e9d60;
        case 0x1e9d64u: goto label_1e9d64;
        case 0x1e9d68u: goto label_1e9d68;
        case 0x1e9d6cu: goto label_1e9d6c;
        case 0x1e9d70u: goto label_1e9d70;
        case 0x1e9d74u: goto label_1e9d74;
        case 0x1e9d78u: goto label_1e9d78;
        case 0x1e9d7cu: goto label_1e9d7c;
        case 0x1e9d80u: goto label_1e9d80;
        case 0x1e9d84u: goto label_1e9d84;
        case 0x1e9d88u: goto label_1e9d88;
        case 0x1e9d8cu: goto label_1e9d8c;
        case 0x1e9d90u: goto label_1e9d90;
        case 0x1e9d94u: goto label_1e9d94;
        case 0x1e9d98u: goto label_1e9d98;
        case 0x1e9d9cu: goto label_1e9d9c;
        case 0x1e9da0u: goto label_1e9da0;
        case 0x1e9da4u: goto label_1e9da4;
        case 0x1e9da8u: goto label_1e9da8;
        case 0x1e9dacu: goto label_1e9dac;
        case 0x1e9db0u: goto label_1e9db0;
        case 0x1e9db4u: goto label_1e9db4;
        case 0x1e9db8u: goto label_1e9db8;
        case 0x1e9dbcu: goto label_1e9dbc;
        case 0x1e9dc0u: goto label_1e9dc0;
        case 0x1e9dc4u: goto label_1e9dc4;
        case 0x1e9dc8u: goto label_1e9dc8;
        case 0x1e9dccu: goto label_1e9dcc;
        case 0x1e9dd0u: goto label_1e9dd0;
        case 0x1e9dd4u: goto label_1e9dd4;
        case 0x1e9dd8u: goto label_1e9dd8;
        case 0x1e9ddcu: goto label_1e9ddc;
        case 0x1e9de0u: goto label_1e9de0;
        case 0x1e9de4u: goto label_1e9de4;
        case 0x1e9de8u: goto label_1e9de8;
        case 0x1e9decu: goto label_1e9dec;
        case 0x1e9df0u: goto label_1e9df0;
        case 0x1e9df4u: goto label_1e9df4;
        case 0x1e9df8u: goto label_1e9df8;
        case 0x1e9dfcu: goto label_1e9dfc;
        case 0x1e9e00u: goto label_1e9e00;
        case 0x1e9e04u: goto label_1e9e04;
        case 0x1e9e08u: goto label_1e9e08;
        case 0x1e9e0cu: goto label_1e9e0c;
        case 0x1e9e10u: goto label_1e9e10;
        case 0x1e9e14u: goto label_1e9e14;
        case 0x1e9e18u: goto label_1e9e18;
        case 0x1e9e1cu: goto label_1e9e1c;
        case 0x1e9e20u: goto label_1e9e20;
        case 0x1e9e24u: goto label_1e9e24;
        case 0x1e9e28u: goto label_1e9e28;
        case 0x1e9e2cu: goto label_1e9e2c;
        case 0x1e9e30u: goto label_1e9e30;
        case 0x1e9e34u: goto label_1e9e34;
        case 0x1e9e38u: goto label_1e9e38;
        case 0x1e9e3cu: goto label_1e9e3c;
        case 0x1e9e40u: goto label_1e9e40;
        case 0x1e9e44u: goto label_1e9e44;
        case 0x1e9e48u: goto label_1e9e48;
        case 0x1e9e4cu: goto label_1e9e4c;
        case 0x1e9e50u: goto label_1e9e50;
        case 0x1e9e54u: goto label_1e9e54;
        case 0x1e9e58u: goto label_1e9e58;
        case 0x1e9e5cu: goto label_1e9e5c;
        case 0x1e9e60u: goto label_1e9e60;
        case 0x1e9e64u: goto label_1e9e64;
        case 0x1e9e68u: goto label_1e9e68;
        case 0x1e9e6cu: goto label_1e9e6c;
        case 0x1e9e70u: goto label_1e9e70;
        case 0x1e9e74u: goto label_1e9e74;
        case 0x1e9e78u: goto label_1e9e78;
        case 0x1e9e7cu: goto label_1e9e7c;
        case 0x1e9e80u: goto label_1e9e80;
        case 0x1e9e84u: goto label_1e9e84;
        case 0x1e9e88u: goto label_1e9e88;
        case 0x1e9e8cu: goto label_1e9e8c;
        case 0x1e9e90u: goto label_1e9e90;
        case 0x1e9e94u: goto label_1e9e94;
        case 0x1e9e98u: goto label_1e9e98;
        case 0x1e9e9cu: goto label_1e9e9c;
        case 0x1e9ea0u: goto label_1e9ea0;
        case 0x1e9ea4u: goto label_1e9ea4;
        case 0x1e9ea8u: goto label_1e9ea8;
        case 0x1e9eacu: goto label_1e9eac;
        case 0x1e9eb0u: goto label_1e9eb0;
        case 0x1e9eb4u: goto label_1e9eb4;
        case 0x1e9eb8u: goto label_1e9eb8;
        case 0x1e9ebcu: goto label_1e9ebc;
        case 0x1e9ec0u: goto label_1e9ec0;
        case 0x1e9ec4u: goto label_1e9ec4;
        case 0x1e9ec8u: goto label_1e9ec8;
        case 0x1e9eccu: goto label_1e9ecc;
        case 0x1e9ed0u: goto label_1e9ed0;
        case 0x1e9ed4u: goto label_1e9ed4;
        case 0x1e9ed8u: goto label_1e9ed8;
        case 0x1e9edcu: goto label_1e9edc;
        case 0x1e9ee0u: goto label_1e9ee0;
        case 0x1e9ee4u: goto label_1e9ee4;
        case 0x1e9ee8u: goto label_1e9ee8;
        case 0x1e9eecu: goto label_1e9eec;
        case 0x1e9ef0u: goto label_1e9ef0;
        case 0x1e9ef4u: goto label_1e9ef4;
        case 0x1e9ef8u: goto label_1e9ef8;
        case 0x1e9efcu: goto label_1e9efc;
        case 0x1e9f00u: goto label_1e9f00;
        case 0x1e9f04u: goto label_1e9f04;
        case 0x1e9f08u: goto label_1e9f08;
        case 0x1e9f0cu: goto label_1e9f0c;
        case 0x1e9f10u: goto label_1e9f10;
        case 0x1e9f14u: goto label_1e9f14;
        case 0x1e9f18u: goto label_1e9f18;
        case 0x1e9f1cu: goto label_1e9f1c;
        case 0x1e9f20u: goto label_1e9f20;
        case 0x1e9f24u: goto label_1e9f24;
        case 0x1e9f28u: goto label_1e9f28;
        case 0x1e9f2cu: goto label_1e9f2c;
        case 0x1e9f30u: goto label_1e9f30;
        case 0x1e9f34u: goto label_1e9f34;
        case 0x1e9f38u: goto label_1e9f38;
        case 0x1e9f3cu: goto label_1e9f3c;
        case 0x1e9f40u: goto label_1e9f40;
        case 0x1e9f44u: goto label_1e9f44;
        case 0x1e9f48u: goto label_1e9f48;
        case 0x1e9f4cu: goto label_1e9f4c;
        case 0x1e9f50u: goto label_1e9f50;
        case 0x1e9f54u: goto label_1e9f54;
        case 0x1e9f58u: goto label_1e9f58;
        case 0x1e9f5cu: goto label_1e9f5c;
        case 0x1e9f60u: goto label_1e9f60;
        case 0x1e9f64u: goto label_1e9f64;
        case 0x1e9f68u: goto label_1e9f68;
        case 0x1e9f6cu: goto label_1e9f6c;
        case 0x1e9f70u: goto label_1e9f70;
        case 0x1e9f74u: goto label_1e9f74;
        case 0x1e9f78u: goto label_1e9f78;
        case 0x1e9f7cu: goto label_1e9f7c;
        case 0x1e9f80u: goto label_1e9f80;
        case 0x1e9f84u: goto label_1e9f84;
        case 0x1e9f88u: goto label_1e9f88;
        case 0x1e9f8cu: goto label_1e9f8c;
        case 0x1e9f90u: goto label_1e9f90;
        case 0x1e9f94u: goto label_1e9f94;
        case 0x1e9f98u: goto label_1e9f98;
        case 0x1e9f9cu: goto label_1e9f9c;
        case 0x1e9fa0u: goto label_1e9fa0;
        case 0x1e9fa4u: goto label_1e9fa4;
        case 0x1e9fa8u: goto label_1e9fa8;
        case 0x1e9facu: goto label_1e9fac;
        case 0x1e9fb0u: goto label_1e9fb0;
        case 0x1e9fb4u: goto label_1e9fb4;
        case 0x1e9fb8u: goto label_1e9fb8;
        case 0x1e9fbcu: goto label_1e9fbc;
        case 0x1e9fc0u: goto label_1e9fc0;
        case 0x1e9fc4u: goto label_1e9fc4;
        case 0x1e9fc8u: goto label_1e9fc8;
        case 0x1e9fccu: goto label_1e9fcc;
        case 0x1e9fd0u: goto label_1e9fd0;
        case 0x1e9fd4u: goto label_1e9fd4;
        case 0x1e9fd8u: goto label_1e9fd8;
        case 0x1e9fdcu: goto label_1e9fdc;
        case 0x1e9fe0u: goto label_1e9fe0;
        case 0x1e9fe4u: goto label_1e9fe4;
        case 0x1e9fe8u: goto label_1e9fe8;
        case 0x1e9fecu: goto label_1e9fec;
        case 0x1e9ff0u: goto label_1e9ff0;
        case 0x1e9ff4u: goto label_1e9ff4;
        case 0x1e9ff8u: goto label_1e9ff8;
        case 0x1e9ffcu: goto label_1e9ffc;
        case 0x1ea000u: goto label_1ea000;
        case 0x1ea004u: goto label_1ea004;
        case 0x1ea008u: goto label_1ea008;
        case 0x1ea00cu: goto label_1ea00c;
        case 0x1ea010u: goto label_1ea010;
        case 0x1ea014u: goto label_1ea014;
        case 0x1ea018u: goto label_1ea018;
        case 0x1ea01cu: goto label_1ea01c;
        case 0x1ea020u: goto label_1ea020;
        case 0x1ea024u: goto label_1ea024;
        case 0x1ea028u: goto label_1ea028;
        case 0x1ea02cu: goto label_1ea02c;
        case 0x1ea030u: goto label_1ea030;
        case 0x1ea034u: goto label_1ea034;
        case 0x1ea038u: goto label_1ea038;
        case 0x1ea03cu: goto label_1ea03c;
        case 0x1ea040u: goto label_1ea040;
        case 0x1ea044u: goto label_1ea044;
        case 0x1ea048u: goto label_1ea048;
        case 0x1ea04cu: goto label_1ea04c;
        case 0x1ea050u: goto label_1ea050;
        case 0x1ea054u: goto label_1ea054;
        case 0x1ea058u: goto label_1ea058;
        case 0x1ea05cu: goto label_1ea05c;
        case 0x1ea060u: goto label_1ea060;
        case 0x1ea064u: goto label_1ea064;
        case 0x1ea068u: goto label_1ea068;
        case 0x1ea06cu: goto label_1ea06c;
        case 0x1ea070u: goto label_1ea070;
        case 0x1ea074u: goto label_1ea074;
        case 0x1ea078u: goto label_1ea078;
        case 0x1ea07cu: goto label_1ea07c;
        case 0x1ea080u: goto label_1ea080;
        case 0x1ea084u: goto label_1ea084;
        case 0x1ea088u: goto label_1ea088;
        case 0x1ea08cu: goto label_1ea08c;
        case 0x1ea090u: goto label_1ea090;
        case 0x1ea094u: goto label_1ea094;
        case 0x1ea098u: goto label_1ea098;
        case 0x1ea09cu: goto label_1ea09c;
        case 0x1ea0a0u: goto label_1ea0a0;
        case 0x1ea0a4u: goto label_1ea0a4;
        case 0x1ea0a8u: goto label_1ea0a8;
        case 0x1ea0acu: goto label_1ea0ac;
        case 0x1ea0b0u: goto label_1ea0b0;
        case 0x1ea0b4u: goto label_1ea0b4;
        case 0x1ea0b8u: goto label_1ea0b8;
        case 0x1ea0bcu: goto label_1ea0bc;
        case 0x1ea0c0u: goto label_1ea0c0;
        case 0x1ea0c4u: goto label_1ea0c4;
        case 0x1ea0c8u: goto label_1ea0c8;
        case 0x1ea0ccu: goto label_1ea0cc;
        case 0x1ea0d0u: goto label_1ea0d0;
        case 0x1ea0d4u: goto label_1ea0d4;
        case 0x1ea0d8u: goto label_1ea0d8;
        case 0x1ea0dcu: goto label_1ea0dc;
        case 0x1ea0e0u: goto label_1ea0e0;
        case 0x1ea0e4u: goto label_1ea0e4;
        case 0x1ea0e8u: goto label_1ea0e8;
        case 0x1ea0ecu: goto label_1ea0ec;
        case 0x1ea0f0u: goto label_1ea0f0;
        case 0x1ea0f4u: goto label_1ea0f4;
        case 0x1ea0f8u: goto label_1ea0f8;
        case 0x1ea0fcu: goto label_1ea0fc;
        case 0x1ea100u: goto label_1ea100;
        case 0x1ea104u: goto label_1ea104;
        case 0x1ea108u: goto label_1ea108;
        case 0x1ea10cu: goto label_1ea10c;
        case 0x1ea110u: goto label_1ea110;
        case 0x1ea114u: goto label_1ea114;
        case 0x1ea118u: goto label_1ea118;
        case 0x1ea11cu: goto label_1ea11c;
        case 0x1ea120u: goto label_1ea120;
        case 0x1ea124u: goto label_1ea124;
        case 0x1ea128u: goto label_1ea128;
        case 0x1ea12cu: goto label_1ea12c;
        case 0x1ea130u: goto label_1ea130;
        case 0x1ea134u: goto label_1ea134;
        case 0x1ea138u: goto label_1ea138;
        case 0x1ea13cu: goto label_1ea13c;
        case 0x1ea140u: goto label_1ea140;
        case 0x1ea144u: goto label_1ea144;
        case 0x1ea148u: goto label_1ea148;
        case 0x1ea14cu: goto label_1ea14c;
        case 0x1ea150u: goto label_1ea150;
        case 0x1ea154u: goto label_1ea154;
        case 0x1ea158u: goto label_1ea158;
        case 0x1ea15cu: goto label_1ea15c;
        case 0x1ea160u: goto label_1ea160;
        case 0x1ea164u: goto label_1ea164;
        case 0x1ea168u: goto label_1ea168;
        case 0x1ea16cu: goto label_1ea16c;
        case 0x1ea170u: goto label_1ea170;
        case 0x1ea174u: goto label_1ea174;
        case 0x1ea178u: goto label_1ea178;
        case 0x1ea17cu: goto label_1ea17c;
        case 0x1ea180u: goto label_1ea180;
        case 0x1ea184u: goto label_1ea184;
        case 0x1ea188u: goto label_1ea188;
        case 0x1ea18cu: goto label_1ea18c;
        case 0x1ea190u: goto label_1ea190;
        case 0x1ea194u: goto label_1ea194;
        case 0x1ea198u: goto label_1ea198;
        case 0x1ea19cu: goto label_1ea19c;
        case 0x1ea1a0u: goto label_1ea1a0;
        case 0x1ea1a4u: goto label_1ea1a4;
        case 0x1ea1a8u: goto label_1ea1a8;
        case 0x1ea1acu: goto label_1ea1ac;
        case 0x1ea1b0u: goto label_1ea1b0;
        case 0x1ea1b4u: goto label_1ea1b4;
        case 0x1ea1b8u: goto label_1ea1b8;
        case 0x1ea1bcu: goto label_1ea1bc;
        case 0x1ea1c0u: goto label_1ea1c0;
        case 0x1ea1c4u: goto label_1ea1c4;
        case 0x1ea1c8u: goto label_1ea1c8;
        case 0x1ea1ccu: goto label_1ea1cc;
        case 0x1ea1d0u: goto label_1ea1d0;
        case 0x1ea1d4u: goto label_1ea1d4;
        case 0x1ea1d8u: goto label_1ea1d8;
        case 0x1ea1dcu: goto label_1ea1dc;
        case 0x1ea1e0u: goto label_1ea1e0;
        case 0x1ea1e4u: goto label_1ea1e4;
        case 0x1ea1e8u: goto label_1ea1e8;
        case 0x1ea1ecu: goto label_1ea1ec;
        case 0x1ea1f0u: goto label_1ea1f0;
        case 0x1ea1f4u: goto label_1ea1f4;
        case 0x1ea1f8u: goto label_1ea1f8;
        case 0x1ea1fcu: goto label_1ea1fc;
        case 0x1ea200u: goto label_1ea200;
        case 0x1ea204u: goto label_1ea204;
        case 0x1ea208u: goto label_1ea208;
        case 0x1ea20cu: goto label_1ea20c;
        case 0x1ea210u: goto label_1ea210;
        case 0x1ea214u: goto label_1ea214;
        case 0x1ea218u: goto label_1ea218;
        case 0x1ea21cu: goto label_1ea21c;
        case 0x1ea220u: goto label_1ea220;
        case 0x1ea224u: goto label_1ea224;
        case 0x1ea228u: goto label_1ea228;
        case 0x1ea22cu: goto label_1ea22c;
        case 0x1ea230u: goto label_1ea230;
        case 0x1ea234u: goto label_1ea234;
        case 0x1ea238u: goto label_1ea238;
        case 0x1ea23cu: goto label_1ea23c;
        case 0x1ea240u: goto label_1ea240;
        case 0x1ea244u: goto label_1ea244;
        case 0x1ea248u: goto label_1ea248;
        case 0x1ea24cu: goto label_1ea24c;
        case 0x1ea250u: goto label_1ea250;
        case 0x1ea254u: goto label_1ea254;
        case 0x1ea258u: goto label_1ea258;
        case 0x1ea25cu: goto label_1ea25c;
        case 0x1ea260u: goto label_1ea260;
        case 0x1ea264u: goto label_1ea264;
        case 0x1ea268u: goto label_1ea268;
        case 0x1ea26cu: goto label_1ea26c;
        case 0x1ea270u: goto label_1ea270;
        case 0x1ea274u: goto label_1ea274;
        case 0x1ea278u: goto label_1ea278;
        case 0x1ea27cu: goto label_1ea27c;
        case 0x1ea280u: goto label_1ea280;
        case 0x1ea284u: goto label_1ea284;
        case 0x1ea288u: goto label_1ea288;
        case 0x1ea28cu: goto label_1ea28c;
        case 0x1ea290u: goto label_1ea290;
        case 0x1ea294u: goto label_1ea294;
        case 0x1ea298u: goto label_1ea298;
        case 0x1ea29cu: goto label_1ea29c;
        case 0x1ea2a0u: goto label_1ea2a0;
        case 0x1ea2a4u: goto label_1ea2a4;
        case 0x1ea2a8u: goto label_1ea2a8;
        case 0x1ea2acu: goto label_1ea2ac;
        case 0x1ea2b0u: goto label_1ea2b0;
        case 0x1ea2b4u: goto label_1ea2b4;
        case 0x1ea2b8u: goto label_1ea2b8;
        case 0x1ea2bcu: goto label_1ea2bc;
        case 0x1ea2c0u: goto label_1ea2c0;
        case 0x1ea2c4u: goto label_1ea2c4;
        case 0x1ea2c8u: goto label_1ea2c8;
        case 0x1ea2ccu: goto label_1ea2cc;
        case 0x1ea2d0u: goto label_1ea2d0;
        case 0x1ea2d4u: goto label_1ea2d4;
        case 0x1ea2d8u: goto label_1ea2d8;
        case 0x1ea2dcu: goto label_1ea2dc;
        case 0x1ea2e0u: goto label_1ea2e0;
        case 0x1ea2e4u: goto label_1ea2e4;
        case 0x1ea2e8u: goto label_1ea2e8;
        case 0x1ea2ecu: goto label_1ea2ec;
        case 0x1ea2f0u: goto label_1ea2f0;
        case 0x1ea2f4u: goto label_1ea2f4;
        case 0x1ea2f8u: goto label_1ea2f8;
        case 0x1ea2fcu: goto label_1ea2fc;
        case 0x1ea300u: goto label_1ea300;
        case 0x1ea304u: goto label_1ea304;
        case 0x1ea308u: goto label_1ea308;
        case 0x1ea30cu: goto label_1ea30c;
        case 0x1ea310u: goto label_1ea310;
        case 0x1ea314u: goto label_1ea314;
        case 0x1ea318u: goto label_1ea318;
        case 0x1ea31cu: goto label_1ea31c;
        case 0x1ea320u: goto label_1ea320;
        case 0x1ea324u: goto label_1ea324;
        case 0x1ea328u: goto label_1ea328;
        case 0x1ea32cu: goto label_1ea32c;
        case 0x1ea330u: goto label_1ea330;
        case 0x1ea334u: goto label_1ea334;
        case 0x1ea338u: goto label_1ea338;
        case 0x1ea33cu: goto label_1ea33c;
        case 0x1ea340u: goto label_1ea340;
        case 0x1ea344u: goto label_1ea344;
        case 0x1ea348u: goto label_1ea348;
        case 0x1ea34cu: goto label_1ea34c;
        case 0x1ea350u: goto label_1ea350;
        case 0x1ea354u: goto label_1ea354;
        case 0x1ea358u: goto label_1ea358;
        case 0x1ea35cu: goto label_1ea35c;
        case 0x1ea360u: goto label_1ea360;
        case 0x1ea364u: goto label_1ea364;
        case 0x1ea368u: goto label_1ea368;
        case 0x1ea36cu: goto label_1ea36c;
        case 0x1ea370u: goto label_1ea370;
        case 0x1ea374u: goto label_1ea374;
        case 0x1ea378u: goto label_1ea378;
        case 0x1ea37cu: goto label_1ea37c;
        case 0x1ea380u: goto label_1ea380;
        case 0x1ea384u: goto label_1ea384;
        case 0x1ea388u: goto label_1ea388;
        case 0x1ea38cu: goto label_1ea38c;
        case 0x1ea390u: goto label_1ea390;
        case 0x1ea394u: goto label_1ea394;
        case 0x1ea398u: goto label_1ea398;
        case 0x1ea39cu: goto label_1ea39c;
        case 0x1ea3a0u: goto label_1ea3a0;
        case 0x1ea3a4u: goto label_1ea3a4;
        case 0x1ea3a8u: goto label_1ea3a8;
        case 0x1ea3acu: goto label_1ea3ac;
        case 0x1ea3b0u: goto label_1ea3b0;
        case 0x1ea3b4u: goto label_1ea3b4;
        case 0x1ea3b8u: goto label_1ea3b8;
        case 0x1ea3bcu: goto label_1ea3bc;
        case 0x1ea3c0u: goto label_1ea3c0;
        case 0x1ea3c4u: goto label_1ea3c4;
        case 0x1ea3c8u: goto label_1ea3c8;
        case 0x1ea3ccu: goto label_1ea3cc;
        case 0x1ea3d0u: goto label_1ea3d0;
        case 0x1ea3d4u: goto label_1ea3d4;
        case 0x1ea3d8u: goto label_1ea3d8;
        case 0x1ea3dcu: goto label_1ea3dc;
        case 0x1ea3e0u: goto label_1ea3e0;
        case 0x1ea3e4u: goto label_1ea3e4;
        case 0x1ea3e8u: goto label_1ea3e8;
        case 0x1ea3ecu: goto label_1ea3ec;
        case 0x1ea3f0u: goto label_1ea3f0;
        case 0x1ea3f4u: goto label_1ea3f4;
        case 0x1ea3f8u: goto label_1ea3f8;
        case 0x1ea3fcu: goto label_1ea3fc;
        case 0x1ea400u: goto label_1ea400;
        case 0x1ea404u: goto label_1ea404;
        case 0x1ea408u: goto label_1ea408;
        case 0x1ea40cu: goto label_1ea40c;
        case 0x1ea410u: goto label_1ea410;
        case 0x1ea414u: goto label_1ea414;
        case 0x1ea418u: goto label_1ea418;
        case 0x1ea41cu: goto label_1ea41c;
        case 0x1ea420u: goto label_1ea420;
        case 0x1ea424u: goto label_1ea424;
        case 0x1ea428u: goto label_1ea428;
        case 0x1ea42cu: goto label_1ea42c;
        case 0x1ea430u: goto label_1ea430;
        case 0x1ea434u: goto label_1ea434;
        case 0x1ea438u: goto label_1ea438;
        case 0x1ea43cu: goto label_1ea43c;
        case 0x1ea440u: goto label_1ea440;
        case 0x1ea444u: goto label_1ea444;
        case 0x1ea448u: goto label_1ea448;
        case 0x1ea44cu: goto label_1ea44c;
        case 0x1ea450u: goto label_1ea450;
        case 0x1ea454u: goto label_1ea454;
        case 0x1ea458u: goto label_1ea458;
        case 0x1ea45cu: goto label_1ea45c;
        case 0x1ea460u: goto label_1ea460;
        case 0x1ea464u: goto label_1ea464;
        case 0x1ea468u: goto label_1ea468;
        case 0x1ea46cu: goto label_1ea46c;
        case 0x1ea470u: goto label_1ea470;
        case 0x1ea474u: goto label_1ea474;
        case 0x1ea478u: goto label_1ea478;
        case 0x1ea47cu: goto label_1ea47c;
        case 0x1ea480u: goto label_1ea480;
        case 0x1ea484u: goto label_1ea484;
        case 0x1ea488u: goto label_1ea488;
        case 0x1ea48cu: goto label_1ea48c;
        case 0x1ea490u: goto label_1ea490;
        case 0x1ea494u: goto label_1ea494;
        case 0x1ea498u: goto label_1ea498;
        case 0x1ea49cu: goto label_1ea49c;
        case 0x1ea4a0u: goto label_1ea4a0;
        case 0x1ea4a4u: goto label_1ea4a4;
        case 0x1ea4a8u: goto label_1ea4a8;
        case 0x1ea4acu: goto label_1ea4ac;
        case 0x1ea4b0u: goto label_1ea4b0;
        case 0x1ea4b4u: goto label_1ea4b4;
        case 0x1ea4b8u: goto label_1ea4b8;
        case 0x1ea4bcu: goto label_1ea4bc;
        case 0x1ea4c0u: goto label_1ea4c0;
        case 0x1ea4c4u: goto label_1ea4c4;
        case 0x1ea4c8u: goto label_1ea4c8;
        case 0x1ea4ccu: goto label_1ea4cc;
        case 0x1ea4d0u: goto label_1ea4d0;
        case 0x1ea4d4u: goto label_1ea4d4;
        case 0x1ea4d8u: goto label_1ea4d8;
        case 0x1ea4dcu: goto label_1ea4dc;
        case 0x1ea4e0u: goto label_1ea4e0;
        case 0x1ea4e4u: goto label_1ea4e4;
        case 0x1ea4e8u: goto label_1ea4e8;
        case 0x1ea4ecu: goto label_1ea4ec;
        case 0x1ea4f0u: goto label_1ea4f0;
        case 0x1ea4f4u: goto label_1ea4f4;
        case 0x1ea4f8u: goto label_1ea4f8;
        case 0x1ea4fcu: goto label_1ea4fc;
        case 0x1ea500u: goto label_1ea500;
        case 0x1ea504u: goto label_1ea504;
        case 0x1ea508u: goto label_1ea508;
        case 0x1ea50cu: goto label_1ea50c;
        case 0x1ea510u: goto label_1ea510;
        case 0x1ea514u: goto label_1ea514;
        case 0x1ea518u: goto label_1ea518;
        case 0x1ea51cu: goto label_1ea51c;
        case 0x1ea520u: goto label_1ea520;
        case 0x1ea524u: goto label_1ea524;
        case 0x1ea528u: goto label_1ea528;
        case 0x1ea52cu: goto label_1ea52c;
        case 0x1ea530u: goto label_1ea530;
        case 0x1ea534u: goto label_1ea534;
        case 0x1ea538u: goto label_1ea538;
        case 0x1ea53cu: goto label_1ea53c;
        case 0x1ea540u: goto label_1ea540;
        case 0x1ea544u: goto label_1ea544;
        case 0x1ea548u: goto label_1ea548;
        case 0x1ea54cu: goto label_1ea54c;
        case 0x1ea550u: goto label_1ea550;
        case 0x1ea554u: goto label_1ea554;
        case 0x1ea558u: goto label_1ea558;
        case 0x1ea55cu: goto label_1ea55c;
        case 0x1ea560u: goto label_1ea560;
        case 0x1ea564u: goto label_1ea564;
        case 0x1ea568u: goto label_1ea568;
        case 0x1ea56cu: goto label_1ea56c;
        case 0x1ea570u: goto label_1ea570;
        case 0x1ea574u: goto label_1ea574;
        case 0x1ea578u: goto label_1ea578;
        case 0x1ea57cu: goto label_1ea57c;
        case 0x1ea580u: goto label_1ea580;
        case 0x1ea584u: goto label_1ea584;
        case 0x1ea588u: goto label_1ea588;
        case 0x1ea58cu: goto label_1ea58c;
        case 0x1ea590u: goto label_1ea590;
        case 0x1ea594u: goto label_1ea594;
        case 0x1ea598u: goto label_1ea598;
        case 0x1ea59cu: goto label_1ea59c;
        case 0x1ea5a0u: goto label_1ea5a0;
        case 0x1ea5a4u: goto label_1ea5a4;
        case 0x1ea5a8u: goto label_1ea5a8;
        case 0x1ea5acu: goto label_1ea5ac;
        case 0x1ea5b0u: goto label_1ea5b0;
        case 0x1ea5b4u: goto label_1ea5b4;
        case 0x1ea5b8u: goto label_1ea5b8;
        case 0x1ea5bcu: goto label_1ea5bc;
        case 0x1ea5c0u: goto label_1ea5c0;
        case 0x1ea5c4u: goto label_1ea5c4;
        case 0x1ea5c8u: goto label_1ea5c8;
        case 0x1ea5ccu: goto label_1ea5cc;
        case 0x1ea5d0u: goto label_1ea5d0;
        case 0x1ea5d4u: goto label_1ea5d4;
        case 0x1ea5d8u: goto label_1ea5d8;
        case 0x1ea5dcu: goto label_1ea5dc;
        case 0x1ea5e0u: goto label_1ea5e0;
        case 0x1ea5e4u: goto label_1ea5e4;
        case 0x1ea5e8u: goto label_1ea5e8;
        case 0x1ea5ecu: goto label_1ea5ec;
        case 0x1ea5f0u: goto label_1ea5f0;
        case 0x1ea5f4u: goto label_1ea5f4;
        case 0x1ea5f8u: goto label_1ea5f8;
        case 0x1ea5fcu: goto label_1ea5fc;
        case 0x1ea600u: goto label_1ea600;
        case 0x1ea604u: goto label_1ea604;
        case 0x1ea608u: goto label_1ea608;
        case 0x1ea60cu: goto label_1ea60c;
        case 0x1ea610u: goto label_1ea610;
        case 0x1ea614u: goto label_1ea614;
        case 0x1ea618u: goto label_1ea618;
        case 0x1ea61cu: goto label_1ea61c;
        case 0x1ea620u: goto label_1ea620;
        case 0x1ea624u: goto label_1ea624;
        case 0x1ea628u: goto label_1ea628;
        case 0x1ea62cu: goto label_1ea62c;
        case 0x1ea630u: goto label_1ea630;
        case 0x1ea634u: goto label_1ea634;
        case 0x1ea638u: goto label_1ea638;
        case 0x1ea63cu: goto label_1ea63c;
        case 0x1ea640u: goto label_1ea640;
        case 0x1ea644u: goto label_1ea644;
        case 0x1ea648u: goto label_1ea648;
        case 0x1ea64cu: goto label_1ea64c;
        case 0x1ea650u: goto label_1ea650;
        case 0x1ea654u: goto label_1ea654;
        case 0x1ea658u: goto label_1ea658;
        case 0x1ea65cu: goto label_1ea65c;
        case 0x1ea660u: goto label_1ea660;
        case 0x1ea664u: goto label_1ea664;
        case 0x1ea668u: goto label_1ea668;
        case 0x1ea66cu: goto label_1ea66c;
        case 0x1ea670u: goto label_1ea670;
        case 0x1ea674u: goto label_1ea674;
        case 0x1ea678u: goto label_1ea678;
        case 0x1ea67cu: goto label_1ea67c;
        case 0x1ea680u: goto label_1ea680;
        case 0x1ea684u: goto label_1ea684;
        case 0x1ea688u: goto label_1ea688;
        case 0x1ea68cu: goto label_1ea68c;
        case 0x1ea690u: goto label_1ea690;
        case 0x1ea694u: goto label_1ea694;
        case 0x1ea698u: goto label_1ea698;
        case 0x1ea69cu: goto label_1ea69c;
        case 0x1ea6a0u: goto label_1ea6a0;
        case 0x1ea6a4u: goto label_1ea6a4;
        case 0x1ea6a8u: goto label_1ea6a8;
        case 0x1ea6acu: goto label_1ea6ac;
        case 0x1ea6b0u: goto label_1ea6b0;
        case 0x1ea6b4u: goto label_1ea6b4;
        case 0x1ea6b8u: goto label_1ea6b8;
        case 0x1ea6bcu: goto label_1ea6bc;
        case 0x1ea6c0u: goto label_1ea6c0;
        case 0x1ea6c4u: goto label_1ea6c4;
        default: break;
    }

    ctx->pc = 0x1e9c50u;

label_1e9c50:
    // 0x1e9c50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e9c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1e9c54:
    // 0x1e9c54: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1e9c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_1e9c58:
    // 0x1e9c58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e9c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1e9c5c:
    // 0x1e9c5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e9c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e9c60:
    // 0x1e9c60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e9c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e9c64:
    // 0x1e9c64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e9c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e9c68:
    // 0x1e9c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e9c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e9c6c:
    // 0x1e9c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e9c70:
    // 0x1e9c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e9c74:
    // 0x1e9c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e9c78:
    // 0x1e9c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9c7c:
    // 0x1e9c7c: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
label_1e9c80:
    // 0x1e9c80: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1e9c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1e9c84:
    // 0x1e9c84: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x1e9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1e9c88:
    // 0x1e9c88: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1e9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_1e9c8c:
    // 0x1e9c8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1e9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1e9c90:
    // 0x1e9c90: 0x2452bb48  addiu       $s2, $v0, -0x44B8
    ctx->pc = 0x1e9c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
label_1e9c94:
    // 0x1e9c94: 0x8fb400d8  lw          $s4, 0xD8($sp)
    ctx->pc = 0x1e9c94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9c98:
    // 0x1e9c98: 0x26841330  addiu       $a0, $s4, 0x1330
    ctx->pc = 0x1e9c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4912));
label_1e9c9c:
    // 0x1e9c9c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1e9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e9ca0:
    // 0x1e9ca0: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x1e9ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
label_1e9ca4:
    // 0x1e9ca4: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x1e9ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
label_1e9ca8:
    // 0x1e9ca8: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1e9ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_1e9cac:
    // 0x1e9cac: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9cb0:
    // 0x1e9cb0: 0x8fb400d8  lw          $s4, 0xD8($sp)
    ctx->pc = 0x1e9cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9cb4:
    // 0x1e9cb4: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x1e9cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1e9cb8:
    // 0x1e9cb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e9cbc:
    // 0x1e9cbc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e9cc0:
    // 0x1e9cc0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1e9cc4:
    // 0x1e9cc4: 0x24549d30  addiu       $s4, $v0, -0x62D0
    ctx->pc = 0x1e9cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
label_1e9cc8:
    // 0x1e9cc8: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x1e9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1e9ccc:
    // 0x1e9ccc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9cd0:
    // 0x1e9cd0: 0x40f809  jalr        $v0
label_1e9cd4:
    if (ctx->pc == 0x1E9CD4u) {
        ctx->pc = 0x1E9CD8u;
        goto label_1e9cd8;
    }
    ctx->pc = 0x1E9CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9CD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9CD0u, 0x1E9CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9CD8u;
label_1e9cd8:
    // 0x1e9cd8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1e9cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9cdc:
    // 0x1e9cdc: 0x94a6000e  lhu         $a2, 0xE($a1)
    ctx->pc = 0x1e9cdcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_1e9ce0:
    // 0x1e9ce0: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x1e9ce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1e9ce4:
    // 0x1e9ce4: 0x30e24000  andi        $v0, $a3, 0x4000
    ctx->pc = 0x1e9ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
label_1e9ce8:
    // 0x1e9ce8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1e9cec:
    if (ctx->pc == 0x1E9CECu) {
        ctx->pc = 0x1E9CF0u;
        goto label_1e9cf0;
    }
    ctx->pc = 0x1E9CE8u;
    {
        const bool branch_taken_0x1e9ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ce8) {
            ctx->pc = 0x1E9D28u;
            goto label_1e9d28;
        }
    }
    ctx->pc = 0x1E9CF0u;
label_1e9cf0:
    // 0x1e9cf0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9cf4:
    // 0x1e9cf4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1e9cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1e9cf8:
    // 0x1e9cf8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1e9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9cfc:
    // 0x1e9cfc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9d00:
    // 0x1e9d00: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1e9d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9d04:
    // 0x1e9d04: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1e9d04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e9d08:
    // 0x1e9d08: 0xc058fec  jal         func_163FB0
label_1e9d0c:
    if (ctx->pc == 0x1E9D0Cu) {
        ctx->pc = 0x1E9D10u;
        goto label_1e9d10;
    }
    ctx->pc = 0x1E9D08u;
    SET_GPR_U32(ctx, 31, 0x1E9D10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9D08u, 0x1E9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D10u;
label_1e9d10:
    // 0x1e9d10: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9d14:
    // 0x1e9d14: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e9d14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e9d18:
    // 0x1e9d18: 0xc05cd78  jal         func_1735E0
label_1e9d1c:
    if (ctx->pc == 0x1E9D1Cu) {
        ctx->pc = 0x1E9D20u;
        goto label_1e9d20;
    }
    ctx->pc = 0x1E9D18u;
    SET_GPR_U32(ctx, 31, 0x1E9D20u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x1E9D18u, 0x1E9D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D20u;
label_1e9d20:
    // 0x1e9d20: 0x1000025c  b           . + 4 + (0x25C << 2)
label_1e9d24:
    if (ctx->pc == 0x1E9D24u) {
        ctx->pc = 0x1E9D28u;
        goto label_1e9d28;
    }
    ctx->pc = 0x1E9D20u;
    {
        const bool branch_taken_0x1e9d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d20) {
            ctx->pc = 0x1EA694u;
            goto label_1ea694;
        }
    }
    ctx->pc = 0x1E9D28u;
label_1e9d28:
    // 0x1e9d28: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x1e9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_1e9d2c:
    // 0x1e9d2c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9d30:
    // 0x1e9d30: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e9d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e9d34:
    // 0x1e9d34: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1e9d34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1e9d38:
    // 0x1e9d38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1e9d38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9d3c:
    // 0x1e9d3c: 0xc05d328  jal         func_174CA0
label_1e9d40:
    if (ctx->pc == 0x1E9D40u) {
        ctx->pc = 0x1E9D44u;
        goto label_1e9d44;
    }
    ctx->pc = 0x1E9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1E9D44u);
    ctx->pc = 0x174CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174CA0u, 0x1E9D3Cu, 0x1E9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D44u;
label_1e9d44:
    // 0x1e9d44: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1e9d44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9d48:
    // 0x1e9d48: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9d4c:
    // 0x1e9d4c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1e9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9d50:
    // 0x1e9d50: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1e9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_1e9d54:
    // 0x1e9d54: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9d58:
    // 0x1e9d58: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1e9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1e9d5c:
    // 0x1e9d5c: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1e9d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_1e9d60:
    // 0x1e9d60: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e9d60u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9d64:
    // 0x1e9d64: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1e9d64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9d68:
    // 0x1e9d68: 0x10000023  b           . + 4 + (0x23 << 2)
label_1e9d6c:
    if (ctx->pc == 0x1E9D6Cu) {
        ctx->pc = 0x1E9D70u;
        goto label_1e9d70;
    }
    ctx->pc = 0x1E9D68u;
    {
        const bool branch_taken_0x1e9d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d68) {
            ctx->pc = 0x1E9DF8u;
            goto label_1e9df8;
        }
    }
    ctx->pc = 0x1E9D70u;
label_1e9d70:
    // 0x1e9d70: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1e9d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1e9d74:
    // 0x1e9d74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1e9d78:
    if (ctx->pc == 0x1E9D78u) {
        ctx->pc = 0x1E9D7Cu;
        goto label_1e9d7c;
    }
    ctx->pc = 0x1E9D74u;
    {
        const bool branch_taken_0x1e9d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d74) {
            ctx->pc = 0x1E9DF0u;
            goto label_1e9df0;
        }
    }
    ctx->pc = 0x1E9D7Cu;
label_1e9d7c:
    // 0x1e9d7c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1e9d80:
    // 0x1e9d80: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1e9d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1e9d84:
    // 0x1e9d84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9d88:
    // 0x1e9d88: 0x904310a8  lbu         $v1, 0x10A8($v0)
    ctx->pc = 0x1e9d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4264)));
label_1e9d8c:
    // 0x1e9d8c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e9d90:
    // 0x1e9d90: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1e9d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1e9d94:
    // 0x1e9d94: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1e9d98:
    if (ctx->pc == 0x1E9D98u) {
        ctx->pc = 0x1E9D9Cu;
        goto label_1e9d9c;
    }
    ctx->pc = 0x1E9D94u;
    {
        const bool branch_taken_0x1e9d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d94) {
            ctx->pc = 0x1E9DF0u;
            goto label_1e9df0;
        }
    }
    ctx->pc = 0x1E9D9Cu;
label_1e9d9c:
    // 0x1e9d9c: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
label_1e9da0:
    if (ctx->pc == 0x1E9DA0u) {
        ctx->pc = 0x1E9DA4u;
        goto label_1e9da4;
    }
    ctx->pc = 0x1E9D9Cu;
    {
        const bool branch_taken_0x1e9d9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d9c) {
            ctx->pc = 0x1E9DC4u;
            goto label_1e9dc4;
        }
    }
    ctx->pc = 0x1E9DA4u;
label_1e9da4:
    // 0x1e9da4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1e9da8:
    // 0x1e9da8: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1e9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1e9dac:
    // 0x1e9dac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9db0:
    // 0x1e9db0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9db4:
    // 0x1e9db4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1e9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1e9db8:
    // 0x1e9db8: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1e9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
label_1e9dbc:
    // 0x1e9dbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e9dc0:
    if (ctx->pc == 0x1E9DC0u) {
        ctx->pc = 0x1E9DC4u;
        goto label_1e9dc4;
    }
    ctx->pc = 0x1E9DBCu;
    {
        const bool branch_taken_0x1e9dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9dbc) {
            ctx->pc = 0x1E9DE0u;
            goto label_1e9de0;
        }
    }
    ctx->pc = 0x1E9DC4u;
label_1e9dc4:
    // 0x1e9dc4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1e9dc8:
    // 0x1e9dc8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1e9dcc:
    // 0x1e9dcc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e9dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9dd0:
    // 0x1e9dd0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9dd4:
    // 0x1e9dd4: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x1e9dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1e9dd8:
    // 0x1e9dd8: 0xacc50064  sw          $a1, 0x64($a2)
    ctx->pc = 0x1e9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 5));
label_1e9ddc:
    // 0x1e9ddc: 0x0  nop
    ctx->pc = 0x1e9ddcu;
    // NOP
label_1e9de0:
    // 0x1e9de0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e9de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e9de4:
    // 0x1e9de4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9de8:
    // 0x1e9de8: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_1e9dec:
    if (ctx->pc == 0x1E9DECu) {
        ctx->pc = 0x1E9DF0u;
        goto label_1e9df0;
    }
    ctx->pc = 0x1E9DE8u;
    {
        const bool branch_taken_0x1e9de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9de8) {
            ctx->pc = 0x1E9E00u;
            goto label_1e9e00;
        }
    }
    ctx->pc = 0x1E9DF0u;
label_1e9df0:
    // 0x1e9df0: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x1e9df0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
label_1e9df4:
    // 0x1e9df4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e9df8:
    // 0x1e9df8: 0x1620ffdd  bnez        $s1, . + 4 + (-0x23 << 2)
label_1e9dfc:
    if (ctx->pc == 0x1E9DFCu) {
        ctx->pc = 0x1E9E00u;
        goto label_1e9e00;
    }
    ctx->pc = 0x1E9DF8u;
    {
        const bool branch_taken_0x1e9df8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9df8) {
            ctx->pc = 0x1E9D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9d70;
        }
    }
    ctx->pc = 0x1E9E00u;
label_1e9e00:
    // 0x1e9e00: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1e9e00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9e04:
    // 0x1e9e04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e9e08:
    // 0x1e9e08: 0x8c221a50  lw          $v0, 0x1A50($at)
    ctx->pc = 0x1e9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_1e9e0c:
    // 0x1e9e0c: 0x30550010  andi        $s5, $v0, 0x10
    ctx->pc = 0x1e9e0cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1e9e10:
    // 0x1e9e10: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
label_1e9e14:
    if (ctx->pc == 0x1E9E14u) {
        ctx->pc = 0x1E9E18u;
        goto label_1e9e18;
    }
    ctx->pc = 0x1E9E10u;
    {
        const bool branch_taken_0x1e9e10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e10) {
            ctx->pc = 0x1E9E38u;
            goto label_1e9e38;
        }
    }
    ctx->pc = 0x1E9E18u;
label_1e9e18:
    // 0x1e9e18: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9e1c:
    // 0x1e9e1c: 0xc07e5f0  jal         func_1F97C0
label_1e9e20:
    if (ctx->pc == 0x1E9E20u) {
        ctx->pc = 0x1E9E24u;
        goto label_1e9e24;
    }
    ctx->pc = 0x1E9E1Cu;
    SET_GPR_U32(ctx, 31, 0x1E9E24u);
    ctx->pc = 0x1F97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F97C0u, 0x1E9E1Cu, 0x1E9E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E24u;
label_1e9e24:
    // 0x1e9e24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e9e28:
    // 0x1e9e28: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x1e9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_1e9e2c:
    // 0x1e9e2c: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x1e9e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_1e9e30:
    // 0x1e9e30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e9e34:
    // 0x1e9e34: 0xac221a50  sw          $v0, 0x1A50($at)
    ctx->pc = 0x1e9e34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 2));
label_1e9e38:
    // 0x1e9e38: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9e3c:
    // 0x1e9e3c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1e9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9e40:
    // 0x1e9e40: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1e9e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1e9e44:
    // 0x1e9e44: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1e9e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_1e9e48:
    // 0x1e9e48: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_1e9e4c:
    if (ctx->pc == 0x1E9E4Cu) {
        ctx->pc = 0x1E9E50u;
        goto label_1e9e50;
    }
    ctx->pc = 0x1E9E48u;
    {
        const bool branch_taken_0x1e9e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e48) {
            ctx->pc = 0x1E9EE4u;
            goto label_1e9ee4;
        }
    }
    ctx->pc = 0x1E9E50u;
label_1e9e50:
    // 0x1e9e50: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9e54:
    // 0x1e9e54: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1e9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9e58:
    // 0x1e9e58: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1e9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1e9e5c:
    // 0x1e9e5c: 0x30451000  andi        $a1, $v0, 0x1000
    ctx->pc = 0x1e9e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1e9e60:
    // 0x1e9e60: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
label_1e9e64:
    if (ctx->pc == 0x1E9E64u) {
        ctx->pc = 0x1E9E68u;
        goto label_1e9e68;
    }
    ctx->pc = 0x1E9E60u;
    {
        const bool branch_taken_0x1e9e60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e60) {
            ctx->pc = 0x1E9EA0u;
            goto label_1e9ea0;
        }
    }
    ctx->pc = 0x1E9E68u;
label_1e9e68:
    // 0x1e9e68: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9e6c:
    // 0x1e9e6c: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x1e9e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1e9e70:
    // 0x1e9e70: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1e9e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9e74:
    // 0x1e9e74: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9e78:
    // 0x1e9e78: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1e9e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9e7c:
    // 0x1e9e7c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1e9e7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e9e80:
    // 0x1e9e80: 0xc058fec  jal         func_163FB0
label_1e9e84:
    if (ctx->pc == 0x1E9E84u) {
        ctx->pc = 0x1E9E88u;
        goto label_1e9e88;
    }
    ctx->pc = 0x1E9E80u;
    SET_GPR_U32(ctx, 31, 0x1E9E88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9E80u, 0x1E9E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E88u;
label_1e9e88:
    // 0x1e9e88: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9e8c:
    // 0x1e9e8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e9e8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e9e90:
    // 0x1e9e90: 0xc05cd78  jal         func_1735E0
label_1e9e94:
    if (ctx->pc == 0x1E9E94u) {
        ctx->pc = 0x1E9E98u;
        goto label_1e9e98;
    }
    ctx->pc = 0x1E9E90u;
    SET_GPR_U32(ctx, 31, 0x1E9E98u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x1E9E90u, 0x1E9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E98u;
label_1e9e98:
    // 0x1e9e98: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e9e9c:
    if (ctx->pc == 0x1E9E9Cu) {
        ctx->pc = 0x1E9EA0u;
        goto label_1e9ea0;
    }
    ctx->pc = 0x1E9E98u;
    {
        const bool branch_taken_0x1e9e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e98) {
            ctx->pc = 0x1E9EE4u;
            goto label_1e9ee4;
        }
    }
    ctx->pc = 0x1E9EA0u;
label_1e9ea0:
    // 0x1e9ea0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9ea4:
    // 0x1e9ea4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1e9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9ea8:
    // 0x1e9ea8: 0x3c154049  lui         $s5, 0x4049
    ctx->pc = 0x1e9ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16457 << 16));
label_1e9eac:
    // 0x1e9eac: 0x36a20fdb  ori         $v0, $s5, 0xFDB
    ctx->pc = 0x1e9eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4059);
label_1e9eb0:
    // 0x1e9eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9eb4:
    // 0x1e9eb4: 0x0  nop
    ctx->pc = 0x1e9eb4u;
    // NOP
label_1e9eb8:
    // 0x1e9eb8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e9eb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e9ebc:
    // 0x1e9ebc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9ec0:
    // 0x1e9ec0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1e9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1e9ec4:
    // 0x1e9ec4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9ec8:
    // 0x1e9ec8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1e9ec8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e9ecc:
    // 0x1e9ecc: 0xc058fec  jal         func_163FB0
label_1e9ed0:
    if (ctx->pc == 0x1E9ED0u) {
        ctx->pc = 0x1E9ED4u;
        goto label_1e9ed4;
    }
    ctx->pc = 0x1E9ECCu;
    SET_GPR_U32(ctx, 31, 0x1E9ED4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9ECCu, 0x1E9ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ED4u;
label_1e9ed4:
    // 0x1e9ed4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9ed8:
    // 0x1e9ed8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e9ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e9edc:
    // 0x1e9edc: 0xc05cd78  jal         func_1735E0
label_1e9ee0:
    if (ctx->pc == 0x1E9EE0u) {
        ctx->pc = 0x1E9EE4u;
        goto label_1e9ee4;
    }
    ctx->pc = 0x1E9EDCu;
    SET_GPR_U32(ctx, 31, 0x1E9EE4u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x1E9EDCu, 0x1E9EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EE4u;
label_1e9ee4:
    // 0x1e9ee4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9ee8:
    // 0x1e9ee8: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x1e9ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1e9eec:
    // 0x1e9eec: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1e9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1e9ef0:
    // 0x1e9ef0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1e9ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1e9ef4:
    // 0x1e9ef4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1e9ef8:
    if (ctx->pc == 0x1E9EF8u) {
        ctx->pc = 0x1E9EFCu;
        goto label_1e9efc;
    }
    ctx->pc = 0x1E9EF4u;
    {
        const bool branch_taken_0x1e9ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ef4) {
            ctx->pc = 0x1E9F2Cu;
            goto label_1e9f2c;
        }
    }
    ctx->pc = 0x1E9EFCu;
label_1e9efc:
    // 0x1e9efc: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1e9efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9f00:
    // 0x1e9f00: 0x84c210a6  lh          $v0, 0x10A6($a2)
    ctx->pc = 0x1e9f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4262)));
label_1e9f04:
    // 0x1e9f04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1e9f08:
    // 0x1e9f08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9f08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e9f0c:
    // 0x1e9f0c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_1e9f10:
    if (ctx->pc == 0x1E9F10u) {
        ctx->pc = 0x1E9F14u;
        goto label_1e9f14;
    }
    ctx->pc = 0x1E9F0Cu;
    {
        const bool branch_taken_0x1e9f0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e9f0c) {
            ctx->pc = 0x1E9F2Cu;
            goto label_1e9f2c;
        }
    }
    ctx->pc = 0x1E9F14u;
label_1e9f14:
    // 0x1e9f14: 0x8fb500d8  lw          $s5, 0xD8($sp)
    ctx->pc = 0x1e9f14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9f18:
    // 0x1e9f18: 0x26a410b0  addiu       $a0, $s5, 0x10B0
    ctx->pc = 0x1e9f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4272));
label_1e9f1c:
    // 0x1e9f1c: 0xc0624b4  jal         func_1892D0
label_1e9f20:
    if (ctx->pc == 0x1E9F20u) {
        ctx->pc = 0x1E9F24u;
        goto label_1e9f24;
    }
    ctx->pc = 0x1E9F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E9F24u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x1E9F1Cu, 0x1E9F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F24u;
label_1e9f24:
    // 0x1e9f24: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e9f28:
    if (ctx->pc == 0x1E9F28u) {
        ctx->pc = 0x1E9F2Cu;
        goto label_1e9f2c;
    }
    ctx->pc = 0x1E9F24u;
    {
        const bool branch_taken_0x1e9f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f24) {
            ctx->pc = 0x1E9F3Cu;
            goto label_1e9f3c;
        }
    }
    ctx->pc = 0x1E9F2Cu;
label_1e9f2c:
    // 0x1e9f2c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1e9f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9f30:
    // 0x1e9f30: 0x24a410b0  addiu       $a0, $a1, 0x10B0
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
label_1e9f34:
    // 0x1e9f34: 0xc0624f8  jal         func_1893E0
label_1e9f38:
    if (ctx->pc == 0x1E9F38u) {
        ctx->pc = 0x1E9F3Cu;
        goto label_1e9f3c;
    }
    ctx->pc = 0x1E9F34u;
    SET_GPR_U32(ctx, 31, 0x1E9F3Cu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x1E9F34u, 0x1E9F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F3Cu;
label_1e9f3c:
    // 0x1e9f3c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1e9f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9f40:
    // 0x1e9f40: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e9f40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1e9f44:
    // 0x1e9f44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9f48:
    // 0x1e9f48: 0xc05d25c  jal         func_174970
label_1e9f4c:
    if (ctx->pc == 0x1E9F4Cu) {
        ctx->pc = 0x1E9F50u;
        goto label_1e9f50;
    }
    ctx->pc = 0x1E9F48u;
    SET_GPR_U32(ctx, 31, 0x1E9F50u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1E9F48u, 0x1E9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F50u;
label_1e9f50:
    // 0x1e9f50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1e9f54:
    if (ctx->pc == 0x1E9F54u) {
        ctx->pc = 0x1E9F58u;
        goto label_1e9f58;
    }
    ctx->pc = 0x1E9F50u;
    {
        const bool branch_taken_0x1e9f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f50) {
            ctx->pc = 0x1E9F80u;
            goto label_1e9f80;
        }
    }
    ctx->pc = 0x1E9F58u;
label_1e9f58:
    // 0x1e9f58: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9f5c:
    // 0x1e9f5c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1e9f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9f60:
    // 0x1e9f60: 0x84830094  lh          $v1, 0x94($a0)
    ctx->pc = 0x1e9f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
label_1e9f64:
    // 0x1e9f64: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e9f68:
    // 0x1e9f68: 0xa4820094  sh          $v0, 0x94($a0)
    ctx->pc = 0x1e9f68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 2));
label_1e9f6c:
    // 0x1e9f6c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9f70:
    // 0x1e9f70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1e9f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1e9f74:
    // 0x1e9f74: 0xa4800096  sh          $zero, 0x96($a0)
    ctx->pc = 0x1e9f74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 150), (uint16_t)GPR_U32(ctx, 0));
label_1e9f78:
    // 0x1e9f78: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e9f7c:
    if (ctx->pc == 0x1E9F7Cu) {
        ctx->pc = 0x1E9F80u;
        goto label_1e9f80;
    }
    ctx->pc = 0x1E9F78u;
    {
        const bool branch_taken_0x1e9f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f78) {
            ctx->pc = 0x1E9FA0u;
            goto label_1e9fa0;
        }
    }
    ctx->pc = 0x1E9F80u;
label_1e9f80:
    // 0x1e9f80: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9f84:
    // 0x1e9f84: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1e9f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1e9f88:
    // 0x1e9f88: 0xa4800094  sh          $zero, 0x94($a0)
    ctx->pc = 0x1e9f88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 0));
label_1e9f8c:
    // 0x1e9f8c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9f90:
    // 0x1e9f90: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1e9f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1e9f94:
    // 0x1e9f94: 0x84a40096  lh          $a0, 0x96($a1)
    ctx->pc = 0x1e9f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
label_1e9f98:
    // 0x1e9f98: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1e9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e9f9c:
    // 0x1e9f9c: 0xa4a30096  sh          $v1, 0x96($a1)
    ctx->pc = 0x1e9f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 150), (uint16_t)GPR_U32(ctx, 3));
label_1e9fa0:
    // 0x1e9fa0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9fa4:
    // 0x1e9fa4: 0xc07e82c  jal         func_1FA0B0
label_1e9fa8:
    if (ctx->pc == 0x1E9FA8u) {
        ctx->pc = 0x1E9FACu;
        goto label_1e9fac;
    }
    ctx->pc = 0x1E9FA4u;
    SET_GPR_U32(ctx, 31, 0x1E9FACu);
    ctx->pc = 0x1FA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA0B0u, 0x1E9FA4u, 0x1E9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FACu;
label_1e9fac:
    // 0x1e9fac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9facu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9fb0:
    // 0x1e9fb0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9fb4:
    // 0x1e9fb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e9fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e9fb8:
    // 0x1e9fb8: 0xc07e8a8  jal         func_1FA2A0
label_1e9fbc:
    if (ctx->pc == 0x1E9FBCu) {
        ctx->pc = 0x1E9FC0u;
        goto label_1e9fc0;
    }
    ctx->pc = 0x1E9FB8u;
    SET_GPR_U32(ctx, 31, 0x1E9FC0u);
    ctx->pc = 0x1FA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA2A0u, 0x1E9FB8u, 0x1E9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FC0u;
label_1e9fc0:
    // 0x1e9fc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9fc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9fc4:
    // 0x1e9fc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1e9fc8:
    // 0x1e9fc8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1e9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_1e9fcc:
    // 0x1e9fcc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1e9fd0:
    // 0x1e9fd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e9fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e9fd4:
    // 0x1e9fd4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1e9fd8:
    if (ctx->pc == 0x1E9FD8u) {
        ctx->pc = 0x1E9FDCu;
        goto label_1e9fdc;
    }
    ctx->pc = 0x1E9FD4u;
    {
        const bool branch_taken_0x1e9fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9fd4) {
            ctx->pc = 0x1EA00Cu;
            goto label_1ea00c;
        }
    }
    ctx->pc = 0x1E9FDCu;
label_1e9fdc:
    // 0x1e9fdc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e9fe0:
    // 0x1e9fe0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1e9fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1e9fe4:
    // 0x1e9fe4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1e9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1e9fe8:
    // 0x1e9fe8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1e9fec:
    if (ctx->pc == 0x1E9FECu) {
        ctx->pc = 0x1E9FF0u;
        goto label_1e9ff0;
    }
    ctx->pc = 0x1E9FE8u;
    {
        const bool branch_taken_0x1e9fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9fe8) {
            ctx->pc = 0x1EA00Cu;
            goto label_1ea00c;
        }
    }
    ctx->pc = 0x1E9FF0u;
label_1e9ff0:
    // 0x1e9ff0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e9ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1e9ff4:
    // 0x1e9ff4: 0x8c220aa8  lw          $v0, 0xAA8($at)
    ctx->pc = 0x1e9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2728)));
label_1e9ff8:
    // 0x1e9ff8: 0x24570001  addiu       $s7, $v0, 0x1
    ctx->pc = 0x1e9ff8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e9ffc:
    // 0x1e9ffc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e9ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1ea000:
    // 0x1ea000: 0xac370aa8  sw          $s7, 0xAA8($at)
    ctx->pc = 0x1ea000u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2728), GPR_U32(ctx, 23));
label_1ea004:
    // 0x1ea004: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ea008:
    if (ctx->pc == 0x1EA008u) {
        ctx->pc = 0x1EA00Cu;
        goto label_1ea00c;
    }
    ctx->pc = 0x1EA004u;
    {
        const bool branch_taken_0x1ea004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea004) {
            ctx->pc = 0x1EA028u;
            goto label_1ea028;
        }
    }
    ctx->pc = 0x1EA00Cu;
label_1ea00c:
    // 0x1ea00c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea010:
    // 0x1ea010: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1ea010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1ea014:
    // 0x1ea014: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1ea014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ea018:
    // 0x1ea018: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ea01c:
    if (ctx->pc == 0x1EA01Cu) {
        ctx->pc = 0x1EA020u;
        goto label_1ea020;
    }
    ctx->pc = 0x1EA018u;
    {
        const bool branch_taken_0x1ea018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea018) {
            ctx->pc = 0x1EA028u;
            goto label_1ea028;
        }
    }
    ctx->pc = 0x1EA020u;
label_1ea020:
    // 0x1ea020: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1ea024:
    // 0x1ea024: 0xac200aa8  sw          $zero, 0xAA8($at)
    ctx->pc = 0x1ea024u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2728), GPR_U32(ctx, 0));
label_1ea028:
    // 0x1ea028: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea02c:
    // 0x1ea02c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ea02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ea030:
    // 0x1ea030: 0x90620073  lbu         $v0, 0x73($v1)
    ctx->pc = 0x1ea030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
label_1ea034:
    // 0x1ea034: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ea038:
    // 0x1ea038: 0xa0640073  sb          $a0, 0x73($v1)
    ctx->pc = 0x1ea038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 4));
label_1ea03c:
    // 0x1ea03c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1ea03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1ea040:
    // 0x1ea040: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x1ea040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
label_1ea044:
    // 0x1ea044: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1ea048:
    // 0x1ea048: 0xac220a90  sw          $v0, 0xA90($at)
    ctx->pc = 0x1ea048u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2704), GPR_U32(ctx, 2));
label_1ea04c:
    // 0x1ea04c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1ea04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1ea050:
    // 0x1ea050: 0x34430011  ori         $v1, $v0, 0x11
    ctx->pc = 0x1ea050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
label_1ea054:
    // 0x1ea054: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1ea058:
    // 0x1ea058: 0xac230a94  sw          $v1, 0xA94($at)
    ctx->pc = 0x1ea058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2708), GPR_U32(ctx, 3));
label_1ea05c:
    // 0x1ea05c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea060:
    // 0x1ea060: 0x24561330  addiu       $s6, $v0, 0x1330
    ctx->pc = 0x1ea060u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ea064:
    // 0x1ea064: 0x92c30073  lbu         $v1, 0x73($s6)
    ctx->pc = 0x1ea064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 115)));
label_1ea068:
    // 0x1ea068: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ea068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ea06c:
    // 0x1ea06c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1ea06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1ea070:
    // 0x1ea070: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
label_1ea074:
    if (ctx->pc == 0x1EA074u) {
        ctx->pc = 0x1EA078u;
        goto label_1ea078;
    }
    ctx->pc = 0x1EA070u;
    {
        const bool branch_taken_0x1ea070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea070) {
            ctx->pc = 0x1EA2A0u;
            goto label_1ea2a0;
        }
    }
    ctx->pc = 0x1EA078u;
label_1ea078:
    // 0x1ea078: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea07c:
    // 0x1ea07c: 0x846210a6  lh          $v0, 0x10A6($v1)
    ctx->pc = 0x1ea07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_1ea080:
    // 0x1ea080: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ea080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1ea084:
    // 0x1ea084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ea084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ea088:
    // 0x1ea088: 0x4400085  bltz        $v0, . + 4 + (0x85 << 2)
label_1ea08c:
    if (ctx->pc == 0x1EA08Cu) {
        ctx->pc = 0x1EA090u;
        goto label_1ea090;
    }
    ctx->pc = 0x1EA088u;
    {
        const bool branch_taken_0x1ea088 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ea088) {
            ctx->pc = 0x1EA2A0u;
            goto label_1ea2a0;
        }
    }
    ctx->pc = 0x1EA090u;
label_1ea090:
    // 0x1ea090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea094:
    // 0x1ea094: 0x0  nop
    ctx->pc = 0x1ea094u;
    // NOP
label_1ea098:
    // 0x1ea098: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ea098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1ea09c:
    // 0x1ea09c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea0a0:
    // 0x1ea0a0: 0x0  nop
    ctx->pc = 0x1ea0a0u;
    // NOP
label_1ea0a4:
    // 0x1ea0a4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ea0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1ea0a8:
    // 0x1ea0a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea0ac:
    // 0x1ea0ac: 0x0  nop
    ctx->pc = 0x1ea0acu;
    // NOP
label_1ea0b0:
    // 0x1ea0b0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1ea0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1ea0b4:
    // 0x1ea0b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1ea0b8:
    // 0x1ea0b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ea0b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea0bc:
    // 0x1ea0bc: 0x0  nop
    ctx->pc = 0x1ea0bcu;
    // NOP
label_1ea0c0:
    // 0x1ea0c0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1ea0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1ea0c4:
    // 0x1ea0c4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea0c8:
    // 0x1ea0c8: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x1ea0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1ea0cc:
    // 0x1ea0cc: 0x94c200aa  lhu         $v0, 0xAA($a2)
    ctx->pc = 0x1ea0ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 170)));
label_1ea0d0:
    // 0x1ea0d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1ea0d4:
    // 0x1ea0d4: 0x30560004  andi        $s6, $v0, 0x4
    ctx->pc = 0x1ea0d4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1ea0d8:
    // 0x1ea0d8: 0x12c0004b  beqz        $s6, . + 4 + (0x4B << 2)
label_1ea0dc:
    if (ctx->pc == 0x1EA0DCu) {
        ctx->pc = 0x1EA0E0u;
        goto label_1ea0e0;
    }
    ctx->pc = 0x1EA0D8u;
    {
        const bool branch_taken_0x1ea0d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea0d8) {
            ctx->pc = 0x1EA208u;
            goto label_1ea208;
        }
    }
    ctx->pc = 0x1EA0E0u;
label_1ea0e0:
    // 0x1ea0e0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ea0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1ea0e4:
    // 0x1ea0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea0e8:
    // 0x1ea0e8: 0x0  nop
    ctx->pc = 0x1ea0e8u;
    // NOP
label_1ea0ec:
    // 0x1ea0ec: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ea0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1ea0f0:
    // 0x1ea0f0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea0f4:
    // 0x1ea0f4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ea0f8:
    // 0x1ea0f8: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x1ea0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1ea0fc:
    // 0x1ea0fc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1ea0fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1ea100:
    // 0x1ea100: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1ea100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_1ea104:
    // 0x1ea104: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1ea104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ea108:
    // 0x1ea108: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x1ea108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
label_1ea10c:
    // 0x1ea10c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ea110:
    // 0x1ea110: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x1ea110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1ea114:
    // 0x1ea114: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x1ea114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
label_1ea118:
    // 0x1ea118: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea118u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ea11c:
    // 0x1ea11c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ea120:
    // 0x1ea120: 0xc062f5c  jal         func_18BD70
label_1ea124:
    if (ctx->pc == 0x1EA124u) {
        ctx->pc = 0x1EA128u;
        goto label_1ea128;
    }
    ctx->pc = 0x1EA120u;
    SET_GPR_U32(ctx, 31, 0x1EA128u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA120u, 0x1EA128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA128u;
label_1ea128:
    // 0x1ea128: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea128u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea12c:
    // 0x1ea12c: 0xc0630a8  jal         func_18C2A0
label_1ea130:
    if (ctx->pc == 0x1EA130u) {
        ctx->pc = 0x1EA134u;
        goto label_1ea134;
    }
    ctx->pc = 0x1EA12Cu;
    SET_GPR_U32(ctx, 31, 0x1EA134u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA12Cu, 0x1EA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA134u;
label_1ea134:
    // 0x1ea134: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x1ea134u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea138:
    // 0x1ea138: 0x8d090130  lw          $t1, 0x130($t0)
    ctx->pc = 0x1ea138u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
label_1ea13c:
    // 0x1ea13c: 0x25220280  addiu       $v0, $t1, 0x280
    ctx->pc = 0x1ea13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 640));
label_1ea140:
    // 0x1ea140: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea144:
    // 0x1ea144: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1ea148:
    // 0x1ea148: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ea14c:
    // 0x1ea14c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1ea150:
    // 0x1ea150: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ea154:
    // 0x1ea154: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ea158:
    // 0x1ea158: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x1ea158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
label_1ea15c:
    // 0x1ea15c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea15cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ea160:
    // 0x1ea160: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ea164:
    // 0x1ea164: 0xc062f5c  jal         func_18BD70
label_1ea168:
    if (ctx->pc == 0x1EA168u) {
        ctx->pc = 0x1EA16Cu;
        goto label_1ea16c;
    }
    ctx->pc = 0x1EA164u;
    SET_GPR_U32(ctx, 31, 0x1EA16Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA164u, 0x1EA16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA16Cu;
label_1ea16c:
    // 0x1ea16c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea16cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea170:
    // 0x1ea170: 0xc0630a8  jal         func_18C2A0
label_1ea174:
    if (ctx->pc == 0x1EA174u) {
        ctx->pc = 0x1EA178u;
        goto label_1ea178;
    }
    ctx->pc = 0x1EA170u;
    SET_GPR_U32(ctx, 31, 0x1EA178u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA170u, 0x1EA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA178u;
label_1ea178:
    // 0x1ea178: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea17c:
    // 0x1ea17c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ea180:
    // 0x1ea180: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1ea180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1ea184:
    // 0x1ea184: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea188:
    // 0x1ea188: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1ea18c:
    // 0x1ea18c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ea190:
    // 0x1ea190: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1ea194:
    // 0x1ea194: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ea198:
    // 0x1ea198: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea198u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ea19c:
    // 0x1ea19c: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x1ea19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
label_1ea1a0:
    // 0x1ea1a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea1a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ea1a4:
    // 0x1ea1a4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ea1a8:
    // 0x1ea1a8: 0xc062f5c  jal         func_18BD70
label_1ea1ac:
    if (ctx->pc == 0x1EA1ACu) {
        ctx->pc = 0x1EA1B0u;
        goto label_1ea1b0;
    }
    ctx->pc = 0x1EA1A8u;
    SET_GPR_U32(ctx, 31, 0x1EA1B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA1A8u, 0x1EA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1B0u;
label_1ea1b0:
    // 0x1ea1b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea1b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea1b4:
    // 0x1ea1b4: 0xc0630a8  jal         func_18C2A0
label_1ea1b8:
    if (ctx->pc == 0x1EA1B8u) {
        ctx->pc = 0x1EA1BCu;
        goto label_1ea1bc;
    }
    ctx->pc = 0x1EA1B4u;
    SET_GPR_U32(ctx, 31, 0x1EA1BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA1B4u, 0x1EA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1BCu;
label_1ea1bc:
    // 0x1ea1bc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea1c0:
    // 0x1ea1c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ea1c4:
    // 0x1ea1c4: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x1ea1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_1ea1c8:
    // 0x1ea1c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea1cc:
    // 0x1ea1cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1ea1d0:
    // 0x1ea1d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ea1d4:
    // 0x1ea1d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1ea1d8:
    // 0x1ea1d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ea1dc:
    // 0x1ea1dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea1dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ea1e0:
    // 0x1ea1e0: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x1ea1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
label_1ea1e4:
    // 0x1ea1e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea1e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ea1e8:
    // 0x1ea1e8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ea1ec:
    // 0x1ea1ec: 0xc062f5c  jal         func_18BD70
label_1ea1f0:
    if (ctx->pc == 0x1EA1F0u) {
        ctx->pc = 0x1EA1F4u;
        goto label_1ea1f4;
    }
    ctx->pc = 0x1EA1ECu;
    SET_GPR_U32(ctx, 31, 0x1EA1F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA1ECu, 0x1EA1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1F4u;
label_1ea1f4:
    // 0x1ea1f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea1f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea1f8:
    // 0x1ea1f8: 0xc0630a8  jal         func_18C2A0
label_1ea1fc:
    if (ctx->pc == 0x1EA1FCu) {
        ctx->pc = 0x1EA200u;
        goto label_1ea200;
    }
    ctx->pc = 0x1EA1F8u;
    SET_GPR_U32(ctx, 31, 0x1EA200u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA1F8u, 0x1EA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA200u;
label_1ea200:
    // 0x1ea200: 0x10000027  b           . + 4 + (0x27 << 2)
label_1ea204:
    if (ctx->pc == 0x1EA204u) {
        ctx->pc = 0x1EA208u;
        goto label_1ea208;
    }
    ctx->pc = 0x1EA200u;
    {
        const bool branch_taken_0x1ea200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea200) {
            ctx->pc = 0x1EA2A0u;
            goto label_1ea2a0;
        }
    }
    ctx->pc = 0x1EA208u;
label_1ea208:
    // 0x1ea208: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea20c:
    // 0x1ea20c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ea210:
    // 0x1ea210: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1ea210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1ea214:
    // 0x1ea214: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea218:
    // 0x1ea218: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1ea21c:
    // 0x1ea21c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ea220:
    // 0x1ea220: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1ea224:
    // 0x1ea224: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ea228:
    // 0x1ea228: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ea22c:
    // 0x1ea22c: 0x24040e0f  addiu       $a0, $zero, 0xE0F
    ctx->pc = 0x1ea22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3599));
label_1ea230:
    // 0x1ea230: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea230u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ea234:
    // 0x1ea234: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ea238:
    // 0x1ea238: 0xc062f5c  jal         func_18BD70
label_1ea23c:
    if (ctx->pc == 0x1EA23Cu) {
        ctx->pc = 0x1EA240u;
        goto label_1ea240;
    }
    ctx->pc = 0x1EA238u;
    SET_GPR_U32(ctx, 31, 0x1EA240u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA238u, 0x1EA240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA240u;
label_1ea240:
    // 0x1ea240: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea244:
    // 0x1ea244: 0xc0630a8  jal         func_18C2A0
label_1ea248:
    if (ctx->pc == 0x1EA248u) {
        ctx->pc = 0x1EA24Cu;
        goto label_1ea24c;
    }
    ctx->pc = 0x1EA244u;
    SET_GPR_U32(ctx, 31, 0x1EA24Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA244u, 0x1EA24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA24Cu;
label_1ea24c:
    // 0x1ea24c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1ea250:
    // 0x1ea250: 0xac220a90  sw          $v0, 0xA90($at)
    ctx->pc = 0x1ea250u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2704), GPR_U32(ctx, 2));
label_1ea254:
    // 0x1ea254: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea258:
    // 0x1ea258: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ea25c:
    // 0x1ea25c: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_1ea260:
    // 0x1ea260: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea264:
    // 0x1ea264: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1ea268:
    // 0x1ea268: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ea26c:
    // 0x1ea26c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1ea270:
    // 0x1ea270: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ea274:
    // 0x1ea274: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ea278:
    // 0x1ea278: 0x24040e0f  addiu       $a0, $zero, 0xE0F
    ctx->pc = 0x1ea278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3599));
label_1ea27c:
    // 0x1ea27c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea27cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ea280:
    // 0x1ea280: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ea284:
    // 0x1ea284: 0xc062f5c  jal         func_18BD70
label_1ea288:
    if (ctx->pc == 0x1EA288u) {
        ctx->pc = 0x1EA28Cu;
        goto label_1ea28c;
    }
    ctx->pc = 0x1EA284u;
    SET_GPR_U32(ctx, 31, 0x1EA28Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA284u, 0x1EA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA28Cu;
label_1ea28c:
    // 0x1ea28c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea28cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea290:
    // 0x1ea290: 0xc0630a8  jal         func_18C2A0
label_1ea294:
    if (ctx->pc == 0x1EA294u) {
        ctx->pc = 0x1EA298u;
        goto label_1ea298;
    }
    ctx->pc = 0x1EA290u;
    SET_GPR_U32(ctx, 31, 0x1EA298u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA290u, 0x1EA298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA298u;
label_1ea298:
    // 0x1ea298: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1ea29c:
    // 0x1ea29c: 0xac220a94  sw          $v0, 0xA94($at)
    ctx->pc = 0x1ea29cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2708), GPR_U32(ctx, 2));
label_1ea2a0:
    // 0x1ea2a0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea2a4:
    // 0x1ea2a4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1ea2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1ea2a8:
    // 0x1ea2a8: 0x24540120  addiu       $s4, $v0, 0x120
    ctx->pc = 0x1ea2a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1ea2ac:
    // 0x1ea2ac: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea2b0:
    // 0x1ea2b0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1ea2b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1ea2b4:
    // 0x1ea2b4: 0xc079140  jal         func_1E4500
label_1ea2b8:
    if (ctx->pc == 0x1EA2B8u) {
        ctx->pc = 0x1EA2BCu;
        goto label_1ea2bc;
    }
    ctx->pc = 0x1EA2B4u;
    SET_GPR_U32(ctx, 31, 0x1EA2BCu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x1EA2B4u, 0x1EA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2BCu;
label_1ea2bc:
    // 0x1ea2bc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea2c0:
    // 0x1ea2c0: 0x8c520058  lw          $s2, 0x58($v0)
    ctx->pc = 0x1ea2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1ea2c4:
    // 0x1ea2c4: 0x26540510  addiu       $s4, $s2, 0x510
    ctx->pc = 0x1ea2c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1296));
label_1ea2c8:
    // 0x1ea2c8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea2cc:
    // 0x1ea2cc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1ea2ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1ea2d0:
    // 0x1ea2d0: 0xc079140  jal         func_1E4500
label_1ea2d4:
    if (ctx->pc == 0x1EA2D4u) {
        ctx->pc = 0x1EA2D8u;
        goto label_1ea2d8;
    }
    ctx->pc = 0x1EA2D0u;
    SET_GPR_U32(ctx, 31, 0x1EA2D8u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x1EA2D0u, 0x1EA2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2D8u;
label_1ea2d8:
    // 0x1ea2d8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea2dc:
    // 0x1ea2dc: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ea2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1ea2e0:
    // 0x1ea2e0: 0x249405a0  addiu       $s4, $a0, 0x5A0
    ctx->pc = 0x1ea2e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
label_1ea2e4:
    // 0x1ea2e4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea2e8:
    // 0x1ea2e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea2e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea2ec:
    // 0x1ea2ec: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1ea2ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1ea2f0:
    // 0x1ea2f0: 0xc079140  jal         func_1E4500
label_1ea2f4:
    if (ctx->pc == 0x1EA2F4u) {
        ctx->pc = 0x1EA2F8u;
        goto label_1ea2f8;
    }
    ctx->pc = 0x1EA2F0u;
    SET_GPR_U32(ctx, 31, 0x1EA2F8u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x1EA2F0u, 0x1EA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2F8u;
label_1ea2f8:
    // 0x1ea2f8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea2fc:
    // 0x1ea2fc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1ea2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1ea300:
    // 0x1ea300: 0x245402d0  addiu       $s4, $v0, 0x2D0
    ctx->pc = 0x1ea300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
label_1ea304:
    // 0x1ea304: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea308:
    // 0x1ea308: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea30c:
    // 0x1ea30c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1ea30cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1ea310:
    // 0x1ea310: 0xc079140  jal         func_1E4500
label_1ea314:
    if (ctx->pc == 0x1EA314u) {
        ctx->pc = 0x1EA318u;
        goto label_1ea318;
    }
    ctx->pc = 0x1EA310u;
    SET_GPR_U32(ctx, 31, 0x1EA318u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x1EA310u, 0x1EA318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA318u;
label_1ea318:
    // 0x1ea318: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea31c:
    // 0x1ea31c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea31cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea320:
    // 0x1ea320: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ea320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ea324:
    // 0x1ea324: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1ea324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ea328:
    // 0x1ea328: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ea328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ea32c:
    // 0x1ea32c: 0xc07e3d0  jal         func_1F8F40
label_1ea330:
    if (ctx->pc == 0x1EA330u) {
        ctx->pc = 0x1EA334u;
        goto label_1ea334;
    }
    ctx->pc = 0x1EA32Cu;
    SET_GPR_U32(ctx, 31, 0x1EA334u);
    ctx->pc = 0x1F8F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8F40u, 0x1EA32Cu, 0x1EA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA334u;
label_1ea334:
    // 0x1ea334: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea338:
    // 0x1ea338: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ea338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ea33c:
    // 0x1ea33c: 0xc07e67c  jal         func_1F99F0
label_1ea340:
    if (ctx->pc == 0x1EA340u) {
        ctx->pc = 0x1EA344u;
        goto label_1ea344;
    }
    ctx->pc = 0x1EA33Cu;
    SET_GPR_U32(ctx, 31, 0x1EA344u);
    ctx->pc = 0x1F99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99F0u, 0x1EA33Cu, 0x1EA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA344u;
label_1ea344:
    // 0x1ea344: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea348:
    // 0x1ea348: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1ea348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea34c:
    // 0x1ea34c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ea34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea350:
    // 0x1ea350: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ea350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea354:
    // 0x1ea354: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1ea354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ea358:
    // 0x1ea358: 0x8c860234  lw          $a2, 0x234($a0)
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
label_1ea35c:
    // 0x1ea35c: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x1ea35cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1ea360:
    // 0x1ea360: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea364:
    // 0x1ea364: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x1ea364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_1ea368:
    // 0x1ea368: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1ea368u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea36c:
    // 0x1ea36c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea370:
    // 0x1ea370: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea374:
    // 0x1ea374: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ea378:
    // 0x1ea378: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea37c:
    // 0x1ea37c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea380:
    // 0x1ea380: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea384:
    // 0x1ea384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea388:
    // 0x1ea388: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x1ea388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_1ea38c:
    // 0x1ea38c: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1ea38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_1ea390:
    // 0x1ea390: 0xc06b06c  jal         func_1AC1B0
label_1ea394:
    if (ctx->pc == 0x1EA394u) {
        ctx->pc = 0x1EA398u;
        goto label_1ea398;
    }
    ctx->pc = 0x1EA390u;
    SET_GPR_U32(ctx, 31, 0x1EA398u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x1EA390u, 0x1EA398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA398u;
label_1ea398:
    // 0x1ea398: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea39c:
    // 0x1ea39c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea3a0:
    // 0x1ea3a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ea3a4:
    // 0x1ea3a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea3a8:
    // 0x1ea3a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea3ac:
    // 0x1ea3ac: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea3b0:
    // 0x1ea3b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ea3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea3b4:
    // 0x1ea3b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea3b8:
    // 0x1ea3b8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea3bc:
    // 0x1ea3bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea3c0:
    // 0x1ea3c0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea3c4:
    // 0x1ea3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea3c8:
    // 0x1ea3c8: 0x8c45025c  lw          $a1, 0x25C($v0)
    ctx->pc = 0x1ea3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_1ea3cc:
    // 0x1ea3cc: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x1ea3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
label_1ea3d0:
    // 0x1ea3d0: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x1ea3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1ea3d4:
    // 0x1ea3d4: 0xc06b07c  jal         func_1AC1F0
label_1ea3d8:
    if (ctx->pc == 0x1EA3D8u) {
        ctx->pc = 0x1EA3DCu;
        goto label_1ea3dc;
    }
    ctx->pc = 0x1EA3D4u;
    SET_GPR_U32(ctx, 31, 0x1EA3DCu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x1EA3D4u, 0x1EA3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3DCu;
label_1ea3dc:
    // 0x1ea3dc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ea3dcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea3e0:
    // 0x1ea3e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea3e4:
    // 0x1ea3e4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea3e8:
    // 0x1ea3e8: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1ea3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea3ec:
    // 0x1ea3ec: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1ea3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea3f0:
    // 0x1ea3f0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1ea3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1ea3f4:
    // 0x1ea3f4: 0x8c55025c  lw          $s5, 0x25C($v0)
    ctx->pc = 0x1ea3f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_1ea3f8:
    // 0x1ea3f8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1ea3f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1ea3fc:
    // 0x1ea3fc: 0xc074974  jal         func_1D25D0
label_1ea400:
    if (ctx->pc == 0x1EA400u) {
        ctx->pc = 0x1EA404u;
        goto label_1ea404;
    }
    ctx->pc = 0x1EA3FCu;
    SET_GPR_U32(ctx, 31, 0x1EA404u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x1EA3FCu, 0x1EA404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA404u;
label_1ea404:
    // 0x1ea404: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea408:
    // 0x1ea408: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea40c:
    // 0x1ea40c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea410:
    // 0x1ea410: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1ea410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ea414:
    // 0x1ea414: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea418:
    // 0x1ea418: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea41c:
    // 0x1ea41c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea420:
    // 0x1ea420: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea424:
    // 0x1ea424: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea428:
    // 0x1ea428: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea42c:
    // 0x1ea42c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea430:
    // 0x1ea430: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea434:
    // 0x1ea434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea438:
    // 0x1ea438: 0x8c45024c  lw          $a1, 0x24C($v0)
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
label_1ea43c:
    // 0x1ea43c: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x1ea43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
label_1ea440:
    // 0x1ea440: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x1ea440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1ea444:
    // 0x1ea444: 0xc06b07c  jal         func_1AC1F0
label_1ea448:
    if (ctx->pc == 0x1EA448u) {
        ctx->pc = 0x1EA44Cu;
        goto label_1ea44c;
    }
    ctx->pc = 0x1EA444u;
    SET_GPR_U32(ctx, 31, 0x1EA44Cu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x1EA444u, 0x1EA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA44Cu;
label_1ea44c:
    // 0x1ea44c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea450:
    // 0x1ea450: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1ea450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea454:
    // 0x1ea454: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea458:
    // 0x1ea458: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea45c:
    // 0x1ea45c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea460:
    // 0x1ea460: 0x8c55024c  lw          $s5, 0x24C($v0)
    ctx->pc = 0x1ea460u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
label_1ea464:
    // 0x1ea464: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1ea464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1ea468:
    // 0x1ea468: 0xc074974  jal         func_1D25D0
label_1ea46c:
    if (ctx->pc == 0x1EA46Cu) {
        ctx->pc = 0x1EA470u;
        goto label_1ea470;
    }
    ctx->pc = 0x1EA468u;
    SET_GPR_U32(ctx, 31, 0x1EA470u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x1EA468u, 0x1EA470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA470u;
label_1ea470:
    // 0x1ea470: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea474:
    // 0x1ea474: 0x8c44024c  lw          $a0, 0x24C($v0)
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
label_1ea478:
    // 0x1ea478: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x1ea478u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1ea47c:
    // 0x1ea47c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea480:
    // 0x1ea480: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ea480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ea484:
    // 0x1ea484: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ea484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea488:
    // 0x1ea488: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea48c:
    // 0x1ea48c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ea48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ea490:
    // 0x1ea490: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ea490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea494:
    // 0x1ea494: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1ea494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1ea498:
    // 0x1ea498: 0xc0749a4  jal         func_1D2690
label_1ea49c:
    if (ctx->pc == 0x1EA49Cu) {
        ctx->pc = 0x1EA4A0u;
        goto label_1ea4a0;
    }
    ctx->pc = 0x1EA498u;
    SET_GPR_U32(ctx, 31, 0x1EA4A0u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x1EA498u, 0x1EA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4A0u;
label_1ea4a0:
    // 0x1ea4a0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea4a4:
    // 0x1ea4a4: 0x8c550250  lw          $s5, 0x250($v0)
    ctx->pc = 0x1ea4a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_1ea4a8:
    // 0x1ea4a8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea4ac:
    // 0x1ea4ac: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1ea4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1ea4b0:
    // 0x1ea4b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ea4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea4b4:
    // 0x1ea4b4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea4b8:
    // 0x1ea4b8: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1ea4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1ea4bc:
    // 0x1ea4bc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ea4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea4c0:
    // 0x1ea4c0: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1ea4c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1ea4c4:
    // 0x1ea4c4: 0xc0749a4  jal         func_1D2690
label_1ea4c8:
    if (ctx->pc == 0x1EA4C8u) {
        ctx->pc = 0x1EA4CCu;
        goto label_1ea4cc;
    }
    ctx->pc = 0x1EA4C4u;
    SET_GPR_U32(ctx, 31, 0x1EA4CCu);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x1EA4C4u, 0x1EA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4CCu;
label_1ea4cc:
    // 0x1ea4cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ea4ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea4d0:
    // 0x1ea4d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea4d4:
    // 0x1ea4d4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea4d8:
    // 0x1ea4d8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1ea4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ea4dc:
    // 0x1ea4dc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ea4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea4e0:
    // 0x1ea4e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea4e4:
    // 0x1ea4e4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea4e8:
    // 0x1ea4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea4ec:
    // 0x1ea4ec: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x1ea4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_1ea4f0:
    // 0x1ea4f0: 0xc06b0d4  jal         func_1AC350
label_1ea4f4:
    if (ctx->pc == 0x1EA4F4u) {
        ctx->pc = 0x1EA4F8u;
        goto label_1ea4f8;
    }
    ctx->pc = 0x1EA4F0u;
    SET_GPR_U32(ctx, 31, 0x1EA4F8u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x1EA4F0u, 0x1EA4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4F8u;
label_1ea4f8:
    // 0x1ea4f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea4fc:
    // 0x1ea4fc: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1ea4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea500:
    // 0x1ea500: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ea500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1ea504:
    // 0x1ea504: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1ea504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ea508:
    // 0x1ea508: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ea50c:
    // 0x1ea50c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea510:
    // 0x1ea510: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ea510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ea514:
    // 0x1ea514: 0xac80021c  sw          $zero, 0x21C($a0)
    ctx->pc = 0x1ea514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 0));
label_1ea518:
    // 0x1ea518: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea51c:
    // 0x1ea51c: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x1ea51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_1ea520:
    // 0x1ea520: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1ea520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_1ea524:
    // 0x1ea524: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ea524u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1ea528:
    // 0x1ea528: 0x4a0005a  bltz        $a1, . + 4 + (0x5A << 2)
label_1ea52c:
    if (ctx->pc == 0x1EA52Cu) {
        ctx->pc = 0x1EA530u;
        goto label_1ea530;
    }
    ctx->pc = 0x1EA528u;
    {
        const bool branch_taken_0x1ea528 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1ea528) {
            ctx->pc = 0x1EA694u;
            goto label_1ea694;
        }
    }
    ctx->pc = 0x1EA530u;
label_1ea530:
    // 0x1ea530: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea534:
    // 0x1ea534: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ea534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1ea538:
    // 0x1ea538: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1ea538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1ea53c:
    // 0x1ea53c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1ea53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_1ea540:
    // 0x1ea540: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
label_1ea544:
    if (ctx->pc == 0x1EA544u) {
        ctx->pc = 0x1EA548u;
        goto label_1ea548;
    }
    ctx->pc = 0x1EA540u;
    {
        const bool branch_taken_0x1ea540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea540) {
            ctx->pc = 0x1EA694u;
            goto label_1ea694;
        }
    }
    ctx->pc = 0x1EA548u;
label_1ea548:
    // 0x1ea548: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea54c:
    // 0x1ea54c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea550:
    // 0x1ea550: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea554:
    // 0x1ea554: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea558:
    // 0x1ea558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea55c:
    // 0x1ea55c: 0x8c57023c  lw          $s7, 0x23C($v0)
    ctx->pc = 0x1ea55cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_1ea560:
    // 0x1ea560: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea564:
    // 0x1ea564: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea568:
    // 0x1ea568: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ea56c:
    // 0x1ea56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea570:
    // 0x1ea570: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea574:
    // 0x1ea574: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea578:
    // 0x1ea578: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea57c:
    // 0x1ea57c: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x1ea57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_1ea580:
    // 0x1ea580: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1ea580u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_1ea584:
    // 0x1ea584: 0xc06b06c  jal         func_1AC1B0
label_1ea588:
    if (ctx->pc == 0x1EA588u) {
        ctx->pc = 0x1EA58Cu;
        goto label_1ea58c;
    }
    ctx->pc = 0x1EA584u;
    SET_GPR_U32(ctx, 31, 0x1EA58Cu);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x1EA584u, 0x1EA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA58Cu;
label_1ea58c:
    // 0x1ea58c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea590:
    // 0x1ea590: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ea590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea594:
    // 0x1ea594: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea598:
    // 0x1ea598: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea59c:
    // 0x1ea59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea5a0:
    // 0x1ea5a0: 0x8c560274  lw          $s6, 0x274($v0)
    ctx->pc = 0x1ea5a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_1ea5a4:
    // 0x1ea5a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea5a8:
    // 0x1ea5a8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea5ac:
    // 0x1ea5ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ea5b0:
    // 0x1ea5b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea5b4:
    // 0x1ea5b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea5b8:
    // 0x1ea5b8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea5bc:
    // 0x1ea5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea5c0:
    // 0x1ea5c0: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x1ea5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1ea5c4:
    // 0x1ea5c4: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x1ea5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_1ea5c8:
    // 0x1ea5c8: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1ea5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1ea5cc:
    // 0x1ea5cc: 0xc06b07c  jal         func_1AC1F0
label_1ea5d0:
    if (ctx->pc == 0x1EA5D0u) {
        ctx->pc = 0x1EA5D4u;
        goto label_1ea5d4;
    }
    ctx->pc = 0x1EA5CCu;
    SET_GPR_U32(ctx, 31, 0x1EA5D4u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x1EA5CCu, 0x1EA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5D4u;
label_1ea5d4:
    // 0x1ea5d4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea5d8:
    // 0x1ea5d8: 0x8c560274  lw          $s6, 0x274($v0)
    ctx->pc = 0x1ea5d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_1ea5dc:
    // 0x1ea5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea5e0:
    // 0x1ea5e0: 0x0  nop
    ctx->pc = 0x1ea5e0u;
    // NOP
label_1ea5e4:
    // 0x1ea5e4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ea5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1ea5e8:
    // 0x1ea5e8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ea5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1ea5ec:
    // 0x1ea5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea5f0:
    // 0x1ea5f0: 0x0  nop
    ctx->pc = 0x1ea5f0u;
    // NOP
label_1ea5f4:
    // 0x1ea5f4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1ea5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1ea5f8:
    // 0x1ea5f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea5fc:
    // 0x1ea5fc: 0x0  nop
    ctx->pc = 0x1ea5fcu;
    // NOP
label_1ea600:
    // 0x1ea600: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1ea600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1ea604:
    // 0x1ea604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ea604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ea608:
    // 0x1ea608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea60c:
    // 0x1ea60c: 0x0  nop
    ctx->pc = 0x1ea60cu;
    // NOP
label_1ea610:
    // 0x1ea610: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ea610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1ea614:
    // 0x1ea614: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea618:
    // 0x1ea618: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ea618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ea61c:
    // 0x1ea61c: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x1ea61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_1ea620:
    // 0x1ea620: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ea624:
    // 0x1ea624: 0xc040bf4  jal         func_102FD0
label_1ea628:
    if (ctx->pc == 0x1EA628u) {
        ctx->pc = 0x1EA62Cu;
        goto label_1ea62c;
    }
    ctx->pc = 0x1EA624u;
    SET_GPR_U32(ctx, 31, 0x1EA62Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1EA62Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1EA62Cu) { return; }
    ctx->pc = 0x1EA62Cu;
label_1ea62c:
    // 0x1ea62c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea630:
    // 0x1ea630: 0x8c470274  lw          $a3, 0x274($v0)
    ctx->pc = 0x1ea630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_1ea634:
    // 0x1ea634: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea638:
    // 0x1ea638: 0x8c860278  lw          $a2, 0x278($a0)
    ctx->pc = 0x1ea638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_1ea63c:
    // 0x1ea63c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1ea63cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1ea640:
    // 0x1ea640: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1ea640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1ea644:
    // 0x1ea644: 0x27c20970  addiu       $v0, $fp, 0x970
    ctx->pc = 0x1ea644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 2416));
label_1ea648:
    // 0x1ea648: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ea648u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea64c:
    // 0x1ea64c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1ea64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ea650:
    // 0x1ea650: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1ea650u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ea654:
    // 0x1ea654: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1ea654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ea658:
    // 0x1ea658: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea65c:
    // 0x1ea65c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x1ea65cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea660:
    // 0x1ea660: 0xc074efc  jal         func_1D3BF0
label_1ea664:
    if (ctx->pc == 0x1EA664u) {
        ctx->pc = 0x1EA668u;
        goto label_1ea668;
    }
    ctx->pc = 0x1EA660u;
    SET_GPR_U32(ctx, 31, 0x1EA668u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x1EA660u, 0x1EA668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA668u;
label_1ea668:
    // 0x1ea668: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ea668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ea66c:
    // 0x1ea66c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1ea66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ea670:
    // 0x1ea670: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ea670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ea674:
    // 0x1ea674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea678:
    // 0x1ea678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea67c:
    // 0x1ea67c: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x1ea67cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea680:
    // 0x1ea680: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1ea680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1ea684:
    // 0x1ea684: 0x2486021c  addiu       $a2, $a0, 0x21C
    ctx->pc = 0x1ea684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
label_1ea688:
    // 0x1ea688: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1ea688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1ea68c:
    // 0x1ea68c: 0xc06b0d4  jal         func_1AC350
label_1ea690:
    if (ctx->pc == 0x1EA690u) {
        ctx->pc = 0x1EA694u;
        goto label_1ea694;
    }
    ctx->pc = 0x1EA68Cu;
    SET_GPR_U32(ctx, 31, 0x1EA694u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x1EA68Cu, 0x1EA694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA694u;
label_1ea694:
    // 0x1ea694: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1ea694u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ea698:
    // 0x1ea698: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ea698u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ea69c:
    // 0x1ea69c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ea69cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ea6a0:
    // 0x1ea6a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ea6a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ea6a4:
    // 0x1ea6a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ea6a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ea6a8:
    // 0x1ea6a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea6a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ea6ac:
    // 0x1ea6ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ea6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea6b0:
    // 0x1ea6b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea6b4:
    // 0x1ea6b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea6b8:
    // 0x1ea6b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea6bc:
    // 0x1ea6bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1ea6bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ea6c0:
    // 0x1ea6c0: 0x3e00008  jr          $ra
label_1ea6c4:
    if (ctx->pc == 0x1EA6C4u) {
        ctx->pc = 0x1EA6C8u;
        goto label_fallthrough_0x1ea6c0;
    }
    ctx->pc = 0x1EA6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ea6c0:
    ctx->pc = 0x1EA6C8u;
}
