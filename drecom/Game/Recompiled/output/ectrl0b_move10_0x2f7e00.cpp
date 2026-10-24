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

// Function: ectrl0b_move10
// Address: 0x2f7e00 - 0x2f8bd0
void ectrl0b_move10_0x2f7e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0b_move10_0x2f7e00");
#endif

    switch (ctx->pc) {
        case 0x2f7e00u: goto label_2f7e00;
        case 0x2f7e04u: goto label_2f7e04;
        case 0x2f7e08u: goto label_2f7e08;
        case 0x2f7e0cu: goto label_2f7e0c;
        case 0x2f7e10u: goto label_2f7e10;
        case 0x2f7e14u: goto label_2f7e14;
        case 0x2f7e18u: goto label_2f7e18;
        case 0x2f7e1cu: goto label_2f7e1c;
        case 0x2f7e20u: goto label_2f7e20;
        case 0x2f7e24u: goto label_2f7e24;
        case 0x2f7e28u: goto label_2f7e28;
        case 0x2f7e2cu: goto label_2f7e2c;
        case 0x2f7e30u: goto label_2f7e30;
        case 0x2f7e34u: goto label_2f7e34;
        case 0x2f7e38u: goto label_2f7e38;
        case 0x2f7e3cu: goto label_2f7e3c;
        case 0x2f7e40u: goto label_2f7e40;
        case 0x2f7e44u: goto label_2f7e44;
        case 0x2f7e48u: goto label_2f7e48;
        case 0x2f7e4cu: goto label_2f7e4c;
        case 0x2f7e50u: goto label_2f7e50;
        case 0x2f7e54u: goto label_2f7e54;
        case 0x2f7e58u: goto label_2f7e58;
        case 0x2f7e5cu: goto label_2f7e5c;
        case 0x2f7e60u: goto label_2f7e60;
        case 0x2f7e64u: goto label_2f7e64;
        case 0x2f7e68u: goto label_2f7e68;
        case 0x2f7e6cu: goto label_2f7e6c;
        case 0x2f7e70u: goto label_2f7e70;
        case 0x2f7e74u: goto label_2f7e74;
        case 0x2f7e78u: goto label_2f7e78;
        case 0x2f7e7cu: goto label_2f7e7c;
        case 0x2f7e80u: goto label_2f7e80;
        case 0x2f7e84u: goto label_2f7e84;
        case 0x2f7e88u: goto label_2f7e88;
        case 0x2f7e8cu: goto label_2f7e8c;
        case 0x2f7e90u: goto label_2f7e90;
        case 0x2f7e94u: goto label_2f7e94;
        case 0x2f7e98u: goto label_2f7e98;
        case 0x2f7e9cu: goto label_2f7e9c;
        case 0x2f7ea0u: goto label_2f7ea0;
        case 0x2f7ea4u: goto label_2f7ea4;
        case 0x2f7ea8u: goto label_2f7ea8;
        case 0x2f7eacu: goto label_2f7eac;
        case 0x2f7eb0u: goto label_2f7eb0;
        case 0x2f7eb4u: goto label_2f7eb4;
        case 0x2f7eb8u: goto label_2f7eb8;
        case 0x2f7ebcu: goto label_2f7ebc;
        case 0x2f7ec0u: goto label_2f7ec0;
        case 0x2f7ec4u: goto label_2f7ec4;
        case 0x2f7ec8u: goto label_2f7ec8;
        case 0x2f7eccu: goto label_2f7ecc;
        case 0x2f7ed0u: goto label_2f7ed0;
        case 0x2f7ed4u: goto label_2f7ed4;
        case 0x2f7ed8u: goto label_2f7ed8;
        case 0x2f7edcu: goto label_2f7edc;
        case 0x2f7ee0u: goto label_2f7ee0;
        case 0x2f7ee4u: goto label_2f7ee4;
        case 0x2f7ee8u: goto label_2f7ee8;
        case 0x2f7eecu: goto label_2f7eec;
        case 0x2f7ef0u: goto label_2f7ef0;
        case 0x2f7ef4u: goto label_2f7ef4;
        case 0x2f7ef8u: goto label_2f7ef8;
        case 0x2f7efcu: goto label_2f7efc;
        case 0x2f7f00u: goto label_2f7f00;
        case 0x2f7f04u: goto label_2f7f04;
        case 0x2f7f08u: goto label_2f7f08;
        case 0x2f7f0cu: goto label_2f7f0c;
        case 0x2f7f10u: goto label_2f7f10;
        case 0x2f7f14u: goto label_2f7f14;
        case 0x2f7f18u: goto label_2f7f18;
        case 0x2f7f1cu: goto label_2f7f1c;
        case 0x2f7f20u: goto label_2f7f20;
        case 0x2f7f24u: goto label_2f7f24;
        case 0x2f7f28u: goto label_2f7f28;
        case 0x2f7f2cu: goto label_2f7f2c;
        case 0x2f7f30u: goto label_2f7f30;
        case 0x2f7f34u: goto label_2f7f34;
        case 0x2f7f38u: goto label_2f7f38;
        case 0x2f7f3cu: goto label_2f7f3c;
        case 0x2f7f40u: goto label_2f7f40;
        case 0x2f7f44u: goto label_2f7f44;
        case 0x2f7f48u: goto label_2f7f48;
        case 0x2f7f4cu: goto label_2f7f4c;
        case 0x2f7f50u: goto label_2f7f50;
        case 0x2f7f54u: goto label_2f7f54;
        case 0x2f7f58u: goto label_2f7f58;
        case 0x2f7f5cu: goto label_2f7f5c;
        case 0x2f7f60u: goto label_2f7f60;
        case 0x2f7f64u: goto label_2f7f64;
        case 0x2f7f68u: goto label_2f7f68;
        case 0x2f7f6cu: goto label_2f7f6c;
        case 0x2f7f70u: goto label_2f7f70;
        case 0x2f7f74u: goto label_2f7f74;
        case 0x2f7f78u: goto label_2f7f78;
        case 0x2f7f7cu: goto label_2f7f7c;
        case 0x2f7f80u: goto label_2f7f80;
        case 0x2f7f84u: goto label_2f7f84;
        case 0x2f7f88u: goto label_2f7f88;
        case 0x2f7f8cu: goto label_2f7f8c;
        case 0x2f7f90u: goto label_2f7f90;
        case 0x2f7f94u: goto label_2f7f94;
        case 0x2f7f98u: goto label_2f7f98;
        case 0x2f7f9cu: goto label_2f7f9c;
        case 0x2f7fa0u: goto label_2f7fa0;
        case 0x2f7fa4u: goto label_2f7fa4;
        case 0x2f7fa8u: goto label_2f7fa8;
        case 0x2f7facu: goto label_2f7fac;
        case 0x2f7fb0u: goto label_2f7fb0;
        case 0x2f7fb4u: goto label_2f7fb4;
        case 0x2f7fb8u: goto label_2f7fb8;
        case 0x2f7fbcu: goto label_2f7fbc;
        case 0x2f7fc0u: goto label_2f7fc0;
        case 0x2f7fc4u: goto label_2f7fc4;
        case 0x2f7fc8u: goto label_2f7fc8;
        case 0x2f7fccu: goto label_2f7fcc;
        case 0x2f7fd0u: goto label_2f7fd0;
        case 0x2f7fd4u: goto label_2f7fd4;
        case 0x2f7fd8u: goto label_2f7fd8;
        case 0x2f7fdcu: goto label_2f7fdc;
        case 0x2f7fe0u: goto label_2f7fe0;
        case 0x2f7fe4u: goto label_2f7fe4;
        case 0x2f7fe8u: goto label_2f7fe8;
        case 0x2f7fecu: goto label_2f7fec;
        case 0x2f7ff0u: goto label_2f7ff0;
        case 0x2f7ff4u: goto label_2f7ff4;
        case 0x2f7ff8u: goto label_2f7ff8;
        case 0x2f7ffcu: goto label_2f7ffc;
        case 0x2f8000u: goto label_2f8000;
        case 0x2f8004u: goto label_2f8004;
        case 0x2f8008u: goto label_2f8008;
        case 0x2f800cu: goto label_2f800c;
        case 0x2f8010u: goto label_2f8010;
        case 0x2f8014u: goto label_2f8014;
        case 0x2f8018u: goto label_2f8018;
        case 0x2f801cu: goto label_2f801c;
        case 0x2f8020u: goto label_2f8020;
        case 0x2f8024u: goto label_2f8024;
        case 0x2f8028u: goto label_2f8028;
        case 0x2f802cu: goto label_2f802c;
        case 0x2f8030u: goto label_2f8030;
        case 0x2f8034u: goto label_2f8034;
        case 0x2f8038u: goto label_2f8038;
        case 0x2f803cu: goto label_2f803c;
        case 0x2f8040u: goto label_2f8040;
        case 0x2f8044u: goto label_2f8044;
        case 0x2f8048u: goto label_2f8048;
        case 0x2f804cu: goto label_2f804c;
        case 0x2f8050u: goto label_2f8050;
        case 0x2f8054u: goto label_2f8054;
        case 0x2f8058u: goto label_2f8058;
        case 0x2f805cu: goto label_2f805c;
        case 0x2f8060u: goto label_2f8060;
        case 0x2f8064u: goto label_2f8064;
        case 0x2f8068u: goto label_2f8068;
        case 0x2f806cu: goto label_2f806c;
        case 0x2f8070u: goto label_2f8070;
        case 0x2f8074u: goto label_2f8074;
        case 0x2f8078u: goto label_2f8078;
        case 0x2f807cu: goto label_2f807c;
        case 0x2f8080u: goto label_2f8080;
        case 0x2f8084u: goto label_2f8084;
        case 0x2f8088u: goto label_2f8088;
        case 0x2f808cu: goto label_2f808c;
        case 0x2f8090u: goto label_2f8090;
        case 0x2f8094u: goto label_2f8094;
        case 0x2f8098u: goto label_2f8098;
        case 0x2f809cu: goto label_2f809c;
        case 0x2f80a0u: goto label_2f80a0;
        case 0x2f80a4u: goto label_2f80a4;
        case 0x2f80a8u: goto label_2f80a8;
        case 0x2f80acu: goto label_2f80ac;
        case 0x2f80b0u: goto label_2f80b0;
        case 0x2f80b4u: goto label_2f80b4;
        case 0x2f80b8u: goto label_2f80b8;
        case 0x2f80bcu: goto label_2f80bc;
        case 0x2f80c0u: goto label_2f80c0;
        case 0x2f80c4u: goto label_2f80c4;
        case 0x2f80c8u: goto label_2f80c8;
        case 0x2f80ccu: goto label_2f80cc;
        case 0x2f80d0u: goto label_2f80d0;
        case 0x2f80d4u: goto label_2f80d4;
        case 0x2f80d8u: goto label_2f80d8;
        case 0x2f80dcu: goto label_2f80dc;
        case 0x2f80e0u: goto label_2f80e0;
        case 0x2f80e4u: goto label_2f80e4;
        case 0x2f80e8u: goto label_2f80e8;
        case 0x2f80ecu: goto label_2f80ec;
        case 0x2f80f0u: goto label_2f80f0;
        case 0x2f80f4u: goto label_2f80f4;
        case 0x2f80f8u: goto label_2f80f8;
        case 0x2f80fcu: goto label_2f80fc;
        case 0x2f8100u: goto label_2f8100;
        case 0x2f8104u: goto label_2f8104;
        case 0x2f8108u: goto label_2f8108;
        case 0x2f810cu: goto label_2f810c;
        case 0x2f8110u: goto label_2f8110;
        case 0x2f8114u: goto label_2f8114;
        case 0x2f8118u: goto label_2f8118;
        case 0x2f811cu: goto label_2f811c;
        case 0x2f8120u: goto label_2f8120;
        case 0x2f8124u: goto label_2f8124;
        case 0x2f8128u: goto label_2f8128;
        case 0x2f812cu: goto label_2f812c;
        case 0x2f8130u: goto label_2f8130;
        case 0x2f8134u: goto label_2f8134;
        case 0x2f8138u: goto label_2f8138;
        case 0x2f813cu: goto label_2f813c;
        case 0x2f8140u: goto label_2f8140;
        case 0x2f8144u: goto label_2f8144;
        case 0x2f8148u: goto label_2f8148;
        case 0x2f814cu: goto label_2f814c;
        case 0x2f8150u: goto label_2f8150;
        case 0x2f8154u: goto label_2f8154;
        case 0x2f8158u: goto label_2f8158;
        case 0x2f815cu: goto label_2f815c;
        case 0x2f8160u: goto label_2f8160;
        case 0x2f8164u: goto label_2f8164;
        case 0x2f8168u: goto label_2f8168;
        case 0x2f816cu: goto label_2f816c;
        case 0x2f8170u: goto label_2f8170;
        case 0x2f8174u: goto label_2f8174;
        case 0x2f8178u: goto label_2f8178;
        case 0x2f817cu: goto label_2f817c;
        case 0x2f8180u: goto label_2f8180;
        case 0x2f8184u: goto label_2f8184;
        case 0x2f8188u: goto label_2f8188;
        case 0x2f818cu: goto label_2f818c;
        case 0x2f8190u: goto label_2f8190;
        case 0x2f8194u: goto label_2f8194;
        case 0x2f8198u: goto label_2f8198;
        case 0x2f819cu: goto label_2f819c;
        case 0x2f81a0u: goto label_2f81a0;
        case 0x2f81a4u: goto label_2f81a4;
        case 0x2f81a8u: goto label_2f81a8;
        case 0x2f81acu: goto label_2f81ac;
        case 0x2f81b0u: goto label_2f81b0;
        case 0x2f81b4u: goto label_2f81b4;
        case 0x2f81b8u: goto label_2f81b8;
        case 0x2f81bcu: goto label_2f81bc;
        case 0x2f81c0u: goto label_2f81c0;
        case 0x2f81c4u: goto label_2f81c4;
        case 0x2f81c8u: goto label_2f81c8;
        case 0x2f81ccu: goto label_2f81cc;
        case 0x2f81d0u: goto label_2f81d0;
        case 0x2f81d4u: goto label_2f81d4;
        case 0x2f81d8u: goto label_2f81d8;
        case 0x2f81dcu: goto label_2f81dc;
        case 0x2f81e0u: goto label_2f81e0;
        case 0x2f81e4u: goto label_2f81e4;
        case 0x2f81e8u: goto label_2f81e8;
        case 0x2f81ecu: goto label_2f81ec;
        case 0x2f81f0u: goto label_2f81f0;
        case 0x2f81f4u: goto label_2f81f4;
        case 0x2f81f8u: goto label_2f81f8;
        case 0x2f81fcu: goto label_2f81fc;
        case 0x2f8200u: goto label_2f8200;
        case 0x2f8204u: goto label_2f8204;
        case 0x2f8208u: goto label_2f8208;
        case 0x2f820cu: goto label_2f820c;
        case 0x2f8210u: goto label_2f8210;
        case 0x2f8214u: goto label_2f8214;
        case 0x2f8218u: goto label_2f8218;
        case 0x2f821cu: goto label_2f821c;
        case 0x2f8220u: goto label_2f8220;
        case 0x2f8224u: goto label_2f8224;
        case 0x2f8228u: goto label_2f8228;
        case 0x2f822cu: goto label_2f822c;
        case 0x2f8230u: goto label_2f8230;
        case 0x2f8234u: goto label_2f8234;
        case 0x2f8238u: goto label_2f8238;
        case 0x2f823cu: goto label_2f823c;
        case 0x2f8240u: goto label_2f8240;
        case 0x2f8244u: goto label_2f8244;
        case 0x2f8248u: goto label_2f8248;
        case 0x2f824cu: goto label_2f824c;
        case 0x2f8250u: goto label_2f8250;
        case 0x2f8254u: goto label_2f8254;
        case 0x2f8258u: goto label_2f8258;
        case 0x2f825cu: goto label_2f825c;
        case 0x2f8260u: goto label_2f8260;
        case 0x2f8264u: goto label_2f8264;
        case 0x2f8268u: goto label_2f8268;
        case 0x2f826cu: goto label_2f826c;
        case 0x2f8270u: goto label_2f8270;
        case 0x2f8274u: goto label_2f8274;
        case 0x2f8278u: goto label_2f8278;
        case 0x2f827cu: goto label_2f827c;
        case 0x2f8280u: goto label_2f8280;
        case 0x2f8284u: goto label_2f8284;
        case 0x2f8288u: goto label_2f8288;
        case 0x2f828cu: goto label_2f828c;
        case 0x2f8290u: goto label_2f8290;
        case 0x2f8294u: goto label_2f8294;
        case 0x2f8298u: goto label_2f8298;
        case 0x2f829cu: goto label_2f829c;
        case 0x2f82a0u: goto label_2f82a0;
        case 0x2f82a4u: goto label_2f82a4;
        case 0x2f82a8u: goto label_2f82a8;
        case 0x2f82acu: goto label_2f82ac;
        case 0x2f82b0u: goto label_2f82b0;
        case 0x2f82b4u: goto label_2f82b4;
        case 0x2f82b8u: goto label_2f82b8;
        case 0x2f82bcu: goto label_2f82bc;
        case 0x2f82c0u: goto label_2f82c0;
        case 0x2f82c4u: goto label_2f82c4;
        case 0x2f82c8u: goto label_2f82c8;
        case 0x2f82ccu: goto label_2f82cc;
        case 0x2f82d0u: goto label_2f82d0;
        case 0x2f82d4u: goto label_2f82d4;
        case 0x2f82d8u: goto label_2f82d8;
        case 0x2f82dcu: goto label_2f82dc;
        case 0x2f82e0u: goto label_2f82e0;
        case 0x2f82e4u: goto label_2f82e4;
        case 0x2f82e8u: goto label_2f82e8;
        case 0x2f82ecu: goto label_2f82ec;
        case 0x2f82f0u: goto label_2f82f0;
        case 0x2f82f4u: goto label_2f82f4;
        case 0x2f82f8u: goto label_2f82f8;
        case 0x2f82fcu: goto label_2f82fc;
        case 0x2f8300u: goto label_2f8300;
        case 0x2f8304u: goto label_2f8304;
        case 0x2f8308u: goto label_2f8308;
        case 0x2f830cu: goto label_2f830c;
        case 0x2f8310u: goto label_2f8310;
        case 0x2f8314u: goto label_2f8314;
        case 0x2f8318u: goto label_2f8318;
        case 0x2f831cu: goto label_2f831c;
        case 0x2f8320u: goto label_2f8320;
        case 0x2f8324u: goto label_2f8324;
        case 0x2f8328u: goto label_2f8328;
        case 0x2f832cu: goto label_2f832c;
        case 0x2f8330u: goto label_2f8330;
        case 0x2f8334u: goto label_2f8334;
        case 0x2f8338u: goto label_2f8338;
        case 0x2f833cu: goto label_2f833c;
        case 0x2f8340u: goto label_2f8340;
        case 0x2f8344u: goto label_2f8344;
        case 0x2f8348u: goto label_2f8348;
        case 0x2f834cu: goto label_2f834c;
        case 0x2f8350u: goto label_2f8350;
        case 0x2f8354u: goto label_2f8354;
        case 0x2f8358u: goto label_2f8358;
        case 0x2f835cu: goto label_2f835c;
        case 0x2f8360u: goto label_2f8360;
        case 0x2f8364u: goto label_2f8364;
        case 0x2f8368u: goto label_2f8368;
        case 0x2f836cu: goto label_2f836c;
        case 0x2f8370u: goto label_2f8370;
        case 0x2f8374u: goto label_2f8374;
        case 0x2f8378u: goto label_2f8378;
        case 0x2f837cu: goto label_2f837c;
        case 0x2f8380u: goto label_2f8380;
        case 0x2f8384u: goto label_2f8384;
        case 0x2f8388u: goto label_2f8388;
        case 0x2f838cu: goto label_2f838c;
        case 0x2f8390u: goto label_2f8390;
        case 0x2f8394u: goto label_2f8394;
        case 0x2f8398u: goto label_2f8398;
        case 0x2f839cu: goto label_2f839c;
        case 0x2f83a0u: goto label_2f83a0;
        case 0x2f83a4u: goto label_2f83a4;
        case 0x2f83a8u: goto label_2f83a8;
        case 0x2f83acu: goto label_2f83ac;
        case 0x2f83b0u: goto label_2f83b0;
        case 0x2f83b4u: goto label_2f83b4;
        case 0x2f83b8u: goto label_2f83b8;
        case 0x2f83bcu: goto label_2f83bc;
        case 0x2f83c0u: goto label_2f83c0;
        case 0x2f83c4u: goto label_2f83c4;
        case 0x2f83c8u: goto label_2f83c8;
        case 0x2f83ccu: goto label_2f83cc;
        case 0x2f83d0u: goto label_2f83d0;
        case 0x2f83d4u: goto label_2f83d4;
        case 0x2f83d8u: goto label_2f83d8;
        case 0x2f83dcu: goto label_2f83dc;
        case 0x2f83e0u: goto label_2f83e0;
        case 0x2f83e4u: goto label_2f83e4;
        case 0x2f83e8u: goto label_2f83e8;
        case 0x2f83ecu: goto label_2f83ec;
        case 0x2f83f0u: goto label_2f83f0;
        case 0x2f83f4u: goto label_2f83f4;
        case 0x2f83f8u: goto label_2f83f8;
        case 0x2f83fcu: goto label_2f83fc;
        case 0x2f8400u: goto label_2f8400;
        case 0x2f8404u: goto label_2f8404;
        case 0x2f8408u: goto label_2f8408;
        case 0x2f840cu: goto label_2f840c;
        case 0x2f8410u: goto label_2f8410;
        case 0x2f8414u: goto label_2f8414;
        case 0x2f8418u: goto label_2f8418;
        case 0x2f841cu: goto label_2f841c;
        case 0x2f8420u: goto label_2f8420;
        case 0x2f8424u: goto label_2f8424;
        case 0x2f8428u: goto label_2f8428;
        case 0x2f842cu: goto label_2f842c;
        case 0x2f8430u: goto label_2f8430;
        case 0x2f8434u: goto label_2f8434;
        case 0x2f8438u: goto label_2f8438;
        case 0x2f843cu: goto label_2f843c;
        case 0x2f8440u: goto label_2f8440;
        case 0x2f8444u: goto label_2f8444;
        case 0x2f8448u: goto label_2f8448;
        case 0x2f844cu: goto label_2f844c;
        case 0x2f8450u: goto label_2f8450;
        case 0x2f8454u: goto label_2f8454;
        case 0x2f8458u: goto label_2f8458;
        case 0x2f845cu: goto label_2f845c;
        case 0x2f8460u: goto label_2f8460;
        case 0x2f8464u: goto label_2f8464;
        case 0x2f8468u: goto label_2f8468;
        case 0x2f846cu: goto label_2f846c;
        case 0x2f8470u: goto label_2f8470;
        case 0x2f8474u: goto label_2f8474;
        case 0x2f8478u: goto label_2f8478;
        case 0x2f847cu: goto label_2f847c;
        case 0x2f8480u: goto label_2f8480;
        case 0x2f8484u: goto label_2f8484;
        case 0x2f8488u: goto label_2f8488;
        case 0x2f848cu: goto label_2f848c;
        case 0x2f8490u: goto label_2f8490;
        case 0x2f8494u: goto label_2f8494;
        case 0x2f8498u: goto label_2f8498;
        case 0x2f849cu: goto label_2f849c;
        case 0x2f84a0u: goto label_2f84a0;
        case 0x2f84a4u: goto label_2f84a4;
        case 0x2f84a8u: goto label_2f84a8;
        case 0x2f84acu: goto label_2f84ac;
        case 0x2f84b0u: goto label_2f84b0;
        case 0x2f84b4u: goto label_2f84b4;
        case 0x2f84b8u: goto label_2f84b8;
        case 0x2f84bcu: goto label_2f84bc;
        case 0x2f84c0u: goto label_2f84c0;
        case 0x2f84c4u: goto label_2f84c4;
        case 0x2f84c8u: goto label_2f84c8;
        case 0x2f84ccu: goto label_2f84cc;
        case 0x2f84d0u: goto label_2f84d0;
        case 0x2f84d4u: goto label_2f84d4;
        case 0x2f84d8u: goto label_2f84d8;
        case 0x2f84dcu: goto label_2f84dc;
        case 0x2f84e0u: goto label_2f84e0;
        case 0x2f84e4u: goto label_2f84e4;
        case 0x2f84e8u: goto label_2f84e8;
        case 0x2f84ecu: goto label_2f84ec;
        case 0x2f84f0u: goto label_2f84f0;
        case 0x2f84f4u: goto label_2f84f4;
        case 0x2f84f8u: goto label_2f84f8;
        case 0x2f84fcu: goto label_2f84fc;
        case 0x2f8500u: goto label_2f8500;
        case 0x2f8504u: goto label_2f8504;
        case 0x2f8508u: goto label_2f8508;
        case 0x2f850cu: goto label_2f850c;
        case 0x2f8510u: goto label_2f8510;
        case 0x2f8514u: goto label_2f8514;
        case 0x2f8518u: goto label_2f8518;
        case 0x2f851cu: goto label_2f851c;
        case 0x2f8520u: goto label_2f8520;
        case 0x2f8524u: goto label_2f8524;
        case 0x2f8528u: goto label_2f8528;
        case 0x2f852cu: goto label_2f852c;
        case 0x2f8530u: goto label_2f8530;
        case 0x2f8534u: goto label_2f8534;
        case 0x2f8538u: goto label_2f8538;
        case 0x2f853cu: goto label_2f853c;
        case 0x2f8540u: goto label_2f8540;
        case 0x2f8544u: goto label_2f8544;
        case 0x2f8548u: goto label_2f8548;
        case 0x2f854cu: goto label_2f854c;
        case 0x2f8550u: goto label_2f8550;
        case 0x2f8554u: goto label_2f8554;
        case 0x2f8558u: goto label_2f8558;
        case 0x2f855cu: goto label_2f855c;
        case 0x2f8560u: goto label_2f8560;
        case 0x2f8564u: goto label_2f8564;
        case 0x2f8568u: goto label_2f8568;
        case 0x2f856cu: goto label_2f856c;
        case 0x2f8570u: goto label_2f8570;
        case 0x2f8574u: goto label_2f8574;
        case 0x2f8578u: goto label_2f8578;
        case 0x2f857cu: goto label_2f857c;
        case 0x2f8580u: goto label_2f8580;
        case 0x2f8584u: goto label_2f8584;
        case 0x2f8588u: goto label_2f8588;
        case 0x2f858cu: goto label_2f858c;
        case 0x2f8590u: goto label_2f8590;
        case 0x2f8594u: goto label_2f8594;
        case 0x2f8598u: goto label_2f8598;
        case 0x2f859cu: goto label_2f859c;
        case 0x2f85a0u: goto label_2f85a0;
        case 0x2f85a4u: goto label_2f85a4;
        case 0x2f85a8u: goto label_2f85a8;
        case 0x2f85acu: goto label_2f85ac;
        case 0x2f85b0u: goto label_2f85b0;
        case 0x2f85b4u: goto label_2f85b4;
        case 0x2f85b8u: goto label_2f85b8;
        case 0x2f85bcu: goto label_2f85bc;
        case 0x2f85c0u: goto label_2f85c0;
        case 0x2f85c4u: goto label_2f85c4;
        case 0x2f85c8u: goto label_2f85c8;
        case 0x2f85ccu: goto label_2f85cc;
        case 0x2f85d0u: goto label_2f85d0;
        case 0x2f85d4u: goto label_2f85d4;
        case 0x2f85d8u: goto label_2f85d8;
        case 0x2f85dcu: goto label_2f85dc;
        case 0x2f85e0u: goto label_2f85e0;
        case 0x2f85e4u: goto label_2f85e4;
        case 0x2f85e8u: goto label_2f85e8;
        case 0x2f85ecu: goto label_2f85ec;
        case 0x2f85f0u: goto label_2f85f0;
        case 0x2f85f4u: goto label_2f85f4;
        case 0x2f85f8u: goto label_2f85f8;
        case 0x2f85fcu: goto label_2f85fc;
        case 0x2f8600u: goto label_2f8600;
        case 0x2f8604u: goto label_2f8604;
        case 0x2f8608u: goto label_2f8608;
        case 0x2f860cu: goto label_2f860c;
        case 0x2f8610u: goto label_2f8610;
        case 0x2f8614u: goto label_2f8614;
        case 0x2f8618u: goto label_2f8618;
        case 0x2f861cu: goto label_2f861c;
        case 0x2f8620u: goto label_2f8620;
        case 0x2f8624u: goto label_2f8624;
        case 0x2f8628u: goto label_2f8628;
        case 0x2f862cu: goto label_2f862c;
        case 0x2f8630u: goto label_2f8630;
        case 0x2f8634u: goto label_2f8634;
        case 0x2f8638u: goto label_2f8638;
        case 0x2f863cu: goto label_2f863c;
        case 0x2f8640u: goto label_2f8640;
        case 0x2f8644u: goto label_2f8644;
        case 0x2f8648u: goto label_2f8648;
        case 0x2f864cu: goto label_2f864c;
        case 0x2f8650u: goto label_2f8650;
        case 0x2f8654u: goto label_2f8654;
        case 0x2f8658u: goto label_2f8658;
        case 0x2f865cu: goto label_2f865c;
        case 0x2f8660u: goto label_2f8660;
        case 0x2f8664u: goto label_2f8664;
        case 0x2f8668u: goto label_2f8668;
        case 0x2f866cu: goto label_2f866c;
        case 0x2f8670u: goto label_2f8670;
        case 0x2f8674u: goto label_2f8674;
        case 0x2f8678u: goto label_2f8678;
        case 0x2f867cu: goto label_2f867c;
        case 0x2f8680u: goto label_2f8680;
        case 0x2f8684u: goto label_2f8684;
        case 0x2f8688u: goto label_2f8688;
        case 0x2f868cu: goto label_2f868c;
        case 0x2f8690u: goto label_2f8690;
        case 0x2f8694u: goto label_2f8694;
        case 0x2f8698u: goto label_2f8698;
        case 0x2f869cu: goto label_2f869c;
        case 0x2f86a0u: goto label_2f86a0;
        case 0x2f86a4u: goto label_2f86a4;
        case 0x2f86a8u: goto label_2f86a8;
        case 0x2f86acu: goto label_2f86ac;
        case 0x2f86b0u: goto label_2f86b0;
        case 0x2f86b4u: goto label_2f86b4;
        case 0x2f86b8u: goto label_2f86b8;
        case 0x2f86bcu: goto label_2f86bc;
        case 0x2f86c0u: goto label_2f86c0;
        case 0x2f86c4u: goto label_2f86c4;
        case 0x2f86c8u: goto label_2f86c8;
        case 0x2f86ccu: goto label_2f86cc;
        case 0x2f86d0u: goto label_2f86d0;
        case 0x2f86d4u: goto label_2f86d4;
        case 0x2f86d8u: goto label_2f86d8;
        case 0x2f86dcu: goto label_2f86dc;
        case 0x2f86e0u: goto label_2f86e0;
        case 0x2f86e4u: goto label_2f86e4;
        case 0x2f86e8u: goto label_2f86e8;
        case 0x2f86ecu: goto label_2f86ec;
        case 0x2f86f0u: goto label_2f86f0;
        case 0x2f86f4u: goto label_2f86f4;
        case 0x2f86f8u: goto label_2f86f8;
        case 0x2f86fcu: goto label_2f86fc;
        case 0x2f8700u: goto label_2f8700;
        case 0x2f8704u: goto label_2f8704;
        case 0x2f8708u: goto label_2f8708;
        case 0x2f870cu: goto label_2f870c;
        case 0x2f8710u: goto label_2f8710;
        case 0x2f8714u: goto label_2f8714;
        case 0x2f8718u: goto label_2f8718;
        case 0x2f871cu: goto label_2f871c;
        case 0x2f8720u: goto label_2f8720;
        case 0x2f8724u: goto label_2f8724;
        case 0x2f8728u: goto label_2f8728;
        case 0x2f872cu: goto label_2f872c;
        case 0x2f8730u: goto label_2f8730;
        case 0x2f8734u: goto label_2f8734;
        case 0x2f8738u: goto label_2f8738;
        case 0x2f873cu: goto label_2f873c;
        case 0x2f8740u: goto label_2f8740;
        case 0x2f8744u: goto label_2f8744;
        case 0x2f8748u: goto label_2f8748;
        case 0x2f874cu: goto label_2f874c;
        case 0x2f8750u: goto label_2f8750;
        case 0x2f8754u: goto label_2f8754;
        case 0x2f8758u: goto label_2f8758;
        case 0x2f875cu: goto label_2f875c;
        case 0x2f8760u: goto label_2f8760;
        case 0x2f8764u: goto label_2f8764;
        case 0x2f8768u: goto label_2f8768;
        case 0x2f876cu: goto label_2f876c;
        case 0x2f8770u: goto label_2f8770;
        case 0x2f8774u: goto label_2f8774;
        case 0x2f8778u: goto label_2f8778;
        case 0x2f877cu: goto label_2f877c;
        case 0x2f8780u: goto label_2f8780;
        case 0x2f8784u: goto label_2f8784;
        case 0x2f8788u: goto label_2f8788;
        case 0x2f878cu: goto label_2f878c;
        case 0x2f8790u: goto label_2f8790;
        case 0x2f8794u: goto label_2f8794;
        case 0x2f8798u: goto label_2f8798;
        case 0x2f879cu: goto label_2f879c;
        case 0x2f87a0u: goto label_2f87a0;
        case 0x2f87a4u: goto label_2f87a4;
        case 0x2f87a8u: goto label_2f87a8;
        case 0x2f87acu: goto label_2f87ac;
        case 0x2f87b0u: goto label_2f87b0;
        case 0x2f87b4u: goto label_2f87b4;
        case 0x2f87b8u: goto label_2f87b8;
        case 0x2f87bcu: goto label_2f87bc;
        case 0x2f87c0u: goto label_2f87c0;
        case 0x2f87c4u: goto label_2f87c4;
        case 0x2f87c8u: goto label_2f87c8;
        case 0x2f87ccu: goto label_2f87cc;
        case 0x2f87d0u: goto label_2f87d0;
        case 0x2f87d4u: goto label_2f87d4;
        case 0x2f87d8u: goto label_2f87d8;
        case 0x2f87dcu: goto label_2f87dc;
        case 0x2f87e0u: goto label_2f87e0;
        case 0x2f87e4u: goto label_2f87e4;
        case 0x2f87e8u: goto label_2f87e8;
        case 0x2f87ecu: goto label_2f87ec;
        case 0x2f87f0u: goto label_2f87f0;
        case 0x2f87f4u: goto label_2f87f4;
        case 0x2f87f8u: goto label_2f87f8;
        case 0x2f87fcu: goto label_2f87fc;
        case 0x2f8800u: goto label_2f8800;
        case 0x2f8804u: goto label_2f8804;
        case 0x2f8808u: goto label_2f8808;
        case 0x2f880cu: goto label_2f880c;
        case 0x2f8810u: goto label_2f8810;
        case 0x2f8814u: goto label_2f8814;
        case 0x2f8818u: goto label_2f8818;
        case 0x2f881cu: goto label_2f881c;
        case 0x2f8820u: goto label_2f8820;
        case 0x2f8824u: goto label_2f8824;
        case 0x2f8828u: goto label_2f8828;
        case 0x2f882cu: goto label_2f882c;
        case 0x2f8830u: goto label_2f8830;
        case 0x2f8834u: goto label_2f8834;
        case 0x2f8838u: goto label_2f8838;
        case 0x2f883cu: goto label_2f883c;
        case 0x2f8840u: goto label_2f8840;
        case 0x2f8844u: goto label_2f8844;
        case 0x2f8848u: goto label_2f8848;
        case 0x2f884cu: goto label_2f884c;
        case 0x2f8850u: goto label_2f8850;
        case 0x2f8854u: goto label_2f8854;
        case 0x2f8858u: goto label_2f8858;
        case 0x2f885cu: goto label_2f885c;
        case 0x2f8860u: goto label_2f8860;
        case 0x2f8864u: goto label_2f8864;
        case 0x2f8868u: goto label_2f8868;
        case 0x2f886cu: goto label_2f886c;
        case 0x2f8870u: goto label_2f8870;
        case 0x2f8874u: goto label_2f8874;
        case 0x2f8878u: goto label_2f8878;
        case 0x2f887cu: goto label_2f887c;
        case 0x2f8880u: goto label_2f8880;
        case 0x2f8884u: goto label_2f8884;
        case 0x2f8888u: goto label_2f8888;
        case 0x2f888cu: goto label_2f888c;
        case 0x2f8890u: goto label_2f8890;
        case 0x2f8894u: goto label_2f8894;
        case 0x2f8898u: goto label_2f8898;
        case 0x2f889cu: goto label_2f889c;
        case 0x2f88a0u: goto label_2f88a0;
        case 0x2f88a4u: goto label_2f88a4;
        case 0x2f88a8u: goto label_2f88a8;
        case 0x2f88acu: goto label_2f88ac;
        case 0x2f88b0u: goto label_2f88b0;
        case 0x2f88b4u: goto label_2f88b4;
        case 0x2f88b8u: goto label_2f88b8;
        case 0x2f88bcu: goto label_2f88bc;
        case 0x2f88c0u: goto label_2f88c0;
        case 0x2f88c4u: goto label_2f88c4;
        case 0x2f88c8u: goto label_2f88c8;
        case 0x2f88ccu: goto label_2f88cc;
        case 0x2f88d0u: goto label_2f88d0;
        case 0x2f88d4u: goto label_2f88d4;
        case 0x2f88d8u: goto label_2f88d8;
        case 0x2f88dcu: goto label_2f88dc;
        case 0x2f88e0u: goto label_2f88e0;
        case 0x2f88e4u: goto label_2f88e4;
        case 0x2f88e8u: goto label_2f88e8;
        case 0x2f88ecu: goto label_2f88ec;
        case 0x2f88f0u: goto label_2f88f0;
        case 0x2f88f4u: goto label_2f88f4;
        case 0x2f88f8u: goto label_2f88f8;
        case 0x2f88fcu: goto label_2f88fc;
        case 0x2f8900u: goto label_2f8900;
        case 0x2f8904u: goto label_2f8904;
        case 0x2f8908u: goto label_2f8908;
        case 0x2f890cu: goto label_2f890c;
        case 0x2f8910u: goto label_2f8910;
        case 0x2f8914u: goto label_2f8914;
        case 0x2f8918u: goto label_2f8918;
        case 0x2f891cu: goto label_2f891c;
        case 0x2f8920u: goto label_2f8920;
        case 0x2f8924u: goto label_2f8924;
        case 0x2f8928u: goto label_2f8928;
        case 0x2f892cu: goto label_2f892c;
        case 0x2f8930u: goto label_2f8930;
        case 0x2f8934u: goto label_2f8934;
        case 0x2f8938u: goto label_2f8938;
        case 0x2f893cu: goto label_2f893c;
        case 0x2f8940u: goto label_2f8940;
        case 0x2f8944u: goto label_2f8944;
        case 0x2f8948u: goto label_2f8948;
        case 0x2f894cu: goto label_2f894c;
        case 0x2f8950u: goto label_2f8950;
        case 0x2f8954u: goto label_2f8954;
        case 0x2f8958u: goto label_2f8958;
        case 0x2f895cu: goto label_2f895c;
        case 0x2f8960u: goto label_2f8960;
        case 0x2f8964u: goto label_2f8964;
        case 0x2f8968u: goto label_2f8968;
        case 0x2f896cu: goto label_2f896c;
        case 0x2f8970u: goto label_2f8970;
        case 0x2f8974u: goto label_2f8974;
        case 0x2f8978u: goto label_2f8978;
        case 0x2f897cu: goto label_2f897c;
        case 0x2f8980u: goto label_2f8980;
        case 0x2f8984u: goto label_2f8984;
        case 0x2f8988u: goto label_2f8988;
        case 0x2f898cu: goto label_2f898c;
        case 0x2f8990u: goto label_2f8990;
        case 0x2f8994u: goto label_2f8994;
        case 0x2f8998u: goto label_2f8998;
        case 0x2f899cu: goto label_2f899c;
        case 0x2f89a0u: goto label_2f89a0;
        case 0x2f89a4u: goto label_2f89a4;
        case 0x2f89a8u: goto label_2f89a8;
        case 0x2f89acu: goto label_2f89ac;
        case 0x2f89b0u: goto label_2f89b0;
        case 0x2f89b4u: goto label_2f89b4;
        case 0x2f89b8u: goto label_2f89b8;
        case 0x2f89bcu: goto label_2f89bc;
        case 0x2f89c0u: goto label_2f89c0;
        case 0x2f89c4u: goto label_2f89c4;
        case 0x2f89c8u: goto label_2f89c8;
        case 0x2f89ccu: goto label_2f89cc;
        case 0x2f89d0u: goto label_2f89d0;
        case 0x2f89d4u: goto label_2f89d4;
        case 0x2f89d8u: goto label_2f89d8;
        case 0x2f89dcu: goto label_2f89dc;
        case 0x2f89e0u: goto label_2f89e0;
        case 0x2f89e4u: goto label_2f89e4;
        case 0x2f89e8u: goto label_2f89e8;
        case 0x2f89ecu: goto label_2f89ec;
        case 0x2f89f0u: goto label_2f89f0;
        case 0x2f89f4u: goto label_2f89f4;
        case 0x2f89f8u: goto label_2f89f8;
        case 0x2f89fcu: goto label_2f89fc;
        case 0x2f8a00u: goto label_2f8a00;
        case 0x2f8a04u: goto label_2f8a04;
        case 0x2f8a08u: goto label_2f8a08;
        case 0x2f8a0cu: goto label_2f8a0c;
        case 0x2f8a10u: goto label_2f8a10;
        case 0x2f8a14u: goto label_2f8a14;
        case 0x2f8a18u: goto label_2f8a18;
        case 0x2f8a1cu: goto label_2f8a1c;
        case 0x2f8a20u: goto label_2f8a20;
        case 0x2f8a24u: goto label_2f8a24;
        case 0x2f8a28u: goto label_2f8a28;
        case 0x2f8a2cu: goto label_2f8a2c;
        case 0x2f8a30u: goto label_2f8a30;
        case 0x2f8a34u: goto label_2f8a34;
        case 0x2f8a38u: goto label_2f8a38;
        case 0x2f8a3cu: goto label_2f8a3c;
        case 0x2f8a40u: goto label_2f8a40;
        case 0x2f8a44u: goto label_2f8a44;
        case 0x2f8a48u: goto label_2f8a48;
        case 0x2f8a4cu: goto label_2f8a4c;
        case 0x2f8a50u: goto label_2f8a50;
        case 0x2f8a54u: goto label_2f8a54;
        case 0x2f8a58u: goto label_2f8a58;
        case 0x2f8a5cu: goto label_2f8a5c;
        case 0x2f8a60u: goto label_2f8a60;
        case 0x2f8a64u: goto label_2f8a64;
        case 0x2f8a68u: goto label_2f8a68;
        case 0x2f8a6cu: goto label_2f8a6c;
        case 0x2f8a70u: goto label_2f8a70;
        case 0x2f8a74u: goto label_2f8a74;
        case 0x2f8a78u: goto label_2f8a78;
        case 0x2f8a7cu: goto label_2f8a7c;
        case 0x2f8a80u: goto label_2f8a80;
        case 0x2f8a84u: goto label_2f8a84;
        case 0x2f8a88u: goto label_2f8a88;
        case 0x2f8a8cu: goto label_2f8a8c;
        case 0x2f8a90u: goto label_2f8a90;
        case 0x2f8a94u: goto label_2f8a94;
        case 0x2f8a98u: goto label_2f8a98;
        case 0x2f8a9cu: goto label_2f8a9c;
        case 0x2f8aa0u: goto label_2f8aa0;
        case 0x2f8aa4u: goto label_2f8aa4;
        case 0x2f8aa8u: goto label_2f8aa8;
        case 0x2f8aacu: goto label_2f8aac;
        case 0x2f8ab0u: goto label_2f8ab0;
        case 0x2f8ab4u: goto label_2f8ab4;
        case 0x2f8ab8u: goto label_2f8ab8;
        case 0x2f8abcu: goto label_2f8abc;
        case 0x2f8ac0u: goto label_2f8ac0;
        case 0x2f8ac4u: goto label_2f8ac4;
        case 0x2f8ac8u: goto label_2f8ac8;
        case 0x2f8accu: goto label_2f8acc;
        case 0x2f8ad0u: goto label_2f8ad0;
        case 0x2f8ad4u: goto label_2f8ad4;
        case 0x2f8ad8u: goto label_2f8ad8;
        case 0x2f8adcu: goto label_2f8adc;
        case 0x2f8ae0u: goto label_2f8ae0;
        case 0x2f8ae4u: goto label_2f8ae4;
        case 0x2f8ae8u: goto label_2f8ae8;
        case 0x2f8aecu: goto label_2f8aec;
        case 0x2f8af0u: goto label_2f8af0;
        case 0x2f8af4u: goto label_2f8af4;
        case 0x2f8af8u: goto label_2f8af8;
        case 0x2f8afcu: goto label_2f8afc;
        case 0x2f8b00u: goto label_2f8b00;
        case 0x2f8b04u: goto label_2f8b04;
        case 0x2f8b08u: goto label_2f8b08;
        case 0x2f8b0cu: goto label_2f8b0c;
        case 0x2f8b10u: goto label_2f8b10;
        case 0x2f8b14u: goto label_2f8b14;
        case 0x2f8b18u: goto label_2f8b18;
        case 0x2f8b1cu: goto label_2f8b1c;
        case 0x2f8b20u: goto label_2f8b20;
        case 0x2f8b24u: goto label_2f8b24;
        case 0x2f8b28u: goto label_2f8b28;
        case 0x2f8b2cu: goto label_2f8b2c;
        case 0x2f8b30u: goto label_2f8b30;
        case 0x2f8b34u: goto label_2f8b34;
        case 0x2f8b38u: goto label_2f8b38;
        case 0x2f8b3cu: goto label_2f8b3c;
        case 0x2f8b40u: goto label_2f8b40;
        case 0x2f8b44u: goto label_2f8b44;
        case 0x2f8b48u: goto label_2f8b48;
        case 0x2f8b4cu: goto label_2f8b4c;
        case 0x2f8b50u: goto label_2f8b50;
        case 0x2f8b54u: goto label_2f8b54;
        case 0x2f8b58u: goto label_2f8b58;
        case 0x2f8b5cu: goto label_2f8b5c;
        case 0x2f8b60u: goto label_2f8b60;
        case 0x2f8b64u: goto label_2f8b64;
        case 0x2f8b68u: goto label_2f8b68;
        case 0x2f8b6cu: goto label_2f8b6c;
        case 0x2f8b70u: goto label_2f8b70;
        case 0x2f8b74u: goto label_2f8b74;
        case 0x2f8b78u: goto label_2f8b78;
        case 0x2f8b7cu: goto label_2f8b7c;
        case 0x2f8b80u: goto label_2f8b80;
        case 0x2f8b84u: goto label_2f8b84;
        case 0x2f8b88u: goto label_2f8b88;
        case 0x2f8b8cu: goto label_2f8b8c;
        case 0x2f8b90u: goto label_2f8b90;
        case 0x2f8b94u: goto label_2f8b94;
        case 0x2f8b98u: goto label_2f8b98;
        case 0x2f8b9cu: goto label_2f8b9c;
        case 0x2f8ba0u: goto label_2f8ba0;
        case 0x2f8ba4u: goto label_2f8ba4;
        case 0x2f8ba8u: goto label_2f8ba8;
        case 0x2f8bacu: goto label_2f8bac;
        case 0x2f8bb0u: goto label_2f8bb0;
        case 0x2f8bb4u: goto label_2f8bb4;
        case 0x2f8bb8u: goto label_2f8bb8;
        case 0x2f8bbcu: goto label_2f8bbc;
        case 0x2f8bc0u: goto label_2f8bc0;
        case 0x2f8bc4u: goto label_2f8bc4;
        case 0x2f8bc8u: goto label_2f8bc8;
        case 0x2f8bccu: goto label_2f8bcc;
        default: break;
    }

    ctx->pc = 0x2f7e00u;

