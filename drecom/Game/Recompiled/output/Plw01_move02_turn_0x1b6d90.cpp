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

// Function: Plw01_move02_turn
// Address: 0x1b6d90 - 0x1b83e8
void Plw01_move02_turn_0x1b6d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move02_turn_0x1b6d90");
#endif

    switch (ctx->pc) {
        case 0x1b6d90u: goto label_1b6d90;
        case 0x1b6d94u: goto label_1b6d94;
        case 0x1b6d98u: goto label_1b6d98;
        case 0x1b6d9cu: goto label_1b6d9c;
        case 0x1b6da0u: goto label_1b6da0;
        case 0x1b6da4u: goto label_1b6da4;
        case 0x1b6da8u: goto label_1b6da8;
        case 0x1b6dacu: goto label_1b6dac;
        case 0x1b6db0u: goto label_1b6db0;
        case 0x1b6db4u: goto label_1b6db4;
        case 0x1b6db8u: goto label_1b6db8;
        case 0x1b6dbcu: goto label_1b6dbc;
        case 0x1b6dc0u: goto label_1b6dc0;
        case 0x1b6dc4u: goto label_1b6dc4;
        case 0x1b6dc8u: goto label_1b6dc8;
        case 0x1b6dccu: goto label_1b6dcc;
        case 0x1b6dd0u: goto label_1b6dd0;
        case 0x1b6dd4u: goto label_1b6dd4;
        case 0x1b6dd8u: goto label_1b6dd8;
        case 0x1b6ddcu: goto label_1b6ddc;
        case 0x1b6de0u: goto label_1b6de0;
        case 0x1b6de4u: goto label_1b6de4;
        case 0x1b6de8u: goto label_1b6de8;
        case 0x1b6decu: goto label_1b6dec;
        case 0x1b6df0u: goto label_1b6df0;
        case 0x1b6df4u: goto label_1b6df4;
        case 0x1b6df8u: goto label_1b6df8;
        case 0x1b6dfcu: goto label_1b6dfc;
        case 0x1b6e00u: goto label_1b6e00;
        case 0x1b6e04u: goto label_1b6e04;
        case 0x1b6e08u: goto label_1b6e08;
        case 0x1b6e0cu: goto label_1b6e0c;
        case 0x1b6e10u: goto label_1b6e10;
        case 0x1b6e14u: goto label_1b6e14;
        case 0x1b6e18u: goto label_1b6e18;
        case 0x1b6e1cu: goto label_1b6e1c;
        case 0x1b6e20u: goto label_1b6e20;
        case 0x1b6e24u: goto label_1b6e24;
        case 0x1b6e28u: goto label_1b6e28;
        case 0x1b6e2cu: goto label_1b6e2c;
        case 0x1b6e30u: goto label_1b6e30;
        case 0x1b6e34u: goto label_1b6e34;
        case 0x1b6e38u: goto label_1b6e38;
        case 0x1b6e3cu: goto label_1b6e3c;
        case 0x1b6e40u: goto label_1b6e40;
        case 0x1b6e44u: goto label_1b6e44;
        case 0x1b6e48u: goto label_1b6e48;
        case 0x1b6e4cu: goto label_1b6e4c;
        case 0x1b6e50u: goto label_1b6e50;
        case 0x1b6e54u: goto label_1b6e54;
        case 0x1b6e58u: goto label_1b6e58;
        case 0x1b6e5cu: goto label_1b6e5c;
        case 0x1b6e60u: goto label_1b6e60;
        case 0x1b6e64u: goto label_1b6e64;
        case 0x1b6e68u: goto label_1b6e68;
        case 0x1b6e6cu: goto label_1b6e6c;
        case 0x1b6e70u: goto label_1b6e70;
        case 0x1b6e74u: goto label_1b6e74;
        case 0x1b6e78u: goto label_1b6e78;
        case 0x1b6e7cu: goto label_1b6e7c;
        case 0x1b6e80u: goto label_1b6e80;
        case 0x1b6e84u: goto label_1b6e84;
        case 0x1b6e88u: goto label_1b6e88;
        case 0x1b6e8cu: goto label_1b6e8c;
        case 0x1b6e90u: goto label_1b6e90;
        case 0x1b6e94u: goto label_1b6e94;
        case 0x1b6e98u: goto label_1b6e98;
        case 0x1b6e9cu: goto label_1b6e9c;
        case 0x1b6ea0u: goto label_1b6ea0;
        case 0x1b6ea4u: goto label_1b6ea4;
        case 0x1b6ea8u: goto label_1b6ea8;
        case 0x1b6eacu: goto label_1b6eac;
        case 0x1b6eb0u: goto label_1b6eb0;
        case 0x1b6eb4u: goto label_1b6eb4;
        case 0x1b6eb8u: goto label_1b6eb8;
        case 0x1b6ebcu: goto label_1b6ebc;
        case 0x1b6ec0u: goto label_1b6ec0;
        case 0x1b6ec4u: goto label_1b6ec4;
        case 0x1b6ec8u: goto label_1b6ec8;
        case 0x1b6eccu: goto label_1b6ecc;
        case 0x1b6ed0u: goto label_1b6ed0;
        case 0x1b6ed4u: goto label_1b6ed4;
        case 0x1b6ed8u: goto label_1b6ed8;
        case 0x1b6edcu: goto label_1b6edc;
        case 0x1b6ee0u: goto label_1b6ee0;
        case 0x1b6ee4u: goto label_1b6ee4;
        case 0x1b6ee8u: goto label_1b6ee8;
        case 0x1b6eecu: goto label_1b6eec;
        case 0x1b6ef0u: goto label_1b6ef0;
        case 0x1b6ef4u: goto label_1b6ef4;
        case 0x1b6ef8u: goto label_1b6ef8;
        case 0x1b6efcu: goto label_1b6efc;
        case 0x1b6f00u: goto label_1b6f00;
        case 0x1b6f04u: goto label_1b6f04;
        case 0x1b6f08u: goto label_1b6f08;
        case 0x1b6f0cu: goto label_1b6f0c;
        case 0x1b6f10u: goto label_1b6f10;
        case 0x1b6f14u: goto label_1b6f14;
        case 0x1b6f18u: goto label_1b6f18;
        case 0x1b6f1cu: goto label_1b6f1c;
        case 0x1b6f20u: goto label_1b6f20;
        case 0x1b6f24u: goto label_1b6f24;
        case 0x1b6f28u: goto label_1b6f28;
        case 0x1b6f2cu: goto label_1b6f2c;
        case 0x1b6f30u: goto label_1b6f30;
        case 0x1b6f34u: goto label_1b6f34;
        case 0x1b6f38u: goto label_1b6f38;
        case 0x1b6f3cu: goto label_1b6f3c;
        case 0x1b6f40u: goto label_1b6f40;
        case 0x1b6f44u: goto label_1b6f44;
        case 0x1b6f48u: goto label_1b6f48;
        case 0x1b6f4cu: goto label_1b6f4c;
        case 0x1b6f50u: goto label_1b6f50;
        case 0x1b6f54u: goto label_1b6f54;
        case 0x1b6f58u: goto label_1b6f58;
        case 0x1b6f5cu: goto label_1b6f5c;
        case 0x1b6f60u: goto label_1b6f60;
        case 0x1b6f64u: goto label_1b6f64;
        case 0x1b6f68u: goto label_1b6f68;
        case 0x1b6f6cu: goto label_1b6f6c;
        case 0x1b6f70u: goto label_1b6f70;
        case 0x1b6f74u: goto label_1b6f74;
        case 0x1b6f78u: goto label_1b6f78;
        case 0x1b6f7cu: goto label_1b6f7c;
        case 0x1b6f80u: goto label_1b6f80;
        case 0x1b6f84u: goto label_1b6f84;
        case 0x1b6f88u: goto label_1b6f88;
        case 0x1b6f8cu: goto label_1b6f8c;
        case 0x1b6f90u: goto label_1b6f90;
        case 0x1b6f94u: goto label_1b6f94;
        case 0x1b6f98u: goto label_1b6f98;
        case 0x1b6f9cu: goto label_1b6f9c;
        case 0x1b6fa0u: goto label_1b6fa0;
        case 0x1b6fa4u: goto label_1b6fa4;
        case 0x1b6fa8u: goto label_1b6fa8;
        case 0x1b6facu: goto label_1b6fac;
        case 0x1b6fb0u: goto label_1b6fb0;
        case 0x1b6fb4u: goto label_1b6fb4;
        case 0x1b6fb8u: goto label_1b6fb8;
        case 0x1b6fbcu: goto label_1b6fbc;
        case 0x1b6fc0u: goto label_1b6fc0;
        case 0x1b6fc4u: goto label_1b6fc4;
        case 0x1b6fc8u: goto label_1b6fc8;
        case 0x1b6fccu: goto label_1b6fcc;
        case 0x1b6fd0u: goto label_1b6fd0;
        case 0x1b6fd4u: goto label_1b6fd4;
        case 0x1b6fd8u: goto label_1b6fd8;
        case 0x1b6fdcu: goto label_1b6fdc;
        case 0x1b6fe0u: goto label_1b6fe0;
        case 0x1b6fe4u: goto label_1b6fe4;
        case 0x1b6fe8u: goto label_1b6fe8;
        case 0x1b6fecu: goto label_1b6fec;
        case 0x1b6ff0u: goto label_1b6ff0;
        case 0x1b6ff4u: goto label_1b6ff4;
        case 0x1b6ff8u: goto label_1b6ff8;
        case 0x1b6ffcu: goto label_1b6ffc;
        case 0x1b7000u: goto label_1b7000;
        case 0x1b7004u: goto label_1b7004;
        case 0x1b7008u: goto label_1b7008;
        case 0x1b700cu: goto label_1b700c;
        case 0x1b7010u: goto label_1b7010;
        case 0x1b7014u: goto label_1b7014;
        case 0x1b7018u: goto label_1b7018;
        case 0x1b701cu: goto label_1b701c;
        case 0x1b7020u: goto label_1b7020;
        case 0x1b7024u: goto label_1b7024;
        case 0x1b7028u: goto label_1b7028;
        case 0x1b702cu: goto label_1b702c;
        case 0x1b7030u: goto label_1b7030;
        case 0x1b7034u: goto label_1b7034;
        case 0x1b7038u: goto label_1b7038;
        case 0x1b703cu: goto label_1b703c;
        case 0x1b7040u: goto label_1b7040;
        case 0x1b7044u: goto label_1b7044;
        case 0x1b7048u: goto label_1b7048;
        case 0x1b704cu: goto label_1b704c;
        case 0x1b7050u: goto label_1b7050;
        case 0x1b7054u: goto label_1b7054;
        case 0x1b7058u: goto label_1b7058;
        case 0x1b705cu: goto label_1b705c;
        case 0x1b7060u: goto label_1b7060;
        case 0x1b7064u: goto label_1b7064;
        case 0x1b7068u: goto label_1b7068;
        case 0x1b706cu: goto label_1b706c;
        case 0x1b7070u: goto label_1b7070;
        case 0x1b7074u: goto label_1b7074;
        case 0x1b7078u: goto label_1b7078;
        case 0x1b707cu: goto label_1b707c;
        case 0x1b7080u: goto label_1b7080;
        case 0x1b7084u: goto label_1b7084;
        case 0x1b7088u: goto label_1b7088;
        case 0x1b708cu: goto label_1b708c;
        case 0x1b7090u: goto label_1b7090;
        case 0x1b7094u: goto label_1b7094;
        case 0x1b7098u: goto label_1b7098;
        case 0x1b709cu: goto label_1b709c;
        case 0x1b70a0u: goto label_1b70a0;
        case 0x1b70a4u: goto label_1b70a4;
        case 0x1b70a8u: goto label_1b70a8;
        case 0x1b70acu: goto label_1b70ac;
        case 0x1b70b0u: goto label_1b70b0;
        case 0x1b70b4u: goto label_1b70b4;
        case 0x1b70b8u: goto label_1b70b8;
        case 0x1b70bcu: goto label_1b70bc;
        case 0x1b70c0u: goto label_1b70c0;
        case 0x1b70c4u: goto label_1b70c4;
        case 0x1b70c8u: goto label_1b70c8;
        case 0x1b70ccu: goto label_1b70cc;
        case 0x1b70d0u: goto label_1b70d0;
        case 0x1b70d4u: goto label_1b70d4;
        case 0x1b70d8u: goto label_1b70d8;
        case 0x1b70dcu: goto label_1b70dc;
        case 0x1b70e0u: goto label_1b70e0;
        case 0x1b70e4u: goto label_1b70e4;
        case 0x1b70e8u: goto label_1b70e8;
        case 0x1b70ecu: goto label_1b70ec;
        case 0x1b70f0u: goto label_1b70f0;
        case 0x1b70f4u: goto label_1b70f4;
        case 0x1b70f8u: goto label_1b70f8;
        case 0x1b70fcu: goto label_1b70fc;
        case 0x1b7100u: goto label_1b7100;
        case 0x1b7104u: goto label_1b7104;
        case 0x1b7108u: goto label_1b7108;
        case 0x1b710cu: goto label_1b710c;
        case 0x1b7110u: goto label_1b7110;
        case 0x1b7114u: goto label_1b7114;
        case 0x1b7118u: goto label_1b7118;
        case 0x1b711cu: goto label_1b711c;
        case 0x1b7120u: goto label_1b7120;
        case 0x1b7124u: goto label_1b7124;
        case 0x1b7128u: goto label_1b7128;
        case 0x1b712cu: goto label_1b712c;
        case 0x1b7130u: goto label_1b7130;
        case 0x1b7134u: goto label_1b7134;
        case 0x1b7138u: goto label_1b7138;
        case 0x1b713cu: goto label_1b713c;
        case 0x1b7140u: goto label_1b7140;
        case 0x1b7144u: goto label_1b7144;
        case 0x1b7148u: goto label_1b7148;
        case 0x1b714cu: goto label_1b714c;
        case 0x1b7150u: goto label_1b7150;
        case 0x1b7154u: goto label_1b7154;
        case 0x1b7158u: goto label_1b7158;
        case 0x1b715cu: goto label_1b715c;
        case 0x1b7160u: goto label_1b7160;
        case 0x1b7164u: goto label_1b7164;
        case 0x1b7168u: goto label_1b7168;
        case 0x1b716cu: goto label_1b716c;
        case 0x1b7170u: goto label_1b7170;
        case 0x1b7174u: goto label_1b7174;
        case 0x1b7178u: goto label_1b7178;
        case 0x1b717cu: goto label_1b717c;
        case 0x1b7180u: goto label_1b7180;
        case 0x1b7184u: goto label_1b7184;
        case 0x1b7188u: goto label_1b7188;
        case 0x1b718cu: goto label_1b718c;
        case 0x1b7190u: goto label_1b7190;
        case 0x1b7194u: goto label_1b7194;
        case 0x1b7198u: goto label_1b7198;
        case 0x1b719cu: goto label_1b719c;
        case 0x1b71a0u: goto label_1b71a0;
        case 0x1b71a4u: goto label_1b71a4;
        case 0x1b71a8u: goto label_1b71a8;
        case 0x1b71acu: goto label_1b71ac;
        case 0x1b71b0u: goto label_1b71b0;
        case 0x1b71b4u: goto label_1b71b4;
        case 0x1b71b8u: goto label_1b71b8;
        case 0x1b71bcu: goto label_1b71bc;
        case 0x1b71c0u: goto label_1b71c0;
        case 0x1b71c4u: goto label_1b71c4;
        case 0x1b71c8u: goto label_1b71c8;
        case 0x1b71ccu: goto label_1b71cc;
        case 0x1b71d0u: goto label_1b71d0;
        case 0x1b71d4u: goto label_1b71d4;
        case 0x1b71d8u: goto label_1b71d8;
        case 0x1b71dcu: goto label_1b71dc;
        case 0x1b71e0u: goto label_1b71e0;
        case 0x1b71e4u: goto label_1b71e4;
        case 0x1b71e8u: goto label_1b71e8;
        case 0x1b71ecu: goto label_1b71ec;
        case 0x1b71f0u: goto label_1b71f0;
        case 0x1b71f4u: goto label_1b71f4;
        case 0x1b71f8u: goto label_1b71f8;
        case 0x1b71fcu: goto label_1b71fc;
        case 0x1b7200u: goto label_1b7200;
        case 0x1b7204u: goto label_1b7204;
        case 0x1b7208u: goto label_1b7208;
        case 0x1b720cu: goto label_1b720c;
        case 0x1b7210u: goto label_1b7210;
        case 0x1b7214u: goto label_1b7214;
        case 0x1b7218u: goto label_1b7218;
        case 0x1b721cu: goto label_1b721c;
        case 0x1b7220u: goto label_1b7220;
        case 0x1b7224u: goto label_1b7224;
        case 0x1b7228u: goto label_1b7228;
        case 0x1b722cu: goto label_1b722c;
        case 0x1b7230u: goto label_1b7230;
        case 0x1b7234u: goto label_1b7234;
        case 0x1b7238u: goto label_1b7238;
        case 0x1b723cu: goto label_1b723c;
        case 0x1b7240u: goto label_1b7240;
        case 0x1b7244u: goto label_1b7244;
        case 0x1b7248u: goto label_1b7248;
        case 0x1b724cu: goto label_1b724c;
        case 0x1b7250u: goto label_1b7250;
        case 0x1b7254u: goto label_1b7254;
        case 0x1b7258u: goto label_1b7258;
        case 0x1b725cu: goto label_1b725c;
        case 0x1b7260u: goto label_1b7260;
        case 0x1b7264u: goto label_1b7264;
        case 0x1b7268u: goto label_1b7268;
        case 0x1b726cu: goto label_1b726c;
        case 0x1b7270u: goto label_1b7270;
        case 0x1b7274u: goto label_1b7274;
        case 0x1b7278u: goto label_1b7278;
        case 0x1b727cu: goto label_1b727c;
        case 0x1b7280u: goto label_1b7280;
        case 0x1b7284u: goto label_1b7284;
        case 0x1b7288u: goto label_1b7288;
        case 0x1b728cu: goto label_1b728c;
        case 0x1b7290u: goto label_1b7290;
        case 0x1b7294u: goto label_1b7294;
        case 0x1b7298u: goto label_1b7298;
        case 0x1b729cu: goto label_1b729c;
        case 0x1b72a0u: goto label_1b72a0;
        case 0x1b72a4u: goto label_1b72a4;
        case 0x1b72a8u: goto label_1b72a8;
        case 0x1b72acu: goto label_1b72ac;
        case 0x1b72b0u: goto label_1b72b0;
        case 0x1b72b4u: goto label_1b72b4;
        case 0x1b72b8u: goto label_1b72b8;
        case 0x1b72bcu: goto label_1b72bc;
        case 0x1b72c0u: goto label_1b72c0;
        case 0x1b72c4u: goto label_1b72c4;
        case 0x1b72c8u: goto label_1b72c8;
        case 0x1b72ccu: goto label_1b72cc;
        case 0x1b72d0u: goto label_1b72d0;
        case 0x1b72d4u: goto label_1b72d4;
        case 0x1b72d8u: goto label_1b72d8;
        case 0x1b72dcu: goto label_1b72dc;
        case 0x1b72e0u: goto label_1b72e0;
        case 0x1b72e4u: goto label_1b72e4;
        case 0x1b72e8u: goto label_1b72e8;
        case 0x1b72ecu: goto label_1b72ec;
        case 0x1b72f0u: goto label_1b72f0;
        case 0x1b72f4u: goto label_1b72f4;
        case 0x1b72f8u: goto label_1b72f8;
        case 0x1b72fcu: goto label_1b72fc;
        case 0x1b7300u: goto label_1b7300;
        case 0x1b7304u: goto label_1b7304;
        case 0x1b7308u: goto label_1b7308;
        case 0x1b730cu: goto label_1b730c;
        case 0x1b7310u: goto label_1b7310;
        case 0x1b7314u: goto label_1b7314;
        case 0x1b7318u: goto label_1b7318;
        case 0x1b731cu: goto label_1b731c;
        case 0x1b7320u: goto label_1b7320;
        case 0x1b7324u: goto label_1b7324;
        case 0x1b7328u: goto label_1b7328;
        case 0x1b732cu: goto label_1b732c;
        case 0x1b7330u: goto label_1b7330;
        case 0x1b7334u: goto label_1b7334;
        case 0x1b7338u: goto label_1b7338;
        case 0x1b733cu: goto label_1b733c;
        case 0x1b7340u: goto label_1b7340;
        case 0x1b7344u: goto label_1b7344;
        case 0x1b7348u: goto label_1b7348;
        case 0x1b734cu: goto label_1b734c;
        case 0x1b7350u: goto label_1b7350;
        case 0x1b7354u: goto label_1b7354;
        case 0x1b7358u: goto label_1b7358;
        case 0x1b735cu: goto label_1b735c;
        case 0x1b7360u: goto label_1b7360;
        case 0x1b7364u: goto label_1b7364;
        case 0x1b7368u: goto label_1b7368;
        case 0x1b736cu: goto label_1b736c;
        case 0x1b7370u: goto label_1b7370;
        case 0x1b7374u: goto label_1b7374;
        case 0x1b7378u: goto label_1b7378;
        case 0x1b737cu: goto label_1b737c;
        case 0x1b7380u: goto label_1b7380;
        case 0x1b7384u: goto label_1b7384;
        case 0x1b7388u: goto label_1b7388;
        case 0x1b738cu: goto label_1b738c;
        case 0x1b7390u: goto label_1b7390;
        case 0x1b7394u: goto label_1b7394;
        case 0x1b7398u: goto label_1b7398;
        case 0x1b739cu: goto label_1b739c;
        case 0x1b73a0u: goto label_1b73a0;
        case 0x1b73a4u: goto label_1b73a4;
        case 0x1b73a8u: goto label_1b73a8;
        case 0x1b73acu: goto label_1b73ac;
        case 0x1b73b0u: goto label_1b73b0;
        case 0x1b73b4u: goto label_1b73b4;
        case 0x1b73b8u: goto label_1b73b8;
        case 0x1b73bcu: goto label_1b73bc;
        case 0x1b73c0u: goto label_1b73c0;
        case 0x1b73c4u: goto label_1b73c4;
        case 0x1b73c8u: goto label_1b73c8;
        case 0x1b73ccu: goto label_1b73cc;
        case 0x1b73d0u: goto label_1b73d0;
        case 0x1b73d4u: goto label_1b73d4;
        case 0x1b73d8u: goto label_1b73d8;
        case 0x1b73dcu: goto label_1b73dc;
        case 0x1b73e0u: goto label_1b73e0;
        case 0x1b73e4u: goto label_1b73e4;
        case 0x1b73e8u: goto label_1b73e8;
        case 0x1b73ecu: goto label_1b73ec;
        case 0x1b73f0u: goto label_1b73f0;
        case 0x1b73f4u: goto label_1b73f4;
        case 0x1b73f8u: goto label_1b73f8;
        case 0x1b73fcu: goto label_1b73fc;
        case 0x1b7400u: goto label_1b7400;
        case 0x1b7404u: goto label_1b7404;
        case 0x1b7408u: goto label_1b7408;
        case 0x1b740cu: goto label_1b740c;
        case 0x1b7410u: goto label_1b7410;
        case 0x1b7414u: goto label_1b7414;
        case 0x1b7418u: goto label_1b7418;
        case 0x1b741cu: goto label_1b741c;
        case 0x1b7420u: goto label_1b7420;
        case 0x1b7424u: goto label_1b7424;
        case 0x1b7428u: goto label_1b7428;
        case 0x1b742cu: goto label_1b742c;
        case 0x1b7430u: goto label_1b7430;
        case 0x1b7434u: goto label_1b7434;
        case 0x1b7438u: goto label_1b7438;
        case 0x1b743cu: goto label_1b743c;
        case 0x1b7440u: goto label_1b7440;
        case 0x1b7444u: goto label_1b7444;
        case 0x1b7448u: goto label_1b7448;
        case 0x1b744cu: goto label_1b744c;
        case 0x1b7450u: goto label_1b7450;
        case 0x1b7454u: goto label_1b7454;
        case 0x1b7458u: goto label_1b7458;
        case 0x1b745cu: goto label_1b745c;
        case 0x1b7460u: goto label_1b7460;
        case 0x1b7464u: goto label_1b7464;
        case 0x1b7468u: goto label_1b7468;
        case 0x1b746cu: goto label_1b746c;
        case 0x1b7470u: goto label_1b7470;
        case 0x1b7474u: goto label_1b7474;
        case 0x1b7478u: goto label_1b7478;
        case 0x1b747cu: goto label_1b747c;
        case 0x1b7480u: goto label_1b7480;
        case 0x1b7484u: goto label_1b7484;
        case 0x1b7488u: goto label_1b7488;
        case 0x1b748cu: goto label_1b748c;
        case 0x1b7490u: goto label_1b7490;
        case 0x1b7494u: goto label_1b7494;
        case 0x1b7498u: goto label_1b7498;
        case 0x1b749cu: goto label_1b749c;
        case 0x1b74a0u: goto label_1b74a0;
        case 0x1b74a4u: goto label_1b74a4;
        case 0x1b74a8u: goto label_1b74a8;
        case 0x1b74acu: goto label_1b74ac;
        case 0x1b74b0u: goto label_1b74b0;
        case 0x1b74b4u: goto label_1b74b4;
        case 0x1b74b8u: goto label_1b74b8;
        case 0x1b74bcu: goto label_1b74bc;
        case 0x1b74c0u: goto label_1b74c0;
        case 0x1b74c4u: goto label_1b74c4;
        case 0x1b74c8u: goto label_1b74c8;
        case 0x1b74ccu: goto label_1b74cc;
        case 0x1b74d0u: goto label_1b74d0;
        case 0x1b74d4u: goto label_1b74d4;
        case 0x1b74d8u: goto label_1b74d8;
        case 0x1b74dcu: goto label_1b74dc;
        case 0x1b74e0u: goto label_1b74e0;
        case 0x1b74e4u: goto label_1b74e4;
        case 0x1b74e8u: goto label_1b74e8;
        case 0x1b74ecu: goto label_1b74ec;
        case 0x1b74f0u: goto label_1b74f0;
        case 0x1b74f4u: goto label_1b74f4;
        case 0x1b74f8u: goto label_1b74f8;
        case 0x1b74fcu: goto label_1b74fc;
        case 0x1b7500u: goto label_1b7500;
        case 0x1b7504u: goto label_1b7504;
        case 0x1b7508u: goto label_1b7508;
        case 0x1b750cu: goto label_1b750c;
        case 0x1b7510u: goto label_1b7510;
        case 0x1b7514u: goto label_1b7514;
        case 0x1b7518u: goto label_1b7518;
        case 0x1b751cu: goto label_1b751c;
        case 0x1b7520u: goto label_1b7520;
        case 0x1b7524u: goto label_1b7524;
        case 0x1b7528u: goto label_1b7528;
        case 0x1b752cu: goto label_1b752c;
        case 0x1b7530u: goto label_1b7530;
        case 0x1b7534u: goto label_1b7534;
        case 0x1b7538u: goto label_1b7538;
        case 0x1b753cu: goto label_1b753c;
        case 0x1b7540u: goto label_1b7540;
        case 0x1b7544u: goto label_1b7544;
        case 0x1b7548u: goto label_1b7548;
        case 0x1b754cu: goto label_1b754c;
        case 0x1b7550u: goto label_1b7550;
        case 0x1b7554u: goto label_1b7554;
        case 0x1b7558u: goto label_1b7558;
        case 0x1b755cu: goto label_1b755c;
        case 0x1b7560u: goto label_1b7560;
        case 0x1b7564u: goto label_1b7564;
        case 0x1b7568u: goto label_1b7568;
        case 0x1b756cu: goto label_1b756c;
        case 0x1b7570u: goto label_1b7570;
        case 0x1b7574u: goto label_1b7574;
        case 0x1b7578u: goto label_1b7578;
        case 0x1b757cu: goto label_1b757c;
        case 0x1b7580u: goto label_1b7580;
        case 0x1b7584u: goto label_1b7584;
        case 0x1b7588u: goto label_1b7588;
        case 0x1b758cu: goto label_1b758c;
        case 0x1b7590u: goto label_1b7590;
        case 0x1b7594u: goto label_1b7594;
        case 0x1b7598u: goto label_1b7598;
        case 0x1b759cu: goto label_1b759c;
        case 0x1b75a0u: goto label_1b75a0;
        case 0x1b75a4u: goto label_1b75a4;
        case 0x1b75a8u: goto label_1b75a8;
        case 0x1b75acu: goto label_1b75ac;
        case 0x1b75b0u: goto label_1b75b0;
        case 0x1b75b4u: goto label_1b75b4;
        case 0x1b75b8u: goto label_1b75b8;
        case 0x1b75bcu: goto label_1b75bc;
        case 0x1b75c0u: goto label_1b75c0;
        case 0x1b75c4u: goto label_1b75c4;
        case 0x1b75c8u: goto label_1b75c8;
        case 0x1b75ccu: goto label_1b75cc;
        case 0x1b75d0u: goto label_1b75d0;
        case 0x1b75d4u: goto label_1b75d4;
        case 0x1b75d8u: goto label_1b75d8;
        case 0x1b75dcu: goto label_1b75dc;
        case 0x1b75e0u: goto label_1b75e0;
        case 0x1b75e4u: goto label_1b75e4;
        case 0x1b75e8u: goto label_1b75e8;
        case 0x1b75ecu: goto label_1b75ec;
        case 0x1b75f0u: goto label_1b75f0;
        case 0x1b75f4u: goto label_1b75f4;
        case 0x1b75f8u: goto label_1b75f8;
        case 0x1b75fcu: goto label_1b75fc;
        case 0x1b7600u: goto label_1b7600;
        case 0x1b7604u: goto label_1b7604;
        case 0x1b7608u: goto label_1b7608;
        case 0x1b760cu: goto label_1b760c;
        case 0x1b7610u: goto label_1b7610;
        case 0x1b7614u: goto label_1b7614;
        case 0x1b7618u: goto label_1b7618;
        case 0x1b761cu: goto label_1b761c;
        case 0x1b7620u: goto label_1b7620;
        case 0x1b7624u: goto label_1b7624;
        case 0x1b7628u: goto label_1b7628;
        case 0x1b762cu: goto label_1b762c;
        case 0x1b7630u: goto label_1b7630;
        case 0x1b7634u: goto label_1b7634;
        case 0x1b7638u: goto label_1b7638;
        case 0x1b763cu: goto label_1b763c;
        case 0x1b7640u: goto label_1b7640;
        case 0x1b7644u: goto label_1b7644;
        case 0x1b7648u: goto label_1b7648;
        case 0x1b764cu: goto label_1b764c;
        case 0x1b7650u: goto label_1b7650;
        case 0x1b7654u: goto label_1b7654;
        case 0x1b7658u: goto label_1b7658;
        case 0x1b765cu: goto label_1b765c;
        case 0x1b7660u: goto label_1b7660;
        case 0x1b7664u: goto label_1b7664;
        case 0x1b7668u: goto label_1b7668;
        case 0x1b766cu: goto label_1b766c;
        case 0x1b7670u: goto label_1b7670;
        case 0x1b7674u: goto label_1b7674;
        case 0x1b7678u: goto label_1b7678;
        case 0x1b767cu: goto label_1b767c;
        case 0x1b7680u: goto label_1b7680;
        case 0x1b7684u: goto label_1b7684;
        case 0x1b7688u: goto label_1b7688;
        case 0x1b768cu: goto label_1b768c;
        case 0x1b7690u: goto label_1b7690;
        case 0x1b7694u: goto label_1b7694;
        case 0x1b7698u: goto label_1b7698;
        case 0x1b769cu: goto label_1b769c;
        case 0x1b76a0u: goto label_1b76a0;
        case 0x1b76a4u: goto label_1b76a4;
        case 0x1b76a8u: goto label_1b76a8;
        case 0x1b76acu: goto label_1b76ac;
        case 0x1b76b0u: goto label_1b76b0;
        case 0x1b76b4u: goto label_1b76b4;
        case 0x1b76b8u: goto label_1b76b8;
        case 0x1b76bcu: goto label_1b76bc;
        case 0x1b76c0u: goto label_1b76c0;
        case 0x1b76c4u: goto label_1b76c4;
        case 0x1b76c8u: goto label_1b76c8;
        case 0x1b76ccu: goto label_1b76cc;
        case 0x1b76d0u: goto label_1b76d0;
        case 0x1b76d4u: goto label_1b76d4;
        case 0x1b76d8u: goto label_1b76d8;
        case 0x1b76dcu: goto label_1b76dc;
        case 0x1b76e0u: goto label_1b76e0;
        case 0x1b76e4u: goto label_1b76e4;
        case 0x1b76e8u: goto label_1b76e8;
        case 0x1b76ecu: goto label_1b76ec;
        case 0x1b76f0u: goto label_1b76f0;
        case 0x1b76f4u: goto label_1b76f4;
        case 0x1b76f8u: goto label_1b76f8;
        case 0x1b76fcu: goto label_1b76fc;
        case 0x1b7700u: goto label_1b7700;
        case 0x1b7704u: goto label_1b7704;
        case 0x1b7708u: goto label_1b7708;
        case 0x1b770cu: goto label_1b770c;
        case 0x1b7710u: goto label_1b7710;
        case 0x1b7714u: goto label_1b7714;
        case 0x1b7718u: goto label_1b7718;
        case 0x1b771cu: goto label_1b771c;
        case 0x1b7720u: goto label_1b7720;
        case 0x1b7724u: goto label_1b7724;
        case 0x1b7728u: goto label_1b7728;
        case 0x1b772cu: goto label_1b772c;
        case 0x1b7730u: goto label_1b7730;
        case 0x1b7734u: goto label_1b7734;
        case 0x1b7738u: goto label_1b7738;
        case 0x1b773cu: goto label_1b773c;
        case 0x1b7740u: goto label_1b7740;
        case 0x1b7744u: goto label_1b7744;
        case 0x1b7748u: goto label_1b7748;
        case 0x1b774cu: goto label_1b774c;
        case 0x1b7750u: goto label_1b7750;
        case 0x1b7754u: goto label_1b7754;
        case 0x1b7758u: goto label_1b7758;
        case 0x1b775cu: goto label_1b775c;
        case 0x1b7760u: goto label_1b7760;
        case 0x1b7764u: goto label_1b7764;
        case 0x1b7768u: goto label_1b7768;
        case 0x1b776cu: goto label_1b776c;
        case 0x1b7770u: goto label_1b7770;
        case 0x1b7774u: goto label_1b7774;
        case 0x1b7778u: goto label_1b7778;
        case 0x1b777cu: goto label_1b777c;
        case 0x1b7780u: goto label_1b7780;
        case 0x1b7784u: goto label_1b7784;
        case 0x1b7788u: goto label_1b7788;
        case 0x1b778cu: goto label_1b778c;
        case 0x1b7790u: goto label_1b7790;
        case 0x1b7794u: goto label_1b7794;
        case 0x1b7798u: goto label_1b7798;
        case 0x1b779cu: goto label_1b779c;
        case 0x1b77a0u: goto label_1b77a0;
        case 0x1b77a4u: goto label_1b77a4;
        case 0x1b77a8u: goto label_1b77a8;
        case 0x1b77acu: goto label_1b77ac;
        case 0x1b77b0u: goto label_1b77b0;
        case 0x1b77b4u: goto label_1b77b4;
        case 0x1b77b8u: goto label_1b77b8;
        case 0x1b77bcu: goto label_1b77bc;
        case 0x1b77c0u: goto label_1b77c0;
        case 0x1b77c4u: goto label_1b77c4;
        case 0x1b77c8u: goto label_1b77c8;
        case 0x1b77ccu: goto label_1b77cc;
        case 0x1b77d0u: goto label_1b77d0;
        case 0x1b77d4u: goto label_1b77d4;
        case 0x1b77d8u: goto label_1b77d8;
        case 0x1b77dcu: goto label_1b77dc;
        case 0x1b77e0u: goto label_1b77e0;
        case 0x1b77e4u: goto label_1b77e4;
        case 0x1b77e8u: goto label_1b77e8;
        case 0x1b77ecu: goto label_1b77ec;
        case 0x1b77f0u: goto label_1b77f0;
        case 0x1b77f4u: goto label_1b77f4;
        case 0x1b77f8u: goto label_1b77f8;
        case 0x1b77fcu: goto label_1b77fc;
        case 0x1b7800u: goto label_1b7800;
        case 0x1b7804u: goto label_1b7804;
        case 0x1b7808u: goto label_1b7808;
        case 0x1b780cu: goto label_1b780c;
        case 0x1b7810u: goto label_1b7810;
        case 0x1b7814u: goto label_1b7814;
        case 0x1b7818u: goto label_1b7818;
        case 0x1b781cu: goto label_1b781c;
        case 0x1b7820u: goto label_1b7820;
        case 0x1b7824u: goto label_1b7824;
        case 0x1b7828u: goto label_1b7828;
        case 0x1b782cu: goto label_1b782c;
        case 0x1b7830u: goto label_1b7830;
        case 0x1b7834u: goto label_1b7834;
        case 0x1b7838u: goto label_1b7838;
        case 0x1b783cu: goto label_1b783c;
        case 0x1b7840u: goto label_1b7840;
        case 0x1b7844u: goto label_1b7844;
        case 0x1b7848u: goto label_1b7848;
        case 0x1b784cu: goto label_1b784c;
        case 0x1b7850u: goto label_1b7850;
        case 0x1b7854u: goto label_1b7854;
        case 0x1b7858u: goto label_1b7858;
        case 0x1b785cu: goto label_1b785c;
        case 0x1b7860u: goto label_1b7860;
        case 0x1b7864u: goto label_1b7864;
        case 0x1b7868u: goto label_1b7868;
        case 0x1b786cu: goto label_1b786c;
        case 0x1b7870u: goto label_1b7870;
        case 0x1b7874u: goto label_1b7874;
        case 0x1b7878u: goto label_1b7878;
        case 0x1b787cu: goto label_1b787c;
        case 0x1b7880u: goto label_1b7880;
        case 0x1b7884u: goto label_1b7884;
        case 0x1b7888u: goto label_1b7888;
        case 0x1b788cu: goto label_1b788c;
        case 0x1b7890u: goto label_1b7890;
        case 0x1b7894u: goto label_1b7894;
        case 0x1b7898u: goto label_1b7898;
        case 0x1b789cu: goto label_1b789c;
        case 0x1b78a0u: goto label_1b78a0;
        case 0x1b78a4u: goto label_1b78a4;
        case 0x1b78a8u: goto label_1b78a8;
        case 0x1b78acu: goto label_1b78ac;
        case 0x1b78b0u: goto label_1b78b0;
        case 0x1b78b4u: goto label_1b78b4;
        case 0x1b78b8u: goto label_1b78b8;
        case 0x1b78bcu: goto label_1b78bc;
        case 0x1b78c0u: goto label_1b78c0;
        case 0x1b78c4u: goto label_1b78c4;
        case 0x1b78c8u: goto label_1b78c8;
        case 0x1b78ccu: goto label_1b78cc;
        case 0x1b78d0u: goto label_1b78d0;
        case 0x1b78d4u: goto label_1b78d4;
        case 0x1b78d8u: goto label_1b78d8;
        case 0x1b78dcu: goto label_1b78dc;
        case 0x1b78e0u: goto label_1b78e0;
        case 0x1b78e4u: goto label_1b78e4;
        case 0x1b78e8u: goto label_1b78e8;
        case 0x1b78ecu: goto label_1b78ec;
        case 0x1b78f0u: goto label_1b78f0;
        case 0x1b78f4u: goto label_1b78f4;
        case 0x1b78f8u: goto label_1b78f8;
        case 0x1b78fcu: goto label_1b78fc;
        case 0x1b7900u: goto label_1b7900;
        case 0x1b7904u: goto label_1b7904;
        case 0x1b7908u: goto label_1b7908;
        case 0x1b790cu: goto label_1b790c;
        case 0x1b7910u: goto label_1b7910;
        case 0x1b7914u: goto label_1b7914;
        case 0x1b7918u: goto label_1b7918;
        case 0x1b791cu: goto label_1b791c;
        case 0x1b7920u: goto label_1b7920;
        case 0x1b7924u: goto label_1b7924;
        case 0x1b7928u: goto label_1b7928;
        case 0x1b792cu: goto label_1b792c;
        case 0x1b7930u: goto label_1b7930;
        case 0x1b7934u: goto label_1b7934;
        case 0x1b7938u: goto label_1b7938;
        case 0x1b793cu: goto label_1b793c;
        case 0x1b7940u: goto label_1b7940;
        case 0x1b7944u: goto label_1b7944;
        case 0x1b7948u: goto label_1b7948;
        case 0x1b794cu: goto label_1b794c;
        case 0x1b7950u: goto label_1b7950;
        case 0x1b7954u: goto label_1b7954;
        case 0x1b7958u: goto label_1b7958;
        case 0x1b795cu: goto label_1b795c;
        case 0x1b7960u: goto label_1b7960;
        case 0x1b7964u: goto label_1b7964;
        case 0x1b7968u: goto label_1b7968;
        case 0x1b796cu: goto label_1b796c;
        case 0x1b7970u: goto label_1b7970;
        case 0x1b7974u: goto label_1b7974;
        case 0x1b7978u: goto label_1b7978;
        case 0x1b797cu: goto label_1b797c;
        case 0x1b7980u: goto label_1b7980;
        case 0x1b7984u: goto label_1b7984;
        case 0x1b7988u: goto label_1b7988;
        case 0x1b798cu: goto label_1b798c;
        case 0x1b7990u: goto label_1b7990;
        case 0x1b7994u: goto label_1b7994;
        case 0x1b7998u: goto label_1b7998;
        case 0x1b799cu: goto label_1b799c;
        case 0x1b79a0u: goto label_1b79a0;
        case 0x1b79a4u: goto label_1b79a4;
        case 0x1b79a8u: goto label_1b79a8;
        case 0x1b79acu: goto label_1b79ac;
        case 0x1b79b0u: goto label_1b79b0;
        case 0x1b79b4u: goto label_1b79b4;
        case 0x1b79b8u: goto label_1b79b8;
        case 0x1b79bcu: goto label_1b79bc;
        case 0x1b79c0u: goto label_1b79c0;
        case 0x1b79c4u: goto label_1b79c4;
        case 0x1b79c8u: goto label_1b79c8;
        case 0x1b79ccu: goto label_1b79cc;
        case 0x1b79d0u: goto label_1b79d0;
        case 0x1b79d4u: goto label_1b79d4;
        case 0x1b79d8u: goto label_1b79d8;
        case 0x1b79dcu: goto label_1b79dc;
        case 0x1b79e0u: goto label_1b79e0;
        case 0x1b79e4u: goto label_1b79e4;
        case 0x1b79e8u: goto label_1b79e8;
        case 0x1b79ecu: goto label_1b79ec;
        case 0x1b79f0u: goto label_1b79f0;
        case 0x1b79f4u: goto label_1b79f4;
        case 0x1b79f8u: goto label_1b79f8;
        case 0x1b79fcu: goto label_1b79fc;
        case 0x1b7a00u: goto label_1b7a00;
        case 0x1b7a04u: goto label_1b7a04;
        case 0x1b7a08u: goto label_1b7a08;
        case 0x1b7a0cu: goto label_1b7a0c;
        case 0x1b7a10u: goto label_1b7a10;
        case 0x1b7a14u: goto label_1b7a14;
        case 0x1b7a18u: goto label_1b7a18;
        case 0x1b7a1cu: goto label_1b7a1c;
        case 0x1b7a20u: goto label_1b7a20;
        case 0x1b7a24u: goto label_1b7a24;
        case 0x1b7a28u: goto label_1b7a28;
        case 0x1b7a2cu: goto label_1b7a2c;
        case 0x1b7a30u: goto label_1b7a30;
        case 0x1b7a34u: goto label_1b7a34;
        case 0x1b7a38u: goto label_1b7a38;
        case 0x1b7a3cu: goto label_1b7a3c;
        case 0x1b7a40u: goto label_1b7a40;
        case 0x1b7a44u: goto label_1b7a44;
        case 0x1b7a48u: goto label_1b7a48;
        case 0x1b7a4cu: goto label_1b7a4c;
        case 0x1b7a50u: goto label_1b7a50;
        case 0x1b7a54u: goto label_1b7a54;
        case 0x1b7a58u: goto label_1b7a58;
        case 0x1b7a5cu: goto label_1b7a5c;
        case 0x1b7a60u: goto label_1b7a60;
        case 0x1b7a64u: goto label_1b7a64;
        case 0x1b7a68u: goto label_1b7a68;
        case 0x1b7a6cu: goto label_1b7a6c;
        case 0x1b7a70u: goto label_1b7a70;
        case 0x1b7a74u: goto label_1b7a74;
        case 0x1b7a78u: goto label_1b7a78;
        case 0x1b7a7cu: goto label_1b7a7c;
        case 0x1b7a80u: goto label_1b7a80;
        case 0x1b7a84u: goto label_1b7a84;
        case 0x1b7a88u: goto label_1b7a88;
        case 0x1b7a8cu: goto label_1b7a8c;
        case 0x1b7a90u: goto label_1b7a90;
        case 0x1b7a94u: goto label_1b7a94;
        case 0x1b7a98u: goto label_1b7a98;
        case 0x1b7a9cu: goto label_1b7a9c;
        case 0x1b7aa0u: goto label_1b7aa0;
        case 0x1b7aa4u: goto label_1b7aa4;
        case 0x1b7aa8u: goto label_1b7aa8;
        case 0x1b7aacu: goto label_1b7aac;
        case 0x1b7ab0u: goto label_1b7ab0;
        case 0x1b7ab4u: goto label_1b7ab4;
        case 0x1b7ab8u: goto label_1b7ab8;
        case 0x1b7abcu: goto label_1b7abc;
        case 0x1b7ac0u: goto label_1b7ac0;
        case 0x1b7ac4u: goto label_1b7ac4;
        case 0x1b7ac8u: goto label_1b7ac8;
        case 0x1b7accu: goto label_1b7acc;
        case 0x1b7ad0u: goto label_1b7ad0;
        case 0x1b7ad4u: goto label_1b7ad4;
        case 0x1b7ad8u: goto label_1b7ad8;
        case 0x1b7adcu: goto label_1b7adc;
        case 0x1b7ae0u: goto label_1b7ae0;
        case 0x1b7ae4u: goto label_1b7ae4;
        case 0x1b7ae8u: goto label_1b7ae8;
        case 0x1b7aecu: goto label_1b7aec;
        case 0x1b7af0u: goto label_1b7af0;
        case 0x1b7af4u: goto label_1b7af4;
        case 0x1b7af8u: goto label_1b7af8;
        case 0x1b7afcu: goto label_1b7afc;
        case 0x1b7b00u: goto label_1b7b00;
        case 0x1b7b04u: goto label_1b7b04;
        case 0x1b7b08u: goto label_1b7b08;
        case 0x1b7b0cu: goto label_1b7b0c;
        case 0x1b7b10u: goto label_1b7b10;
        case 0x1b7b14u: goto label_1b7b14;
        case 0x1b7b18u: goto label_1b7b18;
        case 0x1b7b1cu: goto label_1b7b1c;
        case 0x1b7b20u: goto label_1b7b20;
        case 0x1b7b24u: goto label_1b7b24;
        case 0x1b7b28u: goto label_1b7b28;
        case 0x1b7b2cu: goto label_1b7b2c;
        case 0x1b7b30u: goto label_1b7b30;
        case 0x1b7b34u: goto label_1b7b34;
        case 0x1b7b38u: goto label_1b7b38;
        case 0x1b7b3cu: goto label_1b7b3c;
        case 0x1b7b40u: goto label_1b7b40;
        case 0x1b7b44u: goto label_1b7b44;
        case 0x1b7b48u: goto label_1b7b48;
        case 0x1b7b4cu: goto label_1b7b4c;
        case 0x1b7b50u: goto label_1b7b50;
        case 0x1b7b54u: goto label_1b7b54;
        case 0x1b7b58u: goto label_1b7b58;
        case 0x1b7b5cu: goto label_1b7b5c;
        case 0x1b7b60u: goto label_1b7b60;
        case 0x1b7b64u: goto label_1b7b64;
        case 0x1b7b68u: goto label_1b7b68;
        case 0x1b7b6cu: goto label_1b7b6c;
        case 0x1b7b70u: goto label_1b7b70;
        case 0x1b7b74u: goto label_1b7b74;
        case 0x1b7b78u: goto label_1b7b78;
        case 0x1b7b7cu: goto label_1b7b7c;
        case 0x1b7b80u: goto label_1b7b80;
        case 0x1b7b84u: goto label_1b7b84;
        case 0x1b7b88u: goto label_1b7b88;
        case 0x1b7b8cu: goto label_1b7b8c;
        case 0x1b7b90u: goto label_1b7b90;
        case 0x1b7b94u: goto label_1b7b94;
        case 0x1b7b98u: goto label_1b7b98;
        case 0x1b7b9cu: goto label_1b7b9c;
        case 0x1b7ba0u: goto label_1b7ba0;
        case 0x1b7ba4u: goto label_1b7ba4;
        case 0x1b7ba8u: goto label_1b7ba8;
        case 0x1b7bacu: goto label_1b7bac;
        case 0x1b7bb0u: goto label_1b7bb0;
        case 0x1b7bb4u: goto label_1b7bb4;
        case 0x1b7bb8u: goto label_1b7bb8;
        case 0x1b7bbcu: goto label_1b7bbc;
        case 0x1b7bc0u: goto label_1b7bc0;
        case 0x1b7bc4u: goto label_1b7bc4;
        case 0x1b7bc8u: goto label_1b7bc8;
        case 0x1b7bccu: goto label_1b7bcc;
        case 0x1b7bd0u: goto label_1b7bd0;
        case 0x1b7bd4u: goto label_1b7bd4;
        case 0x1b7bd8u: goto label_1b7bd8;
        case 0x1b7bdcu: goto label_1b7bdc;
        case 0x1b7be0u: goto label_1b7be0;
        case 0x1b7be4u: goto label_1b7be4;
        case 0x1b7be8u: goto label_1b7be8;
        case 0x1b7becu: goto label_1b7bec;
        case 0x1b7bf0u: goto label_1b7bf0;
        case 0x1b7bf4u: goto label_1b7bf4;
        case 0x1b7bf8u: goto label_1b7bf8;
        case 0x1b7bfcu: goto label_1b7bfc;
        case 0x1b7c00u: goto label_1b7c00;
        case 0x1b7c04u: goto label_1b7c04;
        case 0x1b7c08u: goto label_1b7c08;
        case 0x1b7c0cu: goto label_1b7c0c;
        case 0x1b7c10u: goto label_1b7c10;
        case 0x1b7c14u: goto label_1b7c14;
        case 0x1b7c18u: goto label_1b7c18;
        case 0x1b7c1cu: goto label_1b7c1c;
        case 0x1b7c20u: goto label_1b7c20;
        case 0x1b7c24u: goto label_1b7c24;
        case 0x1b7c28u: goto label_1b7c28;
        case 0x1b7c2cu: goto label_1b7c2c;
        case 0x1b7c30u: goto label_1b7c30;
        case 0x1b7c34u: goto label_1b7c34;
        case 0x1b7c38u: goto label_1b7c38;
        case 0x1b7c3cu: goto label_1b7c3c;
        case 0x1b7c40u: goto label_1b7c40;
        case 0x1b7c44u: goto label_1b7c44;
        case 0x1b7c48u: goto label_1b7c48;
        case 0x1b7c4cu: goto label_1b7c4c;
        case 0x1b7c50u: goto label_1b7c50;
        case 0x1b7c54u: goto label_1b7c54;
        case 0x1b7c58u: goto label_1b7c58;
        case 0x1b7c5cu: goto label_1b7c5c;
        case 0x1b7c60u: goto label_1b7c60;
        case 0x1b7c64u: goto label_1b7c64;
        case 0x1b7c68u: goto label_1b7c68;
        case 0x1b7c6cu: goto label_1b7c6c;
        case 0x1b7c70u: goto label_1b7c70;
        case 0x1b7c74u: goto label_1b7c74;
        case 0x1b7c78u: goto label_1b7c78;
        case 0x1b7c7cu: goto label_1b7c7c;
        case 0x1b7c80u: goto label_1b7c80;
        case 0x1b7c84u: goto label_1b7c84;
        case 0x1b7c88u: goto label_1b7c88;
        case 0x1b7c8cu: goto label_1b7c8c;
        case 0x1b7c90u: goto label_1b7c90;
        case 0x1b7c94u: goto label_1b7c94;
        case 0x1b7c98u: goto label_1b7c98;
        case 0x1b7c9cu: goto label_1b7c9c;
        case 0x1b7ca0u: goto label_1b7ca0;
        case 0x1b7ca4u: goto label_1b7ca4;
        case 0x1b7ca8u: goto label_1b7ca8;
        case 0x1b7cacu: goto label_1b7cac;
        case 0x1b7cb0u: goto label_1b7cb0;
        case 0x1b7cb4u: goto label_1b7cb4;
        case 0x1b7cb8u: goto label_1b7cb8;
        case 0x1b7cbcu: goto label_1b7cbc;
        case 0x1b7cc0u: goto label_1b7cc0;
        case 0x1b7cc4u: goto label_1b7cc4;
        case 0x1b7cc8u: goto label_1b7cc8;
        case 0x1b7cccu: goto label_1b7ccc;
        case 0x1b7cd0u: goto label_1b7cd0;
        case 0x1b7cd4u: goto label_1b7cd4;
        case 0x1b7cd8u: goto label_1b7cd8;
        case 0x1b7cdcu: goto label_1b7cdc;
        case 0x1b7ce0u: goto label_1b7ce0;
        case 0x1b7ce4u: goto label_1b7ce4;
        case 0x1b7ce8u: goto label_1b7ce8;
        case 0x1b7cecu: goto label_1b7cec;
        case 0x1b7cf0u: goto label_1b7cf0;
        case 0x1b7cf4u: goto label_1b7cf4;
        case 0x1b7cf8u: goto label_1b7cf8;
        case 0x1b7cfcu: goto label_1b7cfc;
        case 0x1b7d00u: goto label_1b7d00;
        case 0x1b7d04u: goto label_1b7d04;
        case 0x1b7d08u: goto label_1b7d08;
        case 0x1b7d0cu: goto label_1b7d0c;
        case 0x1b7d10u: goto label_1b7d10;
        case 0x1b7d14u: goto label_1b7d14;
        case 0x1b7d18u: goto label_1b7d18;
        case 0x1b7d1cu: goto label_1b7d1c;
        case 0x1b7d20u: goto label_1b7d20;
        case 0x1b7d24u: goto label_1b7d24;
        case 0x1b7d28u: goto label_1b7d28;
        case 0x1b7d2cu: goto label_1b7d2c;
        case 0x1b7d30u: goto label_1b7d30;
        case 0x1b7d34u: goto label_1b7d34;
        case 0x1b7d38u: goto label_1b7d38;
        case 0x1b7d3cu: goto label_1b7d3c;
        case 0x1b7d40u: goto label_1b7d40;
        case 0x1b7d44u: goto label_1b7d44;
        case 0x1b7d48u: goto label_1b7d48;
        case 0x1b7d4cu: goto label_1b7d4c;
        case 0x1b7d50u: goto label_1b7d50;
        case 0x1b7d54u: goto label_1b7d54;
        case 0x1b7d58u: goto label_1b7d58;
        case 0x1b7d5cu: goto label_1b7d5c;
        case 0x1b7d60u: goto label_1b7d60;
        case 0x1b7d64u: goto label_1b7d64;
        case 0x1b7d68u: goto label_1b7d68;
        case 0x1b7d6cu: goto label_1b7d6c;
        case 0x1b7d70u: goto label_1b7d70;
        case 0x1b7d74u: goto label_1b7d74;
        case 0x1b7d78u: goto label_1b7d78;
        case 0x1b7d7cu: goto label_1b7d7c;
        case 0x1b7d80u: goto label_1b7d80;
        case 0x1b7d84u: goto label_1b7d84;
        case 0x1b7d88u: goto label_1b7d88;
        case 0x1b7d8cu: goto label_1b7d8c;
        case 0x1b7d90u: goto label_1b7d90;
        case 0x1b7d94u: goto label_1b7d94;
        case 0x1b7d98u: goto label_1b7d98;
        case 0x1b7d9cu: goto label_1b7d9c;
        case 0x1b7da0u: goto label_1b7da0;
        case 0x1b7da4u: goto label_1b7da4;
        case 0x1b7da8u: goto label_1b7da8;
        case 0x1b7dacu: goto label_1b7dac;
        case 0x1b7db0u: goto label_1b7db0;
        case 0x1b7db4u: goto label_1b7db4;
        case 0x1b7db8u: goto label_1b7db8;
        case 0x1b7dbcu: goto label_1b7dbc;
        case 0x1b7dc0u: goto label_1b7dc0;
        case 0x1b7dc4u: goto label_1b7dc4;
        case 0x1b7dc8u: goto label_1b7dc8;
        case 0x1b7dccu: goto label_1b7dcc;
        case 0x1b7dd0u: goto label_1b7dd0;
        case 0x1b7dd4u: goto label_1b7dd4;
        case 0x1b7dd8u: goto label_1b7dd8;
        case 0x1b7ddcu: goto label_1b7ddc;
        case 0x1b7de0u: goto label_1b7de0;
        case 0x1b7de4u: goto label_1b7de4;
        case 0x1b7de8u: goto label_1b7de8;
        case 0x1b7decu: goto label_1b7dec;
        case 0x1b7df0u: goto label_1b7df0;
        case 0x1b7df4u: goto label_1b7df4;
        case 0x1b7df8u: goto label_1b7df8;
        case 0x1b7dfcu: goto label_1b7dfc;
        case 0x1b7e00u: goto label_1b7e00;
        case 0x1b7e04u: goto label_1b7e04;
        case 0x1b7e08u: goto label_1b7e08;
        case 0x1b7e0cu: goto label_1b7e0c;
        case 0x1b7e10u: goto label_1b7e10;
        case 0x1b7e14u: goto label_1b7e14;
        case 0x1b7e18u: goto label_1b7e18;
        case 0x1b7e1cu: goto label_1b7e1c;
        case 0x1b7e20u: goto label_1b7e20;
        case 0x1b7e24u: goto label_1b7e24;
        case 0x1b7e28u: goto label_1b7e28;
        case 0x1b7e2cu: goto label_1b7e2c;
        case 0x1b7e30u: goto label_1b7e30;
        case 0x1b7e34u: goto label_1b7e34;
        case 0x1b7e38u: goto label_1b7e38;
        case 0x1b7e3cu: goto label_1b7e3c;
        case 0x1b7e40u: goto label_1b7e40;
        case 0x1b7e44u: goto label_1b7e44;
        case 0x1b7e48u: goto label_1b7e48;
        case 0x1b7e4cu: goto label_1b7e4c;
        case 0x1b7e50u: goto label_1b7e50;
        case 0x1b7e54u: goto label_1b7e54;
        case 0x1b7e58u: goto label_1b7e58;
        case 0x1b7e5cu: goto label_1b7e5c;
        case 0x1b7e60u: goto label_1b7e60;
        case 0x1b7e64u: goto label_1b7e64;
        case 0x1b7e68u: goto label_1b7e68;
        case 0x1b7e6cu: goto label_1b7e6c;
        case 0x1b7e70u: goto label_1b7e70;
        case 0x1b7e74u: goto label_1b7e74;
        case 0x1b7e78u: goto label_1b7e78;
        case 0x1b7e7cu: goto label_1b7e7c;
        case 0x1b7e80u: goto label_1b7e80;
        case 0x1b7e84u: goto label_1b7e84;
        case 0x1b7e88u: goto label_1b7e88;
        case 0x1b7e8cu: goto label_1b7e8c;
        case 0x1b7e90u: goto label_1b7e90;
        case 0x1b7e94u: goto label_1b7e94;
        case 0x1b7e98u: goto label_1b7e98;
        case 0x1b7e9cu: goto label_1b7e9c;
        case 0x1b7ea0u: goto label_1b7ea0;
        case 0x1b7ea4u: goto label_1b7ea4;
        case 0x1b7ea8u: goto label_1b7ea8;
        case 0x1b7eacu: goto label_1b7eac;
        case 0x1b7eb0u: goto label_1b7eb0;
        case 0x1b7eb4u: goto label_1b7eb4;
        case 0x1b7eb8u: goto label_1b7eb8;
        case 0x1b7ebcu: goto label_1b7ebc;
        case 0x1b7ec0u: goto label_1b7ec0;
        case 0x1b7ec4u: goto label_1b7ec4;
        case 0x1b7ec8u: goto label_1b7ec8;
        case 0x1b7eccu: goto label_1b7ecc;
        case 0x1b7ed0u: goto label_1b7ed0;
        case 0x1b7ed4u: goto label_1b7ed4;
        case 0x1b7ed8u: goto label_1b7ed8;
        case 0x1b7edcu: goto label_1b7edc;
        case 0x1b7ee0u: goto label_1b7ee0;
        case 0x1b7ee4u: goto label_1b7ee4;
        case 0x1b7ee8u: goto label_1b7ee8;
        case 0x1b7eecu: goto label_1b7eec;
        case 0x1b7ef0u: goto label_1b7ef0;
        case 0x1b7ef4u: goto label_1b7ef4;
        case 0x1b7ef8u: goto label_1b7ef8;
        case 0x1b7efcu: goto label_1b7efc;
        case 0x1b7f00u: goto label_1b7f00;
        case 0x1b7f04u: goto label_1b7f04;
        case 0x1b7f08u: goto label_1b7f08;
        case 0x1b7f0cu: goto label_1b7f0c;
        case 0x1b7f10u: goto label_1b7f10;
        case 0x1b7f14u: goto label_1b7f14;
        case 0x1b7f18u: goto label_1b7f18;
        case 0x1b7f1cu: goto label_1b7f1c;
        case 0x1b7f20u: goto label_1b7f20;
        case 0x1b7f24u: goto label_1b7f24;
        case 0x1b7f28u: goto label_1b7f28;
        case 0x1b7f2cu: goto label_1b7f2c;
        case 0x1b7f30u: goto label_1b7f30;
        case 0x1b7f34u: goto label_1b7f34;
        case 0x1b7f38u: goto label_1b7f38;
        case 0x1b7f3cu: goto label_1b7f3c;
        case 0x1b7f40u: goto label_1b7f40;
        case 0x1b7f44u: goto label_1b7f44;
        case 0x1b7f48u: goto label_1b7f48;
        case 0x1b7f4cu: goto label_1b7f4c;
        case 0x1b7f50u: goto label_1b7f50;
        case 0x1b7f54u: goto label_1b7f54;
        case 0x1b7f58u: goto label_1b7f58;
        case 0x1b7f5cu: goto label_1b7f5c;
        case 0x1b7f60u: goto label_1b7f60;
        case 0x1b7f64u: goto label_1b7f64;
        case 0x1b7f68u: goto label_1b7f68;
        case 0x1b7f6cu: goto label_1b7f6c;
        case 0x1b7f70u: goto label_1b7f70;
        case 0x1b7f74u: goto label_1b7f74;
        case 0x1b7f78u: goto label_1b7f78;
        case 0x1b7f7cu: goto label_1b7f7c;
        case 0x1b7f80u: goto label_1b7f80;
        case 0x1b7f84u: goto label_1b7f84;
        case 0x1b7f88u: goto label_1b7f88;
        case 0x1b7f8cu: goto label_1b7f8c;
        case 0x1b7f90u: goto label_1b7f90;
        case 0x1b7f94u: goto label_1b7f94;
        case 0x1b7f98u: goto label_1b7f98;
        case 0x1b7f9cu: goto label_1b7f9c;
        case 0x1b7fa0u: goto label_1b7fa0;
        case 0x1b7fa4u: goto label_1b7fa4;
        case 0x1b7fa8u: goto label_1b7fa8;
        case 0x1b7facu: goto label_1b7fac;
        case 0x1b7fb0u: goto label_1b7fb0;
        case 0x1b7fb4u: goto label_1b7fb4;
        case 0x1b7fb8u: goto label_1b7fb8;
        case 0x1b7fbcu: goto label_1b7fbc;
        case 0x1b7fc0u: goto label_1b7fc0;
        case 0x1b7fc4u: goto label_1b7fc4;
        case 0x1b7fc8u: goto label_1b7fc8;
        case 0x1b7fccu: goto label_1b7fcc;
        case 0x1b7fd0u: goto label_1b7fd0;
        case 0x1b7fd4u: goto label_1b7fd4;
        case 0x1b7fd8u: goto label_1b7fd8;
        case 0x1b7fdcu: goto label_1b7fdc;
        case 0x1b7fe0u: goto label_1b7fe0;
        case 0x1b7fe4u: goto label_1b7fe4;
        case 0x1b7fe8u: goto label_1b7fe8;
        case 0x1b7fecu: goto label_1b7fec;
        case 0x1b7ff0u: goto label_1b7ff0;
        case 0x1b7ff4u: goto label_1b7ff4;
        case 0x1b7ff8u: goto label_1b7ff8;
        case 0x1b7ffcu: goto label_1b7ffc;
        case 0x1b8000u: goto label_1b8000;
        case 0x1b8004u: goto label_1b8004;
        case 0x1b8008u: goto label_1b8008;
        case 0x1b800cu: goto label_1b800c;
        case 0x1b8010u: goto label_1b8010;
        case 0x1b8014u: goto label_1b8014;
        case 0x1b8018u: goto label_1b8018;
        case 0x1b801cu: goto label_1b801c;
        case 0x1b8020u: goto label_1b8020;
        case 0x1b8024u: goto label_1b8024;
        case 0x1b8028u: goto label_1b8028;
        case 0x1b802cu: goto label_1b802c;
        case 0x1b8030u: goto label_1b8030;
        case 0x1b8034u: goto label_1b8034;
        case 0x1b8038u: goto label_1b8038;
        case 0x1b803cu: goto label_1b803c;
        case 0x1b8040u: goto label_1b8040;
        case 0x1b8044u: goto label_1b8044;
        case 0x1b8048u: goto label_1b8048;
        case 0x1b804cu: goto label_1b804c;
        case 0x1b8050u: goto label_1b8050;
        case 0x1b8054u: goto label_1b8054;
        case 0x1b8058u: goto label_1b8058;
        case 0x1b805cu: goto label_1b805c;
        case 0x1b8060u: goto label_1b8060;
        case 0x1b8064u: goto label_1b8064;
        case 0x1b8068u: goto label_1b8068;
        case 0x1b806cu: goto label_1b806c;
        case 0x1b8070u: goto label_1b8070;
        case 0x1b8074u: goto label_1b8074;
        case 0x1b8078u: goto label_1b8078;
        case 0x1b807cu: goto label_1b807c;
        case 0x1b8080u: goto label_1b8080;
        case 0x1b8084u: goto label_1b8084;
        case 0x1b8088u: goto label_1b8088;
        case 0x1b808cu: goto label_1b808c;
        case 0x1b8090u: goto label_1b8090;
        case 0x1b8094u: goto label_1b8094;
        case 0x1b8098u: goto label_1b8098;
        case 0x1b809cu: goto label_1b809c;
        case 0x1b80a0u: goto label_1b80a0;
        case 0x1b80a4u: goto label_1b80a4;
        case 0x1b80a8u: goto label_1b80a8;
        case 0x1b80acu: goto label_1b80ac;
        case 0x1b80b0u: goto label_1b80b0;
        case 0x1b80b4u: goto label_1b80b4;
        case 0x1b80b8u: goto label_1b80b8;
        case 0x1b80bcu: goto label_1b80bc;
        case 0x1b80c0u: goto label_1b80c0;
        case 0x1b80c4u: goto label_1b80c4;
        case 0x1b80c8u: goto label_1b80c8;
        case 0x1b80ccu: goto label_1b80cc;
        case 0x1b80d0u: goto label_1b80d0;
        case 0x1b80d4u: goto label_1b80d4;
        case 0x1b80d8u: goto label_1b80d8;
        case 0x1b80dcu: goto label_1b80dc;
        case 0x1b80e0u: goto label_1b80e0;
        case 0x1b80e4u: goto label_1b80e4;
        case 0x1b80e8u: goto label_1b80e8;
        case 0x1b80ecu: goto label_1b80ec;
        case 0x1b80f0u: goto label_1b80f0;
        case 0x1b80f4u: goto label_1b80f4;
        case 0x1b80f8u: goto label_1b80f8;
        case 0x1b80fcu: goto label_1b80fc;
        case 0x1b8100u: goto label_1b8100;
        case 0x1b8104u: goto label_1b8104;
        case 0x1b8108u: goto label_1b8108;
        case 0x1b810cu: goto label_1b810c;
        case 0x1b8110u: goto label_1b8110;
        case 0x1b8114u: goto label_1b8114;
        case 0x1b8118u: goto label_1b8118;
        case 0x1b811cu: goto label_1b811c;
        case 0x1b8120u: goto label_1b8120;
        case 0x1b8124u: goto label_1b8124;
        case 0x1b8128u: goto label_1b8128;
        case 0x1b812cu: goto label_1b812c;
        case 0x1b8130u: goto label_1b8130;
        case 0x1b8134u: goto label_1b8134;
        case 0x1b8138u: goto label_1b8138;
        case 0x1b813cu: goto label_1b813c;
        case 0x1b8140u: goto label_1b8140;
        case 0x1b8144u: goto label_1b8144;
        case 0x1b8148u: goto label_1b8148;
        case 0x1b814cu: goto label_1b814c;
        case 0x1b8150u: goto label_1b8150;
        case 0x1b8154u: goto label_1b8154;
        case 0x1b8158u: goto label_1b8158;
        case 0x1b815cu: goto label_1b815c;
        case 0x1b8160u: goto label_1b8160;
        case 0x1b8164u: goto label_1b8164;
        case 0x1b8168u: goto label_1b8168;
        case 0x1b816cu: goto label_1b816c;
        case 0x1b8170u: goto label_1b8170;
        case 0x1b8174u: goto label_1b8174;
        case 0x1b8178u: goto label_1b8178;
        case 0x1b817cu: goto label_1b817c;
        case 0x1b8180u: goto label_1b8180;
        case 0x1b8184u: goto label_1b8184;
        case 0x1b8188u: goto label_1b8188;
        case 0x1b818cu: goto label_1b818c;
        case 0x1b8190u: goto label_1b8190;
        case 0x1b8194u: goto label_1b8194;
        case 0x1b8198u: goto label_1b8198;
        case 0x1b819cu: goto label_1b819c;
        case 0x1b81a0u: goto label_1b81a0;
        case 0x1b81a4u: goto label_1b81a4;
        case 0x1b81a8u: goto label_1b81a8;
        case 0x1b81acu: goto label_1b81ac;
        case 0x1b81b0u: goto label_1b81b0;
        case 0x1b81b4u: goto label_1b81b4;
        case 0x1b81b8u: goto label_1b81b8;
        case 0x1b81bcu: goto label_1b81bc;
        case 0x1b81c0u: goto label_1b81c0;
        case 0x1b81c4u: goto label_1b81c4;
        case 0x1b81c8u: goto label_1b81c8;
        case 0x1b81ccu: goto label_1b81cc;
        case 0x1b81d0u: goto label_1b81d0;
        case 0x1b81d4u: goto label_1b81d4;
        case 0x1b81d8u: goto label_1b81d8;
        case 0x1b81dcu: goto label_1b81dc;
        case 0x1b81e0u: goto label_1b81e0;
        case 0x1b81e4u: goto label_1b81e4;
        case 0x1b81e8u: goto label_1b81e8;
        case 0x1b81ecu: goto label_1b81ec;
        case 0x1b81f0u: goto label_1b81f0;
        case 0x1b81f4u: goto label_1b81f4;
        case 0x1b81f8u: goto label_1b81f8;
        case 0x1b81fcu: goto label_1b81fc;
        case 0x1b8200u: goto label_1b8200;
        case 0x1b8204u: goto label_1b8204;
        case 0x1b8208u: goto label_1b8208;
        case 0x1b820cu: goto label_1b820c;
        case 0x1b8210u: goto label_1b8210;
        case 0x1b8214u: goto label_1b8214;
        case 0x1b8218u: goto label_1b8218;
        case 0x1b821cu: goto label_1b821c;
        case 0x1b8220u: goto label_1b8220;
        case 0x1b8224u: goto label_1b8224;
        case 0x1b8228u: goto label_1b8228;
        case 0x1b822cu: goto label_1b822c;
        case 0x1b8230u: goto label_1b8230;
        case 0x1b8234u: goto label_1b8234;
        case 0x1b8238u: goto label_1b8238;
        case 0x1b823cu: goto label_1b823c;
        case 0x1b8240u: goto label_1b8240;
        case 0x1b8244u: goto label_1b8244;
        case 0x1b8248u: goto label_1b8248;
        case 0x1b824cu: goto label_1b824c;
        case 0x1b8250u: goto label_1b8250;
        case 0x1b8254u: goto label_1b8254;
        case 0x1b8258u: goto label_1b8258;
        case 0x1b825cu: goto label_1b825c;
        case 0x1b8260u: goto label_1b8260;
        case 0x1b8264u: goto label_1b8264;
        case 0x1b8268u: goto label_1b8268;
        case 0x1b826cu: goto label_1b826c;
        case 0x1b8270u: goto label_1b8270;
        case 0x1b8274u: goto label_1b8274;
        case 0x1b8278u: goto label_1b8278;
        case 0x1b827cu: goto label_1b827c;
        case 0x1b8280u: goto label_1b8280;
        case 0x1b8284u: goto label_1b8284;
        case 0x1b8288u: goto label_1b8288;
        case 0x1b828cu: goto label_1b828c;
        case 0x1b8290u: goto label_1b8290;
        case 0x1b8294u: goto label_1b8294;
        case 0x1b8298u: goto label_1b8298;
        case 0x1b829cu: goto label_1b829c;
        case 0x1b82a0u: goto label_1b82a0;
        case 0x1b82a4u: goto label_1b82a4;
        case 0x1b82a8u: goto label_1b82a8;
        case 0x1b82acu: goto label_1b82ac;
        case 0x1b82b0u: goto label_1b82b0;
        case 0x1b82b4u: goto label_1b82b4;
        case 0x1b82b8u: goto label_1b82b8;
        case 0x1b82bcu: goto label_1b82bc;
        case 0x1b82c0u: goto label_1b82c0;
        case 0x1b82c4u: goto label_1b82c4;
        case 0x1b82c8u: goto label_1b82c8;
        case 0x1b82ccu: goto label_1b82cc;
        case 0x1b82d0u: goto label_1b82d0;
        case 0x1b82d4u: goto label_1b82d4;
        case 0x1b82d8u: goto label_1b82d8;
        case 0x1b82dcu: goto label_1b82dc;
        case 0x1b82e0u: goto label_1b82e0;
        case 0x1b82e4u: goto label_1b82e4;
        case 0x1b82e8u: goto label_1b82e8;
        case 0x1b82ecu: goto label_1b82ec;
        case 0x1b82f0u: goto label_1b82f0;
        case 0x1b82f4u: goto label_1b82f4;
        case 0x1b82f8u: goto label_1b82f8;
        case 0x1b82fcu: goto label_1b82fc;
        case 0x1b8300u: goto label_1b8300;
        case 0x1b8304u: goto label_1b8304;
        case 0x1b8308u: goto label_1b8308;
        case 0x1b830cu: goto label_1b830c;
        case 0x1b8310u: goto label_1b8310;
        case 0x1b8314u: goto label_1b8314;
        case 0x1b8318u: goto label_1b8318;
        case 0x1b831cu: goto label_1b831c;
        case 0x1b8320u: goto label_1b8320;
        case 0x1b8324u: goto label_1b8324;
        case 0x1b8328u: goto label_1b8328;
        case 0x1b832cu: goto label_1b832c;
        case 0x1b8330u: goto label_1b8330;
        case 0x1b8334u: goto label_1b8334;
        case 0x1b8338u: goto label_1b8338;
        case 0x1b833cu: goto label_1b833c;
        case 0x1b8340u: goto label_1b8340;
        case 0x1b8344u: goto label_1b8344;
        case 0x1b8348u: goto label_1b8348;
        case 0x1b834cu: goto label_1b834c;
        case 0x1b8350u: goto label_1b8350;
        case 0x1b8354u: goto label_1b8354;
        case 0x1b8358u: goto label_1b8358;
        case 0x1b835cu: goto label_1b835c;
        case 0x1b8360u: goto label_1b8360;
        case 0x1b8364u: goto label_1b8364;
        case 0x1b8368u: goto label_1b8368;
        case 0x1b836cu: goto label_1b836c;
        case 0x1b8370u: goto label_1b8370;
        case 0x1b8374u: goto label_1b8374;
        case 0x1b8378u: goto label_1b8378;
        case 0x1b837cu: goto label_1b837c;
        case 0x1b8380u: goto label_1b8380;
        case 0x1b8384u: goto label_1b8384;
        case 0x1b8388u: goto label_1b8388;
        case 0x1b838cu: goto label_1b838c;
        case 0x1b8390u: goto label_1b8390;
        case 0x1b8394u: goto label_1b8394;
        case 0x1b8398u: goto label_1b8398;
        case 0x1b839cu: goto label_1b839c;
        case 0x1b83a0u: goto label_1b83a0;
        case 0x1b83a4u: goto label_1b83a4;
        case 0x1b83a8u: goto label_1b83a8;
        case 0x1b83acu: goto label_1b83ac;
        case 0x1b83b0u: goto label_1b83b0;
        case 0x1b83b4u: goto label_1b83b4;
        case 0x1b83b8u: goto label_1b83b8;
        case 0x1b83bcu: goto label_1b83bc;
        case 0x1b83c0u: goto label_1b83c0;
        case 0x1b83c4u: goto label_1b83c4;
        case 0x1b83c8u: goto label_1b83c8;
        case 0x1b83ccu: goto label_1b83cc;
        case 0x1b83d0u: goto label_1b83d0;
        case 0x1b83d4u: goto label_1b83d4;
        case 0x1b83d8u: goto label_1b83d8;
        case 0x1b83dcu: goto label_1b83dc;
        case 0x1b83e0u: goto label_1b83e0;
        case 0x1b83e4u: goto label_1b83e4;
        default: break;
    }

    ctx->pc = 0x1b6d90u;

