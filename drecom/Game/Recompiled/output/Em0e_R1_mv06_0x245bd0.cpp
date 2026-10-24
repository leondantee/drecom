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

// Function: Em0e_R1_mv06
// Address: 0x245bd0 - 0x246964
void Em0e_R1_mv06_0x245bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv06_0x245bd0");
#endif

    switch (ctx->pc) {
        case 0x245bd0u: goto label_245bd0;
        case 0x245bd4u: goto label_245bd4;
        case 0x245bd8u: goto label_245bd8;
        case 0x245bdcu: goto label_245bdc;
        case 0x245be0u: goto label_245be0;
        case 0x245be4u: goto label_245be4;
        case 0x245be8u: goto label_245be8;
        case 0x245becu: goto label_245bec;
        case 0x245bf0u: goto label_245bf0;
        case 0x245bf4u: goto label_245bf4;
        case 0x245bf8u: goto label_245bf8;
        case 0x245bfcu: goto label_245bfc;
        case 0x245c00u: goto label_245c00;
        case 0x245c04u: goto label_245c04;
        case 0x245c08u: goto label_245c08;
        case 0x245c0cu: goto label_245c0c;
        case 0x245c10u: goto label_245c10;
        case 0x245c14u: goto label_245c14;
        case 0x245c18u: goto label_245c18;
        case 0x245c1cu: goto label_245c1c;
        case 0x245c20u: goto label_245c20;
        case 0x245c24u: goto label_245c24;
        case 0x245c28u: goto label_245c28;
        case 0x245c2cu: goto label_245c2c;
        case 0x245c30u: goto label_245c30;
        case 0x245c34u: goto label_245c34;
        case 0x245c38u: goto label_245c38;
        case 0x245c3cu: goto label_245c3c;
        case 0x245c40u: goto label_245c40;
        case 0x245c44u: goto label_245c44;
        case 0x245c48u: goto label_245c48;
        case 0x245c4cu: goto label_245c4c;
        case 0x245c50u: goto label_245c50;
        case 0x245c54u: goto label_245c54;
        case 0x245c58u: goto label_245c58;
        case 0x245c5cu: goto label_245c5c;
        case 0x245c60u: goto label_245c60;
        case 0x245c64u: goto label_245c64;
        case 0x245c68u: goto label_245c68;
        case 0x245c6cu: goto label_245c6c;
        case 0x245c70u: goto label_245c70;
        case 0x245c74u: goto label_245c74;
        case 0x245c78u: goto label_245c78;
        case 0x245c7cu: goto label_245c7c;
        case 0x245c80u: goto label_245c80;
        case 0x245c84u: goto label_245c84;
        case 0x245c88u: goto label_245c88;
        case 0x245c8cu: goto label_245c8c;
        case 0x245c90u: goto label_245c90;
        case 0x245c94u: goto label_245c94;
        case 0x245c98u: goto label_245c98;
        case 0x245c9cu: goto label_245c9c;
        case 0x245ca0u: goto label_245ca0;
        case 0x245ca4u: goto label_245ca4;
        case 0x245ca8u: goto label_245ca8;
        case 0x245cacu: goto label_245cac;
        case 0x245cb0u: goto label_245cb0;
        case 0x245cb4u: goto label_245cb4;
        case 0x245cb8u: goto label_245cb8;
        case 0x245cbcu: goto label_245cbc;
        case 0x245cc0u: goto label_245cc0;
        case 0x245cc4u: goto label_245cc4;
        case 0x245cc8u: goto label_245cc8;
        case 0x245cccu: goto label_245ccc;
        case 0x245cd0u: goto label_245cd0;
        case 0x245cd4u: goto label_245cd4;
        case 0x245cd8u: goto label_245cd8;
        case 0x245cdcu: goto label_245cdc;
        case 0x245ce0u: goto label_245ce0;
        case 0x245ce4u: goto label_245ce4;
        case 0x245ce8u: goto label_245ce8;
        case 0x245cecu: goto label_245cec;
        case 0x245cf0u: goto label_245cf0;
        case 0x245cf4u: goto label_245cf4;
        case 0x245cf8u: goto label_245cf8;
        case 0x245cfcu: goto label_245cfc;
        case 0x245d00u: goto label_245d00;
        case 0x245d04u: goto label_245d04;
        case 0x245d08u: goto label_245d08;
        case 0x245d0cu: goto label_245d0c;
        case 0x245d10u: goto label_245d10;
        case 0x245d14u: goto label_245d14;
        case 0x245d18u: goto label_245d18;
        case 0x245d1cu: goto label_245d1c;
        case 0x245d20u: goto label_245d20;
        case 0x245d24u: goto label_245d24;
        case 0x245d28u: goto label_245d28;
        case 0x245d2cu: goto label_245d2c;
        case 0x245d30u: goto label_245d30;
        case 0x245d34u: goto label_245d34;
        case 0x245d38u: goto label_245d38;
        case 0x245d3cu: goto label_245d3c;
        case 0x245d40u: goto label_245d40;
        case 0x245d44u: goto label_245d44;
        case 0x245d48u: goto label_245d48;
        case 0x245d4cu: goto label_245d4c;
        case 0x245d50u: goto label_245d50;
        case 0x245d54u: goto label_245d54;
        case 0x245d58u: goto label_245d58;
        case 0x245d5cu: goto label_245d5c;
        case 0x245d60u: goto label_245d60;
        case 0x245d64u: goto label_245d64;
        case 0x245d68u: goto label_245d68;
        case 0x245d6cu: goto label_245d6c;
        case 0x245d70u: goto label_245d70;
        case 0x245d74u: goto label_245d74;
        case 0x245d78u: goto label_245d78;
        case 0x245d7cu: goto label_245d7c;
        case 0x245d80u: goto label_245d80;
        case 0x245d84u: goto label_245d84;
        case 0x245d88u: goto label_245d88;
        case 0x245d8cu: goto label_245d8c;
        case 0x245d90u: goto label_245d90;
        case 0x245d94u: goto label_245d94;
        case 0x245d98u: goto label_245d98;
        case 0x245d9cu: goto label_245d9c;
        case 0x245da0u: goto label_245da0;
        case 0x245da4u: goto label_245da4;
        case 0x245da8u: goto label_245da8;
        case 0x245dacu: goto label_245dac;
        case 0x245db0u: goto label_245db0;
        case 0x245db4u: goto label_245db4;
        case 0x245db8u: goto label_245db8;
        case 0x245dbcu: goto label_245dbc;
        case 0x245dc0u: goto label_245dc0;
        case 0x245dc4u: goto label_245dc4;
        case 0x245dc8u: goto label_245dc8;
        case 0x245dccu: goto label_245dcc;
        case 0x245dd0u: goto label_245dd0;
        case 0x245dd4u: goto label_245dd4;
        case 0x245dd8u: goto label_245dd8;
        case 0x245ddcu: goto label_245ddc;
        case 0x245de0u: goto label_245de0;
        case 0x245de4u: goto label_245de4;
        case 0x245de8u: goto label_245de8;
        case 0x245decu: goto label_245dec;
        case 0x245df0u: goto label_245df0;
        case 0x245df4u: goto label_245df4;
        case 0x245df8u: goto label_245df8;
        case 0x245dfcu: goto label_245dfc;
        case 0x245e00u: goto label_245e00;
        case 0x245e04u: goto label_245e04;
        case 0x245e08u: goto label_245e08;
        case 0x245e0cu: goto label_245e0c;
        case 0x245e10u: goto label_245e10;
        case 0x245e14u: goto label_245e14;
        case 0x245e18u: goto label_245e18;
        case 0x245e1cu: goto label_245e1c;
        case 0x245e20u: goto label_245e20;
        case 0x245e24u: goto label_245e24;
        case 0x245e28u: goto label_245e28;
        case 0x245e2cu: goto label_245e2c;
        case 0x245e30u: goto label_245e30;
        case 0x245e34u: goto label_245e34;
        case 0x245e38u: goto label_245e38;
        case 0x245e3cu: goto label_245e3c;
        case 0x245e40u: goto label_245e40;
        case 0x245e44u: goto label_245e44;
        case 0x245e48u: goto label_245e48;
        case 0x245e4cu: goto label_245e4c;
        case 0x245e50u: goto label_245e50;
        case 0x245e54u: goto label_245e54;
        case 0x245e58u: goto label_245e58;
        case 0x245e5cu: goto label_245e5c;
        case 0x245e60u: goto label_245e60;
        case 0x245e64u: goto label_245e64;
        case 0x245e68u: goto label_245e68;
        case 0x245e6cu: goto label_245e6c;
        case 0x245e70u: goto label_245e70;
        case 0x245e74u: goto label_245e74;
        case 0x245e78u: goto label_245e78;
        case 0x245e7cu: goto label_245e7c;
        case 0x245e80u: goto label_245e80;
        case 0x245e84u: goto label_245e84;
        case 0x245e88u: goto label_245e88;
        case 0x245e8cu: goto label_245e8c;
        case 0x245e90u: goto label_245e90;
        case 0x245e94u: goto label_245e94;
        case 0x245e98u: goto label_245e98;
        case 0x245e9cu: goto label_245e9c;
        case 0x245ea0u: goto label_245ea0;
        case 0x245ea4u: goto label_245ea4;
        case 0x245ea8u: goto label_245ea8;
        case 0x245eacu: goto label_245eac;
        case 0x245eb0u: goto label_245eb0;
        case 0x245eb4u: goto label_245eb4;
        case 0x245eb8u: goto label_245eb8;
        case 0x245ebcu: goto label_245ebc;
        case 0x245ec0u: goto label_245ec0;
        case 0x245ec4u: goto label_245ec4;
        case 0x245ec8u: goto label_245ec8;
        case 0x245eccu: goto label_245ecc;
        case 0x245ed0u: goto label_245ed0;
        case 0x245ed4u: goto label_245ed4;
        case 0x245ed8u: goto label_245ed8;
        case 0x245edcu: goto label_245edc;
        case 0x245ee0u: goto label_245ee0;
        case 0x245ee4u: goto label_245ee4;
        case 0x245ee8u: goto label_245ee8;
        case 0x245eecu: goto label_245eec;
        case 0x245ef0u: goto label_245ef0;
        case 0x245ef4u: goto label_245ef4;
        case 0x245ef8u: goto label_245ef8;
        case 0x245efcu: goto label_245efc;
        case 0x245f00u: goto label_245f00;
        case 0x245f04u: goto label_245f04;
        case 0x245f08u: goto label_245f08;
        case 0x245f0cu: goto label_245f0c;
        case 0x245f10u: goto label_245f10;
        case 0x245f14u: goto label_245f14;
        case 0x245f18u: goto label_245f18;
        case 0x245f1cu: goto label_245f1c;
        case 0x245f20u: goto label_245f20;
        case 0x245f24u: goto label_245f24;
        case 0x245f28u: goto label_245f28;
        case 0x245f2cu: goto label_245f2c;
        case 0x245f30u: goto label_245f30;
        case 0x245f34u: goto label_245f34;
        case 0x245f38u: goto label_245f38;
        case 0x245f3cu: goto label_245f3c;
        case 0x245f40u: goto label_245f40;
        case 0x245f44u: goto label_245f44;
        case 0x245f48u: goto label_245f48;
        case 0x245f4cu: goto label_245f4c;
        case 0x245f50u: goto label_245f50;
        case 0x245f54u: goto label_245f54;
        case 0x245f58u: goto label_245f58;
        case 0x245f5cu: goto label_245f5c;
        case 0x245f60u: goto label_245f60;
        case 0x245f64u: goto label_245f64;
        case 0x245f68u: goto label_245f68;
        case 0x245f6cu: goto label_245f6c;
        case 0x245f70u: goto label_245f70;
        case 0x245f74u: goto label_245f74;
        case 0x245f78u: goto label_245f78;
        case 0x245f7cu: goto label_245f7c;
        case 0x245f80u: goto label_245f80;
        case 0x245f84u: goto label_245f84;
        case 0x245f88u: goto label_245f88;
        case 0x245f8cu: goto label_245f8c;
        case 0x245f90u: goto label_245f90;
        case 0x245f94u: goto label_245f94;
        case 0x245f98u: goto label_245f98;
        case 0x245f9cu: goto label_245f9c;
        case 0x245fa0u: goto label_245fa0;
        case 0x245fa4u: goto label_245fa4;
        case 0x245fa8u: goto label_245fa8;
        case 0x245facu: goto label_245fac;
        case 0x245fb0u: goto label_245fb0;
        case 0x245fb4u: goto label_245fb4;
        case 0x245fb8u: goto label_245fb8;
        case 0x245fbcu: goto label_245fbc;
        case 0x245fc0u: goto label_245fc0;
        case 0x245fc4u: goto label_245fc4;
        case 0x245fc8u: goto label_245fc8;
        case 0x245fccu: goto label_245fcc;
        case 0x245fd0u: goto label_245fd0;
        case 0x245fd4u: goto label_245fd4;
        case 0x245fd8u: goto label_245fd8;
        case 0x245fdcu: goto label_245fdc;
        case 0x245fe0u: goto label_245fe0;
        case 0x245fe4u: goto label_245fe4;
        case 0x245fe8u: goto label_245fe8;
        case 0x245fecu: goto label_245fec;
        case 0x245ff0u: goto label_245ff0;
        case 0x245ff4u: goto label_245ff4;
        case 0x245ff8u: goto label_245ff8;
        case 0x245ffcu: goto label_245ffc;
        case 0x246000u: goto label_246000;
        case 0x246004u: goto label_246004;
        case 0x246008u: goto label_246008;
        case 0x24600cu: goto label_24600c;
        case 0x246010u: goto label_246010;
        case 0x246014u: goto label_246014;
        case 0x246018u: goto label_246018;
        case 0x24601cu: goto label_24601c;
        case 0x246020u: goto label_246020;
        case 0x246024u: goto label_246024;
        case 0x246028u: goto label_246028;
        case 0x24602cu: goto label_24602c;
        case 0x246030u: goto label_246030;
        case 0x246034u: goto label_246034;
        case 0x246038u: goto label_246038;
        case 0x24603cu: goto label_24603c;
        case 0x246040u: goto label_246040;
        case 0x246044u: goto label_246044;
        case 0x246048u: goto label_246048;
        case 0x24604cu: goto label_24604c;
        case 0x246050u: goto label_246050;
        case 0x246054u: goto label_246054;
        case 0x246058u: goto label_246058;
        case 0x24605cu: goto label_24605c;
        case 0x246060u: goto label_246060;
        case 0x246064u: goto label_246064;
        case 0x246068u: goto label_246068;
        case 0x24606cu: goto label_24606c;
        case 0x246070u: goto label_246070;
        case 0x246074u: goto label_246074;
        case 0x246078u: goto label_246078;
        case 0x24607cu: goto label_24607c;
        case 0x246080u: goto label_246080;
        case 0x246084u: goto label_246084;
        case 0x246088u: goto label_246088;
        case 0x24608cu: goto label_24608c;
        case 0x246090u: goto label_246090;
        case 0x246094u: goto label_246094;
        case 0x246098u: goto label_246098;
        case 0x24609cu: goto label_24609c;
        case 0x2460a0u: goto label_2460a0;
        case 0x2460a4u: goto label_2460a4;
        case 0x2460a8u: goto label_2460a8;
        case 0x2460acu: goto label_2460ac;
        case 0x2460b0u: goto label_2460b0;
        case 0x2460b4u: goto label_2460b4;
        case 0x2460b8u: goto label_2460b8;
        case 0x2460bcu: goto label_2460bc;
        case 0x2460c0u: goto label_2460c0;
        case 0x2460c4u: goto label_2460c4;
        case 0x2460c8u: goto label_2460c8;
        case 0x2460ccu: goto label_2460cc;
        case 0x2460d0u: goto label_2460d0;
        case 0x2460d4u: goto label_2460d4;
        case 0x2460d8u: goto label_2460d8;
        case 0x2460dcu: goto label_2460dc;
        case 0x2460e0u: goto label_2460e0;
        case 0x2460e4u: goto label_2460e4;
        case 0x2460e8u: goto label_2460e8;
        case 0x2460ecu: goto label_2460ec;
        case 0x2460f0u: goto label_2460f0;
        case 0x2460f4u: goto label_2460f4;
        case 0x2460f8u: goto label_2460f8;
        case 0x2460fcu: goto label_2460fc;
        case 0x246100u: goto label_246100;
        case 0x246104u: goto label_246104;
        case 0x246108u: goto label_246108;
        case 0x24610cu: goto label_24610c;
        case 0x246110u: goto label_246110;
        case 0x246114u: goto label_246114;
        case 0x246118u: goto label_246118;
        case 0x24611cu: goto label_24611c;
        case 0x246120u: goto label_246120;
        case 0x246124u: goto label_246124;
        case 0x246128u: goto label_246128;
        case 0x24612cu: goto label_24612c;
        case 0x246130u: goto label_246130;
        case 0x246134u: goto label_246134;
        case 0x246138u: goto label_246138;
        case 0x24613cu: goto label_24613c;
        case 0x246140u: goto label_246140;
        case 0x246144u: goto label_246144;
        case 0x246148u: goto label_246148;
        case 0x24614cu: goto label_24614c;
        case 0x246150u: goto label_246150;
        case 0x246154u: goto label_246154;
        case 0x246158u: goto label_246158;
        case 0x24615cu: goto label_24615c;
        case 0x246160u: goto label_246160;
        case 0x246164u: goto label_246164;
        case 0x246168u: goto label_246168;
        case 0x24616cu: goto label_24616c;
        case 0x246170u: goto label_246170;
        case 0x246174u: goto label_246174;
        case 0x246178u: goto label_246178;
        case 0x24617cu: goto label_24617c;
        case 0x246180u: goto label_246180;
        case 0x246184u: goto label_246184;
        case 0x246188u: goto label_246188;
        case 0x24618cu: goto label_24618c;
        case 0x246190u: goto label_246190;
        case 0x246194u: goto label_246194;
        case 0x246198u: goto label_246198;
        case 0x24619cu: goto label_24619c;
        case 0x2461a0u: goto label_2461a0;
        case 0x2461a4u: goto label_2461a4;
        case 0x2461a8u: goto label_2461a8;
        case 0x2461acu: goto label_2461ac;
        case 0x2461b0u: goto label_2461b0;
        case 0x2461b4u: goto label_2461b4;
        case 0x2461b8u: goto label_2461b8;
        case 0x2461bcu: goto label_2461bc;
        case 0x2461c0u: goto label_2461c0;
        case 0x2461c4u: goto label_2461c4;
        case 0x2461c8u: goto label_2461c8;
        case 0x2461ccu: goto label_2461cc;
        case 0x2461d0u: goto label_2461d0;
        case 0x2461d4u: goto label_2461d4;
        case 0x2461d8u: goto label_2461d8;
        case 0x2461dcu: goto label_2461dc;
        case 0x2461e0u: goto label_2461e0;
        case 0x2461e4u: goto label_2461e4;
        case 0x2461e8u: goto label_2461e8;
        case 0x2461ecu: goto label_2461ec;
        case 0x2461f0u: goto label_2461f0;
        case 0x2461f4u: goto label_2461f4;
        case 0x2461f8u: goto label_2461f8;
        case 0x2461fcu: goto label_2461fc;
        case 0x246200u: goto label_246200;
        case 0x246204u: goto label_246204;
        case 0x246208u: goto label_246208;
        case 0x24620cu: goto label_24620c;
        case 0x246210u: goto label_246210;
        case 0x246214u: goto label_246214;
        case 0x246218u: goto label_246218;
        case 0x24621cu: goto label_24621c;
        case 0x246220u: goto label_246220;
        case 0x246224u: goto label_246224;
        case 0x246228u: goto label_246228;
        case 0x24622cu: goto label_24622c;
        case 0x246230u: goto label_246230;
        case 0x246234u: goto label_246234;
        case 0x246238u: goto label_246238;
        case 0x24623cu: goto label_24623c;
        case 0x246240u: goto label_246240;
        case 0x246244u: goto label_246244;
        case 0x246248u: goto label_246248;
        case 0x24624cu: goto label_24624c;
        case 0x246250u: goto label_246250;
        case 0x246254u: goto label_246254;
        case 0x246258u: goto label_246258;
        case 0x24625cu: goto label_24625c;
        case 0x246260u: goto label_246260;
        case 0x246264u: goto label_246264;
        case 0x246268u: goto label_246268;
        case 0x24626cu: goto label_24626c;
        case 0x246270u: goto label_246270;
        case 0x246274u: goto label_246274;
        case 0x246278u: goto label_246278;
        case 0x24627cu: goto label_24627c;
        case 0x246280u: goto label_246280;
        case 0x246284u: goto label_246284;
        case 0x246288u: goto label_246288;
        case 0x24628cu: goto label_24628c;
        case 0x246290u: goto label_246290;
        case 0x246294u: goto label_246294;
        case 0x246298u: goto label_246298;
        case 0x24629cu: goto label_24629c;
        case 0x2462a0u: goto label_2462a0;
        case 0x2462a4u: goto label_2462a4;
        case 0x2462a8u: goto label_2462a8;
        case 0x2462acu: goto label_2462ac;
        case 0x2462b0u: goto label_2462b0;
        case 0x2462b4u: goto label_2462b4;
        case 0x2462b8u: goto label_2462b8;
        case 0x2462bcu: goto label_2462bc;
        case 0x2462c0u: goto label_2462c0;
        case 0x2462c4u: goto label_2462c4;
        case 0x2462c8u: goto label_2462c8;
        case 0x2462ccu: goto label_2462cc;
        case 0x2462d0u: goto label_2462d0;
        case 0x2462d4u: goto label_2462d4;
        case 0x2462d8u: goto label_2462d8;
        case 0x2462dcu: goto label_2462dc;
        case 0x2462e0u: goto label_2462e0;
        case 0x2462e4u: goto label_2462e4;
        case 0x2462e8u: goto label_2462e8;
        case 0x2462ecu: goto label_2462ec;
        case 0x2462f0u: goto label_2462f0;
        case 0x2462f4u: goto label_2462f4;
        case 0x2462f8u: goto label_2462f8;
        case 0x2462fcu: goto label_2462fc;
        case 0x246300u: goto label_246300;
        case 0x246304u: goto label_246304;
        case 0x246308u: goto label_246308;
        case 0x24630cu: goto label_24630c;
        case 0x246310u: goto label_246310;
        case 0x246314u: goto label_246314;
        case 0x246318u: goto label_246318;
        case 0x24631cu: goto label_24631c;
        case 0x246320u: goto label_246320;
        case 0x246324u: goto label_246324;
        case 0x246328u: goto label_246328;
        case 0x24632cu: goto label_24632c;
        case 0x246330u: goto label_246330;
        case 0x246334u: goto label_246334;
        case 0x246338u: goto label_246338;
        case 0x24633cu: goto label_24633c;
        case 0x246340u: goto label_246340;
        case 0x246344u: goto label_246344;
        case 0x246348u: goto label_246348;
        case 0x24634cu: goto label_24634c;
        case 0x246350u: goto label_246350;
        case 0x246354u: goto label_246354;
        case 0x246358u: goto label_246358;
        case 0x24635cu: goto label_24635c;
        case 0x246360u: goto label_246360;
        case 0x246364u: goto label_246364;
        case 0x246368u: goto label_246368;
        case 0x24636cu: goto label_24636c;
        case 0x246370u: goto label_246370;
        case 0x246374u: goto label_246374;
        case 0x246378u: goto label_246378;
        case 0x24637cu: goto label_24637c;
        case 0x246380u: goto label_246380;
        case 0x246384u: goto label_246384;
        case 0x246388u: goto label_246388;
        case 0x24638cu: goto label_24638c;
        case 0x246390u: goto label_246390;
        case 0x246394u: goto label_246394;
        case 0x246398u: goto label_246398;
        case 0x24639cu: goto label_24639c;
        case 0x2463a0u: goto label_2463a0;
        case 0x2463a4u: goto label_2463a4;
        case 0x2463a8u: goto label_2463a8;
        case 0x2463acu: goto label_2463ac;
        case 0x2463b0u: goto label_2463b0;
        case 0x2463b4u: goto label_2463b4;
        case 0x2463b8u: goto label_2463b8;
        case 0x2463bcu: goto label_2463bc;
        case 0x2463c0u: goto label_2463c0;
        case 0x2463c4u: goto label_2463c4;
        case 0x2463c8u: goto label_2463c8;
        case 0x2463ccu: goto label_2463cc;
        case 0x2463d0u: goto label_2463d0;
        case 0x2463d4u: goto label_2463d4;
        case 0x2463d8u: goto label_2463d8;
        case 0x2463dcu: goto label_2463dc;
        case 0x2463e0u: goto label_2463e0;
        case 0x2463e4u: goto label_2463e4;
        case 0x2463e8u: goto label_2463e8;
        case 0x2463ecu: goto label_2463ec;
        case 0x2463f0u: goto label_2463f0;
        case 0x2463f4u: goto label_2463f4;
        case 0x2463f8u: goto label_2463f8;
        case 0x2463fcu: goto label_2463fc;
        case 0x246400u: goto label_246400;
        case 0x246404u: goto label_246404;
        case 0x246408u: goto label_246408;
        case 0x24640cu: goto label_24640c;
        case 0x246410u: goto label_246410;
        case 0x246414u: goto label_246414;
        case 0x246418u: goto label_246418;
        case 0x24641cu: goto label_24641c;
        case 0x246420u: goto label_246420;
        case 0x246424u: goto label_246424;
        case 0x246428u: goto label_246428;
        case 0x24642cu: goto label_24642c;
        case 0x246430u: goto label_246430;
        case 0x246434u: goto label_246434;
        case 0x246438u: goto label_246438;
        case 0x24643cu: goto label_24643c;
        case 0x246440u: goto label_246440;
        case 0x246444u: goto label_246444;
        case 0x246448u: goto label_246448;
        case 0x24644cu: goto label_24644c;
        case 0x246450u: goto label_246450;
        case 0x246454u: goto label_246454;
        case 0x246458u: goto label_246458;
        case 0x24645cu: goto label_24645c;
        case 0x246460u: goto label_246460;
        case 0x246464u: goto label_246464;
        case 0x246468u: goto label_246468;
        case 0x24646cu: goto label_24646c;
        case 0x246470u: goto label_246470;
        case 0x246474u: goto label_246474;
        case 0x246478u: goto label_246478;
        case 0x24647cu: goto label_24647c;
        case 0x246480u: goto label_246480;
        case 0x246484u: goto label_246484;
        case 0x246488u: goto label_246488;
        case 0x24648cu: goto label_24648c;
        case 0x246490u: goto label_246490;
        case 0x246494u: goto label_246494;
        case 0x246498u: goto label_246498;
        case 0x24649cu: goto label_24649c;
        case 0x2464a0u: goto label_2464a0;
        case 0x2464a4u: goto label_2464a4;
        case 0x2464a8u: goto label_2464a8;
        case 0x2464acu: goto label_2464ac;
        case 0x2464b0u: goto label_2464b0;
        case 0x2464b4u: goto label_2464b4;
        case 0x2464b8u: goto label_2464b8;
        case 0x2464bcu: goto label_2464bc;
        case 0x2464c0u: goto label_2464c0;
        case 0x2464c4u: goto label_2464c4;
        case 0x2464c8u: goto label_2464c8;
        case 0x2464ccu: goto label_2464cc;
        case 0x2464d0u: goto label_2464d0;
        case 0x2464d4u: goto label_2464d4;
        case 0x2464d8u: goto label_2464d8;
        case 0x2464dcu: goto label_2464dc;
        case 0x2464e0u: goto label_2464e0;
        case 0x2464e4u: goto label_2464e4;
        case 0x2464e8u: goto label_2464e8;
        case 0x2464ecu: goto label_2464ec;
        case 0x2464f0u: goto label_2464f0;
        case 0x2464f4u: goto label_2464f4;
        case 0x2464f8u: goto label_2464f8;
        case 0x2464fcu: goto label_2464fc;
        case 0x246500u: goto label_246500;
        case 0x246504u: goto label_246504;
        case 0x246508u: goto label_246508;
        case 0x24650cu: goto label_24650c;
        case 0x246510u: goto label_246510;
        case 0x246514u: goto label_246514;
        case 0x246518u: goto label_246518;
        case 0x24651cu: goto label_24651c;
        case 0x246520u: goto label_246520;
        case 0x246524u: goto label_246524;
        case 0x246528u: goto label_246528;
        case 0x24652cu: goto label_24652c;
        case 0x246530u: goto label_246530;
        case 0x246534u: goto label_246534;
        case 0x246538u: goto label_246538;
        case 0x24653cu: goto label_24653c;
        case 0x246540u: goto label_246540;
        case 0x246544u: goto label_246544;
        case 0x246548u: goto label_246548;
        case 0x24654cu: goto label_24654c;
        case 0x246550u: goto label_246550;
        case 0x246554u: goto label_246554;
        case 0x246558u: goto label_246558;
        case 0x24655cu: goto label_24655c;
        case 0x246560u: goto label_246560;
        case 0x246564u: goto label_246564;
        case 0x246568u: goto label_246568;
        case 0x24656cu: goto label_24656c;
        case 0x246570u: goto label_246570;
        case 0x246574u: goto label_246574;
        case 0x246578u: goto label_246578;
        case 0x24657cu: goto label_24657c;
        case 0x246580u: goto label_246580;
        case 0x246584u: goto label_246584;
        case 0x246588u: goto label_246588;
        case 0x24658cu: goto label_24658c;
        case 0x246590u: goto label_246590;
        case 0x246594u: goto label_246594;
        case 0x246598u: goto label_246598;
        case 0x24659cu: goto label_24659c;
        case 0x2465a0u: goto label_2465a0;
        case 0x2465a4u: goto label_2465a4;
        case 0x2465a8u: goto label_2465a8;
        case 0x2465acu: goto label_2465ac;
        case 0x2465b0u: goto label_2465b0;
        case 0x2465b4u: goto label_2465b4;
        case 0x2465b8u: goto label_2465b8;
        case 0x2465bcu: goto label_2465bc;
        case 0x2465c0u: goto label_2465c0;
        case 0x2465c4u: goto label_2465c4;
        case 0x2465c8u: goto label_2465c8;
        case 0x2465ccu: goto label_2465cc;
        case 0x2465d0u: goto label_2465d0;
        case 0x2465d4u: goto label_2465d4;
        case 0x2465d8u: goto label_2465d8;
        case 0x2465dcu: goto label_2465dc;
        case 0x2465e0u: goto label_2465e0;
        case 0x2465e4u: goto label_2465e4;
        case 0x2465e8u: goto label_2465e8;
        case 0x2465ecu: goto label_2465ec;
        case 0x2465f0u: goto label_2465f0;
        case 0x2465f4u: goto label_2465f4;
        case 0x2465f8u: goto label_2465f8;
        case 0x2465fcu: goto label_2465fc;
        case 0x246600u: goto label_246600;
        case 0x246604u: goto label_246604;
        case 0x246608u: goto label_246608;
        case 0x24660cu: goto label_24660c;
        case 0x246610u: goto label_246610;
        case 0x246614u: goto label_246614;
        case 0x246618u: goto label_246618;
        case 0x24661cu: goto label_24661c;
        case 0x246620u: goto label_246620;
        case 0x246624u: goto label_246624;
        case 0x246628u: goto label_246628;
        case 0x24662cu: goto label_24662c;
        case 0x246630u: goto label_246630;
        case 0x246634u: goto label_246634;
        case 0x246638u: goto label_246638;
        case 0x24663cu: goto label_24663c;
        case 0x246640u: goto label_246640;
        case 0x246644u: goto label_246644;
        case 0x246648u: goto label_246648;
        case 0x24664cu: goto label_24664c;
        case 0x246650u: goto label_246650;
        case 0x246654u: goto label_246654;
        case 0x246658u: goto label_246658;
        case 0x24665cu: goto label_24665c;
        case 0x246660u: goto label_246660;
        case 0x246664u: goto label_246664;
        case 0x246668u: goto label_246668;
        case 0x24666cu: goto label_24666c;
        case 0x246670u: goto label_246670;
        case 0x246674u: goto label_246674;
        case 0x246678u: goto label_246678;
        case 0x24667cu: goto label_24667c;
        case 0x246680u: goto label_246680;
        case 0x246684u: goto label_246684;
        case 0x246688u: goto label_246688;
        case 0x24668cu: goto label_24668c;
        case 0x246690u: goto label_246690;
        case 0x246694u: goto label_246694;
        case 0x246698u: goto label_246698;
        case 0x24669cu: goto label_24669c;
        case 0x2466a0u: goto label_2466a0;
        case 0x2466a4u: goto label_2466a4;
        case 0x2466a8u: goto label_2466a8;
        case 0x2466acu: goto label_2466ac;
        case 0x2466b0u: goto label_2466b0;
        case 0x2466b4u: goto label_2466b4;
        case 0x2466b8u: goto label_2466b8;
        case 0x2466bcu: goto label_2466bc;
        case 0x2466c0u: goto label_2466c0;
        case 0x2466c4u: goto label_2466c4;
        case 0x2466c8u: goto label_2466c8;
        case 0x2466ccu: goto label_2466cc;
        case 0x2466d0u: goto label_2466d0;
        case 0x2466d4u: goto label_2466d4;
        case 0x2466d8u: goto label_2466d8;
        case 0x2466dcu: goto label_2466dc;
        case 0x2466e0u: goto label_2466e0;
        case 0x2466e4u: goto label_2466e4;
        case 0x2466e8u: goto label_2466e8;
        case 0x2466ecu: goto label_2466ec;
        case 0x2466f0u: goto label_2466f0;
        case 0x2466f4u: goto label_2466f4;
        case 0x2466f8u: goto label_2466f8;
        case 0x2466fcu: goto label_2466fc;
        case 0x246700u: goto label_246700;
        case 0x246704u: goto label_246704;
        case 0x246708u: goto label_246708;
        case 0x24670cu: goto label_24670c;
        case 0x246710u: goto label_246710;
        case 0x246714u: goto label_246714;
        case 0x246718u: goto label_246718;
        case 0x24671cu: goto label_24671c;
        case 0x246720u: goto label_246720;
        case 0x246724u: goto label_246724;
        case 0x246728u: goto label_246728;
        case 0x24672cu: goto label_24672c;
        case 0x246730u: goto label_246730;
        case 0x246734u: goto label_246734;
        case 0x246738u: goto label_246738;
        case 0x24673cu: goto label_24673c;
        case 0x246740u: goto label_246740;
        case 0x246744u: goto label_246744;
        case 0x246748u: goto label_246748;
        case 0x24674cu: goto label_24674c;
        case 0x246750u: goto label_246750;
        case 0x246754u: goto label_246754;
        case 0x246758u: goto label_246758;
        case 0x24675cu: goto label_24675c;
        case 0x246760u: goto label_246760;
        case 0x246764u: goto label_246764;
        case 0x246768u: goto label_246768;
        case 0x24676cu: goto label_24676c;
        case 0x246770u: goto label_246770;
        case 0x246774u: goto label_246774;
        case 0x246778u: goto label_246778;
        case 0x24677cu: goto label_24677c;
        case 0x246780u: goto label_246780;
        case 0x246784u: goto label_246784;
        case 0x246788u: goto label_246788;
        case 0x24678cu: goto label_24678c;
        case 0x246790u: goto label_246790;
        case 0x246794u: goto label_246794;
        case 0x246798u: goto label_246798;
        case 0x24679cu: goto label_24679c;
        case 0x2467a0u: goto label_2467a0;
        case 0x2467a4u: goto label_2467a4;
        case 0x2467a8u: goto label_2467a8;
        case 0x2467acu: goto label_2467ac;
        case 0x2467b0u: goto label_2467b0;
        case 0x2467b4u: goto label_2467b4;
        case 0x2467b8u: goto label_2467b8;
        case 0x2467bcu: goto label_2467bc;
        case 0x2467c0u: goto label_2467c0;
        case 0x2467c4u: goto label_2467c4;
        case 0x2467c8u: goto label_2467c8;
        case 0x2467ccu: goto label_2467cc;
        case 0x2467d0u: goto label_2467d0;
        case 0x2467d4u: goto label_2467d4;
        case 0x2467d8u: goto label_2467d8;
        case 0x2467dcu: goto label_2467dc;
        case 0x2467e0u: goto label_2467e0;
        case 0x2467e4u: goto label_2467e4;
        case 0x2467e8u: goto label_2467e8;
        case 0x2467ecu: goto label_2467ec;
        case 0x2467f0u: goto label_2467f0;
        case 0x2467f4u: goto label_2467f4;
        case 0x2467f8u: goto label_2467f8;
        case 0x2467fcu: goto label_2467fc;
        case 0x246800u: goto label_246800;
        case 0x246804u: goto label_246804;
        case 0x246808u: goto label_246808;
        case 0x24680cu: goto label_24680c;
        case 0x246810u: goto label_246810;
        case 0x246814u: goto label_246814;
        case 0x246818u: goto label_246818;
        case 0x24681cu: goto label_24681c;
        case 0x246820u: goto label_246820;
        case 0x246824u: goto label_246824;
        case 0x246828u: goto label_246828;
        case 0x24682cu: goto label_24682c;
        case 0x246830u: goto label_246830;
        case 0x246834u: goto label_246834;
        case 0x246838u: goto label_246838;
        case 0x24683cu: goto label_24683c;
        case 0x246840u: goto label_246840;
        case 0x246844u: goto label_246844;
        case 0x246848u: goto label_246848;
        case 0x24684cu: goto label_24684c;
        case 0x246850u: goto label_246850;
        case 0x246854u: goto label_246854;
        case 0x246858u: goto label_246858;
        case 0x24685cu: goto label_24685c;
        case 0x246860u: goto label_246860;
        case 0x246864u: goto label_246864;
        case 0x246868u: goto label_246868;
        case 0x24686cu: goto label_24686c;
        case 0x246870u: goto label_246870;
        case 0x246874u: goto label_246874;
        case 0x246878u: goto label_246878;
        case 0x24687cu: goto label_24687c;
        case 0x246880u: goto label_246880;
        case 0x246884u: goto label_246884;
        case 0x246888u: goto label_246888;
        case 0x24688cu: goto label_24688c;
        case 0x246890u: goto label_246890;
        case 0x246894u: goto label_246894;
        case 0x246898u: goto label_246898;
        case 0x24689cu: goto label_24689c;
        case 0x2468a0u: goto label_2468a0;
        case 0x2468a4u: goto label_2468a4;
        case 0x2468a8u: goto label_2468a8;
        case 0x2468acu: goto label_2468ac;
        case 0x2468b0u: goto label_2468b0;
        case 0x2468b4u: goto label_2468b4;
        case 0x2468b8u: goto label_2468b8;
        case 0x2468bcu: goto label_2468bc;
        case 0x2468c0u: goto label_2468c0;
        case 0x2468c4u: goto label_2468c4;
        case 0x2468c8u: goto label_2468c8;
        case 0x2468ccu: goto label_2468cc;
        case 0x2468d0u: goto label_2468d0;
        case 0x2468d4u: goto label_2468d4;
        case 0x2468d8u: goto label_2468d8;
        case 0x2468dcu: goto label_2468dc;
        case 0x2468e0u: goto label_2468e0;
        case 0x2468e4u: goto label_2468e4;
        case 0x2468e8u: goto label_2468e8;
        case 0x2468ecu: goto label_2468ec;
        case 0x2468f0u: goto label_2468f0;
        case 0x2468f4u: goto label_2468f4;
        case 0x2468f8u: goto label_2468f8;
        case 0x2468fcu: goto label_2468fc;
        case 0x246900u: goto label_246900;
        case 0x246904u: goto label_246904;
        case 0x246908u: goto label_246908;
        case 0x24690cu: goto label_24690c;
        case 0x246910u: goto label_246910;
        case 0x246914u: goto label_246914;
        case 0x246918u: goto label_246918;
        case 0x24691cu: goto label_24691c;
        case 0x246920u: goto label_246920;
        case 0x246924u: goto label_246924;
        case 0x246928u: goto label_246928;
        case 0x24692cu: goto label_24692c;
        case 0x246930u: goto label_246930;
        case 0x246934u: goto label_246934;
        case 0x246938u: goto label_246938;
        case 0x24693cu: goto label_24693c;
        case 0x246940u: goto label_246940;
        case 0x246944u: goto label_246944;
        case 0x246948u: goto label_246948;
        case 0x24694cu: goto label_24694c;
        case 0x246950u: goto label_246950;
        case 0x246954u: goto label_246954;
        case 0x246958u: goto label_246958;
        case 0x24695cu: goto label_24695c;
        case 0x246960u: goto label_246960;
        default: break;
    }

    ctx->pc = 0x245bd0u;

