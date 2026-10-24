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

// Function: Em05_R1_fly
// Address: 0x206ce0 - 0x207a20
void Em05_R1_fly_0x206ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_fly_0x206ce0");
#endif

    switch (ctx->pc) {
        case 0x206ce0u: goto label_206ce0;
        case 0x206ce4u: goto label_206ce4;
        case 0x206ce8u: goto label_206ce8;
        case 0x206cecu: goto label_206cec;
        case 0x206cf0u: goto label_206cf0;
        case 0x206cf4u: goto label_206cf4;
        case 0x206cf8u: goto label_206cf8;
        case 0x206cfcu: goto label_206cfc;
        case 0x206d00u: goto label_206d00;
        case 0x206d04u: goto label_206d04;
        case 0x206d08u: goto label_206d08;
        case 0x206d0cu: goto label_206d0c;
        case 0x206d10u: goto label_206d10;
        case 0x206d14u: goto label_206d14;
        case 0x206d18u: goto label_206d18;
        case 0x206d1cu: goto label_206d1c;
        case 0x206d20u: goto label_206d20;
        case 0x206d24u: goto label_206d24;
        case 0x206d28u: goto label_206d28;
        case 0x206d2cu: goto label_206d2c;
        case 0x206d30u: goto label_206d30;
        case 0x206d34u: goto label_206d34;
        case 0x206d38u: goto label_206d38;
        case 0x206d3cu: goto label_206d3c;
        case 0x206d40u: goto label_206d40;
        case 0x206d44u: goto label_206d44;
        case 0x206d48u: goto label_206d48;
        case 0x206d4cu: goto label_206d4c;
        case 0x206d50u: goto label_206d50;
        case 0x206d54u: goto label_206d54;
        case 0x206d58u: goto label_206d58;
        case 0x206d5cu: goto label_206d5c;
        case 0x206d60u: goto label_206d60;
        case 0x206d64u: goto label_206d64;
        case 0x206d68u: goto label_206d68;
        case 0x206d6cu: goto label_206d6c;
        case 0x206d70u: goto label_206d70;
        case 0x206d74u: goto label_206d74;
        case 0x206d78u: goto label_206d78;
        case 0x206d7cu: goto label_206d7c;
        case 0x206d80u: goto label_206d80;
        case 0x206d84u: goto label_206d84;
        case 0x206d88u: goto label_206d88;
        case 0x206d8cu: goto label_206d8c;
        case 0x206d90u: goto label_206d90;
        case 0x206d94u: goto label_206d94;
        case 0x206d98u: goto label_206d98;
        case 0x206d9cu: goto label_206d9c;
        case 0x206da0u: goto label_206da0;
        case 0x206da4u: goto label_206da4;
        case 0x206da8u: goto label_206da8;
        case 0x206dacu: goto label_206dac;
        case 0x206db0u: goto label_206db0;
        case 0x206db4u: goto label_206db4;
        case 0x206db8u: goto label_206db8;
        case 0x206dbcu: goto label_206dbc;
        case 0x206dc0u: goto label_206dc0;
        case 0x206dc4u: goto label_206dc4;
        case 0x206dc8u: goto label_206dc8;
        case 0x206dccu: goto label_206dcc;
        case 0x206dd0u: goto label_206dd0;
        case 0x206dd4u: goto label_206dd4;
        case 0x206dd8u: goto label_206dd8;
        case 0x206ddcu: goto label_206ddc;
        case 0x206de0u: goto label_206de0;
        case 0x206de4u: goto label_206de4;
        case 0x206de8u: goto label_206de8;
        case 0x206decu: goto label_206dec;
        case 0x206df0u: goto label_206df0;
        case 0x206df4u: goto label_206df4;
        case 0x206df8u: goto label_206df8;
        case 0x206dfcu: goto label_206dfc;
        case 0x206e00u: goto label_206e00;
        case 0x206e04u: goto label_206e04;
        case 0x206e08u: goto label_206e08;
        case 0x206e0cu: goto label_206e0c;
        case 0x206e10u: goto label_206e10;
        case 0x206e14u: goto label_206e14;
        case 0x206e18u: goto label_206e18;
        case 0x206e1cu: goto label_206e1c;
        case 0x206e20u: goto label_206e20;
        case 0x206e24u: goto label_206e24;
        case 0x206e28u: goto label_206e28;
        case 0x206e2cu: goto label_206e2c;
        case 0x206e30u: goto label_206e30;
        case 0x206e34u: goto label_206e34;
        case 0x206e38u: goto label_206e38;
        case 0x206e3cu: goto label_206e3c;
        case 0x206e40u: goto label_206e40;
        case 0x206e44u: goto label_206e44;
        case 0x206e48u: goto label_206e48;
        case 0x206e4cu: goto label_206e4c;
        case 0x206e50u: goto label_206e50;
        case 0x206e54u: goto label_206e54;
        case 0x206e58u: goto label_206e58;
        case 0x206e5cu: goto label_206e5c;
        case 0x206e60u: goto label_206e60;
        case 0x206e64u: goto label_206e64;
        case 0x206e68u: goto label_206e68;
        case 0x206e6cu: goto label_206e6c;
        case 0x206e70u: goto label_206e70;
        case 0x206e74u: goto label_206e74;
        case 0x206e78u: goto label_206e78;
        case 0x206e7cu: goto label_206e7c;
        case 0x206e80u: goto label_206e80;
        case 0x206e84u: goto label_206e84;
        case 0x206e88u: goto label_206e88;
        case 0x206e8cu: goto label_206e8c;
        case 0x206e90u: goto label_206e90;
        case 0x206e94u: goto label_206e94;
        case 0x206e98u: goto label_206e98;
        case 0x206e9cu: goto label_206e9c;
        case 0x206ea0u: goto label_206ea0;
        case 0x206ea4u: goto label_206ea4;
        case 0x206ea8u: goto label_206ea8;
        case 0x206eacu: goto label_206eac;
        case 0x206eb0u: goto label_206eb0;
        case 0x206eb4u: goto label_206eb4;
        case 0x206eb8u: goto label_206eb8;
        case 0x206ebcu: goto label_206ebc;
        case 0x206ec0u: goto label_206ec0;
        case 0x206ec4u: goto label_206ec4;
        case 0x206ec8u: goto label_206ec8;
        case 0x206eccu: goto label_206ecc;
        case 0x206ed0u: goto label_206ed0;
        case 0x206ed4u: goto label_206ed4;
        case 0x206ed8u: goto label_206ed8;
        case 0x206edcu: goto label_206edc;
        case 0x206ee0u: goto label_206ee0;
        case 0x206ee4u: goto label_206ee4;
        case 0x206ee8u: goto label_206ee8;
        case 0x206eecu: goto label_206eec;
        case 0x206ef0u: goto label_206ef0;
        case 0x206ef4u: goto label_206ef4;
        case 0x206ef8u: goto label_206ef8;
        case 0x206efcu: goto label_206efc;
        case 0x206f00u: goto label_206f00;
        case 0x206f04u: goto label_206f04;
        case 0x206f08u: goto label_206f08;
        case 0x206f0cu: goto label_206f0c;
        case 0x206f10u: goto label_206f10;
        case 0x206f14u: goto label_206f14;
        case 0x206f18u: goto label_206f18;
        case 0x206f1cu: goto label_206f1c;
        case 0x206f20u: goto label_206f20;
        case 0x206f24u: goto label_206f24;
        case 0x206f28u: goto label_206f28;
        case 0x206f2cu: goto label_206f2c;
        case 0x206f30u: goto label_206f30;
        case 0x206f34u: goto label_206f34;
        case 0x206f38u: goto label_206f38;
        case 0x206f3cu: goto label_206f3c;
        case 0x206f40u: goto label_206f40;
        case 0x206f44u: goto label_206f44;
        case 0x206f48u: goto label_206f48;
        case 0x206f4cu: goto label_206f4c;
        case 0x206f50u: goto label_206f50;
        case 0x206f54u: goto label_206f54;
        case 0x206f58u: goto label_206f58;
        case 0x206f5cu: goto label_206f5c;
        case 0x206f60u: goto label_206f60;
        case 0x206f64u: goto label_206f64;
        case 0x206f68u: goto label_206f68;
        case 0x206f6cu: goto label_206f6c;
        case 0x206f70u: goto label_206f70;
        case 0x206f74u: goto label_206f74;
        case 0x206f78u: goto label_206f78;
        case 0x206f7cu: goto label_206f7c;
        case 0x206f80u: goto label_206f80;
        case 0x206f84u: goto label_206f84;
        case 0x206f88u: goto label_206f88;
        case 0x206f8cu: goto label_206f8c;
        case 0x206f90u: goto label_206f90;
        case 0x206f94u: goto label_206f94;
        case 0x206f98u: goto label_206f98;
        case 0x206f9cu: goto label_206f9c;
        case 0x206fa0u: goto label_206fa0;
        case 0x206fa4u: goto label_206fa4;
        case 0x206fa8u: goto label_206fa8;
        case 0x206facu: goto label_206fac;
        case 0x206fb0u: goto label_206fb0;
        case 0x206fb4u: goto label_206fb4;
        case 0x206fb8u: goto label_206fb8;
        case 0x206fbcu: goto label_206fbc;
        case 0x206fc0u: goto label_206fc0;
        case 0x206fc4u: goto label_206fc4;
        case 0x206fc8u: goto label_206fc8;
        case 0x206fccu: goto label_206fcc;
        case 0x206fd0u: goto label_206fd0;
        case 0x206fd4u: goto label_206fd4;
        case 0x206fd8u: goto label_206fd8;
        case 0x206fdcu: goto label_206fdc;
        case 0x206fe0u: goto label_206fe0;
        case 0x206fe4u: goto label_206fe4;
        case 0x206fe8u: goto label_206fe8;
        case 0x206fecu: goto label_206fec;
        case 0x206ff0u: goto label_206ff0;
        case 0x206ff4u: goto label_206ff4;
        case 0x206ff8u: goto label_206ff8;
        case 0x206ffcu: goto label_206ffc;
        case 0x207000u: goto label_207000;
        case 0x207004u: goto label_207004;
        case 0x207008u: goto label_207008;
        case 0x20700cu: goto label_20700c;
        case 0x207010u: goto label_207010;
        case 0x207014u: goto label_207014;
        case 0x207018u: goto label_207018;
        case 0x20701cu: goto label_20701c;
        case 0x207020u: goto label_207020;
        case 0x207024u: goto label_207024;
        case 0x207028u: goto label_207028;
        case 0x20702cu: goto label_20702c;
        case 0x207030u: goto label_207030;
        case 0x207034u: goto label_207034;
        case 0x207038u: goto label_207038;
        case 0x20703cu: goto label_20703c;
        case 0x207040u: goto label_207040;
        case 0x207044u: goto label_207044;
        case 0x207048u: goto label_207048;
        case 0x20704cu: goto label_20704c;
        case 0x207050u: goto label_207050;
        case 0x207054u: goto label_207054;
        case 0x207058u: goto label_207058;
        case 0x20705cu: goto label_20705c;
        case 0x207060u: goto label_207060;
        case 0x207064u: goto label_207064;
        case 0x207068u: goto label_207068;
        case 0x20706cu: goto label_20706c;
        case 0x207070u: goto label_207070;
        case 0x207074u: goto label_207074;
        case 0x207078u: goto label_207078;
        case 0x20707cu: goto label_20707c;
        case 0x207080u: goto label_207080;
        case 0x207084u: goto label_207084;
        case 0x207088u: goto label_207088;
        case 0x20708cu: goto label_20708c;
        case 0x207090u: goto label_207090;
        case 0x207094u: goto label_207094;
        case 0x207098u: goto label_207098;
        case 0x20709cu: goto label_20709c;
        case 0x2070a0u: goto label_2070a0;
        case 0x2070a4u: goto label_2070a4;
        case 0x2070a8u: goto label_2070a8;
        case 0x2070acu: goto label_2070ac;
        case 0x2070b0u: goto label_2070b0;
        case 0x2070b4u: goto label_2070b4;
        case 0x2070b8u: goto label_2070b8;
        case 0x2070bcu: goto label_2070bc;
        case 0x2070c0u: goto label_2070c0;
        case 0x2070c4u: goto label_2070c4;
        case 0x2070c8u: goto label_2070c8;
        case 0x2070ccu: goto label_2070cc;
        case 0x2070d0u: goto label_2070d0;
        case 0x2070d4u: goto label_2070d4;
        case 0x2070d8u: goto label_2070d8;
        case 0x2070dcu: goto label_2070dc;
        case 0x2070e0u: goto label_2070e0;
        case 0x2070e4u: goto label_2070e4;
        case 0x2070e8u: goto label_2070e8;
        case 0x2070ecu: goto label_2070ec;
        case 0x2070f0u: goto label_2070f0;
        case 0x2070f4u: goto label_2070f4;
        case 0x2070f8u: goto label_2070f8;
        case 0x2070fcu: goto label_2070fc;
        case 0x207100u: goto label_207100;
        case 0x207104u: goto label_207104;
        case 0x207108u: goto label_207108;
        case 0x20710cu: goto label_20710c;
        case 0x207110u: goto label_207110;
        case 0x207114u: goto label_207114;
        case 0x207118u: goto label_207118;
        case 0x20711cu: goto label_20711c;
        case 0x207120u: goto label_207120;
        case 0x207124u: goto label_207124;
        case 0x207128u: goto label_207128;
        case 0x20712cu: goto label_20712c;
        case 0x207130u: goto label_207130;
        case 0x207134u: goto label_207134;
        case 0x207138u: goto label_207138;
        case 0x20713cu: goto label_20713c;
        case 0x207140u: goto label_207140;
        case 0x207144u: goto label_207144;
        case 0x207148u: goto label_207148;
        case 0x20714cu: goto label_20714c;
        case 0x207150u: goto label_207150;
        case 0x207154u: goto label_207154;
        case 0x207158u: goto label_207158;
        case 0x20715cu: goto label_20715c;
        case 0x207160u: goto label_207160;
        case 0x207164u: goto label_207164;
        case 0x207168u: goto label_207168;
        case 0x20716cu: goto label_20716c;
        case 0x207170u: goto label_207170;
        case 0x207174u: goto label_207174;
        case 0x207178u: goto label_207178;
        case 0x20717cu: goto label_20717c;
        case 0x207180u: goto label_207180;
        case 0x207184u: goto label_207184;
        case 0x207188u: goto label_207188;
        case 0x20718cu: goto label_20718c;
        case 0x207190u: goto label_207190;
        case 0x207194u: goto label_207194;
        case 0x207198u: goto label_207198;
        case 0x20719cu: goto label_20719c;
        case 0x2071a0u: goto label_2071a0;
        case 0x2071a4u: goto label_2071a4;
        case 0x2071a8u: goto label_2071a8;
        case 0x2071acu: goto label_2071ac;
        case 0x2071b0u: goto label_2071b0;
        case 0x2071b4u: goto label_2071b4;
        case 0x2071b8u: goto label_2071b8;
        case 0x2071bcu: goto label_2071bc;
        case 0x2071c0u: goto label_2071c0;
        case 0x2071c4u: goto label_2071c4;
        case 0x2071c8u: goto label_2071c8;
        case 0x2071ccu: goto label_2071cc;
        case 0x2071d0u: goto label_2071d0;
        case 0x2071d4u: goto label_2071d4;
        case 0x2071d8u: goto label_2071d8;
        case 0x2071dcu: goto label_2071dc;
        case 0x2071e0u: goto label_2071e0;
        case 0x2071e4u: goto label_2071e4;
        case 0x2071e8u: goto label_2071e8;
        case 0x2071ecu: goto label_2071ec;
        case 0x2071f0u: goto label_2071f0;
        case 0x2071f4u: goto label_2071f4;
        case 0x2071f8u: goto label_2071f8;
        case 0x2071fcu: goto label_2071fc;
        case 0x207200u: goto label_207200;
        case 0x207204u: goto label_207204;
        case 0x207208u: goto label_207208;
        case 0x20720cu: goto label_20720c;
        case 0x207210u: goto label_207210;
        case 0x207214u: goto label_207214;
        case 0x207218u: goto label_207218;
        case 0x20721cu: goto label_20721c;
        case 0x207220u: goto label_207220;
        case 0x207224u: goto label_207224;
        case 0x207228u: goto label_207228;
        case 0x20722cu: goto label_20722c;
        case 0x207230u: goto label_207230;
        case 0x207234u: goto label_207234;
        case 0x207238u: goto label_207238;
        case 0x20723cu: goto label_20723c;
        case 0x207240u: goto label_207240;
        case 0x207244u: goto label_207244;
        case 0x207248u: goto label_207248;
        case 0x20724cu: goto label_20724c;
        case 0x207250u: goto label_207250;
        case 0x207254u: goto label_207254;
        case 0x207258u: goto label_207258;
        case 0x20725cu: goto label_20725c;
        case 0x207260u: goto label_207260;
        case 0x207264u: goto label_207264;
        case 0x207268u: goto label_207268;
        case 0x20726cu: goto label_20726c;
        case 0x207270u: goto label_207270;
        case 0x207274u: goto label_207274;
        case 0x207278u: goto label_207278;
        case 0x20727cu: goto label_20727c;
        case 0x207280u: goto label_207280;
        case 0x207284u: goto label_207284;
        case 0x207288u: goto label_207288;
        case 0x20728cu: goto label_20728c;
        case 0x207290u: goto label_207290;
        case 0x207294u: goto label_207294;
        case 0x207298u: goto label_207298;
        case 0x20729cu: goto label_20729c;
        case 0x2072a0u: goto label_2072a0;
        case 0x2072a4u: goto label_2072a4;
        case 0x2072a8u: goto label_2072a8;
        case 0x2072acu: goto label_2072ac;
        case 0x2072b0u: goto label_2072b0;
        case 0x2072b4u: goto label_2072b4;
        case 0x2072b8u: goto label_2072b8;
        case 0x2072bcu: goto label_2072bc;
        case 0x2072c0u: goto label_2072c0;
        case 0x2072c4u: goto label_2072c4;
        case 0x2072c8u: goto label_2072c8;
        case 0x2072ccu: goto label_2072cc;
        case 0x2072d0u: goto label_2072d0;
        case 0x2072d4u: goto label_2072d4;
        case 0x2072d8u: goto label_2072d8;
        case 0x2072dcu: goto label_2072dc;
        case 0x2072e0u: goto label_2072e0;
        case 0x2072e4u: goto label_2072e4;
        case 0x2072e8u: goto label_2072e8;
        case 0x2072ecu: goto label_2072ec;
        case 0x2072f0u: goto label_2072f0;
        case 0x2072f4u: goto label_2072f4;
        case 0x2072f8u: goto label_2072f8;
        case 0x2072fcu: goto label_2072fc;
        case 0x207300u: goto label_207300;
        case 0x207304u: goto label_207304;
        case 0x207308u: goto label_207308;
        case 0x20730cu: goto label_20730c;
        case 0x207310u: goto label_207310;
        case 0x207314u: goto label_207314;
        case 0x207318u: goto label_207318;
        case 0x20731cu: goto label_20731c;
        case 0x207320u: goto label_207320;
        case 0x207324u: goto label_207324;
        case 0x207328u: goto label_207328;
        case 0x20732cu: goto label_20732c;
        case 0x207330u: goto label_207330;
        case 0x207334u: goto label_207334;
        case 0x207338u: goto label_207338;
        case 0x20733cu: goto label_20733c;
        case 0x207340u: goto label_207340;
        case 0x207344u: goto label_207344;
        case 0x207348u: goto label_207348;
        case 0x20734cu: goto label_20734c;
        case 0x207350u: goto label_207350;
        case 0x207354u: goto label_207354;
        case 0x207358u: goto label_207358;
        case 0x20735cu: goto label_20735c;
        case 0x207360u: goto label_207360;
        case 0x207364u: goto label_207364;
        case 0x207368u: goto label_207368;
        case 0x20736cu: goto label_20736c;
        case 0x207370u: goto label_207370;
        case 0x207374u: goto label_207374;
        case 0x207378u: goto label_207378;
        case 0x20737cu: goto label_20737c;
        case 0x207380u: goto label_207380;
        case 0x207384u: goto label_207384;
        case 0x207388u: goto label_207388;
        case 0x20738cu: goto label_20738c;
        case 0x207390u: goto label_207390;
        case 0x207394u: goto label_207394;
        case 0x207398u: goto label_207398;
        case 0x20739cu: goto label_20739c;
        case 0x2073a0u: goto label_2073a0;
        case 0x2073a4u: goto label_2073a4;
        case 0x2073a8u: goto label_2073a8;
        case 0x2073acu: goto label_2073ac;
        case 0x2073b0u: goto label_2073b0;
        case 0x2073b4u: goto label_2073b4;
        case 0x2073b8u: goto label_2073b8;
        case 0x2073bcu: goto label_2073bc;
        case 0x2073c0u: goto label_2073c0;
        case 0x2073c4u: goto label_2073c4;
        case 0x2073c8u: goto label_2073c8;
        case 0x2073ccu: goto label_2073cc;
        case 0x2073d0u: goto label_2073d0;
        case 0x2073d4u: goto label_2073d4;
        case 0x2073d8u: goto label_2073d8;
        case 0x2073dcu: goto label_2073dc;
        case 0x2073e0u: goto label_2073e0;
        case 0x2073e4u: goto label_2073e4;
        case 0x2073e8u: goto label_2073e8;
        case 0x2073ecu: goto label_2073ec;
        case 0x2073f0u: goto label_2073f0;
        case 0x2073f4u: goto label_2073f4;
        case 0x2073f8u: goto label_2073f8;
        case 0x2073fcu: goto label_2073fc;
        case 0x207400u: goto label_207400;
        case 0x207404u: goto label_207404;
        case 0x207408u: goto label_207408;
        case 0x20740cu: goto label_20740c;
        case 0x207410u: goto label_207410;
        case 0x207414u: goto label_207414;
        case 0x207418u: goto label_207418;
        case 0x20741cu: goto label_20741c;
        case 0x207420u: goto label_207420;
        case 0x207424u: goto label_207424;
        case 0x207428u: goto label_207428;
        case 0x20742cu: goto label_20742c;
        case 0x207430u: goto label_207430;
        case 0x207434u: goto label_207434;
        case 0x207438u: goto label_207438;
        case 0x20743cu: goto label_20743c;
        case 0x207440u: goto label_207440;
        case 0x207444u: goto label_207444;
        case 0x207448u: goto label_207448;
        case 0x20744cu: goto label_20744c;
        case 0x207450u: goto label_207450;
        case 0x207454u: goto label_207454;
        case 0x207458u: goto label_207458;
        case 0x20745cu: goto label_20745c;
        case 0x207460u: goto label_207460;
        case 0x207464u: goto label_207464;
        case 0x207468u: goto label_207468;
        case 0x20746cu: goto label_20746c;
        case 0x207470u: goto label_207470;
        case 0x207474u: goto label_207474;
        case 0x207478u: goto label_207478;
        case 0x20747cu: goto label_20747c;
        case 0x207480u: goto label_207480;
        case 0x207484u: goto label_207484;
        case 0x207488u: goto label_207488;
        case 0x20748cu: goto label_20748c;
        case 0x207490u: goto label_207490;
        case 0x207494u: goto label_207494;
        case 0x207498u: goto label_207498;
        case 0x20749cu: goto label_20749c;
        case 0x2074a0u: goto label_2074a0;
        case 0x2074a4u: goto label_2074a4;
        case 0x2074a8u: goto label_2074a8;
        case 0x2074acu: goto label_2074ac;
        case 0x2074b0u: goto label_2074b0;
        case 0x2074b4u: goto label_2074b4;
        case 0x2074b8u: goto label_2074b8;
        case 0x2074bcu: goto label_2074bc;
        case 0x2074c0u: goto label_2074c0;
        case 0x2074c4u: goto label_2074c4;
        case 0x2074c8u: goto label_2074c8;
        case 0x2074ccu: goto label_2074cc;
        case 0x2074d0u: goto label_2074d0;
        case 0x2074d4u: goto label_2074d4;
        case 0x2074d8u: goto label_2074d8;
        case 0x2074dcu: goto label_2074dc;
        case 0x2074e0u: goto label_2074e0;
        case 0x2074e4u: goto label_2074e4;
        case 0x2074e8u: goto label_2074e8;
        case 0x2074ecu: goto label_2074ec;
        case 0x2074f0u: goto label_2074f0;
        case 0x2074f4u: goto label_2074f4;
        case 0x2074f8u: goto label_2074f8;
        case 0x2074fcu: goto label_2074fc;
        case 0x207500u: goto label_207500;
        case 0x207504u: goto label_207504;
        case 0x207508u: goto label_207508;
        case 0x20750cu: goto label_20750c;
        case 0x207510u: goto label_207510;
        case 0x207514u: goto label_207514;
        case 0x207518u: goto label_207518;
        case 0x20751cu: goto label_20751c;
        case 0x207520u: goto label_207520;
        case 0x207524u: goto label_207524;
        case 0x207528u: goto label_207528;
        case 0x20752cu: goto label_20752c;
        case 0x207530u: goto label_207530;
        case 0x207534u: goto label_207534;
        case 0x207538u: goto label_207538;
        case 0x20753cu: goto label_20753c;
        case 0x207540u: goto label_207540;
        case 0x207544u: goto label_207544;
        case 0x207548u: goto label_207548;
        case 0x20754cu: goto label_20754c;
        case 0x207550u: goto label_207550;
        case 0x207554u: goto label_207554;
        case 0x207558u: goto label_207558;
        case 0x20755cu: goto label_20755c;
        case 0x207560u: goto label_207560;
        case 0x207564u: goto label_207564;
        case 0x207568u: goto label_207568;
        case 0x20756cu: goto label_20756c;
        case 0x207570u: goto label_207570;
        case 0x207574u: goto label_207574;
        case 0x207578u: goto label_207578;
        case 0x20757cu: goto label_20757c;
        case 0x207580u: goto label_207580;
        case 0x207584u: goto label_207584;
        case 0x207588u: goto label_207588;
        case 0x20758cu: goto label_20758c;
        case 0x207590u: goto label_207590;
        case 0x207594u: goto label_207594;
        case 0x207598u: goto label_207598;
        case 0x20759cu: goto label_20759c;
        case 0x2075a0u: goto label_2075a0;
        case 0x2075a4u: goto label_2075a4;
        case 0x2075a8u: goto label_2075a8;
        case 0x2075acu: goto label_2075ac;
        case 0x2075b0u: goto label_2075b0;
        case 0x2075b4u: goto label_2075b4;
        case 0x2075b8u: goto label_2075b8;
        case 0x2075bcu: goto label_2075bc;
        case 0x2075c0u: goto label_2075c0;
        case 0x2075c4u: goto label_2075c4;
        case 0x2075c8u: goto label_2075c8;
        case 0x2075ccu: goto label_2075cc;
        case 0x2075d0u: goto label_2075d0;
        case 0x2075d4u: goto label_2075d4;
        case 0x2075d8u: goto label_2075d8;
        case 0x2075dcu: goto label_2075dc;
        case 0x2075e0u: goto label_2075e0;
        case 0x2075e4u: goto label_2075e4;
        case 0x2075e8u: goto label_2075e8;
        case 0x2075ecu: goto label_2075ec;
        case 0x2075f0u: goto label_2075f0;
        case 0x2075f4u: goto label_2075f4;
        case 0x2075f8u: goto label_2075f8;
        case 0x2075fcu: goto label_2075fc;
        case 0x207600u: goto label_207600;
        case 0x207604u: goto label_207604;
        case 0x207608u: goto label_207608;
        case 0x20760cu: goto label_20760c;
        case 0x207610u: goto label_207610;
        case 0x207614u: goto label_207614;
        case 0x207618u: goto label_207618;
        case 0x20761cu: goto label_20761c;
        case 0x207620u: goto label_207620;
        case 0x207624u: goto label_207624;
        case 0x207628u: goto label_207628;
        case 0x20762cu: goto label_20762c;
        case 0x207630u: goto label_207630;
        case 0x207634u: goto label_207634;
        case 0x207638u: goto label_207638;
        case 0x20763cu: goto label_20763c;
        case 0x207640u: goto label_207640;
        case 0x207644u: goto label_207644;
        case 0x207648u: goto label_207648;
        case 0x20764cu: goto label_20764c;
        case 0x207650u: goto label_207650;
        case 0x207654u: goto label_207654;
        case 0x207658u: goto label_207658;
        case 0x20765cu: goto label_20765c;
        case 0x207660u: goto label_207660;
        case 0x207664u: goto label_207664;
        case 0x207668u: goto label_207668;
        case 0x20766cu: goto label_20766c;
        case 0x207670u: goto label_207670;
        case 0x207674u: goto label_207674;
        case 0x207678u: goto label_207678;
        case 0x20767cu: goto label_20767c;
        case 0x207680u: goto label_207680;
        case 0x207684u: goto label_207684;
        case 0x207688u: goto label_207688;
        case 0x20768cu: goto label_20768c;
        case 0x207690u: goto label_207690;
        case 0x207694u: goto label_207694;
        case 0x207698u: goto label_207698;
        case 0x20769cu: goto label_20769c;
        case 0x2076a0u: goto label_2076a0;
        case 0x2076a4u: goto label_2076a4;
        case 0x2076a8u: goto label_2076a8;
        case 0x2076acu: goto label_2076ac;
        case 0x2076b0u: goto label_2076b0;
        case 0x2076b4u: goto label_2076b4;
        case 0x2076b8u: goto label_2076b8;
        case 0x2076bcu: goto label_2076bc;
        case 0x2076c0u: goto label_2076c0;
        case 0x2076c4u: goto label_2076c4;
        case 0x2076c8u: goto label_2076c8;
        case 0x2076ccu: goto label_2076cc;
        case 0x2076d0u: goto label_2076d0;
        case 0x2076d4u: goto label_2076d4;
        case 0x2076d8u: goto label_2076d8;
        case 0x2076dcu: goto label_2076dc;
        case 0x2076e0u: goto label_2076e0;
        case 0x2076e4u: goto label_2076e4;
        case 0x2076e8u: goto label_2076e8;
        case 0x2076ecu: goto label_2076ec;
        case 0x2076f0u: goto label_2076f0;
        case 0x2076f4u: goto label_2076f4;
        case 0x2076f8u: goto label_2076f8;
        case 0x2076fcu: goto label_2076fc;
        case 0x207700u: goto label_207700;
        case 0x207704u: goto label_207704;
        case 0x207708u: goto label_207708;
        case 0x20770cu: goto label_20770c;
        case 0x207710u: goto label_207710;
        case 0x207714u: goto label_207714;
        case 0x207718u: goto label_207718;
        case 0x20771cu: goto label_20771c;
        case 0x207720u: goto label_207720;
        case 0x207724u: goto label_207724;
        case 0x207728u: goto label_207728;
        case 0x20772cu: goto label_20772c;
        case 0x207730u: goto label_207730;
        case 0x207734u: goto label_207734;
        case 0x207738u: goto label_207738;
        case 0x20773cu: goto label_20773c;
        case 0x207740u: goto label_207740;
        case 0x207744u: goto label_207744;
        case 0x207748u: goto label_207748;
        case 0x20774cu: goto label_20774c;
        case 0x207750u: goto label_207750;
        case 0x207754u: goto label_207754;
        case 0x207758u: goto label_207758;
        case 0x20775cu: goto label_20775c;
        case 0x207760u: goto label_207760;
        case 0x207764u: goto label_207764;
        case 0x207768u: goto label_207768;
        case 0x20776cu: goto label_20776c;
        case 0x207770u: goto label_207770;
        case 0x207774u: goto label_207774;
        case 0x207778u: goto label_207778;
        case 0x20777cu: goto label_20777c;
        case 0x207780u: goto label_207780;
        case 0x207784u: goto label_207784;
        case 0x207788u: goto label_207788;
        case 0x20778cu: goto label_20778c;
        case 0x207790u: goto label_207790;
        case 0x207794u: goto label_207794;
        case 0x207798u: goto label_207798;
        case 0x20779cu: goto label_20779c;
        case 0x2077a0u: goto label_2077a0;
        case 0x2077a4u: goto label_2077a4;
        case 0x2077a8u: goto label_2077a8;
        case 0x2077acu: goto label_2077ac;
        case 0x2077b0u: goto label_2077b0;
        case 0x2077b4u: goto label_2077b4;
        case 0x2077b8u: goto label_2077b8;
        case 0x2077bcu: goto label_2077bc;
        case 0x2077c0u: goto label_2077c0;
        case 0x2077c4u: goto label_2077c4;
        case 0x2077c8u: goto label_2077c8;
        case 0x2077ccu: goto label_2077cc;
        case 0x2077d0u: goto label_2077d0;
        case 0x2077d4u: goto label_2077d4;
        case 0x2077d8u: goto label_2077d8;
        case 0x2077dcu: goto label_2077dc;
        case 0x2077e0u: goto label_2077e0;
        case 0x2077e4u: goto label_2077e4;
        case 0x2077e8u: goto label_2077e8;
        case 0x2077ecu: goto label_2077ec;
        case 0x2077f0u: goto label_2077f0;
        case 0x2077f4u: goto label_2077f4;
        case 0x2077f8u: goto label_2077f8;
        case 0x2077fcu: goto label_2077fc;
        case 0x207800u: goto label_207800;
        case 0x207804u: goto label_207804;
        case 0x207808u: goto label_207808;
        case 0x20780cu: goto label_20780c;
        case 0x207810u: goto label_207810;
        case 0x207814u: goto label_207814;
        case 0x207818u: goto label_207818;
        case 0x20781cu: goto label_20781c;
        case 0x207820u: goto label_207820;
        case 0x207824u: goto label_207824;
        case 0x207828u: goto label_207828;
        case 0x20782cu: goto label_20782c;
        case 0x207830u: goto label_207830;
        case 0x207834u: goto label_207834;
        case 0x207838u: goto label_207838;
        case 0x20783cu: goto label_20783c;
        case 0x207840u: goto label_207840;
        case 0x207844u: goto label_207844;
        case 0x207848u: goto label_207848;
        case 0x20784cu: goto label_20784c;
        case 0x207850u: goto label_207850;
        case 0x207854u: goto label_207854;
        case 0x207858u: goto label_207858;
        case 0x20785cu: goto label_20785c;
        case 0x207860u: goto label_207860;
        case 0x207864u: goto label_207864;
        case 0x207868u: goto label_207868;
        case 0x20786cu: goto label_20786c;
        case 0x207870u: goto label_207870;
        case 0x207874u: goto label_207874;
        case 0x207878u: goto label_207878;
        case 0x20787cu: goto label_20787c;
        case 0x207880u: goto label_207880;
        case 0x207884u: goto label_207884;
        case 0x207888u: goto label_207888;
        case 0x20788cu: goto label_20788c;
        case 0x207890u: goto label_207890;
        case 0x207894u: goto label_207894;
        case 0x207898u: goto label_207898;
        case 0x20789cu: goto label_20789c;
        case 0x2078a0u: goto label_2078a0;
        case 0x2078a4u: goto label_2078a4;
        case 0x2078a8u: goto label_2078a8;
        case 0x2078acu: goto label_2078ac;
        case 0x2078b0u: goto label_2078b0;
        case 0x2078b4u: goto label_2078b4;
        case 0x2078b8u: goto label_2078b8;
        case 0x2078bcu: goto label_2078bc;
        case 0x2078c0u: goto label_2078c0;
        case 0x2078c4u: goto label_2078c4;
        case 0x2078c8u: goto label_2078c8;
        case 0x2078ccu: goto label_2078cc;
        case 0x2078d0u: goto label_2078d0;
        case 0x2078d4u: goto label_2078d4;
        case 0x2078d8u: goto label_2078d8;
        case 0x2078dcu: goto label_2078dc;
        case 0x2078e0u: goto label_2078e0;
        case 0x2078e4u: goto label_2078e4;
        case 0x2078e8u: goto label_2078e8;
        case 0x2078ecu: goto label_2078ec;
        case 0x2078f0u: goto label_2078f0;
        case 0x2078f4u: goto label_2078f4;
        case 0x2078f8u: goto label_2078f8;
        case 0x2078fcu: goto label_2078fc;
        case 0x207900u: goto label_207900;
        case 0x207904u: goto label_207904;
        case 0x207908u: goto label_207908;
        case 0x20790cu: goto label_20790c;
        case 0x207910u: goto label_207910;
        case 0x207914u: goto label_207914;
        case 0x207918u: goto label_207918;
        case 0x20791cu: goto label_20791c;
        case 0x207920u: goto label_207920;
        case 0x207924u: goto label_207924;
        case 0x207928u: goto label_207928;
        case 0x20792cu: goto label_20792c;
        case 0x207930u: goto label_207930;
        case 0x207934u: goto label_207934;
        case 0x207938u: goto label_207938;
        case 0x20793cu: goto label_20793c;
        case 0x207940u: goto label_207940;
        case 0x207944u: goto label_207944;
        case 0x207948u: goto label_207948;
        case 0x20794cu: goto label_20794c;
        case 0x207950u: goto label_207950;
        case 0x207954u: goto label_207954;
        case 0x207958u: goto label_207958;
        case 0x20795cu: goto label_20795c;
        case 0x207960u: goto label_207960;
        case 0x207964u: goto label_207964;
        case 0x207968u: goto label_207968;
        case 0x20796cu: goto label_20796c;
        case 0x207970u: goto label_207970;
        case 0x207974u: goto label_207974;
        case 0x207978u: goto label_207978;
        case 0x20797cu: goto label_20797c;
        case 0x207980u: goto label_207980;
        case 0x207984u: goto label_207984;
        case 0x207988u: goto label_207988;
        case 0x20798cu: goto label_20798c;
        case 0x207990u: goto label_207990;
        case 0x207994u: goto label_207994;
        case 0x207998u: goto label_207998;
        case 0x20799cu: goto label_20799c;
        case 0x2079a0u: goto label_2079a0;
        case 0x2079a4u: goto label_2079a4;
        case 0x2079a8u: goto label_2079a8;
        case 0x2079acu: goto label_2079ac;
        case 0x2079b0u: goto label_2079b0;
        case 0x2079b4u: goto label_2079b4;
        case 0x2079b8u: goto label_2079b8;
        case 0x2079bcu: goto label_2079bc;
        case 0x2079c0u: goto label_2079c0;
        case 0x2079c4u: goto label_2079c4;
        case 0x2079c8u: goto label_2079c8;
        case 0x2079ccu: goto label_2079cc;
        case 0x2079d0u: goto label_2079d0;
        case 0x2079d4u: goto label_2079d4;
        case 0x2079d8u: goto label_2079d8;
        case 0x2079dcu: goto label_2079dc;
        case 0x2079e0u: goto label_2079e0;
        case 0x2079e4u: goto label_2079e4;
        case 0x2079e8u: goto label_2079e8;
        case 0x2079ecu: goto label_2079ec;
        case 0x2079f0u: goto label_2079f0;
        case 0x2079f4u: goto label_2079f4;
        case 0x2079f8u: goto label_2079f8;
        case 0x2079fcu: goto label_2079fc;
        case 0x207a00u: goto label_207a00;
        case 0x207a04u: goto label_207a04;
        case 0x207a08u: goto label_207a08;
        case 0x207a0cu: goto label_207a0c;
        case 0x207a10u: goto label_207a10;
        case 0x207a14u: goto label_207a14;
        case 0x207a18u: goto label_207a18;
        case 0x207a1cu: goto label_207a1c;
        default: break;
    }

    ctx->pc = 0x206ce0u;

