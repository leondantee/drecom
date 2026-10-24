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

// Function: Em0c_R1_mv09
// Address: 0x227aa0 - 0x228758
void Em0c_R1_mv09_0x227aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv09_0x227aa0");
#endif

    switch (ctx->pc) {
        case 0x227aa0u: goto label_227aa0;
        case 0x227aa4u: goto label_227aa4;
        case 0x227aa8u: goto label_227aa8;
        case 0x227aacu: goto label_227aac;
        case 0x227ab0u: goto label_227ab0;
        case 0x227ab4u: goto label_227ab4;
        case 0x227ab8u: goto label_227ab8;
        case 0x227abcu: goto label_227abc;
        case 0x227ac0u: goto label_227ac0;
        case 0x227ac4u: goto label_227ac4;
        case 0x227ac8u: goto label_227ac8;
        case 0x227accu: goto label_227acc;
        case 0x227ad0u: goto label_227ad0;
        case 0x227ad4u: goto label_227ad4;
        case 0x227ad8u: goto label_227ad8;
        case 0x227adcu: goto label_227adc;
        case 0x227ae0u: goto label_227ae0;
        case 0x227ae4u: goto label_227ae4;
        case 0x227ae8u: goto label_227ae8;
        case 0x227aecu: goto label_227aec;
        case 0x227af0u: goto label_227af0;
        case 0x227af4u: goto label_227af4;
        case 0x227af8u: goto label_227af8;
        case 0x227afcu: goto label_227afc;
        case 0x227b00u: goto label_227b00;
        case 0x227b04u: goto label_227b04;
        case 0x227b08u: goto label_227b08;
        case 0x227b0cu: goto label_227b0c;
        case 0x227b10u: goto label_227b10;
        case 0x227b14u: goto label_227b14;
        case 0x227b18u: goto label_227b18;
        case 0x227b1cu: goto label_227b1c;
        case 0x227b20u: goto label_227b20;
        case 0x227b24u: goto label_227b24;
        case 0x227b28u: goto label_227b28;
        case 0x227b2cu: goto label_227b2c;
        case 0x227b30u: goto label_227b30;
        case 0x227b34u: goto label_227b34;
        case 0x227b38u: goto label_227b38;
        case 0x227b3cu: goto label_227b3c;
        case 0x227b40u: goto label_227b40;
        case 0x227b44u: goto label_227b44;
        case 0x227b48u: goto label_227b48;
        case 0x227b4cu: goto label_227b4c;
        case 0x227b50u: goto label_227b50;
        case 0x227b54u: goto label_227b54;
        case 0x227b58u: goto label_227b58;
        case 0x227b5cu: goto label_227b5c;
        case 0x227b60u: goto label_227b60;
        case 0x227b64u: goto label_227b64;
        case 0x227b68u: goto label_227b68;
        case 0x227b6cu: goto label_227b6c;
        case 0x227b70u: goto label_227b70;
        case 0x227b74u: goto label_227b74;
        case 0x227b78u: goto label_227b78;
        case 0x227b7cu: goto label_227b7c;
        case 0x227b80u: goto label_227b80;
        case 0x227b84u: goto label_227b84;
        case 0x227b88u: goto label_227b88;
        case 0x227b8cu: goto label_227b8c;
        case 0x227b90u: goto label_227b90;
        case 0x227b94u: goto label_227b94;
        case 0x227b98u: goto label_227b98;
        case 0x227b9cu: goto label_227b9c;
        case 0x227ba0u: goto label_227ba0;
        case 0x227ba4u: goto label_227ba4;
        case 0x227ba8u: goto label_227ba8;
        case 0x227bacu: goto label_227bac;
        case 0x227bb0u: goto label_227bb0;
        case 0x227bb4u: goto label_227bb4;
        case 0x227bb8u: goto label_227bb8;
        case 0x227bbcu: goto label_227bbc;
        case 0x227bc0u: goto label_227bc0;
        case 0x227bc4u: goto label_227bc4;
        case 0x227bc8u: goto label_227bc8;
        case 0x227bccu: goto label_227bcc;
        case 0x227bd0u: goto label_227bd0;
        case 0x227bd4u: goto label_227bd4;
        case 0x227bd8u: goto label_227bd8;
        case 0x227bdcu: goto label_227bdc;
        case 0x227be0u: goto label_227be0;
        case 0x227be4u: goto label_227be4;
        case 0x227be8u: goto label_227be8;
        case 0x227becu: goto label_227bec;
        case 0x227bf0u: goto label_227bf0;
        case 0x227bf4u: goto label_227bf4;
        case 0x227bf8u: goto label_227bf8;
        case 0x227bfcu: goto label_227bfc;
        case 0x227c00u: goto label_227c00;
        case 0x227c04u: goto label_227c04;
        case 0x227c08u: goto label_227c08;
        case 0x227c0cu: goto label_227c0c;
        case 0x227c10u: goto label_227c10;
        case 0x227c14u: goto label_227c14;
        case 0x227c18u: goto label_227c18;
        case 0x227c1cu: goto label_227c1c;
        case 0x227c20u: goto label_227c20;
        case 0x227c24u: goto label_227c24;
        case 0x227c28u: goto label_227c28;
        case 0x227c2cu: goto label_227c2c;
        case 0x227c30u: goto label_227c30;
        case 0x227c34u: goto label_227c34;
        case 0x227c38u: goto label_227c38;
        case 0x227c3cu: goto label_227c3c;
        case 0x227c40u: goto label_227c40;
        case 0x227c44u: goto label_227c44;
        case 0x227c48u: goto label_227c48;
        case 0x227c4cu: goto label_227c4c;
        case 0x227c50u: goto label_227c50;
        case 0x227c54u: goto label_227c54;
        case 0x227c58u: goto label_227c58;
        case 0x227c5cu: goto label_227c5c;
        case 0x227c60u: goto label_227c60;
        case 0x227c64u: goto label_227c64;
        case 0x227c68u: goto label_227c68;
        case 0x227c6cu: goto label_227c6c;
        case 0x227c70u: goto label_227c70;
        case 0x227c74u: goto label_227c74;
        case 0x227c78u: goto label_227c78;
        case 0x227c7cu: goto label_227c7c;
        case 0x227c80u: goto label_227c80;
        case 0x227c84u: goto label_227c84;
        case 0x227c88u: goto label_227c88;
        case 0x227c8cu: goto label_227c8c;
        case 0x227c90u: goto label_227c90;
        case 0x227c94u: goto label_227c94;
        case 0x227c98u: goto label_227c98;
        case 0x227c9cu: goto label_227c9c;
        case 0x227ca0u: goto label_227ca0;
        case 0x227ca4u: goto label_227ca4;
        case 0x227ca8u: goto label_227ca8;
        case 0x227cacu: goto label_227cac;
        case 0x227cb0u: goto label_227cb0;
        case 0x227cb4u: goto label_227cb4;
        case 0x227cb8u: goto label_227cb8;
        case 0x227cbcu: goto label_227cbc;
        case 0x227cc0u: goto label_227cc0;
        case 0x227cc4u: goto label_227cc4;
        case 0x227cc8u: goto label_227cc8;
        case 0x227cccu: goto label_227ccc;
        case 0x227cd0u: goto label_227cd0;
        case 0x227cd4u: goto label_227cd4;
        case 0x227cd8u: goto label_227cd8;
        case 0x227cdcu: goto label_227cdc;
        case 0x227ce0u: goto label_227ce0;
        case 0x227ce4u: goto label_227ce4;
        case 0x227ce8u: goto label_227ce8;
        case 0x227cecu: goto label_227cec;
        case 0x227cf0u: goto label_227cf0;
        case 0x227cf4u: goto label_227cf4;
        case 0x227cf8u: goto label_227cf8;
        case 0x227cfcu: goto label_227cfc;
        case 0x227d00u: goto label_227d00;
        case 0x227d04u: goto label_227d04;
        case 0x227d08u: goto label_227d08;
        case 0x227d0cu: goto label_227d0c;
        case 0x227d10u: goto label_227d10;
        case 0x227d14u: goto label_227d14;
        case 0x227d18u: goto label_227d18;
        case 0x227d1cu: goto label_227d1c;
        case 0x227d20u: goto label_227d20;
        case 0x227d24u: goto label_227d24;
        case 0x227d28u: goto label_227d28;
        case 0x227d2cu: goto label_227d2c;
        case 0x227d30u: goto label_227d30;
        case 0x227d34u: goto label_227d34;
        case 0x227d38u: goto label_227d38;
        case 0x227d3cu: goto label_227d3c;
        case 0x227d40u: goto label_227d40;
        case 0x227d44u: goto label_227d44;
        case 0x227d48u: goto label_227d48;
        case 0x227d4cu: goto label_227d4c;
        case 0x227d50u: goto label_227d50;
        case 0x227d54u: goto label_227d54;
        case 0x227d58u: goto label_227d58;
        case 0x227d5cu: goto label_227d5c;
        case 0x227d60u: goto label_227d60;
        case 0x227d64u: goto label_227d64;
        case 0x227d68u: goto label_227d68;
        case 0x227d6cu: goto label_227d6c;
        case 0x227d70u: goto label_227d70;
        case 0x227d74u: goto label_227d74;
        case 0x227d78u: goto label_227d78;
        case 0x227d7cu: goto label_227d7c;
        case 0x227d80u: goto label_227d80;
        case 0x227d84u: goto label_227d84;
        case 0x227d88u: goto label_227d88;
        case 0x227d8cu: goto label_227d8c;
        case 0x227d90u: goto label_227d90;
        case 0x227d94u: goto label_227d94;
        case 0x227d98u: goto label_227d98;
        case 0x227d9cu: goto label_227d9c;
        case 0x227da0u: goto label_227da0;
        case 0x227da4u: goto label_227da4;
        case 0x227da8u: goto label_227da8;
        case 0x227dacu: goto label_227dac;
        case 0x227db0u: goto label_227db0;
        case 0x227db4u: goto label_227db4;
        case 0x227db8u: goto label_227db8;
        case 0x227dbcu: goto label_227dbc;
        case 0x227dc0u: goto label_227dc0;
        case 0x227dc4u: goto label_227dc4;
        case 0x227dc8u: goto label_227dc8;
        case 0x227dccu: goto label_227dcc;
        case 0x227dd0u: goto label_227dd0;
        case 0x227dd4u: goto label_227dd4;
        case 0x227dd8u: goto label_227dd8;
        case 0x227ddcu: goto label_227ddc;
        case 0x227de0u: goto label_227de0;
        case 0x227de4u: goto label_227de4;
        case 0x227de8u: goto label_227de8;
        case 0x227decu: goto label_227dec;
        case 0x227df0u: goto label_227df0;
        case 0x227df4u: goto label_227df4;
        case 0x227df8u: goto label_227df8;
        case 0x227dfcu: goto label_227dfc;
        case 0x227e00u: goto label_227e00;
        case 0x227e04u: goto label_227e04;
        case 0x227e08u: goto label_227e08;
        case 0x227e0cu: goto label_227e0c;
        case 0x227e10u: goto label_227e10;
        case 0x227e14u: goto label_227e14;
        case 0x227e18u: goto label_227e18;
        case 0x227e1cu: goto label_227e1c;
        case 0x227e20u: goto label_227e20;
        case 0x227e24u: goto label_227e24;
        case 0x227e28u: goto label_227e28;
        case 0x227e2cu: goto label_227e2c;
        case 0x227e30u: goto label_227e30;
        case 0x227e34u: goto label_227e34;
        case 0x227e38u: goto label_227e38;
        case 0x227e3cu: goto label_227e3c;
        case 0x227e40u: goto label_227e40;
        case 0x227e44u: goto label_227e44;
        case 0x227e48u: goto label_227e48;
        case 0x227e4cu: goto label_227e4c;
        case 0x227e50u: goto label_227e50;
        case 0x227e54u: goto label_227e54;
        case 0x227e58u: goto label_227e58;
        case 0x227e5cu: goto label_227e5c;
        case 0x227e60u: goto label_227e60;
        case 0x227e64u: goto label_227e64;
        case 0x227e68u: goto label_227e68;
        case 0x227e6cu: goto label_227e6c;
        case 0x227e70u: goto label_227e70;
        case 0x227e74u: goto label_227e74;
        case 0x227e78u: goto label_227e78;
        case 0x227e7cu: goto label_227e7c;
        case 0x227e80u: goto label_227e80;
        case 0x227e84u: goto label_227e84;
        case 0x227e88u: goto label_227e88;
        case 0x227e8cu: goto label_227e8c;
        case 0x227e90u: goto label_227e90;
        case 0x227e94u: goto label_227e94;
        case 0x227e98u: goto label_227e98;
        case 0x227e9cu: goto label_227e9c;
        case 0x227ea0u: goto label_227ea0;
        case 0x227ea4u: goto label_227ea4;
        case 0x227ea8u: goto label_227ea8;
        case 0x227eacu: goto label_227eac;
        case 0x227eb0u: goto label_227eb0;
        case 0x227eb4u: goto label_227eb4;
        case 0x227eb8u: goto label_227eb8;
        case 0x227ebcu: goto label_227ebc;
        case 0x227ec0u: goto label_227ec0;
        case 0x227ec4u: goto label_227ec4;
        case 0x227ec8u: goto label_227ec8;
        case 0x227eccu: goto label_227ecc;
        case 0x227ed0u: goto label_227ed0;
        case 0x227ed4u: goto label_227ed4;
        case 0x227ed8u: goto label_227ed8;
        case 0x227edcu: goto label_227edc;
        case 0x227ee0u: goto label_227ee0;
        case 0x227ee4u: goto label_227ee4;
        case 0x227ee8u: goto label_227ee8;
        case 0x227eecu: goto label_227eec;
        case 0x227ef0u: goto label_227ef0;
        case 0x227ef4u: goto label_227ef4;
        case 0x227ef8u: goto label_227ef8;
        case 0x227efcu: goto label_227efc;
        case 0x227f00u: goto label_227f00;
        case 0x227f04u: goto label_227f04;
        case 0x227f08u: goto label_227f08;
        case 0x227f0cu: goto label_227f0c;
        case 0x227f10u: goto label_227f10;
        case 0x227f14u: goto label_227f14;
        case 0x227f18u: goto label_227f18;
        case 0x227f1cu: goto label_227f1c;
        case 0x227f20u: goto label_227f20;
        case 0x227f24u: goto label_227f24;
        case 0x227f28u: goto label_227f28;
        case 0x227f2cu: goto label_227f2c;
        case 0x227f30u: goto label_227f30;
        case 0x227f34u: goto label_227f34;
        case 0x227f38u: goto label_227f38;
        case 0x227f3cu: goto label_227f3c;
        case 0x227f40u: goto label_227f40;
        case 0x227f44u: goto label_227f44;
        case 0x227f48u: goto label_227f48;
        case 0x227f4cu: goto label_227f4c;
        case 0x227f50u: goto label_227f50;
        case 0x227f54u: goto label_227f54;
        case 0x227f58u: goto label_227f58;
        case 0x227f5cu: goto label_227f5c;
        case 0x227f60u: goto label_227f60;
        case 0x227f64u: goto label_227f64;
        case 0x227f68u: goto label_227f68;
        case 0x227f6cu: goto label_227f6c;
        case 0x227f70u: goto label_227f70;
        case 0x227f74u: goto label_227f74;
        case 0x227f78u: goto label_227f78;
        case 0x227f7cu: goto label_227f7c;
        case 0x227f80u: goto label_227f80;
        case 0x227f84u: goto label_227f84;
        case 0x227f88u: goto label_227f88;
        case 0x227f8cu: goto label_227f8c;
        case 0x227f90u: goto label_227f90;
        case 0x227f94u: goto label_227f94;
        case 0x227f98u: goto label_227f98;
        case 0x227f9cu: goto label_227f9c;
        case 0x227fa0u: goto label_227fa0;
        case 0x227fa4u: goto label_227fa4;
        case 0x227fa8u: goto label_227fa8;
        case 0x227facu: goto label_227fac;
        case 0x227fb0u: goto label_227fb0;
        case 0x227fb4u: goto label_227fb4;
        case 0x227fb8u: goto label_227fb8;
        case 0x227fbcu: goto label_227fbc;
        case 0x227fc0u: goto label_227fc0;
        case 0x227fc4u: goto label_227fc4;
        case 0x227fc8u: goto label_227fc8;
        case 0x227fccu: goto label_227fcc;
        case 0x227fd0u: goto label_227fd0;
        case 0x227fd4u: goto label_227fd4;
        case 0x227fd8u: goto label_227fd8;
        case 0x227fdcu: goto label_227fdc;
        case 0x227fe0u: goto label_227fe0;
        case 0x227fe4u: goto label_227fe4;
        case 0x227fe8u: goto label_227fe8;
        case 0x227fecu: goto label_227fec;
        case 0x227ff0u: goto label_227ff0;
        case 0x227ff4u: goto label_227ff4;
        case 0x227ff8u: goto label_227ff8;
        case 0x227ffcu: goto label_227ffc;
        case 0x228000u: goto label_228000;
        case 0x228004u: goto label_228004;
        case 0x228008u: goto label_228008;
        case 0x22800cu: goto label_22800c;
        case 0x228010u: goto label_228010;
        case 0x228014u: goto label_228014;
        case 0x228018u: goto label_228018;
        case 0x22801cu: goto label_22801c;
        case 0x228020u: goto label_228020;
        case 0x228024u: goto label_228024;
        case 0x228028u: goto label_228028;
        case 0x22802cu: goto label_22802c;
        case 0x228030u: goto label_228030;
        case 0x228034u: goto label_228034;
        case 0x228038u: goto label_228038;
        case 0x22803cu: goto label_22803c;
        case 0x228040u: goto label_228040;
        case 0x228044u: goto label_228044;
        case 0x228048u: goto label_228048;
        case 0x22804cu: goto label_22804c;
        case 0x228050u: goto label_228050;
        case 0x228054u: goto label_228054;
        case 0x228058u: goto label_228058;
        case 0x22805cu: goto label_22805c;
        case 0x228060u: goto label_228060;
        case 0x228064u: goto label_228064;
        case 0x228068u: goto label_228068;
        case 0x22806cu: goto label_22806c;
        case 0x228070u: goto label_228070;
        case 0x228074u: goto label_228074;
        case 0x228078u: goto label_228078;
        case 0x22807cu: goto label_22807c;
        case 0x228080u: goto label_228080;
        case 0x228084u: goto label_228084;
        case 0x228088u: goto label_228088;
        case 0x22808cu: goto label_22808c;
        case 0x228090u: goto label_228090;
        case 0x228094u: goto label_228094;
        case 0x228098u: goto label_228098;
        case 0x22809cu: goto label_22809c;
        case 0x2280a0u: goto label_2280a0;
        case 0x2280a4u: goto label_2280a4;
        case 0x2280a8u: goto label_2280a8;
        case 0x2280acu: goto label_2280ac;
        case 0x2280b0u: goto label_2280b0;
        case 0x2280b4u: goto label_2280b4;
        case 0x2280b8u: goto label_2280b8;
        case 0x2280bcu: goto label_2280bc;
        case 0x2280c0u: goto label_2280c0;
        case 0x2280c4u: goto label_2280c4;
        case 0x2280c8u: goto label_2280c8;
        case 0x2280ccu: goto label_2280cc;
        case 0x2280d0u: goto label_2280d0;
        case 0x2280d4u: goto label_2280d4;
        case 0x2280d8u: goto label_2280d8;
        case 0x2280dcu: goto label_2280dc;
        case 0x2280e0u: goto label_2280e0;
        case 0x2280e4u: goto label_2280e4;
        case 0x2280e8u: goto label_2280e8;
        case 0x2280ecu: goto label_2280ec;
        case 0x2280f0u: goto label_2280f0;
        case 0x2280f4u: goto label_2280f4;
        case 0x2280f8u: goto label_2280f8;
        case 0x2280fcu: goto label_2280fc;
        case 0x228100u: goto label_228100;
        case 0x228104u: goto label_228104;
        case 0x228108u: goto label_228108;
        case 0x22810cu: goto label_22810c;
        case 0x228110u: goto label_228110;
        case 0x228114u: goto label_228114;
        case 0x228118u: goto label_228118;
        case 0x22811cu: goto label_22811c;
        case 0x228120u: goto label_228120;
        case 0x228124u: goto label_228124;
        case 0x228128u: goto label_228128;
        case 0x22812cu: goto label_22812c;
        case 0x228130u: goto label_228130;
        case 0x228134u: goto label_228134;
        case 0x228138u: goto label_228138;
        case 0x22813cu: goto label_22813c;
        case 0x228140u: goto label_228140;
        case 0x228144u: goto label_228144;
        case 0x228148u: goto label_228148;
        case 0x22814cu: goto label_22814c;
        case 0x228150u: goto label_228150;
        case 0x228154u: goto label_228154;
        case 0x228158u: goto label_228158;
        case 0x22815cu: goto label_22815c;
        case 0x228160u: goto label_228160;
        case 0x228164u: goto label_228164;
        case 0x228168u: goto label_228168;
        case 0x22816cu: goto label_22816c;
        case 0x228170u: goto label_228170;
        case 0x228174u: goto label_228174;
        case 0x228178u: goto label_228178;
        case 0x22817cu: goto label_22817c;
        case 0x228180u: goto label_228180;
        case 0x228184u: goto label_228184;
        case 0x228188u: goto label_228188;
        case 0x22818cu: goto label_22818c;
        case 0x228190u: goto label_228190;
        case 0x228194u: goto label_228194;
        case 0x228198u: goto label_228198;
        case 0x22819cu: goto label_22819c;
        case 0x2281a0u: goto label_2281a0;
        case 0x2281a4u: goto label_2281a4;
        case 0x2281a8u: goto label_2281a8;
        case 0x2281acu: goto label_2281ac;
        case 0x2281b0u: goto label_2281b0;
        case 0x2281b4u: goto label_2281b4;
        case 0x2281b8u: goto label_2281b8;
        case 0x2281bcu: goto label_2281bc;
        case 0x2281c0u: goto label_2281c0;
        case 0x2281c4u: goto label_2281c4;
        case 0x2281c8u: goto label_2281c8;
        case 0x2281ccu: goto label_2281cc;
        case 0x2281d0u: goto label_2281d0;
        case 0x2281d4u: goto label_2281d4;
        case 0x2281d8u: goto label_2281d8;
        case 0x2281dcu: goto label_2281dc;
        case 0x2281e0u: goto label_2281e0;
        case 0x2281e4u: goto label_2281e4;
        case 0x2281e8u: goto label_2281e8;
        case 0x2281ecu: goto label_2281ec;
        case 0x2281f0u: goto label_2281f0;
        case 0x2281f4u: goto label_2281f4;
        case 0x2281f8u: goto label_2281f8;
        case 0x2281fcu: goto label_2281fc;
        case 0x228200u: goto label_228200;
        case 0x228204u: goto label_228204;
        case 0x228208u: goto label_228208;
        case 0x22820cu: goto label_22820c;
        case 0x228210u: goto label_228210;
        case 0x228214u: goto label_228214;
        case 0x228218u: goto label_228218;
        case 0x22821cu: goto label_22821c;
        case 0x228220u: goto label_228220;
        case 0x228224u: goto label_228224;
        case 0x228228u: goto label_228228;
        case 0x22822cu: goto label_22822c;
        case 0x228230u: goto label_228230;
        case 0x228234u: goto label_228234;
        case 0x228238u: goto label_228238;
        case 0x22823cu: goto label_22823c;
        case 0x228240u: goto label_228240;
        case 0x228244u: goto label_228244;
        case 0x228248u: goto label_228248;
        case 0x22824cu: goto label_22824c;
        case 0x228250u: goto label_228250;
        case 0x228254u: goto label_228254;
        case 0x228258u: goto label_228258;
        case 0x22825cu: goto label_22825c;
        case 0x228260u: goto label_228260;
        case 0x228264u: goto label_228264;
        case 0x228268u: goto label_228268;
        case 0x22826cu: goto label_22826c;
        case 0x228270u: goto label_228270;
        case 0x228274u: goto label_228274;
        case 0x228278u: goto label_228278;
        case 0x22827cu: goto label_22827c;
        case 0x228280u: goto label_228280;
        case 0x228284u: goto label_228284;
        case 0x228288u: goto label_228288;
        case 0x22828cu: goto label_22828c;
        case 0x228290u: goto label_228290;
        case 0x228294u: goto label_228294;
        case 0x228298u: goto label_228298;
        case 0x22829cu: goto label_22829c;
        case 0x2282a0u: goto label_2282a0;
        case 0x2282a4u: goto label_2282a4;
        case 0x2282a8u: goto label_2282a8;
        case 0x2282acu: goto label_2282ac;
        case 0x2282b0u: goto label_2282b0;
        case 0x2282b4u: goto label_2282b4;
        case 0x2282b8u: goto label_2282b8;
        case 0x2282bcu: goto label_2282bc;
        case 0x2282c0u: goto label_2282c0;
        case 0x2282c4u: goto label_2282c4;
        case 0x2282c8u: goto label_2282c8;
        case 0x2282ccu: goto label_2282cc;
        case 0x2282d0u: goto label_2282d0;
        case 0x2282d4u: goto label_2282d4;
        case 0x2282d8u: goto label_2282d8;
        case 0x2282dcu: goto label_2282dc;
        case 0x2282e0u: goto label_2282e0;
        case 0x2282e4u: goto label_2282e4;
        case 0x2282e8u: goto label_2282e8;
        case 0x2282ecu: goto label_2282ec;
        case 0x2282f0u: goto label_2282f0;
        case 0x2282f4u: goto label_2282f4;
        case 0x2282f8u: goto label_2282f8;
        case 0x2282fcu: goto label_2282fc;
        case 0x228300u: goto label_228300;
        case 0x228304u: goto label_228304;
        case 0x228308u: goto label_228308;
        case 0x22830cu: goto label_22830c;
        case 0x228310u: goto label_228310;
        case 0x228314u: goto label_228314;
        case 0x228318u: goto label_228318;
        case 0x22831cu: goto label_22831c;
        case 0x228320u: goto label_228320;
        case 0x228324u: goto label_228324;
        case 0x228328u: goto label_228328;
        case 0x22832cu: goto label_22832c;
        case 0x228330u: goto label_228330;
        case 0x228334u: goto label_228334;
        case 0x228338u: goto label_228338;
        case 0x22833cu: goto label_22833c;
        case 0x228340u: goto label_228340;
        case 0x228344u: goto label_228344;
        case 0x228348u: goto label_228348;
        case 0x22834cu: goto label_22834c;
        case 0x228350u: goto label_228350;
        case 0x228354u: goto label_228354;
        case 0x228358u: goto label_228358;
        case 0x22835cu: goto label_22835c;
        case 0x228360u: goto label_228360;
        case 0x228364u: goto label_228364;
        case 0x228368u: goto label_228368;
        case 0x22836cu: goto label_22836c;
        case 0x228370u: goto label_228370;
        case 0x228374u: goto label_228374;
        case 0x228378u: goto label_228378;
        case 0x22837cu: goto label_22837c;
        case 0x228380u: goto label_228380;
        case 0x228384u: goto label_228384;
        case 0x228388u: goto label_228388;
        case 0x22838cu: goto label_22838c;
        case 0x228390u: goto label_228390;
        case 0x228394u: goto label_228394;
        case 0x228398u: goto label_228398;
        case 0x22839cu: goto label_22839c;
        case 0x2283a0u: goto label_2283a0;
        case 0x2283a4u: goto label_2283a4;
        case 0x2283a8u: goto label_2283a8;
        case 0x2283acu: goto label_2283ac;
        case 0x2283b0u: goto label_2283b0;
        case 0x2283b4u: goto label_2283b4;
        case 0x2283b8u: goto label_2283b8;
        case 0x2283bcu: goto label_2283bc;
        case 0x2283c0u: goto label_2283c0;
        case 0x2283c4u: goto label_2283c4;
        case 0x2283c8u: goto label_2283c8;
        case 0x2283ccu: goto label_2283cc;
        case 0x2283d0u: goto label_2283d0;
        case 0x2283d4u: goto label_2283d4;
        case 0x2283d8u: goto label_2283d8;
        case 0x2283dcu: goto label_2283dc;
        case 0x2283e0u: goto label_2283e0;
        case 0x2283e4u: goto label_2283e4;
        case 0x2283e8u: goto label_2283e8;
        case 0x2283ecu: goto label_2283ec;
        case 0x2283f0u: goto label_2283f0;
        case 0x2283f4u: goto label_2283f4;
        case 0x2283f8u: goto label_2283f8;
        case 0x2283fcu: goto label_2283fc;
        case 0x228400u: goto label_228400;
        case 0x228404u: goto label_228404;
        case 0x228408u: goto label_228408;
        case 0x22840cu: goto label_22840c;
        case 0x228410u: goto label_228410;
        case 0x228414u: goto label_228414;
        case 0x228418u: goto label_228418;
        case 0x22841cu: goto label_22841c;
        case 0x228420u: goto label_228420;
        case 0x228424u: goto label_228424;
        case 0x228428u: goto label_228428;
        case 0x22842cu: goto label_22842c;
        case 0x228430u: goto label_228430;
        case 0x228434u: goto label_228434;
        case 0x228438u: goto label_228438;
        case 0x22843cu: goto label_22843c;
        case 0x228440u: goto label_228440;
        case 0x228444u: goto label_228444;
        case 0x228448u: goto label_228448;
        case 0x22844cu: goto label_22844c;
        case 0x228450u: goto label_228450;
        case 0x228454u: goto label_228454;
        case 0x228458u: goto label_228458;
        case 0x22845cu: goto label_22845c;
        case 0x228460u: goto label_228460;
        case 0x228464u: goto label_228464;
        case 0x228468u: goto label_228468;
        case 0x22846cu: goto label_22846c;
        case 0x228470u: goto label_228470;
        case 0x228474u: goto label_228474;
        case 0x228478u: goto label_228478;
        case 0x22847cu: goto label_22847c;
        case 0x228480u: goto label_228480;
        case 0x228484u: goto label_228484;
        case 0x228488u: goto label_228488;
        case 0x22848cu: goto label_22848c;
        case 0x228490u: goto label_228490;
        case 0x228494u: goto label_228494;
        case 0x228498u: goto label_228498;
        case 0x22849cu: goto label_22849c;
        case 0x2284a0u: goto label_2284a0;
        case 0x2284a4u: goto label_2284a4;
        case 0x2284a8u: goto label_2284a8;
        case 0x2284acu: goto label_2284ac;
        case 0x2284b0u: goto label_2284b0;
        case 0x2284b4u: goto label_2284b4;
        case 0x2284b8u: goto label_2284b8;
        case 0x2284bcu: goto label_2284bc;
        case 0x2284c0u: goto label_2284c0;
        case 0x2284c4u: goto label_2284c4;
        case 0x2284c8u: goto label_2284c8;
        case 0x2284ccu: goto label_2284cc;
        case 0x2284d0u: goto label_2284d0;
        case 0x2284d4u: goto label_2284d4;
        case 0x2284d8u: goto label_2284d8;
        case 0x2284dcu: goto label_2284dc;
        case 0x2284e0u: goto label_2284e0;
        case 0x2284e4u: goto label_2284e4;
        case 0x2284e8u: goto label_2284e8;
        case 0x2284ecu: goto label_2284ec;
        case 0x2284f0u: goto label_2284f0;
        case 0x2284f4u: goto label_2284f4;
        case 0x2284f8u: goto label_2284f8;
        case 0x2284fcu: goto label_2284fc;
        case 0x228500u: goto label_228500;
        case 0x228504u: goto label_228504;
        case 0x228508u: goto label_228508;
        case 0x22850cu: goto label_22850c;
        case 0x228510u: goto label_228510;
        case 0x228514u: goto label_228514;
        case 0x228518u: goto label_228518;
        case 0x22851cu: goto label_22851c;
        case 0x228520u: goto label_228520;
        case 0x228524u: goto label_228524;
        case 0x228528u: goto label_228528;
        case 0x22852cu: goto label_22852c;
        case 0x228530u: goto label_228530;
        case 0x228534u: goto label_228534;
        case 0x228538u: goto label_228538;
        case 0x22853cu: goto label_22853c;
        case 0x228540u: goto label_228540;
        case 0x228544u: goto label_228544;
        case 0x228548u: goto label_228548;
        case 0x22854cu: goto label_22854c;
        case 0x228550u: goto label_228550;
        case 0x228554u: goto label_228554;
        case 0x228558u: goto label_228558;
        case 0x22855cu: goto label_22855c;
        case 0x228560u: goto label_228560;
        case 0x228564u: goto label_228564;
        case 0x228568u: goto label_228568;
        case 0x22856cu: goto label_22856c;
        case 0x228570u: goto label_228570;
        case 0x228574u: goto label_228574;
        case 0x228578u: goto label_228578;
        case 0x22857cu: goto label_22857c;
        case 0x228580u: goto label_228580;
        case 0x228584u: goto label_228584;
        case 0x228588u: goto label_228588;
        case 0x22858cu: goto label_22858c;
        case 0x228590u: goto label_228590;
        case 0x228594u: goto label_228594;
        case 0x228598u: goto label_228598;
        case 0x22859cu: goto label_22859c;
        case 0x2285a0u: goto label_2285a0;
        case 0x2285a4u: goto label_2285a4;
        case 0x2285a8u: goto label_2285a8;
        case 0x2285acu: goto label_2285ac;
        case 0x2285b0u: goto label_2285b0;
        case 0x2285b4u: goto label_2285b4;
        case 0x2285b8u: goto label_2285b8;
        case 0x2285bcu: goto label_2285bc;
        case 0x2285c0u: goto label_2285c0;
        case 0x2285c4u: goto label_2285c4;
        case 0x2285c8u: goto label_2285c8;
        case 0x2285ccu: goto label_2285cc;
        case 0x2285d0u: goto label_2285d0;
        case 0x2285d4u: goto label_2285d4;
        case 0x2285d8u: goto label_2285d8;
        case 0x2285dcu: goto label_2285dc;
        case 0x2285e0u: goto label_2285e0;
        case 0x2285e4u: goto label_2285e4;
        case 0x2285e8u: goto label_2285e8;
        case 0x2285ecu: goto label_2285ec;
        case 0x2285f0u: goto label_2285f0;
        case 0x2285f4u: goto label_2285f4;
        case 0x2285f8u: goto label_2285f8;
        case 0x2285fcu: goto label_2285fc;
        case 0x228600u: goto label_228600;
        case 0x228604u: goto label_228604;
        case 0x228608u: goto label_228608;
        case 0x22860cu: goto label_22860c;
        case 0x228610u: goto label_228610;
        case 0x228614u: goto label_228614;
        case 0x228618u: goto label_228618;
        case 0x22861cu: goto label_22861c;
        case 0x228620u: goto label_228620;
        case 0x228624u: goto label_228624;
        case 0x228628u: goto label_228628;
        case 0x22862cu: goto label_22862c;
        case 0x228630u: goto label_228630;
        case 0x228634u: goto label_228634;
        case 0x228638u: goto label_228638;
        case 0x22863cu: goto label_22863c;
        case 0x228640u: goto label_228640;
        case 0x228644u: goto label_228644;
        case 0x228648u: goto label_228648;
        case 0x22864cu: goto label_22864c;
        case 0x228650u: goto label_228650;
        case 0x228654u: goto label_228654;
        case 0x228658u: goto label_228658;
        case 0x22865cu: goto label_22865c;
        case 0x228660u: goto label_228660;
        case 0x228664u: goto label_228664;
        case 0x228668u: goto label_228668;
        case 0x22866cu: goto label_22866c;
        case 0x228670u: goto label_228670;
        case 0x228674u: goto label_228674;
        case 0x228678u: goto label_228678;
        case 0x22867cu: goto label_22867c;
        case 0x228680u: goto label_228680;
        case 0x228684u: goto label_228684;
        case 0x228688u: goto label_228688;
        case 0x22868cu: goto label_22868c;
        case 0x228690u: goto label_228690;
        case 0x228694u: goto label_228694;
        case 0x228698u: goto label_228698;
        case 0x22869cu: goto label_22869c;
        case 0x2286a0u: goto label_2286a0;
        case 0x2286a4u: goto label_2286a4;
        case 0x2286a8u: goto label_2286a8;
        case 0x2286acu: goto label_2286ac;
        case 0x2286b0u: goto label_2286b0;
        case 0x2286b4u: goto label_2286b4;
        case 0x2286b8u: goto label_2286b8;
        case 0x2286bcu: goto label_2286bc;
        case 0x2286c0u: goto label_2286c0;
        case 0x2286c4u: goto label_2286c4;
        case 0x2286c8u: goto label_2286c8;
        case 0x2286ccu: goto label_2286cc;
        case 0x2286d0u: goto label_2286d0;
        case 0x2286d4u: goto label_2286d4;
        case 0x2286d8u: goto label_2286d8;
        case 0x2286dcu: goto label_2286dc;
        case 0x2286e0u: goto label_2286e0;
        case 0x2286e4u: goto label_2286e4;
        case 0x2286e8u: goto label_2286e8;
        case 0x2286ecu: goto label_2286ec;
        case 0x2286f0u: goto label_2286f0;
        case 0x2286f4u: goto label_2286f4;
        case 0x2286f8u: goto label_2286f8;
        case 0x2286fcu: goto label_2286fc;
        case 0x228700u: goto label_228700;
        case 0x228704u: goto label_228704;
        case 0x228708u: goto label_228708;
        case 0x22870cu: goto label_22870c;
        case 0x228710u: goto label_228710;
        case 0x228714u: goto label_228714;
        case 0x228718u: goto label_228718;
        case 0x22871cu: goto label_22871c;
        case 0x228720u: goto label_228720;
        case 0x228724u: goto label_228724;
        case 0x228728u: goto label_228728;
        case 0x22872cu: goto label_22872c;
        case 0x228730u: goto label_228730;
        case 0x228734u: goto label_228734;
        case 0x228738u: goto label_228738;
        case 0x22873cu: goto label_22873c;
        case 0x228740u: goto label_228740;
        case 0x228744u: goto label_228744;
        case 0x228748u: goto label_228748;
        case 0x22874cu: goto label_22874c;
        case 0x228750u: goto label_228750;
        case 0x228754u: goto label_228754;
        default: break;
    }

    ctx->pc = 0x227aa0u;