label_245bd0:
    // 0x245bd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x245bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_245bd4:
    // 0x245bd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x245bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_245bd8:
    // 0x245bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_245bdc:
    // 0x245bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_245be0:
    // 0x245be0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x245be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_245be4:
    // 0x245be4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245be8:
    // 0x245be8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x245be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_245bec:
    // 0x245bec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x245becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_245bf0:
    // 0x245bf0: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x245bf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_245bf4:
    // 0x245bf4: 0x10200315  beqz        $at, . + 4 + (0x315 << 2)
label_245bf8:
    if (ctx->pc == 0x245BF8u) {
        ctx->pc = 0x245BFCu;
        goto label_245bfc;
    }
    ctx->pc = 0x245BF4u;
    {
        const bool branch_taken_0x245bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245bf4) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x245BFCu;
label_245bfc:
    // 0x245bfc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x245bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_245c00:
    // 0x245c00: 0x24a61270  addiu       $a2, $a1, 0x1270
    ctx->pc = 0x245c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4720));
label_245c04:
    // 0x245c04: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x245c04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_245c08:
    // 0x245c08: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x245c08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_245c0c:
    // 0x245c0c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x245c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_245c10:
    // 0x245c10: 0x600008  jr          $v1
label_245c14:
    if (ctx->pc == 0x245C14u) {
        ctx->pc = 0x245C18u;
        goto label_245c18;
    }
    ctx->pc = 0x245C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245C10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245C18u;
