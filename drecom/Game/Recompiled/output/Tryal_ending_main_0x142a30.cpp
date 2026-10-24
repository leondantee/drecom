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

// Function: Tryal_ending_main
// Address: 0x142a30 - 0x1433fc
void Tryal_ending_main_0x142a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tryal_ending_main_0x142a30");
#endif

    switch (ctx->pc) {
        case 0x142a30u: goto label_142a30;
        case 0x142a34u: goto label_142a34;
        case 0x142a38u: goto label_142a38;
        case 0x142a3cu: goto label_142a3c;
        case 0x142a40u: goto label_142a40;
        case 0x142a44u: goto label_142a44;
        case 0x142a48u: goto label_142a48;
        case 0x142a4cu: goto label_142a4c;
        case 0x142a50u: goto label_142a50;
        case 0x142a54u: goto label_142a54;
        case 0x142a58u: goto label_142a58;
        case 0x142a5cu: goto label_142a5c;
        case 0x142a60u: goto label_142a60;
        case 0x142a64u: goto label_142a64;
        case 0x142a68u: goto label_142a68;
        case 0x142a6cu: goto label_142a6c;
        case 0x142a70u: goto label_142a70;
        case 0x142a74u: goto label_142a74;
        case 0x142a78u: goto label_142a78;
        case 0x142a7cu: goto label_142a7c;
        case 0x142a80u: goto label_142a80;
        case 0x142a84u: goto label_142a84;
        case 0x142a88u: goto label_142a88;
        case 0x142a8cu: goto label_142a8c;
        case 0x142a90u: goto label_142a90;
        case 0x142a94u: goto label_142a94;
        case 0x142a98u: goto label_142a98;
        case 0x142a9cu: goto label_142a9c;
        case 0x142aa0u: goto label_142aa0;
        case 0x142aa4u: goto label_142aa4;
        case 0x142aa8u: goto label_142aa8;
        case 0x142aacu: goto label_142aac;
        case 0x142ab0u: goto label_142ab0;
        case 0x142ab4u: goto label_142ab4;
        case 0x142ab8u: goto label_142ab8;
        case 0x142abcu: goto label_142abc;
        case 0x142ac0u: goto label_142ac0;
        case 0x142ac4u: goto label_142ac4;
        case 0x142ac8u: goto label_142ac8;
        case 0x142accu: goto label_142acc;
        case 0x142ad0u: goto label_142ad0;
        case 0x142ad4u: goto label_142ad4;
        case 0x142ad8u: goto label_142ad8;
        case 0x142adcu: goto label_142adc;
        case 0x142ae0u: goto label_142ae0;
        case 0x142ae4u: goto label_142ae4;
        case 0x142ae8u: goto label_142ae8;
        case 0x142aecu: goto label_142aec;
        case 0x142af0u: goto label_142af0;
        case 0x142af4u: goto label_142af4;
        case 0x142af8u: goto label_142af8;
        case 0x142afcu: goto label_142afc;
        case 0x142b00u: goto label_142b00;
        case 0x142b04u: goto label_142b04;
        case 0x142b08u: goto label_142b08;
        case 0x142b0cu: goto label_142b0c;
        case 0x142b10u: goto label_142b10;
        case 0x142b14u: goto label_142b14;
        case 0x142b18u: goto label_142b18;
        case 0x142b1cu: goto label_142b1c;
        case 0x142b20u: goto label_142b20;
        case 0x142b24u: goto label_142b24;
        case 0x142b28u: goto label_142b28;
        case 0x142b2cu: goto label_142b2c;
        case 0x142b30u: goto label_142b30;
        case 0x142b34u: goto label_142b34;
        case 0x142b38u: goto label_142b38;
        case 0x142b3cu: goto label_142b3c;
        case 0x142b40u: goto label_142b40;
        case 0x142b44u: goto label_142b44;
        case 0x142b48u: goto label_142b48;
        case 0x142b4cu: goto label_142b4c;
        case 0x142b50u: goto label_142b50;
        case 0x142b54u: goto label_142b54;
        case 0x142b58u: goto label_142b58;
        case 0x142b5cu: goto label_142b5c;
        case 0x142b60u: goto label_142b60;
        case 0x142b64u: goto label_142b64;
        case 0x142b68u: goto label_142b68;
        case 0x142b6cu: goto label_142b6c;
        case 0x142b70u: goto label_142b70;
        case 0x142b74u: goto label_142b74;
        case 0x142b78u: goto label_142b78;
        case 0x142b7cu: goto label_142b7c;
        case 0x142b80u: goto label_142b80;
        case 0x142b84u: goto label_142b84;
        case 0x142b88u: goto label_142b88;
        case 0x142b8cu: goto label_142b8c;
        case 0x142b90u: goto label_142b90;
        case 0x142b94u: goto label_142b94;
        case 0x142b98u: goto label_142b98;
        case 0x142b9cu: goto label_142b9c;
        case 0x142ba0u: goto label_142ba0;
        case 0x142ba4u: goto label_142ba4;
        case 0x142ba8u: goto label_142ba8;
        case 0x142bacu: goto label_142bac;
        case 0x142bb0u: goto label_142bb0;
        case 0x142bb4u: goto label_142bb4;
        case 0x142bb8u: goto label_142bb8;
        case 0x142bbcu: goto label_142bbc;
        case 0x142bc0u: goto label_142bc0;
        case 0x142bc4u: goto label_142bc4;
        case 0x142bc8u: goto label_142bc8;
        case 0x142bccu: goto label_142bcc;
        case 0x142bd0u: goto label_142bd0;
        case 0x142bd4u: goto label_142bd4;
        case 0x142bd8u: goto label_142bd8;
        case 0x142bdcu: goto label_142bdc;
        case 0x142be0u: goto label_142be0;
        case 0x142be4u: goto label_142be4;
        case 0x142be8u: goto label_142be8;
        case 0x142becu: goto label_142bec;
        case 0x142bf0u: goto label_142bf0;
        case 0x142bf4u: goto label_142bf4;
        case 0x142bf8u: goto label_142bf8;
        case 0x142bfcu: goto label_142bfc;
        case 0x142c00u: goto label_142c00;
        case 0x142c04u: goto label_142c04;
        case 0x142c08u: goto label_142c08;
        case 0x142c0cu: goto label_142c0c;
        case 0x142c10u: goto label_142c10;
        case 0x142c14u: goto label_142c14;
        case 0x142c18u: goto label_142c18;
        case 0x142c1cu: goto label_142c1c;
        case 0x142c20u: goto label_142c20;
        case 0x142c24u: goto label_142c24;
        case 0x142c28u: goto label_142c28;
        case 0x142c2cu: goto label_142c2c;
        case 0x142c30u: goto label_142c30;
        case 0x142c34u: goto label_142c34;
        case 0x142c38u: goto label_142c38;
        case 0x142c3cu: goto label_142c3c;
        case 0x142c40u: goto label_142c40;
        case 0x142c44u: goto label_142c44;
        case 0x142c48u: goto label_142c48;
        case 0x142c4cu: goto label_142c4c;
        case 0x142c50u: goto label_142c50;
        case 0x142c54u: goto label_142c54;
        case 0x142c58u: goto label_142c58;
        case 0x142c5cu: goto label_142c5c;
        case 0x142c60u: goto label_142c60;
        case 0x142c64u: goto label_142c64;
        case 0x142c68u: goto label_142c68;
        case 0x142c6cu: goto label_142c6c;
        case 0x142c70u: goto label_142c70;
        case 0x142c74u: goto label_142c74;
        case 0x142c78u: goto label_142c78;
        case 0x142c7cu: goto label_142c7c;
        case 0x142c80u: goto label_142c80;
        case 0x142c84u: goto label_142c84;
        case 0x142c88u: goto label_142c88;
        case 0x142c8cu: goto label_142c8c;
        case 0x142c90u: goto label_142c90;
        case 0x142c94u: goto label_142c94;
        case 0x142c98u: goto label_142c98;
        case 0x142c9cu: goto label_142c9c;
        case 0x142ca0u: goto label_142ca0;
        case 0x142ca4u: goto label_142ca4;
        case 0x142ca8u: goto label_142ca8;
        case 0x142cacu: goto label_142cac;
        case 0x142cb0u: goto label_142cb0;
        case 0x142cb4u: goto label_142cb4;
        case 0x142cb8u: goto label_142cb8;
        case 0x142cbcu: goto label_142cbc;
        case 0x142cc0u: goto label_142cc0;
        case 0x142cc4u: goto label_142cc4;
        case 0x142cc8u: goto label_142cc8;
        case 0x142cccu: goto label_142ccc;
        case 0x142cd0u: goto label_142cd0;
        case 0x142cd4u: goto label_142cd4;
        case 0x142cd8u: goto label_142cd8;
        case 0x142cdcu: goto label_142cdc;
        case 0x142ce0u: goto label_142ce0;
        case 0x142ce4u: goto label_142ce4;
        case 0x142ce8u: goto label_142ce8;
        case 0x142cecu: goto label_142cec;
        case 0x142cf0u: goto label_142cf0;
        case 0x142cf4u: goto label_142cf4;
        case 0x142cf8u: goto label_142cf8;
        case 0x142cfcu: goto label_142cfc;
        case 0x142d00u: goto label_142d00;
        case 0x142d04u: goto label_142d04;
        case 0x142d08u: goto label_142d08;
        case 0x142d0cu: goto label_142d0c;
        case 0x142d10u: goto label_142d10;
        case 0x142d14u: goto label_142d14;
        case 0x142d18u: goto label_142d18;
        case 0x142d1cu: goto label_142d1c;
        case 0x142d20u: goto label_142d20;
        case 0x142d24u: goto label_142d24;
        case 0x142d28u: goto label_142d28;
        case 0x142d2cu: goto label_142d2c;
        case 0x142d30u: goto label_142d30;
        case 0x142d34u: goto label_142d34;
        case 0x142d38u: goto label_142d38;
        case 0x142d3cu: goto label_142d3c;
        case 0x142d40u: goto label_142d40;
        case 0x142d44u: goto label_142d44;
        case 0x142d48u: goto label_142d48;
        case 0x142d4cu: goto label_142d4c;
        case 0x142d50u: goto label_142d50;
        case 0x142d54u: goto label_142d54;
        case 0x142d58u: goto label_142d58;
        case 0x142d5cu: goto label_142d5c;
        case 0x142d60u: goto label_142d60;
        case 0x142d64u: goto label_142d64;
        case 0x142d68u: goto label_142d68;
        case 0x142d6cu: goto label_142d6c;
        case 0x142d70u: goto label_142d70;
        case 0x142d74u: goto label_142d74;
        case 0x142d78u: goto label_142d78;
        case 0x142d7cu: goto label_142d7c;
        case 0x142d80u: goto label_142d80;
        case 0x142d84u: goto label_142d84;
        case 0x142d88u: goto label_142d88;
        case 0x142d8cu: goto label_142d8c;
        case 0x142d90u: goto label_142d90;
        case 0x142d94u: goto label_142d94;
        case 0x142d98u: goto label_142d98;
        case 0x142d9cu: goto label_142d9c;
        case 0x142da0u: goto label_142da0;
        case 0x142da4u: goto label_142da4;
        case 0x142da8u: goto label_142da8;
        case 0x142dacu: goto label_142dac;
        case 0x142db0u: goto label_142db0;
        case 0x142db4u: goto label_142db4;
        case 0x142db8u: goto label_142db8;
        case 0x142dbcu: goto label_142dbc;
        case 0x142dc0u: goto label_142dc0;
        case 0x142dc4u: goto label_142dc4;
        case 0x142dc8u: goto label_142dc8;
        case 0x142dccu: goto label_142dcc;
        case 0x142dd0u: goto label_142dd0;
        case 0x142dd4u: goto label_142dd4;
        case 0x142dd8u: goto label_142dd8;
        case 0x142ddcu: goto label_142ddc;
        case 0x142de0u: goto label_142de0;
        case 0x142de4u: goto label_142de4;
        case 0x142de8u: goto label_142de8;
        case 0x142decu: goto label_142dec;
        case 0x142df0u: goto label_142df0;
        case 0x142df4u: goto label_142df4;
        case 0x142df8u: goto label_142df8;
        case 0x142dfcu: goto label_142dfc;
        case 0x142e00u: goto label_142e00;
        case 0x142e04u: goto label_142e04;
        case 0x142e08u: goto label_142e08;
        case 0x142e0cu: goto label_142e0c;
        case 0x142e10u: goto label_142e10;
        case 0x142e14u: goto label_142e14;
        case 0x142e18u: goto label_142e18;
        case 0x142e1cu: goto label_142e1c;
        case 0x142e20u: goto label_142e20;
        case 0x142e24u: goto label_142e24;
        case 0x142e28u: goto label_142e28;
        case 0x142e2cu: goto label_142e2c;
        case 0x142e30u: goto label_142e30;
        case 0x142e34u: goto label_142e34;
        case 0x142e38u: goto label_142e38;
        case 0x142e3cu: goto label_142e3c;
        case 0x142e40u: goto label_142e40;
        case 0x142e44u: goto label_142e44;
        case 0x142e48u: goto label_142e48;
        case 0x142e4cu: goto label_142e4c;
        case 0x142e50u: goto label_142e50;
        case 0x142e54u: goto label_142e54;
        case 0x142e58u: goto label_142e58;
        case 0x142e5cu: goto label_142e5c;
        case 0x142e60u: goto label_142e60;
        case 0x142e64u: goto label_142e64;
        case 0x142e68u: goto label_142e68;
        case 0x142e6cu: goto label_142e6c;
        case 0x142e70u: goto label_142e70;
        case 0x142e74u: goto label_142e74;
        case 0x142e78u: goto label_142e78;
        case 0x142e7cu: goto label_142e7c;
        case 0x142e80u: goto label_142e80;
        case 0x142e84u: goto label_142e84;
        case 0x142e88u: goto label_142e88;
        case 0x142e8cu: goto label_142e8c;
        case 0x142e90u: goto label_142e90;
        case 0x142e94u: goto label_142e94;
        case 0x142e98u: goto label_142e98;
        case 0x142e9cu: goto label_142e9c;
        case 0x142ea0u: goto label_142ea0;
        case 0x142ea4u: goto label_142ea4;
        case 0x142ea8u: goto label_142ea8;
        case 0x142eacu: goto label_142eac;
        case 0x142eb0u: goto label_142eb0;
        case 0x142eb4u: goto label_142eb4;
        case 0x142eb8u: goto label_142eb8;
        case 0x142ebcu: goto label_142ebc;
        case 0x142ec0u: goto label_142ec0;
        case 0x142ec4u: goto label_142ec4;
        case 0x142ec8u: goto label_142ec8;
        case 0x142eccu: goto label_142ecc;
        case 0x142ed0u: goto label_142ed0;
        case 0x142ed4u: goto label_142ed4;
        case 0x142ed8u: goto label_142ed8;
        case 0x142edcu: goto label_142edc;
        case 0x142ee0u: goto label_142ee0;
        case 0x142ee4u: goto label_142ee4;
        case 0x142ee8u: goto label_142ee8;
        case 0x142eecu: goto label_142eec;
        case 0x142ef0u: goto label_142ef0;
        case 0x142ef4u: goto label_142ef4;
        case 0x142ef8u: goto label_142ef8;
        case 0x142efcu: goto label_142efc;
        case 0x142f00u: goto label_142f00;
        case 0x142f04u: goto label_142f04;
        case 0x142f08u: goto label_142f08;
        case 0x142f0cu: goto label_142f0c;
        case 0x142f10u: goto label_142f10;
        case 0x142f14u: goto label_142f14;
        case 0x142f18u: goto label_142f18;
        case 0x142f1cu: goto label_142f1c;
        case 0x142f20u: goto label_142f20;
        case 0x142f24u: goto label_142f24;
        case 0x142f28u: goto label_142f28;
        case 0x142f2cu: goto label_142f2c;
        case 0x142f30u: goto label_142f30;
        case 0x142f34u: goto label_142f34;
        case 0x142f38u: goto label_142f38;
        case 0x142f3cu: goto label_142f3c;
        case 0x142f40u: goto label_142f40;
        case 0x142f44u: goto label_142f44;
        case 0x142f48u: goto label_142f48;
        case 0x142f4cu: goto label_142f4c;
        case 0x142f50u: goto label_142f50;
        case 0x142f54u: goto label_142f54;
        case 0x142f58u: goto label_142f58;
        case 0x142f5cu: goto label_142f5c;
        case 0x142f60u: goto label_142f60;
        case 0x142f64u: goto label_142f64;
        case 0x142f68u: goto label_142f68;
        case 0x142f6cu: goto label_142f6c;
        case 0x142f70u: goto label_142f70;
        case 0x142f74u: goto label_142f74;
        case 0x142f78u: goto label_142f78;
        case 0x142f7cu: goto label_142f7c;
        case 0x142f80u: goto label_142f80;
        case 0x142f84u: goto label_142f84;
        case 0x142f88u: goto label_142f88;
        case 0x142f8cu: goto label_142f8c;
        case 0x142f90u: goto label_142f90;
        case 0x142f94u: goto label_142f94;
        case 0x142f98u: goto label_142f98;
        case 0x142f9cu: goto label_142f9c;
        case 0x142fa0u: goto label_142fa0;
        case 0x142fa4u: goto label_142fa4;
        case 0x142fa8u: goto label_142fa8;
        case 0x142facu: goto label_142fac;
        case 0x142fb0u: goto label_142fb0;
        case 0x142fb4u: goto label_142fb4;
        case 0x142fb8u: goto label_142fb8;
        case 0x142fbcu: goto label_142fbc;
        case 0x142fc0u: goto label_142fc0;
        case 0x142fc4u: goto label_142fc4;
        case 0x142fc8u: goto label_142fc8;
        case 0x142fccu: goto label_142fcc;
        case 0x142fd0u: goto label_142fd0;
        case 0x142fd4u: goto label_142fd4;
        case 0x142fd8u: goto label_142fd8;
        case 0x142fdcu: goto label_142fdc;
        case 0x142fe0u: goto label_142fe0;
        case 0x142fe4u: goto label_142fe4;
        case 0x142fe8u: goto label_142fe8;
        case 0x142fecu: goto label_142fec;
        case 0x142ff0u: goto label_142ff0;
        case 0x142ff4u: goto label_142ff4;
        case 0x142ff8u: goto label_142ff8;
        case 0x142ffcu: goto label_142ffc;
        case 0x143000u: goto label_143000;
        case 0x143004u: goto label_143004;
        case 0x143008u: goto label_143008;
        case 0x14300cu: goto label_14300c;
        case 0x143010u: goto label_143010;
        case 0x143014u: goto label_143014;
        case 0x143018u: goto label_143018;
        case 0x14301cu: goto label_14301c;
        case 0x143020u: goto label_143020;
        case 0x143024u: goto label_143024;
        case 0x143028u: goto label_143028;
        case 0x14302cu: goto label_14302c;
        case 0x143030u: goto label_143030;
        case 0x143034u: goto label_143034;
        case 0x143038u: goto label_143038;
        case 0x14303cu: goto label_14303c;
        case 0x143040u: goto label_143040;
        case 0x143044u: goto label_143044;
        case 0x143048u: goto label_143048;
        case 0x14304cu: goto label_14304c;
        case 0x143050u: goto label_143050;
        case 0x143054u: goto label_143054;
        case 0x143058u: goto label_143058;
        case 0x14305cu: goto label_14305c;
        case 0x143060u: goto label_143060;
        case 0x143064u: goto label_143064;
        case 0x143068u: goto label_143068;
        case 0x14306cu: goto label_14306c;
        case 0x143070u: goto label_143070;
        case 0x143074u: goto label_143074;
        case 0x143078u: goto label_143078;
        case 0x14307cu: goto label_14307c;
        case 0x143080u: goto label_143080;
        case 0x143084u: goto label_143084;
        case 0x143088u: goto label_143088;
        case 0x14308cu: goto label_14308c;
        case 0x143090u: goto label_143090;
        case 0x143094u: goto label_143094;
        case 0x143098u: goto label_143098;
        case 0x14309cu: goto label_14309c;
        case 0x1430a0u: goto label_1430a0;
        case 0x1430a4u: goto label_1430a4;
        case 0x1430a8u: goto label_1430a8;
        case 0x1430acu: goto label_1430ac;
        case 0x1430b0u: goto label_1430b0;
        case 0x1430b4u: goto label_1430b4;
        case 0x1430b8u: goto label_1430b8;
        case 0x1430bcu: goto label_1430bc;
        case 0x1430c0u: goto label_1430c0;
        case 0x1430c4u: goto label_1430c4;
        case 0x1430c8u: goto label_1430c8;
        case 0x1430ccu: goto label_1430cc;
        case 0x1430d0u: goto label_1430d0;
        case 0x1430d4u: goto label_1430d4;
        case 0x1430d8u: goto label_1430d8;
        case 0x1430dcu: goto label_1430dc;
        case 0x1430e0u: goto label_1430e0;
        case 0x1430e4u: goto label_1430e4;
        case 0x1430e8u: goto label_1430e8;
        case 0x1430ecu: goto label_1430ec;
        case 0x1430f0u: goto label_1430f0;
        case 0x1430f4u: goto label_1430f4;
        case 0x1430f8u: goto label_1430f8;
        case 0x1430fcu: goto label_1430fc;
        case 0x143100u: goto label_143100;
        case 0x143104u: goto label_143104;
        case 0x143108u: goto label_143108;
        case 0x14310cu: goto label_14310c;
        case 0x143110u: goto label_143110;
        case 0x143114u: goto label_143114;
        case 0x143118u: goto label_143118;
        case 0x14311cu: goto label_14311c;
        case 0x143120u: goto label_143120;
        case 0x143124u: goto label_143124;
        case 0x143128u: goto label_143128;
        case 0x14312cu: goto label_14312c;
        case 0x143130u: goto label_143130;
        case 0x143134u: goto label_143134;
        case 0x143138u: goto label_143138;
        case 0x14313cu: goto label_14313c;
        case 0x143140u: goto label_143140;
        case 0x143144u: goto label_143144;
        case 0x143148u: goto label_143148;
        case 0x14314cu: goto label_14314c;
        case 0x143150u: goto label_143150;
        case 0x143154u: goto label_143154;
        case 0x143158u: goto label_143158;
        case 0x14315cu: goto label_14315c;
        case 0x143160u: goto label_143160;
        case 0x143164u: goto label_143164;
        case 0x143168u: goto label_143168;
        case 0x14316cu: goto label_14316c;
        case 0x143170u: goto label_143170;
        case 0x143174u: goto label_143174;
        case 0x143178u: goto label_143178;
        case 0x14317cu: goto label_14317c;
        case 0x143180u: goto label_143180;
        case 0x143184u: goto label_143184;
        case 0x143188u: goto label_143188;
        case 0x14318cu: goto label_14318c;
        case 0x143190u: goto label_143190;
        case 0x143194u: goto label_143194;
        case 0x143198u: goto label_143198;
        case 0x14319cu: goto label_14319c;
        case 0x1431a0u: goto label_1431a0;
        case 0x1431a4u: goto label_1431a4;
        case 0x1431a8u: goto label_1431a8;
        case 0x1431acu: goto label_1431ac;
        case 0x1431b0u: goto label_1431b0;
        case 0x1431b4u: goto label_1431b4;
        case 0x1431b8u: goto label_1431b8;
        case 0x1431bcu: goto label_1431bc;
        case 0x1431c0u: goto label_1431c0;
        case 0x1431c4u: goto label_1431c4;
        case 0x1431c8u: goto label_1431c8;
        case 0x1431ccu: goto label_1431cc;
        case 0x1431d0u: goto label_1431d0;
        case 0x1431d4u: goto label_1431d4;
        case 0x1431d8u: goto label_1431d8;
        case 0x1431dcu: goto label_1431dc;
        case 0x1431e0u: goto label_1431e0;
        case 0x1431e4u: goto label_1431e4;
        case 0x1431e8u: goto label_1431e8;
        case 0x1431ecu: goto label_1431ec;
        case 0x1431f0u: goto label_1431f0;
        case 0x1431f4u: goto label_1431f4;
        case 0x1431f8u: goto label_1431f8;
        case 0x1431fcu: goto label_1431fc;
        case 0x143200u: goto label_143200;
        case 0x143204u: goto label_143204;
        case 0x143208u: goto label_143208;
        case 0x14320cu: goto label_14320c;
        case 0x143210u: goto label_143210;
        case 0x143214u: goto label_143214;
        case 0x143218u: goto label_143218;
        case 0x14321cu: goto label_14321c;
        case 0x143220u: goto label_143220;
        case 0x143224u: goto label_143224;
        case 0x143228u: goto label_143228;
        case 0x14322cu: goto label_14322c;
        case 0x143230u: goto label_143230;
        case 0x143234u: goto label_143234;
        case 0x143238u: goto label_143238;
        case 0x14323cu: goto label_14323c;
        case 0x143240u: goto label_143240;
        case 0x143244u: goto label_143244;
        case 0x143248u: goto label_143248;
        case 0x14324cu: goto label_14324c;
        case 0x143250u: goto label_143250;
        case 0x143254u: goto label_143254;
        case 0x143258u: goto label_143258;
        case 0x14325cu: goto label_14325c;
        case 0x143260u: goto label_143260;
        case 0x143264u: goto label_143264;
        case 0x143268u: goto label_143268;
        case 0x14326cu: goto label_14326c;
        case 0x143270u: goto label_143270;
        case 0x143274u: goto label_143274;
        case 0x143278u: goto label_143278;
        case 0x14327cu: goto label_14327c;
        case 0x143280u: goto label_143280;
        case 0x143284u: goto label_143284;
        case 0x143288u: goto label_143288;
        case 0x14328cu: goto label_14328c;
        case 0x143290u: goto label_143290;
        case 0x143294u: goto label_143294;
        case 0x143298u: goto label_143298;
        case 0x14329cu: goto label_14329c;
        case 0x1432a0u: goto label_1432a0;
        case 0x1432a4u: goto label_1432a4;
        case 0x1432a8u: goto label_1432a8;
        case 0x1432acu: goto label_1432ac;
        case 0x1432b0u: goto label_1432b0;
        case 0x1432b4u: goto label_1432b4;
        case 0x1432b8u: goto label_1432b8;
        case 0x1432bcu: goto label_1432bc;
        case 0x1432c0u: goto label_1432c0;
        case 0x1432c4u: goto label_1432c4;
        case 0x1432c8u: goto label_1432c8;
        case 0x1432ccu: goto label_1432cc;
        case 0x1432d0u: goto label_1432d0;
        case 0x1432d4u: goto label_1432d4;
        case 0x1432d8u: goto label_1432d8;
        case 0x1432dcu: goto label_1432dc;
        case 0x1432e0u: goto label_1432e0;
        case 0x1432e4u: goto label_1432e4;
        case 0x1432e8u: goto label_1432e8;
        case 0x1432ecu: goto label_1432ec;
        case 0x1432f0u: goto label_1432f0;
        case 0x1432f4u: goto label_1432f4;
        case 0x1432f8u: goto label_1432f8;
        case 0x1432fcu: goto label_1432fc;
        case 0x143300u: goto label_143300;
        case 0x143304u: goto label_143304;
        case 0x143308u: goto label_143308;
        case 0x14330cu: goto label_14330c;
        case 0x143310u: goto label_143310;
        case 0x143314u: goto label_143314;
        case 0x143318u: goto label_143318;
        case 0x14331cu: goto label_14331c;
        case 0x143320u: goto label_143320;
        case 0x143324u: goto label_143324;
        case 0x143328u: goto label_143328;
        case 0x14332cu: goto label_14332c;
        case 0x143330u: goto label_143330;
        case 0x143334u: goto label_143334;
        case 0x143338u: goto label_143338;
        case 0x14333cu: goto label_14333c;
        case 0x143340u: goto label_143340;
        case 0x143344u: goto label_143344;
        case 0x143348u: goto label_143348;
        case 0x14334cu: goto label_14334c;
        case 0x143350u: goto label_143350;
        case 0x143354u: goto label_143354;
        case 0x143358u: goto label_143358;
        case 0x14335cu: goto label_14335c;
        case 0x143360u: goto label_143360;
        case 0x143364u: goto label_143364;
        case 0x143368u: goto label_143368;
        case 0x14336cu: goto label_14336c;
        case 0x143370u: goto label_143370;
        case 0x143374u: goto label_143374;
        case 0x143378u: goto label_143378;
        case 0x14337cu: goto label_14337c;
        case 0x143380u: goto label_143380;
        case 0x143384u: goto label_143384;
        case 0x143388u: goto label_143388;
        case 0x14338cu: goto label_14338c;
        case 0x143390u: goto label_143390;
        case 0x143394u: goto label_143394;
        case 0x143398u: goto label_143398;
        case 0x14339cu: goto label_14339c;
        case 0x1433a0u: goto label_1433a0;
        case 0x1433a4u: goto label_1433a4;
        case 0x1433a8u: goto label_1433a8;
        case 0x1433acu: goto label_1433ac;
        case 0x1433b0u: goto label_1433b0;
        case 0x1433b4u: goto label_1433b4;
        case 0x1433b8u: goto label_1433b8;
        case 0x1433bcu: goto label_1433bc;
        case 0x1433c0u: goto label_1433c0;
        case 0x1433c4u: goto label_1433c4;
        case 0x1433c8u: goto label_1433c8;
        case 0x1433ccu: goto label_1433cc;
        case 0x1433d0u: goto label_1433d0;
        case 0x1433d4u: goto label_1433d4;
        case 0x1433d8u: goto label_1433d8;
        case 0x1433dcu: goto label_1433dc;
        case 0x1433e0u: goto label_1433e0;
        case 0x1433e4u: goto label_1433e4;
        case 0x1433e8u: goto label_1433e8;
        case 0x1433ecu: goto label_1433ec;
        case 0x1433f0u: goto label_1433f0;
        case 0x1433f4u: goto label_1433f4;
        case 0x1433f8u: goto label_1433f8;
        default: break;
    }

    ctx->pc = 0x142a30u;