label_227aa0:
    // 0x227aa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x227aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_227aa4:
    // 0x227aa4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x227aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_227aa8:
    // 0x227aa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x227aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_227aac:
    // 0x227aac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x227aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_227ab0:
    // 0x227ab0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x227ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_227ab4:
    // 0x227ab4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x227ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_227ab8:
    // 0x227ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_227abc:
    // 0x227abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227ac0:
    // 0x227ac0: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x227ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_227ac4:
    // 0x227ac4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x227ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_227ac8:
    // 0x227ac8: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x227ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_227acc:
    // 0x227acc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227ad0:
    // 0x227ad0: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x227ad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_227ad4:
    // 0x227ad4: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x227ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_227ad8:
    // 0x227ad8: 0x2cc10008  sltiu       $at, $a2, 0x8
    ctx->pc = 0x227ad8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_227adc:
    // 0x227adc: 0x102002d4  beqz        $at, . + 4 + (0x2D4 << 2)
label_227ae0:
    if (ctx->pc == 0x227AE0u) {
        ctx->pc = 0x227AE4u;
        goto label_227ae4;
    }
    ctx->pc = 0x227ADCu;
    {
        const bool branch_taken_0x227adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x227adc) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x227AE4u;
label_227ae4:
    // 0x227ae4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x227ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_227ae8:
    // 0x227ae8: 0x24641150  addiu       $a0, $v1, 0x1150
    ctx->pc = 0x227ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4432));
