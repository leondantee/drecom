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

// Function: Em10_act_chk_screamer
// Address: 0x128d70 - 0x1295cc
void Em10_act_chk_screamer_0x128d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_screamer_0x128d70");
#endif

    switch (ctx->pc) {
        case 0x128d70u: goto label_128d70;
        case 0x128d74u: goto label_128d74;
        case 0x128d78u: goto label_128d78;
        case 0x128d7cu: goto label_128d7c;
        case 0x128d80u: goto label_128d80;
        case 0x128d84u: goto label_128d84;
        case 0x128d88u: goto label_128d88;
        case 0x128d8cu: goto label_128d8c;
        case 0x128d90u: goto label_128d90;
        case 0x128d94u: goto label_128d94;
        case 0x128d98u: goto label_128d98;
        case 0x128d9cu: goto label_128d9c;
        case 0x128da0u: goto label_128da0;
        case 0x128da4u: goto label_128da4;
        case 0x128da8u: goto label_128da8;
        case 0x128dacu: goto label_128dac;
        case 0x128db0u: goto label_128db0;
        case 0x128db4u: goto label_128db4;
        case 0x128db8u: goto label_128db8;
        case 0x128dbcu: goto label_128dbc;
        case 0x128dc0u: goto label_128dc0;
        case 0x128dc4u: goto label_128dc4;
        case 0x128dc8u: goto label_128dc8;
        case 0x128dccu: goto label_128dcc;
        case 0x128dd0u: goto label_128dd0;
        case 0x128dd4u: goto label_128dd4;
        case 0x128dd8u: goto label_128dd8;
        case 0x128ddcu: goto label_128ddc;
        case 0x128de0u: goto label_128de0;
        case 0x128de4u: goto label_128de4;
        case 0x128de8u: goto label_128de8;
        case 0x128decu: goto label_128dec;
        case 0x128df0u: goto label_128df0;
        case 0x128df4u: goto label_128df4;
        case 0x128df8u: goto label_128df8;
        case 0x128dfcu: goto label_128dfc;
        case 0x128e00u: goto label_128e00;
        case 0x128e04u: goto label_128e04;
        case 0x128e08u: goto label_128e08;
        case 0x128e0cu: goto label_128e0c;
        case 0x128e10u: goto label_128e10;
        case 0x128e14u: goto label_128e14;
        case 0x128e18u: goto label_128e18;
        case 0x128e1cu: goto label_128e1c;
        case 0x128e20u: goto label_128e20;
        case 0x128e24u: goto label_128e24;
        case 0x128e28u: goto label_128e28;
        case 0x128e2cu: goto label_128e2c;
        case 0x128e30u: goto label_128e30;
        case 0x128e34u: goto label_128e34;
        case 0x128e38u: goto label_128e38;
        case 0x128e3cu: goto label_128e3c;
        case 0x128e40u: goto label_128e40;
        case 0x128e44u: goto label_128e44;
        case 0x128e48u: goto label_128e48;
        case 0x128e4cu: goto label_128e4c;
        case 0x128e50u: goto label_128e50;
        case 0x128e54u: goto label_128e54;
        case 0x128e58u: goto label_128e58;
        case 0x128e5cu: goto label_128e5c;
        case 0x128e60u: goto label_128e60;
        case 0x128e64u: goto label_128e64;
        case 0x128e68u: goto label_128e68;
        case 0x128e6cu: goto label_128e6c;
        case 0x128e70u: goto label_128e70;
        case 0x128e74u: goto label_128e74;
        case 0x128e78u: goto label_128e78;
        case 0x128e7cu: goto label_128e7c;
        case 0x128e80u: goto label_128e80;
        case 0x128e84u: goto label_128e84;
        case 0x128e88u: goto label_128e88;
        case 0x128e8cu: goto label_128e8c;
        case 0x128e90u: goto label_128e90;
        case 0x128e94u: goto label_128e94;
        case 0x128e98u: goto label_128e98;
        case 0x128e9cu: goto label_128e9c;
        case 0x128ea0u: goto label_128ea0;
        case 0x128ea4u: goto label_128ea4;
        case 0x128ea8u: goto label_128ea8;
        case 0x128eacu: goto label_128eac;
        case 0x128eb0u: goto label_128eb0;
        case 0x128eb4u: goto label_128eb4;
        case 0x128eb8u: goto label_128eb8;
        case 0x128ebcu: goto label_128ebc;
        case 0x128ec0u: goto label_128ec0;
        case 0x128ec4u: goto label_128ec4;
        case 0x128ec8u: goto label_128ec8;
        case 0x128eccu: goto label_128ecc;
        case 0x128ed0u: goto label_128ed0;
        case 0x128ed4u: goto label_128ed4;
        case 0x128ed8u: goto label_128ed8;
        case 0x128edcu: goto label_128edc;
        case 0x128ee0u: goto label_128ee0;
        case 0x128ee4u: goto label_128ee4;
        case 0x128ee8u: goto label_128ee8;
        case 0x128eecu: goto label_128eec;
        case 0x128ef0u: goto label_128ef0;
        case 0x128ef4u: goto label_128ef4;
        case 0x128ef8u: goto label_128ef8;
        case 0x128efcu: goto label_128efc;
        case 0x128f00u: goto label_128f00;
        case 0x128f04u: goto label_128f04;
        case 0x128f08u: goto label_128f08;
        case 0x128f0cu: goto label_128f0c;
        case 0x128f10u: goto label_128f10;
        case 0x128f14u: goto label_128f14;
        case 0x128f18u: goto label_128f18;
        case 0x128f1cu: goto label_128f1c;
        case 0x128f20u: goto label_128f20;
        case 0x128f24u: goto label_128f24;
        case 0x128f28u: goto label_128f28;
        case 0x128f2cu: goto label_128f2c;
        case 0x128f30u: goto label_128f30;
        case 0x128f34u: goto label_128f34;
        case 0x128f38u: goto label_128f38;
        case 0x128f3cu: goto label_128f3c;
        case 0x128f40u: goto label_128f40;
        case 0x128f44u: goto label_128f44;
        case 0x128f48u: goto label_128f48;
        case 0x128f4cu: goto label_128f4c;
        case 0x128f50u: goto label_128f50;
        case 0x128f54u: goto label_128f54;
        case 0x128f58u: goto label_128f58;
        case 0x128f5cu: goto label_128f5c;
        case 0x128f60u: goto label_128f60;
        case 0x128f64u: goto label_128f64;
        case 0x128f68u: goto label_128f68;
        case 0x128f6cu: goto label_128f6c;
        case 0x128f70u: goto label_128f70;
        case 0x128f74u: goto label_128f74;
        case 0x128f78u: goto label_128f78;
        case 0x128f7cu: goto label_128f7c;
        case 0x128f80u: goto label_128f80;
        case 0x128f84u: goto label_128f84;
        case 0x128f88u: goto label_128f88;
        case 0x128f8cu: goto label_128f8c;
        case 0x128f90u: goto label_128f90;
        case 0x128f94u: goto label_128f94;
        case 0x128f98u: goto label_128f98;
        case 0x128f9cu: goto label_128f9c;
        case 0x128fa0u: goto label_128fa0;
        case 0x128fa4u: goto label_128fa4;
        case 0x128fa8u: goto label_128fa8;
        case 0x128facu: goto label_128fac;
        case 0x128fb0u: goto label_128fb0;
        case 0x128fb4u: goto label_128fb4;
        case 0x128fb8u: goto label_128fb8;
        case 0x128fbcu: goto label_128fbc;
        case 0x128fc0u: goto label_128fc0;
        case 0x128fc4u: goto label_128fc4;
        case 0x128fc8u: goto label_128fc8;
        case 0x128fccu: goto label_128fcc;
        case 0x128fd0u: goto label_128fd0;
        case 0x128fd4u: goto label_128fd4;
        case 0x128fd8u: goto label_128fd8;
        case 0x128fdcu: goto label_128fdc;
        case 0x128fe0u: goto label_128fe0;
        case 0x128fe4u: goto label_128fe4;
        case 0x128fe8u: goto label_128fe8;
        case 0x128fecu: goto label_128fec;
        case 0x128ff0u: goto label_128ff0;
        case 0x128ff4u: goto label_128ff4;
        case 0x128ff8u: goto label_128ff8;
        case 0x128ffcu: goto label_128ffc;
        case 0x129000u: goto label_129000;
        case 0x129004u: goto label_129004;
        case 0x129008u: goto label_129008;
        case 0x12900cu: goto label_12900c;
        case 0x129010u: goto label_129010;
        case 0x129014u: goto label_129014;
        case 0x129018u: goto label_129018;
        case 0x12901cu: goto label_12901c;
        case 0x129020u: goto label_129020;
        case 0x129024u: goto label_129024;
        case 0x129028u: goto label_129028;
        case 0x12902cu: goto label_12902c;
        case 0x129030u: goto label_129030;
        case 0x129034u: goto label_129034;
        case 0x129038u: goto label_129038;
        case 0x12903cu: goto label_12903c;
        case 0x129040u: goto label_129040;
        case 0x129044u: goto label_129044;
        case 0x129048u: goto label_129048;
        case 0x12904cu: goto label_12904c;
        case 0x129050u: goto label_129050;
        case 0x129054u: goto label_129054;
        case 0x129058u: goto label_129058;
        case 0x12905cu: goto label_12905c;
        case 0x129060u: goto label_129060;
        case 0x129064u: goto label_129064;
        case 0x129068u: goto label_129068;
        case 0x12906cu: goto label_12906c;
        case 0x129070u: goto label_129070;
        case 0x129074u: goto label_129074;
        case 0x129078u: goto label_129078;
        case 0x12907cu: goto label_12907c;
        case 0x129080u: goto label_129080;
        case 0x129084u: goto label_129084;
        case 0x129088u: goto label_129088;
        case 0x12908cu: goto label_12908c;
        case 0x129090u: goto label_129090;
        case 0x129094u: goto label_129094;
        case 0x129098u: goto label_129098;
        case 0x12909cu: goto label_12909c;
        case 0x1290a0u: goto label_1290a0;
        case 0x1290a4u: goto label_1290a4;
        case 0x1290a8u: goto label_1290a8;
        case 0x1290acu: goto label_1290ac;
        case 0x1290b0u: goto label_1290b0;
        case 0x1290b4u: goto label_1290b4;
        case 0x1290b8u: goto label_1290b8;
        case 0x1290bcu: goto label_1290bc;
        case 0x1290c0u: goto label_1290c0;
        case 0x1290c4u: goto label_1290c4;
        case 0x1290c8u: goto label_1290c8;
        case 0x1290ccu: goto label_1290cc;
        case 0x1290d0u: goto label_1290d0;
        case 0x1290d4u: goto label_1290d4;
        case 0x1290d8u: goto label_1290d8;
        case 0x1290dcu: goto label_1290dc;
        case 0x1290e0u: goto label_1290e0;
        case 0x1290e4u: goto label_1290e4;
        case 0x1290e8u: goto label_1290e8;
        case 0x1290ecu: goto label_1290ec;
        case 0x1290f0u: goto label_1290f0;
        case 0x1290f4u: goto label_1290f4;
        case 0x1290f8u: goto label_1290f8;
        case 0x1290fcu: goto label_1290fc;
        case 0x129100u: goto label_129100;
        case 0x129104u: goto label_129104;
        case 0x129108u: goto label_129108;
        case 0x12910cu: goto label_12910c;
        case 0x129110u: goto label_129110;
        case 0x129114u: goto label_129114;
        case 0x129118u: goto label_129118;
        case 0x12911cu: goto label_12911c;
        case 0x129120u: goto label_129120;
        case 0x129124u: goto label_129124;
        case 0x129128u: goto label_129128;
        case 0x12912cu: goto label_12912c;
        case 0x129130u: goto label_129130;
        case 0x129134u: goto label_129134;
        case 0x129138u: goto label_129138;
        case 0x12913cu: goto label_12913c;
        case 0x129140u: goto label_129140;
        case 0x129144u: goto label_129144;
        case 0x129148u: goto label_129148;
        case 0x12914cu: goto label_12914c;
        case 0x129150u: goto label_129150;
        case 0x129154u: goto label_129154;
        case 0x129158u: goto label_129158;
        case 0x12915cu: goto label_12915c;
        case 0x129160u: goto label_129160;
        case 0x129164u: goto label_129164;
        case 0x129168u: goto label_129168;
        case 0x12916cu: goto label_12916c;
        case 0x129170u: goto label_129170;
        case 0x129174u: goto label_129174;
        case 0x129178u: goto label_129178;
        case 0x12917cu: goto label_12917c;
        case 0x129180u: goto label_129180;
        case 0x129184u: goto label_129184;
        case 0x129188u: goto label_129188;
        case 0x12918cu: goto label_12918c;
        case 0x129190u: goto label_129190;
        case 0x129194u: goto label_129194;
        case 0x129198u: goto label_129198;
        case 0x12919cu: goto label_12919c;
        case 0x1291a0u: goto label_1291a0;
        case 0x1291a4u: goto label_1291a4;
        case 0x1291a8u: goto label_1291a8;
        case 0x1291acu: goto label_1291ac;
        case 0x1291b0u: goto label_1291b0;
        case 0x1291b4u: goto label_1291b4;
        case 0x1291b8u: goto label_1291b8;
        case 0x1291bcu: goto label_1291bc;
        case 0x1291c0u: goto label_1291c0;
        case 0x1291c4u: goto label_1291c4;
        case 0x1291c8u: goto label_1291c8;
        case 0x1291ccu: goto label_1291cc;
        case 0x1291d0u: goto label_1291d0;
        case 0x1291d4u: goto label_1291d4;
        case 0x1291d8u: goto label_1291d8;
        case 0x1291dcu: goto label_1291dc;
        case 0x1291e0u: goto label_1291e0;
        case 0x1291e4u: goto label_1291e4;
        case 0x1291e8u: goto label_1291e8;
        case 0x1291ecu: goto label_1291ec;
        case 0x1291f0u: goto label_1291f0;
        case 0x1291f4u: goto label_1291f4;
        case 0x1291f8u: goto label_1291f8;
        case 0x1291fcu: goto label_1291fc;
        case 0x129200u: goto label_129200;
        case 0x129204u: goto label_129204;
        case 0x129208u: goto label_129208;
        case 0x12920cu: goto label_12920c;
        case 0x129210u: goto label_129210;
        case 0x129214u: goto label_129214;
        case 0x129218u: goto label_129218;
        case 0x12921cu: goto label_12921c;
        case 0x129220u: goto label_129220;
        case 0x129224u: goto label_129224;
        case 0x129228u: goto label_129228;
        case 0x12922cu: goto label_12922c;
        case 0x129230u: goto label_129230;
        case 0x129234u: goto label_129234;
        case 0x129238u: goto label_129238;
        case 0x12923cu: goto label_12923c;
        case 0x129240u: goto label_129240;
        case 0x129244u: goto label_129244;
        case 0x129248u: goto label_129248;
        case 0x12924cu: goto label_12924c;
        case 0x129250u: goto label_129250;
        case 0x129254u: goto label_129254;
        case 0x129258u: goto label_129258;
        case 0x12925cu: goto label_12925c;
        case 0x129260u: goto label_129260;
        case 0x129264u: goto label_129264;
        case 0x129268u: goto label_129268;
        case 0x12926cu: goto label_12926c;
        case 0x129270u: goto label_129270;
        case 0x129274u: goto label_129274;
        case 0x129278u: goto label_129278;
        case 0x12927cu: goto label_12927c;
        case 0x129280u: goto label_129280;
        case 0x129284u: goto label_129284;
        case 0x129288u: goto label_129288;
        case 0x12928cu: goto label_12928c;
        case 0x129290u: goto label_129290;
        case 0x129294u: goto label_129294;
        case 0x129298u: goto label_129298;
        case 0x12929cu: goto label_12929c;
        case 0x1292a0u: goto label_1292a0;
        case 0x1292a4u: goto label_1292a4;
        case 0x1292a8u: goto label_1292a8;
        case 0x1292acu: goto label_1292ac;
        case 0x1292b0u: goto label_1292b0;
        case 0x1292b4u: goto label_1292b4;
        case 0x1292b8u: goto label_1292b8;
        case 0x1292bcu: goto label_1292bc;
        case 0x1292c0u: goto label_1292c0;
        case 0x1292c4u: goto label_1292c4;
        case 0x1292c8u: goto label_1292c8;
        case 0x1292ccu: goto label_1292cc;
        case 0x1292d0u: goto label_1292d0;
        case 0x1292d4u: goto label_1292d4;
        case 0x1292d8u: goto label_1292d8;
        case 0x1292dcu: goto label_1292dc;
        case 0x1292e0u: goto label_1292e0;
        case 0x1292e4u: goto label_1292e4;
        case 0x1292e8u: goto label_1292e8;
        case 0x1292ecu: goto label_1292ec;
        case 0x1292f0u: goto label_1292f0;
        case 0x1292f4u: goto label_1292f4;
        case 0x1292f8u: goto label_1292f8;
        case 0x1292fcu: goto label_1292fc;
        case 0x129300u: goto label_129300;
        case 0x129304u: goto label_129304;
        case 0x129308u: goto label_129308;
        case 0x12930cu: goto label_12930c;
        case 0x129310u: goto label_129310;
        case 0x129314u: goto label_129314;
        case 0x129318u: goto label_129318;
        case 0x12931cu: goto label_12931c;
        case 0x129320u: goto label_129320;
        case 0x129324u: goto label_129324;
        case 0x129328u: goto label_129328;
        case 0x12932cu: goto label_12932c;
        case 0x129330u: goto label_129330;
        case 0x129334u: goto label_129334;
        case 0x129338u: goto label_129338;
        case 0x12933cu: goto label_12933c;
        case 0x129340u: goto label_129340;
        case 0x129344u: goto label_129344;
        case 0x129348u: goto label_129348;
        case 0x12934cu: goto label_12934c;
        case 0x129350u: goto label_129350;
        case 0x129354u: goto label_129354;
        case 0x129358u: goto label_129358;
        case 0x12935cu: goto label_12935c;
        case 0x129360u: goto label_129360;
        case 0x129364u: goto label_129364;
        case 0x129368u: goto label_129368;
        case 0x12936cu: goto label_12936c;
        case 0x129370u: goto label_129370;
        case 0x129374u: goto label_129374;
        case 0x129378u: goto label_129378;
        case 0x12937cu: goto label_12937c;
        case 0x129380u: goto label_129380;
        case 0x129384u: goto label_129384;
        case 0x129388u: goto label_129388;
        case 0x12938cu: goto label_12938c;
        case 0x129390u: goto label_129390;
        case 0x129394u: goto label_129394;
        case 0x129398u: goto label_129398;
        case 0x12939cu: goto label_12939c;
        case 0x1293a0u: goto label_1293a0;
        case 0x1293a4u: goto label_1293a4;
        case 0x1293a8u: goto label_1293a8;
        case 0x1293acu: goto label_1293ac;
        case 0x1293b0u: goto label_1293b0;
        case 0x1293b4u: goto label_1293b4;
        case 0x1293b8u: goto label_1293b8;
        case 0x1293bcu: goto label_1293bc;
        case 0x1293c0u: goto label_1293c0;
        case 0x1293c4u: goto label_1293c4;
        case 0x1293c8u: goto label_1293c8;
        case 0x1293ccu: goto label_1293cc;
        case 0x1293d0u: goto label_1293d0;
        case 0x1293d4u: goto label_1293d4;
        case 0x1293d8u: goto label_1293d8;
        case 0x1293dcu: goto label_1293dc;
        case 0x1293e0u: goto label_1293e0;
        case 0x1293e4u: goto label_1293e4;
        case 0x1293e8u: goto label_1293e8;
        case 0x1293ecu: goto label_1293ec;
        case 0x1293f0u: goto label_1293f0;
        case 0x1293f4u: goto label_1293f4;
        case 0x1293f8u: goto label_1293f8;
        case 0x1293fcu: goto label_1293fc;
        case 0x129400u: goto label_129400;
        case 0x129404u: goto label_129404;
        case 0x129408u: goto label_129408;
        case 0x12940cu: goto label_12940c;
        case 0x129410u: goto label_129410;
        case 0x129414u: goto label_129414;
        case 0x129418u: goto label_129418;
        case 0x12941cu: goto label_12941c;
        case 0x129420u: goto label_129420;
        case 0x129424u: goto label_129424;
        case 0x129428u: goto label_129428;
        case 0x12942cu: goto label_12942c;
        case 0x129430u: goto label_129430;
        case 0x129434u: goto label_129434;
        case 0x129438u: goto label_129438;
        case 0x12943cu: goto label_12943c;
        case 0x129440u: goto label_129440;
        case 0x129444u: goto label_129444;
        case 0x129448u: goto label_129448;
        case 0x12944cu: goto label_12944c;
        case 0x129450u: goto label_129450;
        case 0x129454u: goto label_129454;
        case 0x129458u: goto label_129458;
        case 0x12945cu: goto label_12945c;
        case 0x129460u: goto label_129460;
        case 0x129464u: goto label_129464;
        case 0x129468u: goto label_129468;
        case 0x12946cu: goto label_12946c;
        case 0x129470u: goto label_129470;
        case 0x129474u: goto label_129474;
        case 0x129478u: goto label_129478;
        case 0x12947cu: goto label_12947c;
        case 0x129480u: goto label_129480;
        case 0x129484u: goto label_129484;
        case 0x129488u: goto label_129488;
        case 0x12948cu: goto label_12948c;
        case 0x129490u: goto label_129490;
        case 0x129494u: goto label_129494;
        case 0x129498u: goto label_129498;
        case 0x12949cu: goto label_12949c;
        case 0x1294a0u: goto label_1294a0;
        case 0x1294a4u: goto label_1294a4;
        case 0x1294a8u: goto label_1294a8;
        case 0x1294acu: goto label_1294ac;
        case 0x1294b0u: goto label_1294b0;
        case 0x1294b4u: goto label_1294b4;
        case 0x1294b8u: goto label_1294b8;
        case 0x1294bcu: goto label_1294bc;
        case 0x1294c0u: goto label_1294c0;
        case 0x1294c4u: goto label_1294c4;
        case 0x1294c8u: goto label_1294c8;
        case 0x1294ccu: goto label_1294cc;
        case 0x1294d0u: goto label_1294d0;
        case 0x1294d4u: goto label_1294d4;
        case 0x1294d8u: goto label_1294d8;
        case 0x1294dcu: goto label_1294dc;
        case 0x1294e0u: goto label_1294e0;
        case 0x1294e4u: goto label_1294e4;
        case 0x1294e8u: goto label_1294e8;
        case 0x1294ecu: goto label_1294ec;
        case 0x1294f0u: goto label_1294f0;
        case 0x1294f4u: goto label_1294f4;
        case 0x1294f8u: goto label_1294f8;
        case 0x1294fcu: goto label_1294fc;
        case 0x129500u: goto label_129500;
        case 0x129504u: goto label_129504;
        case 0x129508u: goto label_129508;
        case 0x12950cu: goto label_12950c;
        case 0x129510u: goto label_129510;
        case 0x129514u: goto label_129514;
        case 0x129518u: goto label_129518;
        case 0x12951cu: goto label_12951c;
        case 0x129520u: goto label_129520;
        case 0x129524u: goto label_129524;
        case 0x129528u: goto label_129528;
        case 0x12952cu: goto label_12952c;
        case 0x129530u: goto label_129530;
        case 0x129534u: goto label_129534;
        case 0x129538u: goto label_129538;
        case 0x12953cu: goto label_12953c;
        case 0x129540u: goto label_129540;
        case 0x129544u: goto label_129544;
        case 0x129548u: goto label_129548;
        case 0x12954cu: goto label_12954c;
        case 0x129550u: goto label_129550;
        case 0x129554u: goto label_129554;
        case 0x129558u: goto label_129558;
        case 0x12955cu: goto label_12955c;
        case 0x129560u: goto label_129560;
        case 0x129564u: goto label_129564;
        case 0x129568u: goto label_129568;
        case 0x12956cu: goto label_12956c;
        case 0x129570u: goto label_129570;
        case 0x129574u: goto label_129574;
        case 0x129578u: goto label_129578;
        case 0x12957cu: goto label_12957c;
        case 0x129580u: goto label_129580;
        case 0x129584u: goto label_129584;
        case 0x129588u: goto label_129588;
        case 0x12958cu: goto label_12958c;
        case 0x129590u: goto label_129590;
        case 0x129594u: goto label_129594;
        case 0x129598u: goto label_129598;
        case 0x12959cu: goto label_12959c;
        case 0x1295a0u: goto label_1295a0;
        case 0x1295a4u: goto label_1295a4;
        case 0x1295a8u: goto label_1295a8;
        case 0x1295acu: goto label_1295ac;
        case 0x1295b0u: goto label_1295b0;
        case 0x1295b4u: goto label_1295b4;
        case 0x1295b8u: goto label_1295b8;
        case 0x1295bcu: goto label_1295bc;
        case 0x1295c0u: goto label_1295c0;
        case 0x1295c4u: goto label_1295c4;
        case 0x1295c8u: goto label_1295c8;
        default: break;
    }

    ctx->pc = 0x128d70u;