label_142a30:
    // 0x142a30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x142a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_142a34:
    // 0x142a34: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x142a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_142a38:
    // 0x142a38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x142a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_142a3c:
    // 0x142a3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x142a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_142a40:
    // 0x142a40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x142a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_142a44:
    // 0x142a44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x142a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_142a48:
    // 0x142a48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x142a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_142a4c:
    // 0x142a4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x142a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_142a50:
    // 0x142a50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_142a54:
    // 0x142a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_142a58:
    // 0x142a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_142a5c:
    // 0x142a5c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x142a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_142a60:
    // 0x142a60: 0x2462fe10  addiu       $v0, $v1, -0x1F0
    ctx->pc = 0x142a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
label_142a64:
    // 0x142a64: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x142a64u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_142a68:
    // 0x142a68: 0x92460008  lbu         $a2, 0x8($s2)
    ctx->pc = 0x142a68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_142a6c:
    // 0x142a6c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x142a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_142a70:
    // 0x142a70: 0xa2470008  sb          $a3, 0x8($s2)
    ctx->pc = 0x142a70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 7));
label_142a74:
    // 0x142a74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_142a78:
    // 0x142a78: 0x8c280ae8  lw          $t0, 0xAE8($at)
    ctx->pc = 0x142a78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2792)));
