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

// Function: Em10_dm_ck
// Address: 0x120b10 - 0x122d54
void Em10_dm_ck_0x120b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_dm_ck_0x120b10");
#endif

    switch (ctx->pc) {
        case 0x120b10u: goto label_120b10;
        case 0x120b14u: goto label_120b14;
        case 0x120b18u: goto label_120b18;
        case 0x120b1cu: goto label_120b1c;
        case 0x120b20u: goto label_120b20;
        case 0x120b24u: goto label_120b24;
        case 0x120b28u: goto label_120b28;
        case 0x120b2cu: goto label_120b2c;
        case 0x120b30u: goto label_120b30;
        case 0x120b34u: goto label_120b34;
        case 0x120b38u: goto label_120b38;
        case 0x120b3cu: goto label_120b3c;
        case 0x120b40u: goto label_120b40;
        case 0x120b44u: goto label_120b44;
        case 0x120b48u: goto label_120b48;
        case 0x120b4cu: goto label_120b4c;
        case 0x120b50u: goto label_120b50;
        case 0x120b54u: goto label_120b54;
        case 0x120b58u: goto label_120b58;
        case 0x120b5cu: goto label_120b5c;
        case 0x120b60u: goto label_120b60;
        case 0x120b64u: goto label_120b64;
        case 0x120b68u: goto label_120b68;
        case 0x120b6cu: goto label_120b6c;
        case 0x120b70u: goto label_120b70;
        case 0x120b74u: goto label_120b74;
        case 0x120b78u: goto label_120b78;
        case 0x120b7cu: goto label_120b7c;
        case 0x120b80u: goto label_120b80;
        case 0x120b84u: goto label_120b84;
        case 0x120b88u: goto label_120b88;
        case 0x120b8cu: goto label_120b8c;
        case 0x120b90u: goto label_120b90;
        case 0x120b94u: goto label_120b94;
        case 0x120b98u: goto label_120b98;
        case 0x120b9cu: goto label_120b9c;
        case 0x120ba0u: goto label_120ba0;
        case 0x120ba4u: goto label_120ba4;
        case 0x120ba8u: goto label_120ba8;
        case 0x120bacu: goto label_120bac;
        case 0x120bb0u: goto label_120bb0;
        case 0x120bb4u: goto label_120bb4;
        case 0x120bb8u: goto label_120bb8;
        case 0x120bbcu: goto label_120bbc;
        case 0x120bc0u: goto label_120bc0;
        case 0x120bc4u: goto label_120bc4;
        case 0x120bc8u: goto label_120bc8;
        case 0x120bccu: goto label_120bcc;
        case 0x120bd0u: goto label_120bd0;
        case 0x120bd4u: goto label_120bd4;
        case 0x120bd8u: goto label_120bd8;
        case 0x120bdcu: goto label_120bdc;
        case 0x120be0u: goto label_120be0;
        case 0x120be4u: goto label_120be4;
        case 0x120be8u: goto label_120be8;
        case 0x120becu: goto label_120bec;
        case 0x120bf0u: goto label_120bf0;
        case 0x120bf4u: goto label_120bf4;
        case 0x120bf8u: goto label_120bf8;
        case 0x120bfcu: goto label_120bfc;
        case 0x120c00u: goto label_120c00;
        case 0x120c04u: goto label_120c04;
        case 0x120c08u: goto label_120c08;
        case 0x120c0cu: goto label_120c0c;
        case 0x120c10u: goto label_120c10;
        case 0x120c14u: goto label_120c14;
        case 0x120c18u: goto label_120c18;
        case 0x120c1cu: goto label_120c1c;
        case 0x120c20u: goto label_120c20;
        case 0x120c24u: goto label_120c24;
        case 0x120c28u: goto label_120c28;
        case 0x120c2cu: goto label_120c2c;
        case 0x120c30u: goto label_120c30;
        case 0x120c34u: goto label_120c34;
        case 0x120c38u: goto label_120c38;
        case 0x120c3cu: goto label_120c3c;
        case 0x120c40u: goto label_120c40;
        case 0x120c44u: goto label_120c44;
        case 0x120c48u: goto label_120c48;
        case 0x120c4cu: goto label_120c4c;
        case 0x120c50u: goto label_120c50;
        case 0x120c54u: goto label_120c54;
        case 0x120c58u: goto label_120c58;
        case 0x120c5cu: goto label_120c5c;
        case 0x120c60u: goto label_120c60;
        case 0x120c64u: goto label_120c64;
        case 0x120c68u: goto label_120c68;
        case 0x120c6cu: goto label_120c6c;
        case 0x120c70u: goto label_120c70;
        case 0x120c74u: goto label_120c74;
        case 0x120c78u: goto label_120c78;
        case 0x120c7cu: goto label_120c7c;
        case 0x120c80u: goto label_120c80;
        case 0x120c84u: goto label_120c84;
        case 0x120c88u: goto label_120c88;
        case 0x120c8cu: goto label_120c8c;
        case 0x120c90u: goto label_120c90;
        case 0x120c94u: goto label_120c94;
        case 0x120c98u: goto label_120c98;
        case 0x120c9cu: goto label_120c9c;
        case 0x120ca0u: goto label_120ca0;
        case 0x120ca4u: goto label_120ca4;
        case 0x120ca8u: goto label_120ca8;
        case 0x120cacu: goto label_120cac;
        case 0x120cb0u: goto label_120cb0;
        case 0x120cb4u: goto label_120cb4;
        case 0x120cb8u: goto label_120cb8;
        case 0x120cbcu: goto label_120cbc;
        case 0x120cc0u: goto label_120cc0;
        case 0x120cc4u: goto label_120cc4;
        case 0x120cc8u: goto label_120cc8;
        case 0x120cccu: goto label_120ccc;
        case 0x120cd0u: goto label_120cd0;
        case 0x120cd4u: goto label_120cd4;
        case 0x120cd8u: goto label_120cd8;
        case 0x120cdcu: goto label_120cdc;
        case 0x120ce0u: goto label_120ce0;
        case 0x120ce4u: goto label_120ce4;
        case 0x120ce8u: goto label_120ce8;
        case 0x120cecu: goto label_120cec;
        case 0x120cf0u: goto label_120cf0;
        case 0x120cf4u: goto label_120cf4;
        case 0x120cf8u: goto label_120cf8;
        case 0x120cfcu: goto label_120cfc;
        case 0x120d00u: goto label_120d00;
        case 0x120d04u: goto label_120d04;
        case 0x120d08u: goto label_120d08;
        case 0x120d0cu: goto label_120d0c;
        case 0x120d10u: goto label_120d10;
        case 0x120d14u: goto label_120d14;
        case 0x120d18u: goto label_120d18;
        case 0x120d1cu: goto label_120d1c;
        case 0x120d20u: goto label_120d20;
        case 0x120d24u: goto label_120d24;
        case 0x120d28u: goto label_120d28;
        case 0x120d2cu: goto label_120d2c;
        case 0x120d30u: goto label_120d30;
        case 0x120d34u: goto label_120d34;
        case 0x120d38u: goto label_120d38;
        case 0x120d3cu: goto label_120d3c;
        case 0x120d40u: goto label_120d40;
        case 0x120d44u: goto label_120d44;
        case 0x120d48u: goto label_120d48;
        case 0x120d4cu: goto label_120d4c;
        case 0x120d50u: goto label_120d50;
        case 0x120d54u: goto label_120d54;
        case 0x120d58u: goto label_120d58;
        case 0x120d5cu: goto label_120d5c;
        case 0x120d60u: goto label_120d60;
        case 0x120d64u: goto label_120d64;
        case 0x120d68u: goto label_120d68;
        case 0x120d6cu: goto label_120d6c;
        case 0x120d70u: goto label_120d70;
        case 0x120d74u: goto label_120d74;
        case 0x120d78u: goto label_120d78;
        case 0x120d7cu: goto label_120d7c;
        case 0x120d80u: goto label_120d80;
        case 0x120d84u: goto label_120d84;
        case 0x120d88u: goto label_120d88;
        case 0x120d8cu: goto label_120d8c;
        case 0x120d90u: goto label_120d90;
        case 0x120d94u: goto label_120d94;
        case 0x120d98u: goto label_120d98;
        case 0x120d9cu: goto label_120d9c;
        case 0x120da0u: goto label_120da0;
        case 0x120da4u: goto label_120da4;
        case 0x120da8u: goto label_120da8;
        case 0x120dacu: goto label_120dac;
        case 0x120db0u: goto label_120db0;
        case 0x120db4u: goto label_120db4;
        case 0x120db8u: goto label_120db8;
        case 0x120dbcu: goto label_120dbc;
        case 0x120dc0u: goto label_120dc0;
        case 0x120dc4u: goto label_120dc4;
        case 0x120dc8u: goto label_120dc8;
        case 0x120dccu: goto label_120dcc;
        case 0x120dd0u: goto label_120dd0;
        case 0x120dd4u: goto label_120dd4;
        case 0x120dd8u: goto label_120dd8;
        case 0x120ddcu: goto label_120ddc;
        case 0x120de0u: goto label_120de0;
        case 0x120de4u: goto label_120de4;
        case 0x120de8u: goto label_120de8;
        case 0x120decu: goto label_120dec;
        case 0x120df0u: goto label_120df0;
        case 0x120df4u: goto label_120df4;
        case 0x120df8u: goto label_120df8;
        case 0x120dfcu: goto label_120dfc;
        case 0x120e00u: goto label_120e00;
        case 0x120e04u: goto label_120e04;
        case 0x120e08u: goto label_120e08;
        case 0x120e0cu: goto label_120e0c;
        case 0x120e10u: goto label_120e10;
        case 0x120e14u: goto label_120e14;
        case 0x120e18u: goto label_120e18;
        case 0x120e1cu: goto label_120e1c;
        case 0x120e20u: goto label_120e20;
        case 0x120e24u: goto label_120e24;
        case 0x120e28u: goto label_120e28;
        case 0x120e2cu: goto label_120e2c;
        case 0x120e30u: goto label_120e30;
        case 0x120e34u: goto label_120e34;
        case 0x120e38u: goto label_120e38;
        case 0x120e3cu: goto label_120e3c;
        case 0x120e40u: goto label_120e40;
        case 0x120e44u: goto label_120e44;
        case 0x120e48u: goto label_120e48;
        case 0x120e4cu: goto label_120e4c;
        case 0x120e50u: goto label_120e50;
        case 0x120e54u: goto label_120e54;
        case 0x120e58u: goto label_120e58;
        case 0x120e5cu: goto label_120e5c;
        case 0x120e60u: goto label_120e60;
        case 0x120e64u: goto label_120e64;
        case 0x120e68u: goto label_120e68;
        case 0x120e6cu: goto label_120e6c;
        case 0x120e70u: goto label_120e70;
        case 0x120e74u: goto label_120e74;
        case 0x120e78u: goto label_120e78;
        case 0x120e7cu: goto label_120e7c;
        case 0x120e80u: goto label_120e80;
        case 0x120e84u: goto label_120e84;
        case 0x120e88u: goto label_120e88;
        case 0x120e8cu: goto label_120e8c;
        case 0x120e90u: goto label_120e90;
        case 0x120e94u: goto label_120e94;
        case 0x120e98u: goto label_120e98;
        case 0x120e9cu: goto label_120e9c;
        case 0x120ea0u: goto label_120ea0;
        case 0x120ea4u: goto label_120ea4;
        case 0x120ea8u: goto label_120ea8;
        case 0x120eacu: goto label_120eac;
        case 0x120eb0u: goto label_120eb0;
        case 0x120eb4u: goto label_120eb4;
        case 0x120eb8u: goto label_120eb8;
        case 0x120ebcu: goto label_120ebc;
        case 0x120ec0u: goto label_120ec0;
        case 0x120ec4u: goto label_120ec4;
        case 0x120ec8u: goto label_120ec8;
        case 0x120eccu: goto label_120ecc;
        case 0x120ed0u: goto label_120ed0;
        case 0x120ed4u: goto label_120ed4;
        case 0x120ed8u: goto label_120ed8;
        case 0x120edcu: goto label_120edc;
        case 0x120ee0u: goto label_120ee0;
        case 0x120ee4u: goto label_120ee4;
        case 0x120ee8u: goto label_120ee8;
        case 0x120eecu: goto label_120eec;
        case 0x120ef0u: goto label_120ef0;
        case 0x120ef4u: goto label_120ef4;
        case 0x120ef8u: goto label_120ef8;
        case 0x120efcu: goto label_120efc;
        case 0x120f00u: goto label_120f00;
        case 0x120f04u: goto label_120f04;
        case 0x120f08u: goto label_120f08;
        case 0x120f0cu: goto label_120f0c;
        case 0x120f10u: goto label_120f10;
        case 0x120f14u: goto label_120f14;
        case 0x120f18u: goto label_120f18;
        case 0x120f1cu: goto label_120f1c;
        case 0x120f20u: goto label_120f20;
        case 0x120f24u: goto label_120f24;
        case 0x120f28u: goto label_120f28;
        case 0x120f2cu: goto label_120f2c;
        case 0x120f30u: goto label_120f30;
        case 0x120f34u: goto label_120f34;
        case 0x120f38u: goto label_120f38;
        case 0x120f3cu: goto label_120f3c;
        case 0x120f40u: goto label_120f40;
        case 0x120f44u: goto label_120f44;
        case 0x120f48u: goto label_120f48;
        case 0x120f4cu: goto label_120f4c;
        case 0x120f50u: goto label_120f50;
        case 0x120f54u: goto label_120f54;
        case 0x120f58u: goto label_120f58;
        case 0x120f5cu: goto label_120f5c;
        case 0x120f60u: goto label_120f60;
        case 0x120f64u: goto label_120f64;
        case 0x120f68u: goto label_120f68;
        case 0x120f6cu: goto label_120f6c;
        case 0x120f70u: goto label_120f70;
        case 0x120f74u: goto label_120f74;
        case 0x120f78u: goto label_120f78;
        case 0x120f7cu: goto label_120f7c;
        case 0x120f80u: goto label_120f80;
        case 0x120f84u: goto label_120f84;
        case 0x120f88u: goto label_120f88;
        case 0x120f8cu: goto label_120f8c;
        case 0x120f90u: goto label_120f90;
        case 0x120f94u: goto label_120f94;
        case 0x120f98u: goto label_120f98;
        case 0x120f9cu: goto label_120f9c;
        case 0x120fa0u: goto label_120fa0;
        case 0x120fa4u: goto label_120fa4;
        case 0x120fa8u: goto label_120fa8;
        case 0x120facu: goto label_120fac;
        case 0x120fb0u: goto label_120fb0;
        case 0x120fb4u: goto label_120fb4;
        case 0x120fb8u: goto label_120fb8;
        case 0x120fbcu: goto label_120fbc;
        case 0x120fc0u: goto label_120fc0;
        case 0x120fc4u: goto label_120fc4;
        case 0x120fc8u: goto label_120fc8;
        case 0x120fccu: goto label_120fcc;
        case 0x120fd0u: goto label_120fd0;
        case 0x120fd4u: goto label_120fd4;
        case 0x120fd8u: goto label_120fd8;
        case 0x120fdcu: goto label_120fdc;
        case 0x120fe0u: goto label_120fe0;
        case 0x120fe4u: goto label_120fe4;
        case 0x120fe8u: goto label_120fe8;
        case 0x120fecu: goto label_120fec;
        case 0x120ff0u: goto label_120ff0;
        case 0x120ff4u: goto label_120ff4;
        case 0x120ff8u: goto label_120ff8;
        case 0x120ffcu: goto label_120ffc;
        case 0x121000u: goto label_121000;
        case 0x121004u: goto label_121004;
        case 0x121008u: goto label_121008;
        case 0x12100cu: goto label_12100c;
        case 0x121010u: goto label_121010;
        case 0x121014u: goto label_121014;
        case 0x121018u: goto label_121018;
        case 0x12101cu: goto label_12101c;
        case 0x121020u: goto label_121020;
        case 0x121024u: goto label_121024;
        case 0x121028u: goto label_121028;
        case 0x12102cu: goto label_12102c;
        case 0x121030u: goto label_121030;
        case 0x121034u: goto label_121034;
        case 0x121038u: goto label_121038;
        case 0x12103cu: goto label_12103c;
        case 0x121040u: goto label_121040;
        case 0x121044u: goto label_121044;
        case 0x121048u: goto label_121048;
        case 0x12104cu: goto label_12104c;
        case 0x121050u: goto label_121050;
        case 0x121054u: goto label_121054;
        case 0x121058u: goto label_121058;
        case 0x12105cu: goto label_12105c;
        case 0x121060u: goto label_121060;
        case 0x121064u: goto label_121064;
        case 0x121068u: goto label_121068;
        case 0x12106cu: goto label_12106c;
        case 0x121070u: goto label_121070;
        case 0x121074u: goto label_121074;
        case 0x121078u: goto label_121078;
        case 0x12107cu: goto label_12107c;
        case 0x121080u: goto label_121080;
        case 0x121084u: goto label_121084;
        case 0x121088u: goto label_121088;
        case 0x12108cu: goto label_12108c;
        case 0x121090u: goto label_121090;
        case 0x121094u: goto label_121094;
        case 0x121098u: goto label_121098;
        case 0x12109cu: goto label_12109c;
        case 0x1210a0u: goto label_1210a0;
        case 0x1210a4u: goto label_1210a4;
        case 0x1210a8u: goto label_1210a8;
        case 0x1210acu: goto label_1210ac;
        case 0x1210b0u: goto label_1210b0;
        case 0x1210b4u: goto label_1210b4;
        case 0x1210b8u: goto label_1210b8;
        case 0x1210bcu: goto label_1210bc;
        case 0x1210c0u: goto label_1210c0;
        case 0x1210c4u: goto label_1210c4;
        case 0x1210c8u: goto label_1210c8;
        case 0x1210ccu: goto label_1210cc;
        case 0x1210d0u: goto label_1210d0;
        case 0x1210d4u: goto label_1210d4;
        case 0x1210d8u: goto label_1210d8;
        case 0x1210dcu: goto label_1210dc;
        case 0x1210e0u: goto label_1210e0;
        case 0x1210e4u: goto label_1210e4;
        case 0x1210e8u: goto label_1210e8;
        case 0x1210ecu: goto label_1210ec;
        case 0x1210f0u: goto label_1210f0;
        case 0x1210f4u: goto label_1210f4;
        case 0x1210f8u: goto label_1210f8;
        case 0x1210fcu: goto label_1210fc;
        case 0x121100u: goto label_121100;
        case 0x121104u: goto label_121104;
        case 0x121108u: goto label_121108;
        case 0x12110cu: goto label_12110c;
        case 0x121110u: goto label_121110;
        case 0x121114u: goto label_121114;
        case 0x121118u: goto label_121118;
        case 0x12111cu: goto label_12111c;
        case 0x121120u: goto label_121120;
        case 0x121124u: goto label_121124;
        case 0x121128u: goto label_121128;
        case 0x12112cu: goto label_12112c;
        case 0x121130u: goto label_121130;
        case 0x121134u: goto label_121134;
        case 0x121138u: goto label_121138;
        case 0x12113cu: goto label_12113c;
        case 0x121140u: goto label_121140;
        case 0x121144u: goto label_121144;
        case 0x121148u: goto label_121148;
        case 0x12114cu: goto label_12114c;
        case 0x121150u: goto label_121150;
        case 0x121154u: goto label_121154;
        case 0x121158u: goto label_121158;
        case 0x12115cu: goto label_12115c;
        case 0x121160u: goto label_121160;
        case 0x121164u: goto label_121164;
        case 0x121168u: goto label_121168;
        case 0x12116cu: goto label_12116c;
        case 0x121170u: goto label_121170;
        case 0x121174u: goto label_121174;
        case 0x121178u: goto label_121178;
        case 0x12117cu: goto label_12117c;
        case 0x121180u: goto label_121180;
        case 0x121184u: goto label_121184;
        case 0x121188u: goto label_121188;
        case 0x12118cu: goto label_12118c;
        case 0x121190u: goto label_121190;
        case 0x121194u: goto label_121194;
        case 0x121198u: goto label_121198;
        case 0x12119cu: goto label_12119c;
        case 0x1211a0u: goto label_1211a0;
        case 0x1211a4u: goto label_1211a4;
        case 0x1211a8u: goto label_1211a8;
        case 0x1211acu: goto label_1211ac;
        case 0x1211b0u: goto label_1211b0;
        case 0x1211b4u: goto label_1211b4;
        case 0x1211b8u: goto label_1211b8;
        case 0x1211bcu: goto label_1211bc;
        case 0x1211c0u: goto label_1211c0;
        case 0x1211c4u: goto label_1211c4;
        case 0x1211c8u: goto label_1211c8;
        case 0x1211ccu: goto label_1211cc;
        case 0x1211d0u: goto label_1211d0;
        case 0x1211d4u: goto label_1211d4;
        case 0x1211d8u: goto label_1211d8;
        case 0x1211dcu: goto label_1211dc;
        case 0x1211e0u: goto label_1211e0;
        case 0x1211e4u: goto label_1211e4;
        case 0x1211e8u: goto label_1211e8;
        case 0x1211ecu: goto label_1211ec;
        case 0x1211f0u: goto label_1211f0;
        case 0x1211f4u: goto label_1211f4;
        case 0x1211f8u: goto label_1211f8;
        case 0x1211fcu: goto label_1211fc;
        case 0x121200u: goto label_121200;
        case 0x121204u: goto label_121204;
        case 0x121208u: goto label_121208;
        case 0x12120cu: goto label_12120c;
        case 0x121210u: goto label_121210;
        case 0x121214u: goto label_121214;
        case 0x121218u: goto label_121218;
        case 0x12121cu: goto label_12121c;
        case 0x121220u: goto label_121220;
        case 0x121224u: goto label_121224;
        case 0x121228u: goto label_121228;
        case 0x12122cu: goto label_12122c;
        case 0x121230u: goto label_121230;
        case 0x121234u: goto label_121234;
        case 0x121238u: goto label_121238;
        case 0x12123cu: goto label_12123c;
        case 0x121240u: goto label_121240;
        case 0x121244u: goto label_121244;
        case 0x121248u: goto label_121248;
        case 0x12124cu: goto label_12124c;
        case 0x121250u: goto label_121250;
        case 0x121254u: goto label_121254;
        case 0x121258u: goto label_121258;
        case 0x12125cu: goto label_12125c;
        case 0x121260u: goto label_121260;
        case 0x121264u: goto label_121264;
        case 0x121268u: goto label_121268;
        case 0x12126cu: goto label_12126c;
        case 0x121270u: goto label_121270;
        case 0x121274u: goto label_121274;
        case 0x121278u: goto label_121278;
        case 0x12127cu: goto label_12127c;
        case 0x121280u: goto label_121280;
        case 0x121284u: goto label_121284;
        case 0x121288u: goto label_121288;
        case 0x12128cu: goto label_12128c;
        case 0x121290u: goto label_121290;
        case 0x121294u: goto label_121294;
        case 0x121298u: goto label_121298;
        case 0x12129cu: goto label_12129c;
        case 0x1212a0u: goto label_1212a0;
        case 0x1212a4u: goto label_1212a4;
        case 0x1212a8u: goto label_1212a8;
        case 0x1212acu: goto label_1212ac;
        case 0x1212b0u: goto label_1212b0;
        case 0x1212b4u: goto label_1212b4;
        case 0x1212b8u: goto label_1212b8;
        case 0x1212bcu: goto label_1212bc;
        case 0x1212c0u: goto label_1212c0;
        case 0x1212c4u: goto label_1212c4;
        case 0x1212c8u: goto label_1212c8;
        case 0x1212ccu: goto label_1212cc;
        case 0x1212d0u: goto label_1212d0;
        case 0x1212d4u: goto label_1212d4;
        case 0x1212d8u: goto label_1212d8;
        case 0x1212dcu: goto label_1212dc;
        case 0x1212e0u: goto label_1212e0;
        case 0x1212e4u: goto label_1212e4;
        case 0x1212e8u: goto label_1212e8;
        case 0x1212ecu: goto label_1212ec;
        case 0x1212f0u: goto label_1212f0;
        case 0x1212f4u: goto label_1212f4;
        case 0x1212f8u: goto label_1212f8;
        case 0x1212fcu: goto label_1212fc;
        case 0x121300u: goto label_121300;
        case 0x121304u: goto label_121304;
        case 0x121308u: goto label_121308;
        case 0x12130cu: goto label_12130c;
        case 0x121310u: goto label_121310;
        case 0x121314u: goto label_121314;
        case 0x121318u: goto label_121318;
        case 0x12131cu: goto label_12131c;
        case 0x121320u: goto label_121320;
        case 0x121324u: goto label_121324;
        case 0x121328u: goto label_121328;
        case 0x12132cu: goto label_12132c;
        case 0x121330u: goto label_121330;
        case 0x121334u: goto label_121334;
        case 0x121338u: goto label_121338;
        case 0x12133cu: goto label_12133c;
        case 0x121340u: goto label_121340;
        case 0x121344u: goto label_121344;
        case 0x121348u: goto label_121348;
        case 0x12134cu: goto label_12134c;
        case 0x121350u: goto label_121350;
        case 0x121354u: goto label_121354;
        case 0x121358u: goto label_121358;
        case 0x12135cu: goto label_12135c;
        case 0x121360u: goto label_121360;
        case 0x121364u: goto label_121364;
        case 0x121368u: goto label_121368;
        case 0x12136cu: goto label_12136c;
        case 0x121370u: goto label_121370;
        case 0x121374u: goto label_121374;
        case 0x121378u: goto label_121378;
        case 0x12137cu: goto label_12137c;
        case 0x121380u: goto label_121380;
        case 0x121384u: goto label_121384;
        case 0x121388u: goto label_121388;
        case 0x12138cu: goto label_12138c;
        case 0x121390u: goto label_121390;
        case 0x121394u: goto label_121394;
        case 0x121398u: goto label_121398;
        case 0x12139cu: goto label_12139c;
        case 0x1213a0u: goto label_1213a0;
        case 0x1213a4u: goto label_1213a4;
        case 0x1213a8u: goto label_1213a8;
        case 0x1213acu: goto label_1213ac;
        case 0x1213b0u: goto label_1213b0;
        case 0x1213b4u: goto label_1213b4;
        case 0x1213b8u: goto label_1213b8;
        case 0x1213bcu: goto label_1213bc;
        case 0x1213c0u: goto label_1213c0;
        case 0x1213c4u: goto label_1213c4;
        case 0x1213c8u: goto label_1213c8;
        case 0x1213ccu: goto label_1213cc;
        case 0x1213d0u: goto label_1213d0;
        case 0x1213d4u: goto label_1213d4;
        case 0x1213d8u: goto label_1213d8;
        case 0x1213dcu: goto label_1213dc;
        case 0x1213e0u: goto label_1213e0;
        case 0x1213e4u: goto label_1213e4;
        case 0x1213e8u: goto label_1213e8;
        case 0x1213ecu: goto label_1213ec;
        case 0x1213f0u: goto label_1213f0;
        case 0x1213f4u: goto label_1213f4;
        case 0x1213f8u: goto label_1213f8;
        case 0x1213fcu: goto label_1213fc;
        case 0x121400u: goto label_121400;
        case 0x121404u: goto label_121404;
        case 0x121408u: goto label_121408;
        case 0x12140cu: goto label_12140c;
        case 0x121410u: goto label_121410;
        case 0x121414u: goto label_121414;
        case 0x121418u: goto label_121418;
        case 0x12141cu: goto label_12141c;
        case 0x121420u: goto label_121420;
        case 0x121424u: goto label_121424;
        case 0x121428u: goto label_121428;
        case 0x12142cu: goto label_12142c;
        case 0x121430u: goto label_121430;
        case 0x121434u: goto label_121434;
        case 0x121438u: goto label_121438;
        case 0x12143cu: goto label_12143c;
        case 0x121440u: goto label_121440;
        case 0x121444u: goto label_121444;
        case 0x121448u: goto label_121448;
        case 0x12144cu: goto label_12144c;
        case 0x121450u: goto label_121450;
        case 0x121454u: goto label_121454;
        case 0x121458u: goto label_121458;
        case 0x12145cu: goto label_12145c;
        case 0x121460u: goto label_121460;
        case 0x121464u: goto label_121464;
        case 0x121468u: goto label_121468;
        case 0x12146cu: goto label_12146c;
        case 0x121470u: goto label_121470;
        case 0x121474u: goto label_121474;
        case 0x121478u: goto label_121478;
        case 0x12147cu: goto label_12147c;
        case 0x121480u: goto label_121480;
        case 0x121484u: goto label_121484;
        case 0x121488u: goto label_121488;
        case 0x12148cu: goto label_12148c;
        case 0x121490u: goto label_121490;
        case 0x121494u: goto label_121494;
        case 0x121498u: goto label_121498;
        case 0x12149cu: goto label_12149c;
        case 0x1214a0u: goto label_1214a0;
        case 0x1214a4u: goto label_1214a4;
        case 0x1214a8u: goto label_1214a8;
        case 0x1214acu: goto label_1214ac;
        case 0x1214b0u: goto label_1214b0;
        case 0x1214b4u: goto label_1214b4;
        case 0x1214b8u: goto label_1214b8;
        case 0x1214bcu: goto label_1214bc;
        case 0x1214c0u: goto label_1214c0;
        case 0x1214c4u: goto label_1214c4;
        case 0x1214c8u: goto label_1214c8;
        case 0x1214ccu: goto label_1214cc;
        case 0x1214d0u: goto label_1214d0;
        case 0x1214d4u: goto label_1214d4;
        case 0x1214d8u: goto label_1214d8;
        case 0x1214dcu: goto label_1214dc;
        case 0x1214e0u: goto label_1214e0;
        case 0x1214e4u: goto label_1214e4;
        case 0x1214e8u: goto label_1214e8;
        case 0x1214ecu: goto label_1214ec;
        case 0x1214f0u: goto label_1214f0;
        case 0x1214f4u: goto label_1214f4;
        case 0x1214f8u: goto label_1214f8;
        case 0x1214fcu: goto label_1214fc;
        case 0x121500u: goto label_121500;
        case 0x121504u: goto label_121504;
        case 0x121508u: goto label_121508;
        case 0x12150cu: goto label_12150c;
        case 0x121510u: goto label_121510;
        case 0x121514u: goto label_121514;
        case 0x121518u: goto label_121518;
        case 0x12151cu: goto label_12151c;
        case 0x121520u: goto label_121520;
        case 0x121524u: goto label_121524;
        case 0x121528u: goto label_121528;
        case 0x12152cu: goto label_12152c;
        case 0x121530u: goto label_121530;
        case 0x121534u: goto label_121534;
        case 0x121538u: goto label_121538;
        case 0x12153cu: goto label_12153c;
        case 0x121540u: goto label_121540;
        case 0x121544u: goto label_121544;
        case 0x121548u: goto label_121548;
        case 0x12154cu: goto label_12154c;
        case 0x121550u: goto label_121550;
        case 0x121554u: goto label_121554;
        case 0x121558u: goto label_121558;
        case 0x12155cu: goto label_12155c;
        case 0x121560u: goto label_121560;
        case 0x121564u: goto label_121564;
        case 0x121568u: goto label_121568;
        case 0x12156cu: goto label_12156c;
        case 0x121570u: goto label_121570;
        case 0x121574u: goto label_121574;
        case 0x121578u: goto label_121578;
        case 0x12157cu: goto label_12157c;
        case 0x121580u: goto label_121580;
        case 0x121584u: goto label_121584;
        case 0x121588u: goto label_121588;
        case 0x12158cu: goto label_12158c;
        case 0x121590u: goto label_121590;
        case 0x121594u: goto label_121594;
        case 0x121598u: goto label_121598;
        case 0x12159cu: goto label_12159c;
        case 0x1215a0u: goto label_1215a0;
        case 0x1215a4u: goto label_1215a4;
        case 0x1215a8u: goto label_1215a8;
        case 0x1215acu: goto label_1215ac;
        case 0x1215b0u: goto label_1215b0;
        case 0x1215b4u: goto label_1215b4;
        case 0x1215b8u: goto label_1215b8;
        case 0x1215bcu: goto label_1215bc;
        case 0x1215c0u: goto label_1215c0;
        case 0x1215c4u: goto label_1215c4;
        case 0x1215c8u: goto label_1215c8;
        case 0x1215ccu: goto label_1215cc;
        case 0x1215d0u: goto label_1215d0;
        case 0x1215d4u: goto label_1215d4;
        case 0x1215d8u: goto label_1215d8;
        case 0x1215dcu: goto label_1215dc;
        case 0x1215e0u: goto label_1215e0;
        case 0x1215e4u: goto label_1215e4;
        case 0x1215e8u: goto label_1215e8;
        case 0x1215ecu: goto label_1215ec;
        case 0x1215f0u: goto label_1215f0;
        case 0x1215f4u: goto label_1215f4;
        case 0x1215f8u: goto label_1215f8;
        case 0x1215fcu: goto label_1215fc;
        case 0x121600u: goto label_121600;
        case 0x121604u: goto label_121604;
        case 0x121608u: goto label_121608;
        case 0x12160cu: goto label_12160c;
        case 0x121610u: goto label_121610;
        case 0x121614u: goto label_121614;
        case 0x121618u: goto label_121618;
        case 0x12161cu: goto label_12161c;
        case 0x121620u: goto label_121620;
        case 0x121624u: goto label_121624;
        case 0x121628u: goto label_121628;
        case 0x12162cu: goto label_12162c;
        case 0x121630u: goto label_121630;
        case 0x121634u: goto label_121634;
        case 0x121638u: goto label_121638;
        case 0x12163cu: goto label_12163c;
        case 0x121640u: goto label_121640;
        case 0x121644u: goto label_121644;
        case 0x121648u: goto label_121648;
        case 0x12164cu: goto label_12164c;
        case 0x121650u: goto label_121650;
        case 0x121654u: goto label_121654;
        case 0x121658u: goto label_121658;
        case 0x12165cu: goto label_12165c;
        case 0x121660u: goto label_121660;
        case 0x121664u: goto label_121664;
        case 0x121668u: goto label_121668;
        case 0x12166cu: goto label_12166c;
        case 0x121670u: goto label_121670;
        case 0x121674u: goto label_121674;
        case 0x121678u: goto label_121678;
        case 0x12167cu: goto label_12167c;
        case 0x121680u: goto label_121680;
        case 0x121684u: goto label_121684;
        case 0x121688u: goto label_121688;
        case 0x12168cu: goto label_12168c;
        case 0x121690u: goto label_121690;
        case 0x121694u: goto label_121694;
        case 0x121698u: goto label_121698;
        case 0x12169cu: goto label_12169c;
        case 0x1216a0u: goto label_1216a0;
        case 0x1216a4u: goto label_1216a4;
        case 0x1216a8u: goto label_1216a8;
        case 0x1216acu: goto label_1216ac;
        case 0x1216b0u: goto label_1216b0;
        case 0x1216b4u: goto label_1216b4;
        case 0x1216b8u: goto label_1216b8;
        case 0x1216bcu: goto label_1216bc;
        case 0x1216c0u: goto label_1216c0;
        case 0x1216c4u: goto label_1216c4;
        case 0x1216c8u: goto label_1216c8;
        case 0x1216ccu: goto label_1216cc;
        case 0x1216d0u: goto label_1216d0;
        case 0x1216d4u: goto label_1216d4;
        case 0x1216d8u: goto label_1216d8;
        case 0x1216dcu: goto label_1216dc;
        case 0x1216e0u: goto label_1216e0;
        case 0x1216e4u: goto label_1216e4;
        case 0x1216e8u: goto label_1216e8;
        case 0x1216ecu: goto label_1216ec;
        case 0x1216f0u: goto label_1216f0;
        case 0x1216f4u: goto label_1216f4;
        case 0x1216f8u: goto label_1216f8;
        case 0x1216fcu: goto label_1216fc;
        case 0x121700u: goto label_121700;
        case 0x121704u: goto label_121704;
        case 0x121708u: goto label_121708;
        case 0x12170cu: goto label_12170c;
        case 0x121710u: goto label_121710;
        case 0x121714u: goto label_121714;
        case 0x121718u: goto label_121718;
        case 0x12171cu: goto label_12171c;
        case 0x121720u: goto label_121720;
        case 0x121724u: goto label_121724;
        case 0x121728u: goto label_121728;
        case 0x12172cu: goto label_12172c;
        case 0x121730u: goto label_121730;
        case 0x121734u: goto label_121734;
        case 0x121738u: goto label_121738;
        case 0x12173cu: goto label_12173c;
        case 0x121740u: goto label_121740;
        case 0x121744u: goto label_121744;
        case 0x121748u: goto label_121748;
        case 0x12174cu: goto label_12174c;
        case 0x121750u: goto label_121750;
        case 0x121754u: goto label_121754;
        case 0x121758u: goto label_121758;
        case 0x12175cu: goto label_12175c;
        case 0x121760u: goto label_121760;
        case 0x121764u: goto label_121764;
        case 0x121768u: goto label_121768;
        case 0x12176cu: goto label_12176c;
        case 0x121770u: goto label_121770;
        case 0x121774u: goto label_121774;
        case 0x121778u: goto label_121778;
        case 0x12177cu: goto label_12177c;
        case 0x121780u: goto label_121780;
        case 0x121784u: goto label_121784;
        case 0x121788u: goto label_121788;
        case 0x12178cu: goto label_12178c;
        case 0x121790u: goto label_121790;
        case 0x121794u: goto label_121794;
        case 0x121798u: goto label_121798;
        case 0x12179cu: goto label_12179c;
        case 0x1217a0u: goto label_1217a0;
        case 0x1217a4u: goto label_1217a4;
        case 0x1217a8u: goto label_1217a8;
        case 0x1217acu: goto label_1217ac;
        case 0x1217b0u: goto label_1217b0;
        case 0x1217b4u: goto label_1217b4;
        case 0x1217b8u: goto label_1217b8;
        case 0x1217bcu: goto label_1217bc;
        case 0x1217c0u: goto label_1217c0;
        case 0x1217c4u: goto label_1217c4;
        case 0x1217c8u: goto label_1217c8;
        case 0x1217ccu: goto label_1217cc;
        case 0x1217d0u: goto label_1217d0;
        case 0x1217d4u: goto label_1217d4;
        case 0x1217d8u: goto label_1217d8;
        case 0x1217dcu: goto label_1217dc;
        case 0x1217e0u: goto label_1217e0;
        case 0x1217e4u: goto label_1217e4;
        case 0x1217e8u: goto label_1217e8;
        case 0x1217ecu: goto label_1217ec;
        case 0x1217f0u: goto label_1217f0;
        case 0x1217f4u: goto label_1217f4;
        case 0x1217f8u: goto label_1217f8;
        case 0x1217fcu: goto label_1217fc;
        case 0x121800u: goto label_121800;
        case 0x121804u: goto label_121804;
        case 0x121808u: goto label_121808;
        case 0x12180cu: goto label_12180c;
        case 0x121810u: goto label_121810;
        case 0x121814u: goto label_121814;
        case 0x121818u: goto label_121818;
        case 0x12181cu: goto label_12181c;
        case 0x121820u: goto label_121820;
        case 0x121824u: goto label_121824;
        case 0x121828u: goto label_121828;
        case 0x12182cu: goto label_12182c;
        case 0x121830u: goto label_121830;
        case 0x121834u: goto label_121834;
        case 0x121838u: goto label_121838;
        case 0x12183cu: goto label_12183c;
        case 0x121840u: goto label_121840;
        case 0x121844u: goto label_121844;
        case 0x121848u: goto label_121848;
        case 0x12184cu: goto label_12184c;
        case 0x121850u: goto label_121850;
        case 0x121854u: goto label_121854;
        case 0x121858u: goto label_121858;
        case 0x12185cu: goto label_12185c;
        case 0x121860u: goto label_121860;
        case 0x121864u: goto label_121864;
        case 0x121868u: goto label_121868;
        case 0x12186cu: goto label_12186c;
        case 0x121870u: goto label_121870;
        case 0x121874u: goto label_121874;
        case 0x121878u: goto label_121878;
        case 0x12187cu: goto label_12187c;
        case 0x121880u: goto label_121880;
        case 0x121884u: goto label_121884;
        case 0x121888u: goto label_121888;
        case 0x12188cu: goto label_12188c;
        case 0x121890u: goto label_121890;
        case 0x121894u: goto label_121894;
        case 0x121898u: goto label_121898;
        case 0x12189cu: goto label_12189c;
        case 0x1218a0u: goto label_1218a0;
        case 0x1218a4u: goto label_1218a4;
        case 0x1218a8u: goto label_1218a8;
        case 0x1218acu: goto label_1218ac;
        case 0x1218b0u: goto label_1218b0;
        case 0x1218b4u: goto label_1218b4;
        case 0x1218b8u: goto label_1218b8;
        case 0x1218bcu: goto label_1218bc;
        case 0x1218c0u: goto label_1218c0;
        case 0x1218c4u: goto label_1218c4;
        case 0x1218c8u: goto label_1218c8;
        case 0x1218ccu: goto label_1218cc;
        case 0x1218d0u: goto label_1218d0;
        case 0x1218d4u: goto label_1218d4;
        case 0x1218d8u: goto label_1218d8;
        case 0x1218dcu: goto label_1218dc;
        case 0x1218e0u: goto label_1218e0;
        case 0x1218e4u: goto label_1218e4;
        case 0x1218e8u: goto label_1218e8;
        case 0x1218ecu: goto label_1218ec;
        case 0x1218f0u: goto label_1218f0;
        case 0x1218f4u: goto label_1218f4;
        case 0x1218f8u: goto label_1218f8;
        case 0x1218fcu: goto label_1218fc;
        case 0x121900u: goto label_121900;
        case 0x121904u: goto label_121904;
        case 0x121908u: goto label_121908;
        case 0x12190cu: goto label_12190c;
        case 0x121910u: goto label_121910;
        case 0x121914u: goto label_121914;
        case 0x121918u: goto label_121918;
        case 0x12191cu: goto label_12191c;
        case 0x121920u: goto label_121920;
        case 0x121924u: goto label_121924;
        case 0x121928u: goto label_121928;
        case 0x12192cu: goto label_12192c;
        case 0x121930u: goto label_121930;
        case 0x121934u: goto label_121934;
        case 0x121938u: goto label_121938;
        case 0x12193cu: goto label_12193c;
        case 0x121940u: goto label_121940;
        case 0x121944u: goto label_121944;
        case 0x121948u: goto label_121948;
        case 0x12194cu: goto label_12194c;
        case 0x121950u: goto label_121950;
        case 0x121954u: goto label_121954;
        case 0x121958u: goto label_121958;
        case 0x12195cu: goto label_12195c;
        case 0x121960u: goto label_121960;
        case 0x121964u: goto label_121964;
        case 0x121968u: goto label_121968;
        case 0x12196cu: goto label_12196c;
        case 0x121970u: goto label_121970;
        case 0x121974u: goto label_121974;
        case 0x121978u: goto label_121978;
        case 0x12197cu: goto label_12197c;
        case 0x121980u: goto label_121980;
        case 0x121984u: goto label_121984;
        case 0x121988u: goto label_121988;
        case 0x12198cu: goto label_12198c;
        case 0x121990u: goto label_121990;
        case 0x121994u: goto label_121994;
        case 0x121998u: goto label_121998;
        case 0x12199cu: goto label_12199c;
        case 0x1219a0u: goto label_1219a0;
        case 0x1219a4u: goto label_1219a4;
        case 0x1219a8u: goto label_1219a8;
        case 0x1219acu: goto label_1219ac;
        case 0x1219b0u: goto label_1219b0;
        case 0x1219b4u: goto label_1219b4;
        case 0x1219b8u: goto label_1219b8;
        case 0x1219bcu: goto label_1219bc;
        case 0x1219c0u: goto label_1219c0;
        case 0x1219c4u: goto label_1219c4;
        case 0x1219c8u: goto label_1219c8;
        case 0x1219ccu: goto label_1219cc;
        case 0x1219d0u: goto label_1219d0;
        case 0x1219d4u: goto label_1219d4;
        case 0x1219d8u: goto label_1219d8;
        case 0x1219dcu: goto label_1219dc;
        case 0x1219e0u: goto label_1219e0;
        case 0x1219e4u: goto label_1219e4;
        case 0x1219e8u: goto label_1219e8;
        case 0x1219ecu: goto label_1219ec;
        case 0x1219f0u: goto label_1219f0;
        case 0x1219f4u: goto label_1219f4;
        case 0x1219f8u: goto label_1219f8;
        case 0x1219fcu: goto label_1219fc;
        case 0x121a00u: goto label_121a00;
        case 0x121a04u: goto label_121a04;
        case 0x121a08u: goto label_121a08;
        case 0x121a0cu: goto label_121a0c;
        case 0x121a10u: goto label_121a10;
        case 0x121a14u: goto label_121a14;
        case 0x121a18u: goto label_121a18;
        case 0x121a1cu: goto label_121a1c;
        case 0x121a20u: goto label_121a20;
        case 0x121a24u: goto label_121a24;
        case 0x121a28u: goto label_121a28;
        case 0x121a2cu: goto label_121a2c;
        case 0x121a30u: goto label_121a30;
        case 0x121a34u: goto label_121a34;
        case 0x121a38u: goto label_121a38;
        case 0x121a3cu: goto label_121a3c;
        case 0x121a40u: goto label_121a40;
        case 0x121a44u: goto label_121a44;
        case 0x121a48u: goto label_121a48;
        case 0x121a4cu: goto label_121a4c;
        case 0x121a50u: goto label_121a50;
        case 0x121a54u: goto label_121a54;
        case 0x121a58u: goto label_121a58;
        case 0x121a5cu: goto label_121a5c;
        case 0x121a60u: goto label_121a60;
        case 0x121a64u: goto label_121a64;
        case 0x121a68u: goto label_121a68;
        case 0x121a6cu: goto label_121a6c;
        case 0x121a70u: goto label_121a70;
        case 0x121a74u: goto label_121a74;
        case 0x121a78u: goto label_121a78;
        case 0x121a7cu: goto label_121a7c;
        case 0x121a80u: goto label_121a80;
        case 0x121a84u: goto label_121a84;
        case 0x121a88u: goto label_121a88;
        case 0x121a8cu: goto label_121a8c;
        case 0x121a90u: goto label_121a90;
        case 0x121a94u: goto label_121a94;
        case 0x121a98u: goto label_121a98;
        case 0x121a9cu: goto label_121a9c;
        case 0x121aa0u: goto label_121aa0;
        case 0x121aa4u: goto label_121aa4;
        case 0x121aa8u: goto label_121aa8;
        case 0x121aacu: goto label_121aac;
        case 0x121ab0u: goto label_121ab0;
        case 0x121ab4u: goto label_121ab4;
        case 0x121ab8u: goto label_121ab8;
        case 0x121abcu: goto label_121abc;
        case 0x121ac0u: goto label_121ac0;
        case 0x121ac4u: goto label_121ac4;
        case 0x121ac8u: goto label_121ac8;
        case 0x121accu: goto label_121acc;
        case 0x121ad0u: goto label_121ad0;
        case 0x121ad4u: goto label_121ad4;
        case 0x121ad8u: goto label_121ad8;
        case 0x121adcu: goto label_121adc;
        case 0x121ae0u: goto label_121ae0;
        case 0x121ae4u: goto label_121ae4;
        case 0x121ae8u: goto label_121ae8;
        case 0x121aecu: goto label_121aec;
        case 0x121af0u: goto label_121af0;
        case 0x121af4u: goto label_121af4;
        case 0x121af8u: goto label_121af8;
        case 0x121afcu: goto label_121afc;
        case 0x121b00u: goto label_121b00;
        case 0x121b04u: goto label_121b04;
        case 0x121b08u: goto label_121b08;
        case 0x121b0cu: goto label_121b0c;
        case 0x121b10u: goto label_121b10;
        case 0x121b14u: goto label_121b14;
        case 0x121b18u: goto label_121b18;
        case 0x121b1cu: goto label_121b1c;
        case 0x121b20u: goto label_121b20;
        case 0x121b24u: goto label_121b24;
        case 0x121b28u: goto label_121b28;
        case 0x121b2cu: goto label_121b2c;
        case 0x121b30u: goto label_121b30;
        case 0x121b34u: goto label_121b34;
        case 0x121b38u: goto label_121b38;
        case 0x121b3cu: goto label_121b3c;
        case 0x121b40u: goto label_121b40;
        case 0x121b44u: goto label_121b44;
        case 0x121b48u: goto label_121b48;
        case 0x121b4cu: goto label_121b4c;
        case 0x121b50u: goto label_121b50;
        case 0x121b54u: goto label_121b54;
        case 0x121b58u: goto label_121b58;
        case 0x121b5cu: goto label_121b5c;
        case 0x121b60u: goto label_121b60;
        case 0x121b64u: goto label_121b64;
        case 0x121b68u: goto label_121b68;
        case 0x121b6cu: goto label_121b6c;
        case 0x121b70u: goto label_121b70;
        case 0x121b74u: goto label_121b74;
        case 0x121b78u: goto label_121b78;
        case 0x121b7cu: goto label_121b7c;
        case 0x121b80u: goto label_121b80;
        case 0x121b84u: goto label_121b84;
        case 0x121b88u: goto label_121b88;
        case 0x121b8cu: goto label_121b8c;
        case 0x121b90u: goto label_121b90;
        case 0x121b94u: goto label_121b94;
        case 0x121b98u: goto label_121b98;
        case 0x121b9cu: goto label_121b9c;
        case 0x121ba0u: goto label_121ba0;
        case 0x121ba4u: goto label_121ba4;
        case 0x121ba8u: goto label_121ba8;
        case 0x121bacu: goto label_121bac;
        case 0x121bb0u: goto label_121bb0;
        case 0x121bb4u: goto label_121bb4;
        case 0x121bb8u: goto label_121bb8;
        case 0x121bbcu: goto label_121bbc;
        case 0x121bc0u: goto label_121bc0;
        case 0x121bc4u: goto label_121bc4;
        case 0x121bc8u: goto label_121bc8;
        case 0x121bccu: goto label_121bcc;
        case 0x121bd0u: goto label_121bd0;
        case 0x121bd4u: goto label_121bd4;
        case 0x121bd8u: goto label_121bd8;
        case 0x121bdcu: goto label_121bdc;
        case 0x121be0u: goto label_121be0;
        case 0x121be4u: goto label_121be4;
        case 0x121be8u: goto label_121be8;
        case 0x121becu: goto label_121bec;
        case 0x121bf0u: goto label_121bf0;
        case 0x121bf4u: goto label_121bf4;
        case 0x121bf8u: goto label_121bf8;
        case 0x121bfcu: goto label_121bfc;
        case 0x121c00u: goto label_121c00;
        case 0x121c04u: goto label_121c04;
        case 0x121c08u: goto label_121c08;
        case 0x121c0cu: goto label_121c0c;
        case 0x121c10u: goto label_121c10;
        case 0x121c14u: goto label_121c14;
        case 0x121c18u: goto label_121c18;
        case 0x121c1cu: goto label_121c1c;
        case 0x121c20u: goto label_121c20;
        case 0x121c24u: goto label_121c24;
        case 0x121c28u: goto label_121c28;
        case 0x121c2cu: goto label_121c2c;
        case 0x121c30u: goto label_121c30;
        case 0x121c34u: goto label_121c34;
        case 0x121c38u: goto label_121c38;
        case 0x121c3cu: goto label_121c3c;
        case 0x121c40u: goto label_121c40;
        case 0x121c44u: goto label_121c44;
        case 0x121c48u: goto label_121c48;
        case 0x121c4cu: goto label_121c4c;
        case 0x121c50u: goto label_121c50;
        case 0x121c54u: goto label_121c54;
        case 0x121c58u: goto label_121c58;
        case 0x121c5cu: goto label_121c5c;
        case 0x121c60u: goto label_121c60;
        case 0x121c64u: goto label_121c64;
        case 0x121c68u: goto label_121c68;
        case 0x121c6cu: goto label_121c6c;
        case 0x121c70u: goto label_121c70;
        case 0x121c74u: goto label_121c74;
        case 0x121c78u: goto label_121c78;
        case 0x121c7cu: goto label_121c7c;
        case 0x121c80u: goto label_121c80;
        case 0x121c84u: goto label_121c84;
        case 0x121c88u: goto label_121c88;
        case 0x121c8cu: goto label_121c8c;
        case 0x121c90u: goto label_121c90;
        case 0x121c94u: goto label_121c94;
        case 0x121c98u: goto label_121c98;
        case 0x121c9cu: goto label_121c9c;
        case 0x121ca0u: goto label_121ca0;
        case 0x121ca4u: goto label_121ca4;
        case 0x121ca8u: goto label_121ca8;
        case 0x121cacu: goto label_121cac;
        case 0x121cb0u: goto label_121cb0;
        case 0x121cb4u: goto label_121cb4;
        case 0x121cb8u: goto label_121cb8;
        case 0x121cbcu: goto label_121cbc;
        case 0x121cc0u: goto label_121cc0;
        case 0x121cc4u: goto label_121cc4;
        case 0x121cc8u: goto label_121cc8;
        case 0x121cccu: goto label_121ccc;
        case 0x121cd0u: goto label_121cd0;
        case 0x121cd4u: goto label_121cd4;
        case 0x121cd8u: goto label_121cd8;
        case 0x121cdcu: goto label_121cdc;
        case 0x121ce0u: goto label_121ce0;
        case 0x121ce4u: goto label_121ce4;
        case 0x121ce8u: goto label_121ce8;
        case 0x121cecu: goto label_121cec;
        case 0x121cf0u: goto label_121cf0;
        case 0x121cf4u: goto label_121cf4;
        case 0x121cf8u: goto label_121cf8;
        case 0x121cfcu: goto label_121cfc;
        case 0x121d00u: goto label_121d00;
        case 0x121d04u: goto label_121d04;
        case 0x121d08u: goto label_121d08;
        case 0x121d0cu: goto label_121d0c;
        case 0x121d10u: goto label_121d10;
        case 0x121d14u: goto label_121d14;
        case 0x121d18u: goto label_121d18;
        case 0x121d1cu: goto label_121d1c;
        case 0x121d20u: goto label_121d20;
        case 0x121d24u: goto label_121d24;
        case 0x121d28u: goto label_121d28;
        case 0x121d2cu: goto label_121d2c;
        case 0x121d30u: goto label_121d30;
        case 0x121d34u: goto label_121d34;
        case 0x121d38u: goto label_121d38;
        case 0x121d3cu: goto label_121d3c;
        case 0x121d40u: goto label_121d40;
        case 0x121d44u: goto label_121d44;
        case 0x121d48u: goto label_121d48;
        case 0x121d4cu: goto label_121d4c;
        case 0x121d50u: goto label_121d50;
        case 0x121d54u: goto label_121d54;
        case 0x121d58u: goto label_121d58;
        case 0x121d5cu: goto label_121d5c;
        case 0x121d60u: goto label_121d60;
        case 0x121d64u: goto label_121d64;
        case 0x121d68u: goto label_121d68;
        case 0x121d6cu: goto label_121d6c;
        case 0x121d70u: goto label_121d70;
        case 0x121d74u: goto label_121d74;
        case 0x121d78u: goto label_121d78;
        case 0x121d7cu: goto label_121d7c;
        case 0x121d80u: goto label_121d80;
        case 0x121d84u: goto label_121d84;
        case 0x121d88u: goto label_121d88;
        case 0x121d8cu: goto label_121d8c;
        case 0x121d90u: goto label_121d90;
        case 0x121d94u: goto label_121d94;
        case 0x121d98u: goto label_121d98;
        case 0x121d9cu: goto label_121d9c;
        case 0x121da0u: goto label_121da0;
        case 0x121da4u: goto label_121da4;
        case 0x121da8u: goto label_121da8;
        case 0x121dacu: goto label_121dac;
        case 0x121db0u: goto label_121db0;
        case 0x121db4u: goto label_121db4;
        case 0x121db8u: goto label_121db8;
        case 0x121dbcu: goto label_121dbc;
        case 0x121dc0u: goto label_121dc0;
        case 0x121dc4u: goto label_121dc4;
        case 0x121dc8u: goto label_121dc8;
        case 0x121dccu: goto label_121dcc;
        case 0x121dd0u: goto label_121dd0;
        case 0x121dd4u: goto label_121dd4;
        case 0x121dd8u: goto label_121dd8;
        case 0x121ddcu: goto label_121ddc;
        case 0x121de0u: goto label_121de0;
        case 0x121de4u: goto label_121de4;
        case 0x121de8u: goto label_121de8;
        case 0x121decu: goto label_121dec;
        case 0x121df0u: goto label_121df0;
        case 0x121df4u: goto label_121df4;
        case 0x121df8u: goto label_121df8;
        case 0x121dfcu: goto label_121dfc;
        case 0x121e00u: goto label_121e00;
        case 0x121e04u: goto label_121e04;
        case 0x121e08u: goto label_121e08;
        case 0x121e0cu: goto label_121e0c;
        case 0x121e10u: goto label_121e10;
        case 0x121e14u: goto label_121e14;
        case 0x121e18u: goto label_121e18;
        case 0x121e1cu: goto label_121e1c;
        case 0x121e20u: goto label_121e20;
        case 0x121e24u: goto label_121e24;
        case 0x121e28u: goto label_121e28;
        case 0x121e2cu: goto label_121e2c;
        case 0x121e30u: goto label_121e30;
        case 0x121e34u: goto label_121e34;
        case 0x121e38u: goto label_121e38;
        case 0x121e3cu: goto label_121e3c;
        case 0x121e40u: goto label_121e40;
        case 0x121e44u: goto label_121e44;
        case 0x121e48u: goto label_121e48;
        case 0x121e4cu: goto label_121e4c;
        case 0x121e50u: goto label_121e50;
        case 0x121e54u: goto label_121e54;
        case 0x121e58u: goto label_121e58;
        case 0x121e5cu: goto label_121e5c;
        case 0x121e60u: goto label_121e60;
        case 0x121e64u: goto label_121e64;
        case 0x121e68u: goto label_121e68;
        case 0x121e6cu: goto label_121e6c;
        case 0x121e70u: goto label_121e70;
        case 0x121e74u: goto label_121e74;
        case 0x121e78u: goto label_121e78;
        case 0x121e7cu: goto label_121e7c;
        case 0x121e80u: goto label_121e80;
        case 0x121e84u: goto label_121e84;
        case 0x121e88u: goto label_121e88;
        case 0x121e8cu: goto label_121e8c;
        case 0x121e90u: goto label_121e90;
        case 0x121e94u: goto label_121e94;
        case 0x121e98u: goto label_121e98;
        case 0x121e9cu: goto label_121e9c;
        case 0x121ea0u: goto label_121ea0;
        case 0x121ea4u: goto label_121ea4;
        case 0x121ea8u: goto label_121ea8;
        case 0x121eacu: goto label_121eac;
        case 0x121eb0u: goto label_121eb0;
        case 0x121eb4u: goto label_121eb4;
        case 0x121eb8u: goto label_121eb8;
        case 0x121ebcu: goto label_121ebc;
        case 0x121ec0u: goto label_121ec0;
        case 0x121ec4u: goto label_121ec4;
        case 0x121ec8u: goto label_121ec8;
        case 0x121eccu: goto label_121ecc;
        case 0x121ed0u: goto label_121ed0;
        case 0x121ed4u: goto label_121ed4;
        case 0x121ed8u: goto label_121ed8;
        case 0x121edcu: goto label_121edc;
        case 0x121ee0u: goto label_121ee0;
        case 0x121ee4u: goto label_121ee4;
        case 0x121ee8u: goto label_121ee8;
        case 0x121eecu: goto label_121eec;
        case 0x121ef0u: goto label_121ef0;
        case 0x121ef4u: goto label_121ef4;
        case 0x121ef8u: goto label_121ef8;
        case 0x121efcu: goto label_121efc;
        case 0x121f00u: goto label_121f00;
        case 0x121f04u: goto label_121f04;
        case 0x121f08u: goto label_121f08;
        case 0x121f0cu: goto label_121f0c;
        case 0x121f10u: goto label_121f10;
        case 0x121f14u: goto label_121f14;
        case 0x121f18u: goto label_121f18;
        case 0x121f1cu: goto label_121f1c;
        case 0x121f20u: goto label_121f20;
        case 0x121f24u: goto label_121f24;
        case 0x121f28u: goto label_121f28;
        case 0x121f2cu: goto label_121f2c;
        case 0x121f30u: goto label_121f30;
        case 0x121f34u: goto label_121f34;
        case 0x121f38u: goto label_121f38;
        case 0x121f3cu: goto label_121f3c;
        case 0x121f40u: goto label_121f40;
        case 0x121f44u: goto label_121f44;
        case 0x121f48u: goto label_121f48;
        case 0x121f4cu: goto label_121f4c;
        case 0x121f50u: goto label_121f50;
        case 0x121f54u: goto label_121f54;
        case 0x121f58u: goto label_121f58;
        case 0x121f5cu: goto label_121f5c;
        case 0x121f60u: goto label_121f60;
        case 0x121f64u: goto label_121f64;
        case 0x121f68u: goto label_121f68;
        case 0x121f6cu: goto label_121f6c;
        case 0x121f70u: goto label_121f70;
        case 0x121f74u: goto label_121f74;
        case 0x121f78u: goto label_121f78;
        case 0x121f7cu: goto label_121f7c;
        case 0x121f80u: goto label_121f80;
        case 0x121f84u: goto label_121f84;
        case 0x121f88u: goto label_121f88;
        case 0x121f8cu: goto label_121f8c;
        case 0x121f90u: goto label_121f90;
        case 0x121f94u: goto label_121f94;
        case 0x121f98u: goto label_121f98;
        case 0x121f9cu: goto label_121f9c;
        case 0x121fa0u: goto label_121fa0;
        case 0x121fa4u: goto label_121fa4;
        case 0x121fa8u: goto label_121fa8;
        case 0x121facu: goto label_121fac;
        case 0x121fb0u: goto label_121fb0;
        case 0x121fb4u: goto label_121fb4;
        case 0x121fb8u: goto label_121fb8;
        case 0x121fbcu: goto label_121fbc;
        case 0x121fc0u: goto label_121fc0;
        case 0x121fc4u: goto label_121fc4;
        case 0x121fc8u: goto label_121fc8;
        case 0x121fccu: goto label_121fcc;
        case 0x121fd0u: goto label_121fd0;
        case 0x121fd4u: goto label_121fd4;
        case 0x121fd8u: goto label_121fd8;
        case 0x121fdcu: goto label_121fdc;
        case 0x121fe0u: goto label_121fe0;
        case 0x121fe4u: goto label_121fe4;
        case 0x121fe8u: goto label_121fe8;
        case 0x121fecu: goto label_121fec;
        case 0x121ff0u: goto label_121ff0;
        case 0x121ff4u: goto label_121ff4;
        case 0x121ff8u: goto label_121ff8;
        case 0x121ffcu: goto label_121ffc;
        case 0x122000u: goto label_122000;
        case 0x122004u: goto label_122004;
        case 0x122008u: goto label_122008;
        case 0x12200cu: goto label_12200c;
        case 0x122010u: goto label_122010;
        case 0x122014u: goto label_122014;
        case 0x122018u: goto label_122018;
        case 0x12201cu: goto label_12201c;
        case 0x122020u: goto label_122020;
        case 0x122024u: goto label_122024;
        case 0x122028u: goto label_122028;
        case 0x12202cu: goto label_12202c;
        case 0x122030u: goto label_122030;
        case 0x122034u: goto label_122034;
        case 0x122038u: goto label_122038;
        case 0x12203cu: goto label_12203c;
        case 0x122040u: goto label_122040;
        case 0x122044u: goto label_122044;
        case 0x122048u: goto label_122048;
        case 0x12204cu: goto label_12204c;
        case 0x122050u: goto label_122050;
        case 0x122054u: goto label_122054;
        case 0x122058u: goto label_122058;
        case 0x12205cu: goto label_12205c;
        case 0x122060u: goto label_122060;
        case 0x122064u: goto label_122064;
        case 0x122068u: goto label_122068;
        case 0x12206cu: goto label_12206c;
        case 0x122070u: goto label_122070;
        case 0x122074u: goto label_122074;
        case 0x122078u: goto label_122078;
        case 0x12207cu: goto label_12207c;
        case 0x122080u: goto label_122080;
        case 0x122084u: goto label_122084;
        case 0x122088u: goto label_122088;
        case 0x12208cu: goto label_12208c;
        case 0x122090u: goto label_122090;
        case 0x122094u: goto label_122094;
        case 0x122098u: goto label_122098;
        case 0x12209cu: goto label_12209c;
        case 0x1220a0u: goto label_1220a0;
        case 0x1220a4u: goto label_1220a4;
        case 0x1220a8u: goto label_1220a8;
        case 0x1220acu: goto label_1220ac;
        case 0x1220b0u: goto label_1220b0;
        case 0x1220b4u: goto label_1220b4;
        case 0x1220b8u: goto label_1220b8;
        case 0x1220bcu: goto label_1220bc;
        case 0x1220c0u: goto label_1220c0;
        case 0x1220c4u: goto label_1220c4;
        case 0x1220c8u: goto label_1220c8;
        case 0x1220ccu: goto label_1220cc;
        case 0x1220d0u: goto label_1220d0;
        case 0x1220d4u: goto label_1220d4;
        case 0x1220d8u: goto label_1220d8;
        case 0x1220dcu: goto label_1220dc;
        case 0x1220e0u: goto label_1220e0;
        case 0x1220e4u: goto label_1220e4;
        case 0x1220e8u: goto label_1220e8;
        case 0x1220ecu: goto label_1220ec;
        case 0x1220f0u: goto label_1220f0;
        case 0x1220f4u: goto label_1220f4;
        case 0x1220f8u: goto label_1220f8;
        case 0x1220fcu: goto label_1220fc;
        case 0x122100u: goto label_122100;
        case 0x122104u: goto label_122104;
        case 0x122108u: goto label_122108;
        case 0x12210cu: goto label_12210c;
        case 0x122110u: goto label_122110;
        case 0x122114u: goto label_122114;
        case 0x122118u: goto label_122118;
        case 0x12211cu: goto label_12211c;
        case 0x122120u: goto label_122120;
        case 0x122124u: goto label_122124;
        case 0x122128u: goto label_122128;
        case 0x12212cu: goto label_12212c;
        case 0x122130u: goto label_122130;
        case 0x122134u: goto label_122134;
        case 0x122138u: goto label_122138;
        case 0x12213cu: goto label_12213c;
        case 0x122140u: goto label_122140;
        case 0x122144u: goto label_122144;
        case 0x122148u: goto label_122148;
        case 0x12214cu: goto label_12214c;
        case 0x122150u: goto label_122150;
        case 0x122154u: goto label_122154;
        case 0x122158u: goto label_122158;
        case 0x12215cu: goto label_12215c;
        case 0x122160u: goto label_122160;
        case 0x122164u: goto label_122164;
        case 0x122168u: goto label_122168;
        case 0x12216cu: goto label_12216c;
        case 0x122170u: goto label_122170;
        case 0x122174u: goto label_122174;
        case 0x122178u: goto label_122178;
        case 0x12217cu: goto label_12217c;
        case 0x122180u: goto label_122180;
        case 0x122184u: goto label_122184;
        case 0x122188u: goto label_122188;
        case 0x12218cu: goto label_12218c;
        case 0x122190u: goto label_122190;
        case 0x122194u: goto label_122194;
        case 0x122198u: goto label_122198;
        case 0x12219cu: goto label_12219c;
        case 0x1221a0u: goto label_1221a0;
        case 0x1221a4u: goto label_1221a4;
        case 0x1221a8u: goto label_1221a8;
        case 0x1221acu: goto label_1221ac;
        case 0x1221b0u: goto label_1221b0;
        case 0x1221b4u: goto label_1221b4;
        case 0x1221b8u: goto label_1221b8;
        case 0x1221bcu: goto label_1221bc;
        case 0x1221c0u: goto label_1221c0;
        case 0x1221c4u: goto label_1221c4;
        case 0x1221c8u: goto label_1221c8;
        case 0x1221ccu: goto label_1221cc;
        case 0x1221d0u: goto label_1221d0;
        case 0x1221d4u: goto label_1221d4;
        case 0x1221d8u: goto label_1221d8;
        case 0x1221dcu: goto label_1221dc;
        case 0x1221e0u: goto label_1221e0;
        case 0x1221e4u: goto label_1221e4;
        case 0x1221e8u: goto label_1221e8;
        case 0x1221ecu: goto label_1221ec;
        case 0x1221f0u: goto label_1221f0;
        case 0x1221f4u: goto label_1221f4;
        case 0x1221f8u: goto label_1221f8;
        case 0x1221fcu: goto label_1221fc;
        case 0x122200u: goto label_122200;
        case 0x122204u: goto label_122204;
        case 0x122208u: goto label_122208;
        case 0x12220cu: goto label_12220c;
        case 0x122210u: goto label_122210;
        case 0x122214u: goto label_122214;
        case 0x122218u: goto label_122218;
        case 0x12221cu: goto label_12221c;
        case 0x122220u: goto label_122220;
        case 0x122224u: goto label_122224;
        case 0x122228u: goto label_122228;
        case 0x12222cu: goto label_12222c;
        case 0x122230u: goto label_122230;
        case 0x122234u: goto label_122234;
        case 0x122238u: goto label_122238;
        case 0x12223cu: goto label_12223c;
        case 0x122240u: goto label_122240;
        case 0x122244u: goto label_122244;
        case 0x122248u: goto label_122248;
        case 0x12224cu: goto label_12224c;
        case 0x122250u: goto label_122250;
        case 0x122254u: goto label_122254;
        case 0x122258u: goto label_122258;
        case 0x12225cu: goto label_12225c;
        case 0x122260u: goto label_122260;
        case 0x122264u: goto label_122264;
        case 0x122268u: goto label_122268;
        case 0x12226cu: goto label_12226c;
        case 0x122270u: goto label_122270;
        case 0x122274u: goto label_122274;
        case 0x122278u: goto label_122278;
        case 0x12227cu: goto label_12227c;
        case 0x122280u: goto label_122280;
        case 0x122284u: goto label_122284;
        case 0x122288u: goto label_122288;
        case 0x12228cu: goto label_12228c;
        case 0x122290u: goto label_122290;
        case 0x122294u: goto label_122294;
        case 0x122298u: goto label_122298;
        case 0x12229cu: goto label_12229c;
        case 0x1222a0u: goto label_1222a0;
        case 0x1222a4u: goto label_1222a4;
        case 0x1222a8u: goto label_1222a8;
        case 0x1222acu: goto label_1222ac;
        case 0x1222b0u: goto label_1222b0;
        case 0x1222b4u: goto label_1222b4;
        case 0x1222b8u: goto label_1222b8;
        case 0x1222bcu: goto label_1222bc;
        case 0x1222c0u: goto label_1222c0;
        case 0x1222c4u: goto label_1222c4;
        case 0x1222c8u: goto label_1222c8;
        case 0x1222ccu: goto label_1222cc;
        case 0x1222d0u: goto label_1222d0;
        case 0x1222d4u: goto label_1222d4;
        case 0x1222d8u: goto label_1222d8;
        case 0x1222dcu: goto label_1222dc;
        case 0x1222e0u: goto label_1222e0;
        case 0x1222e4u: goto label_1222e4;
        case 0x1222e8u: goto label_1222e8;
        case 0x1222ecu: goto label_1222ec;
        case 0x1222f0u: goto label_1222f0;
        case 0x1222f4u: goto label_1222f4;
        case 0x1222f8u: goto label_1222f8;
        case 0x1222fcu: goto label_1222fc;
        case 0x122300u: goto label_122300;
        case 0x122304u: goto label_122304;
        case 0x122308u: goto label_122308;
        case 0x12230cu: goto label_12230c;
        case 0x122310u: goto label_122310;
        case 0x122314u: goto label_122314;
        case 0x122318u: goto label_122318;
        case 0x12231cu: goto label_12231c;
        case 0x122320u: goto label_122320;
        case 0x122324u: goto label_122324;
        case 0x122328u: goto label_122328;
        case 0x12232cu: goto label_12232c;
        case 0x122330u: goto label_122330;
        case 0x122334u: goto label_122334;
        case 0x122338u: goto label_122338;
        case 0x12233cu: goto label_12233c;
        case 0x122340u: goto label_122340;
        case 0x122344u: goto label_122344;
        case 0x122348u: goto label_122348;
        case 0x12234cu: goto label_12234c;
        case 0x122350u: goto label_122350;
        case 0x122354u: goto label_122354;
        case 0x122358u: goto label_122358;
        case 0x12235cu: goto label_12235c;
        case 0x122360u: goto label_122360;
        case 0x122364u: goto label_122364;
        case 0x122368u: goto label_122368;
        case 0x12236cu: goto label_12236c;
        case 0x122370u: goto label_122370;
        case 0x122374u: goto label_122374;
        case 0x122378u: goto label_122378;
        case 0x12237cu: goto label_12237c;
        case 0x122380u: goto label_122380;
        case 0x122384u: goto label_122384;
        case 0x122388u: goto label_122388;
        case 0x12238cu: goto label_12238c;
        case 0x122390u: goto label_122390;
        case 0x122394u: goto label_122394;
        case 0x122398u: goto label_122398;
        case 0x12239cu: goto label_12239c;
        case 0x1223a0u: goto label_1223a0;
        case 0x1223a4u: goto label_1223a4;
        case 0x1223a8u: goto label_1223a8;
        case 0x1223acu: goto label_1223ac;
        case 0x1223b0u: goto label_1223b0;
        case 0x1223b4u: goto label_1223b4;
        case 0x1223b8u: goto label_1223b8;
        case 0x1223bcu: goto label_1223bc;
        case 0x1223c0u: goto label_1223c0;
        case 0x1223c4u: goto label_1223c4;
        case 0x1223c8u: goto label_1223c8;
        case 0x1223ccu: goto label_1223cc;
        case 0x1223d0u: goto label_1223d0;
        case 0x1223d4u: goto label_1223d4;
        case 0x1223d8u: goto label_1223d8;
        case 0x1223dcu: goto label_1223dc;
        case 0x1223e0u: goto label_1223e0;
        case 0x1223e4u: goto label_1223e4;
        case 0x1223e8u: goto label_1223e8;
        case 0x1223ecu: goto label_1223ec;
        case 0x1223f0u: goto label_1223f0;
        case 0x1223f4u: goto label_1223f4;
        case 0x1223f8u: goto label_1223f8;
        case 0x1223fcu: goto label_1223fc;
        case 0x122400u: goto label_122400;
        case 0x122404u: goto label_122404;
        case 0x122408u: goto label_122408;
        case 0x12240cu: goto label_12240c;
        case 0x122410u: goto label_122410;
        case 0x122414u: goto label_122414;
        case 0x122418u: goto label_122418;
        case 0x12241cu: goto label_12241c;
        case 0x122420u: goto label_122420;
        case 0x122424u: goto label_122424;
        case 0x122428u: goto label_122428;
        case 0x12242cu: goto label_12242c;
        case 0x122430u: goto label_122430;
        case 0x122434u: goto label_122434;
        case 0x122438u: goto label_122438;
        case 0x12243cu: goto label_12243c;
        case 0x122440u: goto label_122440;
        case 0x122444u: goto label_122444;
        case 0x122448u: goto label_122448;
        case 0x12244cu: goto label_12244c;
        case 0x122450u: goto label_122450;
        case 0x122454u: goto label_122454;
        case 0x122458u: goto label_122458;
        case 0x12245cu: goto label_12245c;
        case 0x122460u: goto label_122460;
        case 0x122464u: goto label_122464;
        case 0x122468u: goto label_122468;
        case 0x12246cu: goto label_12246c;
        case 0x122470u: goto label_122470;
        case 0x122474u: goto label_122474;
        case 0x122478u: goto label_122478;
        case 0x12247cu: goto label_12247c;
        case 0x122480u: goto label_122480;
        case 0x122484u: goto label_122484;
        case 0x122488u: goto label_122488;
        case 0x12248cu: goto label_12248c;
        case 0x122490u: goto label_122490;
        case 0x122494u: goto label_122494;
        case 0x122498u: goto label_122498;
        case 0x12249cu: goto label_12249c;
        case 0x1224a0u: goto label_1224a0;
        case 0x1224a4u: goto label_1224a4;
        case 0x1224a8u: goto label_1224a8;
        case 0x1224acu: goto label_1224ac;
        case 0x1224b0u: goto label_1224b0;
        case 0x1224b4u: goto label_1224b4;
        case 0x1224b8u: goto label_1224b8;
        case 0x1224bcu: goto label_1224bc;
        case 0x1224c0u: goto label_1224c0;
        case 0x1224c4u: goto label_1224c4;
        case 0x1224c8u: goto label_1224c8;
        case 0x1224ccu: goto label_1224cc;
        case 0x1224d0u: goto label_1224d0;
        case 0x1224d4u: goto label_1224d4;
        case 0x1224d8u: goto label_1224d8;
        case 0x1224dcu: goto label_1224dc;
        case 0x1224e0u: goto label_1224e0;
        case 0x1224e4u: goto label_1224e4;
        case 0x1224e8u: goto label_1224e8;
        case 0x1224ecu: goto label_1224ec;
        case 0x1224f0u: goto label_1224f0;
        case 0x1224f4u: goto label_1224f4;
        case 0x1224f8u: goto label_1224f8;
        case 0x1224fcu: goto label_1224fc;
        case 0x122500u: goto label_122500;
        case 0x122504u: goto label_122504;
        case 0x122508u: goto label_122508;
        case 0x12250cu: goto label_12250c;
        case 0x122510u: goto label_122510;
        case 0x122514u: goto label_122514;
        case 0x122518u: goto label_122518;
        case 0x12251cu: goto label_12251c;
        case 0x122520u: goto label_122520;
        case 0x122524u: goto label_122524;
        case 0x122528u: goto label_122528;
        case 0x12252cu: goto label_12252c;
        case 0x122530u: goto label_122530;
        case 0x122534u: goto label_122534;
        case 0x122538u: goto label_122538;
        case 0x12253cu: goto label_12253c;
        case 0x122540u: goto label_122540;
        case 0x122544u: goto label_122544;
        case 0x122548u: goto label_122548;
        case 0x12254cu: goto label_12254c;
        case 0x122550u: goto label_122550;
        case 0x122554u: goto label_122554;
        case 0x122558u: goto label_122558;
        case 0x12255cu: goto label_12255c;
        case 0x122560u: goto label_122560;
        case 0x122564u: goto label_122564;
        case 0x122568u: goto label_122568;
        case 0x12256cu: goto label_12256c;
        case 0x122570u: goto label_122570;
        case 0x122574u: goto label_122574;
        case 0x122578u: goto label_122578;
        case 0x12257cu: goto label_12257c;
        case 0x122580u: goto label_122580;
        case 0x122584u: goto label_122584;
        case 0x122588u: goto label_122588;
        case 0x12258cu: goto label_12258c;
        case 0x122590u: goto label_122590;
        case 0x122594u: goto label_122594;
        case 0x122598u: goto label_122598;
        case 0x12259cu: goto label_12259c;
        case 0x1225a0u: goto label_1225a0;
        case 0x1225a4u: goto label_1225a4;
        case 0x1225a8u: goto label_1225a8;
        case 0x1225acu: goto label_1225ac;
        case 0x1225b0u: goto label_1225b0;
        case 0x1225b4u: goto label_1225b4;
        case 0x1225b8u: goto label_1225b8;
        case 0x1225bcu: goto label_1225bc;
        case 0x1225c0u: goto label_1225c0;
        case 0x1225c4u: goto label_1225c4;
        case 0x1225c8u: goto label_1225c8;
        case 0x1225ccu: goto label_1225cc;
        case 0x1225d0u: goto label_1225d0;
        case 0x1225d4u: goto label_1225d4;
        case 0x1225d8u: goto label_1225d8;
        case 0x1225dcu: goto label_1225dc;
        case 0x1225e0u: goto label_1225e0;
        case 0x1225e4u: goto label_1225e4;
        case 0x1225e8u: goto label_1225e8;
        case 0x1225ecu: goto label_1225ec;
        case 0x1225f0u: goto label_1225f0;
        case 0x1225f4u: goto label_1225f4;
        case 0x1225f8u: goto label_1225f8;
        case 0x1225fcu: goto label_1225fc;
        case 0x122600u: goto label_122600;
        case 0x122604u: goto label_122604;
        case 0x122608u: goto label_122608;
        case 0x12260cu: goto label_12260c;
        case 0x122610u: goto label_122610;
        case 0x122614u: goto label_122614;
        case 0x122618u: goto label_122618;
        case 0x12261cu: goto label_12261c;
        case 0x122620u: goto label_122620;
        case 0x122624u: goto label_122624;
        case 0x122628u: goto label_122628;
        case 0x12262cu: goto label_12262c;
        case 0x122630u: goto label_122630;
        case 0x122634u: goto label_122634;
        case 0x122638u: goto label_122638;
        case 0x12263cu: goto label_12263c;
        case 0x122640u: goto label_122640;
        case 0x122644u: goto label_122644;
        case 0x122648u: goto label_122648;
        case 0x12264cu: goto label_12264c;
        case 0x122650u: goto label_122650;
        case 0x122654u: goto label_122654;
        case 0x122658u: goto label_122658;
        case 0x12265cu: goto label_12265c;
        case 0x122660u: goto label_122660;
        case 0x122664u: goto label_122664;
        case 0x122668u: goto label_122668;
        case 0x12266cu: goto label_12266c;
        case 0x122670u: goto label_122670;
        case 0x122674u: goto label_122674;
        case 0x122678u: goto label_122678;
        case 0x12267cu: goto label_12267c;
        case 0x122680u: goto label_122680;
        case 0x122684u: goto label_122684;
        case 0x122688u: goto label_122688;
        case 0x12268cu: goto label_12268c;
        case 0x122690u: goto label_122690;
        case 0x122694u: goto label_122694;
        case 0x122698u: goto label_122698;
        case 0x12269cu: goto label_12269c;
        case 0x1226a0u: goto label_1226a0;
        case 0x1226a4u: goto label_1226a4;
        case 0x1226a8u: goto label_1226a8;
        case 0x1226acu: goto label_1226ac;
        case 0x1226b0u: goto label_1226b0;
        case 0x1226b4u: goto label_1226b4;
        case 0x1226b8u: goto label_1226b8;
        case 0x1226bcu: goto label_1226bc;
        case 0x1226c0u: goto label_1226c0;
        case 0x1226c4u: goto label_1226c4;
        case 0x1226c8u: goto label_1226c8;
        case 0x1226ccu: goto label_1226cc;
        case 0x1226d0u: goto label_1226d0;
        case 0x1226d4u: goto label_1226d4;
        case 0x1226d8u: goto label_1226d8;
        case 0x1226dcu: goto label_1226dc;
        case 0x1226e0u: goto label_1226e0;
        case 0x1226e4u: goto label_1226e4;
        case 0x1226e8u: goto label_1226e8;
        case 0x1226ecu: goto label_1226ec;
        case 0x1226f0u: goto label_1226f0;
        case 0x1226f4u: goto label_1226f4;
        case 0x1226f8u: goto label_1226f8;
        case 0x1226fcu: goto label_1226fc;
        case 0x122700u: goto label_122700;
        case 0x122704u: goto label_122704;
        case 0x122708u: goto label_122708;
        case 0x12270cu: goto label_12270c;
        case 0x122710u: goto label_122710;
        case 0x122714u: goto label_122714;
        case 0x122718u: goto label_122718;
        case 0x12271cu: goto label_12271c;
        case 0x122720u: goto label_122720;
        case 0x122724u: goto label_122724;
        case 0x122728u: goto label_122728;
        case 0x12272cu: goto label_12272c;
        case 0x122730u: goto label_122730;
        case 0x122734u: goto label_122734;
        case 0x122738u: goto label_122738;
        case 0x12273cu: goto label_12273c;
        case 0x122740u: goto label_122740;
        case 0x122744u: goto label_122744;
        case 0x122748u: goto label_122748;
        case 0x12274cu: goto label_12274c;
        case 0x122750u: goto label_122750;
        case 0x122754u: goto label_122754;
        case 0x122758u: goto label_122758;
        case 0x12275cu: goto label_12275c;
        case 0x122760u: goto label_122760;
        case 0x122764u: goto label_122764;
        case 0x122768u: goto label_122768;
        case 0x12276cu: goto label_12276c;
        case 0x122770u: goto label_122770;
        case 0x122774u: goto label_122774;
        case 0x122778u: goto label_122778;
        case 0x12277cu: goto label_12277c;
        case 0x122780u: goto label_122780;
        case 0x122784u: goto label_122784;
        case 0x122788u: goto label_122788;
        case 0x12278cu: goto label_12278c;
        case 0x122790u: goto label_122790;
        case 0x122794u: goto label_122794;
        case 0x122798u: goto label_122798;
        case 0x12279cu: goto label_12279c;
        case 0x1227a0u: goto label_1227a0;
        case 0x1227a4u: goto label_1227a4;
        case 0x1227a8u: goto label_1227a8;
        case 0x1227acu: goto label_1227ac;
        case 0x1227b0u: goto label_1227b0;
        case 0x1227b4u: goto label_1227b4;
        case 0x1227b8u: goto label_1227b8;
        case 0x1227bcu: goto label_1227bc;
        case 0x1227c0u: goto label_1227c0;
        case 0x1227c4u: goto label_1227c4;
        case 0x1227c8u: goto label_1227c8;
        case 0x1227ccu: goto label_1227cc;
        case 0x1227d0u: goto label_1227d0;
        case 0x1227d4u: goto label_1227d4;
        case 0x1227d8u: goto label_1227d8;
        case 0x1227dcu: goto label_1227dc;
        case 0x1227e0u: goto label_1227e0;
        case 0x1227e4u: goto label_1227e4;
        case 0x1227e8u: goto label_1227e8;
        case 0x1227ecu: goto label_1227ec;
        case 0x1227f0u: goto label_1227f0;
        case 0x1227f4u: goto label_1227f4;
        case 0x1227f8u: goto label_1227f8;
        case 0x1227fcu: goto label_1227fc;
        case 0x122800u: goto label_122800;
        case 0x122804u: goto label_122804;
        case 0x122808u: goto label_122808;
        case 0x12280cu: goto label_12280c;
        case 0x122810u: goto label_122810;
        case 0x122814u: goto label_122814;
        case 0x122818u: goto label_122818;
        case 0x12281cu: goto label_12281c;
        case 0x122820u: goto label_122820;
        case 0x122824u: goto label_122824;
        case 0x122828u: goto label_122828;
        case 0x12282cu: goto label_12282c;
        case 0x122830u: goto label_122830;
        case 0x122834u: goto label_122834;
        case 0x122838u: goto label_122838;
        case 0x12283cu: goto label_12283c;
        case 0x122840u: goto label_122840;
        case 0x122844u: goto label_122844;
        case 0x122848u: goto label_122848;
        case 0x12284cu: goto label_12284c;
        case 0x122850u: goto label_122850;
        case 0x122854u: goto label_122854;
        case 0x122858u: goto label_122858;
        case 0x12285cu: goto label_12285c;
        case 0x122860u: goto label_122860;
        case 0x122864u: goto label_122864;
        case 0x122868u: goto label_122868;
        case 0x12286cu: goto label_12286c;
        case 0x122870u: goto label_122870;
        case 0x122874u: goto label_122874;
        case 0x122878u: goto label_122878;
        case 0x12287cu: goto label_12287c;
        case 0x122880u: goto label_122880;
        case 0x122884u: goto label_122884;
        case 0x122888u: goto label_122888;
        case 0x12288cu: goto label_12288c;
        case 0x122890u: goto label_122890;
        case 0x122894u: goto label_122894;
        case 0x122898u: goto label_122898;
        case 0x12289cu: goto label_12289c;
        case 0x1228a0u: goto label_1228a0;
        case 0x1228a4u: goto label_1228a4;
        case 0x1228a8u: goto label_1228a8;
        case 0x1228acu: goto label_1228ac;
        case 0x1228b0u: goto label_1228b0;
        case 0x1228b4u: goto label_1228b4;
        case 0x1228b8u: goto label_1228b8;
        case 0x1228bcu: goto label_1228bc;
        case 0x1228c0u: goto label_1228c0;
        case 0x1228c4u: goto label_1228c4;
        case 0x1228c8u: goto label_1228c8;
        case 0x1228ccu: goto label_1228cc;
        case 0x1228d0u: goto label_1228d0;
        case 0x1228d4u: goto label_1228d4;
        case 0x1228d8u: goto label_1228d8;
        case 0x1228dcu: goto label_1228dc;
        case 0x1228e0u: goto label_1228e0;
        case 0x1228e4u: goto label_1228e4;
        case 0x1228e8u: goto label_1228e8;
        case 0x1228ecu: goto label_1228ec;
        case 0x1228f0u: goto label_1228f0;
        case 0x1228f4u: goto label_1228f4;
        case 0x1228f8u: goto label_1228f8;
        case 0x1228fcu: goto label_1228fc;
        case 0x122900u: goto label_122900;
        case 0x122904u: goto label_122904;
        case 0x122908u: goto label_122908;
        case 0x12290cu: goto label_12290c;
        case 0x122910u: goto label_122910;
        case 0x122914u: goto label_122914;
        case 0x122918u: goto label_122918;
        case 0x12291cu: goto label_12291c;
        case 0x122920u: goto label_122920;
        case 0x122924u: goto label_122924;
        case 0x122928u: goto label_122928;
        case 0x12292cu: goto label_12292c;
        case 0x122930u: goto label_122930;
        case 0x122934u: goto label_122934;
        case 0x122938u: goto label_122938;
        case 0x12293cu: goto label_12293c;
        case 0x122940u: goto label_122940;
        case 0x122944u: goto label_122944;
        case 0x122948u: goto label_122948;
        case 0x12294cu: goto label_12294c;
        case 0x122950u: goto label_122950;
        case 0x122954u: goto label_122954;
        case 0x122958u: goto label_122958;
        case 0x12295cu: goto label_12295c;
        case 0x122960u: goto label_122960;
        case 0x122964u: goto label_122964;
        case 0x122968u: goto label_122968;
        case 0x12296cu: goto label_12296c;
        case 0x122970u: goto label_122970;
        case 0x122974u: goto label_122974;
        case 0x122978u: goto label_122978;
        case 0x12297cu: goto label_12297c;
        case 0x122980u: goto label_122980;
        case 0x122984u: goto label_122984;
        case 0x122988u: goto label_122988;
        case 0x12298cu: goto label_12298c;
        case 0x122990u: goto label_122990;
        case 0x122994u: goto label_122994;
        case 0x122998u: goto label_122998;
        case 0x12299cu: goto label_12299c;
        case 0x1229a0u: goto label_1229a0;
        case 0x1229a4u: goto label_1229a4;
        case 0x1229a8u: goto label_1229a8;
        case 0x1229acu: goto label_1229ac;
        case 0x1229b0u: goto label_1229b0;
        case 0x1229b4u: goto label_1229b4;
        case 0x1229b8u: goto label_1229b8;
        case 0x1229bcu: goto label_1229bc;
        case 0x1229c0u: goto label_1229c0;
        case 0x1229c4u: goto label_1229c4;
        case 0x1229c8u: goto label_1229c8;
        case 0x1229ccu: goto label_1229cc;
        case 0x1229d0u: goto label_1229d0;
        case 0x1229d4u: goto label_1229d4;
        case 0x1229d8u: goto label_1229d8;
        case 0x1229dcu: goto label_1229dc;
        case 0x1229e0u: goto label_1229e0;
        case 0x1229e4u: goto label_1229e4;
        case 0x1229e8u: goto label_1229e8;
        case 0x1229ecu: goto label_1229ec;
        case 0x1229f0u: goto label_1229f0;
        case 0x1229f4u: goto label_1229f4;
        case 0x1229f8u: goto label_1229f8;
        case 0x1229fcu: goto label_1229fc;
        case 0x122a00u: goto label_122a00;
        case 0x122a04u: goto label_122a04;
        case 0x122a08u: goto label_122a08;
        case 0x122a0cu: goto label_122a0c;
        case 0x122a10u: goto label_122a10;
        case 0x122a14u: goto label_122a14;
        case 0x122a18u: goto label_122a18;
        case 0x122a1cu: goto label_122a1c;
        case 0x122a20u: goto label_122a20;
        case 0x122a24u: goto label_122a24;
        case 0x122a28u: goto label_122a28;
        case 0x122a2cu: goto label_122a2c;
        case 0x122a30u: goto label_122a30;
        case 0x122a34u: goto label_122a34;
        case 0x122a38u: goto label_122a38;
        case 0x122a3cu: goto label_122a3c;
        case 0x122a40u: goto label_122a40;
        case 0x122a44u: goto label_122a44;
        case 0x122a48u: goto label_122a48;
        case 0x122a4cu: goto label_122a4c;
        case 0x122a50u: goto label_122a50;
        case 0x122a54u: goto label_122a54;
        case 0x122a58u: goto label_122a58;
        case 0x122a5cu: goto label_122a5c;
        case 0x122a60u: goto label_122a60;
        case 0x122a64u: goto label_122a64;
        case 0x122a68u: goto label_122a68;
        case 0x122a6cu: goto label_122a6c;
        case 0x122a70u: goto label_122a70;
        case 0x122a74u: goto label_122a74;
        case 0x122a78u: goto label_122a78;
        case 0x122a7cu: goto label_122a7c;
        case 0x122a80u: goto label_122a80;
        case 0x122a84u: goto label_122a84;
        case 0x122a88u: goto label_122a88;
        case 0x122a8cu: goto label_122a8c;
        case 0x122a90u: goto label_122a90;
        case 0x122a94u: goto label_122a94;
        case 0x122a98u: goto label_122a98;
        case 0x122a9cu: goto label_122a9c;
        case 0x122aa0u: goto label_122aa0;
        case 0x122aa4u: goto label_122aa4;
        case 0x122aa8u: goto label_122aa8;
        case 0x122aacu: goto label_122aac;
        case 0x122ab0u: goto label_122ab0;
        case 0x122ab4u: goto label_122ab4;
        case 0x122ab8u: goto label_122ab8;
        case 0x122abcu: goto label_122abc;
        case 0x122ac0u: goto label_122ac0;
        case 0x122ac4u: goto label_122ac4;
        case 0x122ac8u: goto label_122ac8;
        case 0x122accu: goto label_122acc;
        case 0x122ad0u: goto label_122ad0;
        case 0x122ad4u: goto label_122ad4;
        case 0x122ad8u: goto label_122ad8;
        case 0x122adcu: goto label_122adc;
        case 0x122ae0u: goto label_122ae0;
        case 0x122ae4u: goto label_122ae4;
        case 0x122ae8u: goto label_122ae8;
        case 0x122aecu: goto label_122aec;
        case 0x122af0u: goto label_122af0;
        case 0x122af4u: goto label_122af4;
        case 0x122af8u: goto label_122af8;
        case 0x122afcu: goto label_122afc;
        case 0x122b00u: goto label_122b00;
        case 0x122b04u: goto label_122b04;
        case 0x122b08u: goto label_122b08;
        case 0x122b0cu: goto label_122b0c;
        case 0x122b10u: goto label_122b10;
        case 0x122b14u: goto label_122b14;
        case 0x122b18u: goto label_122b18;
        case 0x122b1cu: goto label_122b1c;
        case 0x122b20u: goto label_122b20;
        case 0x122b24u: goto label_122b24;
        case 0x122b28u: goto label_122b28;
        case 0x122b2cu: goto label_122b2c;
        case 0x122b30u: goto label_122b30;
        case 0x122b34u: goto label_122b34;
        case 0x122b38u: goto label_122b38;
        case 0x122b3cu: goto label_122b3c;
        case 0x122b40u: goto label_122b40;
        case 0x122b44u: goto label_122b44;
        case 0x122b48u: goto label_122b48;
        case 0x122b4cu: goto label_122b4c;
        case 0x122b50u: goto label_122b50;
        case 0x122b54u: goto label_122b54;
        case 0x122b58u: goto label_122b58;
        case 0x122b5cu: goto label_122b5c;
        case 0x122b60u: goto label_122b60;
        case 0x122b64u: goto label_122b64;
        case 0x122b68u: goto label_122b68;
        case 0x122b6cu: goto label_122b6c;
        case 0x122b70u: goto label_122b70;
        case 0x122b74u: goto label_122b74;
        case 0x122b78u: goto label_122b78;
        case 0x122b7cu: goto label_122b7c;
        case 0x122b80u: goto label_122b80;
        case 0x122b84u: goto label_122b84;
        case 0x122b88u: goto label_122b88;
        case 0x122b8cu: goto label_122b8c;
        case 0x122b90u: goto label_122b90;
        case 0x122b94u: goto label_122b94;
        case 0x122b98u: goto label_122b98;
        case 0x122b9cu: goto label_122b9c;
        case 0x122ba0u: goto label_122ba0;
        case 0x122ba4u: goto label_122ba4;
        case 0x122ba8u: goto label_122ba8;
        case 0x122bacu: goto label_122bac;
        case 0x122bb0u: goto label_122bb0;
        case 0x122bb4u: goto label_122bb4;
        case 0x122bb8u: goto label_122bb8;
        case 0x122bbcu: goto label_122bbc;
        case 0x122bc0u: goto label_122bc0;
        case 0x122bc4u: goto label_122bc4;
        case 0x122bc8u: goto label_122bc8;
        case 0x122bccu: goto label_122bcc;
        case 0x122bd0u: goto label_122bd0;
        case 0x122bd4u: goto label_122bd4;
        case 0x122bd8u: goto label_122bd8;
        case 0x122bdcu: goto label_122bdc;
        case 0x122be0u: goto label_122be0;
        case 0x122be4u: goto label_122be4;
        case 0x122be8u: goto label_122be8;
        case 0x122becu: goto label_122bec;
        case 0x122bf0u: goto label_122bf0;
        case 0x122bf4u: goto label_122bf4;
        case 0x122bf8u: goto label_122bf8;
        case 0x122bfcu: goto label_122bfc;
        case 0x122c00u: goto label_122c00;
        case 0x122c04u: goto label_122c04;
        case 0x122c08u: goto label_122c08;
        case 0x122c0cu: goto label_122c0c;
        case 0x122c10u: goto label_122c10;
        case 0x122c14u: goto label_122c14;
        case 0x122c18u: goto label_122c18;
        case 0x122c1cu: goto label_122c1c;
        case 0x122c20u: goto label_122c20;
        case 0x122c24u: goto label_122c24;
        case 0x122c28u: goto label_122c28;
        case 0x122c2cu: goto label_122c2c;
        case 0x122c30u: goto label_122c30;
        case 0x122c34u: goto label_122c34;
        case 0x122c38u: goto label_122c38;
        case 0x122c3cu: goto label_122c3c;
        case 0x122c40u: goto label_122c40;
        case 0x122c44u: goto label_122c44;
        case 0x122c48u: goto label_122c48;
        case 0x122c4cu: goto label_122c4c;
        case 0x122c50u: goto label_122c50;
        case 0x122c54u: goto label_122c54;
        case 0x122c58u: goto label_122c58;
        case 0x122c5cu: goto label_122c5c;
        case 0x122c60u: goto label_122c60;
        case 0x122c64u: goto label_122c64;
        case 0x122c68u: goto label_122c68;
        case 0x122c6cu: goto label_122c6c;
        case 0x122c70u: goto label_122c70;
        case 0x122c74u: goto label_122c74;
        case 0x122c78u: goto label_122c78;
        case 0x122c7cu: goto label_122c7c;
        case 0x122c80u: goto label_122c80;
        case 0x122c84u: goto label_122c84;
        case 0x122c88u: goto label_122c88;
        case 0x122c8cu: goto label_122c8c;
        case 0x122c90u: goto label_122c90;
        case 0x122c94u: goto label_122c94;
        case 0x122c98u: goto label_122c98;
        case 0x122c9cu: goto label_122c9c;
        case 0x122ca0u: goto label_122ca0;
        case 0x122ca4u: goto label_122ca4;
        case 0x122ca8u: goto label_122ca8;
        case 0x122cacu: goto label_122cac;
        case 0x122cb0u: goto label_122cb0;
        case 0x122cb4u: goto label_122cb4;
        case 0x122cb8u: goto label_122cb8;
        case 0x122cbcu: goto label_122cbc;
        case 0x122cc0u: goto label_122cc0;
        case 0x122cc4u: goto label_122cc4;
        case 0x122cc8u: goto label_122cc8;
        case 0x122cccu: goto label_122ccc;
        case 0x122cd0u: goto label_122cd0;
        case 0x122cd4u: goto label_122cd4;
        case 0x122cd8u: goto label_122cd8;
        case 0x122cdcu: goto label_122cdc;
        case 0x122ce0u: goto label_122ce0;
        case 0x122ce4u: goto label_122ce4;
        case 0x122ce8u: goto label_122ce8;
        case 0x122cecu: goto label_122cec;
        case 0x122cf0u: goto label_122cf0;
        case 0x122cf4u: goto label_122cf4;
        case 0x122cf8u: goto label_122cf8;
        case 0x122cfcu: goto label_122cfc;
        case 0x122d00u: goto label_122d00;
        case 0x122d04u: goto label_122d04;
        case 0x122d08u: goto label_122d08;
        case 0x122d0cu: goto label_122d0c;
        case 0x122d10u: goto label_122d10;
        case 0x122d14u: goto label_122d14;
        case 0x122d18u: goto label_122d18;
        case 0x122d1cu: goto label_122d1c;
        case 0x122d20u: goto label_122d20;
        case 0x122d24u: goto label_122d24;
        case 0x122d28u: goto label_122d28;
        case 0x122d2cu: goto label_122d2c;
        case 0x122d30u: goto label_122d30;
        case 0x122d34u: goto label_122d34;
        case 0x122d38u: goto label_122d38;
        case 0x122d3cu: goto label_122d3c;
        case 0x122d40u: goto label_122d40;
        case 0x122d44u: goto label_122d44;
        case 0x122d48u: goto label_122d48;
        case 0x122d4cu: goto label_122d4c;
        case 0x122d50u: goto label_122d50;
        default: break;
    }

    ctx->pc = 0x120b10u;

