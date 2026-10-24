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

// Function: Em05_R1_warp
// Address: 0x208ab0 - 0x2094b4
void Em05_R1_warp_0x208ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_warp_0x208ab0");
#endif

    switch (ctx->pc) {
        case 0x208ab0u: goto label_208ab0;
        case 0x208ab4u: goto label_208ab4;
        case 0x208ab8u: goto label_208ab8;
        case 0x208abcu: goto label_208abc;
        case 0x208ac0u: goto label_208ac0;
        case 0x208ac4u: goto label_208ac4;
        case 0x208ac8u: goto label_208ac8;
        case 0x208accu: goto label_208acc;
        case 0x208ad0u: goto label_208ad0;
        case 0x208ad4u: goto label_208ad4;
        case 0x208ad8u: goto label_208ad8;
        case 0x208adcu: goto label_208adc;
        case 0x208ae0u: goto label_208ae0;
        case 0x208ae4u: goto label_208ae4;
        case 0x208ae8u: goto label_208ae8;
        case 0x208aecu: goto label_208aec;
        case 0x208af0u: goto label_208af0;
        case 0x208af4u: goto label_208af4;
        case 0x208af8u: goto label_208af8;
        case 0x208afcu: goto label_208afc;
        case 0x208b00u: goto label_208b00;
        case 0x208b04u: goto label_208b04;
        case 0x208b08u: goto label_208b08;
        case 0x208b0cu: goto label_208b0c;
        case 0x208b10u: goto label_208b10;
        case 0x208b14u: goto label_208b14;
        case 0x208b18u: goto label_208b18;
        case 0x208b1cu: goto label_208b1c;
        case 0x208b20u: goto label_208b20;
        case 0x208b24u: goto label_208b24;
        case 0x208b28u: goto label_208b28;
        case 0x208b2cu: goto label_208b2c;
        case 0x208b30u: goto label_208b30;
        case 0x208b34u: goto label_208b34;
        case 0x208b38u: goto label_208b38;
        case 0x208b3cu: goto label_208b3c;
        case 0x208b40u: goto label_208b40;
        case 0x208b44u: goto label_208b44;
        case 0x208b48u: goto label_208b48;
        case 0x208b4cu: goto label_208b4c;
        case 0x208b50u: goto label_208b50;
        case 0x208b54u: goto label_208b54;
        case 0x208b58u: goto label_208b58;
        case 0x208b5cu: goto label_208b5c;
        case 0x208b60u: goto label_208b60;
        case 0x208b64u: goto label_208b64;
        case 0x208b68u: goto label_208b68;
        case 0x208b6cu: goto label_208b6c;
        case 0x208b70u: goto label_208b70;
        case 0x208b74u: goto label_208b74;
        case 0x208b78u: goto label_208b78;
        case 0x208b7cu: goto label_208b7c;
        case 0x208b80u: goto label_208b80;
        case 0x208b84u: goto label_208b84;
        case 0x208b88u: goto label_208b88;
        case 0x208b8cu: goto label_208b8c;
        case 0x208b90u: goto label_208b90;
        case 0x208b94u: goto label_208b94;
        case 0x208b98u: goto label_208b98;
        case 0x208b9cu: goto label_208b9c;
        case 0x208ba0u: goto label_208ba0;
        case 0x208ba4u: goto label_208ba4;
        case 0x208ba8u: goto label_208ba8;
        case 0x208bacu: goto label_208bac;
        case 0x208bb0u: goto label_208bb0;
        case 0x208bb4u: goto label_208bb4;
        case 0x208bb8u: goto label_208bb8;
        case 0x208bbcu: goto label_208bbc;
        case 0x208bc0u: goto label_208bc0;
        case 0x208bc4u: goto label_208bc4;
        case 0x208bc8u: goto label_208bc8;
        case 0x208bccu: goto label_208bcc;
        case 0x208bd0u: goto label_208bd0;
        case 0x208bd4u: goto label_208bd4;
        case 0x208bd8u: goto label_208bd8;
        case 0x208bdcu: goto label_208bdc;
        case 0x208be0u: goto label_208be0;
        case 0x208be4u: goto label_208be4;
        case 0x208be8u: goto label_208be8;
        case 0x208becu: goto label_208bec;
        case 0x208bf0u: goto label_208bf0;
        case 0x208bf4u: goto label_208bf4;
        case 0x208bf8u: goto label_208bf8;
        case 0x208bfcu: goto label_208bfc;
        case 0x208c00u: goto label_208c00;
        case 0x208c04u: goto label_208c04;
        case 0x208c08u: goto label_208c08;
        case 0x208c0cu: goto label_208c0c;
        case 0x208c10u: goto label_208c10;
        case 0x208c14u: goto label_208c14;
        case 0x208c18u: goto label_208c18;
        case 0x208c1cu: goto label_208c1c;
        case 0x208c20u: goto label_208c20;
        case 0x208c24u: goto label_208c24;
        case 0x208c28u: goto label_208c28;
        case 0x208c2cu: goto label_208c2c;
        case 0x208c30u: goto label_208c30;
        case 0x208c34u: goto label_208c34;
        case 0x208c38u: goto label_208c38;
        case 0x208c3cu: goto label_208c3c;
        case 0x208c40u: goto label_208c40;
        case 0x208c44u: goto label_208c44;
        case 0x208c48u: goto label_208c48;
        case 0x208c4cu: goto label_208c4c;
        case 0x208c50u: goto label_208c50;
        case 0x208c54u: goto label_208c54;
        case 0x208c58u: goto label_208c58;
        case 0x208c5cu: goto label_208c5c;
        case 0x208c60u: goto label_208c60;
        case 0x208c64u: goto label_208c64;
        case 0x208c68u: goto label_208c68;
        case 0x208c6cu: goto label_208c6c;
        case 0x208c70u: goto label_208c70;
        case 0x208c74u: goto label_208c74;
        case 0x208c78u: goto label_208c78;
        case 0x208c7cu: goto label_208c7c;
        case 0x208c80u: goto label_208c80;
        case 0x208c84u: goto label_208c84;
        case 0x208c88u: goto label_208c88;
        case 0x208c8cu: goto label_208c8c;
        case 0x208c90u: goto label_208c90;
        case 0x208c94u: goto label_208c94;
        case 0x208c98u: goto label_208c98;
        case 0x208c9cu: goto label_208c9c;
        case 0x208ca0u: goto label_208ca0;
        case 0x208ca4u: goto label_208ca4;
        case 0x208ca8u: goto label_208ca8;
        case 0x208cacu: goto label_208cac;
        case 0x208cb0u: goto label_208cb0;
        case 0x208cb4u: goto label_208cb4;
        case 0x208cb8u: goto label_208cb8;
        case 0x208cbcu: goto label_208cbc;
        case 0x208cc0u: goto label_208cc0;
        case 0x208cc4u: goto label_208cc4;
        case 0x208cc8u: goto label_208cc8;
        case 0x208cccu: goto label_208ccc;
        case 0x208cd0u: goto label_208cd0;
        case 0x208cd4u: goto label_208cd4;
        case 0x208cd8u: goto label_208cd8;
        case 0x208cdcu: goto label_208cdc;
        case 0x208ce0u: goto label_208ce0;
        case 0x208ce4u: goto label_208ce4;
        case 0x208ce8u: goto label_208ce8;
        case 0x208cecu: goto label_208cec;
        case 0x208cf0u: goto label_208cf0;
        case 0x208cf4u: goto label_208cf4;
        case 0x208cf8u: goto label_208cf8;
        case 0x208cfcu: goto label_208cfc;
        case 0x208d00u: goto label_208d00;
        case 0x208d04u: goto label_208d04;
        case 0x208d08u: goto label_208d08;
        case 0x208d0cu: goto label_208d0c;
        case 0x208d10u: goto label_208d10;
        case 0x208d14u: goto label_208d14;
        case 0x208d18u: goto label_208d18;
        case 0x208d1cu: goto label_208d1c;
        case 0x208d20u: goto label_208d20;
        case 0x208d24u: goto label_208d24;
        case 0x208d28u: goto label_208d28;
        case 0x208d2cu: goto label_208d2c;
        case 0x208d30u: goto label_208d30;
        case 0x208d34u: goto label_208d34;
        case 0x208d38u: goto label_208d38;
        case 0x208d3cu: goto label_208d3c;
        case 0x208d40u: goto label_208d40;
        case 0x208d44u: goto label_208d44;
        case 0x208d48u: goto label_208d48;
        case 0x208d4cu: goto label_208d4c;
        case 0x208d50u: goto label_208d50;
        case 0x208d54u: goto label_208d54;
        case 0x208d58u: goto label_208d58;
        case 0x208d5cu: goto label_208d5c;
        case 0x208d60u: goto label_208d60;
        case 0x208d64u: goto label_208d64;
        case 0x208d68u: goto label_208d68;
        case 0x208d6cu: goto label_208d6c;
        case 0x208d70u: goto label_208d70;
        case 0x208d74u: goto label_208d74;
        case 0x208d78u: goto label_208d78;
        case 0x208d7cu: goto label_208d7c;
        case 0x208d80u: goto label_208d80;
        case 0x208d84u: goto label_208d84;
        case 0x208d88u: goto label_208d88;
        case 0x208d8cu: goto label_208d8c;
        case 0x208d90u: goto label_208d90;
        case 0x208d94u: goto label_208d94;
        case 0x208d98u: goto label_208d98;
        case 0x208d9cu: goto label_208d9c;
        case 0x208da0u: goto label_208da0;
        case 0x208da4u: goto label_208da4;
        case 0x208da8u: goto label_208da8;
        case 0x208dacu: goto label_208dac;
        case 0x208db0u: goto label_208db0;
        case 0x208db4u: goto label_208db4;
        case 0x208db8u: goto label_208db8;
        case 0x208dbcu: goto label_208dbc;
        case 0x208dc0u: goto label_208dc0;
        case 0x208dc4u: goto label_208dc4;
        case 0x208dc8u: goto label_208dc8;
        case 0x208dccu: goto label_208dcc;
        case 0x208dd0u: goto label_208dd0;
        case 0x208dd4u: goto label_208dd4;
        case 0x208dd8u: goto label_208dd8;
        case 0x208ddcu: goto label_208ddc;
        case 0x208de0u: goto label_208de0;
        case 0x208de4u: goto label_208de4;
        case 0x208de8u: goto label_208de8;
        case 0x208decu: goto label_208dec;
        case 0x208df0u: goto label_208df0;
        case 0x208df4u: goto label_208df4;
        case 0x208df8u: goto label_208df8;
        case 0x208dfcu: goto label_208dfc;
        case 0x208e00u: goto label_208e00;
        case 0x208e04u: goto label_208e04;
        case 0x208e08u: goto label_208e08;
        case 0x208e0cu: goto label_208e0c;
        case 0x208e10u: goto label_208e10;
        case 0x208e14u: goto label_208e14;
        case 0x208e18u: goto label_208e18;
        case 0x208e1cu: goto label_208e1c;
        case 0x208e20u: goto label_208e20;
        case 0x208e24u: goto label_208e24;
        case 0x208e28u: goto label_208e28;
        case 0x208e2cu: goto label_208e2c;
        case 0x208e30u: goto label_208e30;
        case 0x208e34u: goto label_208e34;
        case 0x208e38u: goto label_208e38;
        case 0x208e3cu: goto label_208e3c;
        case 0x208e40u: goto label_208e40;
        case 0x208e44u: goto label_208e44;
        case 0x208e48u: goto label_208e48;
        case 0x208e4cu: goto label_208e4c;
        case 0x208e50u: goto label_208e50;
        case 0x208e54u: goto label_208e54;
        case 0x208e58u: goto label_208e58;
        case 0x208e5cu: goto label_208e5c;
        case 0x208e60u: goto label_208e60;
        case 0x208e64u: goto label_208e64;
        case 0x208e68u: goto label_208e68;
        case 0x208e6cu: goto label_208e6c;
        case 0x208e70u: goto label_208e70;
        case 0x208e74u: goto label_208e74;
        case 0x208e78u: goto label_208e78;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e80u: goto label_208e80;
        case 0x208e84u: goto label_208e84;
        case 0x208e88u: goto label_208e88;
        case 0x208e8cu: goto label_208e8c;
        case 0x208e90u: goto label_208e90;
        case 0x208e94u: goto label_208e94;
        case 0x208e98u: goto label_208e98;
        case 0x208e9cu: goto label_208e9c;
        case 0x208ea0u: goto label_208ea0;
        case 0x208ea4u: goto label_208ea4;
        case 0x208ea8u: goto label_208ea8;
        case 0x208eacu: goto label_208eac;
        case 0x208eb0u: goto label_208eb0;
        case 0x208eb4u: goto label_208eb4;
        case 0x208eb8u: goto label_208eb8;
        case 0x208ebcu: goto label_208ebc;
        case 0x208ec0u: goto label_208ec0;
        case 0x208ec4u: goto label_208ec4;
        case 0x208ec8u: goto label_208ec8;
        case 0x208eccu: goto label_208ecc;
        case 0x208ed0u: goto label_208ed0;
        case 0x208ed4u: goto label_208ed4;
        case 0x208ed8u: goto label_208ed8;
        case 0x208edcu: goto label_208edc;
        case 0x208ee0u: goto label_208ee0;
        case 0x208ee4u: goto label_208ee4;
        case 0x208ee8u: goto label_208ee8;
        case 0x208eecu: goto label_208eec;
        case 0x208ef0u: goto label_208ef0;
        case 0x208ef4u: goto label_208ef4;
        case 0x208ef8u: goto label_208ef8;
        case 0x208efcu: goto label_208efc;
        case 0x208f00u: goto label_208f00;
        case 0x208f04u: goto label_208f04;
        case 0x208f08u: goto label_208f08;
        case 0x208f0cu: goto label_208f0c;
        case 0x208f10u: goto label_208f10;
        case 0x208f14u: goto label_208f14;
        case 0x208f18u: goto label_208f18;
        case 0x208f1cu: goto label_208f1c;
        case 0x208f20u: goto label_208f20;
        case 0x208f24u: goto label_208f24;
        case 0x208f28u: goto label_208f28;
        case 0x208f2cu: goto label_208f2c;
        case 0x208f30u: goto label_208f30;
        case 0x208f34u: goto label_208f34;
        case 0x208f38u: goto label_208f38;
        case 0x208f3cu: goto label_208f3c;
        case 0x208f40u: goto label_208f40;
        case 0x208f44u: goto label_208f44;
        case 0x208f48u: goto label_208f48;
        case 0x208f4cu: goto label_208f4c;
        case 0x208f50u: goto label_208f50;
        case 0x208f54u: goto label_208f54;
        case 0x208f58u: goto label_208f58;
        case 0x208f5cu: goto label_208f5c;
        case 0x208f60u: goto label_208f60;
        case 0x208f64u: goto label_208f64;
        case 0x208f68u: goto label_208f68;
        case 0x208f6cu: goto label_208f6c;
        case 0x208f70u: goto label_208f70;
        case 0x208f74u: goto label_208f74;
        case 0x208f78u: goto label_208f78;
        case 0x208f7cu: goto label_208f7c;
        case 0x208f80u: goto label_208f80;
        case 0x208f84u: goto label_208f84;
        case 0x208f88u: goto label_208f88;
        case 0x208f8cu: goto label_208f8c;
        case 0x208f90u: goto label_208f90;
        case 0x208f94u: goto label_208f94;
        case 0x208f98u: goto label_208f98;
        case 0x208f9cu: goto label_208f9c;
        case 0x208fa0u: goto label_208fa0;
        case 0x208fa4u: goto label_208fa4;
        case 0x208fa8u: goto label_208fa8;
        case 0x208facu: goto label_208fac;
        case 0x208fb0u: goto label_208fb0;
        case 0x208fb4u: goto label_208fb4;
        case 0x208fb8u: goto label_208fb8;
        case 0x208fbcu: goto label_208fbc;
        case 0x208fc0u: goto label_208fc0;
        case 0x208fc4u: goto label_208fc4;
        case 0x208fc8u: goto label_208fc8;
        case 0x208fccu: goto label_208fcc;
        case 0x208fd0u: goto label_208fd0;
        case 0x208fd4u: goto label_208fd4;
        case 0x208fd8u: goto label_208fd8;
        case 0x208fdcu: goto label_208fdc;
        case 0x208fe0u: goto label_208fe0;
        case 0x208fe4u: goto label_208fe4;
        case 0x208fe8u: goto label_208fe8;
        case 0x208fecu: goto label_208fec;
        case 0x208ff0u: goto label_208ff0;
        case 0x208ff4u: goto label_208ff4;
        case 0x208ff8u: goto label_208ff8;
        case 0x208ffcu: goto label_208ffc;
        case 0x209000u: goto label_209000;
        case 0x209004u: goto label_209004;
        case 0x209008u: goto label_209008;
        case 0x20900cu: goto label_20900c;
        case 0x209010u: goto label_209010;
        case 0x209014u: goto label_209014;
        case 0x209018u: goto label_209018;
        case 0x20901cu: goto label_20901c;
        case 0x209020u: goto label_209020;
        case 0x209024u: goto label_209024;
        case 0x209028u: goto label_209028;
        case 0x20902cu: goto label_20902c;
        case 0x209030u: goto label_209030;
        case 0x209034u: goto label_209034;
        case 0x209038u: goto label_209038;
        case 0x20903cu: goto label_20903c;
        case 0x209040u: goto label_209040;
        case 0x209044u: goto label_209044;
        case 0x209048u: goto label_209048;
        case 0x20904cu: goto label_20904c;
        case 0x209050u: goto label_209050;
        case 0x209054u: goto label_209054;
        case 0x209058u: goto label_209058;
        case 0x20905cu: goto label_20905c;
        case 0x209060u: goto label_209060;
        case 0x209064u: goto label_209064;
        case 0x209068u: goto label_209068;
        case 0x20906cu: goto label_20906c;
        case 0x209070u: goto label_209070;
        case 0x209074u: goto label_209074;
        case 0x209078u: goto label_209078;
        case 0x20907cu: goto label_20907c;
        case 0x209080u: goto label_209080;
        case 0x209084u: goto label_209084;
        case 0x209088u: goto label_209088;
        case 0x20908cu: goto label_20908c;
        case 0x209090u: goto label_209090;
        case 0x209094u: goto label_209094;
        case 0x209098u: goto label_209098;
        case 0x20909cu: goto label_20909c;
        case 0x2090a0u: goto label_2090a0;
        case 0x2090a4u: goto label_2090a4;
        case 0x2090a8u: goto label_2090a8;
        case 0x2090acu: goto label_2090ac;
        case 0x2090b0u: goto label_2090b0;
        case 0x2090b4u: goto label_2090b4;
        case 0x2090b8u: goto label_2090b8;
        case 0x2090bcu: goto label_2090bc;
        case 0x2090c0u: goto label_2090c0;
        case 0x2090c4u: goto label_2090c4;
        case 0x2090c8u: goto label_2090c8;
        case 0x2090ccu: goto label_2090cc;
        case 0x2090d0u: goto label_2090d0;
        case 0x2090d4u: goto label_2090d4;
        case 0x2090d8u: goto label_2090d8;
        case 0x2090dcu: goto label_2090dc;
        case 0x2090e0u: goto label_2090e0;
        case 0x2090e4u: goto label_2090e4;
        case 0x2090e8u: goto label_2090e8;
        case 0x2090ecu: goto label_2090ec;
        case 0x2090f0u: goto label_2090f0;
        case 0x2090f4u: goto label_2090f4;
        case 0x2090f8u: goto label_2090f8;
        case 0x2090fcu: goto label_2090fc;
        case 0x209100u: goto label_209100;
        case 0x209104u: goto label_209104;
        case 0x209108u: goto label_209108;
        case 0x20910cu: goto label_20910c;
        case 0x209110u: goto label_209110;
        case 0x209114u: goto label_209114;
        case 0x209118u: goto label_209118;
        case 0x20911cu: goto label_20911c;
        case 0x209120u: goto label_209120;
        case 0x209124u: goto label_209124;
        case 0x209128u: goto label_209128;
        case 0x20912cu: goto label_20912c;
        case 0x209130u: goto label_209130;
        case 0x209134u: goto label_209134;
        case 0x209138u: goto label_209138;
        case 0x20913cu: goto label_20913c;
        case 0x209140u: goto label_209140;
        case 0x209144u: goto label_209144;
        case 0x209148u: goto label_209148;
        case 0x20914cu: goto label_20914c;
        case 0x209150u: goto label_209150;
        case 0x209154u: goto label_209154;
        case 0x209158u: goto label_209158;
        case 0x20915cu: goto label_20915c;
        case 0x209160u: goto label_209160;
        case 0x209164u: goto label_209164;
        case 0x209168u: goto label_209168;
        case 0x20916cu: goto label_20916c;
        case 0x209170u: goto label_209170;
        case 0x209174u: goto label_209174;
        case 0x209178u: goto label_209178;
        case 0x20917cu: goto label_20917c;
        case 0x209180u: goto label_209180;
        case 0x209184u: goto label_209184;
        case 0x209188u: goto label_209188;
        case 0x20918cu: goto label_20918c;
        case 0x209190u: goto label_209190;
        case 0x209194u: goto label_209194;
        case 0x209198u: goto label_209198;
        case 0x20919cu: goto label_20919c;
        case 0x2091a0u: goto label_2091a0;
        case 0x2091a4u: goto label_2091a4;
        case 0x2091a8u: goto label_2091a8;
        case 0x2091acu: goto label_2091ac;
        case 0x2091b0u: goto label_2091b0;
        case 0x2091b4u: goto label_2091b4;
        case 0x2091b8u: goto label_2091b8;
        case 0x2091bcu: goto label_2091bc;
        case 0x2091c0u: goto label_2091c0;
        case 0x2091c4u: goto label_2091c4;
        case 0x2091c8u: goto label_2091c8;
        case 0x2091ccu: goto label_2091cc;
        case 0x2091d0u: goto label_2091d0;
        case 0x2091d4u: goto label_2091d4;
        case 0x2091d8u: goto label_2091d8;
        case 0x2091dcu: goto label_2091dc;
        case 0x2091e0u: goto label_2091e0;
        case 0x2091e4u: goto label_2091e4;
        case 0x2091e8u: goto label_2091e8;
        case 0x2091ecu: goto label_2091ec;
        case 0x2091f0u: goto label_2091f0;
        case 0x2091f4u: goto label_2091f4;
        case 0x2091f8u: goto label_2091f8;
        case 0x2091fcu: goto label_2091fc;
        case 0x209200u: goto label_209200;
        case 0x209204u: goto label_209204;
        case 0x209208u: goto label_209208;
        case 0x20920cu: goto label_20920c;
        case 0x209210u: goto label_209210;
        case 0x209214u: goto label_209214;
        case 0x209218u: goto label_209218;
        case 0x20921cu: goto label_20921c;
        case 0x209220u: goto label_209220;
        case 0x209224u: goto label_209224;
        case 0x209228u: goto label_209228;
        case 0x20922cu: goto label_20922c;
        case 0x209230u: goto label_209230;
        case 0x209234u: goto label_209234;
        case 0x209238u: goto label_209238;
        case 0x20923cu: goto label_20923c;
        case 0x209240u: goto label_209240;
        case 0x209244u: goto label_209244;
        case 0x209248u: goto label_209248;
        case 0x20924cu: goto label_20924c;
        case 0x209250u: goto label_209250;
        case 0x209254u: goto label_209254;
        case 0x209258u: goto label_209258;
        case 0x20925cu: goto label_20925c;
        case 0x209260u: goto label_209260;
        case 0x209264u: goto label_209264;
        case 0x209268u: goto label_209268;
        case 0x20926cu: goto label_20926c;
        case 0x209270u: goto label_209270;
        case 0x209274u: goto label_209274;
        case 0x209278u: goto label_209278;
        case 0x20927cu: goto label_20927c;
        case 0x209280u: goto label_209280;
        case 0x209284u: goto label_209284;
        case 0x209288u: goto label_209288;
        case 0x20928cu: goto label_20928c;
        case 0x209290u: goto label_209290;
        case 0x209294u: goto label_209294;
        case 0x209298u: goto label_209298;
        case 0x20929cu: goto label_20929c;
        case 0x2092a0u: goto label_2092a0;
        case 0x2092a4u: goto label_2092a4;
        case 0x2092a8u: goto label_2092a8;
        case 0x2092acu: goto label_2092ac;
        case 0x2092b0u: goto label_2092b0;
        case 0x2092b4u: goto label_2092b4;
        case 0x2092b8u: goto label_2092b8;
        case 0x2092bcu: goto label_2092bc;
        case 0x2092c0u: goto label_2092c0;
        case 0x2092c4u: goto label_2092c4;
        case 0x2092c8u: goto label_2092c8;
        case 0x2092ccu: goto label_2092cc;
        case 0x2092d0u: goto label_2092d0;
        case 0x2092d4u: goto label_2092d4;
        case 0x2092d8u: goto label_2092d8;
        case 0x2092dcu: goto label_2092dc;
        case 0x2092e0u: goto label_2092e0;
        case 0x2092e4u: goto label_2092e4;
        case 0x2092e8u: goto label_2092e8;
        case 0x2092ecu: goto label_2092ec;
        case 0x2092f0u: goto label_2092f0;
        case 0x2092f4u: goto label_2092f4;
        case 0x2092f8u: goto label_2092f8;
        case 0x2092fcu: goto label_2092fc;
        case 0x209300u: goto label_209300;
        case 0x209304u: goto label_209304;
        case 0x209308u: goto label_209308;
        case 0x20930cu: goto label_20930c;
        case 0x209310u: goto label_209310;
        case 0x209314u: goto label_209314;
        case 0x209318u: goto label_209318;
        case 0x20931cu: goto label_20931c;
        case 0x209320u: goto label_209320;
        case 0x209324u: goto label_209324;
        case 0x209328u: goto label_209328;
        case 0x20932cu: goto label_20932c;
        case 0x209330u: goto label_209330;
        case 0x209334u: goto label_209334;
        case 0x209338u: goto label_209338;
        case 0x20933cu: goto label_20933c;
        case 0x209340u: goto label_209340;
        case 0x209344u: goto label_209344;
        case 0x209348u: goto label_209348;
        case 0x20934cu: goto label_20934c;
        case 0x209350u: goto label_209350;
        case 0x209354u: goto label_209354;
        case 0x209358u: goto label_209358;
        case 0x20935cu: goto label_20935c;
        case 0x209360u: goto label_209360;
        case 0x209364u: goto label_209364;
        case 0x209368u: goto label_209368;
        case 0x20936cu: goto label_20936c;
        case 0x209370u: goto label_209370;
        case 0x209374u: goto label_209374;
        case 0x209378u: goto label_209378;
        case 0x20937cu: goto label_20937c;
        case 0x209380u: goto label_209380;
        case 0x209384u: goto label_209384;
        case 0x209388u: goto label_209388;
        case 0x20938cu: goto label_20938c;
        case 0x209390u: goto label_209390;
        case 0x209394u: goto label_209394;
        case 0x209398u: goto label_209398;
        case 0x20939cu: goto label_20939c;
        case 0x2093a0u: goto label_2093a0;
        case 0x2093a4u: goto label_2093a4;
        case 0x2093a8u: goto label_2093a8;
        case 0x2093acu: goto label_2093ac;
        case 0x2093b0u: goto label_2093b0;
        case 0x2093b4u: goto label_2093b4;
        case 0x2093b8u: goto label_2093b8;
        case 0x2093bcu: goto label_2093bc;
        case 0x2093c0u: goto label_2093c0;
        case 0x2093c4u: goto label_2093c4;
        case 0x2093c8u: goto label_2093c8;
        case 0x2093ccu: goto label_2093cc;
        case 0x2093d0u: goto label_2093d0;
        case 0x2093d4u: goto label_2093d4;
        case 0x2093d8u: goto label_2093d8;
        case 0x2093dcu: goto label_2093dc;
        case 0x2093e0u: goto label_2093e0;
        case 0x2093e4u: goto label_2093e4;
        case 0x2093e8u: goto label_2093e8;
        case 0x2093ecu: goto label_2093ec;
        case 0x2093f0u: goto label_2093f0;
        case 0x2093f4u: goto label_2093f4;
        case 0x2093f8u: goto label_2093f8;
        case 0x2093fcu: goto label_2093fc;
        case 0x209400u: goto label_209400;
        case 0x209404u: goto label_209404;
        case 0x209408u: goto label_209408;
        case 0x20940cu: goto label_20940c;
        case 0x209410u: goto label_209410;
        case 0x209414u: goto label_209414;
        case 0x209418u: goto label_209418;
        case 0x20941cu: goto label_20941c;
        case 0x209420u: goto label_209420;
        case 0x209424u: goto label_209424;
        case 0x209428u: goto label_209428;
        case 0x20942cu: goto label_20942c;
        case 0x209430u: goto label_209430;
        case 0x209434u: goto label_209434;
        case 0x209438u: goto label_209438;
        case 0x20943cu: goto label_20943c;
        case 0x209440u: goto label_209440;
        case 0x209444u: goto label_209444;
        case 0x209448u: goto label_209448;
        case 0x20944cu: goto label_20944c;
        case 0x209450u: goto label_209450;
        case 0x209454u: goto label_209454;
        case 0x209458u: goto label_209458;
        case 0x20945cu: goto label_20945c;
        case 0x209460u: goto label_209460;
        case 0x209464u: goto label_209464;
        case 0x209468u: goto label_209468;
        case 0x20946cu: goto label_20946c;
        case 0x209470u: goto label_209470;
        case 0x209474u: goto label_209474;
        case 0x209478u: goto label_209478;
        case 0x20947cu: goto label_20947c;
        case 0x209480u: goto label_209480;
        case 0x209484u: goto label_209484;
        case 0x209488u: goto label_209488;
        case 0x20948cu: goto label_20948c;
        case 0x209490u: goto label_209490;
        case 0x209494u: goto label_209494;
        case 0x209498u: goto label_209498;
        case 0x20949cu: goto label_20949c;
        case 0x2094a0u: goto label_2094a0;
        case 0x2094a4u: goto label_2094a4;
        case 0x2094a8u: goto label_2094a8;
        case 0x2094acu: goto label_2094ac;
        case 0x2094b0u: goto label_2094b0;
        default: break;
    }

    ctx->pc = 0x208ab0u;