label_2f7e00:
    // 0x2f7e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f7e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f7e04:
    // 0x2f7e04: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2f7e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_2f7e08:
    // 0x2f7e08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f7e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2f7e0c:
    // 0x2f7e0c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f7e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f7e10:
    // 0x2f7e10: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2f7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_2f7e14:
    // 0x2f7e14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7e18:
    // 0x2f7e18: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2f7e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2f7e1c:
    // 0x2f7e1c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x2f7e1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2f7e20:
    // 0x2f7e20: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
label_2f7e24:
    if (ctx->pc == 0x2F7E24u) {
        ctx->pc = 0x2F7E28u;
        goto label_2f7e28;
    }
    ctx->pc = 0x2F7E20u;
    {
        const bool branch_taken_0x2f7e20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7e20) {
            ctx->pc = 0x2F7E64u;
            goto label_2f7e64;
        }
    }
    ctx->pc = 0x2F7E28u;
label_2f7e28:
    // 0x2f7e28: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x2f7e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f7e2c:
    // 0x2f7e2c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f7e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f7e30:
    // 0x2f7e30: 0x24631ab0  addiu       $v1, $v1, 0x1AB0
    ctx->pc = 0x2f7e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6832));
label_2f7e34:
    // 0x2f7e34: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2f7e34u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7e38:
    // 0x2f7e38: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2f7e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_2f7e3c:
    // 0x2f7e3c: 0x24831af0  addiu       $v1, $a0, 0x1AF0
    ctx->pc = 0x2f7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6896));
