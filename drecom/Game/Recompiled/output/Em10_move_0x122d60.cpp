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

// Function: Em10_move
// Address: 0x122d60 - 0x12354c
void Em10_move_0x122d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_move_0x122d60");
#endif

    switch (ctx->pc) {
        case 0x122d60u: goto label_122d60;
        case 0x122d64u: goto label_122d64;
        case 0x122d68u: goto label_122d68;
        case 0x122d6cu: goto label_122d6c;
        case 0x122d70u: goto label_122d70;
        case 0x122d74u: goto label_122d74;
        case 0x122d78u: goto label_122d78;
        case 0x122d7cu: goto label_122d7c;
        case 0x122d80u: goto label_122d80;
        case 0x122d84u: goto label_122d84;
        case 0x122d88u: goto label_122d88;
        case 0x122d8cu: goto label_122d8c;
        case 0x122d90u: goto label_122d90;
        case 0x122d94u: goto label_122d94;
        case 0x122d98u: goto label_122d98;
        case 0x122d9cu: goto label_122d9c;
        case 0x122da0u: goto label_122da0;
        case 0x122da4u: goto label_122da4;
        case 0x122da8u: goto label_122da8;
        case 0x122dacu: goto label_122dac;
        case 0x122db0u: goto label_122db0;
        case 0x122db4u: goto label_122db4;
        case 0x122db8u: goto label_122db8;
        case 0x122dbcu: goto label_122dbc;
        case 0x122dc0u: goto label_122dc0;
        case 0x122dc4u: goto label_122dc4;
        case 0x122dc8u: goto label_122dc8;
        case 0x122dccu: goto label_122dcc;
        case 0x122dd0u: goto label_122dd0;
        case 0x122dd4u: goto label_122dd4;
        case 0x122dd8u: goto label_122dd8;
        case 0x122ddcu: goto label_122ddc;
        case 0x122de0u: goto label_122de0;
        case 0x122de4u: goto label_122de4;
        case 0x122de8u: goto label_122de8;
        case 0x122decu: goto label_122dec;
        case 0x122df0u: goto label_122df0;
        case 0x122df4u: goto label_122df4;
        case 0x122df8u: goto label_122df8;
        case 0x122dfcu: goto label_122dfc;
        case 0x122e00u: goto label_122e00;
        case 0x122e04u: goto label_122e04;
        case 0x122e08u: goto label_122e08;
        case 0x122e0cu: goto label_122e0c;
        case 0x122e10u: goto label_122e10;
        case 0x122e14u: goto label_122e14;
        case 0x122e18u: goto label_122e18;
        case 0x122e1cu: goto label_122e1c;
        case 0x122e20u: goto label_122e20;
        case 0x122e24u: goto label_122e24;
        case 0x122e28u: goto label_122e28;
        case 0x122e2cu: goto label_122e2c;
        case 0x122e30u: goto label_122e30;
        case 0x122e34u: goto label_122e34;
        case 0x122e38u: goto label_122e38;
        case 0x122e3cu: goto label_122e3c;
        case 0x122e40u: goto label_122e40;
        case 0x122e44u: goto label_122e44;
        case 0x122e48u: goto label_122e48;
        case 0x122e4cu: goto label_122e4c;
        case 0x122e50u: goto label_122e50;
        case 0x122e54u: goto label_122e54;
        case 0x122e58u: goto label_122e58;
        case 0x122e5cu: goto label_122e5c;
        case 0x122e60u: goto label_122e60;
        case 0x122e64u: goto label_122e64;
        case 0x122e68u: goto label_122e68;
        case 0x122e6cu: goto label_122e6c;
        case 0x122e70u: goto label_122e70;
        case 0x122e74u: goto label_122e74;
        case 0x122e78u: goto label_122e78;
        case 0x122e7cu: goto label_122e7c;
        case 0x122e80u: goto label_122e80;
        case 0x122e84u: goto label_122e84;
        case 0x122e88u: goto label_122e88;
        case 0x122e8cu: goto label_122e8c;
        case 0x122e90u: goto label_122e90;
        case 0x122e94u: goto label_122e94;
        case 0x122e98u: goto label_122e98;
        case 0x122e9cu: goto label_122e9c;
        case 0x122ea0u: goto label_122ea0;
        case 0x122ea4u: goto label_122ea4;
        case 0x122ea8u: goto label_122ea8;
        case 0x122eacu: goto label_122eac;
        case 0x122eb0u: goto label_122eb0;
        case 0x122eb4u: goto label_122eb4;
        case 0x122eb8u: goto label_122eb8;
        case 0x122ebcu: goto label_122ebc;
        case 0x122ec0u: goto label_122ec0;
        case 0x122ec4u: goto label_122ec4;
        case 0x122ec8u: goto label_122ec8;
        case 0x122eccu: goto label_122ecc;
        case 0x122ed0u: goto label_122ed0;
        case 0x122ed4u: goto label_122ed4;
        case 0x122ed8u: goto label_122ed8;
        case 0x122edcu: goto label_122edc;
        case 0x122ee0u: goto label_122ee0;
        case 0x122ee4u: goto label_122ee4;
        case 0x122ee8u: goto label_122ee8;
        case 0x122eecu: goto label_122eec;
        case 0x122ef0u: goto label_122ef0;
        case 0x122ef4u: goto label_122ef4;
        case 0x122ef8u: goto label_122ef8;
        case 0x122efcu: goto label_122efc;
        case 0x122f00u: goto label_122f00;
        case 0x122f04u: goto label_122f04;
        case 0x122f08u: goto label_122f08;
        case 0x122f0cu: goto label_122f0c;
        case 0x122f10u: goto label_122f10;
        case 0x122f14u: goto label_122f14;
        case 0x122f18u: goto label_122f18;
        case 0x122f1cu: goto label_122f1c;
        case 0x122f20u: goto label_122f20;
        case 0x122f24u: goto label_122f24;
        case 0x122f28u: goto label_122f28;
        case 0x122f2cu: goto label_122f2c;
        case 0x122f30u: goto label_122f30;
        case 0x122f34u: goto label_122f34;
        case 0x122f38u: goto label_122f38;
        case 0x122f3cu: goto label_122f3c;
        case 0x122f40u: goto label_122f40;
        case 0x122f44u: goto label_122f44;
        case 0x122f48u: goto label_122f48;
        case 0x122f4cu: goto label_122f4c;
        case 0x122f50u: goto label_122f50;
        case 0x122f54u: goto label_122f54;
        case 0x122f58u: goto label_122f58;
        case 0x122f5cu: goto label_122f5c;
        case 0x122f60u: goto label_122f60;
        case 0x122f64u: goto label_122f64;
        case 0x122f68u: goto label_122f68;
        case 0x122f6cu: goto label_122f6c;
        case 0x122f70u: goto label_122f70;
        case 0x122f74u: goto label_122f74;
        case 0x122f78u: goto label_122f78;
        case 0x122f7cu: goto label_122f7c;
        case 0x122f80u: goto label_122f80;
        case 0x122f84u: goto label_122f84;
        case 0x122f88u: goto label_122f88;
        case 0x122f8cu: goto label_122f8c;
        case 0x122f90u: goto label_122f90;
        case 0x122f94u: goto label_122f94;
        case 0x122f98u: goto label_122f98;
        case 0x122f9cu: goto label_122f9c;
        case 0x122fa0u: goto label_122fa0;
        case 0x122fa4u: goto label_122fa4;
        case 0x122fa8u: goto label_122fa8;
        case 0x122facu: goto label_122fac;
        case 0x122fb0u: goto label_122fb0;
        case 0x122fb4u: goto label_122fb4;
        case 0x122fb8u: goto label_122fb8;
        case 0x122fbcu: goto label_122fbc;
        case 0x122fc0u: goto label_122fc0;
        case 0x122fc4u: goto label_122fc4;
        case 0x122fc8u: goto label_122fc8;
        case 0x122fccu: goto label_122fcc;
        case 0x122fd0u: goto label_122fd0;
        case 0x122fd4u: goto label_122fd4;
        case 0x122fd8u: goto label_122fd8;
        case 0x122fdcu: goto label_122fdc;
        case 0x122fe0u: goto label_122fe0;
        case 0x122fe4u: goto label_122fe4;
        case 0x122fe8u: goto label_122fe8;
        case 0x122fecu: goto label_122fec;
        case 0x122ff0u: goto label_122ff0;
        case 0x122ff4u: goto label_122ff4;
        case 0x122ff8u: goto label_122ff8;
        case 0x122ffcu: goto label_122ffc;
        case 0x123000u: goto label_123000;
        case 0x123004u: goto label_123004;
        case 0x123008u: goto label_123008;
        case 0x12300cu: goto label_12300c;
        case 0x123010u: goto label_123010;
        case 0x123014u: goto label_123014;
        case 0x123018u: goto label_123018;
        case 0x12301cu: goto label_12301c;
        case 0x123020u: goto label_123020;
        case 0x123024u: goto label_123024;
        case 0x123028u: goto label_123028;
        case 0x12302cu: goto label_12302c;
        case 0x123030u: goto label_123030;
        case 0x123034u: goto label_123034;
        case 0x123038u: goto label_123038;
        case 0x12303cu: goto label_12303c;
        case 0x123040u: goto label_123040;
        case 0x123044u: goto label_123044;
        case 0x123048u: goto label_123048;
        case 0x12304cu: goto label_12304c;
        case 0x123050u: goto label_123050;
        case 0x123054u: goto label_123054;
        case 0x123058u: goto label_123058;
        case 0x12305cu: goto label_12305c;
        case 0x123060u: goto label_123060;
        case 0x123064u: goto label_123064;
        case 0x123068u: goto label_123068;
        case 0x12306cu: goto label_12306c;
        case 0x123070u: goto label_123070;
        case 0x123074u: goto label_123074;
        case 0x123078u: goto label_123078;
        case 0x12307cu: goto label_12307c;
        case 0x123080u: goto label_123080;
        case 0x123084u: goto label_123084;
        case 0x123088u: goto label_123088;
        case 0x12308cu: goto label_12308c;
        case 0x123090u: goto label_123090;
        case 0x123094u: goto label_123094;
        case 0x123098u: goto label_123098;
        case 0x12309cu: goto label_12309c;
        case 0x1230a0u: goto label_1230a0;
        case 0x1230a4u: goto label_1230a4;
        case 0x1230a8u: goto label_1230a8;
        case 0x1230acu: goto label_1230ac;
        case 0x1230b0u: goto label_1230b0;
        case 0x1230b4u: goto label_1230b4;
        case 0x1230b8u: goto label_1230b8;
        case 0x1230bcu: goto label_1230bc;
        case 0x1230c0u: goto label_1230c0;
        case 0x1230c4u: goto label_1230c4;
        case 0x1230c8u: goto label_1230c8;
        case 0x1230ccu: goto label_1230cc;
        case 0x1230d0u: goto label_1230d0;
        case 0x1230d4u: goto label_1230d4;
        case 0x1230d8u: goto label_1230d8;
        case 0x1230dcu: goto label_1230dc;
        case 0x1230e0u: goto label_1230e0;
        case 0x1230e4u: goto label_1230e4;
        case 0x1230e8u: goto label_1230e8;
        case 0x1230ecu: goto label_1230ec;
        case 0x1230f0u: goto label_1230f0;
        case 0x1230f4u: goto label_1230f4;
        case 0x1230f8u: goto label_1230f8;
        case 0x1230fcu: goto label_1230fc;
        case 0x123100u: goto label_123100;
        case 0x123104u: goto label_123104;
        case 0x123108u: goto label_123108;
        case 0x12310cu: goto label_12310c;
        case 0x123110u: goto label_123110;
        case 0x123114u: goto label_123114;
        case 0x123118u: goto label_123118;
        case 0x12311cu: goto label_12311c;
        case 0x123120u: goto label_123120;
        case 0x123124u: goto label_123124;
        case 0x123128u: goto label_123128;
        case 0x12312cu: goto label_12312c;
        case 0x123130u: goto label_123130;
        case 0x123134u: goto label_123134;
        case 0x123138u: goto label_123138;
        case 0x12313cu: goto label_12313c;
        case 0x123140u: goto label_123140;
        case 0x123144u: goto label_123144;
        case 0x123148u: goto label_123148;
        case 0x12314cu: goto label_12314c;
        case 0x123150u: goto label_123150;
        case 0x123154u: goto label_123154;
        case 0x123158u: goto label_123158;
        case 0x12315cu: goto label_12315c;
        case 0x123160u: goto label_123160;
        case 0x123164u: goto label_123164;
        case 0x123168u: goto label_123168;
        case 0x12316cu: goto label_12316c;
        case 0x123170u: goto label_123170;
        case 0x123174u: goto label_123174;
        case 0x123178u: goto label_123178;
        case 0x12317cu: goto label_12317c;
        case 0x123180u: goto label_123180;
        case 0x123184u: goto label_123184;
        case 0x123188u: goto label_123188;
        case 0x12318cu: goto label_12318c;
        case 0x123190u: goto label_123190;
        case 0x123194u: goto label_123194;
        case 0x123198u: goto label_123198;
        case 0x12319cu: goto label_12319c;
        case 0x1231a0u: goto label_1231a0;
        case 0x1231a4u: goto label_1231a4;
        case 0x1231a8u: goto label_1231a8;
        case 0x1231acu: goto label_1231ac;
        case 0x1231b0u: goto label_1231b0;
        case 0x1231b4u: goto label_1231b4;
        case 0x1231b8u: goto label_1231b8;
        case 0x1231bcu: goto label_1231bc;
        case 0x1231c0u: goto label_1231c0;
        case 0x1231c4u: goto label_1231c4;
        case 0x1231c8u: goto label_1231c8;
        case 0x1231ccu: goto label_1231cc;
        case 0x1231d0u: goto label_1231d0;
        case 0x1231d4u: goto label_1231d4;
        case 0x1231d8u: goto label_1231d8;
        case 0x1231dcu: goto label_1231dc;
        case 0x1231e0u: goto label_1231e0;
        case 0x1231e4u: goto label_1231e4;
        case 0x1231e8u: goto label_1231e8;
        case 0x1231ecu: goto label_1231ec;
        case 0x1231f0u: goto label_1231f0;
        case 0x1231f4u: goto label_1231f4;
        case 0x1231f8u: goto label_1231f8;
        case 0x1231fcu: goto label_1231fc;
        case 0x123200u: goto label_123200;
        case 0x123204u: goto label_123204;
        case 0x123208u: goto label_123208;
        case 0x12320cu: goto label_12320c;
        case 0x123210u: goto label_123210;
        case 0x123214u: goto label_123214;
        case 0x123218u: goto label_123218;
        case 0x12321cu: goto label_12321c;
        case 0x123220u: goto label_123220;
        case 0x123224u: goto label_123224;
        case 0x123228u: goto label_123228;
        case 0x12322cu: goto label_12322c;
        case 0x123230u: goto label_123230;
        case 0x123234u: goto label_123234;
        case 0x123238u: goto label_123238;
        case 0x12323cu: goto label_12323c;
        case 0x123240u: goto label_123240;
        case 0x123244u: goto label_123244;
        case 0x123248u: goto label_123248;
        case 0x12324cu: goto label_12324c;
        case 0x123250u: goto label_123250;
        case 0x123254u: goto label_123254;
        case 0x123258u: goto label_123258;
        case 0x12325cu: goto label_12325c;
        case 0x123260u: goto label_123260;
        case 0x123264u: goto label_123264;
        case 0x123268u: goto label_123268;
        case 0x12326cu: goto label_12326c;
        case 0x123270u: goto label_123270;
        case 0x123274u: goto label_123274;
        case 0x123278u: goto label_123278;
        case 0x12327cu: goto label_12327c;
        case 0x123280u: goto label_123280;
        case 0x123284u: goto label_123284;
        case 0x123288u: goto label_123288;
        case 0x12328cu: goto label_12328c;
        case 0x123290u: goto label_123290;
        case 0x123294u: goto label_123294;
        case 0x123298u: goto label_123298;
        case 0x12329cu: goto label_12329c;
        case 0x1232a0u: goto label_1232a0;
        case 0x1232a4u: goto label_1232a4;
        case 0x1232a8u: goto label_1232a8;
        case 0x1232acu: goto label_1232ac;
        case 0x1232b0u: goto label_1232b0;
        case 0x1232b4u: goto label_1232b4;
        case 0x1232b8u: goto label_1232b8;
        case 0x1232bcu: goto label_1232bc;
        case 0x1232c0u: goto label_1232c0;
        case 0x1232c4u: goto label_1232c4;
        case 0x1232c8u: goto label_1232c8;
        case 0x1232ccu: goto label_1232cc;
        case 0x1232d0u: goto label_1232d0;
        case 0x1232d4u: goto label_1232d4;
        case 0x1232d8u: goto label_1232d8;
        case 0x1232dcu: goto label_1232dc;
        case 0x1232e0u: goto label_1232e0;
        case 0x1232e4u: goto label_1232e4;
        case 0x1232e8u: goto label_1232e8;
        case 0x1232ecu: goto label_1232ec;
        case 0x1232f0u: goto label_1232f0;
        case 0x1232f4u: goto label_1232f4;
        case 0x1232f8u: goto label_1232f8;
        case 0x1232fcu: goto label_1232fc;
        case 0x123300u: goto label_123300;
        case 0x123304u: goto label_123304;
        case 0x123308u: goto label_123308;
        case 0x12330cu: goto label_12330c;
        case 0x123310u: goto label_123310;
        case 0x123314u: goto label_123314;
        case 0x123318u: goto label_123318;
        case 0x12331cu: goto label_12331c;
        case 0x123320u: goto label_123320;
        case 0x123324u: goto label_123324;
        case 0x123328u: goto label_123328;
        case 0x12332cu: goto label_12332c;
        case 0x123330u: goto label_123330;
        case 0x123334u: goto label_123334;
        case 0x123338u: goto label_123338;
        case 0x12333cu: goto label_12333c;
        case 0x123340u: goto label_123340;
        case 0x123344u: goto label_123344;
        case 0x123348u: goto label_123348;
        case 0x12334cu: goto label_12334c;
        case 0x123350u: goto label_123350;
        case 0x123354u: goto label_123354;
        case 0x123358u: goto label_123358;
        case 0x12335cu: goto label_12335c;
        case 0x123360u: goto label_123360;
        case 0x123364u: goto label_123364;
        case 0x123368u: goto label_123368;
        case 0x12336cu: goto label_12336c;
        case 0x123370u: goto label_123370;
        case 0x123374u: goto label_123374;
        case 0x123378u: goto label_123378;
        case 0x12337cu: goto label_12337c;
        case 0x123380u: goto label_123380;
        case 0x123384u: goto label_123384;
        case 0x123388u: goto label_123388;
        case 0x12338cu: goto label_12338c;
        case 0x123390u: goto label_123390;
        case 0x123394u: goto label_123394;
        case 0x123398u: goto label_123398;
        case 0x12339cu: goto label_12339c;
        case 0x1233a0u: goto label_1233a0;
        case 0x1233a4u: goto label_1233a4;
        case 0x1233a8u: goto label_1233a8;
        case 0x1233acu: goto label_1233ac;
        case 0x1233b0u: goto label_1233b0;
        case 0x1233b4u: goto label_1233b4;
        case 0x1233b8u: goto label_1233b8;
        case 0x1233bcu: goto label_1233bc;
        case 0x1233c0u: goto label_1233c0;
        case 0x1233c4u: goto label_1233c4;
        case 0x1233c8u: goto label_1233c8;
        case 0x1233ccu: goto label_1233cc;
        case 0x1233d0u: goto label_1233d0;
        case 0x1233d4u: goto label_1233d4;
        case 0x1233d8u: goto label_1233d8;
        case 0x1233dcu: goto label_1233dc;
        case 0x1233e0u: goto label_1233e0;
        case 0x1233e4u: goto label_1233e4;
        case 0x1233e8u: goto label_1233e8;
        case 0x1233ecu: goto label_1233ec;
        case 0x1233f0u: goto label_1233f0;
        case 0x1233f4u: goto label_1233f4;
        case 0x1233f8u: goto label_1233f8;
        case 0x1233fcu: goto label_1233fc;
        case 0x123400u: goto label_123400;
        case 0x123404u: goto label_123404;
        case 0x123408u: goto label_123408;
        case 0x12340cu: goto label_12340c;
        case 0x123410u: goto label_123410;
        case 0x123414u: goto label_123414;
        case 0x123418u: goto label_123418;
        case 0x12341cu: goto label_12341c;
        case 0x123420u: goto label_123420;
        case 0x123424u: goto label_123424;
        case 0x123428u: goto label_123428;
        case 0x12342cu: goto label_12342c;
        case 0x123430u: goto label_123430;
        case 0x123434u: goto label_123434;
        case 0x123438u: goto label_123438;
        case 0x12343cu: goto label_12343c;
        case 0x123440u: goto label_123440;
        case 0x123444u: goto label_123444;
        case 0x123448u: goto label_123448;
        case 0x12344cu: goto label_12344c;
        case 0x123450u: goto label_123450;
        case 0x123454u: goto label_123454;
        case 0x123458u: goto label_123458;
        case 0x12345cu: goto label_12345c;
        case 0x123460u: goto label_123460;
        case 0x123464u: goto label_123464;
        case 0x123468u: goto label_123468;
        case 0x12346cu: goto label_12346c;
        case 0x123470u: goto label_123470;
        case 0x123474u: goto label_123474;
        case 0x123478u: goto label_123478;
        case 0x12347cu: goto label_12347c;
        case 0x123480u: goto label_123480;
        case 0x123484u: goto label_123484;
        case 0x123488u: goto label_123488;
        case 0x12348cu: goto label_12348c;
        case 0x123490u: goto label_123490;
        case 0x123494u: goto label_123494;
        case 0x123498u: goto label_123498;
        case 0x12349cu: goto label_12349c;
        case 0x1234a0u: goto label_1234a0;
        case 0x1234a4u: goto label_1234a4;
        case 0x1234a8u: goto label_1234a8;
        case 0x1234acu: goto label_1234ac;
        case 0x1234b0u: goto label_1234b0;
        case 0x1234b4u: goto label_1234b4;
        case 0x1234b8u: goto label_1234b8;
        case 0x1234bcu: goto label_1234bc;
        case 0x1234c0u: goto label_1234c0;
        case 0x1234c4u: goto label_1234c4;
        case 0x1234c8u: goto label_1234c8;
        case 0x1234ccu: goto label_1234cc;
        case 0x1234d0u: goto label_1234d0;
        case 0x1234d4u: goto label_1234d4;
        case 0x1234d8u: goto label_1234d8;
        case 0x1234dcu: goto label_1234dc;
        case 0x1234e0u: goto label_1234e0;
        case 0x1234e4u: goto label_1234e4;
        case 0x1234e8u: goto label_1234e8;
        case 0x1234ecu: goto label_1234ec;
        case 0x1234f0u: goto label_1234f0;
        case 0x1234f4u: goto label_1234f4;
        case 0x1234f8u: goto label_1234f8;
        case 0x1234fcu: goto label_1234fc;
        case 0x123500u: goto label_123500;
        case 0x123504u: goto label_123504;
        case 0x123508u: goto label_123508;
        case 0x12350cu: goto label_12350c;
        case 0x123510u: goto label_123510;
        case 0x123514u: goto label_123514;
        case 0x123518u: goto label_123518;
        case 0x12351cu: goto label_12351c;
        case 0x123520u: goto label_123520;
        case 0x123524u: goto label_123524;
        case 0x123528u: goto label_123528;
        case 0x12352cu: goto label_12352c;
        case 0x123530u: goto label_123530;
        case 0x123534u: goto label_123534;
        case 0x123538u: goto label_123538;
        case 0x12353cu: goto label_12353c;
        case 0x123540u: goto label_123540;
        case 0x123544u: goto label_123544;
        case 0x123548u: goto label_123548;
        default: break;
    }

    ctx->pc = 0x122d60u;