label_1b6d90:
    // 0x1b6d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b6d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b6d94:
    // 0x1b6d94: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1b6d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_1b6d98:
    // 0x1b6d98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b6d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b6d9c:
    // 0x1b6d9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b6da0:
    // 0x1b6da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b6da4:
    // 0x1b6da4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b6da8:
    // 0x1b6da8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1b6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1b6dac:
    // 0x1b6dac: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1b6dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1b6db0:
    // 0x1b6db0: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1b6db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1b6db4:
    // 0x1b6db4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1b6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1b6db8:
    // 0x1b6db8: 0x2473ec70  addiu       $s3, $v1, -0x1390
    ctx->pc = 0x1b6db8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_1b6dbc:
    // 0x1b6dbc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b6dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6dc0:
    // 0x1b6dc0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b6dc4:
    // 0x1b6dc4: 0x3c0597ff  lui         $a1, 0x97FF
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38911 << 16));
label_1b6dc8:
    // 0x1b6dc8: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x1b6dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1b6dcc:
    // 0x1b6dcc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b6dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b6dd0:
    // 0x1b6dd0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1b6dd4:
    // 0x1b6dd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6dd8:
    // 0x1b6dd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ddc:
    // 0x1b6ddc: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1b6ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1b6de0:
    // 0x1b6de0: 0x8e0319e4  lw          $v1, 0x19E4($s0)
    ctx->pc = 0x1b6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6628)));