label_142a7c:
    // 0x142a7c: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x142a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
label_142a80:
    // 0x142a80: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x142a80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_142a84:
    // 0x142a84: 0x2522000f  addiu       $v0, $t1, 0xF
    ctx->pc = 0x142a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
label_142a88:
    // 0x142a88: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x142a88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_142a8c:
    // 0x142a8c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x142a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_142a90:
    // 0x142a90: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x142a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_142a94:
    // 0x142a94: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x142a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_142a98:
    // 0x142a98: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x142a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_142a9c:
    // 0x142a9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x142a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142aa0:
    // 0x142aa0: 0xc0764e0  jal         func_1D9380
label_142aa4:
    if (ctx->pc == 0x142AA4u) {
        ctx->pc = 0x142AA8u;
        goto label_142aa8;
    }
    ctx->pc = 0x142AA0u;
    SET_GPR_U32(ctx, 31, 0x142AA8u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x142AA0u, 0x142AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AA8u;
label_142aa8:
    // 0x142aa8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x142aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_142aac:
    // 0x142aac: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x142aacu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20241), (uint8_t)GPR_U32(ctx, 0));
label_142ab0:
    // 0x142ab0: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x142ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_142ab4:
    // 0x142ab4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x142ab4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142ab8:
    // 0x142ab8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x142ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_142abc:
    // 0x142abc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x142abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_142ac0:
    // 0x142ac0: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x142ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_142ac4:
    // 0x142ac4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x142ac4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142ac8:
    // 0x142ac8: 0xc055700  jal         func_155C00
label_142acc:
    if (ctx->pc == 0x142ACCu) {
        ctx->pc = 0x142AD0u;
        goto label_142ad0;
    }
    ctx->pc = 0x142AC8u;
    SET_GPR_U32(ctx, 31, 0x142AD0u);
    ctx->pc = 0x155C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155C00u, 0x142AC8u, 0x142AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AD0u;
label_142ad0:
    // 0x142ad0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x142ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_142ad4:
    // 0x142ad4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x142ad4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_142ad8:
    // 0x142ad8: 0xc06750c  jal         func_19D430
label_142adc:
    if (ctx->pc == 0x142ADCu) {
        ctx->pc = 0x142AE0u;
        goto label_142ae0;
    }
    ctx->pc = 0x142AD8u;
    SET_GPR_U32(ctx, 31, 0x142AE0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x142AD8u, 0x142AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AE0u;
label_142ae0:
    // 0x142ae0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142ae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142ae4:
    // 0x142ae4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x142ae4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142ae8:
    // 0x142ae8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x142ae8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142aec:
    // 0x142aec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x142aecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142af0:
    // 0x142af0: 0xc0590ec  jal         func_1643B0
label_142af4:
    if (ctx->pc == 0x142AF4u) {
        ctx->pc = 0x142AF8u;
        goto label_142af8;
    }
    ctx->pc = 0x142AF0u;
    SET_GPR_U32(ctx, 31, 0x142AF8u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x142AF0u, 0x142AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AF8u;
label_142af8:
    // 0x142af8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142af8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142afc:
    // 0x142afc: 0xc0674b0  jal         func_19D2C0
label_142b00:
    if (ctx->pc == 0x142B00u) {
        ctx->pc = 0x142B04u;
        goto label_142b04;
    }
    ctx->pc = 0x142AFCu;
    SET_GPR_U32(ctx, 31, 0x142B04u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x142AFCu, 0x142B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B04u;
label_142b04:
    // 0x142b04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x142b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_142b08:
    // 0x142b08: 0xc0674b0  jal         func_19D2C0
label_142b0c:
    if (ctx->pc == 0x142B0Cu) {
        ctx->pc = 0x142B10u;
        goto label_142b10;
    }
    ctx->pc = 0x142B08u;
    SET_GPR_U32(ctx, 31, 0x142B10u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x142B08u, 0x142B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B10u;
label_142b10:
    // 0x142b10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x142b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_142b14:
    // 0x142b14: 0x24509168  addiu       $s0, $v0, -0x6E98
    ctx->pc = 0x142b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938984));
label_142b18:
    // 0x142b18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_142b1c:
    // 0x142b1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x142b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_142b20:
    // 0x142b20: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x142b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_142b24:
    // 0x142b24: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x142b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_142b28:
    // 0x142b28: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x142b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_142b2c:
    // 0x142b2c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x142b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_142b30:
    // 0x142b30: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x142b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_142b34:
    // 0x142b34: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x142b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_142b38:
    // 0x142b38: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x142b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_142b3c:
    // 0x142b3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_142b40:
    // 0x142b40: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x142b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
label_142b44:
    // 0x142b44: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x142b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_142b48:
    // 0x142b48: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x142b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_142b4c:
    // 0x142b4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_142b50:
    // 0x142b50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x142b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_142b54:
    // 0x142b54: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x142b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_142b58:
    // 0x142b58: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x142b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_142b5c:
    // 0x142b5c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x142b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
label_142b60:
    // 0x142b60: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x142b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_142b64:
    // 0x142b64: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x142b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_142b68:
    // 0x142b68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_142b6c:
    // 0x142b6c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x142b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_142b70:
    // 0x142b70: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x142b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_142b74:
    // 0x142b74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_142b78:
    // 0x142b78: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_142b7c:
    // 0x142b7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x142b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_142b80:
    // 0x142b80: 0x3c030e00  lui         $v1, 0xE00
    ctx->pc = 0x142b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3584 << 16));
label_142b84:
    // 0x142b84: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x142b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_142b88:
    // 0x142b88: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x142b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_142b8c:
    // 0x142b8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_142b90:
    // 0x142b90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x142b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_142b94:
    // 0x142b94: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x142b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_142b98:
    // 0x142b98: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x142b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_142b9c:
    // 0x142b9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_142ba0:
    // 0x142ba0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x142ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_142ba4:
    // 0x142ba4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_142ba8:
    if (ctx->pc == 0x142BA8u) {
        ctx->pc = 0x142BACu;
        goto label_142bac;
    }
    ctx->pc = 0x142BA4u;
    {
        const bool branch_taken_0x142ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ba4) {
            ctx->pc = 0x142BC0u;
            goto label_142bc0;
        }
    }
    ctx->pc = 0x142BACu;