label_122d60:
    // 0x122d60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x122d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_122d64:
    // 0x122d64: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x122d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_122d68:
    // 0x122d68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x122d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_122d6c:
    // 0x122d6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x122d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_122d70:
    // 0x122d70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x122d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_122d74:
    // 0x122d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_122d78:
    // 0x122d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x122d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_122d7c:
    // 0x122d7c: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x122d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
label_122d80:
    // 0x122d80: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x122d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122d84:
    // 0x122d84: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x122d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
label_122d88:
    // 0x122d88: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x122d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122d8c:
    // 0x122d8c: 0x24731330  addiu       $s3, $v1, 0x1330
    ctx->pc = 0x122d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_122d90:
    // 0x122d90: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x122d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_122d94:
    // 0x122d94: 0x8c346838  lw          $s4, 0x6838($at)
    ctx->pc = 0x122d94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26680)));
label_122d98:
    // 0x122d98: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122d9c:
    // 0x122d9c: 0x16840026  bne         $s4, $a0, . + 4 + (0x26 << 2)
label_122da0:
    if (ctx->pc == 0x122DA0u) {
        ctx->pc = 0x122DA4u;
        goto label_122da4;
    }
    ctx->pc = 0x122D9Cu;
    {
        const bool branch_taken_0x122d9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        if (branch_taken_0x122d9c) {
            ctx->pc = 0x122E38u;
            goto label_122e38;
        }
    }
    ctx->pc = 0x122DA4u;