label_120b10:
    // 0x120b10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x120b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_120b14:
    // 0x120b14: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x120b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_120b18:
    // 0x120b18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x120b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_120b1c:
    // 0x120b1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x120b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_120b20:
    // 0x120b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x120b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_120b24:
    // 0x120b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_120b28:
    // 0x120b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x120b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_120b2c:
    // 0x120b2c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x120b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_120b30:
    // 0x120b30: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x120b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120b34:
    // 0x120b34: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x120b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_120b38:
    // 0x120b38: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x120b38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_120b3c:
    // 0x120b3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120b40:
    // 0x120b40: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x120b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_120b44:
    // 0x120b44: 0x30830800  andi        $v1, $a0, 0x800
    ctx->pc = 0x120b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_120b48:
    // 0x120b48: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_120b4c:
    if (ctx->pc == 0x120B4Cu) {
        ctx->pc = 0x120B50u;
        goto label_120b50;
    }
    ctx->pc = 0x120B48u;
    {
        const bool branch_taken_0x120b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b48) {
            ctx->pc = 0x120BC0u;
            goto label_120bc0;
        }
    }
    ctx->pc = 0x120B50u;
label_120b50:
    // 0x120b50: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120b54:
    // 0x120b54: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x120b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_120b58:
    // 0x120b58: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x120b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_120b5c:
    // 0x120b5c: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x120b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_120b60:
    // 0x120b60: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x120b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_120b64:
    // 0x120b64: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120b68:
    // 0x120b68: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x120b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_120b6c:
    // 0x120b6c: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x120b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_120b70:
    // 0x120b70: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x120b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_120b74:
    // 0x120b74: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x120b74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120b78:
    // 0x120b78: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x120b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