label_2f7e40:
    // 0x2f7e40: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2f7e40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_2f7e44:
    // 0x2f7e44: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f7e48:
    // 0x2f7e48: 0x24631ad0  addiu       $v1, $v1, 0x1AD0
    ctx->pc = 0x2f7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6864));
label_2f7e4c:
    // 0x2f7e4c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2f7e4cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7e50:
    // 0x2f7e50: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f7e54:
    // 0x2f7e54: 0x24641b00  addiu       $a0, $v1, 0x1B00
    ctx->pc = 0x2f7e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6912));
label_2f7e58:
    // 0x2f7e58: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2f7e58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2f7e5c:
    // 0x2f7e5c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f7e60:
    if (ctx->pc == 0x2F7E60u) {
        ctx->pc = 0x2F7E64u;
        goto label_2f7e64;
    }
    ctx->pc = 0x2F7E5Cu;
    {
        const bool branch_taken_0x2f7e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7e5c) {
            ctx->pc = 0x2F7E98u;
            goto label_2f7e98;
        }
    }
    ctx->pc = 0x2F7E64u;
label_2f7e64:
    // 0x2f7e64: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2f7e64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f7e68:
    // 0x2f7e68: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x2f7e68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
label_2f7e6c:
    // 0x2f7e6c: 0x24e81aa0  addiu       $t0, $a3, 0x1AA0
    ctx->pc = 0x2f7e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 6816));