label_122da4:
    // 0x122da4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x122da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_122da8:
    // 0x122da8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x122da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_122dac:
    // 0x122dac: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_122db0:
    if (ctx->pc == 0x122DB0u) {
        ctx->pc = 0x122DB4u;
        goto label_122db4;
    }
    ctx->pc = 0x122DACu;
    {
        const bool branch_taken_0x122dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122dac) {
            ctx->pc = 0x122E38u;
            goto label_122e38;
        }
    }
    ctx->pc = 0x122DB4u;
label_122db4:
    // 0x122db4: 0xa3808090  sb          $zero, -0x7F70($gp)
    ctx->pc = 0x122db4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934672), (uint8_t)GPR_U32(ctx, 0));
label_122db8:
    // 0x122db8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122dbc:
    // 0x122dbc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x122dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_122dc0:
    // 0x122dc0: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x122dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_122dc4:
    // 0x122dc4: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x122dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
label_122dc8:
    // 0x122dc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122dcc:
    // 0x122dcc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x122dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_122dd0:
    // 0x122dd0: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x122dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_122dd4:
    // 0x122dd4: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x122dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_122dd8:
    // 0x122dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122ddc:
    // 0x122ddc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x122ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_122de0:
    // 0x122de0: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x122de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_122de4:
    // 0x122de4: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x122de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_122de8:
    // 0x122de8: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x122de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_122dec:
    // 0x122dec: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x122decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_122df0:
    // 0x122df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x122df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122df4:
    // 0x122df4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x122df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_122df8:
    // 0x122df8: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x122df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_122dfc:
    // 0x122dfc: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x122dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_122e00:
    // 0x122e00: 0x3c11c974  lui         $s1, 0xC974
    ctx->pc = 0x122e00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51572 << 16));