label_227aec:
    // 0x227aec: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x227aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_227af0:
    // 0x227af0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x227af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_227af4:
    // 0x227af4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x227af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_227af8:
    // 0x227af8: 0x800008  jr          $a0
label_227afc:
    if (ctx->pc == 0x227AFCu) {
        ctx->pc = 0x227B00u;
        goto label_227b00;
    }
    ctx->pc = 0x227AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227AF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227B00u;
label_227b00:
    // 0x227b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227b04:
    // 0x227b04: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b08:
    // 0x227b08: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x227b08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_227b0c:
    // 0x227b0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227b10:
    // 0x227b10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b14:
    // 0x227b14: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x227b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_227b18:
    // 0x227b18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b1c:
    // 0x227b1c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b20:
    // 0x227b20: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x227b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_227b24:
    // 0x227b24: 0x2406781f  addiu       $a2, $zero, 0x781F
    ctx->pc = 0x227b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30751));
label_227b28:
    // 0x227b28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x227b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227b2c:
    // 0x227b2c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x227b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_227b30:
    // 0x227b30: 0xc0965d0  jal         func_259740
label_227b34:
    if (ctx->pc == 0x227B34u) {
        ctx->pc = 0x227B38u;
        goto label_227b38;
    }
    ctx->pc = 0x227B30u;
    SET_GPR_U32(ctx, 31, 0x227B38u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x227B30u, 0x227B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B38u;
label_227b38:
    // 0x227b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227b3c:
    // 0x227b3c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b40:
    // 0x227b40: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x227b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_227b44:
    // 0x227b44: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x227b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_227b48:
    // 0x227b48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227b4c:
    // 0x227b4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b50:
    // 0x227b50: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x227b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_227b54:
    // 0x227b54: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x227b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_227b58:
    // 0x227b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227b5c:
    // 0x227b5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b60:
    // 0x227b60: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x227b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_227b64:
    // 0x227b64: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x227b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_227b68:
    // 0x227b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227b6c:
    // 0x227b6c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b70:
    // 0x227b70: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x227b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_227b74:
    // 0x227b74: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x227b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_227b78:
    // 0x227b78: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x227b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_227b7c:
    // 0x227b7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x227b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_227b80:
    // 0x227b80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x227b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_227b84:
    // 0x227b84: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b88:
    // 0x227b88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227b8c:
    // 0x227b8c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x227b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_227b90:
    // 0x227b90: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x227b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_227b94:
    // 0x227b94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x227b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_227b98:
    // 0x227b98: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x227b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_227b9c:
    // 0x227b9c: 0xc05c848  jal         func_172120
label_227ba0:
    if (ctx->pc == 0x227BA0u) {
        ctx->pc = 0x227BA4u;
        goto label_227ba4;
    }
    ctx->pc = 0x227B9Cu;
    SET_GPR_U32(ctx, 31, 0x227BA4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x227B9Cu, 0x227BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BA4u;
label_227ba4:
    // 0x227ba4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x227ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_227ba8:
    // 0x227ba8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227bac:
    // 0x227bac: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x227bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_227bb0:
    // 0x227bb0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x227bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_227bb4:
    // 0x227bb4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x227bb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_227bb8:
    // 0x227bb8: 0xc058fec  jal         func_163FB0
label_227bbc:
    if (ctx->pc == 0x227BBCu) {
        ctx->pc = 0x227BC0u;
        goto label_227bc0;
    }
    ctx->pc = 0x227BB8u;
    SET_GPR_U32(ctx, 31, 0x227BC0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x227BB8u, 0x227BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BC0u;
label_227bc0:
    // 0x227bc0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227bc4:
    // 0x227bc4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x227bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_227bc8:
    // 0x227bc8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227bcc:
    // 0x227bcc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227bd0:
    // 0x227bd0: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x227bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
label_227bd4:
    // 0x227bd4: 0xc096c60  jal         func_25B180
label_227bd8:
    if (ctx->pc == 0x227BD8u) {
        ctx->pc = 0x227BDCu;
        goto label_227bdc;
    }
    ctx->pc = 0x227BD4u;
    SET_GPR_U32(ctx, 31, 0x227BDCu);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x227BD4u, 0x227BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BDCu;
label_227bdc:
    // 0x227bdc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227be0:
    // 0x227be0: 0xc05ce54  jal         func_173950
label_227be4:
    if (ctx->pc == 0x227BE4u) {
        ctx->pc = 0x227BE8u;
        goto label_227be8;
    }
    ctx->pc = 0x227BE0u;
    SET_GPR_U32(ctx, 31, 0x227BE8u);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x227BE0u, 0x227BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BE8u;
label_227be8:
    // 0x227be8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227bec:
    // 0x227bec: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x227becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_227bf0:
    // 0x227bf0: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x227bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_227bf4:
    // 0x227bf4: 0x34c70020  ori         $a3, $a2, 0x20
    ctx->pc = 0x227bf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
label_227bf8:
    // 0x227bf8: 0xaca70030  sw          $a3, 0x30($a1)
    ctx->pc = 0x227bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 7));
label_227bfc:
    // 0x227bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227c00:
    // 0x227c00: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x227c00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c04:
    // 0x227c04: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x227c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
label_227c08:
    // 0x227c08: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x227c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
label_227c0c:
    // 0x227c0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227c10:
    // 0x227c10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c14:
    // 0x227c14: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x227c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_227c18:
    // 0x227c18: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x227c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_227c1c:
    // 0x227c1c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c20:
    // 0x227c20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x227c20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_227c24:
    // 0x227c24: 0xc096b40  jal         func_25AD00
label_227c28:
    if (ctx->pc == 0x227C28u) {
        ctx->pc = 0x227C2Cu;
        goto label_227c2c;
    }
    ctx->pc = 0x227C24u;
    SET_GPR_U32(ctx, 31, 0x227C2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x227C24u, 0x227C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C2Cu;
label_227c2c:
    // 0x227c2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227c2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_227c30:
    // 0x227c30: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x227c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
label_227c34:
    // 0x227c34: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x227c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_227c38:
    // 0x227c38: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x227c38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_227c3c:
    // 0x227c3c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c40:
    // 0x227c40: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c44:
    // 0x227c44: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x227c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_227c48:
    // 0x227c48: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x227c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_227c4c:
    // 0x227c4c: 0xc058f50  jal         func_163D40
label_227c50:
    if (ctx->pc == 0x227C50u) {
        ctx->pc = 0x227C54u;
        goto label_227c54;
    }
    ctx->pc = 0x227C4Cu;
    SET_GPR_U32(ctx, 31, 0x227C54u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x227C4Cu, 0x227C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C54u;
label_227c54:
    // 0x227c54: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c58:
    // 0x227c58: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x227c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
label_227c5c:
    // 0x227c5c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x227c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_227c60:
    // 0x227c60: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x227c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_227c64:
    // 0x227c64: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x227c64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_227c68:
    // 0x227c68: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c6c:
    // 0x227c6c: 0xc05ce88  jal         func_173A20
label_227c70:
    if (ctx->pc == 0x227C70u) {
        ctx->pc = 0x227C74u;
        goto label_227c74;
    }
    ctx->pc = 0x227C6Cu;
    SET_GPR_U32(ctx, 31, 0x227C74u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x227C6Cu, 0x227C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C74u;
label_227c74:
    // 0x227c74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227c74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_227c78:
    // 0x227c78: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c7c:
    // 0x227c7c: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x227c7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
label_227c80:
    // 0x227c80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x227c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_227c84:
    // 0x227c84: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_227c88:
    if (ctx->pc == 0x227C88u) {
        ctx->pc = 0x227C8Cu;
        goto label_227c8c;
    }
    ctx->pc = 0x227C84u;
    {
        const bool branch_taken_0x227c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x227c84) {
            ctx->pc = 0x227CA4u;
            goto label_227ca4;
        }
    }
    ctx->pc = 0x227C8Cu;
label_227c8c:
    // 0x227c8c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c90:
    // 0x227c90: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227c94:
    // 0x227c94: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x227c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_227c98:
    // 0x227c98: 0xc05cd58  jal         func_173560
label_227c9c:
    if (ctx->pc == 0x227C9Cu) {
        ctx->pc = 0x227CA0u;
        goto label_227ca0;
    }
    ctx->pc = 0x227C98u;
    SET_GPR_U32(ctx, 31, 0x227CA0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x227C98u, 0x227CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CA0u;
label_227ca0:
    // 0x227ca0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227ca0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_227ca4:
    // 0x227ca4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227ca8:
    // 0x227ca8: 0xc0974dc  jal         func_25D370
label_227cac:
    if (ctx->pc == 0x227CACu) {
        ctx->pc = 0x227CB0u;
        goto label_227cb0;
    }
    ctx->pc = 0x227CA8u;
    SET_GPR_U32(ctx, 31, 0x227CB0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x227CA8u, 0x227CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CB0u;
label_227cb0:
    // 0x227cb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227cb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_227cb4:
    // 0x227cb4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227cb8:
    // 0x227cb8: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x227cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_227cbc:
    // 0x227cbc: 0x1060025c  beqz        $v1, . + 4 + (0x25C << 2)
label_227cc0:
    if (ctx->pc == 0x227CC0u) {
        ctx->pc = 0x227CC4u;
        goto label_227cc4;
    }
    ctx->pc = 0x227CBCu;
    {
        const bool branch_taken_0x227cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x227cbc) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x227CC4u;
label_227cc4:
    // 0x227cc4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x227cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_227cc8:
    // 0x227cc8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227ccc:
    // 0x227ccc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x227cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_227cd0:
    // 0x227cd0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227cd4:
    // 0x227cd4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227cd8:
    // 0x227cd8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x227cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_227cdc:
    // 0x227cdc: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x227cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
label_227ce0:
    // 0x227ce0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x227ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227ce4:
    // 0x227ce4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x227ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_227ce8:
    // 0x227ce8: 0xc0965d0  jal         func_259740
label_227cec:
    if (ctx->pc == 0x227CECu) {
        ctx->pc = 0x227CF0u;
        goto label_227cf0;
    }
    ctx->pc = 0x227CE8u;
    SET_GPR_U32(ctx, 31, 0x227CF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x227CE8u, 0x227CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CF0u;
label_227cf0:
    // 0x227cf0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227cf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_227cf4:
    // 0x227cf4: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x227cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_227cf8:
    // 0x227cf8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227cfc:
    // 0x227cfc: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x227cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_227d00:
    // 0x227d00: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227d04:
    // 0x227d04: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_227d08:
    // 0x227d08: 0x8c920030  lw          $s2, 0x30($a0)
    ctx->pc = 0x227d08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_227d0c:
    // 0x227d0c: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x227d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_227d10:
    // 0x227d10: 0x2451824  and         $v1, $s2, $a1
    ctx->pc = 0x227d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
label_227d14:
    // 0x227d14: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x227d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_227d18:
    // 0x227d18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_227d1c:
    // 0x227d1c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x227d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_227d20:
    // 0x227d20: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x227d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_227d24:
    // 0x227d24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x227d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_227d28:
    // 0x227d28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_227d2c:
    // 0x227d2c: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x227d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6744), GPR_U32(ctx, 4));
label_227d30:
    // 0x227d30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_227d34:
    // 0x227d34: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x227d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_227d38:
    // 0x227d38: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x227d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_227d3c:
    // 0x227d3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_227d40:
    // 0x227d40: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x227d40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 3));
label_227d44:
    // 0x227d44: 0x1000023a  b           . + 4 + (0x23A << 2)
label_227d48:
    if (ctx->pc == 0x227D48u) {
        ctx->pc = 0x227D4Cu;
        goto label_227d4c;
    }
    ctx->pc = 0x227D44u;
    {
        const bool branch_taken_0x227d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227d44) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x227D4Cu;
label_227d4c:
    // 0x227d4c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227d50:
    // 0x227d50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x227d50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_227d54:
    // 0x227d54: 0xc096b40  jal         func_25AD00
label_227d58:
    if (ctx->pc == 0x227D58u) {
        ctx->pc = 0x227D5Cu;
        goto label_227d5c;
    }
    ctx->pc = 0x227D54u;
    SET_GPR_U32(ctx, 31, 0x227D5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x227D54u, 0x227D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D5Cu;
label_227d5c:
    // 0x227d5c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x227d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_227d60:
    // 0x227d60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x227d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_227d64:
    // 0x227d64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x227d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_227d68:
    // 0x227d68: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227d6c:
    // 0x227d6c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227d70:
    // 0x227d70: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x227d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_227d74:
    // 0x227d74: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x227d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_227d78:
    // 0x227d78: 0xc058f50  jal         func_163D40
label_227d7c:
    if (ctx->pc == 0x227D7Cu) {
        ctx->pc = 0x227D80u;
        goto label_227d80;
    }
    ctx->pc = 0x227D78u;
    SET_GPR_U32(ctx, 31, 0x227D80u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x227D78u, 0x227D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D80u;
label_227d80:
    // 0x227d80: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227d84:
    // 0x227d84: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x227d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_227d88:
    // 0x227d88: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x227d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_227d8c:
    // 0x227d8c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x227d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_227d90:
    // 0x227d90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_227d94:
    // 0x227d94: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227d98:
    // 0x227d98: 0xc05ce88  jal         func_173A20
label_227d9c:
    if (ctx->pc == 0x227D9Cu) {
        ctx->pc = 0x227DA0u;
        goto label_227da0;
    }
    ctx->pc = 0x227D98u;
    SET_GPR_U32(ctx, 31, 0x227DA0u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x227D98u, 0x227DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DA0u;
label_227da0:
    // 0x227da0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227da4:
    // 0x227da4: 0x94850a00  lhu         $a1, 0xA00($a0)
    ctx->pc = 0x227da4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
label_227da8:
    // 0x227da8: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x227da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_227dac:
    // 0x227dac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_227db0:
    if (ctx->pc == 0x227DB0u) {
        ctx->pc = 0x227DB4u;
        goto label_227db4;
    }
    ctx->pc = 0x227DACu;
    {
        const bool branch_taken_0x227dac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x227dac) {
            ctx->pc = 0x227DCCu;
            goto label_227dcc;
        }
    }
    ctx->pc = 0x227DB4u;
label_227db4:
    // 0x227db4: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x227db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227db8:
    // 0x227db8: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x227db8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227dbc:
    // 0x227dbc: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x227dbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_227dc0:
    // 0x227dc0: 0xc4ec1290  lwc1        $f12, 0x1290($a3)
    ctx->pc = 0x227dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_227dc4:
    // 0x227dc4: 0xc05cd58  jal         func_173560
label_227dc8:
    if (ctx->pc == 0x227DC8u) {
        ctx->pc = 0x227DCCu;
        goto label_227dcc;
    }
    ctx->pc = 0x227DC4u;
    SET_GPR_U32(ctx, 31, 0x227DCCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x227DC4u, 0x227DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DCCu;
label_227dcc:
    // 0x227dcc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x227dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_227dd0:
    // 0x227dd0: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x227dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_227dd4:
    // 0x227dd4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x227dd4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_227dd8:
    // 0x227dd8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x227dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_227ddc:
    // 0x227ddc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x227ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_227de0:
    // 0x227de0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x227de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_227de4:
    // 0x227de4: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x227de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_227de8:
    // 0x227de8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x227de8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227dec:
    // 0x227dec: 0x0  nop
    ctx->pc = 0x227decu;
    // NOP
label_227df0:
    // 0x227df0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x227df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_227df4:
    // 0x227df4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x227df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_227df8:
    // 0x227df8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x227df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_227dfc:
    // 0x227dfc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x227dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_227e00:
    // 0x227e00: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x227e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_227e04:
    // 0x227e04: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x227e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_227e08:
    // 0x227e08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x227e08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_227e0c:
    // 0x227e0c: 0xc059e1c  jal         func_167870
label_227e10:
    if (ctx->pc == 0x227E10u) {
        ctx->pc = 0x227E14u;
        goto label_227e14;
    }
    ctx->pc = 0x227E0Cu;
    SET_GPR_U32(ctx, 31, 0x227E14u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x227E0Cu, 0x227E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E14u;
label_227e14:
    // 0x227e14: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x227e14u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_227e18:
    // 0x227e18: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x227e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_227e1c:
    // 0x227e1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x227e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_227e20:
    // 0x227e20: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x227e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_227e24:
    // 0x227e24: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x227e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_227e28:
    // 0x227e28: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x227e28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_227e2c:
    // 0x227e2c: 0xc059e1c  jal         func_167870
label_227e30:
    if (ctx->pc == 0x227E30u) {
        ctx->pc = 0x227E34u;
        goto label_227e34;
    }
    ctx->pc = 0x227E2Cu;
    SET_GPR_U32(ctx, 31, 0x227E34u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x227E2Cu, 0x227E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E34u;
label_227e34:
    // 0x227e34: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x227e34u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_227e38:
    // 0x227e38: 0x16800022  bnez        $s4, . + 4 + (0x22 << 2)
label_227e3c:
    if (ctx->pc == 0x227E3Cu) {
        ctx->pc = 0x227E40u;
        goto label_227e40;
    }
    ctx->pc = 0x227E38u;
    {
        const bool branch_taken_0x227e38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x227e38) {
            ctx->pc = 0x227EC4u;
            goto label_227ec4;
        }
    }
    ctx->pc = 0x227E40u;
label_227e40:
    // 0x227e40: 0x16a00020  bnez        $s5, . + 4 + (0x20 << 2)
label_227e44:
    if (ctx->pc == 0x227E44u) {
        ctx->pc = 0x227E48u;
        goto label_227e48;
    }
    ctx->pc = 0x227E40u;
    {
        const bool branch_taken_0x227e40 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x227e40) {
            ctx->pc = 0x227EC4u;
            goto label_227ec4;
        }
    }
    ctx->pc = 0x227E48u;
label_227e48:
    // 0x227e48: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227e4c:
    // 0x227e4c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_227e50:
    // 0x227e50: 0xc4a10098  lwc1        $f1, 0x98($a1)
    ctx->pc = 0x227e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_227e54:
    // 0x227e54: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227e58:
    // 0x227e58: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x227e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_227e5c:
    // 0x227e5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x227e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_227e60:
    // 0x227e60: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x227e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_227e64:
    // 0x227e64: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227e68:
    // 0x227e68: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_227e6c:
    // 0x227e6c: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x227e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_227e70:
    // 0x227e70: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x227e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
label_227e74:
    // 0x227e74: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x227e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_227e78:
    // 0x227e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227e7c:
    // 0x227e7c: 0x0  nop
    ctx->pc = 0x227e7cu;
    // NOP
label_227e80:
    // 0x227e80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x227e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_227e84:
    // 0x227e84: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x227e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
label_227e88:
    // 0x227e88: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227e8c:
    // 0x227e8c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x227e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_227e90:
    // 0x227e90: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x227e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_227e94:
    // 0x227e94: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x227e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_227e98:
    // 0x227e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227e9c:
    // 0x227e9c: 0x0  nop
    ctx->pc = 0x227e9cu;
    // NOP
label_227ea0:
    // 0x227ea0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_227ea4:
    // 0x227ea4: 0x0  nop
    ctx->pc = 0x227ea4u;
    // NOP
label_227ea8:
    // 0x227ea8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_227eac:
    if (ctx->pc == 0x227EACu) {
        ctx->pc = 0x227EB0u;
        goto label_227eb0;
    }
    ctx->pc = 0x227EA8u;
    {
        const bool branch_taken_0x227ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227ea8) {
            ctx->pc = 0x227EC4u;
            goto label_227ec4;
        }
    }
    ctx->pc = 0x227EB0u;
label_227eb0:
    // 0x227eb0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x227eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_227eb4:
    // 0x227eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_227eb8:
    // 0x227eb8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227ebc:
    // 0x227ebc: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x227ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_227ec0:
    // 0x227ec0: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x227ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
label_227ec4:
    // 0x227ec4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227ec8:
    // 0x227ec8: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x227ec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
label_227ecc:
    // 0x227ecc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x227eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_227ed0:
    // 0x227ed0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_227ed4:
    if (ctx->pc == 0x227ED4u) {
        ctx->pc = 0x227ED8u;
        goto label_227ed8;
    }
    ctx->pc = 0x227ED0u;
    {
        const bool branch_taken_0x227ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227ed0) {
            ctx->pc = 0x227EF0u;
            goto label_227ef0;
        }
    }
    ctx->pc = 0x227ED8u;
label_227ed8:
    // 0x227ed8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227edc:
    // 0x227edc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227ee0:
    // 0x227ee0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x227ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_227ee4:
    // 0x227ee4: 0xc05cd78  jal         func_1735E0
label_227ee8:
    if (ctx->pc == 0x227EE8u) {
        ctx->pc = 0x227EECu;
        goto label_227eec;
    }
    ctx->pc = 0x227EE4u;
    SET_GPR_U32(ctx, 31, 0x227EECu);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x227EE4u, 0x227EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EECu;
label_227eec:
    // 0x227eec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227eecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_227ef0:
    // 0x227ef0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227ef4:
    // 0x227ef4: 0xc0974dc  jal         func_25D370
label_227ef8:
    if (ctx->pc == 0x227EF8u) {
        ctx->pc = 0x227EFCu;
        goto label_227efc;
    }
    ctx->pc = 0x227EF4u;
    SET_GPR_U32(ctx, 31, 0x227EFCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x227EF4u, 0x227EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EFCu;
label_227efc:
    // 0x227efc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227efcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_227f00:
    // 0x227f00: 0x8fb300a8  lw          $s3, 0xA8($sp)
    ctx->pc = 0x227f00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227f04:
    // 0x227f04: 0x8665127a  lh          $a1, 0x127A($s3)
    ctx->pc = 0x227f04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4730)));
label_227f08:
    // 0x227f08: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_227f0c:
    if (ctx->pc == 0x227F0Cu) {
        ctx->pc = 0x227F10u;
        goto label_227f10;
    }
    ctx->pc = 0x227F08u;
    {
        const bool branch_taken_0x227f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f08) {
            ctx->pc = 0x227F20u;
            goto label_227f20;
        }
    }
    ctx->pc = 0x227F10u;
label_227f10:
    // 0x227f10: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227f14:
    // 0x227f14: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x227f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_227f18:
    // 0x227f18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x227f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_227f1c:
    // 0x227f1c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x227f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_227f20:
    // 0x227f20: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227f24:
    // 0x227f24: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x227f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_227f28:
    // 0x227f28: 0x146001c1  bnez        $v1, . + 4 + (0x1C1 << 2)
label_227f2c:
    if (ctx->pc == 0x227F2Cu) {
        ctx->pc = 0x227F30u;
        goto label_227f30;
    }
    ctx->pc = 0x227F28u;
    {
        const bool branch_taken_0x227f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227f28) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x227F30u;
label_227f30:
    // 0x227f30: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227f34:
    // 0x227f34: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x227f34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_227f38:
    // 0x227f38: 0x108001bd  beqz        $a0, . + 4 + (0x1BD << 2)
label_227f3c:
    if (ctx->pc == 0x227F3Cu) {
        ctx->pc = 0x227F40u;
        goto label_227f40;
    }
    ctx->pc = 0x227F38u;
    {
        const bool branch_taken_0x227f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f38) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x227F40u;
label_227f40:
    // 0x227f40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x227f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_227f44:
    // 0x227f44: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x227f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227f48:
    // 0x227f48: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x227f48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
label_227f4c:
    // 0x227f4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_227f50:
    // 0x227f50: 0x8c271a50  lw          $a3, 0x1A50($at)
    ctx->pc = 0x227f50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_227f54:
    // 0x227f54: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x227f54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_227f58:
    // 0x227f58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_227f5c:
    // 0x227f5c: 0xac281a50  sw          $t0, 0x1A50($at)
    ctx->pc = 0x227f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 8));
label_227f60:
    // 0x227f60: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x227f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_227f64:
    // 0x227f64: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227f68:
    // 0x227f68: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x227f68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_227f6c:
    // 0x227f6c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x227f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_227f70:
    // 0x227f70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_227f74:
    // 0x227f74: 0xa424ec66  sh          $a0, -0x139A($at)
    ctx->pc = 0x227f74u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962278), (uint16_t)GPR_U32(ctx, 4));