label_128d70:
    // 0x128d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x128d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_128d74:
    // 0x128d74: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x128d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_128d78:
    // 0x128d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_128d7c:
    // 0x128d7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_128d80:
    // 0x128d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_128d84:
    // 0x128d84: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x128d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_128d88:
    // 0x128d88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d8c:
    // 0x128d8c: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x128d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_128d90:
    // 0x128d90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d94:
    // 0x128d94: 0xc05cdd8  jal         func_173760
label_128d98:
    if (ctx->pc == 0x128D98u) {
        ctx->pc = 0x128D9Cu;
        goto label_128d9c;
    }
    ctx->pc = 0x128D94u;
    SET_GPR_U32(ctx, 31, 0x128D9Cu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x128D94u, 0x128D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D9Cu;
label_128d9c:
    // 0x128d9c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x128d9cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_128da0:
    // 0x128da0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128da4:
    // 0x128da4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128da8:
    // 0x128da8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x128da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_128dac:
    // 0x128dac: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x128dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_128db0:
    // 0x128db0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x128db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_128db4:
    // 0x128db4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x128db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_128db8:
    // 0x128db8: 0xc05cc90  jal         func_173240
label_128dbc:
    if (ctx->pc == 0x128DBCu) {
        ctx->pc = 0x128DC0u;
        goto label_128dc0;
    }
    ctx->pc = 0x128DB8u;
    SET_GPR_U32(ctx, 31, 0x128DC0u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x128DB8u, 0x128DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DC0u;
label_128dc0:
    // 0x128dc0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x128dc0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_128dc4:
    // 0x128dc4: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x128dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_128dc8:
    // 0x128dc8: 0x102001f9  beqz        $at, . + 4 + (0x1F9 << 2)
label_128dcc:
    if (ctx->pc == 0x128DCCu) {
        ctx->pc = 0x128DD0u;
        goto label_128dd0;
    }
    ctx->pc = 0x128DC8u;
    {
        const bool branch_taken_0x128dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128dc8) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x128DD0u;
label_128dd0:
    // 0x128dd0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x128dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_128dd4:
    // 0x128dd4: 0x2464e3e0  addiu       $a0, $v1, -0x1C20
    ctx->pc = 0x128dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960096));
