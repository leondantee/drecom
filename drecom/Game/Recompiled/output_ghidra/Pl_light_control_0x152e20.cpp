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

// Function: Pl_light_control
// Address: 0x152e20 - 0x155060
void Pl_light_control_0x152e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_light_control_0x152e20");
#endif

    switch (ctx->pc) {
        case 0x152e20u: goto label_152e20;
        case 0x152e24u: goto label_152e24;
        case 0x152e28u: goto label_152e28;
        case 0x152e2cu: goto label_152e2c;
        case 0x152e30u: goto label_152e30;
        case 0x152e34u: goto label_152e34;
        case 0x152e38u: goto label_152e38;
        case 0x152e3cu: goto label_152e3c;
        case 0x152e40u: goto label_152e40;
        case 0x152e44u: goto label_152e44;
        case 0x152e48u: goto label_152e48;
        case 0x152e4cu: goto label_152e4c;
        case 0x152e50u: goto label_152e50;
        case 0x152e54u: goto label_152e54;
        case 0x152e58u: goto label_152e58;
        case 0x152e5cu: goto label_152e5c;
        case 0x152e60u: goto label_152e60;
        case 0x152e64u: goto label_152e64;
        case 0x152e68u: goto label_152e68;
        case 0x152e6cu: goto label_152e6c;
        case 0x152e70u: goto label_152e70;
        case 0x152e74u: goto label_152e74;
        case 0x152e78u: goto label_152e78;
        case 0x152e7cu: goto label_152e7c;
        case 0x152e80u: goto label_152e80;
        case 0x152e84u: goto label_152e84;
        case 0x152e88u: goto label_152e88;
        case 0x152e8cu: goto label_152e8c;
        case 0x152e90u: goto label_152e90;
        case 0x152e94u: goto label_152e94;
        case 0x152e98u: goto label_152e98;
        case 0x152e9cu: goto label_152e9c;
        case 0x152ea0u: goto label_152ea0;
        case 0x152ea4u: goto label_152ea4;
        case 0x152ea8u: goto label_152ea8;
        case 0x152eacu: goto label_152eac;
        case 0x152eb0u: goto label_152eb0;
        case 0x152eb4u: goto label_152eb4;
        case 0x152eb8u: goto label_152eb8;
        case 0x152ebcu: goto label_152ebc;
        case 0x152ec0u: goto label_152ec0;
        case 0x152ec4u: goto label_152ec4;
        case 0x152ec8u: goto label_152ec8;
        case 0x152eccu: goto label_152ecc;
        case 0x152ed0u: goto label_152ed0;
        case 0x152ed4u: goto label_152ed4;
        case 0x152ed8u: goto label_152ed8;
        case 0x152edcu: goto label_152edc;
        case 0x152ee0u: goto label_152ee0;
        case 0x152ee4u: goto label_152ee4;
        case 0x152ee8u: goto label_152ee8;
        case 0x152eecu: goto label_152eec;
        case 0x152ef0u: goto label_152ef0;
        case 0x152ef4u: goto label_152ef4;
        case 0x152ef8u: goto label_152ef8;
        case 0x152efcu: goto label_152efc;
        case 0x152f00u: goto label_152f00;
        case 0x152f04u: goto label_152f04;
        case 0x152f08u: goto label_152f08;
        case 0x152f0cu: goto label_152f0c;
        case 0x152f10u: goto label_152f10;
        case 0x152f14u: goto label_152f14;
        case 0x152f18u: goto label_152f18;
        case 0x152f1cu: goto label_152f1c;
        case 0x152f20u: goto label_152f20;
        case 0x152f24u: goto label_152f24;
        case 0x152f28u: goto label_152f28;
        case 0x152f2cu: goto label_152f2c;
        case 0x152f30u: goto label_152f30;
        case 0x152f34u: goto label_152f34;
        case 0x152f38u: goto label_152f38;
        case 0x152f3cu: goto label_152f3c;
        case 0x152f40u: goto label_152f40;
        case 0x152f44u: goto label_152f44;
        case 0x152f48u: goto label_152f48;
        case 0x152f4cu: goto label_152f4c;
        case 0x152f50u: goto label_152f50;
        case 0x152f54u: goto label_152f54;
        case 0x152f58u: goto label_152f58;
        case 0x152f5cu: goto label_152f5c;
        case 0x152f60u: goto label_152f60;
        case 0x152f64u: goto label_152f64;
        case 0x152f68u: goto label_152f68;
        case 0x152f6cu: goto label_152f6c;
        case 0x152f70u: goto label_152f70;
        case 0x152f74u: goto label_152f74;
        case 0x152f78u: goto label_152f78;
        case 0x152f7cu: goto label_152f7c;
        case 0x152f80u: goto label_152f80;
        case 0x152f84u: goto label_152f84;
        case 0x152f88u: goto label_152f88;
        case 0x152f8cu: goto label_152f8c;
        case 0x152f90u: goto label_152f90;
        case 0x152f94u: goto label_152f94;
        case 0x152f98u: goto label_152f98;
        case 0x152f9cu: goto label_152f9c;
        case 0x152fa0u: goto label_152fa0;
        case 0x152fa4u: goto label_152fa4;
        case 0x152fa8u: goto label_152fa8;
        case 0x152facu: goto label_152fac;
        case 0x152fb0u: goto label_152fb0;
        case 0x152fb4u: goto label_152fb4;
        case 0x152fb8u: goto label_152fb8;
        case 0x152fbcu: goto label_152fbc;
        case 0x152fc0u: goto label_152fc0;
        case 0x152fc4u: goto label_152fc4;
        case 0x152fc8u: goto label_152fc8;
        case 0x152fccu: goto label_152fcc;
        case 0x152fd0u: goto label_152fd0;
        case 0x152fd4u: goto label_152fd4;
        case 0x152fd8u: goto label_152fd8;
        case 0x152fdcu: goto label_152fdc;
        case 0x152fe0u: goto label_152fe0;
        case 0x152fe4u: goto label_152fe4;
        case 0x152fe8u: goto label_152fe8;
        case 0x152fecu: goto label_152fec;
        case 0x152ff0u: goto label_152ff0;
        case 0x152ff4u: goto label_152ff4;
        case 0x152ff8u: goto label_152ff8;
        case 0x152ffcu: goto label_152ffc;
        case 0x153000u: goto label_153000;
        case 0x153004u: goto label_153004;
        case 0x153008u: goto label_153008;
        case 0x15300cu: goto label_15300c;
        case 0x153010u: goto label_153010;
        case 0x153014u: goto label_153014;
        case 0x153018u: goto label_153018;
        case 0x15301cu: goto label_15301c;
        case 0x153020u: goto label_153020;
        case 0x153024u: goto label_153024;
        case 0x153028u: goto label_153028;
        case 0x15302cu: goto label_15302c;
        case 0x153030u: goto label_153030;
        case 0x153034u: goto label_153034;
        case 0x153038u: goto label_153038;
        case 0x15303cu: goto label_15303c;
        case 0x153040u: goto label_153040;
        case 0x153044u: goto label_153044;
        case 0x153048u: goto label_153048;
        case 0x15304cu: goto label_15304c;
        case 0x153050u: goto label_153050;
        case 0x153054u: goto label_153054;
        case 0x153058u: goto label_153058;
        case 0x15305cu: goto label_15305c;
        case 0x153060u: goto label_153060;
        case 0x153064u: goto label_153064;
        case 0x153068u: goto label_153068;
        case 0x15306cu: goto label_15306c;
        case 0x153070u: goto label_153070;
        case 0x153074u: goto label_153074;
        case 0x153078u: goto label_153078;
        case 0x15307cu: goto label_15307c;
        case 0x153080u: goto label_153080;
        case 0x153084u: goto label_153084;
        case 0x153088u: goto label_153088;
        case 0x15308cu: goto label_15308c;
        case 0x153090u: goto label_153090;
        case 0x153094u: goto label_153094;
        case 0x153098u: goto label_153098;
        case 0x15309cu: goto label_15309c;
        case 0x1530a0u: goto label_1530a0;
        case 0x1530a4u: goto label_1530a4;
        case 0x1530a8u: goto label_1530a8;
        case 0x1530acu: goto label_1530ac;
        case 0x1530b0u: goto label_1530b0;
        case 0x1530b4u: goto label_1530b4;
        case 0x1530b8u: goto label_1530b8;
        case 0x1530bcu: goto label_1530bc;
        case 0x1530c0u: goto label_1530c0;
        case 0x1530c4u: goto label_1530c4;
        case 0x1530c8u: goto label_1530c8;
        case 0x1530ccu: goto label_1530cc;
        case 0x1530d0u: goto label_1530d0;
        case 0x1530d4u: goto label_1530d4;
        case 0x1530d8u: goto label_1530d8;
        case 0x1530dcu: goto label_1530dc;
        case 0x1530e0u: goto label_1530e0;
        case 0x1530e4u: goto label_1530e4;
        case 0x1530e8u: goto label_1530e8;
        case 0x1530ecu: goto label_1530ec;
        case 0x1530f0u: goto label_1530f0;
        case 0x1530f4u: goto label_1530f4;
        case 0x1530f8u: goto label_1530f8;
        case 0x1530fcu: goto label_1530fc;
        case 0x153100u: goto label_153100;
        case 0x153104u: goto label_153104;
        case 0x153108u: goto label_153108;
        case 0x15310cu: goto label_15310c;
        case 0x153110u: goto label_153110;
        case 0x153114u: goto label_153114;
        case 0x153118u: goto label_153118;
        case 0x15311cu: goto label_15311c;
        case 0x153120u: goto label_153120;
        case 0x153124u: goto label_153124;
        case 0x153128u: goto label_153128;
        case 0x15312cu: goto label_15312c;
        case 0x153130u: goto label_153130;
        case 0x153134u: goto label_153134;
        case 0x153138u: goto label_153138;
        case 0x15313cu: goto label_15313c;
        case 0x153140u: goto label_153140;
        case 0x153144u: goto label_153144;
        case 0x153148u: goto label_153148;
        case 0x15314cu: goto label_15314c;
        case 0x153150u: goto label_153150;
        case 0x153154u: goto label_153154;
        case 0x153158u: goto label_153158;
        case 0x15315cu: goto label_15315c;
        case 0x153160u: goto label_153160;
        case 0x153164u: goto label_153164;
        case 0x153168u: goto label_153168;
        case 0x15316cu: goto label_15316c;
        case 0x153170u: goto label_153170;
        case 0x153174u: goto label_153174;
        case 0x153178u: goto label_153178;
        case 0x15317cu: goto label_15317c;
        case 0x153180u: goto label_153180;
        case 0x153184u: goto label_153184;
        case 0x153188u: goto label_153188;
        case 0x15318cu: goto label_15318c;
        case 0x153190u: goto label_153190;
        case 0x153194u: goto label_153194;
        case 0x153198u: goto label_153198;
        case 0x15319cu: goto label_15319c;
        case 0x1531a0u: goto label_1531a0;
        case 0x1531a4u: goto label_1531a4;
        case 0x1531a8u: goto label_1531a8;
        case 0x1531acu: goto label_1531ac;
        case 0x1531b0u: goto label_1531b0;
        case 0x1531b4u: goto label_1531b4;
        case 0x1531b8u: goto label_1531b8;
        case 0x1531bcu: goto label_1531bc;
        case 0x1531c0u: goto label_1531c0;
        case 0x1531c4u: goto label_1531c4;
        case 0x1531c8u: goto label_1531c8;
        case 0x1531ccu: goto label_1531cc;
        case 0x1531d0u: goto label_1531d0;
        case 0x1531d4u: goto label_1531d4;
        case 0x1531d8u: goto label_1531d8;
        case 0x1531dcu: goto label_1531dc;
        case 0x1531e0u: goto label_1531e0;
        case 0x1531e4u: goto label_1531e4;
        case 0x1531e8u: goto label_1531e8;
        case 0x1531ecu: goto label_1531ec;
        case 0x1531f0u: goto label_1531f0;
        case 0x1531f4u: goto label_1531f4;
        case 0x1531f8u: goto label_1531f8;
        case 0x1531fcu: goto label_1531fc;
        case 0x153200u: goto label_153200;
        case 0x153204u: goto label_153204;
        case 0x153208u: goto label_153208;
        case 0x15320cu: goto label_15320c;
        case 0x153210u: goto label_153210;
        case 0x153214u: goto label_153214;
        case 0x153218u: goto label_153218;
        case 0x15321cu: goto label_15321c;
        case 0x153220u: goto label_153220;
        case 0x153224u: goto label_153224;
        case 0x153228u: goto label_153228;
        case 0x15322cu: goto label_15322c;
        case 0x153230u: goto label_153230;
        case 0x153234u: goto label_153234;
        case 0x153238u: goto label_153238;
        case 0x15323cu: goto label_15323c;
        case 0x153240u: goto label_153240;
        case 0x153244u: goto label_153244;
        case 0x153248u: goto label_153248;
        case 0x15324cu: goto label_15324c;
        case 0x153250u: goto label_153250;
        case 0x153254u: goto label_153254;
        case 0x153258u: goto label_153258;
        case 0x15325cu: goto label_15325c;
        case 0x153260u: goto label_153260;
        case 0x153264u: goto label_153264;
        case 0x153268u: goto label_153268;
        case 0x15326cu: goto label_15326c;
        case 0x153270u: goto label_153270;
        case 0x153274u: goto label_153274;
        case 0x153278u: goto label_153278;
        case 0x15327cu: goto label_15327c;
        case 0x153280u: goto label_153280;
        case 0x153284u: goto label_153284;
        case 0x153288u: goto label_153288;
        case 0x15328cu: goto label_15328c;
        case 0x153290u: goto label_153290;
        case 0x153294u: goto label_153294;
        case 0x153298u: goto label_153298;
        case 0x15329cu: goto label_15329c;
        case 0x1532a0u: goto label_1532a0;
        case 0x1532a4u: goto label_1532a4;
        case 0x1532a8u: goto label_1532a8;
        case 0x1532acu: goto label_1532ac;
        case 0x1532b0u: goto label_1532b0;
        case 0x1532b4u: goto label_1532b4;
        case 0x1532b8u: goto label_1532b8;
        case 0x1532bcu: goto label_1532bc;
        case 0x1532c0u: goto label_1532c0;
        case 0x1532c4u: goto label_1532c4;
        case 0x1532c8u: goto label_1532c8;
        case 0x1532ccu: goto label_1532cc;
        case 0x1532d0u: goto label_1532d0;
        case 0x1532d4u: goto label_1532d4;
        case 0x1532d8u: goto label_1532d8;
        case 0x1532dcu: goto label_1532dc;
        case 0x1532e0u: goto label_1532e0;
        case 0x1532e4u: goto label_1532e4;
        case 0x1532e8u: goto label_1532e8;
        case 0x1532ecu: goto label_1532ec;
        case 0x1532f0u: goto label_1532f0;
        case 0x1532f4u: goto label_1532f4;
        case 0x1532f8u: goto label_1532f8;
        case 0x1532fcu: goto label_1532fc;
        case 0x153300u: goto label_153300;
        case 0x153304u: goto label_153304;
        case 0x153308u: goto label_153308;
        case 0x15330cu: goto label_15330c;
        case 0x153310u: goto label_153310;
        case 0x153314u: goto label_153314;
        case 0x153318u: goto label_153318;
        case 0x15331cu: goto label_15331c;
        case 0x153320u: goto label_153320;
        case 0x153324u: goto label_153324;
        case 0x153328u: goto label_153328;
        case 0x15332cu: goto label_15332c;
        case 0x153330u: goto label_153330;
        case 0x153334u: goto label_153334;
        case 0x153338u: goto label_153338;
        case 0x15333cu: goto label_15333c;
        case 0x153340u: goto label_153340;
        case 0x153344u: goto label_153344;
        case 0x153348u: goto label_153348;
        case 0x15334cu: goto label_15334c;
        case 0x153350u: goto label_153350;
        case 0x153354u: goto label_153354;
        case 0x153358u: goto label_153358;
        case 0x15335cu: goto label_15335c;
        case 0x153360u: goto label_153360;
        case 0x153364u: goto label_153364;
        case 0x153368u: goto label_153368;
        case 0x15336cu: goto label_15336c;
        case 0x153370u: goto label_153370;
        case 0x153374u: goto label_153374;
        case 0x153378u: goto label_153378;
        case 0x15337cu: goto label_15337c;
        case 0x153380u: goto label_153380;
        case 0x153384u: goto label_153384;
        case 0x153388u: goto label_153388;
        case 0x15338cu: goto label_15338c;
        case 0x153390u: goto label_153390;
        case 0x153394u: goto label_153394;
        case 0x153398u: goto label_153398;
        case 0x15339cu: goto label_15339c;
        case 0x1533a0u: goto label_1533a0;
        case 0x1533a4u: goto label_1533a4;
        case 0x1533a8u: goto label_1533a8;
        case 0x1533acu: goto label_1533ac;
        case 0x1533b0u: goto label_1533b0;
        case 0x1533b4u: goto label_1533b4;
        case 0x1533b8u: goto label_1533b8;
        case 0x1533bcu: goto label_1533bc;
        case 0x1533c0u: goto label_1533c0;
        case 0x1533c4u: goto label_1533c4;
        case 0x1533c8u: goto label_1533c8;
        case 0x1533ccu: goto label_1533cc;
        case 0x1533d0u: goto label_1533d0;
        case 0x1533d4u: goto label_1533d4;
        case 0x1533d8u: goto label_1533d8;
        case 0x1533dcu: goto label_1533dc;
        case 0x1533e0u: goto label_1533e0;
        case 0x1533e4u: goto label_1533e4;
        case 0x1533e8u: goto label_1533e8;
        case 0x1533ecu: goto label_1533ec;
        case 0x1533f0u: goto label_1533f0;
        case 0x1533f4u: goto label_1533f4;
        case 0x1533f8u: goto label_1533f8;
        case 0x1533fcu: goto label_1533fc;
        case 0x153400u: goto label_153400;
        case 0x153404u: goto label_153404;
        case 0x153408u: goto label_153408;
        case 0x15340cu: goto label_15340c;
        case 0x153410u: goto label_153410;
        case 0x153414u: goto label_153414;
        case 0x153418u: goto label_153418;
        case 0x15341cu: goto label_15341c;
        case 0x153420u: goto label_153420;
        case 0x153424u: goto label_153424;
        case 0x153428u: goto label_153428;
        case 0x15342cu: goto label_15342c;
        case 0x153430u: goto label_153430;
        case 0x153434u: goto label_153434;
        case 0x153438u: goto label_153438;
        case 0x15343cu: goto label_15343c;
        case 0x153440u: goto label_153440;
        case 0x153444u: goto label_153444;
        case 0x153448u: goto label_153448;
        case 0x15344cu: goto label_15344c;
        case 0x153450u: goto label_153450;
        case 0x153454u: goto label_153454;
        case 0x153458u: goto label_153458;
        case 0x15345cu: goto label_15345c;
        case 0x153460u: goto label_153460;
        case 0x153464u: goto label_153464;
        case 0x153468u: goto label_153468;
        case 0x15346cu: goto label_15346c;
        case 0x153470u: goto label_153470;
        case 0x153474u: goto label_153474;
        case 0x153478u: goto label_153478;
        case 0x15347cu: goto label_15347c;
        case 0x153480u: goto label_153480;
        case 0x153484u: goto label_153484;
        case 0x153488u: goto label_153488;
        case 0x15348cu: goto label_15348c;
        case 0x153490u: goto label_153490;
        case 0x153494u: goto label_153494;
        case 0x153498u: goto label_153498;
        case 0x15349cu: goto label_15349c;
        case 0x1534a0u: goto label_1534a0;
        case 0x1534a4u: goto label_1534a4;
        case 0x1534a8u: goto label_1534a8;
        case 0x1534acu: goto label_1534ac;
        case 0x1534b0u: goto label_1534b0;
        case 0x1534b4u: goto label_1534b4;
        case 0x1534b8u: goto label_1534b8;
        case 0x1534bcu: goto label_1534bc;
        case 0x1534c0u: goto label_1534c0;
        case 0x1534c4u: goto label_1534c4;
        case 0x1534c8u: goto label_1534c8;
        case 0x1534ccu: goto label_1534cc;
        case 0x1534d0u: goto label_1534d0;
        case 0x1534d4u: goto label_1534d4;
        case 0x1534d8u: goto label_1534d8;
        case 0x1534dcu: goto label_1534dc;
        case 0x1534e0u: goto label_1534e0;
        case 0x1534e4u: goto label_1534e4;
        case 0x1534e8u: goto label_1534e8;
        case 0x1534ecu: goto label_1534ec;
        case 0x1534f0u: goto label_1534f0;
        case 0x1534f4u: goto label_1534f4;
        case 0x1534f8u: goto label_1534f8;
        case 0x1534fcu: goto label_1534fc;
        case 0x153500u: goto label_153500;
        case 0x153504u: goto label_153504;
        case 0x153508u: goto label_153508;
        case 0x15350cu: goto label_15350c;
        case 0x153510u: goto label_153510;
        case 0x153514u: goto label_153514;
        case 0x153518u: goto label_153518;
        case 0x15351cu: goto label_15351c;
        case 0x153520u: goto label_153520;
        case 0x153524u: goto label_153524;
        case 0x153528u: goto label_153528;
        case 0x15352cu: goto label_15352c;
        case 0x153530u: goto label_153530;
        case 0x153534u: goto label_153534;
        case 0x153538u: goto label_153538;
        case 0x15353cu: goto label_15353c;
        case 0x153540u: goto label_153540;
        case 0x153544u: goto label_153544;
        case 0x153548u: goto label_153548;
        case 0x15354cu: goto label_15354c;
        case 0x153550u: goto label_153550;
        case 0x153554u: goto label_153554;
        case 0x153558u: goto label_153558;
        case 0x15355cu: goto label_15355c;
        case 0x153560u: goto label_153560;
        case 0x153564u: goto label_153564;
        case 0x153568u: goto label_153568;
        case 0x15356cu: goto label_15356c;
        case 0x153570u: goto label_153570;
        case 0x153574u: goto label_153574;
        case 0x153578u: goto label_153578;
        case 0x15357cu: goto label_15357c;
        case 0x153580u: goto label_153580;
        case 0x153584u: goto label_153584;
        case 0x153588u: goto label_153588;
        case 0x15358cu: goto label_15358c;
        case 0x153590u: goto label_153590;
        case 0x153594u: goto label_153594;
        case 0x153598u: goto label_153598;
        case 0x15359cu: goto label_15359c;
        case 0x1535a0u: goto label_1535a0;
        case 0x1535a4u: goto label_1535a4;
        case 0x1535a8u: goto label_1535a8;
        case 0x1535acu: goto label_1535ac;
        case 0x1535b0u: goto label_1535b0;
        case 0x1535b4u: goto label_1535b4;
        case 0x1535b8u: goto label_1535b8;
        case 0x1535bcu: goto label_1535bc;
        case 0x1535c0u: goto label_1535c0;
        case 0x1535c4u: goto label_1535c4;
        case 0x1535c8u: goto label_1535c8;
        case 0x1535ccu: goto label_1535cc;
        case 0x1535d0u: goto label_1535d0;
        case 0x1535d4u: goto label_1535d4;
        case 0x1535d8u: goto label_1535d8;
        case 0x1535dcu: goto label_1535dc;
        case 0x1535e0u: goto label_1535e0;
        case 0x1535e4u: goto label_1535e4;
        case 0x1535e8u: goto label_1535e8;
        case 0x1535ecu: goto label_1535ec;
        case 0x1535f0u: goto label_1535f0;
        case 0x1535f4u: goto label_1535f4;
        case 0x1535f8u: goto label_1535f8;
        case 0x1535fcu: goto label_1535fc;
        case 0x153600u: goto label_153600;
        case 0x153604u: goto label_153604;
        case 0x153608u: goto label_153608;
        case 0x15360cu: goto label_15360c;
        case 0x153610u: goto label_153610;
        case 0x153614u: goto label_153614;
        case 0x153618u: goto label_153618;
        case 0x15361cu: goto label_15361c;
        case 0x153620u: goto label_153620;
        case 0x153624u: goto label_153624;
        case 0x153628u: goto label_153628;
        case 0x15362cu: goto label_15362c;
        case 0x153630u: goto label_153630;
        case 0x153634u: goto label_153634;
        case 0x153638u: goto label_153638;
        case 0x15363cu: goto label_15363c;
        case 0x153640u: goto label_153640;
        case 0x153644u: goto label_153644;
        case 0x153648u: goto label_153648;
        case 0x15364cu: goto label_15364c;
        case 0x153650u: goto label_153650;
        case 0x153654u: goto label_153654;
        case 0x153658u: goto label_153658;
        case 0x15365cu: goto label_15365c;
        case 0x153660u: goto label_153660;
        case 0x153664u: goto label_153664;
        case 0x153668u: goto label_153668;
        case 0x15366cu: goto label_15366c;
        case 0x153670u: goto label_153670;
        case 0x153674u: goto label_153674;
        case 0x153678u: goto label_153678;
        case 0x15367cu: goto label_15367c;
        case 0x153680u: goto label_153680;
        case 0x153684u: goto label_153684;
        case 0x153688u: goto label_153688;
        case 0x15368cu: goto label_15368c;
        case 0x153690u: goto label_153690;
        case 0x153694u: goto label_153694;
        case 0x153698u: goto label_153698;
        case 0x15369cu: goto label_15369c;
        case 0x1536a0u: goto label_1536a0;
        case 0x1536a4u: goto label_1536a4;
        case 0x1536a8u: goto label_1536a8;
        case 0x1536acu: goto label_1536ac;
        case 0x1536b0u: goto label_1536b0;
        case 0x1536b4u: goto label_1536b4;
        case 0x1536b8u: goto label_1536b8;
        case 0x1536bcu: goto label_1536bc;
        case 0x1536c0u: goto label_1536c0;
        case 0x1536c4u: goto label_1536c4;
        case 0x1536c8u: goto label_1536c8;
        case 0x1536ccu: goto label_1536cc;
        case 0x1536d0u: goto label_1536d0;
        case 0x1536d4u: goto label_1536d4;
        case 0x1536d8u: goto label_1536d8;
        case 0x1536dcu: goto label_1536dc;
        case 0x1536e0u: goto label_1536e0;
        case 0x1536e4u: goto label_1536e4;
        case 0x1536e8u: goto label_1536e8;
        case 0x1536ecu: goto label_1536ec;
        case 0x1536f0u: goto label_1536f0;
        case 0x1536f4u: goto label_1536f4;
        case 0x1536f8u: goto label_1536f8;
        case 0x1536fcu: goto label_1536fc;
        case 0x153700u: goto label_153700;
        case 0x153704u: goto label_153704;
        case 0x153708u: goto label_153708;
        case 0x15370cu: goto label_15370c;
        case 0x153710u: goto label_153710;
        case 0x153714u: goto label_153714;
        case 0x153718u: goto label_153718;
        case 0x15371cu: goto label_15371c;
        case 0x153720u: goto label_153720;
        case 0x153724u: goto label_153724;
        case 0x153728u: goto label_153728;
        case 0x15372cu: goto label_15372c;
        case 0x153730u: goto label_153730;
        case 0x153734u: goto label_153734;
        case 0x153738u: goto label_153738;
        case 0x15373cu: goto label_15373c;
        case 0x153740u: goto label_153740;
        case 0x153744u: goto label_153744;
        case 0x153748u: goto label_153748;
        case 0x15374cu: goto label_15374c;
        case 0x153750u: goto label_153750;
        case 0x153754u: goto label_153754;
        case 0x153758u: goto label_153758;
        case 0x15375cu: goto label_15375c;
        case 0x153760u: goto label_153760;
        case 0x153764u: goto label_153764;
        case 0x153768u: goto label_153768;
        case 0x15376cu: goto label_15376c;
        case 0x153770u: goto label_153770;
        case 0x153774u: goto label_153774;
        case 0x153778u: goto label_153778;
        case 0x15377cu: goto label_15377c;
        case 0x153780u: goto label_153780;
        case 0x153784u: goto label_153784;
        case 0x153788u: goto label_153788;
        case 0x15378cu: goto label_15378c;
        case 0x153790u: goto label_153790;
        case 0x153794u: goto label_153794;
        case 0x153798u: goto label_153798;
        case 0x15379cu: goto label_15379c;
        case 0x1537a0u: goto label_1537a0;
        case 0x1537a4u: goto label_1537a4;
        case 0x1537a8u: goto label_1537a8;
        case 0x1537acu: goto label_1537ac;
        case 0x1537b0u: goto label_1537b0;
        case 0x1537b4u: goto label_1537b4;
        case 0x1537b8u: goto label_1537b8;
        case 0x1537bcu: goto label_1537bc;
        case 0x1537c0u: goto label_1537c0;
        case 0x1537c4u: goto label_1537c4;
        case 0x1537c8u: goto label_1537c8;
        case 0x1537ccu: goto label_1537cc;
        case 0x1537d0u: goto label_1537d0;
        case 0x1537d4u: goto label_1537d4;
        case 0x1537d8u: goto label_1537d8;
        case 0x1537dcu: goto label_1537dc;
        case 0x1537e0u: goto label_1537e0;
        case 0x1537e4u: goto label_1537e4;
        case 0x1537e8u: goto label_1537e8;
        case 0x1537ecu: goto label_1537ec;
        case 0x1537f0u: goto label_1537f0;
        case 0x1537f4u: goto label_1537f4;
        case 0x1537f8u: goto label_1537f8;
        case 0x1537fcu: goto label_1537fc;
        case 0x153800u: goto label_153800;
        case 0x153804u: goto label_153804;
        case 0x153808u: goto label_153808;
        case 0x15380cu: goto label_15380c;
        case 0x153810u: goto label_153810;
        case 0x153814u: goto label_153814;
        case 0x153818u: goto label_153818;
        case 0x15381cu: goto label_15381c;
        case 0x153820u: goto label_153820;
        case 0x153824u: goto label_153824;
        case 0x153828u: goto label_153828;
        case 0x15382cu: goto label_15382c;
        case 0x153830u: goto label_153830;
        case 0x153834u: goto label_153834;
        case 0x153838u: goto label_153838;
        case 0x15383cu: goto label_15383c;
        case 0x153840u: goto label_153840;
        case 0x153844u: goto label_153844;
        case 0x153848u: goto label_153848;
        case 0x15384cu: goto label_15384c;
        case 0x153850u: goto label_153850;
        case 0x153854u: goto label_153854;
        case 0x153858u: goto label_153858;
        case 0x15385cu: goto label_15385c;
        case 0x153860u: goto label_153860;
        case 0x153864u: goto label_153864;
        case 0x153868u: goto label_153868;
        case 0x15386cu: goto label_15386c;
        case 0x153870u: goto label_153870;
        case 0x153874u: goto label_153874;
        case 0x153878u: goto label_153878;
        case 0x15387cu: goto label_15387c;
        case 0x153880u: goto label_153880;
        case 0x153884u: goto label_153884;
        case 0x153888u: goto label_153888;
        case 0x15388cu: goto label_15388c;
        case 0x153890u: goto label_153890;
        case 0x153894u: goto label_153894;
        case 0x153898u: goto label_153898;
        case 0x15389cu: goto label_15389c;
        case 0x1538a0u: goto label_1538a0;
        case 0x1538a4u: goto label_1538a4;
        case 0x1538a8u: goto label_1538a8;
        case 0x1538acu: goto label_1538ac;
        case 0x1538b0u: goto label_1538b0;
        case 0x1538b4u: goto label_1538b4;
        case 0x1538b8u: goto label_1538b8;
        case 0x1538bcu: goto label_1538bc;
        case 0x1538c0u: goto label_1538c0;
        case 0x1538c4u: goto label_1538c4;
        case 0x1538c8u: goto label_1538c8;
        case 0x1538ccu: goto label_1538cc;
        case 0x1538d0u: goto label_1538d0;
        case 0x1538d4u: goto label_1538d4;
        case 0x1538d8u: goto label_1538d8;
        case 0x1538dcu: goto label_1538dc;
        case 0x1538e0u: goto label_1538e0;
        case 0x1538e4u: goto label_1538e4;
        case 0x1538e8u: goto label_1538e8;
        case 0x1538ecu: goto label_1538ec;
        case 0x1538f0u: goto label_1538f0;
        case 0x1538f4u: goto label_1538f4;
        case 0x1538f8u: goto label_1538f8;
        case 0x1538fcu: goto label_1538fc;
        case 0x153900u: goto label_153900;
        case 0x153904u: goto label_153904;
        case 0x153908u: goto label_153908;
        case 0x15390cu: goto label_15390c;
        case 0x153910u: goto label_153910;
        case 0x153914u: goto label_153914;
        case 0x153918u: goto label_153918;
        case 0x15391cu: goto label_15391c;
        case 0x153920u: goto label_153920;
        case 0x153924u: goto label_153924;
        case 0x153928u: goto label_153928;
        case 0x15392cu: goto label_15392c;
        case 0x153930u: goto label_153930;
        case 0x153934u: goto label_153934;
        case 0x153938u: goto label_153938;
        case 0x15393cu: goto label_15393c;
        case 0x153940u: goto label_153940;
        case 0x153944u: goto label_153944;
        case 0x153948u: goto label_153948;
        case 0x15394cu: goto label_15394c;
        case 0x153950u: goto label_153950;
        case 0x153954u: goto label_153954;
        case 0x153958u: goto label_153958;
        case 0x15395cu: goto label_15395c;
        case 0x153960u: goto label_153960;
        case 0x153964u: goto label_153964;
        case 0x153968u: goto label_153968;
        case 0x15396cu: goto label_15396c;
        case 0x153970u: goto label_153970;
        case 0x153974u: goto label_153974;
        case 0x153978u: goto label_153978;
        case 0x15397cu: goto label_15397c;
        case 0x153980u: goto label_153980;
        case 0x153984u: goto label_153984;
        case 0x153988u: goto label_153988;
        case 0x15398cu: goto label_15398c;
        case 0x153990u: goto label_153990;
        case 0x153994u: goto label_153994;
        case 0x153998u: goto label_153998;
        case 0x15399cu: goto label_15399c;
        case 0x1539a0u: goto label_1539a0;
        case 0x1539a4u: goto label_1539a4;
        case 0x1539a8u: goto label_1539a8;
        case 0x1539acu: goto label_1539ac;
        case 0x1539b0u: goto label_1539b0;
        case 0x1539b4u: goto label_1539b4;
        case 0x1539b8u: goto label_1539b8;
        case 0x1539bcu: goto label_1539bc;
        case 0x1539c0u: goto label_1539c0;
        case 0x1539c4u: goto label_1539c4;
        case 0x1539c8u: goto label_1539c8;
        case 0x1539ccu: goto label_1539cc;
        case 0x1539d0u: goto label_1539d0;
        case 0x1539d4u: goto label_1539d4;
        case 0x1539d8u: goto label_1539d8;
        case 0x1539dcu: goto label_1539dc;
        case 0x1539e0u: goto label_1539e0;
        case 0x1539e4u: goto label_1539e4;
        case 0x1539e8u: goto label_1539e8;
        case 0x1539ecu: goto label_1539ec;
        case 0x1539f0u: goto label_1539f0;
        case 0x1539f4u: goto label_1539f4;
        case 0x1539f8u: goto label_1539f8;
        case 0x1539fcu: goto label_1539fc;
        case 0x153a00u: goto label_153a00;
        case 0x153a04u: goto label_153a04;
        case 0x153a08u: goto label_153a08;
        case 0x153a0cu: goto label_153a0c;
        case 0x153a10u: goto label_153a10;
        case 0x153a14u: goto label_153a14;
        case 0x153a18u: goto label_153a18;
        case 0x153a1cu: goto label_153a1c;
        case 0x153a20u: goto label_153a20;
        case 0x153a24u: goto label_153a24;
        case 0x153a28u: goto label_153a28;
        case 0x153a2cu: goto label_153a2c;
        case 0x153a30u: goto label_153a30;
        case 0x153a34u: goto label_153a34;
        case 0x153a38u: goto label_153a38;
        case 0x153a3cu: goto label_153a3c;
        case 0x153a40u: goto label_153a40;
        case 0x153a44u: goto label_153a44;
        case 0x153a48u: goto label_153a48;
        case 0x153a4cu: goto label_153a4c;
        case 0x153a50u: goto label_153a50;
        case 0x153a54u: goto label_153a54;
        case 0x153a58u: goto label_153a58;
        case 0x153a5cu: goto label_153a5c;
        case 0x153a60u: goto label_153a60;
        case 0x153a64u: goto label_153a64;
        case 0x153a68u: goto label_153a68;
        case 0x153a6cu: goto label_153a6c;
        case 0x153a70u: goto label_153a70;
        case 0x153a74u: goto label_153a74;
        case 0x153a78u: goto label_153a78;
        case 0x153a7cu: goto label_153a7c;
        case 0x153a80u: goto label_153a80;
        case 0x153a84u: goto label_153a84;
        case 0x153a88u: goto label_153a88;
        case 0x153a8cu: goto label_153a8c;
        case 0x153a90u: goto label_153a90;
        case 0x153a94u: goto label_153a94;
        case 0x153a98u: goto label_153a98;
        case 0x153a9cu: goto label_153a9c;
        case 0x153aa0u: goto label_153aa0;
        case 0x153aa4u: goto label_153aa4;
        case 0x153aa8u: goto label_153aa8;
        case 0x153aacu: goto label_153aac;
        case 0x153ab0u: goto label_153ab0;
        case 0x153ab4u: goto label_153ab4;
        case 0x153ab8u: goto label_153ab8;
        case 0x153abcu: goto label_153abc;
        case 0x153ac0u: goto label_153ac0;
        case 0x153ac4u: goto label_153ac4;
        case 0x153ac8u: goto label_153ac8;
        case 0x153accu: goto label_153acc;
        case 0x153ad0u: goto label_153ad0;
        case 0x153ad4u: goto label_153ad4;
        case 0x153ad8u: goto label_153ad8;
        case 0x153adcu: goto label_153adc;
        case 0x153ae0u: goto label_153ae0;
        case 0x153ae4u: goto label_153ae4;
        case 0x153ae8u: goto label_153ae8;
        case 0x153aecu: goto label_153aec;
        case 0x153af0u: goto label_153af0;
        case 0x153af4u: goto label_153af4;
        case 0x153af8u: goto label_153af8;
        case 0x153afcu: goto label_153afc;
        case 0x153b00u: goto label_153b00;
        case 0x153b04u: goto label_153b04;
        case 0x153b08u: goto label_153b08;
        case 0x153b0cu: goto label_153b0c;
        case 0x153b10u: goto label_153b10;
        case 0x153b14u: goto label_153b14;
        case 0x153b18u: goto label_153b18;
        case 0x153b1cu: goto label_153b1c;
        case 0x153b20u: goto label_153b20;
        case 0x153b24u: goto label_153b24;
        case 0x153b28u: goto label_153b28;
        case 0x153b2cu: goto label_153b2c;
        case 0x153b30u: goto label_153b30;
        case 0x153b34u: goto label_153b34;
        case 0x153b38u: goto label_153b38;
        case 0x153b3cu: goto label_153b3c;
        case 0x153b40u: goto label_153b40;
        case 0x153b44u: goto label_153b44;
        case 0x153b48u: goto label_153b48;
        case 0x153b4cu: goto label_153b4c;
        case 0x153b50u: goto label_153b50;
        case 0x153b54u: goto label_153b54;
        case 0x153b58u: goto label_153b58;
        case 0x153b5cu: goto label_153b5c;
        case 0x153b60u: goto label_153b60;
        case 0x153b64u: goto label_153b64;
        case 0x153b68u: goto label_153b68;
        case 0x153b6cu: goto label_153b6c;
        case 0x153b70u: goto label_153b70;
        case 0x153b74u: goto label_153b74;
        case 0x153b78u: goto label_153b78;
        case 0x153b7cu: goto label_153b7c;
        case 0x153b80u: goto label_153b80;
        case 0x153b84u: goto label_153b84;
        case 0x153b88u: goto label_153b88;
        case 0x153b8cu: goto label_153b8c;
        case 0x153b90u: goto label_153b90;
        case 0x153b94u: goto label_153b94;
        case 0x153b98u: goto label_153b98;
        case 0x153b9cu: goto label_153b9c;
        case 0x153ba0u: goto label_153ba0;
        case 0x153ba4u: goto label_153ba4;
        case 0x153ba8u: goto label_153ba8;
        case 0x153bacu: goto label_153bac;
        case 0x153bb0u: goto label_153bb0;
        case 0x153bb4u: goto label_153bb4;
        case 0x153bb8u: goto label_153bb8;
        case 0x153bbcu: goto label_153bbc;
        case 0x153bc0u: goto label_153bc0;
        case 0x153bc4u: goto label_153bc4;
        case 0x153bc8u: goto label_153bc8;
        case 0x153bccu: goto label_153bcc;
        case 0x153bd0u: goto label_153bd0;
        case 0x153bd4u: goto label_153bd4;
        case 0x153bd8u: goto label_153bd8;
        case 0x153bdcu: goto label_153bdc;
        case 0x153be0u: goto label_153be0;
        case 0x153be4u: goto label_153be4;
        case 0x153be8u: goto label_153be8;
        case 0x153becu: goto label_153bec;
        case 0x153bf0u: goto label_153bf0;
        case 0x153bf4u: goto label_153bf4;
        case 0x153bf8u: goto label_153bf8;
        case 0x153bfcu: goto label_153bfc;
        case 0x153c00u: goto label_153c00;
        case 0x153c04u: goto label_153c04;
        case 0x153c08u: goto label_153c08;
        case 0x153c0cu: goto label_153c0c;
        case 0x153c10u: goto label_153c10;
        case 0x153c14u: goto label_153c14;
        case 0x153c18u: goto label_153c18;
        case 0x153c1cu: goto label_153c1c;
        case 0x153c20u: goto label_153c20;
        case 0x153c24u: goto label_153c24;
        case 0x153c28u: goto label_153c28;
        case 0x153c2cu: goto label_153c2c;
        case 0x153c30u: goto label_153c30;
        case 0x153c34u: goto label_153c34;
        case 0x153c38u: goto label_153c38;
        case 0x153c3cu: goto label_153c3c;
        case 0x153c40u: goto label_153c40;
        case 0x153c44u: goto label_153c44;
        case 0x153c48u: goto label_153c48;
        case 0x153c4cu: goto label_153c4c;
        case 0x153c50u: goto label_153c50;
        case 0x153c54u: goto label_153c54;
        case 0x153c58u: goto label_153c58;
        case 0x153c5cu: goto label_153c5c;
        case 0x153c60u: goto label_153c60;
        case 0x153c64u: goto label_153c64;
        case 0x153c68u: goto label_153c68;
        case 0x153c6cu: goto label_153c6c;
        case 0x153c70u: goto label_153c70;
        case 0x153c74u: goto label_153c74;
        case 0x153c78u: goto label_153c78;
        case 0x153c7cu: goto label_153c7c;
        case 0x153c80u: goto label_153c80;
        case 0x153c84u: goto label_153c84;
        case 0x153c88u: goto label_153c88;
        case 0x153c8cu: goto label_153c8c;
        case 0x153c90u: goto label_153c90;
        case 0x153c94u: goto label_153c94;
        case 0x153c98u: goto label_153c98;
        case 0x153c9cu: goto label_153c9c;
        case 0x153ca0u: goto label_153ca0;
        case 0x153ca4u: goto label_153ca4;
        case 0x153ca8u: goto label_153ca8;
        case 0x153cacu: goto label_153cac;
        case 0x153cb0u: goto label_153cb0;
        case 0x153cb4u: goto label_153cb4;
        case 0x153cb8u: goto label_153cb8;
        case 0x153cbcu: goto label_153cbc;
        case 0x153cc0u: goto label_153cc0;
        case 0x153cc4u: goto label_153cc4;
        case 0x153cc8u: goto label_153cc8;
        case 0x153cccu: goto label_153ccc;
        case 0x153cd0u: goto label_153cd0;
        case 0x153cd4u: goto label_153cd4;
        case 0x153cd8u: goto label_153cd8;
        case 0x153cdcu: goto label_153cdc;
        case 0x153ce0u: goto label_153ce0;
        case 0x153ce4u: goto label_153ce4;
        case 0x153ce8u: goto label_153ce8;
        case 0x153cecu: goto label_153cec;
        case 0x153cf0u: goto label_153cf0;
        case 0x153cf4u: goto label_153cf4;
        case 0x153cf8u: goto label_153cf8;
        case 0x153cfcu: goto label_153cfc;
        case 0x153d00u: goto label_153d00;
        case 0x153d04u: goto label_153d04;
        case 0x153d08u: goto label_153d08;
        case 0x153d0cu: goto label_153d0c;
        case 0x153d10u: goto label_153d10;
        case 0x153d14u: goto label_153d14;
        case 0x153d18u: goto label_153d18;
        case 0x153d1cu: goto label_153d1c;
        case 0x153d20u: goto label_153d20;
        case 0x153d24u: goto label_153d24;
        case 0x153d28u: goto label_153d28;
        case 0x153d2cu: goto label_153d2c;
        case 0x153d30u: goto label_153d30;
        case 0x153d34u: goto label_153d34;
        case 0x153d38u: goto label_153d38;
        case 0x153d3cu: goto label_153d3c;
        case 0x153d40u: goto label_153d40;
        case 0x153d44u: goto label_153d44;
        case 0x153d48u: goto label_153d48;
        case 0x153d4cu: goto label_153d4c;
        case 0x153d50u: goto label_153d50;
        case 0x153d54u: goto label_153d54;
        case 0x153d58u: goto label_153d58;
        case 0x153d5cu: goto label_153d5c;
        case 0x153d60u: goto label_153d60;
        case 0x153d64u: goto label_153d64;
        case 0x153d68u: goto label_153d68;
        case 0x153d6cu: goto label_153d6c;
        case 0x153d70u: goto label_153d70;
        case 0x153d74u: goto label_153d74;
        case 0x153d78u: goto label_153d78;
        case 0x153d7cu: goto label_153d7c;
        case 0x153d80u: goto label_153d80;
        case 0x153d84u: goto label_153d84;
        case 0x153d88u: goto label_153d88;
        case 0x153d8cu: goto label_153d8c;
        case 0x153d90u: goto label_153d90;
        case 0x153d94u: goto label_153d94;
        case 0x153d98u: goto label_153d98;
        case 0x153d9cu: goto label_153d9c;
        case 0x153da0u: goto label_153da0;
        case 0x153da4u: goto label_153da4;
        case 0x153da8u: goto label_153da8;
        case 0x153dacu: goto label_153dac;
        case 0x153db0u: goto label_153db0;
        case 0x153db4u: goto label_153db4;
        case 0x153db8u: goto label_153db8;
        case 0x153dbcu: goto label_153dbc;
        case 0x153dc0u: goto label_153dc0;
        case 0x153dc4u: goto label_153dc4;
        case 0x153dc8u: goto label_153dc8;
        case 0x153dccu: goto label_153dcc;
        case 0x153dd0u: goto label_153dd0;
        case 0x153dd4u: goto label_153dd4;
        case 0x153dd8u: goto label_153dd8;
        case 0x153ddcu: goto label_153ddc;
        case 0x153de0u: goto label_153de0;
        case 0x153de4u: goto label_153de4;
        case 0x153de8u: goto label_153de8;
        case 0x153decu: goto label_153dec;
        case 0x153df0u: goto label_153df0;
        case 0x153df4u: goto label_153df4;
        case 0x153df8u: goto label_153df8;
        case 0x153dfcu: goto label_153dfc;
        case 0x153e00u: goto label_153e00;
        case 0x153e04u: goto label_153e04;
        case 0x153e08u: goto label_153e08;
        case 0x153e0cu: goto label_153e0c;
        case 0x153e10u: goto label_153e10;
        case 0x153e14u: goto label_153e14;
        case 0x153e18u: goto label_153e18;
        case 0x153e1cu: goto label_153e1c;
        case 0x153e20u: goto label_153e20;
        case 0x153e24u: goto label_153e24;
        case 0x153e28u: goto label_153e28;
        case 0x153e2cu: goto label_153e2c;
        case 0x153e30u: goto label_153e30;
        case 0x153e34u: goto label_153e34;
        case 0x153e38u: goto label_153e38;
        case 0x153e3cu: goto label_153e3c;
        case 0x153e40u: goto label_153e40;
        case 0x153e44u: goto label_153e44;
        case 0x153e48u: goto label_153e48;
        case 0x153e4cu: goto label_153e4c;
        case 0x153e50u: goto label_153e50;
        case 0x153e54u: goto label_153e54;
        case 0x153e58u: goto label_153e58;
        case 0x153e5cu: goto label_153e5c;
        case 0x153e60u: goto label_153e60;
        case 0x153e64u: goto label_153e64;
        case 0x153e68u: goto label_153e68;
        case 0x153e6cu: goto label_153e6c;
        case 0x153e70u: goto label_153e70;
        case 0x153e74u: goto label_153e74;
        case 0x153e78u: goto label_153e78;
        case 0x153e7cu: goto label_153e7c;
        case 0x153e80u: goto label_153e80;
        case 0x153e84u: goto label_153e84;
        case 0x153e88u: goto label_153e88;
        case 0x153e8cu: goto label_153e8c;
        case 0x153e90u: goto label_153e90;
        case 0x153e94u: goto label_153e94;
        case 0x153e98u: goto label_153e98;
        case 0x153e9cu: goto label_153e9c;
        case 0x153ea0u: goto label_153ea0;
        case 0x153ea4u: goto label_153ea4;
        case 0x153ea8u: goto label_153ea8;
        case 0x153eacu: goto label_153eac;
        case 0x153eb0u: goto label_153eb0;
        case 0x153eb4u: goto label_153eb4;
        case 0x153eb8u: goto label_153eb8;
        case 0x153ebcu: goto label_153ebc;
        case 0x153ec0u: goto label_153ec0;
        case 0x153ec4u: goto label_153ec4;
        case 0x153ec8u: goto label_153ec8;
        case 0x153eccu: goto label_153ecc;
        case 0x153ed0u: goto label_153ed0;
        case 0x153ed4u: goto label_153ed4;
        case 0x153ed8u: goto label_153ed8;
        case 0x153edcu: goto label_153edc;
        case 0x153ee0u: goto label_153ee0;
        case 0x153ee4u: goto label_153ee4;
        case 0x153ee8u: goto label_153ee8;
        case 0x153eecu: goto label_153eec;
        case 0x153ef0u: goto label_153ef0;
        case 0x153ef4u: goto label_153ef4;
        case 0x153ef8u: goto label_153ef8;
        case 0x153efcu: goto label_153efc;
        case 0x153f00u: goto label_153f00;
        case 0x153f04u: goto label_153f04;
        case 0x153f08u: goto label_153f08;
        case 0x153f0cu: goto label_153f0c;
        case 0x153f10u: goto label_153f10;
        case 0x153f14u: goto label_153f14;
        case 0x153f18u: goto label_153f18;
        case 0x153f1cu: goto label_153f1c;
        case 0x153f20u: goto label_153f20;
        case 0x153f24u: goto label_153f24;
        case 0x153f28u: goto label_153f28;
        case 0x153f2cu: goto label_153f2c;
        case 0x153f30u: goto label_153f30;
        case 0x153f34u: goto label_153f34;
        case 0x153f38u: goto label_153f38;
        case 0x153f3cu: goto label_153f3c;
        case 0x153f40u: goto label_153f40;
        case 0x153f44u: goto label_153f44;
        case 0x153f48u: goto label_153f48;
        case 0x153f4cu: goto label_153f4c;
        case 0x153f50u: goto label_153f50;
        case 0x153f54u: goto label_153f54;
        case 0x153f58u: goto label_153f58;
        case 0x153f5cu: goto label_153f5c;
        case 0x153f60u: goto label_153f60;
        case 0x153f64u: goto label_153f64;
        case 0x153f68u: goto label_153f68;
        case 0x153f6cu: goto label_153f6c;
        case 0x153f70u: goto label_153f70;
        case 0x153f74u: goto label_153f74;
        case 0x153f78u: goto label_153f78;
        case 0x153f7cu: goto label_153f7c;
        case 0x153f80u: goto label_153f80;
        case 0x153f84u: goto label_153f84;
        case 0x153f88u: goto label_153f88;
        case 0x153f8cu: goto label_153f8c;
        case 0x153f90u: goto label_153f90;
        case 0x153f94u: goto label_153f94;
        case 0x153f98u: goto label_153f98;
        case 0x153f9cu: goto label_153f9c;
        case 0x153fa0u: goto label_153fa0;
        case 0x153fa4u: goto label_153fa4;
        case 0x153fa8u: goto label_153fa8;
        case 0x153facu: goto label_153fac;
        case 0x153fb0u: goto label_153fb0;
        case 0x153fb4u: goto label_153fb4;
        case 0x153fb8u: goto label_153fb8;
        case 0x153fbcu: goto label_153fbc;
        case 0x153fc0u: goto label_153fc0;
        case 0x153fc4u: goto label_153fc4;
        case 0x153fc8u: goto label_153fc8;
        case 0x153fccu: goto label_153fcc;
        case 0x153fd0u: goto label_153fd0;
        case 0x153fd4u: goto label_153fd4;
        case 0x153fd8u: goto label_153fd8;
        case 0x153fdcu: goto label_153fdc;
        case 0x153fe0u: goto label_153fe0;
        case 0x153fe4u: goto label_153fe4;
        case 0x153fe8u: goto label_153fe8;
        case 0x153fecu: goto label_153fec;
        case 0x153ff0u: goto label_153ff0;
        case 0x153ff4u: goto label_153ff4;
        case 0x153ff8u: goto label_153ff8;
        case 0x153ffcu: goto label_153ffc;
        case 0x154000u: goto label_154000;
        case 0x154004u: goto label_154004;
        case 0x154008u: goto label_154008;
        case 0x15400cu: goto label_15400c;
        case 0x154010u: goto label_154010;
        case 0x154014u: goto label_154014;
        case 0x154018u: goto label_154018;
        case 0x15401cu: goto label_15401c;
        case 0x154020u: goto label_154020;
        case 0x154024u: goto label_154024;
        case 0x154028u: goto label_154028;
        case 0x15402cu: goto label_15402c;
        case 0x154030u: goto label_154030;
        case 0x154034u: goto label_154034;
        case 0x154038u: goto label_154038;
        case 0x15403cu: goto label_15403c;
        case 0x154040u: goto label_154040;
        case 0x154044u: goto label_154044;
        case 0x154048u: goto label_154048;
        case 0x15404cu: goto label_15404c;
        case 0x154050u: goto label_154050;
        case 0x154054u: goto label_154054;
        case 0x154058u: goto label_154058;
        case 0x15405cu: goto label_15405c;
        case 0x154060u: goto label_154060;
        case 0x154064u: goto label_154064;
        case 0x154068u: goto label_154068;
        case 0x15406cu: goto label_15406c;
        case 0x154070u: goto label_154070;
        case 0x154074u: goto label_154074;
        case 0x154078u: goto label_154078;
        case 0x15407cu: goto label_15407c;
        case 0x154080u: goto label_154080;
        case 0x154084u: goto label_154084;
        case 0x154088u: goto label_154088;
        case 0x15408cu: goto label_15408c;
        case 0x154090u: goto label_154090;
        case 0x154094u: goto label_154094;
        case 0x154098u: goto label_154098;
        case 0x15409cu: goto label_15409c;
        case 0x1540a0u: goto label_1540a0;
        case 0x1540a4u: goto label_1540a4;
        case 0x1540a8u: goto label_1540a8;
        case 0x1540acu: goto label_1540ac;
        case 0x1540b0u: goto label_1540b0;
        case 0x1540b4u: goto label_1540b4;
        case 0x1540b8u: goto label_1540b8;
        case 0x1540bcu: goto label_1540bc;
        case 0x1540c0u: goto label_1540c0;
        case 0x1540c4u: goto label_1540c4;
        case 0x1540c8u: goto label_1540c8;
        case 0x1540ccu: goto label_1540cc;
        case 0x1540d0u: goto label_1540d0;
        case 0x1540d4u: goto label_1540d4;
        case 0x1540d8u: goto label_1540d8;
        case 0x1540dcu: goto label_1540dc;
        case 0x1540e0u: goto label_1540e0;
        case 0x1540e4u: goto label_1540e4;
        case 0x1540e8u: goto label_1540e8;
        case 0x1540ecu: goto label_1540ec;
        case 0x1540f0u: goto label_1540f0;
        case 0x1540f4u: goto label_1540f4;
        case 0x1540f8u: goto label_1540f8;
        case 0x1540fcu: goto label_1540fc;
        case 0x154100u: goto label_154100;
        case 0x154104u: goto label_154104;
        case 0x154108u: goto label_154108;
        case 0x15410cu: goto label_15410c;
        case 0x154110u: goto label_154110;
        case 0x154114u: goto label_154114;
        case 0x154118u: goto label_154118;
        case 0x15411cu: goto label_15411c;
        case 0x154120u: goto label_154120;
        case 0x154124u: goto label_154124;
        case 0x154128u: goto label_154128;
        case 0x15412cu: goto label_15412c;
        case 0x154130u: goto label_154130;
        case 0x154134u: goto label_154134;
        case 0x154138u: goto label_154138;
        case 0x15413cu: goto label_15413c;
        case 0x154140u: goto label_154140;
        case 0x154144u: goto label_154144;
        case 0x154148u: goto label_154148;
        case 0x15414cu: goto label_15414c;
        case 0x154150u: goto label_154150;
        case 0x154154u: goto label_154154;
        case 0x154158u: goto label_154158;
        case 0x15415cu: goto label_15415c;
        case 0x154160u: goto label_154160;
        case 0x154164u: goto label_154164;
        case 0x154168u: goto label_154168;
        case 0x15416cu: goto label_15416c;
        case 0x154170u: goto label_154170;
        case 0x154174u: goto label_154174;
        case 0x154178u: goto label_154178;
        case 0x15417cu: goto label_15417c;
        case 0x154180u: goto label_154180;
        case 0x154184u: goto label_154184;
        case 0x154188u: goto label_154188;
        case 0x15418cu: goto label_15418c;
        case 0x154190u: goto label_154190;
        case 0x154194u: goto label_154194;
        case 0x154198u: goto label_154198;
        case 0x15419cu: goto label_15419c;
        case 0x1541a0u: goto label_1541a0;
        case 0x1541a4u: goto label_1541a4;
        case 0x1541a8u: goto label_1541a8;
        case 0x1541acu: goto label_1541ac;
        case 0x1541b0u: goto label_1541b0;
        case 0x1541b4u: goto label_1541b4;
        case 0x1541b8u: goto label_1541b8;
        case 0x1541bcu: goto label_1541bc;
        case 0x1541c0u: goto label_1541c0;
        case 0x1541c4u: goto label_1541c4;
        case 0x1541c8u: goto label_1541c8;
        case 0x1541ccu: goto label_1541cc;
        case 0x1541d0u: goto label_1541d0;
        case 0x1541d4u: goto label_1541d4;
        case 0x1541d8u: goto label_1541d8;
        case 0x1541dcu: goto label_1541dc;
        case 0x1541e0u: goto label_1541e0;
        case 0x1541e4u: goto label_1541e4;
        case 0x1541e8u: goto label_1541e8;
        case 0x1541ecu: goto label_1541ec;
        case 0x1541f0u: goto label_1541f0;
        case 0x1541f4u: goto label_1541f4;
        case 0x1541f8u: goto label_1541f8;
        case 0x1541fcu: goto label_1541fc;
        case 0x154200u: goto label_154200;
        case 0x154204u: goto label_154204;
        case 0x154208u: goto label_154208;
        case 0x15420cu: goto label_15420c;
        case 0x154210u: goto label_154210;
        case 0x154214u: goto label_154214;
        case 0x154218u: goto label_154218;
        case 0x15421cu: goto label_15421c;
        case 0x154220u: goto label_154220;
        case 0x154224u: goto label_154224;
        case 0x154228u: goto label_154228;
        case 0x15422cu: goto label_15422c;
        case 0x154230u: goto label_154230;
        case 0x154234u: goto label_154234;
        case 0x154238u: goto label_154238;
        case 0x15423cu: goto label_15423c;
        case 0x154240u: goto label_154240;
        case 0x154244u: goto label_154244;
        case 0x154248u: goto label_154248;
        case 0x15424cu: goto label_15424c;
        case 0x154250u: goto label_154250;
        case 0x154254u: goto label_154254;
        case 0x154258u: goto label_154258;
        case 0x15425cu: goto label_15425c;
        case 0x154260u: goto label_154260;
        case 0x154264u: goto label_154264;
        case 0x154268u: goto label_154268;
        case 0x15426cu: goto label_15426c;
        case 0x154270u: goto label_154270;
        case 0x154274u: goto label_154274;
        case 0x154278u: goto label_154278;
        case 0x15427cu: goto label_15427c;
        case 0x154280u: goto label_154280;
        case 0x154284u: goto label_154284;
        case 0x154288u: goto label_154288;
        case 0x15428cu: goto label_15428c;
        case 0x154290u: goto label_154290;
        case 0x154294u: goto label_154294;
        case 0x154298u: goto label_154298;
        case 0x15429cu: goto label_15429c;
        case 0x1542a0u: goto label_1542a0;
        case 0x1542a4u: goto label_1542a4;
        case 0x1542a8u: goto label_1542a8;
        case 0x1542acu: goto label_1542ac;
        case 0x1542b0u: goto label_1542b0;
        case 0x1542b4u: goto label_1542b4;
        case 0x1542b8u: goto label_1542b8;
        case 0x1542bcu: goto label_1542bc;
        case 0x1542c0u: goto label_1542c0;
        case 0x1542c4u: goto label_1542c4;
        case 0x1542c8u: goto label_1542c8;
        case 0x1542ccu: goto label_1542cc;
        case 0x1542d0u: goto label_1542d0;
        case 0x1542d4u: goto label_1542d4;
        case 0x1542d8u: goto label_1542d8;
        case 0x1542dcu: goto label_1542dc;
        case 0x1542e0u: goto label_1542e0;
        case 0x1542e4u: goto label_1542e4;
        case 0x1542e8u: goto label_1542e8;
        case 0x1542ecu: goto label_1542ec;
        case 0x1542f0u: goto label_1542f0;
        case 0x1542f4u: goto label_1542f4;
        case 0x1542f8u: goto label_1542f8;
        case 0x1542fcu: goto label_1542fc;
        case 0x154300u: goto label_154300;
        case 0x154304u: goto label_154304;
        case 0x154308u: goto label_154308;
        case 0x15430cu: goto label_15430c;
        case 0x154310u: goto label_154310;
        case 0x154314u: goto label_154314;
        case 0x154318u: goto label_154318;
        case 0x15431cu: goto label_15431c;
        case 0x154320u: goto label_154320;
        case 0x154324u: goto label_154324;
        case 0x154328u: goto label_154328;
        case 0x15432cu: goto label_15432c;
        case 0x154330u: goto label_154330;
        case 0x154334u: goto label_154334;
        case 0x154338u: goto label_154338;
        case 0x15433cu: goto label_15433c;
        case 0x154340u: goto label_154340;
        case 0x154344u: goto label_154344;
        case 0x154348u: goto label_154348;
        case 0x15434cu: goto label_15434c;
        case 0x154350u: goto label_154350;
        case 0x154354u: goto label_154354;
        case 0x154358u: goto label_154358;
        case 0x15435cu: goto label_15435c;
        case 0x154360u: goto label_154360;
        case 0x154364u: goto label_154364;
        case 0x154368u: goto label_154368;
        case 0x15436cu: goto label_15436c;
        case 0x154370u: goto label_154370;
        case 0x154374u: goto label_154374;
        case 0x154378u: goto label_154378;
        case 0x15437cu: goto label_15437c;
        case 0x154380u: goto label_154380;
        case 0x154384u: goto label_154384;
        case 0x154388u: goto label_154388;
        case 0x15438cu: goto label_15438c;
        case 0x154390u: goto label_154390;
        case 0x154394u: goto label_154394;
        case 0x154398u: goto label_154398;
        case 0x15439cu: goto label_15439c;
        case 0x1543a0u: goto label_1543a0;
        case 0x1543a4u: goto label_1543a4;
        case 0x1543a8u: goto label_1543a8;
        case 0x1543acu: goto label_1543ac;
        case 0x1543b0u: goto label_1543b0;
        case 0x1543b4u: goto label_1543b4;
        case 0x1543b8u: goto label_1543b8;
        case 0x1543bcu: goto label_1543bc;
        case 0x1543c0u: goto label_1543c0;
        case 0x1543c4u: goto label_1543c4;
        case 0x1543c8u: goto label_1543c8;
        case 0x1543ccu: goto label_1543cc;
        case 0x1543d0u: goto label_1543d0;
        case 0x1543d4u: goto label_1543d4;
        case 0x1543d8u: goto label_1543d8;
        case 0x1543dcu: goto label_1543dc;
        case 0x1543e0u: goto label_1543e0;
        case 0x1543e4u: goto label_1543e4;
        case 0x1543e8u: goto label_1543e8;
        case 0x1543ecu: goto label_1543ec;
        case 0x1543f0u: goto label_1543f0;
        case 0x1543f4u: goto label_1543f4;
        case 0x1543f8u: goto label_1543f8;
        case 0x1543fcu: goto label_1543fc;
        case 0x154400u: goto label_154400;
        case 0x154404u: goto label_154404;
        case 0x154408u: goto label_154408;
        case 0x15440cu: goto label_15440c;
        case 0x154410u: goto label_154410;
        case 0x154414u: goto label_154414;
        case 0x154418u: goto label_154418;
        case 0x15441cu: goto label_15441c;
        case 0x154420u: goto label_154420;
        case 0x154424u: goto label_154424;
        case 0x154428u: goto label_154428;
        case 0x15442cu: goto label_15442c;
        case 0x154430u: goto label_154430;
        case 0x154434u: goto label_154434;
        case 0x154438u: goto label_154438;
        case 0x15443cu: goto label_15443c;
        case 0x154440u: goto label_154440;
        case 0x154444u: goto label_154444;
        case 0x154448u: goto label_154448;
        case 0x15444cu: goto label_15444c;
        case 0x154450u: goto label_154450;
        case 0x154454u: goto label_154454;
        case 0x154458u: goto label_154458;
        case 0x15445cu: goto label_15445c;
        case 0x154460u: goto label_154460;
        case 0x154464u: goto label_154464;
        case 0x154468u: goto label_154468;
        case 0x15446cu: goto label_15446c;
        case 0x154470u: goto label_154470;
        case 0x154474u: goto label_154474;
        case 0x154478u: goto label_154478;
        case 0x15447cu: goto label_15447c;
        case 0x154480u: goto label_154480;
        case 0x154484u: goto label_154484;
        case 0x154488u: goto label_154488;
        case 0x15448cu: goto label_15448c;
        case 0x154490u: goto label_154490;
        case 0x154494u: goto label_154494;
        case 0x154498u: goto label_154498;
        case 0x15449cu: goto label_15449c;
        case 0x1544a0u: goto label_1544a0;
        case 0x1544a4u: goto label_1544a4;
        case 0x1544a8u: goto label_1544a8;
        case 0x1544acu: goto label_1544ac;
        case 0x1544b0u: goto label_1544b0;
        case 0x1544b4u: goto label_1544b4;
        case 0x1544b8u: goto label_1544b8;
        case 0x1544bcu: goto label_1544bc;
        case 0x1544c0u: goto label_1544c0;
        case 0x1544c4u: goto label_1544c4;
        case 0x1544c8u: goto label_1544c8;
        case 0x1544ccu: goto label_1544cc;
        case 0x1544d0u: goto label_1544d0;
        case 0x1544d4u: goto label_1544d4;
        case 0x1544d8u: goto label_1544d8;
        case 0x1544dcu: goto label_1544dc;
        case 0x1544e0u: goto label_1544e0;
        case 0x1544e4u: goto label_1544e4;
        case 0x1544e8u: goto label_1544e8;
        case 0x1544ecu: goto label_1544ec;
        case 0x1544f0u: goto label_1544f0;
        case 0x1544f4u: goto label_1544f4;
        case 0x1544f8u: goto label_1544f8;
        case 0x1544fcu: goto label_1544fc;
        case 0x154500u: goto label_154500;
        case 0x154504u: goto label_154504;
        case 0x154508u: goto label_154508;
        case 0x15450cu: goto label_15450c;
        case 0x154510u: goto label_154510;
        case 0x154514u: goto label_154514;
        case 0x154518u: goto label_154518;
        case 0x15451cu: goto label_15451c;
        case 0x154520u: goto label_154520;
        case 0x154524u: goto label_154524;
        case 0x154528u: goto label_154528;
        case 0x15452cu: goto label_15452c;
        case 0x154530u: goto label_154530;
        case 0x154534u: goto label_154534;
        case 0x154538u: goto label_154538;
        case 0x15453cu: goto label_15453c;
        case 0x154540u: goto label_154540;
        case 0x154544u: goto label_154544;
        case 0x154548u: goto label_154548;
        case 0x15454cu: goto label_15454c;
        case 0x154550u: goto label_154550;
        case 0x154554u: goto label_154554;
        case 0x154558u: goto label_154558;
        case 0x15455cu: goto label_15455c;
        case 0x154560u: goto label_154560;
        case 0x154564u: goto label_154564;
        case 0x154568u: goto label_154568;
        case 0x15456cu: goto label_15456c;
        case 0x154570u: goto label_154570;
        case 0x154574u: goto label_154574;
        case 0x154578u: goto label_154578;
        case 0x15457cu: goto label_15457c;
        case 0x154580u: goto label_154580;
        case 0x154584u: goto label_154584;
        case 0x154588u: goto label_154588;
        case 0x15458cu: goto label_15458c;
        case 0x154590u: goto label_154590;
        case 0x154594u: goto label_154594;
        case 0x154598u: goto label_154598;
        case 0x15459cu: goto label_15459c;
        case 0x1545a0u: goto label_1545a0;
        case 0x1545a4u: goto label_1545a4;
        case 0x1545a8u: goto label_1545a8;
        case 0x1545acu: goto label_1545ac;
        case 0x1545b0u: goto label_1545b0;
        case 0x1545b4u: goto label_1545b4;
        case 0x1545b8u: goto label_1545b8;
        case 0x1545bcu: goto label_1545bc;
        case 0x1545c0u: goto label_1545c0;
        case 0x1545c4u: goto label_1545c4;
        case 0x1545c8u: goto label_1545c8;
        case 0x1545ccu: goto label_1545cc;
        case 0x1545d0u: goto label_1545d0;
        case 0x1545d4u: goto label_1545d4;
        case 0x1545d8u: goto label_1545d8;
        case 0x1545dcu: goto label_1545dc;
        case 0x1545e0u: goto label_1545e0;
        case 0x1545e4u: goto label_1545e4;
        case 0x1545e8u: goto label_1545e8;
        case 0x1545ecu: goto label_1545ec;
        case 0x1545f0u: goto label_1545f0;
        case 0x1545f4u: goto label_1545f4;
        case 0x1545f8u: goto label_1545f8;
        case 0x1545fcu: goto label_1545fc;
        case 0x154600u: goto label_154600;
        case 0x154604u: goto label_154604;
        case 0x154608u: goto label_154608;
        case 0x15460cu: goto label_15460c;
        case 0x154610u: goto label_154610;
        case 0x154614u: goto label_154614;
        case 0x154618u: goto label_154618;
        case 0x15461cu: goto label_15461c;
        case 0x154620u: goto label_154620;
        case 0x154624u: goto label_154624;
        case 0x154628u: goto label_154628;
        case 0x15462cu: goto label_15462c;
        case 0x154630u: goto label_154630;
        case 0x154634u: goto label_154634;
        case 0x154638u: goto label_154638;
        case 0x15463cu: goto label_15463c;
        case 0x154640u: goto label_154640;
        case 0x154644u: goto label_154644;
        case 0x154648u: goto label_154648;
        case 0x15464cu: goto label_15464c;
        case 0x154650u: goto label_154650;
        case 0x154654u: goto label_154654;
        case 0x154658u: goto label_154658;
        case 0x15465cu: goto label_15465c;
        case 0x154660u: goto label_154660;
        case 0x154664u: goto label_154664;
        case 0x154668u: goto label_154668;
        case 0x15466cu: goto label_15466c;
        case 0x154670u: goto label_154670;
        case 0x154674u: goto label_154674;
        case 0x154678u: goto label_154678;
        case 0x15467cu: goto label_15467c;
        case 0x154680u: goto label_154680;
        case 0x154684u: goto label_154684;
        case 0x154688u: goto label_154688;
        case 0x15468cu: goto label_15468c;
        case 0x154690u: goto label_154690;
        case 0x154694u: goto label_154694;
        case 0x154698u: goto label_154698;
        case 0x15469cu: goto label_15469c;
        case 0x1546a0u: goto label_1546a0;
        case 0x1546a4u: goto label_1546a4;
        case 0x1546a8u: goto label_1546a8;
        case 0x1546acu: goto label_1546ac;
        case 0x1546b0u: goto label_1546b0;
        case 0x1546b4u: goto label_1546b4;
        case 0x1546b8u: goto label_1546b8;
        case 0x1546bcu: goto label_1546bc;
        case 0x1546c0u: goto label_1546c0;
        case 0x1546c4u: goto label_1546c4;
        case 0x1546c8u: goto label_1546c8;
        case 0x1546ccu: goto label_1546cc;
        case 0x1546d0u: goto label_1546d0;
        case 0x1546d4u: goto label_1546d4;
        case 0x1546d8u: goto label_1546d8;
        case 0x1546dcu: goto label_1546dc;
        case 0x1546e0u: goto label_1546e0;
        case 0x1546e4u: goto label_1546e4;
        case 0x1546e8u: goto label_1546e8;
        case 0x1546ecu: goto label_1546ec;
        case 0x1546f0u: goto label_1546f0;
        case 0x1546f4u: goto label_1546f4;
        case 0x1546f8u: goto label_1546f8;
        case 0x1546fcu: goto label_1546fc;
        case 0x154700u: goto label_154700;
        case 0x154704u: goto label_154704;
        case 0x154708u: goto label_154708;
        case 0x15470cu: goto label_15470c;
        case 0x154710u: goto label_154710;
        case 0x154714u: goto label_154714;
        case 0x154718u: goto label_154718;
        case 0x15471cu: goto label_15471c;
        case 0x154720u: goto label_154720;
        case 0x154724u: goto label_154724;
        case 0x154728u: goto label_154728;
        case 0x15472cu: goto label_15472c;
        case 0x154730u: goto label_154730;
        case 0x154734u: goto label_154734;
        case 0x154738u: goto label_154738;
        case 0x15473cu: goto label_15473c;
        case 0x154740u: goto label_154740;
        case 0x154744u: goto label_154744;
        case 0x154748u: goto label_154748;
        case 0x15474cu: goto label_15474c;
        case 0x154750u: goto label_154750;
        case 0x154754u: goto label_154754;
        case 0x154758u: goto label_154758;
        case 0x15475cu: goto label_15475c;
        case 0x154760u: goto label_154760;
        case 0x154764u: goto label_154764;
        case 0x154768u: goto label_154768;
        case 0x15476cu: goto label_15476c;
        case 0x154770u: goto label_154770;
        case 0x154774u: goto label_154774;
        case 0x154778u: goto label_154778;
        case 0x15477cu: goto label_15477c;
        case 0x154780u: goto label_154780;
        case 0x154784u: goto label_154784;
        case 0x154788u: goto label_154788;
        case 0x15478cu: goto label_15478c;
        case 0x154790u: goto label_154790;
        case 0x154794u: goto label_154794;
        case 0x154798u: goto label_154798;
        case 0x15479cu: goto label_15479c;
        case 0x1547a0u: goto label_1547a0;
        case 0x1547a4u: goto label_1547a4;
        case 0x1547a8u: goto label_1547a8;
        case 0x1547acu: goto label_1547ac;
        case 0x1547b0u: goto label_1547b0;
        case 0x1547b4u: goto label_1547b4;
        case 0x1547b8u: goto label_1547b8;
        case 0x1547bcu: goto label_1547bc;
        case 0x1547c0u: goto label_1547c0;
        case 0x1547c4u: goto label_1547c4;
        case 0x1547c8u: goto label_1547c8;
        case 0x1547ccu: goto label_1547cc;
        case 0x1547d0u: goto label_1547d0;
        case 0x1547d4u: goto label_1547d4;
        case 0x1547d8u: goto label_1547d8;
        case 0x1547dcu: goto label_1547dc;
        case 0x1547e0u: goto label_1547e0;
        case 0x1547e4u: goto label_1547e4;
        case 0x1547e8u: goto label_1547e8;
        case 0x1547ecu: goto label_1547ec;
        case 0x1547f0u: goto label_1547f0;
        case 0x1547f4u: goto label_1547f4;
        case 0x1547f8u: goto label_1547f8;
        case 0x1547fcu: goto label_1547fc;
        case 0x154800u: goto label_154800;
        case 0x154804u: goto label_154804;
        case 0x154808u: goto label_154808;
        case 0x15480cu: goto label_15480c;
        case 0x154810u: goto label_154810;
        case 0x154814u: goto label_154814;
        case 0x154818u: goto label_154818;
        case 0x15481cu: goto label_15481c;
        case 0x154820u: goto label_154820;
        case 0x154824u: goto label_154824;
        case 0x154828u: goto label_154828;
        case 0x15482cu: goto label_15482c;
        case 0x154830u: goto label_154830;
        case 0x154834u: goto label_154834;
        case 0x154838u: goto label_154838;
        case 0x15483cu: goto label_15483c;
        case 0x154840u: goto label_154840;
        case 0x154844u: goto label_154844;
        case 0x154848u: goto label_154848;
        case 0x15484cu: goto label_15484c;
        case 0x154850u: goto label_154850;
        case 0x154854u: goto label_154854;
        case 0x154858u: goto label_154858;
        case 0x15485cu: goto label_15485c;
        case 0x154860u: goto label_154860;
        case 0x154864u: goto label_154864;
        case 0x154868u: goto label_154868;
        case 0x15486cu: goto label_15486c;
        case 0x154870u: goto label_154870;
        case 0x154874u: goto label_154874;
        case 0x154878u: goto label_154878;
        case 0x15487cu: goto label_15487c;
        case 0x154880u: goto label_154880;
        case 0x154884u: goto label_154884;
        case 0x154888u: goto label_154888;
        case 0x15488cu: goto label_15488c;
        case 0x154890u: goto label_154890;
        case 0x154894u: goto label_154894;
        case 0x154898u: goto label_154898;
        case 0x15489cu: goto label_15489c;
        case 0x1548a0u: goto label_1548a0;
        case 0x1548a4u: goto label_1548a4;
        case 0x1548a8u: goto label_1548a8;
        case 0x1548acu: goto label_1548ac;
        case 0x1548b0u: goto label_1548b0;
        case 0x1548b4u: goto label_1548b4;
        case 0x1548b8u: goto label_1548b8;
        case 0x1548bcu: goto label_1548bc;
        case 0x1548c0u: goto label_1548c0;
        case 0x1548c4u: goto label_1548c4;
        case 0x1548c8u: goto label_1548c8;
        case 0x1548ccu: goto label_1548cc;
        case 0x1548d0u: goto label_1548d0;
        case 0x1548d4u: goto label_1548d4;
        case 0x1548d8u: goto label_1548d8;
        case 0x1548dcu: goto label_1548dc;
        case 0x1548e0u: goto label_1548e0;
        case 0x1548e4u: goto label_1548e4;
        case 0x1548e8u: goto label_1548e8;
        case 0x1548ecu: goto label_1548ec;
        case 0x1548f0u: goto label_1548f0;
        case 0x1548f4u: goto label_1548f4;
        case 0x1548f8u: goto label_1548f8;
        case 0x1548fcu: goto label_1548fc;
        case 0x154900u: goto label_154900;
        case 0x154904u: goto label_154904;
        case 0x154908u: goto label_154908;
        case 0x15490cu: goto label_15490c;
        case 0x154910u: goto label_154910;
        case 0x154914u: goto label_154914;
        case 0x154918u: goto label_154918;
        case 0x15491cu: goto label_15491c;
        case 0x154920u: goto label_154920;
        case 0x154924u: goto label_154924;
        case 0x154928u: goto label_154928;
        case 0x15492cu: goto label_15492c;
        case 0x154930u: goto label_154930;
        case 0x154934u: goto label_154934;
        case 0x154938u: goto label_154938;
        case 0x15493cu: goto label_15493c;
        case 0x154940u: goto label_154940;
        case 0x154944u: goto label_154944;
        case 0x154948u: goto label_154948;
        case 0x15494cu: goto label_15494c;
        case 0x154950u: goto label_154950;
        case 0x154954u: goto label_154954;
        case 0x154958u: goto label_154958;
        case 0x15495cu: goto label_15495c;
        case 0x154960u: goto label_154960;
        case 0x154964u: goto label_154964;
        case 0x154968u: goto label_154968;
        case 0x15496cu: goto label_15496c;
        case 0x154970u: goto label_154970;
        case 0x154974u: goto label_154974;
        case 0x154978u: goto label_154978;
        case 0x15497cu: goto label_15497c;
        case 0x154980u: goto label_154980;
        case 0x154984u: goto label_154984;
        case 0x154988u: goto label_154988;
        case 0x15498cu: goto label_15498c;
        case 0x154990u: goto label_154990;
        case 0x154994u: goto label_154994;
        case 0x154998u: goto label_154998;
        case 0x15499cu: goto label_15499c;
        case 0x1549a0u: goto label_1549a0;
        case 0x1549a4u: goto label_1549a4;
        case 0x1549a8u: goto label_1549a8;
        case 0x1549acu: goto label_1549ac;
        case 0x1549b0u: goto label_1549b0;
        case 0x1549b4u: goto label_1549b4;
        case 0x1549b8u: goto label_1549b8;
        case 0x1549bcu: goto label_1549bc;
        case 0x1549c0u: goto label_1549c0;
        case 0x1549c4u: goto label_1549c4;
        case 0x1549c8u: goto label_1549c8;
        case 0x1549ccu: goto label_1549cc;
        case 0x1549d0u: goto label_1549d0;
        case 0x1549d4u: goto label_1549d4;
        case 0x1549d8u: goto label_1549d8;
        case 0x1549dcu: goto label_1549dc;
        case 0x1549e0u: goto label_1549e0;
        case 0x1549e4u: goto label_1549e4;
        case 0x1549e8u: goto label_1549e8;
        case 0x1549ecu: goto label_1549ec;
        case 0x1549f0u: goto label_1549f0;
        case 0x1549f4u: goto label_1549f4;
        case 0x1549f8u: goto label_1549f8;
        case 0x1549fcu: goto label_1549fc;
        case 0x154a00u: goto label_154a00;
        case 0x154a04u: goto label_154a04;
        case 0x154a08u: goto label_154a08;
        case 0x154a0cu: goto label_154a0c;
        case 0x154a10u: goto label_154a10;
        case 0x154a14u: goto label_154a14;
        case 0x154a18u: goto label_154a18;
        case 0x154a1cu: goto label_154a1c;
        case 0x154a20u: goto label_154a20;
        case 0x154a24u: goto label_154a24;
        case 0x154a28u: goto label_154a28;
        case 0x154a2cu: goto label_154a2c;
        case 0x154a30u: goto label_154a30;
        case 0x154a34u: goto label_154a34;
        case 0x154a38u: goto label_154a38;
        case 0x154a3cu: goto label_154a3c;
        case 0x154a40u: goto label_154a40;
        case 0x154a44u: goto label_154a44;
        case 0x154a48u: goto label_154a48;
        case 0x154a4cu: goto label_154a4c;
        case 0x154a50u: goto label_154a50;
        case 0x154a54u: goto label_154a54;
        case 0x154a58u: goto label_154a58;
        case 0x154a5cu: goto label_154a5c;
        case 0x154a60u: goto label_154a60;
        case 0x154a64u: goto label_154a64;
        case 0x154a68u: goto label_154a68;
        case 0x154a6cu: goto label_154a6c;
        case 0x154a70u: goto label_154a70;
        case 0x154a74u: goto label_154a74;
        case 0x154a78u: goto label_154a78;
        case 0x154a7cu: goto label_154a7c;
        case 0x154a80u: goto label_154a80;
        case 0x154a84u: goto label_154a84;
        case 0x154a88u: goto label_154a88;
        case 0x154a8cu: goto label_154a8c;
        case 0x154a90u: goto label_154a90;
        case 0x154a94u: goto label_154a94;
        case 0x154a98u: goto label_154a98;
        case 0x154a9cu: goto label_154a9c;
        case 0x154aa0u: goto label_154aa0;
        case 0x154aa4u: goto label_154aa4;
        case 0x154aa8u: goto label_154aa8;
        case 0x154aacu: goto label_154aac;
        case 0x154ab0u: goto label_154ab0;
        case 0x154ab4u: goto label_154ab4;
        case 0x154ab8u: goto label_154ab8;
        case 0x154abcu: goto label_154abc;
        case 0x154ac0u: goto label_154ac0;
        case 0x154ac4u: goto label_154ac4;
        case 0x154ac8u: goto label_154ac8;
        case 0x154accu: goto label_154acc;
        case 0x154ad0u: goto label_154ad0;
        case 0x154ad4u: goto label_154ad4;
        case 0x154ad8u: goto label_154ad8;
        case 0x154adcu: goto label_154adc;
        case 0x154ae0u: goto label_154ae0;
        case 0x154ae4u: goto label_154ae4;
        case 0x154ae8u: goto label_154ae8;
        case 0x154aecu: goto label_154aec;
        case 0x154af0u: goto label_154af0;
        case 0x154af4u: goto label_154af4;
        case 0x154af8u: goto label_154af8;
        case 0x154afcu: goto label_154afc;
        case 0x154b00u: goto label_154b00;
        case 0x154b04u: goto label_154b04;
        case 0x154b08u: goto label_154b08;
        case 0x154b0cu: goto label_154b0c;
        case 0x154b10u: goto label_154b10;
        case 0x154b14u: goto label_154b14;
        case 0x154b18u: goto label_154b18;
        case 0x154b1cu: goto label_154b1c;
        case 0x154b20u: goto label_154b20;
        case 0x154b24u: goto label_154b24;
        case 0x154b28u: goto label_154b28;
        case 0x154b2cu: goto label_154b2c;
        case 0x154b30u: goto label_154b30;
        case 0x154b34u: goto label_154b34;
        case 0x154b38u: goto label_154b38;
        case 0x154b3cu: goto label_154b3c;
        case 0x154b40u: goto label_154b40;
        case 0x154b44u: goto label_154b44;
        case 0x154b48u: goto label_154b48;
        case 0x154b4cu: goto label_154b4c;
        case 0x154b50u: goto label_154b50;
        case 0x154b54u: goto label_154b54;
        case 0x154b58u: goto label_154b58;
        case 0x154b5cu: goto label_154b5c;
        case 0x154b60u: goto label_154b60;
        case 0x154b64u: goto label_154b64;
        case 0x154b68u: goto label_154b68;
        case 0x154b6cu: goto label_154b6c;
        case 0x154b70u: goto label_154b70;
        case 0x154b74u: goto label_154b74;
        case 0x154b78u: goto label_154b78;
        case 0x154b7cu: goto label_154b7c;
        case 0x154b80u: goto label_154b80;
        case 0x154b84u: goto label_154b84;
        case 0x154b88u: goto label_154b88;
        case 0x154b8cu: goto label_154b8c;
        case 0x154b90u: goto label_154b90;
        case 0x154b94u: goto label_154b94;
        case 0x154b98u: goto label_154b98;
        case 0x154b9cu: goto label_154b9c;
        case 0x154ba0u: goto label_154ba0;
        case 0x154ba4u: goto label_154ba4;
        case 0x154ba8u: goto label_154ba8;
        case 0x154bacu: goto label_154bac;
        case 0x154bb0u: goto label_154bb0;
        case 0x154bb4u: goto label_154bb4;
        case 0x154bb8u: goto label_154bb8;
        case 0x154bbcu: goto label_154bbc;
        case 0x154bc0u: goto label_154bc0;
        case 0x154bc4u: goto label_154bc4;
        case 0x154bc8u: goto label_154bc8;
        case 0x154bccu: goto label_154bcc;
        case 0x154bd0u: goto label_154bd0;
        case 0x154bd4u: goto label_154bd4;
        case 0x154bd8u: goto label_154bd8;
        case 0x154bdcu: goto label_154bdc;
        case 0x154be0u: goto label_154be0;
        case 0x154be4u: goto label_154be4;
        case 0x154be8u: goto label_154be8;
        case 0x154becu: goto label_154bec;
        case 0x154bf0u: goto label_154bf0;
        case 0x154bf4u: goto label_154bf4;
        case 0x154bf8u: goto label_154bf8;
        case 0x154bfcu: goto label_154bfc;
        case 0x154c00u: goto label_154c00;
        case 0x154c04u: goto label_154c04;
        case 0x154c08u: goto label_154c08;
        case 0x154c0cu: goto label_154c0c;
        case 0x154c10u: goto label_154c10;
        case 0x154c14u: goto label_154c14;
        case 0x154c18u: goto label_154c18;
        case 0x154c1cu: goto label_154c1c;
        case 0x154c20u: goto label_154c20;
        case 0x154c24u: goto label_154c24;
        case 0x154c28u: goto label_154c28;
        case 0x154c2cu: goto label_154c2c;
        case 0x154c30u: goto label_154c30;
        case 0x154c34u: goto label_154c34;
        case 0x154c38u: goto label_154c38;
        case 0x154c3cu: goto label_154c3c;
        case 0x154c40u: goto label_154c40;
        case 0x154c44u: goto label_154c44;
        case 0x154c48u: goto label_154c48;
        case 0x154c4cu: goto label_154c4c;
        case 0x154c50u: goto label_154c50;
        case 0x154c54u: goto label_154c54;
        case 0x154c58u: goto label_154c58;
        case 0x154c5cu: goto label_154c5c;
        case 0x154c60u: goto label_154c60;
        case 0x154c64u: goto label_154c64;
        case 0x154c68u: goto label_154c68;
        case 0x154c6cu: goto label_154c6c;
        case 0x154c70u: goto label_154c70;
        case 0x154c74u: goto label_154c74;
        case 0x154c78u: goto label_154c78;
        case 0x154c7cu: goto label_154c7c;
        case 0x154c80u: goto label_154c80;
        case 0x154c84u: goto label_154c84;
        case 0x154c88u: goto label_154c88;
        case 0x154c8cu: goto label_154c8c;
        case 0x154c90u: goto label_154c90;
        case 0x154c94u: goto label_154c94;
        case 0x154c98u: goto label_154c98;
        case 0x154c9cu: goto label_154c9c;
        case 0x154ca0u: goto label_154ca0;
        case 0x154ca4u: goto label_154ca4;
        case 0x154ca8u: goto label_154ca8;
        case 0x154cacu: goto label_154cac;
        case 0x154cb0u: goto label_154cb0;
        case 0x154cb4u: goto label_154cb4;
        case 0x154cb8u: goto label_154cb8;
        case 0x154cbcu: goto label_154cbc;
        case 0x154cc0u: goto label_154cc0;
        case 0x154cc4u: goto label_154cc4;
        case 0x154cc8u: goto label_154cc8;
        case 0x154cccu: goto label_154ccc;
        case 0x154cd0u: goto label_154cd0;
        case 0x154cd4u: goto label_154cd4;
        case 0x154cd8u: goto label_154cd8;
        case 0x154cdcu: goto label_154cdc;
        case 0x154ce0u: goto label_154ce0;
        case 0x154ce4u: goto label_154ce4;
        case 0x154ce8u: goto label_154ce8;
        case 0x154cecu: goto label_154cec;
        case 0x154cf0u: goto label_154cf0;
        case 0x154cf4u: goto label_154cf4;
        case 0x154cf8u: goto label_154cf8;
        case 0x154cfcu: goto label_154cfc;
        case 0x154d00u: goto label_154d00;
        case 0x154d04u: goto label_154d04;
        case 0x154d08u: goto label_154d08;
        case 0x154d0cu: goto label_154d0c;
        case 0x154d10u: goto label_154d10;
        case 0x154d14u: goto label_154d14;
        case 0x154d18u: goto label_154d18;
        case 0x154d1cu: goto label_154d1c;
        case 0x154d20u: goto label_154d20;
        case 0x154d24u: goto label_154d24;
        case 0x154d28u: goto label_154d28;
        case 0x154d2cu: goto label_154d2c;
        case 0x154d30u: goto label_154d30;
        case 0x154d34u: goto label_154d34;
        case 0x154d38u: goto label_154d38;
        case 0x154d3cu: goto label_154d3c;
        case 0x154d40u: goto label_154d40;
        case 0x154d44u: goto label_154d44;
        case 0x154d48u: goto label_154d48;
        case 0x154d4cu: goto label_154d4c;
        case 0x154d50u: goto label_154d50;
        case 0x154d54u: goto label_154d54;
        case 0x154d58u: goto label_154d58;
        case 0x154d5cu: goto label_154d5c;
        case 0x154d60u: goto label_154d60;
        case 0x154d64u: goto label_154d64;
        case 0x154d68u: goto label_154d68;
        case 0x154d6cu: goto label_154d6c;
        case 0x154d70u: goto label_154d70;
        case 0x154d74u: goto label_154d74;
        case 0x154d78u: goto label_154d78;
        case 0x154d7cu: goto label_154d7c;
        case 0x154d80u: goto label_154d80;
        case 0x154d84u: goto label_154d84;
        case 0x154d88u: goto label_154d88;
        case 0x154d8cu: goto label_154d8c;
        case 0x154d90u: goto label_154d90;
        case 0x154d94u: goto label_154d94;
        case 0x154d98u: goto label_154d98;
        case 0x154d9cu: goto label_154d9c;
        case 0x154da0u: goto label_154da0;
        case 0x154da4u: goto label_154da4;
        case 0x154da8u: goto label_154da8;
        case 0x154dacu: goto label_154dac;
        case 0x154db0u: goto label_154db0;
        case 0x154db4u: goto label_154db4;
        case 0x154db8u: goto label_154db8;
        case 0x154dbcu: goto label_154dbc;
        case 0x154dc0u: goto label_154dc0;
        case 0x154dc4u: goto label_154dc4;
        case 0x154dc8u: goto label_154dc8;
        case 0x154dccu: goto label_154dcc;
        case 0x154dd0u: goto label_154dd0;
        case 0x154dd4u: goto label_154dd4;
        case 0x154dd8u: goto label_154dd8;
        case 0x154ddcu: goto label_154ddc;
        case 0x154de0u: goto label_154de0;
        case 0x154de4u: goto label_154de4;
        case 0x154de8u: goto label_154de8;
        case 0x154decu: goto label_154dec;
        case 0x154df0u: goto label_154df0;
        case 0x154df4u: goto label_154df4;
        case 0x154df8u: goto label_154df8;
        case 0x154dfcu: goto label_154dfc;
        case 0x154e00u: goto label_154e00;
        case 0x154e04u: goto label_154e04;
        case 0x154e08u: goto label_154e08;
        case 0x154e0cu: goto label_154e0c;
        case 0x154e10u: goto label_154e10;
        case 0x154e14u: goto label_154e14;
        case 0x154e18u: goto label_154e18;
        case 0x154e1cu: goto label_154e1c;
        case 0x154e20u: goto label_154e20;
        case 0x154e24u: goto label_154e24;
        case 0x154e28u: goto label_154e28;
        case 0x154e2cu: goto label_154e2c;
        case 0x154e30u: goto label_154e30;
        case 0x154e34u: goto label_154e34;
        case 0x154e38u: goto label_154e38;
        case 0x154e3cu: goto label_154e3c;
        case 0x154e40u: goto label_154e40;
        case 0x154e44u: goto label_154e44;
        case 0x154e48u: goto label_154e48;
        case 0x154e4cu: goto label_154e4c;
        case 0x154e50u: goto label_154e50;
        case 0x154e54u: goto label_154e54;
        case 0x154e58u: goto label_154e58;
        case 0x154e5cu: goto label_154e5c;
        case 0x154e60u: goto label_154e60;
        case 0x154e64u: goto label_154e64;
        case 0x154e68u: goto label_154e68;
        case 0x154e6cu: goto label_154e6c;
        case 0x154e70u: goto label_154e70;
        case 0x154e74u: goto label_154e74;
        case 0x154e78u: goto label_154e78;
        case 0x154e7cu: goto label_154e7c;
        case 0x154e80u: goto label_154e80;
        case 0x154e84u: goto label_154e84;
        case 0x154e88u: goto label_154e88;
        case 0x154e8cu: goto label_154e8c;
        case 0x154e90u: goto label_154e90;
        case 0x154e94u: goto label_154e94;
        case 0x154e98u: goto label_154e98;
        case 0x154e9cu: goto label_154e9c;
        case 0x154ea0u: goto label_154ea0;
        case 0x154ea4u: goto label_154ea4;
        case 0x154ea8u: goto label_154ea8;
        case 0x154eacu: goto label_154eac;
        case 0x154eb0u: goto label_154eb0;
        case 0x154eb4u: goto label_154eb4;
        case 0x154eb8u: goto label_154eb8;
        case 0x154ebcu: goto label_154ebc;
        case 0x154ec0u: goto label_154ec0;
        case 0x154ec4u: goto label_154ec4;
        case 0x154ec8u: goto label_154ec8;
        case 0x154eccu: goto label_154ecc;
        case 0x154ed0u: goto label_154ed0;
        case 0x154ed4u: goto label_154ed4;
        case 0x154ed8u: goto label_154ed8;
        case 0x154edcu: goto label_154edc;
        case 0x154ee0u: goto label_154ee0;
        case 0x154ee4u: goto label_154ee4;
        case 0x154ee8u: goto label_154ee8;
        case 0x154eecu: goto label_154eec;
        case 0x154ef0u: goto label_154ef0;
        case 0x154ef4u: goto label_154ef4;
        case 0x154ef8u: goto label_154ef8;
        case 0x154efcu: goto label_154efc;
        case 0x154f00u: goto label_154f00;
        case 0x154f04u: goto label_154f04;
        case 0x154f08u: goto label_154f08;
        case 0x154f0cu: goto label_154f0c;
        case 0x154f10u: goto label_154f10;
        case 0x154f14u: goto label_154f14;
        case 0x154f18u: goto label_154f18;
        case 0x154f1cu: goto label_154f1c;
        case 0x154f20u: goto label_154f20;
        case 0x154f24u: goto label_154f24;
        case 0x154f28u: goto label_154f28;
        case 0x154f2cu: goto label_154f2c;
        case 0x154f30u: goto label_154f30;
        case 0x154f34u: goto label_154f34;
        case 0x154f38u: goto label_154f38;
        case 0x154f3cu: goto label_154f3c;
        case 0x154f40u: goto label_154f40;
        case 0x154f44u: goto label_154f44;
        case 0x154f48u: goto label_154f48;
        case 0x154f4cu: goto label_154f4c;
        case 0x154f50u: goto label_154f50;
        case 0x154f54u: goto label_154f54;
        case 0x154f58u: goto label_154f58;
        case 0x154f5cu: goto label_154f5c;
        case 0x154f60u: goto label_154f60;
        case 0x154f64u: goto label_154f64;
        case 0x154f68u: goto label_154f68;
        case 0x154f6cu: goto label_154f6c;
        case 0x154f70u: goto label_154f70;
        case 0x154f74u: goto label_154f74;
        case 0x154f78u: goto label_154f78;
        case 0x154f7cu: goto label_154f7c;
        case 0x154f80u: goto label_154f80;
        case 0x154f84u: goto label_154f84;
        case 0x154f88u: goto label_154f88;
        case 0x154f8cu: goto label_154f8c;
        case 0x154f90u: goto label_154f90;
        case 0x154f94u: goto label_154f94;
        case 0x154f98u: goto label_154f98;
        case 0x154f9cu: goto label_154f9c;
        case 0x154fa0u: goto label_154fa0;
        case 0x154fa4u: goto label_154fa4;
        case 0x154fa8u: goto label_154fa8;
        case 0x154facu: goto label_154fac;
        case 0x154fb0u: goto label_154fb0;
        case 0x154fb4u: goto label_154fb4;
        case 0x154fb8u: goto label_154fb8;
        case 0x154fbcu: goto label_154fbc;
        case 0x154fc0u: goto label_154fc0;
        case 0x154fc4u: goto label_154fc4;
        case 0x154fc8u: goto label_154fc8;
        case 0x154fccu: goto label_154fcc;
        case 0x154fd0u: goto label_154fd0;
        case 0x154fd4u: goto label_154fd4;
        case 0x154fd8u: goto label_154fd8;
        case 0x154fdcu: goto label_154fdc;
        case 0x154fe0u: goto label_154fe0;
        case 0x154fe4u: goto label_154fe4;
        case 0x154fe8u: goto label_154fe8;
        case 0x154fecu: goto label_154fec;
        case 0x154ff0u: goto label_154ff0;
        case 0x154ff4u: goto label_154ff4;
        case 0x154ff8u: goto label_154ff8;
        case 0x154ffcu: goto label_154ffc;
        case 0x155000u: goto label_155000;
        case 0x155004u: goto label_155004;
        case 0x155008u: goto label_155008;
        case 0x15500cu: goto label_15500c;
        case 0x155010u: goto label_155010;
        case 0x155014u: goto label_155014;
        case 0x155018u: goto label_155018;
        case 0x15501cu: goto label_15501c;
        case 0x155020u: goto label_155020;
        case 0x155024u: goto label_155024;
        case 0x155028u: goto label_155028;
        case 0x15502cu: goto label_15502c;
        case 0x155030u: goto label_155030;
        case 0x155034u: goto label_155034;
        case 0x155038u: goto label_155038;
        case 0x15503cu: goto label_15503c;
        case 0x155040u: goto label_155040;
        case 0x155044u: goto label_155044;
        case 0x155048u: goto label_155048;
        case 0x15504cu: goto label_15504c;
        case 0x155050u: goto label_155050;
        case 0x155054u: goto label_155054;
        case 0x155058u: goto label_155058;
        case 0x15505cu: goto label_15505c;
        default: break;
    }

    ctx->pc = 0x152e20u;