label_120b7c:
    // 0x120b7c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x120b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_120b80:
    // 0x120b80: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x120b80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_120b84:
    // 0x120b84: 0xc067b18  jal         func_19EC60
label_120b88:
    if (ctx->pc == 0x120B88u) {
        ctx->pc = 0x120B8Cu;
        goto label_120b8c;
    }
    ctx->pc = 0x120B84u;
    SET_GPR_U32(ctx, 31, 0x120B8Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x120B84u, 0x120B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B8Cu;
label_120b8c:
    // 0x120b8c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x120b8cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_120b90:
    // 0x120b90: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x120b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120b94:
    // 0x120b94: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x120b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_120b98:
    // 0x120b98: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x120b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_120b9c:
    // 0x120b9c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_120ba0:
    if (ctx->pc == 0x120BA0u) {
        ctx->pc = 0x120BA4u;
        goto label_120ba4;
    }
    ctx->pc = 0x120B9Cu;
    {
        const bool branch_taken_0x120b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120b9c) {
            ctx->pc = 0x120BC0u;
            goto label_120bc0;
        }
    }
    ctx->pc = 0x120BA4u;
label_120ba4:
    // 0x120ba4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x120ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120ba8:
    // 0x120ba8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x120ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_120bac:
    // 0x120bac: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x120bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_120bb0:
    // 0x120bb0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x120bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_120bb4:
    // 0x120bb4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x120bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_120bb8:
    // 0x120bb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x120bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_120bbc:
    // 0x120bbc: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x120bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
label_120bc0:
    // 0x120bc0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120bc4:
    // 0x120bc4: 0x906411ee  lbu         $a0, 0x11EE($v1)
    ctx->pc = 0x120bc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
label_120bc8:
    // 0x120bc8: 0x10800859  beqz        $a0, . + 4 + (0x859 << 2)
label_120bcc:
    if (ctx->pc == 0x120BCCu) {
        ctx->pc = 0x120BD0u;
        goto label_120bd0;
    }
    ctx->pc = 0x120BC8u;
    {
        const bool branch_taken_0x120bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120bc8) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x120BD0u;
label_120bd0:
    // 0x120bd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x120bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_120bd4:
    // 0x120bd4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x120bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_120bd8:
    // 0x120bd8: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x120bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_120bdc:
    // 0x120bdc: 0x14800042  bnez        $a0, . + 4 + (0x42 << 2)
label_120be0:
    if (ctx->pc == 0x120BE0u) {
        ctx->pc = 0x120BE4u;
        goto label_120be4;
    }
    ctx->pc = 0x120BDCu;
    {
        const bool branch_taken_0x120bdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x120bdc) {
            ctx->pc = 0x120CE8u;
            goto label_120ce8;
        }
    }
    ctx->pc = 0x120BE4u;
label_120be4:
    // 0x120be4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120be8:
    // 0x120be8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x120be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_120bec:
    // 0x120bec: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x120becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_120bf0:
    // 0x120bf0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x120bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_120bf4:
    // 0x120bf4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_120bf8:
    if (ctx->pc == 0x120BF8u) {
        ctx->pc = 0x120BFCu;
        goto label_120bfc;
    }
    ctx->pc = 0x120BF4u;
    {
        const bool branch_taken_0x120bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120bf4) {
            ctx->pc = 0x120C58u;
            goto label_120c58;
        }
    }
    ctx->pc = 0x120BFCu;
label_120bfc:
    // 0x120bfc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120c00:
    // 0x120c00: 0x848311f2  lh          $v1, 0x11F2($a0)
    ctx->pc = 0x120c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
label_120c04:
    // 0x120c04: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x120c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_120c08:
    // 0x120c08: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x120c08u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_120c0c:
    // 0x120c0c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x120c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_120c10:
    // 0x120c10: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x120c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_120c14:
    // 0x120c14: 0x34646667  ori         $a0, $v1, 0x6667
    ctx->pc = 0x120c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_120c18:
    // 0x120c18: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x120c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_120c1c:
    // 0x120c1c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x120c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_120c20:
    // 0x120c20: 0x0  nop
    ctx->pc = 0x120c20u;
    // NOP
label_120c24:
    // 0x120c24: 0x2010  mfhi        $a0
    ctx->pc = 0x120c24u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_120c28:
    // 0x120c28: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x120c28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
label_120c2c:
    // 0x120c2c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x120c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_120c30:
    // 0x120c30: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x120c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_120c34:
    // 0x120c34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x120c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_120c38:
    // 0x120c38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x120c38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_120c3c:
    // 0x120c3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_120c40:
    // 0x120c40: 0x8425ef68  lh          $a1, -0x1098($at)
    ctx->pc = 0x120c40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_120c44:
    // 0x120c44: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x120c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_120c48:
    // 0x120c48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_120c4c:
    // 0x120c4c: 0xa424ef68  sh          $a0, -0x1098($at)
    ctx->pc = 0x120c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 4));
label_120c50:
    // 0x120c50: 0x10000016  b           . + 4 + (0x16 << 2)
label_120c54:
    if (ctx->pc == 0x120C54u) {
        ctx->pc = 0x120C58u;
        goto label_120c58;
    }
    ctx->pc = 0x120C50u;
    {
        const bool branch_taken_0x120c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120c50) {
            ctx->pc = 0x120CACu;
            goto label_120cac;
        }
    }
    ctx->pc = 0x120C58u;
label_120c58:
    // 0x120c58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120c5c:
    // 0x120c5c: 0x846411f2  lh          $a0, 0x11F2($v1)
    ctx->pc = 0x120c5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
label_120c60:
    // 0x120c60: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x120c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_120c64:
    // 0x120c64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x120c64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_120c68:
    // 0x120c68: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x120c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_120c6c:
    // 0x120c6c: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x120c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
label_120c70:
    // 0x120c70: 0x34a66667  ori         $a2, $a1, 0x6667
    ctx->pc = 0x120c70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
label_120c74:
    // 0x120c74: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x120c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_120c78:
    // 0x120c78: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x120c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_120c7c:
    // 0x120c7c: 0x0  nop
    ctx->pc = 0x120c7cu;
    // NOP
label_120c80:
    // 0x120c80: 0x1810  mfhi        $v1
    ctx->pc = 0x120c80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_120c84:
    // 0x120c84: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x120c84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
label_120c88:
    // 0x120c88: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x120c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_120c8c:
    // 0x120c8c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x120c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_120c90:
    // 0x120c90: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x120c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_120c94:
    // 0x120c94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x120c94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_120c98:
    // 0x120c98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_120c9c:
    // 0x120c9c: 0x8424ef68  lh          $a0, -0x1098($at)
    ctx->pc = 0x120c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_120ca0:
    // 0x120ca0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x120ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_120ca4:
    // 0x120ca4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_120ca8:
    // 0x120ca8: 0xa425ef68  sh          $a1, -0x1098($at)
    ctx->pc = 0x120ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 5));
label_120cac:
    // 0x120cac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_120cb0:
    // 0x120cb0: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x120cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_120cb4:
    // 0x120cb4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x120cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_120cb8:
    // 0x120cb8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x120cb8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_120cbc:
    // 0x120cbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_120cc0:
    // 0x120cc0: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x120cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963050)));