label_245c18:
    // 0x245c18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245c1c:
    // 0x245c1c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x245c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_245c20:
    // 0x245c20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x245c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_245c24:
    // 0x245c24: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x245c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_245c28:
    // 0x245c28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245c2c:
    // 0x245c2c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245c30:
    // 0x245c30: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x245c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_245c34:
    // 0x245c34: 0x24067820  addiu       $a2, $zero, 0x7820
    ctx->pc = 0x245c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30752));
label_245c38:
    // 0x245c38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245c3c:
    // 0x245c3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_245c40:
    // 0x245c40: 0xc0965d0  jal         func_259740
label_245c44:
    if (ctx->pc == 0x245C44u) {
        ctx->pc = 0x245C48u;
        goto label_245c48;
    }
    ctx->pc = 0x245C40u;
    SET_GPR_U32(ctx, 31, 0x245C48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245C40u, 0x245C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C48u;
label_245c48:
    // 0x245c48: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245c48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_245c4c:
    // 0x245c4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245c50:
    // 0x245c50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245c54:
    // 0x245c54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_245c58:
    // 0x245c58: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x245c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_245c5c:
    // 0x245c5c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x245c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_245c60:
    // 0x245c60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x245c60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245c64:
    // 0x245c64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245c68:
    // 0x245c68: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_245c6c:
    // 0x245c6c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x245c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_245c70:
    // 0x245c70: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_245c74:
    // 0x245c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245c78:
    // 0x245c78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245c7c:
    // 0x245c7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_245c80:
    // 0x245c80: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x245c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_245c84:
    // 0x245c84: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_245c88:
    // 0x245c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245c8c:
    // 0x245c8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245c90:
    // 0x245c90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_245c94:
    // 0x245c94: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x245c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_245c98:
    // 0x245c98: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x245c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_245c9c:
    // 0x245c9c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245ca0:
    // 0x245ca0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x245ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_245ca4:
    // 0x245ca4: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x245ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
label_245ca8:
    // 0x245ca8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x245ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_245cac:
    // 0x245cac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x245cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_245cb0:
    // 0x245cb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245cb4:
    // 0x245cb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245cb8:
    // 0x245cb8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x245cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_245cbc:
    // 0x245cbc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x245cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_245cc0:
    // 0x245cc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x245cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_245cc4:
    // 0x245cc4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x245cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_245cc8:
    // 0x245cc8: 0xc05c848  jal         func_172120
label_245ccc:
    if (ctx->pc == 0x245CCCu) {
        ctx->pc = 0x245CD0u;
        goto label_245cd0;
    }
    ctx->pc = 0x245CC8u;
    SET_GPR_U32(ctx, 31, 0x245CD0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x245CC8u, 0x245CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CD0u;
label_245cd0:
    // 0x245cd0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x245cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_245cd4:
    // 0x245cd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245cd8:
    // 0x245cd8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x245cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245cdc:
    // 0x245cdc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x245cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245ce0:
    // 0x245ce0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x245ce0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_245ce4:
    // 0x245ce4: 0xc058fec  jal         func_163FB0
label_245ce8:
    if (ctx->pc == 0x245CE8u) {
        ctx->pc = 0x245CECu;
        goto label_245cec;
    }
    ctx->pc = 0x245CE4u;
    SET_GPR_U32(ctx, 31, 0x245CECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x245CE4u, 0x245CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CECu;
label_245cec:
    // 0x245cec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245cf0:
    // 0x245cf0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x245cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_245cf4:
    // 0x245cf4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245cf8:
    // 0x245cf8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x245cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_245cfc:
    // 0x245cfc: 0xc096b40  jal         func_25AD00
label_245d00:
    if (ctx->pc == 0x245D00u) {
        ctx->pc = 0x245D04u;
        goto label_245d04;
    }
    ctx->pc = 0x245CFCu;
    SET_GPR_U32(ctx, 31, 0x245D04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x245CFCu, 0x245D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D04u;
label_245d04:
    // 0x245d04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245d04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_245d08:
    // 0x245d08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245d0c:
    // 0x245d0c: 0xc0974dc  jal         func_25D370
label_245d10:
    if (ctx->pc == 0x245D10u) {
        ctx->pc = 0x245D14u;
        goto label_245d14;
    }
    ctx->pc = 0x245D0Cu;
    SET_GPR_U32(ctx, 31, 0x245D14u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x245D0Cu, 0x245D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D14u;
label_245d14:
    // 0x245d14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245d14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_245d18:
    // 0x245d18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245d1c:
    // 0x245d1c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x245d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_245d20:
    // 0x245d20: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x245d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_245d24:
    // 0x245d24: 0x30a40020  andi        $a0, $a1, 0x20
    ctx->pc = 0x245d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_245d28:
    // 0x245d28: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_245d2c:
    if (ctx->pc == 0x245D2Cu) {
        ctx->pc = 0x245D30u;
        goto label_245d30;
    }
    ctx->pc = 0x245D28u;
    {
        const bool branch_taken_0x245d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d28) {
            ctx->pc = 0x245D64u;
            goto label_245d64;
        }
    }
    ctx->pc = 0x245D30u;
label_245d30:
    // 0x245d30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245d34:
    // 0x245d34: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x245d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_245d38:
    // 0x245d38: 0x24710fa0  addiu       $s1, $v1, 0xFA0
    ctx->pc = 0x245d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
label_245d3c:
    // 0x245d3c: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x245d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_245d40:
    // 0x245d40: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x245d40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_245d44:
    // 0x245d44: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x245d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_245d48:
    // 0x245d48: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x245d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
label_245d4c:
    // 0x245d4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245d50:
    // 0x245d50: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x245d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_245d54:
    // 0x245d54: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x245d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_245d58:
    // 0x245d58: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x245d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_245d5c:
    // 0x245d5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x245d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_245d60:
    // 0x245d60: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x245d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_245d64:
    // 0x245d64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245d68:
    // 0x245d68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x245d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_245d6c:
    // 0x245d6c: 0x106002b7  beqz        $v1, . + 4 + (0x2B7 << 2)
label_245d70:
    if (ctx->pc == 0x245D70u) {
        ctx->pc = 0x245D74u;
        goto label_245d74;
    }
    ctx->pc = 0x245D6Cu;
    {
        const bool branch_taken_0x245d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d6c) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x245D74u;
label_245d74:
    // 0x245d74: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245d78:
    // 0x245d78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245d7c:
    // 0x245d7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x245d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_245d80:
    // 0x245d80: 0x24067821  addiu       $a2, $zero, 0x7821
    ctx->pc = 0x245d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30753));
label_245d84:
    // 0x245d84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245d88:
    // 0x245d88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_245d8c:
    // 0x245d8c: 0xc0965d0  jal         func_259740
label_245d90:
    if (ctx->pc == 0x245D90u) {
        ctx->pc = 0x245D94u;
        goto label_245d94;
    }
    ctx->pc = 0x245D8Cu;
    SET_GPR_U32(ctx, 31, 0x245D94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245D8Cu, 0x245D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D94u;
label_245d94:
    // 0x245d94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x245d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_245d98:
    // 0x245d98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245d9c:
    // 0x245d9c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x245d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_245da0:
    // 0x245da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245da4:
    // 0x245da4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245da8:
    // 0x245da8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x245da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_245dac:
    // 0x245dac: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x245dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_245db0:
    // 0x245db0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x245db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_245db4:
    // 0x245db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245db8:
    // 0x245db8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245dbc:
    // 0x245dbc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x245dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_245dc0:
    // 0x245dc0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x245dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_245dc4:
    // 0x245dc4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_245dc8:
    // 0x245dc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245dcc:
    // 0x245dcc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245dd0:
    // 0x245dd0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_245dd4:
    // 0x245dd4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x245dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_245dd8:
    // 0x245dd8: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x245dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_245ddc:
    // 0x245ddc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x245ddcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245de0:
    // 0x245de0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x245de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245de4:
    // 0x245de4: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x245de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_245de8:
    // 0x245de8: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x245de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_245dec:
    // 0x245dec: 0x10000297  b           . + 4 + (0x297 << 2)
label_245df0:
    if (ctx->pc == 0x245DF0u) {
        ctx->pc = 0x245DF4u;
        goto label_245df4;
    }
    ctx->pc = 0x245DECu;
    {
        const bool branch_taken_0x245dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245dec) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x245DF4u;
label_245df4:
    // 0x245df4: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x245df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245df8:
    // 0x245df8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x245df8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245dfc:
    // 0x245dfc: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x245dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
label_245e00:
    // 0x245e00: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x245e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_245e04:
    // 0x245e04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x245e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_245e08:
    // 0x245e08: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x245e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_245e0c:
    // 0x245e0c: 0xc50c00d4  lwc1        $f12, 0xD4($t0)
    ctx->pc = 0x245e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_245e10:
    // 0x245e10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x245e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_245e14:
    // 0x245e14: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x245e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_245e18:
    // 0x245e18: 0xc05c848  jal         func_172120
label_245e1c:
    if (ctx->pc == 0x245E1Cu) {
        ctx->pc = 0x245E20u;
        goto label_245e20;
    }
    ctx->pc = 0x245E18u;
    SET_GPR_U32(ctx, 31, 0x245E20u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x245E18u, 0x245E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E20u;
label_245e20:
    // 0x245e20: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x245e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_245e24:
    // 0x245e24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245e28:
    // 0x245e28: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x245e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245e2c:
    // 0x245e2c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x245e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245e30:
    // 0x245e30: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x245e30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_245e34:
    // 0x245e34: 0xc058fec  jal         func_163FB0
label_245e38:
    if (ctx->pc == 0x245E38u) {
        ctx->pc = 0x245E3Cu;
        goto label_245e3c;
    }
    ctx->pc = 0x245E34u;
    SET_GPR_U32(ctx, 31, 0x245E3Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x245E34u, 0x245E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E3Cu;
label_245e3c:
    // 0x245e3c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245e40:
    // 0x245e40: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x245e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_245e44:
    // 0x245e44: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245e48:
    // 0x245e48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x245e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_245e4c:
    // 0x245e4c: 0xc096b40  jal         func_25AD00
label_245e50:
    if (ctx->pc == 0x245E50u) {
        ctx->pc = 0x245E54u;
        goto label_245e54;
    }
    ctx->pc = 0x245E4Cu;
    SET_GPR_U32(ctx, 31, 0x245E54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x245E4Cu, 0x245E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E54u;
label_245e54:
    // 0x245e54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245e54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_245e58:
    // 0x245e58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245e5c:
    // 0x245e5c: 0xc0974dc  jal         func_25D370
label_245e60:
    if (ctx->pc == 0x245E60u) {
        ctx->pc = 0x245E64u;
        goto label_245e64;
    }
    ctx->pc = 0x245E5Cu;
    SET_GPR_U32(ctx, 31, 0x245E64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x245E5Cu, 0x245E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E64u;
label_245e64:
    // 0x245e64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245e64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_245e68:
    // 0x245e68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245e6c:
    // 0x245e6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_245e70:
    // 0x245e70: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x245e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_245e74:
    // 0x245e74: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x245e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_245e78:
    // 0x245e78: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_245e7c:
    if (ctx->pc == 0x245E7Cu) {
        ctx->pc = 0x245E80u;
        goto label_245e80;
    }
    ctx->pc = 0x245E78u;
    {
        const bool branch_taken_0x245e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e78) {
            ctx->pc = 0x245F40u;
            goto label_245f40;
        }
    }
    ctx->pc = 0x245E80u;
label_245e80:
    // 0x245e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245e84:
    // 0x245e84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245e88:
    // 0x245e88: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x245e88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_245e8c:
    // 0x245e8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x245e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_245e90:
    // 0x245e90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245e94:
    // 0x245e94: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x245e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_245e98:
    // 0x245e98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245e9c:
    // 0x245e9c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x245e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_245ea0:
    // 0x245ea0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245ea4:
    // 0x245ea4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x245ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_245ea8:
    // 0x245ea8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245eac:
    // 0x245eac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x245eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_245eb0:
    // 0x245eb0: 0xc067694  jal         func_19DA50
label_245eb4:
    if (ctx->pc == 0x245EB4u) {
        ctx->pc = 0x245EB8u;
        goto label_245eb8;
    }
    ctx->pc = 0x245EB0u;
    SET_GPR_U32(ctx, 31, 0x245EB8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245EB0u, 0x245EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EB8u;
label_245eb8:
    // 0x245eb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x245eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_245ebc:
    // 0x245ebc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x245ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_245ec0:
    // 0x245ec0: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x245ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_245ec4:
    // 0x245ec4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x245ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_245ec8:
    // 0x245ec8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245ec8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245ecc:
    // 0x245ecc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245ed0:
    // 0x245ed0: 0xa4441278  sh          $a0, 0x1278($v0)
    ctx->pc = 0x245ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 4));
label_245ed4:
    // 0x245ed4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245ed8:
    // 0x245ed8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x245ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245edc:
    // 0x245edc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x245edcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_245ee0:
    // 0x245ee0: 0x8c470368  lw          $a3, 0x368($v0)
    ctx->pc = 0x245ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_245ee4:
    // 0x245ee4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x245ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_245ee8:
    // 0x245ee8: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x245ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_245eec:
    // 0x245eec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245ef0:
    // 0x245ef0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_245ef4:
    // 0x245ef4: 0xc0965d0  jal         func_259740
label_245ef8:
    if (ctx->pc == 0x245EF8u) {
        ctx->pc = 0x245EFCu;
        goto label_245efc;
    }
    ctx->pc = 0x245EF4u;
    SET_GPR_U32(ctx, 31, 0x245EFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245EF4u, 0x245EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EFCu;
label_245efc:
    // 0x245efc: 0xc067694  jal         func_19DA50
label_245f00:
    if (ctx->pc == 0x245F00u) {
        ctx->pc = 0x245F04u;
        goto label_245f04;
    }
    ctx->pc = 0x245EFCu;
    SET_GPR_U32(ctx, 31, 0x245F04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245EFCu, 0x245F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F04u;
label_245f04:
    // 0x245f04: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x245f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_245f08:
    // 0x245f08: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x245f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_245f0c:
    // 0x245f0c: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x245f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_245f10:
    // 0x245f10: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x245f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_245f14:
    // 0x245f14: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245f14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245f18:
    // 0x245f18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245f1c:
    // 0x245f1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_245f20:
    // 0x245f20: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x245f20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_245f24:
    // 0x245f24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245f28:
    // 0x245f28: 0x249010b0  addiu       $s0, $a0, 0x10B0
    ctx->pc = 0x245f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4272));
label_245f2c:
    // 0x245f2c: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x245f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_245f30:
    // 0x245f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245f34:
    // 0x245f34: 0x0  nop
    ctx->pc = 0x245f34u;
    // NOP
label_245f38:
    // 0x245f38: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x245f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_245f3c:
    // 0x245f3c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x245f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_245f40:
    // 0x245f40: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x245f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245f44:
    // 0x245f44: 0x90a709e7  lbu         $a3, 0x9E7($a1)
    ctx->pc = 0x245f44u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_245f48:
    // 0x245f48: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_245f4c:
    if (ctx->pc == 0x245F4Cu) {
        ctx->pc = 0x245F50u;
        goto label_245f50;
    }
    ctx->pc = 0x245F48u;
    {
        const bool branch_taken_0x245f48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f48) {
            ctx->pc = 0x245F70u;
            goto label_245f70;
        }
    }
    ctx->pc = 0x245F50u;
label_245f50:
    // 0x245f50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245f54:
    // 0x245f54: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245f58:
    // 0x245f58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x245f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_245f5c:
    // 0x245f5c: 0x24067821  addiu       $a2, $zero, 0x7821
    ctx->pc = 0x245f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30753));
label_245f60:
    // 0x245f60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245f64:
    // 0x245f64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_245f68:
    // 0x245f68: 0xc0965d0  jal         func_259740
label_245f6c:
    if (ctx->pc == 0x245F6Cu) {
        ctx->pc = 0x245F70u;
        goto label_245f70;
    }
    ctx->pc = 0x245F68u;
    SET_GPR_U32(ctx, 31, 0x245F70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245F68u, 0x245F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F70u;
label_245f70:
    // 0x245f70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245f74:
    // 0x245f74: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x245f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_245f78:
    // 0x245f78: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x245f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_245f7c:
    // 0x245f7c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x245f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_245f80:
    // 0x245f80: 0x10600232  beqz        $v1, . + 4 + (0x232 << 2)
label_245f84:
    if (ctx->pc == 0x245F84u) {
        ctx->pc = 0x245F88u;
        goto label_245f88;
    }
    ctx->pc = 0x245F80u;
    {
        const bool branch_taken_0x245f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f80) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x245F88u;
label_245f88:
    // 0x245f88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x245f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_245f8c:
    // 0x245f8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245f90:
    // 0x245f90: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x245f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_245f94:
    // 0x245f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245f98:
    // 0x245f98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245f9c:
    // 0x245f9c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x245f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_245fa0:
    // 0x245fa0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x245fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_245fa4:
    // 0x245fa4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x245fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_245fa8:
    // 0x245fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245fac:
    // 0x245fac: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x245facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245fb0:
    // 0x245fb0: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x245fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_245fb4:
    // 0x245fb4: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x245fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_245fb8:
    // 0x245fb8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_245fbc:
    // 0x245fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245fc0:
    // 0x245fc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245fc4:
    // 0x245fc4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_245fc8:
    // 0x245fc8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x245fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_245fcc:
    // 0x245fcc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_245fd0:
    // 0x245fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245fd4:
    // 0x245fd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245fd8:
    // 0x245fd8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_245fdc:
    // 0x245fdc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x245fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_245fe0:
    // 0x245fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_245fe4:
    // 0x245fe4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245fe8:
    // 0x245fe8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x245fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_245fec:
    // 0x245fec: 0x10000217  b           . + 4 + (0x217 << 2)
label_245ff0:
    if (ctx->pc == 0x245FF0u) {
        ctx->pc = 0x245FF4u;
        goto label_245ff4;
    }
    ctx->pc = 0x245FECu;
    {
        const bool branch_taken_0x245fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fec) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x245FF4u;
label_245ff4:
    // 0x245ff4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_245ff8:
    // 0x245ff8: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x245ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_245ffc:
    // 0x245ffc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x245ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_246000:
    // 0x246000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246004:
    // 0x246004: 0x0  nop
    ctx->pc = 0x246004u;
    // NOP
label_246008:
    // 0x246008: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x246008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_24600c:
    // 0x24600c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x24600cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_246010:
    // 0x246010: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246014:
    // 0x246014: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x246014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_246018:
    // 0x246018: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x246018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_24601c:
    // 0x24601c: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x24601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_246020:
    // 0x246020: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x246020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_246024:
    // 0x246024: 0x3c0541cc  lui         $a1, 0x41CC
    ctx->pc = 0x246024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16844 << 16));
label_246028:
    // 0x246028: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x246028u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24602c:
    // 0x24602c: 0x0  nop
    ctx->pc = 0x24602cu;
    // NOP
label_246030:
    // 0x246030: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x246030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_246034:
    // 0x246034: 0x3c02c30e  lui         $v0, 0xC30E
    ctx->pc = 0x246034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49934 << 16));