label_128dd8:
    // 0x128dd8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x128dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_128ddc:
    // 0x128ddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_128de0:
    // 0x128de0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x128de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128de4:
    // 0x128de4: 0x600008  jr          $v1
label_128de8:
    if (ctx->pc == 0x128DE8u) {
        ctx->pc = 0x128DECu;
        goto label_128dec;
    }
    ctx->pc = 0x128DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128DE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x128DECu;
label_128dec:
    // 0x128dec: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x128decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_128df0:
    // 0x128df0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x128df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_128df4:
    // 0x128df4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_128df8:
    if (ctx->pc == 0x128DF8u) {
        ctx->pc = 0x128DFCu;
        goto label_128dfc;
    }
    ctx->pc = 0x128DF4u;
    {
        const bool branch_taken_0x128df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128df4) {
            ctx->pc = 0x128E0Cu;
            goto label_128e0c;
        }
    }
    ctx->pc = 0x128DFCu;
label_128dfc:
    // 0x128dfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128e00:
    // 0x128e00: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x128e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_128e04:
    // 0x128e04: 0x106001ea  beqz        $v1, . + 4 + (0x1EA << 2)
label_128e08:
    if (ctx->pc == 0x128E08u) {
        ctx->pc = 0x128E0Cu;
        goto label_128e0c;
    }
    ctx->pc = 0x128E04u;
    {
        const bool branch_taken_0x128e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e04) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x128E0Cu;