label_206ce0:
    // 0x206ce0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x206ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_206ce4:
    // 0x206ce4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x206ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_206ce8:
    // 0x206ce8: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x206ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_206cec:
    // 0x206cec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206cf0:
    // 0x206cf0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x206cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_206cf4:
    // 0x206cf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x206cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_206cf8:
    // 0x206cf8: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x206cf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_206cfc:
    // 0x206cfc: 0x10200344  beqz        $at, . + 4 + (0x344 << 2)
label_206d00:
    if (ctx->pc == 0x206D00u) {
        ctx->pc = 0x206D04u;
        goto label_206d04;
    }
    ctx->pc = 0x206CFCu;
    {
        const bool branch_taken_0x206cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206cfc) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x206D04u;
label_206d04:
    // 0x206d04: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x206d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_206d08:
    // 0x206d08: 0x24a40de0  addiu       $a0, $a1, 0xDE0
    ctx->pc = 0x206d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3552));
label_206d0c:
    // 0x206d0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x206d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_206d10:
    // 0x206d10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_206d14:
    // 0x206d14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x206d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_206d18:
    // 0x206d18: 0x800008  jr          $a0
label_206d1c:
    if (ctx->pc == 0x206D1Cu) {
        ctx->pc = 0x206D20u;
        goto label_206d20;
    }
    ctx->pc = 0x206D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x206D20u;