label_1b6de4:
    // 0x1b6de4: 0x34640400  ori         $a0, $v1, 0x400
    ctx->pc = 0x1b6de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_1b6de8:
    // 0x1b6de8: 0xae0419e4  sw          $a0, 0x19E4($s0)
    ctx->pc = 0x1b6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6628), GPR_U32(ctx, 4));
label_1b6dec:
    // 0x1b6dec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6df0:
    // 0x1b6df0: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x1b6df0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1b6df4:
    // 0x1b6df4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b6df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b6df8:
    // 0x1b6df8: 0x2c81000c  sltiu       $at, $a0, 0xC
    ctx->pc = 0x1b6df8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_1b6dfc:
    // 0x1b6dfc: 0x1020054e  beqz        $at, . + 4 + (0x54E << 2)
label_1b6e00:
    if (ctx->pc == 0x1B6E00u) {
        ctx->pc = 0x1B6E04u;
        goto label_1b6e04;
    }
    ctx->pc = 0x1B6DFCu;
    {
        const bool branch_taken_0x1b6dfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6dfc) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B6E04u;
label_1b6e04:
    // 0x1b6e04: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1b6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1b6e08:
    // 0x1b6e08: 0x2465f2d0  addiu       $a1, $v1, -0xD30
    ctx->pc = 0x1b6e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963920));
label_1b6e0c:
    // 0x1b6e0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b6e10:
    // 0x1b6e10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b6e14:
    // 0x1b6e14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b6e18:
    // 0x1b6e18: 0x600008  jr          $v1
label_1b6e1c:
    if (ctx->pc == 0x1B6E1Cu) {
        ctx->pc = 0x1B6E20u;
        goto label_1b6e20;
    }
    ctx->pc = 0x1B6E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B6E20u;
label_1b6e20:
    // 0x1b6e20: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b6e24:
    // 0x1b6e24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6e28:
    // 0x1b6e28: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1b6e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1b6e2c:
    // 0x1b6e2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6e30:
    // 0x1b6e30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6e34:
    // 0x1b6e34: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b6e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6e38:
    // 0x1b6e38: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1b6e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b6e3c:
    // 0x1b6e3c: 0xc058f20  jal         func_163C80
