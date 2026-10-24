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

// Function: Em19_R1_die_normal
// Address: 0x2e6bd0 - 0x2e7894
void Em19_R1_die_normal_0x2e6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_die_normal_0x2e6bd0");
#endif

    switch (ctx->pc) {
        case 0x2e6bd0u: goto label_2e6bd0;
        case 0x2e6bd4u: goto label_2e6bd4;
        case 0x2e6bd8u: goto label_2e6bd8;
        case 0x2e6bdcu: goto label_2e6bdc;
        case 0x2e6be0u: goto label_2e6be0;
        case 0x2e6be4u: goto label_2e6be4;
        case 0x2e6be8u: goto label_2e6be8;
        case 0x2e6becu: goto label_2e6bec;
        case 0x2e6bf0u: goto label_2e6bf0;
        case 0x2e6bf4u: goto label_2e6bf4;
        case 0x2e6bf8u: goto label_2e6bf8;
        case 0x2e6bfcu: goto label_2e6bfc;
        case 0x2e6c00u: goto label_2e6c00;
        case 0x2e6c04u: goto label_2e6c04;
        case 0x2e6c08u: goto label_2e6c08;
        case 0x2e6c0cu: goto label_2e6c0c;
        case 0x2e6c10u: goto label_2e6c10;
        case 0x2e6c14u: goto label_2e6c14;
        case 0x2e6c18u: goto label_2e6c18;
        case 0x2e6c1cu: goto label_2e6c1c;
        case 0x2e6c20u: goto label_2e6c20;
        case 0x2e6c24u: goto label_2e6c24;
        case 0x2e6c28u: goto label_2e6c28;
        case 0x2e6c2cu: goto label_2e6c2c;
        case 0x2e6c30u: goto label_2e6c30;
        case 0x2e6c34u: goto label_2e6c34;
        case 0x2e6c38u: goto label_2e6c38;
        case 0x2e6c3cu: goto label_2e6c3c;
        case 0x2e6c40u: goto label_2e6c40;
        case 0x2e6c44u: goto label_2e6c44;
        case 0x2e6c48u: goto label_2e6c48;
        case 0x2e6c4cu: goto label_2e6c4c;
        case 0x2e6c50u: goto label_2e6c50;
        case 0x2e6c54u: goto label_2e6c54;
        case 0x2e6c58u: goto label_2e6c58;
        case 0x2e6c5cu: goto label_2e6c5c;
        case 0x2e6c60u: goto label_2e6c60;
        case 0x2e6c64u: goto label_2e6c64;
        case 0x2e6c68u: goto label_2e6c68;
        case 0x2e6c6cu: goto label_2e6c6c;
        case 0x2e6c70u: goto label_2e6c70;
        case 0x2e6c74u: goto label_2e6c74;
        case 0x2e6c78u: goto label_2e6c78;
        case 0x2e6c7cu: goto label_2e6c7c;
        case 0x2e6c80u: goto label_2e6c80;
        case 0x2e6c84u: goto label_2e6c84;
        case 0x2e6c88u: goto label_2e6c88;
        case 0x2e6c8cu: goto label_2e6c8c;
        case 0x2e6c90u: goto label_2e6c90;
        case 0x2e6c94u: goto label_2e6c94;
        case 0x2e6c98u: goto label_2e6c98;
        case 0x2e6c9cu: goto label_2e6c9c;
        case 0x2e6ca0u: goto label_2e6ca0;
        case 0x2e6ca4u: goto label_2e6ca4;
        case 0x2e6ca8u: goto label_2e6ca8;
        case 0x2e6cacu: goto label_2e6cac;
        case 0x2e6cb0u: goto label_2e6cb0;
        case 0x2e6cb4u: goto label_2e6cb4;
        case 0x2e6cb8u: goto label_2e6cb8;
        case 0x2e6cbcu: goto label_2e6cbc;
        case 0x2e6cc0u: goto label_2e6cc0;
        case 0x2e6cc4u: goto label_2e6cc4;
        case 0x2e6cc8u: goto label_2e6cc8;
        case 0x2e6cccu: goto label_2e6ccc;
        case 0x2e6cd0u: goto label_2e6cd0;
        case 0x2e6cd4u: goto label_2e6cd4;
        case 0x2e6cd8u: goto label_2e6cd8;
        case 0x2e6cdcu: goto label_2e6cdc;
        case 0x2e6ce0u: goto label_2e6ce0;
        case 0x2e6ce4u: goto label_2e6ce4;
        case 0x2e6ce8u: goto label_2e6ce8;
        case 0x2e6cecu: goto label_2e6cec;
        case 0x2e6cf0u: goto label_2e6cf0;
        case 0x2e6cf4u: goto label_2e6cf4;
        case 0x2e6cf8u: goto label_2e6cf8;
        case 0x2e6cfcu: goto label_2e6cfc;
        case 0x2e6d00u: goto label_2e6d00;
        case 0x2e6d04u: goto label_2e6d04;
        case 0x2e6d08u: goto label_2e6d08;
        case 0x2e6d0cu: goto label_2e6d0c;
        case 0x2e6d10u: goto label_2e6d10;
        case 0x2e6d14u: goto label_2e6d14;
        case 0x2e6d18u: goto label_2e6d18;
        case 0x2e6d1cu: goto label_2e6d1c;
        case 0x2e6d20u: goto label_2e6d20;
        case 0x2e6d24u: goto label_2e6d24;
        case 0x2e6d28u: goto label_2e6d28;
        case 0x2e6d2cu: goto label_2e6d2c;
        case 0x2e6d30u: goto label_2e6d30;
        case 0x2e6d34u: goto label_2e6d34;
        case 0x2e6d38u: goto label_2e6d38;
        case 0x2e6d3cu: goto label_2e6d3c;
        case 0x2e6d40u: goto label_2e6d40;
        case 0x2e6d44u: goto label_2e6d44;
        case 0x2e6d48u: goto label_2e6d48;
        case 0x2e6d4cu: goto label_2e6d4c;
        case 0x2e6d50u: goto label_2e6d50;
        case 0x2e6d54u: goto label_2e6d54;
        case 0x2e6d58u: goto label_2e6d58;
        case 0x2e6d5cu: goto label_2e6d5c;
        case 0x2e6d60u: goto label_2e6d60;
        case 0x2e6d64u: goto label_2e6d64;
        case 0x2e6d68u: goto label_2e6d68;
        case 0x2e6d6cu: goto label_2e6d6c;
        case 0x2e6d70u: goto label_2e6d70;
        case 0x2e6d74u: goto label_2e6d74;
        case 0x2e6d78u: goto label_2e6d78;
        case 0x2e6d7cu: goto label_2e6d7c;
        case 0x2e6d80u: goto label_2e6d80;
        case 0x2e6d84u: goto label_2e6d84;
        case 0x2e6d88u: goto label_2e6d88;
        case 0x2e6d8cu: goto label_2e6d8c;
        case 0x2e6d90u: goto label_2e6d90;
        case 0x2e6d94u: goto label_2e6d94;
        case 0x2e6d98u: goto label_2e6d98;
        case 0x2e6d9cu: goto label_2e6d9c;
        case 0x2e6da0u: goto label_2e6da0;
        case 0x2e6da4u: goto label_2e6da4;
        case 0x2e6da8u: goto label_2e6da8;
        case 0x2e6dacu: goto label_2e6dac;
        case 0x2e6db0u: goto label_2e6db0;
        case 0x2e6db4u: goto label_2e6db4;
        case 0x2e6db8u: goto label_2e6db8;
        case 0x2e6dbcu: goto label_2e6dbc;
        case 0x2e6dc0u: goto label_2e6dc0;
        case 0x2e6dc4u: goto label_2e6dc4;
        case 0x2e6dc8u: goto label_2e6dc8;
        case 0x2e6dccu: goto label_2e6dcc;
        case 0x2e6dd0u: goto label_2e6dd0;
        case 0x2e6dd4u: goto label_2e6dd4;
        case 0x2e6dd8u: goto label_2e6dd8;
        case 0x2e6ddcu: goto label_2e6ddc;
        case 0x2e6de0u: goto label_2e6de0;
        case 0x2e6de4u: goto label_2e6de4;
        case 0x2e6de8u: goto label_2e6de8;
        case 0x2e6decu: goto label_2e6dec;
        case 0x2e6df0u: goto label_2e6df0;
        case 0x2e6df4u: goto label_2e6df4;
        case 0x2e6df8u: goto label_2e6df8;
        case 0x2e6dfcu: goto label_2e6dfc;
        case 0x2e6e00u: goto label_2e6e00;
        case 0x2e6e04u: goto label_2e6e04;
        case 0x2e6e08u: goto label_2e6e08;
        case 0x2e6e0cu: goto label_2e6e0c;
        case 0x2e6e10u: goto label_2e6e10;
        case 0x2e6e14u: goto label_2e6e14;
        case 0x2e6e18u: goto label_2e6e18;
        case 0x2e6e1cu: goto label_2e6e1c;
        case 0x2e6e20u: goto label_2e6e20;
        case 0x2e6e24u: goto label_2e6e24;
        case 0x2e6e28u: goto label_2e6e28;
        case 0x2e6e2cu: goto label_2e6e2c;
        case 0x2e6e30u: goto label_2e6e30;
        case 0x2e6e34u: goto label_2e6e34;
        case 0x2e6e38u: goto label_2e6e38;
        case 0x2e6e3cu: goto label_2e6e3c;
        case 0x2e6e40u: goto label_2e6e40;
        case 0x2e6e44u: goto label_2e6e44;
        case 0x2e6e48u: goto label_2e6e48;
        case 0x2e6e4cu: goto label_2e6e4c;
        case 0x2e6e50u: goto label_2e6e50;
        case 0x2e6e54u: goto label_2e6e54;
        case 0x2e6e58u: goto label_2e6e58;
        case 0x2e6e5cu: goto label_2e6e5c;
        case 0x2e6e60u: goto label_2e6e60;
        case 0x2e6e64u: goto label_2e6e64;
        case 0x2e6e68u: goto label_2e6e68;
        case 0x2e6e6cu: goto label_2e6e6c;
        case 0x2e6e70u: goto label_2e6e70;
        case 0x2e6e74u: goto label_2e6e74;
        case 0x2e6e78u: goto label_2e6e78;
        case 0x2e6e7cu: goto label_2e6e7c;
        case 0x2e6e80u: goto label_2e6e80;
        case 0x2e6e84u: goto label_2e6e84;
        case 0x2e6e88u: goto label_2e6e88;
        case 0x2e6e8cu: goto label_2e6e8c;
        case 0x2e6e90u: goto label_2e6e90;
        case 0x2e6e94u: goto label_2e6e94;
        case 0x2e6e98u: goto label_2e6e98;
        case 0x2e6e9cu: goto label_2e6e9c;
        case 0x2e6ea0u: goto label_2e6ea0;
        case 0x2e6ea4u: goto label_2e6ea4;
        case 0x2e6ea8u: goto label_2e6ea8;
        case 0x2e6eacu: goto label_2e6eac;
        case 0x2e6eb0u: goto label_2e6eb0;
        case 0x2e6eb4u: goto label_2e6eb4;
        case 0x2e6eb8u: goto label_2e6eb8;
        case 0x2e6ebcu: goto label_2e6ebc;
        case 0x2e6ec0u: goto label_2e6ec0;
        case 0x2e6ec4u: goto label_2e6ec4;
        case 0x2e6ec8u: goto label_2e6ec8;
        case 0x2e6eccu: goto label_2e6ecc;
        case 0x2e6ed0u: goto label_2e6ed0;
        case 0x2e6ed4u: goto label_2e6ed4;
        case 0x2e6ed8u: goto label_2e6ed8;
        case 0x2e6edcu: goto label_2e6edc;
        case 0x2e6ee0u: goto label_2e6ee0;
        case 0x2e6ee4u: goto label_2e6ee4;
        case 0x2e6ee8u: goto label_2e6ee8;
        case 0x2e6eecu: goto label_2e6eec;
        case 0x2e6ef0u: goto label_2e6ef0;
        case 0x2e6ef4u: goto label_2e6ef4;
        case 0x2e6ef8u: goto label_2e6ef8;
        case 0x2e6efcu: goto label_2e6efc;
        case 0x2e6f00u: goto label_2e6f00;
        case 0x2e6f04u: goto label_2e6f04;
        case 0x2e6f08u: goto label_2e6f08;
        case 0x2e6f0cu: goto label_2e6f0c;
        case 0x2e6f10u: goto label_2e6f10;
        case 0x2e6f14u: goto label_2e6f14;
        case 0x2e6f18u: goto label_2e6f18;
        case 0x2e6f1cu: goto label_2e6f1c;
        case 0x2e6f20u: goto label_2e6f20;
        case 0x2e6f24u: goto label_2e6f24;
        case 0x2e6f28u: goto label_2e6f28;
        case 0x2e6f2cu: goto label_2e6f2c;
        case 0x2e6f30u: goto label_2e6f30;
        case 0x2e6f34u: goto label_2e6f34;
        case 0x2e6f38u: goto label_2e6f38;
        case 0x2e6f3cu: goto label_2e6f3c;
        case 0x2e6f40u: goto label_2e6f40;
        case 0x2e6f44u: goto label_2e6f44;
        case 0x2e6f48u: goto label_2e6f48;
        case 0x2e6f4cu: goto label_2e6f4c;
        case 0x2e6f50u: goto label_2e6f50;
        case 0x2e6f54u: goto label_2e6f54;
        case 0x2e6f58u: goto label_2e6f58;
        case 0x2e6f5cu: goto label_2e6f5c;
        case 0x2e6f60u: goto label_2e6f60;
        case 0x2e6f64u: goto label_2e6f64;
        case 0x2e6f68u: goto label_2e6f68;
        case 0x2e6f6cu: goto label_2e6f6c;
        case 0x2e6f70u: goto label_2e6f70;
        case 0x2e6f74u: goto label_2e6f74;
        case 0x2e6f78u: goto label_2e6f78;
        case 0x2e6f7cu: goto label_2e6f7c;
        case 0x2e6f80u: goto label_2e6f80;
        case 0x2e6f84u: goto label_2e6f84;
        case 0x2e6f88u: goto label_2e6f88;
        case 0x2e6f8cu: goto label_2e6f8c;
        case 0x2e6f90u: goto label_2e6f90;
        case 0x2e6f94u: goto label_2e6f94;
        case 0x2e6f98u: goto label_2e6f98;
        case 0x2e6f9cu: goto label_2e6f9c;
        case 0x2e6fa0u: goto label_2e6fa0;
        case 0x2e6fa4u: goto label_2e6fa4;
        case 0x2e6fa8u: goto label_2e6fa8;
        case 0x2e6facu: goto label_2e6fac;
        case 0x2e6fb0u: goto label_2e6fb0;
        case 0x2e6fb4u: goto label_2e6fb4;
        case 0x2e6fb8u: goto label_2e6fb8;
        case 0x2e6fbcu: goto label_2e6fbc;
        case 0x2e6fc0u: goto label_2e6fc0;
        case 0x2e6fc4u: goto label_2e6fc4;
        case 0x2e6fc8u: goto label_2e6fc8;
        case 0x2e6fccu: goto label_2e6fcc;
        case 0x2e6fd0u: goto label_2e6fd0;
        case 0x2e6fd4u: goto label_2e6fd4;
        case 0x2e6fd8u: goto label_2e6fd8;
        case 0x2e6fdcu: goto label_2e6fdc;
        case 0x2e6fe0u: goto label_2e6fe0;
        case 0x2e6fe4u: goto label_2e6fe4;
        case 0x2e6fe8u: goto label_2e6fe8;
        case 0x2e6fecu: goto label_2e6fec;
        case 0x2e6ff0u: goto label_2e6ff0;
        case 0x2e6ff4u: goto label_2e6ff4;
        case 0x2e6ff8u: goto label_2e6ff8;
        case 0x2e6ffcu: goto label_2e6ffc;
        case 0x2e7000u: goto label_2e7000;
        case 0x2e7004u: goto label_2e7004;
        case 0x2e7008u: goto label_2e7008;
        case 0x2e700cu: goto label_2e700c;
        case 0x2e7010u: goto label_2e7010;
        case 0x2e7014u: goto label_2e7014;
        case 0x2e7018u: goto label_2e7018;
        case 0x2e701cu: goto label_2e701c;
        case 0x2e7020u: goto label_2e7020;
        case 0x2e7024u: goto label_2e7024;
        case 0x2e7028u: goto label_2e7028;
        case 0x2e702cu: goto label_2e702c;
        case 0x2e7030u: goto label_2e7030;
        case 0x2e7034u: goto label_2e7034;
        case 0x2e7038u: goto label_2e7038;
        case 0x2e703cu: goto label_2e703c;
        case 0x2e7040u: goto label_2e7040;
        case 0x2e7044u: goto label_2e7044;
        case 0x2e7048u: goto label_2e7048;
        case 0x2e704cu: goto label_2e704c;
        case 0x2e7050u: goto label_2e7050;
        case 0x2e7054u: goto label_2e7054;
        case 0x2e7058u: goto label_2e7058;
        case 0x2e705cu: goto label_2e705c;
        case 0x2e7060u: goto label_2e7060;
        case 0x2e7064u: goto label_2e7064;
        case 0x2e7068u: goto label_2e7068;
        case 0x2e706cu: goto label_2e706c;
        case 0x2e7070u: goto label_2e7070;
        case 0x2e7074u: goto label_2e7074;
        case 0x2e7078u: goto label_2e7078;
        case 0x2e707cu: goto label_2e707c;
        case 0x2e7080u: goto label_2e7080;
        case 0x2e7084u: goto label_2e7084;
        case 0x2e7088u: goto label_2e7088;
        case 0x2e708cu: goto label_2e708c;
        case 0x2e7090u: goto label_2e7090;
        case 0x2e7094u: goto label_2e7094;
        case 0x2e7098u: goto label_2e7098;
        case 0x2e709cu: goto label_2e709c;
        case 0x2e70a0u: goto label_2e70a0;
        case 0x2e70a4u: goto label_2e70a4;
        case 0x2e70a8u: goto label_2e70a8;
        case 0x2e70acu: goto label_2e70ac;
        case 0x2e70b0u: goto label_2e70b0;
        case 0x2e70b4u: goto label_2e70b4;
        case 0x2e70b8u: goto label_2e70b8;
        case 0x2e70bcu: goto label_2e70bc;
        case 0x2e70c0u: goto label_2e70c0;
        case 0x2e70c4u: goto label_2e70c4;
        case 0x2e70c8u: goto label_2e70c8;
        case 0x2e70ccu: goto label_2e70cc;
        case 0x2e70d0u: goto label_2e70d0;
        case 0x2e70d4u: goto label_2e70d4;
        case 0x2e70d8u: goto label_2e70d8;
        case 0x2e70dcu: goto label_2e70dc;
        case 0x2e70e0u: goto label_2e70e0;
        case 0x2e70e4u: goto label_2e70e4;
        case 0x2e70e8u: goto label_2e70e8;
        case 0x2e70ecu: goto label_2e70ec;
        case 0x2e70f0u: goto label_2e70f0;
        case 0x2e70f4u: goto label_2e70f4;
        case 0x2e70f8u: goto label_2e70f8;
        case 0x2e70fcu: goto label_2e70fc;
        case 0x2e7100u: goto label_2e7100;
        case 0x2e7104u: goto label_2e7104;
        case 0x2e7108u: goto label_2e7108;
        case 0x2e710cu: goto label_2e710c;
        case 0x2e7110u: goto label_2e7110;
        case 0x2e7114u: goto label_2e7114;
        case 0x2e7118u: goto label_2e7118;
        case 0x2e711cu: goto label_2e711c;
        case 0x2e7120u: goto label_2e7120;
        case 0x2e7124u: goto label_2e7124;
        case 0x2e7128u: goto label_2e7128;
        case 0x2e712cu: goto label_2e712c;
        case 0x2e7130u: goto label_2e7130;
        case 0x2e7134u: goto label_2e7134;
        case 0x2e7138u: goto label_2e7138;
        case 0x2e713cu: goto label_2e713c;
        case 0x2e7140u: goto label_2e7140;
        case 0x2e7144u: goto label_2e7144;
        case 0x2e7148u: goto label_2e7148;
        case 0x2e714cu: goto label_2e714c;
        case 0x2e7150u: goto label_2e7150;
        case 0x2e7154u: goto label_2e7154;
        case 0x2e7158u: goto label_2e7158;
        case 0x2e715cu: goto label_2e715c;
        case 0x2e7160u: goto label_2e7160;
        case 0x2e7164u: goto label_2e7164;
        case 0x2e7168u: goto label_2e7168;
        case 0x2e716cu: goto label_2e716c;
        case 0x2e7170u: goto label_2e7170;
        case 0x2e7174u: goto label_2e7174;
        case 0x2e7178u: goto label_2e7178;
        case 0x2e717cu: goto label_2e717c;
        case 0x2e7180u: goto label_2e7180;
        case 0x2e7184u: goto label_2e7184;
        case 0x2e7188u: goto label_2e7188;
        case 0x2e718cu: goto label_2e718c;
        case 0x2e7190u: goto label_2e7190;
        case 0x2e7194u: goto label_2e7194;
        case 0x2e7198u: goto label_2e7198;
        case 0x2e719cu: goto label_2e719c;
        case 0x2e71a0u: goto label_2e71a0;
        case 0x2e71a4u: goto label_2e71a4;
        case 0x2e71a8u: goto label_2e71a8;
        case 0x2e71acu: goto label_2e71ac;
        case 0x2e71b0u: goto label_2e71b0;
        case 0x2e71b4u: goto label_2e71b4;
        case 0x2e71b8u: goto label_2e71b8;
        case 0x2e71bcu: goto label_2e71bc;
        case 0x2e71c0u: goto label_2e71c0;
        case 0x2e71c4u: goto label_2e71c4;
        case 0x2e71c8u: goto label_2e71c8;
        case 0x2e71ccu: goto label_2e71cc;
        case 0x2e71d0u: goto label_2e71d0;
        case 0x2e71d4u: goto label_2e71d4;
        case 0x2e71d8u: goto label_2e71d8;
        case 0x2e71dcu: goto label_2e71dc;
        case 0x2e71e0u: goto label_2e71e0;
        case 0x2e71e4u: goto label_2e71e4;
        case 0x2e71e8u: goto label_2e71e8;
        case 0x2e71ecu: goto label_2e71ec;
        case 0x2e71f0u: goto label_2e71f0;
        case 0x2e71f4u: goto label_2e71f4;
        case 0x2e71f8u: goto label_2e71f8;
        case 0x2e71fcu: goto label_2e71fc;
        case 0x2e7200u: goto label_2e7200;
        case 0x2e7204u: goto label_2e7204;
        case 0x2e7208u: goto label_2e7208;
        case 0x2e720cu: goto label_2e720c;
        case 0x2e7210u: goto label_2e7210;
        case 0x2e7214u: goto label_2e7214;
        case 0x2e7218u: goto label_2e7218;
        case 0x2e721cu: goto label_2e721c;
        case 0x2e7220u: goto label_2e7220;
        case 0x2e7224u: goto label_2e7224;
        case 0x2e7228u: goto label_2e7228;
        case 0x2e722cu: goto label_2e722c;
        case 0x2e7230u: goto label_2e7230;
        case 0x2e7234u: goto label_2e7234;
        case 0x2e7238u: goto label_2e7238;
        case 0x2e723cu: goto label_2e723c;
        case 0x2e7240u: goto label_2e7240;
        case 0x2e7244u: goto label_2e7244;
        case 0x2e7248u: goto label_2e7248;
        case 0x2e724cu: goto label_2e724c;
        case 0x2e7250u: goto label_2e7250;
        case 0x2e7254u: goto label_2e7254;
        case 0x2e7258u: goto label_2e7258;
        case 0x2e725cu: goto label_2e725c;
        case 0x2e7260u: goto label_2e7260;
        case 0x2e7264u: goto label_2e7264;
        case 0x2e7268u: goto label_2e7268;
        case 0x2e726cu: goto label_2e726c;
        case 0x2e7270u: goto label_2e7270;
        case 0x2e7274u: goto label_2e7274;
        case 0x2e7278u: goto label_2e7278;
        case 0x2e727cu: goto label_2e727c;
        case 0x2e7280u: goto label_2e7280;
        case 0x2e7284u: goto label_2e7284;
        case 0x2e7288u: goto label_2e7288;
        case 0x2e728cu: goto label_2e728c;
        case 0x2e7290u: goto label_2e7290;
        case 0x2e7294u: goto label_2e7294;
        case 0x2e7298u: goto label_2e7298;
        case 0x2e729cu: goto label_2e729c;
        case 0x2e72a0u: goto label_2e72a0;
        case 0x2e72a4u: goto label_2e72a4;
        case 0x2e72a8u: goto label_2e72a8;
        case 0x2e72acu: goto label_2e72ac;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e72b4u: goto label_2e72b4;
        case 0x2e72b8u: goto label_2e72b8;
        case 0x2e72bcu: goto label_2e72bc;
        case 0x2e72c0u: goto label_2e72c0;
        case 0x2e72c4u: goto label_2e72c4;
        case 0x2e72c8u: goto label_2e72c8;
        case 0x2e72ccu: goto label_2e72cc;
        case 0x2e72d0u: goto label_2e72d0;
        case 0x2e72d4u: goto label_2e72d4;
        case 0x2e72d8u: goto label_2e72d8;
        case 0x2e72dcu: goto label_2e72dc;
        case 0x2e72e0u: goto label_2e72e0;
        case 0x2e72e4u: goto label_2e72e4;
        case 0x2e72e8u: goto label_2e72e8;
        case 0x2e72ecu: goto label_2e72ec;
        case 0x2e72f0u: goto label_2e72f0;
        case 0x2e72f4u: goto label_2e72f4;
        case 0x2e72f8u: goto label_2e72f8;
        case 0x2e72fcu: goto label_2e72fc;
        case 0x2e7300u: goto label_2e7300;
        case 0x2e7304u: goto label_2e7304;
        case 0x2e7308u: goto label_2e7308;
        case 0x2e730cu: goto label_2e730c;
        case 0x2e7310u: goto label_2e7310;
        case 0x2e7314u: goto label_2e7314;
        case 0x2e7318u: goto label_2e7318;
        case 0x2e731cu: goto label_2e731c;
        case 0x2e7320u: goto label_2e7320;
        case 0x2e7324u: goto label_2e7324;
        case 0x2e7328u: goto label_2e7328;
        case 0x2e732cu: goto label_2e732c;
        case 0x2e7330u: goto label_2e7330;
        case 0x2e7334u: goto label_2e7334;
        case 0x2e7338u: goto label_2e7338;
        case 0x2e733cu: goto label_2e733c;
        case 0x2e7340u: goto label_2e7340;
        case 0x2e7344u: goto label_2e7344;
        case 0x2e7348u: goto label_2e7348;
        case 0x2e734cu: goto label_2e734c;
        case 0x2e7350u: goto label_2e7350;
        case 0x2e7354u: goto label_2e7354;
        case 0x2e7358u: goto label_2e7358;
        case 0x2e735cu: goto label_2e735c;
        case 0x2e7360u: goto label_2e7360;
        case 0x2e7364u: goto label_2e7364;
        case 0x2e7368u: goto label_2e7368;
        case 0x2e736cu: goto label_2e736c;
        case 0x2e7370u: goto label_2e7370;
        case 0x2e7374u: goto label_2e7374;
        case 0x2e7378u: goto label_2e7378;
        case 0x2e737cu: goto label_2e737c;
        case 0x2e7380u: goto label_2e7380;
        case 0x2e7384u: goto label_2e7384;
        case 0x2e7388u: goto label_2e7388;
        case 0x2e738cu: goto label_2e738c;
        case 0x2e7390u: goto label_2e7390;
        case 0x2e7394u: goto label_2e7394;
        case 0x2e7398u: goto label_2e7398;
        case 0x2e739cu: goto label_2e739c;
        case 0x2e73a0u: goto label_2e73a0;
        case 0x2e73a4u: goto label_2e73a4;
        case 0x2e73a8u: goto label_2e73a8;
        case 0x2e73acu: goto label_2e73ac;
        case 0x2e73b0u: goto label_2e73b0;
        case 0x2e73b4u: goto label_2e73b4;
        case 0x2e73b8u: goto label_2e73b8;
        case 0x2e73bcu: goto label_2e73bc;
        case 0x2e73c0u: goto label_2e73c0;
        case 0x2e73c4u: goto label_2e73c4;
        case 0x2e73c8u: goto label_2e73c8;
        case 0x2e73ccu: goto label_2e73cc;
        case 0x2e73d0u: goto label_2e73d0;
        case 0x2e73d4u: goto label_2e73d4;
        case 0x2e73d8u: goto label_2e73d8;
        case 0x2e73dcu: goto label_2e73dc;
        case 0x2e73e0u: goto label_2e73e0;
        case 0x2e73e4u: goto label_2e73e4;
        case 0x2e73e8u: goto label_2e73e8;
        case 0x2e73ecu: goto label_2e73ec;
        case 0x2e73f0u: goto label_2e73f0;
        case 0x2e73f4u: goto label_2e73f4;
        case 0x2e73f8u: goto label_2e73f8;
        case 0x2e73fcu: goto label_2e73fc;
        case 0x2e7400u: goto label_2e7400;
        case 0x2e7404u: goto label_2e7404;
        case 0x2e7408u: goto label_2e7408;
        case 0x2e740cu: goto label_2e740c;
        case 0x2e7410u: goto label_2e7410;
        case 0x2e7414u: goto label_2e7414;
        case 0x2e7418u: goto label_2e7418;
        case 0x2e741cu: goto label_2e741c;
        case 0x2e7420u: goto label_2e7420;
        case 0x2e7424u: goto label_2e7424;
        case 0x2e7428u: goto label_2e7428;
        case 0x2e742cu: goto label_2e742c;
        case 0x2e7430u: goto label_2e7430;
        case 0x2e7434u: goto label_2e7434;
        case 0x2e7438u: goto label_2e7438;
        case 0x2e743cu: goto label_2e743c;
        case 0x2e7440u: goto label_2e7440;
        case 0x2e7444u: goto label_2e7444;
        case 0x2e7448u: goto label_2e7448;
        case 0x2e744cu: goto label_2e744c;
        case 0x2e7450u: goto label_2e7450;
        case 0x2e7454u: goto label_2e7454;
        case 0x2e7458u: goto label_2e7458;
        case 0x2e745cu: goto label_2e745c;
        case 0x2e7460u: goto label_2e7460;
        case 0x2e7464u: goto label_2e7464;
        case 0x2e7468u: goto label_2e7468;
        case 0x2e746cu: goto label_2e746c;
        case 0x2e7470u: goto label_2e7470;
        case 0x2e7474u: goto label_2e7474;
        case 0x2e7478u: goto label_2e7478;
        case 0x2e747cu: goto label_2e747c;
        case 0x2e7480u: goto label_2e7480;
        case 0x2e7484u: goto label_2e7484;
        case 0x2e7488u: goto label_2e7488;
        case 0x2e748cu: goto label_2e748c;
        case 0x2e7490u: goto label_2e7490;
        case 0x2e7494u: goto label_2e7494;
        case 0x2e7498u: goto label_2e7498;
        case 0x2e749cu: goto label_2e749c;
        case 0x2e74a0u: goto label_2e74a0;
        case 0x2e74a4u: goto label_2e74a4;
        case 0x2e74a8u: goto label_2e74a8;
        case 0x2e74acu: goto label_2e74ac;
        case 0x2e74b0u: goto label_2e74b0;
        case 0x2e74b4u: goto label_2e74b4;
        case 0x2e74b8u: goto label_2e74b8;
        case 0x2e74bcu: goto label_2e74bc;
        case 0x2e74c0u: goto label_2e74c0;
        case 0x2e74c4u: goto label_2e74c4;
        case 0x2e74c8u: goto label_2e74c8;
        case 0x2e74ccu: goto label_2e74cc;
        case 0x2e74d0u: goto label_2e74d0;
        case 0x2e74d4u: goto label_2e74d4;
        case 0x2e74d8u: goto label_2e74d8;
        case 0x2e74dcu: goto label_2e74dc;
        case 0x2e74e0u: goto label_2e74e0;
        case 0x2e74e4u: goto label_2e74e4;
        case 0x2e74e8u: goto label_2e74e8;
        case 0x2e74ecu: goto label_2e74ec;
        case 0x2e74f0u: goto label_2e74f0;
        case 0x2e74f4u: goto label_2e74f4;
        case 0x2e74f8u: goto label_2e74f8;
        case 0x2e74fcu: goto label_2e74fc;
        case 0x2e7500u: goto label_2e7500;
        case 0x2e7504u: goto label_2e7504;
        case 0x2e7508u: goto label_2e7508;
        case 0x2e750cu: goto label_2e750c;
        case 0x2e7510u: goto label_2e7510;
        case 0x2e7514u: goto label_2e7514;
        case 0x2e7518u: goto label_2e7518;
        case 0x2e751cu: goto label_2e751c;
        case 0x2e7520u: goto label_2e7520;
        case 0x2e7524u: goto label_2e7524;
        case 0x2e7528u: goto label_2e7528;
        case 0x2e752cu: goto label_2e752c;
        case 0x2e7530u: goto label_2e7530;
        case 0x2e7534u: goto label_2e7534;
        case 0x2e7538u: goto label_2e7538;
        case 0x2e753cu: goto label_2e753c;
        case 0x2e7540u: goto label_2e7540;
        case 0x2e7544u: goto label_2e7544;
        case 0x2e7548u: goto label_2e7548;
        case 0x2e754cu: goto label_2e754c;
        case 0x2e7550u: goto label_2e7550;
        case 0x2e7554u: goto label_2e7554;
        case 0x2e7558u: goto label_2e7558;
        case 0x2e755cu: goto label_2e755c;
        case 0x2e7560u: goto label_2e7560;
        case 0x2e7564u: goto label_2e7564;
        case 0x2e7568u: goto label_2e7568;
        case 0x2e756cu: goto label_2e756c;
        case 0x2e7570u: goto label_2e7570;
        case 0x2e7574u: goto label_2e7574;
        case 0x2e7578u: goto label_2e7578;
        case 0x2e757cu: goto label_2e757c;
        case 0x2e7580u: goto label_2e7580;
        case 0x2e7584u: goto label_2e7584;
        case 0x2e7588u: goto label_2e7588;
        case 0x2e758cu: goto label_2e758c;
        case 0x2e7590u: goto label_2e7590;
        case 0x2e7594u: goto label_2e7594;
        case 0x2e7598u: goto label_2e7598;
        case 0x2e759cu: goto label_2e759c;
        case 0x2e75a0u: goto label_2e75a0;
        case 0x2e75a4u: goto label_2e75a4;
        case 0x2e75a8u: goto label_2e75a8;
        case 0x2e75acu: goto label_2e75ac;
        case 0x2e75b0u: goto label_2e75b0;
        case 0x2e75b4u: goto label_2e75b4;
        case 0x2e75b8u: goto label_2e75b8;
        case 0x2e75bcu: goto label_2e75bc;
        case 0x2e75c0u: goto label_2e75c0;
        case 0x2e75c4u: goto label_2e75c4;
        case 0x2e75c8u: goto label_2e75c8;
        case 0x2e75ccu: goto label_2e75cc;
        case 0x2e75d0u: goto label_2e75d0;
        case 0x2e75d4u: goto label_2e75d4;
        case 0x2e75d8u: goto label_2e75d8;
        case 0x2e75dcu: goto label_2e75dc;
        case 0x2e75e0u: goto label_2e75e0;
        case 0x2e75e4u: goto label_2e75e4;
        case 0x2e75e8u: goto label_2e75e8;
        case 0x2e75ecu: goto label_2e75ec;
        case 0x2e75f0u: goto label_2e75f0;
        case 0x2e75f4u: goto label_2e75f4;
        case 0x2e75f8u: goto label_2e75f8;
        case 0x2e75fcu: goto label_2e75fc;
        case 0x2e7600u: goto label_2e7600;
        case 0x2e7604u: goto label_2e7604;
        case 0x2e7608u: goto label_2e7608;
        case 0x2e760cu: goto label_2e760c;
        case 0x2e7610u: goto label_2e7610;
        case 0x2e7614u: goto label_2e7614;
        case 0x2e7618u: goto label_2e7618;
        case 0x2e761cu: goto label_2e761c;
        case 0x2e7620u: goto label_2e7620;
        case 0x2e7624u: goto label_2e7624;
        case 0x2e7628u: goto label_2e7628;
        case 0x2e762cu: goto label_2e762c;
        case 0x2e7630u: goto label_2e7630;
        case 0x2e7634u: goto label_2e7634;
        case 0x2e7638u: goto label_2e7638;
        case 0x2e763cu: goto label_2e763c;
        case 0x2e7640u: goto label_2e7640;
        case 0x2e7644u: goto label_2e7644;
        case 0x2e7648u: goto label_2e7648;
        case 0x2e764cu: goto label_2e764c;
        case 0x2e7650u: goto label_2e7650;
        case 0x2e7654u: goto label_2e7654;
        case 0x2e7658u: goto label_2e7658;
        case 0x2e765cu: goto label_2e765c;
        case 0x2e7660u: goto label_2e7660;
        case 0x2e7664u: goto label_2e7664;
        case 0x2e7668u: goto label_2e7668;
        case 0x2e766cu: goto label_2e766c;
        case 0x2e7670u: goto label_2e7670;
        case 0x2e7674u: goto label_2e7674;
        case 0x2e7678u: goto label_2e7678;
        case 0x2e767cu: goto label_2e767c;
        case 0x2e7680u: goto label_2e7680;
        case 0x2e7684u: goto label_2e7684;
        case 0x2e7688u: goto label_2e7688;
        case 0x2e768cu: goto label_2e768c;
        case 0x2e7690u: goto label_2e7690;
        case 0x2e7694u: goto label_2e7694;
        case 0x2e7698u: goto label_2e7698;
        case 0x2e769cu: goto label_2e769c;
        case 0x2e76a0u: goto label_2e76a0;
        case 0x2e76a4u: goto label_2e76a4;
        case 0x2e76a8u: goto label_2e76a8;
        case 0x2e76acu: goto label_2e76ac;
        case 0x2e76b0u: goto label_2e76b0;
        case 0x2e76b4u: goto label_2e76b4;
        case 0x2e76b8u: goto label_2e76b8;
        case 0x2e76bcu: goto label_2e76bc;
        case 0x2e76c0u: goto label_2e76c0;
        case 0x2e76c4u: goto label_2e76c4;
        case 0x2e76c8u: goto label_2e76c8;
        case 0x2e76ccu: goto label_2e76cc;
        case 0x2e76d0u: goto label_2e76d0;
        case 0x2e76d4u: goto label_2e76d4;
        case 0x2e76d8u: goto label_2e76d8;
        case 0x2e76dcu: goto label_2e76dc;
        case 0x2e76e0u: goto label_2e76e0;
        case 0x2e76e4u: goto label_2e76e4;
        case 0x2e76e8u: goto label_2e76e8;
        case 0x2e76ecu: goto label_2e76ec;
        case 0x2e76f0u: goto label_2e76f0;
        case 0x2e76f4u: goto label_2e76f4;
        case 0x2e76f8u: goto label_2e76f8;
        case 0x2e76fcu: goto label_2e76fc;
        case 0x2e7700u: goto label_2e7700;
        case 0x2e7704u: goto label_2e7704;
        case 0x2e7708u: goto label_2e7708;
        case 0x2e770cu: goto label_2e770c;
        case 0x2e7710u: goto label_2e7710;
        case 0x2e7714u: goto label_2e7714;
        case 0x2e7718u: goto label_2e7718;
        case 0x2e771cu: goto label_2e771c;
        case 0x2e7720u: goto label_2e7720;
        case 0x2e7724u: goto label_2e7724;
        case 0x2e7728u: goto label_2e7728;
        case 0x2e772cu: goto label_2e772c;
        case 0x2e7730u: goto label_2e7730;
        case 0x2e7734u: goto label_2e7734;
        case 0x2e7738u: goto label_2e7738;
        case 0x2e773cu: goto label_2e773c;
        case 0x2e7740u: goto label_2e7740;
        case 0x2e7744u: goto label_2e7744;
        case 0x2e7748u: goto label_2e7748;
        case 0x2e774cu: goto label_2e774c;
        case 0x2e7750u: goto label_2e7750;
        case 0x2e7754u: goto label_2e7754;
        case 0x2e7758u: goto label_2e7758;
        case 0x2e775cu: goto label_2e775c;
        case 0x2e7760u: goto label_2e7760;
        case 0x2e7764u: goto label_2e7764;
        case 0x2e7768u: goto label_2e7768;
        case 0x2e776cu: goto label_2e776c;
        case 0x2e7770u: goto label_2e7770;
        case 0x2e7774u: goto label_2e7774;
        case 0x2e7778u: goto label_2e7778;
        case 0x2e777cu: goto label_2e777c;
        case 0x2e7780u: goto label_2e7780;
        case 0x2e7784u: goto label_2e7784;
        case 0x2e7788u: goto label_2e7788;
        case 0x2e778cu: goto label_2e778c;
        case 0x2e7790u: goto label_2e7790;
        case 0x2e7794u: goto label_2e7794;
        case 0x2e7798u: goto label_2e7798;
        case 0x2e779cu: goto label_2e779c;
        case 0x2e77a0u: goto label_2e77a0;
        case 0x2e77a4u: goto label_2e77a4;
        case 0x2e77a8u: goto label_2e77a8;
        case 0x2e77acu: goto label_2e77ac;
        case 0x2e77b0u: goto label_2e77b0;
        case 0x2e77b4u: goto label_2e77b4;
        case 0x2e77b8u: goto label_2e77b8;
        case 0x2e77bcu: goto label_2e77bc;
        case 0x2e77c0u: goto label_2e77c0;
        case 0x2e77c4u: goto label_2e77c4;
        case 0x2e77c8u: goto label_2e77c8;
        case 0x2e77ccu: goto label_2e77cc;
        case 0x2e77d0u: goto label_2e77d0;
        case 0x2e77d4u: goto label_2e77d4;
        case 0x2e77d8u: goto label_2e77d8;
        case 0x2e77dcu: goto label_2e77dc;
        case 0x2e77e0u: goto label_2e77e0;
        case 0x2e77e4u: goto label_2e77e4;
        case 0x2e77e8u: goto label_2e77e8;
        case 0x2e77ecu: goto label_2e77ec;
        case 0x2e77f0u: goto label_2e77f0;
        case 0x2e77f4u: goto label_2e77f4;
        case 0x2e77f8u: goto label_2e77f8;
        case 0x2e77fcu: goto label_2e77fc;
        case 0x2e7800u: goto label_2e7800;
        case 0x2e7804u: goto label_2e7804;
        case 0x2e7808u: goto label_2e7808;
        case 0x2e780cu: goto label_2e780c;
        case 0x2e7810u: goto label_2e7810;
        case 0x2e7814u: goto label_2e7814;
        case 0x2e7818u: goto label_2e7818;
        case 0x2e781cu: goto label_2e781c;
        case 0x2e7820u: goto label_2e7820;
        case 0x2e7824u: goto label_2e7824;
        case 0x2e7828u: goto label_2e7828;
        case 0x2e782cu: goto label_2e782c;
        case 0x2e7830u: goto label_2e7830;
        case 0x2e7834u: goto label_2e7834;
        case 0x2e7838u: goto label_2e7838;
        case 0x2e783cu: goto label_2e783c;
        case 0x2e7840u: goto label_2e7840;
        case 0x2e7844u: goto label_2e7844;
        case 0x2e7848u: goto label_2e7848;
        case 0x2e784cu: goto label_2e784c;
        case 0x2e7850u: goto label_2e7850;
        case 0x2e7854u: goto label_2e7854;
        case 0x2e7858u: goto label_2e7858;
        case 0x2e785cu: goto label_2e785c;
        case 0x2e7860u: goto label_2e7860;
        case 0x2e7864u: goto label_2e7864;
        case 0x2e7868u: goto label_2e7868;
        case 0x2e786cu: goto label_2e786c;
        case 0x2e7870u: goto label_2e7870;
        case 0x2e7874u: goto label_2e7874;
        case 0x2e7878u: goto label_2e7878;
        case 0x2e787cu: goto label_2e787c;
        case 0x2e7880u: goto label_2e7880;
        case 0x2e7884u: goto label_2e7884;
        case 0x2e7888u: goto label_2e7888;
        case 0x2e788cu: goto label_2e788c;
        case 0x2e7890u: goto label_2e7890;
        default: break;
    }

    ctx->pc = 0x2e6bd0u;