label_128e0c:
    // 0x128e0c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x128e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_128e10:
    // 0x128e10: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_128e14:
    if (ctx->pc == 0x128E14u) {
        ctx->pc = 0x128E18u;
        goto label_128e18;
    }
    ctx->pc = 0x128E10u;
    {
        const bool branch_taken_0x128e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e10) {
            ctx->pc = 0x128E54u;
            goto label_128e54;
        }
    }
    ctx->pc = 0x128E18u;
label_128e18:
    // 0x128e18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128e1c:
    // 0x128e1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128e20:
    // 0x128e20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128e24:
    // 0x128e24: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x128e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_128e28:
    // 0x128e28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128e2c:
    // 0x128e2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128e30:
    // 0x128e30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128e34:
    // 0x128e34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128e38:
    // 0x128e38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128e3c:
    // 0x128e3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128e40:
    // 0x128e40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x128e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_128e44:
    // 0x128e44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128e48:
    // 0x128e48: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x128e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_128e4c:
    // 0x128e4c: 0x100001d8  b           . + 4 + (0x1D8 << 2)
label_128e50:
    if (ctx->pc == 0x128E50u) {
        ctx->pc = 0x128E54u;
        goto label_128e54;
    }
    ctx->pc = 0x128E4Cu;
    {
        const bool branch_taken_0x128e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e4c) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x128E54u;
label_128e54:
    // 0x128e54: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x128e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_128e58:
    // 0x128e58: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x128e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_128e5c:
    // 0x128e5c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_128e60:
    if (ctx->pc == 0x128E60u) {
        ctx->pc = 0x128E64u;
        goto label_128e64;
    }
    ctx->pc = 0x128E5Cu;
    {
        const bool branch_taken_0x128e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e5c) {
            ctx->pc = 0x128E7Cu;
            goto label_128e7c;
        }
    }
    ctx->pc = 0x128E64u;
label_128e64:
    // 0x128e64: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x128e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_128e68:
    // 0x128e68: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x128e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_128e6c:
    // 0x128e6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x128e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_128e70:
    // 0x128e70: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x128e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_128e74:
    // 0x128e74: 0x100001ce  b           . + 4 + (0x1CE << 2)
label_128e78:
    if (ctx->pc == 0x128E78u) {
        ctx->pc = 0x128E7Cu;
        goto label_128e7c;
    }
    ctx->pc = 0x128E74u;
    {
        const bool branch_taken_0x128e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e74) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x128E7Cu;
label_128e7c:
    // 0x128e7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128e80:
    // 0x128e80: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x128e80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_128e84:
    // 0x128e84: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x128e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_128e88:
    // 0x128e88: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x128e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_128e8c:
    // 0x128e8c: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
label_128e90:
    if (ctx->pc == 0x128E90u) {
        ctx->pc = 0x128E94u;
        goto label_128e94;
    }
    ctx->pc = 0x128E8Cu;
    {
        const bool branch_taken_0x128e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e8c) {
            ctx->pc = 0x129180u;
            goto label_129180;
        }
    }
    ctx->pc = 0x128E94u;
label_128e94:
    // 0x128e94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128e98:
    // 0x128e98: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128e9c:
    // 0x128e9c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x128e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_128ea0:
    // 0x128ea0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x128ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_128ea4:
    // 0x128ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128ea8:
    // 0x128ea8: 0x0  nop
    ctx->pc = 0x128ea8u;
    // NOP
label_128eac:
    // 0x128eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128eb0:
    // 0x128eb0: 0x0  nop
    ctx->pc = 0x128eb0u;
    // NOP
label_128eb4:
    // 0x128eb4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_128eb8:
    if (ctx->pc == 0x128EB8u) {
        ctx->pc = 0x128EBCu;
        goto label_128ebc;
    }
    ctx->pc = 0x128EB4u;
    {
        const bool branch_taken_0x128eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128eb4) {
            ctx->pc = 0x128F00u;
            goto label_128f00;
        }
    }
    ctx->pc = 0x128EBCu;
label_128ebc:
    // 0x128ebc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x128ebcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_128ec0:
    // 0x128ec0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_128ec4:
    if (ctx->pc == 0x128EC4u) {
        ctx->pc = 0x128EC8u;
        goto label_128ec8;
    }
    ctx->pc = 0x128EC0u;
    {
        const bool branch_taken_0x128ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128ec0) {
            ctx->pc = 0x128EF8u;
            goto label_128ef8;
        }
    }
    ctx->pc = 0x128EC8u;
label_128ec8:
    // 0x128ec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128ecc:
    // 0x128ecc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ed0:
    // 0x128ed0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128ed4:
    // 0x128ed4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x128ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_128ed8:
    // 0x128ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128edc:
    // 0x128edc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128ee0:
    // 0x128ee0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ee4:
    // 0x128ee4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128ee8:
    // 0x128ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128eec:
    // 0x128eec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128ef0:
    // 0x128ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ef4:
    // 0x128ef4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128ef8:
    // 0x128ef8: 0x100001ad  b           . + 4 + (0x1AD << 2)
label_128efc:
    if (ctx->pc == 0x128EFCu) {
        ctx->pc = 0x128F00u;
        goto label_128f00;
    }
    ctx->pc = 0x128EF8u;
    {
        const bool branch_taken_0x128ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128ef8) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x128F00u;
label_128f00:
    // 0x128f00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128f04:
    // 0x128f04: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128f08:
    // 0x128f08: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x128f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
label_128f0c:
    // 0x128f0c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x128f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_128f10:
    // 0x128f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128f14:
    // 0x128f14: 0x0  nop
    ctx->pc = 0x128f14u;
    // NOP
label_128f18:
    // 0x128f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128f1c:
    // 0x128f1c: 0x0  nop
    ctx->pc = 0x128f1cu;
    // NOP
label_128f20:
    // 0x128f20: 0x450001a3  bc1f        . + 4 + (0x1A3 << 2)
label_128f24:
    if (ctx->pc == 0x128F24u) {
        ctx->pc = 0x128F28u;
        goto label_128f28;
    }
    ctx->pc = 0x128F20u;
    {
        const bool branch_taken_0x128f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128f20) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x128F28u;
label_128f28:
    // 0x128f28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128f2c:
    // 0x128f2c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x128f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128f30:
    // 0x128f30: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_128f34:
    // 0x128f34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x128f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_128f38:
    // 0x128f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128f3c:
    // 0x128f3c: 0x0  nop
    ctx->pc = 0x128f3cu;
    // NOP
label_128f40:
    // 0x128f40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128f44:
    // 0x128f44: 0x0  nop
    ctx->pc = 0x128f44u;
    // NOP
label_128f48:
    // 0x128f48: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_128f4c:
    if (ctx->pc == 0x128F4Cu) {
        ctx->pc = 0x128F50u;
        goto label_128f50;
    }
    ctx->pc = 0x128F48u;
    {
        const bool branch_taken_0x128f48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128f48) {
            ctx->pc = 0x129020u;
            goto label_129020;
        }
    }
    ctx->pc = 0x128F50u;
label_128f50:
    // 0x128f50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_128f54:
    // 0x128f54: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_128f58:
    // 0x128f58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x128f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_128f5c:
    // 0x128f5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_128f60:
    if (ctx->pc == 0x128F60u) {
        ctx->pc = 0x128F64u;
        goto label_128f64;
    }
    ctx->pc = 0x128F5Cu;
    {
        const bool branch_taken_0x128f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128f5c) {
            ctx->pc = 0x128F74u;
            goto label_128f74;
        }
    }
    ctx->pc = 0x128F64u;