label_1b6e40:
    if (ctx->pc == 0x1B6E40u) {
        ctx->pc = 0x1B6E44u;
        goto label_1b6e44;
    }
    ctx->pc = 0x1B6E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E44u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B6E3Cu, 0x1B6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E44u;
label_1b6e44:
    // 0x1b6e44: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b6e48:
    // 0x1b6e48: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b6e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6e4c:
    // 0x1b6e4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6e50:
    // 0x1b6e50: 0x0  nop
    ctx->pc = 0x1b6e50u;
    // NOP
label_1b6e54:
    // 0x1b6e54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6e58:
    // 0x1b6e58: 0x0  nop
    ctx->pc = 0x1b6e58u;
    // NOP
label_1b6e5c:
    // 0x1b6e5c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1b6e60:
    if (ctx->pc == 0x1B6E60u) {
        ctx->pc = 0x1B6E64u;
        goto label_1b6e64;
    }
    ctx->pc = 0x1B6E5Cu;
    {
        const bool branch_taken_0x1b6e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6e5c) {
            ctx->pc = 0x1B6E9Cu;
            goto label_1b6e9c;
        }
    }
    ctx->pc = 0x1B6E64u;
label_1b6e64:
    // 0x1b6e64: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b6e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6e68:
    // 0x1b6e68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6e6c:
    // 0x1b6e6c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1b6e6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1b6e70:
    // 0x1b6e70: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b6e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b6e74:
    // 0x1b6e74: 0x2406009a  addiu       $a2, $zero, 0x9A
    ctx->pc = 0x1b6e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1b6e78:
    // 0x1b6e78: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b6e7c:
    // 0x1b6e7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b6e80:
    // 0x1b6e80: 0xc0965d0  jal         func_259740
label_1b6e84:
    if (ctx->pc == 0x1B6E84u) {
        ctx->pc = 0x1B6E88u;
        goto label_1b6e88;
    }
    ctx->pc = 0x1B6E80u;
    SET_GPR_U32(ctx, 31, 0x1B6E88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B6E80u, 0x1B6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E88u;
label_1b6e88:
    // 0x1b6e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6e8c:
    // 0x1b6e8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6e90:
    // 0x1b6e90: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x1b6e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
label_1b6e94:
    // 0x1b6e94: 0x1000000d  b           . + 4 + (0xD << 2)
label_1b6e98:
    if (ctx->pc == 0x1B6E98u) {
        ctx->pc = 0x1B6E9Cu;
        goto label_1b6e9c;
    }
    ctx->pc = 0x1B6E94u;
    {
        const bool branch_taken_0x1b6e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e94) {
            ctx->pc = 0x1B6ECCu;
            goto label_1b6ecc;
        }
    }
    ctx->pc = 0x1B6E9Cu;
label_1b6e9c:
    // 0x1b6e9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ea0:
    // 0x1b6ea0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ea4:
    // 0x1b6ea4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b6ea4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b6ea8:
    // 0x1b6ea8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b6ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b6eac:
    // 0x1b6eac: 0x2406009a  addiu       $a2, $zero, 0x9A
    ctx->pc = 0x1b6eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1b6eb0:
    // 0x1b6eb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6eb4:
    // 0x1b6eb4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b6eb8:
    // 0x1b6eb8: 0xc0965d0  jal         func_259740
label_1b6ebc:
    if (ctx->pc == 0x1B6EBCu) {
        ctx->pc = 0x1B6EC0u;
        goto label_1b6ec0;
    }
    ctx->pc = 0x1B6EB8u;
    SET_GPR_U32(ctx, 31, 0x1B6EC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B6EB8u, 0x1B6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EC0u;
label_1b6ec0:
    // 0x1b6ec0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6ec0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6ec4:
    // 0x1b6ec4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ec8:
    // 0x1b6ec8: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1b6ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1b6ecc:
    // 0x1b6ecc: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1b6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
label_1b6ed0:
    // 0x1b6ed0: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x1b6ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_1b6ed4:
    // 0x1b6ed4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1b6ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_1b6ed8:
    // 0x1b6ed8: 0xc0684d8  jal         func_1A1360
label_1b6edc:
    if (ctx->pc == 0x1B6EDCu) {
        ctx->pc = 0x1B6EE0u;
        goto label_1b6ee0;
    }
    ctx->pc = 0x1B6ED8u;
    SET_GPR_U32(ctx, 31, 0x1B6EE0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1B6ED8u, 0x1B6EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EE0u;
label_1b6ee0:
    // 0x1b6ee0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6ee0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6ee4:
    // 0x1b6ee4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ee8:
    // 0x1b6ee8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b6ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b6eec:
    // 0x1b6eec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b6ef0:
    // 0x1b6ef0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b6ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b6ef4:
    // 0x1b6ef4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ef8:
    // 0x1b6ef8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1b6ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b6efc:
    // 0x1b6efc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1b6f00:
    // 0x1b6f00: 0x2232825  or          $a1, $s1, $v1
    ctx->pc = 0x1b6f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_1b6f04:
    // 0x1b6f04: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1b6f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1b6f08:
    // 0x1b6f08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b6f0c:
    // 0x1b6f0c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b6f10:
    // 0x1b6f10: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b6f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1b6f14:
    // 0x1b6f14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b6f18:
    // 0x1b6f18: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1b6f1c:
    // 0x1b6f1c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6f20:
    // 0x1b6f20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b6f20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b6f24:
    // 0x1b6f24: 0xc096b40  jal         func_25AD00
label_1b6f28:
    if (ctx->pc == 0x1B6F28u) {
        ctx->pc = 0x1B6F2Cu;
        goto label_1b6f2c;
    }
    ctx->pc = 0x1B6F24u;
    SET_GPR_U32(ctx, 31, 0x1B6F2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B6F24u, 0x1B6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F2Cu;
label_1b6f2c:
    // 0x1b6f2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6f2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6f30:
    // 0x1b6f30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6f34:
    // 0x1b6f34: 0xc05cd10  jal         func_173440
label_1b6f38:
    if (ctx->pc == 0x1B6F38u) {
        ctx->pc = 0x1B6F3Cu;
        goto label_1b6f3c;
    }
    ctx->pc = 0x1B6F34u;
    SET_GPR_U32(ctx, 31, 0x1B6F3Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B6F34u, 0x1B6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F3Cu;
label_1b6f3c:
    // 0x1b6f3c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b6f3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6f40:
    // 0x1b6f40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b6f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6f44:
    // 0x1b6f44: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6f48:
    // 0x1b6f48: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b6f48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b6f4c:
    // 0x1b6f4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b6f4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b6f50:
    // 0x1b6f50: 0xc057480  jal         func_15D200
label_1b6f54:
    if (ctx->pc == 0x1B6F54u) {
        ctx->pc = 0x1B6F58u;
        goto label_1b6f58;
    }
    ctx->pc = 0x1B6F50u;
    SET_GPR_U32(ctx, 31, 0x1B6F58u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B6F50u, 0x1B6F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F58u;
label_1b6f58:
    // 0x1b6f58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6f58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6f5c:
    // 0x1b6f5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b6f5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b6f60:
    // 0x1b6f60: 0xc097530  jal         func_25D4C0
label_1b6f64:
    if (ctx->pc == 0x1B6F64u) {
        ctx->pc = 0x1B6F68u;
        goto label_1b6f68;
    }
    ctx->pc = 0x1B6F60u;
    SET_GPR_U32(ctx, 31, 0x1B6F68u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B6F60u, 0x1B6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F68u;
label_1b6f68:
    // 0x1b6f68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6f68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6f6c:
    // 0x1b6f6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6f70:
    // 0x1b6f70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b6f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b6f74:
    // 0x1b6f74: 0x106004f0  beqz        $v1, . + 4 + (0x4F0 << 2)
label_1b6f78:
    if (ctx->pc == 0x1B6F78u) {
        ctx->pc = 0x1B6F7Cu;
        goto label_1b6f7c;
    }
    ctx->pc = 0x1B6F74u;
    {
        const bool branch_taken_0x1b6f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f74) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B6F7Cu;
label_1b6f7c:
    // 0x1b6f7c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6f80:
    // 0x1b6f80: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1b6f80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1b6f84:
    // 0x1b6f84: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b6f88:
    // 0x1b6f88: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1b6f88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b6f8c:
    // 0x1b6f8c: 0x100004ea  b           . + 4 + (0x4EA << 2)
label_1b6f90:
    if (ctx->pc == 0x1B6F90u) {
        ctx->pc = 0x1B6F94u;
        goto label_1b6f94;
    }
    ctx->pc = 0x1B6F8Cu;
    {
        const bool branch_taken_0x1b6f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f8c) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B6F94u;
label_1b6f94:
    // 0x1b6f94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6f98:
    // 0x1b6f98: 0xac601b64  sw          $zero, 0x1B64($v1)
    ctx->pc = 0x1b6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 0));
label_1b6f9c:
    // 0x1b6f9c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1b6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1b6fa0:
    // 0x1b6fa0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1b6fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1b6fa4:
    // 0x1b6fa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b6fa8:
    if (ctx->pc == 0x1B6FA8u) {
        ctx->pc = 0x1B6FACu;
        goto label_1b6fac;
    }
    ctx->pc = 0x1B6FA4u;
    {
        const bool branch_taken_0x1b6fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6fa4) {
            ctx->pc = 0x1B6FB8u;
            goto label_1b6fb8;
        }
    }
    ctx->pc = 0x1B6FACu;
label_1b6fac:
    // 0x1b6fac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6fb0:
    // 0x1b6fb0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6fb4:
    // 0x1b6fb4: 0xaca31b64  sw          $v1, 0x1B64($a1)
    ctx->pc = 0x1b6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7012), GPR_U32(ctx, 3));
label_1b6fb8:
    // 0x1b6fb8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b6fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6fbc:
    // 0x1b6fbc: 0x24c70180  addiu       $a3, $a2, 0x180
    ctx->pc = 0x1b6fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_1b6fc0:
    // 0x1b6fc0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b6fc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1b6fc4:
    // 0x1b6fc4: 0xc0675a4  jal         func_19D690
label_1b6fc8:
    if (ctx->pc == 0x1B6FC8u) {
        ctx->pc = 0x1B6FCCu;
        goto label_1b6fcc;
    }
    ctx->pc = 0x1B6FC4u;
    SET_GPR_U32(ctx, 31, 0x1B6FCCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1B6FC4u, 0x1B6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FCCu;
label_1b6fcc:
    // 0x1b6fcc: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b6fccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6fd0:
    // 0x1b6fd0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6fd4:
    // 0x1b6fd4: 0x8c821b64  lw          $v0, 0x1B64($a0)
    ctx->pc = 0x1b6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
label_1b6fd8:
    // 0x1b6fd8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1b6fdc:
    if (ctx->pc == 0x1B6FDCu) {
        ctx->pc = 0x1B6FE0u;
        goto label_1b6fe0;
    }
    ctx->pc = 0x1B6FD8u;
    {
        const bool branch_taken_0x1b6fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6fd8) {
            ctx->pc = 0x1B7018u;
            goto label_1b7018;
        }
    }
    ctx->pc = 0x1B6FE0u;
label_1b6fe0:
    // 0x1b6fe0: 0x3c0542a2  lui         $a1, 0x42A2
    ctx->pc = 0x1b6fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17058 << 16));
label_1b6fe4:
    // 0x1b6fe4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b6fe4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6fe8:
    // 0x1b6fe8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b6fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6fec:
    // 0x1b6fec: 0xe4c01284  swc1        $f0, 0x1284($a2)
    ctx->pc = 0x1b6fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4740), bits); }
label_1b6ff0:
    // 0x1b6ff0: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x1b6ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
label_1b6ff4:
    // 0x1b6ff4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1b6ff4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6ff8:
    // 0x1b6ff8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b6ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ffc:
    // 0x1b6ffc: 0xe5001280  swc1        $f0, 0x1280($t0)
    ctx->pc = 0x1b6ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4736), bits); }
label_1b7000:
    // 0x1b7000: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1b7000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1b7004:
    // 0x1b7004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7008:
    // 0x1b7008: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b700c:
    // 0x1b700c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1b700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1b7010:
    // 0x1b7010: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b7014:
    if (ctx->pc == 0x1B7014u) {
        ctx->pc = 0x1B7018u;
        goto label_1b7018;
    }
    ctx->pc = 0x1B7010u;
    {
        const bool branch_taken_0x1b7010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7010) {
            ctx->pc = 0x1B7050u;
            goto label_1b7050;
        }
    }
    ctx->pc = 0x1B7018u;
label_1b7018:
    // 0x1b7018: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x1b7018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
label_1b701c:
    // 0x1b701c: 0x3442b333  ori         $v0, $v0, 0xB333
    ctx->pc = 0x1b701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45875);
label_1b7020:
    // 0x1b7020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7024:
    // 0x1b7024: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7028:
    // 0x1b7028: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b7028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_1b702c:
    // 0x1b702c: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
label_1b7030:
    // 0x1b7030: 0x34433334  ori         $v1, $v0, 0x3334
    ctx->pc = 0x1b7030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
label_1b7034:
    // 0x1b7034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7038:
    // 0x1b7038: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b703c:
    // 0x1b703c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b703cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1b7040:
    // 0x1b7040: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1b7040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1b7044:
    // 0x1b7044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7048:
    // 0x1b7048: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b704c:
    // 0x1b704c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1b704cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1b7050:
    // 0x1b7050: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7054:
    // 0x1b7054: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1b7054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
label_1b7058:
    // 0x1b7058: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_1b705c:
    if (ctx->pc == 0x1B705Cu) {
        ctx->pc = 0x1B7060u;
        goto label_1b7060;
    }
    ctx->pc = 0x1B7058u;
    {
        const bool branch_taken_0x1b7058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7058) {
            ctx->pc = 0x1B70B4u;
            goto label_1b70b4;
        }
    }
    ctx->pc = 0x1B7060u;
label_1b7060:
    // 0x1b7060: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7064:
    // 0x1b7064: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1b7064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7068:
    // 0x1b7068: 0x3c023ffb  lui         $v0, 0x3FFB
    ctx->pc = 0x1b7068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16379 << 16));
label_1b706c:
    // 0x1b706c: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x1b706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
label_1b7070:
    // 0x1b7070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7074:
    // 0x1b7074: 0x0  nop
    ctx->pc = 0x1b7074u;
    // NOP
label_1b7078:
    // 0x1b7078: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b7078u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b707c:
    // 0x1b707c: 0xc058fec  jal         func_163FB0
label_1b7080:
    if (ctx->pc == 0x1B7080u) {
        ctx->pc = 0x1B7084u;
        goto label_1b7084;
    }
    ctx->pc = 0x1B707Cu;
    SET_GPR_U32(ctx, 31, 0x1B7084u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B707Cu, 0x1B7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7084u;
label_1b7084:
    // 0x1b7084: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7088:
    // 0x1b7088: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1b7088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1b708c:
    // 0x1b708c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7090:
    // 0x1b7090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7094:
    // 0x1b7094: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b7094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1b7098:
    // 0x1b7098: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x1b7098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_1b709c:
    // 0x1b709c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b709cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b70a0:
    // 0x1b70a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b70a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b70a4:
    // 0x1b70a4: 0xc0965d0  jal         func_259740
label_1b70a8:
    if (ctx->pc == 0x1B70A8u) {
        ctx->pc = 0x1B70ACu;
        goto label_1b70ac;
    }
    ctx->pc = 0x1B70A4u;
    SET_GPR_U32(ctx, 31, 0x1B70ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B70A4u, 0x1B70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70ACu;
label_1b70ac:
    // 0x1b70ac: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b70b0:
    if (ctx->pc == 0x1B70B0u) {
        ctx->pc = 0x1B70B4u;
        goto label_1b70b4;
    }
    ctx->pc = 0x1B70ACu;
    {
        const bool branch_taken_0x1b70ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b70ac) {
            ctx->pc = 0x1B7100u;
            goto label_1b7100;
        }
    }
    ctx->pc = 0x1B70B4u;
label_1b70b4:
    // 0x1b70b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b70b8:
    // 0x1b70b8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1b70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b70bc:
    // 0x1b70bc: 0x3c033ffb  lui         $v1, 0x3FFB
    ctx->pc = 0x1b70bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16379 << 16));
label_1b70c0:
    // 0x1b70c0: 0x346553d2  ori         $a1, $v1, 0x53D2
    ctx->pc = 0x1b70c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21458);
label_1b70c4:
    // 0x1b70c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b70c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b70c8:
    // 0x1b70c8: 0x0  nop
    ctx->pc = 0x1b70c8u;
    // NOP
label_1b70cc:
    // 0x1b70cc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b70ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b70d0:
    // 0x1b70d0: 0xc058fec  jal         func_163FB0
label_1b70d4:
    if (ctx->pc == 0x1B70D4u) {
        ctx->pc = 0x1B70D8u;
        goto label_1b70d8;
    }
    ctx->pc = 0x1B70D0u;
    SET_GPR_U32(ctx, 31, 0x1B70D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B70D0u, 0x1B70D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70D8u;
label_1b70d8:
    // 0x1b70d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b70dc:
    // 0x1b70dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1b70dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1b70e0:
    // 0x1b70e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b70e4:
    // 0x1b70e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b70e8:
    // 0x1b70e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1b70ec:
    // 0x1b70ec: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x1b70ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_1b70f0:
    // 0x1b70f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b70f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b70f4:
    // 0x1b70f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b70f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b70f8:
    // 0x1b70f8: 0xc0965d0  jal         func_259740
label_1b70fc:
    if (ctx->pc == 0x1B70FCu) {
        ctx->pc = 0x1B7100u;
        goto label_1b7100;
    }
    ctx->pc = 0x1B70F8u;
    SET_GPR_U32(ctx, 31, 0x1B7100u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B70F8u, 0x1B7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7100u;
label_1b7100:
    // 0x1b7100: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b7100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1b7104:
    // 0x1b7104: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7104u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7108:
    // 0x1b7108: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b710c:
    // 0x1b710c: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_1b7110:
    // 0x1b7110: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b7110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b7114:
    // 0x1b7114: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7118:
    // 0x1b7118: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1b7118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1b711c:
    // 0x1b711c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7120:
    // 0x1b7120: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b7120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b7124:
    // 0x1b7124: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b7124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b7128:
    // 0x1b7128: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1b7128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b712c:
    // 0x1b712c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b712cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7130:
    // 0x1b7130: 0x908509da  lbu         $a1, 0x9DA($a0)
    ctx->pc = 0x1b7130u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
label_1b7134:
    // 0x1b7134: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1b7134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b7138:
    // 0x1b7138: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1b7138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_1b713c:
    // 0x1b713c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1b713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1b7140:
    // 0x1b7140: 0x14440016  bne         $v0, $a0, . + 4 + (0x16 << 2)
label_1b7144:
    if (ctx->pc == 0x1B7144u) {
        ctx->pc = 0x1B7148u;
        goto label_1b7148;
    }
    ctx->pc = 0x1B7140u;
    {
        const bool branch_taken_0x1b7140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b7140) {
            ctx->pc = 0x1B719Cu;
            goto label_1b719c;
        }
    }
    ctx->pc = 0x1B7148u;
label_1b7148:
    // 0x1b7148: 0xc067694  jal         func_19DA50
label_1b714c:
    if (ctx->pc == 0x1B714Cu) {
        ctx->pc = 0x1B7150u;
        goto label_1b7150;
    }
    ctx->pc = 0x1B7148u;
    SET_GPR_U32(ctx, 31, 0x1B7150u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1B7148u, 0x1B7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7150u;
label_1b7150:
    // 0x1b7150: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b7150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b7154:
    // 0x1b7154: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b7154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1b7158:
    // 0x1b7158: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1b7158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b715c:
    // 0x1b715c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b715cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1b7160:
    // 0x1b7160: 0x248352d8  addiu       $v1, $a0, 0x52D8
    ctx->pc = 0x1b7160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
label_1b7164:
    // 0x1b7164: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b7164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b7168:
    // 0x1b7168: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1b7168u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1b716c:
    // 0x1b716c: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x1b716cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1b7170:
    // 0x1b7170: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7174:
    // 0x1b7174: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1b7174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1b7178:
    // 0x1b7178: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x1b7178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_1b717c:
    // 0x1b717c: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x1b717cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1b7180:
    // 0x1b7180: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1b7180u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7184:
    // 0x1b7184: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b7184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1b7188:
    // 0x1b7188: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1b7188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1b718c:
    // 0x1b718c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1b718cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b7190:
    // 0x1b7190: 0xc067b18  jal         func_19EC60
label_1b7194:
    if (ctx->pc == 0x1B7194u) {
        ctx->pc = 0x1B7198u;
        goto label_1b7198;
    }
    ctx->pc = 0x1B7190u;
    SET_GPR_U32(ctx, 31, 0x1B7198u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1B7190u, 0x1B7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7198u;
label_1b7198:
    // 0x1b7198: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b719c:
    // 0x1b719c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b719cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b71a0:
    // 0x1b71a0: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b71a4:
    // 0x1b71a4: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x1b71a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1b71a8:
    // 0x1b71a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b71a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b71ac:
    // 0x1b71ac: 0xac241a64  sw          $a0, 0x1A64($at)
    ctx->pc = 0x1b71acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 4));
label_1b71b0:
    // 0x1b71b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b71b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b71b4:
    // 0x1b71b4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b71b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b71b8:
    // 0x1b71b8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1b71bc:
    // 0x1b71bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b71bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b71c0:
    // 0x1b71c0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1b71c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1b71c4:
    // 0x1b71c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b71c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b71c8:
    // 0x1b71c8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b71c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b71cc:
    // 0x1b71cc: 0x3c043ec9  lui         $a0, 0x3EC9
    ctx->pc = 0x1b71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16073 << 16));
label_1b71d0:
    // 0x1b71d0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1b71d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1b71d4:
    // 0x1b71d4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1b71d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b71d8:
    // 0x1b71d8: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1b71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b71dc:
    // 0x1b71dc: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1b71dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b71e0:
    // 0x1b71e0: 0xc058f50  jal         func_163D40