label_2e6bd0:
    // 0x2e6bd0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e6bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2e6bd4:
    // 0x2e6bd4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x2e6bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_2e6bd8:
    // 0x2e6bd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e6bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e6bdc:
    // 0x2e6bdc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e6bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e6be0:
    // 0x2e6be0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e6be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e6be4:
    // 0x2e6be4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e6be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e6be8:
    // 0x2e6be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e6bec:
    // 0x2e6bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e6bf0:
    // 0x2e6bf0: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
label_2e6bf4:
    // 0x2e6bf4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6bf8:
    // 0x2e6bf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2e6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2e6bfc:
    // 0x2e6bfc: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x2e6bfcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2e6c00:
    // 0x2e6c00: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6c04:
    // 0x2e6c04: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_2e6c08:
    // 0x2e6c08: 0x24642710  addiu       $a0, $v1, 0x2710
    ctx->pc = 0x2e6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
label_2e6c0c:
    // 0x2e6c0c: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2e6c0cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2e6c10:
    // 0x2e6c10: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6c14:
    // 0x2e6c14: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e6c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2e6c18:
    // 0x2e6c18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e6c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e6c1c:
    // 0x2e6c1c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x2e6c1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2e6c20:
    // 0x2e6c20: 0x1020030e  beqz        $at, . + 4 + (0x30E << 2)