label_120cc4:
    // 0x120cc4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x120cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_120cc8:
    // 0x120cc8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x120cc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_120ccc:
    // 0x120ccc: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x120cccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_120cd0:
    // 0x120cd0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_120cd4:
    if (ctx->pc == 0x120CD4u) {
        ctx->pc = 0x120CD8u;
        goto label_120cd8;
    }
    ctx->pc = 0x120CD0u;
    {
        const bool branch_taken_0x120cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x120cd0) {
            ctx->pc = 0x120CE8u;
            goto label_120ce8;
        }
    }
    ctx->pc = 0x120CD8u;
label_120cd8:
    // 0x120cd8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_120cdc:
    // 0x120cdc: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x120cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963050)));
label_120ce0:
    // 0x120ce0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_120ce4:
    // 0x120ce4: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x120ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 3));
label_120ce8:
    // 0x120ce8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x120ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_120cec:
    // 0x120cec: 0x34830040  ori         $v1, $a0, 0x40
    ctx->pc = 0x120cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_120cf0:
    // 0x120cf0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x120cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_120cf4:
    // 0x120cf4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120cf8:
    // 0x120cf8: 0x908311ee  lbu         $v1, 0x11EE($a0)
    ctx->pc = 0x120cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4590)));
label_120cfc:
    // 0x120cfc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x120cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_120d00:
    // 0x120d00: 0x30b30030  andi        $s3, $a1, 0x30
    ctx->pc = 0x120d00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
label_120d04:
    // 0x120d04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120d08:
    // 0x120d08: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x120d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
label_120d0c:
    // 0x120d0c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120d10:
    // 0x120d10: 0x8c911210  lw          $s1, 0x1210($a0)
    ctx->pc = 0x120d10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4624)));
label_120d14:
    // 0x120d14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120d18:
    // 0x120d18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120d1c:
    // 0x120d1c: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x120d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_120d20:
    // 0x120d20: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x120d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_120d24:
    // 0x120d24: 0xc058f20  jal         func_163C80
label_120d28:
    if (ctx->pc == 0x120D28u) {
        ctx->pc = 0x120D2Cu;
        goto label_120d2c;
    }
    ctx->pc = 0x120D24u;
    SET_GPR_U32(ctx, 31, 0x120D2Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x120D24u, 0x120D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D2Cu;
label_120d2c:
    // 0x120d2c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x120d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_120d30:
    // 0x120d30: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x120d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120d34:
    // 0x120d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x120d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_120d38:
    // 0x120d38: 0x0  nop
    ctx->pc = 0x120d38u;
    // NOP
label_120d3c:
    // 0x120d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x120d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_120d40:
    // 0x120d40: 0x0  nop
    ctx->pc = 0x120d40u;
    // NOP
label_120d44:
    // 0x120d44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_120d48:
    if (ctx->pc == 0x120D48u) {
        ctx->pc = 0x120D4Cu;
        goto label_120d4c;
    }
    ctx->pc = 0x120D44u;
    {
        const bool branch_taken_0x120d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x120d44) {
            ctx->pc = 0x120D60u;
            goto label_120d60;
        }
    }
    ctx->pc = 0x120D4Cu;
label_120d4c:
    // 0x120d4c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x120d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_120d50:
    // 0x120d50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x120d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_120d54:
    // 0x120d54: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x120d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120d58:
    // 0x120d58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_120d5c:
    // 0x120d5c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x120d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_120d60:
    // 0x120d60: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120d64:
    // 0x120d64: 0x906511f0  lbu         $a1, 0x11F0($v1)
    ctx->pc = 0x120d64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4592)));
label_120d68:
    // 0x120d68: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x120d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_120d6c:
    // 0x120d6c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x120d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_120d70:
    // 0x120d70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_120d74:
    if (ctx->pc == 0x120D74u) {
        ctx->pc = 0x120D78u;
        goto label_120d78;
    }
    ctx->pc = 0x120D70u;
    {
        const bool branch_taken_0x120d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120d70) {
            ctx->pc = 0x120D88u;
            goto label_120d88;
        }
    }
    ctx->pc = 0x120D78u;
label_120d78:
    // 0x120d78: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120d7c:
    // 0x120d7c: 0xc048130  jal         func_1204C0
label_120d80:
    if (ctx->pc == 0x120D80u) {
        ctx->pc = 0x120D84u;
        goto label_120d84;
    }
    ctx->pc = 0x120D7Cu;
    SET_GPR_U32(ctx, 31, 0x120D84u);
    ctx->pc = 0x1204C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204C0u, 0x120D7Cu, 0x120D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D84u;
label_120d84:
    // 0x120d84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x120d84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_120d88:
    // 0x120d88: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x120d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120d8c:
    // 0x120d8c: 0x90a411f0  lbu         $a0, 0x11F0($a1)
    ctx->pc = 0x120d8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4592)));
label_120d90:
    // 0x120d90: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x120d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_120d94:
    // 0x120d94: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x120d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_120d98:
    // 0x120d98: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_120d9c:
    if (ctx->pc == 0x120D9Cu) {
        ctx->pc = 0x120DA0u;
        goto label_120da0;
    }
    ctx->pc = 0x120D98u;
    {
        const bool branch_taken_0x120d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120d98) {
            ctx->pc = 0x120E08u;
            goto label_120e08;
        }
    }
    ctx->pc = 0x120DA0u;
label_120da0:
    // 0x120da0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120da4:
    // 0x120da4: 0xc048118  jal         func_120460
label_120da8:
    if (ctx->pc == 0x120DA8u) {
        ctx->pc = 0x120DACu;
        goto label_120dac;
    }
    ctx->pc = 0x120DA4u;
    SET_GPR_U32(ctx, 31, 0x120DACu);
    ctx->pc = 0x120460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120460u, 0x120DA4u, 0x120DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DACu;
label_120dac:
    // 0x120dac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x120dacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_120db0:
    // 0x120db0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x120db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120db4:
    // 0x120db4: 0x94a411f6  lhu         $a0, 0x11F6($a1)
    ctx->pc = 0x120db4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4598)));
label_120db8:
    // 0x120db8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x120db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_120dbc:
    // 0x120dbc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x120dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_120dc0:
    // 0x120dc0: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_120dc4:
    if (ctx->pc == 0x120DC4u) {
        ctx->pc = 0x120DC8u;
        goto label_120dc8;
    }
    ctx->pc = 0x120DC0u;
    {
        const bool branch_taken_0x120dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x120dc0) {
            ctx->pc = 0x120DDCu;
            goto label_120ddc;
        }
    }
    ctx->pc = 0x120DC8u;
label_120dc8:
    // 0x120dc8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_120dcc:
    // 0x120dcc: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_120dd0:
    if (ctx->pc == 0x120DD0u) {
        ctx->pc = 0x120DD4u;
        goto label_120dd4;
    }
    ctx->pc = 0x120DCCu;
    {
        const bool branch_taken_0x120dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x120dcc) {
            ctx->pc = 0x120DDCu;
            goto label_120ddc;
        }
    }
    ctx->pc = 0x120DD4u;
label_120dd4:
    // 0x120dd4: 0x1000000c  b           . + 4 + (0xC << 2)
label_120dd8:
    if (ctx->pc == 0x120DD8u) {
        ctx->pc = 0x120DDCu;
        goto label_120ddc;
    }
    ctx->pc = 0x120DD4u;
    {
        const bool branch_taken_0x120dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120dd4) {
            ctx->pc = 0x120E08u;
            goto label_120e08;
        }
    }
    ctx->pc = 0x120DDCu;
label_120ddc:
    // 0x120ddc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120de0:
    // 0x120de0: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x120de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_120de4:
    // 0x120de4: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x120de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_120de8:
    // 0x120de8: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x120de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_120dec:
    // 0x120dec: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x120decu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120df0:
    // 0x120df0: 0x2404030a  addiu       $a0, $zero, 0x30A
    ctx->pc = 0x120df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
label_120df4:
    // 0x120df4: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x120df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_120df8:
    // 0x120df8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x120df8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_120dfc:
    // 0x120dfc: 0xc067b18  jal         func_19EC60
label_120e00:
    if (ctx->pc == 0x120E00u) {
        ctx->pc = 0x120E04u;
        goto label_120e04;
    }
    ctx->pc = 0x120DFCu;
    SET_GPR_U32(ctx, 31, 0x120E04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x120DFCu, 0x120E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E04u;
label_120e04:
    // 0x120e04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x120e04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_120e08:
    // 0x120e08: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120e0c:
    // 0x120e0c: 0x948311f4  lhu         $v1, 0x11F4($a0)
    ctx->pc = 0x120e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
label_120e10:
    // 0x120e10: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x120e10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_120e14:
    // 0x120e14: 0x16800010  bnez        $s4, . + 4 + (0x10 << 2)
label_120e18:
    if (ctx->pc == 0x120E18u) {
        ctx->pc = 0x120E1Cu;
        goto label_120e1c;
    }
    ctx->pc = 0x120E14u;
    {
        const bool branch_taken_0x120e14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x120e14) {
            ctx->pc = 0x120E58u;
            goto label_120e58;
        }
    }
    ctx->pc = 0x120E1Cu;
label_120e1c:
    // 0x120e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x120e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_120e20:
    // 0x120e20: 0xa2030098  sb          $v1, 0x98($s0)
    ctx->pc = 0x120e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 3));
label_120e24:
    // 0x120e24: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120e28:
    // 0x120e28: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x120e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_120e2c:
    // 0x120e2c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x120e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_120e30:
    // 0x120e30: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x120e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_120e34:
    // 0x120e34: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x120e34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120e38:
    // 0x120e38: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x120e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
label_120e3c:
    // 0x120e3c: 0x24c50570  addiu       $a1, $a2, 0x570
    ctx->pc = 0x120e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1392));
label_120e40:
    // 0x120e40: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x120e40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_120e44:
    // 0x120e44: 0xc067b18  jal         func_19EC60
label_120e48:
    if (ctx->pc == 0x120E48u) {
        ctx->pc = 0x120E4Cu;
        goto label_120e4c;
    }
    ctx->pc = 0x120E44u;
    SET_GPR_U32(ctx, 31, 0x120E4Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x120E44u, 0x120E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E4Cu;
label_120e4c:
    // 0x120e4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x120e4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_120e50:
    // 0x120e50: 0x100007b7  b           . + 4 + (0x7B7 << 2)
label_120e54:
    if (ctx->pc == 0x120E54u) {
        ctx->pc = 0x120E58u;
        goto label_120e58;
    }
    ctx->pc = 0x120E50u;
    {
        const bool branch_taken_0x120e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120e50) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x120E58u;
label_120e58:
    // 0x120e58: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120e5c:
    // 0x120e5c: 0x948311f4  lhu         $v1, 0x11F4($a0)
    ctx->pc = 0x120e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
label_120e60:
    // 0x120e60: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x120e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_120e64:
    // 0x120e64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x120e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120e68:
    // 0x120e68: 0x14c4000f  bne         $a2, $a0, . + 4 + (0xF << 2)
label_120e6c:
    if (ctx->pc == 0x120E6Cu) {
        ctx->pc = 0x120E70u;
        goto label_120e70;
    }
    ctx->pc = 0x120E68u;
    {
        const bool branch_taken_0x120e68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x120e68) {
            ctx->pc = 0x120EA8u;
            goto label_120ea8;
        }
    }
    ctx->pc = 0x120E70u;
label_120e70:
    // 0x120e70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x120e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_120e74:
    // 0x120e74: 0xa2050097  sb          $a1, 0x97($s0)
    ctx->pc = 0x120e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 5));
label_120e78:
    // 0x120e78: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120e7c:
    // 0x120e7c: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x120e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_120e80:
    // 0x120e80: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x120e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_120e84:
    // 0x120e84: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x120e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_120e88:
    // 0x120e88: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x120e88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120e8c:
    // 0x120e8c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x120e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
label_120e90:
    // 0x120e90: 0x24c505b0  addiu       $a1, $a2, 0x5B0
    ctx->pc = 0x120e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1456));
label_120e94:
    // 0x120e94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x120e94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_120e98:
    // 0x120e98: 0xc067b18  jal         func_19EC60
label_120e9c:
    if (ctx->pc == 0x120E9Cu) {
        ctx->pc = 0x120EA0u;
        goto label_120ea0;
    }
    ctx->pc = 0x120E98u;
    SET_GPR_U32(ctx, 31, 0x120EA0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x120E98u, 0x120EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EA0u;
label_120ea0:
    // 0x120ea0: 0x100007a3  b           . + 4 + (0x7A3 << 2)
label_120ea4:
    if (ctx->pc == 0x120EA4u) {
        ctx->pc = 0x120EA8u;
        goto label_120ea8;
    }
    ctx->pc = 0x120EA0u;
    {
        const bool branch_taken_0x120ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ea0) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x120EA8u;
label_120ea8:
    // 0x120ea8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x120ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120eac:
    // 0x120eac: 0x944611f4  lhu         $a2, 0x11F4($v0)
    ctx->pc = 0x120eacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
label_120eb0:
    // 0x120eb0: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x120eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_120eb4:
    // 0x120eb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x120eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_120eb8:
    // 0x120eb8: 0x14a4006f  bne         $a1, $a0, . + 4 + (0x6F << 2)
label_120ebc:
    if (ctx->pc == 0x120EBCu) {
        ctx->pc = 0x120EC0u;
        goto label_120ec0;
    }
    ctx->pc = 0x120EB8u;
    {
        const bool branch_taken_0x120eb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x120eb8) {
            ctx->pc = 0x121078u;
            goto label_121078;
        }
    }
    ctx->pc = 0x120EC0u;
label_120ec0:
    // 0x120ec0: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x120ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120ec4:
    // 0x120ec4: 0x3c054006  lui         $a1, 0x4006
    ctx->pc = 0x120ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16390 << 16));
label_120ec8:
    // 0x120ec8: 0x34a40a92  ori         $a0, $a1, 0xA92
    ctx->pc = 0x120ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
label_120ecc:
    // 0x120ecc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x120eccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_120ed0:
    // 0x120ed0: 0x0  nop
    ctx->pc = 0x120ed0u;
    // NOP
label_120ed4:
    // 0x120ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x120ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_120ed8:
    // 0x120ed8: 0x0  nop
    ctx->pc = 0x120ed8u;
    // NOP
label_120edc:
    // 0x120edc: 0x45000066  bc1f        . + 4 + (0x66 << 2)
label_120ee0:
    if (ctx->pc == 0x120EE0u) {
        ctx->pc = 0x120EE4u;
        goto label_120ee4;
    }
    ctx->pc = 0x120EDCu;
    {
        const bool branch_taken_0x120edc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x120edc) {
            ctx->pc = 0x121078u;
            goto label_121078;
        }
    }
    ctx->pc = 0x120EE4u;
label_120ee4:
    // 0x120ee4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120ee8:
    // 0x120ee8: 0x948411f6  lhu         $a0, 0x11F6($a0)
    ctx->pc = 0x120ee8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
label_120eec:
    // 0x120eec: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x120eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_120ef0:
    // 0x120ef0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x120ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_120ef4:
    // 0x120ef4: 0x10c30047  beq         $a2, $v1, . + 4 + (0x47 << 2)
label_120ef8:
    if (ctx->pc == 0x120EF8u) {
        ctx->pc = 0x120EFCu;
        goto label_120efc;
    }
    ctx->pc = 0x120EF4u;
    {
        const bool branch_taken_0x120ef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120ef4) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120EFCu;
label_120efc:
    // 0x120efc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x120efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_120f00:
    // 0x120f00: 0x10c30044  beq         $a2, $v1, . + 4 + (0x44 << 2)
label_120f04:
    if (ctx->pc == 0x120F04u) {
        ctx->pc = 0x120F08u;
        goto label_120f08;
    }
    ctx->pc = 0x120F00u;
    {
        const bool branch_taken_0x120f00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f00) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F08u;
label_120f08:
    // 0x120f08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x120f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_120f0c:
    // 0x120f0c: 0x10c40041  beq         $a2, $a0, . + 4 + (0x41 << 2)
label_120f10:
    if (ctx->pc == 0x120F10u) {
        ctx->pc = 0x120F14u;
        goto label_120f14;
    }
    ctx->pc = 0x120F0Cu;
    {
        const bool branch_taken_0x120f0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x120f0c) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F14u;
label_120f14:
    // 0x120f14: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x120f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_120f18:
    // 0x120f18: 0x10c5003e  beq         $a2, $a1, . + 4 + (0x3E << 2)
label_120f1c:
    if (ctx->pc == 0x120F1Cu) {
        ctx->pc = 0x120F20u;
        goto label_120f20;
    }
    ctx->pc = 0x120F18u;
    {
        const bool branch_taken_0x120f18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x120f18) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F20u;
label_120f20:
    // 0x120f20: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x120f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_120f24:
    // 0x120f24: 0x10c3003b  beq         $a2, $v1, . + 4 + (0x3B << 2)
label_120f28:
    if (ctx->pc == 0x120F28u) {
        ctx->pc = 0x120F2Cu;
        goto label_120f2c;
    }
    ctx->pc = 0x120F24u;
    {
        const bool branch_taken_0x120f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f24) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F2Cu;
label_120f2c:
    // 0x120f2c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x120f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_120f30:
    // 0x120f30: 0x10c30038  beq         $a2, $v1, . + 4 + (0x38 << 2)
label_120f34:
    if (ctx->pc == 0x120F34u) {
        ctx->pc = 0x120F38u;
        goto label_120f38;
    }
    ctx->pc = 0x120F30u;
    {
        const bool branch_taken_0x120f30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f30) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F38u;
label_120f38:
    // 0x120f38: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x120f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_120f3c:
    // 0x120f3c: 0x10c40035  beq         $a2, $a0, . + 4 + (0x35 << 2)
label_120f40:
    if (ctx->pc == 0x120F40u) {
        ctx->pc = 0x120F44u;
        goto label_120f44;
    }
    ctx->pc = 0x120F3Cu;
    {
        const bool branch_taken_0x120f3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x120f3c) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F44u;
label_120f44:
    // 0x120f44: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x120f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_120f48:
    // 0x120f48: 0x10c30032  beq         $a2, $v1, . + 4 + (0x32 << 2)
label_120f4c:
    if (ctx->pc == 0x120F4Cu) {
        ctx->pc = 0x120F50u;
        goto label_120f50;
    }
    ctx->pc = 0x120F48u;
    {
        const bool branch_taken_0x120f48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f48) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F50u;
label_120f50:
    // 0x120f50: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x120f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_120f54:
    // 0x120f54: 0x10c3002f  beq         $a2, $v1, . + 4 + (0x2F << 2)
label_120f58:
    if (ctx->pc == 0x120F58u) {
        ctx->pc = 0x120F5Cu;
        goto label_120f5c;
    }
    ctx->pc = 0x120F54u;
    {
        const bool branch_taken_0x120f54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f54) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F5Cu;
label_120f5c:
    // 0x120f5c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x120f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_120f60:
    // 0x120f60: 0x10c4002c  beq         $a2, $a0, . + 4 + (0x2C << 2)
label_120f64:
    if (ctx->pc == 0x120F64u) {
        ctx->pc = 0x120F68u;
        goto label_120f68;
    }
    ctx->pc = 0x120F60u;
    {
        const bool branch_taken_0x120f60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x120f60) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F68u;
label_120f68:
    // 0x120f68: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x120f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_120f6c:
    // 0x120f6c: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
label_120f70:
    if (ctx->pc == 0x120F70u) {
        ctx->pc = 0x120F74u;
        goto label_120f74;
    }
    ctx->pc = 0x120F6Cu;
    {
        const bool branch_taken_0x120f6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f6c) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F74u;
label_120f74:
    // 0x120f74: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x120f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_120f78:
    // 0x120f78: 0x10c30026  beq         $a2, $v1, . + 4 + (0x26 << 2)
label_120f7c:
    if (ctx->pc == 0x120F7Cu) {
        ctx->pc = 0x120F80u;
        goto label_120f80;
    }
    ctx->pc = 0x120F78u;
    {
        const bool branch_taken_0x120f78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f78) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F80u;
label_120f80:
    // 0x120f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x120f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120f84:
    // 0x120f84: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_120f88:
    if (ctx->pc == 0x120F88u) {
        ctx->pc = 0x120F8Cu;
        goto label_120f8c;
    }
    ctx->pc = 0x120F84u;
    {
        const bool branch_taken_0x120f84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f84) {
            ctx->pc = 0x120F94u;
            goto label_120f94;
        }
    }
    ctx->pc = 0x120F8Cu;
label_120f8c:
    // 0x120f8c: 0x10000021  b           . + 4 + (0x21 << 2)
label_120f90:
    if (ctx->pc == 0x120F90u) {
        ctx->pc = 0x120F94u;
        goto label_120f94;
    }
    ctx->pc = 0x120F8Cu;
    {
        const bool branch_taken_0x120f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120f8c) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120F94u;
label_120f94:
    // 0x120f94: 0x9204009e  lbu         $a0, 0x9E($s0)
    ctx->pc = 0x120f94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 158)));
label_120f98:
    // 0x120f98: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x120f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_120f9c:
    // 0x120f9c: 0x28640006  slti        $a0, $v1, 0x6
    ctx->pc = 0x120f9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_120fa0:
    // 0x120fa0: 0x14800035  bnez        $a0, . + 4 + (0x35 << 2)
label_120fa4:
    if (ctx->pc == 0x120FA4u) {
        ctx->pc = 0x120FA8u;
        goto label_120fa8;
    }
    ctx->pc = 0x120FA0u;
    {
        const bool branch_taken_0x120fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x120fa0) {
            ctx->pc = 0x121078u;
            goto label_121078;
        }
    }
    ctx->pc = 0x120FA8u;
label_120fa8:
    // 0x120fa8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120fac:
    // 0x120fac: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x120facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_120fb0:
    // 0x120fb0: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x120fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_120fb4:
    // 0x120fb4: 0x34864000  ori         $a2, $a0, 0x4000
    ctx->pc = 0x120fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_120fb8:
    // 0x120fb8: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x120fb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120fbc:
    // 0x120fbc: 0x24050522  addiu       $a1, $zero, 0x522
    ctx->pc = 0x120fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
label_120fc0:
    // 0x120fc0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x120fc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_120fc4:
    // 0x120fc4: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x120fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
label_120fc8:
    // 0x120fc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x120fc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_120fcc:
    // 0x120fcc: 0xc067b18  jal         func_19EC60
label_120fd0:
    if (ctx->pc == 0x120FD0u) {
        ctx->pc = 0x120FD4u;
        goto label_120fd4;
    }
    ctx->pc = 0x120FCCu;
    SET_GPR_U32(ctx, 31, 0x120FD4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x120FCCu, 0x120FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FD4u;
label_120fd4:
    // 0x120fd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x120fd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_120fd8:
    // 0x120fd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x120fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120fdc:
    // 0x120fdc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120fe0:
    // 0x120fe0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x120fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_120fe4:
    // 0x120fe4: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x120fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_120fe8:
    // 0x120fe8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x120fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120fec:
    // 0x120fec: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x120fecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_120ff0:
    // 0x120ff0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120ff4:
    // 0x120ff4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x120ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_120ff8:
    // 0x120ff8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_120ffc:
    // 0x120ffc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x120ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_121000:
    // 0x121000: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121004:
    // 0x121004: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x121004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_121008:
    // 0x121008: 0xa200009e  sb          $zero, 0x9E($s0)
    ctx->pc = 0x121008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 158), (uint8_t)GPR_U32(ctx, 0));
label_12100c:
    // 0x12100c: 0x10000748  b           . + 4 + (0x748 << 2)
label_121010:
    if (ctx->pc == 0x121010u) {
        ctx->pc = 0x121014u;
        goto label_121014;
    }
    ctx->pc = 0x12100Cu;
    {
        const bool branch_taken_0x12100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12100c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121014u;
label_121014:
    // 0x121014: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121018:
    // 0x121018: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x121018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_12101c:
    // 0x12101c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x12101cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_121020:
    // 0x121020: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_121024:
    // 0x121024: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121024u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_121028:
    // 0x121028: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x121028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
label_12102c:
    // 0x12102c: 0x24a505b0  addiu       $a1, $a1, 0x5B0
    ctx->pc = 0x12102cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
label_121030:
    // 0x121030: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121030u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121034:
    // 0x121034: 0xc067b18  jal         func_19EC60
label_121038:
    if (ctx->pc == 0x121038u) {
        ctx->pc = 0x12103Cu;
        goto label_12103c;
    }
    ctx->pc = 0x121034u;
    SET_GPR_U32(ctx, 31, 0x12103Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121034u, 0x12103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12103Cu;
label_12103c:
    // 0x12103c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12103cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121040:
    // 0x121040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121044:
    // 0x121044: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121048:
    // 0x121048: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x121048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_12104c:
    // 0x12104c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x12104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_121050:
    // 0x121050: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121054:
    // 0x121054: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x121054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_121058:
    // 0x121058: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12105c:
    // 0x12105c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x12105cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_121060:
    // 0x121060: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121064:
    // 0x121064: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121064u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_121068:
    // 0x121068: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12106c:
    // 0x12106c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12106cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_121070:
    // 0x121070: 0x1000072f  b           . + 4 + (0x72F << 2)
label_121074:
    if (ctx->pc == 0x121074u) {
        ctx->pc = 0x121078u;
        goto label_121078;
    }
    ctx->pc = 0x121070u;
    {
        const bool branch_taken_0x121070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121070) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121078u;
label_121078:
    // 0x121078: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12107c:
    // 0x12107c: 0x94a411f4  lhu         $a0, 0x11F4($a1)
    ctx->pc = 0x12107cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4596)));
label_121080:
    // 0x121080: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x121080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_121084:
    // 0x121084: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x121084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_121088:
    // 0x121088: 0x14640041  bne         $v1, $a0, . + 4 + (0x41 << 2)
label_12108c:
    if (ctx->pc == 0x12108Cu) {
        ctx->pc = 0x121090u;
        goto label_121090;
    }
    ctx->pc = 0x121088u;
    {
        const bool branch_taken_0x121088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x121088) {
            ctx->pc = 0x121190u;
            goto label_121190;
        }
    }
    ctx->pc = 0x121090u;
label_121090:
    // 0x121090: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x121090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_121094:
    // 0x121094: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x121094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_121098:
    // 0x121098: 0x30a30200  andi        $v1, $a1, 0x200
    ctx->pc = 0x121098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
label_12109c:
    // 0x12109c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1210a0:
    if (ctx->pc == 0x1210A0u) {
        ctx->pc = 0x1210A4u;
        goto label_1210a4;
    }
    ctx->pc = 0x12109Cu;
    {
        const bool branch_taken_0x12109c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12109c) {
            ctx->pc = 0x1210BCu;
            goto label_1210bc;
        }
    }
    ctx->pc = 0x1210A4u;
label_1210a4:
    // 0x1210a4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1210a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1210a8:
    // 0x1210a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1210a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1210ac:
    // 0x1210ac: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1210acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_1210b0:
    // 0x1210b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1210b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1210b4:
    // 0x1210b4: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_1210b8:
    if (ctx->pc == 0x1210B8u) {
        ctx->pc = 0x1210BCu;
        goto label_1210bc;
    }
    ctx->pc = 0x1210B4u;
    {
        const bool branch_taken_0x1210b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1210b4) {
            ctx->pc = 0x121190u;
            goto label_121190;
        }
    }
    ctx->pc = 0x1210BCu;
label_1210bc:
    // 0x1210bc: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1210bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1210c0:
    // 0x1210c0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1210c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1210c4:
    // 0x1210c4: 0x34660fdb  ori         $a2, $v1, 0xFDB
    ctx->pc = 0x1210c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1210c8:
    // 0x1210c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1210c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1210cc:
    // 0x1210cc: 0x0  nop
    ctx->pc = 0x1210ccu;
    // NOP
label_1210d0:
    // 0x1210d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1210d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1210d4:
    // 0x1210d4: 0x0  nop
    ctx->pc = 0x1210d4u;
    // NOP
label_1210d8:
    // 0x1210d8: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_1210dc:
    if (ctx->pc == 0x1210DCu) {
        ctx->pc = 0x1210E0u;
        goto label_1210e0;
    }
    ctx->pc = 0x1210D8u;
    {
        const bool branch_taken_0x1210d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1210d8) {
            ctx->pc = 0x121190u;
            goto label_121190;
        }
    }
    ctx->pc = 0x1210E0u;
label_1210e0:
    // 0x1210e0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1210e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1210e4:
    // 0x1210e4: 0x948511f6  lhu         $a1, 0x11F6($a0)
    ctx->pc = 0x1210e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
label_1210e8:
    // 0x1210e8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1210e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1210ec:
    // 0x1210ec: 0x2064fff6  addi        $a0, $v1, -0xA
    ctx->pc = 0x1210ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967286, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1210f0:
    // 0x1210f0: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x1210f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1210f4:
    // 0x1210f4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_1210f8:
    if (ctx->pc == 0x1210F8u) {
        ctx->pc = 0x1210FCu;
        goto label_1210fc;
    }
    ctx->pc = 0x1210F4u;
    {
        const bool branch_taken_0x1210f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1210f4) {
            ctx->pc = 0x121190u;
            goto label_121190;
        }
    }
    ctx->pc = 0x1210FCu;
label_1210fc:
    // 0x1210fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1210fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_121100:
    // 0x121100: 0x2465e150  addiu       $a1, $v1, -0x1EB0
    ctx->pc = 0x121100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959440));
label_121104:
    // 0x121104: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x121104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_121108:
    // 0x121108: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x121108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_12110c:
    // 0x12110c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_121110:
    // 0x121110: 0x800008  jr          $a0
label_121114:
    if (ctx->pc == 0x121114u) {
        ctx->pc = 0x121118u;
        goto label_121118;
    }
    ctx->pc = 0x121110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x121118u;
label_121118:
    // 0x121118: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12111c:
    // 0x12111c: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x12111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_121120:
    // 0x121120: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x121120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_121124:
    // 0x121124: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_121128:
    // 0x121128: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12112c:
    // 0x12112c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x12112cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
label_121130:
    // 0x121130: 0x24a505b0  addiu       $a1, $a1, 0x5B0
    ctx->pc = 0x121130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
label_121134:
    // 0x121134: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121134u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121138:
    // 0x121138: 0xc067b18  jal         func_19EC60
label_12113c:
    if (ctx->pc == 0x12113Cu) {
        ctx->pc = 0x121140u;
        goto label_121140;
    }
    ctx->pc = 0x121138u;
    SET_GPR_U32(ctx, 31, 0x121140u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121138u, 0x121140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121140u;
label_121140:
    // 0x121140: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x121140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121144:
    // 0x121144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121148:
    // 0x121148: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12114c:
    // 0x12114c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12114cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_121150:
    // 0x121150: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x121150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_121154:
    // 0x121154: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121158:
    // 0x121158: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x121158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12115c:
    // 0x12115c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121160:
    // 0x121160: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_121164:
    // 0x121164: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121168:
    // 0x121168: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12116c:
    // 0x12116c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121170:
    // 0x121170: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x121170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_121174:
    // 0x121174: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121178:
    // 0x121178: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x121178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_12117c:
    // 0x12117c: 0xc04d934  jal         func_1364D0
label_121180:
    if (ctx->pc == 0x121180u) {
        ctx->pc = 0x121184u;
        goto label_121184;
    }
    ctx->pc = 0x12117Cu;
    SET_GPR_U32(ctx, 31, 0x121184u);
    ctx->pc = 0x1364D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364D0u, 0x12117Cu, 0x121184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121184u;
label_121184:
    // 0x121184: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121188:
    // 0x121188: 0x100006e9  b           . + 4 + (0x6E9 << 2)
label_12118c:
    if (ctx->pc == 0x12118Cu) {
        ctx->pc = 0x121190u;
        goto label_121190;
    }
    ctx->pc = 0x121188u;
    {
        const bool branch_taken_0x121188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121188) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121190u;
label_121190:
    // 0x121190: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121194:
    // 0x121194: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x121194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_121198:
    // 0x121198: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x121198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_12119c:
    // 0x12119c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x12119cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_1211a0:
    // 0x1211a0: 0x146000c5  bnez        $v1, . + 4 + (0xC5 << 2)
label_1211a4:
    if (ctx->pc == 0x1211A4u) {
        ctx->pc = 0x1211A8u;
        goto label_1211a8;
    }
    ctx->pc = 0x1211A0u;
    {
        const bool branch_taken_0x1211a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1211a0) {
            ctx->pc = 0x1214B8u;
            goto label_1214b8;
        }
    }
    ctx->pc = 0x1211A8u;
label_1211a8:
    // 0x1211a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1211a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1211ac:
    // 0x1211ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1211acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1211b0:
    // 0x1211b0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1211b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1211b4:
    // 0x1211b4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1211b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1211b8:
    // 0x1211b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1211b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1211bc:
    // 0x1211bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1211c0:
    if (ctx->pc == 0x1211C0u) {
        ctx->pc = 0x1211C4u;
        goto label_1211c4;
    }
    ctx->pc = 0x1211BCu;
    {
        const bool branch_taken_0x1211bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211bc) {
            ctx->pc = 0x1211C8u;
            goto label_1211c8;
        }
    }
    ctx->pc = 0x1211C4u;
label_1211c4:
    // 0x1211c4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1211c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1211c8:
    // 0x1211c8: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1211c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1211cc:
    // 0x1211cc: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1211ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1211d0:
    // 0x1211d0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1211d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1211d4:
    // 0x1211d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1211d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1211d8:
    // 0x1211d8: 0x0  nop
    ctx->pc = 0x1211d8u;
    // NOP
label_1211dc:
    // 0x1211dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1211dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1211e0:
    // 0x1211e0: 0x0  nop
    ctx->pc = 0x1211e0u;
    // NOP
label_1211e4:
    // 0x1211e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1211e8:
    if (ctx->pc == 0x1211E8u) {
        ctx->pc = 0x1211ECu;
        goto label_1211ec;
    }
    ctx->pc = 0x1211E4u;
    {
        const bool branch_taken_0x1211e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1211e4) {
            ctx->pc = 0x1211F0u;
            goto label_1211f0;
        }
    }
    ctx->pc = 0x1211ECu;
label_1211ec:
    // 0x1211ec: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1211ecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1211f0:
    // 0x1211f0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1211f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1211f4:
    // 0x1211f4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1211f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1211f8:
    // 0x1211f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1211f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1211fc:
    // 0x1211fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121200:
    // 0x121200: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
label_121204:
    if (ctx->pc == 0x121204u) {
        ctx->pc = 0x121208u;
        goto label_121208;
    }
    ctx->pc = 0x121200u;
    {
        const bool branch_taken_0x121200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x121200) {
            ctx->pc = 0x121244u;
            goto label_121244;
        }
    }
    ctx->pc = 0x121208u;
label_121208:
    // 0x121208: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12120c:
    // 0x12120c: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x12120cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_121210:
    // 0x121210: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x121210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_121214:
    // 0x121214: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x121214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_121218:
    // 0x121218: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
label_12121c:
    if (ctx->pc == 0x12121Cu) {
        ctx->pc = 0x121220u;
        goto label_121220;
    }
    ctx->pc = 0x121218u;
    {
        const bool branch_taken_0x121218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x121218) {
            ctx->pc = 0x121280u;
            goto label_121280;
        }
    }
    ctx->pc = 0x121220u;
label_121220:
    // 0x121220: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121224:
    // 0x121224: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x121224u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_121228:
    // 0x121228: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x121228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_12122c:
    // 0x12122c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x12122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_121230:
    // 0x121230: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
label_121234:
    if (ctx->pc == 0x121234u) {
        ctx->pc = 0x121238u;
        goto label_121238;
    }
    ctx->pc = 0x121230u;
    {
        const bool branch_taken_0x121230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x121230) {
            ctx->pc = 0x121280u;
            goto label_121280;
        }
    }
    ctx->pc = 0x121238u;
label_121238:
    // 0x121238: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x121238u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12123c:
    // 0x12123c: 0x10000010  b           . + 4 + (0x10 << 2)
label_121240:
    if (ctx->pc == 0x121240u) {
        ctx->pc = 0x121244u;
        goto label_121244;
    }
    ctx->pc = 0x12123Cu;
    {
        const bool branch_taken_0x12123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12123c) {
            ctx->pc = 0x121280u;
            goto label_121280;
        }
    }
    ctx->pc = 0x121244u;
label_121244:
    // 0x121244: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121248:
    // 0x121248: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x121248u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_12124c:
    // 0x12124c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x12124cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_121250:
    // 0x121250: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121254:
    // 0x121254: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_121258:
    if (ctx->pc == 0x121258u) {
        ctx->pc = 0x12125Cu;
        goto label_12125c;
    }
    ctx->pc = 0x121254u;
    {
        const bool branch_taken_0x121254 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x121254) {
            ctx->pc = 0x12127Cu;
            goto label_12127c;
        }
    }
    ctx->pc = 0x12125Cu;