label_1b71e4:
    if (ctx->pc == 0x1B71E4u) {
        ctx->pc = 0x1B71E8u;
        goto label_1b71e8;
    }
    ctx->pc = 0x1B71E0u;
    SET_GPR_U32(ctx, 31, 0x1B71E8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B71E0u, 0x1B71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B71E8u;
label_1b71e8:
    // 0x1b71e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b71ec:
    // 0x1b71ec: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b71ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1b71f0:
    // 0x1b71f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b71f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b71f4:
    // 0x1b71f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b71f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b71f8:
    // 0x1b71f8: 0xc096b40  jal         func_25AD00
label_1b71fc:
    if (ctx->pc == 0x1B71FCu) {
        ctx->pc = 0x1B7200u;
        goto label_1b7200;
    }
    ctx->pc = 0x1B71F8u;
    SET_GPR_U32(ctx, 31, 0x1B7200u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B71F8u, 0x1B7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7200u;
label_1b7200:
    // 0x1b7200: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7200u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7204:
    // 0x1b7204: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7208:
    // 0x1b7208: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b720c:
    // 0x1b720c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b7210:
    // 0x1b7210: 0xc05cd58  jal         func_173560
label_1b7214:
    if (ctx->pc == 0x1B7214u) {
        ctx->pc = 0x1B7218u;
        goto label_1b7218;
    }
    ctx->pc = 0x1B7210u;
    SET_GPR_U32(ctx, 31, 0x1B7218u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B7210u, 0x1B7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7218u;
label_1b7218:
    // 0x1b7218: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7218u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b721c:
    // 0x1b721c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b721cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7220:
    // 0x1b7220: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7224:
    // 0x1b7224: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b7228:
    // 0x1b7228: 0xc057480  jal         func_15D200
label_1b722c:
    if (ctx->pc == 0x1B722Cu) {
        ctx->pc = 0x1B7230u;
        goto label_1b7230;
    }
    ctx->pc = 0x1B7228u;
    SET_GPR_U32(ctx, 31, 0x1B7230u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B7228u, 0x1B7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7230u;
label_1b7230:
    // 0x1b7230: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7230u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7234:
    // 0x1b7234: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7238:
    // 0x1b7238: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1b7238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1b723c:
    // 0x1b723c: 0xc057a80  jal         func_15EA00
label_1b7240:
    if (ctx->pc == 0x1B7240u) {
        ctx->pc = 0x1B7244u;
        goto label_1b7244;
    }
    ctx->pc = 0x1B723Cu;
    SET_GPR_U32(ctx, 31, 0x1B7244u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B723Cu, 0x1B7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7244u;
label_1b7244:
    // 0x1b7244: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x1b7244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
label_1b7248:
    // 0x1b7248: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1b7248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1b724c:
    // 0x1b724c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b724cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7250:
    // 0x1b7250: 0x0  nop
    ctx->pc = 0x1b7250u;
    // NOP
label_1b7254:
    // 0x1b7254: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b7258:
    // 0x1b7258: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b7258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1b725c:
    // 0x1b725c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7260:
    // 0x1b7260: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1b7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7264:
    // 0x1b7264: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7268:
    // 0x1b7268: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b726c:
    // 0x1b726c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b726cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b7270:
    // 0x1b7270: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b7274:
    // 0x1b7274: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7278:
    // 0x1b7278: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b7278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b727c:
    // 0x1b727c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7280:
    // 0x1b7280: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7284:
    // 0x1b7284: 0x0  nop
    ctx->pc = 0x1b7284u;
    // NOP
label_1b7288:
    // 0x1b7288: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b728c:
    if (ctx->pc == 0x1B728Cu) {
        ctx->pc = 0x1B7290u;
        goto label_1b7290;
    }
    ctx->pc = 0x1B7288u;
    {
        const bool branch_taken_0x1b7288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7288) {
            ctx->pc = 0x1B729Cu;
            goto label_1b729c;
        }
    }
    ctx->pc = 0x1B7290u;
label_1b7290:
    // 0x1b7290: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b7290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7294:
    // 0x1b7294: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7298:
    // 0x1b7298: 0xe4c00124  swc1        $f0, 0x124($a2)
    ctx->pc = 0x1b7298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
label_1b729c:
    // 0x1b729c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b729cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b72a0:
    // 0x1b72a0: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1b72a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b72a4:
    // 0x1b72a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b72a8:
    // 0x1b72a8: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b72ac:
    // 0x1b72ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b72acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b72b0:
    // 0x1b72b0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b72b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b72b4:
    // 0x1b72b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b72b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b72b8:
    // 0x1b72b8: 0xc097530  jal         func_25D4C0
label_1b72bc:
    if (ctx->pc == 0x1B72BCu) {
        ctx->pc = 0x1B72C0u;
        goto label_1b72c0;
    }
    ctx->pc = 0x1B72B8u;
    SET_GPR_U32(ctx, 31, 0x1B72C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B72B8u, 0x1B72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B72C0u;
label_1b72c0:
    // 0x1b72c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b72c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b72c4:
    // 0x1b72c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b72c8:
    // 0x1b72c8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b72c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b72cc:
    // 0x1b72cc: 0x1060041a  beqz        $v1, . + 4 + (0x41A << 2)
label_1b72d0:
    if (ctx->pc == 0x1B72D0u) {
        ctx->pc = 0x1B72D4u;
        goto label_1b72d4;
    }
    ctx->pc = 0x1B72CCu;
    {
        const bool branch_taken_0x1b72cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b72cc) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B72D4u;
label_1b72d4:
    // 0x1b72d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b72d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b72d8:
    // 0x1b72d8: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1b72d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b72dc:
    // 0x1b72dc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1b72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b72e0:
    // 0x1b72e0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b72e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b72e4:
    // 0x1b72e4: 0x10000414  b           . + 4 + (0x414 << 2)
label_1b72e8:
    if (ctx->pc == 0x1B72E8u) {
        ctx->pc = 0x1B72ECu;
        goto label_1b72ec;
    }
    ctx->pc = 0x1B72E4u;
    {
        const bool branch_taken_0x1b72e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b72e4) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B72ECu;
label_1b72ec:
    // 0x1b72ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b72f0:
    // 0x1b72f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b72f4:
    // 0x1b72f4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1b72f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1b72f8:
    // 0x1b72f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b72f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b72fc:
    // 0x1b72fc: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1b72fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
label_1b7300:
    // 0x1b7300: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7304:
    // 0x1b7304: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7308:
    // 0x1b7308: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b7308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b730c:
    // 0x1b730c: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x1b730cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1b7310:
    // 0x1b7310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7314:
    // 0x1b7314: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b7314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b7318:
    // 0x1b7318: 0xc0965d0  jal         func_259740
label_1b731c:
    if (ctx->pc == 0x1B731Cu) {
        ctx->pc = 0x1B7320u;
        goto label_1b7320;
    }
    ctx->pc = 0x1B7318u;
    SET_GPR_U32(ctx, 31, 0x1B7320u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B7318u, 0x1B7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7320u;
label_1b7320:
    // 0x1b7320: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7320u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7324:
    // 0x1b7324: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7328:
    // 0x1b7328: 0x90a60003  lbu         $a2, 0x3($a1)
    ctx->pc = 0x1b7328u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1b732c:
    // 0x1b732c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1b732cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b7330:
    // 0x1b7330: 0xa0a70003  sb          $a3, 0x3($a1)
    ctx->pc = 0x1b7330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 7));
label_1b7334:
    // 0x1b7334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b7334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b7338:
    // 0x1b7338: 0x8c281a64  lw          $t0, 0x1A64($at)
    ctx->pc = 0x1b7338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b733c:
    // 0x1b733c: 0x35030100  ori         $v1, $t0, 0x100
    ctx->pc = 0x1b733cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
label_1b7340:
    // 0x1b7340: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b7340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b7344:
    // 0x1b7344: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b7344u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1b7348:
    // 0x1b7348: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b734c:
    // 0x1b734c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b734cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b7350:
    // 0x1b7350: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b7350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1b7354:
    // 0x1b7354: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b7354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b7358:
    // 0x1b7358: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b7358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1b735c:
    // 0x1b735c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b735cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7360:
    // 0x1b7360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b7364:
    // 0x1b7364: 0xc096b40  jal         func_25AD00
label_1b7368:
    if (ctx->pc == 0x1B7368u) {
        ctx->pc = 0x1B736Cu;
        goto label_1b736c;
    }
    ctx->pc = 0x1B7364u;
    SET_GPR_U32(ctx, 31, 0x1B736Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B7364u, 0x1B736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B736Cu;
label_1b736c:
    // 0x1b736c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b736cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7370:
    // 0x1b7370: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7374:
    // 0x1b7374: 0x8ca31b64  lw          $v1, 0x1B64($a1)
    ctx->pc = 0x1b7374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7012)));
label_1b7378:
    // 0x1b7378: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1b737c:
    if (ctx->pc == 0x1B737Cu) {
        ctx->pc = 0x1B7380u;
        goto label_1b7380;
    }
    ctx->pc = 0x1B7378u;
    {
        const bool branch_taken_0x1b7378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7378) {
            ctx->pc = 0x1B73A8u;
            goto label_1b73a8;
        }
    }
    ctx->pc = 0x1B7380u;
label_1b7380:
    // 0x1b7380: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7384:
    // 0x1b7384: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7388:
    // 0x1b7388: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b7388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_1b738c:
    // 0x1b738c: 0x3465999a  ori         $a1, $v1, 0x999A
    ctx->pc = 0x1b738cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1b7390:
    // 0x1b7390: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1b7390u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7394:
    // 0x1b7394: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b7394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1b7398:
    // 0x1b7398: 0x24c50180  addiu       $a1, $a2, 0x180
    ctx->pc = 0x1b7398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_1b739c:
    // 0x1b739c: 0xc040ed8  jal         func_103B60
label_1b73a0:
    if (ctx->pc == 0x1B73A0u) {
        ctx->pc = 0x1B73A4u;
        goto label_1b73a4;
    }
    ctx->pc = 0x1B739Cu;
    SET_GPR_U32(ctx, 31, 0x1B73A4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B73A4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B73A4u) { return; }
    ctx->pc = 0x1B73A4u;
label_1b73a4:
    // 0x1b73a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b73a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b73a8:
    // 0x1b73a8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b73ac:
    // 0x1b73ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b73acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b73b0:
    // 0x1b73b0: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1b73b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b73b4:
    // 0x1b73b4: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x1b73b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b73b8:
    // 0x1b73b8: 0xc058f20  jal         func_163C80
label_1b73bc:
    if (ctx->pc == 0x1B73BCu) {
        ctx->pc = 0x1B73C0u;
        goto label_1b73c0;
    }
    ctx->pc = 0x1B73B8u;
    SET_GPR_U32(ctx, 31, 0x1B73C0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B73B8u, 0x1B73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73C0u;
label_1b73c0:
    // 0x1b73c0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b73c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b73c4:
    // 0x1b73c4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b73c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b73c8:
    // 0x1b73c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b73c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b73cc:
    // 0x1b73cc: 0x0  nop
    ctx->pc = 0x1b73ccu;
    // NOP
label_1b73d0:
    // 0x1b73d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b73d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b73d4:
    // 0x1b73d4: 0x0  nop
    ctx->pc = 0x1b73d4u;
    // NOP
label_1b73d8:
    // 0x1b73d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b73dc:
    if (ctx->pc == 0x1B73DCu) {
        ctx->pc = 0x1B73E0u;
        goto label_1b73e0;
    }
    ctx->pc = 0x1B73D8u;
    {
        const bool branch_taken_0x1b73d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b73d8) {
            ctx->pc = 0x1B73F4u;
            goto label_1b73f4;
        }
    }
    ctx->pc = 0x1B73E0u;
label_1b73e0:
    // 0x1b73e0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1b73e4:
    // 0x1b73e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b73e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b73e8:
    // 0x1b73e8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b73e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b73ec:
    // 0x1b73ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b73ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b73f0:
    // 0x1b73f0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b73f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b73f4:
    // 0x1b73f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b73f8:
    // 0x1b73f8: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1b73f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b73fc:
    // 0x1b73fc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1b7400:
    // 0x1b7400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7404:
    // 0x1b7404: 0x0  nop
    ctx->pc = 0x1b7404u;
    // NOP
label_1b7408:
    // 0x1b7408: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7408u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b740c:
    // 0x1b740c: 0x0  nop
    ctx->pc = 0x1b740cu;
    // NOP
label_1b7410:
    // 0x1b7410: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b7414:
    if (ctx->pc == 0x1B7414u) {
        ctx->pc = 0x1B7418u;
        goto label_1b7418;
    }
    ctx->pc = 0x1B7410u;
    {
        const bool branch_taken_0x1b7410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7410) {
            ctx->pc = 0x1B74F4u;
            goto label_1b74f4;
        }
    }
    ctx->pc = 0x1B7418u;
label_1b7418:
    // 0x1b7418: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b7418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b741c:
    // 0x1b741c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b741cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1b7420:
    // 0x1b7420: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b7420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1b7424:
    // 0x1b7424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7428:
    // 0x1b7428: 0x0  nop
    ctx->pc = 0x1b7428u;
    // NOP
label_1b742c:
    // 0x1b742c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b742cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7430:
    // 0x1b7430: 0x0  nop
    ctx->pc = 0x1b7430u;
    // NOP
label_1b7434:
    // 0x1b7434: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b7438:
    if (ctx->pc == 0x1B7438u) {
        ctx->pc = 0x1B743Cu;
        goto label_1b743c;
    }
    ctx->pc = 0x1B7434u;
    {
        const bool branch_taken_0x1b7434 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7434) {
            ctx->pc = 0x1B7498u;
            goto label_1b7498;
        }
    }
    ctx->pc = 0x1B743Cu;
label_1b743c:
    // 0x1b743c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7440:
    // 0x1b7440: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b7440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7444:
    // 0x1b7444: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b7444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b7448:
    // 0x1b7448: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b7448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b744c:
    // 0x1b744c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b744cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7450:
    // 0x1b7450: 0x0  nop
    ctx->pc = 0x1b7450u;
    // NOP
label_1b7454:
    // 0x1b7454: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b7454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b7458:
    // 0x1b7458: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b7458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b745c:
    // 0x1b745c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7460:
    // 0x1b7460: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b7460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7464:
    // 0x1b7464: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b7464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1b7468:
    // 0x1b7468: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7468u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b746c:
    // 0x1b746c: 0x0  nop
    ctx->pc = 0x1b746cu;
    // NOP
label_1b7470:
    // 0x1b7470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7474:
    // 0x1b7474: 0x0  nop
    ctx->pc = 0x1b7474u;
    // NOP
label_1b7478:
    // 0x1b7478: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b747c:
    if (ctx->pc == 0x1B747Cu) {
        ctx->pc = 0x1B7480u;
        goto label_1b7480;
    }
    ctx->pc = 0x1B7478u;
    {
        const bool branch_taken_0x1b7478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7478) {
            ctx->pc = 0x1B74F4u;
            goto label_1b74f4;
        }
    }
    ctx->pc = 0x1B7480u;
label_1b7480:
    // 0x1b7480: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b7480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1b7484:
    // 0x1b7484: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7488:
    // 0x1b7488: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b748c:
    // 0x1b748c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b748cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b7490:
    // 0x1b7490: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b7494:
    if (ctx->pc == 0x1B7494u) {
        ctx->pc = 0x1B7498u;
        goto label_1b7498;
    }
    ctx->pc = 0x1B7490u;
    {
        const bool branch_taken_0x1b7490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7490) {
            ctx->pc = 0x1B74F4u;
            goto label_1b74f4;
        }
    }
    ctx->pc = 0x1B7498u;
label_1b7498:
    // 0x1b7498: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b749c:
    // 0x1b749c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b74a0:
    // 0x1b74a0: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x1b74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
label_1b74a4:
    // 0x1b74a4: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x1b74a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_1b74a8:
    // 0x1b74a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b74a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b74ac:
    // 0x1b74ac: 0x0  nop
    ctx->pc = 0x1b74acu;
    // NOP
label_1b74b0:
    // 0x1b74b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b74b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b74b4:
    // 0x1b74b4: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b74b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b74b8:
    // 0x1b74b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b74bc:
    // 0x1b74bc: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b74bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b74c0:
    // 0x1b74c0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_1b74c4:
    // 0x1b74c4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b74c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1b74c8:
    // 0x1b74c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b74c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b74cc:
    // 0x1b74cc: 0x0  nop
    ctx->pc = 0x1b74ccu;
    // NOP
label_1b74d0:
    // 0x1b74d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b74d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b74d4:
    // 0x1b74d4: 0x0  nop
    ctx->pc = 0x1b74d4u;
    // NOP
label_1b74d8:
    // 0x1b74d8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b74dc:
    if (ctx->pc == 0x1B74DCu) {
        ctx->pc = 0x1B74E0u;
        goto label_1b74e0;
    }
    ctx->pc = 0x1B74D8u;
    {
        const bool branch_taken_0x1b74d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b74d8) {
            ctx->pc = 0x1B74F4u;
            goto label_1b74f4;
        }
    }
    ctx->pc = 0x1B74E0u;
label_1b74e0:
    // 0x1b74e0: 0x3c103fa6  lui         $s0, 0x3FA6
    ctx->pc = 0x1b74e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16294 << 16));
label_1b74e4:
    // 0x1b74e4: 0x36036666  ori         $v1, $s0, 0x6666
    ctx->pc = 0x1b74e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)26214);
label_1b74e8:
    // 0x1b74e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b74e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b74ec:
    // 0x1b74ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b74f0:
    // 0x1b74f0: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b74f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b74f4:
    // 0x1b74f4: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b74f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b74f8:
    // 0x1b74f8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b74f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b74fc:
    // 0x1b74fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7500:
    // 0x1b7500: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x1b7500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
label_1b7504:
    // 0x1b7504: 0x24c50180  addiu       $a1, $a2, 0x180
    ctx->pc = 0x1b7504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_1b7508:
    // 0x1b7508: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1b7508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b750c:
    // 0x1b750c: 0xc040ed8  jal         func_103B60
label_1b7510:
    if (ctx->pc == 0x1B7510u) {
        ctx->pc = 0x1B7514u;
        goto label_1b7514;
    }
    ctx->pc = 0x1B750Cu;
    SET_GPR_U32(ctx, 31, 0x1B7514u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B7514u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7514u) { return; }
    ctx->pc = 0x1B7514u;
label_1b7514:
    // 0x1b7514: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7514u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7518:
    // 0x1b7518: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b751c:
    // 0x1b751c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7520:
    // 0x1b7520: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b7520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b7524:
    // 0x1b7524: 0xc05cd58  jal         func_173560
label_1b7528:
    if (ctx->pc == 0x1B7528u) {
        ctx->pc = 0x1B752Cu;
        goto label_1b752c;
    }
    ctx->pc = 0x1B7524u;
    SET_GPR_U32(ctx, 31, 0x1B752Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B7524u, 0x1B752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B752Cu;
label_1b752c:
    // 0x1b752c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b752cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7530:
    // 0x1b7530: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b7530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7534:
    // 0x1b7534: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7538:
    // 0x1b7538: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7538u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b753c:
    // 0x1b753c: 0xc057480  jal         func_15D200
label_1b7540:
    if (ctx->pc == 0x1B7540u) {
        ctx->pc = 0x1B7544u;
        goto label_1b7544;
    }
    ctx->pc = 0x1B753Cu;
    SET_GPR_U32(ctx, 31, 0x1B7544u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B753Cu, 0x1B7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7544u;
label_1b7544:
    // 0x1b7544: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7544u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7548:
    // 0x1b7548: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b754c:
    // 0x1b754c: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1b754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1b7550:
    // 0x1b7550: 0xc057a80  jal         func_15EA00
label_1b7554:
    if (ctx->pc == 0x1B7554u) {
        ctx->pc = 0x1B7558u;
        goto label_1b7558;
    }
    ctx->pc = 0x1B7550u;
    SET_GPR_U32(ctx, 31, 0x1B7558u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B7550u, 0x1B7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7558u;
label_1b7558:
    // 0x1b7558: 0x3c054467  lui         $a1, 0x4467
    ctx->pc = 0x1b7558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17511 << 16));
label_1b755c:
    // 0x1b755c: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x1b755cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1b7560:
    // 0x1b7560: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7564:
    // 0x1b7564: 0x0  nop
    ctx->pc = 0x1b7564u;
    // NOP
label_1b7568:
    // 0x1b7568: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b756c:
    // 0x1b756c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1b7570:
    // 0x1b7570: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7574:
    // 0x1b7574: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b7574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7578:
    // 0x1b7578: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b757c:
    // 0x1b757c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7580:
    // 0x1b7580: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b7584:
    // 0x1b7584: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b7588:
    // 0x1b7588: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b758c:
    // 0x1b758c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7590:
    // 0x1b7590: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b7590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7594:
    // 0x1b7594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7598:
    // 0x1b7598: 0x0  nop
    ctx->pc = 0x1b7598u;
    // NOP
label_1b759c:
    // 0x1b759c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b75a0:
    if (ctx->pc == 0x1B75A0u) {
        ctx->pc = 0x1B75A4u;
        goto label_1b75a4;
    }
    ctx->pc = 0x1B759Cu;
    {
        const bool branch_taken_0x1b759c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b759c) {
            ctx->pc = 0x1B75B0u;
            goto label_1b75b0;
        }
    }
    ctx->pc = 0x1B75A4u;
label_1b75a4:
    // 0x1b75a4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b75a8:
    // 0x1b75a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b75ac:
    // 0x1b75ac: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b75acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b75b0:
    // 0x1b75b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b75b4:
    // 0x1b75b4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1b75b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b75b8:
    // 0x1b75b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b75bc:
    // 0x1b75bc: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b75bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b75c0:
    // 0x1b75c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b75c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b75c4:
    // 0x1b75c4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b75c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b75c8:
    // 0x1b75c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b75c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b75cc:
    // 0x1b75cc: 0xc097530  jal         func_25D4C0
label_1b75d0:
    if (ctx->pc == 0x1B75D0u) {
        ctx->pc = 0x1B75D4u;
        goto label_1b75d4;
    }
    ctx->pc = 0x1B75CCu;
    SET_GPR_U32(ctx, 31, 0x1B75D4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B75CCu, 0x1B75D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75D4u;
label_1b75d4:
    // 0x1b75d4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b75d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b75d8:
    // 0x1b75d8: 0x90c309df  lbu         $v1, 0x9DF($a2)
    ctx->pc = 0x1b75d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
label_1b75dc:
    // 0x1b75dc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1b75dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b75e0:
    // 0x1b75e0: 0x30a60080  andi        $a2, $a1, 0x80
    ctx->pc = 0x1b75e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_1b75e4:
    // 0x1b75e4: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
label_1b75e8:
    if (ctx->pc == 0x1B75E8u) {
        ctx->pc = 0x1B75ECu;
        goto label_1b75ec;
    }
    ctx->pc = 0x1B75E4u;
    {
        const bool branch_taken_0x1b75e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b75e4) {
            ctx->pc = 0x1B7690u;
            goto label_1b7690;
        }
    }
    ctx->pc = 0x1B75ECu;
label_1b75ec:
    // 0x1b75ec: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b75ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b75f0:
    // 0x1b75f0: 0x8ce81b68  lw          $t0, 0x1B68($a3)
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7016)));
label_1b75f4:
    // 0x1b75f4: 0x35020001  ori         $v0, $t0, 0x1
    ctx->pc = 0x1b75f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_1b75f8:
    // 0x1b75f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b75f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b75fc:
    // 0x1b75fc: 0xc0587a8  jal         func_161EA0
label_1b7600:
    if (ctx->pc == 0x1B7600u) {
        ctx->pc = 0x1B7604u;
        goto label_1b7604;
    }
    ctx->pc = 0x1B75FCu;
    SET_GPR_U32(ctx, 31, 0x1B7604u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B75FCu, 0x1B7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7604u;
label_1b7604:
    // 0x1b7604: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_1b7608:
    if (ctx->pc == 0x1B7608u) {
        ctx->pc = 0x1B760Cu;
        goto label_1b760c;
    }
    ctx->pc = 0x1B7604u;
    {
        const bool branch_taken_0x1b7604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7604) {
            ctx->pc = 0x1B7748u;
            goto label_1b7748;
        }
    }
    ctx->pc = 0x1B760Cu;
label_1b760c:
    // 0x1b760c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7610:
    // 0x1b7610: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1b7610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b7614:
    // 0x1b7614: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b7614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b7618:
    // 0x1b7618: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1b7618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b761c:
    // 0x1b761c: 0x10a00346  beqz        $a1, . + 4 + (0x346 << 2)
label_1b7620:
    if (ctx->pc == 0x1B7620u) {
        ctx->pc = 0x1B7624u;
        goto label_1b7624;
    }
    ctx->pc = 0x1B761Cu;
    {
        const bool branch_taken_0x1b761c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b761c) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7624u;
label_1b7624:
    // 0x1b7624: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7628:
    // 0x1b7628: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b762c:
    // 0x1b762c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b762cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b7630:
    // 0x1b7630: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1b7630u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b7634:
    // 0x1b7634: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x1b7634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_1b7638:
    // 0x1b7638: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b7638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1b763c:
    // 0x1b763c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7640:
    // 0x1b7640: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1b7640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
label_1b7644:
    // 0x1b7644: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1b7644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b7648:
    // 0x1b7648: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b764c:
    // 0x1b764c: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_1b7650:
    if (ctx->pc == 0x1B7650u) {
        ctx->pc = 0x1B7654u;
        goto label_1b7654;
    }
    ctx->pc = 0x1B764Cu;
    {
        const bool branch_taken_0x1b764c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b764c) {
            ctx->pc = 0x1B767Cu;
            goto label_1b767c;
        }
    }
    ctx->pc = 0x1B7654u;
label_1b7654:
    // 0x1b7654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7658:
    // 0x1b7658: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
label_1b765c:
    if (ctx->pc == 0x1B765Cu) {
        ctx->pc = 0x1B7660u;
        goto label_1b7660;
    }
    ctx->pc = 0x1B7658u;
    {
        const bool branch_taken_0x1b7658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b7658) {
            ctx->pc = 0x1B767Cu;
            goto label_1b767c;
        }
    }
    ctx->pc = 0x1B7660u;
label_1b7660:
    // 0x1b7660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b7664:
    // 0x1b7664: 0x10a30334  beq         $a1, $v1, . + 4 + (0x334 << 2)
label_1b7668:
    if (ctx->pc == 0x1B7668u) {
        ctx->pc = 0x1B766Cu;
        goto label_1b766c;
    }
    ctx->pc = 0x1B7664u;
    {
        const bool branch_taken_0x1b7664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7664) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B766Cu;
label_1b766c:
    // 0x1b766c: 0x10a00332  beqz        $a1, . + 4 + (0x332 << 2)
label_1b7670:
    if (ctx->pc == 0x1B7670u) {
        ctx->pc = 0x1B7674u;
        goto label_1b7674;
    }
    ctx->pc = 0x1B766Cu;
    {
        const bool branch_taken_0x1b766c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b766c) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7674u;
label_1b7674:
    // 0x1b7674: 0x10000330  b           . + 4 + (0x330 << 2)
label_1b7678:
    if (ctx->pc == 0x1B7678u) {
        ctx->pc = 0x1B767Cu;
        goto label_1b767c;
    }
    ctx->pc = 0x1B7674u;
    {
        const bool branch_taken_0x1b7674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7674) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B767Cu;
label_1b767c:
    // 0x1b767c: 0xc0c5238  jal         func_3148E0
label_1b7680:
    if (ctx->pc == 0x1B7680u) {
        ctx->pc = 0x1B7684u;
        goto label_1b7684;
    }
    ctx->pc = 0x1B767Cu;
    SET_GPR_U32(ctx, 31, 0x1B7684u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B767Cu, 0x1B7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7684u;
label_1b7684:
    // 0x1b7684: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7684u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7688:
    // 0x1b7688: 0x1000032b  b           . + 4 + (0x32B << 2)
label_1b768c:
    if (ctx->pc == 0x1B768Cu) {
        ctx->pc = 0x1B7690u;
        goto label_1b7690;
    }
    ctx->pc = 0x1B7688u;
    {
        const bool branch_taken_0x1b7688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7688) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7690u;
label_1b7690:
    // 0x1b7690: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b7690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b7694:
    // 0x1b7694: 0xc0587a8  jal         func_161EA0
label_1b7698:
    if (ctx->pc == 0x1B7698u) {
        ctx->pc = 0x1B769Cu;
        goto label_1b769c;
    }
    ctx->pc = 0x1B7694u;
    SET_GPR_U32(ctx, 31, 0x1B769Cu);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B7694u, 0x1B769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B769Cu;
label_1b769c:
    // 0x1b769c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1b769cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b76a0:
    // 0x1b76a0: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_1b76a4:
    if (ctx->pc == 0x1B76A4u) {
        ctx->pc = 0x1B76A8u;
        goto label_1b76a8;
    }
    ctx->pc = 0x1B76A0u;
    {
        const bool branch_taken_0x1b76a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b76a0) {
            ctx->pc = 0x1B7748u;
            goto label_1b7748;
        }
    }
    ctx->pc = 0x1B76A8u;
label_1b76a8:
    // 0x1b76a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b76ac:
    // 0x1b76ac: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
label_1b76b0:
    if (ctx->pc == 0x1B76B0u) {
        ctx->pc = 0x1B76B4u;
        goto label_1b76b4;
    }
    ctx->pc = 0x1B76ACu;
    {
        const bool branch_taken_0x1b76ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b76ac) {
            ctx->pc = 0x1B76C8u;
            goto label_1b76c8;
        }
    }
    ctx->pc = 0x1B76B4u;
label_1b76b4:
    // 0x1b76b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b76b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b76b8:
    // 0x1b76b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b76bc:
    // 0x1b76bc: 0xac651b68  sw          $a1, 0x1B68($v1)
    ctx->pc = 0x1b76bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 5));
label_1b76c0:
    // 0x1b76c0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b76c4:
    if (ctx->pc == 0x1B76C4u) {
        ctx->pc = 0x1B76C8u;
        goto label_1b76c8;
    }
    ctx->pc = 0x1B76C0u;
    {
        const bool branch_taken_0x1b76c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b76c0) {
            ctx->pc = 0x1B7748u;
            goto label_1b7748;
        }
    }
    ctx->pc = 0x1B76C8u;
label_1b76c8:
    // 0x1b76c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b76cc:
    // 0x1b76cc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b76ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b76d0:
    // 0x1b76d0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b76d4:
    // 0x1b76d4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b76d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b76d8:
    // 0x1b76d8: 0x10800317  beqz        $a0, . + 4 + (0x317 << 2)
label_1b76dc:
    if (ctx->pc == 0x1B76DCu) {
        ctx->pc = 0x1B76E0u;
        goto label_1b76e0;
    }
    ctx->pc = 0x1B76D8u;
    {
        const bool branch_taken_0x1b76d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b76d8) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B76E0u;
label_1b76e0:
    // 0x1b76e0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b76e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b76e4:
    // 0x1b76e4: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1b76e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b76e8:
    // 0x1b76e8: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b76ec:
    // 0x1b76ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b76ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b76f0:
    // 0x1b76f0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b76f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b76f4:
    // 0x1b76f4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b76f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1b76f8:
    // 0x1b76f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b76f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b76fc:
    // 0x1b76fc: 0x906513a6  lbu         $a1, 0x13A6($v1)
    ctx->pc = 0x1b76fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b7700:
    // 0x1b7700: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b7700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b7704:
    // 0x1b7704: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7708:
    // 0x1b7708: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1b770c:
    if (ctx->pc == 0x1B770Cu) {
        ctx->pc = 0x1B7710u;
        goto label_1b7710;
    }
    ctx->pc = 0x1B7708u;
    {
        const bool branch_taken_0x1b7708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7708) {
            ctx->pc = 0x1B7738u;
            goto label_1b7738;
        }
    }
    ctx->pc = 0x1B7710u;
label_1b7710:
    // 0x1b7710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7714:
    // 0x1b7714: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1b7718:
    if (ctx->pc == 0x1B7718u) {
        ctx->pc = 0x1B771Cu;
        goto label_1b771c;
    }
    ctx->pc = 0x1B7714u;
    {
        const bool branch_taken_0x1b7714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7714) {
            ctx->pc = 0x1B7738u;
            goto label_1b7738;
        }
    }
    ctx->pc = 0x1B771Cu;
label_1b771c:
    // 0x1b771c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b7720:
    // 0x1b7720: 0x10830305  beq         $a0, $v1, . + 4 + (0x305 << 2)
label_1b7724:
    if (ctx->pc == 0x1B7724u) {
        ctx->pc = 0x1B7728u;
        goto label_1b7728;
    }
    ctx->pc = 0x1B7720u;
    {
        const bool branch_taken_0x1b7720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7720) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7728u;