label_227f78:
    // 0x227f78: 0x100001ad  b           . + 4 + (0x1AD << 2)
label_227f7c:
    if (ctx->pc == 0x227F7Cu) {
        ctx->pc = 0x227F80u;
        goto label_227f80;
    }
    ctx->pc = 0x227F78u;
    {
        const bool branch_taken_0x227f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f78) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x227F80u;
label_227f80:
    // 0x227f80: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227f84:
    // 0x227f84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x227f84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_227f88:
    // 0x227f88: 0xc096b40  jal         func_25AD00
label_227f8c:
    if (ctx->pc == 0x227F8Cu) {
        ctx->pc = 0x227F90u;
        goto label_227f90;
    }
    ctx->pc = 0x227F88u;
    SET_GPR_U32(ctx, 31, 0x227F90u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x227F88u, 0x227F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F90u;
label_227f90:
    // 0x227f90: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227f94:
    // 0x227f94: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227f98:
    // 0x227f98: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x227f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_227f9c:
    // 0x227f9c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x227f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_227fa0:
    // 0x227fa0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x227fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_227fa4:
    // 0x227fa4: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x227fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_227fa8:
    // 0x227fa8: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x227fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_227fac:
    // 0x227fac: 0xc058f50  jal         func_163D40
label_227fb0:
    if (ctx->pc == 0x227FB0u) {
        ctx->pc = 0x227FB4u;
        goto label_227fb4;
    }
    ctx->pc = 0x227FACu;
    SET_GPR_U32(ctx, 31, 0x227FB4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x227FACu, 0x227FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FB4u;
label_227fb4:
    // 0x227fb4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227fb8:
    // 0x227fb8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x227fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_227fbc:
    // 0x227fbc: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x227fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
label_227fc0:
    // 0x227fc0: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x227fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_227fc4:
    // 0x227fc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_227fc8:
    // 0x227fc8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227fcc:
    // 0x227fcc: 0xc05ce88  jal         func_173A20
label_227fd0:
    if (ctx->pc == 0x227FD0u) {
        ctx->pc = 0x227FD4u;
        goto label_227fd4;
    }
    ctx->pc = 0x227FCCu;
    SET_GPR_U32(ctx, 31, 0x227FD4u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x227FCCu, 0x227FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FD4u;
label_227fd4:
    // 0x227fd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227fd8:
    // 0x227fd8: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x227fd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
label_227fdc:
    // 0x227fdc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x227fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_227fe0:
    // 0x227fe0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_227fe4:
    if (ctx->pc == 0x227FE4u) {
        ctx->pc = 0x227FE8u;
        goto label_227fe8;
    }
    ctx->pc = 0x227FE0u;
    {
        const bool branch_taken_0x227fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x227fe0) {
            ctx->pc = 0x227FFCu;
            goto label_227ffc;
        }
    }
    ctx->pc = 0x227FE8u;
label_227fe8:
    // 0x227fe8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227fec:
    // 0x227fec: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_227ff0:
    // 0x227ff0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x227ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_227ff4:
    // 0x227ff4: 0xc05cd58  jal         func_173560
label_227ff8:
    if (ctx->pc == 0x227FF8u) {
        ctx->pc = 0x227FFCu;
        goto label_227ffc;
    }
    ctx->pc = 0x227FF4u;
    SET_GPR_U32(ctx, 31, 0x227FFCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x227FF4u, 0x227FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FFCu;
label_227ffc:
    // 0x227ffc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228000:
    // 0x228000: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_228004:
    // 0x228004: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x228004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228008:
    // 0x228008: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22800c:
    // 0x22800c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x22800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228010:
    // 0x228010: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_228014:
    // 0x228014: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x228014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_228018:
    // 0x228018: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22801c:
    // 0x22801c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_228020:
    // 0x228020: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x228020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228024:
    // 0x228024: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x228024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
label_228028:
    // 0x228028: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x228028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_22802c:
    // 0x22802c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22802cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228030:
    // 0x228030: 0x0  nop
    ctx->pc = 0x228030u;
    // NOP
label_228034:
    // 0x228034: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x228034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_228038:
    // 0x228038: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x228038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_22803c:
    // 0x22803c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22803cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228040:
    // 0x228040: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x228040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_228044:
    // 0x228044: 0x3c083fa6  lui         $t0, 0x3FA6
    ctx->pc = 0x228044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16294 << 16));
label_228048:
    // 0x228048: 0x35076666  ori         $a3, $t0, 0x6666
    ctx->pc = 0x228048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26214);