label_142bac:
    // 0x142bac: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x142bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_142bb0:
    // 0x142bb0: 0x2462ec58  addiu       $v0, $v1, -0x13A8
    ctx->pc = 0x142bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
label_142bb4:
    // 0x142bb4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x142bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_142bb8:
    // 0x142bb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_142bbc:
    if (ctx->pc == 0x142BBCu) {
        ctx->pc = 0x142BC0u;
        goto label_142bc0;
    }
    ctx->pc = 0x142BB8u;
    {
        const bool branch_taken_0x142bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142bb8) {
            ctx->pc = 0x142BCCu;
            goto label_142bcc;
        }
    }
    ctx->pc = 0x142BC0u;
label_142bc0:
    // 0x142bc0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x142bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_142bc4:
    // 0x142bc4: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x142bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
label_142bc8:
    // 0x142bc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x142bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_142bcc:
    // 0x142bcc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_142bd0:
    // 0x142bd0: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_142bd4:
    // 0x142bd4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x142bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_142bd8:
    // 0x142bd8: 0xc05dbd8  jal         func_176F60
label_142bdc:
    if (ctx->pc == 0x142BDCu) {
        ctx->pc = 0x142BE0u;
        goto label_142be0;
    }
    ctx->pc = 0x142BD8u;
    SET_GPR_U32(ctx, 31, 0x142BE0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x142BD8u, 0x142BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BE0u;
label_142be0:
    // 0x142be0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x142be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_142be4:
    // 0x142be4: 0x245190e0  addiu       $s1, $v0, -0x6F20
    ctx->pc = 0x142be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
label_142be8:
    // 0x142be8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_142bec:
    // 0x142bec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x142becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_142bf0:
    // 0x142bf0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x142bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_142bf4:
    // 0x142bf4: 0x34821043  ori         $v0, $a0, 0x1043
    ctx->pc = 0x142bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4163);
label_142bf8:
    // 0x142bf8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x142bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_142bfc:
    // 0x142bfc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x142bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_142c00:
    // 0x142c00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_142c04:
    // 0x142c04: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x142c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_142c08:
    // 0x142c08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142c0c:
    // 0x142c0c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x142c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_142c10:
    // 0x142c10: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_142c14:
    // 0x142c14: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_142c18:
    // 0x142c18: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x142c18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_142c1c:
    // 0x142c1c: 0xc05dbd8  jal         func_176F60
label_142c20:
    if (ctx->pc == 0x142C20u) {
        ctx->pc = 0x142C24u;
        goto label_142c24;
    }
    ctx->pc = 0x142C1Cu;
    SET_GPR_U32(ctx, 31, 0x142C24u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x142C1Cu, 0x142C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C24u;
label_142c24:
    // 0x142c24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142c28:
    // 0x142c28: 0xc06750c  jal         func_19D430
label_142c2c:
    if (ctx->pc == 0x142C2Cu) {
        ctx->pc = 0x142C30u;
        goto label_142c30;
    }
    ctx->pc = 0x142C28u;
    SET_GPR_U32(ctx, 31, 0x142C30u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x142C28u, 0x142C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C30u;
label_142c30:
    // 0x142c30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_142c34:
    // 0x142c34: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x142c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_142c38:
    // 0x142c38: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_142c3c:
    if (ctx->pc == 0x142C3Cu) {
        ctx->pc = 0x142C40u;
        goto label_142c40;
    }
    ctx->pc = 0x142C38u;
    {
        const bool branch_taken_0x142c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c38) {
            ctx->pc = 0x142C54u;
            goto label_142c54;
        }
    }
    ctx->pc = 0x142C40u;
label_142c40:
    // 0x142c40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_142c44:
    // 0x142c44: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x142c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
label_142c48:
    // 0x142c48: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x142c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_142c4c:
    // 0x142c4c: 0x10000004  b           . + 4 + (0x4 << 2)
label_142c50:
    if (ctx->pc == 0x142C50u) {
        ctx->pc = 0x142C54u;
        goto label_142c54;
    }
    ctx->pc = 0x142C4Cu;
    {
        const bool branch_taken_0x142c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c4c) {
            ctx->pc = 0x142C60u;
            goto label_142c60;
        }
    }
    ctx->pc = 0x142C54u;
label_142c54:
    // 0x142c54: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x142c54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
label_142c58:
    // 0x142c58: 0x2622ec80  addiu       $v0, $s1, -0x1380
    ctx->pc = 0x142c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962304));
label_142c5c:
    // 0x142c5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x142c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_142c60:
    // 0x142c60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x142c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_142c64:
    // 0x142c64: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x142c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_142c68:
    // 0x142c68: 0x30453fff  andi        $a1, $v0, 0x3FFF
    ctx->pc = 0x142c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_142c6c:
    // 0x142c6c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x142c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_142c70:
    // 0x142c70: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x142c70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_142c74:
    // 0x142c74: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x142c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
label_142c78:
    // 0x142c78: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x142c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
label_142c7c:
    // 0x142c7c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x142c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_142c80:
    // 0x142c80: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x142c80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_142c84:
    // 0x142c84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x142c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_142c88:
    // 0x142c88: 0x9442001a  lhu         $v0, 0x1A($v0)
    ctx->pc = 0x142c88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