label_246038:
    // 0x246038: 0x34478000  ori         $a3, $v0, 0x8000
    ctx->pc = 0x246038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_24603c:
    // 0x24603c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24603cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246040:
    // 0x246040: 0x0  nop
    ctx->pc = 0x246040u;
    // NOP
label_246044:
    // 0x246044: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x246044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_246048:
    // 0x246048: 0x3c0343f7  lui         $v1, 0x43F7
    ctx->pc = 0x246048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17399 << 16));
label_24604c:
    // 0x24604c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x24604cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_246050:
    // 0x246050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246054:
    // 0x246054: 0x0  nop
    ctx->pc = 0x246054u;
    // NOP
label_246058:
    // 0x246058: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x246058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_24605c:
    // 0x24605c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24605cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_246060:
    // 0x246060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246064:
    // 0x246064: 0x0  nop
    ctx->pc = 0x246064u;
    // NOP
label_246068:
    // 0x246068: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x246068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_24606c:
    // 0x24606c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_246070:
    // 0x246070: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x246070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_246074:
    // 0x246074: 0x2445dca0  addiu       $a1, $v0, -0x2360
    ctx->pc = 0x246074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958240));
label_246078:
    // 0x246078: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x246078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24607c:
    // 0x24607c: 0xc040bf4  jal         func_102FD0