label_152e20:
    // 0x152e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_152e24:
    // 0x152e24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x152e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_152e28:
    // 0x152e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152e2c:
    // 0x152e2c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x152e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_152e30:
    // 0x152e30: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x152e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_152e34:
    // 0x152e34: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x152e34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_152e38:
    // 0x152e38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x152e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_152e3c:
    // 0x152e3c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x152e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_152e40:
    // 0x152e40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x152e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_152e44:
    // 0x152e44: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x152e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_152e48:
    // 0x152e48: 0x14800880  bnez        $a0, . + 4 + (0x880 << 2)
label_152e4c:
    if (ctx->pc == 0x152E4Cu) {
        ctx->pc = 0x152E50u;
        goto label_152e50;
    }
    ctx->pc = 0x152E48u;
    {
        const bool branch_taken_0x152e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x152e48) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x152E50u;
label_152e50:
    // 0x152e50: 0x9203157c  lbu         $v1, 0x157C($s0)
    ctx->pc = 0x152e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5500)));
label_152e54:
    // 0x152e54: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x152e54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_152e58:
    // 0x152e58: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x152e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_152e5c:
    // 0x152e5c: 0x10c507ad  beq         $a2, $a1, . + 4 + (0x7AD << 2)
label_152e60:
    if (ctx->pc == 0x152E60u) {
        ctx->pc = 0x152E64u;
        goto label_152e64;
    }
    ctx->pc = 0x152E5Cu;
    {
        const bool branch_taken_0x152e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x152e5c) {
            ctx->pc = 0x154D14u;
            goto label_154d14;
        }
    }
    ctx->pc = 0x152E64u;