label_22804c:
    // 0x22804c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x22804cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_228050:
    // 0x228050: 0xc4c00098  lwc1        $f0, 0x98($a2)
    ctx->pc = 0x228050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228054:
    // 0x228054: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_228058:
    // 0x228058: 0xe4c00098  swc1        $f0, 0x98($a2)
    ctx->pc = 0x228058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
label_22805c:
    // 0x22805c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228060:
    // 0x228060: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_228064:
    // 0x228064: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x228064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228068:
    // 0x228068: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x228068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_22806c:
    // 0x22806c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22806cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228070:
    // 0x228070: 0x0  nop
    ctx->pc = 0x228070u;
    // NOP
label_228074:
    // 0x228074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228078:
    // 0x228078: 0x0  nop
    ctx->pc = 0x228078u;
    // NOP
label_22807c:
    // 0x22807c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_228080:
    if (ctx->pc == 0x228080u) {
        ctx->pc = 0x228084u;
        goto label_228084;
    }
    ctx->pc = 0x22807Cu;
    {
        const bool branch_taken_0x22807c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22807c) {
            ctx->pc = 0x228098u;
            goto label_228098;
        }
    }
    ctx->pc = 0x228084u;
label_228084:
    // 0x228084: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x228084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_228088:
    // 0x228088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22808c:
    // 0x22808c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22808cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228090:
    // 0x228090: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_228094:
    // 0x228094: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x228094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_228098:
    // 0x228098: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22809c:
    // 0x22809c: 0x94830a00  lhu         $v1, 0xA00($a0)
    ctx->pc = 0x22809cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