label_246080:
    if (ctx->pc == 0x246080u) {
        ctx->pc = 0x246084u;
        goto label_246084;
    }
    ctx->pc = 0x24607Cu;
    SET_GPR_U32(ctx, 31, 0x246084u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x246084u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x246084u) { return; }
    ctx->pc = 0x246084u;
label_246084:
    // 0x246084: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246088:
    // 0x246088: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24608c:
    // 0x24608c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x24608cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
label_246090:
    // 0x246090: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x246090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_246094:
    // 0x246094: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x246094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_246098:
    // 0x246098: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x246098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_24609c:
    // 0x24609c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x24609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2460a0:
    // 0x2460a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2460a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2460a4:
    // 0x2460a4: 0xc05c848  jal         func_172120
label_2460a8:
    if (ctx->pc == 0x2460A8u) {
        ctx->pc = 0x2460ACu;
        goto label_2460ac;
    }
    ctx->pc = 0x2460A4u;
    SET_GPR_U32(ctx, 31, 0x2460ACu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2460A4u, 0x2460ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460ACu;
label_2460ac:
    // 0x2460ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2460acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2460b0:
    // 0x2460b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2460b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2460b4:
    // 0x2460b4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2460b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2460b8:
    // 0x2460b8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2460b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2460bc:
    // 0x2460bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2460bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2460c0:
    // 0x2460c0: 0x0  nop
    ctx->pc = 0x2460c0u;
    // NOP
label_2460c4:
    // 0x2460c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2460c8:
    if (ctx->pc == 0x2460C8u) {
        ctx->pc = 0x2460CCu;
        goto label_2460cc;
    }
    ctx->pc = 0x2460C4u;
    {
        const bool branch_taken_0x2460c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2460c4) {
            ctx->pc = 0x2460E8u;
            goto label_2460e8;
        }
    }
    ctx->pc = 0x2460CCu;
label_2460cc:
    // 0x2460cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2460ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2460d0:
    // 0x2460d0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2460d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2460d4:
    // 0x2460d4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2460d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_2460d8:
    // 0x2460d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2460d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2460dc:
    // 0x2460dc: 0x0  nop
    ctx->pc = 0x2460dcu;
    // NOP
label_2460e0:
    // 0x2460e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2460e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2460e4:
    // 0x2460e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2460e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2460e8:
    // 0x2460e8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2460e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2460ec:
    // 0x2460ec: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x2460ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_2460f0:
    // 0x2460f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2460f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2460f4:
    // 0x2460f4: 0x0  nop
    ctx->pc = 0x2460f4u;
    // NOP
label_2460f8:
    // 0x2460f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2460f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2460fc:
    // 0x2460fc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2460fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246100:
    // 0x246100: 0xc4c00124  lwc1        $f0, 0x124($a2)
    ctx->pc = 0x246100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246104:
    // 0x246104: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246108:
    // 0x246108: 0x0  nop
    ctx->pc = 0x246108u;
    // NOP
label_24610c:
    // 0x24610c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_246110:
    if (ctx->pc == 0x246110u) {
        ctx->pc = 0x246114u;
        goto label_246114;
    }
    ctx->pc = 0x24610Cu;
    {
        const bool branch_taken_0x24610c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24610c) {
            ctx->pc = 0x246130u;
            goto label_246130;
        }
    }
    ctx->pc = 0x246114u;
label_246114:
    // 0x246114: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x246114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246118:
    // 0x246118: 0xc4e10124  lwc1        $f1, 0x124($a3)
    ctx->pc = 0x246118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24611c:
    // 0x24611c: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
label_246120:
    // 0x246120: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x246120u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246124:
    // 0x246124: 0x0  nop
    ctx->pc = 0x246124u;
    // NOP
label_246128:
    // 0x246128: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24612c:
    // 0x24612c: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x24612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
label_246130:
    // 0x246130: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246134:
    // 0x246134: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x246134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246138:
    // 0x246138: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x246138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24613c:
    // 0x24613c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24613cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_246140:
    // 0x246140: 0xc058fec  jal         func_163FB0