label_2f7e70:
    // 0x2f7e70: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x2f7e70u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_2f7e74:
    // 0x2f7e74: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f7e78:
    // 0x2f7e78: 0x24641af0  addiu       $a0, $v1, 0x1AF0
    ctx->pc = 0x2f7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6896));
label_2f7e7c:
    // 0x2f7e7c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2f7e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2f7e80:
    // 0x2f7e80: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2f7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_2f7e84:
    // 0x2f7e84: 0x24a31ac0  addiu       $v1, $a1, 0x1AC0
    ctx->pc = 0x2f7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6848));
label_2f7e88:
    // 0x2f7e88: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2f7e88u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7e8c:
    // 0x2f7e8c: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x2f7e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
label_2f7e90:
    // 0x2f7e90: 0x24e31b00  addiu       $v1, $a3, 0x1B00
    ctx->pc = 0x2f7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 6912));
label_2f7e94:
    // 0x2f7e94: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2f7e94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_2f7e98:
    // 0x2f7e98: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f7e98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7e9c:
    // 0x2f7e9c: 0x91230101  lbu         $v1, 0x101($t1)
    ctx->pc = 0x2f7e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 257)));
label_2f7ea0:
    // 0x2f7ea0: 0x14600333  bnez        $v1, . + 4 + (0x333 << 2)
label_2f7ea4:
    if (ctx->pc == 0x2F7EA4u) {
        ctx->pc = 0x2F7EA8u;
        goto label_2f7ea8;
    }
    ctx->pc = 0x2F7EA0u;
    {
        const bool branch_taken_0x2f7ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7ea0) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F7EA8u;
label_2f7ea8:
    // 0x2f7ea8: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x2f7ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7eac:
    // 0x2f7eac: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x2f7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_2f7eb0:
    // 0x2f7eb0: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x2f7eb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2f7eb4:
    // 0x2f7eb4: 0x1020032e  beqz        $at, . + 4 + (0x32E << 2)
label_2f7eb8:
    if (ctx->pc == 0x2F7EB8u) {
        ctx->pc = 0x2F7EBCu;
        goto label_2f7ebc;
    }
    ctx->pc = 0x2F7EB4u;
    {
        const bool branch_taken_0x2f7eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7eb4) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F7EBCu;
label_2f7ebc:
    // 0x2f7ebc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2f7ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_2f7ec0:
    // 0x2f7ec0: 0x24831b10  addiu       $v1, $a0, 0x1B10
    ctx->pc = 0x2f7ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6928));
label_2f7ec4:
    // 0x2f7ec4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2f7ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2f7ec8:
    // 0x2f7ec8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f7ecc:
    // 0x2f7ecc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7ed0:
    // 0x2f7ed0: 0x600008  jr          $v1
label_2f7ed4:
    if (ctx->pc == 0x2F7ED4u) {
        ctx->pc = 0x2F7ED8u;
        goto label_2f7ed8;
    }
    ctx->pc = 0x2F7ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7ED0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F7ED8u;
label_2f7ed8:
    // 0x2f7ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7edc:
    // 0x2f7edc: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x2f7edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
label_2f7ee0:
    // 0x2f7ee0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2f7ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2f7ee4:
    // 0x2f7ee4: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x2f7ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f7ee8:
    // 0x2f7ee8: 0x10a7005b  beq         $a1, $a3, . + 4 + (0x5B << 2)
label_2f7eec:
    if (ctx->pc == 0x2F7EECu) {
        ctx->pc = 0x2F7EF0u;
        goto label_2f7ef0;
    }
    ctx->pc = 0x2F7EE8u;
    {
        const bool branch_taken_0x2f7ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2f7ee8) {
            ctx->pc = 0x2F8058u;
            goto label_2f8058;
        }
    }
    ctx->pc = 0x2F7EF0u;
label_2f7ef0:
    // 0x2f7ef0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f7ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7ef4:
    // 0x2f7ef4: 0x10a9002d  beq         $a1, $t1, . + 4 + (0x2D << 2)
label_2f7ef8:
    if (ctx->pc == 0x2F7EF8u) {
        ctx->pc = 0x2F7EFCu;
        goto label_2f7efc;
    }
    ctx->pc = 0x2F7EF4u;
    {
        const bool branch_taken_0x2f7ef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x2f7ef4) {
            ctx->pc = 0x2F7FACu;
            goto label_2f7fac;
        }
    }
    ctx->pc = 0x2F7EFCu;
label_2f7efc:
    // 0x2f7efc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2f7f00:
    if (ctx->pc == 0x2F7F00u) {
        ctx->pc = 0x2F7F04u;
        goto label_2f7f04;
    }
    ctx->pc = 0x2F7EFCu;
    {
        const bool branch_taken_0x2f7efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7efc) {
            ctx->pc = 0x2F7F0Cu;
            goto label_2f7f0c;
        }
    }
    ctx->pc = 0x2F7F04u;
label_2f7f04:
    // 0x2f7f04: 0x1000031a  b           . + 4 + (0x31A << 2)
label_2f7f08:
    if (ctx->pc == 0x2F7F08u) {
        ctx->pc = 0x2F7F0Cu;
        goto label_2f7f0c;
    }
    ctx->pc = 0x2F7F04u;
    {
        const bool branch_taken_0x2f7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7f04) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F7F0Cu;
label_2f7f0c:
    // 0x2f7f0c: 0xc067648  jal         func_19D920
label_2f7f10:
    if (ctx->pc == 0x2F7F10u) {
        ctx->pc = 0x2F7F14u;
        goto label_2f7f14;
    }
    ctx->pc = 0x2F7F0Cu;
    SET_GPR_U32(ctx, 31, 0x2F7F14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7F0Cu, 0x2F7F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F14u;
label_2f7f14:
    // 0x2f7f14: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2f7f18:
    // 0x2f7f18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7f1c:
    // 0x2f7f1c: 0x0  nop
    ctx->pc = 0x2f7f1cu;
    // NOP
label_2f7f20:
    // 0x2f7f20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7f20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7f24:
    // 0x2f7f24: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_2f7f28:
    // 0x2f7f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f7f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7f2c:
    // 0x2f7f2c: 0x0  nop
    ctx->pc = 0x2f7f2cu;
    // NOP
label_2f7f30:
    // 0x2f7f30: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7f30u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f7f34:
    // 0x2f7f34: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f7f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_2f7f38:
    // 0x2f7f38: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f7f38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f7f3c:
    // 0x2f7f3c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f7f40:
    // 0x2f7f40: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f7f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7f44:
    // 0x2f7f44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f7f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7f48:
    // 0x2f7f48: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2f7f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2f7f4c:
    // 0x2f7f4c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2f7f50:
    // 0x2f7f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f7f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f7f54:
    // 0x2f7f54: 0x8cc900c4  lw          $t1, 0xC4($a2)
    ctx->pc = 0x2f7f54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
label_2f7f58:
    // 0x2f7f58: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2f7f58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2f7f5c:
    // 0x2f7f5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f7f60:
    // 0x2f7f60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f7f60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f7f64:
    // 0x2f7f64: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x2f7f64u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
label_2f7f68:
    // 0x2f7f68: 0x25461a80  addiu       $a2, $t2, 0x1A80
    ctx->pc = 0x2f7f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 6784));
label_2f7f6c:
    // 0x2f7f6c: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f7f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2f7f70:
    // 0x2f7f70: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f7f74:
    // 0x2f7f74: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f7f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f7f78:
    // 0x2f7f78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f7f7c:
    // 0x2f7f7c: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f7f7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f7f80:
    // 0x2f7f80: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7f80u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f7f84:
    // 0x2f7f84: 0xc0c8cc0  jal         func_323300
label_2f7f88:
    if (ctx->pc == 0x2F7F88u) {
        ctx->pc = 0x2F7F8Cu;
        goto label_2f7f8c;
    }
    ctx->pc = 0x2F7F84u;
    SET_GPR_U32(ctx, 31, 0x2F7F8Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7F84u, 0x2F7F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F8Cu;
label_2f7f8c:
    // 0x2f7f8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7f90:
    // 0x2f7f90: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2f7f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7f94:
    // 0x2f7f94: 0xa0a40100  sb          $a0, 0x100($a1)
    ctx->pc = 0x2f7f94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 256), (uint8_t)GPR_U32(ctx, 4));
label_2f7f98:
    // 0x2f7f98: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f7f9c:
    // 0x2f7f9c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x2f7f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7fa0:
    // 0x2f7fa0: 0xa1030101  sb          $v1, 0x101($t0)
    ctx->pc = 0x2f7fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 257), (uint8_t)GPR_U32(ctx, 3));
label_2f7fa4:
    // 0x2f7fa4: 0x100002f2  b           . + 4 + (0x2F2 << 2)
label_2f7fa8:
    if (ctx->pc == 0x2F7FA8u) {
        ctx->pc = 0x2F7FACu;
        goto label_2f7fac;
    }
    ctx->pc = 0x2F7FA4u;
    {
        const bool branch_taken_0x2f7fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7fa4) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F7FACu;
label_2f7fac:
    // 0x2f7fac: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f7facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2f7fb0:
    // 0x2f7fb0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f7fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f7fb4:
    // 0x2f7fb4: 0xc067648  jal         func_19D920
label_2f7fb8:
    if (ctx->pc == 0x2F7FB8u) {
        ctx->pc = 0x2F7FBCu;
        goto label_2f7fbc;
    }
    ctx->pc = 0x2F7FB4u;
    SET_GPR_U32(ctx, 31, 0x2F7FBCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7FB4u, 0x2F7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7FBCu;
label_2f7fbc:
    // 0x2f7fbc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2f7fc0:
    // 0x2f7fc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7fc4:
    // 0x2f7fc4: 0x0  nop
    ctx->pc = 0x2f7fc4u;
    // NOP
label_2f7fc8:
    // 0x2f7fc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f7fcc:
    // 0x2f7fcc: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
label_2f7fd0:
    // 0x2f7fd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f7fd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7fd4:
    // 0x2f7fd4: 0x0  nop
    ctx->pc = 0x2f7fd4u;
    // NOP
label_2f7fd8:
    // 0x2f7fd8: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7fd8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f7fdc:
    // 0x2f7fdc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f7fe0:
    // 0x2f7fe0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7fe4:
    // 0x2f7fe4: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x2f7fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2f7fe8:
    // 0x2f7fe8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f7fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7fec:
    // 0x2f7fec: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2f7ff0:
    // 0x2f7ff0: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x2f7ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
label_2f7ff4:
    // 0x2f7ff4: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x2f7ff4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f7ff8:
    // 0x2f7ff8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x2f7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_2f7ffc:
    // 0x2f7ffc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f7ffcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f8000:
    // 0x2f8000: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2f8000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2f8004:
    // 0x2f8004: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x2f8004u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
label_2f8008:
    // 0x2f8008: 0x25461a80  addiu       $a2, $t2, 0x1A80
    ctx->pc = 0x2f8008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 6784));
label_2f800c:
    // 0x2f800c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f800cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f8010:
    // 0x2f8010: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x2f8010u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2f8014:
    // 0x2f8014: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8018:
    // 0x2f8018: 0x24691a90  addiu       $t1, $v1, 0x1A90
    ctx->pc = 0x2f8018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
label_2f801c:
    // 0x2f801c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f801cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f8020:
    // 0x2f8020: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8024:
    // 0x2f8024: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f8024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f8028:
    // 0x2f8028: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8028u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f802c:
    // 0x2f802c: 0xc0c8cc0  jal         func_323300
label_2f8030:
    if (ctx->pc == 0x2F8030u) {
        ctx->pc = 0x2F8034u;
        goto label_2f8034;
    }
    ctx->pc = 0x2F802Cu;
    SET_GPR_U32(ctx, 31, 0x2F8034u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F802Cu, 0x2F8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8034u;
label_2f8034:
    // 0x2f8034: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f8034u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f8038:
    // 0x2f8038: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f8038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f803c:
    // 0x2f803c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8040:
    // 0x2f8040: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f8040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
label_2f8044:
    // 0x2f8044: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f8044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f8048:
    // 0x2f8048: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f804c:
    // 0x2f804c: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f804cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
label_2f8050:
    // 0x2f8050: 0x100002c7  b           . + 4 + (0x2C7 << 2)
label_2f8054:
    if (ctx->pc == 0x2F8054u) {
        ctx->pc = 0x2F8058u;
        goto label_2f8058;
    }
    ctx->pc = 0x2F8050u;
    {
        const bool branch_taken_0x2f8050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8050) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8058u;
label_2f8058:
    // 0x2f8058: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2f8058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f805c:
    // 0x2f805c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f8060:
    // 0x2f8060: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f8060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_2f8064:
    // 0x2f8064: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8068:
    // 0x2f8068: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f8068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2f806c:
    // 0x2f806c: 0x100002c0  b           . + 4 + (0x2C0 << 2)
label_2f8070:
    if (ctx->pc == 0x2F8070u) {
        ctx->pc = 0x2F8074u;
        goto label_2f8074;
    }
    ctx->pc = 0x2F806Cu;
    {
        const bool branch_taken_0x2f806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f806c) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8074u;
label_2f8074:
    // 0x2f8074: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8078:
    // 0x2f8078: 0x90640100  lbu         $a0, 0x100($v1)
    ctx->pc = 0x2f8078u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
label_2f807c:
    // 0x2f807c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x2f807cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2f8080:
    // 0x2f8080: 0x24080063  addiu       $t0, $zero, 0x63
    ctx->pc = 0x2f8080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f8084:
    // 0x2f8084: 0x10e8008a  beq         $a3, $t0, . + 4 + (0x8A << 2)
label_2f8088:
    if (ctx->pc == 0x2F8088u) {
        ctx->pc = 0x2F808Cu;
        goto label_2f808c;
    }
    ctx->pc = 0x2F8084u;
    {
        const bool branch_taken_0x2f8084 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x2f8084) {
            ctx->pc = 0x2F82B0u;
            goto label_2f82b0;
        }
    }
    ctx->pc = 0x2F808Cu;
label_2f808c:
    // 0x2f808c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f808cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8090:
    // 0x2f8090: 0x10e3005c  beq         $a3, $v1, . + 4 + (0x5C << 2)
label_2f8094:
    if (ctx->pc == 0x2F8094u) {
        ctx->pc = 0x2F8098u;
        goto label_2f8098;
    }
    ctx->pc = 0x2F8090u;
    {
        const bool branch_taken_0x2f8090 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8090) {
            ctx->pc = 0x2F8204u;
            goto label_2f8204;
        }
    }
    ctx->pc = 0x2F8098u;
label_2f8098:
    // 0x2f8098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f809c:
    // 0x2f809c: 0x10e3002f  beq         $a3, $v1, . + 4 + (0x2F << 2)
label_2f80a0:
    if (ctx->pc == 0x2F80A0u) {
        ctx->pc = 0x2F80A4u;
        goto label_2f80a4;
    }
    ctx->pc = 0x2F809Cu;
    {
        const bool branch_taken_0x2f809c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f809c) {
            ctx->pc = 0x2F815Cu;
            goto label_2f815c;
        }
    }
    ctx->pc = 0x2F80A4u;
label_2f80a4:
    // 0x2f80a4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_2f80a8:
    if (ctx->pc == 0x2F80A8u) {
        ctx->pc = 0x2F80ACu;
        goto label_2f80ac;
    }
    ctx->pc = 0x2F80A4u;
    {
        const bool branch_taken_0x2f80a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f80a4) {
            ctx->pc = 0x2F80B4u;
            goto label_2f80b4;
        }
    }
    ctx->pc = 0x2F80ACu;
label_2f80ac:
    // 0x2f80ac: 0x100002b0  b           . + 4 + (0x2B0 << 2)
label_2f80b0:
    if (ctx->pc == 0x2F80B0u) {
        ctx->pc = 0x2F80B4u;
        goto label_2f80b4;
    }
    ctx->pc = 0x2F80ACu;
    {
        const bool branch_taken_0x2f80ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f80ac) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F80B4u;
label_2f80b4:
    // 0x2f80b4: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2f80b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_2f80b8:
    // 0x2f80b8: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2f80b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f80bc:
    // 0x2f80bc: 0xc067648  jal         func_19D920