label_12125c:
    // 0x12125c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12125cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121260:
    // 0x121260: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x121260u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_121264:
    // 0x121264: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x121264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_121268:
    // 0x121268: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_12126c:
    if (ctx->pc == 0x12126Cu) {
        ctx->pc = 0x121270u;
        goto label_121270;
    }
    ctx->pc = 0x121268u;
    {
        const bool branch_taken_0x121268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121268) {
            ctx->pc = 0x121280u;
            goto label_121280;
        }
    }
    ctx->pc = 0x121270u;
label_121270:
    // 0x121270: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x121270u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121274:
    // 0x121274: 0x10000002  b           . + 4 + (0x2 << 2)
label_121278:
    if (ctx->pc == 0x121278u) {
        ctx->pc = 0x12127Cu;
        goto label_12127c;
    }
    ctx->pc = 0x121274u;
    {
        const bool branch_taken_0x121274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121274) {
            ctx->pc = 0x121280u;
            goto label_121280;
        }
    }
    ctx->pc = 0x12127Cu;
label_12127c:
    // 0x12127c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x12127cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121280:
    // 0x121280: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121284:
    // 0x121284: 0x94a4000e  lhu         $a0, 0xE($a1)
    ctx->pc = 0x121284u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_121288:
    // 0x121288: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x121288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_12128c:
    // 0x12128c: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x12128cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_121290:
    // 0x121290: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x121290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_121294:
    // 0x121294: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_121298:
    if (ctx->pc == 0x121298u) {
        ctx->pc = 0x12129Cu;
        goto label_12129c;
    }
    ctx->pc = 0x121294u;
    {
        const bool branch_taken_0x121294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x121294) {
            ctx->pc = 0x1212BCu;
            goto label_1212bc;
        }
    }
    ctx->pc = 0x12129Cu;
label_12129c:
    // 0x12129c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1212a0:
    // 0x1212a0: 0x9464000e  lhu         $a0, 0xE($v1)
    ctx->pc = 0x1212a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1212a4:
    // 0x1212a4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1212a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1212a8:
    // 0x1212a8: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x1212a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_1212ac:
    // 0x1212ac: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1212acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_1212b0:
    // 0x1212b0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_1212b4:
    if (ctx->pc == 0x1212B4u) {
        ctx->pc = 0x1212B8u;
        goto label_1212b8;
    }
    ctx->pc = 0x1212B0u;
    {
        const bool branch_taken_0x1212b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1212b0) {
            ctx->pc = 0x1212BCu;
            goto label_1212bc;
        }
    }
    ctx->pc = 0x1212B8u;
label_1212b8:
    // 0x1212b8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1212b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1212bc:
    // 0x1212bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1212bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1212c0:
    // 0x1212c0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1212c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1212c4:
    // 0x1212c4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1212c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1212c8:
    // 0x1212c8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1212c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1212cc:
    // 0x1212cc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1212d0:
    if (ctx->pc == 0x1212D0u) {
        ctx->pc = 0x1212D4u;
        goto label_1212d4;
    }
    ctx->pc = 0x1212CCu;
    {
        const bool branch_taken_0x1212cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212cc) {
            ctx->pc = 0x1212D8u;
            goto label_1212d8;
        }
    }
    ctx->pc = 0x1212D4u;
label_1212d4:
    // 0x1212d4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1212d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1212d8:
    // 0x1212d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1212d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1212dc:
    // 0x1212dc: 0x946511f6  lhu         $a1, 0x11F6($v1)
    ctx->pc = 0x1212dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1212e0:
    // 0x1212e0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1212e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1212e4:
    // 0x1212e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1212e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1212e8:
    // 0x1212e8: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_1212ec:
    if (ctx->pc == 0x1212ECu) {
        ctx->pc = 0x1212F0u;
        goto label_1212f0;
    }
    ctx->pc = 0x1212E8u;
    {
        const bool branch_taken_0x1212e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1212e8) {
            ctx->pc = 0x121308u;
            goto label_121308;
        }
    }
    ctx->pc = 0x1212F0u;
label_1212f0:
    // 0x1212f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1212f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1212f4:
    // 0x1212f4: 0x946511f6  lhu         $a1, 0x11F6($v1)
    ctx->pc = 0x1212f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1212f8:
    // 0x1212f8: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x1212f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1212fc:
    // 0x1212fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1212fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121300:
    // 0x121300: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_121304:
    if (ctx->pc == 0x121304u) {
        ctx->pc = 0x121308u;
        goto label_121308;
    }
    ctx->pc = 0x121300u;
    {
        const bool branch_taken_0x121300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121300) {
            ctx->pc = 0x121318u;
            goto label_121318;
        }
    }
    ctx->pc = 0x121308u;
label_121308:
    // 0x121308: 0x32640020  andi        $a0, $s3, 0x20
    ctx->pc = 0x121308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_12130c:
    // 0x12130c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_121310:
    if (ctx->pc == 0x121310u) {
        ctx->pc = 0x121314u;
        goto label_121314;
    }
    ctx->pc = 0x12130Cu;
    {
        const bool branch_taken_0x12130c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12130c) {
            ctx->pc = 0x121318u;
            goto label_121318;
        }
    }
    ctx->pc = 0x121314u;
label_121314:
    // 0x121314: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x121314u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121318:
    // 0x121318: 0x12400067  beqz        $s2, . + 4 + (0x67 << 2)
label_12131c:
    if (ctx->pc == 0x12131Cu) {
        ctx->pc = 0x121320u;
        goto label_121320;
    }
    ctx->pc = 0x121318u;
    {
        const bool branch_taken_0x121318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x121318) {
            ctx->pc = 0x1214B8u;
            goto label_1214b8;
        }
    }
    ctx->pc = 0x121320u;
label_121320:
    // 0x121320: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121324:
    // 0x121324: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x121324u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_121328:
    // 0x121328: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x121328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_12132c:
    // 0x12132c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12132cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_121330:
    // 0x121330: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
label_121334:
    if (ctx->pc == 0x121334u) {
        ctx->pc = 0x121338u;
        goto label_121338;
    }
    ctx->pc = 0x121330u;
    {
        const bool branch_taken_0x121330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x121330) {
            ctx->pc = 0x121358u;
            goto label_121358;
        }
    }
    ctx->pc = 0x121338u;
label_121338:
    // 0x121338: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12133c:
    // 0x12133c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_121340:
    if (ctx->pc == 0x121340u) {
        ctx->pc = 0x121344u;
        goto label_121344;
    }
    ctx->pc = 0x12133Cu;
    {
        const bool branch_taken_0x12133c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12133c) {
            ctx->pc = 0x121358u;
            goto label_121358;
        }
    }
    ctx->pc = 0x121344u;
label_121344:
    // 0x121344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121348:
    // 0x121348: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_12134c:
    if (ctx->pc == 0x12134Cu) {
        ctx->pc = 0x121350u;
        goto label_121350;
    }
    ctx->pc = 0x121348u;
    {
        const bool branch_taken_0x121348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x121348) {
            ctx->pc = 0x121358u;
            goto label_121358;
        }
    }
    ctx->pc = 0x121350u;
label_121350:
    // 0x121350: 0x10000059  b           . + 4 + (0x59 << 2)
label_121354:
    if (ctx->pc == 0x121354u) {
        ctx->pc = 0x121358u;
        goto label_121358;
    }
    ctx->pc = 0x121350u;
    {
        const bool branch_taken_0x121350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121350) {
            ctx->pc = 0x1214B8u;
            goto label_1214b8;
        }
    }
    ctx->pc = 0x121358u;
label_121358:
    // 0x121358: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12135c:
    // 0x12135c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x12135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_121360:
    // 0x121360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x121360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121364:
    // 0x121364: 0x24661200  addiu       $a2, $v1, 0x1200
    ctx->pc = 0x121364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
label_121368:
    // 0x121368: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x121368u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12136c:
    // 0x12136c: 0xc062f5c  jal         func_18BD70
label_121370:
    if (ctx->pc == 0x121370u) {
        ctx->pc = 0x121374u;
        goto label_121374;
    }
    ctx->pc = 0x12136Cu;
    SET_GPR_U32(ctx, 31, 0x121374u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x12136Cu, 0x121374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121374u;
label_121374:
    // 0x121374: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x121374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121378:
    // 0x121378: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x121378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_12137c:
    // 0x12137c: 0xc0630a8  jal         func_18C2A0
label_121380:
    if (ctx->pc == 0x121380u) {
        ctx->pc = 0x121384u;
        goto label_121384;
    }
    ctx->pc = 0x12137Cu;
    SET_GPR_U32(ctx, 31, 0x121384u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x12137Cu, 0x121384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121384u;
label_121384:
    // 0x121384: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121388:
    // 0x121388: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x121388u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_12138c:
    // 0x12138c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x12138cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_121390:
    // 0x121390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121394:
    // 0x121394: 0x14a30024  bne         $a1, $v1, . + 4 + (0x24 << 2)
label_121398:
    if (ctx->pc == 0x121398u) {
        ctx->pc = 0x12139Cu;
        goto label_12139c;
    }
    ctx->pc = 0x121394u;
    {
        const bool branch_taken_0x121394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x121394) {
            ctx->pc = 0x121428u;
            goto label_121428;
        }
    }
    ctx->pc = 0x12139Cu;
label_12139c:
    // 0x12139c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1213a0:
    // 0x1213a0: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x1213a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1213a4:
    // 0x1213a4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1213a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1213a8:
    // 0x1213a8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1213a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1213ac:
    // 0x1213ac: 0x14a3001e  bne         $a1, $v1, . + 4 + (0x1E << 2)
label_1213b0:
    if (ctx->pc == 0x1213B0u) {
        ctx->pc = 0x1213B4u;
        goto label_1213b4;
    }
    ctx->pc = 0x1213ACu;
    {
        const bool branch_taken_0x1213ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1213ac) {
            ctx->pc = 0x121428u;
            goto label_121428;
        }
    }
    ctx->pc = 0x1213B4u;
label_1213b4:
    // 0x1213b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1213b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1213b8:
    // 0x1213b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1213bc:
    // 0x1213bc: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x1213bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_1213c0:
    // 0x1213c0: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1213c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1213c4:
    // 0x1213c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1213c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1213c8:
    // 0x1213c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1213c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1213cc:
    // 0x1213cc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1213ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1213d0:
    // 0x1213d0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1213d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1213d4:
    // 0x1213d4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1213d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1213d8:
    // 0x1213d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1213d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1213dc:
    // 0x1213dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1213dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1213e0:
    // 0x1213e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1213e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1213e4:
    // 0x1213e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1213e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1213e8:
    // 0x1213e8: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1213e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1213ec:
    // 0x1213ec: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1213ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1213f0:
    // 0x1213f0: 0x34734000  ori         $s3, $v1, 0x4000
    ctx->pc = 0x1213f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1213f4:
    // 0x1213f4: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x1213f4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1213f8:
    // 0x1213f8: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1213f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
label_1213fc:
    // 0x1213fc: 0x24b10570  addiu       $s1, $a1, 0x570
    ctx->pc = 0x1213fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1392));
label_121400:
    // 0x121400: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121400u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_121404:
    // 0x121404: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121404u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121408:
    // 0x121408: 0xc067b18  jal         func_19EC60
label_12140c:
    if (ctx->pc == 0x12140Cu) {
        ctx->pc = 0x121410u;
        goto label_121410;
    }
    ctx->pc = 0x121408u;
    SET_GPR_U32(ctx, 31, 0x121410u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121408u, 0x121410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121410u;
label_121410:
    // 0x121410: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121410u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121414:
    // 0x121414: 0x9204009e  lbu         $a0, 0x9E($s0)
    ctx->pc = 0x121414u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 158)));
label_121418:
    // 0x121418: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x121418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12141c:
    // 0x12141c: 0xa203009e  sb          $v1, 0x9E($s0)
    ctx->pc = 0x12141cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 158), (uint8_t)GPR_U32(ctx, 3));
label_121420:
    // 0x121420: 0x10000643  b           . + 4 + (0x643 << 2)
label_121424:
    if (ctx->pc == 0x121424u) {
        ctx->pc = 0x121428u;
        goto label_121428;
    }
    ctx->pc = 0x121420u;
    {
        const bool branch_taken_0x121420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121420) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121428u;
label_121428:
    // 0x121428: 0xc067694  jal         func_19DA50
label_12142c:
    if (ctx->pc == 0x12142Cu) {
        ctx->pc = 0x121430u;
        goto label_121430;
    }
    ctx->pc = 0x121428u;
    SET_GPR_U32(ctx, 31, 0x121430u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x121428u, 0x121430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121430u;
label_121430:
    // 0x121430: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121430u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121434:
    // 0x121434: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x121434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_121438:
    // 0x121438: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x121438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_12143c:
    // 0x12143c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_121440:
    if (ctx->pc == 0x121440u) {
        ctx->pc = 0x121444u;
        goto label_121444;
    }
    ctx->pc = 0x12143Cu;
    {
        const bool branch_taken_0x12143c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12143c) {
            ctx->pc = 0x1214B8u;
            goto label_1214b8;
        }
    }
    ctx->pc = 0x121444u;
label_121444:
    // 0x121444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121448:
    // 0x121448: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12144c:
    // 0x12144c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x12144cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_121450:
    // 0x121450: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x121450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_121454:
    // 0x121454: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121458:
    // 0x121458: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x121458u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
label_12145c:
    // 0x12145c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12145cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121460:
    // 0x121460: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_121464:
    // 0x121464: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121468:
    // 0x121468: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12146c:
    // 0x12146c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121470:
    // 0x121470: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121474:
    // 0x121474: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x121474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_121478:
    // 0x121478: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12147c:
    // 0x12147c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x12147cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_121480:
    // 0x121480: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x121480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_121484:
    // 0x121484: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_121488:
    // 0x121488: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12148c:
    // 0x12148c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x12148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
label_121490:
    // 0x121490: 0x24a50570  addiu       $a1, $a1, 0x570
    ctx->pc = 0x121490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1392));
label_121494:
    // 0x121494: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121494u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121498:
    // 0x121498: 0xc067b18  jal         func_19EC60
label_12149c:
    if (ctx->pc == 0x12149Cu) {
        ctx->pc = 0x1214A0u;
        goto label_1214a0;
    }
    ctx->pc = 0x121498u;
    SET_GPR_U32(ctx, 31, 0x1214A0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121498u, 0x1214A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214A0u;
label_1214a0:
    // 0x1214a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1214a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1214a4:
    // 0x1214a4: 0x9206009e  lbu         $a2, 0x9E($s0)
    ctx->pc = 0x1214a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 158)));
label_1214a8:
    // 0x1214a8: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1214a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1214ac:
    // 0x1214ac: 0xa204009e  sb          $a0, 0x9E($s0)
    ctx->pc = 0x1214acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 158), (uint8_t)GPR_U32(ctx, 4));
label_1214b0:
    // 0x1214b0: 0x1000061f  b           . + 4 + (0x61F << 2)
label_1214b4:
    if (ctx->pc == 0x1214B4u) {
        ctx->pc = 0x1214B8u;
        goto label_1214b8;
    }
    ctx->pc = 0x1214B0u;
    {
        const bool branch_taken_0x1214b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1214b0) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1214B8u;
label_1214b8:
    // 0x1214b8: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x1214b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_1214bc:
    // 0x1214bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1214c0:
    if (ctx->pc == 0x1214C0u) {
        ctx->pc = 0x1214C4u;
        goto label_1214c4;
    }
    ctx->pc = 0x1214BCu;
    {
        const bool branch_taken_0x1214bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1214bc) {
            ctx->pc = 0x1214D4u;
            goto label_1214d4;
        }
    }
    ctx->pc = 0x1214C4u;
label_1214c4:
    // 0x1214c4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1214c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1214c8:
    // 0x1214c8: 0x848511f2  lh          $a1, 0x11F2($a0)
    ctx->pc = 0x1214c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
label_1214cc:
    // 0x1214cc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1214ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1214d0:
    // 0x1214d0: 0xa48311f2  sh          $v1, 0x11F2($a0)
    ctx->pc = 0x1214d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4594), (uint16_t)GPR_U32(ctx, 3));
label_1214d4:
    // 0x1214d4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1214d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1214d8:
    // 0x1214d8: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1214d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
label_1214dc:
    // 0x1214dc: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x1214dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
label_1214e0:
    // 0x1214e0: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x1214e0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
label_1214e4:
    // 0x1214e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1214e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1214e8:
    // 0x1214e8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1214e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1214ec:
    // 0x1214ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1214ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1214f0:
    // 0x1214f0: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x1214f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
label_1214f4:
    // 0x1214f4: 0xc06d1d8  jal         func_1B4760
label_1214f8:
    if (ctx->pc == 0x1214F8u) {
        ctx->pc = 0x1214FCu;
        goto label_1214fc;
    }
    ctx->pc = 0x1214F4u;
    SET_GPR_U32(ctx, 31, 0x1214FCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1214F4u, 0x1214FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214FCu;
label_1214fc:
    // 0x1214fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1214fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121500:
    // 0x121500: 0xa200009e  sb          $zero, 0x9E($s0)
    ctx->pc = 0x121500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 158), (uint8_t)GPR_U32(ctx, 0));
label_121504:
    // 0x121504: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121508:
    // 0x121508: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x121508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_12150c:
    // 0x12150c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x12150cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_121510:
    // 0x121510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121514:
    // 0x121514: 0x14a30025  bne         $a1, $v1, . + 4 + (0x25 << 2)
label_121518:
    if (ctx->pc == 0x121518u) {
        ctx->pc = 0x12151Cu;
        goto label_12151c;
    }
    ctx->pc = 0x121514u;
    {
        const bool branch_taken_0x121514 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x121514) {
            ctx->pc = 0x1215ACu;
            goto label_1215ac;
        }
    }
    ctx->pc = 0x12151Cu;
label_12151c:
    // 0x12151c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121520:
    // 0x121520: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x121520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_121524:
    // 0x121524: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x121524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_121528:
    // 0x121528: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12152c:
    // 0x12152c: 0x10c40007  beq         $a2, $a0, . + 4 + (0x7 << 2)
label_121530:
    if (ctx->pc == 0x121530u) {
        ctx->pc = 0x121534u;
        goto label_121534;
    }
    ctx->pc = 0x12152Cu;
    {
        const bool branch_taken_0x12152c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x12152c) {
            ctx->pc = 0x12154Cu;
            goto label_12154c;
        }
    }
    ctx->pc = 0x121534u;
label_121534:
    // 0x121534: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121538:
    // 0x121538: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x121538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_12153c:
    // 0x12153c: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x12153cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_121540:
    // 0x121540: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x121540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_121544:
    // 0x121544: 0x14c50019  bne         $a2, $a1, . + 4 + (0x19 << 2)
label_121548:
    if (ctx->pc == 0x121548u) {
        ctx->pc = 0x12154Cu;
        goto label_12154c;
    }
    ctx->pc = 0x121544u;
    {
        const bool branch_taken_0x121544 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x121544) {
            ctx->pc = 0x1215ACu;
            goto label_1215ac;
        }
    }
    ctx->pc = 0x12154Cu;
label_12154c:
    // 0x12154c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12154cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121550:
    // 0x121550: 0x908411ef  lbu         $a0, 0x11EF($a0)
    ctx->pc = 0x121550u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4591)));
label_121554:
    // 0x121554: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121558:
    // 0x121558: 0xa0a410a8  sb          $a0, 0x10A8($a1)
    ctx->pc = 0x121558u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 4));
label_12155c:
    // 0x12155c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121560:
    // 0x121560: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121564:
    // 0x121564: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121564u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_121568:
    // 0x121568: 0xc047ff4  jal         func_11FFD0
label_12156c:
    if (ctx->pc == 0x12156Cu) {
        ctx->pc = 0x121570u;
        goto label_121570;
    }
    ctx->pc = 0x121568u;
    SET_GPR_U32(ctx, 31, 0x121570u);
    ctx->pc = 0x11FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FFD0u, 0x121568u, 0x121570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121570u;
label_121570:
    // 0x121570: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x121570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121574:
    // 0x121574: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x121574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_121578:
    // 0x121578: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x121578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_12157c:
    // 0x12157c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x12157cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_121580:
    // 0x121580: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x121580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_121584:
    // 0x121584: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121588:
    // 0x121588: 0x84a410a6  lh          $a0, 0x10A6($a1)
    ctx->pc = 0x121588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
label_12158c:
    // 0x12158c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x12158cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_121590:
    // 0x121590: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x121590u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_121594:
    // 0x121594: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_121598:
    if (ctx->pc == 0x121598u) {
        ctx->pc = 0x12159Cu;
        goto label_12159c;
    }
    ctx->pc = 0x121594u;
    {
        const bool branch_taken_0x121594 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x121594) {
            ctx->pc = 0x1215A4u;
            goto label_1215a4;
        }
    }
    ctx->pc = 0x12159Cu;
label_12159c:
    // 0x12159c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12159cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1215a0:
    // 0x1215a0: 0xa4c010a6  sh          $zero, 0x10A6($a2)
    ctx->pc = 0x1215a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4262), (uint16_t)GPR_U32(ctx, 0));
label_1215a4:
    // 0x1215a4: 0x100005e2  b           . + 4 + (0x5E2 << 2)
label_1215a8:
    if (ctx->pc == 0x1215A8u) {
        ctx->pc = 0x1215ACu;
        goto label_1215ac;
    }
    ctx->pc = 0x1215A4u;
    {
        const bool branch_taken_0x1215a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1215a4) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1215ACu;
label_1215ac:
    // 0x1215ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1215acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1215b0:
    // 0x1215b0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1215b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1215b4:
    // 0x1215b4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1215b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1215b8:
    // 0x1215b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1215b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1215bc:
    // 0x1215bc: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
label_1215c0:
    if (ctx->pc == 0x1215C0u) {
        ctx->pc = 0x1215C4u;
        goto label_1215c4;
    }
    ctx->pc = 0x1215BCu;
    {
        const bool branch_taken_0x1215bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1215bc) {
            ctx->pc = 0x1215DCu;
            goto label_1215dc;
        }
    }
    ctx->pc = 0x1215C4u;
label_1215c4:
    // 0x1215c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1215c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1215c8:
    // 0x1215c8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1215c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1215cc:
    // 0x1215cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1215ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1215d0:
    // 0x1215d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1215d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1215d4:
    // 0x1215d4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_1215d8:
    if (ctx->pc == 0x1215D8u) {
        ctx->pc = 0x1215DCu;
        goto label_1215dc;
    }
    ctx->pc = 0x1215D4u;
    {
        const bool branch_taken_0x1215d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1215d4) {
            ctx->pc = 0x121608u;
            goto label_121608;
        }
    }
    ctx->pc = 0x1215DCu;
label_1215dc:
    // 0x1215dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1215dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1215e0:
    // 0x1215e0: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x1215e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_1215e4:
    // 0x1215e4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1215e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_1215e8:
    // 0x1215e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1215e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1215ec:
    // 0x1215ec: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
label_1215f0:
    if (ctx->pc == 0x1215F0u) {
        ctx->pc = 0x1215F4u;
        goto label_1215f4;
    }
    ctx->pc = 0x1215ECu;
    {
        const bool branch_taken_0x1215ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1215ec) {
            ctx->pc = 0x121608u;
            goto label_121608;
        }
    }
    ctx->pc = 0x1215F4u;
label_1215f4:
    // 0x1215f4: 0x32630020  andi        $v1, $s3, 0x20
    ctx->pc = 0x1215f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_1215f8:
    // 0x1215f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1215fc:
    if (ctx->pc == 0x1215FCu) {
        ctx->pc = 0x121600u;
        goto label_121600;
    }
    ctx->pc = 0x1215F8u;
    {
        const bool branch_taken_0x1215f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1215f8) {
            ctx->pc = 0x121608u;
            goto label_121608;
        }
    }
    ctx->pc = 0x121600u;
label_121600:
    // 0x121600: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121604:
    // 0x121604: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x121604u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
label_121608:
    // 0x121608: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12160c:
    // 0x12160c: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x12160cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
label_121610:
    // 0x121610: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x121610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_121614:
    // 0x121614: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x121614u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_121618:
    // 0x121618: 0x48100fe  bgez        $a0, . + 4 + (0xFE << 2)
label_12161c:
    if (ctx->pc == 0x12161Cu) {
        ctx->pc = 0x121620u;
        goto label_121620;
    }
    ctx->pc = 0x121618u;
    {
        const bool branch_taken_0x121618 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x121618) {
            ctx->pc = 0x121A14u;
            goto label_121a14;
        }
    }
    ctx->pc = 0x121620u;
label_121620:
    // 0x121620: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121624:
    // 0x121624: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x121624u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_121628:
    // 0x121628: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x121628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_12162c:
    // 0x12162c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x12162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_121630:
    // 0x121630: 0x10c400bd  beq         $a2, $a0, . + 4 + (0xBD << 2)
label_121634:
    if (ctx->pc == 0x121634u) {
        ctx->pc = 0x121638u;
        goto label_121638;
    }
    ctx->pc = 0x121630u;
    {
        const bool branch_taken_0x121630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x121630) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x121638u;
label_121638:
    // 0x121638: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x121638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_12163c:
    // 0x12163c: 0x10c500ba  beq         $a2, $a1, . + 4 + (0xBA << 2)
label_121640:
    if (ctx->pc == 0x121640u) {
        ctx->pc = 0x121644u;
        goto label_121644;
    }
    ctx->pc = 0x12163Cu;
    {
        const bool branch_taken_0x12163c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x12163c) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x121644u;
label_121644:
    // 0x121644: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x121644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_121648:
    // 0x121648: 0x10c500b7  beq         $a2, $a1, . + 4 + (0xB7 << 2)
label_12164c:
    if (ctx->pc == 0x12164Cu) {
        ctx->pc = 0x121650u;
        goto label_121650;
    }
    ctx->pc = 0x121648u;
    {
        const bool branch_taken_0x121648 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x121648) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x121650u;
label_121650:
    // 0x121650: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x121650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_121654:
    // 0x121654: 0x10c300b4  beq         $a2, $v1, . + 4 + (0xB4 << 2)
label_121658:
    if (ctx->pc == 0x121658u) {
        ctx->pc = 0x12165Cu;
        goto label_12165c;
    }
    ctx->pc = 0x121654u;
    {
        const bool branch_taken_0x121654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x121654) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x12165Cu;
label_12165c:
    // 0x12165c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x12165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_121660:
    // 0x121660: 0x10c400b1  beq         $a2, $a0, . + 4 + (0xB1 << 2)
label_121664:
    if (ctx->pc == 0x121664u) {
        ctx->pc = 0x121668u;
        goto label_121668;
    }
    ctx->pc = 0x121660u;
    {
        const bool branch_taken_0x121660 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x121660) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x121668u;
label_121668:
    // 0x121668: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x121668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12166c:
    // 0x12166c: 0x10c300ae  beq         $a2, $v1, . + 4 + (0xAE << 2)
label_121670:
    if (ctx->pc == 0x121670u) {
        ctx->pc = 0x121674u;
        goto label_121674;
    }
    ctx->pc = 0x12166Cu;
    {
        const bool branch_taken_0x12166c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12166c) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x121674u;
label_121674:
    // 0x121674: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x121674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_121678:
    // 0x121678: 0x10c300ab  beq         $a2, $v1, . + 4 + (0xAB << 2)
label_12167c:
    if (ctx->pc == 0x12167Cu) {
        ctx->pc = 0x121680u;
        goto label_121680;
    }
    ctx->pc = 0x121678u;
    {
        const bool branch_taken_0x121678 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x121678) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x121680u;
label_121680:
    // 0x121680: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x121680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_121684:
    // 0x121684: 0x10c500a8  beq         $a2, $a1, . + 4 + (0xA8 << 2)
label_121688:
    if (ctx->pc == 0x121688u) {
        ctx->pc = 0x12168Cu;
        goto label_12168c;
    }
    ctx->pc = 0x121684u;
    {
        const bool branch_taken_0x121684 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x121684) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x12168Cu;
label_12168c:
    // 0x12168c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12168cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_121690:
    // 0x121690: 0x10c400a5  beq         $a2, $a0, . + 4 + (0xA5 << 2)
label_121694:
    if (ctx->pc == 0x121694u) {
        ctx->pc = 0x121698u;
        goto label_121698;
    }
    ctx->pc = 0x121690u;
    {
        const bool branch_taken_0x121690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x121690) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x121698u;
label_121698:
    // 0x121698: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x121698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_12169c:
    // 0x12169c: 0x10c300a2  beq         $a2, $v1, . + 4 + (0xA2 << 2)
label_1216a0:
    if (ctx->pc == 0x1216A0u) {
        ctx->pc = 0x1216A4u;
        goto label_1216a4;
    }
    ctx->pc = 0x12169Cu;
    {
        const bool branch_taken_0x12169c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12169c) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x1216A4u;
label_1216a4:
    // 0x1216a4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1216a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1216a8:
    // 0x1216a8: 0x10c3009f  beq         $a2, $v1, . + 4 + (0x9F << 2)
label_1216ac:
    if (ctx->pc == 0x1216ACu) {
        ctx->pc = 0x1216B0u;
        goto label_1216b0;
    }
    ctx->pc = 0x1216A8u;
    {
        const bool branch_taken_0x1216a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1216a8) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x1216B0u;
label_1216b0:
    // 0x1216b0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1216b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1216b4:
    // 0x1216b4: 0x10c3009c  beq         $a2, $v1, . + 4 + (0x9C << 2)
label_1216b8:
    if (ctx->pc == 0x1216B8u) {
        ctx->pc = 0x1216BCu;
        goto label_1216bc;
    }
    ctx->pc = 0x1216B4u;
    {
        const bool branch_taken_0x1216b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1216b4) {
            ctx->pc = 0x121928u;
            goto label_121928;
        }
    }
    ctx->pc = 0x1216BCu;
label_1216bc:
    // 0x1216bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1216bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1216c0:
    // 0x1216c0: 0x10c5005e  beq         $a2, $a1, . + 4 + (0x5E << 2)
label_1216c4:
    if (ctx->pc == 0x1216C4u) {
        ctx->pc = 0x1216C8u;
        goto label_1216c8;
    }
    ctx->pc = 0x1216C0u;
    {
        const bool branch_taken_0x1216c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1216c0) {
            ctx->pc = 0x12183Cu;
            goto label_12183c;
        }
    }
    ctx->pc = 0x1216C8u;
label_1216c8:
    // 0x1216c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1216c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1216cc:
    // 0x1216cc: 0x10c4005b  beq         $a2, $a0, . + 4 + (0x5B << 2)
label_1216d0:
    if (ctx->pc == 0x1216D0u) {
        ctx->pc = 0x1216D4u;
        goto label_1216d4;
    }
    ctx->pc = 0x1216CCu;
    {
        const bool branch_taken_0x1216cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1216cc) {
            ctx->pc = 0x12183Cu;
            goto label_12183c;
        }
    }
    ctx->pc = 0x1216D4u;
label_1216d4:
    // 0x1216d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1216d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1216d8:
    // 0x1216d8: 0x10c30058  beq         $a2, $v1, . + 4 + (0x58 << 2)
label_1216dc:
    if (ctx->pc == 0x1216DCu) {
        ctx->pc = 0x1216E0u;
        goto label_1216e0;
    }
    ctx->pc = 0x1216D8u;
    {
        const bool branch_taken_0x1216d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1216d8) {
            ctx->pc = 0x12183Cu;
            goto label_12183c;
        }
    }
    ctx->pc = 0x1216E0u;
label_1216e0:
    // 0x1216e0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1216e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1216e4:
    // 0x1216e4: 0x10c40055  beq         $a2, $a0, . + 4 + (0x55 << 2)
label_1216e8:
    if (ctx->pc == 0x1216E8u) {
        ctx->pc = 0x1216ECu;
        goto label_1216ec;
    }
    ctx->pc = 0x1216E4u;
    {
        const bool branch_taken_0x1216e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1216e4) {
            ctx->pc = 0x12183Cu;
            goto label_12183c;
        }
    }
    ctx->pc = 0x1216ECu;
label_1216ec:
    // 0x1216ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1216ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1216f0:
    // 0x1216f0: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
label_1216f4:
    if (ctx->pc == 0x1216F4u) {
        ctx->pc = 0x1216F8u;
        goto label_1216f8;
    }
    ctx->pc = 0x1216F0u;
    {
        const bool branch_taken_0x1216f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1216f0) {
            ctx->pc = 0x121700u;
            goto label_121700;
        }
    }
    ctx->pc = 0x1216F8u;
label_1216f8:
    // 0x1216f8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1216fc:
    if (ctx->pc == 0x1216FCu) {
        ctx->pc = 0x121700u;
        goto label_121700;
    }
    ctx->pc = 0x1216F8u;
    {
        const bool branch_taken_0x1216f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1216f8) {
            ctx->pc = 0x121700u;
            goto label_121700;
        }
    }
    ctx->pc = 0x121700u;
label_121700:
    // 0x121700: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121704:
    // 0x121704: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x121704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_121708:
    // 0x121708: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x121708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_12170c:
    // 0x12170c: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x12170cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_121710:
    // 0x121710: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
label_121714:
    if (ctx->pc == 0x121714u) {
        ctx->pc = 0x121718u;
        goto label_121718;
    }
    ctx->pc = 0x121710u;
    {
        const bool branch_taken_0x121710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121710) {
            ctx->pc = 0x1217D8u;
            goto label_1217d8;
        }
    }
    ctx->pc = 0x121718u;
label_121718:
    // 0x121718: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x121718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12171c:
    // 0x12171c: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x12171cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_121720:
    // 0x121720: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x121720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_121724:
    // 0x121724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121728:
    // 0x121728: 0x0  nop
    ctx->pc = 0x121728u;
    // NOP
label_12172c:
    // 0x12172c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12172cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121730:
    // 0x121730: 0x0  nop
    ctx->pc = 0x121730u;
    // NOP
label_121734:
    // 0x121734: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_121738:
    if (ctx->pc == 0x121738u) {
        ctx->pc = 0x12173Cu;
        goto label_12173c;
    }
    ctx->pc = 0x121734u;
    {
        const bool branch_taken_0x121734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121734) {
            ctx->pc = 0x121774u;
            goto label_121774;
        }
    }
    ctx->pc = 0x12173Cu;
label_12173c:
    // 0x12173c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_121740:
    // 0x121740: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121744:
    // 0x121744: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x121744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_121748:
    // 0x121748: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x121748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12174c:
    // 0x12174c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12174cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121750:
    // 0x121750: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x121750u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
label_121754:
    // 0x121754: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121758:
    // 0x121758: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12175c:
    // 0x12175c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121760:
    // 0x121760: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_121764:
    // 0x121764: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121768:
    // 0x121768: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x121768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_12176c:
    // 0x12176c: 0x10000018  b           . + 4 + (0x18 << 2)
label_121770:
    if (ctx->pc == 0x121770u) {
        ctx->pc = 0x121774u;
        goto label_121774;
    }
    ctx->pc = 0x12176Cu;
    {
        const bool branch_taken_0x12176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12176c) {
            ctx->pc = 0x1217D0u;
            goto label_1217d0;
        }
    }
    ctx->pc = 0x121774u;
label_121774:
    // 0x121774: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121778:
    // 0x121778: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x121778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12177c:
    // 0x12177c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x12177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_121780:
    // 0x121780: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x121780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_121784:
    // 0x121784: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x121784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121788:
    // 0x121788: 0x0  nop
    ctx->pc = 0x121788u;
    // NOP
label_12178c:
    // 0x12178c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12178cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_121790:
    // 0x121790: 0xc058fec  jal         func_163FB0
label_121794:
    if (ctx->pc == 0x121794u) {
        ctx->pc = 0x121798u;
        goto label_121798;
    }
    ctx->pc = 0x121790u;
    SET_GPR_U32(ctx, 31, 0x121798u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x121790u, 0x121798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121798u;
label_121798:
    // 0x121798: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12179c:
    // 0x12179c: 0xe48011f8  swc1        $f0, 0x11F8($a0)
    ctx->pc = 0x12179cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4600), bits); }
label_1217a0:
    // 0x1217a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1217a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1217a4:
    // 0x1217a4: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1217a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1217a8:
    // 0x1217a8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1217a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_1217ac:
    // 0x1217ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1217acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1217b0:
    // 0x1217b0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1217b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1217b4:
    // 0x1217b4: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1217b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1217b8:
    // 0x1217b8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1217b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1217bc:
    // 0x1217bc: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1217bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1217c0:
    // 0x1217c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1217c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1217c4:
    // 0x1217c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1217c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1217c8:
    // 0x1217c8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1217c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1217cc:
    // 0x1217cc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1217ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1217d0:
    // 0x1217d0: 0x10000557  b           . + 4 + (0x557 << 2)
label_1217d4:
    if (ctx->pc == 0x1217D4u) {
        ctx->pc = 0x1217D8u;
        goto label_1217d8;
    }
    ctx->pc = 0x1217D0u;
    {
        const bool branch_taken_0x1217d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1217d0) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1217D8u;
label_1217d8:
    // 0x1217d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1217d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1217dc:
    // 0x1217dc: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1217dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1217e0:
    // 0x1217e0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1217e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1217e4:
    // 0x1217e4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1217e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1217e8:
    // 0x1217e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1217e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1217ec:
    // 0x1217ec: 0x24040502  addiu       $a0, $zero, 0x502
    ctx->pc = 0x1217ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