label_246144:
    if (ctx->pc == 0x246144u) {
        ctx->pc = 0x246148u;
        goto label_246148;
    }
    ctx->pc = 0x246140u;
    SET_GPR_U32(ctx, 31, 0x246148u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x246140u, 0x246148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246148u;
label_246148:
    // 0x246148: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24614c:
    // 0x24614c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x24614cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_246150:
    // 0x246150: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246154:
    // 0x246154: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x246154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_246158:
    // 0x246158: 0xc096b40  jal         func_25AD00
label_24615c:
    if (ctx->pc == 0x24615Cu) {
        ctx->pc = 0x246160u;
        goto label_246160;
    }
    ctx->pc = 0x246158u;
    SET_GPR_U32(ctx, 31, 0x246160u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x246158u, 0x246160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246160u;
label_246160:
    // 0x246160: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246160u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_246164:
    // 0x246164: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246168:
    // 0x246168: 0xc0974dc  jal         func_25D370
label_24616c:
    if (ctx->pc == 0x24616Cu) {
        ctx->pc = 0x246170u;
        goto label_246170;
    }
    ctx->pc = 0x246168u;
    SET_GPR_U32(ctx, 31, 0x246170u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x246168u, 0x246170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246170u;
label_246170:
    // 0x246170: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246170u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_246174:
    // 0x246174: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246178:
    // 0x246178: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x246178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_24617c:
    // 0x24617c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_246180:
    if (ctx->pc == 0x246180u) {
        ctx->pc = 0x246184u;
        goto label_246184;
    }
    ctx->pc = 0x24617Cu;
    {
        const bool branch_taken_0x24617c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24617c) {
            ctx->pc = 0x2461A8u;
            goto label_2461a8;
        }
    }
    ctx->pc = 0x246184u;
label_246184:
    // 0x246184: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246188:
    // 0x246188: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24618c:
    // 0x24618c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x24618cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_246190:
    // 0x246190: 0x24067821  addiu       $a2, $zero, 0x7821
    ctx->pc = 0x246190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30753));
label_246194:
    // 0x246194: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246198:
    // 0x246198: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_24619c:
    // 0x24619c: 0xc0965d0  jal         func_259740
label_2461a0:
    if (ctx->pc == 0x2461A0u) {
        ctx->pc = 0x2461A4u;
        goto label_2461a4;
    }
    ctx->pc = 0x24619Cu;
    SET_GPR_U32(ctx, 31, 0x2461A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x24619Cu, 0x2461A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461A4u;
label_2461a4:
    // 0x2461a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2461a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2461a8:
    // 0x2461a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2461a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2461ac:
    // 0x2461ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2461acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2461b0:
    // 0x2461b0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2461b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2461b4:
    // 0x2461b4: 0xc067594  jal         func_19D650
label_2461b8:
    if (ctx->pc == 0x2461B8u) {
        ctx->pc = 0x2461BCu;
        goto label_2461bc;
    }
    ctx->pc = 0x2461B4u;
    SET_GPR_U32(ctx, 31, 0x2461BCu);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x2461B4u, 0x2461BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461BCu;
label_2461bc:
    // 0x2461bc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2461bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2461c0:
    // 0x2461c0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2461c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2461c4:
    // 0x2461c4: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2461c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
label_2461c8:
    // 0x2461c8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2461c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_2461cc:
    // 0x2461cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2461ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2461d0:
    // 0x2461d0: 0x0  nop
    ctx->pc = 0x2461d0u;
    // NOP
label_2461d4:
    // 0x2461d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2461d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2461d8:
    // 0x2461d8: 0x0  nop
    ctx->pc = 0x2461d8u;
    // NOP
label_2461dc:
    // 0x2461dc: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_2461e0:
    if (ctx->pc == 0x2461E0u) {
        ctx->pc = 0x2461E4u;
        goto label_2461e4;
    }
    ctx->pc = 0x2461DCu;
    {
        const bool branch_taken_0x2461dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2461dc) {
            ctx->pc = 0x246250u;
            goto label_246250;
        }
    }
    ctx->pc = 0x2461E4u;
label_2461e4:
    // 0x2461e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2461e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2461e8:
    // 0x2461e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2461e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2461ec:
    // 0x2461ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2461ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2461f0:
    // 0x2461f0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2461f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_2461f4:
    // 0x2461f4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2461f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2461f8:
    // 0x2461f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2461f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2461fc:
    // 0x2461fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2461fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246200:
    // 0x246200: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246204:
    // 0x246204: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_246208:
    // 0x246208: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x246208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_24620c:
    // 0x24620c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x24620cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_246210:
    // 0x246210: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246210u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246214:
    // 0x246214: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246218:
    // 0x246218: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_24621c:
    // 0x24621c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x24621cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_246220:
    // 0x246220: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x246220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_246224:
    // 0x246224: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x246224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_246228:
    // 0x246228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24622c:
    // 0x24622c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246230:
    // 0x246230: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246234:
    // 0x246234: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x246234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_246238:
    // 0x246238: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24623c:
    // 0x24623c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x24623cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246240:
    // 0x246240: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x246240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_246244:
    // 0x246244: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x246244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_246248:
    // 0x246248: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x246248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_24624c:
    // 0x24624c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x24624cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_246250:
    // 0x246250: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x246250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246254:
    // 0x246254: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x246254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_246258:
    // 0x246258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24625c:
    // 0x24625c: 0x0  nop
    ctx->pc = 0x24625cu;
    // NOP
label_246260:
    // 0x246260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246264:
    // 0x246264: 0x0  nop
    ctx->pc = 0x246264u;
    // NOP
label_246268:
    // 0x246268: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_24626c:
    if (ctx->pc == 0x24626Cu) {
        ctx->pc = 0x246270u;
        goto label_246270;
    }
    ctx->pc = 0x246268u;
    {
        const bool branch_taken_0x246268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246268) {
            ctx->pc = 0x2462F4u;
            goto label_2462f4;
        }
    }
    ctx->pc = 0x246270u;
label_246270:
    // 0x246270: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246274:
    // 0x246274: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246278:
    // 0x246278: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x246278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_24627c:
    // 0x24627c: 0x24060a23  addiu       $a2, $zero, 0xA23
    ctx->pc = 0x24627cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2595));
label_246280:
    // 0x246280: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246284:
    // 0x246284: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_246288:
    // 0x246288: 0xc0965d0  jal         func_259740
label_24628c:
    if (ctx->pc == 0x24628Cu) {
        ctx->pc = 0x246290u;
        goto label_246290;
    }
    ctx->pc = 0x246288u;
    SET_GPR_U32(ctx, 31, 0x246290u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x246288u, 0x246290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246290u;
label_246290:
    // 0x246290: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246290u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_246294:
    // 0x246294: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x246294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_246298:
    // 0x246298: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24629c:
    // 0x24629c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x24629cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2462a0:
    // 0x2462a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2462a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2462a4:
    // 0x2462a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2462a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2462a8:
    // 0x2462a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2462a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2462ac:
    // 0x2462ac: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2462acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_2462b0:
    // 0x2462b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2462b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2462b4:
    // 0x2462b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2462b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2462b8:
    // 0x2462b8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2462b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_2462bc:
    // 0x2462bc: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2462bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_2462c0:
    // 0x2462c0: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x2462c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_2462c4:
    // 0x2462c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2462c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2462c8:
    // 0x2462c8: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x2462c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2462cc:
    // 0x2462cc: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2462ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
label_2462d0:
    // 0x2462d0: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x2462d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_2462d4:
    // 0x2462d4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2462d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_2462d8:
    // 0x2462d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2462d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2462dc:
    // 0x2462dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2462dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2462e0:
    // 0x2462e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2462e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2462e4:
    // 0x2462e4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2462e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2462e8:
    // 0x2462e8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2462e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2462ec:
    // 0x2462ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2462ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2462f0:
    // 0x2462f0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x2462f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_2462f4:
    // 0x2462f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2462f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2462f8:
    // 0x2462f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2462f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2462fc:
    // 0x2462fc: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2462fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_246300:
    // 0x246300: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x246300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_246304:
    // 0x246304: 0x14600151  bnez        $v1, . + 4 + (0x151 << 2)
label_246308:
    if (ctx->pc == 0x246308u) {
        ctx->pc = 0x24630Cu;
        goto label_24630c;
    }
    ctx->pc = 0x246304u;
    {
        const bool branch_taken_0x246304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246304) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x24630Cu;
label_24630c:
    // 0x24630c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246310:
    // 0x246310: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246314:
    // 0x246314: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x246314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_246318:
    // 0x246318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x246318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24631c:
    // 0x24631c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246320:
    // 0x246320: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x246320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_246324:
    // 0x246324: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246328:
    // 0x246328: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x246328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_24632c:
    // 0x24632c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246330:
    // 0x246330: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x246330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_246334:
    // 0x246334: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246338:
    // 0x246338: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x246338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_24633c:
    // 0x24633c: 0xc067694  jal         func_19DA50
label_246340:
    if (ctx->pc == 0x246340u) {
        ctx->pc = 0x246344u;
        goto label_246344;
    }
    ctx->pc = 0x24633Cu;
    SET_GPR_U32(ctx, 31, 0x246344u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24633Cu, 0x246344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246344u;
label_246344:
    // 0x246344: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_246348:
    // 0x246348: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x246348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_24634c:
    // 0x24634c: 0x2482003c  addiu       $v0, $a0, 0x3C
    ctx->pc = 0x24634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_246350:
    // 0x246350: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x246350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_246354:
    // 0x246354: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246354u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246358:
    // 0x246358: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24635c:
    // 0x24635c: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x24635cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
label_246360:
    // 0x246360: 0xc067694  jal         func_19DA50
label_246364:
    if (ctx->pc == 0x246364u) {
        ctx->pc = 0x246368u;
        goto label_246368;
    }
    ctx->pc = 0x246360u;
    SET_GPR_U32(ctx, 31, 0x246368u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246360u, 0x246368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246368u;
label_246368:
    // 0x246368: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x246368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24636c:
    // 0x24636c: 0x3085001f  andi        $a1, $a0, 0x1F
    ctx->pc = 0x24636cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_246370:
    // 0x246370: 0x24a3003c  addiu       $v1, $a1, 0x3C
    ctx->pc = 0x246370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
label_246374:
    // 0x246374: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x246374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_246378:
    // 0x246378: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246378u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_24637c:
    // 0x24637c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246380:
    // 0x246380: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246384:
    // 0x246384: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x246384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_246388:
    // 0x246388: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24638c:
    // 0x24638c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x24638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246390:
    // 0x246390: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x246390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_246394:
    // 0x246394: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x246394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_246398:
    // 0x246398: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x246398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_24639c:
    // 0x24639c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x24639cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_2463a0:
    // 0x2463a0: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x2463a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2463a4:
    // 0x2463a4: 0x263010b0  addiu       $s0, $s1, 0x10B0
    ctx->pc = 0x2463a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4272));
label_2463a8:
    // 0x2463a8: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2463a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_2463ac:
    // 0x2463ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2463acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2463b0:
    // 0x2463b0: 0x0  nop
    ctx->pc = 0x2463b0u;
    // NOP
label_2463b4:
    // 0x2463b4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x2463b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_2463b8:
    // 0x2463b8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2463b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_2463bc:
    // 0x2463bc: 0x10000123  b           . + 4 + (0x123 << 2)
label_2463c0:
    if (ctx->pc == 0x2463C0u) {
        ctx->pc = 0x2463C4u;
        goto label_2463c4;
    }
    ctx->pc = 0x2463BCu;
    {
        const bool branch_taken_0x2463bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463bc) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x2463C4u;
label_2463c4:
    // 0x2463c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2463c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2463c8:
    // 0x2463c8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2463c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_2463cc:
    // 0x2463cc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2463d0:
    if (ctx->pc == 0x2463D0u) {
        ctx->pc = 0x2463D4u;
        goto label_2463d4;
    }
    ctx->pc = 0x2463CCu;
    {
        const bool branch_taken_0x2463cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463cc) {
            ctx->pc = 0x246434u;
            goto label_246434;
        }
    }
    ctx->pc = 0x2463D4u;
label_2463d4:
    // 0x2463d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2463d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2463d8:
    // 0x2463d8: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2463d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2463dc:
    // 0x2463dc: 0x3c05420c  lui         $a1, 0x420C
    ctx->pc = 0x2463dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16908 << 16));
label_2463e0:
    // 0x2463e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2463e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2463e4:
    // 0x2463e4: 0x0  nop
    ctx->pc = 0x2463e4u;
    // NOP
label_2463e8:
    // 0x2463e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2463e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2463ec:
    // 0x2463ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2463ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2463f0:
    // 0x2463f0: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2463f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958308), bits); }
label_2463f4:
    // 0x2463f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2463f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2463f8:
    // 0x2463f8: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2463f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
label_2463fc:
    // 0x2463fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2463fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_246400:
    // 0x246400: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x246400u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_246404:
    // 0x246404: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x246404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_246408:
    // 0x246408: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24640c:
    // 0x24640c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246410:
    // 0x246410: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x246410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246414:
    // 0x246414: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x246414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_246418:
    // 0x246418: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x246418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_24641c:
    // 0x24641c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24641cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246420:
    // 0x246420: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x246420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246424:
    // 0x246424: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x246424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_246428:
    // 0x246428: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x246428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_24642c:
    // 0x24642c: 0x1000000a  b           . + 4 + (0xA << 2)