label_128f64:
    // 0x128f64: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_128f68:
    // 0x128f68: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x128f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_128f6c:
    // 0x128f6c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_128f70:
    if (ctx->pc == 0x128F70u) {
        ctx->pc = 0x128F74u;
        goto label_128f74;
    }
    ctx->pc = 0x128F6Cu;
    {
        const bool branch_taken_0x128f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f6c) {
            ctx->pc = 0x129020u;
            goto label_129020;
        }
    }
    ctx->pc = 0x128F74u;
label_128f74:
    // 0x128f74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128f78:
    // 0x128f78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128f7c:
    // 0x128f7c: 0xc05d25c  jal         func_174970
label_128f80:
    if (ctx->pc == 0x128F80u) {
        ctx->pc = 0x128F84u;
        goto label_128f84;
    }
    ctx->pc = 0x128F7Cu;
    SET_GPR_U32(ctx, 31, 0x128F84u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128F7Cu, 0x128F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F84u;
label_128f84:
    // 0x128f84: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_128f88:
    if (ctx->pc == 0x128F88u) {
        ctx->pc = 0x128F8Cu;
        goto label_128f8c;
    }
    ctx->pc = 0x128F84u;
    {
        const bool branch_taken_0x128f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f84) {
            ctx->pc = 0x129020u;
            goto label_129020;
        }
    }
    ctx->pc = 0x128F8Cu;
label_128f8c:
    // 0x128f8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128f90:
    // 0x128f90: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128f94:
    // 0x128f94: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_128f98:
    // 0x128f98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128f9c:
    // 0x128f9c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_128fa0:
    // 0x128fa0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x128fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128fa4:
    // 0x128fa4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_128fa8:
    // 0x128fa8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128fac:
    // 0x128fac: 0x0  nop
    ctx->pc = 0x128facu;
    // NOP
label_128fb0:
    // 0x128fb0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_128fb4:
    if (ctx->pc == 0x128FB4u) {
        ctx->pc = 0x128FB8u;
        goto label_128fb8;
    }
    ctx->pc = 0x128FB0u;
    {
        const bool branch_taken_0x128fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128fb0) {
            ctx->pc = 0x129020u;
            goto label_129020;
        }
    }
    ctx->pc = 0x128FB8u;
label_128fb8:
    // 0x128fb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128fbc:
    // 0x128fbc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128fc0:
    // 0x128fc0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_128fc4:
    // 0x128fc4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x128fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128fc8:
    // 0x128fc8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_128fcc:
    // 0x128fcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128fd0:
    // 0x128fd0: 0x0  nop
    ctx->pc = 0x128fd0u;
    // NOP
label_128fd4:
    // 0x128fd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_128fd8:
    // 0x128fd8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128fdc:
    // 0x128fdc: 0x0  nop
    ctx->pc = 0x128fdcu;
    // NOP
label_128fe0:
    // 0x128fe0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_128fe4:
    if (ctx->pc == 0x128FE4u) {
        ctx->pc = 0x128FE8u;
        goto label_128fe8;
    }
    ctx->pc = 0x128FE0u;
    {
        const bool branch_taken_0x128fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128fe0) {
            ctx->pc = 0x129020u;
            goto label_129020;
        }
    }
    ctx->pc = 0x128FE8u;
label_128fe8:
    // 0x128fe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128fec:
    // 0x128fec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ff0:
    // 0x128ff0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128ff4:
    // 0x128ff4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x128ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_128ff8:
    // 0x128ff8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ffc:
    // 0x128ffc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129000:
    // 0x129000: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129004:
    // 0x129004: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129008:
    // 0x129008: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12900c:
    // 0x12900c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12900cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129010:
    // 0x129010: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129014:
    // 0x129014: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129018:
    // 0x129018: 0x10000165  b           . + 4 + (0x165 << 2)
label_12901c:
    if (ctx->pc == 0x12901Cu) {
        ctx->pc = 0x129020u;
        goto label_129020;
    }
    ctx->pc = 0x129018u;
    {
        const bool branch_taken_0x129018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129018) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x129020u;
label_129020:
    // 0x129020: 0xc067694  jal         func_19DA50
label_129024:
    if (ctx->pc == 0x129024u) {
        ctx->pc = 0x129028u;
        goto label_129028;
    }
    ctx->pc = 0x129020u;
    SET_GPR_U32(ctx, 31, 0x129028u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129020u, 0x129028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129028u;
label_129028:
    // 0x129028: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12902c:
    // 0x12902c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12902cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_129030:
    // 0x129030: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_129034:
    // 0x129034: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
label_129038:
    if (ctx->pc == 0x129038u) {
        ctx->pc = 0x12903Cu;
        goto label_12903c;
    }
    ctx->pc = 0x129034u;
    {
        const bool branch_taken_0x129034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129034) {
            ctx->pc = 0x129110u;
            goto label_129110;
        }
    }
    ctx->pc = 0x12903Cu;
label_12903c:
    // 0x12903c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129040:
    // 0x129040: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
label_129044:
    if (ctx->pc == 0x129044u) {
        ctx->pc = 0x129048u;
        goto label_129048;
    }
    ctx->pc = 0x129040u;
    {
        const bool branch_taken_0x129040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129040) {
            ctx->pc = 0x129110u;
            goto label_129110;
        }
    }
    ctx->pc = 0x129048u;
label_129048:
    // 0x129048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x129048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12904c:
    // 0x12904c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_129050:
    if (ctx->pc == 0x129050u) {
        ctx->pc = 0x129054u;
        goto label_129054;
    }
    ctx->pc = 0x12904Cu;
    {
        const bool branch_taken_0x12904c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12904c) {
            ctx->pc = 0x129064u;
            goto label_129064;
        }
    }
    ctx->pc = 0x129054u;
label_129054:
    // 0x129054: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_129058:
    if (ctx->pc == 0x129058u) {
        ctx->pc = 0x12905Cu;
        goto label_12905c;
    }
    ctx->pc = 0x129054u;
    {
        const bool branch_taken_0x129054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129054) {
            ctx->pc = 0x129064u;
            goto label_129064;
        }
    }
    ctx->pc = 0x12905Cu;
label_12905c:
    // 0x12905c: 0x10000046  b           . + 4 + (0x46 << 2)
label_129060:
    if (ctx->pc == 0x129060u) {
        ctx->pc = 0x129064u;
        goto label_129064;
    }
    ctx->pc = 0x12905Cu;
    {
        const bool branch_taken_0x12905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12905c) {
            ctx->pc = 0x129178u;
            goto label_129178;
        }
    }
    ctx->pc = 0x129064u;
label_129064:
    // 0x129064: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129068:
    // 0x129068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12906c:
    // 0x12906c: 0xc05d25c  jal         func_174970
label_129070:
    if (ctx->pc == 0x129070u) {
        ctx->pc = 0x129074u;
        goto label_129074;
    }
    ctx->pc = 0x12906Cu;
    SET_GPR_U32(ctx, 31, 0x129074u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12906Cu, 0x129074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129074u;
label_129074:
    // 0x129074: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_129078:
    if (ctx->pc == 0x129078u) {
        ctx->pc = 0x12907Cu;
        goto label_12907c;
    }
    ctx->pc = 0x129074u;
    {
        const bool branch_taken_0x129074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129074) {
            ctx->pc = 0x129108u;
            goto label_129108;
        }
    }
    ctx->pc = 0x12907Cu;
label_12907c:
    // 0x12907c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129080:
    // 0x129080: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x129080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129084:
    // 0x129084: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x129084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_129088:
    // 0x129088: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x129088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12908c:
    // 0x12908c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12908cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_129090:
    // 0x129090: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x129090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129094:
    // 0x129094: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x129094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_129098:
    // 0x129098: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x129098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12909c:
    // 0x12909c: 0x0  nop
    ctx->pc = 0x12909cu;
    // NOP
label_1290a0:
    // 0x1290a0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1290a4:
    if (ctx->pc == 0x1290A4u) {
        ctx->pc = 0x1290A8u;
        goto label_1290a8;
    }
    ctx->pc = 0x1290A0u;
    {
        const bool branch_taken_0x1290a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1290a0) {
            ctx->pc = 0x129108u;
            goto label_129108;
        }
    }
    ctx->pc = 0x1290A8u;
label_1290a8:
    // 0x1290a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1290ac:
    // 0x1290ac: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1290acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1290b0:
    // 0x1290b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1290b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1290b4:
    // 0x1290b4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1290b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1290b8:
    // 0x1290b8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1290b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1290bc:
    // 0x1290bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1290bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1290c0:
    // 0x1290c0: 0x0  nop
    ctx->pc = 0x1290c0u;
    // NOP
label_1290c4:
    // 0x1290c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1290c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1290c8:
    // 0x1290c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1290c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1290cc:
    // 0x1290cc: 0x0  nop
    ctx->pc = 0x1290ccu;
    // NOP
label_1290d0:
    // 0x1290d0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1290d4:
    if (ctx->pc == 0x1290D4u) {
        ctx->pc = 0x1290D8u;
        goto label_1290d8;
    }
    ctx->pc = 0x1290D0u;
    {
        const bool branch_taken_0x1290d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1290d0) {
            ctx->pc = 0x129108u;
            goto label_129108;
        }
    }
    ctx->pc = 0x1290D8u;