label_1217f0:
    // 0x1217f0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1217f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1217f4:
    // 0x1217f4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1217f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1217f8:
    // 0x1217f8: 0xc067b18  jal         func_19EC60
label_1217fc:
    if (ctx->pc == 0x1217FCu) {
        ctx->pc = 0x121800u;
        goto label_121800;
    }
    ctx->pc = 0x1217F8u;
    SET_GPR_U32(ctx, 31, 0x121800u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1217F8u, 0x121800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121800u;
label_121800:
    // 0x121800: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x121800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121804:
    // 0x121804: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x121804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_121808:
    // 0x121808: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12180c:
    // 0x12180c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12180cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_121810:
    // 0x121810: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121814:
    // 0x121814: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121818:
    // 0x121818: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x121818u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_12181c:
    // 0x12181c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12181cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121820:
    // 0x121820: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x121820u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_121824:
    // 0x121824: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121828:
    // 0x121828: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121828u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_12182c:
    // 0x12182c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121830:
    // 0x121830: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x121830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_121834:
    // 0x121834: 0x1000053e  b           . + 4 + (0x53E << 2)
label_121838:
    if (ctx->pc == 0x121838u) {
        ctx->pc = 0x12183Cu;
        goto label_12183c;
    }
    ctx->pc = 0x121834u;
    {
        const bool branch_taken_0x121834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121834) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x12183Cu;
label_12183c:
    // 0x12183c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x12183cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_121840:
    // 0x121840: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_121844:
    // 0x121844: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121844u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_121848:
    // 0x121848: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12184c:
    // 0x12184c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x12184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_121850:
    // 0x121850: 0x2404050d  addiu       $a0, $zero, 0x50D
    ctx->pc = 0x121850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
label_121854:
    // 0x121854: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x121854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_121858:
    // 0x121858: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121858u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12185c:
    // 0x12185c: 0xc067b18  jal         func_19EC60
label_121860:
    if (ctx->pc == 0x121860u) {
        ctx->pc = 0x121864u;
        goto label_121864;
    }
    ctx->pc = 0x12185Cu;
    SET_GPR_U32(ctx, 31, 0x121864u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12185Cu, 0x121864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121864u;
label_121864:
    // 0x121864: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121864u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121868:
    // 0x121868: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x121868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12186c:
    // 0x12186c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x12186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_121870:
    // 0x121870: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x121870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_121874:
    // 0x121874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121878:
    // 0x121878: 0x0  nop
    ctx->pc = 0x121878u;
    // NOP
label_12187c:
    // 0x12187c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12187cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121880:
    // 0x121880: 0x0  nop
    ctx->pc = 0x121880u;
    // NOP
label_121884:
    // 0x121884: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_121888:
    if (ctx->pc == 0x121888u) {
        ctx->pc = 0x12188Cu;
        goto label_12188c;
    }
    ctx->pc = 0x121884u;
    {
        const bool branch_taken_0x121884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121884) {
            ctx->pc = 0x1218C4u;
            goto label_1218c4;
        }
    }
    ctx->pc = 0x12188Cu;
label_12188c:
    // 0x12188c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_121890:
    // 0x121890: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121894:
    // 0x121894: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x121894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_121898:
    // 0x121898: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x121898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12189c:
    // 0x12189c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1218a0:
    // 0x1218a0: 0xa0720001  sb          $s2, 0x1($v1)
    ctx->pc = 0x1218a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 18));
label_1218a4:
    // 0x1218a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1218a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1218a8:
    // 0x1218a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1218a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1218ac:
    // 0x1218ac: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1218b0:
    // 0x1218b0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1218b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1218b4:
    // 0x1218b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1218b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1218b8:
    // 0x1218b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1218b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1218bc:
    // 0x1218bc: 0x1000051c  b           . + 4 + (0x51C << 2)
label_1218c0:
    if (ctx->pc == 0x1218C0u) {
        ctx->pc = 0x1218C4u;
        goto label_1218c4;
    }
    ctx->pc = 0x1218BCu;
    {
        const bool branch_taken_0x1218bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1218bc) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1218C4u;
label_1218c4:
    // 0x1218c4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1218c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1218c8:
    // 0x1218c8: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x1218c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1218cc:
    // 0x1218cc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1218ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1218d0:
    // 0x1218d0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1218d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1218d4:
    // 0x1218d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1218d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1218d8:
    // 0x1218d8: 0x0  nop
    ctx->pc = 0x1218d8u;
    // NOP
label_1218dc:
    // 0x1218dc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1218dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1218e0:
    // 0x1218e0: 0xc058fec  jal         func_163FB0
label_1218e4:
    if (ctx->pc == 0x1218E4u) {
        ctx->pc = 0x1218E8u;
        goto label_1218e8;
    }
    ctx->pc = 0x1218E0u;
    SET_GPR_U32(ctx, 31, 0x1218E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1218E0u, 0x1218E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218E8u;
label_1218e8:
    // 0x1218e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1218e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1218ec:
    // 0x1218ec: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x1218ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_1218f0:
    // 0x1218f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1218f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1218f4:
    // 0x1218f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1218f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1218f8:
    // 0x1218f8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1218f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_1218fc:
    // 0x1218fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1218fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_121900:
    // 0x121900: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121904:
    // 0x121904: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x121904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_121908:
    // 0x121908: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12190c:
    // 0x12190c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12190cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_121910:
    // 0x121910: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121914:
    // 0x121914: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_121918:
    // 0x121918: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12191c:
    // 0x12191c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12191cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_121920:
    // 0x121920: 0x10000503  b           . + 4 + (0x503 << 2)
label_121924:
    if (ctx->pc == 0x121924u) {
        ctx->pc = 0x121928u;
        goto label_121928;
    }
    ctx->pc = 0x121920u;
    {
        const bool branch_taken_0x121920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121920) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121928u;
label_121928:
    // 0x121928: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x121928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12192c:
    // 0x12192c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_121930:
    // 0x121930: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x121930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_121934:
    // 0x121934: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x121934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_121938:
    // 0x121938: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121938u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12193c:
    // 0x12193c: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x12193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
label_121940:
    // 0x121940: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x121940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_121944:
    // 0x121944: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121944u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121948:
    // 0x121948: 0xc067b18  jal         func_19EC60
label_12194c:
    if (ctx->pc == 0x12194Cu) {
        ctx->pc = 0x121950u;
        goto label_121950;
    }
    ctx->pc = 0x121948u;
    SET_GPR_U32(ctx, 31, 0x121950u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121948u, 0x121950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121950u;
label_121950:
    // 0x121950: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121954:
    // 0x121954: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x121954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121958:
    // 0x121958: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x121958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_12195c:
    // 0x12195c: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x12195cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_121960:
    // 0x121960: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x121960u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121964:
    // 0x121964: 0x0  nop
    ctx->pc = 0x121964u;
    // NOP
label_121968:
    // 0x121968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x121968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12196c:
    // 0x12196c: 0x0  nop
    ctx->pc = 0x12196cu;
    // NOP
label_121970:
    // 0x121970: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_121974:
    if (ctx->pc == 0x121974u) {
        ctx->pc = 0x121978u;
        goto label_121978;
    }
    ctx->pc = 0x121970u;
    {
        const bool branch_taken_0x121970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121970) {
            ctx->pc = 0x1219B0u;
            goto label_1219b0;
        }
    }
    ctx->pc = 0x121978u;
label_121978:
    // 0x121978: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x121978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12197c:
    // 0x12197c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121980:
    // 0x121980: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x121980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_121984:
    // 0x121984: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x121984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_121988:
    // 0x121988: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12198c:
    // 0x12198c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x12198cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_121990:
    // 0x121990: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121994:
    // 0x121994: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_121998:
    // 0x121998: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12199c:
    // 0x12199c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12199cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1219a0:
    // 0x1219a0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1219a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1219a4:
    // 0x1219a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1219a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1219a8:
    // 0x1219a8: 0x100004e1  b           . + 4 + (0x4E1 << 2)
label_1219ac:
    if (ctx->pc == 0x1219ACu) {
        ctx->pc = 0x1219B0u;
        goto label_1219b0;
    }
    ctx->pc = 0x1219A8u;
    {
        const bool branch_taken_0x1219a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1219a8) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1219B0u;
label_1219b0:
    // 0x1219b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1219b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1219b4:
    // 0x1219b4: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x1219b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1219b8:
    // 0x1219b8: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1219b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_1219bc:
    // 0x1219bc: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1219bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1219c0:
    // 0x1219c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1219c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1219c4:
    // 0x1219c4: 0x0  nop
    ctx->pc = 0x1219c4u;
    // NOP
label_1219c8:
    // 0x1219c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1219c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1219cc:
    // 0x1219cc: 0xc058fec  jal         func_163FB0
label_1219d0:
    if (ctx->pc == 0x1219D0u) {
        ctx->pc = 0x1219D4u;
        goto label_1219d4;
    }
    ctx->pc = 0x1219CCu;
    SET_GPR_U32(ctx, 31, 0x1219D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1219CCu, 0x1219D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219D4u;
label_1219d4:
    // 0x1219d4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1219d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1219d8:
    // 0x1219d8: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x1219d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_1219dc:
    // 0x1219dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1219dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1219e0:
    // 0x1219e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1219e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1219e4:
    // 0x1219e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1219e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1219e8:
    // 0x1219e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1219e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1219ec:
    // 0x1219ec: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1219ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1219f0:
    // 0x1219f0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1219f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1219f4:
    // 0x1219f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1219f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1219f8:
    // 0x1219f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1219f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1219fc:
    // 0x1219fc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1219fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121a00:
    // 0x121a00: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121a00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_121a04:
    // 0x121a04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121a08:
    // 0x121a08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x121a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_121a0c:
    // 0x121a0c: 0x100004c8  b           . + 4 + (0x4C8 << 2)
label_121a10:
    if (ctx->pc == 0x121A10u) {
        ctx->pc = 0x121A14u;
        goto label_121a14;
    }
    ctx->pc = 0x121A0Cu;
    {
        const bool branch_taken_0x121a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121a0c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121A14u;
label_121a14:
    // 0x121a14: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121a18:
    // 0x121a18: 0x90a311ef  lbu         $v1, 0x11EF($a1)
    ctx->pc = 0x121a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4591)));
label_121a1c:
    // 0x121a1c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121a20:
    // 0x121a20: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x121a20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
label_121a24:
    // 0x121a24: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121a28:
    // 0x121a28: 0x946511f4  lhu         $a1, 0x11F4($v1)
    ctx->pc = 0x121a28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_121a2c:
    // 0x121a2c: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x121a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_121a30:
    // 0x121a30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121a34:
    // 0x121a34: 0x14830086  bne         $a0, $v1, . + 4 + (0x86 << 2)
label_121a38:
    if (ctx->pc == 0x121A38u) {
        ctx->pc = 0x121A3Cu;
        goto label_121a3c;
    }
    ctx->pc = 0x121A34u;
    {
        const bool branch_taken_0x121a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121a34) {
            ctx->pc = 0x121C50u;
            goto label_121c50;
        }
    }
    ctx->pc = 0x121A3Cu;
label_121a3c:
    // 0x121a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x121a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_121a40:
    // 0x121a40: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x121a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_121a44:
    // 0x121a44: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x121a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_121a48:
    // 0x121a48: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
label_121a4c:
    if (ctx->pc == 0x121A4Cu) {
        ctx->pc = 0x121A50u;
        goto label_121a50;
    }
    ctx->pc = 0x121A48u;
    {
        const bool branch_taken_0x121a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x121a48) {
            ctx->pc = 0x121C50u;
            goto label_121c50;
        }
    }
    ctx->pc = 0x121A50u;
label_121a50:
    // 0x121a50: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x121a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_121a54:
    // 0x121a54: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x121a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_121a58:
    // 0x121a58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x121a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_121a5c:
    // 0x121a5c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121a60:
    // 0x121a60: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x121a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_121a64:
    // 0x121a64: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x121a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
label_121a68:
    // 0x121a68: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x121a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_121a6c:
    // 0x121a6c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x121a6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_121a70:
    // 0x121a70: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121a70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121a74:
    // 0x121a74: 0xc067b18  jal         func_19EC60
label_121a78:
    if (ctx->pc == 0x121A78u) {
        ctx->pc = 0x121A7Cu;
        goto label_121a7c;
    }
    ctx->pc = 0x121A74u;
    SET_GPR_U32(ctx, 31, 0x121A7Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121A74u, 0x121A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A7Cu;
label_121a7c:
    // 0x121a7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121a7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121a80:
    // 0x121a80: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x121a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121a84:
    // 0x121a84: 0x94c511f6  lhu         $a1, 0x11F6($a2)
    ctx->pc = 0x121a84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4598)));
label_121a88:
    // 0x121a88: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x121a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_121a8c:
    // 0x121a8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x121a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_121a90:
    // 0x121a90: 0x1043003f  beq         $v0, $v1, . + 4 + (0x3F << 2)
label_121a94:
    if (ctx->pc == 0x121A94u) {
        ctx->pc = 0x121A98u;
        goto label_121a98;
    }
    ctx->pc = 0x121A90u;
    {
        const bool branch_taken_0x121a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x121a90) {
            ctx->pc = 0x121B90u;
            goto label_121b90;
        }
    }
    ctx->pc = 0x121A98u;
label_121a98:
    // 0x121a98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121a9c:
    // 0x121a9c: 0x10440035  beq         $v0, $a0, . + 4 + (0x35 << 2)
label_121aa0:
    if (ctx->pc == 0x121AA0u) {
        ctx->pc = 0x121AA4u;
        goto label_121aa4;
    }
    ctx->pc = 0x121A9Cu;
    {
        const bool branch_taken_0x121a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x121a9c) {
            ctx->pc = 0x121B74u;
            goto label_121b74;
        }
    }
    ctx->pc = 0x121AA4u;
label_121aa4:
    // 0x121aa4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x121aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_121aa8:
    // 0x121aa8: 0x1045000e  beq         $v0, $a1, . + 4 + (0xE << 2)
label_121aac:
    if (ctx->pc == 0x121AACu) {
        ctx->pc = 0x121AB0u;
        goto label_121ab0;
    }
    ctx->pc = 0x121AA8u;
    {
        const bool branch_taken_0x121aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x121aa8) {
            ctx->pc = 0x121AE4u;
            goto label_121ae4;
        }
    }
    ctx->pc = 0x121AB0u;
label_121ab0:
    // 0x121ab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121ab4:
    // 0x121ab4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_121ab8:
    if (ctx->pc == 0x121AB8u) {
        ctx->pc = 0x121ABCu;
        goto label_121abc;
    }
    ctx->pc = 0x121AB4u;
    {
        const bool branch_taken_0x121ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x121ab4) {
            ctx->pc = 0x121AC4u;
            goto label_121ac4;
        }
    }
    ctx->pc = 0x121ABCu;
label_121abc:
    // 0x121abc: 0x10000058  b           . + 4 + (0x58 << 2)
label_121ac0:
    if (ctx->pc == 0x121AC0u) {
        ctx->pc = 0x121AC4u;
        goto label_121ac4;
    }
    ctx->pc = 0x121ABCu;
    {
        const bool branch_taken_0x121abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121abc) {
            ctx->pc = 0x121C20u;
            goto label_121c20;
        }
    }
    ctx->pc = 0x121AC4u;
label_121ac4:
    // 0x121ac4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121ac8:
    // 0x121ac8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x121ac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_121acc:
    // 0x121acc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_121ad0:
    // 0x121ad0: 0xc047ff4  jal         func_11FFD0
label_121ad4:
    if (ctx->pc == 0x121AD4u) {
        ctx->pc = 0x121AD8u;
        goto label_121ad8;
    }
    ctx->pc = 0x121AD0u;
    SET_GPR_U32(ctx, 31, 0x121AD8u);
    ctx->pc = 0x11FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FFD0u, 0x121AD0u, 0x121AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AD8u;
label_121ad8:
    // 0x121ad8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121ad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121adc:
    // 0x121adc: 0x1000005a  b           . + 4 + (0x5A << 2)
label_121ae0:
    if (ctx->pc == 0x121AE0u) {
        ctx->pc = 0x121AE4u;
        goto label_121ae4;
    }
    ctx->pc = 0x121ADCu;
    {
        const bool branch_taken_0x121adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121adc) {
            ctx->pc = 0x121C48u;
            goto label_121c48;
        }
    }
    ctx->pc = 0x121AE4u;
label_121ae4:
    // 0x121ae4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121ae8:
    // 0x121ae8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x121ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_121aec:
    // 0x121aec: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x121aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_121af0:
    // 0x121af0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x121af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_121af4:
    // 0x121af4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x121af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_121af8:
    // 0x121af8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121afc:
    // 0x121afc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_121b00:
    // 0x121b00: 0xc047ff4  jal         func_11FFD0
label_121b04:
    if (ctx->pc == 0x121B04u) {
        ctx->pc = 0x121B08u;
        goto label_121b08;
    }
    ctx->pc = 0x121B00u;
    SET_GPR_U32(ctx, 31, 0x121B08u);
    ctx->pc = 0x11FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FFD0u, 0x121B00u, 0x121B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B08u;
label_121b08:
    // 0x121b08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121b08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121b0c:
    // 0x121b0c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121b10:
    // 0x121b10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_121b14:
    // 0x121b14: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x121b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_121b18:
    // 0x121b18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x121b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_121b1c:
    // 0x121b1c: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_121b20:
    if (ctx->pc == 0x121B20u) {
        ctx->pc = 0x121B24u;
        goto label_121b24;
    }
    ctx->pc = 0x121B1Cu;
    {
        const bool branch_taken_0x121b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b1c) {
            ctx->pc = 0x121C48u;
            goto label_121c48;
        }
    }
    ctx->pc = 0x121B24u;
label_121b24:
    // 0x121b24: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121b28:
    // 0x121b28: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x121b28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_121b2c:
    // 0x121b2c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x121b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_121b30:
    // 0x121b30: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x121b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_121b34:
    // 0x121b34: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x121b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_121b38:
    // 0x121b38: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x121b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121b3c:
    // 0x121b3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121b40:
    // 0x121b40: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x121b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
label_121b44:
    // 0x121b44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x121b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_121b48:
    // 0x121b48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121b4c:
    // 0x121b4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x121b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_121b50:
    // 0x121b50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121b54:
    // 0x121b54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_121b58:
    // 0x121b58: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121b5c:
    // 0x121b5c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x121b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_121b60:
    // 0x121b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121b64:
    // 0x121b64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121b68:
    // 0x121b68: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x121b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_121b6c:
    // 0x121b6c: 0x10000470  b           . + 4 + (0x470 << 2)
label_121b70:
    if (ctx->pc == 0x121B70u) {
        ctx->pc = 0x121B74u;
        goto label_121b74;
    }
    ctx->pc = 0x121B6Cu;
    {
        const bool branch_taken_0x121b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b6c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121B74u;
label_121b74:
    // 0x121b74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121b78:
    // 0x121b78: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121b78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_121b7c:
    // 0x121b7c: 0xc048044  jal         func_120110
label_121b80:
    if (ctx->pc == 0x121B80u) {
        ctx->pc = 0x121B84u;
        goto label_121b84;
    }
    ctx->pc = 0x121B7Cu;
    SET_GPR_U32(ctx, 31, 0x121B84u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x121B7Cu, 0x121B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B84u;
label_121b84:
    // 0x121b84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x121b84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121b88:
    // 0x121b88: 0x1000002f  b           . + 4 + (0x2F << 2)
label_121b8c:
    if (ctx->pc == 0x121B8Cu) {
        ctx->pc = 0x121B90u;
        goto label_121b90;
    }
    ctx->pc = 0x121B88u;
    {
        const bool branch_taken_0x121b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b88) {
            ctx->pc = 0x121C48u;
            goto label_121c48;
        }
    }
    ctx->pc = 0x121B90u;
label_121b90:
    // 0x121b90: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121b94:
    // 0x121b94: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x121b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_121b98:
    // 0x121b98: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x121b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_121b9c:
    // 0x121b9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x121b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_121ba0:
    // 0x121ba0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x121ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_121ba4:
    // 0x121ba4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121ba8:
    // 0x121ba8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121ba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_121bac:
    // 0x121bac: 0xc048044  jal         func_120110
label_121bb0:
    if (ctx->pc == 0x121BB0u) {
        ctx->pc = 0x121BB4u;
        goto label_121bb4;
    }
    ctx->pc = 0x121BACu;
    SET_GPR_U32(ctx, 31, 0x121BB4u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x121BACu, 0x121BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BB4u;
label_121bb4:
    // 0x121bb4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121bb4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121bb8:
    // 0x121bb8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121bbc:
    // 0x121bbc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x121bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_121bc0:
    // 0x121bc0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x121bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_121bc4:
    // 0x121bc4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x121bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_121bc8:
    // 0x121bc8: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_121bcc:
    if (ctx->pc == 0x121BCCu) {
        ctx->pc = 0x121BD0u;
        goto label_121bd0;
    }
    ctx->pc = 0x121BC8u;
    {
        const bool branch_taken_0x121bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121bc8) {
            ctx->pc = 0x121C48u;
            goto label_121c48;
        }
    }
    ctx->pc = 0x121BD0u;
label_121bd0:
    // 0x121bd0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121bd4:
    // 0x121bd4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x121bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_121bd8:
    // 0x121bd8: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x121bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_121bdc:
    // 0x121bdc: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x121bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_121be0:
    // 0x121be0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x121be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_121be4:
    // 0x121be4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121be8:
    // 0x121be8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121bec:
    // 0x121bec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x121becu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_121bf0:
    // 0x121bf0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x121bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_121bf4:
    // 0x121bf4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121bf8:
    // 0x121bf8: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x121bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_121bfc:
    // 0x121bfc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121c00:
    // 0x121c00: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_121c04:
    // 0x121c04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121c08:
    // 0x121c08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_121c0c:
    // 0x121c0c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x121c0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121c10:
    // 0x121c10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121c14:
    // 0x121c14: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x121c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
label_121c18:
    // 0x121c18: 0x10000445  b           . + 4 + (0x445 << 2)
label_121c1c:
    if (ctx->pc == 0x121C1Cu) {
        ctx->pc = 0x121C20u;
        goto label_121c20;
    }
    ctx->pc = 0x121C18u;
    {
        const bool branch_taken_0x121c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c18) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121C20u;
label_121c20:
    // 0x121c20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121c24:
    // 0x121c24: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x121c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_121c28:
    // 0x121c28: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x121c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_121c2c:
    // 0x121c2c: 0xc51825  or          $v1, $a2, $a1
    ctx->pc = 0x121c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_121c30:
    // 0x121c30: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x121c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_121c34:
    // 0x121c34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121c38:
    // 0x121c38: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121c38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_121c3c:
    // 0x121c3c: 0xc048090  jal         func_120240
label_121c40:
    if (ctx->pc == 0x121C40u) {
        ctx->pc = 0x121C44u;
        goto label_121c44;
    }
    ctx->pc = 0x121C3Cu;
    SET_GPR_U32(ctx, 31, 0x121C44u);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x121C3Cu, 0x121C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C44u;
label_121c44:
    // 0x121c44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x121c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121c48:
    // 0x121c48: 0x10000439  b           . + 4 + (0x439 << 2)
label_121c4c:
    if (ctx->pc == 0x121C4Cu) {
        ctx->pc = 0x121C50u;
        goto label_121c50;
    }
    ctx->pc = 0x121C48u;
    {
        const bool branch_taken_0x121c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c48) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121C50u;
label_121c50:
    // 0x121c50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121c54:
    // 0x121c54: 0x946411f6  lhu         $a0, 0x11F6($v1)
    ctx->pc = 0x121c54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_121c58:
    // 0x121c58: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x121c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_121c5c:
    // 0x121c5c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x121c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_121c60:
    // 0x121c60: 0x10660417  beq         $v1, $a2, . + 4 + (0x417 << 2)
label_121c64:
    if (ctx->pc == 0x121C64u) {
        ctx->pc = 0x121C68u;
        goto label_121c68;
    }
    ctx->pc = 0x121C60u;
    {
        const bool branch_taken_0x121c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x121c60) {
            ctx->pc = 0x122CC0u;
            goto label_122cc0;
        }
    }
    ctx->pc = 0x121C68u;
label_121c68:
    // 0x121c68: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x121c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_121c6c:
    // 0x121c6c: 0x10640307  beq         $v1, $a0, . + 4 + (0x307 << 2)
label_121c70:
    if (ctx->pc == 0x121C70u) {
        ctx->pc = 0x121C74u;
        goto label_121c74;
    }
    ctx->pc = 0x121C6Cu;
    {
        const bool branch_taken_0x121c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121c6c) {
            ctx->pc = 0x12288Cu;
            goto label_12288c;
        }
    }
    ctx->pc = 0x121C74u;
label_121c74:
    // 0x121c74: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x121c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_121c78:
    // 0x121c78: 0x10650304  beq         $v1, $a1, . + 4 + (0x304 << 2)
label_121c7c:
    if (ctx->pc == 0x121C7Cu) {
        ctx->pc = 0x121C80u;
        goto label_121c80;
    }
    ctx->pc = 0x121C78u;
    {
        const bool branch_taken_0x121c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121c78) {
            ctx->pc = 0x12288Cu;
            goto label_12288c;
        }
    }
    ctx->pc = 0x121C80u;
label_121c80:
    // 0x121c80: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x121c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_121c84:
    // 0x121c84: 0x106401fd  beq         $v1, $a0, . + 4 + (0x1FD << 2)
label_121c88:
    if (ctx->pc == 0x121C88u) {
        ctx->pc = 0x121C8Cu;
        goto label_121c8c;
    }
    ctx->pc = 0x121C84u;
    {
        const bool branch_taken_0x121c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121c84) {
            ctx->pc = 0x12247Cu;
            goto label_12247c;
        }
    }
    ctx->pc = 0x121C8Cu;
label_121c8c:
    // 0x121c8c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x121c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_121c90:
    // 0x121c90: 0x106601fa  beq         $v1, $a2, . + 4 + (0x1FA << 2)
label_121c94:
    if (ctx->pc == 0x121C94u) {
        ctx->pc = 0x121C98u;
        goto label_121c98;
    }
    ctx->pc = 0x121C90u;
    {
        const bool branch_taken_0x121c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x121c90) {
            ctx->pc = 0x12247Cu;
            goto label_12247c;
        }
    }
    ctx->pc = 0x121C98u;
label_121c98:
    // 0x121c98: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x121c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_121c9c:
    // 0x121c9c: 0x106501f7  beq         $v1, $a1, . + 4 + (0x1F7 << 2)
label_121ca0:
    if (ctx->pc == 0x121CA0u) {
        ctx->pc = 0x121CA4u;
        goto label_121ca4;
    }
    ctx->pc = 0x121C9Cu;
    {
        const bool branch_taken_0x121c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121c9c) {
            ctx->pc = 0x12247Cu;
            goto label_12247c;
        }
    }
    ctx->pc = 0x121CA4u;
label_121ca4:
    // 0x121ca4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x121ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_121ca8:
    // 0x121ca8: 0x106401f4  beq         $v1, $a0, . + 4 + (0x1F4 << 2)
label_121cac:
    if (ctx->pc == 0x121CACu) {
        ctx->pc = 0x121CB0u;
        goto label_121cb0;
    }
    ctx->pc = 0x121CA8u;
    {
        const bool branch_taken_0x121ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121ca8) {
            ctx->pc = 0x12247Cu;
            goto label_12247c;
        }
    }
    ctx->pc = 0x121CB0u;
label_121cb0:
    // 0x121cb0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x121cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_121cb4:
    // 0x121cb4: 0x106401f1  beq         $v1, $a0, . + 4 + (0x1F1 << 2)
label_121cb8:
    if (ctx->pc == 0x121CB8u) {
        ctx->pc = 0x121CBCu;
        goto label_121cbc;
    }
    ctx->pc = 0x121CB4u;
    {
        const bool branch_taken_0x121cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121cb4) {
            ctx->pc = 0x12247Cu;
            goto label_12247c;
        }
    }
    ctx->pc = 0x121CBCu;
label_121cbc:
    // 0x121cbc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x121cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_121cc0:
    // 0x121cc0: 0x106501ee  beq         $v1, $a1, . + 4 + (0x1EE << 2)
label_121cc4:
    if (ctx->pc == 0x121CC4u) {
        ctx->pc = 0x121CC8u;
        goto label_121cc8;
    }
    ctx->pc = 0x121CC0u;
    {
        const bool branch_taken_0x121cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121cc0) {
            ctx->pc = 0x12247Cu;
            goto label_12247c;
        }
    }
    ctx->pc = 0x121CC8u;
label_121cc8:
    // 0x121cc8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x121cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_121ccc:
    // 0x121ccc: 0x10620131  beq         $v1, $v0, . + 4 + (0x131 << 2)
label_121cd0:
    if (ctx->pc == 0x121CD0u) {
        ctx->pc = 0x121CD4u;
        goto label_121cd4;
    }
    ctx->pc = 0x121CCCu;
    {
        const bool branch_taken_0x121ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x121ccc) {
            ctx->pc = 0x122194u;
            goto label_122194;
        }
    }
    ctx->pc = 0x121CD4u;
label_121cd4:
    // 0x121cd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x121cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_121cd8:
    // 0x121cd8: 0x1062012e  beq         $v1, $v0, . + 4 + (0x12E << 2)
label_121cdc:
    if (ctx->pc == 0x121CDCu) {
        ctx->pc = 0x121CE0u;
        goto label_121ce0;
    }
    ctx->pc = 0x121CD8u;
    {
        const bool branch_taken_0x121cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x121cd8) {
            ctx->pc = 0x122194u;
            goto label_122194;
        }
    }
    ctx->pc = 0x121CE0u;
label_121ce0:
    // 0x121ce0: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x121ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_121ce4:
    // 0x121ce4: 0x1066012b  beq         $v1, $a2, . + 4 + (0x12B << 2)
label_121ce8:
    if (ctx->pc == 0x121CE8u) {
        ctx->pc = 0x121CECu;
        goto label_121cec;
    }
    ctx->pc = 0x121CE4u;
    {
        const bool branch_taken_0x121ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x121ce4) {
            ctx->pc = 0x122194u;
            goto label_122194;
        }
    }
    ctx->pc = 0x121CECu;
label_121cec:
    // 0x121cec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x121cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_121cf0:
    // 0x121cf0: 0x106500cd  beq         $v1, $a1, . + 4 + (0xCD << 2)
label_121cf4:
    if (ctx->pc == 0x121CF4u) {
        ctx->pc = 0x121CF8u;
        goto label_121cf8;
    }
    ctx->pc = 0x121CF0u;
    {
        const bool branch_taken_0x121cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121cf0) {
            ctx->pc = 0x122028u;
            goto label_122028;
        }
    }
    ctx->pc = 0x121CF8u;
label_121cf8:
    // 0x121cf8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x121cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_121cfc:
    // 0x121cfc: 0x106400ca  beq         $v1, $a0, . + 4 + (0xCA << 2)
label_121d00:
    if (ctx->pc == 0x121D00u) {
        ctx->pc = 0x121D04u;
        goto label_121d04;
    }
    ctx->pc = 0x121CFCu;
    {
        const bool branch_taken_0x121cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121cfc) {
            ctx->pc = 0x122028u;
            goto label_122028;
        }
    }
    ctx->pc = 0x121D04u;
label_121d04:
    // 0x121d04: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x121d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_121d08:
    // 0x121d08: 0x10640059  beq         $v1, $a0, . + 4 + (0x59 << 2)
label_121d0c:
    if (ctx->pc == 0x121D0Cu) {
        ctx->pc = 0x121D10u;
        goto label_121d10;
    }
    ctx->pc = 0x121D08u;
    {
        const bool branch_taken_0x121d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121d08) {
            ctx->pc = 0x121E70u;
            goto label_121e70;
        }
    }
    ctx->pc = 0x121D10u;
label_121d10:
    // 0x121d10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x121d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121d14:
    // 0x121d14: 0x10650056  beq         $v1, $a1, . + 4 + (0x56 << 2)
label_121d18:
    if (ctx->pc == 0x121D18u) {
        ctx->pc = 0x121D1Cu;
        goto label_121d1c;
    }
    ctx->pc = 0x121D14u;
    {
        const bool branch_taken_0x121d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x121d14) {
            ctx->pc = 0x121E70u;
            goto label_121e70;
        }
    }
    ctx->pc = 0x121D1Cu;
label_121d1c:
    // 0x121d1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121d20:
    // 0x121d20: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_121d24:
    if (ctx->pc == 0x121D24u) {
        ctx->pc = 0x121D28u;
        goto label_121d28;
    }
    ctx->pc = 0x121D20u;
    {
        const bool branch_taken_0x121d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x121d20) {
            ctx->pc = 0x121D30u;
            goto label_121d30;
        }
    }
    ctx->pc = 0x121D28u;
label_121d28:
    // 0x121d28: 0x10000001  b           . + 4 + (0x1 << 2)
label_121d2c:
    if (ctx->pc == 0x121D2Cu) {
        ctx->pc = 0x121D30u;
        goto label_121d30;
    }
    ctx->pc = 0x121D28u;
    {
        const bool branch_taken_0x121d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d28) {
            ctx->pc = 0x121D30u;
            goto label_121d30;
        }
    }
    ctx->pc = 0x121D30u;
label_121d30:
    // 0x121d30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121d34:
    // 0x121d34: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x121d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_121d38:
    // 0x121d38: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x121d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_121d3c:
    // 0x121d3c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x121d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_121d40:
    // 0x121d40: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x121d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_121d44:
    // 0x121d44: 0x24040502  addiu       $a0, $zero, 0x502
    ctx->pc = 0x121d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
label_121d48:
    // 0x121d48: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x121d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_121d4c:
    // 0x121d4c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121d4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121d50:
    // 0x121d50: 0xc067b18  jal         func_19EC60
label_121d54:
    if (ctx->pc == 0x121D54u) {
        ctx->pc = 0x121D58u;
        goto label_121d58;
    }
    ctx->pc = 0x121D50u;
    SET_GPR_U32(ctx, 31, 0x121D58u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121D50u, 0x121D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D58u;
label_121d58:
    // 0x121d58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121d58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121d5c:
    // 0x121d5c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121d60:
    // 0x121d60: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x121d60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_121d64:
    // 0x121d64: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121d64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_121d68:
    // 0x121d68: 0xc047ff4  jal         func_11FFD0
label_121d6c:
    if (ctx->pc == 0x121D6Cu) {
        ctx->pc = 0x121D70u;
        goto label_121d70;
    }
    ctx->pc = 0x121D68u;
    SET_GPR_U32(ctx, 31, 0x121D70u);
    ctx->pc = 0x11FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FFD0u, 0x121D68u, 0x121D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D70u;
label_121d70:
    // 0x121d70: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121d70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121d74:
    // 0x121d74: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121d78:
    // 0x121d78: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x121d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_121d7c:
    // 0x121d7c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x121d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_121d80:
    // 0x121d80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x121d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_121d84:
    // 0x121d84: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_121d88:
    if (ctx->pc == 0x121D88u) {
        ctx->pc = 0x121D8Cu;
        goto label_121d8c;
    }
    ctx->pc = 0x121D84u;
    {
        const bool branch_taken_0x121d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121d84) {
            ctx->pc = 0x121DF0u;
            goto label_121df0;
        }
    }
    ctx->pc = 0x121D8Cu;
label_121d8c:
    // 0x121d8c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121d90:
    // 0x121d90: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x121d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121d94:
    // 0x121d94: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x121d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_121d98:
    // 0x121d98: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x121d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_121d9c:
    // 0x121d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121da0:
    // 0x121da0: 0x0  nop
    ctx->pc = 0x121da0u;
    // NOP
label_121da4:
    // 0x121da4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x121da4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_121da8:
    // 0x121da8: 0xc058fec  jal         func_163FB0
label_121dac:
    if (ctx->pc == 0x121DACu) {
        ctx->pc = 0x121DB0u;
        goto label_121db0;
    }
    ctx->pc = 0x121DA8u;
    SET_GPR_U32(ctx, 31, 0x121DB0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x121DA8u, 0x121DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DB0u;
label_121db0:
    // 0x121db0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121db4:
    // 0x121db4: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x121db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_121db8:
    // 0x121db8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121dbc:
    // 0x121dbc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121dc0:
    // 0x121dc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x121dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_121dc4:
    // 0x121dc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121dc8:
    // 0x121dc8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x121dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121dcc:
    // 0x121dcc: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x121dccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
label_121dd0:
    // 0x121dd0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121dd4:
    // 0x121dd4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_121dd8:
    // 0x121dd8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121ddc:
    // 0x121ddc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x121ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_121de0:
    // 0x121de0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121de4:
    // 0x121de4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x121de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_121de8:
    // 0x121de8: 0x100003d1  b           . + 4 + (0x3D1 << 2)
label_121dec:
    if (ctx->pc == 0x121DECu) {
        ctx->pc = 0x121DF0u;
        goto label_121df0;
    }
    ctx->pc = 0x121DE8u;
    {
        const bool branch_taken_0x121de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121de8) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121DF0u;
label_121df0:
    // 0x121df0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121df4:
    // 0x121df4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x121df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_121df8:
    // 0x121df8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x121df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_121dfc:
    // 0x121dfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x121dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_121e00:
    // 0x121e00: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_121e04:
    if (ctx->pc == 0x121E04u) {
        ctx->pc = 0x121E08u;
        goto label_121e08;
    }
    ctx->pc = 0x121E00u;
    {
        const bool branch_taken_0x121e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e00) {
            ctx->pc = 0x121E54u;
            goto label_121e54;
        }
    }
    ctx->pc = 0x121E08u;