label_246430:
    if (ctx->pc == 0x246430u) {
        ctx->pc = 0x246434u;
        goto label_246434;
    }
    ctx->pc = 0x24642Cu;
    {
        const bool branch_taken_0x24642c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24642c) {
            ctx->pc = 0x246458u;
            goto label_246458;
        }
    }
    ctx->pc = 0x246434u;
label_246434:
    // 0x246434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246438:
    // 0x246438: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x246438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24643c:
    // 0x24643c: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x24643cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
label_246440:
    // 0x246440: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x246440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
label_246444:
    // 0x246444: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x246444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_246448:
    // 0x246448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24644c:
    // 0x24644c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x24644cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246450:
    // 0x246450: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x246450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_246454:
    // 0x246454: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x246454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_246458:
    // 0x246458: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24645c:
    // 0x24645c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x24645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_246460:
    // 0x246460: 0xc096b40  jal         func_25AD00
label_246464:
    if (ctx->pc == 0x246464u) {
        ctx->pc = 0x246468u;
        goto label_246468;
    }
    ctx->pc = 0x246460u;
    SET_GPR_U32(ctx, 31, 0x246468u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x246460u, 0x246468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246468u;
label_246468:
    // 0x246468: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246468u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24646c:
    // 0x24646c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x24646cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246470:
    // 0x246470: 0xc0974dc  jal         func_25D370
label_246474:
    if (ctx->pc == 0x246474u) {
        ctx->pc = 0x246478u;
        goto label_246478;
    }
    ctx->pc = 0x246470u;
    SET_GPR_U32(ctx, 31, 0x246478u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x246470u, 0x246478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246478u;
label_246478:
    // 0x246478: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246478u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24647c:
    // 0x24647c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246480:
    // 0x246480: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x246480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_246484:
    // 0x246484: 0x106000f1  beqz        $v1, . + 4 + (0xF1 << 2)
label_246488:
    if (ctx->pc == 0x246488u) {
        ctx->pc = 0x24648Cu;
        goto label_24648c;
    }
    ctx->pc = 0x246484u;
    {
        const bool branch_taken_0x246484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246484) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x24648Cu;
label_24648c:
    // 0x24648c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246490:
    // 0x246490: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246494:
    // 0x246494: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x246494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_246498:
    // 0x246498: 0x24060a24  addiu       $a2, $zero, 0xA24
    ctx->pc = 0x246498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2596));
label_24649c:
    // 0x24649c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24649cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2464a0:
    // 0x2464a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2464a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2464a4:
    // 0x2464a4: 0xc0965d0  jal         func_259740
label_2464a8:
    if (ctx->pc == 0x2464A8u) {
        ctx->pc = 0x2464ACu;
        goto label_2464ac;
    }
    ctx->pc = 0x2464A4u;
    SET_GPR_U32(ctx, 31, 0x2464ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2464A4u, 0x2464ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464ACu;
label_2464ac:
    // 0x2464ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2464acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2464b0:
    // 0x2464b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2464b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2464b4:
    // 0x2464b4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2464b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2464b8:
    // 0x2464b8: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_2464bc:
    if (ctx->pc == 0x2464BCu) {
        ctx->pc = 0x2464C0u;
        goto label_2464c0;
    }
    ctx->pc = 0x2464B8u;
    {
        const bool branch_taken_0x2464b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2464b8) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x2464C0u;
label_2464c0:
    // 0x2464c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2464c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2464c4:
    // 0x2464c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2464c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2464c8:
    // 0x2464c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2464c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2464cc:
    // 0x2464cc: 0xc096b40  jal         func_25AD00
label_2464d0:
    if (ctx->pc == 0x2464D0u) {
        ctx->pc = 0x2464D4u;
        goto label_2464d4;
    }
    ctx->pc = 0x2464CCu;
    SET_GPR_U32(ctx, 31, 0x2464D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2464CCu, 0x2464D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464D4u;
label_2464d4:
    // 0x2464d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2464d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2464d8:
    // 0x2464d8: 0xc0974dc  jal         func_25D370
label_2464dc:
    if (ctx->pc == 0x2464DCu) {
        ctx->pc = 0x2464E0u;
        goto label_2464e0;
    }
    ctx->pc = 0x2464D8u;
    SET_GPR_U32(ctx, 31, 0x2464E0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2464D8u, 0x2464E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464E0u;
label_2464e0:
    // 0x2464e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2464e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2464e4:
    // 0x2464e4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2464e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2464e8:
    // 0x2464e8: 0x90a309db  lbu         $v1, 0x9DB($a1)
    ctx->pc = 0x2464e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
label_2464ec:
    // 0x2464ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2464ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2464f0:
    // 0x2464f0: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x2464f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_2464f4:
    // 0x2464f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2464f8:
    if (ctx->pc == 0x2464F8u) {
        ctx->pc = 0x2464FCu;
        goto label_2464fc;
    }
    ctx->pc = 0x2464F4u;
    {
        const bool branch_taken_0x2464f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2464f4) {
            ctx->pc = 0x246508u;
            goto label_246508;
        }
    }
    ctx->pc = 0x2464FCu;
label_2464fc:
    // 0x2464fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2464fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_246500:
    // 0x246500: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x246500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_246504:
    // 0x246504: 0xa023dbc2  sb          $v1, -0x243E($at)
    ctx->pc = 0x246504u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958018), (uint8_t)GPR_U32(ctx, 3));
label_246508:
    // 0x246508: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24650c:
    // 0x24650c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x24650cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_246510:
    // 0x246510: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x246510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_246514:
    // 0x246514: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x246514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_246518:
    // 0x246518: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
label_24651c:
    if (ctx->pc == 0x24651Cu) {
        ctx->pc = 0x246520u;
        goto label_246520;
    }
    ctx->pc = 0x246518u;
    {
        const bool branch_taken_0x246518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246518) {
            ctx->pc = 0x246788u;
            goto label_246788;
        }
    }
    ctx->pc = 0x246520u;
label_246520:
    // 0x246520: 0x3c02c3b9  lui         $v0, 0xC3B9
    ctx->pc = 0x246520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50105 << 16));
label_246524:
    // 0x246524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246528:
    // 0x246528: 0x0  nop
    ctx->pc = 0x246528u;
    // NOP
label_24652c:
    // 0x24652c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x24652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_246530:
    // 0x246530: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x246530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_246534:
    // 0x246534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246538:
    // 0x246538: 0x0  nop
    ctx->pc = 0x246538u;
    // NOP
label_24653c:
    // 0x24653c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_246540:
    // 0x246540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246544:
    // 0x246544: 0x0  nop
    ctx->pc = 0x246544u;
    // NOP
label_246548:
    // 0x246548: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x246548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_24654c:
    // 0x24654c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_246550:
    // 0x246550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246554:
    // 0x246554: 0x0  nop
    ctx->pc = 0x246554u;
    // NOP
label_246558:
    // 0x246558: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x246558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_24655c:
    // 0x24655c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246560:
    // 0x246560: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x246560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_246564:
    // 0x246564: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x246564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_246568:
    // 0x246568: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x246568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_24656c:
    // 0x24656c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_246570:
    // 0x246570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_246574:
    // 0x246574: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x246574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_246578:
    // 0x246578: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_24657c:
    // 0x24657c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x24657cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_246580:
    // 0x246580: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246584:
    // 0x246584: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x246584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_246588:
    // 0x246588: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_24658c:
    // 0x24658c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24658cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_246590:
    // 0x246590: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x246590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
label_246594:
    // 0x246594: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x246594u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_246598:
    // 0x246598: 0xc06371c  jal         func_18DC70
label_24659c:
    if (ctx->pc == 0x24659Cu) {
        ctx->pc = 0x2465A0u;
        goto label_2465a0;
    }
    ctx->pc = 0x246598u;
    SET_GPR_U32(ctx, 31, 0x2465A0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246598u, 0x2465A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465A0u;
label_2465a0:
    // 0x2465a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2465a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2465a4:
    // 0x2465a4: 0xc067694  jal         func_19DA50
label_2465a8:
    if (ctx->pc == 0x2465A8u) {
        ctx->pc = 0x2465ACu;
        goto label_2465ac;
    }
    ctx->pc = 0x2465A4u;
    SET_GPR_U32(ctx, 31, 0x2465ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2465A4u, 0x2465ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465ACu;
label_2465ac:
    // 0x2465ac: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2465acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2465b0:
    // 0x2465b0: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
label_2465b4:
    if (ctx->pc == 0x2465B4u) {
        ctx->pc = 0x2465B8u;
        goto label_2465b8;
    }
    ctx->pc = 0x2465B0u;
    {
        const bool branch_taken_0x2465b0 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2465b0) {
            ctx->pc = 0x2465CCu;
            goto label_2465cc;
        }
    }
    ctx->pc = 0x2465B8u;
label_2465b8:
    // 0x2465b8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2465b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2465bc:
    // 0x2465bc: 0x0  nop
    ctx->pc = 0x2465bcu;
    // NOP
label_2465c0:
    // 0x2465c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2465c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2465c4:
    // 0x2465c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2465c8:
    if (ctx->pc == 0x2465C8u) {
        ctx->pc = 0x2465CCu;
        goto label_2465cc;
    }
    ctx->pc = 0x2465C4u;
    {
        const bool branch_taken_0x2465c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2465c4) {
            ctx->pc = 0x2465E8u;
            goto label_2465e8;
        }
    }
    ctx->pc = 0x2465CCu;
label_2465cc:
    // 0x2465cc: 0x74042  srl         $t0, $a3, 1
    ctx->pc = 0x2465ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_2465d0:
    // 0x2465d0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x2465d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_2465d4:
    // 0x2465d4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2465d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_2465d8:
    // 0x2465d8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2465d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2465dc:
    // 0x2465dc: 0x0  nop
    ctx->pc = 0x2465dcu;
    // NOP
label_2465e0:
    // 0x2465e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2465e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2465e4:
    // 0x2465e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2465e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2465e8:
    // 0x2465e8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2465e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2465ec:
    // 0x2465ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2465ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2465f0:
    // 0x2465f0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2465f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2465f4:
    // 0x2465f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2465f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2465f8:
    // 0x2465f8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2465f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2465fc:
    // 0x2465fc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2465fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_246600:
    // 0x246600: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x246600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_246604:
    // 0x246604: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x246604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_246608:
    // 0x246608: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x246608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_24660c:
    // 0x24660c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x24660cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_246610:
    // 0x246610: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x246610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_246614:
    // 0x246614: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x246614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_246618:
    // 0x246618: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x246618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24661c:
    // 0x24661c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x24661cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_246620:
    // 0x246620: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_246624:
    // 0x246624: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246624u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_246628:
    // 0x246628: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x246628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
label_24662c:
    // 0x24662c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24662cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_246630:
    // 0x246630: 0xc06371c  jal         func_18DC70
label_246634:
    if (ctx->pc == 0x246634u) {
        ctx->pc = 0x246638u;
        goto label_246638;
    }
    ctx->pc = 0x246630u;
    SET_GPR_U32(ctx, 31, 0x246638u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246630u, 0x246638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246638u;
label_246638:
    // 0x246638: 0xc067648  jal         func_19D920
label_24663c:
    if (ctx->pc == 0x24663Cu) {
        ctx->pc = 0x246640u;
        goto label_246640;
    }
    ctx->pc = 0x246638u;
    SET_GPR_U32(ctx, 31, 0x246640u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x246638u, 0x246640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246640u;
label_246640:
    // 0x246640: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x246640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_246644:
    // 0x246644: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x246644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246648:
    // 0x246648: 0x0  nop
    ctx->pc = 0x246648u;
    // NOP
label_24664c:
    // 0x24664c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24664cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_246650:
    // 0x246650: 0x3c05c3eb  lui         $a1, 0xC3EB
    ctx->pc = 0x246650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50155 << 16));
label_246654:
    // 0x246654: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x246654u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246658:
    // 0x246658: 0x0  nop
    ctx->pc = 0x246658u;
    // NOP
label_24665c:
    // 0x24665c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24665cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_246660:
    // 0x246660: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x246660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_246664:
    // 0x246664: 0xc067648  jal         func_19D920
label_246668:
    if (ctx->pc == 0x246668u) {
        ctx->pc = 0x24666Cu;
        goto label_24666c;
    }
    ctx->pc = 0x246664u;
    SET_GPR_U32(ctx, 31, 0x24666Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x246664u, 0x24666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24666Cu;
label_24666c:
    // 0x24666c: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x24666cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_246670:
    // 0x246670: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x246670u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246674:
    // 0x246674: 0x0  nop
    ctx->pc = 0x246674u;
    // NOP
label_246678:
    // 0x246678: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x246678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_24667c:
    // 0x24667c: 0x3c074416  lui         $a3, 0x4416
    ctx->pc = 0x24667cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17430 << 16));
label_246680:
    // 0x246680: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x246680u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246684:
    // 0x246684: 0x0  nop
    ctx->pc = 0x246684u;
    // NOP
label_246688:
    // 0x246688: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x246688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_24668c:
    // 0x24668c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24668cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_246690:
    // 0x246690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246694:
    // 0x246694: 0x0  nop
    ctx->pc = 0x246694u;
    // NOP
label_246698:
    // 0x246698: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x246698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_24669c:
    // 0x24669c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x24669cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_2466a0:
    // 0x2466a0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2466a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2466a4:
    // 0x2466a4: 0x0  nop
    ctx->pc = 0x2466a4u;
    // NOP