label_206d20:
    // 0x206d20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x206d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206d24:
    // 0x206d24: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206d28:
    // 0x206d28: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x206d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_206d2c:
    // 0x206d2c: 0x3406c808  ori         $a2, $zero, 0xC808
    ctx->pc = 0x206d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51208);
label_206d30:
    // 0x206d30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x206d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206d34:
    // 0x206d34: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x206d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_206d38:
    // 0x206d38: 0xc0965d0  jal         func_259740
label_206d3c:
    if (ctx->pc == 0x206D3Cu) {
        ctx->pc = 0x206D40u;
        goto label_206d40;
    }
    ctx->pc = 0x206D38u;
    SET_GPR_U32(ctx, 31, 0x206D40u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x206D38u, 0x206D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D40u;
label_206d40:
    // 0x206d40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206d40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_206d44:
    // 0x206d44: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206d48:
    // 0x206d48: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x206d48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_206d4c:
    // 0x206d4c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206d50:
    // 0x206d50: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x206d50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
label_206d54:
    // 0x206d54: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206d58:
    // 0x206d58: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x206d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_206d5c:
    // 0x206d5c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x206d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_206d60:
    // 0x206d60: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x206d60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_206d64:
    // 0x206d64: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206d68:
    // 0x206d68: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x206d68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_206d6c:
    // 0x206d6c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x206d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_206d70:
    // 0x206d70: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x206d70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_206d74:
    // 0x206d74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206d78:
    // 0x206d78: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x206d78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_206d7c:
    // 0x206d7c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x206d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_206d80:
    // 0x206d80: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x206d80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_206d84:
    // 0x206d84: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x206d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206d88:
    // 0x206d88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x206d88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_206d8c:
    // 0x206d8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x206d8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206d90:
    // 0x206d90: 0xc096b40  jal         func_25AD00
label_206d94:
    if (ctx->pc == 0x206D94u) {
        ctx->pc = 0x206D98u;
        goto label_206d98;
    }
    ctx->pc = 0x206D90u;
    SET_GPR_U32(ctx, 31, 0x206D98u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x206D90u, 0x206D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D98u;
label_206d98:
    // 0x206d98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206d98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_206d9c:
    // 0x206d9c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x206d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_206da0:
    // 0x206da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206da4:
    // 0x206da4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206da8:
    // 0x206da8: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x206da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_206dac:
    // 0x206dac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206db0:
    // 0x206db0: 0xc05cd34  jal         func_1734D0
label_206db4:
    if (ctx->pc == 0x206DB4u) {
        ctx->pc = 0x206DB8u;
        goto label_206db8;
    }
    ctx->pc = 0x206DB0u;
    SET_GPR_U32(ctx, 31, 0x206DB8u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x206DB0u, 0x206DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DB8u;
label_206db8:
    // 0x206db8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206db8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_206dbc:
    // 0x206dbc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206dc0:
    // 0x206dc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x206dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_206dc4:
    // 0x206dc4: 0xc080f60  jal         func_203D80
label_206dc8:
    if (ctx->pc == 0x206DC8u) {
        ctx->pc = 0x206DCCu;
        goto label_206dcc;
    }
    ctx->pc = 0x206DC4u;
    SET_GPR_U32(ctx, 31, 0x206DCCu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x206DC4u, 0x206DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DCCu;
label_206dcc:
    // 0x206dcc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206dccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_206dd0:
    // 0x206dd0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206dd4:
    // 0x206dd4: 0xc0974c8  jal         func_25D320
label_206dd8:
    if (ctx->pc == 0x206DD8u) {
        ctx->pc = 0x206DDCu;
        goto label_206ddc;
    }
    ctx->pc = 0x206DD4u;
    SET_GPR_U32(ctx, 31, 0x206DDCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x206DD4u, 0x206DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DDCu;
label_206ddc:
    // 0x206ddc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206ddcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_206de0:
    // 0x206de0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206de4:
    // 0x206de4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x206de4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_206de8:
    // 0x206de8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x206de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_206dec:
    // 0x206dec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x206decu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_206df0:
    // 0x206df0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x206df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_206df4:
    // 0x206df4: 0x1483006d  bne         $a0, $v1, . + 4 + (0x6D << 2)
label_206df8:
    if (ctx->pc == 0x206DF8u) {
        ctx->pc = 0x206DFCu;
        goto label_206dfc;
    }
    ctx->pc = 0x206DF4u;
    {
        const bool branch_taken_0x206df4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x206df4) {
            ctx->pc = 0x206FACu;
            goto label_206fac;
        }
    }
    ctx->pc = 0x206DFCu;
label_206dfc:
    // 0x206dfc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206e00:
    // 0x206e00: 0xa4801278  sh          $zero, 0x1278($a0)
    ctx->pc = 0x206e00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 0));
label_206e04:
    // 0x206e04: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206e08:
    // 0x206e08: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x206e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_206e0c:
    // 0x206e0c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x206e0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_206e10:
    // 0x206e10: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x206e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_206e14:
    // 0x206e14: 0x246292c0  addiu       $v0, $v1, -0x6D40
    ctx->pc = 0x206e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
label_206e18:
    // 0x206e18: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x206e18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_206e1c:
    // 0x206e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206e20:
    // 0x206e20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_206e24:
    // 0x206e24: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x206e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939332), bits); }
label_206e28:
    // 0x206e28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206e2c:
    // 0x206e2c: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x206e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206e30:
    // 0x206e30: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x206e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_206e34:
    // 0x206e34: 0xc06765c  jal         func_19D970
label_206e38:
    if (ctx->pc == 0x206E38u) {
        ctx->pc = 0x206E3Cu;
        goto label_206e3c;
    }
    ctx->pc = 0x206E34u;
    SET_GPR_U32(ctx, 31, 0x206E3Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x206E34u, 0x206E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E3Cu;
label_206e3c:
    // 0x206e3c: 0x3c063e86  lui         $a2, 0x3E86
    ctx->pc = 0x206e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16006 << 16));
label_206e40:
    // 0x206e40: 0x34c50a92  ori         $a1, $a2, 0xA92
    ctx->pc = 0x206e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2706);