label_121e08:
    // 0x121e08: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121e0c:
    // 0x121e0c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x121e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_121e10:
    // 0x121e10: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x121e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_121e14:
    // 0x121e14: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x121e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_121e18:
    // 0x121e18: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x121e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_121e1c:
    // 0x121e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121e20:
    // 0x121e20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121e24:
    // 0x121e24: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x121e24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_121e28:
    // 0x121e28: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x121e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_121e2c:
    // 0x121e2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121e30:
    // 0x121e30: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x121e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_121e34:
    // 0x121e34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121e38:
    // 0x121e38: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_121e3c:
    // 0x121e3c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121e40:
    // 0x121e40: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x121e40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_121e44:
    // 0x121e44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121e48:
    // 0x121e48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x121e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_121e4c:
    // 0x121e4c: 0x100003b8  b           . + 4 + (0x3B8 << 2)
label_121e50:
    if (ctx->pc == 0x121E50u) {
        ctx->pc = 0x121E54u;
        goto label_121e54;
    }
    ctx->pc = 0x121E4Cu;
    {
        const bool branch_taken_0x121e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e4c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121E54u;
label_121e54:
    // 0x121e54: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121e58:
    // 0x121e58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x121e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_121e5c:
    // 0x121e5c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x121e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_121e60:
    // 0x121e60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x121e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_121e64:
    // 0x121e64: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x121e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_121e68:
    // 0x121e68: 0x100003b1  b           . + 4 + (0x3B1 << 2)
label_121e6c:
    if (ctx->pc == 0x121E6Cu) {
        ctx->pc = 0x121E70u;
        goto label_121e70;
    }
    ctx->pc = 0x121E68u;
    {
        const bool branch_taken_0x121e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e68) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121E70u;
label_121e70:
    // 0x121e70: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121e74:
    // 0x121e74: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_121e78:
    // 0x121e78: 0xc048044  jal         func_120110
label_121e7c:
    if (ctx->pc == 0x121E7Cu) {
        ctx->pc = 0x121E80u;
        goto label_121e80;
    }
    ctx->pc = 0x121E78u;
    SET_GPR_U32(ctx, 31, 0x121E80u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x121E78u, 0x121E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E80u;
label_121e80:
    // 0x121e80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121e80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121e84:
    // 0x121e84: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121e88:
    // 0x121e88: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x121e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_121e8c:
    // 0x121e8c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x121e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_121e90:
    // 0x121e90: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_121e94:
    // 0x121e94: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121e94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_121e98:
    // 0x121e98: 0x2404050d  addiu       $a0, $zero, 0x50D
    ctx->pc = 0x121e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
label_121e9c:
    // 0x121e9c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x121e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_121ea0:
    // 0x121ea0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121ea0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_121ea4:
    // 0x121ea4: 0xc067b18  jal         func_19EC60
label_121ea8:
    if (ctx->pc == 0x121EA8u) {
        ctx->pc = 0x121EACu;
        goto label_121eac;
    }
    ctx->pc = 0x121EA4u;
    SET_GPR_U32(ctx, 31, 0x121EACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121EA4u, 0x121EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EACu;
label_121eac:
    // 0x121eac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121eacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121eb0:
    // 0x121eb0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121eb4:
    // 0x121eb4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_121eb8:
    // 0x121eb8: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x121eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_121ebc:
    // 0x121ebc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x121ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_121ec0:
    // 0x121ec0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_121ec4:
    if (ctx->pc == 0x121EC4u) {
        ctx->pc = 0x121EC8u;
        goto label_121ec8;
    }
    ctx->pc = 0x121EC0u;
    {
        const bool branch_taken_0x121ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121ec0) {
            ctx->pc = 0x121F18u;
            goto label_121f18;
        }
    }
    ctx->pc = 0x121EC8u;
label_121ec8:
    // 0x121ec8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x121ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121ecc:
    // 0x121ecc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x121eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_121ed0:
    // 0x121ed0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x121ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_121ed4:
    // 0x121ed4: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x121ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_121ed8:
    // 0x121ed8: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x121ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_121edc:
    // 0x121edc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121ee0:
    // 0x121ee0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121ee4:
    // 0x121ee4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x121ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_121ee8:
    // 0x121ee8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x121ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_121eec:
    // 0x121eec: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121ef0:
    // 0x121ef0: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x121ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_121ef4:
    // 0x121ef4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121ef8:
    // 0x121ef8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_121efc:
    // 0x121efc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121f00:
    // 0x121f00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121f00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_121f04:
    // 0x121f04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121f08:
    // 0x121f08: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121f0c:
    // 0x121f0c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x121f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_121f10:
    // 0x121f10: 0x10000387  b           . + 4 + (0x387 << 2)
label_121f14:
    if (ctx->pc == 0x121F14u) {
        ctx->pc = 0x121F18u;
        goto label_121f18;
    }
    ctx->pc = 0x121F10u;
    {
        const bool branch_taken_0x121f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f10) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121F18u;
label_121f18:
    // 0x121f18: 0x32650020  andi        $a1, $s3, 0x20
    ctx->pc = 0x121f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_121f1c:
    // 0x121f1c: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
label_121f20:
    if (ctx->pc == 0x121F20u) {
        ctx->pc = 0x121F24u;
        goto label_121f24;
    }
    ctx->pc = 0x121F1Cu;
    {
        const bool branch_taken_0x121f1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x121f1c) {
            ctx->pc = 0x121F4Cu;
            goto label_121f4c;
        }
    }
    ctx->pc = 0x121F24u;
label_121f24:
    // 0x121f24: 0x32640010  andi        $a0, $s3, 0x10
    ctx->pc = 0x121f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_121f28:
    // 0x121f28: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_121f2c:
    if (ctx->pc == 0x121F2Cu) {
        ctx->pc = 0x121F30u;
        goto label_121f30;
    }
    ctx->pc = 0x121F28u;
    {
        const bool branch_taken_0x121f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f28) {
            ctx->pc = 0x121F68u;
            goto label_121f68;
        }
    }
    ctx->pc = 0x121F30u;
label_121f30:
    // 0x121f30: 0xc067694  jal         func_19DA50
label_121f34:
    if (ctx->pc == 0x121F34u) {
        ctx->pc = 0x121F38u;
        goto label_121f38;
    }
    ctx->pc = 0x121F30u;
    SET_GPR_U32(ctx, 31, 0x121F38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x121F30u, 0x121F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F38u;
label_121f38:
    // 0x121f38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121f38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_121f3c:
    // 0x121f3c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x121f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_121f40:
    // 0x121f40: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x121f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_121f44:
    // 0x121f44: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_121f48:
    if (ctx->pc == 0x121F48u) {
        ctx->pc = 0x121F4Cu;
        goto label_121f4c;
    }
    ctx->pc = 0x121F44u;
    {
        const bool branch_taken_0x121f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x121f44) {
            ctx->pc = 0x121F68u;
            goto label_121f68;
        }
    }
    ctx->pc = 0x121F4Cu;
label_121f4c:
    // 0x121f4c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121f50:
    // 0x121f50: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x121f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_121f54:
    // 0x121f54: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x121f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_121f58:
    // 0x121f58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x121f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_121f5c:
    // 0x121f5c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x121f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_121f60:
    // 0x121f60: 0x10000373  b           . + 4 + (0x373 << 2)
label_121f64:
    if (ctx->pc == 0x121F64u) {
        ctx->pc = 0x121F68u;
        goto label_121f68;
    }
    ctx->pc = 0x121F60u;
    {
        const bool branch_taken_0x121f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f60) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121F68u;
label_121f68:
    // 0x121f68: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x121f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121f6c:
    // 0x121f6c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x121f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_121f70:
    // 0x121f70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x121f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_121f74:
    // 0x121f74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121f74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121f78:
    // 0x121f78: 0x0  nop
    ctx->pc = 0x121f78u;
    // NOP
label_121f7c:
    // 0x121f7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x121f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121f80:
    // 0x121f80: 0x0  nop
    ctx->pc = 0x121f80u;
    // NOP
label_121f84:
    // 0x121f84: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_121f88:
    if (ctx->pc == 0x121F88u) {
        ctx->pc = 0x121F8Cu;
        goto label_121f8c;
    }
    ctx->pc = 0x121F84u;
    {
        const bool branch_taken_0x121f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121f84) {
            ctx->pc = 0x121FC4u;
            goto label_121fc4;
        }
    }
    ctx->pc = 0x121F8Cu;
label_121f8c:
    // 0x121f8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121f90:
    // 0x121f90: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121f94:
    // 0x121f94: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x121f94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_121f98:
    // 0x121f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121f9c:
    // 0x121f9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121fa0:
    // 0x121fa0: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x121fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
label_121fa4:
    // 0x121fa4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121fa8:
    // 0x121fa8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_121fac:
    // 0x121fac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121fb0:
    // 0x121fb0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_121fb4:
    // 0x121fb4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121fb8:
    // 0x121fb8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x121fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_121fbc:
    // 0x121fbc: 0x1000035c  b           . + 4 + (0x35C << 2)
label_121fc0:
    if (ctx->pc == 0x121FC0u) {
        ctx->pc = 0x121FC4u;
        goto label_121fc4;
    }
    ctx->pc = 0x121FBCu;
    {
        const bool branch_taken_0x121fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121fbc) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x121FC4u;
label_121fc4:
    // 0x121fc4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121fc8:
    // 0x121fc8: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x121fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121fcc:
    // 0x121fcc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x121fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_121fd0:
    // 0x121fd0: 0x34720fdb  ori         $s2, $v1, 0xFDB
    ctx->pc = 0x121fd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_121fd4:
    // 0x121fd4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x121fd4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121fd8:
    // 0x121fd8: 0x0  nop
    ctx->pc = 0x121fd8u;
    // NOP
label_121fdc:
    // 0x121fdc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x121fdcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_121fe0:
    // 0x121fe0: 0xc058fec  jal         func_163FB0
label_121fe4:
    if (ctx->pc == 0x121FE4u) {
        ctx->pc = 0x121FE8u;
        goto label_121fe8;
    }
    ctx->pc = 0x121FE0u;
    SET_GPR_U32(ctx, 31, 0x121FE8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x121FE0u, 0x121FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FE8u;
label_121fe8:
    // 0x121fe8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121fec:
    // 0x121fec: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x121fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_121ff0:
    // 0x121ff0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121ff4:
    // 0x121ff4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_121ff8:
    // 0x121ff8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x121ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_121ffc:
    // 0x121ffc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122000:
    // 0x122000: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122004:
    // 0x122004: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_122008:
    // 0x122008: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12200c:
    // 0x12200c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12200cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_122010:
    // 0x122010: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122014:
    // 0x122014: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_122018:
    // 0x122018: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12201c:
    // 0x12201c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12201cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_122020:
    // 0x122020: 0x10000343  b           . + 4 + (0x343 << 2)
label_122024:
    if (ctx->pc == 0x122024u) {
        ctx->pc = 0x122028u;
        goto label_122028;
    }
    ctx->pc = 0x122020u;
    {
        const bool branch_taken_0x122020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122020) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122028u;
label_122028:
    // 0x122028: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12202c:
    // 0x12202c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x12202cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_122030:
    // 0x122030: 0xc048044  jal         func_120110
label_122034:
    if (ctx->pc == 0x122034u) {
        ctx->pc = 0x122038u;
        goto label_122038;
    }
    ctx->pc = 0x122030u;
    SET_GPR_U32(ctx, 31, 0x122038u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x122030u, 0x122038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122038u;
label_122038:
    // 0x122038: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x122038u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12203c:
    // 0x12203c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122040:
    // 0x122040: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x122040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_122044:
    // 0x122044: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x122044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_122048:
    // 0x122048: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x122048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_12204c:
    // 0x12204c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12204cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_122050:
    // 0x122050: 0x2404050d  addiu       $a0, $zero, 0x50D
    ctx->pc = 0x122050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
label_122054:
    // 0x122054: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x122054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_122058:
    // 0x122058: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x122058u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12205c:
    // 0x12205c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12205cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_122060:
    // 0x122060: 0xc067b18  jal         func_19EC60
label_122064:
    if (ctx->pc == 0x122064u) {
        ctx->pc = 0x122068u;
        goto label_122068;
    }
    ctx->pc = 0x122060u;
    SET_GPR_U32(ctx, 31, 0x122068u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x122060u, 0x122068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122068u;
label_122068:
    // 0x122068: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x122068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12206c:
    // 0x12206c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12206cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122070:
    // 0x122070: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x122070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_122074:
    // 0x122074: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x122074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_122078:
    // 0x122078: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x122078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_12207c:
    // 0x12207c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_122080:
    if (ctx->pc == 0x122080u) {
        ctx->pc = 0x122084u;
        goto label_122084;
    }
    ctx->pc = 0x12207Cu;
    {
        const bool branch_taken_0x12207c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12207c) {
            ctx->pc = 0x1220D4u;
            goto label_1220d4;
        }
    }
    ctx->pc = 0x122084u;
label_122084:
    // 0x122084: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122088:
    // 0x122088: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x122088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_12208c:
    // 0x12208c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12208cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_122090:
    // 0x122090: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x122090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_122094:
    // 0x122094: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x122094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_122098:
    // 0x122098: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12209c:
    // 0x12209c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1220a0:
    // 0x1220a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1220a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1220a4:
    // 0x1220a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1220a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1220a8:
    // 0x1220a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1220a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1220ac:
    // 0x1220ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1220acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1220b0:
    // 0x1220b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1220b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1220b4:
    // 0x1220b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1220b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1220b8:
    // 0x1220b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1220b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1220bc:
    // 0x1220bc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1220bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1220c0:
    // 0x1220c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1220c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1220c4:
    // 0x1220c4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1220c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1220c8:
    // 0x1220c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1220c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1220cc:
    // 0x1220cc: 0x10000318  b           . + 4 + (0x318 << 2)
label_1220d0:
    if (ctx->pc == 0x1220D0u) {
        ctx->pc = 0x1220D4u;
        goto label_1220d4;
    }
    ctx->pc = 0x1220CCu;
    {
        const bool branch_taken_0x1220cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1220cc) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1220D4u;
label_1220d4:
    // 0x1220d4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1220d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1220d8:
    // 0x1220d8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1220d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1220dc:
    // 0x1220dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1220dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1220e0:
    // 0x1220e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1220e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1220e4:
    // 0x1220e4: 0x0  nop
    ctx->pc = 0x1220e4u;
    // NOP
label_1220e8:
    // 0x1220e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1220e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1220ec:
    // 0x1220ec: 0x0  nop
    ctx->pc = 0x1220ecu;
    // NOP
label_1220f0:
    // 0x1220f0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1220f4:
    if (ctx->pc == 0x1220F4u) {
        ctx->pc = 0x1220F8u;
        goto label_1220f8;
    }
    ctx->pc = 0x1220F0u;
    {
        const bool branch_taken_0x1220f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1220f0) {
            ctx->pc = 0x122130u;
            goto label_122130;
        }
    }
    ctx->pc = 0x1220F8u;
label_1220f8:
    // 0x1220f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1220f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1220fc:
    // 0x1220fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1220fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122100:
    // 0x122100: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122104:
    // 0x122104: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122108:
    // 0x122108: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12210c:
    // 0x12210c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12210cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_122110:
    // 0x122110: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122114:
    // 0x122114: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x122114u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_122118:
    // 0x122118: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12211c:
    // 0x12211c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12211cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_122120:
    // 0x122120: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122124:
    // 0x122124: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_122128:
    // 0x122128: 0x10000301  b           . + 4 + (0x301 << 2)
label_12212c:
    if (ctx->pc == 0x12212Cu) {
        ctx->pc = 0x122130u;
        goto label_122130;
    }
    ctx->pc = 0x122128u;
    {
        const bool branch_taken_0x122128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122128) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122130u;
label_122130:
    // 0x122130: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122134:
    // 0x122134: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x122134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122138:
    // 0x122138: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x122138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_12213c:
    // 0x12213c: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x12213cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_122140:
    // 0x122140: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x122140u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122144:
    // 0x122144: 0x0  nop
    ctx->pc = 0x122144u;
    // NOP
label_122148:
    // 0x122148: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122148u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12214c:
    // 0x12214c: 0xc058fec  jal         func_163FB0
label_122150:
    if (ctx->pc == 0x122150u) {
        ctx->pc = 0x122154u;
        goto label_122154;
    }
    ctx->pc = 0x12214Cu;
    SET_GPR_U32(ctx, 31, 0x122154u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12214Cu, 0x122154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122154u;
label_122154:
    // 0x122154: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122158:
    // 0x122158: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x122158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_12215c:
    // 0x12215c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122160:
    // 0x122160: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122164:
    // 0x122164: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122168:
    // 0x122168: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12216c:
    // 0x12216c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122170:
    // 0x122170: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x122170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_122174:
    // 0x122174: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122178:
    // 0x122178: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_12217c:
    // 0x12217c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122180:
    // 0x122180: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_122184:
    // 0x122184: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122188:
    // 0x122188: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_12218c:
    // 0x12218c: 0x100002e8  b           . + 4 + (0x2E8 << 2)
label_122190:
    if (ctx->pc == 0x122190u) {
        ctx->pc = 0x122194u;
        goto label_122194;
    }
    ctx->pc = 0x12218Cu;
    {
        const bool branch_taken_0x12218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12218c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122194u;
label_122194:
    // 0x122194: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122198:
    // 0x122198: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x122198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_12219c:
    // 0x12219c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x12219cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1221a0:
    // 0x1221a0: 0xc048090  jal         func_120240
label_1221a4:
    if (ctx->pc == 0x1221A4u) {
        ctx->pc = 0x1221A8u;
        goto label_1221a8;
    }
    ctx->pc = 0x1221A0u;
    SET_GPR_U32(ctx, 31, 0x1221A8u);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x1221A0u, 0x1221A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221A8u;
label_1221a8:
    // 0x1221a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1221a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1221ac:
    // 0x1221ac: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1221acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1221b0:
    // 0x1221b0: 0x8cc50130  lw          $a1, 0x130($a2)
    ctx->pc = 0x1221b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_1221b4:
    // 0x1221b4: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1221b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1221b8:
    // 0x1221b8: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x1221b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1221bc:
    // 0x1221bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1221bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1221c0:
    // 0x1221c0: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x1221c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
label_1221c4:
    // 0x1221c4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1221c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1221c8:
    // 0x1221c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1221c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1221cc:
    // 0x1221cc: 0xc067b18  jal         func_19EC60
label_1221d0:
    if (ctx->pc == 0x1221D0u) {
        ctx->pc = 0x1221D4u;
        goto label_1221d4;
    }
    ctx->pc = 0x1221CCu;
    SET_GPR_U32(ctx, 31, 0x1221D4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1221CCu, 0x1221D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221D4u;
label_1221d4:
    // 0x1221d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1221d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1221d8:
    // 0x1221d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1221d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1221dc:
    // 0x1221dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1221dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1221e0:
    // 0x1221e0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1221e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_1221e4:
    // 0x1221e4: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1221e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1221e8:
    // 0x1221e8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1221ec:
    if (ctx->pc == 0x1221ECu) {
        ctx->pc = 0x1221F0u;
        goto label_1221f0;
    }
    ctx->pc = 0x1221E8u;
    {
        const bool branch_taken_0x1221e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1221e8) {
            ctx->pc = 0x12223Cu;
            goto label_12223c;
        }
    }
    ctx->pc = 0x1221F0u;
label_1221f0:
    // 0x1221f0: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1221f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1221f4:
    // 0x1221f4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1221f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1221f8:
    // 0x1221f8: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1221f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_1221fc:
    // 0x1221fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1221fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_122200:
    // 0x122200: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x122200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_122204:
    // 0x122204: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122208:
    // 0x122208: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12220c:
    // 0x12220c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12220cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122210:
    // 0x122210: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x122210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_122214:
    // 0x122214: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122218:
    // 0x122218: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12221c:
    // 0x12221c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12221cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122220:
    // 0x122220: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x122220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_122224:
    // 0x122224: 0x8fb30078  lw          $s3, 0x78($sp)
    ctx->pc = 0x122224u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122228:
    // 0x122228: 0xa2600003  sb          $zero, 0x3($s3)
    ctx->pc = 0x122228u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
label_12222c:
    // 0x12222c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122230:
    // 0x122230: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_122234:
    // 0x122234: 0x100002be  b           . + 4 + (0x2BE << 2)
label_122238:
    if (ctx->pc == 0x122238u) {
        ctx->pc = 0x12223Cu;
        goto label_12223c;
    }
    ctx->pc = 0x122234u;
    {
        const bool branch_taken_0x122234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122234) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x12223Cu;
label_12223c:
    // 0x12223c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x12223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122240:
    // 0x122240: 0x3c113fc9  lui         $s1, 0x3FC9
    ctx->pc = 0x122240u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16329 << 16));
label_122244:
    // 0x122244: 0x36240fdb  ori         $a0, $s1, 0xFDB
    ctx->pc = 0x122244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4059);
label_122248:
    // 0x122248: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122248u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12224c:
    // 0x12224c: 0x0  nop
    ctx->pc = 0x12224cu;
    // NOP
label_122250:
    // 0x122250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x122250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122254:
    // 0x122254: 0x0  nop
    ctx->pc = 0x122254u;
    // NOP
label_122258:
    // 0x122258: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_12225c:
    if (ctx->pc == 0x12225Cu) {
        ctx->pc = 0x122260u;
        goto label_122260;
    }
    ctx->pc = 0x122258u;
    {
        const bool branch_taken_0x122258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122258) {
            ctx->pc = 0x12234Cu;
            goto label_12234c;
        }
    }
    ctx->pc = 0x122260u;
label_122260:
    // 0x122260: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122264:
    // 0x122264: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x122264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_122268:
    // 0x122268: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x122268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_12226c:
    // 0x12226c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12226cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_122270:
    // 0x122270: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_122274:
    if (ctx->pc == 0x122274u) {
        ctx->pc = 0x122278u;
        goto label_122278;
    }
    ctx->pc = 0x122270u;
    {
        const bool branch_taken_0x122270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122270) {
            ctx->pc = 0x122314u;
            goto label_122314;
        }
    }
    ctx->pc = 0x122278u;
label_122278:
    // 0x122278: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12227c:
    // 0x12227c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_122280:
    // 0x122280: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x122280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_122284:
    // 0x122284: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x122284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_122288:
    // 0x122288: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x122288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_12228c:
    // 0x12228c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12228cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122290:
    // 0x122290: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x122290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_122294:
    // 0x122294: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x122294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_122298:
    // 0x122298: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x122298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_12229c:
    // 0x12229c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x12229cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1222a0:
    // 0x1222a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1222a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1222a4:
    // 0x1222a4: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x1222a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1222a8:
    // 0x1222a8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1222a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1222ac:
    // 0x1222ac: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1222acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1222b0:
    // 0x1222b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1222b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1222b4:
    // 0x1222b4: 0x0  nop
    ctx->pc = 0x1222b4u;
    // NOP
label_1222b8:
    // 0x1222b8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1222b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1222bc:
    // 0x1222bc: 0xc058fec  jal         func_163FB0
label_1222c0:
    if (ctx->pc == 0x1222C0u) {
        ctx->pc = 0x1222C4u;
        goto label_1222c4;
    }
    ctx->pc = 0x1222BCu;
    SET_GPR_U32(ctx, 31, 0x1222C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1222BCu, 0x1222C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222C4u;
label_1222c4:
    // 0x1222c4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1222c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1222c8:
    // 0x1222c8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1222c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1222cc:
    // 0x1222cc: 0x90a409df  lbu         $a0, 0x9DF($a1)
    ctx->pc = 0x1222ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2527)));
label_1222d0:
    // 0x1222d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1222d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1222d4:
    // 0x1222d4: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1222d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1222d8:
    // 0x1222d8: 0x14800295  bnez        $a0, . + 4 + (0x295 << 2)
label_1222dc:
    if (ctx->pc == 0x1222DCu) {
        ctx->pc = 0x1222E0u;
        goto label_1222e0;
    }
    ctx->pc = 0x1222D8u;
    {
        const bool branch_taken_0x1222d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1222d8) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1222E0u;
label_1222e0:
    // 0x1222e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1222e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1222e4:
    // 0x1222e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1222e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1222e8:
    // 0x1222e8: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1222e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1222ec:
    // 0x1222ec: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1222ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1222f0:
    // 0x1222f0: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x1222f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
label_1222f4:
    // 0x1222f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1222f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1222f8:
    // 0x1222f8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1222f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1222fc:
    // 0x1222fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1222fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122300:
    // 0x122300: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_122304:
    // 0x122304: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122308:
    // 0x122308: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_12230c:
    // 0x12230c: 0x10000288  b           . + 4 + (0x288 << 2)
label_122310:
    if (ctx->pc == 0x122310u) {
        ctx->pc = 0x122314u;
        goto label_122314;
    }
    ctx->pc = 0x12230Cu;
    {
        const bool branch_taken_0x12230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12230c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122314u;
label_122314:
    // 0x122314: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x122314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122318:
    // 0x122318: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12231c:
    // 0x12231c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x12231cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_122320:
    // 0x122320: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122324:
    // 0x122324: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122328:
    // 0x122328: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12232c:
    // 0x12232c: 0x8fb40078  lw          $s4, 0x78($sp)
    ctx->pc = 0x12232cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122330:
    // 0x122330: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x122330u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
label_122334:
    // 0x122334: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122338:
    // 0x122338: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12233c:
    // 0x12233c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122340:
    // 0x122340: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_122344:
    // 0x122344: 0x1000027a  b           . + 4 + (0x27A << 2)
label_122348:
    if (ctx->pc == 0x122348u) {
        ctx->pc = 0x12234Cu;
        goto label_12234c;
    }
    ctx->pc = 0x122344u;
    {
        const bool branch_taken_0x122344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122344) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x12234Cu;
label_12234c:
    // 0x12234c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12234cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122350:
    // 0x122350: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x122350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_122354:
    // 0x122354: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x122354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_122358:
    // 0x122358: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x122358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_12235c:
    // 0x12235c: 0x1480002e  bnez        $a0, . + 4 + (0x2E << 2)
label_122360:
    if (ctx->pc == 0x122360u) {
        ctx->pc = 0x122364u;
        goto label_122364;
    }
    ctx->pc = 0x12235Cu;
    {
        const bool branch_taken_0x12235c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12235c) {
            ctx->pc = 0x122418u;
            goto label_122418;
        }
    }
    ctx->pc = 0x122364u;
label_122364:
    // 0x122364: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122368:
    // 0x122368: 0x94a311f4  lhu         $v1, 0x11F4($a1)
    ctx->pc = 0x122368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4596)));
label_12236c:
    // 0x12236c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x12236cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_122370:
    // 0x122370: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122374:
    // 0x122374: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_122378:
    if (ctx->pc == 0x122378u) {
        ctx->pc = 0x12237Cu;
        goto label_12237c;
    }
    ctx->pc = 0x122374u;
    {
        const bool branch_taken_0x122374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x122374) {
            ctx->pc = 0x122418u;
            goto label_122418;
        }
    }
    ctx->pc = 0x12237Cu;
label_12237c:
    // 0x12237c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12237cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122380:
    // 0x122380: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x122380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_122384:
    // 0x122384: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x122384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_122388:
    // 0x122388: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x122388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_12238c:
    // 0x12238c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x12238cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_122390:
    // 0x122390: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122394:
    // 0x122394: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x122394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_122398:
    // 0x122398: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x122398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_12239c:
    // 0x12239c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x12239cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1223a0:
    // 0x1223a0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1223a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1223a4:
    // 0x1223a4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1223a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1223a8:
    // 0x1223a8: 0xc4a111f8  lwc1        $f1, 0x11F8($a1)
    ctx->pc = 0x1223a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1223ac:
    // 0x1223ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1223acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1223b0:
    // 0x1223b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1223b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1223b4:
    // 0x1223b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1223b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1223b8:
    // 0x1223b8: 0x0  nop
    ctx->pc = 0x1223b8u;
    // NOP
label_1223bc:
    // 0x1223bc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1223bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1223c0:
    // 0x1223c0: 0xc058fec  jal         func_163FB0
label_1223c4:
    if (ctx->pc == 0x1223C4u) {
        ctx->pc = 0x1223C8u;
        goto label_1223c8;
    }
    ctx->pc = 0x1223C0u;
    SET_GPR_U32(ctx, 31, 0x1223C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1223C0u, 0x1223C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223C8u;
label_1223c8:
    // 0x1223c8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1223c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1223cc:
    // 0x1223cc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1223ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1223d0:
    // 0x1223d0: 0x90c509df  lbu         $a1, 0x9DF($a2)
    ctx->pc = 0x1223d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
label_1223d4:
    // 0x1223d4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1223d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1223d8:
    // 0x1223d8: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x1223d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_1223dc:
    // 0x1223dc: 0x14800254  bnez        $a0, . + 4 + (0x254 << 2)
label_1223e0:
    if (ctx->pc == 0x1223E0u) {
        ctx->pc = 0x1223E4u;
        goto label_1223e4;
    }
    ctx->pc = 0x1223DCu;
    {
        const bool branch_taken_0x1223dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1223dc) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1223E4u;
label_1223e4:
    // 0x1223e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1223e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1223e8:
    // 0x1223e8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1223e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1223ec:
    // 0x1223ec: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1223ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_1223f0:
    // 0x1223f0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1223f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1223f4:
    // 0x1223f4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1223f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1223f8:
    // 0x1223f8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1223f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1223fc:
    // 0x1223fc: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1223fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_122400:
    // 0x122400: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122404:
    // 0x122404: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_122408:
    // 0x122408: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12240c:
    // 0x12240c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12240cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_122410:
    // 0x122410: 0x10000247  b           . + 4 + (0x247 << 2)
label_122414:
    if (ctx->pc == 0x122414u) {
        ctx->pc = 0x122418u;
        goto label_122418;
    }
    ctx->pc = 0x122410u;
    {
        const bool branch_taken_0x122410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122410) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122418u;
label_122418:
    // 0x122418: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12241c:
    // 0x12241c: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x12241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122420:
    // 0x122420: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x122420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_122424:
    // 0x122424: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x122424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_122428:
    // 0x122428: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x122428u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12242c:
    // 0x12242c: 0x0  nop
    ctx->pc = 0x12242cu;
    // NOP
label_122430:
    // 0x122430: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122430u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122434:
    // 0x122434: 0xc058fec  jal         func_163FB0
label_122438:
    if (ctx->pc == 0x122438u) {
        ctx->pc = 0x12243Cu;
        goto label_12243c;
    }
    ctx->pc = 0x122434u;
    SET_GPR_U32(ctx, 31, 0x12243Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122434u, 0x12243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12243Cu;
label_12243c:
    // 0x12243c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122440:
    // 0x122440: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x122440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_122444:
    // 0x122444: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122448:
    // 0x122448: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12244c:
    // 0x12244c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12244cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122450:
    // 0x122450: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122454:
    // 0x122454: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122458:
    // 0x122458: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x122458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_12245c:
    // 0x12245c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122460:
    // 0x122460: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_122464:
    // 0x122464: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122468:
    // 0x122468: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12246c:
    // 0x12246c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122470:
    // 0x122470: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_122474:
    // 0x122474: 0x1000022e  b           . + 4 + (0x22E << 2)
label_122478:
    if (ctx->pc == 0x122478u) {
        ctx->pc = 0x12247Cu;
        goto label_12247c;
    }
    ctx->pc = 0x122474u;
    {
        const bool branch_taken_0x122474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122474) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x12247Cu;
label_12247c:
    // 0x12247c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122480:
    // 0x122480: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x122480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_122484:
    // 0x122484: 0xc048090  jal         func_120240
label_122488:
    if (ctx->pc == 0x122488u) {
        ctx->pc = 0x12248Cu;
        goto label_12248c;
    }
    ctx->pc = 0x122484u;
    SET_GPR_U32(ctx, 31, 0x12248Cu);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x122484u, 0x12248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12248Cu;
label_12248c:
    // 0x12248c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12248cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_122490:
    // 0x122490: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x122490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_122494:
    // 0x122494: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x122494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_122498:
    // 0x122498: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x122498u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12249c:
    // 0x12249c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1224a0:
    // 0x1224a0: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x1224a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1224a4:
    // 0x1224a4: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x1224a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
label_1224a8:
    // 0x1224a8: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x1224a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_1224ac:
    // 0x1224ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1224acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1224b0:
    // 0x1224b0: 0xc067b18  jal         func_19EC60
label_1224b4:
    if (ctx->pc == 0x1224B4u) {
        ctx->pc = 0x1224B8u;
        goto label_1224b8;
    }
    ctx->pc = 0x1224B0u;
    SET_GPR_U32(ctx, 31, 0x1224B8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1224B0u, 0x1224B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224B8u;
label_1224b8:
    // 0x1224b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1224b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1224bc:
    // 0x1224bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1224bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1224c0:
    // 0x1224c0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1224c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1224c4:
    // 0x1224c4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1224c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1224c8:
    // 0x1224c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1224c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1224cc:
    // 0x1224cc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1224d0:
    if (ctx->pc == 0x1224D0u) {
        ctx->pc = 0x1224D4u;
        goto label_1224d4;
    }
    ctx->pc = 0x1224CCu;
    {
        const bool branch_taken_0x1224cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1224cc) {
            ctx->pc = 0x122524u;
            goto label_122524;
        }
    }
    ctx->pc = 0x1224D4u;
label_1224d4:
    // 0x1224d4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1224d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1224d8:
    // 0x1224d8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1224d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1224dc:
    // 0x1224dc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1224dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_1224e0:
    // 0x1224e0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1224e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1224e4:
    // 0x1224e4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1224e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1224e8:
    // 0x1224e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1224e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1224ec:
    // 0x1224ec: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1224ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1224f0:
    // 0x1224f0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1224f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1224f4:
    // 0x1224f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1224f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1224f8:
    // 0x1224f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1224f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1224fc:
    // 0x1224fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1224fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_122500:
    // 0x122500: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122504:
    // 0x122504: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_122508:
    // 0x122508: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12250c:
    // 0x12250c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x12250cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_122510:
    // 0x122510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122514:
    // 0x122514: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122518:
    // 0x122518: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x122518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_12251c:
    // 0x12251c: 0x10000204  b           . + 4 + (0x204 << 2)
label_122520:
    if (ctx->pc == 0x122520u) {
        ctx->pc = 0x122524u;
        goto label_122524;
    }
    ctx->pc = 0x12251Cu;
    {
        const bool branch_taken_0x12251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12251c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122524u;
label_122524:
    // 0x122524: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122528:
    // 0x122528: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x122528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_12252c:
    // 0x12252c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12252cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_122530:
    // 0x122530: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x122530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_122534:
    // 0x122534: 0x108000a5  beqz        $a0, . + 4 + (0xA5 << 2)
label_122538:
    if (ctx->pc == 0x122538u) {
        ctx->pc = 0x12253Cu;
        goto label_12253c;
    }
    ctx->pc = 0x122534u;
    {
        const bool branch_taken_0x122534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x122534) {
            ctx->pc = 0x1227CCu;
            goto label_1227cc;
        }
    }
    ctx->pc = 0x12253Cu;
label_12253c:
    // 0x12253c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x12253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122540:
    // 0x122540: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x122540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_122544:
    // 0x122544: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x122544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_122548:
    // 0x122548: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122548u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12254c:
    // 0x12254c: 0x0  nop
    ctx->pc = 0x12254cu;
    // NOP
label_122550:
    // 0x122550: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x122550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122554:
    // 0x122554: 0x0  nop
    ctx->pc = 0x122554u;
    // NOP
label_122558:
    // 0x122558: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_12255c:
    if (ctx->pc == 0x12255Cu) {
        ctx->pc = 0x122560u;
        goto label_122560;
    }
    ctx->pc = 0x122558u;
    {
        const bool branch_taken_0x122558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122558) {
            ctx->pc = 0x12269Cu;
            goto label_12269c;
        }
    }
    ctx->pc = 0x122560u;
label_122560:
    // 0x122560: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122564:
    // 0x122564: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x122564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_122568:
    // 0x122568: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x122568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_12256c:
    // 0x12256c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x12256cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_122570:
    // 0x122570: 0x1480003c  bnez        $a0, . + 4 + (0x3C << 2)
label_122574:
    if (ctx->pc == 0x122574u) {
        ctx->pc = 0x122578u;
        goto label_122578;
    }
    ctx->pc = 0x122570u;
    {
        const bool branch_taken_0x122570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x122570) {
            ctx->pc = 0x122664u;
            goto label_122664;
        }
    }
    ctx->pc = 0x122578u;
label_122578:
    // 0x122578: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12257c:
    // 0x12257c: 0x94a311f6  lhu         $v1, 0x11F6($a1)
    ctx->pc = 0x12257cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4598)));