label_2280a0:
    // 0x2280a0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2280a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2280a4:
    // 0x2280a4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2280a8:
    if (ctx->pc == 0x2280A8u) {
        ctx->pc = 0x2280ACu;
        goto label_2280ac;
    }
    ctx->pc = 0x2280A4u;
    {
        const bool branch_taken_0x2280a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2280a4) {
            ctx->pc = 0x2280C4u;
            goto label_2280c4;
        }
    }
    ctx->pc = 0x2280ACu;
label_2280ac:
    // 0x2280ac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2280acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2280b0:
    // 0x2280b0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2280b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2280b4:
    // 0x2280b4: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2280b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2280b8:
    // 0x2280b8: 0xc05cd78  jal         func_1735E0
label_2280bc:
    if (ctx->pc == 0x2280BCu) {
        ctx->pc = 0x2280C0u;
        goto label_2280c0;
    }
    ctx->pc = 0x2280B8u;
    SET_GPR_U32(ctx, 31, 0x2280C0u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x2280B8u, 0x2280C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280C0u;
label_2280c0:
    // 0x2280c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2280c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2280c4:
    // 0x2280c4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2280c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2280c8:
    // 0x2280c8: 0xc0974dc  jal         func_25D370
label_2280cc:
    if (ctx->pc == 0x2280CCu) {
        ctx->pc = 0x2280D0u;
        goto label_2280d0;
    }
    ctx->pc = 0x2280C8u;
    SET_GPR_U32(ctx, 31, 0x2280D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2280C8u, 0x2280D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280D0u;
label_2280d0:
    // 0x2280d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2280d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2280d4:
    // 0x2280d4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2280d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2280d8:
    // 0x2280d8: 0x84a3127a  lh          $v1, 0x127A($a1)
    ctx->pc = 0x2280d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
label_2280dc:
    // 0x2280dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2280e0:
    if (ctx->pc == 0x2280E0u) {
        ctx->pc = 0x2280E4u;
        goto label_2280e4;
    }
    ctx->pc = 0x2280DCu;
    {
        const bool branch_taken_0x2280dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2280dc) {
            ctx->pc = 0x2280F4u;
            goto label_2280f4;
        }
    }
    ctx->pc = 0x2280E4u;
label_2280e4:
    // 0x2280e4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2280e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2280e8:
    // 0x2280e8: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2280e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_2280ec:
    // 0x2280ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2280ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2280f0:
    // 0x2280f0: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2280f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2280f4:
    // 0x2280f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2280f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2280f8:
    // 0x2280f8: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2280f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_2280fc:
    // 0x2280fc: 0x1460014c  bnez        $v1, . + 4 + (0x14C << 2)
label_228100:
    if (ctx->pc == 0x228100u) {
        ctx->pc = 0x228104u;
        goto label_228104;
    }
    ctx->pc = 0x2280FCu;
    {
        const bool branch_taken_0x2280fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2280fc) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x228104u;
label_228104:
    // 0x228104: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228108:
    // 0x228108: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x228108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_22810c:
    // 0x22810c: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
label_228110:
    if (ctx->pc == 0x228110u) {
        ctx->pc = 0x228114u;
        goto label_228114;
    }
    ctx->pc = 0x22810Cu;
    {
        const bool branch_taken_0x22810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22810c) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x228114u;
label_228114:
    // 0x228114: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x228114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_228118:
    // 0x228118: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22811c:
    // 0x22811c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22811cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_228120:
    // 0x228120: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228124:
    // 0x228124: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228128:
    // 0x228128: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_22812c:
    // 0x22812c: 0x24061e21  addiu       $a2, $zero, 0x1E21
    ctx->pc = 0x22812cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7713));
label_228130:
    // 0x228130: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228134:
    // 0x228134: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_228138:
    // 0x228138: 0xc0965d0  jal         func_259740
label_22813c:
    if (ctx->pc == 0x22813Cu) {
        ctx->pc = 0x228140u;
        goto label_228140;
    }
    ctx->pc = 0x228138u;
    SET_GPR_U32(ctx, 31, 0x228140u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228138u, 0x228140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228140u;
label_228140:
    // 0x228140: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x228140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_228144:
    // 0x228144: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x228144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_228148:
    // 0x228148: 0xa022dbc2  sb          $v0, -0x243E($at)
    ctx->pc = 0x228148u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958018), (uint8_t)GPR_U32(ctx, 2));
label_22814c:
    // 0x22814c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228150:
    // 0x228150: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x228150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_228154:
    // 0x228154: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x228154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_228158:
    // 0x228158: 0x3c104000  lui         $s0, 0x4000
    ctx->pc = 0x228158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16384 << 16));
label_22815c:
    // 0x22815c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x22815cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_228160:
    // 0x228160: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x228160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
label_228164:
    // 0x228164: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228168:
    // 0x228168: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x228168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22816c:
    // 0x22816c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228170:
    // 0x228170: 0xc0507ac  jal         func_141EB0
label_228174:
    if (ctx->pc == 0x228174u) {
        ctx->pc = 0x228178u;
        goto label_228178;
    }
    ctx->pc = 0x228170u;
    SET_GPR_U32(ctx, 31, 0x228178u);
    ctx->pc = 0x141EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141EB0u, 0x228170u, 0x228178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228178u;
label_228178:
    // 0x228178: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x228178u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22817c:
    // 0x22817c: 0x1000012c  b           . + 4 + (0x12C << 2)
label_228180:
    if (ctx->pc == 0x228180u) {
        ctx->pc = 0x228184u;
        goto label_228184;
    }
    ctx->pc = 0x22817Cu;
    {
        const bool branch_taken_0x22817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22817c) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x228184u;
label_228184:
    // 0x228184: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228188:
    // 0x228188: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x228188u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22818c:
    // 0x22818c: 0xc096b40  jal         func_25AD00
label_228190:
    if (ctx->pc == 0x228190u) {
        ctx->pc = 0x228194u;
        goto label_228194;
    }
    ctx->pc = 0x22818Cu;
    SET_GPR_U32(ctx, 31, 0x228194u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22818Cu, 0x228194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228194u;
label_228194:
    // 0x228194: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x228194u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_228198:
    // 0x228198: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x228198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22819c:
    // 0x22819c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2281a0:
    // 0x2281a0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2281a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_2281a4:
    // 0x2281a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2281a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2281a8:
    // 0x2281a8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2281a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2281ac:
    // 0x2281ac: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x2281acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2281b0:
    // 0x2281b0: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x2281b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2281b4:
    // 0x2281b4: 0xc058f50  jal         func_163D40
label_2281b8:
    if (ctx->pc == 0x2281B8u) {
        ctx->pc = 0x2281BCu;
        goto label_2281bc;
    }
    ctx->pc = 0x2281B4u;
    SET_GPR_U32(ctx, 31, 0x2281BCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2281B4u, 0x2281BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281BCu;
label_2281bc:
    // 0x2281bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2281bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2281c0:
    // 0x2281c0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2281c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2281c4:
    // 0x2281c4: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x2281c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
label_2281c8:
    // 0x2281c8: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x2281c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_2281cc:
    // 0x2281cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2281ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2281d0:
    // 0x2281d0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2281d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2281d4:
    // 0x2281d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2281d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2281d8:
    // 0x2281d8: 0xc05ce88  jal         func_173A20
label_2281dc:
    if (ctx->pc == 0x2281DCu) {
        ctx->pc = 0x2281E0u;
        goto label_2281e0;
    }
    ctx->pc = 0x2281D8u;
    SET_GPR_U32(ctx, 31, 0x2281E0u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x2281D8u, 0x2281E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281E0u;
label_2281e0:
    // 0x2281e0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2281e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2281e4:
    // 0x2281e4: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2281e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2281e8:
    // 0x2281e8: 0x94e80a00  lhu         $t0, 0xA00($a3)
    ctx->pc = 0x2281e8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2560)));