label_206e44:
    // 0x206e44: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x206e44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_206e48:
    // 0x206e48: 0x0  nop
    ctx->pc = 0x206e48u;
    // NOP
label_206e4c:
    // 0x206e4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x206e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_206e50:
    // 0x206e50: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x206e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206e54:
    // 0x206e54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_206e58:
    // 0x206e58: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x206e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_206e5c:
    // 0x206e5c: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x206e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_206e60:
    // 0x206e60: 0x24e89280  addiu       $t0, $a3, -0x6D80
    ctx->pc = 0x206e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939264));
label_206e64:
    // 0x206e64: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x206e64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_206e68:
    // 0x206e68: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x206e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_206e6c:
    // 0x206e6c: 0xc067844  jal         func_19E110
label_206e70:
    if (ctx->pc == 0x206E70u) {
        ctx->pc = 0x206E74u;
        goto label_206e74;
    }
    ctx->pc = 0x206E6Cu;
    SET_GPR_U32(ctx, 31, 0x206E74u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x206E6Cu, 0x206E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E74u;
label_206e74:
    // 0x206e74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206e78:
    // 0x206e78: 0x0  nop
    ctx->pc = 0x206e78u;
    // NOP
label_206e7c:
    // 0x206e7c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x206e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_206e80:
    // 0x206e80: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x206e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_206e84:
    // 0x206e84: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x206e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_206e88:
    // 0x206e88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x206e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206e8c:
    // 0x206e8c: 0x8443127a  lh          $v1, 0x127A($v0)
    ctx->pc = 0x206e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
label_206e90:
    // 0x206e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x206e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206e94:
    // 0x206e94: 0x0  nop
    ctx->pc = 0x206e94u;
    // NOP
label_206e98:
    // 0x206e98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_206e9c:
    // 0x206e9c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x206e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_206ea0:
    // 0x206ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206ea4:
    // 0x206ea4: 0x0  nop
    ctx->pc = 0x206ea4u;
    // NOP
label_206ea8:
    // 0x206ea8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x206ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_206eac:
    // 0x206eac: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x206eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_206eb0:
    // 0x206eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206eb4:
    // 0x206eb4: 0x0  nop
    ctx->pc = 0x206eb4u;
    // NOP
label_206eb8:
    // 0x206eb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_206ebc:
    // 0x206ebc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x206ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_206ec0:
    // 0x206ec0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x206ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_206ec4:
    // 0x206ec4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_206ec8:
    // 0x206ec8: 0x24459280  addiu       $a1, $v0, -0x6D80
    ctx->pc = 0x206ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
label_206ecc:
    // 0x206ecc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x206eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_206ed0:
    // 0x206ed0: 0xc040bf4  jal         func_102FD0
label_206ed4:
    if (ctx->pc == 0x206ED4u) {
        ctx->pc = 0x206ED8u;
        goto label_206ed8;
    }
    ctx->pc = 0x206ED0u;
    SET_GPR_U32(ctx, 31, 0x206ED8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x206ED8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x206ED8u) { return; }
    ctx->pc = 0x206ED8u;
label_206ed8:
    // 0x206ed8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x206ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_206edc:
    // 0x206edc: 0x246492c0  addiu       $a0, $v1, -0x6D40
    ctx->pc = 0x206edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
label_206ee0:
    // 0x206ee0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_206ee4:
    // 0x206ee4: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x206ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
label_206ee8:
    // 0x206ee8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x206ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_206eec:
    // 0x206eec: 0xc040c7a  jal         func_1031E8
label_206ef0:
    if (ctx->pc == 0x206EF0u) {
        ctx->pc = 0x206EF4u;
        goto label_206ef4;
    }
    ctx->pc = 0x206EECu;
    SET_GPR_U32(ctx, 31, 0x206EF4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x206EF4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x206EF4u) { return; }
    ctx->pc = 0x206EF4u;
label_206ef4:
    // 0x206ef4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206ef8:
    // 0x206ef8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_206efc:
    // 0x206efc: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x206efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939332), bits); }
label_206f00:
    // 0x206f00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206f04:
    // 0x206f04: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x206f04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206f08:
    // 0x206f08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x206f08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_206f0c:
    // 0x206f0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_206f10:
    // 0x206f10: 0x244692c0  addiu       $a2, $v0, -0x6D40
    ctx->pc = 0x206f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
label_206f14:
    // 0x206f14: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x206f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_206f18:
    // 0x206f18: 0xc0bb3e8  jal         func_2ECFA0
label_206f1c:
    if (ctx->pc == 0x206F1Cu) {
        ctx->pc = 0x206F20u;
        goto label_206f20;
    }
    ctx->pc = 0x206F18u;
    SET_GPR_U32(ctx, 31, 0x206F20u);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x206F18u, 0x206F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F20u;
label_206f20:
    // 0x206f20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x206f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_206f24:
    // 0x206f24: 0xc040cbc  jal         func_1032F0
label_206f28:
    if (ctx->pc == 0x206F28u) {
        ctx->pc = 0x206F2Cu;
        goto label_206f2c;
    }
    ctx->pc = 0x206F24u;
    SET_GPR_U32(ctx, 31, 0x206F2Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x206F2Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x206F2Cu) { return; }
    ctx->pc = 0x206F2Cu;
label_206f2c:
    // 0x206f2c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x206f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_206f30:
    // 0x206f30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_206f34:
    // 0x206f34: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x206f34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939360), GPR_U32(ctx, 2));
label_206f38:
    // 0x206f38: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x206f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_206f3c:
    // 0x206f3c: 0x248392c0  addiu       $v1, $a0, -0x6D40
    ctx->pc = 0x206f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939328));
label_206f40:
    // 0x206f40: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x206f40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_206f44:
    // 0x206f44: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x206f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_206f48:
    // 0x206f48: 0x248592f0  addiu       $a1, $a0, -0x6D10
    ctx->pc = 0x206f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939376));
label_206f4c:
    // 0x206f4c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x206f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_206f50:
    // 0x206f50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_206f54:
    // 0x206f54: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x206f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_206f58:
    // 0x206f58: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x206f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_206f5c:
    // 0x206f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206f60:
    // 0x206f60: 0x0  nop
    ctx->pc = 0x206f60u;
    // NOP
label_206f64:
    // 0x206f64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x206f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_206f68:
    // 0x206f68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_206f6c:
    // 0x206f6c: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x206f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939380), bits); }
label_206f70:
    // 0x206f70: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x206f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_206f74:
    // 0x206f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206f78:
    // 0x206f78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_206f7c:
    // 0x206f7c: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x206f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939392), bits); }
label_206f80:
    // 0x206f80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_206f84:
    // 0x206f84: 0xa4209304  sh          $zero, -0x6CFC($at)
    ctx->pc = 0x206f84u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939396), (uint16_t)GPR_U32(ctx, 0));
label_206f88:
    // 0x206f88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_206f8c:
    // 0x206f8c: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x206f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939398), (uint8_t)GPR_U32(ctx, 0));
label_206f90:
    // 0x206f90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_206f94:
    // 0x206f94: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x206f94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939399), (uint8_t)GPR_U32(ctx, 0));
label_206f98:
    // 0x206f98: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206f9c:
    // 0x206f9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_206fa0:
    // 0x206fa0: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x206fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
label_206fa4:
    // 0x206fa4: 0xc06ce90  jal         func_1B3A40