label_122580:
    // 0x122580: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x122580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_122584:
    // 0x122584: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x122584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_122588:
    // 0x122588: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_12258c:
    if (ctx->pc == 0x12258Cu) {
        ctx->pc = 0x122590u;
        goto label_122590;
    }
    ctx->pc = 0x122588u;
    {
        const bool branch_taken_0x122588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x122588) {
            ctx->pc = 0x1225C8u;
            goto label_1225c8;
        }
    }
    ctx->pc = 0x122590u;
label_122590:
    // 0x122590: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122594:
    // 0x122594: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122598:
    // 0x122598: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12259c:
    // 0x12259c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12259cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1225a0:
    // 0x1225a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1225a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1225a4:
    // 0x1225a4: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x1225a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
label_1225a8:
    // 0x1225a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1225ac:
    // 0x1225ac: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1225acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1225b0:
    // 0x1225b0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1225b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1225b4:
    // 0x1225b4: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1225b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_1225b8:
    // 0x1225b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1225b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1225bc:
    // 0x1225bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1225bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1225c0:
    // 0x1225c0: 0x100001db  b           . + 4 + (0x1DB << 2)
label_1225c4:
    if (ctx->pc == 0x1225C4u) {
        ctx->pc = 0x1225C8u;
        goto label_1225c8;
    }
    ctx->pc = 0x1225C0u;
    {
        const bool branch_taken_0x1225c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1225c0) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1225C8u;
label_1225c8:
    // 0x1225c8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1225c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1225cc:
    // 0x1225cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1225ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1225d0:
    // 0x1225d0: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_1225d4:
    // 0x1225d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1225d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1225d8:
    // 0x1225d8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1225d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1225dc:
    // 0x1225dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1225dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1225e0:
    // 0x1225e0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1225e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1225e4:
    // 0x1225e4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1225e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_1225e8:
    // 0x1225e8: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1225e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1225ec:
    // 0x1225ec: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1225ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1225f0:
    // 0x1225f0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1225f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1225f4:
    // 0x1225f4: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x1225f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1225f8:
    // 0x1225f8: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1225f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_1225fc:
    // 0x1225fc: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1225fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_122600:
    // 0x122600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122604:
    // 0x122604: 0x0  nop
    ctx->pc = 0x122604u;
    // NOP
label_122608:
    // 0x122608: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122608u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12260c:
    // 0x12260c: 0xc058fec  jal         func_163FB0
label_122610:
    if (ctx->pc == 0x122610u) {
        ctx->pc = 0x122614u;
        goto label_122614;
    }
    ctx->pc = 0x12260Cu;
    SET_GPR_U32(ctx, 31, 0x122614u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12260Cu, 0x122614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122614u;
label_122614:
    // 0x122614: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x122614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_122618:
    // 0x122618: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12261c:
    // 0x12261c: 0x90a509df  lbu         $a1, 0x9DF($a1)
    ctx->pc = 0x12261cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2527)));
label_122620:
    // 0x122620: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x122620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_122624:
    // 0x122624: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x122624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_122628:
    // 0x122628: 0x146001c1  bnez        $v1, . + 4 + (0x1C1 << 2)
label_12262c:
    if (ctx->pc == 0x12262Cu) {
        ctx->pc = 0x122630u;
        goto label_122630;
    }
    ctx->pc = 0x122628u;
    {
        const bool branch_taken_0x122628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122628) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122630u;
label_122630:
    // 0x122630: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122634:
    // 0x122634: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122638:
    // 0x122638: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12263c:
    // 0x12263c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122640:
    // 0x122640: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x122640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_122644:
    // 0x122644: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122648:
    // 0x122648: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12264c:
    // 0x12264c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122650:
    // 0x122650: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_122654:
    // 0x122654: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122658:
    // 0x122658: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_12265c:
    // 0x12265c: 0x100001b4  b           . + 4 + (0x1B4 << 2)
label_122660:
    if (ctx->pc == 0x122660u) {
        ctx->pc = 0x122664u;
        goto label_122664;
    }
    ctx->pc = 0x12265Cu;
    {
        const bool branch_taken_0x12265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12265c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122664u;
label_122664:
    // 0x122664: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122668:
    // 0x122668: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12266c:
    // 0x12266c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12266cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122670:
    // 0x122670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122674:
    // 0x122674: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122678:
    // 0x122678: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x122678u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_12267c:
    // 0x12267c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122680:
    // 0x122680: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_122684:
    // 0x122684: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x122684u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122688:
    // 0x122688: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x122688u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
label_12268c:
    // 0x12268c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122690:
    // 0x122690: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_122694:
    // 0x122694: 0x100001a6  b           . + 4 + (0x1A6 << 2)
label_122698:
    if (ctx->pc == 0x122698u) {
        ctx->pc = 0x12269Cu;
        goto label_12269c;
    }
    ctx->pc = 0x122694u;
    {
        const bool branch_taken_0x122694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122694) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x12269Cu;
label_12269c:
    // 0x12269c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12269cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1226a0:
    // 0x1226a0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1226a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1226a4:
    // 0x1226a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1226a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1226a8:
    // 0x1226a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1226a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1226ac:
    // 0x1226ac: 0x1480002e  bnez        $a0, . + 4 + (0x2E << 2)
label_1226b0:
    if (ctx->pc == 0x1226B0u) {
        ctx->pc = 0x1226B4u;
        goto label_1226b4;
    }
    ctx->pc = 0x1226ACu;
    {
        const bool branch_taken_0x1226ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1226ac) {
            ctx->pc = 0x122768u;
            goto label_122768;
        }
    }
    ctx->pc = 0x1226B4u;
label_1226b4:
    // 0x1226b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1226b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1226b8:
    // 0x1226b8: 0x946211f4  lhu         $v0, 0x11F4($v1)
    ctx->pc = 0x1226b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_1226bc:
    // 0x1226bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1226bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1226c0:
    // 0x1226c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1226c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1226c4:
    // 0x1226c4: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_1226c8:
    if (ctx->pc == 0x1226C8u) {
        ctx->pc = 0x1226CCu;
        goto label_1226cc;
    }
    ctx->pc = 0x1226C4u;
    {
        const bool branch_taken_0x1226c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1226c4) {
            ctx->pc = 0x122768u;
            goto label_122768;
        }
    }
    ctx->pc = 0x1226CCu;
label_1226cc:
    // 0x1226cc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1226ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1226d0:
    // 0x1226d0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1226d4:
    // 0x1226d4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1226d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_1226d8:
    // 0x1226d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1226d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1226dc:
    // 0x1226dc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1226dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1226e0:
    // 0x1226e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1226e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1226e4:
    // 0x1226e4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1226e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1226e8:
    // 0x1226e8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1226e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_1226ec:
    // 0x1226ec: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x1226ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1226f0:
    // 0x1226f0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1226f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1226f4:
    // 0x1226f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1226f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1226f8:
    // 0x1226f8: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x1226f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1226fc:
    // 0x1226fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1226fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_122700:
    // 0x122700: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x122700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_122704:
    // 0x122704: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122704u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122708:
    // 0x122708: 0x0  nop
    ctx->pc = 0x122708u;
    // NOP
label_12270c:
    // 0x12270c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12270cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122710:
    // 0x122710: 0xc058fec  jal         func_163FB0
label_122714:
    if (ctx->pc == 0x122714u) {
        ctx->pc = 0x122718u;
        goto label_122718;
    }
    ctx->pc = 0x122710u;
    SET_GPR_U32(ctx, 31, 0x122718u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122710u, 0x122718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122718u;
label_122718:
    // 0x122718: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x122718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_12271c:
    // 0x12271c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122720:
    // 0x122720: 0x908509df  lbu         $a1, 0x9DF($a0)
    ctx->pc = 0x122720u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
label_122724:
    // 0x122724: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x122724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_122728:
    // 0x122728: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x122728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_12272c:
    // 0x12272c: 0x14a00180  bnez        $a1, . + 4 + (0x180 << 2)
label_122730:
    if (ctx->pc == 0x122730u) {
        ctx->pc = 0x122734u;
        goto label_122734;
    }
    ctx->pc = 0x12272Cu;
    {
        const bool branch_taken_0x12272c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12272c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122734u;
label_122734:
    // 0x122734: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122738:
    // 0x122738: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12273c:
    // 0x12273c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x12273cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_122740:
    // 0x122740: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122744:
    // 0x122744: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x122744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_122748:
    // 0x122748: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12274c:
    // 0x12274c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12274cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_122750:
    // 0x122750: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122754:
    // 0x122754: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x122754u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_122758:
    // 0x122758: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12275c:
    // 0x12275c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12275cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_122760:
    // 0x122760: 0x10000173  b           . + 4 + (0x173 << 2)
label_122764:
    if (ctx->pc == 0x122764u) {
        ctx->pc = 0x122768u;
        goto label_122768;
    }
    ctx->pc = 0x122760u;
    {
        const bool branch_taken_0x122760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122760) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122768u;
label_122768:
    // 0x122768: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12276c:
    // 0x12276c: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x12276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122770:
    // 0x122770: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x122770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_122774:
    // 0x122774: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x122774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_122778:
    // 0x122778: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122778u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12277c:
    // 0x12277c: 0x0  nop
    ctx->pc = 0x12277cu;
    // NOP
label_122780:
    // 0x122780: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122780u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122784:
    // 0x122784: 0xc058fec  jal         func_163FB0
label_122788:
    if (ctx->pc == 0x122788u) {
        ctx->pc = 0x12278Cu;
        goto label_12278c;
    }
    ctx->pc = 0x122784u;
    SET_GPR_U32(ctx, 31, 0x12278Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122784u, 0x12278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12278Cu;
label_12278c:
    // 0x12278c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12278cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122790:
    // 0x122790: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x122790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_122794:
    // 0x122794: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122798:
    // 0x122798: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12279c:
    // 0x12279c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12279cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1227a0:
    // 0x1227a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1227a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1227a4:
    // 0x1227a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1227a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1227a8:
    // 0x1227a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1227a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1227ac:
    // 0x1227ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1227acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1227b0:
    // 0x1227b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1227b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1227b4:
    // 0x1227b4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1227b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1227b8:
    // 0x1227b8: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1227b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1227bc:
    // 0x1227bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1227bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1227c0:
    // 0x1227c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1227c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1227c4:
    // 0x1227c4: 0x1000015a  b           . + 4 + (0x15A << 2)
label_1227c8:
    if (ctx->pc == 0x1227C8u) {
        ctx->pc = 0x1227CCu;
        goto label_1227cc;
    }
    ctx->pc = 0x1227C4u;
    {
        const bool branch_taken_0x1227c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1227c4) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1227CCu;
label_1227cc:
    // 0x1227cc: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1227ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1227d0:
    // 0x1227d0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1227d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1227d4:
    // 0x1227d4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1227d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1227d8:
    // 0x1227d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1227d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1227dc:
    // 0x1227dc: 0x0  nop
    ctx->pc = 0x1227dcu;
    // NOP
label_1227e0:
    // 0x1227e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1227e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1227e4:
    // 0x1227e4: 0x0  nop
    ctx->pc = 0x1227e4u;
    // NOP
label_1227e8:
    // 0x1227e8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1227ec:
    if (ctx->pc == 0x1227ECu) {
        ctx->pc = 0x1227F0u;
        goto label_1227f0;
    }
    ctx->pc = 0x1227E8u;
    {
        const bool branch_taken_0x1227e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1227e8) {
            ctx->pc = 0x122828u;
            goto label_122828;
        }
    }
    ctx->pc = 0x1227F0u;
label_1227f0:
    // 0x1227f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1227f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1227f4:
    // 0x1227f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1227f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1227f8:
    // 0x1227f8: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1227f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1227fc:
    // 0x1227fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1227fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122800:
    // 0x122800: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122804:
    // 0x122804: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_122808:
    // 0x122808: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12280c:
    // 0x12280c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12280cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_122810:
    // 0x122810: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122814:
    // 0x122814: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_122818:
    // 0x122818: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12281c:
    // 0x12281c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12281cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_122820:
    // 0x122820: 0x10000143  b           . + 4 + (0x143 << 2)
label_122824:
    if (ctx->pc == 0x122824u) {
        ctx->pc = 0x122828u;
        goto label_122828;
    }
    ctx->pc = 0x122820u;
    {
        const bool branch_taken_0x122820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122820) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122828u;
label_122828:
    // 0x122828: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12282c:
    // 0x12282c: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x12282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122830:
    // 0x122830: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x122830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_122834:
    // 0x122834: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x122834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_122838:
    // 0x122838: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12283c:
    // 0x12283c: 0x0  nop
    ctx->pc = 0x12283cu;
    // NOP
label_122840:
    // 0x122840: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122840u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122844:
    // 0x122844: 0xc058fec  jal         func_163FB0
label_122848:
    if (ctx->pc == 0x122848u) {
        ctx->pc = 0x12284Cu;
        goto label_12284c;
    }
    ctx->pc = 0x122844u;
    SET_GPR_U32(ctx, 31, 0x12284Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122844u, 0x12284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12284Cu;
label_12284c:
    // 0x12284c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122850:
    // 0x122850: 0xe4a011f8  swc1        $f0, 0x11F8($a1)
    ctx->pc = 0x122850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4600), bits); }
label_122854:
    // 0x122854: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122858:
    // 0x122858: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12285c:
    // 0x12285c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12285cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122860:
    // 0x122860: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122864:
    // 0x122864: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122868:
    // 0x122868: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12286c:
    // 0x12286c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12286cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122870:
    // 0x122870: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122870u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_122874:
    // 0x122874: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122878:
    // 0x122878: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x122878u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_12287c:
    // 0x12287c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12287cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122880:
    // 0x122880: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_122884:
    // 0x122884: 0x1000012a  b           . + 4 + (0x12A << 2)
label_122888:
    if (ctx->pc == 0x122888u) {
        ctx->pc = 0x12288Cu;
        goto label_12288c;
    }
    ctx->pc = 0x122884u;
    {
        const bool branch_taken_0x122884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122884) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x12288Cu;
label_12288c:
    // 0x12288c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122890:
    // 0x122890: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x122890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_122894:
    // 0x122894: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x122894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_122898:
    // 0x122898: 0xc048090  jal         func_120240
label_12289c:
    if (ctx->pc == 0x12289Cu) {
        ctx->pc = 0x1228A0u;
        goto label_1228a0;
    }
    ctx->pc = 0x122898u;
    SET_GPR_U32(ctx, 31, 0x1228A0u);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x122898u, 0x1228A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228A0u;
label_1228a0:
    // 0x1228a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1228a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1228a4:
    // 0x1228a4: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x1228a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_1228a8:
    // 0x1228a8: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x1228a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1228ac:
    // 0x1228ac: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1228acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1228b0:
    // 0x1228b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1228b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1228b4:
    // 0x1228b4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1228b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1228b8:
    // 0x1228b8: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x1228b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
label_1228bc:
    // 0x1228bc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1228bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1228c0:
    // 0x1228c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1228c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1228c4:
    // 0x1228c4: 0xc067b18  jal         func_19EC60
label_1228c8:
    if (ctx->pc == 0x1228C8u) {
        ctx->pc = 0x1228CCu;
        goto label_1228cc;
    }
    ctx->pc = 0x1228C4u;
    SET_GPR_U32(ctx, 31, 0x1228CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1228C4u, 0x1228CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228CCu;
label_1228cc:
    // 0x1228cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1228ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1228d0:
    // 0x1228d0: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1228d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1228d4:
    // 0x1228d4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1228d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1228d8:
    // 0x1228d8: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1228d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_1228dc:
    // 0x1228dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1228dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1228e0:
    // 0x1228e0: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_1228e4:
    if (ctx->pc == 0x1228E4u) {
        ctx->pc = 0x1228E8u;
        goto label_1228e8;
    }
    ctx->pc = 0x1228E0u;
    {
        const bool branch_taken_0x1228e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1228e0) {
            ctx->pc = 0x1229A8u;
            goto label_1229a8;
        }
    }
    ctx->pc = 0x1228E8u;
label_1228e8:
    // 0x1228e8: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1228e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1228ec:
    // 0x1228ec: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1228ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1228f0:
    // 0x1228f0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1228f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1228f4:
    // 0x1228f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1228f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1228f8:
    // 0x1228f8: 0x0  nop
    ctx->pc = 0x1228f8u;
    // NOP
label_1228fc:
    // 0x1228fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1228fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122900:
    // 0x122900: 0x0  nop
    ctx->pc = 0x122900u;
    // NOP
label_122904:
    // 0x122904: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_122908:
    if (ctx->pc == 0x122908u) {
        ctx->pc = 0x12290Cu;
        goto label_12290c;
    }
    ctx->pc = 0x122904u;
    {
        const bool branch_taken_0x122904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122904) {
            ctx->pc = 0x122944u;
            goto label_122944;
        }
    }
    ctx->pc = 0x12290Cu;
label_12290c:
    // 0x12290c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12290cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122910:
    // 0x122910: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122914:
    // 0x122914: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122918:
    // 0x122918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x122918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12291c:
    // 0x12291c: 0x8fb30078  lw          $s3, 0x78($sp)
    ctx->pc = 0x12291cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122920:
    // 0x122920: 0xa2650001  sb          $a1, 0x1($s3)
    ctx->pc = 0x122920u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 5));
label_122924:
    // 0x122924: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122928:
    // 0x122928: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12292c:
    // 0x12292c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122930:
    // 0x122930: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_122934:
    // 0x122934: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x122934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122938:
    // 0x122938: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x122938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_12293c:
    // 0x12293c: 0x10000018  b           . + 4 + (0x18 << 2)
label_122940:
    if (ctx->pc == 0x122940u) {
        ctx->pc = 0x122944u;
        goto label_122944;
    }
    ctx->pc = 0x12293Cu;
    {
        const bool branch_taken_0x12293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12293c) {
            ctx->pc = 0x1229A0u;
            goto label_1229a0;
        }
    }
    ctx->pc = 0x122944u;
label_122944:
    // 0x122944: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122948:
    // 0x122948: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x122948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12294c:
    // 0x12294c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x12294cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_122950:
    // 0x122950: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x122950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_122954:
    // 0x122954: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122954u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122958:
    // 0x122958: 0x0  nop
    ctx->pc = 0x122958u;
    // NOP
label_12295c:
    // 0x12295c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12295cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122960:
    // 0x122960: 0xc058fec  jal         func_163FB0
label_122964:
    if (ctx->pc == 0x122964u) {
        ctx->pc = 0x122968u;
        goto label_122968;
    }
    ctx->pc = 0x122960u;
    SET_GPR_U32(ctx, 31, 0x122968u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122960u, 0x122968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122968u;
label_122968:
    // 0x122968: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12296c:
    // 0x12296c: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x12296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_122970:
    // 0x122970: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x122970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122974:
    // 0x122974: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122978:
    // 0x122978: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x122978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_12297c:
    // 0x12297c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122980:
    // 0x122980: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122984:
    // 0x122984: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x122984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_122988:
    // 0x122988: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12298c:
    // 0x12298c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x12298cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_122990:
    // 0x122990: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122994:
    // 0x122994: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x122994u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_122998:
    // 0x122998: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12299c:
    // 0x12299c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12299cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1229a0:
    // 0x1229a0: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_1229a4:
    if (ctx->pc == 0x1229A4u) {
        ctx->pc = 0x1229A8u;
        goto label_1229a8;
    }
    ctx->pc = 0x1229A0u;
    {
        const bool branch_taken_0x1229a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1229a0) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x1229A8u;
label_1229a8:
    // 0x1229a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1229a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1229ac:
    // 0x1229ac: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1229acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1229b0:
    // 0x1229b0: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1229b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_1229b4:
    // 0x1229b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1229b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1229b8:
    // 0x1229b8: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
label_1229bc:
    if (ctx->pc == 0x1229BCu) {
        ctx->pc = 0x1229C0u;
        goto label_1229c0;
    }
    ctx->pc = 0x1229B8u;
    {
        const bool branch_taken_0x1229b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1229b8) {
            ctx->pc = 0x122C00u;
            goto label_122c00;
        }
    }
    ctx->pc = 0x1229C0u;
label_1229c0:
    // 0x1229c0: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1229c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1229c4:
    // 0x1229c4: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1229c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_1229c8:
    // 0x1229c8: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x1229c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1229cc:
    // 0x1229cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1229ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1229d0:
    // 0x1229d0: 0x0  nop
    ctx->pc = 0x1229d0u;
    // NOP
label_1229d4:
    // 0x1229d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1229d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1229d8:
    // 0x1229d8: 0x0  nop
    ctx->pc = 0x1229d8u;
    // NOP
label_1229dc:
    // 0x1229dc: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_1229e0:
    if (ctx->pc == 0x1229E0u) {
        ctx->pc = 0x1229E4u;
        goto label_1229e4;
    }
    ctx->pc = 0x1229DCu;
    {
        const bool branch_taken_0x1229dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1229dc) {
            ctx->pc = 0x122AD0u;
            goto label_122ad0;
        }
    }
    ctx->pc = 0x1229E4u;
label_1229e4:
    // 0x1229e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1229e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1229e8:
    // 0x1229e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1229e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1229ec:
    // 0x1229ec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1229ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1229f0:
    // 0x1229f0: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1229f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1229f4:
    // 0x1229f4: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_1229f8:
    if (ctx->pc == 0x1229F8u) {
        ctx->pc = 0x1229FCu;
        goto label_1229fc;
    }
    ctx->pc = 0x1229F4u;
    {
        const bool branch_taken_0x1229f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1229f4) {
            ctx->pc = 0x122A98u;
            goto label_122a98;
        }
    }
    ctx->pc = 0x1229FCu;
label_1229fc:
    // 0x1229fc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1229fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122a00:
    // 0x122a00: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x122a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_122a04:
    // 0x122a04: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x122a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_122a08:
    // 0x122a08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x122a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_122a0c:
    // 0x122a0c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x122a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_122a10:
    // 0x122a10: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122a14:
    // 0x122a14: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x122a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_122a18:
    // 0x122a18: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x122a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_122a1c:
    // 0x122a1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x122a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_122a20:
    // 0x122a20: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x122a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_122a24:
    // 0x122a24: 0x8fb40078  lw          $s4, 0x78($sp)
    ctx->pc = 0x122a24u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122a28:
    // 0x122a28: 0xc68111f8  lwc1        $f1, 0x11F8($s4)
    ctx->pc = 0x122a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122a2c:
    // 0x122a2c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x122a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_122a30:
    // 0x122a30: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x122a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_122a34:
    // 0x122a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122a38:
    // 0x122a38: 0x0  nop
    ctx->pc = 0x122a38u;
    // NOP
label_122a3c:
    // 0x122a3c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122a3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122a40:
    // 0x122a40: 0xc058fec  jal         func_163FB0
label_122a44:
    if (ctx->pc == 0x122A44u) {
        ctx->pc = 0x122A48u;
        goto label_122a48;
    }
    ctx->pc = 0x122A40u;
    SET_GPR_U32(ctx, 31, 0x122A48u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122A40u, 0x122A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A48u;
label_122a48:
    // 0x122a48: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x122a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_122a4c:
    // 0x122a4c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122a50:
    // 0x122a50: 0x90c509df  lbu         $a1, 0x9DF($a2)
    ctx->pc = 0x122a50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
label_122a54:
    // 0x122a54: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x122a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_122a58:
    // 0x122a58: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x122a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_122a5c:
    // 0x122a5c: 0x148000b4  bnez        $a0, . + 4 + (0xB4 << 2)
label_122a60:
    if (ctx->pc == 0x122A60u) {
        ctx->pc = 0x122A64u;
        goto label_122a64;
    }
    ctx->pc = 0x122A5Cu;
    {
        const bool branch_taken_0x122a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x122a5c) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122A64u;
label_122a64:
    // 0x122a64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x122a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122a68:
    // 0x122a68: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122a6c:
    // 0x122a6c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x122a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_122a70:
    // 0x122a70: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122a74:
    // 0x122a74: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x122a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_122a78:
    // 0x122a78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122a7c:
    // 0x122a7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_122a80:
    // 0x122a80: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122a84:
    // 0x122a84: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x122a84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_122a88:
    // 0x122a88: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122a8c:
    // 0x122a8c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_122a90:
    // 0x122a90: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_122a94:
    if (ctx->pc == 0x122A94u) {
        ctx->pc = 0x122A98u;
        goto label_122a98;
    }
    ctx->pc = 0x122A90u;
    {
        const bool branch_taken_0x122a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122a90) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122A98u;
label_122a98:
    // 0x122a98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x122a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122a9c:
    // 0x122a9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122aa0:
    // 0x122aa0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x122aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_122aa4:
    // 0x122aa4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x122aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122aa8:
    // 0x122aa8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122aac:
    // 0x122aac: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x122aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
label_122ab0:
    // 0x122ab0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122ab4:
    // 0x122ab4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_122ab8:
    // 0x122ab8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122abc:
    // 0x122abc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_122ac0:
    // 0x122ac0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122ac4:
    // 0x122ac4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_122ac8:
    // 0x122ac8: 0x10000099  b           . + 4 + (0x99 << 2)
label_122acc:
    if (ctx->pc == 0x122ACCu) {
        ctx->pc = 0x122AD0u;
        goto label_122ad0;
    }
    ctx->pc = 0x122AC8u;
    {
        const bool branch_taken_0x122ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122ac8) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122AD0u;
label_122ad0:
    // 0x122ad0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x122ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122ad4:
    // 0x122ad4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x122ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_122ad8:
    // 0x122ad8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x122ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_122adc:
    // 0x122adc: 0x462824  and         $a1, $v0, $a2
    ctx->pc = 0x122adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_122ae0:
    // 0x122ae0: 0x14a0002e  bnez        $a1, . + 4 + (0x2E << 2)
label_122ae4:
    if (ctx->pc == 0x122AE4u) {
        ctx->pc = 0x122AE8u;
        goto label_122ae8;
    }
    ctx->pc = 0x122AE0u;
    {
        const bool branch_taken_0x122ae0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x122ae0) {
            ctx->pc = 0x122B9Cu;
            goto label_122b9c;
        }
    }
    ctx->pc = 0x122AE8u;
label_122ae8:
    // 0x122ae8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122aec:
    // 0x122aec: 0x948411f4  lhu         $a0, 0x11F4($a0)
    ctx->pc = 0x122aecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
label_122af0:
    // 0x122af0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x122af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_122af4:
    // 0x122af4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122af8:
    // 0x122af8: 0x10a40028  beq         $a1, $a0, . + 4 + (0x28 << 2)
label_122afc:
    if (ctx->pc == 0x122AFCu) {
        ctx->pc = 0x122B00u;
        goto label_122b00;
    }
    ctx->pc = 0x122AF8u;
    {
        const bool branch_taken_0x122af8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x122af8) {
            ctx->pc = 0x122B9Cu;
            goto label_122b9c;
        }
    }
    ctx->pc = 0x122B00u;
label_122b00:
    // 0x122b00: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122b04:
    // 0x122b04: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x122b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_122b08:
    // 0x122b08: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x122b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_122b0c:
    // 0x122b0c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x122b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_122b10:
    // 0x122b10: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x122b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_122b14:
    // 0x122b14: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122b18:
    // 0x122b18: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x122b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_122b1c:
    // 0x122b1c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x122b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_122b20:
    // 0x122b20: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x122b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_122b24:
    // 0x122b24: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x122b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_122b28:
    // 0x122b28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122b2c:
    // 0x122b2c: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x122b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122b30:
    // 0x122b30: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x122b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_122b34:
    // 0x122b34: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x122b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_122b38:
    // 0x122b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122b3c:
    // 0x122b3c: 0x0  nop
    ctx->pc = 0x122b3cu;
    // NOP
label_122b40:
    // 0x122b40: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122b40u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122b44:
    // 0x122b44: 0xc058fec  jal         func_163FB0
label_122b48:
    if (ctx->pc == 0x122B48u) {
        ctx->pc = 0x122B4Cu;
        goto label_122b4c;
    }
    ctx->pc = 0x122B44u;
    SET_GPR_U32(ctx, 31, 0x122B4Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122B44u, 0x122B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B4Cu;
label_122b4c:
    // 0x122b4c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x122b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_122b50:
    // 0x122b50: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122b54:
    // 0x122b54: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x122b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
label_122b58:
    // 0x122b58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x122b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_122b5c:
    // 0x122b5c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x122b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_122b60:
    // 0x122b60: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
label_122b64:
    if (ctx->pc == 0x122B64u) {
        ctx->pc = 0x122B68u;
        goto label_122b68;
    }
    ctx->pc = 0x122B60u;
    {
        const bool branch_taken_0x122b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122b60) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122B68u;
label_122b68:
    // 0x122b68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122b6c:
    // 0x122b6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122b70:
    // 0x122b70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122b70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122b74:
    // 0x122b74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122b78:
    // 0x122b78: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x122b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_122b7c:
    // 0x122b7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122b80:
    // 0x122b80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_122b84:
    // 0x122b84: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122b88:
    // 0x122b88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122b88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_122b8c:
    // 0x122b8c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122b90:
    // 0x122b90: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x122b90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_122b94:
    // 0x122b94: 0x10000066  b           . + 4 + (0x66 << 2)
label_122b98:
    if (ctx->pc == 0x122B98u) {
        ctx->pc = 0x122B9Cu;
        goto label_122b9c;
    }
    ctx->pc = 0x122B94u;
    {
        const bool branch_taken_0x122b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122b94) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122B9Cu;
label_122b9c:
    // 0x122b9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122ba0:
    // 0x122ba0: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x122ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122ba4:
    // 0x122ba4: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x122ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_122ba8:
    // 0x122ba8: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x122ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_122bac:
    // 0x122bac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x122bacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122bb0:
    // 0x122bb0: 0x0  nop
    ctx->pc = 0x122bb0u;
    // NOP
label_122bb4:
    // 0x122bb4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122bb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122bb8:
    // 0x122bb8: 0xc058fec  jal         func_163FB0
label_122bbc:
    if (ctx->pc == 0x122BBCu) {
        ctx->pc = 0x122BC0u;
        goto label_122bc0;
    }
    ctx->pc = 0x122BB8u;
    SET_GPR_U32(ctx, 31, 0x122BC0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122BB8u, 0x122BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BC0u;
label_122bc0:
    // 0x122bc0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122bc4:
    // 0x122bc4: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x122bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_122bc8:
    // 0x122bc8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122bcc:
    // 0x122bcc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122bd0:
    // 0x122bd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122bd4:
    // 0x122bd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122bd8:
    // 0x122bd8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122bdc:
    // 0x122bdc: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x122bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_122be0:
    // 0x122be0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122be4:
    // 0x122be4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122be4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_122be8:
    // 0x122be8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122bec:
    // 0x122bec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_122bf0:
    // 0x122bf0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122bf4:
    // 0x122bf4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_122bf8:
    // 0x122bf8: 0x1000004d  b           . + 4 + (0x4D << 2)
label_122bfc:
    if (ctx->pc == 0x122BFCu) {
        ctx->pc = 0x122C00u;
        goto label_122c00;
    }
    ctx->pc = 0x122BF8u;
    {
        const bool branch_taken_0x122bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122bf8) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122C00u;
label_122c00:
    // 0x122c00: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x122c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122c04:
    // 0x122c04: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x122c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
label_122c08:
    // 0x122c08: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x122c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_122c0c:
    // 0x122c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122c10:
    // 0x122c10: 0x0  nop
    ctx->pc = 0x122c10u;
    // NOP
label_122c14:
    // 0x122c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x122c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122c18:
    // 0x122c18: 0x0  nop
    ctx->pc = 0x122c18u;
    // NOP
label_122c1c:
    // 0x122c1c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_122c20:
    if (ctx->pc == 0x122C20u) {
        ctx->pc = 0x122C24u;
        goto label_122c24;
    }
    ctx->pc = 0x122C1Cu;
    {
        const bool branch_taken_0x122c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122c1c) {
            ctx->pc = 0x122C5Cu;
            goto label_122c5c;
        }
    }
    ctx->pc = 0x122C24u;
label_122c24:
    // 0x122c24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122c28:
    // 0x122c28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122c2c:
    // 0x122c2c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122c30:
    // 0x122c30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122c34:
    // 0x122c34: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122c38:
    // 0x122c38: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x122c38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_122c3c:
    // 0x122c3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122c40:
    // 0x122c40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_122c44:
    // 0x122c44: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122c48:
    // 0x122c48: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x122c48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_122c4c:
    // 0x122c4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122c50:
    // 0x122c50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_122c54:
    // 0x122c54: 0x10000036  b           . + 4 + (0x36 << 2)
label_122c58:
    if (ctx->pc == 0x122C58u) {
        ctx->pc = 0x122C5Cu;
        goto label_122c5c;
    }
    ctx->pc = 0x122C54u;
    {
        const bool branch_taken_0x122c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122c54) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122C5Cu;
label_122c5c:
    // 0x122c5c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122c60:
    // 0x122c60: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x122c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122c64:
    // 0x122c64: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x122c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_122c68:
    // 0x122c68: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x122c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_122c6c:
    // 0x122c6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122c70:
    // 0x122c70: 0x0  nop
    ctx->pc = 0x122c70u;
    // NOP
label_122c74:
    // 0x122c74: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122c74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122c78:
    // 0x122c78: 0xc058fec  jal         func_163FB0
label_122c7c:
    if (ctx->pc == 0x122C7Cu) {
        ctx->pc = 0x122C80u;
        goto label_122c80;
    }
    ctx->pc = 0x122C78u;
    SET_GPR_U32(ctx, 31, 0x122C80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122C78u, 0x122C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C80u;
label_122c80:
    // 0x122c80: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122c84:
    // 0x122c84: 0xe48011f8  swc1        $f0, 0x11F8($a0)
    ctx->pc = 0x122c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4600), bits); }
label_122c88:
    // 0x122c88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122c8c:
    // 0x122c8c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122c90:
    // 0x122c90: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x122c90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_122c94:
    // 0x122c94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122c98:
    // 0x122c98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122c9c:
    // 0x122c9c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_122ca0:
    // 0x122ca0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122ca4:
    // 0x122ca4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_122ca8:
    // 0x122ca8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122cac:
    // 0x122cac: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x122cacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_122cb0:
    // 0x122cb0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122cb4:
    // 0x122cb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_122cb8:
    // 0x122cb8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_122cbc:
    if (ctx->pc == 0x122CBCu) {
        ctx->pc = 0x122CC0u;
        goto label_122cc0;
    }
    ctx->pc = 0x122CB8u;
    {
        const bool branch_taken_0x122cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122cb8) {
            ctx->pc = 0x122D30u;
            goto label_122d30;
        }
    }
    ctx->pc = 0x122CC0u;
label_122cc0:
    // 0x122cc0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122cc4:
    // 0x122cc4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x122cc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_122cc8:
    // 0x122cc8: 0xc048090  jal         func_120240
label_122ccc:
    if (ctx->pc == 0x122CCCu) {
        ctx->pc = 0x122CD0u;
        goto label_122cd0;
    }
    ctx->pc = 0x122CC8u;
    SET_GPR_U32(ctx, 31, 0x122CD0u);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x122CC8u, 0x122CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CD0u;
label_122cd0:
    // 0x122cd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x122cd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_122cd4:
    // 0x122cd4: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x122cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_122cd8:
    // 0x122cd8: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x122cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_122cdc:
    // 0x122cdc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x122cdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_122ce0:
    // 0x122ce0: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122ce4:
    // 0x122ce4: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x122ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_122ce8:
    // 0x122ce8: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x122ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
label_122cec:
    // 0x122cec: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x122cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_122cf0:
    // 0x122cf0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x122cf0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_122cf4:
    // 0x122cf4: 0xc067b18  jal         func_19EC60
label_122cf8:
    if (ctx->pc == 0x122CF8u) {
        ctx->pc = 0x122CFCu;
        goto label_122cfc;
    }
    ctx->pc = 0x122CF4u;
    SET_GPR_U32(ctx, 31, 0x122CFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x122CF4u, 0x122CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CFCu;
label_122cfc:
    // 0x122cfc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x122cfcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_122d00:
    // 0x122d00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122d04:
    // 0x122d04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122d08:
    // 0x122d08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_122d0c:
    // 0x122d0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x122d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_122d10:
    // 0x122d10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122d14:
    // 0x122d14: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x122d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_122d18:
    // 0x122d18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122d1c:
    // 0x122d1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_122d20:
    // 0x122d20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122d24:
    // 0x122d24: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_122d28:
    // 0x122d28: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122d2c:
    // 0x122d2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_122d30:
    // 0x122d30: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x122d30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_122d34:
    // 0x122d34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x122d34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_122d38:
    // 0x122d38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_122d3c:
    // 0x122d3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_122d40:
    // 0x122d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_122d44:
    // 0x122d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_122d48:
    // 0x122d48: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x122d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_122d4c:
    // 0x122d4c: 0x3e00008  jr          $ra
label_122d50:
    if (ctx->pc == 0x122D50u) {
        ctx->pc = 0x122D54u;
        goto label_fallthrough_0x122d4c;
    }
    ctx->pc = 0x122D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122d4c:
    ctx->pc = 0x122D54u;
}