label_2e6c24:
    if (ctx->pc == 0x2E6C24u) {
        ctx->pc = 0x2E6C28u;
        goto label_2e6c28;
    }
    ctx->pc = 0x2E6C20u;
    {
        const bool branch_taken_0x2e6c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c20) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E6C28u;
label_2e6c28:
    // 0x2e6c28: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2e6c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_2e6c2c:
    // 0x2e6c2c: 0x24a41a50  addiu       $a0, $a1, 0x1A50
    ctx->pc = 0x2e6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
label_2e6c30:
    // 0x2e6c30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e6c34:
    // 0x2e6c34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e6c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e6c38:
    // 0x2e6c38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e6c3c:
    // 0x2e6c3c: 0x600008  jr          $v1
label_2e6c40:
    if (ctx->pc == 0x2E6C40u) {
        ctx->pc = 0x2E6C44u;
        goto label_2e6c44;
    }
    ctx->pc = 0x2E6C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6C3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E6C44u;
label_2e6c44:
    // 0x2e6c44: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6c48:
    // 0x2e6c48: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6c4c:
    // 0x2e6c4c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2e6c50:
    // 0x2e6c50: 0x24060504  addiu       $a2, $zero, 0x504
    ctx->pc = 0x2e6c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
label_2e6c54:
    // 0x2e6c54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6c58:
    // 0x2e6c58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e6c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2e6c5c:
    // 0x2e6c5c: 0xc0965d0  jal         func_259740