label_2f80c0:
    if (ctx->pc == 0x2F80C0u) {
        ctx->pc = 0x2F80C4u;
        goto label_2f80c4;
    }
    ctx->pc = 0x2F80BCu;
    SET_GPR_U32(ctx, 31, 0x2F80C4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F80BCu, 0x2F80C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F80C4u;
label_2f80c4:
    // 0x2f80c4: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x2f80c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
label_2f80c8:
    // 0x2f80c8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f80c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f80cc:
    // 0x2f80cc: 0x0  nop
    ctx->pc = 0x2f80ccu;
    // NOP
label_2f80d0:
    // 0x2f80d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f80d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f80d4:
    // 0x2f80d4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f80d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_2f80d8:
    // 0x2f80d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f80d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f80dc:
    // 0x2f80dc: 0x0  nop
    ctx->pc = 0x2f80dcu;
    // NOP
label_2f80e0:
    // 0x2f80e0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f80e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f80e4:
    // 0x2f80e4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f80e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f80e8:
    // 0x2f80e8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f80e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f80ec:
    // 0x2f80ec: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f80ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f80f0:
    // 0x2f80f0: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2f80f4:
    // 0x2f80f4: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x2f80f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
label_2f80f8:
    // 0x2f80f8: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x2f80f8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f80fc:
    // 0x2f80fc: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x2f80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
label_2f8100:
    // 0x2f8100: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f8100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f8104:
    // 0x2f8104: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2f8104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f8108:
    // 0x2f8108: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2f8108u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2f810c:
    // 0x2f810c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f8110:
    // 0x2f8110: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f8110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f8114:
    // 0x2f8114: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f8114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f8118:
    // 0x2f8118: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x2f8118u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2f811c:
    // 0x2f811c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8120:
    // 0x2f8120: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f8120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f8124:
    // 0x2f8124: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8124u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f8128:
    // 0x2f8128: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f812c:
    // 0x2f812c: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f812cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f8130:
    // 0x2f8130: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8130u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f8134:
    // 0x2f8134: 0xc0c8cc0  jal         func_323300
label_2f8138:
    if (ctx->pc == 0x2F8138u) {
        ctx->pc = 0x2F813Cu;
        goto label_2f813c;
    }
    ctx->pc = 0x2F8134u;
    SET_GPR_U32(ctx, 31, 0x2F813Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8134u, 0x2F813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F813Cu;
label_2f813c:
    // 0x2f813c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8140:
    // 0x2f8140: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8144:
    // 0x2f8144: 0xa0e50100  sb          $a1, 0x100($a3)
    ctx->pc = 0x2f8144u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 5));
label_2f8148:
    // 0x2f8148: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2f8148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f814c:
    // 0x2f814c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8150:
    // 0x2f8150: 0xa0680101  sb          $t0, 0x101($v1)
    ctx->pc = 0x2f8150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 8));
label_2f8154:
    // 0x2f8154: 0x10000286  b           . + 4 + (0x286 << 2)
label_2f8158:
    if (ctx->pc == 0x2F8158u) {
        ctx->pc = 0x2F815Cu;
        goto label_2f815c;
    }
    ctx->pc = 0x2F8154u;
    {
        const bool branch_taken_0x2f8154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8154) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F815Cu;
label_2f815c:
    // 0x2f815c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f815cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2f8160:
    // 0x2f8160: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f8160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f8164:
    // 0x2f8164: 0xc067648  jal         func_19D920
label_2f8168:
    if (ctx->pc == 0x2F8168u) {
        ctx->pc = 0x2F816Cu;
        goto label_2f816c;
    }
    ctx->pc = 0x2F8164u;
    SET_GPR_U32(ctx, 31, 0x2F816Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8164u, 0x2F816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F816Cu;
label_2f816c:
    // 0x2f816c: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f816cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_2f8170:
    // 0x2f8170: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f8170u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8174:
    // 0x2f8174: 0x0  nop
    ctx->pc = 0x2f8174u;
    // NOP
label_2f8178:
    // 0x2f8178: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f817c:
    // 0x2f817c: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_2f8180:
    // 0x2f8180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8184:
    // 0x2f8184: 0x0  nop
    ctx->pc = 0x2f8184u;
    // NOP
label_2f8188:
    // 0x2f8188: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8188u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f818c:
    // 0x2f818c: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2f818cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_2f8190:
    // 0x2f8190: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2f8190u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f8194:
    // 0x2f8194: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f8198:
    // 0x2f8198: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f819c:
    // 0x2f819c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2f819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2f81a0:
    // 0x2f81a0: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f81a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f81a4:
    // 0x2f81a4: 0x26030009  addiu       $v1, $s0, 0x9
    ctx->pc = 0x2f81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f81a8:
    // 0x2f81a8: 0x8cea00c4  lw          $t2, 0xC4($a3)
    ctx->pc = 0x2f81a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f81ac:
    // 0x2f81ac: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2f81acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2f81b0:
    // 0x2f81b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f81b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f81b4:
    // 0x2f81b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f81b8:
    // 0x2f81b8: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f81b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f81bc:
    // 0x2f81bc: 0x8d2700c4  lw          $a3, 0xC4($t1)
    ctx->pc = 0x2f81bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
label_2f81c0:
    // 0x2f81c0: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x2f81c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2f81c4:
    // 0x2f81c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f81c8:
    // 0x2f81c8: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f81c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f81cc:
    // 0x2f81cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f81ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f81d0:
    // 0x2f81d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f81d4:
    // 0x2f81d4: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f81d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f81d8:
    // 0x2f81d8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f81d8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f81dc:
    // 0x2f81dc: 0xc0c8cc0  jal         func_323300
label_2f81e0:
    if (ctx->pc == 0x2F81E0u) {
        ctx->pc = 0x2F81E4u;
        goto label_2f81e4;
    }
    ctx->pc = 0x2F81DCu;
    SET_GPR_U32(ctx, 31, 0x2F81E4u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F81DCu, 0x2F81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F81E4u;
label_2f81e4:
    // 0x2f81e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f81e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f81e8:
    // 0x2f81e8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f81e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f81ec:
    // 0x2f81ec: 0xa0e50100  sb          $a1, 0x100($a3)
    ctx->pc = 0x2f81ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 5));
label_2f81f0:
    // 0x2f81f0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2f81f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f81f4:
    // 0x2f81f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f81f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f81f8:
    // 0x2f81f8: 0xa0680101  sb          $t0, 0x101($v1)
    ctx->pc = 0x2f81f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 8));
label_2f81fc:
    // 0x2f81fc: 0x1000025c  b           . + 4 + (0x25C << 2)
label_2f8200:
    if (ctx->pc == 0x2F8200u) {
        ctx->pc = 0x2F8204u;
        goto label_2f8204;
    }
    ctx->pc = 0x2F81FCu;
    {
        const bool branch_taken_0x2f81fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f81fc) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8204u;
label_2f8204:
    // 0x2f8204: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f8204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2f8208:
    // 0x2f8208: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f8208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f820c:
    // 0x2f820c: 0xc067648  jal         func_19D920
label_2f8210:
    if (ctx->pc == 0x2F8210u) {
        ctx->pc = 0x2F8214u;
        goto label_2f8214;
    }
    ctx->pc = 0x2F820Cu;
    SET_GPR_U32(ctx, 31, 0x2F8214u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F820Cu, 0x2F8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8214u;
label_2f8214:
    // 0x2f8214: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f8214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_2f8218:
    // 0x2f8218: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f8218u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f821c:
    // 0x2f821c: 0x0  nop
    ctx->pc = 0x2f821cu;
    // NOP
label_2f8220:
    // 0x2f8220: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f8224:
    // 0x2f8224: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f8224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_2f8228:
    // 0x2f8228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f822c:
    // 0x2f822c: 0x0  nop
    ctx->pc = 0x2f822cu;
    // NOP
label_2f8230:
    // 0x2f8230: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8230u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8234:
    // 0x2f8234: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2f8234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_2f8238:
    // 0x2f8238: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2f8238u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f823c:
    // 0x2f823c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f8240:
    // 0x2f8240: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8244:
    // 0x2f8244: 0x26020009  addiu       $v0, $s0, 0x9
    ctx->pc = 0x2f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f8248:
    // 0x2f8248: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f8248u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f824c:
    // 0x2f824c: 0x26030009  addiu       $v1, $s0, 0x9
    ctx->pc = 0x2f824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f8250:
    // 0x2f8250: 0x8cea00c4  lw          $t2, 0xC4($a3)
    ctx->pc = 0x2f8250u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f8254:
    // 0x2f8254: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2f8254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2f8258:
    // 0x2f8258: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f8258u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f825c:
    // 0x2f825c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f8260:
    // 0x2f8260: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f8260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f8264:
    // 0x2f8264: 0x8d2700c4  lw          $a3, 0xC4($t1)
    ctx->pc = 0x2f8264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
label_2f8268:
    // 0x2f8268: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x2f8268u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2f826c:
    // 0x2f826c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f826cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8270:
    // 0x2f8270: 0x24691a90  addiu       $t1, $v1, 0x1A90
    ctx->pc = 0x2f8270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
label_2f8274:
    // 0x2f8274: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8274u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f8278:
    // 0x2f8278: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f827c:
    // 0x2f827c: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f827cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f8280:
    // 0x2f8280: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8280u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f8284:
    // 0x2f8284: 0xc0c8cc0  jal         func_323300
label_2f8288:
    if (ctx->pc == 0x2F8288u) {
        ctx->pc = 0x2F828Cu;
        goto label_2f828c;
    }
    ctx->pc = 0x2F8284u;
    SET_GPR_U32(ctx, 31, 0x2F828Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8284u, 0x2F828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F828Cu;
label_2f828c:
    // 0x2f828c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f828cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f8290:
    // 0x2f8290: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f8290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f8294:
    // 0x2f8294: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8298:
    // 0x2f8298: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f8298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
label_2f829c:
    // 0x2f829c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f829cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f82a0:
    // 0x2f82a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f82a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f82a4:
    // 0x2f82a4: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f82a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
label_2f82a8:
    // 0x2f82a8: 0x10000231  b           . + 4 + (0x231 << 2)
label_2f82ac:
    if (ctx->pc == 0x2F82ACu) {
        ctx->pc = 0x2F82B0u;
        goto label_2f82b0;
    }
    ctx->pc = 0x2F82A8u;
    {
        const bool branch_taken_0x2f82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f82a8) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F82B0u;
label_2f82b0:
    // 0x2f82b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f82b4:
    // 0x2f82b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f82b8:
    // 0x2f82b8: 0x38870010  xori        $a3, $a0, 0x10
    ctx->pc = 0x2f82b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
label_2f82bc:
    // 0x2f82bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f82c0:
    // 0x2f82c0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2f82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_2f82c4:
    // 0x2f82c4: 0x1000022a  b           . + 4 + (0x22A << 2)
label_2f82c8:
    if (ctx->pc == 0x2F82C8u) {
        ctx->pc = 0x2F82CCu;
        goto label_2f82cc;
    }
    ctx->pc = 0x2F82C4u;
    {
        const bool branch_taken_0x2f82c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f82c4) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F82CCu;
label_2f82cc:
    // 0x2f82cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f82d0:
    // 0x2f82d0: 0x90640100  lbu         $a0, 0x100($v1)
    ctx->pc = 0x2f82d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
label_2f82d4:
    // 0x2f82d4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2f82d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2f82d8:
    // 0x2f82d8: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2f82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f82dc:
    // 0x2f82dc: 0x10a30082  beq         $a1, $v1, . + 4 + (0x82 << 2)
label_2f82e0:
    if (ctx->pc == 0x2F82E0u) {
        ctx->pc = 0x2F82E4u;
        goto label_2f82e4;
    }
    ctx->pc = 0x2F82DCu;
    {
        const bool branch_taken_0x2f82dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f82dc) {
            ctx->pc = 0x2F84E8u;
            goto label_2f84e8;
        }
    }
    ctx->pc = 0x2F82E4u;
label_2f82e4:
    // 0x2f82e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f82e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f82e8:
    // 0x2f82e8: 0x10a60057  beq         $a1, $a2, . + 4 + (0x57 << 2)
label_2f82ec:
    if (ctx->pc == 0x2F82ECu) {
        ctx->pc = 0x2F82F0u;
        goto label_2f82f0;
    }
    ctx->pc = 0x2F82E8u;
    {
        const bool branch_taken_0x2f82e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2f82e8) {
            ctx->pc = 0x2F8448u;
            goto label_2f8448;
        }
    }
    ctx->pc = 0x2F82F0u;
label_2f82f0:
    // 0x2f82f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f82f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f82f4:
    // 0x2f82f4: 0x10a7002c  beq         $a1, $a3, . + 4 + (0x2C << 2)
label_2f82f8:
    if (ctx->pc == 0x2F82F8u) {
        ctx->pc = 0x2F82FCu;
        goto label_2f82fc;
    }
    ctx->pc = 0x2F82F4u;
    {
        const bool branch_taken_0x2f82f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2f82f4) {
            ctx->pc = 0x2F83A8u;
            goto label_2f83a8;
        }
    }
    ctx->pc = 0x2F82FCu;
label_2f82fc:
    // 0x2f82fc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2f8300:
    if (ctx->pc == 0x2F8300u) {
        ctx->pc = 0x2F8304u;
        goto label_2f8304;
    }
    ctx->pc = 0x2F82FCu;
    {
        const bool branch_taken_0x2f82fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f82fc) {
            ctx->pc = 0x2F830Cu;
            goto label_2f830c;
        }
    }
    ctx->pc = 0x2F8304u;
label_2f8304:
    // 0x2f8304: 0x1000021a  b           . + 4 + (0x21A << 2)
label_2f8308:
    if (ctx->pc == 0x2F8308u) {
        ctx->pc = 0x2F830Cu;
        goto label_2f830c;
    }
    ctx->pc = 0x2F8304u;
    {
        const bool branch_taken_0x2f8304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8304) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F830Cu;
label_2f830c:
    // 0x2f830c: 0x3c0841f0  lui         $t0, 0x41F0
    ctx->pc = 0x2f830cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16880 << 16));
label_2f8310:
    // 0x2f8310: 0x4488a000  mtc1        $t0, $f20
    ctx->pc = 0x2f8310u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f8314:
    // 0x2f8314: 0xc067648  jal         func_19D920
label_2f8318:
    if (ctx->pc == 0x2F8318u) {
        ctx->pc = 0x2F831Cu;
        goto label_2f831c;
    }
    ctx->pc = 0x2F8314u;
    SET_GPR_U32(ctx, 31, 0x2F831Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8314u, 0x2F831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F831Cu;
label_2f831c:
    // 0x2f831c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2f8320:
    // 0x2f8320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8324:
    // 0x2f8324: 0x0  nop
    ctx->pc = 0x2f8324u;
    // NOP
label_2f8328:
    // 0x2f8328: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f832c:
    // 0x2f832c: 0x3c094234  lui         $t1, 0x4234
    ctx->pc = 0x2f832cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16948 << 16));
label_2f8330:
    // 0x2f8330: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f8330u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8334:
    // 0x2f8334: 0x0  nop
    ctx->pc = 0x2f8334u;
    // NOP
label_2f8338:
    // 0x2f8338: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8338u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f833c:
    // 0x2f833c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f8340:
    // 0x2f8340: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8344:
    // 0x2f8344: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x2f8344u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8348:
    // 0x2f8348: 0x26080009  addiu       $t0, $s0, 0x9
    ctx->pc = 0x2f8348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f834c:
    // 0x2f834c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f834cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f8350:
    // 0x2f8350: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f8354:
    // 0x2f8354: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x2f8354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_2f8358:
    // 0x2f8358: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f8358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f835c:
    // 0x2f835c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f835cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8360:
    // 0x2f8360: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f8360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f8364:
    // 0x2f8364: 0x8d4700c4  lw          $a3, 0xC4($t2)
    ctx->pc = 0x2f8364u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 196)));
label_2f8368:
    // 0x2f8368: 0x3c0c003b  lui         $t4, 0x3B
    ctx->pc = 0x2f8368u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)59 << 16));
label_2f836c:
    // 0x2f836c: 0x25891a80  addiu       $t1, $t4, 0x1A80
    ctx->pc = 0x2f836cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 6784));
label_2f8370:
    // 0x2f8370: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f8374:
    // 0x2f8374: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x2f8374u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
label_2f8378:
    // 0x2f8378: 0x256a1a80  addiu       $t2, $t3, 0x1A80
    ctx->pc = 0x2f8378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 6784));
label_2f837c:
    // 0x2f837c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f837cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f8380:
    // 0x2f8380: 0xc0c8cc0  jal         func_323300
label_2f8384:
    if (ctx->pc == 0x2F8384u) {
        ctx->pc = 0x2F8388u;
        goto label_2f8388;
    }
    ctx->pc = 0x2F8380u;
    SET_GPR_U32(ctx, 31, 0x2F8388u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8380u, 0x2F8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8388u;
label_2f8388:
    // 0x2f8388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f838c:
    // 0x2f838c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f838cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8390:
    // 0x2f8390: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f8390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
label_2f8394:
    // 0x2f8394: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f8398:
    // 0x2f8398: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f8398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f839c:
    // 0x2f839c: 0xa0c30101  sb          $v1, 0x101($a2)
    ctx->pc = 0x2f839cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 257), (uint8_t)GPR_U32(ctx, 3));
label_2f83a0:
    // 0x2f83a0: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_2f83a4:
    if (ctx->pc == 0x2F83A4u) {
        ctx->pc = 0x2F83A8u;
        goto label_2f83a8;
    }
    ctx->pc = 0x2F83A0u;
    {
        const bool branch_taken_0x2f83a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f83a0) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F83A8u;