label_2466a8:
    // 0x2466a8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2466a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2466ac:
    // 0x2466ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2466acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2466b0:
    // 0x2466b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2466b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2466b4:
    // 0x2466b4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2466b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2466b8:
    // 0x2466b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2466b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2466bc:
    // 0x2466bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2466bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2466c0:
    // 0x2466c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2466c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2466c4:
    // 0x2466c4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2466c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2466c8:
    // 0x2466c8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2466c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_2466cc:
    // 0x2466cc: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2466ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_2466d0:
    // 0x2466d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2466d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2466d4:
    // 0x2466d4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2466d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2466d8:
    // 0x2466d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2466d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2466dc:
    // 0x2466dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2466dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2466e0:
    // 0x2466e0: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x2466e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
label_2466e4:
    // 0x2466e4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2466e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2466e8:
    // 0x2466e8: 0xc06371c  jal         func_18DC70
label_2466ec:
    if (ctx->pc == 0x2466ECu) {
        ctx->pc = 0x2466F0u;
        goto label_2466f0;
    }
    ctx->pc = 0x2466E8u;
    SET_GPR_U32(ctx, 31, 0x2466F0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2466E8u, 0x2466F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466F0u;
label_2466f0:
    // 0x2466f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2466f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2466f4:
    // 0x2466f4: 0xc067694  jal         func_19DA50
label_2466f8:
    if (ctx->pc == 0x2466F8u) {
        ctx->pc = 0x2466FCu;
        goto label_2466fc;
    }
    ctx->pc = 0x2466F4u;
    SET_GPR_U32(ctx, 31, 0x2466FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2466F4u, 0x2466FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466FCu;
label_2466fc:
    // 0x2466fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2466fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_246700:
    // 0x246700: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_246704:
    if (ctx->pc == 0x246704u) {
        ctx->pc = 0x246708u;
        goto label_246708;
    }
    ctx->pc = 0x246700u;
    {
        const bool branch_taken_0x246700 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x246700) {
            ctx->pc = 0x24671Cu;
            goto label_24671c;
        }
    }
    ctx->pc = 0x246708u;
label_246708:
    // 0x246708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24670c:
    // 0x24670c: 0x0  nop
    ctx->pc = 0x24670cu;
    // NOP
label_246710:
    // 0x246710: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x246710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_246714:
    // 0x246714: 0x10000008  b           . + 4 + (0x8 << 2)
label_246718:
    if (ctx->pc == 0x246718u) {
        ctx->pc = 0x24671Cu;
        goto label_24671c;
    }
    ctx->pc = 0x246714u;
    {
        const bool branch_taken_0x246714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246714) {
            ctx->pc = 0x246738u;
            goto label_246738;
        }
    }
    ctx->pc = 0x24671Cu;
label_24671c:
    // 0x24671c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x24671cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_246720:
    // 0x246720: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x246720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_246724:
    // 0x246724: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x246724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_246728:
    // 0x246728: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246728u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24672c:
    // 0x24672c: 0x0  nop
    ctx->pc = 0x24672cu;
    // NOP
label_246730:
    // 0x246730: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x246730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_246734:
    // 0x246734: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x246734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_246738:
    // 0x246738: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x246738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24673c:
    // 0x24673c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24673cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_246740:
    // 0x246740: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x246740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_246744:
    // 0x246744: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246748:
    // 0x246748: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x246748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_24674c:
    // 0x24674c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24674cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_246750:
    // 0x246750: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x246750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_246754:
    // 0x246754: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x246754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
label_246758:
    // 0x246758: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x246758u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_24675c:
    // 0x24675c: 0x901024  and         $v0, $a0, $s0
    ctx->pc = 0x24675cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_246760:
    // 0x246760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_246764:
    // 0x246764: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x246764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_246768:
    // 0x246768: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24676c:
    // 0x24676c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x24676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_246770:
    // 0x246770: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_246774:
    // 0x246774: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246774u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_246778:
    // 0x246778: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x246778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
label_24677c:
    // 0x24677c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24677cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_246780:
    // 0x246780: 0xc06371c  jal         func_18DC70
label_246784:
    if (ctx->pc == 0x246784u) {
        ctx->pc = 0x246788u;
        goto label_246788;
    }
    ctx->pc = 0x246780u;
    SET_GPR_U32(ctx, 31, 0x246788u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246780u, 0x246788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246788u;
label_246788:
    // 0x246788: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24678c:
    // 0x24678c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x24678cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_246790:
    // 0x246790: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_246794:
    if (ctx->pc == 0x246794u) {
        ctx->pc = 0x246798u;
        goto label_246798;
    }
    ctx->pc = 0x246790u;
    {
        const bool branch_taken_0x246790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246790) {
            ctx->pc = 0x24684Cu;
            goto label_24684c;
        }
    }
    ctx->pc = 0x246798u;
label_246798:
    // 0x246798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24679c:
    // 0x24679c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x24679cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2467a0:
    // 0x2467a0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2467a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2467a4:
    // 0x2467a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2467a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2467a8:
    // 0x2467a8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2467a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2467ac:
    // 0x2467ac: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2467acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_2467b0:
    // 0x2467b0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2467b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2467b4:
    // 0x2467b4: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x2467b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_2467b8:
    // 0x2467b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2467b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2467bc:
    // 0x2467bc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2467bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_2467c0:
    // 0x2467c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2467c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2467c4:
    // 0x2467c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2467c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2467c8:
    // 0x2467c8: 0xc067694  jal         func_19DA50
label_2467cc:
    if (ctx->pc == 0x2467CCu) {
        ctx->pc = 0x2467D0u;
        goto label_2467d0;
    }
    ctx->pc = 0x2467C8u;
    SET_GPR_U32(ctx, 31, 0x2467D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2467C8u, 0x2467D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467D0u;
label_2467d0:
    // 0x2467d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2467d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2467d4:
    // 0x2467d4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2467d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_2467d8:
    // 0x2467d8: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2467d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_2467dc:
    // 0x2467dc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2467dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2467e0:
    // 0x2467e0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2467e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2467e4:
    // 0x2467e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2467e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2467e8:
    // 0x2467e8: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x2467e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
label_2467ec:
    // 0x2467ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2467ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2467f0:
    // 0x2467f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2467f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2467f4:
    // 0x2467f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2467f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2467f8:
    // 0x2467f8: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x2467f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_2467fc:
    // 0x2467fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2467fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246800:
    // 0x246800: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_246804:
    // 0x246804: 0xc0965d0  jal         func_259740
label_246808:
    if (ctx->pc == 0x246808u) {
        ctx->pc = 0x24680Cu;
        goto label_24680c;
    }
    ctx->pc = 0x246804u;
    SET_GPR_U32(ctx, 31, 0x24680Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x246804u, 0x24680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24680Cu;
label_24680c:
    // 0x24680c: 0xc067694  jal         func_19DA50
label_246810:
    if (ctx->pc == 0x246810u) {
        ctx->pc = 0x246814u;
        goto label_246814;
    }
    ctx->pc = 0x24680Cu;
    SET_GPR_U32(ctx, 31, 0x246814u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24680Cu, 0x246814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246814u;
label_246814:
    // 0x246814: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x246814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_246818:
    // 0x246818: 0x3085003f  andi        $a1, $a0, 0x3F
    ctx->pc = 0x246818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_24681c:
    // 0x24681c: 0x24a30064  addiu       $v1, $a1, 0x64
    ctx->pc = 0x24681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
label_246820:
    // 0x246820: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x246820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_246824:
    // 0x246824: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246824u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246828:
    // 0x246828: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24682c:
    // 0x24682c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246830:
    // 0x246830: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x246830u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_246834:
    // 0x246834: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246838:
    // 0x246838: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_24683c:
    // 0x24683c: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x24683cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_246840:
    // 0x246840: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x246840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_246844:
    // 0x246844: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x246844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_246848:
    // 0x246848: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x246848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
label_24684c:
    // 0x24684c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x24684cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246850:
    // 0x246850: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x246850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
label_246854:
    // 0x246854: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x246854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246858:
    // 0x246858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24685c:
    // 0x24685c: 0x0  nop
    ctx->pc = 0x24685cu;
    // NOP
label_246860:
    // 0x246860: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x246860u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246864:
    // 0x246864: 0x0  nop
    ctx->pc = 0x246864u;
    // NOP
label_246868:
    // 0x246868: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_24686c:
    if (ctx->pc == 0x24686Cu) {
        ctx->pc = 0x246870u;
        goto label_246870;
    }
    ctx->pc = 0x246868u;
    {
        const bool branch_taken_0x246868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246868) {
            ctx->pc = 0x24694Cu;
            goto label_24694c;
        }
    }
    ctx->pc = 0x246870u;
label_246870:
    // 0x246870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246874:
    // 0x246874: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246878:
    // 0x246878: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x246878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24687c:
    // 0x24687c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24687cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246880:
    // 0x246880: 0x0  nop
    ctx->pc = 0x246880u;
    // NOP
label_246884:
    // 0x246884: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246888:
    // 0x246888: 0x0  nop
    ctx->pc = 0x246888u;
    // NOP
label_24688c:
    // 0x24688c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_246890:
    if (ctx->pc == 0x246890u) {
        ctx->pc = 0x246894u;
        goto label_246894;
    }
    ctx->pc = 0x24688Cu;
    {
        const bool branch_taken_0x24688c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24688c) {
            ctx->pc = 0x2468F4u;
            goto label_2468f4;
        }
    }
    ctx->pc = 0x246894u;
label_246894:
    // 0x246894: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246898:
    // 0x246898: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x246898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_24689c:
    // 0x24689c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x24689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2468a0:
    // 0x2468a0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2468a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
label_2468a4:
    // 0x2468a4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2468a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2468a8:
    // 0x2468a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2468a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2468ac:
    // 0x2468ac: 0x0  nop
    ctx->pc = 0x2468acu;
    // NOP
label_2468b0:
    // 0x2468b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2468b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2468b4:
    // 0x2468b4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2468b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_2468b8:
    // 0x2468b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2468b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2468bc:
    // 0x2468bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2468bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2468c0:
    // 0x2468c0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2468c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2468c4:
    // 0x2468c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2468c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2468c8:
    // 0x2468c8: 0x0  nop
    ctx->pc = 0x2468c8u;
    // NOP
label_2468cc:
    // 0x2468cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2468ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2468d0:
    // 0x2468d0: 0x0  nop
    ctx->pc = 0x2468d0u;
    // NOP
label_2468d4:
    // 0x2468d4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_2468d8:
    if (ctx->pc == 0x2468D8u) {
        ctx->pc = 0x2468DCu;
        goto label_2468dc;
    }
    ctx->pc = 0x2468D4u;
    {
        const bool branch_taken_0x2468d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2468d4) {
            ctx->pc = 0x24694Cu;
            goto label_24694c;
        }
    }
    ctx->pc = 0x2468DCu;
label_2468dc:
    // 0x2468dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2468dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2468e0:
    // 0x2468e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2468e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2468e4:
    // 0x2468e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2468e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2468e8:
    // 0x2468e8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2468e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2468ec:
    // 0x2468ec: 0x10000017  b           . + 4 + (0x17 << 2)
label_2468f0:
    if (ctx->pc == 0x2468F0u) {
        ctx->pc = 0x2468F4u;
        goto label_2468f4;
    }
    ctx->pc = 0x2468ECu;
    {
        const bool branch_taken_0x2468ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2468ec) {
            ctx->pc = 0x24694Cu;
            goto label_24694c;
        }
    }
    ctx->pc = 0x2468F4u;
label_2468f4:
    // 0x2468f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2468f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2468f8:
    // 0x2468f8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2468f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2468fc:
    // 0x2468fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2468fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246900:
    // 0x246900: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x246900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
label_246904:
    // 0x246904: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x246904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_246908:
    // 0x246908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24690c:
    // 0x24690c: 0x0  nop
    ctx->pc = 0x24690cu;
    // NOP
label_246910:
    // 0x246910: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_246914:
    // 0x246914: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x246914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_246918:
    // 0x246918: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_24691c:
    // 0x24691c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246920:
    // 0x246920: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x246920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246924:
    // 0x246924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246928:
    // 0x246928: 0x0  nop
    ctx->pc = 0x246928u;
    // NOP
label_24692c:
    // 0x24692c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24692cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246930:
    // 0x246930: 0x0  nop
    ctx->pc = 0x246930u;
    // NOP
label_246934:
    // 0x246934: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_246938:
    if (ctx->pc == 0x246938u) {
        ctx->pc = 0x24693Cu;
        goto label_24693c;
    }
    ctx->pc = 0x246934u;
    {
        const bool branch_taken_0x246934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246934) {
            ctx->pc = 0x24694Cu;
            goto label_24694c;
        }
    }
    ctx->pc = 0x24693Cu;
label_24693c:
    // 0x24693c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24693cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246940:
    // 0x246940: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_246944:
    // 0x246944: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_246948:
    // 0x246948: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x246948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_24694c:
    // 0x24694c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x24694cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_246950:
    // 0x246950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x246950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_246954:
    // 0x246954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x246954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_246958:
    // 0x246958: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x246958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_24695c:
    // 0x24695c: 0x3e00008  jr          $ra
label_246960:
    if (ctx->pc == 0x246960u) {
        ctx->pc = 0x246964u;
        goto label_fallthrough_0x24695c;
    }
    ctx->pc = 0x24695Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24695Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24695c:
    ctx->pc = 0x246964u;
}