label_208ab0:
    // 0x208ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_208ab4:
    // 0x208ab4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x208ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_208ab8:
    // 0x208ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_208abc:
    // 0x208abc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x208abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_208ac0:
    // 0x208ac0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208ac4:
    // 0x208ac4: 0x2483136c  addiu       $v1, $a0, 0x136C
    ctx->pc = 0x208ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4972));
label_208ac8:
    // 0x208ac8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x208ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208acc:
    // 0x208acc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x208accu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_208ad0:
    // 0x208ad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208ad4:
    // 0x208ad4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x208ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_208ad8:
    // 0x208ad8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x208ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_208adc:
    // 0x208adc: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x208adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_208ae0:
    // 0x208ae0: 0x1020026f  beqz        $at, . + 4 + (0x26F << 2)
label_208ae4:
    if (ctx->pc == 0x208AE4u) {
        ctx->pc = 0x208AE8u;
        goto label_208ae8;
    }
    ctx->pc = 0x208AE0u;
    {
        const bool branch_taken_0x208ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ae0) {
            ctx->pc = 0x2094A0u;
            goto label_2094a0;
        }
    }
    ctx->pc = 0x208AE8u;
label_208ae8:
    // 0x208ae8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x208ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_208aec:
    // 0x208aec: 0x24640e10  addiu       $a0, $v1, 0xE10
    ctx->pc = 0x208aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3600));