label_2e6c60:
    if (ctx->pc == 0x2E6C60u) {
        ctx->pc = 0x2E6C64u;
        goto label_2e6c64;
    }
    ctx->pc = 0x2E6C5Cu;
    SET_GPR_U32(ctx, 31, 0x2E6C64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E6C5Cu, 0x2E6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C64u;
label_2e6c64:
    // 0x2e6c64: 0x3c0241b4  lui         $v0, 0x41B4
    ctx->pc = 0x2e6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16820 << 16));
label_2e6c68:
    // 0x2e6c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6c6c:
    // 0x2e6c6c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6c70:
    // 0x2e6c70: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e6c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2e6c74:
    // 0x2e6c74: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2e6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
label_2e6c78:
    // 0x2e6c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6c7c:
    // 0x2e6c7c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6c80:
    // 0x2e6c80: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e6c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2e6c84:
    // 0x2e6c84: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6c88:
    // 0x2e6c88: 0x245510b0  addiu       $s5, $v0, 0x10B0
    ctx->pc = 0x2e6c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_2e6c8c:
    // 0x2e6c8c: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x2e6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_2e6c90:
    // 0x2e6c90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e6c94:
    // 0x2e6c94: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2e6c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e6c98:
    // 0x2e6c98: 0xaea400f0  sw          $a0, 0xF0($s5)
    ctx->pc = 0x2e6c98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 4));
label_2e6c9c:
    // 0x2e6c9c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2e6c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2e6ca0:
    // 0x2e6ca0: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x2e6ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6ca4:
    // 0x2e6ca4: 0xa0e610a8  sb          $a2, 0x10A8($a3)
    ctx->pc = 0x2e6ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4264), (uint8_t)GPR_U32(ctx, 6));
label_2e6ca8:
    // 0x2e6ca8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e6ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6cac:
    // 0x2e6cac: 0x8fa900e8  lw          $t1, 0xE8($sp)
    ctx->pc = 0x2e6cacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6cb0:
    // 0x2e6cb0: 0xa52810a6  sh          $t0, 0x10A6($t1)
    ctx->pc = 0x2e6cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4262), (uint16_t)GPR_U32(ctx, 8));
label_2e6cb4:
    // 0x2e6cb4: 0x8faa00e8  lw          $t2, 0xE8($sp)
    ctx->pc = 0x2e6cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6cb8:
    // 0x2e6cb8: 0x91420002  lbu         $v0, 0x2($t2)
    ctx->pc = 0x2e6cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
label_2e6cbc:
    // 0x2e6cbc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2e6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e6cc0:
    // 0x2e6cc0: 0xa1430002  sb          $v1, 0x2($t2)
    ctx->pc = 0x2e6cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 3));
label_2e6cc4:
    // 0x2e6cc4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6cc8:
    // 0x2e6cc8: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2e6cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6ccc:
    // 0x2e6ccc: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x2e6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_2e6cd0:
    // 0x2e6cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e6cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6cd4:
    // 0x2e6cd4: 0x0  nop
    ctx->pc = 0x2e6cd4u;
    // NOP
label_2e6cd8:
    // 0x2e6cd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e6cdc:
    // 0x2e6cdc: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2e6cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_2e6ce0:
    // 0x2e6ce0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6ce4:
    // 0x2e6ce4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_2e6ce8:
    // 0x2e6ce8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e6ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2e6cec:
    // 0x2e6cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e6cf0:
    // 0x2e6cf0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6cf4:
    // 0x2e6cf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e6cf8:
    // 0x2e6cf8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_2e6cfc:
    // 0x2e6cfc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6d00:
    // 0x2e6d00: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x2e6d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6d04:
    // 0x2e6d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6d08:
    // 0x2e6d08: 0x0  nop
    ctx->pc = 0x2e6d08u;
    // NOP
label_2e6d0c:
    // 0x2e6d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6d10:
    // 0x2e6d10: 0x0  nop
    ctx->pc = 0x2e6d10u;
    // NOP
label_2e6d14:
    // 0x2e6d14: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_2e6d18:
    if (ctx->pc == 0x2E6D18u) {
        ctx->pc = 0x2E6D1Cu;
        goto label_2e6d1c;
    }
    ctx->pc = 0x2E6D14u;
    {
        const bool branch_taken_0x2e6d14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6d14) {
            ctx->pc = 0x2E6D54u;
            goto label_2e6d54;
        }
    }
    ctx->pc = 0x2E6D1Cu;
label_2e6d1c:
    // 0x2e6d1c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6d20:
    // 0x2e6d20: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x2e6d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6d24:
    // 0x2e6d24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e6d28:
    // 0x2e6d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6d2c:
    // 0x2e6d2c: 0x0  nop
    ctx->pc = 0x2e6d2cu;
    // NOP
label_2e6d30:
    // 0x2e6d30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6d34:
    // 0x2e6d34: 0x0  nop
    ctx->pc = 0x2e6d34u;
    // NOP
label_2e6d38:
    // 0x2e6d38: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2e6d3c:
    if (ctx->pc == 0x2E6D3Cu) {
        ctx->pc = 0x2E6D40u;
        goto label_2e6d40;
    }
    ctx->pc = 0x2E6D38u;
    {
        const bool branch_taken_0x2e6d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6d38) {
            ctx->pc = 0x2E6D84u;
            goto label_2e6d84;
        }
    }
    ctx->pc = 0x2E6D40u;
label_2e6d40:
    // 0x2e6d40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6d44:
    // 0x2e6d44: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6d48:
    // 0x2e6d48: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_2e6d4c:
    // 0x2e6d4c: 0x1000000d  b           . + 4 + (0xD << 2)
label_2e6d50:
    if (ctx->pc == 0x2E6D50u) {
        ctx->pc = 0x2E6D54u;
        goto label_2e6d54;
    }
    ctx->pc = 0x2E6D4Cu;
    {
        const bool branch_taken_0x2e6d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d4c) {
            ctx->pc = 0x2E6D84u;
            goto label_2e6d84;
        }
    }
    ctx->pc = 0x2E6D54u;
label_2e6d54:
    // 0x2e6d54: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6d58:
    // 0x2e6d58: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2e6d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6d5c:
    // 0x2e6d5c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2e6d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_2e6d60:
    // 0x2e6d60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e6d60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6d64:
    // 0x2e6d64: 0x0  nop
    ctx->pc = 0x2e6d64u;
    // NOP
label_2e6d68:
    // 0x2e6d68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6d68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6d6c:
    // 0x2e6d6c: 0x0  nop
    ctx->pc = 0x2e6d6cu;
    // NOP
label_2e6d70:
    // 0x2e6d70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2e6d74:
    if (ctx->pc == 0x2E6D74u) {
        ctx->pc = 0x2E6D78u;
        goto label_2e6d78;
    }
    ctx->pc = 0x2E6D70u;
    {
        const bool branch_taken_0x2e6d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6d70) {
            ctx->pc = 0x2E6D84u;
            goto label_2e6d84;
        }
    }
    ctx->pc = 0x2E6D78u;
label_2e6d78:
    // 0x2e6d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6d7c:
    // 0x2e6d7c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6d80:
    // 0x2e6d80: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_2e6d84:
    // 0x2e6d84: 0x3c043ec9  lui         $a0, 0x3EC9
    ctx->pc = 0x2e6d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16073 << 16));
label_2e6d88:
    // 0x2e6d88: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2e6d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_2e6d8c:
    // 0x2e6d8c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2e6d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2e6d90:
    // 0x2e6d90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6d94:
    // 0x2e6d94: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6d98:
    // 0x2e6d98: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x2e6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e6d9c:
    // 0x2e6d9c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2e6d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2e6da0:
    // 0x2e6da0: 0xc058f50  jal         func_163D40
label_2e6da4:
    if (ctx->pc == 0x2E6DA4u) {
        ctx->pc = 0x2E6DA8u;
        goto label_2e6da8;
    }
    ctx->pc = 0x2E6DA0u;
    SET_GPR_U32(ctx, 31, 0x2E6DA8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E6DA0u, 0x2E6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DA8u;
label_2e6da8:
    // 0x2e6da8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6dac:
    // 0x2e6dac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e6dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2e6db0:
    // 0x2e6db0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6db4:
    // 0x2e6db4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e6db8:
    // 0x2e6db8: 0xc096b40  jal         func_25AD00
label_2e6dbc:
    if (ctx->pc == 0x2E6DBCu) {
        ctx->pc = 0x2E6DC0u;
        goto label_2e6dc0;
    }
    ctx->pc = 0x2E6DB8u;
    SET_GPR_U32(ctx, 31, 0x2E6DC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E6DB8u, 0x2E6DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DC0u;
label_2e6dc0:
    // 0x2e6dc0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e6dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6dc4:
    // 0x2e6dc4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6dc8:
    // 0x2e6dc8: 0xc4ac11f8  lwc1        $f12, 0x11F8($a1)
    ctx->pc = 0x2e6dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e6dcc:
    // 0x2e6dcc: 0xc05cd58  jal         func_173560
label_2e6dd0:
    if (ctx->pc == 0x2E6DD0u) {
        ctx->pc = 0x2E6DD4u;
        goto label_2e6dd4;
    }
    ctx->pc = 0x2E6DCCu;
    SET_GPR_U32(ctx, 31, 0x2E6DD4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2E6DCCu, 0x2E6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DD4u;
label_2e6dd4:
    // 0x2e6dd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e6dd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e6dd8:
    // 0x2e6dd8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6ddc:
    // 0x2e6ddc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e6de0:
    // 0x2e6de0: 0xc05cec4  jal         func_173B10
label_2e6de4:
    if (ctx->pc == 0x2E6DE4u) {
        ctx->pc = 0x2E6DE8u;
        goto label_2e6de8;
    }
    ctx->pc = 0x2E6DE0u;
    SET_GPR_U32(ctx, 31, 0x2E6DE8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E6DE0u, 0x2E6DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DE8u;
label_2e6de8:
    // 0x2e6de8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2e6de8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e6dec:
    // 0x2e6dec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6df0:
    // 0x2e6df0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6df4:
    // 0x2e6df4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2e6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_2e6df8:
    // 0x2e6df8: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x2e6df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_2e6dfc:
    // 0x2e6dfc: 0xc05cf7c  jal         func_173DF0
label_2e6e00:
    if (ctx->pc == 0x2E6E00u) {
        ctx->pc = 0x2E6E04u;
        goto label_2e6e04;
    }
    ctx->pc = 0x2E6DFCu;
    SET_GPR_U32(ctx, 31, 0x2E6E04u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E6DFCu, 0x2E6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E04u;
label_2e6e04:
    // 0x2e6e04: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e6e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2e6e08:
    // 0x2e6e08: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x2e6e08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6e0c:
    // 0x2e6e0c: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x2e6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6e10:
    // 0x2e6e10: 0x8fb100e8  lw          $s1, 0xE8($sp)
    ctx->pc = 0x2e6e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6e14:
    // 0x2e6e14: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x2e6e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6e18:
    // 0x2e6e18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e6e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e6e1c:
    // 0x2e6e1c: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x2e6e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
label_2e6e20:
    // 0x2e6e20: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6e24:
    // 0x2e6e24: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2e6e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e6e28:
    // 0x2e6e28: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_2e6e2c:
    // 0x2e6e2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e6e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e6e30:
    // 0x2e6e30: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e6e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6e34:
    // 0x2e6e34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e6e38:
    // 0x2e6e38: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e6e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6e3c:
    // 0x2e6e3c: 0x0  nop
    ctx->pc = 0x2e6e3cu;
    // NOP
label_2e6e40:
    // 0x2e6e40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2e6e44:
    if (ctx->pc == 0x2E6E44u) {
        ctx->pc = 0x2E6E48u;
        goto label_2e6e48;
    }
    ctx->pc = 0x2E6E40u;
    {
        const bool branch_taken_0x2e6e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6e40) {
            ctx->pc = 0x2E6E60u;
            goto label_2e6e60;
        }
    }
    ctx->pc = 0x2E6E48u;
label_2e6e48:
    // 0x2e6e48: 0x3c1042c8  lui         $s0, 0x42C8
    ctx->pc = 0x2e6e48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17096 << 16));
label_2e6e4c:
    // 0x2e6e4c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2e6e4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e6e50:
    // 0x2e6e50: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e6e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6e54:
    // 0x2e6e54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e6e58:
    // 0x2e6e58: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6e5c:
    // 0x2e6e5c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2e6e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_2e6e60:
    // 0x2e6e60: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6e64:
    // 0x2e6e64: 0xc0974dc  jal         func_25D370
label_2e6e68:
    if (ctx->pc == 0x2E6E68u) {
        ctx->pc = 0x2E6E6Cu;
        goto label_2e6e6c;
    }
    ctx->pc = 0x2E6E64u;
    SET_GPR_U32(ctx, 31, 0x2E6E6Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E6E64u, 0x2E6E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E6Cu;
label_2e6e6c:
    // 0x2e6e6c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2e6e6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e6e70:
    // 0x2e6e70: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6e74:
    // 0x2e6e74: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x2e6e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_2e6e78:
    // 0x2e6e78: 0x10600278  beqz        $v1, . + 4 + (0x278 << 2)
label_2e6e7c:
    if (ctx->pc == 0x2E6E7Cu) {
        ctx->pc = 0x2E6E80u;
        goto label_2e6e80;
    }
    ctx->pc = 0x2E6E78u;
    {
        const bool branch_taken_0x2e6e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e78) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E6E80u;
label_2e6e80:
    // 0x2e6e80: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6e84:
    // 0x2e6e84: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e6e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2e6e88:
    // 0x2e6e88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e6e8c:
    // 0x2e6e8c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2e6e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2e6e90:
    // 0x2e6e90: 0x10000272  b           . + 4 + (0x272 << 2)
label_2e6e94:
    if (ctx->pc == 0x2E6E94u) {
        ctx->pc = 0x2E6E98u;
        goto label_2e6e98;
    }
    ctx->pc = 0x2E6E90u;
    {
        const bool branch_taken_0x2e6e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e90) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E6E98u;
label_2e6e98:
    // 0x2e6e98: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x2e6e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6e9c:
    // 0x2e6e9c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6ea0:
    // 0x2e6ea0: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x2e6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_2e6ea4:
    // 0x2e6ea4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2e6ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e6ea8:
    // 0x2e6ea8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6eac:
    // 0x2e6eac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e6eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2e6eb0:
    // 0x2e6eb0: 0xc0965d0  jal         func_259740
label_2e6eb4:
    if (ctx->pc == 0x2E6EB4u) {
        ctx->pc = 0x2E6EB8u;
        goto label_2e6eb8;
    }
    ctx->pc = 0x2E6EB0u;
    SET_GPR_U32(ctx, 31, 0x2E6EB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E6EB0u, 0x2E6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EB8u;
label_2e6eb8:
    // 0x2e6eb8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6ebc:
    // 0x2e6ebc: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2e6ebcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e6ec0:
    // 0x2e6ec0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2e6ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e6ec4:
    // 0x2e6ec4: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x2e6ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_2e6ec8:
    // 0x2e6ec8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6ecc:
    // 0x2e6ecc: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e6eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6ed0:
    // 0x2e6ed0: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x2e6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
label_2e6ed4:
    // 0x2e6ed4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e6ed4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6ed8:
    // 0x2e6ed8: 0x0  nop
    ctx->pc = 0x2e6ed8u;
    // NOP
label_2e6edc:
    // 0x2e6edc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e6ee0:
    // 0x2e6ee0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e6ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2e6ee4:
    // 0x2e6ee4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6ee8:
    // 0x2e6ee8: 0x3c043f73  lui         $a0, 0x3F73
    ctx->pc = 0x2e6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16243 << 16));
label_2e6eec:
    // 0x2e6eec: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2e6eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
label_2e6ef0:
    // 0x2e6ef0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e6ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e6ef4:
    // 0x2e6ef4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2e6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6ef8:
    // 0x2e6ef8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e6efc:
    // 0x2e6efc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e6efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2e6f00:
    // 0x2e6f00: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e6f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6f04:
    // 0x2e6f04: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x2e6f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6f08:
    // 0x2e6f08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6f0c:
    // 0x2e6f0c: 0x0  nop
    ctx->pc = 0x2e6f0cu;
    // NOP
label_2e6f10:
    // 0x2e6f10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6f10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6f14:
    // 0x2e6f14: 0x0  nop
    ctx->pc = 0x2e6f14u;
    // NOP
label_2e6f18:
    // 0x2e6f18: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_2e6f1c:
    if (ctx->pc == 0x2E6F1Cu) {
        ctx->pc = 0x2E6F20u;
        goto label_2e6f20;
    }
    ctx->pc = 0x2E6F18u;
    {
        const bool branch_taken_0x2e6f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6f18) {
            ctx->pc = 0x2E6F58u;
            goto label_2e6f58;
        }
    }
    ctx->pc = 0x2E6F20u;
label_2e6f20:
    // 0x2e6f20: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6f24:
    // 0x2e6f24: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e6f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6f28:
    // 0x2e6f28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2e6f2c:
    // 0x2e6f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e6f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6f30:
    // 0x2e6f30: 0x0  nop
    ctx->pc = 0x2e6f30u;
    // NOP
label_2e6f34:
    // 0x2e6f34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6f38:
    // 0x2e6f38: 0x0  nop
    ctx->pc = 0x2e6f38u;
    // NOP
label_2e6f3c:
    // 0x2e6f3c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2e6f40:
    if (ctx->pc == 0x2E6F40u) {
        ctx->pc = 0x2E6F44u;
        goto label_2e6f44;
    }
    ctx->pc = 0x2E6F3Cu;
    {
        const bool branch_taken_0x2e6f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6f3c) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6F44u;
label_2e6f44:
    // 0x2e6f44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6f48:
    // 0x2e6f48: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6f4c:
    // 0x2e6f4c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_2e6f50:
    // 0x2e6f50: 0x1000000d  b           . + 4 + (0xD << 2)
label_2e6f54:
    if (ctx->pc == 0x2E6F54u) {
        ctx->pc = 0x2E6F58u;
        goto label_2e6f58;
    }
    ctx->pc = 0x2E6F50u;
    {
        const bool branch_taken_0x2e6f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f50) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6F58u;
label_2e6f58:
    // 0x2e6f58: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6f5c:
    // 0x2e6f5c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2e6f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6f60:
    // 0x2e6f60: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x2e6f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_2e6f64:
    // 0x2e6f64: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e6f64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6f68:
    // 0x2e6f68: 0x0  nop
    ctx->pc = 0x2e6f68u;
    // NOP
label_2e6f6c:
    // 0x2e6f6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6f6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6f70:
    // 0x2e6f70: 0x0  nop
    ctx->pc = 0x2e6f70u;
    // NOP
label_2e6f74:
    // 0x2e6f74: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2e6f78:
    if (ctx->pc == 0x2E6F78u) {
        ctx->pc = 0x2E6F7Cu;
        goto label_2e6f7c;
    }
    ctx->pc = 0x2E6F74u;
    {
        const bool branch_taken_0x2e6f74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6f74) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6F7Cu;
label_2e6f7c:
    // 0x2e6f7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6f80:
    // 0x2e6f80: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6f84:
    // 0x2e6f84: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2e6f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_2e6f88:
    // 0x2e6f88: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6f8c:
    // 0x2e6f8c: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2e6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6f90:
    // 0x2e6f90: 0x3c053e49  lui         $a1, 0x3E49
    ctx->pc = 0x2e6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15945 << 16));