label_206fa8:
    if (ctx->pc == 0x206FA8u) {
        ctx->pc = 0x206FACu;
        goto label_206fac;
    }
    ctx->pc = 0x206FA4u;
    SET_GPR_U32(ctx, 31, 0x206FACu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x206FA4u, 0x206FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FACu;
label_206fac:
    // 0x206fac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206fb0:
    // 0x206fb0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x206fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_206fb4:
    // 0x206fb4: 0x10600296  beqz        $v1, . + 4 + (0x296 << 2)
label_206fb8:
    if (ctx->pc == 0x206FB8u) {
        ctx->pc = 0x206FBCu;
        goto label_206fbc;
    }
    ctx->pc = 0x206FB4u;
    {
        const bool branch_taken_0x206fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206fb4) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x206FBCu;
label_206fbc:
    // 0x206fbc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x206fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206fc0:
    // 0x206fc0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x206fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_206fc4:
    // 0x206fc4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x206fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_206fc8:
    // 0x206fc8: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x206fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_206fcc:
    // 0x206fcc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206fd0:
    // 0x206fd0: 0x8c641360  lw          $a0, 0x1360($v1)
    ctx->pc = 0x206fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4960)));
label_206fd4:
    // 0x206fd4: 0x1080028e  beqz        $a0, . + 4 + (0x28E << 2)
label_206fd8:
    if (ctx->pc == 0x206FD8u) {
        ctx->pc = 0x206FDCu;
        goto label_206fdc;
    }
    ctx->pc = 0x206FD4u;
    {
        const bool branch_taken_0x206fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x206fd4) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x206FDCu;
label_206fdc:
    // 0x206fdc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x206fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206fe0:
    // 0x206fe0: 0xaca01360  sw          $zero, 0x1360($a1)
    ctx->pc = 0x206fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4960), GPR_U32(ctx, 0));
label_206fe4:
    // 0x206fe4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206fe8:
    // 0x206fe8: 0xac601370  sw          $zero, 0x1370($v1)
    ctx->pc = 0x206fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4976), GPR_U32(ctx, 0));
label_206fec:
    // 0x206fec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206ff0:
    // 0x206ff0: 0xac80135c  sw          $zero, 0x135C($a0)
    ctx->pc = 0x206ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4956), GPR_U32(ctx, 0));
label_206ff4:
    // 0x206ff4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206ff8:
    // 0x206ff8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_206ffc:
    // 0x206ffc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_207000:
    // 0x207000: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x207000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_207004:
    // 0x207004: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207008:
    // 0x207008: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x207008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_20700c:
    // 0x20700c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207010:
    // 0x207010: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x207010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_207014:
    // 0x207014: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207018:
    // 0x207018: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x207018u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_20701c:
    // 0x20701c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207020:
    // 0x207020: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x207020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_207024:
    // 0x207024: 0x1000027a  b           . + 4 + (0x27A << 2)
label_207028:
    if (ctx->pc == 0x207028u) {
        ctx->pc = 0x20702Cu;
        goto label_20702c;
    }
    ctx->pc = 0x207024u;
    {
        const bool branch_taken_0x207024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207024) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x20702Cu;
label_20702c:
    // 0x20702c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207030:
    // 0x207030: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207034:
    // 0x207034: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x207034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_207038:
    // 0x207038: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x207038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
label_20703c:
    // 0x20703c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20703cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207040:
    // 0x207040: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x207040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_207044:
    // 0x207044: 0xc0965d0  jal         func_259740
label_207048:
    if (ctx->pc == 0x207048u) {
        ctx->pc = 0x20704Cu;
        goto label_20704c;
    }
    ctx->pc = 0x207044u;
    SET_GPR_U32(ctx, 31, 0x20704Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x207044u, 0x20704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20704Cu;
label_20704c:
    // 0x20704c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20704cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_207050:
    // 0x207050: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207054:
    // 0x207054: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x207054u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_207058:
    // 0x207058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20705c:
    // 0x20705c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20705cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207060:
    // 0x207060: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x207060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_207064:
    // 0x207064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207068:
    // 0x207068: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20706c:
    // 0x20706c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x20706cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_207070:
    // 0x207070: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207074:
    // 0x207074: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x207074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_207078:
    // 0x207078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20707c:
    // 0x20707c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20707cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_207080:
    // 0x207080: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207084:
    // 0x207084: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x207084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_207088:
    // 0x207088: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x207088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20708c:
    // 0x20708c: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x20708cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
label_207090:
    // 0x207090: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x207090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_207094:
    // 0x207094: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207098:
    // 0x207098: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x207098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_20709c:
    // 0x20709c: 0x3c073ba3  lui         $a3, 0x3BA3
    ctx->pc = 0x20709cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15267 << 16));
label_2070a0:
    // 0x2070a0: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2070a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
label_2070a4:
    // 0x2070a4: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2070a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2070a8:
    // 0x2070a8: 0xc4ad011c  lwc1        $f13, 0x11C($a1)
    ctx->pc = 0x2070a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2070ac:
    // 0x2070ac: 0xc058f50  jal         func_163D40
label_2070b0:
    if (ctx->pc == 0x2070B0u) {
        ctx->pc = 0x2070B4u;
        goto label_2070b4;
    }
    ctx->pc = 0x2070ACu;
    SET_GPR_U32(ctx, 31, 0x2070B4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2070ACu, 0x2070B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070B4u;
label_2070b4:
    // 0x2070b4: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x2070b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2070b8:
    // 0x2070b8: 0x8d0202d0  lw          $v0, 0x2D0($t0)
    ctx->pc = 0x2070b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 720)));
label_2070bc:
    // 0x2070bc: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x2070bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
label_2070c0:
    // 0x2070c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2070c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2070c4:
    // 0x2070c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2070c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2070c8:
    // 0x2070c8: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x2070c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_2070cc:
    // 0x2070cc: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x2070ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_2070d0:
    // 0x2070d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2070d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2070d4:
    // 0x2070d4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2070d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2070d8:
    // 0x2070d8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2070d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_2070dc:
    // 0x2070dc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2070dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2070e0:
    // 0x2070e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2070e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2070e4:
    // 0x2070e4: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x2070e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_2070e8:
    // 0x2070e8: 0x94a20140  lhu         $v0, 0x140($a1)
    ctx->pc = 0x2070e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 320)));
label_2070ec:
    // 0x2070ec: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x2070ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2070f0:
    // 0x2070f0: 0xa4a40140  sh          $a0, 0x140($a1)
    ctx->pc = 0x2070f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 4));
label_2070f4:
    // 0x2070f4: 0x3c033c83  lui         $v1, 0x3C83
    ctx->pc = 0x2070f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15491 << 16));
label_2070f8:
    // 0x2070f8: 0x3462126f  ori         $v0, $v1, 0x126F
    ctx->pc = 0x2070f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
label_2070fc:
    // 0x2070fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2070fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_207100:
    // 0x207100: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207104:
    // 0x207104: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207108:
    // 0x207108: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20710c:
    // 0x20710c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x20710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_207110:
    // 0x207110: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x207110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_207114:
    // 0x207114: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x207114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
label_207118:
    // 0x207118: 0xc05c848  jal         func_172120