label_208af0:
    // 0x208af0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x208af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_208af4:
    // 0x208af4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x208af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_208af8:
    // 0x208af8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x208af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208afc:
    // 0x208afc: 0x600008  jr          $v1
label_208b00:
    if (ctx->pc == 0x208B00u) {
        ctx->pc = 0x208B04u;
        goto label_208b04;
    }
    ctx->pc = 0x208AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208B04u;
label_208b04:
    // 0x208b04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208b08:
    // 0x208b08: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_208b0c:
    // 0x208b0c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x208b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_208b10:
    // 0x208b10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_208b14:
    // 0x208b14: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x208b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_208b18:
    // 0x208b18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208b1c:
    // 0x208b1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208b20:
    // 0x208b20: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x208b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_208b24:
    // 0x208b24: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x208b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_208b28:
    // 0x208b28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208b2c:
    // 0x208b2c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x208b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_208b30:
    // 0x208b30: 0xc0965d0  jal         func_259740
label_208b34:
    if (ctx->pc == 0x208B34u) {
        ctx->pc = 0x208B38u;
        goto label_208b38;
    }
    ctx->pc = 0x208B30u;
    SET_GPR_U32(ctx, 31, 0x208B38u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x208B30u, 0x208B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B38u;
label_208b38:
    // 0x208b38: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x208b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_208b3c:
    // 0x208b3c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x208b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_208b40:
    // 0x208b40: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x208b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_208b44:
    // 0x208b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208b48:
    // 0x208b48: 0x0  nop
    ctx->pc = 0x208b48u;
    // NOP
label_208b4c:
    // 0x208b4c: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_208b50:
    // 0x208b50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208b54:
    // 0x208b54: 0x0  nop
    ctx->pc = 0x208b54u;
    // NOP
label_208b58:
    // 0x208b58: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_208b5c:
    // 0x208b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208b60:
    // 0x208b60: 0x0  nop
    ctx->pc = 0x208b60u;
    // NOP
label_208b64:
    // 0x208b64: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_208b68:
    // 0x208b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208b6c:
    // 0x208b6c: 0x0  nop
    ctx->pc = 0x208b6cu;
    // NOP
label_208b70:
    // 0x208b70: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x208b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_208b74:
    // 0x208b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208b78:
    // 0x208b78: 0x0  nop
    ctx->pc = 0x208b78u;
    // NOP
label_208b7c:
    // 0x208b7c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x208b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_208b80:
    // 0x208b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208b84:
    // 0x208b84: 0x0  nop
    ctx->pc = 0x208b84u;
    // NOP
label_208b88:
    // 0x208b88: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x208b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_208b8c:
    // 0x208b8c: 0xc06765c  jal         func_19D970
label_208b90:
    if (ctx->pc == 0x208B90u) {
        ctx->pc = 0x208B94u;
        goto label_208b94;
    }
    ctx->pc = 0x208B8Cu;
    SET_GPR_U32(ctx, 31, 0x208B94u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x208B8Cu, 0x208B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B94u;
label_208b94:
    // 0x208b94: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x208b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_208b98:
    // 0x208b98: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x208b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_208b9c:
    // 0x208b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x208b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_208ba0:
    // 0x208ba0: 0x0  nop
    ctx->pc = 0x208ba0u;
    // NOP
label_208ba4:
    // 0x208ba4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x208ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_208ba8:
    // 0x208ba8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_208bac:
    // 0x208bac: 0xe4209480  swc1        $f0, -0x6B80($at)
    ctx->pc = 0x208bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939776), bits); }