label_1b7728:
    // 0x1b7728: 0x10800303  beqz        $a0, . + 4 + (0x303 << 2)
label_1b772c:
    if (ctx->pc == 0x1B772Cu) {
        ctx->pc = 0x1B7730u;
        goto label_1b7730;
    }
    ctx->pc = 0x1B7728u;
    {
        const bool branch_taken_0x1b7728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7728) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7730u;
label_1b7730:
    // 0x1b7730: 0x10000301  b           . + 4 + (0x301 << 2)
label_1b7734:
    if (ctx->pc == 0x1B7734u) {
        ctx->pc = 0x1B7738u;
        goto label_1b7738;
    }
    ctx->pc = 0x1B7730u;
    {
        const bool branch_taken_0x1b7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7730) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7738u;
label_1b7738:
    // 0x1b7738: 0xc0c5238  jal         func_3148E0
label_1b773c:
    if (ctx->pc == 0x1B773Cu) {
        ctx->pc = 0x1B7740u;
        goto label_1b7740;
    }
    ctx->pc = 0x1B7738u;
    SET_GPR_U32(ctx, 31, 0x1B7740u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B7738u, 0x1B7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7740u;
label_1b7740:
    // 0x1b7740: 0x100002fd  b           . + 4 + (0x2FD << 2)
label_1b7744:
    if (ctx->pc == 0x1B7744u) {
        ctx->pc = 0x1B7748u;
        goto label_1b7748;
    }
    ctx->pc = 0x1B7740u;
    {
        const bool branch_taken_0x1b7740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7740) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7748u;
label_1b7748:
    // 0x1b7748: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b774c:
    // 0x1b774c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x1b774cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b7750:
    // 0x1b7750: 0x10a002f9  beqz        $a1, . + 4 + (0x2F9 << 2)
label_1b7754:
    if (ctx->pc == 0x1B7754u) {
        ctx->pc = 0x1B7758u;
        goto label_1b7758;
    }
    ctx->pc = 0x1B7750u;
    {
        const bool branch_taken_0x1b7750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7750) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7758u;
label_1b7758:
    // 0x1b7758: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b775c:
    // 0x1b775c: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x1b775cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_1b7760:
    // 0x1b7760: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x1b7760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1b7764:
    // 0x1b7764: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x1b7764u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
label_1b7768:
    // 0x1b7768: 0x100002f3  b           . + 4 + (0x2F3 << 2)
label_1b776c:
    if (ctx->pc == 0x1B776Cu) {
        ctx->pc = 0x1B7770u;
        goto label_1b7770;
    }
    ctx->pc = 0x1B7768u;
    {
        const bool branch_taken_0x1b7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7768) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7770u;
label_1b7770:
    // 0x1b7770: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7774:
    // 0x1b7774: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7778:
    // 0x1b7778: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b7778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1b777c:
    // 0x1b777c: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1b777cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1b7780:
    // 0x1b7780: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7784:
    // 0x1b7784: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b7784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b7788:
    // 0x1b7788: 0xc0965d0  jal         func_259740
label_1b778c:
    if (ctx->pc == 0x1B778Cu) {
        ctx->pc = 0x1B7790u;
        goto label_1b7790;
    }
    ctx->pc = 0x1B7788u;
    SET_GPR_U32(ctx, 31, 0x1B7790u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B7788u, 0x1B7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7790u;
label_1b7790:
    // 0x1b7790: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b7790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
label_1b7794:
    // 0x1b7794: 0x34433334  ori         $v1, $v0, 0x3334
    ctx->pc = 0x1b7794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
label_1b7798:
    // 0x1b7798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b779c:
    // 0x1b779c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b77a0:
    // 0x1b77a0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b77a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1b77a4:
    // 0x1b77a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b77a8:
    // 0x1b77a8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1b77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
label_1b77ac:
    // 0x1b77ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b77acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b77b0:
    // 0x1b77b0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1b77b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1b77b4:
    // 0x1b77b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b77b8:
    // 0x1b77b8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1b77b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b77bc:
    // 0x1b77bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b77c0:
    // 0x1b77c0: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1b77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1b77c4:
    // 0x1b77c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b77c8:
    if (ctx->pc == 0x1B77C8u) {
        ctx->pc = 0x1B77CCu;
        goto label_1b77cc;
    }
    ctx->pc = 0x1B77C4u;
    {
        const bool branch_taken_0x1b77c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b77c4) {
            ctx->pc = 0x1B77E8u;
            goto label_1b77e8;
        }
    }
    ctx->pc = 0x1B77CCu;
label_1b77cc:
    // 0x1b77cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b77ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b77d0:
    // 0x1b77d0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1b77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b77d4:
    // 0x1b77d4: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1b77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1b77d8:
    // 0x1b77d8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1b77d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b77dc:
    // 0x1b77dc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1b77dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b77e0:
    // 0x1b77e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b77e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b77e4:
    // 0x1b77e4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1b77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1b77e8:
    // 0x1b77e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b77e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b77ec:
    // 0x1b77ec: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b77f0:
    // 0x1b77f0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1b77f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1b77f4:
    // 0x1b77f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b77f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b77f8:
    // 0x1b77f8: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1b77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_1b77fc:
    // 0x1b77fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7800:
    // 0x1b7800: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b7800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b7804:
    // 0x1b7804: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1b7804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_1b7808:
    // 0x1b7808: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1b7808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1b780c:
    // 0x1b780c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1b780cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1b7810:
    // 0x1b7810: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b7810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7814:
    // 0x1b7814: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b7814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1b7818:
    // 0x1b7818: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7818u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b781c:
    // 0x1b781c: 0xc096b40  jal         func_25AD00
label_1b7820:
    if (ctx->pc == 0x1B7820u) {
        ctx->pc = 0x1B7824u;
        goto label_1b7824;
    }
    ctx->pc = 0x1B781Cu;
    SET_GPR_U32(ctx, 31, 0x1B7824u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B781Cu, 0x1B7824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7824u;
label_1b7824:
    // 0x1b7824: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b7824u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7828:
    // 0x1b7828: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b782c:
    // 0x1b782c: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1b782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1b7830:
    // 0x1b7830: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b7834:
    if (ctx->pc == 0x1B7834u) {
        ctx->pc = 0x1B7838u;
        goto label_1b7838;
    }
    ctx->pc = 0x1B7830u;
    {
        const bool branch_taken_0x1b7830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7830) {
            ctx->pc = 0x1B7864u;
            goto label_1b7864;
        }
    }
    ctx->pc = 0x1B7838u;
label_1b7838:
    // 0x1b7838: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b783c:
    // 0x1b783c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7840:
    // 0x1b7840: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x1b7840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
label_1b7844:
    // 0x1b7844: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x1b7844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_1b7848:
    // 0x1b7848: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b7848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b784c:
    // 0x1b784c: 0x24a20180  addiu       $v0, $a1, 0x180
    ctx->pc = 0x1b784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b7850:
    // 0x1b7850: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7854:
    // 0x1b7854: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b7854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b7858:
    // 0x1b7858: 0xc040ed8  jal         func_103B60
label_1b785c:
    if (ctx->pc == 0x1B785Cu) {
        ctx->pc = 0x1B7860u;
        goto label_1b7860;
    }
    ctx->pc = 0x1B7858u;
    SET_GPR_U32(ctx, 31, 0x1B7860u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B7860u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7860u) { return; }
    ctx->pc = 0x1B7860u;
label_1b7860:
    // 0x1b7860: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b7860u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7864:
    // 0x1b7864: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b7864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7868:
    // 0x1b7868: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b7868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b786c:
    // 0x1b786c: 0xc4ec1290  lwc1        $f12, 0x1290($a3)
    ctx->pc = 0x1b786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b7870:
    // 0x1b7870: 0xc50d1380  lwc1        $f13, 0x1380($t0)
    ctx->pc = 0x1b7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b7874:
    // 0x1b7874: 0xc058f20  jal         func_163C80
label_1b7878:
    if (ctx->pc == 0x1B7878u) {
        ctx->pc = 0x1B787Cu;
        goto label_1b787c;
    }
    ctx->pc = 0x1B7874u;
    SET_GPR_U32(ctx, 31, 0x1B787Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B7874u, 0x1B787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B787Cu;
label_1b787c:
    // 0x1b787c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b787cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b7880:
    // 0x1b7880: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b7880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7884:
    // 0x1b7884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7888:
    // 0x1b7888: 0x0  nop
    ctx->pc = 0x1b7888u;
    // NOP
label_1b788c:
    // 0x1b788c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b788cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7890:
    // 0x1b7890: 0x0  nop
    ctx->pc = 0x1b7890u;
    // NOP
label_1b7894:
    // 0x1b7894: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b7898:
    if (ctx->pc == 0x1B7898u) {
        ctx->pc = 0x1B789Cu;
        goto label_1b789c;
    }
    ctx->pc = 0x1B7894u;
    {
        const bool branch_taken_0x1b7894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7894) {
            ctx->pc = 0x1B78B0u;
            goto label_1b78b0;
        }
    }
    ctx->pc = 0x1B789Cu;
label_1b789c:
    // 0x1b789c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b78a0:
    // 0x1b78a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b78a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b78a4:
    // 0x1b78a4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b78a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b78a8:
    // 0x1b78a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b78a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b78ac:
    // 0x1b78ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b78acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b78b0:
    // 0x1b78b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b78b4:
    // 0x1b78b4: 0xc4811b5c  lwc1        $f1, 0x1B5C($a0)
    ctx->pc = 0x1b78b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b78b8:
    // 0x1b78b8: 0x3c054240  lui         $a1, 0x4240
    ctx->pc = 0x1b78b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16960 << 16));
label_1b78bc:
    // 0x1b78bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b78bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b78c0:
    // 0x1b78c0: 0x0  nop
    ctx->pc = 0x1b78c0u;
    // NOP
label_1b78c4:
    // 0x1b78c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b78c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b78c8:
    // 0x1b78c8: 0x0  nop
    ctx->pc = 0x1b78c8u;
    // NOP
label_1b78cc:
    // 0x1b78cc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b78d0:
    if (ctx->pc == 0x1B78D0u) {
        ctx->pc = 0x1B78D4u;
        goto label_1b78d4;
    }
    ctx->pc = 0x1B78CCu;
    {
        const bool branch_taken_0x1b78cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b78cc) {
            ctx->pc = 0x1B79B0u;
            goto label_1b79b0;
        }
    }
    ctx->pc = 0x1B78D4u;
label_1b78d4:
    // 0x1b78d4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b78d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b78d8:
    // 0x1b78d8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1b78dc:
    // 0x1b78dc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b78dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1b78e0:
    // 0x1b78e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b78e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b78e4:
    // 0x1b78e4: 0x0  nop
    ctx->pc = 0x1b78e4u;
    // NOP
label_1b78e8:
    // 0x1b78e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b78e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b78ec:
    // 0x1b78ec: 0x0  nop
    ctx->pc = 0x1b78ecu;
    // NOP
label_1b78f0:
    // 0x1b78f0: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b78f4:
    if (ctx->pc == 0x1B78F4u) {
        ctx->pc = 0x1B78F8u;
        goto label_1b78f8;
    }
    ctx->pc = 0x1B78F0u;
    {
        const bool branch_taken_0x1b78f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b78f0) {
            ctx->pc = 0x1B7954u;
            goto label_1b7954;
        }
    }
    ctx->pc = 0x1B78F8u;
label_1b78f8:
    // 0x1b78f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b78fc:
    // 0x1b78fc: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b78fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7900:
    // 0x1b7900: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b7900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b7904:
    // 0x1b7904: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1b7904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b7908:
    // 0x1b7908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b790c:
    // 0x1b790c: 0x0  nop
    ctx->pc = 0x1b790cu;
    // NOP
label_1b7910:
    // 0x1b7910: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b7910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b7914:
    // 0x1b7914: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b7914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b7918:
    // 0x1b7918: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b791c:
    // 0x1b791c: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7920:
    // 0x1b7920: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1b7920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_1b7924:
    // 0x1b7924: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b7924u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7928:
    // 0x1b7928: 0x0  nop
    ctx->pc = 0x1b7928u;
    // NOP
label_1b792c:
    // 0x1b792c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b792cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7930:
    // 0x1b7930: 0x0  nop
    ctx->pc = 0x1b7930u;
    // NOP
label_1b7934:
    // 0x1b7934: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b7938:
    if (ctx->pc == 0x1B7938u) {
        ctx->pc = 0x1B793Cu;
        goto label_1b793c;
    }
    ctx->pc = 0x1B7934u;
    {
        const bool branch_taken_0x1b7934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7934) {
            ctx->pc = 0x1B79B0u;
            goto label_1b79b0;
        }
    }
    ctx->pc = 0x1B793Cu;
label_1b793c:
    // 0x1b793c: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x1b793cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_1b7940:
    // 0x1b7940: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1b7940u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7944:
    // 0x1b7944: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7948:
    // 0x1b7948: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b7948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b794c:
    // 0x1b794c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b7950:
    if (ctx->pc == 0x1B7950u) {
        ctx->pc = 0x1B7954u;
        goto label_1b7954;
    }
    ctx->pc = 0x1B794Cu;
    {
        const bool branch_taken_0x1b794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b794c) {
            ctx->pc = 0x1B79B0u;
            goto label_1b79b0;
        }
    }
    ctx->pc = 0x1B7954u;
label_1b7954:
    // 0x1b7954: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7958:
    // 0x1b7958: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b7958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b795c:
    // 0x1b795c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b795cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1b7960:
    // 0x1b7960: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x1b7960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1b7964:
    // 0x1b7964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7968:
    // 0x1b7968: 0x0  nop
    ctx->pc = 0x1b7968u;
    // NOP
label_1b796c:
    // 0x1b796c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b796cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b7970:
    // 0x1b7970: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b7970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b7974:
    // 0x1b7974: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7978:
    // 0x1b7978: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b797c:
    // 0x1b797c: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1b797cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
label_1b7980:
    // 0x1b7980: 0x34856666  ori         $a1, $a0, 0x6666
    ctx->pc = 0x1b7980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_1b7984:
    // 0x1b7984: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b7984u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7988:
    // 0x1b7988: 0x0  nop
    ctx->pc = 0x1b7988u;
    // NOP
label_1b798c:
    // 0x1b798c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b798cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7990:
    // 0x1b7990: 0x0  nop
    ctx->pc = 0x1b7990u;
    // NOP
label_1b7994:
    // 0x1b7994: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b7998:
    if (ctx->pc == 0x1B7998u) {
        ctx->pc = 0x1B799Cu;
        goto label_1b799c;
    }
    ctx->pc = 0x1B7994u;
    {
        const bool branch_taken_0x1b7994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7994) {
            ctx->pc = 0x1B79B0u;
            goto label_1b79b0;
        }
    }
    ctx->pc = 0x1B799Cu;
label_1b799c:
    // 0x1b799c: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b799cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1b79a0:
    // 0x1b79a0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b79a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1b79a4:
    // 0x1b79a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b79a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b79a8:
    // 0x1b79a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b79ac:
    // 0x1b79ac: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b79acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b79b0:
    // 0x1b79b0: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1b79b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b79b4:
    // 0x1b79b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b79b8:
    // 0x1b79b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b79bc:
    // 0x1b79bc: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x1b79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_1b79c0:
    // 0x1b79c0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b79c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b79c4:
    // 0x1b79c4: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1b79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b79c8:
    // 0x1b79c8: 0xc040ed8  jal         func_103B60
label_1b79cc:
    if (ctx->pc == 0x1B79CCu) {
        ctx->pc = 0x1B79D0u;
        goto label_1b79d0;
    }
    ctx->pc = 0x1B79C8u;
    SET_GPR_U32(ctx, 31, 0x1B79D0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B79D0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B79D0u) { return; }
    ctx->pc = 0x1B79D0u;
label_1b79d0:
    // 0x1b79d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b79d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b79d4:
    // 0x1b79d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b79d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b79d8:
    // 0x1b79d8: 0xc05cd10  jal         func_173440
label_1b79dc:
    if (ctx->pc == 0x1B79DCu) {
        ctx->pc = 0x1B79E0u;
        goto label_1b79e0;
    }
    ctx->pc = 0x1B79D8u;
    SET_GPR_U32(ctx, 31, 0x1B79E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B79D8u, 0x1B79E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79E0u;
label_1b79e0:
    // 0x1b79e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b79e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b79e4:
    // 0x1b79e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b79e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b79e8:
    // 0x1b79e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b79ec:
    // 0x1b79ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b79ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b79f0:
    // 0x1b79f0: 0xc057480  jal         func_15D200
label_1b79f4:
    if (ctx->pc == 0x1B79F4u) {
        ctx->pc = 0x1B79F8u;
        goto label_1b79f8;
    }
    ctx->pc = 0x1B79F0u;
    SET_GPR_U32(ctx, 31, 0x1B79F8u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B79F0u, 0x1B79F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79F8u;
label_1b79f8:
    // 0x1b79f8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b79f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b79fc:
    // 0x1b79fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a00:
    // 0x1b7a00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a04:
    // 0x1b7a04: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1b7a08:
    // 0x1b7a08: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1b7a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1b7a0c:
    // 0x1b7a0c: 0xc05cf7c  jal         func_173DF0
label_1b7a10:
    if (ctx->pc == 0x1B7A10u) {
        ctx->pc = 0x1B7A14u;
        goto label_1b7a14;
    }
    ctx->pc = 0x1B7A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A14u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B7A0Cu, 0x1B7A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A14u;
label_1b7a14:
    // 0x1b7a14: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b7a18:
    // 0x1b7a18: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a1c:
    // 0x1b7a1c: 0xc4c11284  lwc1        $f1, 0x1284($a2)
    ctx->pc = 0x1b7a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7a20:
    // 0x1b7a20: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a24:
    // 0x1b7a24: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7a28:
    // 0x1b7a28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b7a2c:
    // 0x1b7a2c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b7a30:
    // 0x1b7a30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a34:
    // 0x1b7a34: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1b7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7a38:
    // 0x1b7a38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a3c:
    // 0x1b7a3c: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b7a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7a40:
    // 0x1b7a40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7a40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b7a44:
    // 0x1b7a44: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b7a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b7a48:
    // 0x1b7a48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a4c:
    // 0x1b7a4c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1b7a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7a50:
    // 0x1b7a50: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7a54:
    // 0x1b7a54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7a58:
    // 0x1b7a58: 0x0  nop
    ctx->pc = 0x1b7a58u;
    // NOP
label_1b7a5c:
    // 0x1b7a5c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b7a60:
    if (ctx->pc == 0x1B7A60u) {
        ctx->pc = 0x1B7A64u;
        goto label_1b7a64;
    }
    ctx->pc = 0x1B7A5Cu;
    {
        const bool branch_taken_0x1b7a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7a5c) {
            ctx->pc = 0x1B7A7Cu;
            goto label_1b7a7c;
        }
    }
    ctx->pc = 0x1B7A64u;
label_1b7a64:
    // 0x1b7a64: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7a68:
    // 0x1b7a68: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a6c:
    // 0x1b7a6c: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b7a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
label_1b7a70:
    // 0x1b7a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7a74:
    // 0x1b7a74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a78:
    // 0x1b7a78: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x1b7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
label_1b7a7c:
    // 0x1b7a7c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b7a7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b7a80:
    // 0x1b7a80: 0xc097530  jal         func_25D4C0
label_1b7a84:
    if (ctx->pc == 0x1B7A84u) {
        ctx->pc = 0x1B7A88u;
        goto label_1b7a88;
    }
    ctx->pc = 0x1B7A80u;
    SET_GPR_U32(ctx, 31, 0x1B7A88u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B7A80u, 0x1B7A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A88u;
label_1b7a88:
    // 0x1b7a88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7a88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7a8c:
    // 0x1b7a8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7a90:
    // 0x1b7a90: 0x8c641b60  lw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1b7a94:
    // 0x1b7a94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1b7a98:
    if (ctx->pc == 0x1B7A98u) {
        ctx->pc = 0x1B7A9Cu;
        goto label_1b7a9c;
    }
    ctx->pc = 0x1B7A94u;
    {
        const bool branch_taken_0x1b7a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a94) {
            ctx->pc = 0x1B7AB0u;
            goto label_1b7ab0;
        }
    }
    ctx->pc = 0x1B7A9Cu;
label_1b7a9c:
    // 0x1b7a9c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b7a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b7aa0:
    // 0x1b7aa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7aa4:
    // 0x1b7aa4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1b7aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b7aa8:
    // 0x1b7aa8: 0x10000223  b           . + 4 + (0x223 << 2)
label_1b7aac:
    if (ctx->pc == 0x1B7AACu) {
        ctx->pc = 0x1B7AB0u;
        goto label_1b7ab0;
    }
    ctx->pc = 0x1B7AA8u;
    {
        const bool branch_taken_0x1b7aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7aa8) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7AB0u;
label_1b7ab0:
    // 0x1b7ab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7ab4:
    // 0x1b7ab4: 0xc0587a8  jal         func_161EA0
label_1b7ab8:
    if (ctx->pc == 0x1B7AB8u) {
        ctx->pc = 0x1B7ABCu;
        goto label_1b7abc;
    }
    ctx->pc = 0x1B7AB4u;
    SET_GPR_U32(ctx, 31, 0x1B7ABCu);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B7AB4u, 0x1B7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7ABCu;
label_1b7abc:
    // 0x1b7abc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7abcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7ac0:
    // 0x1b7ac0: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_1b7ac4:
    if (ctx->pc == 0x1B7AC4u) {
        ctx->pc = 0x1B7AC8u;
        goto label_1b7ac8;
    }
    ctx->pc = 0x1B7AC0u;
    {
        const bool branch_taken_0x1b7ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ac0) {
            ctx->pc = 0x1B7B4Cu;
            goto label_1b7b4c;
        }
    }
    ctx->pc = 0x1B7AC8u;
label_1b7ac8:
    // 0x1b7ac8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7acc:
    // 0x1b7acc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b7accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b7ad0:
    // 0x1b7ad0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b7ad4:
    // 0x1b7ad4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b7ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b7ad8:
    // 0x1b7ad8: 0x10600217  beqz        $v1, . + 4 + (0x217 << 2)
label_1b7adc:
    if (ctx->pc == 0x1B7ADCu) {
        ctx->pc = 0x1B7AE0u;
        goto label_1b7ae0;
    }
    ctx->pc = 0x1B7AD8u;
    {
        const bool branch_taken_0x1b7ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ad8) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7AE0u;
label_1b7ae0:
    // 0x1b7ae0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7ae4:
    // 0x1b7ae4: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1b7ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b7ae8:
    // 0x1b7ae8: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1b7ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
label_1b7aec:
    // 0x1b7aec: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1b7aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1b7af0:
    // 0x1b7af0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b7af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b7af4:
    // 0x1b7af4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1b7af8:
    // 0x1b7af8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7afc:
    // 0x1b7afc: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1b7afcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b7b00:
    // 0x1b7b00: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1b7b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b7b04:
    // 0x1b7b04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7b08:
    // 0x1b7b08: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_1b7b0c:
    if (ctx->pc == 0x1B7B0Cu) {
        ctx->pc = 0x1B7B10u;
        goto label_1b7b10;
    }
    ctx->pc = 0x1B7B08u;
    {
        const bool branch_taken_0x1b7b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7b08) {
            ctx->pc = 0x1B7B38u;
            goto label_1b7b38;
        }
    }
    ctx->pc = 0x1B7B10u;
label_1b7b10:
    // 0x1b7b10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7b14:
    // 0x1b7b14: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
label_1b7b18:
    if (ctx->pc == 0x1B7B18u) {
        ctx->pc = 0x1B7B1Cu;
        goto label_1b7b1c;
    }
    ctx->pc = 0x1B7B14u;
    {
        const bool branch_taken_0x1b7b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b7b14) {
            ctx->pc = 0x1B7B38u;
            goto label_1b7b38;
        }
    }
    ctx->pc = 0x1B7B1Cu;
label_1b7b1c:
    // 0x1b7b1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b7b20:
    // 0x1b7b20: 0x10a30205  beq         $a1, $v1, . + 4 + (0x205 << 2)
label_1b7b24:
    if (ctx->pc == 0x1B7B24u) {
        ctx->pc = 0x1B7B28u;
        goto label_1b7b28;
    }
    ctx->pc = 0x1B7B20u;
    {
        const bool branch_taken_0x1b7b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7b20) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7B28u;
label_1b7b28:
    // 0x1b7b28: 0x10a00203  beqz        $a1, . + 4 + (0x203 << 2)
label_1b7b2c:
    if (ctx->pc == 0x1B7B2Cu) {
        ctx->pc = 0x1B7B30u;
        goto label_1b7b30;
    }
    ctx->pc = 0x1B7B28u;
    {
        const bool branch_taken_0x1b7b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b28) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7B30u;
label_1b7b30:
    // 0x1b7b30: 0x10000201  b           . + 4 + (0x201 << 2)
label_1b7b34:
    if (ctx->pc == 0x1B7B34u) {
        ctx->pc = 0x1B7B38u;
        goto label_1b7b38;
    }
    ctx->pc = 0x1B7B30u;
    {
        const bool branch_taken_0x1b7b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b30) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7B38u;
label_1b7b38:
    // 0x1b7b38: 0xc0c5238  jal         func_3148E0
label_1b7b3c:
    if (ctx->pc == 0x1B7B3Cu) {
        ctx->pc = 0x1B7B40u;
        goto label_1b7b40;
    }
    ctx->pc = 0x1B7B38u;
    SET_GPR_U32(ctx, 31, 0x1B7B40u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B7B38u, 0x1B7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B40u;
label_1b7b40:
    // 0x1b7b40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7b40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7b44:
    // 0x1b7b44: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_1b7b48:
    if (ctx->pc == 0x1B7B48u) {
        ctx->pc = 0x1B7B4Cu;
        goto label_1b7b4c;
    }
    ctx->pc = 0x1B7B44u;
    {
        const bool branch_taken_0x1b7b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b44) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7B4Cu;
label_1b7b4c:
    // 0x1b7b4c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7b50:
    // 0x1b7b50: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1b7b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_1b7b54:
    // 0x1b7b54: 0x106001f8  beqz        $v1, . + 4 + (0x1F8 << 2)
label_1b7b58:
    if (ctx->pc == 0x1B7B58u) {
        ctx->pc = 0x1B7B5Cu;
        goto label_1b7b5c;
    }
    ctx->pc = 0x1B7B54u;
    {
        const bool branch_taken_0x1b7b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b54) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7B5Cu;
label_1b7b5c:
    // 0x1b7b5c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7b60:
    // 0x1b7b60: 0x90a60003  lbu         $a2, 0x3($a1)
    ctx->pc = 0x1b7b60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1b7b64:
    // 0x1b7b64: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1b7b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b7b68:
    // 0x1b7b68: 0xa0a70003  sb          $a3, 0x3($a1)
    ctx->pc = 0x1b7b68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 7));
label_1b7b6c:
    // 0x1b7b6c: 0x100001f2  b           . + 4 + (0x1F2 << 2)
label_1b7b70:
    if (ctx->pc == 0x1B7B70u) {
        ctx->pc = 0x1B7B74u;
        goto label_1b7b74;
    }
    ctx->pc = 0x1B7B6Cu;
    {
        const bool branch_taken_0x1b7b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b6c) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7B74u;