label_2f83a8:
    // 0x2f83a8: 0x3c0741f0  lui         $a3, 0x41F0
    ctx->pc = 0x2f83a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16880 << 16));
label_2f83ac:
    // 0x2f83ac: 0x4487a000  mtc1        $a3, $f20
    ctx->pc = 0x2f83acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f83b0:
    // 0x2f83b0: 0xc067648  jal         func_19D920
label_2f83b4:
    if (ctx->pc == 0x2F83B4u) {
        ctx->pc = 0x2F83B8u;
        goto label_2f83b8;
    }
    ctx->pc = 0x2F83B0u;
    SET_GPR_U32(ctx, 31, 0x2F83B8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F83B0u, 0x2F83B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F83B8u;
label_2f83b8:
    // 0x2f83b8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2f83bc:
    // 0x2f83bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f83bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f83c0:
    // 0x2f83c0: 0x0  nop
    ctx->pc = 0x2f83c0u;
    // NOP
label_2f83c4:
    // 0x2f83c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f83c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f83c8:
    // 0x2f83c8: 0x3c094234  lui         $t1, 0x4234
    ctx->pc = 0x2f83c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16948 << 16));
label_2f83cc:
    // 0x2f83cc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f83ccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f83d0:
    // 0x2f83d0: 0x0  nop
    ctx->pc = 0x2f83d0u;
    // NOP
label_2f83d4:
    // 0x2f83d4: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f83d4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f83d8:
    // 0x2f83d8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f83d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f83dc:
    // 0x2f83dc: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x2f83dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f83e0:
    // 0x2f83e0: 0x260a0009  addiu       $t2, $s0, 0x9
    ctx->pc = 0x2f83e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f83e4:
    // 0x2f83e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f83e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f83e8:
    // 0x2f83e8: 0x2608000a  addiu       $t0, $s0, 0xA
    ctx->pc = 0x2f83e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_2f83ec:
    // 0x2f83ec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f83f0:
    // 0x2f83f0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f83f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f83f4:
    // 0x2f83f4: 0x8d6400c4  lw          $a0, 0xC4($t3)
    ctx->pc = 0x2f83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 196)));
label_2f83f8:
    // 0x2f83f8: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2f83f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2f83fc:
    // 0x2f83fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8400:
    // 0x2f8400: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f8400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f8404:
    // 0x2f8404: 0x8c4700c4  lw          $a3, 0xC4($v0)
    ctx->pc = 0x2f8404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_2f8408:
    // 0x2f8408: 0x3c0c003b  lui         $t4, 0x3B
    ctx->pc = 0x2f8408u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)59 << 16));
label_2f840c:
    // 0x2f840c: 0x25891a80  addiu       $t1, $t4, 0x1A80
    ctx->pc = 0x2f840cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 6784));
label_2f8410:
    // 0x2f8410: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8410u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f8414:
    // 0x2f8414: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x2f8414u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
label_2f8418:
    // 0x2f8418: 0x256a1a80  addiu       $t2, $t3, 0x1A80
    ctx->pc = 0x2f8418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 6784));
label_2f841c:
    // 0x2f841c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f841cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f8420:
    // 0x2f8420: 0xc0c8cc0  jal         func_323300
label_2f8424:
    if (ctx->pc == 0x2F8424u) {
        ctx->pc = 0x2F8428u;
        goto label_2f8428;
    }
    ctx->pc = 0x2F8420u;
    SET_GPR_U32(ctx, 31, 0x2F8428u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8420u, 0x2F8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8428u;
label_2f8428:
    // 0x2f8428: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f8428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f842c:
    // 0x2f842c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8430:
    // 0x2f8430: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f8430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
label_2f8434:
    // 0x2f8434: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f8438:
    // 0x2f8438: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f8438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f843c:
    // 0x2f843c: 0xa0c30101  sb          $v1, 0x101($a2)
    ctx->pc = 0x2f843cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 257), (uint8_t)GPR_U32(ctx, 3));
label_2f8440:
    // 0x2f8440: 0x100001cb  b           . + 4 + (0x1CB << 2)
label_2f8444:
    if (ctx->pc == 0x2F8444u) {
        ctx->pc = 0x2F8448u;
        goto label_2f8448;
    }
    ctx->pc = 0x2F8440u;
    {
        const bool branch_taken_0x2f8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8440) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8448u;
label_2f8448:
    // 0x2f8448: 0xc067648  jal         func_19D920
label_2f844c:
    if (ctx->pc == 0x2F844Cu) {
        ctx->pc = 0x2F8450u;
        goto label_2f8450;
    }
    ctx->pc = 0x2F8448u;
    SET_GPR_U32(ctx, 31, 0x2F8450u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8448u, 0x2F8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8450u;
label_2f8450:
    // 0x2f8450: 0x3c0740a0  lui         $a3, 0x40A0
    ctx->pc = 0x2f8450u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16544 << 16));
label_2f8454:
    // 0x2f8454: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2f8454u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8458:
    // 0x2f8458: 0x0  nop
    ctx->pc = 0x2f8458u;
    // NOP
label_2f845c:
    // 0x2f845c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f845cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f8460:
    // 0x2f8460: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f8460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_2f8464:
    // 0x2f8464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8468:
    // 0x2f8468: 0x0  nop
    ctx->pc = 0x2f8468u;
    // NOP
label_2f846c:
    // 0x2f846c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f846cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8470:
    // 0x2f8470: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f8474:
    // 0x2f8474: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f8474u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8478:
    // 0x2f8478: 0x2602000a  addiu       $v0, $s0, 0xA
    ctx->pc = 0x2f8478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_2f847c:
    // 0x2f847c: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x2f847cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8480:
    // 0x2f8480: 0x2608000a  addiu       $t0, $s0, 0xA
    ctx->pc = 0x2f8480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_2f8484:
    // 0x2f8484: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2f8484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_2f8488:
    // 0x2f8488: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2f8488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f848c:
    // 0x2f848c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f848cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f8490:
    // 0x2f8490: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f8494:
    // 0x2f8494: 0x8d2400c4  lw          $a0, 0xC4($t1)
    ctx->pc = 0x2f8494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
label_2f8498:
    // 0x2f8498: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f8498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f849c:
    // 0x2f849c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f849cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f84a0:
    // 0x2f84a0: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f84a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f84a4:
    // 0x2f84a4: 0x8d4700c4  lw          $a3, 0xC4($t2)
    ctx->pc = 0x2f84a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 196)));
label_2f84a8:
    // 0x2f84a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f84ac:
    // 0x2f84ac: 0x24691a90  addiu       $t1, $v1, 0x1A90
    ctx->pc = 0x2f84acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
label_2f84b0:
    // 0x2f84b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f84b4:
    // 0x2f84b4: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f84b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f84b8:
    // 0x2f84b8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f84b8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f84bc:
    // 0x2f84bc: 0xc0c8cc0  jal         func_323300
label_2f84c0:
    if (ctx->pc == 0x2F84C0u) {
        ctx->pc = 0x2F84C4u;
        goto label_2f84c4;
    }
    ctx->pc = 0x2F84BCu;
    SET_GPR_U32(ctx, 31, 0x2F84C4u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F84BCu, 0x2F84C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84C4u;
label_2f84c4:
    // 0x2f84c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f84c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f84c8:
    // 0x2f84c8: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f84cc:
    // 0x2f84cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f84d0:
    // 0x2f84d0: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f84d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
label_2f84d4:
    // 0x2f84d4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f84d8:
    // 0x2f84d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f84dc:
    // 0x2f84dc: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f84dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
label_2f84e0:
    // 0x2f84e0: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_2f84e4:
    if (ctx->pc == 0x2F84E4u) {
        ctx->pc = 0x2F84E8u;
        goto label_2f84e8;
    }
    ctx->pc = 0x2F84E0u;
    {
        const bool branch_taken_0x2f84e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f84e0) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F84E8u;
label_2f84e8:
    // 0x2f84e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f84ec:
    // 0x2f84ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f84ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f84f0:
    // 0x2f84f0: 0x38700010  xori        $s0, $v1, 0x10
    ctx->pc = 0x2f84f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_2f84f4:
    // 0x2f84f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f84f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f84f8:
    // 0x2f84f8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2f84f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2f84fc:
    // 0x2f84fc: 0x1000019c  b           . + 4 + (0x19C << 2)
label_2f8500:
    if (ctx->pc == 0x2F8500u) {
        ctx->pc = 0x2F8504u;
        goto label_2f8504;
    }
    ctx->pc = 0x2F84FCu;
    {
        const bool branch_taken_0x2f84fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f84fc) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8504u;
label_2f8504:
    // 0x2f8504: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8508:
    // 0x2f8508: 0x90650100  lbu         $a1, 0x100($v1)
    ctx->pc = 0x2f8508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
label_2f850c:
    // 0x2f850c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2f850cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2f8510:
    // 0x2f8510: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2f8510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f8514:
    // 0x2f8514: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
label_2f8518:
    if (ctx->pc == 0x2F8518u) {
        ctx->pc = 0x2F851Cu;
        goto label_2f851c;
    }
    ctx->pc = 0x2F8514u;
    {
        const bool branch_taken_0x2f8514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8514) {
            ctx->pc = 0x2F8724u;
            goto label_2f8724;
        }
    }
    ctx->pc = 0x2F851Cu;
label_2f851c:
    // 0x2f851c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8520:
    // 0x2f8520: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
label_2f8524:
    if (ctx->pc == 0x2F8524u) {
        ctx->pc = 0x2F8528u;
        goto label_2f8528;
    }
    ctx->pc = 0x2F8520u;
    {
        const bool branch_taken_0x2f8520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8520) {
            ctx->pc = 0x2F8688u;
            goto label_2f8688;
        }
    }
    ctx->pc = 0x2F8528u;
label_2f8528:
    // 0x2f8528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f852c:
    // 0x2f852c: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
label_2f8530:
    if (ctx->pc == 0x2F8530u) {
        ctx->pc = 0x2F8534u;
        goto label_2f8534;
    }
    ctx->pc = 0x2F852Cu;
    {
        const bool branch_taken_0x2f852c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f852c) {
            ctx->pc = 0x2F85E0u;
            goto label_2f85e0;
        }
    }
    ctx->pc = 0x2F8534u;
label_2f8534:
    // 0x2f8534: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2f8538:
    if (ctx->pc == 0x2F8538u) {
        ctx->pc = 0x2F853Cu;
        goto label_2f853c;
    }
    ctx->pc = 0x2F8534u;
    {
        const bool branch_taken_0x2f8534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8534) {
            ctx->pc = 0x2F8544u;
            goto label_2f8544;
        }
    }
    ctx->pc = 0x2F853Cu;
label_2f853c:
    // 0x2f853c: 0x1000018c  b           . + 4 + (0x18C << 2)
label_2f8540:
    if (ctx->pc == 0x2F8540u) {
        ctx->pc = 0x2F8544u;
        goto label_2f8544;
    }
    ctx->pc = 0x2F853Cu;
    {
        const bool branch_taken_0x2f853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f853c) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8544u;
label_2f8544:
    // 0x2f8544: 0xc067648  jal         func_19D920
label_2f8548:
    if (ctx->pc == 0x2F8548u) {
        ctx->pc = 0x2F854Cu;
        goto label_2f854c;
    }
    ctx->pc = 0x2F8544u;
    SET_GPR_U32(ctx, 31, 0x2F854Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8544u, 0x2F854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F854Cu;
label_2f854c:
    // 0x2f854c: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x2f854cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
label_2f8550:
    // 0x2f8550: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f8550u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8554:
    // 0x2f8554: 0x0  nop
    ctx->pc = 0x2f8554u;
    // NOP
label_2f8558:
    // 0x2f8558: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f855c:
    // 0x2f855c: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f855cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_2f8560:
    // 0x2f8560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8564:
    // 0x2f8564: 0x0  nop
    ctx->pc = 0x2f8564u;
    // NOP
label_2f8568:
    // 0x2f8568: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8568u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f856c:
    // 0x2f856c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f8570:
    // 0x2f8570: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f8570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8574:
    // 0x2f8574: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8578:
    // 0x2f8578: 0x26080009  addiu       $t0, $s0, 0x9
    ctx->pc = 0x2f8578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f857c:
    // 0x2f857c: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x2f857cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_2f8580:
    // 0x2f8580: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2f8580u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8584:
    // 0x2f8584: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f8584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f8588:
    // 0x2f8588: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f858c:
    // 0x2f858c: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_2f8590:
    // 0x2f8590: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f8590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f8594:
    // 0x2f8594: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8598:
    // 0x2f8598: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f8598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f859c:
    // 0x2f859c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f859cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f85a0:
    // 0x2f85a0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f85a4:
    // 0x2f85a4: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f85a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f85a8:
    // 0x2f85a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f85ac:
    // 0x2f85ac: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f85acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f85b0:
    // 0x2f85b0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f85b0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f85b4:
    // 0x2f85b4: 0xc0c8cc0  jal         func_323300
label_2f85b8:
    if (ctx->pc == 0x2F85B8u) {
        ctx->pc = 0x2F85BCu;
        goto label_2f85bc;
    }
    ctx->pc = 0x2F85B4u;
    SET_GPR_U32(ctx, 31, 0x2F85BCu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F85B4u, 0x2F85BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F85BCu;
label_2f85bc:
    // 0x2f85bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f85bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f85c0:
    // 0x2f85c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f85c4:
    // 0x2f85c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f85c8:
    // 0x2f85c8: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f85c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
label_2f85cc:
    // 0x2f85cc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f85ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f85d0:
    // 0x2f85d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f85d4:
    // 0x2f85d4: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f85d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
label_2f85d8:
    // 0x2f85d8: 0x10000165  b           . + 4 + (0x165 << 2)
label_2f85dc:
    if (ctx->pc == 0x2F85DCu) {
        ctx->pc = 0x2F85E0u;
        goto label_2f85e0;
    }
    ctx->pc = 0x2F85D8u;
    {
        const bool branch_taken_0x2f85d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f85d8) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F85E0u;
label_2f85e0:
    // 0x2f85e0: 0xc067648  jal         func_19D920
label_2f85e4:
    if (ctx->pc == 0x2F85E4u) {
        ctx->pc = 0x2F85E8u;
        goto label_2f85e8;
    }
    ctx->pc = 0x2F85E0u;
    SET_GPR_U32(ctx, 31, 0x2F85E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F85E0u, 0x2F85E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F85E8u;
label_2f85e8:
    // 0x2f85e8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f85e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_2f85ec:
    // 0x2f85ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f85ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f85f0:
    // 0x2f85f0: 0x0  nop
    ctx->pc = 0x2f85f0u;
    // NOP
label_2f85f4:
    // 0x2f85f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f85f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f85f8:
    // 0x2f85f8: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_2f85fc:
    // 0x2f85fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f85fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8600:
    // 0x2f8600: 0x0  nop
    ctx->pc = 0x2f8600u;
    // NOP
label_2f8604:
    // 0x2f8604: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8604u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8608:
    // 0x2f8608: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f860c:
    // 0x2f860c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8610:
    // 0x2f8610: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x2f8610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f8614:
    // 0x2f8614: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8618:
    // 0x2f8618: 0x2609000b  addiu       $t1, $s0, 0xB
    ctx->pc = 0x2f8618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
label_2f861c:
    // 0x2f861c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2f8620:
    // 0x2f8620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f8620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8624:
    // 0x2f8624: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f8624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2f8628:
    // 0x2f8628: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f8628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f862c:
    // 0x2f862c: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x2f862cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2f8630:
    // 0x2f8630: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2f8630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_2f8634:
    // 0x2f8634: 0x24c31a80  addiu       $v1, $a2, 0x1A80
    ctx->pc = 0x2f8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6784));
label_2f8638:
    // 0x2f8638: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x2f8638u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2f863c:
    // 0x2f863c: 0x8ce800c4  lw          $t0, 0xC4($a3)
    ctx->pc = 0x2f863cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f8640:
    // 0x2f8640: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2f8640u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2f8644:
    // 0x2f8644: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2f8644u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2f8648:
    // 0x2f8648: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f864c:
    // 0x2f864c: 0x24491a80  addiu       $t1, $v0, 0x1A80
    ctx->pc = 0x2f864cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f8650:
    // 0x2f8650: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f8654:
    // 0x2f8654: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f8654u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f8658:
    // 0x2f8658: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8658u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f865c:
    // 0x2f865c: 0xc0c8cc0  jal         func_323300
label_2f8660:
    if (ctx->pc == 0x2F8660u) {
        ctx->pc = 0x2F8664u;
        goto label_2f8664;
    }
    ctx->pc = 0x2F865Cu;
    SET_GPR_U32(ctx, 31, 0x2F8664u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F865Cu, 0x2F8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8664u;
label_2f8664:
    // 0x2f8664: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2f8664u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f8668:
    // 0x2f8668: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2f8668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f866c:
    // 0x2f866c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8670:
    // 0x2f8670: 0xa0670100  sb          $a3, 0x100($v1)
    ctx->pc = 0x2f8670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 7));
label_2f8674:
    // 0x2f8674: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2f8674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f8678:
    // 0x2f8678: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f867c:
    // 0x2f867c: 0xa0690101  sb          $t1, 0x101($v1)
    ctx->pc = 0x2f867cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 9));