label_152e64:
    // 0x152e64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x152e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_152e68:
    // 0x152e68: 0x10c30776  beq         $a2, $v1, . + 4 + (0x776 << 2)
label_152e6c:
    if (ctx->pc == 0x152E6Cu) {
        ctx->pc = 0x152E70u;
        goto label_152e70;
    }
    ctx->pc = 0x152E68u;
    {
        const bool branch_taken_0x152e68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x152e68) {
            ctx->pc = 0x154C44u;
            goto label_154c44;
        }
    }
    ctx->pc = 0x152E70u;
label_152e70:
    // 0x152e70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x152e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_152e74:
    // 0x152e74: 0x10c40651  beq         $a2, $a0, . + 4 + (0x651 << 2)
label_152e78:
    if (ctx->pc == 0x152E78u) {
        ctx->pc = 0x152E7Cu;
        goto label_152e7c;
    }
    ctx->pc = 0x152E74u;
    {
        const bool branch_taken_0x152e74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x152e74) {
            ctx->pc = 0x1547BCu;
            goto label_1547bc;
        }
    }
    ctx->pc = 0x152E7Cu;
label_152e7c:
    // 0x152e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152e80:
    // 0x152e80: 0x10c30583  beq         $a2, $v1, . + 4 + (0x583 << 2)