label_2e6f94:
    // 0x2e6f94: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x2e6f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_2e6f98:
    // 0x2e6f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e6f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6f9c:
    // 0x2e6f9c: 0x0  nop
    ctx->pc = 0x2e6f9cu;
    // NOP
label_2e6fa0:
    // 0x2e6fa0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2e6fa0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e6fa4:
    // 0x2e6fa4: 0xc058fec  jal         func_163FB0
label_2e6fa8:
    if (ctx->pc == 0x2E6FA8u) {
        ctx->pc = 0x2E6FACu;
        goto label_2e6fac;
    }
    ctx->pc = 0x2E6FA4u;
    SET_GPR_U32(ctx, 31, 0x2E6FACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E6FA4u, 0x2E6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FACu;
label_2e6fac:
    // 0x2e6fac: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6fb0:
    // 0x2e6fb0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2e6fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_2e6fb4:
    // 0x2e6fb4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6fb8:
    // 0x2e6fb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e6fbc:
    // 0x2e6fbc: 0xc096b40  jal         func_25AD00
label_2e6fc0:
    if (ctx->pc == 0x2E6FC0u) {
        ctx->pc = 0x2E6FC4u;
        goto label_2e6fc4;
    }
    ctx->pc = 0x2E6FBCu;
    SET_GPR_U32(ctx, 31, 0x2E6FC4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E6FBCu, 0x2E6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FC4u;
label_2e6fc4:
    // 0x2e6fc4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e6fc4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e6fc8:
    // 0x2e6fc8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6fcc:
    // 0x2e6fcc: 0xc05cd10  jal         func_173440
label_2e6fd0:
    if (ctx->pc == 0x2E6FD0u) {
        ctx->pc = 0x2E6FD4u;
        goto label_2e6fd4;
    }
    ctx->pc = 0x2E6FCCu;
    SET_GPR_U32(ctx, 31, 0x2E6FD4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E6FCCu, 0x2E6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FD4u;
label_2e6fd4:
    // 0x2e6fd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e6fd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e6fd8:
    // 0x2e6fd8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6fdc:
    // 0x2e6fdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e6fe0:
    // 0x2e6fe0: 0xc05cec4  jal         func_173B10
label_2e6fe4:
    if (ctx->pc == 0x2E6FE4u) {
        ctx->pc = 0x2E6FE8u;
        goto label_2e6fe8;
    }
    ctx->pc = 0x2E6FE0u;
    SET_GPR_U32(ctx, 31, 0x2E6FE8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E6FE0u, 0x2E6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FE8u;
label_2e6fe8:
    // 0x2e6fe8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e6fe8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e6fec:
    // 0x2e6fec: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2e6fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6ff0:
    // 0x2e6ff0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e6ff4:
    // 0x2e6ff4: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x2e6ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_2e6ff8:
    // 0x2e6ff8: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x2e6ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_2e6ffc:
    // 0x2e6ffc: 0xc05cf7c  jal         func_173DF0
label_2e7000:
    if (ctx->pc == 0x2E7000u) {
        ctx->pc = 0x2E7004u;
        goto label_2e7004;
    }
    ctx->pc = 0x2E6FFCu;
    SET_GPR_U32(ctx, 31, 0x2E7004u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E6FFCu, 0x2E7004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7004u;
label_2e7004:
    // 0x2e7004: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e7004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2e7008:
    // 0x2e7008: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e700c:
    // 0x2e700c: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7010:
    // 0x2e7010: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7014:
    // 0x2e7014: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x2e7014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7018:
    // 0x2e7018: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e7018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e701c:
    // 0x2e701c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x2e701cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_2e7020:
    // 0x2e7020: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7024:
    // 0x2e7024: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2e7024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e7028:
    // 0x2e7028: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e7028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2e702c:
    // 0x2e702c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e702cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7030:
    // 0x2e7030: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e7030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7034:
    // 0x2e7034: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e7038:
    // 0x2e7038: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e7038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e703c:
    // 0x2e703c: 0x0  nop
    ctx->pc = 0x2e703cu;
    // NOP
label_2e7040:
    // 0x2e7040: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2e7044:
    if (ctx->pc == 0x2E7044u) {
        ctx->pc = 0x2E7048u;
        goto label_2e7048;
    }
    ctx->pc = 0x2E7040u;
    {
        const bool branch_taken_0x2e7040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7040) {
            ctx->pc = 0x2E7070u;
            goto label_2e7070;
        }
    }
    ctx->pc = 0x2E7048u;
label_2e7048:
    // 0x2e7048: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e7048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2e704c:
    // 0x2e704c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e704cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7050:
    // 0x2e7050: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e7050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7054:
    // 0x2e7054: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e7058:
    // 0x2e7058: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e705c:
    // 0x2e705c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e705cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2e7060:
    // 0x2e7060: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7064:
    // 0x2e7064: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e7064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2e7068:
    // 0x2e7068: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e706c:
    // 0x2e706c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e706cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e7070:
    // 0x2e7070: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7074:
    // 0x2e7074: 0xc0974dc  jal         func_25D370
label_2e7078:
    if (ctx->pc == 0x2E7078u) {
        ctx->pc = 0x2E707Cu;
        goto label_2e707c;
    }
    ctx->pc = 0x2E7074u;
    SET_GPR_U32(ctx, 31, 0x2E707Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E7074u, 0x2E707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E707Cu;
label_2e707c:
    // 0x2e707c: 0x100001f7  b           . + 4 + (0x1F7 << 2)
label_2e7080:
    if (ctx->pc == 0x2E7080u) {
        ctx->pc = 0x2E7084u;
        goto label_2e7084;
    }
    ctx->pc = 0x2E707Cu;
    {
        const bool branch_taken_0x2e707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e707c) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E7084u;
label_2e7084:
    // 0x2e7084: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e7084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7088:
    // 0x2e7088: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e708c:
    // 0x2e708c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e708cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2e7090:
    // 0x2e7090: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2e7090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7094:
    // 0x2e7094: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e7094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7098:
    // 0x2e7098: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e7098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2e709c:
    // 0x2e709c: 0xc0965d0  jal         func_259740
label_2e70a0:
    if (ctx->pc == 0x2E70A0u) {
        ctx->pc = 0x2E70A4u;
        goto label_2e70a4;
    }
    ctx->pc = 0x2E709Cu;
    SET_GPR_U32(ctx, 31, 0x2E70A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E709Cu, 0x2E70A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70A4u;
label_2e70a4:
    // 0x2e70a4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e70a8:
    // 0x2e70a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e70a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2e70ac:
    // 0x2e70ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e70acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e70b0:
    // 0x2e70b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e70b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e70b4:
    // 0x2e70b4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e70b8:
    // 0x2e70b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e70b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e70bc:
    // 0x2e70bc: 0xc096b40  jal         func_25AD00
label_2e70c0:
    if (ctx->pc == 0x2E70C0u) {
        ctx->pc = 0x2E70C4u;
        goto label_2e70c4;
    }
    ctx->pc = 0x2E70BCu;
    SET_GPR_U32(ctx, 31, 0x2E70C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E70BCu, 0x2E70C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70C4u;
label_2e70c4:
    // 0x2e70c4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e70c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e70c8:
    // 0x2e70c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e70c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e70cc:
    // 0x2e70cc: 0xc05cec4  jal         func_173B10
label_2e70d0:
    if (ctx->pc == 0x2E70D0u) {
        ctx->pc = 0x2E70D4u;
        goto label_2e70d4;
    }
    ctx->pc = 0x2E70CCu;
    SET_GPR_U32(ctx, 31, 0x2E70D4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E70CCu, 0x2E70D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70D4u;
label_2e70d4:
    // 0x2e70d4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e70d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e70d8:
    // 0x2e70d8: 0xc0974dc  jal         func_25D370
label_2e70dc:
    if (ctx->pc == 0x2E70DCu) {
        ctx->pc = 0x2E70E0u;
        goto label_2e70e0;
    }
    ctx->pc = 0x2E70D8u;
    SET_GPR_U32(ctx, 31, 0x2E70E0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E70D8u, 0x2E70E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70E0u;
label_2e70e0:
    // 0x2e70e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e70e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e70e4:
    // 0x2e70e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e70e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2e70e8:
    // 0x2e70e8: 0x106001dc  beqz        $v1, . + 4 + (0x1DC << 2)
label_2e70ec:
    if (ctx->pc == 0x2E70ECu) {
        ctx->pc = 0x2E70F0u;
        goto label_2e70f0;
    }
    ctx->pc = 0x2E70E8u;
    {
        const bool branch_taken_0x2e70e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e70e8) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E70F0u;
label_2e70f0:
    // 0x2e70f0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e70f4:
    // 0x2e70f4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e70f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2e70f8:
    // 0x2e70f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e70fc:
    // 0x2e70fc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2e70fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2e7100:
    // 0x2e7100: 0x100001d6  b           . + 4 + (0x1D6 << 2)
label_2e7104:
    if (ctx->pc == 0x2E7104u) {
        ctx->pc = 0x2E7108u;
        goto label_2e7108;
    }
    ctx->pc = 0x2E7100u;
    {
        const bool branch_taken_0x2e7100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7100) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E7108u;
label_2e7108:
    // 0x2e7108: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e7108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e710c:
    // 0x2e710c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7110:
    // 0x2e7110: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e7110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2e7114:
    // 0x2e7114: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2e7114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e7118:
    // 0x2e7118: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e7118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e711c:
    // 0x2e711c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e711cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2e7120:
    // 0x2e7120: 0xc0965d0  jal         func_259740
label_2e7124:
    if (ctx->pc == 0x2E7124u) {
        ctx->pc = 0x2E7128u;
        goto label_2e7128;
    }
    ctx->pc = 0x2E7120u;
    SET_GPR_U32(ctx, 31, 0x2E7128u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E7120u, 0x2E7128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7128u;
label_2e7128:
    // 0x2e7128: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e7128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2e712c:
    // 0x2e712c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7130:
    // 0x2e7130: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2e7130u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2e7134:
    // 0x2e7134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7138:
    // 0x2e7138: 0xa28200ea  sb          $v0, 0xEA($s4)
    ctx->pc = 0x2e7138u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 234), (uint8_t)GPR_U32(ctx, 2));
label_2e713c:
    // 0x2e713c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7140:
    // 0x2e7140: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e7140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2e7144:
    // 0x2e7144: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e7148:
    // 0x2e7148: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e7148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e714c:
    // 0x2e714c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e714cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7150:
    // 0x2e7150: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e7150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e7154:
    // 0x2e7154: 0xc096b40  jal         func_25AD00
label_2e7158:
    if (ctx->pc == 0x2E7158u) {
        ctx->pc = 0x2E715Cu;
        goto label_2e715c;
    }
    ctx->pc = 0x2E7154u;
    SET_GPR_U32(ctx, 31, 0x2E715Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E7154u, 0x2E715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E715Cu;
label_2e715c:
    // 0x2e715c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7160:
    // 0x2e7160: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e7160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e7164:
    // 0x2e7164: 0xc05cec4  jal         func_173B10
label_2e7168:
    if (ctx->pc == 0x2E7168u) {
        ctx->pc = 0x2E716Cu;
        goto label_2e716c;
    }
    ctx->pc = 0x2E7164u;
    SET_GPR_U32(ctx, 31, 0x2E716Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E7164u, 0x2E716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E716Cu;
label_2e716c:
    // 0x2e716c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7170:
    // 0x2e7170: 0xc0974dc  jal         func_25D370
label_2e7174:
    if (ctx->pc == 0x2E7174u) {
        ctx->pc = 0x2E7178u;
        goto label_2e7178;
    }
    ctx->pc = 0x2E7170u;
    SET_GPR_U32(ctx, 31, 0x2E7178u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E7170u, 0x2E7178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7178u;
label_2e7178:
    // 0x2e7178: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e7178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2e717c:
    // 0x2e717c: 0xc0675a4  jal         func_19D690
label_2e7180:
    if (ctx->pc == 0x2E7180u) {
        ctx->pc = 0x2E7184u;
        goto label_2e7184;
    }
    ctx->pc = 0x2E717Cu;
    SET_GPR_U32(ctx, 31, 0x2E7184u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E717Cu, 0x2E7184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7184u;
label_2e7184:
    // 0x2e7184: 0xc067694  jal         func_19DA50
label_2e7188:
    if (ctx->pc == 0x2E7188u) {
        ctx->pc = 0x2E718Cu;
        goto label_2e718c;
    }
    ctx->pc = 0x2E7184u;
    SET_GPR_U32(ctx, 31, 0x2E718Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7184u, 0x2E718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E718Cu;
label_2e718c:
    // 0x2e718c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e718cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e7190:
    // 0x2e7190: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2e7190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2e7194:
    // 0x2e7194: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e7194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e7198:
    // 0x2e7198: 0x24428d30  addiu       $v0, $v0, -0x72D0
    ctx->pc = 0x2e7198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937904));
label_2e719c:
    // 0x2e719c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e71a0:
    // 0x2e71a0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e71a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e71a4:
    // 0x2e71a4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2e71a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e71a8:
    // 0x2e71a8: 0xc067694  jal         func_19DA50
label_2e71ac:
    if (ctx->pc == 0x2E71ACu) {
        ctx->pc = 0x2E71B0u;
        goto label_2e71b0;
    }
    ctx->pc = 0x2E71A8u;
    SET_GPR_U32(ctx, 31, 0x2E71B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E71A8u, 0x2E71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71B0u;
label_2e71b0:
    // 0x2e71b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e71b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e71b4:
    // 0x2e71b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e71b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e71b8:
    // 0x2e71b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e71bc:
    if (ctx->pc == 0x2E71BCu) {
        ctx->pc = 0x2E71C0u;
        goto label_2e71c0;
    }
    ctx->pc = 0x2E71B8u;
    {
        const bool branch_taken_0x2e71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e71b8) {
            ctx->pc = 0x2E71E0u;
            goto label_2e71e0;
        }
    }
    ctx->pc = 0x2E71C0u;
label_2e71c0:
    // 0x2e71c0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2e71c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e71c4:
    // 0x2e71c4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2e71c8:
    // 0x2e71c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e71c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e71cc:
    // 0x2e71cc: 0x0  nop
    ctx->pc = 0x2e71ccu;
    // NOP
label_2e71d0:
    // 0x2e71d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e71d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e71d4:
    // 0x2e71d4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e71d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2e71d8:
    // 0x2e71d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e71dc:
    if (ctx->pc == 0x2E71DCu) {
        ctx->pc = 0x2E71E0u;
        goto label_2e71e0;
    }
    ctx->pc = 0x2E71D8u;
    {
        const bool branch_taken_0x2e71d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e71d8) {
            ctx->pc = 0x2E71F8u;
            goto label_2e71f8;
        }
    }
    ctx->pc = 0x2E71E0u;
label_2e71e0:
    // 0x2e71e0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2e71e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e71e4:
    // 0x2e71e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2e71e8:
    // 0x2e71e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e71e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e71ec:
    // 0x2e71ec: 0x0  nop
    ctx->pc = 0x2e71ecu;
    // NOP
label_2e71f0:
    // 0x2e71f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e71f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e71f4:
    // 0x2e71f4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e71f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2e71f8:
    // 0x2e71f8: 0xc067694  jal         func_19DA50
label_2e71fc:
    if (ctx->pc == 0x2E71FCu) {
        ctx->pc = 0x2E7200u;
        goto label_2e7200;
    }
    ctx->pc = 0x2E71F8u;
    SET_GPR_U32(ctx, 31, 0x2E7200u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E71F8u, 0x2E7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7200u;
label_2e7200:
    // 0x2e7200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e7204:
    // 0x2e7204: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e7204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e7208:
    // 0x2e7208: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e720c:
    if (ctx->pc == 0x2E720Cu) {
        ctx->pc = 0x2E7210u;
        goto label_2e7210;
    }
    ctx->pc = 0x2E7208u;
    {
        const bool branch_taken_0x2e7208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7208) {
            ctx->pc = 0x2E7230u;
            goto label_2e7230;
        }
    }
    ctx->pc = 0x2E7210u;
label_2e7210:
    // 0x2e7210: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2e7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7214:
    // 0x2e7214: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e7214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2e7218:
    // 0x2e7218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e721c:
    // 0x2e721c: 0x0  nop
    ctx->pc = 0x2e721cu;
    // NOP
label_2e7220:
    // 0x2e7220: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e7224:
    // 0x2e7224: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2e7224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2e7228:
    // 0x2e7228: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e722c:
    if (ctx->pc == 0x2E722Cu) {
        ctx->pc = 0x2E7230u;
        goto label_2e7230;
    }
    ctx->pc = 0x2E7228u;
    {
        const bool branch_taken_0x2e7228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7228) {
            ctx->pc = 0x2E7248u;
            goto label_2e7248;
        }
    }
    ctx->pc = 0x2E7230u;
label_2e7230:
    // 0x2e7230: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2e7230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7234:
    // 0x2e7234: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e7234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2e7238:
    // 0x2e7238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e723c:
    // 0x2e723c: 0x0  nop
    ctx->pc = 0x2e723cu;
    // NOP
label_2e7240:
    // 0x2e7240: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e7244:
    // 0x2e7244: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2e7244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2e7248:
    // 0x2e7248: 0xc067694  jal         func_19DA50
label_2e724c:
    if (ctx->pc == 0x2E724Cu) {
        ctx->pc = 0x2E7250u;
        goto label_2e7250;
    }
    ctx->pc = 0x2E7248u;
    SET_GPR_U32(ctx, 31, 0x2E7250u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7248u, 0x2E7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7250u;
label_2e7250:
    // 0x2e7250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e7254:
    // 0x2e7254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e7254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e7258:
    // 0x2e7258: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e725c:
    if (ctx->pc == 0x2E725Cu) {
        ctx->pc = 0x2E7260u;
        goto label_2e7260;
    }
    ctx->pc = 0x2E7258u;
    {
        const bool branch_taken_0x2e7258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7258) {
            ctx->pc = 0x2E7280u;
            goto label_2e7280;
        }
    }
    ctx->pc = 0x2E7260u;
label_2e7260:
    // 0x2e7260: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2e7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7264:
    // 0x2e7264: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e7264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2e7268:
    // 0x2e7268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e726c:
    // 0x2e726c: 0x0  nop
    ctx->pc = 0x2e726cu;
    // NOP
label_2e7270:
    // 0x2e7270: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e7274:
    // 0x2e7274: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2e7274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2e7278:
    // 0x2e7278: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e727c:
    if (ctx->pc == 0x2E727Cu) {
        ctx->pc = 0x2E7280u;
        goto label_2e7280;
    }
    ctx->pc = 0x2E7278u;
    {
        const bool branch_taken_0x2e7278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7278) {
            ctx->pc = 0x2E7298u;
            goto label_2e7298;
        }
    }
    ctx->pc = 0x2E7280u;
label_2e7280:
    // 0x2e7280: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2e7280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7284:
    // 0x2e7284: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e7284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2e7288:
    // 0x2e7288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e728c:
    // 0x2e728c: 0x0  nop
    ctx->pc = 0x2e728cu;
    // NOP
label_2e7290:
    // 0x2e7290: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e7294:
    // 0x2e7294: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2e7294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2e7298:
    // 0x2e7298: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e7298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e729c:
    // 0x2e729c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x2e729cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_2e72a0:
    // 0x2e72a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2e72a4:
    // 0x2e72a4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e72a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e72a8:
    // 0x2e72a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e72a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2e72ac:
    // 0x2e72ac: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e72acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2e72b0:
    // 0x2e72b0: 0xc040bf4  jal         func_102FD0
label_2e72b4:
    if (ctx->pc == 0x2E72B4u) {
        ctx->pc = 0x2E72B8u;
        goto label_2e72b8;
    }
    ctx->pc = 0x2E72B0u;
    SET_GPR_U32(ctx, 31, 0x2E72B8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E72B8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E72B8u) { return; }
    ctx->pc = 0x2E72B8u;
label_2e72b8:
    // 0x2e72b8: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2e72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_2e72bc:
    // 0x2e72bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e72bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2e72c0:
    // 0x2e72c0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e72c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2e72c4:
    // 0x2e72c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2e72c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2e72c8:
    // 0x2e72c8: 0xc062f5c  jal         func_18BD70
label_2e72cc:
    if (ctx->pc == 0x2E72CCu) {
        ctx->pc = 0x2E72D0u;
        goto label_2e72d0;
    }
    ctx->pc = 0x2E72C8u;
    SET_GPR_U32(ctx, 31, 0x2E72D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E72C8u, 0x2E72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72D0u;
label_2e72d0:
    // 0x2e72d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e72d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e72d4:
    // 0x2e72d4: 0xc0630a8  jal         func_18C2A0
label_2e72d8:
    if (ctx->pc == 0x2E72D8u) {
        ctx->pc = 0x2E72DCu;
        goto label_2e72dc;
    }
    ctx->pc = 0x2E72D4u;
    SET_GPR_U32(ctx, 31, 0x2E72DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E72D4u, 0x2E72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72DCu;
label_2e72dc:
    // 0x2e72dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2e72e0:
    // 0x2e72e0: 0xc0675a4  jal         func_19D690
label_2e72e4:
    if (ctx->pc == 0x2E72E4u) {
        ctx->pc = 0x2E72E8u;
        goto label_2e72e8;
    }
    ctx->pc = 0x2E72E0u;
    SET_GPR_U32(ctx, 31, 0x2E72E8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E72E0u, 0x2E72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72E8u;
label_2e72e8:
    // 0x2e72e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e72ec:
    // 0x2e72ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e72ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e72f0:
    // 0x2e72f0: 0x0  nop
    ctx->pc = 0x2e72f0u;
    // NOP
label_2e72f4:
    // 0x2e72f4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e72f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2e72f8:
    // 0x2e72f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e72fc:
    // 0x2e72fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e72fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7300:
    // 0x2e7300: 0x0  nop
    ctx->pc = 0x2e7300u;
    // NOP
label_2e7304:
    // 0x2e7304: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2e7304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2e7308:
    // 0x2e7308: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e730c:
    // 0x2e730c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e730cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7310:
    // 0x2e7310: 0x0  nop
    ctx->pc = 0x2e7310u;
    // NOP
label_2e7314:
    // 0x2e7314: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e7314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2e7318:
    // 0x2e7318: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e731c:
    // 0x2e731c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e731cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7320:
    // 0x2e7320: 0x0  nop
    ctx->pc = 0x2e7320u;
    // NOP
label_2e7324:
    // 0x2e7324: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2e7324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2e7328:
    // 0x2e7328: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e7328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2e732c:
    // 0x2e732c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e732cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7330:
    // 0x2e7330: 0x0  nop
    ctx->pc = 0x2e7330u;
    // NOP
label_2e7334:
    // 0x2e7334: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e7334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2e7338:
    // 0x2e7338: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e7338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2e733c:
    // 0x2e733c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7340:
    // 0x2e7340: 0x0  nop
    ctx->pc = 0x2e7340u;
    // NOP
label_2e7344:
    // 0x2e7344: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2e7344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2e7348:
    // 0x2e7348: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e7348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2e734c:
    // 0x2e734c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e734cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7350:
    // 0x2e7350: 0x0  nop
    ctx->pc = 0x2e7350u;
    // NOP
label_2e7354:
    // 0x2e7354: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e7354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2e7358:
    // 0x2e7358: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e7358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_2e735c:
    // 0x2e735c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7360:
    // 0x2e7360: 0x0  nop
    ctx->pc = 0x2e7360u;
    // NOP
label_2e7364:
    // 0x2e7364: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e7364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2e7368:
    // 0x2e7368: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e736c:
    // 0x2e736c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e736cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7370:
    // 0x2e7370: 0x0  nop
    ctx->pc = 0x2e7370u;
    // NOP
label_2e7374:
    // 0x2e7374: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e7374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2e7378:
    // 0x2e7378: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e737c:
    // 0x2e737c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e737cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7380:
    // 0x2e7380: 0x0  nop
    ctx->pc = 0x2e7380u;
    // NOP
label_2e7384:
    // 0x2e7384: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e7384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2e7388:
    // 0x2e7388: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e738c:
    // 0x2e738c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e738cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7390:
    // 0x2e7390: 0x0  nop
    ctx->pc = 0x2e7390u;
    // NOP
label_2e7394:
    // 0x2e7394: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2e7394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2e7398:
    // 0x2e7398: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e7398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_2e739c:
    // 0x2e739c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
label_2e73a0:
    // 0x2e73a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e73a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e73a4:
    // 0x2e73a4: 0x0  nop
    ctx->pc = 0x2e73a4u;
    // NOP
label_2e73a8:
    // 0x2e73a8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e73a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2e73ac:
    // 0x2e73ac: 0xc067694  jal         func_19DA50
label_2e73b0:
    if (ctx->pc == 0x2E73B0u) {
        ctx->pc = 0x2E73B4u;
        goto label_2e73b4;
    }
    ctx->pc = 0x2E73ACu;
    SET_GPR_U32(ctx, 31, 0x2E73B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E73ACu, 0x2E73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73B4u;
label_2e73b4:
    // 0x2e73b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e73b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e73b8:
    // 0x2e73b8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e73b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2e73bc:
    // 0x2e73bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e73c0:
    // 0x2e73c0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_2e73c4:
    if (ctx->pc == 0x2E73C4u) {
        ctx->pc = 0x2E73C8u;
        goto label_2e73c8;
    }
    ctx->pc = 0x2E73C0u;
    {
        const bool branch_taken_0x2e73c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e73c0) {
            ctx->pc = 0x2E7438u;
            goto label_2e7438;
        }
    }
    ctx->pc = 0x2E73C8u;
label_2e73c8:
    // 0x2e73c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e73cc:
    // 0x2e73cc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_2e73d0:
    if (ctx->pc == 0x2E73D0u) {
        ctx->pc = 0x2E73D4u;
        goto label_2e73d4;
    }
    ctx->pc = 0x2E73CCu;
    {
        const bool branch_taken_0x2e73cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e73cc) {
            ctx->pc = 0x2E7420u;
            goto label_2e7420;
        }
    }
    ctx->pc = 0x2E73D4u;
label_2e73d4:
    // 0x2e73d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e73d8:
    // 0x2e73d8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_2e73dc:
    if (ctx->pc == 0x2E73DCu) {
        ctx->pc = 0x2E73E0u;
        goto label_2e73e0;
    }
    ctx->pc = 0x2E73D8u;
    {
        const bool branch_taken_0x2e73d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e73d8) {
            ctx->pc = 0x2E7408u;
            goto label_2e7408;
        }
    }
    ctx->pc = 0x2E73E0u;
label_2e73e0:
    // 0x2e73e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2e73e4:
    if (ctx->pc == 0x2E73E4u) {
        ctx->pc = 0x2E73E8u;
        goto label_2e73e8;
    }
    ctx->pc = 0x2E73E0u;
    {
        const bool branch_taken_0x2e73e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e73e0) {
            ctx->pc = 0x2E73F0u;
            goto label_2e73f0;
        }
    }
    ctx->pc = 0x2E73E8u;
label_2e73e8:
    // 0x2e73e8: 0x10000017  b           . + 4 + (0x17 << 2)
label_2e73ec:
    if (ctx->pc == 0x2E73ECu) {
        ctx->pc = 0x2E73F0u;
        goto label_2e73f0;
    }
    ctx->pc = 0x2E73E8u;
    {
        const bool branch_taken_0x2e73e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e73e8) {
            ctx->pc = 0x2E7448u;
            goto label_2e7448;
        }
    }
    ctx->pc = 0x2E73F0u;
label_2e73f0:
    // 0x2e73f0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2e73f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_2e73f4:
    // 0x2e73f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e73f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e73f8:
    // 0x2e73f8: 0x0  nop
    ctx->pc = 0x2e73f8u;
    // NOP
label_2e73fc:
    // 0x2e73fc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e73fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2e7400:
    // 0x2e7400: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e7404:
    if (ctx->pc == 0x2E7404u) {
        ctx->pc = 0x2E7408u;
        goto label_2e7408;
    }
    ctx->pc = 0x2E7400u;
    {
        const bool branch_taken_0x2e7400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7400) {
            ctx->pc = 0x2E7448u;
            goto label_2e7448;
        }
    }
    ctx->pc = 0x2E7408u;
label_2e7408:
    // 0x2e7408: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2e7408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_2e740c:
    // 0x2e740c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e740cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7410:
    // 0x2e7410: 0x0  nop
    ctx->pc = 0x2e7410u;
    // NOP
label_2e7414:
    // 0x2e7414: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e7414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2e7418:
    // 0x2e7418: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e741c:
    if (ctx->pc == 0x2E741Cu) {
        ctx->pc = 0x2E7420u;
        goto label_2e7420;
    }
    ctx->pc = 0x2E7418u;
    {
        const bool branch_taken_0x2e7418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7418) {
            ctx->pc = 0x2E7448u;
            goto label_2e7448;
        }
    }
    ctx->pc = 0x2E7420u;
label_2e7420:
    // 0x2e7420: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e7420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_2e7424:
    // 0x2e7424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7428:
    // 0x2e7428: 0x0  nop
    ctx->pc = 0x2e7428u;
    // NOP
label_2e742c:
    // 0x2e742c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2e7430:
    // 0x2e7430: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e7434:
    if (ctx->pc == 0x2E7434u) {
        ctx->pc = 0x2E7438u;
        goto label_2e7438;
    }
    ctx->pc = 0x2E7430u;
    {
        const bool branch_taken_0x2e7430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7430) {
            ctx->pc = 0x2E7448u;
            goto label_2e7448;
        }
    }
    ctx->pc = 0x2E7438u;
label_2e7438:
    // 0x2e7438: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2e7438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_2e743c:
    // 0x2e743c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e743cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7440:
    // 0x2e7440: 0x0  nop
    ctx->pc = 0x2e7440u;
    // NOP
label_2e7444:
    // 0x2e7444: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e7444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2e7448:
    // 0x2e7448: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e7448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2e744c:
    // 0x2e744c: 0xc0675a4  jal         func_19D690
label_2e7450:
    if (ctx->pc == 0x2E7450u) {
        ctx->pc = 0x2E7454u;
        goto label_2e7454;
    }
    ctx->pc = 0x2E744Cu;
    SET_GPR_U32(ctx, 31, 0x2E7454u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E744Cu, 0x2E7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7454u;
label_2e7454:
    // 0x2e7454: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e7454u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e7458:
    // 0x2e7458: 0xc067694  jal         func_19DA50
label_2e745c:
    if (ctx->pc == 0x2E745Cu) {
        ctx->pc = 0x2E7460u;
        goto label_2e7460;
    }
    ctx->pc = 0x2E7458u;
    SET_GPR_U32(ctx, 31, 0x2E7460u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7458u, 0x2E7460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7460u;
label_2e7460:
    // 0x2e7460: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e7460u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e7464:
    // 0x2e7464: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e7464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e7468:
    // 0x2e7468: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x2e7468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2e746c:
    // 0x2e746c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e7470:
    // 0x2e7470: 0x10a4001d  beq         $a1, $a0, . + 4 + (0x1D << 2)
label_2e7474:
    if (ctx->pc == 0x2E7474u) {
        ctx->pc = 0x2E7478u;
        goto label_2e7478;
    }
    ctx->pc = 0x2E7470u;
    {
        const bool branch_taken_0x2e7470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e7470) {
            ctx->pc = 0x2E74E8u;
            goto label_2e74e8;
        }
    }
    ctx->pc = 0x2E7478u;
label_2e7478:
    // 0x2e7478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e7478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e747c:
    // 0x2e747c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_2e7480:
    if (ctx->pc == 0x2E7480u) {
        ctx->pc = 0x2E7484u;
        goto label_2e7484;
    }
    ctx->pc = 0x2E747Cu;
    {
        const bool branch_taken_0x2e747c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e747c) {
            ctx->pc = 0x2E74D0u;
            goto label_2e74d0;
        }
    }
    ctx->pc = 0x2E7484u;
label_2e7484:
    // 0x2e7484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7488:
    // 0x2e7488: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_2e748c:
    if (ctx->pc == 0x2E748Cu) {
        ctx->pc = 0x2E7490u;
        goto label_2e7490;
    }
    ctx->pc = 0x2E7488u;
    {
        const bool branch_taken_0x2e7488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e7488) {
            ctx->pc = 0x2E74B8u;
            goto label_2e74b8;
        }
    }
    ctx->pc = 0x2E7490u;
label_2e7490:
    // 0x2e7490: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2e7494:
    if (ctx->pc == 0x2E7494u) {
        ctx->pc = 0x2E7498u;
        goto label_2e7498;
    }
    ctx->pc = 0x2E7490u;
    {
        const bool branch_taken_0x2e7490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7490) {
            ctx->pc = 0x2E74A0u;
            goto label_2e74a0;
        }
    }
    ctx->pc = 0x2E7498u;
label_2e7498:
    // 0x2e7498: 0x10000017  b           . + 4 + (0x17 << 2)
label_2e749c:
    if (ctx->pc == 0x2E749Cu) {
        ctx->pc = 0x2E74A0u;
        goto label_2e74a0;
    }
    ctx->pc = 0x2E7498u;
    {
        const bool branch_taken_0x2e7498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7498) {
            ctx->pc = 0x2E74F8u;
            goto label_2e74f8;
        }
    }
    ctx->pc = 0x2E74A0u;
label_2e74a0:
    // 0x2e74a0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2e74a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_2e74a4:
    // 0x2e74a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e74a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e74a8:
    // 0x2e74a8: 0x0  nop
    ctx->pc = 0x2e74a8u;
    // NOP
label_2e74ac:
    // 0x2e74ac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e74acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2e74b0:
    // 0x2e74b0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e74b4:
    if (ctx->pc == 0x2E74B4u) {
        ctx->pc = 0x2E74B8u;
        goto label_2e74b8;
    }
    ctx->pc = 0x2E74B0u;
    {
        const bool branch_taken_0x2e74b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e74b0) {
            ctx->pc = 0x2E74F8u;
            goto label_2e74f8;
        }
    }
    ctx->pc = 0x2E74B8u;