label_2f8680:
    // 0x2f8680: 0x1000013b  b           . + 4 + (0x13B << 2)
label_2f8684:
    if (ctx->pc == 0x2F8684u) {
        ctx->pc = 0x2F8688u;
        goto label_2f8688;
    }
    ctx->pc = 0x2F8680u;
    {
        const bool branch_taken_0x2f8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8680) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8688u;
label_2f8688:
    // 0x2f8688: 0xc067648  jal         func_19D920
label_2f868c:
    if (ctx->pc == 0x2F868Cu) {
        ctx->pc = 0x2F8690u;
        goto label_2f8690;
    }
    ctx->pc = 0x2F8688u;
    SET_GPR_U32(ctx, 31, 0x2F8690u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8688u, 0x2F8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8690u;
label_2f8690:
    // 0x2f8690: 0x3c0a40a0  lui         $t2, 0x40A0
    ctx->pc = 0x2f8690u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16544 << 16));
label_2f8694:
    // 0x2f8694: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2f8694u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8698:
    // 0x2f8698: 0x0  nop
    ctx->pc = 0x2f8698u;
    // NOP
label_2f869c:
    // 0x2f869c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f869cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f86a0:
    // 0x2f86a0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_2f86a4:
    // 0x2f86a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f86a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f86a8:
    // 0x2f86a8: 0x0  nop
    ctx->pc = 0x2f86a8u;
    // NOP
label_2f86ac:
    // 0x2f86ac: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f86acu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f86b0:
    // 0x2f86b0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f86b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f86b4:
    // 0x2f86b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f86b8:
    // 0x2f86b8: 0x2605000b  addiu       $a1, $s0, 0xB
    ctx->pc = 0x2f86b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
label_2f86bc:
    // 0x2f86bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f86c0:
    // 0x2f86c0: 0x2608000e  addiu       $t0, $s0, 0xE
    ctx->pc = 0x2f86c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_2f86c4:
    // 0x2f86c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2f86c8:
    // 0x2f86c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f86c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f86cc:
    // 0x2f86cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2f86d0:
    // 0x2f86d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f86d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f86d4:
    // 0x2f86d4: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f86d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_2f86d8:
    // 0x2f86d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f86dc:
    // 0x2f86dc: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f86dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f86e0:
    // 0x2f86e0: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f86e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2f86e4:
    // 0x2f86e4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f86e8:
    // 0x2f86e8: 0x24691b00  addiu       $t1, $v1, 0x1B00
    ctx->pc = 0x2f86e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6912));
label_2f86ec:
    // 0x2f86ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f86f0:
    // 0x2f86f0: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f86f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f86f4:
    // 0x2f86f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f86f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f86f8:
    // 0x2f86f8: 0xc0c8cc0  jal         func_323300
label_2f86fc:
    if (ctx->pc == 0x2F86FCu) {
        ctx->pc = 0x2F8700u;
        goto label_2f8700;
    }
    ctx->pc = 0x2F86F8u;
    SET_GPR_U32(ctx, 31, 0x2F8700u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F86F8u, 0x2F8700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8700u;
label_2f8700:
    // 0x2f8700: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2f8700u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f8704:
    // 0x2f8704: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x2f8704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f8708:
    // 0x2f8708: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f870c:
    // 0x2f870c: 0xa0670100  sb          $a3, 0x100($v1)
    ctx->pc = 0x2f870cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 7));
label_2f8710:
    // 0x2f8710: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2f8710u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f8714:
    // 0x2f8714: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8718:
    // 0x2f8718: 0xa0690101  sb          $t1, 0x101($v1)
    ctx->pc = 0x2f8718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 9));
label_2f871c:
    // 0x2f871c: 0x10000114  b           . + 4 + (0x114 << 2)
label_2f8720:
    if (ctx->pc == 0x2F8720u) {
        ctx->pc = 0x2F8724u;
        goto label_2f8724;
    }
    ctx->pc = 0x2F871Cu;
    {
        const bool branch_taken_0x2f871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f871c) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8724u;
label_2f8724:
    // 0x2f8724: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x2f8724u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8728:
    // 0x2f8728: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2f8728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2f872c:
    // 0x2f872c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f872cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_2f8730:
    // 0x2f8730: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8734:
    // 0x2f8734: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f8734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2f8738:
    // 0x2f8738: 0x1000010d  b           . + 4 + (0x10D << 2)
label_2f873c:
    if (ctx->pc == 0x2F873Cu) {
        ctx->pc = 0x2F8740u;
        goto label_2f8740;
    }
    ctx->pc = 0x2F8738u;
    {
        const bool branch_taken_0x2f8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8738) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8740u;
label_2f8740:
    // 0x2f8740: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f8740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8744:
    // 0x2f8744: 0x90830100  lbu         $v1, 0x100($a0)
    ctx->pc = 0x2f8744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 256)));
label_2f8748:
    // 0x2f8748: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2f8748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2f874c:
    // 0x2f874c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8750:
    // 0x2f8750: 0x10a30054  beq         $a1, $v1, . + 4 + (0x54 << 2)
label_2f8754:
    if (ctx->pc == 0x2F8754u) {
        ctx->pc = 0x2F8758u;
        goto label_2f8758;
    }
    ctx->pc = 0x2F8750u;
    {
        const bool branch_taken_0x2f8750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8750) {
            ctx->pc = 0x2F88A4u;
            goto label_2f88a4;
        }
    }
    ctx->pc = 0x2F8758u;
label_2f8758:
    // 0x2f8758: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f8758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f875c:
    // 0x2f875c: 0x10a4002b  beq         $a1, $a0, . + 4 + (0x2B << 2)
label_2f8760:
    if (ctx->pc == 0x2F8760u) {
        ctx->pc = 0x2F8764u;
        goto label_2f8764;
    }
    ctx->pc = 0x2F875Cu;
    {
        const bool branch_taken_0x2f875c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f875c) {
            ctx->pc = 0x2F880Cu;
            goto label_2f880c;
        }
    }
    ctx->pc = 0x2F8764u;
label_2f8764:
    // 0x2f8764: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2f8768:
    if (ctx->pc == 0x2F8768u) {
        ctx->pc = 0x2F876Cu;
        goto label_2f876c;
    }
    ctx->pc = 0x2F8764u;
    {
        const bool branch_taken_0x2f8764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8764) {
            ctx->pc = 0x2F8774u;
            goto label_2f8774;
        }
    }
    ctx->pc = 0x2F876Cu;
label_2f876c:
    // 0x2f876c: 0x10000100  b           . + 4 + (0x100 << 2)
label_2f8770:
    if (ctx->pc == 0x2F8770u) {
        ctx->pc = 0x2F8774u;
        goto label_2f8774;
    }
    ctx->pc = 0x2F876Cu;
    {
        const bool branch_taken_0x2f876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f876c) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8774u;
label_2f8774:
    // 0x2f8774: 0xc067648  jal         func_19D920
label_2f8778:
    if (ctx->pc == 0x2F8778u) {
        ctx->pc = 0x2F877Cu;
        goto label_2f877c;
    }
    ctx->pc = 0x2F8774u;
    SET_GPR_U32(ctx, 31, 0x2F877Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8774u, 0x2F877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F877Cu;
label_2f877c:
    // 0x2f877c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f877cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_2f8780:
    // 0x2f8780: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f8780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8784:
    // 0x2f8784: 0x0  nop
    ctx->pc = 0x2f8784u;
    // NOP
label_2f8788:
    // 0x2f8788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f878c:
    // 0x2f878c: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f878cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_2f8790:
    // 0x2f8790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8794:
    // 0x2f8794: 0x0  nop
    ctx->pc = 0x2f8794u;
    // NOP
label_2f8798:
    // 0x2f8798: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8798u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f879c:
    // 0x2f879c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f87a0:
    // 0x2f87a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f87a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f87a4:
    // 0x2f87a4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f87a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f87a8:
    // 0x2f87a8: 0x26080009  addiu       $t0, $s0, 0x9
    ctx->pc = 0x2f87a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f87ac:
    // 0x2f87ac: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f87acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2f87b0:
    // 0x2f87b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f87b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f87b4:
    // 0x2f87b4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f87b8:
    // 0x2f87b8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f87b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f87bc:
    // 0x2f87bc: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f87bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_2f87c0:
    // 0x2f87c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f87c4:
    // 0x2f87c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f87c8:
    // 0x2f87c8: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f87c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f87cc:
    // 0x2f87cc: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f87ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f87d0:
    // 0x2f87d0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f87d4:
    // 0x2f87d4: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f87d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f87d8:
    // 0x2f87d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f87dc:
    // 0x2f87dc: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f87dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f87e0:
    // 0x2f87e0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f87e0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f87e4:
    // 0x2f87e4: 0xc0c8cc0  jal         func_323300
label_2f87e8:
    if (ctx->pc == 0x2F87E8u) {
        ctx->pc = 0x2F87ECu;
        goto label_2f87ec;
    }
    ctx->pc = 0x2F87E4u;
    SET_GPR_U32(ctx, 31, 0x2F87ECu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F87E4u, 0x2F87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87ECu;
label_2f87ec:
    // 0x2f87ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f87ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f87f0:
    // 0x2f87f0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f87f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f87f4:
    // 0x2f87f4: 0xa0e60100  sb          $a2, 0x100($a3)
    ctx->pc = 0x2f87f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 6));
label_2f87f8:
    // 0x2f87f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f87fc:
    // 0x2f87fc: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f87fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8800:
    // 0x2f8800: 0xa1230101  sb          $v1, 0x101($t1)
    ctx->pc = 0x2f8800u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 257), (uint8_t)GPR_U32(ctx, 3));
label_2f8804:
    // 0x2f8804: 0x100000da  b           . + 4 + (0xDA << 2)
label_2f8808:
    if (ctx->pc == 0x2F8808u) {
        ctx->pc = 0x2F880Cu;
        goto label_2f880c;
    }
    ctx->pc = 0x2F8804u;
    {
        const bool branch_taken_0x2f8804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8804) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F880Cu;
label_2f880c:
    // 0x2f880c: 0xc067648  jal         func_19D920
label_2f8810:
    if (ctx->pc == 0x2F8810u) {
        ctx->pc = 0x2F8814u;
        goto label_2f8814;
    }
    ctx->pc = 0x2F880Cu;
    SET_GPR_U32(ctx, 31, 0x2F8814u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F880Cu, 0x2F8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8814u;
label_2f8814:
    // 0x2f8814: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f8814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2f8818:
    // 0x2f8818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f881c:
    // 0x2f881c: 0x0  nop
    ctx->pc = 0x2f881cu;
    // NOP
label_2f8820:
    // 0x2f8820: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f8824:
    // 0x2f8824: 0x3c0a4234  lui         $t2, 0x4234
    ctx->pc = 0x2f8824u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16948 << 16));
label_2f8828:
    // 0x2f8828: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f8828u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f882c:
    // 0x2f882c: 0x0  nop
    ctx->pc = 0x2f882cu;
    // NOP
label_2f8830:
    // 0x2f8830: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8830u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8834:
    // 0x2f8834: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f8838:
    // 0x2f8838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f883c:
    // 0x2f883c: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x2f883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f8840:
    // 0x2f8840: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8844:
    // 0x2f8844: 0x2608000b  addiu       $t0, $s0, 0xB
    ctx->pc = 0x2f8844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
label_2f8848:
    // 0x2f8848: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f8848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2f884c:
    // 0x2f884c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f884cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8850:
    // 0x2f8850: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f8850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f8854:
    // 0x2f8854: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f8858:
    // 0x2f8858: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x2f8858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_2f885c:
    // 0x2f885c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f885cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f8860:
    // 0x2f8860: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f8860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f8864:
    // 0x2f8864: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f8864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f8868:
    // 0x2f8868: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f886c:
    // 0x2f886c: 0x24491a80  addiu       $t1, $v0, 0x1A80
    ctx->pc = 0x2f886cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f8870:
    // 0x2f8870: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8874:
    // 0x2f8874: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f8874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f8878:
    // 0x2f8878: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8878u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f887c:
    // 0x2f887c: 0xc0c8cc0  jal         func_323300
label_2f8880:
    if (ctx->pc == 0x2F8880u) {
        ctx->pc = 0x2F8884u;
        goto label_2f8884;
    }
    ctx->pc = 0x2F887Cu;
    SET_GPR_U32(ctx, 31, 0x2F8884u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F887Cu, 0x2F8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8884u;
label_2f8884:
    // 0x2f8884: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f8884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8888:
    // 0x2f8888: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f888c:
    // 0x2f888c: 0xa0e60100  sb          $a2, 0x100($a3)
    ctx->pc = 0x2f888cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 6));
label_2f8890:
    // 0x2f8890: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f8894:
    // 0x2f8894: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f8894u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8898:
    // 0x2f8898: 0xa1230101  sb          $v1, 0x101($t1)
    ctx->pc = 0x2f8898u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 257), (uint8_t)GPR_U32(ctx, 3));
label_2f889c:
    // 0x2f889c: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_2f88a0:
    if (ctx->pc == 0x2F88A0u) {
        ctx->pc = 0x2F88A4u;
        goto label_2f88a4;
    }
    ctx->pc = 0x2F889Cu;
    {
        const bool branch_taken_0x2f889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f889c) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F88A4u;
label_2f88a4:
    // 0x2f88a4: 0xc067648  jal         func_19D920
label_2f88a8:
    if (ctx->pc == 0x2F88A8u) {
        ctx->pc = 0x2F88ACu;
        goto label_2f88ac;
    }
    ctx->pc = 0x2F88A4u;
    SET_GPR_U32(ctx, 31, 0x2F88ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F88A4u, 0x2F88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F88ACu;
label_2f88ac:
    // 0x2f88ac: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f88acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2f88b0:
    // 0x2f88b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f88b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f88b4:
    // 0x2f88b4: 0x0  nop
    ctx->pc = 0x2f88b4u;
    // NOP
label_2f88b8:
    // 0x2f88b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f88b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f88bc:
    // 0x2f88bc: 0x3c0a4234  lui         $t2, 0x4234
    ctx->pc = 0x2f88bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16948 << 16));
label_2f88c0:
    // 0x2f88c0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f88c0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f88c4:
    // 0x2f88c4: 0x0  nop
    ctx->pc = 0x2f88c4u;
    // NOP
label_2f88c8:
    // 0x2f88c8: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f88c8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f88cc:
    // 0x2f88cc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f88ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f88d0:
    // 0x2f88d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f88d4:
    // 0x2f88d4: 0x2605000b  addiu       $a1, $s0, 0xB
    ctx->pc = 0x2f88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
label_2f88d8:
    // 0x2f88d8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f88d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f88dc:
    // 0x2f88dc: 0x2608000e  addiu       $t0, $s0, 0xE
    ctx->pc = 0x2f88dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_2f88e0:
    // 0x2f88e0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2f88e4:
    // 0x2f88e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f88e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f88e8:
    // 0x2f88e8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f88ec:
    // 0x2f88ec: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f88ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f88f0:
    // 0x2f88f0: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x2f88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_2f88f4:
    // 0x2f88f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f88f8:
    // 0x2f88f8: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f88f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f88fc:
    // 0x2f88fc: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f88fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f8900:
    // 0x2f8900: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f8904:
    // 0x2f8904: 0x24491af0  addiu       $t1, $v0, 0x1AF0
    ctx->pc = 0x2f8904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6896));
label_2f8908:
    // 0x2f8908: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f890c:
    // 0x2f890c: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f890cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f8910:
    // 0x2f8910: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8910u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f8914:
    // 0x2f8914: 0xc0c8cc0  jal         func_323300
label_2f8918:
    if (ctx->pc == 0x2F8918u) {
        ctx->pc = 0x2F891Cu;
        goto label_2f891c;
    }
    ctx->pc = 0x2F8914u;
    SET_GPR_U32(ctx, 31, 0x2F891Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8914u, 0x2F891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F891Cu;
label_2f891c:
    // 0x2f891c: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x2f891cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f8920:
    // 0x2f8920: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8924:
    // 0x2f8924: 0xa0e60100  sb          $a2, 0x100($a3)
    ctx->pc = 0x2f8924u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 6));
label_2f8928:
    // 0x2f8928: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f892c:
    // 0x2f892c: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f892cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8930:
    // 0x2f8930: 0xa1230101  sb          $v1, 0x101($t1)
    ctx->pc = 0x2f8930u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 257), (uint8_t)GPR_U32(ctx, 3));
label_2f8934:
    // 0x2f8934: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2f8938:
    if (ctx->pc == 0x2F8938u) {
        ctx->pc = 0x2F893Cu;
        goto label_2f893c;
    }
    ctx->pc = 0x2F8934u;
    {
        const bool branch_taken_0x2f8934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8934) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F893Cu;
label_2f893c:
    // 0x2f893c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8940:
    // 0x2f8940: 0x906a0100  lbu         $t2, 0x100($v1)
    ctx->pc = 0x2f8940u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