label_152e84:
    if (ctx->pc == 0x152E84u) {
        ctx->pc = 0x152E88u;
        goto label_152e88;
    }
    ctx->pc = 0x152E80u;
    {
        const bool branch_taken_0x152e80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x152e80) {
            ctx->pc = 0x154490u;
            goto label_154490;
        }
    }
    ctx->pc = 0x152E88u;
label_152e88:
    // 0x152e88: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_152e8c:
    if (ctx->pc == 0x152E8Cu) {
        ctx->pc = 0x152E90u;
        goto label_152e90;
    }
    ctx->pc = 0x152E88u;
    {
        const bool branch_taken_0x152e88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x152e88) {
            ctx->pc = 0x152E98u;
            goto label_152e98;
        }
    }
    ctx->pc = 0x152E90u;
label_152e90:
    // 0x152e90: 0x1000086e  b           . + 4 + (0x86E << 2)
label_152e94:
    if (ctx->pc == 0x152E94u) {
        ctx->pc = 0x152E98u;
        goto label_152e98;
    }
    ctx->pc = 0x152E90u;
    {
        const bool branch_taken_0x152e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152e90) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x152E98u;
label_152e98:
    // 0x152e98: 0x9202157d  lbu         $v0, 0x157D($s0)
    ctx->pc = 0x152e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5501)));
label_152e9c:
    // 0x152e9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x152e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_152ea0:
    // 0x152ea0: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x152ea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_152ea4:
    // 0x152ea4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_152ea8:
    if (ctx->pc == 0x152EA8u) {
        ctx->pc = 0x152EACu;
        goto label_152eac;
    }
    ctx->pc = 0x152EA4u;
    {
        const bool branch_taken_0x152ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ea4) {
            ctx->pc = 0x152EC8u;
            goto label_152ec8;
        }
    }
    ctx->pc = 0x152EACu;
label_152eac:
    // 0x152eac: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x152eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_152eb0:
    // 0x152eb0: 0x2483e990  addiu       $v1, $a0, -0x1670
    ctx->pc = 0x152eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
label_152eb4:
    // 0x152eb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_152eb8:
    // 0x152eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_152ebc:
    // 0x152ebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x152ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_152ec0:
    // 0x152ec0: 0x600008  jr          $v1
label_152ec4:
    if (ctx->pc == 0x152EC4u) {
        ctx->pc = 0x152EC8u;
        goto label_152ec8;
    }
    ctx->pc = 0x152EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152EC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x152EC8u;
label_152ec8:
    // 0x152ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152ecc:
    // 0x152ecc: 0x0  nop
    ctx->pc = 0x152eccu;
    // NOP
label_152ed0:
    // 0x152ed0: 0xe60015b8  swc1        $f0, 0x15B8($s0)
    ctx->pc = 0x152ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5560), bits); }
label_152ed4:
    // 0x152ed4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x152ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_152ed8:
    // 0x152ed8: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x152ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_152edc:
    // 0x152edc: 0xc05db4c  jal         func_176D30
label_152ee0:
    if (ctx->pc == 0x152EE0u) {
        ctx->pc = 0x152EE4u;
        goto label_152ee4;
    }
    ctx->pc = 0x152EDCu;
    SET_GPR_U32(ctx, 31, 0x152EE4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x152EDCu, 0x152EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EE4u;
label_152ee4:
    // 0x152ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x152ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_152ee8:
    // 0x152ee8: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x152ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_152eec:
    // 0x152eec: 0xc05db74  jal         func_176DD0
label_152ef0:
    if (ctx->pc == 0x152EF0u) {
        ctx->pc = 0x152EF4u;
        goto label_152ef4;
    }
    ctx->pc = 0x152EECu;
    SET_GPR_U32(ctx, 31, 0x152EF4u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x152EECu, 0x152EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EF4u;
label_152ef4:
    // 0x152ef4: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x152ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_152ef8:
    // 0x152ef8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x152ef8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_152efc:
    // 0x152efc: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x152efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_152f00:
    // 0x152f00: 0xc05db4c  jal         func_176D30
label_152f04:
    if (ctx->pc == 0x152F04u) {
        ctx->pc = 0x152F08u;
        goto label_152f08;
    }
    ctx->pc = 0x152F00u;
    SET_GPR_U32(ctx, 31, 0x152F08u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x152F00u, 0x152F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F08u;
label_152f08:
    // 0x152f08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x152f08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_152f0c:
    // 0x152f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152f10:
    // 0x152f10: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x152f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_152f14:
    // 0x152f14: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x152f14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_152f18:
    // 0x152f18: 0xc05db74  jal         func_176DD0
label_152f1c:
    if (ctx->pc == 0x152F1Cu) {
        ctx->pc = 0x152F20u;
        goto label_152f20;
    }
    ctx->pc = 0x152F18u;
    SET_GPR_U32(ctx, 31, 0x152F20u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x152F18u, 0x152F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F20u;
label_152f20:
    // 0x152f20: 0x1000084a  b           . + 4 + (0x84A << 2)
label_152f24:
    if (ctx->pc == 0x152F24u) {
        ctx->pc = 0x152F28u;
        goto label_152f28;
    }
    ctx->pc = 0x152F20u;
    {
        const bool branch_taken_0x152f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152f20) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x152F28u;
label_152f28:
    // 0x152f28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_152f2c:
    // 0x152f2c: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x152f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944208)));
label_152f30:
    // 0x152f30: 0xae0315c0  sw          $v1, 0x15C0($s0)
    ctx->pc = 0x152f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 3));
label_152f34:
    // 0x152f34: 0x3c044307  lui         $a0, 0x4307
    ctx->pc = 0x152f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17159 << 16));
label_152f38:
    // 0x152f38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152f38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152f3c:
    // 0x152f3c: 0x0  nop
    ctx->pc = 0x152f3cu;
    // NOP
label_152f40:
    // 0x152f40: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x152f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
label_152f44:
    // 0x152f44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x152f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_152f48:
    // 0x152f48: 0x0  nop
    ctx->pc = 0x152f48u;
    // NOP
label_152f4c:
    // 0x152f4c: 0xe60115d4  swc1        $f1, 0x15D4($s0)
    ctx->pc = 0x152f4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
label_152f50:
    // 0x152f50: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x152f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_152f54:
    // 0x152f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152f58:
    // 0x152f58: 0x0  nop
    ctx->pc = 0x152f58u;
    // NOP
label_152f5c:
    // 0x152f5c: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x152f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
label_152f60:
    // 0x152f60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x152f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_152f64:
    // 0x152f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152f68:
    // 0x152f68: 0x0  nop
    ctx->pc = 0x152f68u;
    // NOP
label_152f6c:
    // 0x152f6c: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x152f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
label_152f70:
    // 0x152f70: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x152f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_152f74:
    // 0x152f74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x152f74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_152f78:
    // 0x152f78: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x152f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_152f7c:
    // 0x152f7c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x152f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_152f80:
    // 0x152f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_152f84:
    // 0x152f84: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x152f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_152f88:
    // 0x152f88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x152f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_152f8c:
    // 0x152f8c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x152f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_152f90:
    // 0x152f90: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x152f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_152f94:
    // 0x152f94: 0xe4610070  swc1        $f1, 0x70($v1)
    ctx->pc = 0x152f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_152f98:
    // 0x152f98: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x152f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
label_152f9c:
    // 0x152f9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152f9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152fa0:
    // 0x152fa0: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x152fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_152fa4:
    // 0x152fa4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x152fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_152fa8:
    // 0x152fa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x152fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_152fac:
    // 0x152fac: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x152facu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_152fb0:
    // 0x152fb0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x152fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_152fb4:
    // 0x152fb4: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x152fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_152fb8:
    // 0x152fb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x152fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_152fbc:
    // 0x152fbc: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x152fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_152fc0:
    // 0x152fc0: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x152fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
label_152fc4:
    // 0x152fc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152fc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152fc8:
    // 0x152fc8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x152fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_152fcc:
    // 0x152fcc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x152fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_152fd0:
    // 0x152fd0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x152fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_152fd4:
    // 0x152fd4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x152fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_152fd8:
    // 0x152fd8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x152fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_152fdc:
    // 0x152fdc: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x152fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_152fe0:
    // 0x152fe0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x152fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_152fe4:
    // 0x152fe4: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x152fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_152fe8:
    // 0x152fe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x152fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_152fec:
    // 0x152fec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_152ff0:
    // 0x152ff0: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x152ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_152ff4:
    // 0x152ff4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x152ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_152ff8:
    // 0x152ff8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x152ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_152ffc:
    // 0x152ffc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x152ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153000:
    // 0x153000: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153004:
    // 0x153004: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x153004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153008:
    // 0x153008: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x153008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15300c:
    // 0x15300c: 0xe4610080  swc1        $f1, 0x80($v1)
    ctx->pc = 0x15300cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_153010:
    // 0x153010: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_153014:
    // 0x153014: 0x3482e6e7  ori         $v0, $a0, 0xE6E7
    ctx->pc = 0x153014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
label_153018:
    // 0x153018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15301c:
    // 0x15301c: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x15301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153020:
    // 0x153020: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153024:
    // 0x153024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153028:
    // 0x153028: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15302c:
    // 0x15302c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x15302cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153030:
    // 0x153030: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153034:
    // 0x153034: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153038:
    // 0x153038: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x153038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_15303c:
    // 0x15303c: 0x3c053f10  lui         $a1, 0x3F10
    ctx->pc = 0x15303cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16144 << 16));
label_153040:
    // 0x153040: 0x34a39091  ori         $v1, $a1, 0x9091
    ctx->pc = 0x153040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37009);
label_153044:
    // 0x153044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153048:
    // 0x153048: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_15304c:
    // 0x15304c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15304cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153050:
    // 0x153050: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153054:
    // 0x153054: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153058:
    // 0x153058: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_15305c:
    // 0x15305c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x15305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153060:
    // 0x153060: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153064:
    // 0x153064: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x153064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_153068:
    // 0x153068: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_15306c:
    // 0x15306c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15306cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_153070:
    // 0x153070: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153074:
    // 0x153074: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x153074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153078:
    // 0x153078: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15307c:
    // 0x15307c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x15307cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153080:
    // 0x153080: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153084:
    // 0x153084: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153088:
    // 0x153088: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15308c:
    // 0x15308c: 0xe4410070  swc1        $f1, 0x70($v0)
    ctx->pc = 0x15308cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_153090:
    // 0x153090: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x153090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
label_153094:
    // 0x153094: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153094u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153098:
    // 0x153098: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_15309c:
    // 0x15309c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x15309cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1530a0:
    // 0x1530a0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1530a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1530a4:
    // 0x1530a4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1530a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1530a8:
    // 0x1530a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1530a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1530ac:
    // 0x1530ac: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x1530acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_1530b0:
    // 0x1530b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1530b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1530b4:
    // 0x1530b4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1530b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_1530b8:
    // 0x1530b8: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x1530b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
label_1530bc:
    // 0x1530bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1530bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1530c0:
    // 0x1530c0: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1530c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1530c4:
    // 0x1530c4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1530c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1530c8:
    // 0x1530c8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1530c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1530cc:
    // 0x1530cc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1530ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1530d0:
    // 0x1530d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1530d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1530d4:
    // 0x1530d4: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1530d8:
    // 0x1530d8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1530d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1530dc:
    // 0x1530dc: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1530dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_1530e0:
    // 0x1530e0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1530e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1530e4:
    // 0x1530e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1530e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1530e8:
    // 0x1530e8: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x1530e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1530ec:
    // 0x1530ec: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1530ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1530f0:
    // 0x1530f0: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1530f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1530f4:
    // 0x1530f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1530f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1530f8:
    // 0x1530f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1530f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1530fc:
    // 0x1530fc: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1530fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153100:
    // 0x153100: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x153100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_153104:
    // 0x153104: 0xe4c10080  swc1        $f1, 0x80($a2)
    ctx->pc = 0x153104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
label_153108:
    // 0x153108: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_15310c:
    // 0x15310c: 0x3485e6e7  ori         $a1, $a0, 0xE6E7
    ctx->pc = 0x15310cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
label_153110:
    // 0x153110: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153110u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153114:
    // 0x153114: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153118:
    // 0x153118: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15311c:
    // 0x15311c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x15311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_153120:
    // 0x153120: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x153120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153124:
    // 0x153124: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x153124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_153128:
    // 0x153128: 0x24c4bd00  addiu       $a0, $a2, -0x4300
    ctx->pc = 0x153128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_15312c:
    // 0x15312c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153130:
    // 0x153130: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x153130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
label_153134:
    // 0x153134: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x153134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
label_153138:
    // 0x153138: 0x34839091  ori         $v1, $a0, 0x9091
    ctx->pc = 0x153138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
label_15313c:
    // 0x15313c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15313cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153140:
    // 0x153140: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153144:
    // 0x153144: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153148:
    // 0x153148: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15314c:
    // 0x15314c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x15314cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153150:
    // 0x153150: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153154:
    // 0x153154: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153158:
    // 0x153158: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x153158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15315c:
    // 0x15315c: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x15315cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_153160:
    // 0x153160: 0x100004c1  b           . + 4 + (0x4C1 << 2)
label_153164:
    if (ctx->pc == 0x153164u) {
        ctx->pc = 0x153168u;
        goto label_153168;
    }
    ctx->pc = 0x153160u;
    {
        const bool branch_taken_0x153160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153160) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x153168u;
label_153168:
    // 0x153168: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x153168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15316c:
    // 0x15316c: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x15316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948912)));
label_153170:
    // 0x153170: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x153170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
label_153174:
    // 0x153174: 0x3c054307  lui         $a1, 0x4307
    ctx->pc = 0x153174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17159 << 16));
label_153178:
    // 0x153178: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x153178u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15317c:
    // 0x15317c: 0x0  nop
    ctx->pc = 0x15317cu;
    // NOP
label_153180:
    // 0x153180: 0xe60115d0  swc1        $f1, 0x15D0($s0)
    ctx->pc = 0x153180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
label_153184:
    // 0x153184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153188:
    // 0x153188: 0x0  nop
    ctx->pc = 0x153188u;
    // NOP
label_15318c:
    // 0x15318c: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x15318cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
label_153190:
    // 0x153190: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x153190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_153194:
    // 0x153194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153198:
    // 0x153198: 0x0  nop
    ctx->pc = 0x153198u;
    // NOP
label_15319c:
    // 0x15319c: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x15319cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
label_1531a0:
    // 0x1531a0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1531a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1531a4:
    // 0x1531a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1531a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1531a8:
    // 0x1531a8: 0x0  nop
    ctx->pc = 0x1531a8u;
    // NOP
label_1531ac:
    // 0x1531ac: 0xe60115dc  swc1        $f1, 0x15DC($s0)
    ctx->pc = 0x1531acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
label_1531b0:
    // 0x1531b0: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x1531b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_1531b4:
    // 0x1531b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1531b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1531b8:
    // 0x1531b8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1531b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1531bc:
    // 0x1531bc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1531bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1531c0:
    // 0x1531c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1531c4:
    // 0x1531c4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1531c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1531c8:
    // 0x1531c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1531c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1531cc:
    // 0x1531cc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1531ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1531d0:
    // 0x1531d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1531d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1531d4:
    // 0x1531d4: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1531d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_1531d8:
    // 0x1531d8: 0x3c054366  lui         $a1, 0x4366
    ctx->pc = 0x1531d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17254 << 16));