label_122e04:
    // 0x122e04: 0x36222400  ori         $v0, $s1, 0x2400
    ctx->pc = 0x122e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)9216);
label_122e08:
    // 0x122e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x122e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122e0c:
    // 0x122e0c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x122e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_122e10:
    // 0x122e10: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x122e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_122e14:
    // 0x122e14: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x122e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_122e18:
    // 0x122e18: 0x3c10c974  lui         $s0, 0xC974
    ctx->pc = 0x122e18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51572 << 16));
label_122e1c:
    // 0x122e1c: 0x36022400  ori         $v0, $s0, 0x2400
    ctx->pc = 0x122e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)9216);
label_122e20:
    // 0x122e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x122e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122e24:
    // 0x122e24: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x122e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_122e28:
    // 0x122e28: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x122e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_122e2c:
    // 0x122e2c: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x122e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
label_122e30:
    // 0x122e30: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x122e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_122e34:
    // 0x122e34: 0xac206838  sw          $zero, 0x6838($at)
    ctx->pc = 0x122e34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26680), GPR_U32(ctx, 0));
label_122e38:
    // 0x122e38: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122e3c:
    // 0x122e3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x122e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_122e40:
    // 0x122e40: 0x3c026ff7  lui         $v0, 0x6FF7
    ctx->pc = 0x122e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28663 << 16));
label_122e44:
    // 0x122e44: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x122e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
label_122e48:
    // 0x122e48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x122e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_122e4c:
    // 0x122e4c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x122e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_122e50:
    // 0x122e50: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x122e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_122e54:
    // 0x122e54: 0x2402ff7b  addiu       $v0, $zero, -0x85
    ctx->pc = 0x122e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967163));
label_122e58:
    // 0x122e58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x122e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_122e5c:
    // 0x122e5c: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x122e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_122e60:
    // 0x122e60: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122e64:
    // 0x122e64: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x122e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
label_122e68:
    // 0x122e68: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x122e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_122e6c:
    // 0x122e6c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x122e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_122e70:
    // 0x122e70: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x122e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
label_122e74:
    // 0x122e74: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122e78:
    // 0x122e78: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x122e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
label_122e7c:
    // 0x122e7c: 0x3c02e7ff  lui         $v0, 0xE7FF
    ctx->pc = 0x122e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59391 << 16));
label_122e80:
    // 0x122e80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x122e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_122e84:
    // 0x122e84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x122e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_122e88:
    // 0x122e88: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x122e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
label_122e8c:
    // 0x122e8c: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x122e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_122e90:
    // 0x122e90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_122e94:
    if (ctx->pc == 0x122E94u) {
        ctx->pc = 0x122E98u;
        goto label_122e98;
    }
    ctx->pc = 0x122E90u;
    {
        const bool branch_taken_0x122e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122e90) {
            ctx->pc = 0x122EA4u;
            goto label_122ea4;
        }
    }
    ctx->pc = 0x122E98u;
label_122e98:
    // 0x122e98: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x122e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_122e9c:
    // 0x122e9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x122e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_122ea0:
    // 0x122ea0: 0xa6620092  sh          $v0, 0x92($s3)
    ctx->pc = 0x122ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 2));
label_122ea4:
    // 0x122ea4: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x122ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
label_122ea8:
    // 0x122ea8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x122ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_122eac:
    // 0x122eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x122eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122eb0:
    // 0x122eb0: 0x0  nop
    ctx->pc = 0x122eb0u;
    // NOP
label_122eb4:
    // 0x122eb4: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x122eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
label_122eb8:
    // 0x122eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122ebc:
    // 0x122ebc: 0x0  nop
    ctx->pc = 0x122ebcu;
    // NOP
label_122ec0:
    // 0x122ec0: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x122ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_122ec4:
    // 0x122ec4: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x122ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
label_122ec8:
    // 0x122ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x122ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122ecc:
    // 0x122ecc: 0x0  nop
    ctx->pc = 0x122eccu;
    // NOP
label_122ed0:
    // 0x122ed0: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x122ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_122ed4:
    // 0x122ed4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122ed8:
    // 0x122ed8: 0x0  nop
    ctx->pc = 0x122ed8u;
    // NOP
label_122edc:
    // 0x122edc: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x122edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_122ee0:
    // 0x122ee0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x122ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_122ee4:
    // 0x122ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x122ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122ee8:
    // 0x122ee8: 0x0  nop
    ctx->pc = 0x122ee8u;
    // NOP
label_122eec:
    // 0x122eec: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x122eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_122ef0:
    // 0x122ef0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122ef4:
    // 0x122ef4: 0xc04d3c0  jal         func_134F00
label_122ef8:
    if (ctx->pc == 0x122EF8u) {
        ctx->pc = 0x122EFCu;
        goto label_122efc;
    }
    ctx->pc = 0x122EF4u;
    SET_GPR_U32(ctx, 31, 0x122EFCu);
    ctx->pc = 0x134F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134F00u, 0x122EF4u, 0x122EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EFCu;
label_122efc:
    // 0x122efc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f00:
    // 0x122f00: 0xc04d098  jal         func_134260
label_122f04:
    if (ctx->pc == 0x122F04u) {
        ctx->pc = 0x122F08u;
        goto label_122f08;
    }
    ctx->pc = 0x122F00u;
    SET_GPR_U32(ctx, 31, 0x122F08u);
    ctx->pc = 0x134260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134260u, 0x122F00u, 0x122F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F08u;
label_122f08:
    // 0x122f08: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f0c:
    // 0x122f0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x122f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_122f10:
    // 0x122f10: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x122f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_122f14:
    // 0x122f14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x122f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_122f18:
    // 0x122f18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_122f1c:
    if (ctx->pc == 0x122F1Cu) {
        ctx->pc = 0x122F20u;
        goto label_122f20;
    }
    ctx->pc = 0x122F18u;
    {
        const bool branch_taken_0x122f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122f18) {
            ctx->pc = 0x122F40u;
            goto label_122f40;
        }
    }
    ctx->pc = 0x122F20u;
label_122f20:
    // 0x122f20: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x122f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_122f24:
    // 0x122f24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f28:
    // 0x122f28: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x122f28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
label_122f2c:
    // 0x122f2c: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x122f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_122f30:
    // 0x122f30: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f34:
    // 0x122f34: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x122f34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
label_122f38:
    // 0x122f38: 0x10000007  b           . + 4 + (0x7 << 2)
label_122f3c:
    if (ctx->pc == 0x122F3Cu) {
        ctx->pc = 0x122F40u;
        goto label_122f40;
    }
    ctx->pc = 0x122F38u;
    {
        const bool branch_taken_0x122f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122f38) {
            ctx->pc = 0x122F58u;
            goto label_122f58;
        }
    }
    ctx->pc = 0x122F40u;
label_122f40:
    // 0x122f40: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x122f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_122f44:
    // 0x122f44: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f48:
    // 0x122f48: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x122f48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
label_122f4c:
    // 0x122f4c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_122f50:
    // 0x122f50: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f54:
    // 0x122f54: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x122f54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
label_122f58:
    // 0x122f58: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f5c:
    // 0x122f5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x122f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f60:
    // 0x122f60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x122f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_122f64:
    // 0x122f64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x122f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_122f68:
    // 0x122f68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x122f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_122f6c:
    // 0x122f6c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x122f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_122f70:
    // 0x122f70: 0x24424ef0  addiu       $v0, $v0, 0x4EF0
    ctx->pc = 0x122f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20208));
label_122f74:
    // 0x122f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x122f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_122f78:
    // 0x122f78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122f7c:
    // 0x122f7c: 0x40f809  jalr        $v0
label_122f80:
    if (ctx->pc == 0x122F80u) {
        ctx->pc = 0x122F84u;
        goto label_122f84;
    }
    ctx->pc = 0x122F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122F84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122F7Cu, 0x122F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122F84u;