label_1b7b74:
    // 0x1b7b74: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b7b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7b78:
    // 0x1b7b78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7b7c:
    // 0x1b7b7c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1b7b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1b7b80:
    // 0x1b7b80: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b7b84:
    // 0x1b7b84: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1b7b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_1b7b88:
    // 0x1b7b88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7b8c:
    // 0x1b7b8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b7b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b7b90:
    // 0x1b7b90: 0xc0965d0  jal         func_259740
label_1b7b94:
    if (ctx->pc == 0x1B7B94u) {
        ctx->pc = 0x1B7B98u;
        goto label_1b7b98;
    }
    ctx->pc = 0x1B7B90u;
    SET_GPR_U32(ctx, 31, 0x1B7B98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B7B90u, 0x1B7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B98u;
label_1b7b98:
    // 0x1b7b98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7b98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7b9c:
    // 0x1b7b9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7ba0:
    // 0x1b7ba0: 0xaca01b60  sw          $zero, 0x1B60($a1)
    ctx->pc = 0x1b7ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 0));
label_1b7ba4:
    // 0x1b7ba4: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1b7ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_1b7ba8:
    // 0x1b7ba8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7ba8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7bac:
    // 0x1b7bac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7bb0:
    // 0x1b7bb0: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1b7bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1b7bb4:
    // 0x1b7bb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7bb8:
    // 0x1b7bb8: 0x8c641b64  lw          $a0, 0x1B64($v1)
    ctx->pc = 0x1b7bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_1b7bbc:
    // 0x1b7bbc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1b7bc0:
    if (ctx->pc == 0x1B7BC0u) {
        ctx->pc = 0x1B7BC4u;
        goto label_1b7bc4;
    }
    ctx->pc = 0x1B7BBCu;
    {
        const bool branch_taken_0x1b7bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7bbc) {
            ctx->pc = 0x1B7BF0u;
            goto label_1b7bf0;
        }
    }
    ctx->pc = 0x1B7BC4u;
label_1b7bc4:
    // 0x1b7bc4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7bc8:
    // 0x1b7bc8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7bcc:
    // 0x1b7bcc: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x1b7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
label_1b7bd0:
    // 0x1b7bd0: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x1b7bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_1b7bd4:
    // 0x1b7bd4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b7bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7bd8:
    // 0x1b7bd8: 0x24c60180  addiu       $a2, $a2, 0x180
    ctx->pc = 0x1b7bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_1b7bdc:
    // 0x1b7bdc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1b7bdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1b7be0:
    // 0x1b7be0: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b7be4:
    // 0x1b7be4: 0xc040ed8  jal         func_103B60
label_1b7be8:
    if (ctx->pc == 0x1B7BE8u) {
        ctx->pc = 0x1B7BECu;
        goto label_1b7bec;
    }
    ctx->pc = 0x1B7BE4u;
    SET_GPR_U32(ctx, 31, 0x1B7BECu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B7BECu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7BECu) { return; }
    ctx->pc = 0x1B7BECu;
label_1b7bec:
    // 0x1b7bec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7becu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7bf0:
    // 0x1b7bf0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7bf4:
    // 0x1b7bf4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7bf8:
    // 0x1b7bf8: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
label_1b7bfc:
    // 0x1b7bfc: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b7c00:
    // 0x1b7c00: 0xc040c9e  jal         func_103278
label_1b7c04:
    if (ctx->pc == 0x1B7C04u) {
        ctx->pc = 0x1B7C08u;
        goto label_1b7c08;
    }
    ctx->pc = 0x1B7C00u;
    SET_GPR_U32(ctx, 31, 0x1B7C08u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B7C08u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7C08u) { return; }
    ctx->pc = 0x1B7C08u;
label_1b7c08:
    // 0x1b7c08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7c0c:
    // 0x1b7c0c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1b7c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1b7c10:
    // 0x1b7c10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b7c14:
    // 0x1b7c14: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1b7c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b7c18:
    // 0x1b7c18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7c1c:
    // 0x1b7c1c: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1b7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1b7c20:
    // 0x1b7c20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b7c24:
    if (ctx->pc == 0x1B7C24u) {
        ctx->pc = 0x1B7C28u;
        goto label_1b7c28;
    }
    ctx->pc = 0x1B7C20u;
    {
        const bool branch_taken_0x1b7c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7c20) {
            ctx->pc = 0x1B7C44u;
            goto label_1b7c44;
        }
    }
    ctx->pc = 0x1B7C28u;
label_1b7c28:
    // 0x1b7c28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b7c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b7c2c:
    // 0x1b7c2c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1b7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b7c30:
    // 0x1b7c30: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1b7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1b7c34:
    // 0x1b7c34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b7c38:
    // 0x1b7c38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b7c3c:
    // 0x1b7c3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b7c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b7c40:
    // 0x1b7c40: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1b7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1b7c44:
    // 0x1b7c44: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7c48:
    // 0x1b7c48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b7c4c:
    // 0x1b7c4c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1b7c50:
    // 0x1b7c50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b7c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b7c54:
    // 0x1b7c54: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b7c58:
    // 0x1b7c58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7c5c:
    // 0x1b7c5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b7c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b7c60:
    // 0x1b7c60: 0xc096b40  jal         func_25AD00
label_1b7c64:
    if (ctx->pc == 0x1B7C64u) {
        ctx->pc = 0x1B7C68u;
        goto label_1b7c68;
    }
    ctx->pc = 0x1B7C60u;
    SET_GPR_U32(ctx, 31, 0x1B7C68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B7C60u, 0x1B7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C68u;
label_1b7c68:
    // 0x1b7c68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7c6c:
    // 0x1b7c6c: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b7c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7c70:
    // 0x1b7c70: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b7c74:
    // 0x1b7c74: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x1b7c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b7c78:
    // 0x1b7c78: 0xc058f20  jal         func_163C80
label_1b7c7c:
    if (ctx->pc == 0x1B7C7Cu) {
        ctx->pc = 0x1B7C80u;
        goto label_1b7c80;
    }
    ctx->pc = 0x1B7C78u;
    SET_GPR_U32(ctx, 31, 0x1B7C80u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B7C78u, 0x1B7C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C80u;
label_1b7c80:
    // 0x1b7c80: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b7c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b7c84:
    // 0x1b7c84: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b7c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7c88:
    // 0x1b7c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7c8c:
    // 0x1b7c8c: 0x0  nop
    ctx->pc = 0x1b7c8cu;
    // NOP
label_1b7c90:
    // 0x1b7c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7c94:
    // 0x1b7c94: 0x0  nop
    ctx->pc = 0x1b7c94u;
    // NOP
label_1b7c98:
    // 0x1b7c98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b7c9c:
    if (ctx->pc == 0x1B7C9Cu) {
        ctx->pc = 0x1B7CA0u;
        goto label_1b7ca0;
    }
    ctx->pc = 0x1B7C98u;
    {
        const bool branch_taken_0x1b7c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7c98) {
            ctx->pc = 0x1B7CB4u;
            goto label_1b7cb4;
        }
    }
    ctx->pc = 0x1B7CA0u;
label_1b7ca0:
    // 0x1b7ca0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b7ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1b7ca4:
    // 0x1b7ca4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7ca8:
    // 0x1b7ca8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b7ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7cac:
    // 0x1b7cac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b7cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b7cb0:
    // 0x1b7cb0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b7cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b7cb4:
    // 0x1b7cb4: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b7cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7cb8:
    // 0x1b7cb8: 0xc6611b5c  lwc1        $f1, 0x1B5C($s3)
    ctx->pc = 0x1b7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7cbc:
    // 0x1b7cbc: 0x3c064240  lui         $a2, 0x4240
    ctx->pc = 0x1b7cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16960 << 16));
label_1b7cc0:
    // 0x1b7cc0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1b7cc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7cc4:
    // 0x1b7cc4: 0x0  nop
    ctx->pc = 0x1b7cc4u;
    // NOP
label_1b7cc8:
    // 0x1b7cc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7ccc:
    // 0x1b7ccc: 0x0  nop
    ctx->pc = 0x1b7cccu;
    // NOP
label_1b7cd0:
    // 0x1b7cd0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b7cd4:
    if (ctx->pc == 0x1B7CD4u) {
        ctx->pc = 0x1B7CD8u;
        goto label_1b7cd8;
    }
    ctx->pc = 0x1B7CD0u;
    {
        const bool branch_taken_0x1b7cd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7cd0) {
            ctx->pc = 0x1B7DB4u;
            goto label_1b7db4;
        }
    }
    ctx->pc = 0x1B7CD8u;
label_1b7cd8:
    // 0x1b7cd8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b7cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7cdc:
    // 0x1b7cdc: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1b7cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_1b7ce0:
    // 0x1b7ce0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1b7ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1b7ce4:
    // 0x1b7ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7ce8:
    // 0x1b7ce8: 0x0  nop
    ctx->pc = 0x1b7ce8u;
    // NOP
label_1b7cec:
    // 0x1b7cec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7cecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7cf0:
    // 0x1b7cf0: 0x0  nop
    ctx->pc = 0x1b7cf0u;
    // NOP
label_1b7cf4:
    // 0x1b7cf4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b7cf8:
    if (ctx->pc == 0x1B7CF8u) {
        ctx->pc = 0x1B7CFCu;
        goto label_1b7cfc;
    }
    ctx->pc = 0x1B7CF4u;
    {
        const bool branch_taken_0x1b7cf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7cf4) {
            ctx->pc = 0x1B7D58u;
            goto label_1b7d58;
        }
    }
    ctx->pc = 0x1B7CFCu;
label_1b7cfc:
    // 0x1b7cfc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7d00:
    // 0x1b7d00: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1b7d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7d04:
    // 0x1b7d04: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1b7d08:
    // 0x1b7d08: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x1b7d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1b7d0c:
    // 0x1b7d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7d10:
    // 0x1b7d10: 0x0  nop
    ctx->pc = 0x1b7d10u;
    // NOP
label_1b7d14:
    // 0x1b7d14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b7d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b7d18:
    // 0x1b7d18: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b7d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_1b7d1c:
    // 0x1b7d1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7d20:
    // 0x1b7d20: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7d24:
    // 0x1b7d24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1b7d28:
    // 0x1b7d28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7d28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7d2c:
    // 0x1b7d2c: 0x0  nop
    ctx->pc = 0x1b7d2cu;
    // NOP
label_1b7d30:
    // 0x1b7d30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7d34:
    // 0x1b7d34: 0x0  nop
    ctx->pc = 0x1b7d34u;
    // NOP
label_1b7d38:
    // 0x1b7d38: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b7d3c:
    if (ctx->pc == 0x1B7D3Cu) {
        ctx->pc = 0x1B7D40u;
        goto label_1b7d40;
    }
    ctx->pc = 0x1B7D38u;
    {
        const bool branch_taken_0x1b7d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7d38) {
            ctx->pc = 0x1B7DB4u;
            goto label_1b7db4;
        }
    }
    ctx->pc = 0x1B7D40u;
label_1b7d40:
    // 0x1b7d40: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1b7d44:
    // 0x1b7d44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7d44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7d48:
    // 0x1b7d48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7d4c:
    // 0x1b7d4c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b7d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b7d50:
    // 0x1b7d50: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b7d54:
    if (ctx->pc == 0x1B7D54u) {
        ctx->pc = 0x1B7D58u;
        goto label_1b7d58;
    }
    ctx->pc = 0x1B7D50u;
    {
        const bool branch_taken_0x1b7d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d50) {
            ctx->pc = 0x1B7DB4u;
            goto label_1b7db4;
        }
    }
    ctx->pc = 0x1B7D58u;
label_1b7d58:
    // 0x1b7d58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7d5c:
    // 0x1b7d5c: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1b7d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7d60:
    // 0x1b7d60: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1b7d64:
    // 0x1b7d64: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1b7d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1b7d68:
    // 0x1b7d68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7d68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7d6c:
    // 0x1b7d6c: 0x0  nop
    ctx->pc = 0x1b7d6cu;
    // NOP
label_1b7d70:
    // 0x1b7d70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b7d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b7d74:
    // 0x1b7d74: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b7d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_1b7d78:
    // 0x1b7d78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7d7c:
    // 0x1b7d7c: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1b7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7d80:
    // 0x1b7d80: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1b7d84:
    // 0x1b7d84: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b7d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1b7d88:
    // 0x1b7d88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7d8c:
    // 0x1b7d8c: 0x0  nop
    ctx->pc = 0x1b7d8cu;
    // NOP
label_1b7d90:
    // 0x1b7d90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7d94:
    // 0x1b7d94: 0x0  nop
    ctx->pc = 0x1b7d94u;
    // NOP
label_1b7d98:
    // 0x1b7d98: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b7d9c:
    if (ctx->pc == 0x1B7D9Cu) {
        ctx->pc = 0x1B7DA0u;
        goto label_1b7da0;
    }
    ctx->pc = 0x1B7D98u;
    {
        const bool branch_taken_0x1b7d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7d98) {
            ctx->pc = 0x1B7DB4u;
            goto label_1b7db4;
        }
    }
    ctx->pc = 0x1B7DA0u;
label_1b7da0:
    // 0x1b7da0: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1b7da4:
    // 0x1b7da4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b7da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1b7da8:
    // 0x1b7da8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7dac:
    // 0x1b7dac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7db0:
    // 0x1b7db0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b7db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b7db4:
    // 0x1b7db4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7db8:
    // 0x1b7db8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7dbc:
    // 0x1b7dbc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7dc0:
    // 0x1b7dc0: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x1b7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b7dc4:
    // 0x1b7dc4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b7dc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b7dc8:
    // 0x1b7dc8: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x1b7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_1b7dcc:
    // 0x1b7dcc: 0xc4cc1b50  lwc1        $f12, 0x1B50($a2)
    ctx->pc = 0x1b7dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b7dd0:
    // 0x1b7dd0: 0xc040ed8  jal         func_103B60
label_1b7dd4:
    if (ctx->pc == 0x1B7DD4u) {
        ctx->pc = 0x1B7DD8u;
        goto label_1b7dd8;
    }
    ctx->pc = 0x1B7DD0u;
    SET_GPR_U32(ctx, 31, 0x1B7DD8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B7DD8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7DD8u) { return; }
    ctx->pc = 0x1B7DD8u;
label_1b7dd8:
    // 0x1b7dd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b7dd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7ddc:
    // 0x1b7ddc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b7ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7de0:
    // 0x1b7de0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b7de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1b7de4:
    // 0x1b7de4: 0xc05cd10  jal         func_173440
label_1b7de8:
    if (ctx->pc == 0x1B7DE8u) {
        ctx->pc = 0x1B7DECu;
        goto label_1b7dec;
    }
    ctx->pc = 0x1B7DE4u;
    SET_GPR_U32(ctx, 31, 0x1B7DECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B7DE4u, 0x1B7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DECu;
label_1b7dec:
    // 0x1b7dec: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b7decu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7df0:
    // 0x1b7df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b7df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7df4:
    // 0x1b7df4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7df8:
    // 0x1b7df8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7df8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7dfc:
    // 0x1b7dfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7dfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b7e00:
    // 0x1b7e00: 0xc057480  jal         func_15D200
label_1b7e04:
    if (ctx->pc == 0x1B7E04u) {
        ctx->pc = 0x1B7E08u;
        goto label_1b7e08;
    }
    ctx->pc = 0x1B7E00u;
    SET_GPR_U32(ctx, 31, 0x1B7E08u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B7E00u, 0x1B7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E08u;
label_1b7e08:
    // 0x1b7e08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7e0c:
    // 0x1b7e0c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7e10:
    // 0x1b7e10: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1b7e14:
    // 0x1b7e14: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b7e14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b7e18:
    // 0x1b7e18: 0x24a512c0  addiu       $a1, $a1, 0x12C0
    ctx->pc = 0x1b7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
label_1b7e1c:
    // 0x1b7e1c: 0xc05cf7c  jal         func_173DF0
label_1b7e20:
    if (ctx->pc == 0x1B7E20u) {
        ctx->pc = 0x1B7E24u;
        goto label_1b7e24;
    }
    ctx->pc = 0x1B7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E24u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B7E1Cu, 0x1B7E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E24u;
label_1b7e24:
    // 0x1b7e24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b7e28:
    // 0x1b7e28: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7e2c:
    // 0x1b7e2c: 0xc4c11284  lwc1        $f1, 0x1284($a2)
    ctx->pc = 0x1b7e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7e30:
    // 0x1b7e30: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b7e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7e34:
    // 0x1b7e34: 0xc4e00124  lwc1        $f0, 0x124($a3)
    ctx->pc = 0x1b7e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7e38:
    // 0x1b7e38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b7e3c:
    // 0x1b7e3c: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x1b7e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
label_1b7e40:
    // 0x1b7e40: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b7e40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7e44:
    // 0x1b7e44: 0xc5011280  lwc1        $f1, 0x1280($t0)
    ctx->pc = 0x1b7e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7e48:
    // 0x1b7e48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7e4c:
    // 0x1b7e4c: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b7e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7e50:
    // 0x1b7e50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7e50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b7e54:
    // 0x1b7e54: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b7e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b7e58:
    // 0x1b7e58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7e5c:
    // 0x1b7e5c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7e60:
    // 0x1b7e60: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7e64:
    // 0x1b7e64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7e68:
    // 0x1b7e68: 0x0  nop
    ctx->pc = 0x1b7e68u;
    // NOP
label_1b7e6c:
    // 0x1b7e6c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b7e70:
    if (ctx->pc == 0x1B7E70u) {
        ctx->pc = 0x1B7E74u;
        goto label_1b7e74;
    }
    ctx->pc = 0x1B7E6Cu;
    {
        const bool branch_taken_0x1b7e6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7e6c) {
            ctx->pc = 0x1B7E8Cu;
            goto label_1b7e8c;
        }
    }
    ctx->pc = 0x1B7E74u;
label_1b7e74:
    // 0x1b7e74: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7e78:
    // 0x1b7e78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7e7c:
    // 0x1b7e7c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b7e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1b7e80:
    // 0x1b7e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7e84:
    // 0x1b7e84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7e88:
    // 0x1b7e88: 0xaca31b60  sw          $v1, 0x1B60($a1)
    ctx->pc = 0x1b7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 3));
label_1b7e8c:
    // 0x1b7e8c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b7e8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b7e90:
    // 0x1b7e90: 0xc097530  jal         func_25D4C0
label_1b7e94:
    if (ctx->pc == 0x1B7E94u) {
        ctx->pc = 0x1B7E98u;
        goto label_1b7e98;
    }
    ctx->pc = 0x1B7E90u;
    SET_GPR_U32(ctx, 31, 0x1B7E98u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B7E90u, 0x1B7E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E98u;
label_1b7e98:
    // 0x1b7e98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7e98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7e9c:
    // 0x1b7e9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7ea0:
    // 0x1b7ea0: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1b7ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
label_1b7ea4:
    // 0x1b7ea4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1b7ea8:
    if (ctx->pc == 0x1B7EA8u) {
        ctx->pc = 0x1B7EACu;
        goto label_1b7eac;
    }
    ctx->pc = 0x1B7EA4u;
    {
        const bool branch_taken_0x1b7ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ea4) {
            ctx->pc = 0x1B7EC4u;
            goto label_1b7ec4;
        }
    }
    ctx->pc = 0x1B7EACu;
label_1b7eac:
    // 0x1b7eac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7eb0:
    // 0x1b7eb0: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x1b7eb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1b7eb4:
    // 0x1b7eb4: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x1b7eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b7eb8:
    // 0x1b7eb8: 0xa0710003  sb          $s1, 0x3($v1)
    ctx->pc = 0x1b7eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 17));
label_1b7ebc:
    // 0x1b7ebc: 0x1000011e  b           . + 4 + (0x11E << 2)
label_1b7ec0:
    if (ctx->pc == 0x1B7EC0u) {
        ctx->pc = 0x1B7EC4u;
        goto label_1b7ec4;
    }
    ctx->pc = 0x1B7EBCu;
    {
        const bool branch_taken_0x1b7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ebc) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7EC4u;
label_1b7ec4:
    // 0x1b7ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7ec8:
    // 0x1b7ec8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b7ec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b7ecc:
    // 0x1b7ecc: 0xc0587a8  jal         func_161EA0
label_1b7ed0:
    if (ctx->pc == 0x1B7ED0u) {
        ctx->pc = 0x1B7ED4u;
        goto label_1b7ed4;
    }
    ctx->pc = 0x1B7ECCu;
    SET_GPR_U32(ctx, 31, 0x1B7ED4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B7ECCu, 0x1B7ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7ED4u;
label_1b7ed4:
    // 0x1b7ed4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b7ed4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7ed8:
    // 0x1b7ed8: 0x10a00117  beqz        $a1, . + 4 + (0x117 << 2)
label_1b7edc:
    if (ctx->pc == 0x1B7EDCu) {
        ctx->pc = 0x1B7EE0u;
        goto label_1b7ee0;
    }
    ctx->pc = 0x1B7ED8u;
    {
        const bool branch_taken_0x1b7ed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ed8) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7EE0u;
label_1b7ee0:
    // 0x1b7ee0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7ee4:
    // 0x1b7ee4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1b7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b7ee8:
    // 0x1b7ee8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1b7eec:
    // 0x1b7eec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b7eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b7ef0:
    // 0x1b7ef0: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
label_1b7ef4:
    if (ctx->pc == 0x1B7EF4u) {
        ctx->pc = 0x1B7EF8u;
        goto label_1b7ef8;
    }
    ctx->pc = 0x1B7EF0u;
    {
        const bool branch_taken_0x1b7ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ef0) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7EF8u;
label_1b7ef8:
    // 0x1b7ef8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7efc:
    // 0x1b7efc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1b7efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b7f00:
    // 0x1b7f00: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b7f04:
    // 0x1b7f04: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x1b7f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b7f08:
    // 0x1b7f08: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x1b7f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1b7f0c:
    // 0x1b7f0c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1b7f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1b7f10:
    // 0x1b7f10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7f14:
    // 0x1b7f14: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b7f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b7f18:
    // 0x1b7f18: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1b7f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b7f1c:
    // 0x1b7f1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7f20:
    // 0x1b7f20: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
label_1b7f24:
    if (ctx->pc == 0x1B7F24u) {
        ctx->pc = 0x1B7F28u;
        goto label_1b7f28;
    }
    ctx->pc = 0x1B7F20u;
    {
        const bool branch_taken_0x1b7f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b7f20) {
            ctx->pc = 0x1B7F50u;
            goto label_1b7f50;
        }
    }
    ctx->pc = 0x1B7F28u;
label_1b7f28:
    // 0x1b7f28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7f2c:
    // 0x1b7f2c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1b7f30:
    if (ctx->pc == 0x1B7F30u) {
        ctx->pc = 0x1B7F34u;
        goto label_1b7f34;
    }
    ctx->pc = 0x1B7F2Cu;
    {
        const bool branch_taken_0x1b7f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7f2c) {
            ctx->pc = 0x1B7F50u;
            goto label_1b7f50;
        }
    }
    ctx->pc = 0x1B7F34u;
label_1b7f34:
    // 0x1b7f34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b7f38:
    // 0x1b7f38: 0x10a300ff  beq         $a1, $v1, . + 4 + (0xFF << 2)
label_1b7f3c:
    if (ctx->pc == 0x1B7F3Cu) {
        ctx->pc = 0x1B7F40u;
        goto label_1b7f40;
    }
    ctx->pc = 0x1B7F38u;
    {
        const bool branch_taken_0x1b7f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7f38) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7F40u;
label_1b7f40:
    // 0x1b7f40: 0x10a000fd  beqz        $a1, . + 4 + (0xFD << 2)
label_1b7f44:
    if (ctx->pc == 0x1B7F44u) {
        ctx->pc = 0x1B7F48u;
        goto label_1b7f48;
    }
    ctx->pc = 0x1B7F40u;
    {
        const bool branch_taken_0x1b7f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f40) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7F48u;
label_1b7f48:
    // 0x1b7f48: 0x100000fb  b           . + 4 + (0xFB << 2)
label_1b7f4c:
    if (ctx->pc == 0x1B7F4Cu) {
        ctx->pc = 0x1B7F50u;
        goto label_1b7f50;
    }
    ctx->pc = 0x1B7F48u;
    {
        const bool branch_taken_0x1b7f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f48) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7F50u;
label_1b7f50:
    // 0x1b7f50: 0xc0c5238  jal         func_3148E0
label_1b7f54:
    if (ctx->pc == 0x1B7F54u) {
        ctx->pc = 0x1B7F58u;
        goto label_1b7f58;
    }
    ctx->pc = 0x1B7F50u;
    SET_GPR_U32(ctx, 31, 0x1B7F58u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B7F50u, 0x1B7F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F58u;
label_1b7f58:
    // 0x1b7f58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7f58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7f5c:
    // 0x1b7f5c: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_1b7f60:
    if (ctx->pc == 0x1B7F60u) {
        ctx->pc = 0x1B7F64u;
        goto label_1b7f64;
    }
    ctx->pc = 0x1B7F5Cu;
    {
        const bool branch_taken_0x1b7f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f5c) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B7F64u;
label_1b7f64:
    // 0x1b7f64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7f68:
    // 0x1b7f68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7f6c:
    // 0x1b7f6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7f70:
    // 0x1b7f70: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b7f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b7f74:
    // 0x1b7f74: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1b7f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1b7f78:
    // 0x1b7f78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7f7c:
    // 0x1b7f7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b7f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b7f80:
    // 0x1b7f80: 0xc0965d0  jal         func_259740
label_1b7f84:
    if (ctx->pc == 0x1B7F84u) {
        ctx->pc = 0x1B7F88u;
        goto label_1b7f88;
    }
    ctx->pc = 0x1B7F80u;
    SET_GPR_U32(ctx, 31, 0x1B7F88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B7F80u, 0x1B7F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F88u;
label_1b7f88:
    // 0x1b7f88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7f88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7f8c:
    // 0x1b7f8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7f90:
    // 0x1b7f90: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1b7f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7f94:
    // 0x1b7f94: 0x3c06c332  lui         $a2, 0xC332
    ctx->pc = 0x1b7f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49970 << 16));
label_1b7f98:
    // 0x1b7f98: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x1b7f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_1b7f9c:
    // 0x1b7f9c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b7f9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7fa0:
    // 0x1b7fa0: 0x0  nop
    ctx->pc = 0x1b7fa0u;
    // NOP
label_1b7fa4:
    // 0x1b7fa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7fa8:
    // 0x1b7fa8: 0x0  nop
    ctx->pc = 0x1b7fa8u;
    // NOP
label_1b7fac:
    // 0x1b7fac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1b7fb0:
    if (ctx->pc == 0x1B7FB0u) {
        ctx->pc = 0x1B7FB4u;
        goto label_1b7fb4;
    }
    ctx->pc = 0x1B7FACu;
    {
        const bool branch_taken_0x1b7fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7fac) {
            ctx->pc = 0x1B7FC0u;
            goto label_1b7fc0;
        }
    }
    ctx->pc = 0x1B7FB4u;
label_1b7fb4:
    // 0x1b7fb4: 0xc05772c  jal         func_15DCB0
label_1b7fb8:
    if (ctx->pc == 0x1B7FB8u) {
        ctx->pc = 0x1B7FBCu;
        goto label_1b7fbc;
    }
    ctx->pc = 0x1B7FB4u;
    SET_GPR_U32(ctx, 31, 0x1B7FBCu);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1B7FB4u, 0x1B7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FBCu;