label_1290d8:
    // 0x1290d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1290d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1290dc:
    // 0x1290dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1290e0:
    // 0x1290e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1290e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1290e4:
    // 0x1290e4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1290e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1290e8:
    // 0x1290e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1290ec:
    // 0x1290ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1290ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1290f0:
    // 0x1290f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1290f4:
    // 0x1290f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1290f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1290f8:
    // 0x1290f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1290f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1290fc:
    // 0x1290fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1290fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129100:
    // 0x129100: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129104:
    // 0x129104: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129108:
    // 0x129108: 0x10000129  b           . + 4 + (0x129 << 2)
label_12910c:
    if (ctx->pc == 0x12910Cu) {
        ctx->pc = 0x129110u;
        goto label_129110;
    }
    ctx->pc = 0x129108u;
    {
        const bool branch_taken_0x129108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129108) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x129110u;
label_129110:
    // 0x129110: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_129114:
    // 0x129114: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x129114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_129118:
    // 0x129118: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x129118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_12911c:
    // 0x12911c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_129120:
    if (ctx->pc == 0x129120u) {
        ctx->pc = 0x129124u;
        goto label_129124;
    }
    ctx->pc = 0x12911Cu;
    {
        const bool branch_taken_0x12911c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12911c) {
            ctx->pc = 0x129178u;
            goto label_129178;
        }
    }
    ctx->pc = 0x129124u;
label_129124:
    // 0x129124: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x129124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_129128:
    // 0x129128: 0x8c236838  lw          $v1, 0x6838($at)
    ctx->pc = 0x129128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26680)));
label_12912c:
    // 0x12912c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_129130:
    if (ctx->pc == 0x129130u) {
        ctx->pc = 0x129134u;
        goto label_129134;
    }
    ctx->pc = 0x12912Cu;
    {
        const bool branch_taken_0x12912c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12912c) {
            ctx->pc = 0x129178u;
            goto label_129178;
        }
    }
    ctx->pc = 0x129134u;
label_129134:
    // 0x129134: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_129138:
    // 0x129138: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x129138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_12913c:
    // 0x12913c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x12913cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_129140:
    // 0x129140: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_129144:
    if (ctx->pc == 0x129144u) {
        ctx->pc = 0x129148u;
        goto label_129148;
    }
    ctx->pc = 0x129140u;
    {
        const bool branch_taken_0x129140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129140) {
            ctx->pc = 0x129178u;
            goto label_129178;
        }
    }
    ctx->pc = 0x129148u;
label_129148:
    // 0x129148: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12914c:
    // 0x12914c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12914cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129150:
    // 0x129150: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129154:
    // 0x129154: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x129154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_129158:
    // 0x129158: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12915c:
    // 0x12915c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12915cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129160:
    // 0x129160: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129164:
    // 0x129164: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129168:
    // 0x129168: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12916c:
    // 0x12916c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12916cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129170:
    // 0x129170: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129174:
    // 0x129174: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129178:
    // 0x129178: 0x1000010d  b           . + 4 + (0x10D << 2)
label_12917c:
    if (ctx->pc == 0x12917Cu) {
        ctx->pc = 0x129180u;
        goto label_129180;
    }
    ctx->pc = 0x129178u;
    {
        const bool branch_taken_0x129178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129178) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x129180u;
label_129180:
    // 0x129180: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129184:
    // 0x129184: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129188:
    // 0x129188: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x129188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_12918c:
    // 0x12918c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12918cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_129190:
    // 0x129190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129194:
    // 0x129194: 0x0  nop
    ctx->pc = 0x129194u;
    // NOP
label_129198:
    // 0x129198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12919c:
    // 0x12919c: 0x0  nop
    ctx->pc = 0x12919cu;
    // NOP
label_1291a0:
    // 0x1291a0: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_1291a4:
    if (ctx->pc == 0x1291A4u) {
        ctx->pc = 0x1291A8u;
        goto label_1291a8;
    }
    ctx->pc = 0x1291A0u;
    {
        const bool branch_taken_0x1291a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1291a0) {
            ctx->pc = 0x1292B0u;
            goto label_1292b0;
        }
    }
    ctx->pc = 0x1291A8u;
label_1291a8:
    // 0x1291a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1291a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1291ac:
    // 0x1291ac: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1291acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1291b0:
    // 0x1291b0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1291b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1291b4:
    // 0x1291b4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1291b8:
    if (ctx->pc == 0x1291B8u) {
        ctx->pc = 0x1291BCu;
        goto label_1291bc;
    }
    ctx->pc = 0x1291B4u;
    {
        const bool branch_taken_0x1291b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291b4) {
            ctx->pc = 0x1291F4u;
            goto label_1291f4;
        }
    }
    ctx->pc = 0x1291BCu;
label_1291bc:
    // 0x1291bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1291bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1291c0:
    // 0x1291c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1291c4:
    // 0x1291c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1291c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1291c8:
    // 0x1291c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1291c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1291cc:
    // 0x1291cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1291d0:
    // 0x1291d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1291d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1291d4:
    // 0x1291d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1291d8:
    // 0x1291d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1291d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1291dc:
    // 0x1291dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1291e0:
    // 0x1291e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1291e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1291e4:
    // 0x1291e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1291e8:
    // 0x1291e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1291e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1291ec:
    // 0x1291ec: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_1291f0:
    if (ctx->pc == 0x1291F0u) {
        ctx->pc = 0x1291F4u;
        goto label_1291f4;
    }
    ctx->pc = 0x1291ECu;
    {
        const bool branch_taken_0x1291ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291ec) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x1291F4u;
label_1291f4:
    // 0x1291f4: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1291f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1291f8:
    // 0x1291f8: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_1291fc:
    if (ctx->pc == 0x1291FCu) {
        ctx->pc = 0x129200u;
        goto label_129200;
    }
    ctx->pc = 0x1291F8u;
    {
        const bool branch_taken_0x1291f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291f8) {
            ctx->pc = 0x1292A8u;
            goto label_1292a8;
        }
    }
    ctx->pc = 0x129200u;
label_129200:
    // 0x129200: 0xc067694  jal         func_19DA50
label_129204:
    if (ctx->pc == 0x129204u) {
        ctx->pc = 0x129208u;
        goto label_129208;
    }
    ctx->pc = 0x129200u;
    SET_GPR_U32(ctx, 31, 0x129208u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129200u, 0x129208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129208u;
label_129208:
    // 0x129208: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12920c:
    // 0x12920c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12920cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_129210:
    // 0x129210: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_129214:
    if (ctx->pc == 0x129214u) {
        ctx->pc = 0x129218u;
        goto label_129218;
    }
    ctx->pc = 0x129210u;
    {
        const bool branch_taken_0x129210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129210) {
            ctx->pc = 0x129278u;
            goto label_129278;
        }
    }
    ctx->pc = 0x129218u;
label_129218:
    // 0x129218: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12921c:
    // 0x12921c: 0xc04d8bc  jal         func_1362F0
label_129220:
    if (ctx->pc == 0x129220u) {
        ctx->pc = 0x129224u;
        goto label_129224;
    }
    ctx->pc = 0x12921Cu;
    SET_GPR_U32(ctx, 31, 0x129224u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x12921Cu, 0x129224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129224u;
label_129224:
    // 0x129224: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_129228:
    if (ctx->pc == 0x129228u) {
        ctx->pc = 0x12922Cu;
        goto label_12922c;
    }
    ctx->pc = 0x129224u;
    {
        const bool branch_taken_0x129224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129224) {
            ctx->pc = 0x1292A8u;
            goto label_1292a8;
        }
    }
    ctx->pc = 0x12922Cu;
label_12922c:
    // 0x12922c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129230:
    // 0x129230: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129234:
    // 0x129234: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129238:
    // 0x129238: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x129238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12923c:
    // 0x12923c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129240:
    // 0x129240: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129244:
    // 0x129244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129248:
    // 0x129248: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12924c:
    // 0x12924c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129250:
    // 0x129250: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129254:
    // 0x129254: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129258:
    // 0x129258: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12925c:
    // 0x12925c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12925cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129260:
    // 0x129260: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x129260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_129264:
    // 0x129264: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x129264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_129268:
    // 0x129268: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x129268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_12926c:
    // 0x12926c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12926cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_129270:
    // 0x129270: 0x1000000d  b           . + 4 + (0xD << 2)
label_129274:
    if (ctx->pc == 0x129274u) {
        ctx->pc = 0x129278u;
        goto label_129278;
    }
    ctx->pc = 0x129270u;
    {
        const bool branch_taken_0x129270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129270) {
            ctx->pc = 0x1292A8u;
            goto label_1292a8;
        }
    }
    ctx->pc = 0x129278u;
label_129278:
    // 0x129278: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12927c:
    // 0x12927c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129280:
    // 0x129280: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129284:
    // 0x129284: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x129284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_129288:
    // 0x129288: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12928c:
    // 0x12928c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12928cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129290:
    // 0x129290: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129294:
    // 0x129294: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129298:
    // 0x129298: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12929c:
    // 0x12929c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12929cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1292a0:
    // 0x1292a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1292a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1292a4:
    // 0x1292a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1292a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1292a8:
    // 0x1292a8: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1292ac:
    if (ctx->pc == 0x1292ACu) {
        ctx->pc = 0x1292B0u;
        goto label_1292b0;
    }
    ctx->pc = 0x1292A8u;
    {
        const bool branch_taken_0x1292a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292a8) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x1292B0u;