label_20711c:
    if (ctx->pc == 0x20711Cu) {
        ctx->pc = 0x207120u;
        goto label_207120;
    }
    ctx->pc = 0x207118u;
    SET_GPR_U32(ctx, 31, 0x207120u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x207118u, 0x207120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207120u;
label_207120:
    // 0x207120: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207124:
    // 0x207124: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x207124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207128:
    // 0x207128: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x207128u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20712c:
    // 0x20712c: 0xc058fec  jal         func_163FB0
label_207130:
    if (ctx->pc == 0x207130u) {
        ctx->pc = 0x207134u;
        goto label_207134;
    }
    ctx->pc = 0x20712Cu;
    SET_GPR_U32(ctx, 31, 0x207134u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20712Cu, 0x207134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207134u;
label_207134:
    // 0x207134: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207138:
    // 0x207138: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x207138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_20713c:
    // 0x20713c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207140:
    // 0x207140: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x207140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207144:
    // 0x207144: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x207144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
label_207148:
    // 0x207148: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x207148u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20714c:
    // 0x20714c: 0x0  nop
    ctx->pc = 0x20714cu;
    // NOP
label_207150:
    // 0x207150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207154:
    // 0x207154: 0x0  nop
    ctx->pc = 0x207154u;
    // NOP
label_207158:
    // 0x207158: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_20715c:
    if (ctx->pc == 0x20715Cu) {
        ctx->pc = 0x207160u;
        goto label_207160;
    }
    ctx->pc = 0x207158u;
    {
        const bool branch_taken_0x207158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207158) {
            ctx->pc = 0x20717Cu;
            goto label_20717c;
        }
    }
    ctx->pc = 0x207160u;
label_207160:
    // 0x207160: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207164:
    // 0x207164: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x207164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207168:
    // 0x207168: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x207168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_20716c:
    // 0x20716c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20716cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207170:
    // 0x207170: 0x0  nop
    ctx->pc = 0x207170u;
    // NOP
label_207174:
    // 0x207174: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_207178:
    // 0x207178: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x207178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_20717c:
    // 0x20717c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207180:
    // 0x207180: 0xc05cd34  jal         func_1734D0
label_207184:
    if (ctx->pc == 0x207184u) {
        ctx->pc = 0x207188u;
        goto label_207188;
    }
    ctx->pc = 0x207180u;
    SET_GPR_U32(ctx, 31, 0x207188u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x207180u, 0x207188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207188u;
label_207188:
    // 0x207188: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20718c:
    // 0x20718c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_207190:
    // 0x207190: 0xc080f60  jal         func_203D80
label_207194:
    if (ctx->pc == 0x207194u) {
        ctx->pc = 0x207198u;
        goto label_207198;
    }
    ctx->pc = 0x207190u;
    SET_GPR_U32(ctx, 31, 0x207198u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x207190u, 0x207198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207198u;
label_207198:
    // 0x207198: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x207198u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20719c:
    // 0x20719c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2071a0:
    // 0x2071a0: 0xc0974c8  jal         func_25D320
label_2071a4:
    if (ctx->pc == 0x2071A4u) {
        ctx->pc = 0x2071A8u;
        goto label_2071a8;
    }
    ctx->pc = 0x2071A0u;
    SET_GPR_U32(ctx, 31, 0x2071A8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2071A0u, 0x2071A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071A8u;
label_2071a8:
    // 0x2071a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2071a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2071ac:
    // 0x2071ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2071acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2071b0:
    // 0x2071b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2071b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2071b4:
    // 0x2071b4: 0x10600216  beqz        $v1, . + 4 + (0x216 << 2)
label_2071b8:
    if (ctx->pc == 0x2071B8u) {
        ctx->pc = 0x2071BCu;
        goto label_2071bc;
    }
    ctx->pc = 0x2071B4u;
    {
        const bool branch_taken_0x2071b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071b4) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x2071BCu;
label_2071bc:
    // 0x2071bc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2071bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2071c0:
    // 0x2071c0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2071c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_2071c4:
    // 0x2071c4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2071c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2071c8:
    // 0x2071c8: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2071c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_2071cc:
    // 0x2071cc: 0x10000210  b           . + 4 + (0x210 << 2)
label_2071d0:
    if (ctx->pc == 0x2071D0u) {
        ctx->pc = 0x2071D4u;
        goto label_2071d4;
    }
    ctx->pc = 0x2071CCu;
    {
        const bool branch_taken_0x2071cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071cc) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x2071D4u;
label_2071d4:
    // 0x2071d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2071d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2071d8:
    // 0x2071d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2071d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2071dc:
    // 0x2071dc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2071dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_2071e0:
    // 0x2071e0: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x2071e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
label_2071e4:
    // 0x2071e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2071e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2071e8:
    // 0x2071e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2071e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2071ec:
    // 0x2071ec: 0xc0965d0  jal         func_259740
label_2071f0:
    if (ctx->pc == 0x2071F0u) {
        ctx->pc = 0x2071F4u;
        goto label_2071f4;
    }
    ctx->pc = 0x2071ECu;
    SET_GPR_U32(ctx, 31, 0x2071F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2071ECu, 0x2071F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071F4u;
label_2071f4:
    // 0x2071f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2071f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2071f8:
    // 0x2071f8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2071f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2071fc:
    // 0x2071fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2071fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207200:
    // 0x207200: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207204:
    // 0x207204: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x207204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_207208:
    // 0x207208: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20720c:
    // 0x20720c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20720cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_207210:
    // 0x207210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_207214:
    // 0x207214: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x207214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_207218:
    // 0x207218: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x207218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20721c:
    // 0x20721c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207220:
    // 0x207220: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_207224:
    // 0x207224: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x207224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_207228:
    // 0x207228: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x207228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_20722c:
    // 0x20722c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20722cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_207230:
    // 0x207230: 0xc46d011c  lwc1        $f13, 0x11C($v1)
    ctx->pc = 0x207230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_207234:
    // 0x207234: 0xc058f50  jal         func_163D40
label_207238:
    if (ctx->pc == 0x207238u) {
        ctx->pc = 0x20723Cu;
        goto label_20723c;
    }
    ctx->pc = 0x207234u;
    SET_GPR_U32(ctx, 31, 0x20723Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x207234u, 0x20723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20723Cu;
label_20723c:
    // 0x20723c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207240:
    // 0x207240: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x207240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_207244:
    // 0x207244: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x207244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
label_207248:
    // 0x207248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20724c:
    // 0x20724c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207250:
    // 0x207250: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x207250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_207254:
    // 0x207254: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x207254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_207258:
    // 0x207258: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20725c:
    // 0x20725c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x20725cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207260:
    // 0x207260: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207264:
    // 0x207264: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x207264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_207268:
    // 0x207268: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x207268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20726c:
    // 0x20726c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20726cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_207270:
    // 0x207270: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x207270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_207274:
    // 0x207274: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x207274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_207278:
    // 0x207278: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x207278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
label_20727c:
    // 0x20727c: 0xc05c848  jal         func_172120
label_207280:
    if (ctx->pc == 0x207280u) {
        ctx->pc = 0x207284u;
        goto label_207284;
    }
    ctx->pc = 0x20727Cu;
    SET_GPR_U32(ctx, 31, 0x207284u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20727Cu, 0x207284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207284u;
label_207284:
    // 0x207284: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x207284u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_207288:
    // 0x207288: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20728c:
    // 0x20728c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_207290:
    // 0x207290: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x207290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_207294:
    // 0x207294: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x207294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_207298:
    // 0x207298: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x207298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20729c:
    // 0x20729c: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x20729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2072a0:
    // 0x2072a0: 0xc058f50  jal         func_163D40
label_2072a4:
    if (ctx->pc == 0x2072A4u) {
        ctx->pc = 0x2072A8u;
        goto label_2072a8;
    }
    ctx->pc = 0x2072A0u;
    SET_GPR_U32(ctx, 31, 0x2072A8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2072A0u, 0x2072A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072A8u;
label_2072a8:
    // 0x2072a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2072a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2072ac:
    // 0x2072ac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2072acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_2072b0:
    // 0x2072b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2072b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2072b4:
    // 0x2072b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2072b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2072b8:
    // 0x2072b8: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x2072b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_2072bc:
    // 0x2072bc: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x2072bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_2072c0:
    // 0x2072c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2072c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2072c4:
    // 0x2072c4: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x2072c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
label_2072c8:
    // 0x2072c8: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x2072c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
label_2072cc:
    // 0x2072cc: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2072ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_2072d0:
    // 0x2072d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2072d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2072d4:
    // 0x2072d4: 0x0  nop
    ctx->pc = 0x2072d4u;
    // NOP
label_2072d8:
    // 0x2072d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2072d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2072dc:
    // 0x2072dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2072dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2072e0:
    // 0x2072e0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2072e4:
    // 0x2072e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2072e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2072e8:
    // 0x2072e8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2072e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2072ec:
    // 0x2072ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2072ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2072f0:
    // 0x2072f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2072f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2072f4:
    // 0x2072f4: 0x0  nop
    ctx->pc = 0x2072f4u;
    // NOP
label_2072f8:
    // 0x2072f8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2072f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2072fc:
    // 0x2072fc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207300:
    // 0x207300: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207304:
    // 0x207304: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_207308:
    // 0x207308: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x207308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
label_20730c:
    // 0x20730c: 0xc067594  jal         func_19D650
label_207310:
    if (ctx->pc == 0x207310u) {
        ctx->pc = 0x207314u;
        goto label_207314;
    }
    ctx->pc = 0x20730Cu;
    SET_GPR_U32(ctx, 31, 0x207314u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x20730Cu, 0x207314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207314u;
label_207314:
    // 0x207314: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x207314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_207318:
    // 0x207318: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x207318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20731c:
    // 0x20731c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_207320:
    // 0x207320: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x207320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_207324:
    // 0x207324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207328:
    // 0x207328: 0x0  nop
    ctx->pc = 0x207328u;
    // NOP
label_20732c:
    // 0x20732c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20732cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207330:
    // 0x207330: 0x0  nop
    ctx->pc = 0x207330u;
    // NOP
label_207334:
    // 0x207334: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_207338:
    if (ctx->pc == 0x207338u) {
        ctx->pc = 0x20733Cu;
        goto label_20733c;
    }
    ctx->pc = 0x207334u;
    {
        const bool branch_taken_0x207334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207334) {
            ctx->pc = 0x207350u;
            goto label_207350;
        }
    }
    ctx->pc = 0x20733Cu;
label_20733c:
    // 0x20733c: 0x3c023d13  lui         $v0, 0x3D13
    ctx->pc = 0x20733cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15635 << 16));
label_207340:
    // 0x207340: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x207340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
label_207344:
    // 0x207344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207348:
    // 0x207348: 0x0  nop
    ctx->pc = 0x207348u;
    // NOP
label_20734c:
    // 0x20734c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x20734cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_207350:
    // 0x207350: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207354:
    // 0x207354: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207358:
    // 0x207358: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20735c:
    // 0x20735c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x20735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_207360:
    // 0x207360: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x207360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_207364:
    // 0x207364: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x207364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
label_207368:
    // 0x207368: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x207368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20736c:
    // 0x20736c: 0xc05c848  jal         func_172120
label_207370:
    if (ctx->pc == 0x207370u) {
        ctx->pc = 0x207374u;
        goto label_207374;
    }
    ctx->pc = 0x20736Cu;
    SET_GPR_U32(ctx, 31, 0x207374u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20736Cu, 0x207374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207374u;
label_207374:
    // 0x207374: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207378:
    // 0x207378: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x207378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20737c:
    // 0x20737c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20737cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_207380:
    // 0x207380: 0xc058fec  jal         func_163FB0
label_207384:
    if (ctx->pc == 0x207384u) {
        ctx->pc = 0x207388u;
        goto label_207388;
    }
    ctx->pc = 0x207380u;
    SET_GPR_U32(ctx, 31, 0x207388u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x207380u, 0x207388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207388u;
label_207388:
    // 0x207388: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20738c:
    // 0x20738c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20738cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_207390:
    // 0x207390: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207394:
    // 0x207394: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x207394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207398:
    // 0x207398: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x207398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_20739c:
    // 0x20739c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20739cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2073a0:
    // 0x2073a0: 0x0  nop
    ctx->pc = 0x2073a0u;
    // NOP
label_2073a4:
    // 0x2073a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2073a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2073a8:
    // 0x2073a8: 0x0  nop
    ctx->pc = 0x2073a8u;
    // NOP
label_2073ac:
    // 0x2073ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2073b0:
    if (ctx->pc == 0x2073B0u) {
        ctx->pc = 0x2073B4u;
        goto label_2073b4;
    }
    ctx->pc = 0x2073ACu;
    {
        const bool branch_taken_0x2073ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2073ac) {
            ctx->pc = 0x2073D0u;
            goto label_2073d0;
        }
    }
    ctx->pc = 0x2073B4u;
label_2073b4:
    // 0x2073b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2073b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2073b8:
    // 0x2073b8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2073b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2073bc:
    // 0x2073bc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2073bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_2073c0:
    // 0x2073c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2073c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2073c4:
    // 0x2073c4: 0x0  nop
    ctx->pc = 0x2073c4u;
    // NOP
label_2073c8:
    // 0x2073c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2073c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2073cc:
    // 0x2073cc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2073ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_2073d0:
    // 0x2073d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2073d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2073d4:
    // 0x2073d4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2073d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2073d8:
    // 0x2073d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2073d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2073dc:
    // 0x2073dc: 0x0  nop
    ctx->pc = 0x2073dcu;
    // NOP
label_2073e0:
    // 0x2073e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2073e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2073e4:
    // 0x2073e4: 0x0  nop
    ctx->pc = 0x2073e4u;
    // NOP
label_2073e8:
    // 0x2073e8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_2073ec:
    if (ctx->pc == 0x2073ECu) {
        ctx->pc = 0x2073F0u;
        goto label_2073f0;
    }
    ctx->pc = 0x2073E8u;
    {
        const bool branch_taken_0x2073e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2073e8) {
            ctx->pc = 0x207430u;
            goto label_207430;
        }
    }
    ctx->pc = 0x2073F0u;
label_2073f0:
    // 0x2073f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2073f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2073f4:
    // 0x2073f4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2073f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2073f8:
    // 0x2073f8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x2073f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_2073fc:
    // 0x2073fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2073fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207400:
    // 0x207400: 0x0  nop
    ctx->pc = 0x207400u;
    // NOP
label_207404:
    // 0x207404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207408:
    // 0x207408: 0x0  nop
    ctx->pc = 0x207408u;
    // NOP
label_20740c:
    // 0x20740c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_207410:
    if (ctx->pc == 0x207410u) {
        ctx->pc = 0x207414u;
        goto label_207414;
    }
    ctx->pc = 0x20740Cu;
    {
        const bool branch_taken_0x20740c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20740c) {
            ctx->pc = 0x207430u;
            goto label_207430;
        }
    }
    ctx->pc = 0x207414u;
label_207414:
    // 0x207414: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207418:
    // 0x207418: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x207418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20741c:
    // 0x20741c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20741cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_207420:
    // 0x207420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207424:
    // 0x207424: 0x0  nop
    ctx->pc = 0x207424u;
    // NOP
label_207428:
    // 0x207428: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20742c:
    // 0x20742c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x20742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_207430:
    // 0x207430: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207434:
    // 0x207434: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x207434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207438:
    // 0x207438: 0x3c03465a  lui         $v1, 0x465A
    ctx->pc = 0x207438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18010 << 16));
label_20743c:
    // 0x20743c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x20743cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_207440:
    // 0x207440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x207440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207444:
    // 0x207444: 0x0  nop
    ctx->pc = 0x207444u;
    // NOP
label_207448:
    // 0x207448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x207448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20744c:
    // 0x20744c: 0x0  nop
    ctx->pc = 0x20744cu;
    // NOP
label_207450:
    // 0x207450: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_207454:
    if (ctx->pc == 0x207454u) {
        ctx->pc = 0x207458u;
        goto label_207458;
    }
    ctx->pc = 0x207450u;
    {
        const bool branch_taken_0x207450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207450) {
            ctx->pc = 0x207474u;
            goto label_207474;
        }
    }
    ctx->pc = 0x207458u;
label_207458:
    // 0x207458: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20745c:
    // 0x20745c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x20745cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_207460:
    // 0x207460: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x207460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_207464:
    // 0x207464: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x207464u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_207468:
    // 0x207468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20746c:
    // 0x20746c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207470:
    // 0x207470: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x207470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_207474:
    // 0x207474: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207478:
    // 0x207478: 0xc05cd34  jal         func_1734D0
label_20747c:
    if (ctx->pc == 0x20747Cu) {
        ctx->pc = 0x207480u;
        goto label_207480;
    }
    ctx->pc = 0x207478u;
    SET_GPR_U32(ctx, 31, 0x207480u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x207478u, 0x207480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207480u;
label_207480:
    // 0x207480: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207484:
    // 0x207484: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_207488:
    // 0x207488: 0xc080f60  jal         func_203D80
label_20748c:
    if (ctx->pc == 0x20748Cu) {
        ctx->pc = 0x207490u;
        goto label_207490;
    }
    ctx->pc = 0x207488u;
    SET_GPR_U32(ctx, 31, 0x207490u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x207488u, 0x207490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207490u;
label_207490:
    // 0x207490: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x207490u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_207494:
    // 0x207494: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x207494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207498:
    // 0x207498: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x207498u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_20749c:
    // 0x20749c: 0xc0974c8  jal         func_25D320
label_2074a0:
    if (ctx->pc == 0x2074A0u) {
        ctx->pc = 0x2074A4u;
        goto label_2074a4;
    }
    ctx->pc = 0x20749Cu;
    SET_GPR_U32(ctx, 31, 0x2074A4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20749Cu, 0x2074A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074A4u;
label_2074a4:
    // 0x2074a4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2074a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2074a8:
    // 0x2074a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2074a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2074ac:
    // 0x2074ac: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2074acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2074b0:
    // 0x2074b0: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x2074b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
label_2074b4:
    // 0x2074b4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2074b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_2074b8:
    // 0x2074b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2074b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2074bc:
    // 0x2074bc: 0x0  nop
    ctx->pc = 0x2074bcu;
    // NOP
label_2074c0:
    // 0x2074c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2074c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2074c4:
    // 0x2074c4: 0x0  nop
    ctx->pc = 0x2074c4u;
    // NOP
label_2074c8:
    // 0x2074c8: 0x45000151  bc1f        . + 4 + (0x151 << 2)
label_2074cc:
    if (ctx->pc == 0x2074CCu) {
        ctx->pc = 0x2074D0u;
        goto label_2074d0;
    }
    ctx->pc = 0x2074C8u;
    {
        const bool branch_taken_0x2074c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2074c8) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x2074D0u;
label_2074d0:
    // 0x2074d0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2074d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2074d4:
    // 0x2074d4: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2074d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2074d8:
    // 0x2074d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2074d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2074dc:
    // 0x2074dc: 0x0  nop
    ctx->pc = 0x2074dcu;
    // NOP
label_2074e0:
    // 0x2074e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2074e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2074e4:
    // 0x2074e4: 0x0  nop
    ctx->pc = 0x2074e4u;
    // NOP
label_2074e8:
    // 0x2074e8: 0x45000149  bc1f        . + 4 + (0x149 << 2)
label_2074ec:
    if (ctx->pc == 0x2074ECu) {
        ctx->pc = 0x2074F0u;
        goto label_2074f0;
    }
    ctx->pc = 0x2074E8u;
    {
        const bool branch_taken_0x2074e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2074e8) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x2074F0u;
label_2074f0:
    // 0x2074f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2074f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2074f4:
    // 0x2074f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2074f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2074f8:
    // 0x2074f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2074f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2074fc:
    // 0x2074fc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2074fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_207500:
    // 0x207500: 0xc05cf7c  jal         func_173DF0
label_207504:
    if (ctx->pc == 0x207504u) {
        ctx->pc = 0x207508u;
        goto label_207508;
    }
    ctx->pc = 0x207500u;
    SET_GPR_U32(ctx, 31, 0x207508u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207500u, 0x207508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207508u;
label_207508:
    // 0x207508: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x207508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_20750c:
    // 0x20750c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20750cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207510:
    // 0x207510: 0x0  nop
    ctx->pc = 0x207510u;
    // NOP
label_207514:
    // 0x207514: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207518:
    // 0x207518: 0x0  nop
    ctx->pc = 0x207518u;
    // NOP
label_20751c:
    // 0x20751c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_207520:
    if (ctx->pc == 0x207520u) {
        ctx->pc = 0x207524u;
        goto label_207524;
    }
    ctx->pc = 0x20751Cu;
    {
        const bool branch_taken_0x20751c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20751c) {
            ctx->pc = 0x2075C0u;
            goto label_2075c0;
        }
    }
    ctx->pc = 0x207524u;
label_207524:
    // 0x207524: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207528:
    // 0x207528: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20752c:
    // 0x20752c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_207530:
    // 0x207530: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x207530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_207534:
    // 0x207534: 0xc05cf7c  jal         func_173DF0
label_207538:
    if (ctx->pc == 0x207538u) {
        ctx->pc = 0x20753Cu;
        goto label_20753c;
    }
    ctx->pc = 0x207534u;
    SET_GPR_U32(ctx, 31, 0x20753Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207534u, 0x20753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20753Cu;
label_20753c:
    // 0x20753c: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x20753cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
label_207540:
    // 0x207540: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x207540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207544:
    // 0x207544: 0x0  nop
    ctx->pc = 0x207544u;
    // NOP
label_207548:
    // 0x207548: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20754c:
    // 0x20754c: 0x0  nop
    ctx->pc = 0x20754cu;
    // NOP
label_207550:
    // 0x207550: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_207554:
    if (ctx->pc == 0x207554u) {
        ctx->pc = 0x207558u;
        goto label_207558;
    }
    ctx->pc = 0x207550u;
    {
        const bool branch_taken_0x207550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207550) {
            ctx->pc = 0x2075C0u;
            goto label_2075c0;
        }
    }
    ctx->pc = 0x207558u;
label_207558:
    // 0x207558: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20755c:
    // 0x20755c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_207560:
    // 0x207560: 0xc067588  jal         func_19D620
label_207564:
    if (ctx->pc == 0x207564u) {
        ctx->pc = 0x207568u;
        goto label_207568;
    }
    ctx->pc = 0x207560u;
    SET_GPR_U32(ctx, 31, 0x207568u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x207560u, 0x207568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207568u;
label_207568:
    // 0x207568: 0x3c034662  lui         $v1, 0x4662
    ctx->pc = 0x207568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18018 << 16));
label_20756c:
    // 0x20756c: 0x34649000  ori         $a0, $v1, 0x9000
    ctx->pc = 0x20756cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_207570:
    // 0x207570: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x207570u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207574:
    // 0x207574: 0x0  nop
    ctx->pc = 0x207574u;
    // NOP
label_207578:
    // 0x207578: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20757c:
    // 0x20757c: 0x0  nop
    ctx->pc = 0x20757cu;
    // NOP
label_207580:
    // 0x207580: 0x45000123  bc1f        . + 4 + (0x123 << 2)
label_207584:
    if (ctx->pc == 0x207584u) {
        ctx->pc = 0x207588u;
        goto label_207588;
    }
    ctx->pc = 0x207580u;
    {
        const bool branch_taken_0x207580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207580) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x207588u;
label_207588:
    // 0x207588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20758c:
    // 0x20758c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x20758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207590:
    // 0x207590: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x207590u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_207594:
    // 0x207594: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x207594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_207598:
    // 0x207598: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20759c:
    // 0x20759c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x20759cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_2075a0:
    // 0x2075a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2075a4:
    // 0x2075a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2075a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2075a8:
    // 0x2075a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2075ac:
    // 0x2075ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2075acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2075b0:
    // 0x2075b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2075b4:
    // 0x2075b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2075b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2075b8:
    // 0x2075b8: 0x10000115  b           . + 4 + (0x115 << 2)
label_2075bc:
    if (ctx->pc == 0x2075BCu) {
        ctx->pc = 0x2075C0u;
        goto label_2075c0;
    }
    ctx->pc = 0x2075B8u;
    {
        const bool branch_taken_0x2075b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075b8) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x2075C0u;
label_2075c0:
    // 0x2075c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2075c4:
    // 0x2075c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2075c8:
    // 0x2075c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2075c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2075cc:
    // 0x2075cc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2075ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2075d0:
    // 0x2075d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2075d4:
    // 0x2075d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2075d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2075d8:
    // 0x2075d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2075dc:
    // 0x2075dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2075dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2075e0:
    // 0x2075e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2075e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2075e4:
    // 0x2075e4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2075e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_2075e8:
    // 0x2075e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2075ec:
    // 0x2075ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2075ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2075f0:
    // 0x2075f0: 0x10000107  b           . + 4 + (0x107 << 2)
label_2075f4:
    if (ctx->pc == 0x2075F4u) {
        ctx->pc = 0x2075F8u;
        goto label_2075f8;
    }
    ctx->pc = 0x2075F0u;
    {
        const bool branch_taken_0x2075f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075f0) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x2075F8u;
label_2075f8:
    // 0x2075f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2075f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2075fc:
    // 0x2075fc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2075fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207600:
    // 0x207600: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_207604:
    // 0x207604: 0x24067803  addiu       $a2, $zero, 0x7803
    ctx->pc = 0x207604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30723));
label_207608:
    // 0x207608: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20760c:
    // 0x20760c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20760cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_207610:
    // 0x207610: 0xc0965d0  jal         func_259740
label_207614:
    if (ctx->pc == 0x207614u) {
        ctx->pc = 0x207618u;
        goto label_207618;
    }
    ctx->pc = 0x207610u;
    SET_GPR_U32(ctx, 31, 0x207618u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x207610u, 0x207618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207618u;
label_207618:
    // 0x207618: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20761c:
    // 0x20761c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20761cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_207620:
    // 0x207620: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207624:
    // 0x207624: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x207624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_207628:
    // 0x207628: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20762c:
    // 0x20762c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20762cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_207630:
    // 0x207630: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207634:
    // 0x207634: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x207634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_207638:
    // 0x207638: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20763c:
    // 0x20763c: 0xa4851278  sh          $a1, 0x1278($a0)
    ctx->pc = 0x20763cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 5));
label_207640:
    // 0x207640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x207640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_207644:
    // 0x207644: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x207644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207648:
    // 0x207648: 0x8cc202d0  lw          $v0, 0x2D0($a2)
    ctx->pc = 0x207648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_20764c:
    // 0x20764c: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x20764cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
label_207650:
    // 0x207650: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x207650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_207654:
    // 0x207654: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x207654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_207658:
    // 0x207658: 0xc44d011c  lwc1        $f13, 0x11C($v0)
    ctx->pc = 0x207658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20765c:
    // 0x20765c: 0xc058f50  jal         func_163D40
label_207660:
    if (ctx->pc == 0x207660u) {
        ctx->pc = 0x207664u;
        goto label_207664;
    }
    ctx->pc = 0x20765Cu;
    SET_GPR_U32(ctx, 31, 0x207664u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20765Cu, 0x207664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207664u;
label_207664:
    // 0x207664: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207668:
    // 0x207668: 0x8c4502d0  lw          $a1, 0x2D0($v0)
    ctx->pc = 0x207668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_20766c:
    // 0x20766c: 0xe4a0011c  swc1        $f0, 0x11C($a1)
    ctx->pc = 0x20766cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 284), bits); }