label_2e74b8:
    // 0x2e74b8: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2e74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_2e74bc:
    // 0x2e74bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e74bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e74c0:
    // 0x2e74c0: 0x0  nop
    ctx->pc = 0x2e74c0u;
    // NOP
label_2e74c4:
    // 0x2e74c4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e74c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2e74c8:
    // 0x2e74c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e74cc:
    if (ctx->pc == 0x2E74CCu) {
        ctx->pc = 0x2E74D0u;
        goto label_2e74d0;
    }
    ctx->pc = 0x2E74C8u;
    {
        const bool branch_taken_0x2e74c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e74c8) {
            ctx->pc = 0x2E74F8u;
            goto label_2e74f8;
        }
    }
    ctx->pc = 0x2E74D0u;
label_2e74d0:
    // 0x2e74d0: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2e74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_2e74d4:
    // 0x2e74d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e74d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e74d8:
    // 0x2e74d8: 0x0  nop
    ctx->pc = 0x2e74d8u;
    // NOP
label_2e74dc:
    // 0x2e74dc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e74dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2e74e0:
    // 0x2e74e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e74e4:
    if (ctx->pc == 0x2E74E4u) {
        ctx->pc = 0x2E74E8u;
        goto label_2e74e8;
    }
    ctx->pc = 0x2E74E0u;
    {
        const bool branch_taken_0x2e74e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e74e0) {
            ctx->pc = 0x2E74F8u;
            goto label_2e74f8;
        }
    }
    ctx->pc = 0x2E74E8u;