label_2f8944:
    // 0x2f8944: 0x314500ff  andi        $a1, $t2, 0xFF
    ctx->pc = 0x2f8944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_2f8948:
    // 0x2f8948: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f8948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f894c:
    // 0x2f894c: 0x10a40083  beq         $a1, $a0, . + 4 + (0x83 << 2)
label_2f8950:
    if (ctx->pc == 0x2F8950u) {
        ctx->pc = 0x2F8954u;
        goto label_2f8954;
    }
    ctx->pc = 0x2F894Cu;
    {
        const bool branch_taken_0x2f894c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f894c) {
            ctx->pc = 0x2F8B5Cu;
            goto label_2f8b5c;
        }
    }
    ctx->pc = 0x2F8954u;
label_2f8954:
    // 0x2f8954: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f8954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8958:
    // 0x2f8958: 0x10a30057  beq         $a1, $v1, . + 4 + (0x57 << 2)
label_2f895c:
    if (ctx->pc == 0x2F895Cu) {
        ctx->pc = 0x2F8960u;
        goto label_2f8960;
    }
    ctx->pc = 0x2F8958u;
    {
        const bool branch_taken_0x2f8958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8958) {
            ctx->pc = 0x2F8AB8u;
            goto label_2f8ab8;
        }
    }
    ctx->pc = 0x2F8960u;
label_2f8960:
    // 0x2f8960: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f8960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8964:
    // 0x2f8964: 0x10a4002c  beq         $a1, $a0, . + 4 + (0x2C << 2)
label_2f8968:
    if (ctx->pc == 0x2F8968u) {
        ctx->pc = 0x2F896Cu;
        goto label_2f896c;
    }
    ctx->pc = 0x2F8964u;
    {
        const bool branch_taken_0x2f8964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f8964) {
            ctx->pc = 0x2F8A18u;
            goto label_2f8a18;
        }
    }
    ctx->pc = 0x2F896Cu;
label_2f896c:
    // 0x2f896c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2f8970:
    if (ctx->pc == 0x2F8970u) {
        ctx->pc = 0x2F8974u;
        goto label_2f8974;
    }
    ctx->pc = 0x2F896Cu;
    {
        const bool branch_taken_0x2f896c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f896c) {
            ctx->pc = 0x2F897Cu;
            goto label_2f897c;
        }
    }
    ctx->pc = 0x2F8974u;
label_2f8974:
    // 0x2f8974: 0x1000007e  b           . + 4 + (0x7E << 2)
label_2f8978:
    if (ctx->pc == 0x2F8978u) {
        ctx->pc = 0x2F897Cu;
        goto label_2f897c;
    }
    ctx->pc = 0x2F8974u;
    {
        const bool branch_taken_0x2f8974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8974) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F897Cu;
label_2f897c:
    // 0x2f897c: 0xc067648  jal         func_19D920
label_2f8980:
    if (ctx->pc == 0x2F8980u) {
        ctx->pc = 0x2F8984u;
        goto label_2f8984;
    }
    ctx->pc = 0x2F897Cu;
    SET_GPR_U32(ctx, 31, 0x2F8984u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F897Cu, 0x2F8984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8984u;
label_2f8984:
    // 0x2f8984: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f8984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_2f8988:
    // 0x2f8988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f8988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f898c:
    // 0x2f898c: 0x0  nop
    ctx->pc = 0x2f898cu;
    // NOP
label_2f8990:
    // 0x2f8990: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f8994:
    // 0x2f8994: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f8994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_2f8998:
    // 0x2f8998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f899c:
    // 0x2f899c: 0x0  nop
    ctx->pc = 0x2f899cu;
    // NOP
label_2f89a0:
    // 0x2f89a0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f89a0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f89a4:
    // 0x2f89a4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f89a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f89a8:
    // 0x2f89a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f89ac:
    // 0x2f89ac: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f89acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f89b0:
    // 0x2f89b0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2f89b4:
    // 0x2f89b4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f89b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f89b8:
    // 0x2f89b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f89bc:
    // 0x2f89bc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f89bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f89c0:
    // 0x2f89c0: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_2f89c4:
    // 0x2f89c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f89c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f89c8:
    // 0x2f89c8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f89cc:
    // 0x2f89cc: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f89ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2f89d0:
    // 0x2f89d0: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f89d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_2f89d4:
    // 0x2f89d4: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2f89d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f89d8:
    // 0x2f89d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f89dc:
    // 0x2f89dc: 0x24491ae0  addiu       $t1, $v0, 0x1AE0
    ctx->pc = 0x2f89dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_2f89e0:
    // 0x2f89e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f89e4:
    // 0x2f89e4: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f89e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f89e8:
    // 0x2f89e8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f89e8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f89ec:
    // 0x2f89ec: 0xc0c8cc0  jal         func_323300
label_2f89f0:
    if (ctx->pc == 0x2F89F0u) {
        ctx->pc = 0x2F89F4u;
        goto label_2f89f4;
    }
    ctx->pc = 0x2F89ECu;
    SET_GPR_U32(ctx, 31, 0x2F89F4u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F89ECu, 0x2F89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F89F4u;
label_2f89f4:
    // 0x2f89f4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f89f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f89f8:
    // 0x2f89f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f89fc:
    // 0x2f89fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f89fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8a00:
    // 0x2f8a00: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f8a00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
label_2f8a04:
    // 0x2f8a04: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f8a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f8a08:
    // 0x2f8a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8a0c:
    // 0x2f8a0c: 0xa0650101  sb          $a1, 0x101($v1)
    ctx->pc = 0x2f8a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 5));
label_2f8a10:
    // 0x2f8a10: 0x10000057  b           . + 4 + (0x57 << 2)
label_2f8a14:
    if (ctx->pc == 0x2F8A14u) {
        ctx->pc = 0x2F8A18u;
        goto label_2f8a18;
    }
    ctx->pc = 0x2F8A10u;
    {
        const bool branch_taken_0x2f8a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8a10) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8A18u;
label_2f8a18:
    // 0x2f8a18: 0xc067648  jal         func_19D920
label_2f8a1c:
    if (ctx->pc == 0x2F8A1Cu) {
        ctx->pc = 0x2F8A20u;
        goto label_2f8a20;
    }
    ctx->pc = 0x2F8A18u;
    SET_GPR_U32(ctx, 31, 0x2F8A20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8A18u, 0x2F8A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A20u;
label_2f8a20:
    // 0x2f8a20: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x2f8a20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
label_2f8a24:
    // 0x2f8a24: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2f8a24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8a28:
    // 0x2f8a28: 0x0  nop
    ctx->pc = 0x2f8a28u;
    // NOP
label_2f8a2c:
    // 0x2f8a2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f8a30:
    // 0x2f8a30: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f8a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
label_2f8a34:
    // 0x2f8a34: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f8a34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8a38:
    // 0x2f8a38: 0x0  nop
    ctx->pc = 0x2f8a38u;
    // NOP
label_2f8a3c:
    // 0x2f8a3c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8a3cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8a40:
    // 0x2f8a40: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f8a44:
    // 0x2f8a44: 0x8fac0048  lw          $t4, 0x48($sp)
    ctx->pc = 0x2f8a44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8a48:
    // 0x2f8a48: 0x26090009  addiu       $t1, $s0, 0x9
    ctx->pc = 0x2f8a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2f8a4c:
    // 0x2f8a4c: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x2f8a4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8a50:
    // 0x2f8a50: 0x260a000b  addiu       $t2, $s0, 0xB
    ctx->pc = 0x2f8a50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
label_2f8a54:
    // 0x2f8a54: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2f8a58:
    // 0x2f8a58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f8a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8a5c:
    // 0x2f8a5c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f8a60:
    // 0x2f8a60: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f8a64:
    // 0x2f8a64: 0x8d8400c4  lw          $a0, 0xC4($t4)
    ctx->pc = 0x2f8a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 196)));
label_2f8a68:
    // 0x2f8a68: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2f8a68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2f8a6c:
    // 0x2f8a6c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8a70:
    // 0x2f8a70: 0x24661a90  addiu       $a2, $v1, 0x1A90
    ctx->pc = 0x2f8a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
label_2f8a74:
    // 0x2f8a74: 0x8d6700c4  lw          $a3, 0xC4($t3)
    ctx->pc = 0x2f8a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 196)));
label_2f8a78:
    // 0x2f8a78: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f8a78u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2f8a7c:
    // 0x2f8a7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f8a80:
    // 0x2f8a80: 0x24491a90  addiu       $t1, $v0, 0x1A90
    ctx->pc = 0x2f8a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6800));
label_2f8a84:
    // 0x2f8a84: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x2f8a84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
label_2f8a88:
    // 0x2f8a88: 0x256a1a80  addiu       $t2, $t3, 0x1A80
    ctx->pc = 0x2f8a88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 6784));
label_2f8a8c:
    // 0x2f8a8c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8a8cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f8a90:
    // 0x2f8a90: 0xc0c8cc0  jal         func_323300
label_2f8a94:
    if (ctx->pc == 0x2F8A94u) {
        ctx->pc = 0x2F8A98u;
        goto label_2f8a98;
    }
    ctx->pc = 0x2F8A90u;
    SET_GPR_U32(ctx, 31, 0x2F8A98u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8A90u, 0x2F8A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A98u;
label_2f8a98:
    // 0x2f8a98: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2f8a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8a9c:
    // 0x2f8a9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8aa0:
    // 0x2f8aa0: 0xa0680100  sb          $t0, 0x100($v1)
    ctx->pc = 0x2f8aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 8));
label_2f8aa4:
    // 0x2f8aa4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f8aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f8aa8:
    // 0x2f8aa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8aac:
    // 0x2f8aac: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f8aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
label_2f8ab0:
    // 0x2f8ab0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2f8ab4:
    if (ctx->pc == 0x2F8AB4u) {
        ctx->pc = 0x2F8AB8u;
        goto label_2f8ab8;
    }
    ctx->pc = 0x2F8AB0u;
    {
        const bool branch_taken_0x2f8ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ab0) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8AB8u;
label_2f8ab8:
    // 0x2f8ab8: 0xc067648  jal         func_19D920
label_2f8abc:
    if (ctx->pc == 0x2F8ABCu) {
        ctx->pc = 0x2F8AC0u;
        goto label_2f8ac0;
    }
    ctx->pc = 0x2F8AB8u;
    SET_GPR_U32(ctx, 31, 0x2F8AC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8AB8u, 0x2F8AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8AC0u;
label_2f8ac0:
    // 0x2f8ac0: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x2f8ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
label_2f8ac4:
    // 0x2f8ac4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2f8ac4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8ac8:
    // 0x2f8ac8: 0x0  nop
    ctx->pc = 0x2f8ac8u;
    // NOP
label_2f8acc:
    // 0x2f8acc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f8ad0:
    // 0x2f8ad0: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f8ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
label_2f8ad4:
    // 0x2f8ad4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f8ad4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8ad8:
    // 0x2f8ad8: 0x0  nop
    ctx->pc = 0x2f8ad8u;
    // NOP
label_2f8adc:
    // 0x2f8adc: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8adcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8ae0:
    // 0x2f8ae0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2f8ae4:
    // 0x2f8ae4: 0x8fac0048  lw          $t4, 0x48($sp)
    ctx->pc = 0x2f8ae4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8ae8:
    // 0x2f8ae8: 0x2609000b  addiu       $t1, $s0, 0xB
    ctx->pc = 0x2f8ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
label_2f8aec:
    // 0x2f8aec: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x2f8aecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8af0:
    // 0x2f8af0: 0x260a000e  addiu       $t2, $s0, 0xE
    ctx->pc = 0x2f8af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_2f8af4:
    // 0x2f8af4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2f8af8:
    // 0x2f8af8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f8af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8afc:
    // 0x2f8afc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f8b00:
    // 0x2f8b00: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2f8b04:
    // 0x2f8b04: 0x8d8400c4  lw          $a0, 0xC4($t4)
    ctx->pc = 0x2f8b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 196)));
label_2f8b08:
    // 0x2f8b08: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2f8b08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2f8b0c:
    // 0x2f8b0c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2f8b10:
    // 0x2f8b10: 0x24661a90  addiu       $a2, $v1, 0x1A90
    ctx->pc = 0x2f8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
label_2f8b14:
    // 0x2f8b14: 0x8d6700c4  lw          $a3, 0xC4($t3)
    ctx->pc = 0x2f8b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 196)));
label_2f8b18:
    // 0x2f8b18: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f8b18u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2f8b1c:
    // 0x2f8b1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f8b20:
    // 0x2f8b20: 0x24491af0  addiu       $t1, $v0, 0x1AF0
    ctx->pc = 0x2f8b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6896));
label_2f8b24:
    // 0x2f8b24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2f8b28:
    // 0x2f8b28: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f8b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
label_2f8b2c:
    // 0x2f8b2c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8b2cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f8b30:
    // 0x2f8b30: 0xc0c8cc0  jal         func_323300
label_2f8b34:
    if (ctx->pc == 0x2F8B34u) {
        ctx->pc = 0x2F8B38u;
        goto label_2f8b38;
    }
    ctx->pc = 0x2F8B30u;
    SET_GPR_U32(ctx, 31, 0x2F8B38u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8B30u, 0x2F8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B38u;
label_2f8b38:
    // 0x2f8b38: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f8b38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f8b3c:
    // 0x2f8b3c: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f8b40:
    // 0x2f8b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8b44:
    // 0x2f8b44: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f8b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
label_2f8b48:
    // 0x2f8b48: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f8b4c:
    // 0x2f8b4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8b50:
    // 0x2f8b50: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f8b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
label_2f8b54:
    // 0x2f8b54: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f8b58:
    if (ctx->pc == 0x2F8B58u) {
        ctx->pc = 0x2F8B5Cu;
        goto label_2f8b5c;
    }
    ctx->pc = 0x2F8B54u;
    {
        const bool branch_taken_0x2f8b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b54) {
            ctx->pc = 0x2F8B70u;
            goto label_2f8b70;
        }
    }
    ctx->pc = 0x2F8B5Cu;
label_2f8b5c:
    // 0x2f8b5c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f8b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8b60:
    // 0x2f8b60: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x2f8b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f8b64:
    // 0x2f8b64: 0x38e30010  xori        $v1, $a3, 0x10
    ctx->pc = 0x2f8b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)16);
label_2f8b68:
    // 0x2f8b68: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f8b68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8b6c:
    // 0x2f8b6c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2f8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_2f8b70:
    // 0x2f8b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8b74:
    // 0x2f8b74: 0x906a0101  lbu         $t2, 0x101($v1)
    ctx->pc = 0x2f8b74u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
label_2f8b78:
    // 0x2f8b78: 0x11400005  beqz        $t2, . + 4 + (0x5 << 2)
label_2f8b7c:
    if (ctx->pc == 0x2F8B7Cu) {
        ctx->pc = 0x2F8B80u;
        goto label_2f8b80;
    }
    ctx->pc = 0x2F8B78u;
    {
        const bool branch_taken_0x2f8b78 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b78) {
            ctx->pc = 0x2F8B90u;
            goto label_2f8b90;
        }
    }
    ctx->pc = 0x2F8B80u;
label_2f8b80:
    // 0x2f8b80: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2f8b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8b84:
    // 0x2f8b84: 0x90a40101  lbu         $a0, 0x101($a1)
    ctx->pc = 0x2f8b84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 257)));
label_2f8b88:
    // 0x2f8b88: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2f8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2f8b8c:
    // 0x2f8b8c: 0xa0a30101  sb          $v1, 0x101($a1)
    ctx->pc = 0x2f8b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 257), (uint8_t)GPR_U32(ctx, 3));
label_2f8b90:
    // 0x2f8b90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f8b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8b94:
    // 0x2f8b94: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2f8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_2f8b98:
    // 0x2f8b98: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x2f8b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
label_2f8b9c:
    // 0x2f8b9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2f8ba0:
    if (ctx->pc == 0x2F8BA0u) {
        ctx->pc = 0x2F8BA4u;
        goto label_2f8ba4;
    }
    ctx->pc = 0x2F8B9Cu;
    {
        const bool branch_taken_0x2f8b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b9c) {
            ctx->pc = 0x2F8BB8u;
            goto label_2f8bb8;
        }
    }
    ctx->pc = 0x2F8BA4u;
label_2f8ba4:
    // 0x2f8ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8ba8:
    // 0x2f8ba8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8bac:
    // 0x2f8bac: 0x38700010  xori        $s0, $v1, 0x10
    ctx->pc = 0x2f8bacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_2f8bb0:
    // 0x2f8bb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f8bb4:
    // 0x2f8bb4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2f8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2f8bb8:
    // 0x2f8bb8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2f8bb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f8bbc:
    // 0x2f8bbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f8bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f8bc0:
    // 0x2f8bc0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f8bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f8bc4:
    // 0x2f8bc4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2f8bc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f8bc8:
    // 0x2f8bc8: 0x3e00008  jr          $ra
label_2f8bcc:
    if (ctx->pc == 0x2F8BCCu) {
        ctx->pc = 0x2F8BD0u;
        goto label_fallthrough_0x2f8bc8;
    }
    ctx->pc = 0x2F8BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f8bc8:
    ctx->pc = 0x2F8BD0u;
}