label_2281ec:
    // 0x2281ec: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2281ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_2281f0:
    // 0x2281f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2281f4:
    if (ctx->pc == 0x2281F4u) {
        ctx->pc = 0x2281F8u;
        goto label_2281f8;
    }
    ctx->pc = 0x2281F0u;
    {
        const bool branch_taken_0x2281f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281f0) {
            ctx->pc = 0x22820Cu;
            goto label_22820c;
        }
    }
    ctx->pc = 0x2281F8u;
label_2281f8:
    // 0x2281f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2281f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2281fc:
    // 0x2281fc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2281fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228200:
    // 0x228200: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x228200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_228204:
    // 0x228204: 0xc05cd58  jal         func_173560
label_228208:
    if (ctx->pc == 0x228208u) {
        ctx->pc = 0x22820Cu;
        goto label_22820c;
    }
    ctx->pc = 0x228204u;
    SET_GPR_U32(ctx, 31, 0x22820Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x228204u, 0x22820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22820Cu;
label_22820c:
    // 0x22820c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22820cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228210:
    // 0x228210: 0xc0974dc  jal         func_25D370
label_228214:
    if (ctx->pc == 0x228214u) {
        ctx->pc = 0x228218u;
        goto label_228218;
    }
    ctx->pc = 0x228210u;
    SET_GPR_U32(ctx, 31, 0x228218u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x228210u, 0x228218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228218u;
label_228218:
    // 0x228218: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22821c:
    // 0x22821c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22821cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_228220:
    // 0x228220: 0x10600103  beqz        $v1, . + 4 + (0x103 << 2)
label_228224:
    if (ctx->pc == 0x228224u) {
        ctx->pc = 0x228228u;
        goto label_228228;
    }
    ctx->pc = 0x228220u;
    {
        const bool branch_taken_0x228220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228220) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x228228u;
label_228228:
    // 0x228228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x228228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_22822c:
    // 0x22822c: 0x9022fe17  lbu         $v0, -0x1E9($at)
    ctx->pc = 0x22822cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966807)));
label_228230:
    // 0x228230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_228234:
    // 0x228234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x228234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_228238:
    // 0x228238: 0xa022fe17  sb          $v0, -0x1E9($at)
    ctx->pc = 0x228238u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966807), (uint8_t)GPR_U32(ctx, 2));
label_22823c:
    // 0x22823c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228240:
    // 0x228240: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228244:
    // 0x228244: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x228244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_228248:
    // 0x228248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x228248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22824c:
    // 0x22824c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22824cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228250:
    // 0x228250: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x228250u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_228254:
    // 0x228254: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228258:
    // 0x228258: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x228258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_22825c:
    // 0x22825c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22825cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228260:
    // 0x228260: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x228260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_228264:
    // 0x228264: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228268:
    // 0x228268: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x228268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_22826c:
    // 0x22826c: 0xc067694  jal         func_19DA50
label_228270:
    if (ctx->pc == 0x228270u) {
        ctx->pc = 0x228274u;
        goto label_228274;
    }
    ctx->pc = 0x22826Cu;
    SET_GPR_U32(ctx, 31, 0x228274u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22826Cu, 0x228274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228274u;
label_228274:
    // 0x228274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x228274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_228278:
    // 0x228278: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x228278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_22827c:
    // 0x22827c: 0x2485003c  addiu       $a1, $a0, 0x3C
    ctx->pc = 0x22827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_228280:
    // 0x228280: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x228280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_228284:
    // 0x228284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_228288:
    // 0x228288: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22828c:
    // 0x22828c: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x22828cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
label_228290:
    // 0x228290: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228294:
    // 0x228294: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228298:
    // 0x228298: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_22829c:
    // 0x22829c: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x22829cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_2282a0:
    // 0x2282a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2282a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2282a4:
    // 0x2282a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2282a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2282a8:
    // 0x2282a8: 0xc0965d0  jal         func_259740
label_2282ac:
    if (ctx->pc == 0x2282ACu) {
        ctx->pc = 0x2282B0u;
        goto label_2282b0;
    }
    ctx->pc = 0x2282A8u;
    SET_GPR_U32(ctx, 31, 0x2282B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2282A8u, 0x2282B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282B0u;
label_2282b0:
    // 0x2282b0: 0xc067694  jal         func_19DA50
label_2282b4:
    if (ctx->pc == 0x2282B4u) {
        ctx->pc = 0x2282B8u;
        goto label_2282b8;
    }
    ctx->pc = 0x2282B0u;
    SET_GPR_U32(ctx, 31, 0x2282B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2282B0u, 0x2282B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282B8u;
label_2282b8:
    // 0x2282b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2282b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2282bc:
    // 0x2282bc: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x2282bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_2282c0:
    // 0x2282c0: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x2282c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_2282c4:
    // 0x2282c4: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2282c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_2282c8:
    // 0x2282c8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2282c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2282cc:
    // 0x2282cc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2282ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2282d0:
    // 0x2282d0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2282d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2282d4:
    // 0x2282d4: 0xa485005c  sh          $a1, 0x5C($a0)
    ctx->pc = 0x2282d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 5));
label_2282d8:
    // 0x2282d8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2282d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2282dc:
    // 0x2282dc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2282dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2282e0:
    // 0x2282e0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2282e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2282e4:
    // 0x2282e4: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x2282e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_2282e8:
    // 0x2282e8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2282e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2282ec:
    // 0x2282ec: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x2282ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_2282f0:
    // 0x2282f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2282f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2282f4:
    // 0x2282f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2282f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2282f8:
    // 0x2282f8: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2282f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_2282fc:
    // 0x2282fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2282fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228300:
    // 0x228300: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228304:
    // 0x228304: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x228304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_228308:
    // 0x228308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22830c:
    // 0x22830c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228310:
    // 0x228310: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x228310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_228314:
    // 0x228314: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228318:
    // 0x228318: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x228318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_22831c:
    // 0x22831c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_228320:
    // 0x228320: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x228320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_228324:
    // 0x228324: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x228324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_228328:
    // 0x228328: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x228328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_22832c:
    // 0x22832c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228330:
    // 0x228330: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x228330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_228334:
    // 0x228334: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x228334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_228338:
    // 0x228338: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x228338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_22833c:
    // 0x22833c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22833cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_228340:
    // 0x228340: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x228340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_228344:
    // 0x228344: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228348:
    // 0x228348: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x228348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_22834c:
    // 0x22834c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x22834cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_228350:
    // 0x228350: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x228350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_228354:
    // 0x228354: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x228354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_228358:
    // 0x228358: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x228358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
label_22835c:
    // 0x22835c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_228360:
    // 0x228360: 0x8c281a58  lw          $t0, 0x1A58($at)
    ctx->pc = 0x228360u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_228364:
    // 0x228364: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x228364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_228368:
    // 0x228368: 0x1032024  and         $a0, $t0, $v1
    ctx->pc = 0x228368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_22836c:
    // 0x22836c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_228370:
    // 0x228370: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x228370u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6744), GPR_U32(ctx, 4));
label_228374:
    // 0x228374: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x228374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_228378:
    // 0x228378: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x228378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_22837c:
    // 0x22837c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_228380:
    // 0x228380: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x228380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_228384:
    // 0x228384: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x228384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 3));
label_228388:
    // 0x228388: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22838c:
    // 0x22838c: 0x249210b0  addiu       $s2, $a0, 0x10B0
    ctx->pc = 0x22838cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4272));
label_228390:
    // 0x228390: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x228390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_228394:
    // 0x228394: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x228394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
label_228398:
    // 0x228398: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x228398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_22839c:
    // 0x22839c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x22839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2283a0:
    // 0x2283a0: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x2283a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
label_2283a4:
    // 0x2283a4: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_2283a8:
    if (ctx->pc == 0x2283A8u) {
        ctx->pc = 0x2283ACu;
        goto label_2283ac;
    }
    ctx->pc = 0x2283A4u;
    {
        const bool branch_taken_0x2283a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2283a4) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x2283ACu;
label_2283ac:
    // 0x2283ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2283acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2283b0:
    // 0x2283b0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2283b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2283b4:
    // 0x2283b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2283b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2283b8:
    // 0x2283b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2283b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2283bc:
    // 0x2283bc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2283bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2283c0:
    // 0x2283c0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2283c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_2283c4:
    // 0x2283c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2283c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2283c8:
    // 0x2283c8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2283c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_2283cc:
    // 0x2283cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2283ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2283d0:
    // 0x2283d0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2283d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_2283d4:
    // 0x2283d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2283d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2283d8:
    // 0x2283d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2283d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2283dc:
    // 0x2283dc: 0xc067694  jal         func_19DA50
label_2283e0:
    if (ctx->pc == 0x2283E0u) {
        ctx->pc = 0x2283E4u;
        goto label_2283e4;
    }
    ctx->pc = 0x2283DCu;
    SET_GPR_U32(ctx, 31, 0x2283E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2283DCu, 0x2283E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283E4u;
label_2283e4:
    // 0x2283e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2283e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2283e8:
    // 0x2283e8: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x2283e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_2283ec:
    // 0x2283ec: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2283ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_2283f0:
    // 0x2283f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2283f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2283f4:
    // 0x2283f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2283f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2283f8:
    // 0x2283f8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2283f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2283fc:
    // 0x2283fc: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2283fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
label_228400:
    // 0x228400: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228404:
    // 0x228404: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228408:
    // 0x228408: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_22840c:
    // 0x22840c: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x22840cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_228410:
    // 0x228410: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228414:
    // 0x228414: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_228418:
    // 0x228418: 0xc0965d0  jal         func_259740
label_22841c:
    if (ctx->pc == 0x22841Cu) {
        ctx->pc = 0x228420u;
        goto label_228420;
    }
    ctx->pc = 0x228418u;
    SET_GPR_U32(ctx, 31, 0x228420u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228418u, 0x228420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228420u;
label_228420:
    // 0x228420: 0xc067694  jal         func_19DA50
label_228424:
    if (ctx->pc == 0x228424u) {
        ctx->pc = 0x228428u;
        goto label_228428;
    }
    ctx->pc = 0x228420u;
    SET_GPR_U32(ctx, 31, 0x228428u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228420u, 0x228428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228428u;
label_228428:
    // 0x228428: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x228428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_22842c:
    // 0x22842c: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x22842cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_228430:
    // 0x228430: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x228430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_228434:
    // 0x228434: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x228434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_228438:
    // 0x228438: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x228438u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_22843c:
    // 0x22843c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228440:
    // 0x228440: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x228440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_228444:
    // 0x228444: 0xa485005c  sh          $a1, 0x5C($a0)
    ctx->pc = 0x228444u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 5));
label_228448:
    // 0x228448: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x228448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22844c:
    // 0x22844c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x22844cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_228450:
    // 0x228450: 0x8cd40030  lw          $s4, 0x30($a2)
    ctx->pc = 0x228450u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_228454:
    // 0x228454: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x228454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_228458:
    // 0x228458: 0x2832024  and         $a0, $s4, $v1
    ctx->pc = 0x228458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
label_22845c:
    // 0x22845c: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x22845cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
label_228460:
    // 0x228460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228464:
    // 0x228464: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x228464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228468:
    // 0x228468: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x228468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
label_22846c:
    // 0x22846c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22846cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228470:
    // 0x228470: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x228470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228474:
    // 0x228474: 0xe4c00184  swc1        $f0, 0x184($a2)
    ctx->pc = 0x228474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 388), bits); }
label_228478:
    // 0x228478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22847c:
    // 0x22847c: 0x8fb500a8  lw          $s5, 0xA8($sp)
    ctx->pc = 0x22847cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228480:
    // 0x228480: 0xe6a00188  swc1        $f0, 0x188($s5)
    ctx->pc = 0x228480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 392), bits); }
label_228484:
    // 0x228484: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228488:
    // 0x228488: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x228488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_22848c:
    // 0x22848c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_228490:
    // 0x228490: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x228490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_228494:
    // 0x228494: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x228494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_228498:
    // 0x228498: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x228498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_22849c:
    // 0x22849c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2284a0:
    // 0x2284a0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2284a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2284a4:
    // 0x2284a4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2284a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2284a8:
    // 0x2284a8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2284a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_2284ac:
    // 0x2284ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2284acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2284b0:
    // 0x2284b0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2284b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_2284b4:
    // 0x2284b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2284b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2284b8:
    // 0x2284b8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2284b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2284bc:
    // 0x2284bc: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2284bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2284c0:
    // 0x2284c0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2284c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2284c4:
    // 0x2284c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2284c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2284c8:
    // 0x2284c8: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2284c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_2284cc:
    // 0x2284cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2284ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2284d0:
    // 0x2284d0: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2284d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_2284d4:
    // 0x2284d4: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x2284d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_2284d8:
    // 0x2284d8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2284d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2284dc:
    // 0x2284dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2284dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2284e0:
    // 0x2284e0: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x2284e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6744), GPR_U32(ctx, 4));