label_122f84:
    // 0x122f84: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f88:
    // 0x122f88: 0xc04d414  jal         func_135050
label_122f8c:
    if (ctx->pc == 0x122F8Cu) {
        ctx->pc = 0x122F90u;
        goto label_122f90;
    }
    ctx->pc = 0x122F88u;
    SET_GPR_U32(ctx, 31, 0x122F90u);
    ctx->pc = 0x135050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135050u, 0x122F88u, 0x122F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F90u;
label_122f90:
    // 0x122f90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122f94:
    // 0x122f94: 0xc04d808  jal         func_136020
label_122f98:
    if (ctx->pc == 0x122F98u) {
        ctx->pc = 0x122F9Cu;
        goto label_122f9c;
    }
    ctx->pc = 0x122F94u;
    SET_GPR_U32(ctx, 31, 0x122F9Cu);
    ctx->pc = 0x136020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136020u, 0x122F94u, 0x122F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F9Cu;
label_122f9c:
    // 0x122f9c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fa0:
    // 0x122fa0: 0xc04da7c  jal         func_1369F0
label_122fa4:
    if (ctx->pc == 0x122FA4u) {
        ctx->pc = 0x122FA8u;
        goto label_122fa8;
    }
    ctx->pc = 0x122FA0u;
    SET_GPR_U32(ctx, 31, 0x122FA8u);
    ctx->pc = 0x1369F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369F0u, 0x122FA0u, 0x122FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FA8u;
label_122fa8:
    // 0x122fa8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fac:
    // 0x122fac: 0xc04daf0  jal         func_136BC0
label_122fb0:
    if (ctx->pc == 0x122FB0u) {
        ctx->pc = 0x122FB4u;
        goto label_122fb4;
    }
    ctx->pc = 0x122FACu;
    SET_GPR_U32(ctx, 31, 0x122FB4u);
    ctx->pc = 0x136BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136BC0u, 0x122FACu, 0x122FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FB4u;
label_122fb4:
    // 0x122fb4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fb8:
    // 0x122fb8: 0xc04dd20  jal         func_137480
label_122fbc:
    if (ctx->pc == 0x122FBCu) {
        ctx->pc = 0x122FC0u;
        goto label_122fc0;
    }
    ctx->pc = 0x122FB8u;
    SET_GPR_U32(ctx, 31, 0x122FC0u);
    ctx->pc = 0x137480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137480u, 0x122FB8u, 0x122FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FC0u;
label_122fc0:
    // 0x122fc0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fc4:
    // 0x122fc4: 0xc04e4ac  jal         func_1392B0
label_122fc8:
    if (ctx->pc == 0x122FC8u) {
        ctx->pc = 0x122FCCu;
        goto label_122fcc;
    }
    ctx->pc = 0x122FC4u;
    SET_GPR_U32(ctx, 31, 0x122FCCu);
    ctx->pc = 0x1392B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1392B0u, 0x122FC4u, 0x122FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FCCu;
label_122fcc:
    // 0x122fcc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x122fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fd0:
    // 0x122fd0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x122fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_122fd4:
    // 0x122fd4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x122fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_122fd8:
    // 0x122fd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x122fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_122fdc:
    // 0x122fdc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_122fe0:
    if (ctx->pc == 0x122FE0u) {
        ctx->pc = 0x122FE4u;
        goto label_122fe4;
    }
    ctx->pc = 0x122FDCu;
    {
        const bool branch_taken_0x122fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x122fdc) {
            ctx->pc = 0x123050u;
            goto label_123050;
        }
    }
    ctx->pc = 0x122FE4u;
label_122fe4:
    // 0x122fe4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x122fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_122fe8:
    // 0x122fe8: 0xc0874e8  jal         func_21D3A0
label_122fec:
    if (ctx->pc == 0x122FECu) {
        ctx->pc = 0x122FF0u;
        goto label_122ff0;
    }
    ctx->pc = 0x122FE8u;
    SET_GPR_U32(ctx, 31, 0x122FF0u);
    ctx->pc = 0x21D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3A0u, 0x122FE8u, 0x122FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FF0u;
label_122ff0:
    // 0x122ff0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x122ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_122ff4:
    // 0x122ff4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x122ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_122ff8:
    // 0x122ff8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x122ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_122ffc:
    // 0x122ffc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_123000:
    if (ctx->pc == 0x123000u) {
        ctx->pc = 0x123004u;
        goto label_123004;
    }
    ctx->pc = 0x122FFCu;
    {
        const bool branch_taken_0x122ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122ffc) {
            ctx->pc = 0x123038u;
            goto label_123038;
        }
    }
    ctx->pc = 0x123004u;
label_123004:
    // 0x123004: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x123004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123008:
    // 0x123008: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x123008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
label_12300c:
    // 0x12300c: 0x3c03e3ff  lui         $v1, 0xE3FF
    ctx->pc = 0x12300cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58367 << 16));
label_123010:
    // 0x123010: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x123010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_123014:
    // 0x123014: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x123014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_123018:
    // 0x123018: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x123018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
label_12301c:
    // 0x12301c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12301cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123020:
    // 0x123020: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x123020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
label_123024:
    // 0x123024: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x123024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_123028:
    // 0x123028: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x123028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_12302c:
    // 0x12302c: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12302cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
label_123030:
    // 0x123030: 0x10000007  b           . + 4 + (0x7 << 2)
label_123034:
    if (ctx->pc == 0x123034u) {
        ctx->pc = 0x123038u;
        goto label_123038;
    }
    ctx->pc = 0x123030u;
    {
        const bool branch_taken_0x123030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123030) {
            ctx->pc = 0x123050u;
            goto label_123050;
        }
    }
    ctx->pc = 0x123038u;
label_123038:
    // 0x123038: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x123038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12303c:
    // 0x12303c: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12303cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
label_123040:
    // 0x123040: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x123040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_123044:
    // 0x123044: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x123044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_123048:
    // 0x123048: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x123048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_12304c:
    // 0x12304c: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12304cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
label_123050:
    // 0x123050: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x123050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
label_123054:
    // 0x123054: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x123054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946656)));
label_123058:
    // 0x123058: 0x2c630384  sltiu       $v1, $v1, 0x384
    ctx->pc = 0x123058u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)900) ? 1 : 0);
label_12305c:
    // 0x12305c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_123060:
    if (ctx->pc == 0x123060u) {
        ctx->pc = 0x123064u;
        goto label_123064;
    }
    ctx->pc = 0x12305Cu;
    {
        const bool branch_taken_0x12305c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12305c) {
            ctx->pc = 0x1230D4u;
            goto label_1230d4;
        }
    }
    ctx->pc = 0x123064u;
label_123064:
    // 0x123064: 0x24040f00  addiu       $a0, $zero, 0xF00
    ctx->pc = 0x123064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
label_123068:
    // 0x123068: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x123068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12306c:
    // 0x12306c: 0xa464122c  sh          $a0, 0x122C($v1)
    ctx->pc = 0x12306cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4652), (uint16_t)GPR_U32(ctx, 4));
label_123070:
    // 0x123070: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x123070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123074:
    // 0x123074: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x123074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_123078:
    // 0x123078: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x123078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12307c:
    // 0x12307c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12307cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_123080:
    // 0x123080: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
label_123084:
    if (ctx->pc == 0x123084u) {
        ctx->pc = 0x123088u;
        goto label_123088;
    }
    ctx->pc = 0x123080u;
    {
        const bool branch_taken_0x123080 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x123080) {
            ctx->pc = 0x1230D4u;
            goto label_1230d4;
        }
    }
    ctx->pc = 0x123088u;
label_123088:
    // 0x123088: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x123088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12308c:
    // 0x12308c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x12308cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_123090:
    // 0x123090: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x123090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_123094:
    // 0x123094: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_123098:
    if (ctx->pc == 0x123098u) {
        ctx->pc = 0x12309Cu;
        goto label_12309c;
    }
    ctx->pc = 0x123094u;
    {
        const bool branch_taken_0x123094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123094) {
            ctx->pc = 0x1230D4u;
            goto label_1230d4;
        }
    }
    ctx->pc = 0x12309Cu;
label_12309c:
    // 0x12309c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1230a0:
    // 0x1230a0: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1230a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
label_1230a4:
    // 0x1230a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1230a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1230a8:
    // 0x1230a8: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1230a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1230ac:
    // 0x1230ac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1230acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1230b0:
    // 0x1230b0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1230b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_1230b4:
    // 0x1230b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1230b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1230b8:
    // 0x1230b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1230b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1230bc:
    // 0x1230bc: 0x28612711  slti        $at, $v1, 0x2711
    ctx->pc = 0x1230bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10001) ? 1 : 0);