label_208bb0:
    // 0x208bb0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x208bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_208bb4:
    // 0x208bb4: 0x24a49440  addiu       $a0, $a1, -0x6BC0
    ctx->pc = 0x208bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939712));
label_208bb8:
    // 0x208bb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_208bbc:
    // 0x208bbc: 0xc42c9480  lwc1        $f12, -0x6B80($at)
    ctx->pc = 0x208bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_208bc0:
    // 0x208bc0: 0xc067844  jal         func_19E110
label_208bc4:
    if (ctx->pc == 0x208BC4u) {
        ctx->pc = 0x208BC8u;
        goto label_208bc8;
    }
    ctx->pc = 0x208BC0u;
    SET_GPR_U32(ctx, 31, 0x208BC8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x208BC0u, 0x208BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BC8u;
label_208bc8:
    // 0x208bc8: 0x3c03c64b  lui         $v1, 0xC64B
    ctx->pc = 0x208bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50763 << 16));
label_208bcc:
    // 0x208bcc: 0x34622000  ori         $v0, $v1, 0x2000
    ctx->pc = 0x208bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_208bd0:
    // 0x208bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208bd4:
    // 0x208bd4: 0x0  nop
    ctx->pc = 0x208bd4u;
    // NOP
label_208bd8:
    // 0x208bd8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x208bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_208bdc:
    // 0x208bdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x208bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_208be0:
    // 0x208be0: 0x24649430  addiu       $a0, $v1, -0x6BD0
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939696));
label_208be4:
    // 0x208be4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x208be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_208be8:
    // 0x208be8: 0x24659440  addiu       $a1, $v1, -0x6BC0
    ctx->pc = 0x208be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
label_208bec:
    // 0x208bec: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_208bf0:
    // 0x208bf0: 0xc040bf4  jal         func_102FD0
label_208bf4:
    if (ctx->pc == 0x208BF4u) {
        ctx->pc = 0x208BF8u;
        goto label_208bf8;
    }
    ctx->pc = 0x208BF0u;
    SET_GPR_U32(ctx, 31, 0x208BF8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x208BF8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x208BF8u) { return; }
    ctx->pc = 0x208BF8u;
label_208bf8:
    // 0x208bf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x208bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_208bfc:
    // 0x208bfc: 0x3c04464b  lui         $a0, 0x464B
    ctx->pc = 0x208bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17995 << 16));
label_208c00:
    // 0x208c00: 0x34832000  ori         $v1, $a0, 0x2000
    ctx->pc = 0x208c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_208c04:
    // 0x208c04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x208c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208c08:
    // 0x208c08: 0x0  nop
    ctx->pc = 0x208c08u;
    // NOP
label_208c0c:
    // 0x208c0c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x208c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_208c10:
    // 0x208c10: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x208c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_208c14:
    // 0x208c14: 0x24649420  addiu       $a0, $v1, -0x6BE0
    ctx->pc = 0x208c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939680));
label_208c18:
    // 0x208c18: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x208c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_208c1c:
    // 0x208c1c: 0x24659440  addiu       $a1, $v1, -0x6BC0
    ctx->pc = 0x208c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
label_208c20:
    // 0x208c20: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x208c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_208c24:
    // 0x208c24: 0xc040bf4  jal         func_102FD0
label_208c28:
    if (ctx->pc == 0x208C28u) {
        ctx->pc = 0x208C2Cu;
        goto label_208c2c;
    }
    ctx->pc = 0x208C24u;
    SET_GPR_U32(ctx, 31, 0x208C2Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x208C2Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x208C2Cu) { return; }
    ctx->pc = 0x208C2Cu;
label_208c2c:
    // 0x208c2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_208c30:
    // 0x208c30: 0x24429420  addiu       $v0, $v0, -0x6BE0
    ctx->pc = 0x208c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
label_208c34:
    // 0x208c34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x208c34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_208c38:
    // 0x208c38: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x208c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_208c3c:
    // 0x208c3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x208c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_208c40:
    // 0x208c40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_208c44:
    // 0x208c44: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x208c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_208c48:
    // 0x208c48: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x208c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_208c4c:
    // 0x208c4c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x208c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_208c50:
    // 0x208c50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_208c54:
    // 0x208c54: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x208c54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_208c58:
    // 0x208c58: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_208c5c:
    // 0x208c5c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x208c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_208c60:
    // 0x208c60: 0xc0684d8  jal         func_1A1360