label_1531dc:
    // 0x1531dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1531dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1531e0:
    // 0x1531e0: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1531e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1531e4:
    // 0x1531e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1531e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1531e8:
    // 0x1531e8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1531e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1531ec:
    // 0x1531ec: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1531ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1531f0:
    // 0x1531f0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1531f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1531f4:
    // 0x1531f4: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x1531f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_1531f8:
    // 0x1531f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1531f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1531fc:
    // 0x1531fc: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x1531fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_153200:
    // 0x153200: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x153200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
label_153204:
    // 0x153204: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x153204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_153208:
    // 0x153208: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_15320c:
    // 0x15320c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x15320cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153210:
    // 0x153210: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153214:
    // 0x153214: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153218:
    // 0x153218: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_15321c:
    // 0x15321c: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x15321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153220:
    // 0x153220: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153224:
    // 0x153224: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x153224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_153228:
    // 0x153228: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x153228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_15322c:
    // 0x15322c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15322cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153230:
    // 0x153230: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153234:
    // 0x153234: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153238:
    // 0x153238: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x153238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15323c:
    // 0x15323c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x15323cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153240:
    // 0x153240: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153244:
    // 0x153244: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x153244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153248:
    // 0x153248: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15324c:
    // 0x15324c: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x15324cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_153250:
    // 0x153250: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x153250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_153254:
    // 0x153254: 0x3465e6e7  ori         $a1, $v1, 0xE6E7
    ctx->pc = 0x153254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59111);
label_153258:
    // 0x153258: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153258u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15325c:
    // 0x15325c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153260:
    // 0x153260: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153264:
    // 0x153264: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153268:
    // 0x153268: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15326c:
    // 0x15326c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15326cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153270:
    // 0x153270: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153274:
    // 0x153274: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x153274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153278:
    // 0x153278: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x153278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_15327c:
    // 0x15327c: 0x3c053f10  lui         $a1, 0x3F10
    ctx->pc = 0x15327cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16144 << 16));
label_153280:
    // 0x153280: 0x34a49091  ori         $a0, $a1, 0x9091
    ctx->pc = 0x153280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37009);
label_153284:
    // 0x153284: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x153284u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_153288:
    // 0x153288: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_15328c:
    // 0x15328c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15328cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153290:
    // 0x153290: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153294:
    // 0x153294: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153298:
    // 0x153298: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_15329c:
    // 0x15329c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1532a0:
    // 0x1532a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1532a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1532a4:
    // 0x1532a4: 0xe4610088  swc1        $f1, 0x88($v1)
    ctx->pc = 0x1532a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_1532a8:
    // 0x1532a8: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x1532a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_1532ac:
    // 0x1532ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1532acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1532b0:
    // 0x1532b0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1532b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1532b4:
    // 0x1532b4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1532b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1532b8:
    // 0x1532b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1532b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1532bc:
    // 0x1532bc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1532bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1532c0:
    // 0x1532c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1532c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1532c4:
    // 0x1532c4: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x1532c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_1532c8:
    // 0x1532c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1532c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1532cc:
    // 0x1532cc: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1532ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_1532d0:
    // 0x1532d0: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x1532d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_1532d4:
    // 0x1532d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1532d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1532d8:
    // 0x1532d8: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x1532d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1532dc:
    // 0x1532dc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1532dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1532e0:
    // 0x1532e0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1532e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1532e4:
    // 0x1532e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1532e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1532e8:
    // 0x1532e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1532e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1532ec:
    // 0x1532ec: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_1532f0:
    // 0x1532f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1532f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1532f4:
    // 0x1532f4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1532f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_1532f8:
    // 0x1532f8: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x1532f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
label_1532fc:
    // 0x1532fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1532fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_153300:
    // 0x153300: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153304:
    // 0x153304: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153308:
    // 0x153308: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x153308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15330c:
    // 0x15330c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x15330cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153310:
    // 0x153310: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153314:
    // 0x153314: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153318:
    // 0x153318: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x153318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_15331c:
    // 0x15331c: 0xe48c0078  swc1        $f12, 0x78($a0)
    ctx->pc = 0x15331cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_153320:
    // 0x153320: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x153320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_153324:
    // 0x153324: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x153324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_153328:
    // 0x153328: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_15332c:
    // 0x15332c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15332cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153330:
    // 0x153330: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x153330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153334:
    // 0x153334: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153338:
    // 0x153338: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_15333c:
    // 0x15333c: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x15333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153340:
    // 0x153340: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x153340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_153344:
    // 0x153344: 0xe4810080  swc1        $f1, 0x80($a0)
    ctx->pc = 0x153344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_153348:
    // 0x153348: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x153348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_15334c:
    // 0x15334c: 0x3443e6e7  ori         $v1, $v0, 0xE6E7
    ctx->pc = 0x15334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59111);
label_153350:
    // 0x153350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153354:
    // 0x153354: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153358:
    // 0x153358: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x153358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15335c:
    // 0x15335c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x15335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_153360:
    // 0x153360: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x153360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153364:
    // 0x153364: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153368:
    // 0x153368: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x153368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_15336c:
    // 0x15336c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153370:
    // 0x153370: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x153370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_153374:
    // 0x153374: 0x3c033f10  lui         $v1, 0x3F10
    ctx->pc = 0x153374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16144 << 16));
label_153378:
    // 0x153378: 0x34639091  ori         $v1, $v1, 0x9091
    ctx->pc = 0x153378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37009);
label_15337c:
    // 0x15337c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x15337cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_153380:
    // 0x153380: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153384:
    // 0x153384: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153388:
    // 0x153388: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15338c:
    // 0x15338c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x15338cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153390:
    // 0x153390: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x153390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_153394:
    // 0x153394: 0x24c5bd00  addiu       $a1, $a2, -0x4300
    ctx->pc = 0x153394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_153398:
    // 0x153398: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x153398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15339c:
    // 0x15339c: 0xe46c0088  swc1        $f12, 0x88($v1)
    ctx->pc = 0x15339cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_1533a0:
    // 0x1533a0: 0x10000431  b           . + 4 + (0x431 << 2)
label_1533a4:
    if (ctx->pc == 0x1533A4u) {
        ctx->pc = 0x1533A8u;
        goto label_1533a8;
    }
    ctx->pc = 0x1533A0u;
    {
        const bool branch_taken_0x1533a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533a0) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x1533A8u;
label_1533a8:
    // 0x1533a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1533a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1533ac:
    // 0x1533ac: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x1533acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944208)));
label_1533b0:
    // 0x1533b0: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x1533b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
label_1533b4:
    // 0x1533b4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1533b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_1533b8:
    // 0x1533b8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1533b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1533bc:
    // 0x1533bc: 0x0  nop
    ctx->pc = 0x1533bcu;
    // NOP
label_1533c0:
    // 0x1533c0: 0xe60c15d0  swc1        $f12, 0x15D0($s0)
    ctx->pc = 0x1533c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
label_1533c4:
    // 0x1533c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1533c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1533c8:
    // 0x1533c8: 0x0  nop
    ctx->pc = 0x1533c8u;
    // NOP
label_1533cc:
    // 0x1533cc: 0xe60115d4  swc1        $f1, 0x15D4($s0)
    ctx->pc = 0x1533ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
label_1533d0:
    // 0x1533d0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1533d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1533d4:
    // 0x1533d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1533d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1533d8:
    // 0x1533d8: 0x0  nop
    ctx->pc = 0x1533d8u;
    // NOP
label_1533dc:
    // 0x1533dc: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x1533dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
label_1533e0:
    // 0x1533e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1533e4:
    // 0x1533e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1533e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1533e8:
    // 0x1533e8: 0x0  nop
    ctx->pc = 0x1533e8u;
    // NOP
label_1533ec:
    // 0x1533ec: 0xe60c15dc  swc1        $f12, 0x15DC($s0)
    ctx->pc = 0x1533ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
label_1533f0:
    // 0x1533f0: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_1533f4:
    // 0x1533f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1533f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1533f8:
    // 0x1533f8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1533f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1533fc:
    // 0x1533fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1533fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153400:
    // 0x153400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153404:
    // 0x153404: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x153404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153408:
    // 0x153408: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_15340c:
    // 0x15340c: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x15340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153410:
    // 0x153410: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x153410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153414:
    // 0x153414: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x153414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_153418:
    // 0x153418: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
label_15341c:
    // 0x15341c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15341cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153420:
    // 0x153420: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153424:
    // 0x153424: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153428:
    // 0x153428: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15342c:
    // 0x15342c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x15342cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153430:
    // 0x153430: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153434:
    // 0x153434: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153438:
    // 0x153438: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x153438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15343c:
    // 0x15343c: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x15343cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_153440:
    // 0x153440: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x153440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
label_153444:
    // 0x153444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153448:
    // 0x153448: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_15344c:
    // 0x15344c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15344cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153450:
    // 0x153450: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153454:
    // 0x153454: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153458:
    // 0x153458: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_15345c:
    // 0x15345c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15345cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153460:
    // 0x153460: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_153464:
    // 0x153464: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x153464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_153468:
    // 0x153468: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x153468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_15346c:
    // 0x15346c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15346cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153470:
    // 0x153470: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153474:
    // 0x153474: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x153474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153478:
    // 0x153478: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x153478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15347c:
    // 0x15347c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x15347cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153480:
    // 0x153480: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153484:
    // 0x153484: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153488:
    // 0x153488: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15348c:
    // 0x15348c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x15348cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_153490:
    // 0x153490: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_153494:
    // 0x153494: 0x3482e6e7  ori         $v0, $a0, 0xE6E7
    ctx->pc = 0x153494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
label_153498:
    // 0x153498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15349c:
    // 0x15349c: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x15349cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1534a0:
    // 0x1534a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1534a4:
    // 0x1534a4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1534a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1534a8:
    // 0x1534a8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1534a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1534ac:
    // 0x1534ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1534acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1534b0:
    // 0x1534b0: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1534b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_1534b4:
    // 0x1534b4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1534b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1534b8:
    // 0x1534b8: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x1534b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_1534bc:
    // 0x1534bc: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x1534bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
label_1534c0:
    // 0x1534c0: 0x34829091  ori         $v0, $a0, 0x9091
    ctx->pc = 0x1534c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
label_1534c4:
    // 0x1534c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1534c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1534c8:
    // 0x1534c8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1534c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1534cc:
    // 0x1534cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1534ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1534d0:
    // 0x1534d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1534d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1534d4:
    // 0x1534d4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1534d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1534d8:
    // 0x1534d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1534d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1534dc:
    // 0x1534dc: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1534dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_1534e0:
    // 0x1534e0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1534e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1534e4:
    // 0x1534e4: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x1534e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_1534e8:
    // 0x1534e8: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1534e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_1534ec:
    // 0x1534ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1534ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1534f0:
    // 0x1534f0: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1534f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1534f4:
    // 0x1534f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1534f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1534f8:
    // 0x1534f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1534f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1534fc:
    // 0x1534fc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1534fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153500:
    // 0x153500: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153504:
    // 0x153504: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153508:
    // 0x153508: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15350c:
    // 0x15350c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x15350cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_153510:
    // 0x153510: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x153510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_153514:
    // 0x153514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153518:
    // 0x153518: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_15351c:
    // 0x15351c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x15351cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153520:
    // 0x153520: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153524:
    // 0x153524: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153528:
    // 0x153528: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_15352c:
    // 0x15352c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153530:
    // 0x153530: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153534:
    // 0x153534: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x153534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_153538:
    // 0x153538: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
label_15353c:
    // 0x15353c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15353cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153540:
    // 0x153540: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153544:
    // 0x153544: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153548:
    // 0x153548: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x153548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15354c:
    // 0x15354c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153550:
    // 0x153550: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x153550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_153554:
    // 0x153554: 0x2444bd00  addiu       $a0, $v0, -0x4300
    ctx->pc = 0x153554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_153558:
    // 0x153558: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15355c:
    // 0x15355c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x15355cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_153560:
    // 0x153560: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_153564:
    // 0x153564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153568:
    // 0x153568: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_15356c:
    // 0x15356c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15356cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153570:
    // 0x153570: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x153570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153574:
    // 0x153574: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x153574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_153578:
    // 0x153578: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_15357c:
    // 0x15357c: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x15357cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153580:
    // 0x153580: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x153580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_153584:
    // 0x153584: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x153584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_153588:
    // 0x153588: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x153588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_15358c:
    // 0x15358c: 0x3444e6e7  ori         $a0, $v0, 0xE6E7
    ctx->pc = 0x15358cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59111);
label_153590:
    // 0x153590: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153590u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153594:
    // 0x153594: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153598:
    // 0x153598: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15359c:
    // 0x15359c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1535a0:
    // 0x1535a0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1535a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1535a4:
    // 0x1535a4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1535a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1535a8:
    // 0x1535a8: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1535a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1535ac:
    // 0x1535ac: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1535acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1535b0:
    // 0x1535b0: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1535b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_1535b4:
    // 0x1535b4: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x1535b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
label_1535b8:
    // 0x1535b8: 0x34449091  ori         $a0, $v0, 0x9091
    ctx->pc = 0x1535b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
label_1535bc:
    // 0x1535bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1535bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1535c0:
    // 0x1535c0: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x1535c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1535c4:
    // 0x1535c4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1535c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1535c8:
    // 0x1535c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1535c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1535cc:
    // 0x1535cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1535ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1535d0:
    // 0x1535d0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1535d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1535d4:
    // 0x1535d4: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x1535d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_1535d8:
    // 0x1535d8: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1535d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1535dc:
    // 0x1535dc: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x1535dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
label_1535e0:
    // 0x1535e0: 0x100003a1  b           . + 4 + (0x3A1 << 2)
label_1535e4:
    if (ctx->pc == 0x1535E4u) {
        ctx->pc = 0x1535E8u;
        goto label_1535e8;
    }
    ctx->pc = 0x1535E0u;
    {
        const bool branch_taken_0x1535e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535e0) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x1535E8u;
label_1535e8:
    // 0x1535e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1535e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1535ec:
    // 0x1535ec: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x1535ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944208)));
label_1535f0:
    // 0x1535f0: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x1535f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
label_1535f4:
    // 0x1535f4: 0x3c034307  lui         $v1, 0x4307
    ctx->pc = 0x1535f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17159 << 16));
label_1535f8:
    // 0x1535f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1535f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1535fc:
    // 0x1535fc: 0x0  nop
    ctx->pc = 0x1535fcu;
    // NOP
label_153600:
    // 0x153600: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x153600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
label_153604:
    // 0x153604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153608:
    // 0x153608: 0x0  nop
    ctx->pc = 0x153608u;
    // NOP
label_15360c:
    // 0x15360c: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x15360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
label_153610:
    // 0x153610: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x153610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
label_153614:
    // 0x153614: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153614u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153618:
    // 0x153618: 0x0  nop
    ctx->pc = 0x153618u;
    // NOP
label_15361c:
    // 0x15361c: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x15361cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
label_153620:
    // 0x153620: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_153624:
    // 0x153624: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153624u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153628:
    // 0x153628: 0x0  nop
    ctx->pc = 0x153628u;
    // NOP
label_15362c:
    // 0x15362c: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x15362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
label_153630:
    // 0x153630: 0x920313a6  lbu         $v1, 0x13A6($s0)
    ctx->pc = 0x153630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
label_153634:
    // 0x153634: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x153634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_153638:
    // 0x153638: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15363c:
    // 0x15363c: 0x10c40089  beq         $a2, $a0, . + 4 + (0x89 << 2)
label_153640:
    if (ctx->pc == 0x153640u) {
        ctx->pc = 0x153644u;
        goto label_153644;
    }
    ctx->pc = 0x15363Cu;
    {
        const bool branch_taken_0x15363c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x15363c) {
            ctx->pc = 0x153864u;
            goto label_153864;
        }
    }
    ctx->pc = 0x153644u;
label_153644:
    // 0x153644: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153648:
    // 0x153648: 0x10c50086  beq         $a2, $a1, . + 4 + (0x86 << 2)
label_15364c:
    if (ctx->pc == 0x15364Cu) {
        ctx->pc = 0x153650u;
        goto label_153650;
    }
    ctx->pc = 0x153648u;
    {
        const bool branch_taken_0x153648 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x153648) {
            ctx->pc = 0x153864u;
            goto label_153864;
        }
    }
    ctx->pc = 0x153650u;
label_153650:
    // 0x153650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_153654:
    // 0x153654: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
label_153658:
    if (ctx->pc == 0x153658u) {
        ctx->pc = 0x15365Cu;
        goto label_15365c;
    }
    ctx->pc = 0x153654u;
    {
        const bool branch_taken_0x153654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x153654) {
            ctx->pc = 0x15366Cu;
            goto label_15366c;
        }
    }
    ctx->pc = 0x15365Cu;
label_15365c:
    // 0x15365c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_153660:
    if (ctx->pc == 0x153660u) {
        ctx->pc = 0x153664u;
        goto label_153664;
    }
    ctx->pc = 0x15365Cu;
    {
        const bool branch_taken_0x15365c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15365c) {
            ctx->pc = 0x15366Cu;
            goto label_15366c;
        }
    }
    ctx->pc = 0x153664u;
label_153664:
    // 0x153664: 0x10000380  b           . + 4 + (0x380 << 2)
label_153668:
    if (ctx->pc == 0x153668u) {
        ctx->pc = 0x15366Cu;
        goto label_15366c;
    }
    ctx->pc = 0x153664u;
    {
        const bool branch_taken_0x153664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153664) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x15366Cu;
label_15366c:
    // 0x15366c: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x15366cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_153670:
    // 0x153670: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153670u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153674:
    // 0x153674: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153678:
    // 0x153678: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_15367c:
    // 0x15367c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x15367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153680:
    // 0x153680: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x153680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153684:
    // 0x153684: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153688:
    // 0x153688: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_15368c:
    // 0x15368c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x15368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_153690:
    // 0x153690: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_153694:
    // 0x153694: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x153694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_153698:
    // 0x153698: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153698u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15369c:
    // 0x15369c: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x15369cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1536a0:
    // 0x1536a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1536a4:
    // 0x1536a4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1536a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1536a8:
    // 0x1536a8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1536ac:
    // 0x1536ac: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1536acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1536b0:
    // 0x1536b0: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1536b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_1536b4:
    // 0x1536b4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1536b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1536b8:
    // 0x1536b8: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x1536b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_1536bc:
    // 0x1536bc: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_1536c0:
    // 0x1536c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1536c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1536c4:
    // 0x1536c4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1536c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1536c8:
    // 0x1536c8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1536c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1536cc:
    // 0x1536cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1536ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1536d0:
    // 0x1536d0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1536d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1536d4:
    // 0x1536d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1536d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1536d8:
    // 0x1536d8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1536d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1536dc:
    // 0x1536dc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1536dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1536e0:
    // 0x1536e0: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x1536e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_1536e4:
    // 0x1536e4: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x1536e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
label_1536e8:
    // 0x1536e8: 0x34a3c8c9  ori         $v1, $a1, 0xC8C9
    ctx->pc = 0x1536e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
label_1536ec:
    // 0x1536ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1536ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1536f0:
    // 0x1536f0: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1536f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1536f4:
    // 0x1536f4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1536f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1536f8:
    // 0x1536f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1536f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1536fc:
    // 0x1536fc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1536fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153700:
    // 0x153700: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153704:
    // 0x153704: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153708:
    // 0x153708: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15370c:
    // 0x15370c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x15370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_153710:
    // 0x153710: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x153710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
label_153714:
    // 0x153714: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x153714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
label_153718:
    // 0x153718: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153718u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15371c:
    // 0x15371c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15371cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153720:
    // 0x153720: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153724:
    // 0x153724: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x153724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153728:
    // 0x153728: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15372c:
    // 0x15372c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15372cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153730:
    // 0x153730: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153734:
    // 0x153734: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x153734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153738:
    // 0x153738: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x153738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
label_15373c:
    // 0x15373c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15373cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_153740:
    // 0x153740: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153744:
    // 0x153744: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153748:
    // 0x153748: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15374c:
    // 0x15374c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_153750:
    // 0x153750: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153754:
    // 0x153754: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153758:
    // 0x153758: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_15375c:
    // 0x15375c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15375cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153760:
    // 0x153760: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x153760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_153764:
    // 0x153764: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x153764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_153768:
    // 0x153768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15376c:
    // 0x15376c: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x15376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153770:
    // 0x153770: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153774:
    // 0x153774: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153778:
    // 0x153778: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15377c:
    // 0x15377c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15377cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153780:
    // 0x153780: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153784:
    // 0x153784: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153788:
    // 0x153788: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_15378c:
    // 0x15378c: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x15378cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
label_153790:
    // 0x153790: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153790u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153794:
    // 0x153794: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153798:
    // 0x153798: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15379c:
    // 0x15379c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1537a0:
    // 0x1537a0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1537a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1537a4:
    // 0x1537a4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1537a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1537a8:
    // 0x1537a8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1537a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1537ac:
    // 0x1537ac: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1537acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1537b0:
    // 0x1537b0: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1537b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_1537b4:
    // 0x1537b4: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1537b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_1537b8:
    // 0x1537b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1537b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1537bc:
    // 0x1537bc: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x1537bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1537c0:
    // 0x1537c0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1537c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1537c4:
    // 0x1537c4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1537c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1537c8:
    // 0x1537c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1537c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1537cc:
    // 0x1537cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1537ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1537d0:
    // 0x1537d0: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x1537d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_1537d4:
    // 0x1537d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1537d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1537d8:
    // 0x1537d8: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1537d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_1537dc:
    // 0x1537dc: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x1537dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
label_1537e0:
    // 0x1537e0: 0x34a4c8c9  ori         $a0, $a1, 0xC8C9
    ctx->pc = 0x1537e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
label_1537e4:
    // 0x1537e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1537e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1537e8:
    // 0x1537e8: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1537e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1537ec:
    // 0x1537ec: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1537ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1537f0:
    // 0x1537f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1537f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1537f4:
    // 0x1537f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1537f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1537f8:
    // 0x1537f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1537f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1537fc:
    // 0x1537fc: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1537fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153800:
    // 0x153800: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x153800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_153804:
    // 0x153804: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x153804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
label_153808:
    // 0x153808: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x153808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
label_15380c:
    // 0x15380c: 0x3483c8c9  ori         $v1, $a0, 0xC8C9
    ctx->pc = 0x15380cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
label_153810:
    // 0x153810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153814:
    // 0x153814: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153818:
    // 0x153818: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15381c:
    // 0x15381c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153820:
    // 0x153820: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153824:
    // 0x153824: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153828:
    // 0x153828: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_15382c:
    // 0x15382c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x15382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153830:
    // 0x153830: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x153830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
label_153834:
    // 0x153834: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x153834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_153838:
    // 0x153838: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x153838u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15383c:
    // 0x15383c: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x15383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153840:
    // 0x153840: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153844:
    // 0x153844: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153848:
    // 0x153848: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15384c:
    // 0x15384c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x15384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_153850:
    // 0x153850: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x153850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_153854:
    // 0x153854: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x153854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153858:
    // 0x153858: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x153858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_15385c:
    // 0x15385c: 0x10000302  b           . + 4 + (0x302 << 2)
label_153860:
    if (ctx->pc == 0x153860u) {
        ctx->pc = 0x153864u;
        goto label_153864;
    }
    ctx->pc = 0x15385Cu;
    {
        const bool branch_taken_0x15385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15385c) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x153864u;
label_153864:
    // 0x153864: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x153864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_153868:
    // 0x153868: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153868u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15386c:
    // 0x15386c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15386cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153870:
    // 0x153870: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153874:
    // 0x153874: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153878:
    // 0x153878: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x153878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15387c:
    // 0x15387c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x15387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_153880:
    // 0x153880: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x153880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_153884:
    // 0x153884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153888:
    // 0x153888: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x153888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_15388c:
    // 0x15388c: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_153890:
    // 0x153890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153894:
    // 0x153894: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153898:
    // 0x153898: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15389c:
    // 0x15389c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1538a0:
    // 0x1538a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1538a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1538a4:
    // 0x1538a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1538a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1538a8:
    // 0x1538a8: 0x2466bd00  addiu       $a2, $v1, -0x4300
    ctx->pc = 0x1538a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_1538ac:
    // 0x1538ac: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1538acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1538b0:
    // 0x1538b0: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x1538b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
label_1538b4:
    // 0x1538b4: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x1538b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
label_1538b8:
    // 0x1538b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1538b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1538bc:
    // 0x1538bc: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1538bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1538c0:
    // 0x1538c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1538c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1538c4:
    // 0x1538c4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1538c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1538c8:
    // 0x1538c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1538c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1538cc:
    // 0x1538cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1538ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1538d0:
    // 0x1538d0: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1538d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1538d4:
    // 0x1538d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1538d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1538d8:
    // 0x1538d8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1538d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_1538dc:
    // 0x1538dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1538dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1538e0:
    // 0x1538e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1538e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1538e4:
    // 0x1538e4: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1538e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1538e8:
    // 0x1538e8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1538e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1538ec:
    // 0x1538ec: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1538ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1538f0:
    // 0x1538f0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1538f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1538f4:
    // 0x1538f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1538f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1538f8:
    // 0x1538f8: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x1538f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_1538fc:
    // 0x1538fc: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1538fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153900:
    // 0x153900: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x153900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_153904:
    // 0x153904: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x153904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_153908:
    // 0x153908: 0x3444e6e7  ori         $a0, $v0, 0xE6E7
    ctx->pc = 0x153908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59111);
label_15390c:
    // 0x15390c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15390cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153910:
    // 0x153910: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153914:
    // 0x153914: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153918:
    // 0x153918: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15391c:
    // 0x15391c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x15391cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153920:
    // 0x153920: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153924:
    // 0x153924: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153928:
    // 0x153928: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15392c:
    // 0x15392c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x15392cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_153930:
    // 0x153930: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x153930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
label_153934:
    // 0x153934: 0x34829091  ori         $v0, $a0, 0x9091
    ctx->pc = 0x153934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
label_153938:
    // 0x153938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15393c:
    // 0x15393c: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x15393cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153940:
    // 0x153940: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153944:
    // 0x153944: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x153944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153948:
    // 0x153948: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15394c:
    // 0x15394c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x15394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_153950:
    // 0x153950: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x153950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_153954:
    // 0x153954: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153958:
    // 0x153958: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x153958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_15395c:
    // 0x15395c: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x15395cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_153960:
    // 0x153960: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153960u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153964:
    // 0x153964: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153968:
    // 0x153968: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15396c:
    // 0x15396c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153970:
    // 0x153970: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153974:
    // 0x153974: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153978:
    // 0x153978: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_15397c:
    // 0x15397c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x15397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_153980:
    // 0x153980: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_153984:
    // 0x153984: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x153984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
label_153988:
    // 0x153988: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153988u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15398c:
    // 0x15398c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x15398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153990:
    // 0x153990: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x153990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_153994:
    // 0x153994: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_153998:
    // 0x153998: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x153998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15399c:
    // 0x15399c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15399cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1539a0:
    // 0x1539a0: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1539a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1539a4:
    // 0x1539a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1539a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1539a8:
    // 0x1539a8: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1539a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_1539ac:
    // 0x1539ac: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x1539acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
label_1539b0:
    // 0x1539b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1539b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1539b4:
    // 0x1539b4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1539b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1539b8:
    // 0x1539b8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1539b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1539bc:
    // 0x1539bc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1539bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1539c0:
    // 0x1539c0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1539c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1539c4:
    // 0x1539c4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1539c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1539c8:
    // 0x1539c8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1539c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1539cc:
    // 0x1539cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1539ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1539d0:
    // 0x1539d0: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1539d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_1539d4:
    // 0x1539d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1539d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1539d8:
    // 0x1539d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1539d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1539dc:
    // 0x1539dc: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1539dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1539e0:
    // 0x1539e0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1539e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1539e4:
    // 0x1539e4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1539e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1539e8:
    // 0x1539e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1539e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1539ec:
    // 0x1539ec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1539ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1539f0:
    // 0x1539f0: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x1539f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_1539f4:
    // 0x1539f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1539f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1539f8:
    // 0x1539f8: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x1539f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_1539fc:
    // 0x1539fc: 0x3c053f66  lui         $a1, 0x3F66
    ctx->pc = 0x1539fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16230 << 16));
label_153a00:
    // 0x153a00: 0x34a3e6e7  ori         $v1, $a1, 0xE6E7
    ctx->pc = 0x153a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59111);
label_153a04:
    // 0x153a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153a08:
    // 0x153a08: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153a0c:
    // 0x153a0c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153a10:
    // 0x153a10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x153a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153a14:
    // 0x153a14: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153a18:
    // 0x153a18: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153a1c:
    // 0x153a1c: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153a20:
    // 0x153a20: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x153a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153a24:
    // 0x153a24: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x153a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_153a28:
    // 0x153a28: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x153a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
label_153a2c:
    // 0x153a2c: 0x34439091  ori         $v1, $v0, 0x9091
    ctx->pc = 0x153a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
label_153a30:
    // 0x153a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153a34:
    // 0x153a34: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153a38:
    // 0x153a38: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153a3c:
    // 0x153a3c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153a40:
    // 0x153a40: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153a44:
    // 0x153a44: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153a48:
    // 0x153a48: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x153a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153a4c:
    // 0x153a4c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x153a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_153a50:
    // 0x153a50: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x153a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_153a54:
    // 0x153a54: 0x10000284  b           . + 4 + (0x284 << 2)
label_153a58:
    if (ctx->pc == 0x153A58u) {
        ctx->pc = 0x153A5Cu;
        goto label_153a5c;
    }
    ctx->pc = 0x153A54u;
    {
        const bool branch_taken_0x153a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153a54) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x153A5Cu;
label_153a5c:
    // 0x153a5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x153a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_153a60:
    // 0x153a60: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x153a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948912)));
label_153a64:
    // 0x153a64: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x153a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
label_153a68:
    // 0x153a68: 0x3c054307  lui         $a1, 0x4307
    ctx->pc = 0x153a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17159 << 16));
label_153a6c:
    // 0x153a6c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153a6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153a70:
    // 0x153a70: 0x0  nop
    ctx->pc = 0x153a70u;
    // NOP
label_153a74:
    // 0x153a74: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x153a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
label_153a78:
    // 0x153a78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153a7c:
    // 0x153a7c: 0x0  nop
    ctx->pc = 0x153a7cu;
    // NOP
label_153a80:
    // 0x153a80: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x153a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