label_207670:
    // 0x207670: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207674:
    // 0x207674: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x207674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207678:
    // 0x207678: 0x8cc202d0  lw          $v0, 0x2D0($a2)
    ctx->pc = 0x207678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_20767c:
    // 0x20767c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x20767cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_207680:
    // 0x207680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207684:
    // 0x207684: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207688:
    // 0x207688: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_20768c:
    // 0x20768c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x20768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_207690:
    // 0x207690: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207694:
    // 0x207694: 0x8cc702d0  lw          $a3, 0x2D0($a2)
    ctx->pc = 0x207694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_207698:
    // 0x207698: 0x94e20140  lhu         $v0, 0x140($a3)
    ctx->pc = 0x207698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 320)));
label_20769c:
    // 0x20769c: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x20769cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2076a0:
    // 0x2076a0: 0xa4e40140  sh          $a0, 0x140($a3)
    ctx->pc = 0x2076a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 320), (uint16_t)GPR_U32(ctx, 4));
label_2076a4:
    // 0x2076a4: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x2076a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
label_2076a8:
    // 0x2076a8: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2076a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_2076ac:
    // 0x2076ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2076acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2076b0:
    // 0x2076b0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2076b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2076b4:
    // 0x2076b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2076b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2076b8:
    // 0x2076b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2076b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2076bc:
    // 0x2076bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2076bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_2076c0:
    // 0x2076c0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2076c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2076c4:
    // 0x2076c4: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2076c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
label_2076c8:
    // 0x2076c8: 0xc05c848  jal         func_172120
label_2076cc:
    if (ctx->pc == 0x2076CCu) {
        ctx->pc = 0x2076D0u;
        goto label_2076d0;
    }
    ctx->pc = 0x2076C8u;
    SET_GPR_U32(ctx, 31, 0x2076D0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2076C8u, 0x2076D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2076D0u;
label_2076d0:
    // 0x2076d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2076d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2076d4:
    // 0x2076d4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2076d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2076d8:
    // 0x2076d8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2076d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2076dc:
    // 0x2076dc: 0xc058fec  jal         func_163FB0
label_2076e0:
    if (ctx->pc == 0x2076E0u) {
        ctx->pc = 0x2076E4u;
        goto label_2076e4;
    }
    ctx->pc = 0x2076DCu;
    SET_GPR_U32(ctx, 31, 0x2076E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2076DCu, 0x2076E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2076E4u;
label_2076e4:
    // 0x2076e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2076e8:
    // 0x2076e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2076e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2076ec:
    // 0x2076ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2076ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2076f0:
    // 0x2076f0: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2076f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2076f4:
    // 0x2076f4: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
label_2076f8:
    // 0x2076f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2076f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2076fc:
    // 0x2076fc: 0x0  nop
    ctx->pc = 0x2076fcu;
    // NOP
label_207700:
    // 0x207700: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x207700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207704:
    // 0x207704: 0x0  nop
    ctx->pc = 0x207704u;
    // NOP
label_207708:
    // 0x207708: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_20770c:
    if (ctx->pc == 0x20770Cu) {
        ctx->pc = 0x207710u;
        goto label_207710;
    }
    ctx->pc = 0x207708u;
    {
        const bool branch_taken_0x207708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207708) {
            ctx->pc = 0x20772Cu;
            goto label_20772c;
        }
    }
    ctx->pc = 0x207710u;
label_207710:
    // 0x207710: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207714:
    // 0x207714: 0xc4a10184  lwc1        $f1, 0x184($a1)
    ctx->pc = 0x207714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207718:
    // 0x207718: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_20771c:
    // 0x20771c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20771cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207720:
    // 0x207720: 0x0  nop
    ctx->pc = 0x207720u;
    // NOP
label_207724:
    // 0x207724: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_207728:
    // 0x207728: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x207728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
label_20772c:
    // 0x20772c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207730:
    // 0x207730: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x207730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207734:
    // 0x207734: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_207738:
    // 0x207738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x207738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20773c:
    // 0x20773c: 0x0  nop
    ctx->pc = 0x20773cu;
    // NOP
label_207740:
    // 0x207740: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207744:
    // 0x207744: 0x0  nop
    ctx->pc = 0x207744u;
    // NOP
label_207748:
    // 0x207748: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_20774c:
    if (ctx->pc == 0x20774Cu) {
        ctx->pc = 0x207750u;
        goto label_207750;
    }
    ctx->pc = 0x207748u;
    {
        const bool branch_taken_0x207748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207748) {
            ctx->pc = 0x20776Cu;
            goto label_20776c;
        }
    }
    ctx->pc = 0x207750u;
label_207750:
    // 0x207750: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207754:
    // 0x207754: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x207754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207758:
    // 0x207758: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x207758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_20775c:
    // 0x20775c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20775cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207760:
    // 0x207760: 0x0  nop
    ctx->pc = 0x207760u;
    // NOP
label_207764:
    // 0x207764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_207768:
    // 0x207768: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x207768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_20776c:
    // 0x20776c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207770:
    // 0x207770: 0xc05cd34  jal         func_1734D0
label_207774:
    if (ctx->pc == 0x207774u) {
        ctx->pc = 0x207778u;
        goto label_207778;
    }
    ctx->pc = 0x207770u;
    SET_GPR_U32(ctx, 31, 0x207778u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x207770u, 0x207778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207778u;
label_207778:
    // 0x207778: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x207778u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20777c:
    // 0x20777c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207780:
    // 0x207780: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_207784:
    // 0x207784: 0xc080f60  jal         func_203D80
label_207788:
    if (ctx->pc == 0x207788u) {
        ctx->pc = 0x20778Cu;
        goto label_20778c;
    }
    ctx->pc = 0x207784u;
    SET_GPR_U32(ctx, 31, 0x20778Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x207784u, 0x20778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20778Cu;
label_20778c:
    // 0x20778c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20778cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_207790:
    // 0x207790: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207794:
    // 0x207794: 0xc0974c8  jal         func_25D320
label_207798:
    if (ctx->pc == 0x207798u) {
        ctx->pc = 0x20779Cu;
        goto label_20779c;
    }
    ctx->pc = 0x207794u;
    SET_GPR_U32(ctx, 31, 0x20779Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x207794u, 0x20779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20779Cu;
label_20779c:
    // 0x20779c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20779cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2077a0:
    // 0x2077a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2077a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2077a4:
    // 0x2077a4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2077a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2077a8:
    // 0x2077a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2077a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2077ac:
    // 0x2077ac: 0x24831358  addiu       $v1, $a0, 0x1358
    ctx->pc = 0x2077acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4952));
label_2077b0:
    // 0x2077b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2077b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2077b4:
    // 0x2077b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2077b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2077b8:
    // 0x2077b8: 0x0  nop
    ctx->pc = 0x2077b8u;
    // NOP
label_2077bc:
    // 0x2077bc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_2077c0:
    if (ctx->pc == 0x2077C0u) {
        ctx->pc = 0x2077C4u;
        goto label_2077c4;
    }
    ctx->pc = 0x2077BCu;
    {
        const bool branch_taken_0x2077bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2077bc) {
            ctx->pc = 0x207810u;
            goto label_207810;
        }
    }
    ctx->pc = 0x2077C4u;