label_1b7fbc:
    // 0x1b7fbc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b7fbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b7fc0:
    // 0x1b7fc0: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b7fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7fc4:
    // 0x1b7fc4: 0xad001b60  sw          $zero, 0x1B60($t0)
    ctx->pc = 0x1b7fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 0));
label_1b7fc8:
    // 0x1b7fc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7fcc:
    // 0x1b7fcc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b7fd0:
    // 0x1b7fd0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1b7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_1b7fd4:
    // 0x1b7fd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b7fd8:
    // 0x1b7fd8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1b7fdc:
    if (ctx->pc == 0x1B7FDCu) {
        ctx->pc = 0x1B7FE0u;
        goto label_1b7fe0;
    }
    ctx->pc = 0x1B7FD8u;
    {
        const bool branch_taken_0x1b7fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7fd8) {
            ctx->pc = 0x1B8040u;
            goto label_1b8040;
        }
    }
    ctx->pc = 0x1B7FE0u;
label_1b7fe0:
    // 0x1b7fe0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7fe4:
    // 0x1b7fe4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b7fe8:
    // 0x1b7fe8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1b7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_1b7fec:
    // 0x1b7fec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b7ff0:
    // 0x1b7ff0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b7ff4:
    // 0x1b7ff4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b7ff8:
    // 0x1b7ff8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b7ffc:
    // 0x1b7ffc: 0x904413a6  lbu         $a0, 0x13A6($v0)
    ctx->pc = 0x1b7ffcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
label_1b8000:
    // 0x1b8000: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b8000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b8004:
    // 0x1b8004: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b8004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b8008:
    // 0x1b8008: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1b800c:
    if (ctx->pc == 0x1B800Cu) {
        ctx->pc = 0x1B8010u;
        goto label_1b8010;
    }
    ctx->pc = 0x1B8008u;
    {
        const bool branch_taken_0x1b8008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8008) {
            ctx->pc = 0x1B8038u;
            goto label_1b8038;
        }
    }
    ctx->pc = 0x1B8010u;
label_1b8010:
    // 0x1b8010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8014:
    // 0x1b8014: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1b8018:
    if (ctx->pc == 0x1B8018u) {
        ctx->pc = 0x1B801Cu;
        goto label_1b801c;
    }
    ctx->pc = 0x1B8014u;
    {
        const bool branch_taken_0x1b8014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8014) {
            ctx->pc = 0x1B8038u;
            goto label_1b8038;
        }
    }
    ctx->pc = 0x1B801Cu;
label_1b801c:
    // 0x1b801c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8020:
    // 0x1b8020: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1b8024:
    if (ctx->pc == 0x1B8024u) {
        ctx->pc = 0x1B8028u;
        goto label_1b8028;
    }
    ctx->pc = 0x1B8020u;
    {
        const bool branch_taken_0x1b8020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8020) {
            ctx->pc = 0x1B8040u;
            goto label_1b8040;
        }
    }
    ctx->pc = 0x1B8028u;
label_1b8028:
    // 0x1b8028: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b802c:
    if (ctx->pc == 0x1B802Cu) {
        ctx->pc = 0x1B8030u;
        goto label_1b8030;
    }
    ctx->pc = 0x1B8028u;
    {
        const bool branch_taken_0x1b8028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8028) {
            ctx->pc = 0x1B8040u;
            goto label_1b8040;
        }
    }
    ctx->pc = 0x1B8030u;
label_1b8030:
    // 0x1b8030: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b8034:
    if (ctx->pc == 0x1B8034u) {
        ctx->pc = 0x1B8038u;
        goto label_1b8038;
    }
    ctx->pc = 0x1B8030u;
    {
        const bool branch_taken_0x1b8030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8030) {
            ctx->pc = 0x1B8040u;
            goto label_1b8040;
        }
    }
    ctx->pc = 0x1B8038u;
label_1b8038:
    // 0x1b8038: 0xc0c5238  jal         func_3148E0
label_1b803c:
    if (ctx->pc == 0x1B803Cu) {
        ctx->pc = 0x1B8040u;
        goto label_1b8040;
    }
    ctx->pc = 0x1B8038u;
    SET_GPR_U32(ctx, 31, 0x1B8040u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B8038u, 0x1B8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8040u;
label_1b8040:
    // 0x1b8040: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8044:
    // 0x1b8044: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1b8044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b8048:
    // 0x1b8048: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1b8048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b804c:
    // 0x1b804c: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1b804cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
label_1b8050:
    // 0x1b8050: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8054:
    // 0x1b8054: 0x8cc71b6c  lw          $a3, 0x1B6C($a2)
    ctx->pc = 0x1b8054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
label_1b8058:
    // 0x1b8058: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_1b805c:
    if (ctx->pc == 0x1B805Cu) {
        ctx->pc = 0x1B8060u;
        goto label_1b8060;
    }
    ctx->pc = 0x1B8058u;
    {
        const bool branch_taken_0x1b8058 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8058) {
            ctx->pc = 0x1B807Cu;
            goto label_1b807c;
        }
    }
    ctx->pc = 0x1B8060u;
label_1b8060:
    // 0x1b8060: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b8064:
    // 0x1b8064: 0x8c281a98  lw          $t0, 0x1A98($at)
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b8068:
    // 0x1b8068: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1b8068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1b806c:
    // 0x1b806c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b8070:
    // 0x1b8070: 0x1022824  and         $a1, $t0, $v0
    ctx->pc = 0x1b8070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_1b8074:
    // 0x1b8074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b8078:
    // 0x1b8078: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1b8078u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 5));
label_1b807c:
    // 0x1b807c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b807cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8080:
    // 0x1b8080: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b8080u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b8084:
    // 0x1b8084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b8088:
    // 0x1b8088: 0xc096b40  jal         func_25AD00
label_1b808c:
    if (ctx->pc == 0x1B808Cu) {
        ctx->pc = 0x1B8090u;
        goto label_1b8090;
    }
    ctx->pc = 0x1B8088u;
    SET_GPR_U32(ctx, 31, 0x1B8090u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B8088u, 0x1B8090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8090u;
label_1b8090:
    // 0x1b8090: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8094:
    // 0x1b8094: 0xc05cd10  jal         func_173440
label_1b8098:
    if (ctx->pc == 0x1B8098u) {
        ctx->pc = 0x1B809Cu;
        goto label_1b809c;
    }
    ctx->pc = 0x1B8094u;
    SET_GPR_U32(ctx, 31, 0x1B809Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B8094u, 0x1B809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B809Cu;
label_1b809c:
    // 0x1b809c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b809cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b80a0:
    // 0x1b80a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b80a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b80a4:
    // 0x1b80a4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b80a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b80a8:
    // 0x1b80a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b80a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b80ac:
    // 0x1b80ac: 0xc0573d8  jal         func_15CF60
label_1b80b0:
    if (ctx->pc == 0x1B80B0u) {
        ctx->pc = 0x1B80B4u;
        goto label_1b80b4;
    }
    ctx->pc = 0x1B80ACu;
    SET_GPR_U32(ctx, 31, 0x1B80B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1B80ACu, 0x1B80B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80B4u;
label_1b80b4:
    // 0x1b80b4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b80b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b80b8:
    // 0x1b80b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b80b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b80bc:
    // 0x1b80bc: 0xc097530  jal         func_25D4C0
label_1b80c0:
    if (ctx->pc == 0x1B80C0u) {
        ctx->pc = 0x1B80C4u;
        goto label_1b80c4;
    }
    ctx->pc = 0x1B80BCu;
    SET_GPR_U32(ctx, 31, 0x1B80C4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B80BCu, 0x1B80C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80C4u;
label_1b80c4:
    // 0x1b80c4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b80c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b80c8:
    // 0x1b80c8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b80c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b80cc:
    // 0x1b80cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b80d0:
    // 0x1b80d0: 0x25040120  addiu       $a0, $t0, 0x120
    ctx->pc = 0x1b80d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
label_1b80d4:
    // 0x1b80d4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1b80d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1b80d8:
    // 0x1b80d8: 0xc05cf7c  jal         func_173DF0
label_1b80dc:
    if (ctx->pc == 0x1B80DCu) {
        ctx->pc = 0x1B80E0u;
        goto label_1b80e0;
    }
    ctx->pc = 0x1B80D8u;
    SET_GPR_U32(ctx, 31, 0x1B80E0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B80D8u, 0x1B80E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80E0u;
label_1b80e0:
    // 0x1b80e0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b80e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b80e4:
    // 0x1b80e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b80e8:
    // 0x1b80e8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b80e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b80ec:
    // 0x1b80ec: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1b80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1b80f0:
    // 0x1b80f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b80f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b80f4:
    // 0x1b80f4: 0x0  nop
    ctx->pc = 0x1b80f4u;
    // NOP
label_1b80f8:
    // 0x1b80f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b80f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b80fc:
    // 0x1b80fc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b80fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8100:
    // 0x1b8100: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b8100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8104:
    // 0x1b8104: 0x0  nop
    ctx->pc = 0x1b8104u;
    // NOP
label_1b8108:
    // 0x1b8108: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_1b810c:
    if (ctx->pc == 0x1B810Cu) {
        ctx->pc = 0x1B8110u;
        goto label_1b8110;
    }
    ctx->pc = 0x1B8108u;
    {
        const bool branch_taken_0x1b8108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8108) {
            ctx->pc = 0x1B8188u;
            goto label_1b8188;
        }
    }
    ctx->pc = 0x1B8110u;
label_1b8110:
    // 0x1b8110: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8114:
    // 0x1b8114: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8118:
    // 0x1b8118: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b811c:
    // 0x1b811c: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1b811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
label_1b8120:
    // 0x1b8120: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1b8120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1b8124:
    // 0x1b8124: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1b8124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1b8128:
    // 0x1b8128: 0xc0675b0  jal         func_19D6C0
label_1b812c:
    if (ctx->pc == 0x1B812Cu) {
        ctx->pc = 0x1B8130u;
        goto label_1b8130;
    }
    ctx->pc = 0x1B8128u;
    SET_GPR_U32(ctx, 31, 0x1B8130u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B8128u, 0x1B8130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8130u;
label_1b8130:
    // 0x1b8130: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8134:
    // 0x1b8134: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8138:
    // 0x1b8138: 0xc48c1b40  lwc1        $f12, 0x1B40($a0)
    ctx->pc = 0x1b8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b813c:
    // 0x1b813c: 0xc44d1b48  lwc1        $f13, 0x1B48($v0)
    ctx->pc = 0x1b813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b8140:
    // 0x1b8140: 0xc0455e6  jal         func_115798
label_1b8144:
    if (ctx->pc == 0x1B8144u) {
        ctx->pc = 0x1B8148u;
        goto label_1b8148;
    }
    ctx->pc = 0x1B8140u;
    SET_GPR_U32(ctx, 31, 0x1B8148u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B8140u, 0x1B8148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8148u;
label_1b8148:
    // 0x1b8148: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b814c:
    // 0x1b814c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1b814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1b8150:
    // 0x1b8150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8154:
    // 0x1b8154: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8158:
    // 0x1b8158: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1b8158u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b815c:
    // 0x1b815c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1b815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1b8160:
    // 0x1b8160: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8164:
    // 0x1b8164: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1b8164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1b8168:
    // 0x1b8168: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b816c:
    // 0x1b816c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b816cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b8170:
    // 0x1b8170: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8174:
    // 0x1b8174: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b8174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b8178:
    // 0x1b8178: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1b8178u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b817c:
    // 0x1b817c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b817cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1b8180:
    // 0x1b8180: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1b8184:
    if (ctx->pc == 0x1B8184u) {
        ctx->pc = 0x1B8188u;
        goto label_1b8188;
    }
    ctx->pc = 0x1B8180u;
    {
        const bool branch_taken_0x1b8180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8180) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B8188u;
label_1b8188:
    // 0x1b8188: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b818c:
    // 0x1b818c: 0x246212c0  addiu       $v0, $v1, 0x12C0
    ctx->pc = 0x1b818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1b8190:
    // 0x1b8190: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b8190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8194:
    // 0x1b8194: 0xc057b54  jal         func_15ED50
label_1b8198:
    if (ctx->pc == 0x1B8198u) {
        ctx->pc = 0x1B819Cu;
        goto label_1b819c;
    }
    ctx->pc = 0x1B8194u;
    SET_GPR_U32(ctx, 31, 0x1B819Cu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1B8194u, 0x1B819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B819Cu;
label_1b819c:
    // 0x1b819c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b819cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b81a0:
    // 0x1b81a0: 0x14800065  bnez        $a0, . + 4 + (0x65 << 2)
label_1b81a4:
    if (ctx->pc == 0x1B81A4u) {
        ctx->pc = 0x1B81A8u;
        goto label_1b81a8;
    }
    ctx->pc = 0x1B81A0u;
    {
        const bool branch_taken_0x1b81a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b81a0) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B81A8u;
label_1b81a8:
    // 0x1b81a8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b81ac:
    // 0x1b81ac: 0x90a509db  lbu         $a1, 0x9DB($a1)
    ctx->pc = 0x1b81acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
label_1b81b0:
    // 0x1b81b0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b81b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b81b4:
    // 0x1b81b4: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1b81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_1b81b8:
    // 0x1b81b8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1b81bc:
    if (ctx->pc == 0x1B81BCu) {
        ctx->pc = 0x1B81C0u;
        goto label_1b81c0;
    }
    ctx->pc = 0x1B81B8u;
    {
        const bool branch_taken_0x1b81b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81b8) {
            ctx->pc = 0x1B81E4u;
            goto label_1b81e4;
        }
    }
    ctx->pc = 0x1B81C0u;
label_1b81c0:
    // 0x1b81c0: 0xc0585dc  jal         func_161770
label_1b81c4:
    if (ctx->pc == 0x1B81C4u) {
        ctx->pc = 0x1B81C8u;
        goto label_1b81c8;
    }
    ctx->pc = 0x1B81C0u;
    SET_GPR_U32(ctx, 31, 0x1B81C8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1B81C0u, 0x1B81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81C8u;
label_1b81c8:
    // 0x1b81c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b81c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b81cc:
    // 0x1b81cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b81d0:
    if (ctx->pc == 0x1B81D0u) {
        ctx->pc = 0x1B81D4u;
        goto label_1b81d4;
    }
    ctx->pc = 0x1B81CCu;
    {
        const bool branch_taken_0x1b81cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81cc) {
            ctx->pc = 0x1B81E4u;
            goto label_1b81e4;
        }
    }
    ctx->pc = 0x1B81D4u;
label_1b81d4:
    // 0x1b81d4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b81d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b81d8:
    // 0x1b81d8: 0xa0a010a8  sb          $zero, 0x10A8($a1)
    ctx->pc = 0x1b81d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1b81dc:
    // 0x1b81dc: 0x10000056  b           . + 4 + (0x56 << 2)
label_1b81e0:
    if (ctx->pc == 0x1B81E0u) {
        ctx->pc = 0x1B81E4u;
        goto label_1b81e4;
    }
    ctx->pc = 0x1B81DCu;
    {
        const bool branch_taken_0x1b81dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81dc) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B81E4u;
label_1b81e4:
    // 0x1b81e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b81e8:
    // 0x1b81e8: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1b81e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_1b81ec:
    // 0x1b81ec: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
label_1b81f0:
    if (ctx->pc == 0x1B81F0u) {
        ctx->pc = 0x1B81F4u;
        goto label_1b81f4;
    }
    ctx->pc = 0x1B81ECu;
    {
        const bool branch_taken_0x1b81ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81ec) {
            ctx->pc = 0x1B8338u;
            goto label_1b8338;
        }
    }
    ctx->pc = 0x1B81F4u;
label_1b81f4:
    // 0x1b81f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b81f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b81f8:
    // 0x1b81f8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1b81f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b81fc:
    // 0x1b81fc: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1b81fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
label_1b8200:
    // 0x1b8200: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x1b8200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_1b8204:
    // 0x1b8204: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_1b8208:
    if (ctx->pc == 0x1B8208u) {
        ctx->pc = 0x1B820Cu;
        goto label_1b820c;
    }
    ctx->pc = 0x1B8204u;
    {
        const bool branch_taken_0x1b8204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8204) {
            ctx->pc = 0x1B8298u;
            goto label_1b8298;
        }
    }
    ctx->pc = 0x1B820Cu;
label_1b820c:
    // 0x1b820c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8210:
    // 0x1b8210: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8214:
    // 0x1b8214: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b8214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1b8218:
    // 0x1b8218: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b821c:
    // 0x1b821c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b821cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8220:
    // 0x1b8220: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1b8220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_1b8224:
    // 0x1b8224: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8228:
    // 0x1b8228: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b8228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b822c:
    // 0x1b822c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8230:
    // 0x1b8230: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1b8230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b8234:
    // 0x1b8234: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8238:
    // 0x1b8238: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b8238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1b823c:
    // 0x1b823c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8240:
    // 0x1b8240: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8244:
    // 0x1b8244: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1b8244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1b8248:
    // 0x1b8248: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b824c:
    // 0x1b824c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1b824cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b8250:
    // 0x1b8250: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8254:
    // 0x1b8254: 0x9064156d  lbu         $a0, 0x156D($v1)
    ctx->pc = 0x1b8254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
label_1b8258:
    // 0x1b8258: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1b8258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b825c:
    // 0x1b825c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8260:
    // 0x1b8260: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1b8264:
    if (ctx->pc == 0x1B8264u) {
        ctx->pc = 0x1B8268u;
        goto label_1b8268;
    }
    ctx->pc = 0x1B8260u;
    {
        const bool branch_taken_0x1b8260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8260) {
            ctx->pc = 0x1B8274u;
            goto label_1b8274;
        }
    }
    ctx->pc = 0x1B8268u;
label_1b8268:
    // 0x1b8268: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b8268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b826c:
    // 0x1b826c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b826cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8270:
    // 0x1b8270: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b8270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
label_1b8274:
    // 0x1b8274: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b8274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b8278:
    // 0x1b8278: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b827c:
    // 0x1b827c: 0xa4c3127a  sh          $v1, 0x127A($a2)
    ctx->pc = 0x1b827cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1b8280:
    // 0x1b8280: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8284:
    // 0x1b8284: 0xa4a0127c  sh          $zero, 0x127C($a1)
    ctx->pc = 0x1b8284u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1b8288:
    // 0x1b8288: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b828c:
    // 0x1b828c: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1b828cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1b8290:
    // 0x1b8290: 0x1000000d  b           . + 4 + (0xD << 2)
label_1b8294:
    if (ctx->pc == 0x1B8294u) {
        ctx->pc = 0x1B8298u;
        goto label_1b8298;
    }
    ctx->pc = 0x1B8290u;
    {
        const bool branch_taken_0x1b8290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8290) {
            ctx->pc = 0x1B82C8u;
            goto label_1b82c8;
        }
    }
    ctx->pc = 0x1B8298u;
label_1b8298:
    // 0x1b8298: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b8298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b829c:
    // 0x1b829c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82a0:
    // 0x1b82a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b82a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1b82a4:
    // 0x1b82a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82a8:
    // 0x1b82a8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b82a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1b82ac:
    // 0x1b82ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b82acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82b0:
    // 0x1b82b0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1b82b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b82b4:
    // 0x1b82b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b82b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82b8:
    // 0x1b82b8: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1b82b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b82bc:
    // 0x1b82bc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b82c0:
    // 0x1b82c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b82c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82c4:
    // 0x1b82c4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1b82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1b82c8:
    // 0x1b82c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b82c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b82cc:
    // 0x1b82cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82d0:
    // 0x1b82d0: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1b82d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_1b82d4:
    // 0x1b82d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82d8:
    // 0x1b82d8: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b82d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b82dc:
    // 0x1b82dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b82dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82e0:
    // 0x1b82e0: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1b82e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
label_1b82e4:
    // 0x1b82e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82e8:
    // 0x1b82e8: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1b82e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b82ec:
    // 0x1b82ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b82ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82f0:
    // 0x1b82f0: 0xe4a01570  swc1        $f0, 0x1570($a1)
    ctx->pc = 0x1b82f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5488), bits); }
label_1b82f4:
    // 0x1b82f4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b82f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b82f8:
    // 0x1b82f8: 0x8cc71b6c  lw          $a3, 0x1B6C($a2)
    ctx->pc = 0x1b82f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
label_1b82fc:
    // 0x1b82fc: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_1b8300:
    if (ctx->pc == 0x1B8300u) {
        ctx->pc = 0x1B8304u;
        goto label_1b8304;
    }
    ctx->pc = 0x1B82FCu;
    {
        const bool branch_taken_0x1b82fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b82fc) {
            ctx->pc = 0x1B830Cu;
            goto label_1b830c;
        }
    }
    ctx->pc = 0x1B8304u;
label_1b8304:
    // 0x1b8304: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b8304u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8308:
    // 0x1b8308: 0xa5001574  sh          $zero, 0x1574($t0)
    ctx->pc = 0x1b8308u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1b830c:
    // 0x1b830c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8310:
    // 0x1b8310: 0x8c6513e8  lw          $a1, 0x13E8($v1)
    ctx->pc = 0x1b8310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1b8314:
    // 0x1b8314: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1b8318:
    if (ctx->pc == 0x1B8318u) {
        ctx->pc = 0x1B831Cu;
        goto label_1b831c;
    }
    ctx->pc = 0x1B8314u;
    {
        const bool branch_taken_0x1b8314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8314) {
            ctx->pc = 0x1B8330u;
            goto label_1b8330;
        }
    }
    ctx->pc = 0x1B831Cu;
label_1b831c:
    // 0x1b831c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b831cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8320:
    // 0x1b8320: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1b8320u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1b8324:
    // 0x1b8324: 0xc0571d0  jal         func_15C740
label_1b8328:
    if (ctx->pc == 0x1B8328u) {
        ctx->pc = 0x1B832Cu;
        goto label_1b832c;
    }
    ctx->pc = 0x1B8324u;
    SET_GPR_U32(ctx, 31, 0x1B832Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1B8324u, 0x1B832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B832Cu;
label_1b832c:
    // 0x1b832c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b832cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8330:
    // 0x1b8330: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b8330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8334:
    // 0x1b8334: 0xa10010a8  sb          $zero, 0x10A8($t0)
    ctx->pc = 0x1b8334u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1b8338:
    // 0x1b8338: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b833c:
    // 0x1b833c: 0x8c651b6c  lw          $a1, 0x1B6C($v1)
    ctx->pc = 0x1b833cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1b8340:
    // 0x1b8340: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1b8344:
    if (ctx->pc == 0x1B8344u) {
        ctx->pc = 0x1B8348u;
        goto label_1b8348;
    }
    ctx->pc = 0x1B8340u;
    {
        const bool branch_taken_0x1b8340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8340) {
            ctx->pc = 0x1B8364u;
            goto label_1b8364;
        }
    }
    ctx->pc = 0x1B8348u;
label_1b8348:
    // 0x1b8348: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b834c:
    // 0x1b834c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1b834cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b8350:
    // 0x1b8350: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1b8350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_1b8354:
    // 0x1b8354: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b8354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b8358:
    // 0x1b8358: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b8358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b835c:
    // 0x1b835c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b8360:
    // 0x1b8360: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1b8360u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_1b8364:
    // 0x1b8364: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8368:
    // 0x1b8368: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1b8368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b836c:
    // 0x1b836c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b836cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b8370:
    // 0x1b8370: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x1b8370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b8374:
    // 0x1b8374: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_1b8378:
    if (ctx->pc == 0x1B8378u) {
        ctx->pc = 0x1B837Cu;
        goto label_1b837c;
    }
    ctx->pc = 0x1B8374u;
    {
        const bool branch_taken_0x1b8374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8374) {
            ctx->pc = 0x1B83C8u;
            goto label_1b83c8;
        }
    }
    ctx->pc = 0x1B837Cu;
label_1b837c:
    // 0x1b837c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b837cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8380:
    // 0x1b8380: 0x90c513a6  lbu         $a1, 0x13A6($a2)
    ctx->pc = 0x1b8380u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5030)));
label_1b8384:
    // 0x1b8384: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1b8384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b8388:
    // 0x1b8388: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b838c:
    // 0x1b838c: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_1b8390:
    if (ctx->pc == 0x1B8390u) {
        ctx->pc = 0x1B8394u;
        goto label_1b8394;
    }
    ctx->pc = 0x1B838Cu;
    {
        const bool branch_taken_0x1b838c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b838c) {
            ctx->pc = 0x1B83BCu;
            goto label_1b83bc;
        }
    }
    ctx->pc = 0x1B8394u;
label_1b8394:
    // 0x1b8394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8398:
    // 0x1b8398: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_1b839c:
    if (ctx->pc == 0x1B839Cu) {
        ctx->pc = 0x1B83A0u;
        goto label_1b83a0;
    }
    ctx->pc = 0x1B8398u;
    {
        const bool branch_taken_0x1b8398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b8398) {
            ctx->pc = 0x1B83BCu;
            goto label_1b83bc;
        }
    }
    ctx->pc = 0x1B83A0u;
label_1b83a0:
    // 0x1b83a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b83a4:
    // 0x1b83a4: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_1b83a8:
    if (ctx->pc == 0x1B83A8u) {
        ctx->pc = 0x1B83ACu;
        goto label_1b83ac;
    }
    ctx->pc = 0x1B83A4u;
    {
        const bool branch_taken_0x1b83a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b83a4) {
            ctx->pc = 0x1B83C8u;
            goto label_1b83c8;
        }
    }
    ctx->pc = 0x1B83ACu;
label_1b83ac:
    // 0x1b83ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1b83b0:
    if (ctx->pc == 0x1B83B0u) {
        ctx->pc = 0x1B83B4u;
        goto label_1b83b4;
    }
    ctx->pc = 0x1B83ACu;
    {
        const bool branch_taken_0x1b83ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b83ac) {
            ctx->pc = 0x1B83C8u;
            goto label_1b83c8;
        }
    }
    ctx->pc = 0x1B83B4u;
label_1b83b4:
    // 0x1b83b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b83b8:
    if (ctx->pc == 0x1B83B8u) {
        ctx->pc = 0x1B83BCu;
        goto label_1b83bc;
    }
    ctx->pc = 0x1B83B4u;
    {
        const bool branch_taken_0x1b83b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b83b4) {
            ctx->pc = 0x1B83C8u;
            goto label_1b83c8;
        }
    }
    ctx->pc = 0x1B83BCu;
label_1b83bc:
    // 0x1b83bc: 0xc0c5244  jal         func_314910
label_1b83c0:
    if (ctx->pc == 0x1B83C0u) {
        ctx->pc = 0x1B83C4u;
        goto label_1b83c4;
    }
    ctx->pc = 0x1B83BCu;
    SET_GPR_U32(ctx, 31, 0x1B83C4u);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1B83BCu, 0x1B83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83C4u;
label_1b83c4:
    // 0x1b83c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b83c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b83c8:
    // 0x1b83c8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1b83c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b83cc:
    // 0x1b83cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b83ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b83d0:
    // 0x1b83d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b83d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b83d4:
    // 0x1b83d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b83d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b83d8:
    // 0x1b83d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b83d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b83dc:
    // 0x1b83dc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b83dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b83e0:
    // 0x1b83e0: 0x3e00008  jr          $ra
label_1b83e4:
    if (ctx->pc == 0x1B83E4u) {
        ctx->pc = 0x1B83E8u;
        goto label_fallthrough_0x1b83e0;
    }
    ctx->pc = 0x1B83E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B83E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b83e0:
    ctx->pc = 0x1B83E8u;
}