label_142c8c:
    // 0x142c8c: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x142c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
label_142c90:
    // 0x142c90: 0x23ebe  dsrl32      $a3, $v0, 26
    ctx->pc = 0x142c90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 26));
label_142c94:
    // 0x142c94: 0x24041b00  addiu       $a0, $zero, 0x1B00
    ctx->pc = 0x142c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
label_142c98:
    // 0x142c98: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x142c98u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142c9c:
    // 0x142c9c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x142c9cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142ca0:
    // 0x142ca0: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x142ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_142ca4:
    // 0x142ca4: 0x240b00e0  addiu       $t3, $zero, 0xE0
    ctx->pc = 0x142ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_142ca8:
    // 0x142ca8: 0xc05e7d8  jal         func_179F60
label_142cac:
    if (ctx->pc == 0x142CACu) {
        ctx->pc = 0x142CB0u;
        goto label_142cb0;
    }
    ctx->pc = 0x142CA8u;
    SET_GPR_U32(ctx, 31, 0x142CB0u);
    ctx->pc = 0x179F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179F60u, 0x142CA8u, 0x142CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CB0u;
label_142cb0:
    // 0x142cb0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x142cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_142cb4:
    // 0x142cb4: 0x2477ccf0  addiu       $s7, $v1, -0x3310
    ctx->pc = 0x142cb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954224));
label_142cb8:
    // 0x142cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142cbc:
    // 0x142cbc: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x142cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
label_142cc0:
    // 0x142cc0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x142cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_142cc4:
    // 0x142cc4: 0xa2e20001  sb          $v0, 0x1($s7)
    ctx->pc = 0x142cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 2));
label_142cc8:
    // 0x142cc8: 0xa2e00002  sb          $zero, 0x2($s7)
    ctx->pc = 0x142cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 0));
label_142ccc:
    // 0x142ccc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x142cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_142cd0:
    // 0x142cd0: 0xa6e30004  sh          $v1, 0x4($s7)
    ctx->pc = 0x142cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 3));
label_142cd4:
    // 0x142cd4: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x142cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_142cd8:
    // 0x142cd8: 0xa6e20006  sh          $v0, 0x6($s7)
    ctx->pc = 0x142cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 2));
label_142cdc:
    // 0x142cdc: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x142cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
label_142ce0:
    // 0x142ce0: 0x24031b00  addiu       $v1, $zero, 0x1B00
    ctx->pc = 0x142ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
label_142ce4:
    // 0x142ce4: 0x96e20018  lhu         $v0, 0x18($s7)
    ctx->pc = 0x142ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 24)));
label_142ce8:
    // 0x142ce8: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x142ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_142cec:
    // 0x142cec: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x142cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_142cf0:
    // 0x142cf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142cf4:
    // 0x142cf4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x142cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_142cf8:
    // 0x142cf8: 0xa6e20018  sh          $v0, 0x18($s7)
    ctx->pc = 0x142cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 24), (uint16_t)GPR_U32(ctx, 2));
label_142cfc:
    // 0x142cfc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x142cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_142d00:
    // 0x142d00: 0xdee50018  ld          $a1, 0x18($s7)
    ctx->pc = 0x142d00u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 23), 24)));
label_142d04:
    // 0x142d04: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x142d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_142d08:
    // 0x142d08: 0x223b8  dsll        $a0, $v0, 14
    ctx->pc = 0x142d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 14);
label_142d0c:
    // 0x142d0c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x142d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_142d10:
    // 0x142d10: 0x34623fff  ori         $v0, $v1, 0x3FFF
    ctx->pc = 0x142d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
label_142d14:
    // 0x142d14: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x142d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_142d18:
    // 0x142d18: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x142d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_142d1c:
    // 0x142d1c: 0xfee20018  sd          $v0, 0x18($s7)
    ctx->pc = 0x142d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 24), GPR_U64(ctx, 2));
label_142d20:
    // 0x142d20: 0x96e5001a  lhu         $a1, 0x1A($s7)
    ctx->pc = 0x142d20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 26)));
label_142d24:
    // 0x142d24: 0x3002003f  andi        $v0, $zero, 0x3F
    ctx->pc = 0x142d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
label_142d28:
    // 0x142d28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x142d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_142d2c:
    // 0x142d2c: 0x2404fc0f  addiu       $a0, $zero, -0x3F1
    ctx->pc = 0x142d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
label_142d30:
    // 0x142d30: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x142d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_142d34:
    // 0x142d34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142d38:
    // 0x142d38: 0xa6e2001a  sh          $v0, 0x1A($s7)
    ctx->pc = 0x142d38u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 26), (uint16_t)GPR_U32(ctx, 2));
label_142d3c:
    // 0x142d3c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x142d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_142d40:
    // 0x142d40: 0x92f0001b  lbu         $s0, 0x1B($s7)
    ctx->pc = 0x142d40u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 27)));
label_142d44:
    // 0x142d44: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x142d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_142d48:
    // 0x142d48: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x142d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_142d4c:
    // 0x142d4c: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x142d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
label_142d50:
    // 0x142d50: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x142d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_142d54:
    // 0x142d54: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x142d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_142d58:
    // 0x142d58: 0xa2e2001b  sb          $v0, 0x1B($s7)
    ctx->pc = 0x142d58u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 27), (uint8_t)GPR_U32(ctx, 2));
label_142d5c:
    // 0x142d5c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x142d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_142d60:
    // 0x142d60: 0xdee30018  ld          $v1, 0x18($s7)
    ctx->pc = 0x142d60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 23), 24)));
label_142d64:
    // 0x142d64: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x142d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_142d68:
    // 0x142d68: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x142d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_142d6c:
    // 0x142d6c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x142d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_142d70:
    // 0x142d70: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x142d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_142d74:
    // 0x142d74: 0x3c043fff  lui         $a0, 0x3FFF
    ctx->pc = 0x142d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16383 << 16));
label_142d78:
    // 0x142d78: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x142d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_142d7c:
    // 0x142d7c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x142d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_142d80:
    // 0x142d80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x142d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_142d84:
    // 0x142d84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x142d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_142d88:
    // 0x142d88: 0xfee20018  sd          $v0, 0x18($s7)
    ctx->pc = 0x142d88u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 24), GPR_U64(ctx, 2));
label_142d8c:
    // 0x142d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142d90:
    // 0x142d90: 0x92e4001c  lbu         $a0, 0x1C($s7)
    ctx->pc = 0x142d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 28)));
label_142d94:
    // 0x142d94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x142d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_142d98:
    // 0x142d98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x142d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_142d9c:
    // 0x142d9c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x142d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_142da0:
    // 0x142da0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x142da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_142da4:
    // 0x142da4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142da8:
    // 0x142da8: 0xa2e2001c  sb          $v0, 0x1C($s7)
    ctx->pc = 0x142da8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 28), (uint8_t)GPR_U32(ctx, 2));
label_142dac:
    // 0x142dac: 0x92e4001c  lbu         $a0, 0x1C($s7)
    ctx->pc = 0x142dacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 28)));
label_142db0:
    // 0x142db0: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x142db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_142db4:
    // 0x142db4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x142db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_142db8:
    // 0x142db8: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x142db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_142dbc:
    // 0x142dbc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x142dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_142dc0:
    // 0x142dc0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x142dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_142dc4:
    // 0x142dc4: 0xa2e2001c  sb          $v0, 0x1C($s7)
    ctx->pc = 0x142dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 28), (uint8_t)GPR_U32(ctx, 2));
label_142dc8:
    // 0x142dc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142dcc:
    // 0x142dcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x142dccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142dd0:
    // 0x142dd0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x142dd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142dd4:
    // 0x142dd4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x142dd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142dd8:
    // 0x142dd8: 0xc0590ec  jal         func_1643B0
label_142ddc:
    if (ctx->pc == 0x142DDCu) {
        ctx->pc = 0x142DE0u;
        goto label_142de0;
    }
    ctx->pc = 0x142DD8u;
    SET_GPR_U32(ctx, 31, 0x142DE0u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x142DD8u, 0x142DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DE0u;
label_142de0:
    // 0x142de0: 0x10000005  b           . + 4 + (0x5 << 2)
label_142de4:
    if (ctx->pc == 0x142DE4u) {
        ctx->pc = 0x142DE8u;
        goto label_142de8;
    }
    ctx->pc = 0x142DE0u;
    {
        const bool branch_taken_0x142de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142de0) {
            ctx->pc = 0x142DF8u;
            goto label_142df8;
        }
    }
    ctx->pc = 0x142DE8u;
label_142de8:
    // 0x142de8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142dec:
    // 0x142dec: 0xc06750c  jal         func_19D430
label_142df0:
    if (ctx->pc == 0x142DF0u) {
        ctx->pc = 0x142DF4u;
        goto label_142df4;
    }
    ctx->pc = 0x142DECu;
    SET_GPR_U32(ctx, 31, 0x142DF4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x142DECu, 0x142DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DF4u;
label_142df4:
    // 0x142df4: 0x0  nop
    ctx->pc = 0x142df4u;
    // NOP
label_142df8:
    // 0x142df8: 0xc0762d8  jal         func_1D8B60
label_142dfc:
    if (ctx->pc == 0x142DFCu) {
        ctx->pc = 0x142E00u;
        goto label_142e00;
    }
    ctx->pc = 0x142DF8u;
    SET_GPR_U32(ctx, 31, 0x142E00u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x142DF8u, 0x142E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E00u;
label_142e00:
    // 0x142e00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_142e04:
    if (ctx->pc == 0x142E04u) {
        ctx->pc = 0x142E08u;
        goto label_142e08;
    }
    ctx->pc = 0x142E00u;
    {
        const bool branch_taken_0x142e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142e00) {
            ctx->pc = 0x142DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142de8;
        }
    }
    ctx->pc = 0x142E08u;
label_142e08:
    // 0x142e08: 0xc076530  jal         func_1D94C0
label_142e0c:
    if (ctx->pc == 0x142E0Cu) {
        ctx->pc = 0x142E10u;
        goto label_142e10;
    }
    ctx->pc = 0x142E08u;
    SET_GPR_U32(ctx, 31, 0x142E10u);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x142E08u, 0x142E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E10u;
label_142e10:
    // 0x142e10: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x142e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_142e14:
    // 0x142e14: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x142e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_142e18:
    // 0x142e18: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x142e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_142e1c:
    // 0x142e1c: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x142e1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_142e20:
    // 0x142e20: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x142e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_142e24:
    // 0x142e24: 0xc05e990  jal         func_17A640
label_142e28:
    if (ctx->pc == 0x142E28u) {
        ctx->pc = 0x142E2Cu;
        goto label_142e2c;
    }
    ctx->pc = 0x142E24u;
    SET_GPR_U32(ctx, 31, 0x142E2Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x142E24u, 0x142E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E2Cu;
label_142e2c:
    // 0x142e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142e30:
    // 0x142e30: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x142e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_142e34:
    // 0x142e34: 0x24063b00  addiu       $a2, $zero, 0x3B00
    ctx->pc = 0x142e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
label_142e38:
    // 0x142e38: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x142e38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_142e3c:
    // 0x142e3c: 0xc05e2e0  jal         func_178B80
label_142e40:
    if (ctx->pc == 0x142E40u) {
        ctx->pc = 0x142E44u;
        goto label_142e44;
    }
    ctx->pc = 0x142E3Cu;
    SET_GPR_U32(ctx, 31, 0x142E44u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x142E3Cu, 0x142E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E44u;
label_142e44:
    // 0x142e44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x142e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_142e48:
    // 0x142e48: 0xae420248  sw          $v0, 0x248($s2)
    ctx->pc = 0x142e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 584), GPR_U32(ctx, 2));
label_142e4c:
    // 0x142e4c: 0x27c3000f  addiu       $v1, $fp, 0xF
    ctx->pc = 0x142e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 15));