label_1292b0:
    // 0x1292b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1292b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1292b4:
    // 0x1292b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1292b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1292b8:
    // 0x1292b8: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x1292b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
label_1292bc:
    // 0x1292bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1292bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1292c0:
    // 0x1292c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1292c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1292c4:
    // 0x1292c4: 0x0  nop
    ctx->pc = 0x1292c4u;
    // NOP
label_1292c8:
    // 0x1292c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1292c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1292cc:
    // 0x1292cc: 0x0  nop
    ctx->pc = 0x1292ccu;
    // NOP
label_1292d0:
    // 0x1292d0: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_1292d4:
    if (ctx->pc == 0x1292D4u) {
        ctx->pc = 0x1292D8u;
        goto label_1292d8;
    }
    ctx->pc = 0x1292D0u;
    {
        const bool branch_taken_0x1292d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1292d0) {
            ctx->pc = 0x1293A4u;
            goto label_1293a4;
        }
    }
    ctx->pc = 0x1292D8u;
label_1292d8:
    // 0x1292d8: 0xc067694  jal         func_19DA50
label_1292dc:
    if (ctx->pc == 0x1292DCu) {
        ctx->pc = 0x1292E0u;
        goto label_1292e0;
    }
    ctx->pc = 0x1292D8u;
    SET_GPR_U32(ctx, 31, 0x1292E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1292D8u, 0x1292E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292E0u;
label_1292e0:
    // 0x1292e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1292e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1292e4:
    // 0x1292e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1292e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1292e8:
    // 0x1292e8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1292ec:
    if (ctx->pc == 0x1292ECu) {
        ctx->pc = 0x1292F0u;
        goto label_1292f0;
    }
    ctx->pc = 0x1292E8u;
    {
        const bool branch_taken_0x1292e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292e8) {
            ctx->pc = 0x129334u;
            goto label_129334;
        }
    }
    ctx->pc = 0x1292F0u;
label_1292f0:
    // 0x1292f0: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1292f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1292f4:
    // 0x1292f4: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_1292f8:
    if (ctx->pc == 0x1292F8u) {
        ctx->pc = 0x1292FCu;
        goto label_1292fc;
    }
    ctx->pc = 0x1292F4u;
    {
        const bool branch_taken_0x1292f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292f4) {
            ctx->pc = 0x12939Cu;
            goto label_12939c;
        }
    }
    ctx->pc = 0x1292FCu;
label_1292fc:
    // 0x1292fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129300:
    // 0x129300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129304:
    // 0x129304: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129308:
    // 0x129308: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x129308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12930c:
    // 0x12930c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129310:
    // 0x129310: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129314:
    // 0x129314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129318:
    // 0x129318: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12931c:
    // 0x12931c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129320:
    // 0x129320: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129324:
    // 0x129324: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129328:
    // 0x129328: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12932c:
    // 0x12932c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_129330:
    if (ctx->pc == 0x129330u) {
        ctx->pc = 0x129334u;
        goto label_129334;
    }
    ctx->pc = 0x12932Cu;
    {
        const bool branch_taken_0x12932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12932c) {
            ctx->pc = 0x12939Cu;
            goto label_12939c;
        }
    }
    ctx->pc = 0x129334u;
label_129334:
    // 0x129334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_129338:
    // 0x129338: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x129338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_12933c:
    // 0x12933c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x12933cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_129340:
    // 0x129340: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_129344:
    if (ctx->pc == 0x129344u) {
        ctx->pc = 0x129348u;
        goto label_129348;
    }
    ctx->pc = 0x129340u;
    {
        const bool branch_taken_0x129340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129340) {
            ctx->pc = 0x12939Cu;
            goto label_12939c;
        }
    }
    ctx->pc = 0x129348u;
label_129348:
    // 0x129348: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x129348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_12934c:
    // 0x12934c: 0x8c236838  lw          $v1, 0x6838($at)
    ctx->pc = 0x12934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26680)));
label_129350:
    // 0x129350: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_129354:
    if (ctx->pc == 0x129354u) {
        ctx->pc = 0x129358u;
        goto label_129358;
    }
    ctx->pc = 0x129350u;
    {
        const bool branch_taken_0x129350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129350) {
            ctx->pc = 0x12939Cu;
            goto label_12939c;
        }
    }
    ctx->pc = 0x129358u;
label_129358:
    // 0x129358: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12935c:
    // 0x12935c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x12935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_129360:
    // 0x129360: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x129360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_129364:
    // 0x129364: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_129368:
    if (ctx->pc == 0x129368u) {
        ctx->pc = 0x12936Cu;
        goto label_12936c;
    }
    ctx->pc = 0x129364u;
    {
        const bool branch_taken_0x129364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129364) {
            ctx->pc = 0x12939Cu;
            goto label_12939c;
        }
    }
    ctx->pc = 0x12936Cu;
label_12936c:
    // 0x12936c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129370:
    // 0x129370: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129374:
    // 0x129374: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129378:
    // 0x129378: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x129378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_12937c:
    // 0x12937c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129380:
    // 0x129380: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129384:
    // 0x129384: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129388:
    // 0x129388: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12938c:
    // 0x12938c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129390:
    // 0x129390: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129394:
    // 0x129394: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129398:
    // 0x129398: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12939c:
    // 0x12939c: 0x10000084  b           . + 4 + (0x84 << 2)
label_1293a0:
    if (ctx->pc == 0x1293A0u) {
        ctx->pc = 0x1293A4u;
        goto label_1293a4;
    }
    ctx->pc = 0x12939Cu;
    {
        const bool branch_taken_0x12939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12939c) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x1293A4u;
label_1293a4:
    // 0x1293a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1293a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1293a8:
    // 0x1293a8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1293a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1293ac:
    // 0x1293ac: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x1293acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_1293b0:
    // 0x1293b0: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1293b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_1293b4:
    // 0x1293b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1293b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1293b8:
    // 0x1293b8: 0x0  nop
    ctx->pc = 0x1293b8u;
    // NOP
label_1293bc:
    // 0x1293bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1293bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1293c0:
    // 0x1293c0: 0x0  nop
    ctx->pc = 0x1293c0u;
    // NOP
label_1293c4:
    // 0x1293c4: 0x4500007a  bc1f        . + 4 + (0x7A << 2)
label_1293c8:
    if (ctx->pc == 0x1293C8u) {
        ctx->pc = 0x1293CCu;
        goto label_1293cc;
    }
    ctx->pc = 0x1293C4u;
    {
        const bool branch_taken_0x1293c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1293c4) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x1293CCu;
label_1293cc:
    // 0x1293cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1293ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1293d0:
    // 0x1293d0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1293d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1293d4:
    // 0x1293d4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1293d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_1293d8:
    // 0x1293d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1293d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1293dc:
    // 0x1293dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1293dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1293e0:
    // 0x1293e0: 0x0  nop
    ctx->pc = 0x1293e0u;
    // NOP
label_1293e4:
    // 0x1293e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1293e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1293e8:
    // 0x1293e8: 0x0  nop
    ctx->pc = 0x1293e8u;
    // NOP
label_1293ec:
    // 0x1293ec: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_1293f0:
    if (ctx->pc == 0x1293F0u) {
        ctx->pc = 0x1293F4u;
        goto label_1293f4;
    }
    ctx->pc = 0x1293ECu;
    {
        const bool branch_taken_0x1293ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1293ec) {
            ctx->pc = 0x129468u;
            goto label_129468;
        }
    }
    ctx->pc = 0x1293F4u;
label_1293f4:
    // 0x1293f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1293f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1293f8:
    // 0x1293f8: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1293f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1293fc:
    // 0x1293fc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1293fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_129400:
    // 0x129400: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_129404:
    if (ctx->pc == 0x129404u) {
        ctx->pc = 0x129408u;
        goto label_129408;
    }
    ctx->pc = 0x129400u;
    {
        const bool branch_taken_0x129400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129400) {
            ctx->pc = 0x129418u;
            goto label_129418;
        }
    }
    ctx->pc = 0x129408u;
label_129408:
    // 0x129408: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x129408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_12940c:
    // 0x12940c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_129410:
    // 0x129410: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_129414:
    if (ctx->pc == 0x129414u) {
        ctx->pc = 0x129418u;
        goto label_129418;
    }
    ctx->pc = 0x129410u;
    {
        const bool branch_taken_0x129410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129410) {
            ctx->pc = 0x129468u;
            goto label_129468;
        }
    }
    ctx->pc = 0x129418u;
label_129418:
    // 0x129418: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12941c:
    // 0x12941c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12941cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129420:
    // 0x129420: 0xc05d25c  jal         func_174970
label_129424:
    if (ctx->pc == 0x129424u) {
        ctx->pc = 0x129428u;
        goto label_129428;
    }
    ctx->pc = 0x129420u;
    SET_GPR_U32(ctx, 31, 0x129428u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x129420u, 0x129428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129428u;
label_129428:
    // 0x129428: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_12942c:
    if (ctx->pc == 0x12942Cu) {
        ctx->pc = 0x129430u;
        goto label_129430;
    }
    ctx->pc = 0x129428u;
    {
        const bool branch_taken_0x129428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129428) {
            ctx->pc = 0x129468u;
            goto label_129468;
        }
    }
    ctx->pc = 0x129430u;