label_208c64:
    if (ctx->pc == 0x208C64u) {
        ctx->pc = 0x208C68u;
        goto label_208c68;
    }
    ctx->pc = 0x208C60u;
    SET_GPR_U32(ctx, 31, 0x208C68u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x208C60u, 0x208C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C68u;
label_208c68:
    // 0x208c68: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x208c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_208c6c:
    // 0x208c6c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x208c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_208c70:
    // 0x208c70: 0xc0684d8  jal         func_1A1360
label_208c74:
    if (ctx->pc == 0x208C74u) {
        ctx->pc = 0x208C78u;
        goto label_208c78;
    }
    ctx->pc = 0x208C70u;
    SET_GPR_U32(ctx, 31, 0x208C78u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x208C70u, 0x208C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C78u;
label_208c78:
    // 0x208c78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208c7c:
    // 0x208c7c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x208c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_208c80:
    // 0x208c80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_208c84:
    // 0x208c84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x208c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_208c88:
    // 0x208c88: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208c8c:
    // 0x208c8c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x208c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_208c90:
    // 0x208c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208c94:
    // 0x208c94: 0x0  nop
    ctx->pc = 0x208c94u;
    // NOP
label_208c98:
    // 0x208c98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x208c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208c9c:
    // 0x208c9c: 0x0  nop
    ctx->pc = 0x208c9cu;
    // NOP
label_208ca0:
    // 0x208ca0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_208ca4:
    if (ctx->pc == 0x208CA4u) {
        ctx->pc = 0x208CA8u;
        goto label_208ca8;
    }
    ctx->pc = 0x208CA0u;
    {
        const bool branch_taken_0x208ca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208ca0) {
            ctx->pc = 0x208CFCu;
            goto label_208cfc;
        }
    }
    ctx->pc = 0x208CA8u;
label_208ca8:
    // 0x208ca8: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208cac:
    // 0x208cac: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x208cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_208cb0:
    // 0x208cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208cb4:
    // 0x208cb4: 0x0  nop
    ctx->pc = 0x208cb4u;
    // NOP
label_208cb8:
    // 0x208cb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_208cbc:
    // 0x208cbc: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_208cc0:
    // 0x208cc0: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x208cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208cc4:
    // 0x208cc4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x208cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_208cc8:
    // 0x208cc8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x208cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_208ccc:
    // 0x208ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208cd0:
    // 0x208cd0: 0x0  nop
    ctx->pc = 0x208cd0u;
    // NOP
label_208cd4:
    // 0x208cd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_208cd8:
    // 0x208cd8: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_208cdc:
    // 0x208cdc: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x208cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208ce0:
    // 0x208ce0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x208ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_208ce4:
    // 0x208ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208ce8:
    // 0x208ce8: 0x0  nop
    ctx->pc = 0x208ce8u;
    // NOP
label_208cec:
    // 0x208cec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_208cf0:
    // 0x208cf0: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_208cf4:
    // 0x208cf4: 0x1000000e  b           . + 4 + (0xE << 2)
label_208cf8:
    if (ctx->pc == 0x208CF8u) {
        ctx->pc = 0x208CFCu;
        goto label_208cfc;
    }
    ctx->pc = 0x208CF4u;
    {
        const bool branch_taken_0x208cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208cf4) {
            ctx->pc = 0x208D30u;
            goto label_208d30;
        }
    }
    ctx->pc = 0x208CFCu;
label_208cfc:
    // 0x208cfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_208d00:
    // 0x208d00: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x208d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_208d04:
    // 0x208d04: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x208d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_208d08:
    // 0x208d08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x208d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_208d0c:
    // 0x208d0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x208d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_208d10:
    // 0x208d10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_208d14:
    // 0x208d14: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x208d14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_208d18:
    // 0x208d18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208d1c:
    // 0x208d1c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x208d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_208d20:
    // 0x208d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208d24:
    // 0x208d24: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x208d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_208d28:
    // 0x208d28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_208d2c:
    // 0x208d2c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x208d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_208d30:
    // 0x208d30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208d34:
    // 0x208d34: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x208d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_208d38:
    // 0x208d38: 0xc080f60  jal         func_203D80
label_208d3c:
    if (ctx->pc == 0x208D3Cu) {
        ctx->pc = 0x208D40u;
        goto label_208d40;
    }
    ctx->pc = 0x208D38u;
    SET_GPR_U32(ctx, 31, 0x208D40u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x208D38u, 0x208D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D40u;
label_208d40:
    // 0x208d40: 0x100001d7  b           . + 4 + (0x1D7 << 2)
label_208d44:
    if (ctx->pc == 0x208D44u) {
        ctx->pc = 0x208D48u;
        goto label_208d48;
    }
    ctx->pc = 0x208D40u;
    {
        const bool branch_taken_0x208d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208d40) {
            ctx->pc = 0x2094A0u;
            goto label_2094a0;
        }
    }
    ctx->pc = 0x208D48u;
label_208d48:
    // 0x208d48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208d4c:
    // 0x208d4c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x208d4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_208d50:
    // 0x208d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x208d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_208d54:
    // 0x208d54: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x208d54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_208d58:
    // 0x208d58: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x208d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_208d5c:
    // 0x208d5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x208d5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_208d60:
    // 0x208d60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x208d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_208d64:
    // 0x208d64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x208d64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_208d68:
    // 0x208d68: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x208d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_208d6c:
    // 0x208d6c: 0x142001cc  bnez        $at, . + 4 + (0x1CC << 2)
label_208d70:
    if (ctx->pc == 0x208D70u) {
        ctx->pc = 0x208D74u;
        goto label_208d74;
    }
    ctx->pc = 0x208D6Cu;
    {
        const bool branch_taken_0x208d6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x208d6c) {
            ctx->pc = 0x2094A0u;
            goto label_2094a0;
        }
    }
    ctx->pc = 0x208D74u;
label_208d74:
    // 0x208d74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_208d78:
    // 0x208d78: 0x24429420  addiu       $v0, $v0, -0x6BE0
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
label_208d7c:
    // 0x208d7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x208d7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_208d80:
    // 0x208d80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208d84:
    // 0x208d84: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x208d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_208d88:
    // 0x208d88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x208d88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_208d8c:
    // 0x208d8c: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x208d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_208d90:
    // 0x208d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208d94:
    // 0x208d94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208d98:
    // 0x208d98: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x208d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_208d9c:
    // 0x208d9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_208da0:
    // 0x208da0: 0xc4219480  lwc1        $f1, -0x6B80($at)
    ctx->pc = 0x208da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208da4:
    // 0x208da4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x208da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_208da8:
    // 0x208da8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x208da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_208dac:
    // 0x208dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208db0:
    // 0x208db0: 0x0  nop
    ctx->pc = 0x208db0u;
    // NOP
label_208db4:
    // 0x208db4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x208db4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_208db8:
    // 0x208db8: 0xc058fec  jal         func_163FB0
label_208dbc:
    if (ctx->pc == 0x208DBCu) {
        ctx->pc = 0x208DC0u;
        goto label_208dc0;
    }
    ctx->pc = 0x208DB8u;
    SET_GPR_U32(ctx, 31, 0x208DC0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x208DB8u, 0x208DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DC0u;
label_208dc0:
    // 0x208dc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208dc4:
    // 0x208dc4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x208dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_208dc8:
    // 0x208dc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208dcc:
    // 0x208dcc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x208dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_208dd0:
    // 0x208dd0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x208dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_208dd4:
    // 0x208dd4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x208dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_208dd8:
    // 0x208dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208ddc:
    // 0x208ddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208de0:
    // 0x208de0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x208de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_208de4:
    // 0x208de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208de8:
    // 0x208de8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208dec:
    // 0x208dec: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x208decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_208df0:
    // 0x208df0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208df4:
    // 0x208df4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208df8:
    // 0x208df8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x208df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_208dfc:
    // 0x208dfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208e00:
    // 0x208e00: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x208e00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_208e04:
    // 0x208e04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_208e08:
    // 0x208e08: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x208e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_208e0c:
    // 0x208e0c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x208e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
label_208e10:
    // 0x208e10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x208e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_208e14:
    // 0x208e14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x208e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_208e18:
    // 0x208e18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_208e1c:
    // 0x208e1c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x208e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_208e20:
    // 0x208e20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208e24:
    // 0x208e24: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x208e24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_208e28:
    // 0x208e28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x208e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_208e2c:
    // 0x208e2c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x208e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_208e30:
    // 0x208e30: 0x1000019b  b           . + 4 + (0x19B << 2)
label_208e34:
    if (ctx->pc == 0x208E34u) {
        ctx->pc = 0x208E38u;
        goto label_208e38;
    }
    ctx->pc = 0x208E30u;
    {
        const bool branch_taken_0x208e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e30) {
            ctx->pc = 0x2094A0u;
            goto label_2094a0;
        }
    }
    ctx->pc = 0x208E38u;
label_208e38:
    // 0x208e38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208e3c:
    // 0x208e3c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x208e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_208e40:
    // 0x208e40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208e44:
    // 0x208e44: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x208e44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_208e48:
    // 0x208e48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208e4c:
    // 0x208e4c: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x208e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
label_208e50:
    // 0x208e50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208e54:
    // 0x208e54: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x208e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_208e58:
    // 0x208e58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_208e5c:
    // 0x208e5c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x208e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_208e60:
    // 0x208e60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208e64:
    // 0x208e64: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x208e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
label_208e68:
    // 0x208e68: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_208e6c:
    if (ctx->pc == 0x208E6Cu) {
        ctx->pc = 0x208E70u;
        goto label_208e70;
    }
    ctx->pc = 0x208E68u;
    {
        const bool branch_taken_0x208e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e68) {
            ctx->pc = 0x208F90u;
            goto label_208f90;
        }
    }
    ctx->pc = 0x208E70u;
label_208e70:
    // 0x208e70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208e74:
    // 0x208e74: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x208e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_208e78:
    // 0x208e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_208e7c:
    // 0x208e7c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x208e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_208e80:
    // 0x208e80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_208e84:
    // 0x208e84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x208e84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_208e88:
    // 0x208e88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_208e8c:
    // 0x208e8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x208e8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_208e90:
    // 0x208e90: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_208e94:
    // 0x208e94: 0x14200066  bnez        $at, . + 4 + (0x66 << 2)
label_208e98:
    if (ctx->pc == 0x208E98u) {
        ctx->pc = 0x208E9Cu;
        goto label_208e9c;
    }
    ctx->pc = 0x208E94u;
    {
        const bool branch_taken_0x208e94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e94) {
            ctx->pc = 0x209030u;
            goto label_209030;
        }
    }
    ctx->pc = 0x208E9Cu;
label_208e9c:
    // 0x208e9c: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208ea0:
    // 0x208ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208ea4:
    // 0x208ea4: 0x0  nop
    ctx->pc = 0x208ea4u;
    // NOP
label_208ea8:
    // 0x208ea8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x208ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208eac:
    // 0x208eac: 0x0  nop
    ctx->pc = 0x208eacu;
    // NOP
label_208eb0:
    // 0x208eb0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_208eb4:
    if (ctx->pc == 0x208EB4u) {
        ctx->pc = 0x208EB8u;
        goto label_208eb8;
    }
    ctx->pc = 0x208EB0u;
    {
        const bool branch_taken_0x208eb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208eb0) {
            ctx->pc = 0x208F0Cu;
            goto label_208f0c;
        }
    }
    ctx->pc = 0x208EB8u;
label_208eb8:
    // 0x208eb8: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208ebc:
    // 0x208ebc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x208ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_208ec0:
    // 0x208ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208ec4:
    // 0x208ec4: 0x0  nop
    ctx->pc = 0x208ec4u;
    // NOP