label_2e74e8:
    // 0x2e74e8: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x2e74e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
label_2e74ec:
    // 0x2e74ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e74ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e74f0:
    // 0x2e74f0: 0x0  nop
    ctx->pc = 0x2e74f0u;
    // NOP
label_2e74f4:
    // 0x2e74f4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e74f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2e74f8:
    // 0x2e74f8: 0xc067694  jal         func_19DA50
label_2e74fc:
    if (ctx->pc == 0x2E74FCu) {
        ctx->pc = 0x2E7500u;
        goto label_2e7500;
    }
    ctx->pc = 0x2E74F8u;
    SET_GPR_U32(ctx, 31, 0x2E7500u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E74F8u, 0x2E7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7500u;
label_2e7500:
    // 0x2e7500: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2e7500u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e7504:
    // 0x2e7504: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2e7504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2e7508:
    // 0x2e7508: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x2e7508u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_2e750c:
    // 0x2e750c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e7510:
    // 0x2e7510: 0x1102001d  beq         $t0, $v0, . + 4 + (0x1D << 2)
label_2e7514:
    if (ctx->pc == 0x2E7514u) {
        ctx->pc = 0x2E7518u;
        goto label_2e7518;
    }
    ctx->pc = 0x2E7510u;
    {
        const bool branch_taken_0x2e7510 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7510) {
            ctx->pc = 0x2E7588u;
            goto label_2e7588;
        }
    }
    ctx->pc = 0x2E7518u;
label_2e7518:
    // 0x2e7518: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e751c:
    // 0x2e751c: 0x11020014  beq         $t0, $v0, . + 4 + (0x14 << 2)
label_2e7520:
    if (ctx->pc == 0x2E7520u) {
        ctx->pc = 0x2E7524u;
        goto label_2e7524;
    }
    ctx->pc = 0x2E751Cu;
    {
        const bool branch_taken_0x2e751c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e751c) {
            ctx->pc = 0x2E7570u;
            goto label_2e7570;
        }
    }
    ctx->pc = 0x2E7524u;
label_2e7524:
    // 0x2e7524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7528:
    // 0x2e7528: 0x1102000b  beq         $t0, $v0, . + 4 + (0xB << 2)
label_2e752c:
    if (ctx->pc == 0x2E752Cu) {
        ctx->pc = 0x2E7530u;
        goto label_2e7530;
    }
    ctx->pc = 0x2E7528u;
    {
        const bool branch_taken_0x2e7528 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7528) {
            ctx->pc = 0x2E7558u;
            goto label_2e7558;
        }
    }
    ctx->pc = 0x2E7530u;
label_2e7530:
    // 0x2e7530: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_2e7534:
    if (ctx->pc == 0x2E7534u) {
        ctx->pc = 0x2E7538u;
        goto label_2e7538;
    }
    ctx->pc = 0x2E7530u;
    {
        const bool branch_taken_0x2e7530 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7530) {
            ctx->pc = 0x2E7540u;
            goto label_2e7540;
        }
    }
    ctx->pc = 0x2E7538u;
label_2e7538:
    // 0x2e7538: 0x10000017  b           . + 4 + (0x17 << 2)
label_2e753c:
    if (ctx->pc == 0x2E753Cu) {
        ctx->pc = 0x2E7540u;
        goto label_2e7540;
    }
    ctx->pc = 0x2E7538u;
    {
        const bool branch_taken_0x2e7538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7538) {
            ctx->pc = 0x2E7598u;
            goto label_2e7598;
        }
    }
    ctx->pc = 0x2E7540u;
label_2e7540:
    // 0x2e7540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e7544:
    // 0x2e7544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7548:
    // 0x2e7548: 0x0  nop
    ctx->pc = 0x2e7548u;
    // NOP
label_2e754c:
    // 0x2e754c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e754cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2e7550:
    // 0x2e7550: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e7554:
    if (ctx->pc == 0x2E7554u) {
        ctx->pc = 0x2E7558u;
        goto label_2e7558;
    }
    ctx->pc = 0x2E7550u;
    {
        const bool branch_taken_0x2e7550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7550) {
            ctx->pc = 0x2E7598u;
            goto label_2e7598;
        }
    }
    ctx->pc = 0x2E7558u;
label_2e7558:
    // 0x2e7558: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e755c:
    // 0x2e755c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e755cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7560:
    // 0x2e7560: 0x0  nop
    ctx->pc = 0x2e7560u;
    // NOP
label_2e7564:
    // 0x2e7564: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e7564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2e7568:
    // 0x2e7568: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e756c:
    if (ctx->pc == 0x2E756Cu) {
        ctx->pc = 0x2E7570u;
        goto label_2e7570;
    }
    ctx->pc = 0x2E7568u;
    {
        const bool branch_taken_0x2e7568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7568) {
            ctx->pc = 0x2E7598u;
            goto label_2e7598;
        }
    }
    ctx->pc = 0x2E7570u;
label_2e7570:
    // 0x2e7570: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e7570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2e7574:
    // 0x2e7574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7578:
    // 0x2e7578: 0x0  nop
    ctx->pc = 0x2e7578u;
    // NOP
label_2e757c:
    // 0x2e757c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2e7580:
    // 0x2e7580: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e7584:
    if (ctx->pc == 0x2E7584u) {
        ctx->pc = 0x2E7588u;
        goto label_2e7588;
    }
    ctx->pc = 0x2E7580u;
    {
        const bool branch_taken_0x2e7580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7580) {
            ctx->pc = 0x2E7598u;
            goto label_2e7598;
        }
    }
    ctx->pc = 0x2E7588u;
label_2e7588:
    // 0x2e7588: 0x3c1540c0  lui         $s5, 0x40C0
    ctx->pc = 0x2e7588u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16576 << 16));
label_2e758c:
    // 0x2e758c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2e758cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7590:
    // 0x2e7590: 0x0  nop
    ctx->pc = 0x2e7590u;
    // NOP
label_2e7594:
    // 0x2e7594: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e7594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2e7598:
    // 0x2e7598: 0x3c023df5  lui         $v0, 0x3DF5
    ctx->pc = 0x2e7598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15861 << 16));
label_2e759c:
    // 0x2e759c: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x2e759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_2e75a0:
    // 0x2e75a0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2e75a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e75a4:
    // 0x2e75a4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e75a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e75a8:
    // 0x2e75a8: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x2e75a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_2e75ac:
    // 0x2e75ac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2e75acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2e75b0:
    // 0x2e75b0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2e75b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2e75b4:
    // 0x2e75b4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2e75b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2e75b8:
    // 0x2e75b8: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2e75b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2e75bc:
    // 0x2e75bc: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2e75bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2e75c0:
    // 0x2e75c0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x2e75c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e75c4:
    // 0x2e75c4: 0xc086970  jal         func_21A5C0
label_2e75c8:
    if (ctx->pc == 0x2E75C8u) {
        ctx->pc = 0x2E75CCu;
        goto label_2e75cc;
    }
    ctx->pc = 0x2E75C4u;
    SET_GPR_U32(ctx, 31, 0x2E75CCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2E75C4u, 0x2E75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75CCu;
label_2e75cc:
    // 0x2e75cc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e75d0:
    // 0x2e75d0: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2e75d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2e75d4:
    // 0x2e75d4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2e75d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_2e75d8:
    // 0x2e75d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e75d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2e75dc:
    // 0x2e75dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e75dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2e75e0:
    // 0x2e75e0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2e75e4:
    if (ctx->pc == 0x2E75E4u) {
        ctx->pc = 0x2E75E8u;
        goto label_2e75e8;
    }
    ctx->pc = 0x2E75E0u;
    {
        const bool branch_taken_0x2e75e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e75e0) {
            ctx->pc = 0x2E7604u;
            goto label_2e7604;
        }
    }
    ctx->pc = 0x2E75E8u;