label_129430:
    // 0x129430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129434:
    // 0x129434: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129438:
    // 0x129438: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12943c:
    // 0x12943c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x12943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_129440:
    // 0x129440: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129444:
    // 0x129444: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129448:
    // 0x129448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12944c:
    // 0x12944c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12944cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129450:
    // 0x129450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129454:
    // 0x129454: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129458:
    // 0x129458: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12945c:
    // 0x12945c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12945cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129460:
    // 0x129460: 0x10000053  b           . + 4 + (0x53 << 2)
label_129464:
    if (ctx->pc == 0x129464u) {
        ctx->pc = 0x129468u;
        goto label_129468;
    }
    ctx->pc = 0x129460u;
    {
        const bool branch_taken_0x129460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129460) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x129468u;
label_129468:
    // 0x129468: 0xc067694  jal         func_19DA50
label_12946c:
    if (ctx->pc == 0x12946Cu) {
        ctx->pc = 0x129470u;
        goto label_129470;
    }
    ctx->pc = 0x129468u;
    SET_GPR_U32(ctx, 31, 0x129470u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129468u, 0x129470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129470u;
label_129470:
    // 0x129470: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_129474:
    // 0x129474: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x129474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_129478:
    // 0x129478: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12947c:
    // 0x12947c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_129480:
    if (ctx->pc == 0x129480u) {
        ctx->pc = 0x129484u;
        goto label_129484;
    }
    ctx->pc = 0x12947Cu;
    {
        const bool branch_taken_0x12947c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12947c) {
            ctx->pc = 0x129508u;
            goto label_129508;
        }
    }
    ctx->pc = 0x129484u;
label_129484:
    // 0x129484: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x129484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129488:
    // 0x129488: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_12948c:
    if (ctx->pc == 0x12948Cu) {
        ctx->pc = 0x129490u;
        goto label_129490;
    }
    ctx->pc = 0x129488u;
    {
        const bool branch_taken_0x129488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129488) {
            ctx->pc = 0x129508u;
            goto label_129508;
        }
    }
    ctx->pc = 0x129490u;
label_129490:
    // 0x129490: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_129494:
    if (ctx->pc == 0x129494u) {
        ctx->pc = 0x129498u;
        goto label_129498;
    }
    ctx->pc = 0x129490u;
    {
        const bool branch_taken_0x129490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129490) {
            ctx->pc = 0x1294A0u;
            goto label_1294a0;
        }
    }
    ctx->pc = 0x129498u;
label_129498:
    // 0x129498: 0x10000035  b           . + 4 + (0x35 << 2)
label_12949c:
    if (ctx->pc == 0x12949Cu) {
        ctx->pc = 0x1294A0u;
        goto label_1294a0;
    }
    ctx->pc = 0x129498u;
    {
        const bool branch_taken_0x129498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129498) {
            ctx->pc = 0x129570u;
            goto label_129570;
        }
    }
    ctx->pc = 0x1294A0u;
label_1294a0:
    // 0x1294a0: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
label_1294a4:
    if (ctx->pc == 0x1294A4u) {
        ctx->pc = 0x1294A8u;
        goto label_1294a8;
    }
    ctx->pc = 0x1294A0u;
    {
        const bool branch_taken_0x1294a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1294a0) {
            ctx->pc = 0x129500u;
            goto label_129500;
        }
    }
    ctx->pc = 0x1294A8u;
label_1294a8:
    // 0x1294a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1294a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1294ac:
    // 0x1294ac: 0xc04d8bc  jal         func_1362F0
label_1294b0:
    if (ctx->pc == 0x1294B0u) {
        ctx->pc = 0x1294B4u;
        goto label_1294b4;
    }
    ctx->pc = 0x1294ACu;
    SET_GPR_U32(ctx, 31, 0x1294B4u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x1294ACu, 0x1294B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1294B4u;
label_1294b4:
    // 0x1294b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1294b8:
    if (ctx->pc == 0x1294B8u) {
        ctx->pc = 0x1294BCu;
        goto label_1294bc;
    }
    ctx->pc = 0x1294B4u;
    {
        const bool branch_taken_0x1294b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1294b4) {
            ctx->pc = 0x129500u;
            goto label_129500;
        }
    }
    ctx->pc = 0x1294BCu;
label_1294bc:
    // 0x1294bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1294bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1294c0:
    // 0x1294c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1294c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1294c4:
    // 0x1294c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1294c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1294c8:
    // 0x1294c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1294c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1294cc:
    // 0x1294cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1294ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1294d0:
    // 0x1294d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1294d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1294d4:
    // 0x1294d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1294d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1294d8:
    // 0x1294d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1294d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1294dc:
    // 0x1294dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1294dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1294e0:
    // 0x1294e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1294e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1294e4:
    // 0x1294e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1294e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1294e8:
    // 0x1294e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1294e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1294ec:
    // 0x1294ec: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1294ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1294f0:
    // 0x1294f0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1294f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1294f4:
    // 0x1294f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1294f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1294f8:
    // 0x1294f8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1294f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1294fc:
    // 0x1294fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1294fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_129500:
    // 0x129500: 0x1000002b  b           . + 4 + (0x2B << 2)
label_129504:
    if (ctx->pc == 0x129504u) {
        ctx->pc = 0x129508u;
        goto label_129508;
    }
    ctx->pc = 0x129500u;
    {
        const bool branch_taken_0x129500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129500) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x129508u;
label_129508:
    // 0x129508: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12950c:
    // 0x12950c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x12950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_129510:
    // 0x129510: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x129510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_129514:
    // 0x129514: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_129518:
    if (ctx->pc == 0x129518u) {
        ctx->pc = 0x12951Cu;
        goto label_12951c;
    }
    ctx->pc = 0x129514u;
    {
        const bool branch_taken_0x129514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129514) {
            ctx->pc = 0x129570u;
            goto label_129570;
        }
    }
    ctx->pc = 0x12951Cu;
label_12951c:
    // 0x12951c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12951cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_129520:
    // 0x129520: 0x8c236838  lw          $v1, 0x6838($at)
    ctx->pc = 0x129520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26680)));
label_129524:
    // 0x129524: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_129528:
    if (ctx->pc == 0x129528u) {
        ctx->pc = 0x12952Cu;
        goto label_12952c;
    }
    ctx->pc = 0x129524u;
    {
        const bool branch_taken_0x129524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129524) {
            ctx->pc = 0x129570u;
            goto label_129570;
        }
    }
    ctx->pc = 0x12952Cu;
label_12952c:
    // 0x12952c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_129530:
    // 0x129530: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x129530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_129534:
    // 0x129534: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x129534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_129538:
    // 0x129538: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_12953c:
    if (ctx->pc == 0x12953Cu) {
        ctx->pc = 0x129540u;
        goto label_129540;
    }
    ctx->pc = 0x129538u;
    {
        const bool branch_taken_0x129538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129538) {
            ctx->pc = 0x129570u;
            goto label_129570;
        }
    }
    ctx->pc = 0x129540u;
label_129540:
    // 0x129540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129544:
    // 0x129544: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129548:
    // 0x129548: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12954c:
    // 0x12954c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x12954cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_129550:
    // 0x129550: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129554:
    // 0x129554: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129558:
    // 0x129558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12955c:
    // 0x12955c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12955cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129560:
    // 0x129560: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129564:
    // 0x129564: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129568:
    // 0x129568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12956c:
    // 0x12956c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12956cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129570:
    // 0x129570: 0x1000000f  b           . + 4 + (0xF << 2)
label_129574:
    if (ctx->pc == 0x129574u) {
        ctx->pc = 0x129578u;
        goto label_129578;
    }
    ctx->pc = 0x129570u;
    {
        const bool branch_taken_0x129570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129570) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x129578u;
label_129578:
    // 0x129578: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12957c:
    // 0x12957c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129580:
    // 0x129580: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129584:
    // 0x129584: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x129584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_129588:
    // 0x129588: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12958c:
    // 0x12958c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12958cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129590:
    // 0x129590: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129594:
    // 0x129594: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129598:
    // 0x129598: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12959c:
    // 0x12959c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12959cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1295a0:
    // 0x1295a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1295a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1295a4:
    // 0x1295a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1295a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1295a8:
    // 0x1295a8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1295ac:
    if (ctx->pc == 0x1295ACu) {
        ctx->pc = 0x1295B0u;
        goto label_1295b0;
    }
    ctx->pc = 0x1295A8u;
    {
        const bool branch_taken_0x1295a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1295a8) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x1295B0u;
label_1295b0:
    // 0x1295b0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1295b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1295b4:
    // 0x1295b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1295b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1295b8:
    // 0x1295b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1295b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1295bc:
    // 0x1295bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1295bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1295c0:
    // 0x1295c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1295c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1295c4:
    // 0x1295c4: 0x3e00008  jr          $ra
label_1295c8:
    if (ctx->pc == 0x1295C8u) {
        ctx->pc = 0x1295CCu;
        goto label_fallthrough_0x1295c4;
    }
    ctx->pc = 0x1295C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1295C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1295c4:
    ctx->pc = 0x1295CCu;
}