label_208ec8:
    // 0x208ec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x208ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_208ecc:
    // 0x208ecc: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_208ed0:
    // 0x208ed0: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x208ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208ed4:
    // 0x208ed4: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x208ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_208ed8:
    // 0x208ed8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x208ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_208edc:
    // 0x208edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208ee0:
    // 0x208ee0: 0x0  nop
    ctx->pc = 0x208ee0u;
    // NOP
label_208ee4:
    // 0x208ee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x208ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_208ee8:
    // 0x208ee8: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_208eec:
    // 0x208eec: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x208eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208ef0:
    // 0x208ef0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x208ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_208ef4:
    // 0x208ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208ef8:
    // 0x208ef8: 0x0  nop
    ctx->pc = 0x208ef8u;
    // NOP
label_208efc:
    // 0x208efc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x208efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_208f00:
    // 0x208f00: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_208f04:
    // 0x208f04: 0x1000004a  b           . + 4 + (0x4A << 2)
label_208f08:
    if (ctx->pc == 0x208F08u) {
        ctx->pc = 0x208F0Cu;
        goto label_208f0c;
    }
    ctx->pc = 0x208F04u;
    {
        const bool branch_taken_0x208f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f04) {
            ctx->pc = 0x209030u;
            goto label_209030;
        }
    }
    ctx->pc = 0x208F0Cu;
label_208f0c:
    // 0x208f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208f10:
    // 0x208f10: 0x0  nop
    ctx->pc = 0x208f10u;
    // NOP
label_208f14:
    // 0x208f14: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_208f18:
    // 0x208f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208f1c:
    // 0x208f1c: 0x0  nop
    ctx->pc = 0x208f1cu;
    // NOP
label_208f20:
    // 0x208f20: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_208f24:
    // 0x208f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208f28:
    // 0x208f28: 0x0  nop
    ctx->pc = 0x208f28u;
    // NOP
label_208f2c:
    // 0x208f2c: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_208f30:
    // 0x208f30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_208f34:
    // 0x208f34: 0x24429430  addiu       $v0, $v0, -0x6BD0
    ctx->pc = 0x208f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939696));
label_208f38:
    // 0x208f38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x208f38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_208f3c:
    // 0x208f3c: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x208f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_208f40:
    // 0x208f40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x208f40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_208f44:
    // 0x208f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208f48:
    // 0x208f48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_208f4c:
    // 0x208f4c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x208f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_208f50:
    // 0x208f50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_208f54:
    // 0x208f54: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x208f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_208f58:
    // 0x208f58: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x208f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_208f5c:
    // 0x208f5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x208f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_208f60:
    // 0x208f60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_208f64:
    // 0x208f64: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x208f64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_208f68:
    // 0x208f68: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x208f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_208f6c:
    // 0x208f6c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x208f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_208f70:
    // 0x208f70: 0xc0684d8  jal         func_1A1360
label_208f74:
    if (ctx->pc == 0x208F74u) {
        ctx->pc = 0x208F78u;
        goto label_208f78;
    }
    ctx->pc = 0x208F70u;
    SET_GPR_U32(ctx, 31, 0x208F78u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x208F70u, 0x208F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F78u;
label_208f78:
    // 0x208f78: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x208f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_208f7c:
    // 0x208f7c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x208f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_208f80:
    // 0x208f80: 0xc0684d8  jal         func_1A1360
label_208f84:
    if (ctx->pc == 0x208F84u) {
        ctx->pc = 0x208F88u;
        goto label_208f88;
    }
    ctx->pc = 0x208F80u;
    SET_GPR_U32(ctx, 31, 0x208F88u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x208F80u, 0x208F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F88u;
label_208f88:
    // 0x208f88: 0x10000029  b           . + 4 + (0x29 << 2)
label_208f8c:
    if (ctx->pc == 0x208F8Cu) {
        ctx->pc = 0x208F90u;
        goto label_208f90;
    }
    ctx->pc = 0x208F88u;
    {
        const bool branch_taken_0x208f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f88) {
            ctx->pc = 0x209030u;
            goto label_209030;
        }
    }
    ctx->pc = 0x208F90u;
label_208f90:
    // 0x208f90: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208f94:
    // 0x208f94: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x208f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_208f98:
    // 0x208f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208f9c:
    // 0x208f9c: 0x0  nop
    ctx->pc = 0x208f9cu;
    // NOP
label_208fa0:
    // 0x208fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x208fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208fa4:
    // 0x208fa4: 0x0  nop
    ctx->pc = 0x208fa4u;
    // NOP
label_208fa8:
    // 0x208fa8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_208fac:
    if (ctx->pc == 0x208FACu) {
        ctx->pc = 0x208FB0u;
        goto label_208fb0;
    }
    ctx->pc = 0x208FA8u;
    {
        const bool branch_taken_0x208fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208fa8) {
            ctx->pc = 0x209004u;
            goto label_209004;
        }
    }
    ctx->pc = 0x208FB0u;
label_208fb0:
    // 0x208fb0: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208fb4:
    // 0x208fb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x208fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_208fb8:
    // 0x208fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208fbc:
    // 0x208fbc: 0x0  nop
    ctx->pc = 0x208fbcu;
    // NOP
label_208fc0:
    // 0x208fc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_208fc4:
    // 0x208fc4: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_208fc8:
    // 0x208fc8: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x208fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208fcc:
    // 0x208fcc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x208fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_208fd0:
    // 0x208fd0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x208fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_208fd4:
    // 0x208fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208fd8:
    // 0x208fd8: 0x0  nop
    ctx->pc = 0x208fd8u;
    // NOP
label_208fdc:
    // 0x208fdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_208fe0:
    // 0x208fe0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_208fe4:
    // 0x208fe4: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x208fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208fe8:
    // 0x208fe8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x208fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_208fec:
    // 0x208fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208ff0:
    // 0x208ff0: 0x0  nop
    ctx->pc = 0x208ff0u;
    // NOP
label_208ff4:
    // 0x208ff4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_208ff8:
    // 0x208ff8: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_208ffc:
    // 0x208ffc: 0x1000000c  b           . + 4 + (0xC << 2)
label_209000:
    if (ctx->pc == 0x209000u) {
        ctx->pc = 0x209004u;
        goto label_209004;
    }
    ctx->pc = 0x208FFCu;
    {
        const bool branch_taken_0x208ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ffc) {
            ctx->pc = 0x209030u;
            goto label_209030;
        }
    }
    ctx->pc = 0x209004u;
label_209004:
    // 0x209004: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_209008:
    // 0x209008: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x209008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_20900c:
    // 0x20900c: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x20900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_209010:
    // 0x209010: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_209014:
    // 0x209014: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x209014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209018:
    // 0x209018: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_20901c:
    // 0x20901c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x20901cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_209020:
    // 0x209020: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209024:
    // 0x209024: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x209024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_209028:
    // 0x209028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20902c:
    // 0x20902c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20902cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_209030:
    // 0x209030: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x209030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209034:
    // 0x209034: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x209034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209038:
    // 0x209038: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x209038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_20903c:
    // 0x20903c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20903cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209040:
    // 0x209040: 0x0  nop
    ctx->pc = 0x209040u;
    // NOP
label_209044:
    // 0x209044: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209048:
    // 0x209048: 0x0  nop
    ctx->pc = 0x209048u;
    // NOP
label_20904c:
    // 0x20904c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_209050:
    if (ctx->pc == 0x209050u) {
        ctx->pc = 0x209054u;
        goto label_209054;
    }
    ctx->pc = 0x20904Cu;
    {
        const bool branch_taken_0x20904c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20904c) {
            ctx->pc = 0x209070u;
            goto label_209070;
        }
    }
    ctx->pc = 0x209054u;
label_209054:
    // 0x209054: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209058:
    // 0x209058: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x209058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20905c:
    // 0x20905c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x20905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_209060:
    // 0x209060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209064:
    // 0x209064: 0x0  nop
    ctx->pc = 0x209064u;
    // NOP
label_209068:
    // 0x209068: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20906c:
    // 0x20906c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x20906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_209070:
    // 0x209070: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209074:
    // 0x209074: 0xc05cd34  jal         func_1734D0
label_209078:
    if (ctx->pc == 0x209078u) {
        ctx->pc = 0x20907Cu;
        goto label_20907c;
    }
    ctx->pc = 0x209074u;
    SET_GPR_U32(ctx, 31, 0x20907Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x209074u, 0x20907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20907Cu;
label_20907c:
    // 0x20907c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20907cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209080:
    // 0x209080: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x209080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_209084:
    // 0x209084: 0xc080f60  jal         func_203D80
label_209088:
    if (ctx->pc == 0x209088u) {
        ctx->pc = 0x20908Cu;
        goto label_20908c;
    }
    ctx->pc = 0x209084u;
    SET_GPR_U32(ctx, 31, 0x20908Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209084u, 0x20908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20908Cu;
label_20908c:
    // 0x20908c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20908cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209090:
    // 0x209090: 0xc0974c8  jal         func_25D320
label_209094:
    if (ctx->pc == 0x209094u) {
        ctx->pc = 0x209098u;
        goto label_209098;
    }
    ctx->pc = 0x209090u;
    SET_GPR_U32(ctx, 31, 0x209098u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x209090u, 0x209098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209098u;
label_209098:
    // 0x209098: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_20909c:
    // 0x20909c: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x20909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
label_2090a0:
    // 0x2090a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2090a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2090a4:
    // 0x2090a4: 0xac831344  sw          $v1, 0x1344($a0)
    ctx->pc = 0x2090a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 3));
label_2090a8:
    // 0x2090a8: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x2090a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2090ac:
    // 0x2090ac: 0x142000fc  bnez        $at, . + 4 + (0xFC << 2)
label_2090b0:
    if (ctx->pc == 0x2090B0u) {
        ctx->pc = 0x2090B4u;
        goto label_2090b4;
    }
    ctx->pc = 0x2090ACu;
    {
        const bool branch_taken_0x2090ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2090ac) {
            ctx->pc = 0x2094A0u;
            goto label_2094a0;
        }
    }
    ctx->pc = 0x2090B4u;
label_2090b4:
    // 0x2090b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2090b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2090b8:
    // 0x2090b8: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x2090b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
label_2090bc:
    // 0x2090bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2090bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2090c0:
    // 0x2090c0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2090c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2090c4:
    // 0x2090c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2090c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2090c8:
    // 0x2090c8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2090c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2090cc:
    // 0x2090cc: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x2090ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