label_2e75e8:
    // 0x2e75e8: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x2e75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
label_2e75ec:
    // 0x2e75ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e75ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2e75f0:
    // 0x2e75f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e75f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e75f4:
    // 0x2e75f4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e75f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e75f8:
    // 0x2e75f8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2e75f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2e75fc:
    // 0x2e75fc: 0xc0c9144  jal         func_324510
label_2e7600:
    if (ctx->pc == 0x2E7600u) {
        ctx->pc = 0x2E7604u;
        goto label_2e7604;
    }
    ctx->pc = 0x2E75FCu;
    SET_GPR_U32(ctx, 31, 0x2E7604u);
    ctx->pc = 0x324510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324510u, 0x2E75FCu, 0x2E7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7604u;
label_2e7604:
    // 0x2e7604: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7608:
    // 0x2e7608: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e7608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2e760c:
    // 0x2e760c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2e7610:
    if (ctx->pc == 0x2E7610u) {
        ctx->pc = 0x2E7614u;
        goto label_2e7614;
    }
    ctx->pc = 0x2E760Cu;
    {
        const bool branch_taken_0x2e760c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e760c) {
            ctx->pc = 0x2E762Cu;
            goto label_2e762c;
        }
    }
    ctx->pc = 0x2E7614u;
label_2e7614:
    // 0x2e7614: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7618:
    // 0x2e7618: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2e7618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_2e761c:
    // 0x2e761c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e7620:
    // 0x2e7620: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2e7620u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2e7624:
    // 0x2e7624: 0x1000008d  b           . + 4 + (0x8D << 2)
label_2e7628:
    if (ctx->pc == 0x2E7628u) {
        ctx->pc = 0x2E762Cu;
        goto label_2e762c;
    }
    ctx->pc = 0x2E7624u;
    {
        const bool branch_taken_0x2e7624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7624) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E762Cu;
label_2e762c:
    // 0x2e762c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7630:
    // 0x2e7630: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e7630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2e7634:
    // 0x2e7634: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2e7634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e7638:
    // 0x2e7638: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2e7638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e763c:
    // 0x2e763c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7640:
    // 0x2e7640: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2e7640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2e7644:
    // 0x2e7644: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e7644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7648:
    // 0x2e7648: 0xc0c7a0c  jal         func_31E830
label_2e764c:
    if (ctx->pc == 0x2E764Cu) {
        ctx->pc = 0x2E7650u;
        goto label_2e7650;
    }
    ctx->pc = 0x2E7648u;
    SET_GPR_U32(ctx, 31, 0x2E7650u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2E7648u, 0x2E7650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7650u;
label_2e7650:
    // 0x2e7650: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e7650u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2e7654:
    // 0x2e7654: 0x10000010  b           . + 4 + (0x10 << 2)
label_2e7658:
    if (ctx->pc == 0x2E7658u) {
        ctx->pc = 0x2E765Cu;
        goto label_2e765c;
    }
    ctx->pc = 0x2E7654u;
    {
        const bool branch_taken_0x2e7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7654) {
            ctx->pc = 0x2E7698u;
            goto label_2e7698;
        }
    }
    ctx->pc = 0x2E765Cu;
label_2e765c:
    // 0x2e765c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2e765cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2e7660:
    // 0x2e7660: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2e7660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_2e7664:
    // 0x2e7664: 0x24838c08  addiu       $v1, $a0, -0x73F8
    ctx->pc = 0x2e7664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937608));
label_2e7668:
    // 0x2e7668: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2e7668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2e766c:
    // 0x2e766c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2e766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e7670:
    // 0x2e7670: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x2e7670u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2e7674:
    // 0x2e7674: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e7674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7678:
    // 0x2e7678: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x2e7678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_2e767c:
    // 0x2e767c: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x2e767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2e7680:
    // 0x2e7680: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2e7684:
    // 0x2e7684: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x2e7684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_2e7688:
    // 0x2e7688: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x2e7688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2e768c:
    // 0x2e768c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e768cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e7690:
    // 0x2e7690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e7690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e7694:
    // 0x2e7694: 0x0  nop
    ctx->pc = 0x2e7694u;
    // NOP
label_2e7698:
    // 0x2e7698: 0x1a20fff0  blez        $s1, . + 4 + (-0x10 << 2)
label_2e769c:
    if (ctx->pc == 0x2E769Cu) {
        ctx->pc = 0x2E76A0u;
        goto label_2e76a0;
    }
    ctx->pc = 0x2E7698u;
    {
        const bool branch_taken_0x2e7698 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2e7698) {
            ctx->pc = 0x2E765Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e765c;
        }
    }
    ctx->pc = 0x2E76A0u;
label_2e76a0:
    // 0x2e76a0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e76a4:
    // 0x2e76a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2e76a8:
    // 0x2e76a8: 0x24700ab0  addiu       $s0, $v1, 0xAB0
    ctx->pc = 0x2e76a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2736));
label_2e76ac:
    // 0x2e76ac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e76acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e76b0:
    // 0x2e76b0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e76b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e76b4:
    // 0x2e76b4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x2e76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2e76b8:
    // 0x2e76b8: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2e76b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2e76bc:
    // 0x2e76bc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e76bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e76c0:
    // 0x2e76c0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e76c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e76c4:
    // 0x2e76c4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2e76c8:
    // 0x2e76c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2e76cc:
    // 0x2e76cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e76ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2e76d0:
    // 0x2e76d0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2e76d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_2e76d4:
    // 0x2e76d4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e76d8:
    // 0x2e76d8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e76d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2e76dc:
    // 0x2e76dc: 0x24700990  addiu       $s0, $v1, 0x990
    ctx->pc = 0x2e76dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
label_2e76e0:
    // 0x2e76e0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e76e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e76e4:
    // 0x2e76e4: 0x96440140  lhu         $a0, 0x140($s2)
    ctx->pc = 0x2e76e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 320)));
label_2e76e8:
    // 0x2e76e8: 0x34850010  ori         $a1, $a0, 0x10
    ctx->pc = 0x2e76e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_2e76ec:
    // 0x2e76ec: 0xa6450140  sh          $a1, 0x140($s2)
    ctx->pc = 0x2e76ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 320), (uint16_t)GPR_U32(ctx, 5));
label_2e76f0:
    // 0x2e76f0: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x2e76f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_2e76f4:
    // 0x2e76f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2e76f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e76f8:
    // 0x2e76f8: 0x0  nop
    ctx->pc = 0x2e76f8u;
    // NOP
label_2e76fc:
    // 0x2e76fc: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x2e76fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
label_2e7700:
    // 0x2e7700: 0x3c07437a  lui         $a3, 0x437A
    ctx->pc = 0x2e7700u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17274 << 16));
label_2e7704:
    // 0x2e7704: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2e7704u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7708:
    // 0x2e7708: 0x0  nop
    ctx->pc = 0x2e7708u;
    // NOP
label_2e770c:
    // 0x2e770c: 0xe680009c  swc1        $f0, 0x9C($s4)
    ctx->pc = 0x2e770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 156), bits); }
label_2e7710:
    // 0x2e7710: 0x10000052  b           . + 4 + (0x52 << 2)
label_2e7714:
    if (ctx->pc == 0x2E7714u) {
        ctx->pc = 0x2E7718u;
        goto label_2e7718;
    }
    ctx->pc = 0x2E7710u;
    {
        const bool branch_taken_0x2e7710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7710) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E7718u;
label_2e7718:
    // 0x2e7718: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x2e7718u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e771c:
    // 0x2e771c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2e771cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2e7720:
    // 0x2e7720: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e7720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e7724:
    // 0x2e7724: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2e7724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2e7728:
    // 0x2e7728: 0xc096b40  jal         func_25AD00
label_2e772c:
    if (ctx->pc == 0x2E772Cu) {
        ctx->pc = 0x2E7730u;
        goto label_2e7730;
    }
    ctx->pc = 0x2E7728u;
    SET_GPR_U32(ctx, 31, 0x2E7730u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E7728u, 0x2E7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7730u;
label_2e7730:
    // 0x2e7730: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7734:
    // 0x2e7734: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e7734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e7738:
    // 0x2e7738: 0xc05cec4  jal         func_173B10
label_2e773c:
    if (ctx->pc == 0x2E773Cu) {
        ctx->pc = 0x2E7740u;
        goto label_2e7740;
    }
    ctx->pc = 0x2E7738u;
    SET_GPR_U32(ctx, 31, 0x2E7740u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E7738u, 0x2E7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7740u;
label_2e7740:
    // 0x2e7740: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7744:
    // 0x2e7744: 0xc0974dc  jal         func_25D370
label_2e7748:
    if (ctx->pc == 0x2E7748u) {
        ctx->pc = 0x2E774Cu;
        goto label_2e774c;
    }
    ctx->pc = 0x2E7744u;
    SET_GPR_U32(ctx, 31, 0x2E774Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E7744u, 0x2E774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E774Cu;
label_2e774c:
    // 0x2e774c: 0xc681009c  lwc1        $f1, 0x9C($s4)
    ctx->pc = 0x2e774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7750:
    // 0x2e7750: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2e7750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2e7754:
    // 0x2e7754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7758:
    // 0x2e7758: 0x0  nop
    ctx->pc = 0x2e7758u;
    // NOP
label_2e775c:
    // 0x2e775c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e775cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7760:
    // 0x2e7760: 0x0  nop
    ctx->pc = 0x2e7760u;
    // NOP
label_2e7764:
    // 0x2e7764: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_2e7768:
    if (ctx->pc == 0x2E7768u) {
        ctx->pc = 0x2E776Cu;
        goto label_2e776c;
    }
    ctx->pc = 0x2E7764u;
    {
        const bool branch_taken_0x2e7764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7764) {
            ctx->pc = 0x2E7798u;
            goto label_2e7798;
        }
    }
    ctx->pc = 0x2E776Cu;
label_2e776c:
    // 0x2e776c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7770:
    // 0x2e7770: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2e7770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2e7774:
    // 0x2e7774: 0xc68c009c  lwc1        $f12, 0x9C($s4)
    ctx->pc = 0x2e7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7778:
    // 0x2e7778: 0xc0c9144  jal         func_324510
label_2e777c:
    if (ctx->pc == 0x2E777Cu) {
        ctx->pc = 0x2E7780u;
        goto label_2e7780;
    }
    ctx->pc = 0x2E7778u;
    SET_GPR_U32(ctx, 31, 0x2E7780u);
    ctx->pc = 0x324510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324510u, 0x2E7778u, 0x2E7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7780u;
label_2e7780:
    // 0x2e7780: 0xc681009c  lwc1        $f1, 0x9C($s4)
    ctx->pc = 0x2e7780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7784:
    // 0x2e7784: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2e7784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_2e7788:
    // 0x2e7788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e778c:
    // 0x2e778c: 0x0  nop
    ctx->pc = 0x2e778cu;
    // NOP
label_2e7790:
    // 0x2e7790: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e7794:
    // 0x2e7794: 0xe680009c  swc1        $f0, 0x9C($s4)
    ctx->pc = 0x2e7794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 156), bits); }
label_2e7798:
    // 0x2e7798: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x2e7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e779c:
    // 0x2e779c: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x2e779cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
label_2e77a0:
    // 0x2e77a0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e77a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_2e77a4:
    // 0x2e77a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e77a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e77a8:
    // 0x2e77a8: 0x0  nop
    ctx->pc = 0x2e77a8u;
    // NOP
label_2e77ac:
    // 0x2e77ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e77acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e77b0:
    // 0x2e77b0: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x2e77b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
label_2e77b4:
    // 0x2e77b4: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x2e77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e77b8:
    // 0x2e77b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e77b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e77bc:
    // 0x2e77bc: 0x0  nop
    ctx->pc = 0x2e77bcu;
    // NOP
label_2e77c0:
    // 0x2e77c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e77c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e77c4:
    // 0x2e77c4: 0x0  nop
    ctx->pc = 0x2e77c4u;
    // NOP
label_2e77c8:
    // 0x2e77c8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_2e77cc:
    if (ctx->pc == 0x2E77CCu) {
        ctx->pc = 0x2E77D0u;
        goto label_2e77d0;
    }
    ctx->pc = 0x2E77C8u;
    {
        const bool branch_taken_0x2e77c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e77c8) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E77D0u;
label_2e77d0:
    // 0x2e77d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e77d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e77d4:
    // 0x2e77d4: 0x0  nop
    ctx->pc = 0x2e77d4u;
    // NOP
label_2e77d8:
    // 0x2e77d8: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x2e77d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
label_2e77dc:
    // 0x2e77dc: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e77dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e77e0:
    // 0x2e77e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e77e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2e77e4:
    // 0x2e77e4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e77e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2e77e8:
    // 0x2e77e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e77e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2e77ec:
    // 0x2e77ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2e77f0:
    // 0x2e77f0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e77f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e77f4:
    // 0x2e77f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2e77f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2e77f8:
    // 0x2e77f8: 0x34640004  ori         $a0, $v1, 0x4
    ctx->pc = 0x2e77f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2e77fc:
    // 0x2e77fc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2e77fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_2e7800:
    // 0x2e7800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e7800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7804:
    // 0x2e7804: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7808:
    // 0x2e7808: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2e7808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_2e780c:
    // 0x2e780c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e7810:
    // 0x2e7810: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7814:
    // 0x2e7814: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e7814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2e7818:
    // 0x2e7818: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e781c:
    // 0x2e781c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2e781cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_2e7820:
    // 0x2e7820: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e7820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7824:
    // 0x2e7824: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2e7824u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_2e7828:
    // 0x2e7828: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e7828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e782c:
    // 0x2e782c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e782cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2e7830:
    // 0x2e7830: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2e7830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e7834:
    // 0x2e7834: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2e7834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e7838:
    // 0x2e7838: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2e7838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_2e783c:
    // 0x2e783c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2e783cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2e7840:
    // 0x2e7840: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x2e7840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_2e7844:
    // 0x2e7844: 0x8e8300ac  lw          $v1, 0xAC($s4)
    ctx->pc = 0x2e7844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
label_2e7848:
    // 0x2e7848: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2e784c:
    if (ctx->pc == 0x2E784Cu) {
        ctx->pc = 0x2E7850u;
        goto label_2e7850;
    }
    ctx->pc = 0x2E7848u;
    {
        const bool branch_taken_0x2e7848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7848) {
            ctx->pc = 0x2E785Cu;
            goto label_2e785c;
        }
    }
    ctx->pc = 0x2E7850u;
label_2e7850:
    // 0x2e7850: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e7850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7854:
    // 0x2e7854: 0x8e8300ac  lw          $v1, 0xAC($s4)
    ctx->pc = 0x2e7854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
label_2e7858:
    // 0x2e7858: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2e7858u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
label_2e785c:
    // 0x2e785c: 0xc6400128  lwc1        $f0, 0x128($s2)
    ctx->pc = 0x2e785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7860:
    // 0x2e7860: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x2e7860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
label_2e7864:
    // 0x2e7864: 0xc6400128  lwc1        $f0, 0x128($s2)
    ctx->pc = 0x2e7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7868:
    // 0x2e7868: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x2e7868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
label_2e786c:
    // 0x2e786c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x2e786cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e7870:
    // 0x2e7870: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e7870u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e7874:
    // 0x2e7874: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e7874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7878:
    // 0x2e7878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e787c:
    // 0x2e787c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e787cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7880:
    // 0x2e7880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7884:
    // 0x2e7884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7888:
    // 0x2e7888: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2e7888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2e788c:
    // 0x2e788c: 0x3e00008  jr          $ra
label_2e7890:
    if (ctx->pc == 0x2E7890u) {
        ctx->pc = 0x2E7894u;
        goto label_fallthrough_0x2e788c;
    }
    ctx->pc = 0x2E788Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E788Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e788c:
    ctx->pc = 0x2E7894u;
}