label_142e50:
    // 0x142e50: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x142e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_142e54:
    // 0x142e54: 0x62f024  and         $fp, $v1, $v0
    ctx->pc = 0x142e54u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_142e58:
    // 0x142e58: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x142e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_142e5c:
    // 0x142e5c: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x142e5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
label_142e60:
    // 0x142e60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x142e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142e64:
    // 0x142e64: 0xc0764e0  jal         func_1D9380
label_142e68:
    if (ctx->pc == 0x142E68u) {
        ctx->pc = 0x142E6Cu;
        goto label_142e6c;
    }
    ctx->pc = 0x142E64u;
    SET_GPR_U32(ctx, 31, 0x142E6Cu);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x142E64u, 0x142E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E6Cu;
label_142e6c:
    // 0x142e6c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_142e70:
    // 0x142e70: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x142e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_142e74:
    // 0x142e74: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x142e74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_142e78:
    // 0x142e78: 0x102000a7  beqz        $at, . + 4 + (0xA7 << 2)
label_142e7c:
    if (ctx->pc == 0x142E7Cu) {
        ctx->pc = 0x142E80u;
        goto label_142e80;
    }
    ctx->pc = 0x142E78u;
    {
        const bool branch_taken_0x142e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142e78) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142E80u;
label_142e80:
    // 0x142e80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x142e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_142e84:
    // 0x142e84: 0x2443e690  addiu       $v1, $v0, -0x1970
    ctx->pc = 0x142e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960784));
label_142e88:
    // 0x142e88: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x142e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_142e8c:
    // 0x142e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_142e90:
    // 0x142e90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_142e94:
    // 0x142e94: 0x400008  jr          $v0
label_142e98:
    if (ctx->pc == 0x142E98u) {
        ctx->pc = 0x142E9Cu;
        goto label_142e9c;
    }
    ctx->pc = 0x142E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142E94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x142E9Cu;
label_142e9c:
    // 0x142e9c: 0x0  nop
    ctx->pc = 0x142e9cu;
    // NOP
label_142ea0:
    // 0x142ea0: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x142ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_142ea4:
    // 0x142ea4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x142ea4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142ea8:
    // 0x142ea8: 0x24140078  addiu       $s4, $zero, 0x78
    ctx->pc = 0x142ea8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_142eac:
    // 0x142eac: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_142eb0:
    // 0x142eb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_142eb4:
    // 0x142eb4: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_142eb8:
    // 0x142eb8: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x142eb8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_142ebc:
    // 0x142ebc: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x142ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_142ec0:
    // 0x142ec0: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
label_142ec4:
    if (ctx->pc == 0x142EC4u) {
        ctx->pc = 0x142EC8u;
        goto label_142ec8;
    }
    ctx->pc = 0x142EC0u;
    {
        const bool branch_taken_0x142ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142ec0) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142EC8u;
label_142ec8:
    // 0x142ec8: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x142ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_142ecc:
    // 0x142ecc: 0x36b50002  ori         $s5, $s5, 0x2
    ctx->pc = 0x142eccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
label_142ed0:
    // 0x142ed0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x142ed0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142ed4:
    // 0x142ed4: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_142ed8:
    // 0x142ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_142edc:
    // 0x142edc: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142edcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_142ee0:
    // 0x142ee0: 0x1000008d  b           . + 4 + (0x8D << 2)
label_142ee4:
    if (ctx->pc == 0x142EE4u) {
        ctx->pc = 0x142EE8u;
        goto label_142ee8;
    }
    ctx->pc = 0x142EE0u;
    {
        const bool branch_taken_0x142ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ee0) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142EE8u;
label_142ee8:
    // 0x142ee8: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x142ee8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_142eec:
    // 0x142eec: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x142eecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_142ef0:
    // 0x142ef0: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x142ef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_142ef4:
    // 0x142ef4: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
label_142ef8:
    if (ctx->pc == 0x142EF8u) {
        ctx->pc = 0x142EFCu;
        goto label_142efc;
    }
    ctx->pc = 0x142EF4u;
    {
        const bool branch_taken_0x142ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142ef4) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142EFCu;
label_142efc:
    // 0x142efc: 0x2414012c  addiu       $s4, $zero, 0x12C
    ctx->pc = 0x142efcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_142f00:
    // 0x142f00: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x142f00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_142f04:
    // 0x142f04: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_142f08:
    // 0x142f08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_142f0c:
    // 0x142f0c: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_142f10:
    // 0x142f10: 0x10000081  b           . + 4 + (0x81 << 2)
label_142f14:
    if (ctx->pc == 0x142F14u) {
        ctx->pc = 0x142F18u;
        goto label_142f18;
    }
    ctx->pc = 0x142F10u;
    {
        const bool branch_taken_0x142f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f10) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142F18u;
label_142f18:
    // 0x142f18: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x142f18u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_142f1c:
    // 0x142f1c: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x142f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_142f20:
    // 0x142f20: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
label_142f24:
    if (ctx->pc == 0x142F24u) {
        ctx->pc = 0x142F28u;
        goto label_142f28;
    }
    ctx->pc = 0x142F20u;
    {
        const bool branch_taken_0x142f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142f20) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142F28u;
label_142f28:
    // 0x142f28: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x142f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_142f2c:
    // 0x142f2c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_142f30:
    // 0x142f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_142f34:
    // 0x142f34: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142f34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_142f38:
    // 0x142f38: 0x10000077  b           . + 4 + (0x77 << 2)
label_142f3c:
    if (ctx->pc == 0x142F3Cu) {
        ctx->pc = 0x142F40u;
        goto label_142f40;
    }
    ctx->pc = 0x142F38u;
    {
        const bool branch_taken_0x142f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f38) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142F40u;
label_142f40:
    // 0x142f40: 0x2673fffe  addiu       $s3, $s3, -0x2
    ctx->pc = 0x142f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_142f44:
    // 0x142f44: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x142f44u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_142f48:
    // 0x142f48: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x142f48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_142f4c:
    // 0x142f4c: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_142f50:
    if (ctx->pc == 0x142F50u) {
        ctx->pc = 0x142F54u;
        goto label_142f54;
    }
    ctx->pc = 0x142F4Cu;
    {
        const bool branch_taken_0x142f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142f4c) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142F54u;
label_142f54:
    // 0x142f54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_142f58:
    // 0x142f58: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x142f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_142f5c:
    // 0x142f5c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x142f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
label_142f60:
    // 0x142f60: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x142f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
label_142f64:
    // 0x142f64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_142f68:
    // 0x142f68: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x142f68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_142f6c:
    // 0x142f6c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x142f6cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142f70:
    // 0x142f70: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_142f74:
    // 0x142f74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_142f78:
    // 0x142f78: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142f78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_142f7c:
    // 0x142f7c: 0x10000066  b           . + 4 + (0x66 << 2)
label_142f80:
    if (ctx->pc == 0x142F80u) {
        ctx->pc = 0x142F84u;
        goto label_142f84;
    }
    ctx->pc = 0x142F7Cu;
    {
        const bool branch_taken_0x142f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f7c) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142F84u;
label_142f84:
    // 0x142f84: 0xc0762d8  jal         func_1D8B60
label_142f88:
    if (ctx->pc == 0x142F88u) {
        ctx->pc = 0x142F8Cu;
        goto label_142f8c;
    }
    ctx->pc = 0x142F84u;
    SET_GPR_U32(ctx, 31, 0x142F8Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x142F84u, 0x142F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F8Cu;
label_142f8c:
    // 0x142f8c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_142f90:
    if (ctx->pc == 0x142F90u) {
        ctx->pc = 0x142F94u;
        goto label_142f94;
    }
    ctx->pc = 0x142F8Cu;
    {
        const bool branch_taken_0x142f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142f8c) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x142F94u;
label_142f94:
    // 0x142f94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142f98:
    // 0x142f98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x142f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_142f9c:
    // 0x142f9c: 0xc067de8  jal         func_19F7A0
label_142fa0:
    if (ctx->pc == 0x142FA0u) {
        ctx->pc = 0x142FA4u;
        goto label_142fa4;
    }
    ctx->pc = 0x142F9Cu;
    SET_GPR_U32(ctx, 31, 0x142FA4u);
    ctx->pc = 0x19F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F7A0u, 0x142F9Cu, 0x142FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FA4u;
label_142fa4:
    // 0x142fa4: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_142fa8:
    // 0x142fa8: 0xc05e990  jal         func_17A640
label_142fac:
    if (ctx->pc == 0x142FACu) {
        ctx->pc = 0x142FB0u;
        goto label_142fb0;
    }
    ctx->pc = 0x142FA8u;
    SET_GPR_U32(ctx, 31, 0x142FB0u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x142FA8u, 0x142FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FB0u;
label_142fb0:
    // 0x142fb0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142fb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_142fb4:
    // 0x142fb4: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x142fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
label_142fb8:
    // 0x142fb8: 0x24063600  addiu       $a2, $zero, 0x3600
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13824));
label_142fbc:
    // 0x142fbc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x142fbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_142fc0:
    // 0x142fc0: 0xc05e2e0  jal         func_178B80
label_142fc4:
    if (ctx->pc == 0x142FC4u) {
        ctx->pc = 0x142FC8u;
        goto label_142fc8;
    }
    ctx->pc = 0x142FC0u;
    SET_GPR_U32(ctx, 31, 0x142FC8u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x142FC0u, 0x142FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FC8u;
label_142fc8:
    // 0x142fc8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_142fcc:
    // 0x142fcc: 0x9024ccbc  lbu         $a0, -0x3344($at)
    ctx->pc = 0x142fccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954172)));