label_153a84:
    // 0x153a84: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x153a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_153a88:
    // 0x153a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153a8c:
    // 0x153a8c: 0x0  nop
    ctx->pc = 0x153a8cu;
    // NOP
label_153a90:
    // 0x153a90: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x153a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
label_153a94:
    // 0x153a94: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_153a98:
    // 0x153a98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153a98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153a9c:
    // 0x153a9c: 0x0  nop
    ctx->pc = 0x153a9cu;
    // NOP
label_153aa0:
    // 0x153aa0: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x153aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
label_153aa4:
    // 0x153aa4: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x153aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
label_153aa8:
    // 0x153aa8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x153aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_153aac:
    // 0x153aac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_153ab0:
    // 0x153ab0: 0x10640089  beq         $v1, $a0, . + 4 + (0x89 << 2)
label_153ab4:
    if (ctx->pc == 0x153AB4u) {
        ctx->pc = 0x153AB8u;
        goto label_153ab8;
    }
    ctx->pc = 0x153AB0u;
    {
        const bool branch_taken_0x153ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x153ab0) {
            ctx->pc = 0x153CD8u;
            goto label_153cd8;
        }
    }
    ctx->pc = 0x153AB8u;
label_153ab8:
    // 0x153ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153abc:
    // 0x153abc: 0x10650086  beq         $v1, $a1, . + 4 + (0x86 << 2)
label_153ac0:
    if (ctx->pc == 0x153AC0u) {
        ctx->pc = 0x153AC4u;
        goto label_153ac4;
    }
    ctx->pc = 0x153ABCu;
    {
        const bool branch_taken_0x153abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x153abc) {
            ctx->pc = 0x153CD8u;
            goto label_153cd8;
        }
    }
    ctx->pc = 0x153AC4u;
label_153ac4:
    // 0x153ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x153ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_153ac8:
    // 0x153ac8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_153acc:
    if (ctx->pc == 0x153ACCu) {
        ctx->pc = 0x153AD0u;
        goto label_153ad0;
    }
    ctx->pc = 0x153AC8u;
    {
        const bool branch_taken_0x153ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x153ac8) {
            ctx->pc = 0x153AE0u;
            goto label_153ae0;
        }
    }
    ctx->pc = 0x153AD0u;
label_153ad0:
    // 0x153ad0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_153ad4:
    if (ctx->pc == 0x153AD4u) {
        ctx->pc = 0x153AD8u;
        goto label_153ad8;
    }
    ctx->pc = 0x153AD0u;
    {
        const bool branch_taken_0x153ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ad0) {
            ctx->pc = 0x153AE0u;
            goto label_153ae0;
        }
    }
    ctx->pc = 0x153AD8u;
label_153ad8:
    // 0x153ad8: 0x10000263  b           . + 4 + (0x263 << 2)
label_153adc:
    if (ctx->pc == 0x153ADCu) {
        ctx->pc = 0x153AE0u;
        goto label_153ae0;
    }
    ctx->pc = 0x153AD8u;
    {
        const bool branch_taken_0x153ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ad8) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x153AE0u;
label_153ae0:
    // 0x153ae0: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x153ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_153ae4:
    // 0x153ae4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153ae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153ae8:
    // 0x153ae8: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153aec:
    // 0x153aec: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153af0:
    // 0x153af0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153af4:
    // 0x153af4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x153af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153af8:
    // 0x153af8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153afc:
    // 0x153afc: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153b00:
    // 0x153b00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x153b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_153b04:
    // 0x153b04: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_153b08:
    // 0x153b08: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x153b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_153b0c:
    // 0x153b0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153b0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153b10:
    // 0x153b10: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153b14:
    // 0x153b14: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x153b14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153b18:
    // 0x153b18: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x153b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_153b1c:
    // 0x153b1c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153b20:
    // 0x153b20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153b24:
    // 0x153b24: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153b28:
    // 0x153b28: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x153b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153b2c:
    // 0x153b2c: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x153b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_153b30:
    // 0x153b30: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_153b34:
    // 0x153b34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153b38:
    // 0x153b38: 0x8e0615b0  lw          $a2, 0x15B0($s0)
    ctx->pc = 0x153b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153b3c:
    // 0x153b3c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x153b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_153b40:
    // 0x153b40: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x153b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_153b44:
    // 0x153b44: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x153b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153b48:
    // 0x153b48: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153b4c:
    // 0x153b4c: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x153b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153b50:
    // 0x153b50: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x153b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_153b54:
    // 0x153b54: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_153b58:
    // 0x153b58: 0x3c063f48  lui         $a2, 0x3F48
    ctx->pc = 0x153b58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16200 << 16));
label_153b5c:
    // 0x153b5c: 0x34c4c8c9  ori         $a0, $a2, 0xC8C9
    ctx->pc = 0x153b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51401);
label_153b60:
    // 0x153b60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153b60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153b64:
    // 0x153b64: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153b68:
    // 0x153b68: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153b68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153b6c:
    // 0x153b6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x153b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_153b70:
    // 0x153b70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153b74:
    // 0x153b74: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153b78:
    // 0x153b78: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153b7c:
    // 0x153b7c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153b80:
    // 0x153b80: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x153b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_153b84:
    // 0x153b84: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x153b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
label_153b88:
    // 0x153b88: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x153b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
label_153b8c:
    // 0x153b8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153b8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153b90:
    // 0x153b90: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153b94:
    // 0x153b94: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153b98:
    // 0x153b98: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153b9c:
    // 0x153b9c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153ba0:
    // 0x153ba0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153ba4:
    // 0x153ba4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x153ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153ba8:
    // 0x153ba8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153bac:
    // 0x153bac: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x153bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
label_153bb0:
    // 0x153bb0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_153bb4:
    // 0x153bb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153bb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153bb8:
    // 0x153bb8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153bbc:
    // 0x153bbc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153bc0:
    // 0x153bc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153bc4:
    // 0x153bc4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153bc8:
    // 0x153bc8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153bcc:
    // 0x153bcc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153bd0:
    // 0x153bd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153bd4:
    // 0x153bd4: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x153bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_153bd8:
    // 0x153bd8: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x153bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
label_153bdc:
    // 0x153bdc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153bdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153be0:
    // 0x153be0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153be4:
    // 0x153be4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153be8:
    // 0x153be8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153bec:
    // 0x153bec: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153becu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153bf0:
    // 0x153bf0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153bf4:
    // 0x153bf4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153bf8:
    // 0x153bf8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153bfc:
    // 0x153bfc: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_153c00:
    // 0x153c00: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x153c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_153c04:
    // 0x153c04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153c08:
    // 0x153c08: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153c0c:
    // 0x153c0c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x153c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153c10:
    // 0x153c10: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153c14:
    // 0x153c14: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153c14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153c18:
    // 0x153c18: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153c1c:
    // 0x153c1c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153c20:
    // 0x153c20: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x153c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153c24:
    // 0x153c24: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x153c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
label_153c28:
    // 0x153c28: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_153c2c:
    // 0x153c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153c30:
    // 0x153c30: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153c34:
    // 0x153c34: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153c38:
    // 0x153c38: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153c3c:
    // 0x153c3c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153c40:
    // 0x153c40: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153c44:
    // 0x153c44: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153c48:
    // 0x153c48: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x153c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153c4c:
    // 0x153c4c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_153c50:
    // 0x153c50: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x153c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
label_153c54:
    // 0x153c54: 0x34a4c8c9  ori         $a0, $a1, 0xC8C9
    ctx->pc = 0x153c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
label_153c58:
    // 0x153c58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153c58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153c5c:
    // 0x153c5c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153c60:
    // 0x153c60: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153c64:
    // 0x153c64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153c68:
    // 0x153c68: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153c6c:
    // 0x153c6c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153c70:
    // 0x153c70: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153c74:
    // 0x153c74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153c78:
    // 0x153c78: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x153c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_153c7c:
    // 0x153c7c: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x153c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
label_153c80:
    // 0x153c80: 0x3485c8c9  ori         $a1, $a0, 0xC8C9
    ctx->pc = 0x153c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
label_153c84:
    // 0x153c84: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153c84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153c88:
    // 0x153c88: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153c8c:
    // 0x153c8c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153c90:
    // 0x153c90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153c94:
    // 0x153c94: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153c94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153c98:
    // 0x153c98: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153c9c:
    // 0x153c9c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153ca0:
    // 0x153ca0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153ca4:
    // 0x153ca4: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x153ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_153ca8:
    // 0x153ca8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x153ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_153cac:
    // 0x153cac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153cacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153cb0:
    // 0x153cb0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153cb4:
    // 0x153cb4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153cb8:
    // 0x153cb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153cbc:
    // 0x153cbc: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153cc0:
    // 0x153cc0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153cc4:
    // 0x153cc4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153cc8:
    // 0x153cc8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153ccc:
    // 0x153ccc: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x153cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_153cd0:
    // 0x153cd0: 0x100001e5  b           . + 4 + (0x1E5 << 2)
label_153cd4:
    if (ctx->pc == 0x153CD4u) {
        ctx->pc = 0x153CD8u;
        goto label_153cd8;
    }
    ctx->pc = 0x153CD0u;
    {
        const bool branch_taken_0x153cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153cd0) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x153CD8u;
label_153cd8:
    // 0x153cd8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_153cdc:
    // 0x153cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153ce0:
    // 0x153ce0: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153ce4:
    // 0x153ce4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x153ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153ce8:
    // 0x153ce8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x153ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_153cec:
    // 0x153cec: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x153cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_153cf0:
    // 0x153cf0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153cf4:
    // 0x153cf4: 0x2484bd00  addiu       $a0, $a0, -0x4300
    ctx->pc = 0x153cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153cf8:
    // 0x153cf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153cfc:
    // 0x153cfc: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_153d00:
    // 0x153d00: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x153d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
label_153d04:
    // 0x153d04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153d04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153d08:
    // 0x153d08: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153d0c:
    // 0x153d0c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153d10:
    // 0x153d10: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153d14:
    // 0x153d14: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153d14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153d18:
    // 0x153d18: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x153d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_153d1c:
    // 0x153d1c: 0x24c4bd00  addiu       $a0, $a2, -0x4300
    ctx->pc = 0x153d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_153d20:
    // 0x153d20: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153d24:
    // 0x153d24: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x153d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_153d28:
    // 0x153d28: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x153d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
label_153d2c:
    // 0x153d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153d30:
    // 0x153d30: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153d34:
    // 0x153d34: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x153d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153d38:
    // 0x153d38: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x153d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_153d3c:
    // 0x153d3c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x153d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153d40:
    // 0x153d40: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153d44:
    // 0x153d44: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x153d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153d48:
    // 0x153d48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153d4c:
    // 0x153d4c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_153d50:
    // 0x153d50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x153d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_153d54:
    // 0x153d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153d58:
    // 0x153d58: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153d5c:
    // 0x153d5c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153d60:
    // 0x153d60: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153d64:
    // 0x153d64: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153d68:
    // 0x153d68: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153d6c:
    // 0x153d6c: 0x2466bd00  addiu       $a2, $v1, -0x4300
    ctx->pc = 0x153d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153d70:
    // 0x153d70: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_153d74:
    // 0x153d74: 0xe4a00080  swc1        $f0, 0x80($a1)
    ctx->pc = 0x153d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
label_153d78:
    // 0x153d78: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_153d7c:
    // 0x153d7c: 0x3483e6e7  ori         $v1, $a0, 0xE6E7
    ctx->pc = 0x153d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
label_153d80:
    // 0x153d80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153d80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153d84:
    // 0x153d84: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153d88:
    // 0x153d88: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153d8c:
    // 0x153d8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153d90:
    // 0x153d90: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153d94:
    // 0x153d94: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153d98:
    // 0x153d98: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153d9c:
    // 0x153d9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x153d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_153da0:
    // 0x153da0: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x153da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_153da4:
    // 0x153da4: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x153da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
label_153da8:
    // 0x153da8: 0x34839091  ori         $v1, $a0, 0x9091
    ctx->pc = 0x153da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
label_153dac:
    // 0x153dac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153db0:
    // 0x153db0: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x153db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153db4:
    // 0x153db4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x153db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_153db8:
    // 0x153db8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x153db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_153dbc:
    // 0x153dbc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x153dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153dc0:
    // 0x153dc0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153dc4:
    // 0x153dc4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153dc8:
    // 0x153dc8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x153dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153dcc:
    // 0x153dcc: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x153dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_153dd0:
    // 0x153dd0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_153dd4:
    // 0x153dd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153dd8:
    // 0x153dd8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153ddc:
    // 0x153ddc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_153de0:
    // 0x153de0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153de4:
    // 0x153de4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153de8:
    // 0x153de8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153dec:
    // 0x153dec: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153df0:
    // 0x153df0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_153df4:
    // 0x153df4: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x153df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_153df8:
    // 0x153df8: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x153df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
label_153dfc:
    // 0x153dfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153dfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153e00:
    // 0x153e00: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153e04:
    // 0x153e04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153e08:
    // 0x153e08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x153e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153e0c:
    // 0x153e0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153e10:
    // 0x153e10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_153e14:
    // 0x153e14: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x153e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_153e18:
    // 0x153e18: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153e1c:
    // 0x153e1c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x153e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_153e20:
    // 0x153e20: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
label_153e24:
    // 0x153e24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153e24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153e28:
    // 0x153e28: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153e2c:
    // 0x153e2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153e30:
    // 0x153e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153e34:
    // 0x153e34: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153e38:
    // 0x153e38: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153e3c:
    // 0x153e3c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153e40:
    // 0x153e40: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_153e44:
    // 0x153e44: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_153e48:
    // 0x153e48: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_153e4c:
    // 0x153e4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153e4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153e50:
    // 0x153e50: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x153e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153e54:
    // 0x153e54: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x153e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_153e58:
    // 0x153e58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_153e5c:
    // 0x153e5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x153e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153e60:
    // 0x153e60: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153e64:
    // 0x153e64: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153e68:
    // 0x153e68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_153e6c:
    // 0x153e6c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x153e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_153e70:
    // 0x153e70: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_153e74:
    // 0x153e74: 0x3483e6e7  ori         $v1, $a0, 0xE6E7
    ctx->pc = 0x153e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
label_153e78:
    // 0x153e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153e7c:
    // 0x153e7c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x153e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153e80:
    // 0x153e80: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x153e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_153e84:
    // 0x153e84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_153e88:
    // 0x153e88: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153e8c:
    // 0x153e8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_153e90:
    // 0x153e90: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_153e94:
    // 0x153e94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x153e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_153e98:
    // 0x153e98: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x153e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_153e9c:
    // 0x153e9c: 0x3c053f10  lui         $a1, 0x3F10
    ctx->pc = 0x153e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16144 << 16));
label_153ea0:
    // 0x153ea0: 0x34a49091  ori         $a0, $a1, 0x9091
    ctx->pc = 0x153ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37009);
label_153ea4:
    // 0x153ea4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153ea4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153ea8:
    // 0x153ea8: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_153eac:
    // 0x153eac: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153eb0:
    // 0x153eb0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153eb4:
    // 0x153eb4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153eb8:
    // 0x153eb8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153ebc:
    // 0x153ebc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153ec0:
    // 0x153ec0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x153ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153ec4:
    // 0x153ec4: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x153ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
label_153ec8:
    // 0x153ec8: 0x10000167  b           . + 4 + (0x167 << 2)
label_153ecc:
    if (ctx->pc == 0x153ECCu) {
        ctx->pc = 0x153ED0u;
        goto label_153ed0;
    }
    ctx->pc = 0x153EC8u;
    {
        const bool branch_taken_0x153ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ec8) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x153ED0u;
label_153ed0:
    // 0x153ed0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x153ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_153ed4:
    // 0x153ed4: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x153ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944208)));
label_153ed8:
    // 0x153ed8: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x153ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
label_153edc:
    // 0x153edc: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x153edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_153ee0:
    // 0x153ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153ee4:
    // 0x153ee4: 0x0  nop
    ctx->pc = 0x153ee4u;
    // NOP
label_153ee8:
    // 0x153ee8: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x153ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
label_153eec:
    // 0x153eec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153ef0:
    // 0x153ef0: 0x0  nop
    ctx->pc = 0x153ef0u;
    // NOP
label_153ef4:
    // 0x153ef4: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x153ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
label_153ef8:
    // 0x153ef8: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x153ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_153efc:
    // 0x153efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153f00:
    // 0x153f00: 0x0  nop
    ctx->pc = 0x153f00u;
    // NOP
label_153f04:
    // 0x153f04: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x153f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
label_153f08:
    // 0x153f08: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_153f0c:
    // 0x153f0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153f0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153f10:
    // 0x153f10: 0x0  nop
    ctx->pc = 0x153f10u;
    // NOP
label_153f14:
    // 0x153f14: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x153f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
label_153f18:
    // 0x153f18: 0x920313a6  lbu         $v1, 0x13A6($s0)
    ctx->pc = 0x153f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
label_153f1c:
    // 0x153f1c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x153f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_153f20:
    // 0x153f20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_153f24:
    // 0x153f24: 0x10a40089  beq         $a1, $a0, . + 4 + (0x89 << 2)
label_153f28:
    if (ctx->pc == 0x153F28u) {
        ctx->pc = 0x153F2Cu;
        goto label_153f2c;
    }
    ctx->pc = 0x153F24u;
    {
        const bool branch_taken_0x153f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x153f24) {
            ctx->pc = 0x15414Cu;
            goto label_15414c;
        }
    }
    ctx->pc = 0x153F2Cu;
label_153f2c:
    // 0x153f2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153f30:
    // 0x153f30: 0x10a30086  beq         $a1, $v1, . + 4 + (0x86 << 2)
label_153f34:
    if (ctx->pc == 0x153F34u) {
        ctx->pc = 0x153F38u;
        goto label_153f38;
    }
    ctx->pc = 0x153F30u;
    {
        const bool branch_taken_0x153f30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153f30) {
            ctx->pc = 0x15414Cu;
            goto label_15414c;
        }
    }
    ctx->pc = 0x153F38u;
label_153f38:
    // 0x153f38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x153f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_153f3c:
    // 0x153f3c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_153f40:
    if (ctx->pc == 0x153F40u) {
        ctx->pc = 0x153F44u;
        goto label_153f44;
    }
    ctx->pc = 0x153F3Cu;
    {
        const bool branch_taken_0x153f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x153f3c) {
            ctx->pc = 0x153F54u;
            goto label_153f54;
        }
    }
    ctx->pc = 0x153F44u;
label_153f44:
    // 0x153f44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_153f48:
    if (ctx->pc == 0x153F48u) {
        ctx->pc = 0x153F4Cu;
        goto label_153f4c;
    }
    ctx->pc = 0x153F44u;
    {
        const bool branch_taken_0x153f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f44) {
            ctx->pc = 0x153F54u;
            goto label_153f54;
        }
    }
    ctx->pc = 0x153F4Cu;
label_153f4c:
    // 0x153f4c: 0x10000146  b           . + 4 + (0x146 << 2)
label_153f50:
    if (ctx->pc == 0x153F50u) {
        ctx->pc = 0x153F54u;
        goto label_153f54;
    }
    ctx->pc = 0x153F4Cu;
    {
        const bool branch_taken_0x153f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f4c) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x153F54u;
label_153f54:
    // 0x153f54: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x153f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_153f58:
    // 0x153f58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153f58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153f5c:
    // 0x153f5c: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153f60:
    // 0x153f60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153f64:
    // 0x153f64: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x153f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153f68:
    // 0x153f68: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153f6c:
    // 0x153f6c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x153f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_153f70:
    // 0x153f70: 0x24c2bd00  addiu       $v0, $a2, -0x4300
    ctx->pc = 0x153f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_153f74:
    // 0x153f74: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x153f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_153f78:
    // 0x153f78: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x153f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_153f7c:
    // 0x153f7c: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x153f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
label_153f80:
    // 0x153f80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153f80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153f84:
    // 0x153f84: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153f88:
    // 0x153f88: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153f8c:
    // 0x153f8c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x153f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153f90:
    // 0x153f90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x153f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153f94:
    // 0x153f94: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_153f98:
    // 0x153f98: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x153f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_153f9c:
    // 0x153f9c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x153f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_153fa0:
    // 0x153fa0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x153fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_153fa4:
    // 0x153fa4: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x153fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_153fa8:
    // 0x153fa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153fa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153fac:
    // 0x153fac: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153fb0:
    // 0x153fb0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_153fb4:
    // 0x153fb4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153fb8:
    // 0x153fb8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x153fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153fbc:
    // 0x153fbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153fc0:
    // 0x153fc0: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153fc4:
    // 0x153fc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x153fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_153fc8:
    // 0x153fc8: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_153fcc:
    // 0x153fcc: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x153fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
label_153fd0:
    // 0x153fd0: 0x34a4c8c9  ori         $a0, $a1, 0xC8C9
    ctx->pc = 0x153fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
label_153fd4:
    // 0x153fd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153fd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153fd8:
    // 0x153fd8: 0x8e0615b0  lw          $a2, 0x15B0($s0)
    ctx->pc = 0x153fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_153fdc:
    // 0x153fdc: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x153fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_153fe0:
    // 0x153fe0: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x153fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_153fe4:
    // 0x153fe4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x153fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153fe8:
    // 0x153fe8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_153fec:
    // 0x153fec: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x153fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_153ff0:
    // 0x153ff0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_153ff4:
    // 0x153ff4: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x153ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_153ff8:
    // 0x153ff8: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x153ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
label_153ffc:
    // 0x153ffc: 0x3486c8c9  ori         $a2, $a0, 0xC8C9
    ctx->pc = 0x153ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
label_154000:
    // 0x154000: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x154000u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154004:
    // 0x154004: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x154004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154008:
    // 0x154008: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x154008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_15400c:
    // 0x15400c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x15400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154010:
    // 0x154010: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x154010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_154014:
    // 0x154014: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154018:
    // 0x154018: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_15401c:
    // 0x15401c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x15401cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154020:
    // 0x154020: 0xe4c00084  swc1        $f0, 0x84($a2)
    ctx->pc = 0x154020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 132), bits); }
label_154024:
    // 0x154024: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_154028:
    // 0x154028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15402c:
    // 0x15402c: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x15402cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154030:
    // 0x154030: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x154030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_154034:
    // 0x154034: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x154034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154038:
    // 0x154038: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x154038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15403c:
    // 0x15403c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15403cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154040:
    // 0x154040: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154044:
    // 0x154044: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x154044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154048:
    // 0x154048: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x154048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
label_15404c:
    // 0x15404c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x15404cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_154050:
    // 0x154050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154054:
    // 0x154054: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154058:
    // 0x154058: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15405c:
    // 0x15405c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154060:
    // 0x154060: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x154060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_154064:
    // 0x154064: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154068:
    // 0x154068: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x154068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_15406c:
    // 0x15406c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154070:
    // 0x154070: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x154070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
label_154074:
    // 0x154074: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x154074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_154078:
    // 0x154078: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15407c:
    // 0x15407c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x15407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154080:
    // 0x154080: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154084:
    // 0x154084: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154088:
    // 0x154088: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15408c:
    // 0x15408c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15408cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154090:
    // 0x154090: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154094:
    // 0x154094: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x154094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154098:
    // 0x154098: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x154098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_15409c:
    // 0x15409c: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x15409cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_1540a0:
    // 0x1540a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1540a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1540a4:
    // 0x1540a4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1540a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1540a8:
    // 0x1540a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1540a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1540ac:
    // 0x1540ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1540acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1540b0:
    // 0x1540b0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1540b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1540b4:
    // 0x1540b4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1540b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1540b8:
    // 0x1540b8: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1540b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_1540bc:
    // 0x1540bc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1540bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1540c0:
    // 0x1540c0: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1540c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_1540c4:
    // 0x1540c4: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x1540c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
label_1540c8:
    // 0x1540c8: 0x34a3c8c9  ori         $v1, $a1, 0xC8C9
    ctx->pc = 0x1540c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
label_1540cc:
    // 0x1540cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1540ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1540d0:
    // 0x1540d0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1540d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1540d4:
    // 0x1540d4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1540d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1540d8:
    // 0x1540d8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1540d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1540dc:
    // 0x1540dc: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1540dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1540e0:
    // 0x1540e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1540e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1540e4:
    // 0x1540e4: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x1540e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_1540e8:
    // 0x1540e8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1540e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1540ec:
    // 0x1540ec: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x1540ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_1540f0:
    // 0x1540f0: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x1540f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
label_1540f4:
    // 0x1540f4: 0x3464c8c9  ori         $a0, $v1, 0xC8C9
    ctx->pc = 0x1540f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
label_1540f8:
    // 0x1540f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1540f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1540fc:
    // 0x1540fc: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x1540fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154100:
    // 0x154100: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_154104:
    // 0x154104: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154108:
    // 0x154108: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15410c:
    // 0x15410c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15410cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154110:
    // 0x154110: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154114:
    // 0x154114: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x154114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154118:
    // 0x154118: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x154118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
label_15411c:
    // 0x15411c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15411cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_154120:
    // 0x154120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154124:
    // 0x154124: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154128:
    // 0x154128: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15412c:
    // 0x15412c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15412cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154130:
    // 0x154130: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x154130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_154134:
    // 0x154134: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154138:
    // 0x154138: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x154138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_15413c:
    // 0x15413c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154140:
    // 0x154140: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x154140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
label_154144:
    // 0x154144: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_154148:
    if (ctx->pc == 0x154148u) {
        ctx->pc = 0x15414Cu;
        goto label_15414c;
    }
    ctx->pc = 0x154144u;
    {
        const bool branch_taken_0x154144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154144) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x15414Cu;
label_15414c:
    // 0x15414c: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x15414cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_154150:
    // 0x154150: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154150u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154154:
    // 0x154154: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154158:
    // 0x154158: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15415c:
    // 0x15415c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154160:
    // 0x154160: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154164:
    // 0x154164: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154168:
    // 0x154168: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_15416c:
    // 0x15416c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154170:
    // 0x154170: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x154170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_154174:
    // 0x154174: 0x3c054366  lui         $a1, 0x4366
    ctx->pc = 0x154174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17254 << 16));
label_154178:
    // 0x154178: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x154178u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15417c:
    // 0x15417c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15417cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154180:
    // 0x154180: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154184:
    // 0x154184: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154188:
    // 0x154188: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x154188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15418c:
    // 0x15418c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15418cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154190:
    // 0x154190: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154194:
    // 0x154194: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154198:
    // 0x154198: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x154198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_15419c:
    // 0x15419c: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x15419cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
label_1541a0:
    // 0x1541a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1541a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1541a4:
    // 0x1541a4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1541a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1541a8:
    // 0x1541a8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1541a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1541ac:
    // 0x1541ac: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1541acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1541b0:
    // 0x1541b0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1541b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1541b4:
    // 0x1541b4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1541b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1541b8:
    // 0x1541b8: 0x2484bd00  addiu       $a0, $a0, -0x4300
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1541bc:
    // 0x1541bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1541bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1541c0:
    // 0x1541c0: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1541c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_1541c4:
    // 0x1541c4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1541c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1541c8:
    // 0x1541c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1541c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1541cc:
    // 0x1541cc: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x1541ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1541d0:
    // 0x1541d0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1541d4:
    // 0x1541d4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1541d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1541d8:
    // 0x1541d8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1541dc:
    // 0x1541dc: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1541dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_1541e0:
    // 0x1541e0: 0x24c4bd00  addiu       $a0, $a2, -0x4300
    ctx->pc = 0x1541e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_1541e4:
    // 0x1541e4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1541e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1541e8:
    // 0x1541e8: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x1541e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_1541ec:
    // 0x1541ec: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x1541ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_1541f0:
    // 0x1541f0: 0x3482e6e7  ori         $v0, $a0, 0xE6E7
    ctx->pc = 0x1541f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
label_1541f4:
    // 0x1541f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1541f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1541f8:
    // 0x1541f8: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x1541f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1541fc:
    // 0x1541fc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1541fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_154200:
    // 0x154200: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x154200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_154204:
    // 0x154204: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154208:
    // 0x154208: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_15420c:
    // 0x15420c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154210:
    // 0x154210: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x154210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154214:
    // 0x154214: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x154214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_154218:
    // 0x154218: 0x3c033f10  lui         $v1, 0x3F10
    ctx->pc = 0x154218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16144 << 16));
label_15421c:
    // 0x15421c: 0x34639091  ori         $v1, $v1, 0x9091
    ctx->pc = 0x15421cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37009);
label_154220:
    // 0x154220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154224:
    // 0x154224: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154228:
    // 0x154228: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15422c:
    // 0x15422c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154230:
    // 0x154230: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_154234:
    // 0x154234: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x154234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_154238:
    // 0x154238: 0x24c5bd00  addiu       $a1, $a2, -0x4300
    ctx->pc = 0x154238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_15423c:
    // 0x15423c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15423cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_154240:
    // 0x154240: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_154244:
    // 0x154244: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x154244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_154248:
    // 0x154248: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154248u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15424c:
    // 0x15424c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x15424cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154250:
    // 0x154250: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154254:
    // 0x154254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154258:
    // 0x154258: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15425c:
    // 0x15425c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15425cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154260:
    // 0x154260: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154264:
    // 0x154264: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x154264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_154268:
    // 0x154268: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x154268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_15426c:
    // 0x15426c: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x15426cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_154270:
    // 0x154270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154274:
    // 0x154274: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154278:
    // 0x154278: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x154278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15427c:
    // 0x15427c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x15427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_154280:
    // 0x154280: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x154280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_154284:
    // 0x154284: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_154288:
    // 0x154288: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x154288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_15428c:
    // 0x15428c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x15428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_154290:
    // 0x154290: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x154290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_154294:
    // 0x154294: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x154294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
label_154298:
    // 0x154298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15429c:
    // 0x15429c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x15429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1542a0:
    // 0x1542a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1542a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1542a4:
    // 0x1542a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1542a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1542a8:
    // 0x1542a8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1542a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1542ac:
    // 0x1542ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1542acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1542b0:
    // 0x1542b0: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1542b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1542b4:
    // 0x1542b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1542b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1542b8:
    // 0x1542b8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1542b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_1542bc:
    // 0x1542bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1542bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1542c0:
    // 0x1542c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1542c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1542c4:
    // 0x1542c4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1542c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1542c8:
    // 0x1542c8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1542c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1542cc:
    // 0x1542cc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1542ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1542d0:
    // 0x1542d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1542d4:
    // 0x1542d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1542d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1542d8:
    // 0x1542d8: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x1542d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1542dc:
    // 0x1542dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1542dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1542e0:
    // 0x1542e0: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x1542e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_1542e4:
    // 0x1542e4: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x1542e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_1542e8:
    // 0x1542e8: 0x3482e6e7  ori         $v0, $a0, 0xE6E7
    ctx->pc = 0x1542e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