label_1230c0:
    // 0x1230c0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1230c4:
    if (ctx->pc == 0x1230C4u) {
        ctx->pc = 0x1230C8u;
        goto label_1230c8;
    }
    ctx->pc = 0x1230C0u;
    {
        const bool branch_taken_0x1230c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1230c0) {
            ctx->pc = 0x1230D4u;
            goto label_1230d4;
        }
    }
    ctx->pc = 0x1230C8u;
label_1230c8:
    // 0x1230c8: 0x24042710  addiu       $a0, $zero, 0x2710
    ctx->pc = 0x1230c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1230cc:
    // 0x1230cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1230ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1230d0:
    // 0x1230d0: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1230d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
label_1230d4:
    // 0x1230d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1230d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1230d8:
    // 0x1230d8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1230d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1230dc:
    // 0x1230dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1230dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1230e0:
    // 0x1230e0: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x1230e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_1230e4:
    // 0x1230e4: 0x146000ba  bnez        $v1, . + 4 + (0xBA << 2)
label_1230e8:
    if (ctx->pc == 0x1230E8u) {
        ctx->pc = 0x1230ECu;
        goto label_1230ec;
    }
    ctx->pc = 0x1230E4u;
    {
        const bool branch_taken_0x1230e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1230e4) {
            ctx->pc = 0x1233D0u;
            goto label_1233d0;
        }
    }
    ctx->pc = 0x1230ECu;
label_1230ec:
    // 0x1230ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1230ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1230f0:
    // 0x1230f0: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1230f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1230f4:
    // 0x1230f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1230f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1230f8:
    // 0x1230f8: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x1230f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
label_1230fc:
    // 0x1230fc: 0x102000b4  beqz        $at, . + 4 + (0xB4 << 2)
label_123100:
    if (ctx->pc == 0x123100u) {
        ctx->pc = 0x123104u;
        goto label_123104;
    }
    ctx->pc = 0x1230FCu;
    {
        const bool branch_taken_0x1230fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1230fc) {
            ctx->pc = 0x1233D0u;
            goto label_1233d0;
        }
    }
    ctx->pc = 0x123104u;
label_123104:
    // 0x123104: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x123104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_123108:
    // 0x123108: 0xc0675a4  jal         func_19D690
label_12310c:
    if (ctx->pc == 0x12310Cu) {
        ctx->pc = 0x123110u;
        goto label_123110;
    }
    ctx->pc = 0x123108u;
    SET_GPR_U32(ctx, 31, 0x123110u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x123108u, 0x123110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123110u;
label_123110:
    // 0x123110: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x123110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_123114:
    // 0x123114: 0xc0675a4  jal         func_19D690
label_123118:
    if (ctx->pc == 0x123118u) {
        ctx->pc = 0x12311Cu;
        goto label_12311c;
    }
    ctx->pc = 0x123114u;
    SET_GPR_U32(ctx, 31, 0x12311Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x123114u, 0x12311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12311Cu;
label_12311c:
    // 0x12311c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x12311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123120:
    // 0x123120: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x123120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_123124:
    // 0x123124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123128:
    // 0x123128: 0x0  nop
    ctx->pc = 0x123128u;
    // NOP
label_12312c:
    // 0x12312c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12312cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_123130:
    // 0x123130: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x123130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_123134:
    // 0x123134: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x123134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_123138:
    // 0x123138: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x123138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_12313c:
    // 0x12313c: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x12313cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_123140:
    // 0x123140: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x123140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_123144:
    // 0x123144: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_123148:
    if (ctx->pc == 0x123148u) {
        ctx->pc = 0x12314Cu;
        goto label_12314c;
    }
    ctx->pc = 0x123144u;
    {
        const bool branch_taken_0x123144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x123144) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x12314Cu;
label_12314c:
    // 0x12314c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x12314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_123150:
    // 0x123150: 0x2443e170  addiu       $v1, $v0, -0x1E90
    ctx->pc = 0x123150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959472));
label_123154:
    // 0x123154: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x123154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_123158:
    // 0x123158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12315c:
    // 0x12315c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123160:
    // 0x123160: 0x400008  jr          $v0
label_123164:
    if (ctx->pc == 0x123164u) {
        ctx->pc = 0x123168u;
        goto label_123168;
    }
    ctx->pc = 0x123160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123160u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x123168u;
label_123168:
    // 0x123168: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x123168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_12316c:
    // 0x12316c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12316cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123170:
    // 0x123170: 0x0  nop
    ctx->pc = 0x123170u;
    // NOP
label_123174:
    // 0x123174: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x123174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_123178:
    // 0x123178: 0x10000059  b           . + 4 + (0x59 << 2)
label_12317c:
    if (ctx->pc == 0x12317Cu) {
        ctx->pc = 0x123180u;
        goto label_123180;
    }
    ctx->pc = 0x123178u;
    {
        const bool branch_taken_0x123178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123178) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x123180u;
label_123180:
    // 0x123180: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x123180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_123184:
    // 0x123184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123188:
    // 0x123188: 0x0  nop
    ctx->pc = 0x123188u;
    // NOP
label_12318c:
    // 0x12318c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x12318cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_123190:
    // 0x123190: 0x10000053  b           . + 4 + (0x53 << 2)
label_123194:
    if (ctx->pc == 0x123194u) {
        ctx->pc = 0x123198u;
        goto label_123198;
    }
    ctx->pc = 0x123190u;
    {
        const bool branch_taken_0x123190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123190) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x123198u;
label_123198:
    // 0x123198: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x123198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_12319c:
    // 0x12319c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12319cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1231a0:
    // 0x1231a0: 0x0  nop
    ctx->pc = 0x1231a0u;
    // NOP
label_1231a4:
    // 0x1231a4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1231a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1231a8:
    // 0x1231a8: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1231ac:
    if (ctx->pc == 0x1231ACu) {
        ctx->pc = 0x1231B0u;
        goto label_1231b0;
    }
    ctx->pc = 0x1231A8u;
    {
        const bool branch_taken_0x1231a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231a8) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x1231B0u;
label_1231b0:
    // 0x1231b0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1231b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1231b4:
    // 0x1231b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1231b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1231b8:
    // 0x1231b8: 0x0  nop
    ctx->pc = 0x1231b8u;
    // NOP
label_1231bc:
    // 0x1231bc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1231bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1231c0:
    // 0x1231c0: 0x10000047  b           . + 4 + (0x47 << 2)
label_1231c4:
    if (ctx->pc == 0x1231C4u) {
        ctx->pc = 0x1231C8u;
        goto label_1231c8;
    }
    ctx->pc = 0x1231C0u;
    {
        const bool branch_taken_0x1231c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231c0) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x1231C8u;
label_1231c8:
    // 0x1231c8: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1231c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1231cc:
    // 0x1231cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1231ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1231d0:
    // 0x1231d0: 0x0  nop
    ctx->pc = 0x1231d0u;
    // NOP
label_1231d4:
    // 0x1231d4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1231d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1231d8:
    // 0x1231d8: 0x10000041  b           . + 4 + (0x41 << 2)
label_1231dc:
    if (ctx->pc == 0x1231DCu) {
        ctx->pc = 0x1231E0u;
        goto label_1231e0;
    }
    ctx->pc = 0x1231D8u;
    {
        const bool branch_taken_0x1231d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231d8) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x1231E0u;
label_1231e0:
    // 0x1231e0: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x1231e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
label_1231e4:
    // 0x1231e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1231e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1231e8:
    // 0x1231e8: 0x0  nop
    ctx->pc = 0x1231e8u;
    // NOP
label_1231ec:
    // 0x1231ec: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1231ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1231f0:
    // 0x1231f0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1231f4:
    if (ctx->pc == 0x1231F4u) {
        ctx->pc = 0x1231F8u;
        goto label_1231f8;
    }
    ctx->pc = 0x1231F0u;
    {
        const bool branch_taken_0x1231f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231f0) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x1231F8u;
label_1231f8:
    // 0x1231f8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1231f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1231fc:
    // 0x1231fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1231fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123200:
    // 0x123200: 0x0  nop
    ctx->pc = 0x123200u;
    // NOP
label_123204:
    // 0x123204: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x123204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_123208:
    // 0x123208: 0x10000035  b           . + 4 + (0x35 << 2)
label_12320c:
    if (ctx->pc == 0x12320Cu) {
        ctx->pc = 0x123210u;
        goto label_123210;
    }
    ctx->pc = 0x123208u;
    {
        const bool branch_taken_0x123208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123208) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x123210u;
label_123210:
    // 0x123210: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x123210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
label_123214:
    // 0x123214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123218:
    // 0x123218: 0x0  nop
    ctx->pc = 0x123218u;
    // NOP
label_12321c:
    // 0x12321c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x12321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_123220:
    // 0x123220: 0x1000002f  b           . + 4 + (0x2F << 2)
label_123224:
    if (ctx->pc == 0x123224u) {
        ctx->pc = 0x123228u;
        goto label_123228;
    }
    ctx->pc = 0x123220u;
    {
        const bool branch_taken_0x123220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123220) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x123228u;