label_2284e4:
    // 0x2284e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2284e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2284e8:
    // 0x2284e8: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x2284e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_2284ec:
    // 0x2284ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2284ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2284f0:
    // 0x2284f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2284f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2284f4:
    // 0x2284f4: 0xac241a50  sw          $a0, 0x1A50($at)
    ctx->pc = 0x2284f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 4));
label_2284f8:
    // 0x2284f8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2284f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2284fc:
    // 0x2284fc: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x2284fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
label_228500:
    // 0x228500: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x228500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_228504:
    // 0x228504: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x228504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_228508:
    // 0x228508: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x228508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_22850c:
    // 0x22850c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x22850cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_228510:
    // 0x228510: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x228510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
label_228514:
    // 0x228514: 0x10000046  b           . + 4 + (0x46 << 2)
label_228518:
    if (ctx->pc == 0x228518u) {
        ctx->pc = 0x22851Cu;
        goto label_22851c;
    }
    ctx->pc = 0x228514u;
    {
        const bool branch_taken_0x228514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228514) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x22851Cu;
label_22851c:
    // 0x22851c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x22851cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_228520:
    // 0x228520: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228524:
    // 0x228524: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x228524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_228528:
    // 0x228528: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22852c:
    // 0x22852c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22852cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228530:
    // 0x228530: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x228530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_228534:
    // 0x228534: 0x24060423  addiu       $a2, $zero, 0x423
    ctx->pc = 0x228534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1059));
label_228538:
    // 0x228538: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22853c:
    // 0x22853c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22853cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_228540:
    // 0x228540: 0xc0965d0  jal         func_259740
label_228544:
    if (ctx->pc == 0x228544u) {
        ctx->pc = 0x228548u;
        goto label_228548;
    }
    ctx->pc = 0x228540u;
    SET_GPR_U32(ctx, 31, 0x228548u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228540u, 0x228548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228548u;
label_228548:
    // 0x228548: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x228548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22854c:
    // 0x22854c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_228550:
    // 0x228550: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x228550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_228554:
    // 0x228554: 0xa023dbc2  sb          $v1, -0x243E($at)
    ctx->pc = 0x228554u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958018), (uint8_t)GPR_U32(ctx, 3));
label_228558:
    // 0x228558: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22855c:
    // 0x22855c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22855cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_228560:
    // 0x228560: 0xc096b40  jal         func_25AD00
label_228564:
    if (ctx->pc == 0x228564u) {
        ctx->pc = 0x228568u;
        goto label_228568;
    }
    ctx->pc = 0x228560u;
    SET_GPR_U32(ctx, 31, 0x228568u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x228560u, 0x228568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228568u;
label_228568:
    // 0x228568: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x228568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22856c:
    // 0x22856c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22856cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228570:
    // 0x228570: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x228570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228574:
    // 0x228574: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x228574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
label_228578:
    // 0x228578: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x228578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22857c:
    // 0x22857c: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x22857cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_228580:
    // 0x228580: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x228580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_228584:
    // 0x228584: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x228584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_228588:
    // 0x228588: 0xc058f50  jal         func_163D40
label_22858c:
    if (ctx->pc == 0x22858Cu) {
        ctx->pc = 0x228590u;
        goto label_228590;
    }
    ctx->pc = 0x228588u;
    SET_GPR_U32(ctx, 31, 0x228590u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x228588u, 0x228590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228590u;
label_228590:
    // 0x228590: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228594:
    // 0x228594: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x228594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_228598:
    // 0x228598: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x228598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_22859c:
    // 0x22859c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2285a0:
    // 0x2285a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2285a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2285a4:
    // 0x2285a4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2285a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2285a8:
    // 0x2285a8: 0xc05ce88  jal         func_173A20
label_2285ac:
    if (ctx->pc == 0x2285ACu) {
        ctx->pc = 0x2285B0u;
        goto label_2285b0;
    }
    ctx->pc = 0x2285A8u;
    SET_GPR_U32(ctx, 31, 0x2285B0u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x2285A8u, 0x2285B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285B0u;
label_2285b0:
    // 0x2285b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2285b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2285b4:
    // 0x2285b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2285b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2285b8:
    // 0x2285b8: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x2285b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
label_2285bc:
    // 0x2285bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2285bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2285c0:
    // 0x2285c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2285c4:
    if (ctx->pc == 0x2285C4u) {
        ctx->pc = 0x2285C8u;
        goto label_2285c8;
    }
    ctx->pc = 0x2285C0u;
    {
        const bool branch_taken_0x2285c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2285c0) {
            ctx->pc = 0x2285E4u;
            goto label_2285e4;
        }
    }
    ctx->pc = 0x2285C8u;
label_2285c8:
    // 0x2285c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2285c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2285cc:
    // 0x2285cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2285ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2285d0:
    // 0x2285d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2285d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2285d4:
    // 0x2285d4: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2285d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2285d8:
    // 0x2285d8: 0xc05cd58  jal         func_173560
label_2285dc:
    if (ctx->pc == 0x2285DCu) {
        ctx->pc = 0x2285E0u;
        goto label_2285e0;
    }
    ctx->pc = 0x2285D8u;
    SET_GPR_U32(ctx, 31, 0x2285E0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2285D8u, 0x2285E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285E0u;
label_2285e0:
    // 0x2285e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2285e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2285e4:
    // 0x2285e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2285e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2285e8:
    // 0x2285e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2285e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2285ec:
    // 0x2285ec: 0xc0974dc  jal         func_25D370
label_2285f0:
    if (ctx->pc == 0x2285F0u) {
        ctx->pc = 0x2285F4u;
        goto label_2285f4;
    }
    ctx->pc = 0x2285ECu;
    SET_GPR_U32(ctx, 31, 0x2285F4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2285ECu, 0x2285F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285F4u;
label_2285f4:
    // 0x2285f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2285f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2285f8:
    // 0x2285f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2285f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2285fc:
    // 0x2285fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_228600:
    if (ctx->pc == 0x228600u) {
        ctx->pc = 0x228604u;
        goto label_228604;
    }
    ctx->pc = 0x2285FCu;
    {
        const bool branch_taken_0x2285fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2285fc) {
            ctx->pc = 0x228630u;
            goto label_228630;
        }
    }
    ctx->pc = 0x228604u;
label_228604:
    // 0x228604: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x228604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_228608:
    // 0x228608: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22860c:
    // 0x22860c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22860cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_228610:
    // 0x228610: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228614:
    // 0x228614: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228618:
    // 0x228618: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_22861c:
    // 0x22861c: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x22861cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
label_228620:
    // 0x228620: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228624:
    // 0x228624: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_228628:
    // 0x228628: 0xc0965d0  jal         func_259740
label_22862c:
    if (ctx->pc == 0x22862Cu) {
        ctx->pc = 0x228630u;
        goto label_228630;
    }
    ctx->pc = 0x228628u;
    SET_GPR_U32(ctx, 31, 0x228630u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228628u, 0x228630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228630u;
label_228630:
    // 0x228630: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228634:
    // 0x228634: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_228638:
    // 0x228638: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x228638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22863c:
    // 0x22863c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22863cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228640:
    // 0x228640: 0x0  nop
    ctx->pc = 0x228640u;
    // NOP
label_228644:
    // 0x228644: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x228644u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228648:
    // 0x228648: 0x0  nop
    ctx->pc = 0x228648u;
    // NOP
label_22864c:
    // 0x22864c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_228650:
    if (ctx->pc == 0x228650u) {
        ctx->pc = 0x228654u;
        goto label_228654;
    }
    ctx->pc = 0x22864Cu;
    {
        const bool branch_taken_0x22864c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22864c) {
            ctx->pc = 0x228730u;
            goto label_228730;
        }
    }
    ctx->pc = 0x228654u;
label_228654:
    // 0x228654: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228658:
    // 0x228658: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_22865c:
    // 0x22865c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228660:
    // 0x228660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228664:
    // 0x228664: 0x0  nop
    ctx->pc = 0x228664u;
    // NOP
label_228668:
    // 0x228668: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22866c:
    // 0x22866c: 0x0  nop
    ctx->pc = 0x22866cu;
    // NOP
label_228670:
    // 0x228670: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_228674:
    if (ctx->pc == 0x228674u) {
        ctx->pc = 0x228678u;
        goto label_228678;
    }
    ctx->pc = 0x228670u;
    {
        const bool branch_taken_0x228670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228670) {
            ctx->pc = 0x2286D8u;
            goto label_2286d8;
        }
    }
    ctx->pc = 0x228678u;
label_228678:
    // 0x228678: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_22867c:
    // 0x22867c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_228680:
    // 0x228680: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x228680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228684:
    // 0x228684: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x228684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
label_228688:
    // 0x228688: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x228688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22868c:
    // 0x22868c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22868cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228690:
    // 0x228690: 0x0  nop
    ctx->pc = 0x228690u;
    // NOP
label_228694:
    // 0x228694: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x228694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_228698:
    // 0x228698: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x228698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_22869c:
    // 0x22869c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2286a0:
    // 0x2286a0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2286a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2286a4:
    // 0x2286a4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2286a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2286a8:
    // 0x2286a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2286a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2286ac:
    // 0x2286ac: 0x0  nop
    ctx->pc = 0x2286acu;
    // NOP
label_2286b0:
    // 0x2286b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2286b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2286b4:
    // 0x2286b4: 0x0  nop
    ctx->pc = 0x2286b4u;
    // NOP
label_2286b8:
    // 0x2286b8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_2286bc:
    if (ctx->pc == 0x2286BCu) {
        ctx->pc = 0x2286C0u;
        goto label_2286c0;
    }
    ctx->pc = 0x2286B8u;
    {
        const bool branch_taken_0x2286b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2286b8) {
            ctx->pc = 0x228730u;
            goto label_228730;
        }
    }
    ctx->pc = 0x2286C0u;
label_2286c0:
    // 0x2286c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2286c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2286c4:
    // 0x2286c4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2286c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2286c8:
    // 0x2286c8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2286c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2286cc:
    // 0x2286cc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2286ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2286d0:
    // 0x2286d0: 0x10000017  b           . + 4 + (0x17 << 2)
label_2286d4:
    if (ctx->pc == 0x2286D4u) {
        ctx->pc = 0x2286D8u;
        goto label_2286d8;
    }
    ctx->pc = 0x2286D0u;
    {
        const bool branch_taken_0x2286d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2286d0) {
            ctx->pc = 0x228730u;
            goto label_228730;
        }
    }
    ctx->pc = 0x2286D8u;
label_2286d8:
    // 0x2286d8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2286d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2286dc:
    // 0x2286dc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2286dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2286e0:
    // 0x2286e0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2286e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2286e4:
    // 0x2286e4: 0x3c043cc9  lui         $a0, 0x3CC9
    ctx->pc = 0x2286e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15561 << 16));
label_2286e8:
    // 0x2286e8: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2286e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_2286ec:
    // 0x2286ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2286ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2286f0:
    // 0x2286f0: 0x0  nop
    ctx->pc = 0x2286f0u;
    // NOP
label_2286f4:
    // 0x2286f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2286f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2286f8:
    // 0x2286f8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2286f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_2286fc:
    // 0x2286fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2286fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228700:
    // 0x228700: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_228704:
    // 0x228704: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x228704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228708:
    // 0x228708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22870c:
    // 0x22870c: 0x0  nop
    ctx->pc = 0x22870cu;
    // NOP
label_228710:
    // 0x228710: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228714:
    // 0x228714: 0x0  nop
    ctx->pc = 0x228714u;
    // NOP
label_228718:
    // 0x228718: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_22871c:
    if (ctx->pc == 0x22871Cu) {
        ctx->pc = 0x228720u;
        goto label_228720;
    }
    ctx->pc = 0x228718u;
    {
        const bool branch_taken_0x228718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228718) {
            ctx->pc = 0x228730u;
            goto label_228730;
        }
    }
    ctx->pc = 0x228720u;
label_228720:
    // 0x228720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228724:
    // 0x228724: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_228728:
    // 0x228728: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_22872c:
    // 0x22872c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22872cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_228730:
    // 0x228730: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x228730u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_228734:
    // 0x228734: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x228734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_228738:
    // 0x228738: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x228738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22873c:
    // 0x22873c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22873cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_228740:
    // 0x228740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x228740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_228744:
    // 0x228744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_228748:
    // 0x228748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x228748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22874c:
    // 0x22874c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22874cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_228750:
    // 0x228750: 0x3e00008  jr          $ra
label_228754:
    if (ctx->pc == 0x228754u) {
        ctx->pc = 0x228758u;
        goto label_fallthrough_0x228750;
    }
    ctx->pc = 0x228750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228750:
    ctx->pc = 0x228758u;
}