label_1542ec:
    // 0x1542ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1542ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1542f0:
    // 0x1542f0: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1542f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1542f4:
    // 0x1542f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1542f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1542f8:
    // 0x1542f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1542f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1542fc:
    // 0x1542fc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1542fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154300:
    // 0x154300: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154304:
    // 0x154304: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154308:
    // 0x154308: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15430c:
    // 0x15430c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x15430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_154310:
    // 0x154310: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x154310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
label_154314:
    // 0x154314: 0x34449091  ori         $a0, $v0, 0x9091
    ctx->pc = 0x154314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
label_154318:
    // 0x154318: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154318u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15431c:
    // 0x15431c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x15431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154320:
    // 0x154320: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154324:
    // 0x154324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154328:
    // 0x154328: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15432c:
    // 0x15432c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15432cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154330:
    // 0x154330: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154334:
    // 0x154334: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_154338:
    // 0x154338: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_15433c:
    // 0x15433c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_154340:
    if (ctx->pc == 0x154340u) {
        ctx->pc = 0x154344u;
        goto label_154344;
    }
    ctx->pc = 0x15433Cu;
    {
        const bool branch_taken_0x15433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15433c) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x154344u;
label_154344:
    // 0x154344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x154344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154348:
    // 0x154348: 0x0  nop
    ctx->pc = 0x154348u;
    // NOP
label_15434c:
    // 0x15434c: 0xe60015b8  swc1        $f0, 0x15B8($s0)
    ctx->pc = 0x15434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5560), bits); }
label_154350:
    // 0x154350: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154354:
    // 0x154354: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_154358:
    // 0x154358: 0xc05db4c  jal         func_176D30
label_15435c:
    if (ctx->pc == 0x15435Cu) {
        ctx->pc = 0x154360u;
        goto label_154360;
    }
    ctx->pc = 0x154358u;
    SET_GPR_U32(ctx, 31, 0x154360u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154358u, 0x154360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154360u;
label_154360:
    // 0x154360: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x154360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_154364:
    // 0x154364: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154368:
    // 0x154368: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x154368u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_15436c:
    // 0x15436c: 0xc05db74  jal         func_176DD0
label_154370:
    if (ctx->pc == 0x154370u) {
        ctx->pc = 0x154374u;
        goto label_154374;
    }
    ctx->pc = 0x15436Cu;
    SET_GPR_U32(ctx, 31, 0x154374u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x15436Cu, 0x154374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154374u;
label_154374:
    // 0x154374: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154378:
    // 0x154378: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15437c:
    // 0x15437c: 0xc05db4c  jal         func_176D30
label_154380:
    if (ctx->pc == 0x154380u) {
        ctx->pc = 0x154384u;
        goto label_154384;
    }
    ctx->pc = 0x15437Cu;
    SET_GPR_U32(ctx, 31, 0x154384u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x15437Cu, 0x154384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154384u;
label_154384:
    // 0x154384: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154384u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154388:
    // 0x154388: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x154388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15438c:
    // 0x15438c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x15438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154390:
    // 0x154390: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x154390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154394:
    // 0x154394: 0xc05db74  jal         func_176DD0
label_154398:
    if (ctx->pc == 0x154398u) {
        ctx->pc = 0x15439Cu;
        goto label_15439c;
    }
    ctx->pc = 0x154394u;
    SET_GPR_U32(ctx, 31, 0x15439Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154394u, 0x15439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15439Cu;
label_15439c:
    // 0x15439c: 0x920413a6  lbu         $a0, 0x13A6($s0)
    ctx->pc = 0x15439cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
label_1543a0:
    // 0x1543a0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1543a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1543a4:
    // 0x1543a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1543a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1543a8:
    // 0x1543a8: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
label_1543ac:
    if (ctx->pc == 0x1543ACu) {
        ctx->pc = 0x1543B0u;
        goto label_1543b0;
    }
    ctx->pc = 0x1543A8u;
    {
        const bool branch_taken_0x1543a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1543a8) {
            ctx->pc = 0x154444u;
            goto label_154444;
        }
    }
    ctx->pc = 0x1543B0u;
label_1543b0:
    // 0x1543b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1543b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1543b4:
    // 0x1543b4: 0x10a4001a  beq         $a1, $a0, . + 4 + (0x1A << 2)
label_1543b8:
    if (ctx->pc == 0x1543B8u) {
        ctx->pc = 0x1543BCu;
        goto label_1543bc;
    }
    ctx->pc = 0x1543B4u;
    {
        const bool branch_taken_0x1543b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1543b4) {
            ctx->pc = 0x154420u;
            goto label_154420;
        }
    }
    ctx->pc = 0x1543BCu;
label_1543bc:
    // 0x1543bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1543bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1543c0:
    // 0x1543c0: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_1543c4:
    if (ctx->pc == 0x1543C4u) {
        ctx->pc = 0x1543C8u;
        goto label_1543c8;
    }
    ctx->pc = 0x1543C0u;
    {
        const bool branch_taken_0x1543c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1543c0) {
            ctx->pc = 0x1543FCu;
            goto label_1543fc;
        }
    }
    ctx->pc = 0x1543C8u;
label_1543c8:
    // 0x1543c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1543cc:
    if (ctx->pc == 0x1543CCu) {
        ctx->pc = 0x1543D0u;
        goto label_1543d0;
    }
    ctx->pc = 0x1543C8u;
    {
        const bool branch_taken_0x1543c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543c8) {
            ctx->pc = 0x1543D8u;
            goto label_1543d8;
        }
    }
    ctx->pc = 0x1543D0u;
label_1543d0:
    // 0x1543d0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1543d4:
    if (ctx->pc == 0x1543D4u) {
        ctx->pc = 0x1543D8u;
        goto label_1543d8;
    }
    ctx->pc = 0x1543D0u;
    {
        const bool branch_taken_0x1543d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543d0) {
            ctx->pc = 0x154460u;
            goto label_154460;
        }
    }
    ctx->pc = 0x1543D8u;
label_1543d8:
    // 0x1543d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1543d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1543dc:
    // 0x1543dc: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1543dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1543e0:
    // 0x1543e0: 0x30a48000  andi        $a0, $a1, 0x8000
    ctx->pc = 0x1543e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
label_1543e4:
    // 0x1543e4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_1543e8:
    if (ctx->pc == 0x1543E8u) {
        ctx->pc = 0x1543ECu;
        goto label_1543ec;
    }
    ctx->pc = 0x1543E4u;
    {
        const bool branch_taken_0x1543e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543e4) {
            ctx->pc = 0x154460u;
            goto label_154460;
        }
    }
    ctx->pc = 0x1543ECu;
label_1543ec:
    // 0x1543ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1543ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1543f0:
    // 0x1543f0: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x1543f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
label_1543f4:
    // 0x1543f4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1543f8:
    if (ctx->pc == 0x1543F8u) {
        ctx->pc = 0x1543FCu;
        goto label_1543fc;
    }
    ctx->pc = 0x1543F4u;
    {
        const bool branch_taken_0x1543f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543f4) {
            ctx->pc = 0x154460u;
            goto label_154460;
        }
    }
    ctx->pc = 0x1543FCu;
label_1543fc:
    // 0x1543fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_154400:
    // 0x154400: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x154400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_154404:
    // 0x154404: 0x30a48000  andi        $a0, $a1, 0x8000
    ctx->pc = 0x154404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
label_154408:
    // 0x154408: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_15440c:
    if (ctx->pc == 0x15440Cu) {
        ctx->pc = 0x154410u;
        goto label_154410;
    }
    ctx->pc = 0x154408u;
    {
        const bool branch_taken_0x154408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154408) {
            ctx->pc = 0x154460u;
            goto label_154460;
        }
    }
    ctx->pc = 0x154410u;
label_154410:
    // 0x154410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154414:
    // 0x154414: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x154414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
label_154418:
    // 0x154418: 0x10000011  b           . + 4 + (0x11 << 2)
label_15441c:
    if (ctx->pc == 0x15441Cu) {
        ctx->pc = 0x154420u;
        goto label_154420;
    }
    ctx->pc = 0x154418u;
    {
        const bool branch_taken_0x154418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154418) {
            ctx->pc = 0x154460u;
            goto label_154460;
        }
    }
    ctx->pc = 0x154420u;
label_154420:
    // 0x154420: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x154420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_154424:
    // 0x154424: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x154424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_154428:
    // 0x154428: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x154428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_15442c:
    // 0x15442c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_154430:
    if (ctx->pc == 0x154430u) {
        ctx->pc = 0x154434u;
        goto label_154434;
    }
    ctx->pc = 0x15442Cu;
    {
        const bool branch_taken_0x15442c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15442c) {
            ctx->pc = 0x154460u;
            goto label_154460;
        }
    }
    ctx->pc = 0x154434u;
label_154434:
    // 0x154434: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x154434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154438:
    // 0x154438: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x154438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
label_15443c:
    // 0x15443c: 0x10000008  b           . + 4 + (0x8 << 2)
label_154440:
    if (ctx->pc == 0x154440u) {
        ctx->pc = 0x154444u;
        goto label_154444;
    }
    ctx->pc = 0x15443Cu;
    {
        const bool branch_taken_0x15443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15443c) {
            ctx->pc = 0x154460u;
            goto label_154460;
        }
    }
    ctx->pc = 0x154444u;
label_154444:
    // 0x154444: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x154444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_154448:
    // 0x154448: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x154448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_15444c:
    // 0x15444c: 0x30a48000  andi        $a0, $a1, 0x8000
    ctx->pc = 0x15444cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
label_154450:
    // 0x154450: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_154454:
    if (ctx->pc == 0x154454u) {
        ctx->pc = 0x154458u;
        goto label_154458;
    }
    ctx->pc = 0x154450u;
    {
        const bool branch_taken_0x154450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154450) {
            ctx->pc = 0x154460u;
            goto label_154460;
        }
    }
    ctx->pc = 0x154458u;
label_154458:
    // 0x154458: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x154458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15445c:
    // 0x15445c: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x15445cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
label_154460:
    // 0x154460: 0x100002fa  b           . + 4 + (0x2FA << 2)
label_154464:
    if (ctx->pc == 0x154464u) {
        ctx->pc = 0x154468u;
        goto label_154468;
    }
    ctx->pc = 0x154460u;
    {
        const bool branch_taken_0x154460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154460) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x154468u;
label_154468:
    // 0x154468: 0xa200157d  sb          $zero, 0x157D($s0)
    ctx->pc = 0x154468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5501), (uint8_t)GPR_U32(ctx, 0));
label_15446c:
    // 0x15446c: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x15446cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
label_154470:
    // 0x154470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154474:
    // 0x154474: 0x0  nop
    ctx->pc = 0x154474u;
    // NOP
label_154478:
    // 0x154478: 0xe60015b8  swc1        $f0, 0x15B8($s0)
    ctx->pc = 0x154478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5560), bits); }
label_15447c:
    // 0x15447c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x15447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_154480:
    // 0x154480: 0xa60415bc  sh          $a0, 0x15BC($s0)
    ctx->pc = 0x154480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5564), (uint16_t)GPR_U32(ctx, 4));
label_154484:
    // 0x154484: 0x9203157c  lbu         $v1, 0x157C($s0)
    ctx->pc = 0x154484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5500)));
label_154488:
    // 0x154488: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x154488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15448c:
    // 0x15448c: 0xa202157c  sb          $v0, 0x157C($s0)
    ctx->pc = 0x15448cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 2));
label_154490:
    // 0x154490: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154494:
    // 0x154494: 0x8e0515c0  lw          $a1, 0x15C0($s0)
    ctx->pc = 0x154494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5568)));
label_154498:
    // 0x154498: 0x260615d0  addiu       $a2, $s0, 0x15D0
    ctx->pc = 0x154498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
label_15449c:
    // 0x15449c: 0xc05db20  jal         func_176C80
label_1544a0:
    if (ctx->pc == 0x1544A0u) {
        ctx->pc = 0x1544A4u;
        goto label_1544a4;
    }
    ctx->pc = 0x15449Cu;
    SET_GPR_U32(ctx, 31, 0x1544A4u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x15449Cu, 0x1544A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544A4u;
label_1544a4:
    // 0x1544a4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1544a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1544a8:
    // 0x1544a8: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x1544a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1544ac:
    // 0x1544ac: 0xc05db4c  jal         func_176D30
label_1544b0:
    if (ctx->pc == 0x1544B0u) {
        ctx->pc = 0x1544B4u;
        goto label_1544b4;
    }
    ctx->pc = 0x1544ACu;
    SET_GPR_U32(ctx, 31, 0x1544B4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x1544ACu, 0x1544B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544B4u;
label_1544b4:
    // 0x1544b4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1544b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1544b8:
    // 0x1544b8: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x1544b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1544bc:
    // 0x1544bc: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x1544bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
label_1544c0:
    // 0x1544c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1544c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1544c4:
    // 0x1544c4: 0x0  nop
    ctx->pc = 0x1544c4u;
    // NOP
label_1544c8:
    // 0x1544c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1544c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1544cc:
    // 0x1544cc: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1544ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1544d0:
    // 0x1544d0: 0xc05db74  jal         func_176DD0
label_1544d4:
    if (ctx->pc == 0x1544D4u) {
        ctx->pc = 0x1544D8u;
        goto label_1544d8;
    }
    ctx->pc = 0x1544D0u;
    SET_GPR_U32(ctx, 31, 0x1544D8u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x1544D0u, 0x1544D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544D8u;
label_1544d8:
    // 0x1544d8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x1544d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_1544dc:
    // 0x1544dc: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1544dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1544e0:
    // 0x1544e0: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x1544e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
label_1544e4:
    // 0x1544e4: 0xc05dafc  jal         func_176BF0
label_1544e8:
    if (ctx->pc == 0x1544E8u) {
        ctx->pc = 0x1544ECu;
        goto label_1544ec;
    }
    ctx->pc = 0x1544E4u;
    SET_GPR_U32(ctx, 31, 0x1544ECu);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x1544E4u, 0x1544ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544ECu;
label_1544ec:
    // 0x1544ec: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1544ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1544f0:
    // 0x1544f0: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x1544f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1544f4:
    // 0x1544f4: 0xc05db4c  jal         func_176D30
label_1544f8:
    if (ctx->pc == 0x1544F8u) {
        ctx->pc = 0x1544FCu;
        goto label_1544fc;
    }
    ctx->pc = 0x1544F4u;
    SET_GPR_U32(ctx, 31, 0x1544FCu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x1544F4u, 0x1544FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544FCu;
label_1544fc:
    // 0x1544fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1544fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154500:
    // 0x154500: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x154500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154504:
    // 0x154504: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x154504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
label_154508:
    // 0x154508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15450c:
    // 0x15450c: 0x0  nop
    ctx->pc = 0x15450cu;
    // NOP
label_154510:
    // 0x154510: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x154510u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_154514:
    // 0x154514: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154518:
    // 0x154518: 0xc05db74  jal         func_176DD0
label_15451c:
    if (ctx->pc == 0x15451Cu) {
        ctx->pc = 0x154520u;
        goto label_154520;
    }
    ctx->pc = 0x154518u;
    SET_GPR_U32(ctx, 31, 0x154520u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154518u, 0x154520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154520u;
label_154520:
    // 0x154520: 0x860515bc  lh          $a1, 0x15BC($s0)
    ctx->pc = 0x154520u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5564)));
label_154524:
    // 0x154524: 0x10a000a2  beqz        $a1, . + 4 + (0xA2 << 2)
label_154528:
    if (ctx->pc == 0x154528u) {
        ctx->pc = 0x15452Cu;
        goto label_15452c;
    }
    ctx->pc = 0x154524u;
    {
        const bool branch_taken_0x154524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x154524) {
            ctx->pc = 0x1547B0u;
            goto label_1547b0;
        }
    }
    ctx->pc = 0x15452Cu;
label_15452c:
    // 0x15452c: 0x860315bc  lh          $v1, 0x15BC($s0)
    ctx->pc = 0x15452cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5564)));
label_154530:
    // 0x154530: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_154534:
    // 0x154534: 0xa60315bc  sh          $v1, 0x15BC($s0)
    ctx->pc = 0x154534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5564), (uint16_t)GPR_U32(ctx, 3));
label_154538:
    // 0x154538: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_15453c:
    // 0x15453c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15453cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154540:
    // 0x154540: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x154540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_154544:
    // 0x154544: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x154544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_154548:
    // 0x154548: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_15454c:
    // 0x15454c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15454cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154550:
    // 0x154550: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x154550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154554:
    // 0x154554: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_154558:
    // 0x154558: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x154558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_15455c:
    // 0x15455c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15455cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154560:
    // 0x154560: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x154560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154564:
    // 0x154564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154568:
    // 0x154568: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x154568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
label_15456c:
    // 0x15456c: 0x8e0615b0  lw          $a2, 0x15B0($s0)
    ctx->pc = 0x15456cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154570:
    // 0x154570: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x154570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_154574:
    // 0x154574: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x154574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_154578:
    // 0x154578: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x154578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15457c:
    // 0x15457c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15457cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154580:
    // 0x154580: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x154580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154584:
    // 0x154584: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x154584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_154588:
    // 0x154588: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x154588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
label_15458c:
    // 0x15458c: 0x34c4cccd  ori         $a0, $a2, 0xCCCD
    ctx->pc = 0x15458cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_154590:
    // 0x154590: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154590u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154594:
    // 0x154594: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x154594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154598:
    // 0x154598: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15459c:
    // 0x15459c: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x15459cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_1545a0:
    // 0x1545a0: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1545a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1545a4:
    // 0x1545a4: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1545a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1545a8:
    // 0x1545a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1545a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1545ac:
    // 0x1545ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1545acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1545b0:
    // 0x1545b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1545b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1545b4:
    // 0x1545b4: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x1545b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_1545b8:
    // 0x1545b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1545b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1545bc:
    // 0x1545bc: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1545bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_1545c0:
    // 0x1545c0: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1545c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1545c4:
    // 0x1545c4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1545c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1545c8:
    // 0x1545c8: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x1545c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1545cc:
    // 0x1545cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1545ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1545d0:
    // 0x1545d0: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x1545d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_1545d4:
    // 0x1545d4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1545d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1545d8:
    // 0x1545d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1545d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1545dc:
    // 0x1545dc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1545e0:
    // 0x1545e0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1545e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1545e4:
    // 0x1545e4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1545e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1545e8:
    // 0x1545e8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1545e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_1545ec:
    // 0x1545ec: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1545ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1545f0:
    // 0x1545f0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1545f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_1545f4:
    // 0x1545f4: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1545f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1545f8:
    // 0x1545f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1545f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1545fc:
    // 0x1545fc: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x1545fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154600:
    // 0x154600: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154604:
    // 0x154604: 0xe4a00080  swc1        $f0, 0x80($a1)
    ctx->pc = 0x154604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
label_154608:
    // 0x154608: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_15460c:
    // 0x15460c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15460cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154610:
    // 0x154610: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x154610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154614:
    // 0x154614: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x154614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_154618:
    // 0x154618: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_15461c:
    // 0x15461c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x15461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154620:
    // 0x154620: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x154620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154624:
    // 0x154624: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_154628:
    // 0x154628: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x154628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_15462c:
    // 0x15462c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15462cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154630:
    // 0x154630: 0xc4a00084  lwc1        $f0, 0x84($a1)
    ctx->pc = 0x154630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154634:
    // 0x154634: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154638:
    // 0x154638: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x154638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
label_15463c:
    // 0x15463c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154640:
    // 0x154640: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154644:
    // 0x154644: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x154644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_154648:
    // 0x154648: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15464c:
    // 0x15464c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15464cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154650:
    // 0x154650: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x154650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154654:
    // 0x154654: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x154654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154658:
    // 0x154658: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_15465c:
    // 0x15465c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x15465cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_154660:
    // 0x154660: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154664:
    // 0x154664: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x154664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154668:
    // 0x154668: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15466c:
    // 0x15466c: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x15466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
label_154670:
    // 0x154670: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154674:
    // 0x154674: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_154678:
    // 0x154678: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15467c:
    // 0x15467c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x15467cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154680:
    // 0x154680: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154684:
    // 0x154684: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154688:
    // 0x154688: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15468c:
    // 0x15468c: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_154690:
    // 0x154690: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x154690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_154694:
    // 0x154694: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x154694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154698:
    // 0x154698: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x154698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15469c:
    // 0x15469c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15469cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1546a0:
    // 0x1546a0: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1546a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_1546a4:
    // 0x1546a4: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1546a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1546a8:
    // 0x1546a8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1546a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1546ac:
    // 0x1546ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1546acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1546b0:
    // 0x1546b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1546b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1546b4:
    // 0x1546b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1546b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1546b8:
    // 0x1546b8: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x1546b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_1546bc:
    // 0x1546bc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1546bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1546c0:
    // 0x1546c0: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
label_1546c4:
    // 0x1546c4: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x1546c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_1546c8:
    // 0x1546c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1546c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1546cc:
    // 0x1546cc: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x1546ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1546d0:
    // 0x1546d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1546d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1546d4:
    // 0x1546d4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1546d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_1546d8:
    // 0x1546d8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1546d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1546dc:
    // 0x1546dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1546dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1546e0:
    // 0x1546e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1546e4:
    // 0x1546e4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1546e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1546e8:
    // 0x1546e8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1546e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1546ec:
    // 0x1546ec: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1546ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1546f0:
    // 0x1546f0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1546f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1546f4:
    // 0x1546f4: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x1546f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
label_1546f8:
    // 0x1546f8: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x1546f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_1546fc:
    // 0x1546fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1546fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154700:
    // 0x154700: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x154700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154704:
    // 0x154704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154708:
    // 0x154708: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x154708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_15470c:
    // 0x15470c: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x15470cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154710:
    // 0x154710: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154714:
    // 0x154714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154718:
    // 0x154718: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154718u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15471c:
    // 0x15471c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15471cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154720:
    // 0x154720: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154724:
    // 0x154724: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x154724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154728:
    // 0x154728: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_15472c:
    // 0x15472c: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x15472cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_154730:
    // 0x154730: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x154730u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154734:
    // 0x154734: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x154734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154738:
    // 0x154738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15473c:
    // 0x15473c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x15473cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_154740:
    // 0x154740: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154744:
    // 0x154744: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154748:
    // 0x154748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15474c:
    // 0x15474c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15474cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154750:
    // 0x154750: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_154754:
    // 0x154754: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x154754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_154758:
    // 0x154758: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x154758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_15475c:
    // 0x15475c: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x15475cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_154760:
    // 0x154760: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x154760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_154764:
    // 0x154764: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154764u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154768:
    // 0x154768: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x154768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15476c:
    // 0x15476c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15476cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154770:
    // 0x154770: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x154770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_154774:
    // 0x154774: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x154774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154778:
    // 0x154778: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15477c:
    // 0x15477c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15477cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154780:
    // 0x154780: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x154780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_154784:
    // 0x154784: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154788:
    // 0x154788: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x154788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_15478c:
    // 0x15478c: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x15478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_154790:
    // 0x154790: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_154794:
    // 0x154794: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x154794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_154798:
    // 0x154798: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154798u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15479c:
    // 0x15479c: 0xc4c00088  lwc1        $f0, 0x88($a2)
    ctx->pc = 0x15479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1547a0:
    // 0x1547a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1547a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1547a4:
    // 0x1547a4: 0xe4c00088  swc1        $f0, 0x88($a2)
    ctx->pc = 0x1547a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 136), bits); }
label_1547a8:
    // 0x1547a8: 0x10000228  b           . + 4 + (0x228 << 2)
label_1547ac:
    if (ctx->pc == 0x1547ACu) {
        ctx->pc = 0x1547B0u;
        goto label_1547b0;
    }
    ctx->pc = 0x1547A8u;
    {
        const bool branch_taken_0x1547a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547a8) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x1547B0u;
label_1547b0:
    // 0x1547b0: 0xa200157c  sb          $zero, 0x157C($s0)
    ctx->pc = 0x1547b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 0));
label_1547b4:
    // 0x1547b4: 0x10000225  b           . + 4 + (0x225 << 2)
label_1547b8:
    if (ctx->pc == 0x1547B8u) {
        ctx->pc = 0x1547BCu;
        goto label_1547bc;
    }
    ctx->pc = 0x1547B4u;
    {
        const bool branch_taken_0x1547b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547b4) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x1547BCu;
label_1547bc:
    // 0x1547bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1547bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1547c0:
    // 0x1547c0: 0x8c229370  lw          $v0, -0x6C90($at)
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939504)));
label_1547c4:
    // 0x1547c4: 0xae0215c0  sw          $v0, 0x15C0($s0)
    ctx->pc = 0x1547c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 2));
label_1547c8:
    // 0x1547c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1547c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1547cc:
    // 0x1547cc: 0x0  nop
    ctx->pc = 0x1547ccu;
    // NOP
label_1547d0:
    // 0x1547d0: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x1547d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
label_1547d4:
    // 0x1547d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1547d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1547d8:
    // 0x1547d8: 0x0  nop
    ctx->pc = 0x1547d8u;
    // NOP
label_1547dc:
    // 0x1547dc: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x1547dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
label_1547e0:
    // 0x1547e0: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x1547e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_1547e4:
    // 0x1547e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1547e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1547e8:
    // 0x1547e8: 0x0  nop
    ctx->pc = 0x1547e8u;
    // NOP
label_1547ec:
    // 0x1547ec: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x1547ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
label_1547f0:
    // 0x1547f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1547f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1547f4:
    // 0x1547f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1547f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1547f8:
    // 0x1547f8: 0x0  nop
    ctx->pc = 0x1547f8u;
    // NOP
label_1547fc:
    // 0x1547fc: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x1547fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
label_154800:
    // 0x154800: 0xa200157d  sb          $zero, 0x157D($s0)
    ctx->pc = 0x154800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5501), (uint8_t)GPR_U32(ctx, 0));
label_154804:
    // 0x154804: 0x3c054516  lui         $a1, 0x4516
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17686 << 16));
label_154808:
    // 0x154808: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x154808u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15480c:
    // 0x15480c: 0x0  nop
    ctx->pc = 0x15480cu;
    // NOP
label_154810:
    // 0x154810: 0xe60015b8  swc1        $f0, 0x15B8($s0)
    ctx->pc = 0x154810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5560), bits); }
label_154814:
    // 0x154814: 0x920313a6  lbu         $v1, 0x13A6($s0)
    ctx->pc = 0x154814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
label_154818:
    // 0x154818: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x154818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15481c:
    // 0x15481c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154820:
    // 0x154820: 0x10a40089  beq         $a1, $a0, . + 4 + (0x89 << 2)
label_154824:
    if (ctx->pc == 0x154824u) {
        ctx->pc = 0x154828u;
        goto label_154828;
    }
    ctx->pc = 0x154820u;
    {
        const bool branch_taken_0x154820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x154820) {
            ctx->pc = 0x154A48u;
            goto label_154a48;
        }
    }
    ctx->pc = 0x154828u;
label_154828:
    // 0x154828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15482c:
    // 0x15482c: 0x10a30086  beq         $a1, $v1, . + 4 + (0x86 << 2)
label_154830:
    if (ctx->pc == 0x154830u) {
        ctx->pc = 0x154834u;
        goto label_154834;
    }
    ctx->pc = 0x15482Cu;
    {
        const bool branch_taken_0x15482c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15482c) {
            ctx->pc = 0x154A48u;
            goto label_154a48;
        }
    }
    ctx->pc = 0x154834u;
label_154834:
    // 0x154834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154838:
    // 0x154838: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_15483c:
    if (ctx->pc == 0x15483Cu) {
        ctx->pc = 0x154840u;
        goto label_154840;
    }
    ctx->pc = 0x154838u;
    {
        const bool branch_taken_0x154838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x154838) {
            ctx->pc = 0x154850u;
            goto label_154850;
        }
    }
    ctx->pc = 0x154840u;
label_154840:
    // 0x154840: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_154844:
    if (ctx->pc == 0x154844u) {
        ctx->pc = 0x154848u;
        goto label_154848;
    }
    ctx->pc = 0x154840u;
    {
        const bool branch_taken_0x154840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x154840) {
            ctx->pc = 0x154850u;
            goto label_154850;
        }
    }
    ctx->pc = 0x154848u;
label_154848:
    // 0x154848: 0x100000fb  b           . + 4 + (0xFB << 2)
label_15484c:
    if (ctx->pc == 0x15484Cu) {
        ctx->pc = 0x154850u;
        goto label_154850;
    }
    ctx->pc = 0x154848u;
    {
        const bool branch_taken_0x154848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154848) {
            ctx->pc = 0x154C38u;
            goto label_154c38;
        }
    }
    ctx->pc = 0x154850u;
label_154850:
    // 0x154850: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x154850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_154854:
    // 0x154854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154858:
    // 0x154858: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_15485c:
    // 0x15485c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15485cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154860:
    // 0x154860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154864:
    // 0x154864: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154868:
    // 0x154868: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_15486c:
    // 0x15486c: 0x2466bd00  addiu       $a2, $v1, -0x4300
    ctx->pc = 0x15486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154870:
    // 0x154870: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x154870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_154874:
    // 0x154874: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x154874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
label_154878:
    // 0x154878: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x154878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_15487c:
    // 0x15487c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15487cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154880:
    // 0x154880: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154884:
    // 0x154884: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154888:
    // 0x154888: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15488c:
    // 0x15488c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15488cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154890:
    // 0x154890: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154894:
    // 0x154894: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154898:
    // 0x154898: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15489c:
    // 0x15489c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x15489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_1548a0:
    // 0x1548a0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1548a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1548a4:
    // 0x1548a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1548a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1548a8:
    // 0x1548a8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1548a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1548ac:
    // 0x1548ac: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1548acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1548b0:
    // 0x1548b0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1548b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1548b4:
    // 0x1548b4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1548b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1548b8:
    // 0x1548b8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1548b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1548bc:
    // 0x1548bc: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x1548bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_1548c0:
    // 0x1548c0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1548c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1548c4:
    // 0x1548c4: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1548c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_1548c8:
    // 0x1548c8: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x1548c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