label_2090d0:
    // 0x2090d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2090d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2090d4:
    // 0x2090d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2090d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2090d8:
    // 0x2090d8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2090d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_2090dc:
    // 0x2090dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2090dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2090e0:
    // 0x2090e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2090e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2090e4:
    // 0x2090e4: 0x244292d0  addiu       $v0, $v0, -0x6D30
    ctx->pc = 0x2090e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
label_2090e8:
    // 0x2090e8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2090e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2090ec:
    // 0x2090ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2090ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2090f0:
    // 0x2090f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2090f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2090f4:
    // 0x2090f4: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x2090f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939332), bits); }
label_2090f8:
    // 0x2090f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2090f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2090fc:
    // 0x2090fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2090fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209100:
    // 0x209100: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x209100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_209104:
    // 0x209104: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x209104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_209108:
    // 0x209108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20910c:
    // 0x20910c: 0x0  nop
    ctx->pc = 0x20910cu;
    // NOP
label_209110:
    // 0x209110: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x209110u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_209114:
    // 0x209114: 0xc058fec  jal         func_163FB0
label_209118:
    if (ctx->pc == 0x209118u) {
        ctx->pc = 0x20911Cu;
        goto label_20911c;
    }
    ctx->pc = 0x209114u;
    SET_GPR_U32(ctx, 31, 0x20911Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x209114u, 0x20911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20911Cu;
label_20911c:
    // 0x20911c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20911cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_209120:
    // 0x209120: 0xc06765c  jal         func_19D970
label_209124:
    if (ctx->pc == 0x209124u) {
        ctx->pc = 0x209128u;
        goto label_209128;
    }
    ctx->pc = 0x209120u;
    SET_GPR_U32(ctx, 31, 0x209128u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x209120u, 0x209128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209128u;
label_209128:
    // 0x209128: 0x3c023e06  lui         $v0, 0x3E06
    ctx->pc = 0x209128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15878 << 16));
label_20912c:
    // 0x20912c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x20912cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_209130:
    // 0x209130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x209130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_209134:
    // 0x209134: 0x0  nop
    ctx->pc = 0x209134u;
    // NOP
label_209138:
    // 0x209138: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x209138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20913c:
    // 0x20913c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x20913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209140:
    // 0x209140: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_209144:
    // 0x209144: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x209144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_209148:
    // 0x209148: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20914c:
    // 0x20914c: 0x24449280  addiu       $a0, $v0, -0x6D80
    ctx->pc = 0x20914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
label_209150:
    // 0x209150: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x209150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_209154:
    // 0x209154: 0xc067844  jal         func_19E110
label_209158:
    if (ctx->pc == 0x209158u) {
        ctx->pc = 0x20915Cu;
        goto label_20915c;
    }
    ctx->pc = 0x209154u;
    SET_GPR_U32(ctx, 31, 0x20915Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x209154u, 0x20915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20915Cu;
label_20915c:
    // 0x20915c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20915cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209160:
    // 0x209160: 0x0  nop
    ctx->pc = 0x209160u;
    // NOP
label_209164:
    // 0x209164: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x209164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_209168:
    // 0x209168: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x209168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_20916c:
    // 0x20916c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x20916cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_209170:
    // 0x209170: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x209170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_209174:
    // 0x209174: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x209174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_209178:
    // 0x209178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20917c:
    // 0x20917c: 0x0  nop
    ctx->pc = 0x20917cu;
    // NOP
label_209180:
    // 0x209180: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x209180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_209184:
    // 0x209184: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x209184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_209188:
    // 0x209188: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20918c:
    // 0x20918c: 0x24459280  addiu       $a1, $v0, -0x6D80
    ctx->pc = 0x20918cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
label_209190:
    // 0x209190: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x209190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_209194:
    // 0x209194: 0xc040bf4  jal         func_102FD0
label_209198:
    if (ctx->pc == 0x209198u) {
        ctx->pc = 0x20919Cu;
        goto label_20919c;
    }
    ctx->pc = 0x209194u;
    SET_GPR_U32(ctx, 31, 0x20919Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20919Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20919Cu) { return; }
    ctx->pc = 0x20919Cu;
label_20919c:
    // 0x20919c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2091a0:
    // 0x2091a0: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x2091a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
label_2091a4:
    // 0x2091a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2091a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2091a8:
    // 0x2091a8: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x2091a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
label_2091ac:
    // 0x2091ac: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2091acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2091b0:
    // 0x2091b0: 0xc040c7a  jal         func_1031E8
label_2091b4:
    if (ctx->pc == 0x2091B4u) {
        ctx->pc = 0x2091B8u;
        goto label_2091b8;
    }
    ctx->pc = 0x2091B0u;
    SET_GPR_U32(ctx, 31, 0x2091B8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2091B8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2091B8u) { return; }
    ctx->pc = 0x2091B8u;
label_2091b8:
    // 0x2091b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2091b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2091bc:
    // 0x2091bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2091bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2091c0:
    // 0x2091c0: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x2091c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939332), bits); }
label_2091c4:
    // 0x2091c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2091c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2091c8:
    // 0x2091c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2091c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2091cc:
    // 0x2091cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2091ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2091d0:
    // 0x2091d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2091d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2091d4:
    // 0x2091d4: 0xc42092d4  lwc1        $f0, -0x6D2C($at)
    ctx->pc = 0x2091d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2091d8:
    // 0x2091d8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2091d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2091dc:
    // 0x2091dc: 0xc058fec  jal         func_163FB0
label_2091e0:
    if (ctx->pc == 0x2091E0u) {
        ctx->pc = 0x2091E4u;
        goto label_2091e4;
    }
    ctx->pc = 0x2091DCu;
    SET_GPR_U32(ctx, 31, 0x2091E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2091DCu, 0x2091E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091E4u;
label_2091e4:
    // 0x2091e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2091e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2091e8:
    // 0x2091e8: 0xe42092d4  swc1        $f0, -0x6D2C($at)
    ctx->pc = 0x2091e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939348), bits); }
label_2091ec:
    // 0x2091ec: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2091ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2091f0:
    // 0x2091f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2091f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2091f4:
    // 0x2091f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2091f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2091f8:
    // 0x2091f8: 0x244692c0  addiu       $a2, $v0, -0x6D40
    ctx->pc = 0x2091f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
label_2091fc:
    // 0x2091fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2091fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_209200:
    // 0x209200: 0x244792d0  addiu       $a3, $v0, -0x6D30
    ctx->pc = 0x209200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
label_209204:
    // 0x209204: 0xc0bb3e8  jal         func_2ECFA0
label_209208:
    if (ctx->pc == 0x209208u) {
        ctx->pc = 0x20920Cu;
        goto label_20920c;
    }
    ctx->pc = 0x209204u;
    SET_GPR_U32(ctx, 31, 0x20920Cu);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x209204u, 0x20920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20920Cu;
label_20920c:
    // 0x20920c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_209210:
    if (ctx->pc == 0x209210u) {
        ctx->pc = 0x209214u;
        goto label_209214;
    }
    ctx->pc = 0x20920Cu;
    {
        const bool branch_taken_0x20920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20920c) {
            ctx->pc = 0x2094A0u;
            goto label_2094a0;
        }
    }
    ctx->pc = 0x209214u;
label_209214:
    // 0x209214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209218:
    // 0x209218: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x209218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_20921c:
    // 0x20921c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_209220:
    // 0x209220: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x209220u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_209224:
    // 0x209224: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x209224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_209228:
    // 0x209228: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x209228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_20922c:
    // 0x20922c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_209230:
    // 0x209230: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x209230u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_209234:
    // 0x209234: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x209234u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_209238:
    // 0x209238: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_20923c:
    if (ctx->pc == 0x20923Cu) {
        ctx->pc = 0x209240u;
        goto label_209240;
    }
    ctx->pc = 0x209238u;
    {
        const bool branch_taken_0x209238 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x209238) {
            ctx->pc = 0x209250u;
            goto label_209250;
        }
    }
    ctx->pc = 0x209240u;
label_209240:
    // 0x209240: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209244:
    // 0x209244: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x209244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_209248:
    // 0x209248: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20924c:
    // 0x20924c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20924cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_209250:
    // 0x209250: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x209250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209254:
    // 0x209254: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x209254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209258:
    // 0x209258: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x209258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_20925c:
    // 0x20925c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20925cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209260:
    // 0x209260: 0x0  nop
    ctx->pc = 0x209260u;
    // NOP
label_209264:
    // 0x209264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209268:
    // 0x209268: 0x0  nop
    ctx->pc = 0x209268u;
    // NOP
label_20926c:
    // 0x20926c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_209270:
    if (ctx->pc == 0x209270u) {
        ctx->pc = 0x209274u;
        goto label_209274;
    }
    ctx->pc = 0x20926Cu;
    {
        const bool branch_taken_0x20926c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20926c) {
            ctx->pc = 0x209290u;
            goto label_209290;
        }
    }
    ctx->pc = 0x209274u;
label_209274:
    // 0x209274: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209278:
    // 0x209278: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x209278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20927c:
    // 0x20927c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x20927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_209280:
    // 0x209280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209284:
    // 0x209284: 0x0  nop
    ctx->pc = 0x209284u;
    // NOP
label_209288:
    // 0x209288: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20928c:
    // 0x20928c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x20928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_209290:
    // 0x209290: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209294:
    // 0x209294: 0xc05cd34  jal         func_1734D0