label_142fd0:
    // 0x142fd0: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x142fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_142fd4:
    // 0x142fd4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x142fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_142fd8:
    // 0x142fd8: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x142fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_142fdc:
    // 0x142fdc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x142fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_142fe0:
    // 0x142fe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_142fe4:
    // 0x142fe4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_142fe8:
    // 0x142fe8: 0xa022ccbc  sb          $v0, -0x3344($at)
    ctx->pc = 0x142fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954172), (uint8_t)GPR_U32(ctx, 2));
label_142fec:
    // 0x142fec: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x142fecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_142ff0:
    // 0x142ff0: 0xae400250  sw          $zero, 0x250($s2)
    ctx->pc = 0x142ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
label_142ff4:
    // 0x142ff4: 0x24140924  addiu       $s4, $zero, 0x924
    ctx->pc = 0x142ff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
label_142ff8:
    // 0x142ff8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_142ffc:
    // 0x142ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_143000:
    // 0x143000: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x143000u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_143004:
    // 0x143004: 0x10000044  b           . + 4 + (0x44 << 2)
label_143008:
    if (ctx->pc == 0x143008u) {
        ctx->pc = 0x14300Cu;
        goto label_14300c;
    }
    ctx->pc = 0x143004u;
    {
        const bool branch_taken_0x143004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143004) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x14300Cu;
label_14300c:
    // 0x14300c: 0x2e610080  sltiu       $at, $s3, 0x80
    ctx->pc = 0x14300cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_143010:
    // 0x143010: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_143014:
    if (ctx->pc == 0x143014u) {
        ctx->pc = 0x143018u;
        goto label_143018;
    }
    ctx->pc = 0x143010u;
    {
        const bool branch_taken_0x143010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143010) {
            ctx->pc = 0x143020u;
            goto label_143020;
        }
    }
    ctx->pc = 0x143018u;
label_143018:
    // 0x143018: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x143018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14301c:
    // 0x14301c: 0x0  nop
    ctx->pc = 0x14301cu;
    // NOP
label_143020:
    // 0x143020: 0x72801e28  paddub      $v1, $s4, $zero
    ctx->pc = 0x143020u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_143024:
    // 0x143024: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x143024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_143028:
    // 0x143028: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x143028u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14302c:
    // 0x14302c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_143030:
    if (ctx->pc == 0x143030u) {
        ctx->pc = 0x143034u;
        goto label_143034;
    }
    ctx->pc = 0x14302Cu;
    {
        const bool branch_taken_0x14302c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14302c) {
            ctx->pc = 0x143068u;
            goto label_143068;
        }
    }
    ctx->pc = 0x143034u;
label_143034:
    // 0x143034: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x143034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_143038:
    // 0x143038: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x143038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14303c:
    // 0x14303c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14303cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_143040:
    // 0x143040: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_143044:
    // 0x143044: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x143044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_143048:
    // 0x143048: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x143048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
label_14304c:
    // 0x14304c: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x14304cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_143050:
    // 0x143050: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x143050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_143054:
    // 0x143054: 0xc059190  jal         func_164640
label_143058:
    if (ctx->pc == 0x143058u) {
        ctx->pc = 0x14305Cu;
        goto label_14305c;
    }
    ctx->pc = 0x143054u;
    SET_GPR_U32(ctx, 31, 0x14305Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x143054u, 0x14305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14305Cu;
label_14305c:
    // 0x14305c: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x14305cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_143060:
    // 0x143060: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x143060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_143064:
    // 0x143064: 0xa2440008  sb          $a0, 0x8($s2)
    ctx->pc = 0x143064u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 4));
label_143068:
    // 0x143068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14306c:
    // 0x14306c: 0x94260084  lhu         $a2, 0x84($at)
    ctx->pc = 0x14306cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 132)));
label_143070:
    // 0x143070: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x143070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_143074:
    // 0x143074: 0x30440800  andi        $a0, $v0, 0x800
    ctx->pc = 0x143074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_143078:
    // 0x143078: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_14307c:
    if (ctx->pc == 0x14307Cu) {
        ctx->pc = 0x143080u;
        goto label_143080;
    }
    ctx->pc = 0x143078u;
    {
        const bool branch_taken_0x143078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143078) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x143080u;
label_143080:
    // 0x143080: 0x240601e0  addiu       $a2, $zero, 0x1E0
    ctx->pc = 0x143080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_143084:
    // 0x143084: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x143084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_143088:
    // 0x143088: 0xc067e5c  jal         func_19F970
label_14308c:
    if (ctx->pc == 0x14308Cu) {
        ctx->pc = 0x143090u;
        goto label_143090;
    }
    ctx->pc = 0x143088u;
    SET_GPR_U32(ctx, 31, 0x143090u);
    ctx->pc = 0x19F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F970u, 0x143088u, 0x143090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143090u;
label_143090:
    // 0x143090: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x143090u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_143094:
    // 0x143094: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x143094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_143098:
    // 0x143098: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x143098u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14309c:
    // 0x14309c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14309cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1430a0:
    // 0x1430a0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x1430a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1430a4:
    // 0x1430a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1430a8:
    // 0x1430a8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1430a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1430ac:
    // 0x1430ac: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1430acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_1430b0:
    // 0x1430b0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1430b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
label_1430b4:
    // 0x1430b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1430b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1430b8:
    // 0x1430b8: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x1430b8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1430bc:
    // 0x1430bc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1430bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1430c0:
    // 0x1430c0: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x1430c0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1430c4:
    // 0x1430c4: 0xc059190  jal         func_164640
label_1430c8:
    if (ctx->pc == 0x1430C8u) {
        ctx->pc = 0x1430CCu;
        goto label_1430cc;
    }
    ctx->pc = 0x1430C4u;
    SET_GPR_U32(ctx, 31, 0x1430CCu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1430C4u, 0x1430CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430CCu;
label_1430cc:
    // 0x1430cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1430ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1430d0:
    // 0x1430d0: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1430d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_1430d4:
    // 0x1430d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1430d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1430d8:
    // 0x1430d8: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x1430d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_1430dc:
    // 0x1430dc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1430e0:
    if (ctx->pc == 0x1430E0u) {
        ctx->pc = 0x1430E4u;
        goto label_1430e4;
    }
    ctx->pc = 0x1430DCu;
    {
        const bool branch_taken_0x1430dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1430dc) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x1430E4u;
label_1430e4:
    // 0x1430e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1430e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1430e8:
    // 0x1430e8: 0xc0592ec  jal         func_164BB0
label_1430ec:
    if (ctx->pc == 0x1430ECu) {
        ctx->pc = 0x1430F0u;
        goto label_1430f0;
    }
    ctx->pc = 0x1430E8u;
    SET_GPR_U32(ctx, 31, 0x1430F0u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1430E8u, 0x1430F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430F0u;
label_1430f0:
    // 0x1430f0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1430f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1430f4:
    // 0x1430f4: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x1430f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_1430f8:
    // 0x1430f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1430fc:
    if (ctx->pc == 0x1430FCu) {
        ctx->pc = 0x143100u;
        goto label_143100;
    }
    ctx->pc = 0x1430F8u;
    {
        const bool branch_taken_0x1430f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1430f8) {
            ctx->pc = 0x143118u;
            goto label_143118;
        }
    }
    ctx->pc = 0x143100u;
label_143100:
    // 0x143100: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_143104:
    // 0x143104: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x143104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_143108:
    // 0x143108: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x143108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_14310c:
    // 0x14310c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14310cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_143110:
    // 0x143110: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_143114:
    // 0x143114: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x143114u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6716), GPR_U32(ctx, 3));
label_143118:
    // 0x143118: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x143118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_14311c:
    // 0x14311c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_143120:
    if (ctx->pc == 0x143120u) {
        ctx->pc = 0x143124u;
        goto label_143124;
    }
    ctx->pc = 0x14311Cu;
    {
        const bool branch_taken_0x14311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14311c) {
            ctx->pc = 0x143268u;
            goto label_143268;
        }
    }
    ctx->pc = 0x143124u;
label_143124:
    // 0x143124: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_143128:
    // 0x143128: 0x2443913c  addiu       $v1, $v0, -0x6EC4
    ctx->pc = 0x143128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938940));
label_14312c:
    // 0x14312c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x14312cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_143130:
    // 0x143130: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_143134:
    // 0x143134: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x143134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_143138:
    // 0x143138: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x143138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_14313c:
    // 0x14313c: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x14313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_143140:
    // 0x143140: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x143140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_143144:
    // 0x143144: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x143144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_143148:
    // 0x143148: 0x162600  sll         $a0, $s6, 24
    ctx->pc = 0x143148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 24));
label_14314c:
    // 0x14314c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x14314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_143150:
    // 0x143150: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x143150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_143154:
    // 0x143154: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x143154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_143158:
    // 0x143158: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x143158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_14315c:
    // 0x14315c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14315cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_143160:
    // 0x143160: 0x3c027d30  lui         $v0, 0x7D30
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32048 << 16));
label_143164:
    // 0x143164: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x143164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_143168:
    // 0x143168: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x143168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_14316c:
    // 0x14316c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14316cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_143170:
    // 0x143170: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x143170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_143174:
    // 0x143174: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x143174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_143178:
    // 0x143178: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_14317c:
    // 0x14317c: 0x3c0282d0  lui         $v0, 0x82D0
    ctx->pc = 0x14317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33488 << 16));
label_143180:
    // 0x143180: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x143180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_143184:
    // 0x143184: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x143184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_143188:
    // 0x143188: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_14318c:
    // 0x14318c: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x14318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_143190:
    // 0x143190: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x143190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_143194:
    // 0x143194: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_143198:
    // 0x143198: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x143198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_14319c:
    // 0x14319c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14319cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1431a0:
    // 0x1431a0: 0x3c020b40  lui         $v0, 0xB40
    ctx->pc = 0x1431a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2880 << 16));
label_1431a4:
    // 0x1431a4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1431a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1431a8:
    // 0x1431a8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1431a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1431ac:
    // 0x1431ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1431acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1431b0:
    // 0x1431b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1431b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1431b4:
    // 0x1431b4: 0x2442ccc8  addiu       $v0, $v0, -0x3338
    ctx->pc = 0x1431b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954184));
label_1431b8:
    // 0x1431b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1431b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1431bc:
    // 0x1431bc: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1431bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1431c0:
    // 0x1431c0: 0x36220040  ori         $v0, $s1, 0x40
    ctx->pc = 0x1431c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
label_1431c4:
    // 0x1431c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1431c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1431c8:
    // 0x1431c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1431c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1431cc:
    // 0x1431cc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1431ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_1431d0:
    // 0x1431d0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1431d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1431d4:
    // 0x1431d4: 0xc05dbd8  jal         func_176F60