label_1548cc:
    // 0x1548cc: 0x3444c8c9  ori         $a0, $v0, 0xC8C9
    ctx->pc = 0x1548ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
label_1548d0:
    // 0x1548d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1548d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1548d4:
    // 0x1548d4: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1548d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_1548d8:
    // 0x1548d8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1548d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1548dc:
    // 0x1548dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1548e0:
    // 0x1548e0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1548e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1548e4:
    // 0x1548e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1548e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1548e8:
    // 0x1548e8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1548e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_1548ec:
    // 0x1548ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1548ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1548f0:
    // 0x1548f0: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1548f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_1548f4:
    // 0x1548f4: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x1548f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
label_1548f8:
    // 0x1548f8: 0x3482c8c9  ori         $v0, $a0, 0xC8C9
    ctx->pc = 0x1548f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
label_1548fc:
    // 0x1548fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1548fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154900:
    // 0x154900: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154904:
    // 0x154904: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154908:
    // 0x154908: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15490c:
    // 0x15490c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15490cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154910:
    // 0x154910: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x154910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_154914:
    // 0x154914: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x154914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_154918:
    // 0x154918: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15491c:
    // 0x15491c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x15491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_154920:
    // 0x154920: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x154920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_154924:
    // 0x154924: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154924u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154928:
    // 0x154928: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_15492c:
    // 0x15492c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15492cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154930:
    // 0x154930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154934:
    // 0x154934: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154938:
    // 0x154938: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_15493c:
    // 0x15493c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x15493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154940:
    // 0x154940: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_154944:
    // 0x154944: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_154948:
    // 0x154948: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_15494c:
    // 0x15494c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15494cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154950:
    // 0x154950: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x154950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154954:
    // 0x154954: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x154954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_154958:
    // 0x154958: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15495c:
    // 0x15495c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15495cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154960:
    // 0x154960: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154964:
    // 0x154964: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154968:
    // 0x154968: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15496c:
    // 0x15496c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x15496cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_154970:
    // 0x154970: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x154970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_154974:
    // 0x154974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154978:
    // 0x154978: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_15497c:
    // 0x15497c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x15497cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154980:
    // 0x154980: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_154984:
    // 0x154984: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x154984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154988:
    // 0x154988: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_15498c:
    // 0x15498c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154990:
    // 0x154990: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_154994:
    // 0x154994: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x154994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_154998:
    // 0x154998: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x154998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_15499c:
    // 0x15499c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15499cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1549a0:
    // 0x1549a0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1549a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1549a4:
    // 0x1549a4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1549a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1549a8:
    // 0x1549a8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1549a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1549ac:
    // 0x1549ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1549acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1549b0:
    // 0x1549b0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1549b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1549b4:
    // 0x1549b4: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x1549b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_1549b8:
    // 0x1549b8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1549b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1549bc:
    // 0x1549bc: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x1549bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_1549c0:
    // 0x1549c0: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
label_1549c4:
    // 0x1549c4: 0x34a3c8c9  ori         $v1, $a1, 0xC8C9
    ctx->pc = 0x1549c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
label_1549c8:
    // 0x1549c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1549c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1549cc:
    // 0x1549cc: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1549d0:
    // 0x1549d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1549d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1549d4:
    // 0x1549d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1549d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1549d8:
    // 0x1549d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1549d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1549dc:
    // 0x1549dc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1549dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1549e0:
    // 0x1549e0: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x1549e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_1549e4:
    // 0x1549e4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1549e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1549e8:
    // 0x1549e8: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x1549e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_1549ec:
    // 0x1549ec: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x1549ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
label_1549f0:
    // 0x1549f0: 0x3443c8c9  ori         $v1, $v0, 0xC8C9
    ctx->pc = 0x1549f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
label_1549f4:
    // 0x1549f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1549f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1549f8:
    // 0x1549f8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1549f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_1549fc:
    // 0x1549fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1549fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154a00:
    // 0x154a00: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154a04:
    // 0x154a04: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154a08:
    // 0x154a08: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_154a0c:
    // 0x154a0c: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x154a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_154a10:
    // 0x154a10: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_154a14:
    // 0x154a14: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x154a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_154a18:
    // 0x154a18: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x154a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_154a1c:
    // 0x154a1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154a1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154a20:
    // 0x154a20: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154a24:
    // 0x154a24: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_154a28:
    // 0x154a28: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x154a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154a2c:
    // 0x154a2c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x154a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_154a30:
    // 0x154a30: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154a34:
    // 0x154a34: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154a38:
    // 0x154a38: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x154a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_154a3c:
    // 0x154a3c: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x154a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
label_154a40:
    // 0x154a40: 0x1000007d  b           . + 4 + (0x7D << 2)
label_154a44:
    if (ctx->pc == 0x154A44u) {
        ctx->pc = 0x154A48u;
        goto label_154a48;
    }
    ctx->pc = 0x154A40u;
    {
        const bool branch_taken_0x154a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a40) {
            ctx->pc = 0x154C38u;
            goto label_154c38;
        }
    }
    ctx->pc = 0x154A48u;
label_154a48:
    // 0x154a48: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x154a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_154a4c:
    // 0x154a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154a50:
    // 0x154a50: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154a54:
    // 0x154a54: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x154a54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154a58:
    // 0x154a58: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x154a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_154a5c:
    // 0x154a5c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154a60:
    // 0x154a60: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_154a64:
    // 0x154a64: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x154a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_154a68:
    // 0x154a68: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x154a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_154a6c:
    // 0x154a6c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x154a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_154a70:
    // 0x154a70: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x154a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_154a74:
    // 0x154a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154a78:
    // 0x154a78: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154a7c:
    // 0x154a7c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x154a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154a80:
    // 0x154a80: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x154a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_154a84:
    // 0x154a84: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x154a84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_154a88:
    // 0x154a88: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154a8c:
    // 0x154a8c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154a90:
    // 0x154a90: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154a94:
    // 0x154a94: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x154a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
label_154a98:
    // 0x154a98: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x154a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
label_154a9c:
    // 0x154a9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154a9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154aa0:
    // 0x154aa0: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154aa4:
    // 0x154aa4: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x154aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154aa8:
    // 0x154aa8: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x154aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_154aac:
    // 0x154aac: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x154aacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_154ab0:
    // 0x154ab0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154ab4:
    // 0x154ab4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154ab8:
    // 0x154ab8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x154ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154abc:
    // 0x154abc: 0xe4a00078  swc1        $f0, 0x78($a1)
    ctx->pc = 0x154abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
label_154ac0:
    // 0x154ac0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_154ac4:
    // 0x154ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154ac8:
    // 0x154ac8: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154acc:
    // 0x154acc: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x154accu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154ad0:
    // 0x154ad0: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_154ad4:
    // 0x154ad4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154ad8:
    // 0x154ad8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154adc:
    // 0x154adc: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154ae0:
    // 0x154ae0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x154ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154ae4:
    // 0x154ae4: 0xe4a00080  swc1        $f0, 0x80($a1)
    ctx->pc = 0x154ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
label_154ae8:
    // 0x154ae8: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x154ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_154aec:
    // 0x154aec: 0x3483e6e7  ori         $v1, $a0, 0xE6E7
    ctx->pc = 0x154aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
label_154af0:
    // 0x154af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154af4:
    // 0x154af4: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x154af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154af8:
    // 0x154af8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x154af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_154afc:
    // 0x154afc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x154afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154b00:
    // 0x154b00: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_154b04:
    // 0x154b04: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_154b08:
    // 0x154b08: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x154b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_154b0c:
    // 0x154b0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154b10:
    // 0x154b10: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x154b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_154b14:
    // 0x154b14: 0x3c053f10  lui         $a1, 0x3F10
    ctx->pc = 0x154b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16144 << 16));
label_154b18:
    // 0x154b18: 0x34a39091  ori         $v1, $a1, 0x9091
    ctx->pc = 0x154b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37009);
label_154b1c:
    // 0x154b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154b20:
    // 0x154b20: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154b24:
    // 0x154b24: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154b28:
    // 0x154b28: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154b2c:
    // 0x154b2c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_154b30:
    // 0x154b30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_154b34:
    // 0x154b34: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x154b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_154b38:
    // 0x154b38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154b3c:
    // 0x154b3c: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_154b40:
    // 0x154b40: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x154b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_154b44:
    // 0x154b44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154b48:
    // 0x154b48: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154b4c:
    // 0x154b4c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_154b50:
    // 0x154b50: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154b54:
    // 0x154b54: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154b58:
    // 0x154b58: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_154b5c:
    // 0x154b5c: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x154b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_154b60:
    // 0x154b60: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154b64:
    // 0x154b64: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x154b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_154b68:
    // 0x154b68: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x154b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_154b6c:
    // 0x154b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154b70:
    // 0x154b70: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x154b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154b74:
    // 0x154b74: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x154b74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154b78:
    // 0x154b78: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x154b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_154b7c:
    // 0x154b7c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_154b80:
    // 0x154b80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_154b84:
    // 0x154b84: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x154b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_154b88:
    // 0x154b88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154b8c:
    // 0x154b8c: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x154b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_154b90:
    // 0x154b90: 0x3c054310  lui         $a1, 0x4310
    ctx->pc = 0x154b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17168 << 16));
label_154b94:
    // 0x154b94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x154b94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154b98:
    // 0x154b98: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x154b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154b9c:
    // 0x154b9c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154ba0:
    // 0x154ba0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154ba4:
    // 0x154ba4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154ba8:
    // 0x154ba8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154bac:
    // 0x154bac: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154bb0:
    // 0x154bb0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x154bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154bb4:
    // 0x154bb4: 0xe4a00078  swc1        $f0, 0x78($a1)
    ctx->pc = 0x154bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
label_154bb8:
    // 0x154bb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_154bbc:
    // 0x154bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154bc0:
    // 0x154bc0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154bc4:
    // 0x154bc4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x154bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154bc8:
    // 0x154bc8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x154bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_154bcc:
    // 0x154bcc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154bd0:
    // 0x154bd0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154bd4:
    // 0x154bd4: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x154bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154bd8:
    // 0x154bd8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x154bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_154bdc:
    // 0x154bdc: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x154bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_154be0:
    // 0x154be0: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x154be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_154be4:
    // 0x154be4: 0x3463e6e7  ori         $v1, $v1, 0xE6E7
    ctx->pc = 0x154be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59111);
label_154be8:
    // 0x154be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154bec:
    // 0x154bec: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154bf0:
    // 0x154bf0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_154bf4:
    // 0x154bf4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154bf8:
    // 0x154bf8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154bfc:
    // 0x154bfc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154c00:
    // 0x154c00: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154c04:
    // 0x154c04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x154c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_154c08:
    // 0x154c08: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x154c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_154c0c:
    // 0x154c0c: 0x3c033f10  lui         $v1, 0x3F10
    ctx->pc = 0x154c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16144 << 16));
label_154c10:
    // 0x154c10: 0x34639091  ori         $v1, $v1, 0x9091
    ctx->pc = 0x154c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37009);
label_154c14:
    // 0x154c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154c18:
    // 0x154c18: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154c1c:
    // 0x154c1c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_154c20:
    // 0x154c20: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154c24:
    // 0x154c24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154c28:
    // 0x154c28: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_154c2c:
    // 0x154c2c: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x154c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_154c30:
    // 0x154c30: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154c34:
    // 0x154c34: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x154c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_154c38:
    // 0x154c38: 0x9203157c  lbu         $v1, 0x157C($s0)
    ctx->pc = 0x154c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5500)));
label_154c3c:
    // 0x154c3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x154c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_154c40:
    // 0x154c40: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x154c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
label_154c44:
    // 0x154c44: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154c48:
    // 0x154c48: 0x8e0515c0  lw          $a1, 0x15C0($s0)
    ctx->pc = 0x154c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5568)));
label_154c4c:
    // 0x154c4c: 0x260615d0  addiu       $a2, $s0, 0x15D0
    ctx->pc = 0x154c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
label_154c50:
    // 0x154c50: 0xc05db20  jal         func_176C80
label_154c54:
    if (ctx->pc == 0x154C54u) {
        ctx->pc = 0x154C58u;
        goto label_154c58;
    }
    ctx->pc = 0x154C50u;
    SET_GPR_U32(ctx, 31, 0x154C58u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x154C50u, 0x154C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C58u;
label_154c58:
    // 0x154c58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154c58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154c5c:
    // 0x154c5c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154c60:
    // 0x154c60: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_154c64:
    // 0x154c64: 0xc05db4c  jal         func_176D30
label_154c68:
    if (ctx->pc == 0x154C68u) {
        ctx->pc = 0x154C6Cu;
        goto label_154c6c;
    }
    ctx->pc = 0x154C64u;
    SET_GPR_U32(ctx, 31, 0x154C6Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154C64u, 0x154C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C6Cu;
label_154c6c:
    // 0x154c6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x154c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154c70:
    // 0x154c70: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x154c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154c74:
    // 0x154c74: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x154c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
label_154c78:
    // 0x154c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154c7c:
    // 0x154c7c: 0x0  nop
    ctx->pc = 0x154c7cu;
    // NOP
label_154c80:
    // 0x154c80: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x154c80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_154c84:
    // 0x154c84: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154c88:
    // 0x154c88: 0xc05db74  jal         func_176DD0
label_154c8c:
    if (ctx->pc == 0x154C8Cu) {
        ctx->pc = 0x154C90u;
        goto label_154c90;
    }
    ctx->pc = 0x154C88u;
    SET_GPR_U32(ctx, 31, 0x154C90u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154C88u, 0x154C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C90u;
label_154c90:
    // 0x154c90: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x154c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154c94:
    // 0x154c94: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x154c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_154c98:
    // 0x154c98: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154c9c:
    // 0x154c9c: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x154c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
label_154ca0:
    // 0x154ca0: 0xc05dafc  jal         func_176BF0
label_154ca4:
    if (ctx->pc == 0x154CA4u) {
        ctx->pc = 0x154CA8u;
        goto label_154ca8;
    }
    ctx->pc = 0x154CA0u;
    SET_GPR_U32(ctx, 31, 0x154CA8u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x154CA0u, 0x154CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CA8u;
label_154ca8:
    // 0x154ca8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x154ca8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154cac:
    // 0x154cac: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154cb0:
    // 0x154cb0: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_154cb4:
    // 0x154cb4: 0xc05db4c  jal         func_176D30
label_154cb8:
    if (ctx->pc == 0x154CB8u) {
        ctx->pc = 0x154CBCu;
        goto label_154cbc;
    }
    ctx->pc = 0x154CB4u;
    SET_GPR_U32(ctx, 31, 0x154CBCu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154CB4u, 0x154CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CBCu;
label_154cbc:
    // 0x154cbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154cbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154cc0:
    // 0x154cc0: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x154cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154cc4:
    // 0x154cc4: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
label_154cc8:
    // 0x154cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154ccc:
    // 0x154ccc: 0x0  nop
    ctx->pc = 0x154cccu;
    // NOP
label_154cd0:
    // 0x154cd0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x154cd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_154cd4:
    // 0x154cd4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154cd8:
    // 0x154cd8: 0xc05db74  jal         func_176DD0
label_154cdc:
    if (ctx->pc == 0x154CDCu) {
        ctx->pc = 0x154CE0u;
        goto label_154ce0;
    }
    ctx->pc = 0x154CD8u;
    SET_GPR_U32(ctx, 31, 0x154CE0u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154CD8u, 0x154CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CE0u;
label_154ce0:
    // 0x154ce0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x154ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_154ce4:
    // 0x154ce4: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x154ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_154ce8:
    // 0x154ce8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x154ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_154cec:
    // 0x154cec: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x154cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_154cf0:
    // 0x154cf0: 0x14a000d6  bnez        $a1, . + 4 + (0xD6 << 2)
label_154cf4:
    if (ctx->pc == 0x154CF4u) {
        ctx->pc = 0x154CF8u;
        goto label_154cf8;
    }
    ctx->pc = 0x154CF0u;
    {
        const bool branch_taken_0x154cf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x154cf0) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x154CF8u;
label_154cf8:
    // 0x154cf8: 0x9204157c  lbu         $a0, 0x157C($s0)
    ctx->pc = 0x154cf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5500)));
label_154cfc:
    // 0x154cfc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x154cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_154d00:
    // 0x154d00: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x154d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
label_154d04:
    // 0x154d04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x154d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_154d08:
    // 0x154d08: 0xa60315bc  sh          $v1, 0x15BC($s0)
    ctx->pc = 0x154d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5564), (uint16_t)GPR_U32(ctx, 3));
label_154d0c:
    // 0x154d0c: 0x100000cf  b           . + 4 + (0xCF << 2)
label_154d10:
    if (ctx->pc == 0x154D10u) {
        ctx->pc = 0x154D14u;
        goto label_154d14;
    }
    ctx->pc = 0x154D0Cu;
    {
        const bool branch_taken_0x154d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154d0c) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x154D14u;
label_154d14:
    // 0x154d14: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154d18:
    // 0x154d18: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154d1c:
    // 0x154d1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154d20:
    // 0x154d20: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_154d24:
    // 0x154d24: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154d28:
    // 0x154d28: 0x2466bd00  addiu       $a2, $v1, -0x4300
    ctx->pc = 0x154d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154d2c:
    // 0x154d2c: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x154d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_154d30:
    // 0x154d30: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x154d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_154d34:
    // 0x154d34: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x154d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_154d38:
    // 0x154d38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154d3c:
    // 0x154d3c: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x154d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154d40:
    // 0x154d40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154d44:
    // 0x154d44: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x154d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
label_154d48:
    // 0x154d48: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154d4c:
    // 0x154d4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154d50:
    // 0x154d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154d54:
    // 0x154d54: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154d58:
    // 0x154d58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154d5c:
    // 0x154d5c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154d60:
    // 0x154d60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x154d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_154d64:
    // 0x154d64: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x154d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_154d68:
    // 0x154d68: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x154d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_154d6c:
    // 0x154d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154d70:
    // 0x154d70: 0xc44c0074  lwc1        $f12, 0x74($v0)
    ctx->pc = 0x154d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_154d74:
    // 0x154d74: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x154d74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_154d78:
    // 0x154d78: 0xe44c0074  swc1        $f12, 0x74($v0)
    ctx->pc = 0x154d78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_154d7c:
    // 0x154d7c: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x154d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154d80:
    // 0x154d80: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x154d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_154d84:
    // 0x154d84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x154d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_154d88:
    // 0x154d88: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x154d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154d8c:
    // 0x154d8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154d90:
    // 0x154d90: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154d94:
    // 0x154d94: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x154d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154d98:
    // 0x154d98: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_154d9c:
    // 0x154d9c: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x154d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_154da0:
    // 0x154da0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x154da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_154da4:
    // 0x154da4: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x154da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154da8:
    // 0x154da8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x154da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_154dac:
    // 0x154dac: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x154dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_154db0:
    // 0x154db0: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154db4:
    // 0x154db4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154db8:
    // 0x154db8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x154db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154dbc:
    // 0x154dbc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_154dc0:
    // 0x154dc0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x154dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_154dc4:
    // 0x154dc4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x154dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_154dc8:
    // 0x154dc8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x154dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154dcc:
    // 0x154dcc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x154dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_154dd0:
    // 0x154dd0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x154dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_154dd4:
    // 0x154dd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154dd8:
    // 0x154dd8: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x154dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154ddc:
    // 0x154ddc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154de0:
    // 0x154de0: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x154de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_154de4:
    // 0x154de4: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154de8:
    // 0x154de8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154dec:
    // 0x154dec: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x154decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154df0:
    // 0x154df0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x154df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154df4:
    // 0x154df4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x154df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_154df8:
    // 0x154df8: 0x2444bd00  addiu       $a0, $v0, -0x4300
    ctx->pc = 0x154df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_154dfc:
    // 0x154dfc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154e00:
    // 0x154e00: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x154e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_154e04:
    // 0x154e04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x154e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_154e08:
    // 0x154e08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154e0c:
    // 0x154e0c: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x154e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154e10:
    // 0x154e10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154e14:
    // 0x154e14: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x154e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_154e18:
    // 0x154e18: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154e1c:
    // 0x154e1c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154e20:
    // 0x154e20: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154e24:
    // 0x154e24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x154e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154e28:
    // 0x154e28: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154e2c:
    // 0x154e2c: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x154e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154e30:
    // 0x154e30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154e34:
    // 0x154e34: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x154e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_154e38:
    // 0x154e38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x154e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_154e3c:
    // 0x154e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154e40:
    // 0x154e40: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x154e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154e44:
    // 0x154e44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154e48:
    // 0x154e48: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_154e4c:
    // 0x154e4c: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154e50:
    // 0x154e50: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154e54:
    // 0x154e54: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154e58:
    // 0x154e58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x154e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154e5c:
    // 0x154e5c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154e60:
    // 0x154e60: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x154e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154e64:
    // 0x154e64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154e68:
    // 0x154e68: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x154e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_154e6c:
    // 0x154e6c: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x154e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_154e70:
    // 0x154e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154e74:
    // 0x154e74: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x154e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154e78:
    // 0x154e78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154e7c:
    // 0x154e7c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x154e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_154e80:
    // 0x154e80: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x154e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154e84:
    // 0x154e84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154e88:
    // 0x154e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154e8c:
    // 0x154e8c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154e90:
    // 0x154e90: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_154e94:
    // 0x154e94: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x154e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
label_154e98:
    // 0x154e98: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154e9c:
    // 0x154e9c: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x154e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
label_154ea0:
    // 0x154ea0: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x154ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_154ea4:
    // 0x154ea4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154ea8:
    // 0x154ea8: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x154ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154eac:
    // 0x154eac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154eb0:
    // 0x154eb0: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x154eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_154eb4:
    // 0x154eb4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154eb8:
    // 0x154eb8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154ebc:
    // 0x154ebc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x154ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154ec0:
    // 0x154ec0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x154ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_154ec4:
    // 0x154ec4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154ec8:
    // 0x154ec8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x154ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154ecc:
    // 0x154ecc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154ed0:
    // 0x154ed0: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x154ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
label_154ed4:
    // 0x154ed4: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x154ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_154ed8:
    // 0x154ed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154edc:
    // 0x154edc: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x154edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154ee0:
    // 0x154ee0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154ee4:
    // 0x154ee4: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x154ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_154ee8:
    // 0x154ee8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154eec:
    // 0x154eec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_154ef0:
    // 0x154ef0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154ef4:
    // 0x154ef4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154ef8:
    // 0x154ef8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_154efc:
    // 0x154efc: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_154f00:
    // 0x154f00: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x154f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_154f04:
    // 0x154f04: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x154f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
label_154f08:
    // 0x154f08: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x154f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_154f0c:
    // 0x154f0c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x154f0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154f10:
    // 0x154f10: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x154f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154f14:
    // 0x154f14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154f18:
    // 0x154f18: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x154f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_154f1c:
    // 0x154f1c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x154f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154f20:
    // 0x154f20: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x154f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_154f24:
    // 0x154f24: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x154f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_154f28:
    // 0x154f28: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x154f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_154f2c:
    // 0x154f2c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154f30:
    // 0x154f30: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x154f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154f34:
    // 0x154f34: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154f38:
    // 0x154f38: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x154f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
label_154f3c:
    // 0x154f3c: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x154f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_154f40:
    // 0x154f40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154f40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154f44:
    // 0x154f44: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x154f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154f48:
    // 0x154f48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154f4c:
    // 0x154f4c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x154f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_154f50:
    // 0x154f50: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x154f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154f54:
    // 0x154f54: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x154f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_154f58:
    // 0x154f58: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x154f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_154f5c:
    // 0x154f5c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x154f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_154f60:
    // 0x154f60: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_154f64:
    // 0x154f64: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x154f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_154f68:
    // 0x154f68: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x154f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154f6c:
    // 0x154f6c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_154f70:
    // 0x154f70: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x154f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_154f74:
    // 0x154f74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154f74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154f78:
    // 0x154f78: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x154f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154f7c:
    // 0x154f7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154f80:
    // 0x154f80: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x154f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
label_154f84:
    // 0x154f84: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154f88:
    // 0x154f88: 0x8e0515c0  lw          $a1, 0x15C0($s0)
    ctx->pc = 0x154f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5568)));
label_154f8c:
    // 0x154f8c: 0x260615d0  addiu       $a2, $s0, 0x15D0
    ctx->pc = 0x154f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
label_154f90:
    // 0x154f90: 0xc05db20  jal         func_176C80
label_154f94:
    if (ctx->pc == 0x154F94u) {
        ctx->pc = 0x154F98u;
        goto label_154f98;
    }
    ctx->pc = 0x154F90u;
    SET_GPR_U32(ctx, 31, 0x154F98u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x154F90u, 0x154F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F98u;
label_154f98:
    // 0x154f98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x154f98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154f9c:
    // 0x154f9c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154fa0:
    // 0x154fa0: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_154fa4:
    // 0x154fa4: 0xc05db4c  jal         func_176D30
label_154fa8:
    if (ctx->pc == 0x154FA8u) {
        ctx->pc = 0x154FACu;
        goto label_154fac;
    }
    ctx->pc = 0x154FA4u;
    SET_GPR_U32(ctx, 31, 0x154FACu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154FA4u, 0x154FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FACu;
label_154fac:
    // 0x154fac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154facu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154fb0:
    // 0x154fb0: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x154fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154fb4:
    // 0x154fb4: 0x3c0545fa  lui         $a1, 0x45FA
    ctx->pc = 0x154fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17914 << 16));
label_154fb8:
    // 0x154fb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x154fb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154fbc:
    // 0x154fbc: 0x0  nop
    ctx->pc = 0x154fbcu;
    // NOP
label_154fc0:
    // 0x154fc0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x154fc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_154fc4:
    // 0x154fc4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_154fc8:
    // 0x154fc8: 0xc05db74  jal         func_176DD0
label_154fcc:
    if (ctx->pc == 0x154FCCu) {
        ctx->pc = 0x154FD0u;
        goto label_154fd0;
    }
    ctx->pc = 0x154FC8u;
    SET_GPR_U32(ctx, 31, 0x154FD0u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154FC8u, 0x154FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FD0u;
label_154fd0:
    // 0x154fd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154fd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154fd4:
    // 0x154fd4: 0x8e060130  lw          $a2, 0x130($s0)
    ctx->pc = 0x154fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_154fd8:
    // 0x154fd8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154fdc:
    // 0x154fdc: 0x24c500f0  addiu       $a1, $a2, 0xF0
    ctx->pc = 0x154fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
label_154fe0:
    // 0x154fe0: 0xc05dafc  jal         func_176BF0
label_154fe4:
    if (ctx->pc == 0x154FE4u) {
        ctx->pc = 0x154FE8u;
        goto label_154fe8;
    }
    ctx->pc = 0x154FE0u;
    SET_GPR_U32(ctx, 31, 0x154FE8u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x154FE0u, 0x154FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FE8u;
label_154fe8:
    // 0x154fe8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154fe8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_154fec:
    // 0x154fec: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_154ff0:
    // 0x154ff0: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_154ff4:
    // 0x154ff4: 0xc05db4c  jal         func_176D30
label_154ff8:
    if (ctx->pc == 0x154FF8u) {
        ctx->pc = 0x154FFCu;
        goto label_154ffc;
    }
    ctx->pc = 0x154FF4u;
    SET_GPR_U32(ctx, 31, 0x154FFCu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154FF4u, 0x154FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FFCu;
label_154ffc:
    // 0x154ffc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x154ffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_155000:
    // 0x155000: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x155000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_155004:
    // 0x155004: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x155004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
label_155008:
    // 0x155008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x155008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15500c:
    // 0x15500c: 0x0  nop
    ctx->pc = 0x15500cu;
    // NOP
label_155010:
    // 0x155010: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x155010u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_155014:
    // 0x155014: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x155014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
label_155018:
    // 0x155018: 0xc05db74  jal         func_176DD0
label_15501c:
    if (ctx->pc == 0x15501Cu) {
        ctx->pc = 0x155020u;
        goto label_155020;
    }
    ctx->pc = 0x155018u;
    SET_GPR_U32(ctx, 31, 0x155020u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x155018u, 0x155020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155020u;
label_155020:
    // 0x155020: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x155020u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_155024:
    // 0x155024: 0x860315bc  lh          $v1, 0x15BC($s0)
    ctx->pc = 0x155024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5564)));
label_155028:
    // 0x155028: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_15502c:
    if (ctx->pc == 0x15502Cu) {
        ctx->pc = 0x155030u;
        goto label_155030;
    }
    ctx->pc = 0x155028u;
    {
        const bool branch_taken_0x155028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155028) {
            ctx->pc = 0x155044u;
            goto label_155044;
        }
    }
    ctx->pc = 0x155030u;
label_155030:
    // 0x155030: 0x860515bc  lh          $a1, 0x15BC($s0)
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5564)));
label_155034:
    // 0x155034: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x155034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_155038:
    // 0x155038: 0xa60315bc  sh          $v1, 0x15BC($s0)
    ctx->pc = 0x155038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5564), (uint16_t)GPR_U32(ctx, 3));
label_15503c:
    // 0x15503c: 0x10000003  b           . + 4 + (0x3 << 2)
label_155040:
    if (ctx->pc == 0x155040u) {
        ctx->pc = 0x155044u;
        goto label_155044;
    }
    ctx->pc = 0x15503Cu;
    {
        const bool branch_taken_0x15503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15503c) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x155044u;
label_155044:
    // 0x155044: 0xa200157d  sb          $zero, 0x157D($s0)
    ctx->pc = 0x155044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5501), (uint8_t)GPR_U32(ctx, 0));
label_155048:
    // 0x155048: 0xa200157c  sb          $zero, 0x157C($s0)
    ctx->pc = 0x155048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 0));
label_15504c:
    // 0x15504c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15504cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155050:
    // 0x155050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_155054:
    // 0x155054: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x155054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_155058:
    // 0x155058: 0x3e00008  jr          $ra
label_15505c:
    if (ctx->pc == 0x15505Cu) {
        ctx->pc = 0x155060u;
        goto label_fallthrough_0x155058;
    }
    ctx->pc = 0x155058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155058:
    ctx->pc = 0x155060u;
}