label_123228:
    // 0x123228: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x123228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_12322c:
    // 0x12322c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12322cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123230:
    // 0x123230: 0x0  nop
    ctx->pc = 0x123230u;
    // NOP
label_123234:
    // 0x123234: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x123234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_123238:
    // 0x123238: 0x10000029  b           . + 4 + (0x29 << 2)
label_12323c:
    if (ctx->pc == 0x12323Cu) {
        ctx->pc = 0x123240u;
        goto label_123240;
    }
    ctx->pc = 0x123238u;
    {
        const bool branch_taken_0x123238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123238) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x123240u;
label_123240:
    // 0x123240: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x123240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
label_123244:
    // 0x123244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123248:
    // 0x123248: 0x0  nop
    ctx->pc = 0x123248u;
    // NOP
label_12324c:
    // 0x12324c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x12324cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_123250:
    // 0x123250: 0x10000023  b           . + 4 + (0x23 << 2)
label_123254:
    if (ctx->pc == 0x123254u) {
        ctx->pc = 0x123258u;
        goto label_123258;
    }
    ctx->pc = 0x123250u;
    {
        const bool branch_taken_0x123250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123250) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x123258u;
label_123258:
    // 0x123258: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x123258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_12325c:
    // 0x12325c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12325cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123260:
    // 0x123260: 0x0  nop
    ctx->pc = 0x123260u;
    // NOP
label_123264:
    // 0x123264: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x123264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_123268:
    // 0x123268: 0x1000001d  b           . + 4 + (0x1D << 2)
label_12326c:
    if (ctx->pc == 0x12326Cu) {
        ctx->pc = 0x123270u;
        goto label_123270;
    }
    ctx->pc = 0x123268u;
    {
        const bool branch_taken_0x123268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123268) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x123270u;
label_123270:
    // 0x123270: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x123270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
label_123274:
    // 0x123274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123278:
    // 0x123278: 0x0  nop
    ctx->pc = 0x123278u;
    // NOP
label_12327c:
    // 0x12327c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x12327cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_123280:
    // 0x123280: 0x10000017  b           . + 4 + (0x17 << 2)
label_123284:
    if (ctx->pc == 0x123284u) {
        ctx->pc = 0x123288u;
        goto label_123288;
    }
    ctx->pc = 0x123280u;
    {
        const bool branch_taken_0x123280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123280) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x123288u;
label_123288:
    // 0x123288: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x123288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_12328c:
    // 0x12328c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12328cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123290:
    // 0x123290: 0x0  nop
    ctx->pc = 0x123290u;
    // NOP
label_123294:
    // 0x123294: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x123294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_123298:
    // 0x123298: 0x10000011  b           . + 4 + (0x11 << 2)
label_12329c:
    if (ctx->pc == 0x12329Cu) {
        ctx->pc = 0x1232A0u;
        goto label_1232a0;
    }
    ctx->pc = 0x123298u;
    {
        const bool branch_taken_0x123298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123298) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x1232A0u;
label_1232a0:
    // 0x1232a0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1232a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1232a4:
    // 0x1232a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1232a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1232a8:
    // 0x1232a8: 0x0  nop
    ctx->pc = 0x1232a8u;
    // NOP
label_1232ac:
    // 0x1232ac: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1232acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1232b0:
    // 0x1232b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1232b4:
    if (ctx->pc == 0x1232B4u) {
        ctx->pc = 0x1232B8u;
        goto label_1232b8;
    }
    ctx->pc = 0x1232B0u;
    {
        const bool branch_taken_0x1232b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1232b0) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x1232B8u;
label_1232b8:
    // 0x1232b8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1232b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1232bc:
    // 0x1232bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1232bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1232c0:
    // 0x1232c0: 0x0  nop
    ctx->pc = 0x1232c0u;
    // NOP
label_1232c4:
    // 0x1232c4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1232c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1232c8:
    // 0x1232c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1232cc:
    if (ctx->pc == 0x1232CCu) {
        ctx->pc = 0x1232D0u;
        goto label_1232d0;
    }
    ctx->pc = 0x1232C8u;
    {
        const bool branch_taken_0x1232c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1232c8) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x1232D0u;
label_1232d0:
    // 0x1232d0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1232d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1232d4:
    // 0x1232d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1232d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1232d8:
    // 0x1232d8: 0x0  nop
    ctx->pc = 0x1232d8u;
    // NOP
label_1232dc:
    // 0x1232dc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1232dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1232e0:
    // 0x1232e0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1232e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1232e4:
    // 0x1232e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1232e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1232e8:
    // 0x1232e8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1232e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1232ec:
    // 0x1232ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1232ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1232f0:
    // 0x1232f0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1232f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1232f4:
    // 0x1232f4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1232f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1232f8:
    // 0x1232f8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1232f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1232fc:
    // 0x1232fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1232fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_123300:
    // 0x123300: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x123300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_123304:
    // 0x123304: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x123304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_123308:
    // 0x123308: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x123308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12330c:
    // 0x12330c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12330cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123310:
    // 0x123310: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x123310u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123314:
    // 0x123314: 0xc0862f8  jal         func_218BE0
label_123318:
    if (ctx->pc == 0x123318u) {
        ctx->pc = 0x12331Cu;
        goto label_12331c;
    }
    ctx->pc = 0x123314u;
    SET_GPR_U32(ctx, 31, 0x12331Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x123314u, 0x12331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12331Cu;
label_12331c:
    // 0x12331c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x12331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_123320:
    // 0x123320: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x123320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_123324:
    // 0x123324: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x123324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_123328:
    // 0x123328: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x123328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12332c:
    // 0x12332c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x12332cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_123330:
    // 0x123330: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x123330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_123334:
    // 0x123334: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123338:
    // 0x123338: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x123338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12333c:
    // 0x12333c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_123340:
    // 0x123340: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x123340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_123344:
    // 0x123344: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x123344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_123348:
    // 0x123348: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x123348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12334c:
    // 0x12334c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x12334cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123350:
    // 0x123350: 0xc0862f8  jal         func_218BE0
label_123354:
    if (ctx->pc == 0x123354u) {
        ctx->pc = 0x123358u;
        goto label_123358;
    }
    ctx->pc = 0x123350u;
    SET_GPR_U32(ctx, 31, 0x123358u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x123350u, 0x123358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123358u;
label_123358:
    // 0x123358: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x123358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_12335c:
    // 0x12335c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12335cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_123360:
    // 0x123360: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x123360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_123364:
    // 0x123364: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x123364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_123368:
    // 0x123368: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x123368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_12336c:
    // 0x12336c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x12336cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_123370:
    // 0x123370: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123374:
    // 0x123374: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x123374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_123378:
    // 0x123378: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x123378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12337c:
    // 0x12337c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x12337cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_123380:
    // 0x123380: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x123380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_123384:
    // 0x123384: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x123384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123388:
    // 0x123388: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x123388u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12338c:
    // 0x12338c: 0xc0862f8  jal         func_218BE0
label_123390:
    if (ctx->pc == 0x123390u) {
        ctx->pc = 0x123394u;
        goto label_123394;
    }
    ctx->pc = 0x12338Cu;
    SET_GPR_U32(ctx, 31, 0x123394u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x12338Cu, 0x123394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123394u;
label_123394:
    // 0x123394: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x123394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_123398:
    // 0x123398: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x123398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_12339c:
    // 0x12339c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x12339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1233a0:
    // 0x1233a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1233a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1233a4:
    // 0x1233a4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1233a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1233a8:
    // 0x1233a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1233a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1233ac:
    // 0x1233ac: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1233acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1233b0:
    // 0x1233b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1233b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1233b4:
    // 0x1233b4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1233b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1233b8:
    // 0x1233b8: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1233b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1233bc:
    // 0x1233bc: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1233bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1233c0:
    // 0x1233c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1233c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1233c4:
    // 0x1233c4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1233c4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1233c8:
    // 0x1233c8: 0xc0862f8  jal         func_218BE0
label_1233cc:
    if (ctx->pc == 0x1233CCu) {
        ctx->pc = 0x1233D0u;
        goto label_1233d0;
    }
    ctx->pc = 0x1233C8u;
    SET_GPR_U32(ctx, 31, 0x1233D0u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x1233C8u, 0x1233D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233D0u;
label_1233d0:
    // 0x1233d0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1233d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1233d4:
    // 0x1233d4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1233d8:
    if (ctx->pc == 0x1233D8u) {
        ctx->pc = 0x1233DCu;
        goto label_1233dc;
    }
    ctx->pc = 0x1233D4u;
    {
        const bool branch_taken_0x1233d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1233d4) {
            ctx->pc = 0x123420u;
            goto label_123420;
        }
    }
    ctx->pc = 0x1233DCu;
label_1233dc:
    // 0x1233dc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1233dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1233e0:
    // 0x1233e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1233e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1233e4:
    // 0x1233e4: 0x24424ec8  addiu       $v0, $v0, 0x4EC8
    ctx->pc = 0x1233e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20168));
label_1233e8:
    // 0x1233e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1233e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1233ec:
    // 0x1233ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1233ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1233f0:
    // 0x1233f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1233f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1233f4:
    // 0x1233f4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1233f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1233f8:
    // 0x1233f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1233f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1233fc:
    // 0x1233fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1233fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_123400:
    // 0x123400: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_123404:
    // 0x123404: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123408:
    // 0x123408: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12340c:
    // 0x12340c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x12340cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_123410:
    // 0x123410: 0xc079140  jal         func_1E4500
label_123414:
    if (ctx->pc == 0x123414u) {
        ctx->pc = 0x123418u;
        goto label_123418;
    }
    ctx->pc = 0x123410u;
    SET_GPR_U32(ctx, 31, 0x123418u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x123410u, 0x123418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123418u;
label_123418:
    // 0x123418: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12341c:
    // 0x12341c: 0x0  nop
    ctx->pc = 0x12341cu;
    // NOP
label_123420:
    // 0x123420: 0x2a03000b  slti        $v1, $s0, 0xB
    ctx->pc = 0x123420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_123424:
    // 0x123424: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_123428:
    if (ctx->pc == 0x123428u) {
        ctx->pc = 0x12342Cu;
        goto label_12342c;
    }
    ctx->pc = 0x123424u;
    {
        const bool branch_taken_0x123424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123424) {
            ctx->pc = 0x1233DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1233dc;
        }
    }
    ctx->pc = 0x12342Cu;
label_12342c:
    // 0x12342c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123430:
    // 0x123430: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x123430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123434:
    // 0x123434: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_123438:
    // 0x123438: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x123438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_12343c:
    // 0x12343c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_123440:
    if (ctx->pc == 0x123440u) {
        ctx->pc = 0x123444u;
        goto label_123444;
    }
    ctx->pc = 0x12343Cu;
    {
        const bool branch_taken_0x12343c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12343c) {
            ctx->pc = 0x1234A4u;
            goto label_1234a4;
        }
    }
    ctx->pc = 0x123444u;