label_1431d8:
    if (ctx->pc == 0x1431D8u) {
        ctx->pc = 0x1431DCu;
        goto label_1431dc;
    }
    ctx->pc = 0x1431D4u;
    SET_GPR_U32(ctx, 31, 0x1431DCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1431D4u, 0x1431DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431DCu;
label_1431dc:
    // 0x1431dc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1431dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1431e0:
    // 0x1431e0: 0x24629100  addiu       $v0, $v1, -0x6F00
    ctx->pc = 0x1431e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938880));
label_1431e4:
    // 0x1431e4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1431e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1431e8:
    // 0x1431e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1431e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1431ec:
    // 0x1431ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1431ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1431f0:
    // 0x1431f0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1431f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1431f4:
    // 0x1431f4: 0x34821048  ori         $v0, $a0, 0x1048
    ctx->pc = 0x1431f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4168);
label_1431f8:
    // 0x1431f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1431f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1431fc:
    // 0x1431fc: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x1431fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_143200:
    // 0x143200: 0x3482001b  ori         $v0, $a0, 0x1B
    ctx->pc = 0x143200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27);
label_143204:
    // 0x143204: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x143204u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_143208:
    // 0x143208: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x143208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_14320c:
    // 0x14320c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x14320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_143210:
    // 0x143210: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_143214:
    // 0x143214: 0xc05dbd8  jal         func_176F60
label_143218:
    if (ctx->pc == 0x143218u) {
        ctx->pc = 0x14321Cu;
        goto label_14321c;
    }
    ctx->pc = 0x143214u;
    SET_GPR_U32(ctx, 31, 0x14321Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x143214u, 0x14321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14321Cu;
label_14321c:
    // 0x14321c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14321cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_143220:
    // 0x143220: 0x245190f0  addiu       $s1, $v0, -0x6F10
    ctx->pc = 0x143220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
label_143224:
    // 0x143224: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_143228:
    // 0x143228: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x143228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_14322c:
    // 0x14322c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_143230:
    // 0x143230: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x143230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_143234:
    // 0x143234: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x143234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_143238:
    // 0x143238: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x143238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14323c:
    // 0x14323c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x14323cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_143240:
    // 0x143240: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x143240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_143244:
    // 0x143244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x143244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_143248:
    // 0x143248: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x143248u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_14324c:
    // 0x14324c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_143250:
    // 0x143250: 0x24461614  addiu       $a2, $v0, 0x1614
    ctx->pc = 0x143250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_143254:
    // 0x143254: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x143254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_143258:
    // 0x143258: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143258u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_14325c:
    // 0x14325c: 0xc05dbd8  jal         func_176F60
label_143260:
    if (ctx->pc == 0x143260u) {
        ctx->pc = 0x143264u;
        goto label_143264;
    }
    ctx->pc = 0x14325Cu;
    SET_GPR_U32(ctx, 31, 0x143264u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x14325Cu, 0x143264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143264u;
label_143264:
    // 0x143264: 0x0  nop
    ctx->pc = 0x143264u;
    // NOP
label_143268:
    // 0x143268: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x143268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_14326c:
    // 0x14326c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_143270:
    if (ctx->pc == 0x143270u) {
        ctx->pc = 0x143274u;
        goto label_143274;
    }
    ctx->pc = 0x14326Cu;
    {
        const bool branch_taken_0x14326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14326c) {
            ctx->pc = 0x143328u;
            goto label_143328;
        }
    }
    ctx->pc = 0x143274u;
label_143274:
    // 0x143274: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_143278:
    // 0x143278: 0x24479110  addiu       $a3, $v0, -0x6EF0
    ctx->pc = 0x143278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
label_14327c:
    // 0x14327c: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x14327cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_143280:
    // 0x143280: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x143280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_143284:
    // 0x143284: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x143284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_143288:
    // 0x143288: 0x3c0b6400  lui         $t3, 0x6400
    ctx->pc = 0x143288u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)25600 << 16));
label_14328c:
    // 0x14328c: 0x356a2b16  ori         $t2, $t3, 0x2B16
    ctx->pc = 0x14328cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)11030);
label_143290:
    // 0x143290: 0xae0a0004  sw          $t2, 0x4($s0)
    ctx->pc = 0x143290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 10));
label_143294:
    // 0x143294: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x143294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_143298:
    // 0x143298: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x143298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_14329c:
    // 0x14329c: 0x131a00  sll         $v1, $s3, 8
    ctx->pc = 0x14329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_1432a0:
    // 0x1432a0: 0x263b825  or          $s7, $s3, $v1
    ctx->pc = 0x1432a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_1432a4:
    // 0x1432a4: 0x571825  or          $v1, $v0, $s7
    ctx->pc = 0x1432a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_1432a8:
    // 0x1432a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1432a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1432ac:
    // 0x1432ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1432acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1432b0:
    // 0x1432b0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1432b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1432b4:
    // 0x1432b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1432b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1432b8:
    // 0x1432b8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1432b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
label_1432bc:
    // 0x1432bc: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1432bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_1432c0:
    // 0x1432c0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1432c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1432c4:
    // 0x1432c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1432c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1432c8:
    // 0x1432c8: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x1432c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_1432cc:
    // 0x1432cc: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1432ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_1432d0:
    // 0x1432d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1432d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1432d4:
    // 0x1432d4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1432d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
label_1432d8:
    // 0x1432d8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1432d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_1432dc:
    // 0x1432dc: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x1432dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_1432e0:
    // 0x1432e0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1432e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1432e4:
    // 0x1432e4: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x1432e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
label_1432e8:
    // 0x1432e8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1432e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1432ec:
    // 0x1432ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1432ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1432f0:
    // 0x1432f0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1432f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1432f4:
    // 0x1432f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1432f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1432f8:
    // 0x1432f8: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x1432f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
label_1432fc:
    // 0x1432fc: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x1432fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_143300:
    // 0x143300: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x143300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_143304:
    // 0x143304: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_143308:
    // 0x143308: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x143308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_14330c:
    // 0x14330c: 0x24a2ccf0  addiu       $v0, $a1, -0x3310
    ctx->pc = 0x14330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
label_143310:
    // 0x143310: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x143310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_143314:
    // 0x143314: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x143314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_143318:
    // 0x143318: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x143318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
label_14331c:
    // 0x14331c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x14331cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_143320:
    // 0x143320: 0xc05dbd8  jal         func_176F60
label_143324:
    if (ctx->pc == 0x143324u) {
        ctx->pc = 0x143328u;
        goto label_143328;
    }
    ctx->pc = 0x143320u;
    SET_GPR_U32(ctx, 31, 0x143328u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x143320u, 0x143328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143328u;
label_143328:
    // 0x143328: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x143328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_14332c:
    // 0x14332c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_143330:
    if (ctx->pc == 0x143330u) {
        ctx->pc = 0x143334u;
        goto label_143334;
    }
    ctx->pc = 0x14332Cu;
    {
        const bool branch_taken_0x14332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14332c) {
            ctx->pc = 0x1433E8u;
            goto label_1433e8;
        }
    }
    ctx->pc = 0x143334u;
label_143334:
    // 0x143334: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_143338:
    // 0x143338: 0x24509110  addiu       $s0, $v0, -0x6EF0
    ctx->pc = 0x143338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
label_14333c:
    // 0x14333c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14333cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_143340:
    // 0x143340: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x143340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_143344:
    // 0x143344: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x143344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_143348:
    // 0x143348: 0x34442b16  ori         $a0, $v0, 0x2B16
    ctx->pc = 0x143348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_14334c:
    // 0x14334c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x14334cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_143350:
    // 0x143350: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x143350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_143354:
    // 0x143354: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x143354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_143358:
    // 0x143358: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x143358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_14335c:
    // 0x14335c: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x14335cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_143360:
    // 0x143360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_143364:
    // 0x143364: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_143368:
    // 0x143368: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x143368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14336c:
    // 0x14336c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x14336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_143370:
    // 0x143370: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x143370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_143374:
    // 0x143374: 0x3c047900  lui         $a0, 0x7900
    ctx->pc = 0x143374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30976 << 16));
label_143378:
    // 0x143378: 0x34857000  ori         $a1, $a0, 0x7000
    ctx->pc = 0x143378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28672);
label_14337c:
    // 0x14337c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x14337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_143380:
    // 0x143380: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x143380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_143384:
    // 0x143384: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x143384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_143388:
    // 0x143388: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x143388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_14338c:
    // 0x14338c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14338cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_143390:
    // 0x143390: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x143390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
label_143394:
    // 0x143394: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x143394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_143398:
    // 0x143398: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x143398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_14339c:
    // 0x14339c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14339cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1433a0:
    // 0x1433a0: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x1433a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
label_1433a4:
    // 0x1433a4: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x1433a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1433a8:
    // 0x1433a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1433a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1433ac:
    // 0x1433ac: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1433acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1433b0:
    // 0x1433b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1433b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1433b4:
    // 0x1433b4: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x1433b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
label_1433b8:
    // 0x1433b8: 0x34422800  ori         $v0, $v0, 0x2800
    ctx->pc = 0x1433b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
label_1433bc:
    // 0x1433bc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1433bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1433c0:
    // 0x1433c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1433c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1433c4:
    // 0x1433c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1433c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1433c8:
    // 0x1433c8: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x1433c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
label_1433cc:
    // 0x1433cc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1433ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1433d0:
    // 0x1433d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1433d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1433d4:
    // 0x1433d4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1433d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_1433d8:
    // 0x1433d8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1433d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1433dc:
    // 0x1433dc: 0xc05dbd8  jal         func_176F60
label_1433e0:
    if (ctx->pc == 0x1433E0u) {
        ctx->pc = 0x1433E4u;
        goto label_1433e4;
    }
    ctx->pc = 0x1433DCu;
    SET_GPR_U32(ctx, 31, 0x1433E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1433DCu, 0x1433E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433E4u;
label_1433e4:
    // 0x1433e4: 0x0  nop
    ctx->pc = 0x1433e4u;
    // NOP
label_1433e8:
    // 0x1433e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1433e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1433ec:
    // 0x1433ec: 0xc06750c  jal         func_19D430
label_1433f0:
    if (ctx->pc == 0x1433F0u) {
        ctx->pc = 0x1433F4u;
        goto label_1433f4;
    }
    ctx->pc = 0x1433ECu;
    SET_GPR_U32(ctx, 31, 0x1433F4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1433ECu, 0x1433F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433F4u;
label_1433f4:
    // 0x1433f4: 0x1000fe9d  b           . + 4 + (-0x163 << 2)
label_1433f8:
    if (ctx->pc == 0x1433F8u) {
        ctx->pc = 0x1433FCu;
        goto label_fallthrough_0x1433f4;
    }
    ctx->pc = 0x1433F4u;
    {
        const bool branch_taken_0x1433f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433f4) {
            ctx->pc = 0x142E6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142e6c;
        }
    }
label_fallthrough_0x1433f4:
    ctx->pc = 0x1433FCu;
}