label_209298:
    if (ctx->pc == 0x209298u) {
        ctx->pc = 0x20929Cu;
        goto label_20929c;
    }
    ctx->pc = 0x209294u;
    SET_GPR_U32(ctx, 31, 0x20929Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x209294u, 0x20929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20929Cu;
label_20929c:
    // 0x20929c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2092a0:
    // 0x2092a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2092a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2092a4:
    // 0x2092a4: 0xc080f60  jal         func_203D80
label_2092a8:
    if (ctx->pc == 0x2092A8u) {
        ctx->pc = 0x2092ACu;
        goto label_2092ac;
    }
    ctx->pc = 0x2092A4u;
    SET_GPR_U32(ctx, 31, 0x2092ACu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2092A4u, 0x2092ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092ACu;
label_2092ac:
    // 0x2092ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2092acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2092b0:
    // 0x2092b0: 0xc0974c8  jal         func_25D320
label_2092b4:
    if (ctx->pc == 0x2092B4u) {
        ctx->pc = 0x2092B8u;
        goto label_2092b8;
    }
    ctx->pc = 0x2092B0u;
    SET_GPR_U32(ctx, 31, 0x2092B8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2092B0u, 0x2092B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092B8u;
label_2092b8:
    // 0x2092b8: 0x10000079  b           . + 4 + (0x79 << 2)
label_2092bc:
    if (ctx->pc == 0x2092BCu) {
        ctx->pc = 0x2092C0u;
        goto label_2092c0;
    }
    ctx->pc = 0x2092B8u;
    {
        const bool branch_taken_0x2092b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092b8) {
            ctx->pc = 0x2094A0u;
            goto label_2094a0;
        }
    }
    ctx->pc = 0x2092C0u;
label_2092c0:
    // 0x2092c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2092c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2092c4:
    // 0x2092c4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2092c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2092c8:
    // 0x2092c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2092c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2092cc:
    // 0x2092cc: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2092ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2092d0:
    // 0x2092d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2092d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2092d4:
    // 0x2092d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2092d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2092d8:
    // 0x2092d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2092d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2092dc:
    // 0x2092dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2092dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2092e0:
    // 0x2092e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2092e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2092e4:
    // 0x2092e4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2092e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_2092e8:
    // 0x2092e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2092e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2092ec:
    // 0x2092ec: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2092ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2092f0:
    // 0x2092f0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2092f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2092f4:
    // 0x2092f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2092f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2092f8:
    // 0x2092f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2092f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2092fc:
    // 0x2092fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2092fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_209300:
    // 0x209300: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x209300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_209304:
    // 0x209304: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
label_209308:
    if (ctx->pc == 0x209308u) {
        ctx->pc = 0x20930Cu;
        goto label_20930c;
    }
    ctx->pc = 0x209304u;
    {
        const bool branch_taken_0x209304 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x209304) {
            ctx->pc = 0x2093D4u;
            goto label_2093d4;
        }
    }
    ctx->pc = 0x20930Cu;
label_20930c:
    // 0x20930c: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x20930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209310:
    // 0x209310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209314:
    // 0x209314: 0x0  nop
    ctx->pc = 0x209314u;
    // NOP
label_209318:
    // 0x209318: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x209318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20931c:
    // 0x20931c: 0x0  nop
    ctx->pc = 0x20931cu;
    // NOP
label_209320:
    // 0x209320: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_209324:
    if (ctx->pc == 0x209324u) {
        ctx->pc = 0x209328u;
        goto label_209328;
    }
    ctx->pc = 0x209320u;
    {
        const bool branch_taken_0x209320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209320) {
            ctx->pc = 0x20937Cu;
            goto label_20937c;
        }
    }
    ctx->pc = 0x209328u;
label_209328:
    // 0x209328: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x209328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20932c:
    // 0x20932c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x20932cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_209330:
    // 0x209330: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x209330u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209334:
    // 0x209334: 0x0  nop
    ctx->pc = 0x209334u;
    // NOP
label_209338:
    // 0x209338: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20933c:
    // 0x20933c: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x20933cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_209340:
    // 0x209340: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x209340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209344:
    // 0x209344: 0x3c043fcc  lui         $a0, 0x3FCC
    ctx->pc = 0x209344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16332 << 16));
label_209348:
    // 0x209348: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x209348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_20934c:
    // 0x20934c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20934cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209350:
    // 0x209350: 0x0  nop
    ctx->pc = 0x209350u;
    // NOP
label_209354:
    // 0x209354: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209358:
    // 0x209358: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_20935c:
    // 0x20935c: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x20935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209360:
    // 0x209360: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x209360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_209364:
    // 0x209364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209368:
    // 0x209368: 0x0  nop
    ctx->pc = 0x209368u;
    // NOP
label_20936c:
    // 0x20936c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20936cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209370:
    // 0x209370: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_209374:
    // 0x209374: 0x10000017  b           . + 4 + (0x17 << 2)
label_209378:
    if (ctx->pc == 0x209378u) {
        ctx->pc = 0x20937Cu;
        goto label_20937c;
    }
    ctx->pc = 0x209374u;
    {
        const bool branch_taken_0x209374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209374) {
            ctx->pc = 0x2093D4u;
            goto label_2093d4;
        }
    }
    ctx->pc = 0x20937Cu;
label_20937c:
    // 0x20937c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20937cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209380:
    // 0x209380: 0x0  nop
    ctx->pc = 0x209380u;
    // NOP
label_209384:
    // 0x209384: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x209384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_209388:
    // 0x209388: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20938c:
    // 0x20938c: 0x0  nop
    ctx->pc = 0x20938cu;
    // NOP
label_209390:
    // 0x209390: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_209394:
    // 0x209394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209398:
    // 0x209398: 0x0  nop
    ctx->pc = 0x209398u;
    // NOP
label_20939c:
    // 0x20939c: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x20939cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_2093a0:
    // 0x2093a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2093a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2093a4:
    // 0x2093a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2093a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2093a8:
    // 0x2093a8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2093a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2093ac:
    // 0x2093ac: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2093acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2093b0:
    // 0x2093b0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2093b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2093b4:
    // 0x2093b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2093b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2093b8:
    // 0x2093b8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2093b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2093bc:
    // 0x2093bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2093bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2093c0:
    // 0x2093c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2093c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2093c4:
    // 0x2093c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2093c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2093c8:
    // 0x2093c8: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x2093c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2093cc:
    // 0x2093cc: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x2093ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2093d0:
    // 0x2093d0: 0xa0860002  sb          $a2, 0x2($a0)
    ctx->pc = 0x2093d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
label_2093d4:
    // 0x2093d4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2093d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2093d8:
    // 0x2093d8: 0xc4e10188  lwc1        $f1, 0x188($a3)
    ctx->pc = 0x2093d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2093dc:
    // 0x2093dc: 0x3c084348  lui         $t0, 0x4348
    ctx->pc = 0x2093dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17224 << 16));
label_2093e0:
    // 0x2093e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2093e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2093e4:
    // 0x2093e4: 0x0  nop
    ctx->pc = 0x2093e4u;
    // NOP
label_2093e8:
    // 0x2093e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2093e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2093ec:
    // 0x2093ec: 0x0  nop
    ctx->pc = 0x2093ecu;
    // NOP
label_2093f0:
    // 0x2093f0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2093f4:
    if (ctx->pc == 0x2093F4u) {
        ctx->pc = 0x2093F8u;
        goto label_2093f8;
    }
    ctx->pc = 0x2093F0u;
    {
        const bool branch_taken_0x2093f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2093f0) {
            ctx->pc = 0x209414u;
            goto label_209414;
        }
    }
    ctx->pc = 0x2093F8u;
label_2093f8:
    // 0x2093f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2093f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2093fc:
    // 0x2093fc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2093fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209400:
    // 0x209400: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x209400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_209404:
    // 0x209404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209408:
    // 0x209408: 0x0  nop
    ctx->pc = 0x209408u;
    // NOP
label_20940c:
    // 0x20940c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20940cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_209410:
    // 0x209410: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x209410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_209414:
    // 0x209414: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209418:
    // 0x209418: 0xc05cd34  jal         func_1734D0
label_20941c:
    if (ctx->pc == 0x20941Cu) {
        ctx->pc = 0x209420u;
        goto label_209420;
    }
    ctx->pc = 0x209418u;
    SET_GPR_U32(ctx, 31, 0x209420u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x209418u, 0x209420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209420u;
label_209420:
    // 0x209420: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209424:
    // 0x209424: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x209424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_209428:
    // 0x209428: 0xc080f60  jal         func_203D80
label_20942c:
    if (ctx->pc == 0x20942Cu) {
        ctx->pc = 0x209430u;
        goto label_209430;
    }
    ctx->pc = 0x209428u;
    SET_GPR_U32(ctx, 31, 0x209430u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209428u, 0x209430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209430u;
label_209430:
    // 0x209430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x209430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_209434:
    // 0x209434: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x209434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209438:
    // 0x209438: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x209438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20943c:
    // 0x20943c: 0xc0974c8  jal         func_25D320
label_209440:
    if (ctx->pc == 0x209440u) {
        ctx->pc = 0x209444u;
        goto label_209444;
    }
    ctx->pc = 0x20943Cu;
    SET_GPR_U32(ctx, 31, 0x209444u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20943Cu, 0x209444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209444u;
label_209444:
    // 0x209444: 0x10000016  b           . + 4 + (0x16 << 2)
label_209448:
    if (ctx->pc == 0x209448u) {
        ctx->pc = 0x20944Cu;
        goto label_20944c;
    }
    ctx->pc = 0x209444u;
    {
        const bool branch_taken_0x209444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209444) {
            ctx->pc = 0x2094A0u;
            goto label_2094a0;
        }
    }
    ctx->pc = 0x20944Cu;
label_20944c:
    // 0x20944c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x20944cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_209450:
    // 0x209450: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x209450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_209454:
    // 0x209454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209458:
    // 0x209458: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_20945c:
    // 0x20945c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x20945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_209460:
    // 0x209460: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209464:
    // 0x209464: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x209464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_209468:
    // 0x209468: 0x34a60002  ori         $a2, $a1, 0x2
    ctx->pc = 0x209468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_20946c:
    // 0x20946c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x20946cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_209470:
    // 0x209470: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209474:
    // 0x209474: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209478:
    // 0x209478: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x209478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_20947c:
    // 0x20947c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x20947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_209480:
    // 0x209480: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209484:
    // 0x209484: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x209484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_209488:
    // 0x209488: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_20948c:
    // 0x20948c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x20948cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_209490:
    // 0x209490: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_209494:
    // 0x209494: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x209494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_209498:
    // 0x209498: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x209498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_20949c:
    // 0x20949c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x20949cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2094a0:
    // 0x2094a0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2094a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2094a4:
    // 0x2094a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2094a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2094a8:
    // 0x2094a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2094a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2094ac:
    // 0x2094ac: 0x3e00008  jr          $ra
label_2094b0:
    if (ctx->pc == 0x2094B0u) {
        ctx->pc = 0x2094B4u;
        goto label_fallthrough_0x2094ac;
    }
    ctx->pc = 0x2094ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2094ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2094ac:
    ctx->pc = 0x2094B4u;
}