label_123444:
    // 0x123444: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123444u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123448:
    // 0x123448: 0x10000011  b           . + 4 + (0x11 << 2)
label_12344c:
    if (ctx->pc == 0x12344Cu) {
        ctx->pc = 0x123450u;
        goto label_123450;
    }
    ctx->pc = 0x123448u;
    {
        const bool branch_taken_0x123448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123448) {
            ctx->pc = 0x123490u;
            goto label_123490;
        }
    }
    ctx->pc = 0x123450u;
label_123450:
    // 0x123450: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123454:
    // 0x123454: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_123458:
    // 0x123458: 0x24424ee0  addiu       $v0, $v0, 0x4EE0
    ctx->pc = 0x123458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
label_12345c:
    // 0x12345c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12345cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_123460:
    // 0x123460: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x123460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_123464:
    // 0x123464: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123468:
    // 0x123468: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x123468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_12346c:
    // 0x12346c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123470:
    // 0x123470: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_123474:
    // 0x123474: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x123474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_123478:
    // 0x123478: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12347c:
    // 0x12347c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123480:
    // 0x123480: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x123480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_123484:
    // 0x123484: 0xc079140  jal         func_1E4500
label_123488:
    if (ctx->pc == 0x123488u) {
        ctx->pc = 0x12348Cu;
        goto label_12348c;
    }
    ctx->pc = 0x123484u;
    SET_GPR_U32(ctx, 31, 0x12348Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x123484u, 0x12348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12348Cu;
label_12348c:
    // 0x12348c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12348cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_123490:
    // 0x123490: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x123490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_123494:
    // 0x123494: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_123498:
    if (ctx->pc == 0x123498u) {
        ctx->pc = 0x12349Cu;
        goto label_12349c;
    }
    ctx->pc = 0x123494u;
    {
        const bool branch_taken_0x123494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123494) {
            ctx->pc = 0x123450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123450;
        }
    }
    ctx->pc = 0x12349Cu;
label_12349c:
    // 0x12349c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1234a0:
    if (ctx->pc == 0x1234A0u) {
        ctx->pc = 0x1234A4u;
        goto label_1234a4;
    }
    ctx->pc = 0x12349Cu;
    {
        const bool branch_taken_0x12349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12349c) {
            ctx->pc = 0x123528u;
            goto label_123528;
        }
    }
    ctx->pc = 0x1234A4u;
label_1234a4:
    // 0x1234a4: 0x8e720020  lw          $s2, 0x20($s3)
    ctx->pc = 0x1234a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1234a8:
    // 0x1234a8: 0x32430008  andi        $v1, $s2, 0x8
    ctx->pc = 0x1234a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
label_1234ac:
    // 0x1234ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1234b0:
    if (ctx->pc == 0x1234B0u) {
        ctx->pc = 0x1234B4u;
        goto label_1234b4;
    }
    ctx->pc = 0x1234ACu;
    {
        const bool branch_taken_0x1234ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234ac) {
            ctx->pc = 0x1234C4u;
            goto label_1234c4;
        }
    }
    ctx->pc = 0x1234B4u;
label_1234b4:
    // 0x1234b4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1234b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1234b8:
    // 0x1234b8: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x1234b8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1234bc:
    // 0x1234bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1234c0:
    if (ctx->pc == 0x1234C0u) {
        ctx->pc = 0x1234C4u;
        goto label_1234c4;
    }
    ctx->pc = 0x1234BCu;
    {
        const bool branch_taken_0x1234bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234bc) {
            ctx->pc = 0x1234C8u;
            goto label_1234c8;
        }
    }
    ctx->pc = 0x1234C4u;
label_1234c4:
    // 0x1234c4: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1234c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1234c8:
    // 0x1234c8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1234c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1234cc:
    // 0x1234cc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1234d0:
    if (ctx->pc == 0x1234D0u) {
        ctx->pc = 0x1234D4u;
        goto label_1234d4;
    }
    ctx->pc = 0x1234CCu;
    {
        const bool branch_taken_0x1234cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234cc) {
            ctx->pc = 0x123518u;
            goto label_123518;
        }
    }
    ctx->pc = 0x1234D4u;
label_1234d4:
    // 0x1234d4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1234d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1234d8:
    // 0x1234d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1234d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1234dc:
    // 0x1234dc: 0x24424ed8  addiu       $v0, $v0, 0x4ED8
    ctx->pc = 0x1234dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20184));
label_1234e0:
    // 0x1234e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1234e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1234e4:
    // 0x1234e4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1234e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1234e8:
    // 0x1234e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1234e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1234ec:
    // 0x1234ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1234ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1234f0:
    // 0x1234f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1234f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1234f4:
    // 0x1234f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1234f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1234f8:
    // 0x1234f8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1234f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1234fc:
    // 0x1234fc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1234fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123500:
    // 0x123500: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x123500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_123504:
    // 0x123504: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x123504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_123508:
    // 0x123508: 0xc079140  jal         func_1E4500
label_12350c:
    if (ctx->pc == 0x12350Cu) {
        ctx->pc = 0x123510u;
        goto label_123510;
    }
    ctx->pc = 0x123508u;
    SET_GPR_U32(ctx, 31, 0x123510u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x123508u, 0x123510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123510u;
label_123510:
    // 0x123510: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_123514:
    // 0x123514: 0x0  nop
    ctx->pc = 0x123514u;
    // NOP
label_123518:
    // 0x123518: 0x214182a  slt         $v1, $s0, $s4
    ctx->pc = 0x123518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_12351c:
    // 0x12351c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_123520:
    if (ctx->pc == 0x123520u) {
        ctx->pc = 0x123524u;
        goto label_123524;
    }
    ctx->pc = 0x12351Cu;
    {
        const bool branch_taken_0x12351c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12351c) {
            ctx->pc = 0x1234D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1234d4;
        }
    }
    ctx->pc = 0x123524u;
label_123524:
    // 0x123524: 0x0  nop
    ctx->pc = 0x123524u;
    // NOP
label_123528:
    // 0x123528: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x123528u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12352c:
    // 0x12352c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12352cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_123530:
    // 0x123530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x123530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_123534:
    // 0x123534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x123534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_123538:
    // 0x123538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x123538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12353c:
    // 0x12353c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12353cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_123540:
    // 0x123540: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x123540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_123544:
    // 0x123544: 0x3e00008  jr          $ra
label_123548:
    if (ctx->pc == 0x123548u) {
        ctx->pc = 0x12354Cu;
        goto label_fallthrough_0x123544;
    }
    ctx->pc = 0x123544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123544:
    ctx->pc = 0x12354Cu;
}