label_2077c4:
    // 0x2077c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2077c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2077c8:
    // 0x2077c8: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
label_2077cc:
    // 0x2077cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2077ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2077d0:
    // 0x2077d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2077d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2077d4:
    // 0x2077d4: 0x0  nop
    ctx->pc = 0x2077d4u;
    // NOP
label_2077d8:
    // 0x2077d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2077d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2077dc:
    // 0x2077dc: 0x0  nop
    ctx->pc = 0x2077dcu;
    // NOP
label_2077e0:
    // 0x2077e0: 0x4500008b  bc1f        . + 4 + (0x8B << 2)
label_2077e4:
    if (ctx->pc == 0x2077E4u) {
        ctx->pc = 0x2077E8u;
        goto label_2077e8;
    }
    ctx->pc = 0x2077E0u;
    {
        const bool branch_taken_0x2077e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2077e0) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x2077E8u;
label_2077e8:
    // 0x2077e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2077e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2077ec:
    // 0x2077ec: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2077ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2077f0:
    // 0x2077f0: 0x3c0445bb  lui         $a0, 0x45BB
    ctx->pc = 0x2077f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17851 << 16));
label_2077f4:
    // 0x2077f4: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x2077f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_2077f8:
    // 0x2077f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2077f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2077fc:
    // 0x2077fc: 0x0  nop
    ctx->pc = 0x2077fcu;
    // NOP
label_207800:
    // 0x207800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207804:
    // 0x207804: 0x0  nop
    ctx->pc = 0x207804u;
    // NOP
label_207808:
    // 0x207808: 0x45000081  bc1f        . + 4 + (0x81 << 2)
label_20780c:
    if (ctx->pc == 0x20780Cu) {
        ctx->pc = 0x207810u;
        goto label_207810;
    }
    ctx->pc = 0x207808u;
    {
        const bool branch_taken_0x207808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207808) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x207810u;
label_207810:
    // 0x207810: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207814:
    // 0x207814: 0xc4a10184  lwc1        $f1, 0x184($a1)
    ctx->pc = 0x207814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207818:
    // 0x207818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20781c:
    // 0x20781c: 0x0  nop
    ctx->pc = 0x20781cu;
    // NOP
label_207820:
    // 0x207820: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207824:
    // 0x207824: 0x0  nop
    ctx->pc = 0x207824u;
    // NOP
label_207828:
    // 0x207828: 0x45000079  bc1f        . + 4 + (0x79 << 2)
label_20782c:
    if (ctx->pc == 0x20782Cu) {
        ctx->pc = 0x207830u;
        goto label_207830;
    }
    ctx->pc = 0x207828u;
    {
        const bool branch_taken_0x207828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207828) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x207830u;
label_207830:
    // 0x207830: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x207830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_207834:
    // 0x207834: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x207834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207838:
    // 0x207838: 0x3c07458c  lui         $a3, 0x458C
    ctx->pc = 0x207838u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17804 << 16));
label_20783c:
    // 0x20783c: 0x34e6a000  ori         $a2, $a3, 0xA000
    ctx->pc = 0x20783cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)40960);
label_207840:
    // 0x207840: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x207840u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207844:
    // 0x207844: 0x0  nop
    ctx->pc = 0x207844u;
    // NOP
label_207848:
    // 0x207848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20784c:
    // 0x20784c: 0x0  nop
    ctx->pc = 0x20784cu;
    // NOP
label_207850:
    // 0x207850: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_207854:
    if (ctx->pc == 0x207854u) {
        ctx->pc = 0x207858u;
        goto label_207858;
    }
    ctx->pc = 0x207850u;
    {
        const bool branch_taken_0x207850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207850) {
            ctx->pc = 0x207870u;
            goto label_207870;
        }
    }
    ctx->pc = 0x207858u;
label_207858:
    // 0x207858: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x207858u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20785c:
    // 0x20785c: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x20785cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_207860:
    // 0x207860: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x207860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_207864:
    // 0x207864: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x207864u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
label_207868:
    // 0x207868: 0x10000069  b           . + 4 + (0x69 << 2)
label_20786c:
    if (ctx->pc == 0x20786Cu) {
        ctx->pc = 0x207870u;
        goto label_207870;
    }
    ctx->pc = 0x207868u;
    {
        const bool branch_taken_0x207868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207868) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x207870u;
label_207870:
    // 0x207870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207874:
    // 0x207874: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207878:
    // 0x207878: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x207878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_20787c:
    // 0x20787c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_207880:
    // 0x207880: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207884:
    // 0x207884: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x207884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_207888:
    // 0x207888: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20788c:
    // 0x20788c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20788cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_207890:
    // 0x207890: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207894:
    // 0x207894: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x207894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_207898:
    // 0x207898: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_20789c:
    // 0x20789c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20789cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2078a0:
    // 0x2078a0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2078a4:
    if (ctx->pc == 0x2078A4u) {
        ctx->pc = 0x2078A8u;
        goto label_2078a8;
    }
    ctx->pc = 0x2078A0u;
    {
        const bool branch_taken_0x2078a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078a0) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x2078A8u;
label_2078a8:
    // 0x2078a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2078a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2078ac:
    // 0x2078ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2078b0:
    // 0x2078b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2078b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2078b4:
    // 0x2078b4: 0x24067804  addiu       $a2, $zero, 0x7804
    ctx->pc = 0x2078b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30724));
label_2078b8:
    // 0x2078b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2078bc:
    // 0x2078bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2078bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2078c0:
    // 0x2078c0: 0xc0965d0  jal         func_259740
label_2078c4:
    if (ctx->pc == 0x2078C4u) {
        ctx->pc = 0x2078C8u;
        goto label_2078c8;
    }
    ctx->pc = 0x2078C0u;
    SET_GPR_U32(ctx, 31, 0x2078C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2078C0u, 0x2078C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078C8u;
label_2078c8:
    // 0x2078c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2078c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2078cc:
    // 0x2078cc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2078ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2078d0:
    // 0x2078d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2078d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2078d4:
    // 0x2078d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2078d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2078d8:
    // 0x2078d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2078d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2078dc:
    // 0x2078dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2078dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2078e0:
    // 0x2078e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2078e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2078e4:
    // 0x2078e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2078e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2078e8:
    // 0x2078e8: 0xc080f60  jal         func_203D80
label_2078ec:
    if (ctx->pc == 0x2078ECu) {
        ctx->pc = 0x2078F0u;
        goto label_2078f0;
    }
    ctx->pc = 0x2078E8u;
    SET_GPR_U32(ctx, 31, 0x2078F0u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2078E8u, 0x2078F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078F0u;
label_2078f0:
    // 0x2078f0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2078f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2078f4:
    // 0x2078f4: 0xc0974c8  jal         func_25D320
label_2078f8:
    if (ctx->pc == 0x2078F8u) {
        ctx->pc = 0x2078FCu;
        goto label_2078fc;
    }
    ctx->pc = 0x2078F4u;
    SET_GPR_U32(ctx, 31, 0x2078FCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2078F4u, 0x2078FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078FCu;
label_2078fc:
    // 0x2078fc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2078fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207900:
    // 0x207900: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x207900u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_207904:
    // 0x207904: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
label_207908:
    if (ctx->pc == 0x207908u) {
        ctx->pc = 0x20790Cu;
        goto label_20790c;
    }
    ctx->pc = 0x207904u;
    {
        const bool branch_taken_0x207904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x207904) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x20790Cu;
label_20790c:
    // 0x20790c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207910:
    // 0x207910: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207914:
    // 0x207914: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x207914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_207918:
    // 0x207918: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x207918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_20791c:
    // 0x20791c: 0xc05cf7c  jal         func_173DF0
label_207920:
    if (ctx->pc == 0x207920u) {
        ctx->pc = 0x207924u;
        goto label_207924;
    }
    ctx->pc = 0x20791Cu;
    SET_GPR_U32(ctx, 31, 0x207924u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20791Cu, 0x207924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207924u;
label_207924:
    // 0x207924: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x207924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_207928:
    // 0x207928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x207928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20792c:
    // 0x20792c: 0x0  nop
    ctx->pc = 0x20792cu;
    // NOP
label_207930:
    // 0x207930: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207934:
    // 0x207934: 0x0  nop
    ctx->pc = 0x207934u;
    // NOP
label_207938:
    // 0x207938: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_20793c:
    if (ctx->pc == 0x20793Cu) {
        ctx->pc = 0x207940u;
        goto label_207940;
    }
    ctx->pc = 0x207938u;
    {
        const bool branch_taken_0x207938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207938) {
            ctx->pc = 0x2079E0u;
            goto label_2079e0;
        }
    }
    ctx->pc = 0x207940u;
label_207940:
    // 0x207940: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207944:
    // 0x207944: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207948:
    // 0x207948: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x207948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_20794c:
    // 0x20794c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x20794cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_207950:
    // 0x207950: 0xc05cf7c  jal         func_173DF0
label_207954:
    if (ctx->pc == 0x207954u) {
        ctx->pc = 0x207958u;
        goto label_207958;
    }
    ctx->pc = 0x207950u;
    SET_GPR_U32(ctx, 31, 0x207958u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207950u, 0x207958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207958u;
label_207958:
    // 0x207958: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x207958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
label_20795c:
    // 0x20795c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20795cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207960:
    // 0x207960: 0x0  nop
    ctx->pc = 0x207960u;
    // NOP
label_207964:
    // 0x207964: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207968:
    // 0x207968: 0x0  nop
    ctx->pc = 0x207968u;
    // NOP
label_20796c:
    // 0x20796c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_207970:
    if (ctx->pc == 0x207970u) {
        ctx->pc = 0x207974u;
        goto label_207974;
    }
    ctx->pc = 0x20796Cu;
    {
        const bool branch_taken_0x20796c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20796c) {
            ctx->pc = 0x2079E0u;
            goto label_2079e0;
        }
    }
    ctx->pc = 0x207974u;
label_207974:
    // 0x207974: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207978:
    // 0x207978: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x207978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_20797c:
    // 0x20797c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20797cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_207980:
    // 0x207980: 0xc067588  jal         func_19D620
label_207984:
    if (ctx->pc == 0x207984u) {
        ctx->pc = 0x207988u;
        goto label_207988;
    }
    ctx->pc = 0x207980u;
    SET_GPR_U32(ctx, 31, 0x207988u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x207980u, 0x207988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207988u;
label_207988:
    // 0x207988: 0x3c054662  lui         $a1, 0x4662
    ctx->pc = 0x207988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18018 << 16));
label_20798c:
    // 0x20798c: 0x34a49000  ori         $a0, $a1, 0x9000
    ctx->pc = 0x20798cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
label_207990:
    // 0x207990: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x207990u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207994:
    // 0x207994: 0x0  nop
    ctx->pc = 0x207994u;
    // NOP
label_207998:
    // 0x207998: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20799c:
    // 0x20799c: 0x0  nop
    ctx->pc = 0x20799cu;
    // NOP
label_2079a0:
    // 0x2079a0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_2079a4:
    if (ctx->pc == 0x2079A4u) {
        ctx->pc = 0x2079A8u;
        goto label_2079a8;
    }
    ctx->pc = 0x2079A0u;
    {
        const bool branch_taken_0x2079a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2079a0) {
            ctx->pc = 0x2079E0u;
            goto label_2079e0;
        }
    }
    ctx->pc = 0x2079A8u;
label_2079a8:
    // 0x2079a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2079a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2079ac:
    // 0x2079ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2079acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2079b0:
    // 0x2079b0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2079b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2079b4:
    // 0x2079b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2079b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2079b8:
    // 0x2079b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2079b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2079bc:
    // 0x2079bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2079bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2079c0:
    // 0x2079c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2079c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2079c4:
    // 0x2079c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2079c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2079c8:
    // 0x2079c8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2079c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2079cc:
    // 0x2079cc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2079ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_2079d0:
    // 0x2079d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2079d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2079d4:
    // 0x2079d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2079d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2079d8:
    // 0x2079d8: 0x1000000d  b           . + 4 + (0xD << 2)
label_2079dc:
    if (ctx->pc == 0x2079DCu) {
        ctx->pc = 0x2079E0u;
        goto label_2079e0;
    }
    ctx->pc = 0x2079D8u;
    {
        const bool branch_taken_0x2079d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079d8) {
            ctx->pc = 0x207A10u;
            goto label_207a10;
        }
    }
    ctx->pc = 0x2079E0u;
label_2079e0:
    // 0x2079e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2079e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2079e4:
    // 0x2079e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2079e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2079e8:
    // 0x2079e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2079e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2079ec:
    // 0x2079ec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2079ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2079f0:
    // 0x2079f0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2079f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2079f4:
    // 0x2079f4: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x2079f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_2079f8:
    // 0x2079f8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2079f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2079fc:
    // 0x2079fc: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x2079fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_207a00:
    // 0x207a00: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x207a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207a04:
    // 0x207a04: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x207a04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_207a08:
    // 0x207a08: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x207a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_207a0c:
    // 0x207a0c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x207a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_207a10:
    // 0x207a10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x207a10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_207a14:
    // 0x207a14: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x207a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_207a18:
    // 0x207a18: 0x3e00008  jr          $ra
label_207a1c:
    if (ctx->pc == 0x207A1Cu) {
        ctx->pc = 0x207A20u;
        goto label_fallthrough_0x207a18;
    }
    ctx->pc = 0x207A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x207a18:
    ctx->pc = 0x207A20u;
}
