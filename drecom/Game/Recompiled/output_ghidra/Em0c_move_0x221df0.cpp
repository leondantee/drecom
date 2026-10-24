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

// Function: Em0c_move
// Address: 0x221df0 - 0x222cc4
void Em0c_move_0x221df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_move_0x221df0");
#endif

    switch (ctx->pc) {
        case 0x221df0u: goto label_221df0;
        case 0x221df4u: goto label_221df4;
        case 0x221df8u: goto label_221df8;
        case 0x221dfcu: goto label_221dfc;
        case 0x221e00u: goto label_221e00;
        case 0x221e04u: goto label_221e04;
        case 0x221e08u: goto label_221e08;
        case 0x221e0cu: goto label_221e0c;
        case 0x221e10u: goto label_221e10;
        case 0x221e14u: goto label_221e14;
        case 0x221e18u: goto label_221e18;
        case 0x221e1cu: goto label_221e1c;
        case 0x221e20u: goto label_221e20;
        case 0x221e24u: goto label_221e24;
        case 0x221e28u: goto label_221e28;
        case 0x221e2cu: goto label_221e2c;
        case 0x221e30u: goto label_221e30;
        case 0x221e34u: goto label_221e34;
        case 0x221e38u: goto label_221e38;
        case 0x221e3cu: goto label_221e3c;
        case 0x221e40u: goto label_221e40;
        case 0x221e44u: goto label_221e44;
        case 0x221e48u: goto label_221e48;
        case 0x221e4cu: goto label_221e4c;
        case 0x221e50u: goto label_221e50;
        case 0x221e54u: goto label_221e54;
        case 0x221e58u: goto label_221e58;
        case 0x221e5cu: goto label_221e5c;
        case 0x221e60u: goto label_221e60;
        case 0x221e64u: goto label_221e64;
        case 0x221e68u: goto label_221e68;
        case 0x221e6cu: goto label_221e6c;
        case 0x221e70u: goto label_221e70;
        case 0x221e74u: goto label_221e74;
        case 0x221e78u: goto label_221e78;
        case 0x221e7cu: goto label_221e7c;
        case 0x221e80u: goto label_221e80;
        case 0x221e84u: goto label_221e84;
        case 0x221e88u: goto label_221e88;
        case 0x221e8cu: goto label_221e8c;
        case 0x221e90u: goto label_221e90;
        case 0x221e94u: goto label_221e94;
        case 0x221e98u: goto label_221e98;
        case 0x221e9cu: goto label_221e9c;
        case 0x221ea0u: goto label_221ea0;
        case 0x221ea4u: goto label_221ea4;
        case 0x221ea8u: goto label_221ea8;
        case 0x221eacu: goto label_221eac;
        case 0x221eb0u: goto label_221eb0;
        case 0x221eb4u: goto label_221eb4;
        case 0x221eb8u: goto label_221eb8;
        case 0x221ebcu: goto label_221ebc;
        case 0x221ec0u: goto label_221ec0;
        case 0x221ec4u: goto label_221ec4;
        case 0x221ec8u: goto label_221ec8;
        case 0x221eccu: goto label_221ecc;
        case 0x221ed0u: goto label_221ed0;
        case 0x221ed4u: goto label_221ed4;
        case 0x221ed8u: goto label_221ed8;
        case 0x221edcu: goto label_221edc;
        case 0x221ee0u: goto label_221ee0;
        case 0x221ee4u: goto label_221ee4;
        case 0x221ee8u: goto label_221ee8;
        case 0x221eecu: goto label_221eec;
        case 0x221ef0u: goto label_221ef0;
        case 0x221ef4u: goto label_221ef4;
        case 0x221ef8u: goto label_221ef8;
        case 0x221efcu: goto label_221efc;
        case 0x221f00u: goto label_221f00;
        case 0x221f04u: goto label_221f04;
        case 0x221f08u: goto label_221f08;
        case 0x221f0cu: goto label_221f0c;
        case 0x221f10u: goto label_221f10;
        case 0x221f14u: goto label_221f14;
        case 0x221f18u: goto label_221f18;
        case 0x221f1cu: goto label_221f1c;
        case 0x221f20u: goto label_221f20;
        case 0x221f24u: goto label_221f24;
        case 0x221f28u: goto label_221f28;
        case 0x221f2cu: goto label_221f2c;
        case 0x221f30u: goto label_221f30;
        case 0x221f34u: goto label_221f34;
        case 0x221f38u: goto label_221f38;
        case 0x221f3cu: goto label_221f3c;
        case 0x221f40u: goto label_221f40;
        case 0x221f44u: goto label_221f44;
        case 0x221f48u: goto label_221f48;
        case 0x221f4cu: goto label_221f4c;
        case 0x221f50u: goto label_221f50;
        case 0x221f54u: goto label_221f54;
        case 0x221f58u: goto label_221f58;
        case 0x221f5cu: goto label_221f5c;
        case 0x221f60u: goto label_221f60;
        case 0x221f64u: goto label_221f64;
        case 0x221f68u: goto label_221f68;
        case 0x221f6cu: goto label_221f6c;
        case 0x221f70u: goto label_221f70;
        case 0x221f74u: goto label_221f74;
        case 0x221f78u: goto label_221f78;
        case 0x221f7cu: goto label_221f7c;
        case 0x221f80u: goto label_221f80;
        case 0x221f84u: goto label_221f84;
        case 0x221f88u: goto label_221f88;
        case 0x221f8cu: goto label_221f8c;
        case 0x221f90u: goto label_221f90;
        case 0x221f94u: goto label_221f94;
        case 0x221f98u: goto label_221f98;
        case 0x221f9cu: goto label_221f9c;
        case 0x221fa0u: goto label_221fa0;
        case 0x221fa4u: goto label_221fa4;
        case 0x221fa8u: goto label_221fa8;
        case 0x221facu: goto label_221fac;
        case 0x221fb0u: goto label_221fb0;
        case 0x221fb4u: goto label_221fb4;
        case 0x221fb8u: goto label_221fb8;
        case 0x221fbcu: goto label_221fbc;
        case 0x221fc0u: goto label_221fc0;
        case 0x221fc4u: goto label_221fc4;
        case 0x221fc8u: goto label_221fc8;
        case 0x221fccu: goto label_221fcc;
        case 0x221fd0u: goto label_221fd0;
        case 0x221fd4u: goto label_221fd4;
        case 0x221fd8u: goto label_221fd8;
        case 0x221fdcu: goto label_221fdc;
        case 0x221fe0u: goto label_221fe0;
        case 0x221fe4u: goto label_221fe4;
        case 0x221fe8u: goto label_221fe8;
        case 0x221fecu: goto label_221fec;
        case 0x221ff0u: goto label_221ff0;
        case 0x221ff4u: goto label_221ff4;
        case 0x221ff8u: goto label_221ff8;
        case 0x221ffcu: goto label_221ffc;
        case 0x222000u: goto label_222000;
        case 0x222004u: goto label_222004;
        case 0x222008u: goto label_222008;
        case 0x22200cu: goto label_22200c;
        case 0x222010u: goto label_222010;
        case 0x222014u: goto label_222014;
        case 0x222018u: goto label_222018;
        case 0x22201cu: goto label_22201c;
        case 0x222020u: goto label_222020;
        case 0x222024u: goto label_222024;
        case 0x222028u: goto label_222028;
        case 0x22202cu: goto label_22202c;
        case 0x222030u: goto label_222030;
        case 0x222034u: goto label_222034;
        case 0x222038u: goto label_222038;
        case 0x22203cu: goto label_22203c;
        case 0x222040u: goto label_222040;
        case 0x222044u: goto label_222044;
        case 0x222048u: goto label_222048;
        case 0x22204cu: goto label_22204c;
        case 0x222050u: goto label_222050;
        case 0x222054u: goto label_222054;
        case 0x222058u: goto label_222058;
        case 0x22205cu: goto label_22205c;
        case 0x222060u: goto label_222060;
        case 0x222064u: goto label_222064;
        case 0x222068u: goto label_222068;
        case 0x22206cu: goto label_22206c;
        case 0x222070u: goto label_222070;
        case 0x222074u: goto label_222074;
        case 0x222078u: goto label_222078;
        case 0x22207cu: goto label_22207c;
        case 0x222080u: goto label_222080;
        case 0x222084u: goto label_222084;
        case 0x222088u: goto label_222088;
        case 0x22208cu: goto label_22208c;
        case 0x222090u: goto label_222090;
        case 0x222094u: goto label_222094;
        case 0x222098u: goto label_222098;
        case 0x22209cu: goto label_22209c;
        case 0x2220a0u: goto label_2220a0;
        case 0x2220a4u: goto label_2220a4;
        case 0x2220a8u: goto label_2220a8;
        case 0x2220acu: goto label_2220ac;
        case 0x2220b0u: goto label_2220b0;
        case 0x2220b4u: goto label_2220b4;
        case 0x2220b8u: goto label_2220b8;
        case 0x2220bcu: goto label_2220bc;
        case 0x2220c0u: goto label_2220c0;
        case 0x2220c4u: goto label_2220c4;
        case 0x2220c8u: goto label_2220c8;
        case 0x2220ccu: goto label_2220cc;
        case 0x2220d0u: goto label_2220d0;
        case 0x2220d4u: goto label_2220d4;
        case 0x2220d8u: goto label_2220d8;
        case 0x2220dcu: goto label_2220dc;
        case 0x2220e0u: goto label_2220e0;
        case 0x2220e4u: goto label_2220e4;
        case 0x2220e8u: goto label_2220e8;
        case 0x2220ecu: goto label_2220ec;
        case 0x2220f0u: goto label_2220f0;
        case 0x2220f4u: goto label_2220f4;
        case 0x2220f8u: goto label_2220f8;
        case 0x2220fcu: goto label_2220fc;
        case 0x222100u: goto label_222100;
        case 0x222104u: goto label_222104;
        case 0x222108u: goto label_222108;
        case 0x22210cu: goto label_22210c;
        case 0x222110u: goto label_222110;
        case 0x222114u: goto label_222114;
        case 0x222118u: goto label_222118;
        case 0x22211cu: goto label_22211c;
        case 0x222120u: goto label_222120;
        case 0x222124u: goto label_222124;
        case 0x222128u: goto label_222128;
        case 0x22212cu: goto label_22212c;
        case 0x222130u: goto label_222130;
        case 0x222134u: goto label_222134;
        case 0x222138u: goto label_222138;
        case 0x22213cu: goto label_22213c;
        case 0x222140u: goto label_222140;
        case 0x222144u: goto label_222144;
        case 0x222148u: goto label_222148;
        case 0x22214cu: goto label_22214c;
        case 0x222150u: goto label_222150;
        case 0x222154u: goto label_222154;
        case 0x222158u: goto label_222158;
        case 0x22215cu: goto label_22215c;
        case 0x222160u: goto label_222160;
        case 0x222164u: goto label_222164;
        case 0x222168u: goto label_222168;
        case 0x22216cu: goto label_22216c;
        case 0x222170u: goto label_222170;
        case 0x222174u: goto label_222174;
        case 0x222178u: goto label_222178;
        case 0x22217cu: goto label_22217c;
        case 0x222180u: goto label_222180;
        case 0x222184u: goto label_222184;
        case 0x222188u: goto label_222188;
        case 0x22218cu: goto label_22218c;
        case 0x222190u: goto label_222190;
        case 0x222194u: goto label_222194;
        case 0x222198u: goto label_222198;
        case 0x22219cu: goto label_22219c;
        case 0x2221a0u: goto label_2221a0;
        case 0x2221a4u: goto label_2221a4;
        case 0x2221a8u: goto label_2221a8;
        case 0x2221acu: goto label_2221ac;
        case 0x2221b0u: goto label_2221b0;
        case 0x2221b4u: goto label_2221b4;
        case 0x2221b8u: goto label_2221b8;
        case 0x2221bcu: goto label_2221bc;
        case 0x2221c0u: goto label_2221c0;
        case 0x2221c4u: goto label_2221c4;
        case 0x2221c8u: goto label_2221c8;
        case 0x2221ccu: goto label_2221cc;
        case 0x2221d0u: goto label_2221d0;
        case 0x2221d4u: goto label_2221d4;
        case 0x2221d8u: goto label_2221d8;
        case 0x2221dcu: goto label_2221dc;
        case 0x2221e0u: goto label_2221e0;
        case 0x2221e4u: goto label_2221e4;
        case 0x2221e8u: goto label_2221e8;
        case 0x2221ecu: goto label_2221ec;
        case 0x2221f0u: goto label_2221f0;
        case 0x2221f4u: goto label_2221f4;
        case 0x2221f8u: goto label_2221f8;
        case 0x2221fcu: goto label_2221fc;
        case 0x222200u: goto label_222200;
        case 0x222204u: goto label_222204;
        case 0x222208u: goto label_222208;
        case 0x22220cu: goto label_22220c;
        case 0x222210u: goto label_222210;
        case 0x222214u: goto label_222214;
        case 0x222218u: goto label_222218;
        case 0x22221cu: goto label_22221c;
        case 0x222220u: goto label_222220;
        case 0x222224u: goto label_222224;
        case 0x222228u: goto label_222228;
        case 0x22222cu: goto label_22222c;
        case 0x222230u: goto label_222230;
        case 0x222234u: goto label_222234;
        case 0x222238u: goto label_222238;
        case 0x22223cu: goto label_22223c;
        case 0x222240u: goto label_222240;
        case 0x222244u: goto label_222244;
        case 0x222248u: goto label_222248;
        case 0x22224cu: goto label_22224c;
        case 0x222250u: goto label_222250;
        case 0x222254u: goto label_222254;
        case 0x222258u: goto label_222258;
        case 0x22225cu: goto label_22225c;
        case 0x222260u: goto label_222260;
        case 0x222264u: goto label_222264;
        case 0x222268u: goto label_222268;
        case 0x22226cu: goto label_22226c;
        case 0x222270u: goto label_222270;
        case 0x222274u: goto label_222274;
        case 0x222278u: goto label_222278;
        case 0x22227cu: goto label_22227c;
        case 0x222280u: goto label_222280;
        case 0x222284u: goto label_222284;
        case 0x222288u: goto label_222288;
        case 0x22228cu: goto label_22228c;
        case 0x222290u: goto label_222290;
        case 0x222294u: goto label_222294;
        case 0x222298u: goto label_222298;
        case 0x22229cu: goto label_22229c;
        case 0x2222a0u: goto label_2222a0;
        case 0x2222a4u: goto label_2222a4;
        case 0x2222a8u: goto label_2222a8;
        case 0x2222acu: goto label_2222ac;
        case 0x2222b0u: goto label_2222b0;
        case 0x2222b4u: goto label_2222b4;
        case 0x2222b8u: goto label_2222b8;
        case 0x2222bcu: goto label_2222bc;
        case 0x2222c0u: goto label_2222c0;
        case 0x2222c4u: goto label_2222c4;
        case 0x2222c8u: goto label_2222c8;
        case 0x2222ccu: goto label_2222cc;
        case 0x2222d0u: goto label_2222d0;
        case 0x2222d4u: goto label_2222d4;
        case 0x2222d8u: goto label_2222d8;
        case 0x2222dcu: goto label_2222dc;
        case 0x2222e0u: goto label_2222e0;
        case 0x2222e4u: goto label_2222e4;
        case 0x2222e8u: goto label_2222e8;
        case 0x2222ecu: goto label_2222ec;
        case 0x2222f0u: goto label_2222f0;
        case 0x2222f4u: goto label_2222f4;
        case 0x2222f8u: goto label_2222f8;
        case 0x2222fcu: goto label_2222fc;
        case 0x222300u: goto label_222300;
        case 0x222304u: goto label_222304;
        case 0x222308u: goto label_222308;
        case 0x22230cu: goto label_22230c;
        case 0x222310u: goto label_222310;
        case 0x222314u: goto label_222314;
        case 0x222318u: goto label_222318;
        case 0x22231cu: goto label_22231c;
        case 0x222320u: goto label_222320;
        case 0x222324u: goto label_222324;
        case 0x222328u: goto label_222328;
        case 0x22232cu: goto label_22232c;
        case 0x222330u: goto label_222330;
        case 0x222334u: goto label_222334;
        case 0x222338u: goto label_222338;
        case 0x22233cu: goto label_22233c;
        case 0x222340u: goto label_222340;
        case 0x222344u: goto label_222344;
        case 0x222348u: goto label_222348;
        case 0x22234cu: goto label_22234c;
        case 0x222350u: goto label_222350;
        case 0x222354u: goto label_222354;
        case 0x222358u: goto label_222358;
        case 0x22235cu: goto label_22235c;
        case 0x222360u: goto label_222360;
        case 0x222364u: goto label_222364;
        case 0x222368u: goto label_222368;
        case 0x22236cu: goto label_22236c;
        case 0x222370u: goto label_222370;
        case 0x222374u: goto label_222374;
        case 0x222378u: goto label_222378;
        case 0x22237cu: goto label_22237c;
        case 0x222380u: goto label_222380;
        case 0x222384u: goto label_222384;
        case 0x222388u: goto label_222388;
        case 0x22238cu: goto label_22238c;
        case 0x222390u: goto label_222390;
        case 0x222394u: goto label_222394;
        case 0x222398u: goto label_222398;
        case 0x22239cu: goto label_22239c;
        case 0x2223a0u: goto label_2223a0;
        case 0x2223a4u: goto label_2223a4;
        case 0x2223a8u: goto label_2223a8;
        case 0x2223acu: goto label_2223ac;
        case 0x2223b0u: goto label_2223b0;
        case 0x2223b4u: goto label_2223b4;
        case 0x2223b8u: goto label_2223b8;
        case 0x2223bcu: goto label_2223bc;
        case 0x2223c0u: goto label_2223c0;
        case 0x2223c4u: goto label_2223c4;
        case 0x2223c8u: goto label_2223c8;
        case 0x2223ccu: goto label_2223cc;
        case 0x2223d0u: goto label_2223d0;
        case 0x2223d4u: goto label_2223d4;
        case 0x2223d8u: goto label_2223d8;
        case 0x2223dcu: goto label_2223dc;
        case 0x2223e0u: goto label_2223e0;
        case 0x2223e4u: goto label_2223e4;
        case 0x2223e8u: goto label_2223e8;
        case 0x2223ecu: goto label_2223ec;
        case 0x2223f0u: goto label_2223f0;
        case 0x2223f4u: goto label_2223f4;
        case 0x2223f8u: goto label_2223f8;
        case 0x2223fcu: goto label_2223fc;
        case 0x222400u: goto label_222400;
        case 0x222404u: goto label_222404;
        case 0x222408u: goto label_222408;
        case 0x22240cu: goto label_22240c;
        case 0x222410u: goto label_222410;
        case 0x222414u: goto label_222414;
        case 0x222418u: goto label_222418;
        case 0x22241cu: goto label_22241c;
        case 0x222420u: goto label_222420;
        case 0x222424u: goto label_222424;
        case 0x222428u: goto label_222428;
        case 0x22242cu: goto label_22242c;
        case 0x222430u: goto label_222430;
        case 0x222434u: goto label_222434;
        case 0x222438u: goto label_222438;
        case 0x22243cu: goto label_22243c;
        case 0x222440u: goto label_222440;
        case 0x222444u: goto label_222444;
        case 0x222448u: goto label_222448;
        case 0x22244cu: goto label_22244c;
        case 0x222450u: goto label_222450;
        case 0x222454u: goto label_222454;
        case 0x222458u: goto label_222458;
        case 0x22245cu: goto label_22245c;
        case 0x222460u: goto label_222460;
        case 0x222464u: goto label_222464;
        case 0x222468u: goto label_222468;
        case 0x22246cu: goto label_22246c;
        case 0x222470u: goto label_222470;
        case 0x222474u: goto label_222474;
        case 0x222478u: goto label_222478;
        case 0x22247cu: goto label_22247c;
        case 0x222480u: goto label_222480;
        case 0x222484u: goto label_222484;
        case 0x222488u: goto label_222488;
        case 0x22248cu: goto label_22248c;
        case 0x222490u: goto label_222490;
        case 0x222494u: goto label_222494;
        case 0x222498u: goto label_222498;
        case 0x22249cu: goto label_22249c;
        case 0x2224a0u: goto label_2224a0;
        case 0x2224a4u: goto label_2224a4;
        case 0x2224a8u: goto label_2224a8;
        case 0x2224acu: goto label_2224ac;
        case 0x2224b0u: goto label_2224b0;
        case 0x2224b4u: goto label_2224b4;
        case 0x2224b8u: goto label_2224b8;
        case 0x2224bcu: goto label_2224bc;
        case 0x2224c0u: goto label_2224c0;
        case 0x2224c4u: goto label_2224c4;
        case 0x2224c8u: goto label_2224c8;
        case 0x2224ccu: goto label_2224cc;
        case 0x2224d0u: goto label_2224d0;
        case 0x2224d4u: goto label_2224d4;
        case 0x2224d8u: goto label_2224d8;
        case 0x2224dcu: goto label_2224dc;
        case 0x2224e0u: goto label_2224e0;
        case 0x2224e4u: goto label_2224e4;
        case 0x2224e8u: goto label_2224e8;
        case 0x2224ecu: goto label_2224ec;
        case 0x2224f0u: goto label_2224f0;
        case 0x2224f4u: goto label_2224f4;
        case 0x2224f8u: goto label_2224f8;
        case 0x2224fcu: goto label_2224fc;
        case 0x222500u: goto label_222500;
        case 0x222504u: goto label_222504;
        case 0x222508u: goto label_222508;
        case 0x22250cu: goto label_22250c;
        case 0x222510u: goto label_222510;
        case 0x222514u: goto label_222514;
        case 0x222518u: goto label_222518;
        case 0x22251cu: goto label_22251c;
        case 0x222520u: goto label_222520;
        case 0x222524u: goto label_222524;
        case 0x222528u: goto label_222528;
        case 0x22252cu: goto label_22252c;
        case 0x222530u: goto label_222530;
        case 0x222534u: goto label_222534;
        case 0x222538u: goto label_222538;
        case 0x22253cu: goto label_22253c;
        case 0x222540u: goto label_222540;
        case 0x222544u: goto label_222544;
        case 0x222548u: goto label_222548;
        case 0x22254cu: goto label_22254c;
        case 0x222550u: goto label_222550;
        case 0x222554u: goto label_222554;
        case 0x222558u: goto label_222558;
        case 0x22255cu: goto label_22255c;
        case 0x222560u: goto label_222560;
        case 0x222564u: goto label_222564;
        case 0x222568u: goto label_222568;
        case 0x22256cu: goto label_22256c;
        case 0x222570u: goto label_222570;
        case 0x222574u: goto label_222574;
        case 0x222578u: goto label_222578;
        case 0x22257cu: goto label_22257c;
        case 0x222580u: goto label_222580;
        case 0x222584u: goto label_222584;
        case 0x222588u: goto label_222588;
        case 0x22258cu: goto label_22258c;
        case 0x222590u: goto label_222590;
        case 0x222594u: goto label_222594;
        case 0x222598u: goto label_222598;
        case 0x22259cu: goto label_22259c;
        case 0x2225a0u: goto label_2225a0;
        case 0x2225a4u: goto label_2225a4;
        case 0x2225a8u: goto label_2225a8;
        case 0x2225acu: goto label_2225ac;
        case 0x2225b0u: goto label_2225b0;
        case 0x2225b4u: goto label_2225b4;
        case 0x2225b8u: goto label_2225b8;
        case 0x2225bcu: goto label_2225bc;
        case 0x2225c0u: goto label_2225c0;
        case 0x2225c4u: goto label_2225c4;
        case 0x2225c8u: goto label_2225c8;
        case 0x2225ccu: goto label_2225cc;
        case 0x2225d0u: goto label_2225d0;
        case 0x2225d4u: goto label_2225d4;
        case 0x2225d8u: goto label_2225d8;
        case 0x2225dcu: goto label_2225dc;
        case 0x2225e0u: goto label_2225e0;
        case 0x2225e4u: goto label_2225e4;
        case 0x2225e8u: goto label_2225e8;
        case 0x2225ecu: goto label_2225ec;
        case 0x2225f0u: goto label_2225f0;
        case 0x2225f4u: goto label_2225f4;
        case 0x2225f8u: goto label_2225f8;
        case 0x2225fcu: goto label_2225fc;
        case 0x222600u: goto label_222600;
        case 0x222604u: goto label_222604;
        case 0x222608u: goto label_222608;
        case 0x22260cu: goto label_22260c;
        case 0x222610u: goto label_222610;
        case 0x222614u: goto label_222614;
        case 0x222618u: goto label_222618;
        case 0x22261cu: goto label_22261c;
        case 0x222620u: goto label_222620;
        case 0x222624u: goto label_222624;
        case 0x222628u: goto label_222628;
        case 0x22262cu: goto label_22262c;
        case 0x222630u: goto label_222630;
        case 0x222634u: goto label_222634;
        case 0x222638u: goto label_222638;
        case 0x22263cu: goto label_22263c;
        case 0x222640u: goto label_222640;
        case 0x222644u: goto label_222644;
        case 0x222648u: goto label_222648;
        case 0x22264cu: goto label_22264c;
        case 0x222650u: goto label_222650;
        case 0x222654u: goto label_222654;
        case 0x222658u: goto label_222658;
        case 0x22265cu: goto label_22265c;
        case 0x222660u: goto label_222660;
        case 0x222664u: goto label_222664;
        case 0x222668u: goto label_222668;
        case 0x22266cu: goto label_22266c;
        case 0x222670u: goto label_222670;
        case 0x222674u: goto label_222674;
        case 0x222678u: goto label_222678;
        case 0x22267cu: goto label_22267c;
        case 0x222680u: goto label_222680;
        case 0x222684u: goto label_222684;
        case 0x222688u: goto label_222688;
        case 0x22268cu: goto label_22268c;
        case 0x222690u: goto label_222690;
        case 0x222694u: goto label_222694;
        case 0x222698u: goto label_222698;
        case 0x22269cu: goto label_22269c;
        case 0x2226a0u: goto label_2226a0;
        case 0x2226a4u: goto label_2226a4;
        case 0x2226a8u: goto label_2226a8;
        case 0x2226acu: goto label_2226ac;
        case 0x2226b0u: goto label_2226b0;
        case 0x2226b4u: goto label_2226b4;
        case 0x2226b8u: goto label_2226b8;
        case 0x2226bcu: goto label_2226bc;
        case 0x2226c0u: goto label_2226c0;
        case 0x2226c4u: goto label_2226c4;
        case 0x2226c8u: goto label_2226c8;
        case 0x2226ccu: goto label_2226cc;
        case 0x2226d0u: goto label_2226d0;
        case 0x2226d4u: goto label_2226d4;
        case 0x2226d8u: goto label_2226d8;
        case 0x2226dcu: goto label_2226dc;
        case 0x2226e0u: goto label_2226e0;
        case 0x2226e4u: goto label_2226e4;
        case 0x2226e8u: goto label_2226e8;
        case 0x2226ecu: goto label_2226ec;
        case 0x2226f0u: goto label_2226f0;
        case 0x2226f4u: goto label_2226f4;
        case 0x2226f8u: goto label_2226f8;
        case 0x2226fcu: goto label_2226fc;
        case 0x222700u: goto label_222700;
        case 0x222704u: goto label_222704;
        case 0x222708u: goto label_222708;
        case 0x22270cu: goto label_22270c;
        case 0x222710u: goto label_222710;
        case 0x222714u: goto label_222714;
        case 0x222718u: goto label_222718;
        case 0x22271cu: goto label_22271c;
        case 0x222720u: goto label_222720;
        case 0x222724u: goto label_222724;
        case 0x222728u: goto label_222728;
        case 0x22272cu: goto label_22272c;
        case 0x222730u: goto label_222730;
        case 0x222734u: goto label_222734;
        case 0x222738u: goto label_222738;
        case 0x22273cu: goto label_22273c;
        case 0x222740u: goto label_222740;
        case 0x222744u: goto label_222744;
        case 0x222748u: goto label_222748;
        case 0x22274cu: goto label_22274c;
        case 0x222750u: goto label_222750;
        case 0x222754u: goto label_222754;
        case 0x222758u: goto label_222758;
        case 0x22275cu: goto label_22275c;
        case 0x222760u: goto label_222760;
        case 0x222764u: goto label_222764;
        case 0x222768u: goto label_222768;
        case 0x22276cu: goto label_22276c;
        case 0x222770u: goto label_222770;
        case 0x222774u: goto label_222774;
        case 0x222778u: goto label_222778;
        case 0x22277cu: goto label_22277c;
        case 0x222780u: goto label_222780;
        case 0x222784u: goto label_222784;
        case 0x222788u: goto label_222788;
        case 0x22278cu: goto label_22278c;
        case 0x222790u: goto label_222790;
        case 0x222794u: goto label_222794;
        case 0x222798u: goto label_222798;
        case 0x22279cu: goto label_22279c;
        case 0x2227a0u: goto label_2227a0;
        case 0x2227a4u: goto label_2227a4;
        case 0x2227a8u: goto label_2227a8;
        case 0x2227acu: goto label_2227ac;
        case 0x2227b0u: goto label_2227b0;
        case 0x2227b4u: goto label_2227b4;
        case 0x2227b8u: goto label_2227b8;
        case 0x2227bcu: goto label_2227bc;
        case 0x2227c0u: goto label_2227c0;
        case 0x2227c4u: goto label_2227c4;
        case 0x2227c8u: goto label_2227c8;
        case 0x2227ccu: goto label_2227cc;
        case 0x2227d0u: goto label_2227d0;
        case 0x2227d4u: goto label_2227d4;
        case 0x2227d8u: goto label_2227d8;
        case 0x2227dcu: goto label_2227dc;
        case 0x2227e0u: goto label_2227e0;
        case 0x2227e4u: goto label_2227e4;
        case 0x2227e8u: goto label_2227e8;
        case 0x2227ecu: goto label_2227ec;
        case 0x2227f0u: goto label_2227f0;
        case 0x2227f4u: goto label_2227f4;
        case 0x2227f8u: goto label_2227f8;
        case 0x2227fcu: goto label_2227fc;
        case 0x222800u: goto label_222800;
        case 0x222804u: goto label_222804;
        case 0x222808u: goto label_222808;
        case 0x22280cu: goto label_22280c;
        case 0x222810u: goto label_222810;
        case 0x222814u: goto label_222814;
        case 0x222818u: goto label_222818;
        case 0x22281cu: goto label_22281c;
        case 0x222820u: goto label_222820;
        case 0x222824u: goto label_222824;
        case 0x222828u: goto label_222828;
        case 0x22282cu: goto label_22282c;
        case 0x222830u: goto label_222830;
        case 0x222834u: goto label_222834;
        case 0x222838u: goto label_222838;
        case 0x22283cu: goto label_22283c;
        case 0x222840u: goto label_222840;
        case 0x222844u: goto label_222844;
        case 0x222848u: goto label_222848;
        case 0x22284cu: goto label_22284c;
        case 0x222850u: goto label_222850;
        case 0x222854u: goto label_222854;
        case 0x222858u: goto label_222858;
        case 0x22285cu: goto label_22285c;
        case 0x222860u: goto label_222860;
        case 0x222864u: goto label_222864;
        case 0x222868u: goto label_222868;
        case 0x22286cu: goto label_22286c;
        case 0x222870u: goto label_222870;
        case 0x222874u: goto label_222874;
        case 0x222878u: goto label_222878;
        case 0x22287cu: goto label_22287c;
        case 0x222880u: goto label_222880;
        case 0x222884u: goto label_222884;
        case 0x222888u: goto label_222888;
        case 0x22288cu: goto label_22288c;
        case 0x222890u: goto label_222890;
        case 0x222894u: goto label_222894;
        case 0x222898u: goto label_222898;
        case 0x22289cu: goto label_22289c;
        case 0x2228a0u: goto label_2228a0;
        case 0x2228a4u: goto label_2228a4;
        case 0x2228a8u: goto label_2228a8;
        case 0x2228acu: goto label_2228ac;
        case 0x2228b0u: goto label_2228b0;
        case 0x2228b4u: goto label_2228b4;
        case 0x2228b8u: goto label_2228b8;
        case 0x2228bcu: goto label_2228bc;
        case 0x2228c0u: goto label_2228c0;
        case 0x2228c4u: goto label_2228c4;
        case 0x2228c8u: goto label_2228c8;
        case 0x2228ccu: goto label_2228cc;
        case 0x2228d0u: goto label_2228d0;
        case 0x2228d4u: goto label_2228d4;
        case 0x2228d8u: goto label_2228d8;
        case 0x2228dcu: goto label_2228dc;
        case 0x2228e0u: goto label_2228e0;
        case 0x2228e4u: goto label_2228e4;
        case 0x2228e8u: goto label_2228e8;
        case 0x2228ecu: goto label_2228ec;
        case 0x2228f0u: goto label_2228f0;
        case 0x2228f4u: goto label_2228f4;
        case 0x2228f8u: goto label_2228f8;
        case 0x2228fcu: goto label_2228fc;
        case 0x222900u: goto label_222900;
        case 0x222904u: goto label_222904;
        case 0x222908u: goto label_222908;
        case 0x22290cu: goto label_22290c;
        case 0x222910u: goto label_222910;
        case 0x222914u: goto label_222914;
        case 0x222918u: goto label_222918;
        case 0x22291cu: goto label_22291c;
        case 0x222920u: goto label_222920;
        case 0x222924u: goto label_222924;
        case 0x222928u: goto label_222928;
        case 0x22292cu: goto label_22292c;
        case 0x222930u: goto label_222930;
        case 0x222934u: goto label_222934;
        case 0x222938u: goto label_222938;
        case 0x22293cu: goto label_22293c;
        case 0x222940u: goto label_222940;
        case 0x222944u: goto label_222944;
        case 0x222948u: goto label_222948;
        case 0x22294cu: goto label_22294c;
        case 0x222950u: goto label_222950;
        case 0x222954u: goto label_222954;
        case 0x222958u: goto label_222958;
        case 0x22295cu: goto label_22295c;
        case 0x222960u: goto label_222960;
        case 0x222964u: goto label_222964;
        case 0x222968u: goto label_222968;
        case 0x22296cu: goto label_22296c;
        case 0x222970u: goto label_222970;
        case 0x222974u: goto label_222974;
        case 0x222978u: goto label_222978;
        case 0x22297cu: goto label_22297c;
        case 0x222980u: goto label_222980;
        case 0x222984u: goto label_222984;
        case 0x222988u: goto label_222988;
        case 0x22298cu: goto label_22298c;
        case 0x222990u: goto label_222990;
        case 0x222994u: goto label_222994;
        case 0x222998u: goto label_222998;
        case 0x22299cu: goto label_22299c;
        case 0x2229a0u: goto label_2229a0;
        case 0x2229a4u: goto label_2229a4;
        case 0x2229a8u: goto label_2229a8;
        case 0x2229acu: goto label_2229ac;
        case 0x2229b0u: goto label_2229b0;
        case 0x2229b4u: goto label_2229b4;
        case 0x2229b8u: goto label_2229b8;
        case 0x2229bcu: goto label_2229bc;
        case 0x2229c0u: goto label_2229c0;
        case 0x2229c4u: goto label_2229c4;
        case 0x2229c8u: goto label_2229c8;
        case 0x2229ccu: goto label_2229cc;
        case 0x2229d0u: goto label_2229d0;
        case 0x2229d4u: goto label_2229d4;
        case 0x2229d8u: goto label_2229d8;
        case 0x2229dcu: goto label_2229dc;
        case 0x2229e0u: goto label_2229e0;
        case 0x2229e4u: goto label_2229e4;
        case 0x2229e8u: goto label_2229e8;
        case 0x2229ecu: goto label_2229ec;
        case 0x2229f0u: goto label_2229f0;
        case 0x2229f4u: goto label_2229f4;
        case 0x2229f8u: goto label_2229f8;
        case 0x2229fcu: goto label_2229fc;
        case 0x222a00u: goto label_222a00;
        case 0x222a04u: goto label_222a04;
        case 0x222a08u: goto label_222a08;
        case 0x222a0cu: goto label_222a0c;
        case 0x222a10u: goto label_222a10;
        case 0x222a14u: goto label_222a14;
        case 0x222a18u: goto label_222a18;
        case 0x222a1cu: goto label_222a1c;
        case 0x222a20u: goto label_222a20;
        case 0x222a24u: goto label_222a24;
        case 0x222a28u: goto label_222a28;
        case 0x222a2cu: goto label_222a2c;
        case 0x222a30u: goto label_222a30;
        case 0x222a34u: goto label_222a34;
        case 0x222a38u: goto label_222a38;
        case 0x222a3cu: goto label_222a3c;
        case 0x222a40u: goto label_222a40;
        case 0x222a44u: goto label_222a44;
        case 0x222a48u: goto label_222a48;
        case 0x222a4cu: goto label_222a4c;
        case 0x222a50u: goto label_222a50;
        case 0x222a54u: goto label_222a54;
        case 0x222a58u: goto label_222a58;
        case 0x222a5cu: goto label_222a5c;
        case 0x222a60u: goto label_222a60;
        case 0x222a64u: goto label_222a64;
        case 0x222a68u: goto label_222a68;
        case 0x222a6cu: goto label_222a6c;
        case 0x222a70u: goto label_222a70;
        case 0x222a74u: goto label_222a74;
        case 0x222a78u: goto label_222a78;
        case 0x222a7cu: goto label_222a7c;
        case 0x222a80u: goto label_222a80;
        case 0x222a84u: goto label_222a84;
        case 0x222a88u: goto label_222a88;
        case 0x222a8cu: goto label_222a8c;
        case 0x222a90u: goto label_222a90;
        case 0x222a94u: goto label_222a94;
        case 0x222a98u: goto label_222a98;
        case 0x222a9cu: goto label_222a9c;
        case 0x222aa0u: goto label_222aa0;
        case 0x222aa4u: goto label_222aa4;
        case 0x222aa8u: goto label_222aa8;
        case 0x222aacu: goto label_222aac;
        case 0x222ab0u: goto label_222ab0;
        case 0x222ab4u: goto label_222ab4;
        case 0x222ab8u: goto label_222ab8;
        case 0x222abcu: goto label_222abc;
        case 0x222ac0u: goto label_222ac0;
        case 0x222ac4u: goto label_222ac4;
        case 0x222ac8u: goto label_222ac8;
        case 0x222accu: goto label_222acc;
        case 0x222ad0u: goto label_222ad0;
        case 0x222ad4u: goto label_222ad4;
        case 0x222ad8u: goto label_222ad8;
        case 0x222adcu: goto label_222adc;
        case 0x222ae0u: goto label_222ae0;
        case 0x222ae4u: goto label_222ae4;
        case 0x222ae8u: goto label_222ae8;
        case 0x222aecu: goto label_222aec;
        case 0x222af0u: goto label_222af0;
        case 0x222af4u: goto label_222af4;
        case 0x222af8u: goto label_222af8;
        case 0x222afcu: goto label_222afc;
        case 0x222b00u: goto label_222b00;
        case 0x222b04u: goto label_222b04;
        case 0x222b08u: goto label_222b08;
        case 0x222b0cu: goto label_222b0c;
        case 0x222b10u: goto label_222b10;
        case 0x222b14u: goto label_222b14;
        case 0x222b18u: goto label_222b18;
        case 0x222b1cu: goto label_222b1c;
        case 0x222b20u: goto label_222b20;
        case 0x222b24u: goto label_222b24;
        case 0x222b28u: goto label_222b28;
        case 0x222b2cu: goto label_222b2c;
        case 0x222b30u: goto label_222b30;
        case 0x222b34u: goto label_222b34;
        case 0x222b38u: goto label_222b38;
        case 0x222b3cu: goto label_222b3c;
        case 0x222b40u: goto label_222b40;
        case 0x222b44u: goto label_222b44;
        case 0x222b48u: goto label_222b48;
        case 0x222b4cu: goto label_222b4c;
        case 0x222b50u: goto label_222b50;
        case 0x222b54u: goto label_222b54;
        case 0x222b58u: goto label_222b58;
        case 0x222b5cu: goto label_222b5c;
        case 0x222b60u: goto label_222b60;
        case 0x222b64u: goto label_222b64;
        case 0x222b68u: goto label_222b68;
        case 0x222b6cu: goto label_222b6c;
        case 0x222b70u: goto label_222b70;
        case 0x222b74u: goto label_222b74;
        case 0x222b78u: goto label_222b78;
        case 0x222b7cu: goto label_222b7c;
        case 0x222b80u: goto label_222b80;
        case 0x222b84u: goto label_222b84;
        case 0x222b88u: goto label_222b88;
        case 0x222b8cu: goto label_222b8c;
        case 0x222b90u: goto label_222b90;
        case 0x222b94u: goto label_222b94;
        case 0x222b98u: goto label_222b98;
        case 0x222b9cu: goto label_222b9c;
        case 0x222ba0u: goto label_222ba0;
        case 0x222ba4u: goto label_222ba4;
        case 0x222ba8u: goto label_222ba8;
        case 0x222bacu: goto label_222bac;
        case 0x222bb0u: goto label_222bb0;
        case 0x222bb4u: goto label_222bb4;
        case 0x222bb8u: goto label_222bb8;
        case 0x222bbcu: goto label_222bbc;
        case 0x222bc0u: goto label_222bc0;
        case 0x222bc4u: goto label_222bc4;
        case 0x222bc8u: goto label_222bc8;
        case 0x222bccu: goto label_222bcc;
        case 0x222bd0u: goto label_222bd0;
        case 0x222bd4u: goto label_222bd4;
        case 0x222bd8u: goto label_222bd8;
        case 0x222bdcu: goto label_222bdc;
        case 0x222be0u: goto label_222be0;
        case 0x222be4u: goto label_222be4;
        case 0x222be8u: goto label_222be8;
        case 0x222becu: goto label_222bec;
        case 0x222bf0u: goto label_222bf0;
        case 0x222bf4u: goto label_222bf4;
        case 0x222bf8u: goto label_222bf8;
        case 0x222bfcu: goto label_222bfc;
        case 0x222c00u: goto label_222c00;
        case 0x222c04u: goto label_222c04;
        case 0x222c08u: goto label_222c08;
        case 0x222c0cu: goto label_222c0c;
        case 0x222c10u: goto label_222c10;
        case 0x222c14u: goto label_222c14;
        case 0x222c18u: goto label_222c18;
        case 0x222c1cu: goto label_222c1c;
        case 0x222c20u: goto label_222c20;
        case 0x222c24u: goto label_222c24;
        case 0x222c28u: goto label_222c28;
        case 0x222c2cu: goto label_222c2c;
        case 0x222c30u: goto label_222c30;
        case 0x222c34u: goto label_222c34;
        case 0x222c38u: goto label_222c38;
        case 0x222c3cu: goto label_222c3c;
        case 0x222c40u: goto label_222c40;
        case 0x222c44u: goto label_222c44;
        case 0x222c48u: goto label_222c48;
        case 0x222c4cu: goto label_222c4c;
        case 0x222c50u: goto label_222c50;
        case 0x222c54u: goto label_222c54;
        case 0x222c58u: goto label_222c58;
        case 0x222c5cu: goto label_222c5c;
        case 0x222c60u: goto label_222c60;
        case 0x222c64u: goto label_222c64;
        case 0x222c68u: goto label_222c68;
        case 0x222c6cu: goto label_222c6c;
        case 0x222c70u: goto label_222c70;
        case 0x222c74u: goto label_222c74;
        case 0x222c78u: goto label_222c78;
        case 0x222c7cu: goto label_222c7c;
        case 0x222c80u: goto label_222c80;
        case 0x222c84u: goto label_222c84;
        case 0x222c88u: goto label_222c88;
        case 0x222c8cu: goto label_222c8c;
        case 0x222c90u: goto label_222c90;
        case 0x222c94u: goto label_222c94;
        case 0x222c98u: goto label_222c98;
        case 0x222c9cu: goto label_222c9c;
        case 0x222ca0u: goto label_222ca0;
        case 0x222ca4u: goto label_222ca4;
        case 0x222ca8u: goto label_222ca8;
        case 0x222cacu: goto label_222cac;
        case 0x222cb0u: goto label_222cb0;
        case 0x222cb4u: goto label_222cb4;
        case 0x222cb8u: goto label_222cb8;
        case 0x222cbcu: goto label_222cbc;
        case 0x222cc0u: goto label_222cc0;
        default: break;
    }

    ctx->pc = 0x221df0u;

label_221df0:
    // 0x221df0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x221df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_221df4:
    // 0x221df4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x221df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_221df8:
    // 0x221df8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x221df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_221dfc:
    // 0x221dfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x221dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_221e00:
    // 0x221e00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x221e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_221e04:
    // 0x221e04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x221e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_221e08:
    // 0x221e08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x221e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_221e0c:
    // 0x221e0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x221e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_221e10:
    // 0x221e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_221e14:
    // 0x221e14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_221e18:
    // 0x221e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_221e1c:
    // 0x221e1c: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x221e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
label_221e20:
    // 0x221e20: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x221e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_221e24:
    // 0x221e24: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x221e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_221e28:
    // 0x221e28: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x221e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_221e2c:
    // 0x221e2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x221e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_221e30:
    // 0x221e30: 0x2454bb48  addiu       $s4, $v0, -0x44B8
    ctx->pc = 0x221e30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
label_221e34:
    // 0x221e34: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x221e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221e38:
    // 0x221e38: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x221e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_221e3c:
    // 0x221e3c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x221e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_221e40:
    // 0x221e40: 0x5223c  dsll32      $a0, $a1, 8
    ctx->pc = 0x221e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 8));
label_221e44:
    // 0x221e44: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x221e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
label_221e48:
    // 0x221e48: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x221e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
label_221e4c:
    // 0x221e4c: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x221e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221e50:
    // 0x221e50: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x221e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_221e54:
    // 0x221e54: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x221e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221e58:
    // 0x221e58: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x221e58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_221e5c:
    // 0x221e5c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x221e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_221e60:
    // 0x221e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x221e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_221e64:
    // 0x221e64: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x221e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_221e68:
    // 0x221e68: 0x2463ad90  addiu       $v1, $v1, -0x5270
    ctx->pc = 0x221e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946192));
label_221e6c:
    // 0x221e6c: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x221e6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_221e70:
    // 0x221e70: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x221e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_221e74:
    // 0x221e74: 0x40f809  jalr        $v0
label_221e78:
    if (ctx->pc == 0x221E78u) {
        ctx->pc = 0x221E7Cu;
        goto label_221e7c;
    }
    ctx->pc = 0x221E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221E7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221E74u, 0x221E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x221E7Cu;
label_221e7c:
    // 0x221e7c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x221e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221e80:
    // 0x221e80: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x221e80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_221e84:
    // 0x221e84: 0xc08c48c  jal         func_231230
label_221e88:
    if (ctx->pc == 0x221E88u) {
        ctx->pc = 0x221E8Cu;
        goto label_221e8c;
    }
    ctx->pc = 0x221E84u;
    SET_GPR_U32(ctx, 31, 0x221E8Cu);
    ctx->pc = 0x231230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231230u, 0x221E84u, 0x221E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E8Cu;
label_221e8c:
    // 0x221e8c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221e90:
    // 0x221e90: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x221e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_221e94:
    // 0x221e94: 0xc08ceb8  jal         func_233AE0
label_221e98:
    if (ctx->pc == 0x221E98u) {
        ctx->pc = 0x221E9Cu;
        goto label_221e9c;
    }
    ctx->pc = 0x221E94u;
    SET_GPR_U32(ctx, 31, 0x221E9Cu);
    ctx->pc = 0x233AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233AE0u, 0x221E94u, 0x221E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E9Cu;
label_221e9c:
    // 0x221e9c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221ea0:
    // 0x221ea0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221ea0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221ea4:
    // 0x221ea4: 0xc07e67c  jal         func_1F99F0
label_221ea8:
    if (ctx->pc == 0x221EA8u) {
        ctx->pc = 0x221EACu;
        goto label_221eac;
    }
    ctx->pc = 0x221EA4u;
    SET_GPR_U32(ctx, 31, 0x221EACu);
    ctx->pc = 0x1F99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99F0u, 0x221EA4u, 0x221EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EACu;
label_221eac:
    // 0x221eac: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221eb0:
    // 0x221eb0: 0xc07e82c  jal         func_1FA0B0
label_221eb4:
    if (ctx->pc == 0x221EB4u) {
        ctx->pc = 0x221EB8u;
        goto label_221eb8;
    }
    ctx->pc = 0x221EB0u;
    SET_GPR_U32(ctx, 31, 0x221EB8u);
    ctx->pc = 0x1FA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA0B0u, 0x221EB0u, 0x221EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EB8u;
label_221eb8:
    // 0x221eb8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x221eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221ebc:
    // 0x221ebc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221ec0:
    // 0x221ec0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221ec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221ec4:
    // 0x221ec4: 0xc07e8a8  jal         func_1FA2A0
label_221ec8:
    if (ctx->pc == 0x221EC8u) {
        ctx->pc = 0x221ECCu;
        goto label_221ecc;
    }
    ctx->pc = 0x221EC4u;
    SET_GPR_U32(ctx, 31, 0x221ECCu);
    ctx->pc = 0x1FA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA2A0u, 0x221EC4u, 0x221ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221ECCu;
label_221ecc:
    // 0x221ecc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x221eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_221ed0:
    // 0x221ed0: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x221ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_221ed4:
    // 0x221ed4: 0x30558000  andi        $s5, $v0, 0x8000
    ctx->pc = 0x221ed4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_221ed8:
    // 0x221ed8: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
label_221edc:
    if (ctx->pc == 0x221EDCu) {
        ctx->pc = 0x221EE0u;
        goto label_221ee0;
    }
    ctx->pc = 0x221ED8u;
    {
        const bool branch_taken_0x221ed8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x221ed8) {
            ctx->pc = 0x221F9Cu;
            goto label_221f9c;
        }
    }
    ctx->pc = 0x221EE0u;
label_221ee0:
    // 0x221ee0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221ee4:
    // 0x221ee4: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x221ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_221ee8:
    // 0x221ee8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x221ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_221eec:
    // 0x221eec: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x221eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_221ef0:
    // 0x221ef0: 0xa6a824  and         $s5, $a1, $a2
    ctx->pc = 0x221ef0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_221ef4:
    // 0x221ef4: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_221ef8:
    if (ctx->pc == 0x221EF8u) {
        ctx->pc = 0x221EFCu;
        goto label_221efc;
    }
    ctx->pc = 0x221EF4u;
    {
        const bool branch_taken_0x221ef4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x221ef4) {
            ctx->pc = 0x221F18u;
            goto label_221f18;
        }
    }
    ctx->pc = 0x221EFCu;
label_221efc:
    // 0x221efc: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x221efcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221f00:
    // 0x221f00: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x221f00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_221f04:
    // 0x221f04: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x221f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_221f08:
    // 0x221f08: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x221f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_221f0c:
    // 0x221f0c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x221f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_221f10:
    // 0x221f10: 0x10000027  b           . + 4 + (0x27 << 2)
label_221f14:
    if (ctx->pc == 0x221F14u) {
        ctx->pc = 0x221F18u;
        goto label_221f18;
    }
    ctx->pc = 0x221F10u;
    {
        const bool branch_taken_0x221f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f10) {
            ctx->pc = 0x221FB0u;
            goto label_221fb0;
        }
    }
    ctx->pc = 0x221F18u;
label_221f18:
    // 0x221f18: 0x8fbe00e8  lw          $fp, 0xE8($sp)
    ctx->pc = 0x221f18u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221f1c:
    // 0x221f1c: 0xc7c1128c  lwc1        $f1, 0x128C($fp)
    ctx->pc = 0x221f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_221f20:
    // 0x221f20: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x221f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
label_221f24:
    // 0x221f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221f28:
    // 0x221f28: 0x0  nop
    ctx->pc = 0x221f28u;
    // NOP
label_221f2c:
    // 0x221f2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x221f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_221f30:
    // 0x221f30: 0x0  nop
    ctx->pc = 0x221f30u;
    // NOP
label_221f34:
    // 0x221f34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_221f38:
    if (ctx->pc == 0x221F38u) {
        ctx->pc = 0x221F3Cu;
        goto label_221f3c;
    }
    ctx->pc = 0x221F34u;
    {
        const bool branch_taken_0x221f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221f34) {
            ctx->pc = 0x221F4Cu;
            goto label_221f4c;
        }
    }
    ctx->pc = 0x221F3Cu;
label_221f3c:
    // 0x221f3c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x221f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221f40:
    // 0x221f40: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x221f40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_221f44:
    // 0x221f44: 0x36030004  ori         $v1, $s0, 0x4
    ctx->pc = 0x221f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_221f48:
    // 0x221f48: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x221f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_221f4c:
    // 0x221f4c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x221f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221f50:
    // 0x221f50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x221f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_221f54:
    // 0x221f54: 0x845e005c  lh          $fp, 0x5C($v0)
    ctx->pc = 0x221f54u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_221f58:
    // 0x221f58: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x221f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
label_221f5c:
    // 0x221f5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x221f5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_221f60:
    // 0x221f60: 0x2861005a  slti        $at, $v1, 0x5A
    ctx->pc = 0x221f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)90) ? 1 : 0);
label_221f64:
    // 0x221f64: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_221f68:
    if (ctx->pc == 0x221F68u) {
        ctx->pc = 0x221F6Cu;
        goto label_221f6c;
    }
    ctx->pc = 0x221F64u;
    {
        const bool branch_taken_0x221f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f64) {
            ctx->pc = 0x221FB0u;
            goto label_221fb0;
        }
    }
    ctx->pc = 0x221F6Cu;
label_221f6c:
    // 0x221f6c: 0xc067694  jal         func_19DA50
label_221f70:
    if (ctx->pc == 0x221F70u) {
        ctx->pc = 0x221F74u;
        goto label_221f74;
    }
    ctx->pc = 0x221F6Cu;
    SET_GPR_U32(ctx, 31, 0x221F74u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x221F6Cu, 0x221F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F74u;
label_221f74:
    // 0x221f74: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x221f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_221f78:
    // 0x221f78: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x221f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_221f7c:
    // 0x221f7c: 0x2486005a  addiu       $a2, $a0, 0x5A
    ctx->pc = 0x221f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
label_221f80:
    // 0x221f80: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x221f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
label_221f84:
    // 0x221f84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x221f84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_221f88:
    // 0x221f88: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221f8c:
    // 0x221f8c: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x221f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_221f90:
    // 0x221f90: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x221f90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
label_221f94:
    // 0x221f94: 0x10000006  b           . + 4 + (0x6 << 2)
label_221f98:
    if (ctx->pc == 0x221F98u) {
        ctx->pc = 0x221F9Cu;
        goto label_221f9c;
    }
    ctx->pc = 0x221F94u;
    {
        const bool branch_taken_0x221f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f94) {
            ctx->pc = 0x221FB0u;
            goto label_221fb0;
        }
    }
    ctx->pc = 0x221F9Cu;
label_221f9c:
    // 0x221f9c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221fa0:
    // 0x221fa0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x221fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_221fa4:
    // 0x221fa4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x221fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_221fa8:
    // 0x221fa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x221fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_221fac:
    // 0x221fac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x221facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_221fb0:
    // 0x221fb0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221fb4:
    // 0x221fb4: 0x24871330  addiu       $a3, $a0, 0x1330
    ctx->pc = 0x221fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_221fb8:
    // 0x221fb8: 0x8ce60030  lw          $a2, 0x30($a3)
    ctx->pc = 0x221fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_221fbc:
    // 0x221fbc: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x221fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
label_221fc0:
    // 0x221fc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_221fc4:
    if (ctx->pc == 0x221FC4u) {
        ctx->pc = 0x221FC8u;
        goto label_221fc8;
    }
    ctx->pc = 0x221FC0u;
    {
        const bool branch_taken_0x221fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221fc0) {
            ctx->pc = 0x221FF8u;
            goto label_221ff8;
        }
    }
    ctx->pc = 0x221FC8u;
label_221fc8:
    // 0x221fc8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x221fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221fcc:
    // 0x221fcc: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x221fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_221fd0:
    // 0x221fd0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x221fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_221fd4:
    // 0x221fd4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x221fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221fd8:
    // 0x221fd8: 0xc4a000d4  lwc1        $f0, 0xD4($a1)
    ctx->pc = 0x221fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221fdc:
    // 0x221fdc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x221fdcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_221fe0:
    // 0x221fe0: 0xc058fec  jal         func_163FB0
label_221fe4:
    if (ctx->pc == 0x221FE4u) {
        ctx->pc = 0x221FE8u;
        goto label_221fe8;
    }
    ctx->pc = 0x221FE0u;
    SET_GPR_U32(ctx, 31, 0x221FE8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x221FE0u, 0x221FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FE8u;
label_221fe8:
    // 0x221fe8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_221fec:
    // 0x221fec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x221fecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_221ff0:
    // 0x221ff0: 0xc05cd78  jal         func_1735E0
label_221ff4:
    if (ctx->pc == 0x221FF4u) {
        ctx->pc = 0x221FF8u;
        goto label_221ff8;
    }
    ctx->pc = 0x221FF0u;
    SET_GPR_U32(ctx, 31, 0x221FF8u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x221FF0u, 0x221FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FF8u;
label_221ff8:
    // 0x221ff8: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x221ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_221ffc:
    // 0x221ffc: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x221ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222000:
    // 0x222000: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x222000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_222004:
    // 0x222004: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x222004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_222008:
    // 0x222008: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x222008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_22200c:
    // 0x22200c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22200cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_222010:
    // 0x222010: 0xc05d328  jal         func_174CA0
label_222014:
    if (ctx->pc == 0x222014u) {
        ctx->pc = 0x222018u;
        goto label_222018;
    }
    ctx->pc = 0x222010u;
    SET_GPR_U32(ctx, 31, 0x222018u);
    ctx->pc = 0x174CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174CA0u, 0x222010u, 0x222018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222018u;
label_222018:
    // 0x222018: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x222018u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22201c:
    // 0x22201c: 0x8fb700e8  lw          $s7, 0xE8($sp)
    ctx->pc = 0x22201cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222020:
    // 0x222020: 0x26e21330  addiu       $v0, $s7, 0x1330
    ctx->pc = 0x222020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4912));
label_222024:
    // 0x222024: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x222024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_222028:
    // 0x222028: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x222028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22202c:
    // 0x22202c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x22202cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_222030:
    // 0x222030: 0xacc00064  sw          $zero, 0x64($a2)
    ctx->pc = 0x222030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 0));
label_222034:
    // 0x222034: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x222034u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_222038:
    // 0x222038: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x222038u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22203c:
    // 0x22203c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_222040:
    if (ctx->pc == 0x222040u) {
        ctx->pc = 0x222044u;
        goto label_222044;
    }
    ctx->pc = 0x22203Cu;
    {
        const bool branch_taken_0x22203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22203c) {
            ctx->pc = 0x2220A8u;
            goto label_2220a8;
        }
    }
    ctx->pc = 0x222044u;
label_222044:
    // 0x222044: 0x32270001  andi        $a3, $s1, 0x1
    ctx->pc = 0x222044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_222048:
    // 0x222048: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
label_22204c:
    if (ctx->pc == 0x22204Cu) {
        ctx->pc = 0x222050u;
        goto label_222050;
    }
    ctx->pc = 0x222048u;
    {
        const bool branch_taken_0x222048 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x222048) {
            ctx->pc = 0x2220A0u;
            goto label_2220a0;
        }
    }
    ctx->pc = 0x222050u;
label_222050:
    // 0x222050: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_222054:
    if (ctx->pc == 0x222054u) {
        ctx->pc = 0x222058u;
        goto label_222058;
    }
    ctx->pc = 0x222050u;
    {
        const bool branch_taken_0x222050 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x222050) {
            ctx->pc = 0x222078u;
            goto label_222078;
        }
    }
    ctx->pc = 0x222058u;
label_222058:
    // 0x222058: 0x134080  sll         $t0, $s3, 2
    ctx->pc = 0x222058u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22205c:
    // 0x22205c: 0x2884821  addu        $t1, $s4, $t0
    ctx->pc = 0x22205cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_222060:
    // 0x222060: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x222060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_222064:
    // 0x222064: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222068:
    // 0x222068: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x222068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_22206c:
    // 0x22206c: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x22206cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
label_222070:
    // 0x222070: 0x10000007  b           . + 4 + (0x7 << 2)
label_222074:
    if (ctx->pc == 0x222074u) {
        ctx->pc = 0x222078u;
        goto label_222078;
    }
    ctx->pc = 0x222070u;
    {
        const bool branch_taken_0x222070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222070) {
            ctx->pc = 0x222090u;
            goto label_222090;
        }
    }
    ctx->pc = 0x222078u;
label_222078:
    // 0x222078: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x222078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22207c:
    // 0x22207c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x22207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_222080:
    // 0x222080: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x222080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_222084:
    // 0x222084: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x222084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222088:
    // 0x222088: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x222088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_22208c:
    // 0x22208c: 0xacc50064  sw          $a1, 0x64($a2)
    ctx->pc = 0x22208cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 5));
label_222090:
    // 0x222090: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x222090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_222094:
    // 0x222094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x222094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_222098:
    // 0x222098: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_22209c:
    if (ctx->pc == 0x22209Cu) {
        ctx->pc = 0x2220A0u;
        goto label_2220a0;
    }
    ctx->pc = 0x222098u;
    {
        const bool branch_taken_0x222098 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x222098) {
            ctx->pc = 0x2220B0u;
            goto label_2220b0;
        }
    }
    ctx->pc = 0x2220A0u;
label_2220a0:
    // 0x2220a0: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x2220a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
label_2220a4:
    // 0x2220a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2220a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2220a8:
    // 0x2220a8: 0x1620ffe6  bnez        $s1, . + 4 + (-0x1A << 2)
label_2220ac:
    if (ctx->pc == 0x2220ACu) {
        ctx->pc = 0x2220B0u;
        goto label_2220b0;
    }
    ctx->pc = 0x2220A8u;
    {
        const bool branch_taken_0x2220a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2220a8) {
            ctx->pc = 0x222044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222044;
        }
    }
    ctx->pc = 0x2220B0u;
label_2220b0:
    // 0x2220b0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2220b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2220b4:
    // 0x2220b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2220b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2220b8:
    // 0x2220b8: 0x8c221a50  lw          $v0, 0x1A50($at)
    ctx->pc = 0x2220b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_2220bc:
    // 0x2220bc: 0x30570010  andi        $s7, $v0, 0x10
    ctx->pc = 0x2220bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2220c0:
    // 0x2220c0: 0x16e00009  bnez        $s7, . + 4 + (0x9 << 2)
label_2220c4:
    if (ctx->pc == 0x2220C4u) {
        ctx->pc = 0x2220C8u;
        goto label_2220c8;
    }
    ctx->pc = 0x2220C0u;
    {
        const bool branch_taken_0x2220c0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2220c0) {
            ctx->pc = 0x2220E8u;
            goto label_2220e8;
        }
    }
    ctx->pc = 0x2220C8u;
label_2220c8:
    // 0x2220c8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2220c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2220cc:
    // 0x2220cc: 0xc07e5f0  jal         func_1F97C0
label_2220d0:
    if (ctx->pc == 0x2220D0u) {
        ctx->pc = 0x2220D4u;
        goto label_2220d4;
    }
    ctx->pc = 0x2220CCu;
    SET_GPR_U32(ctx, 31, 0x2220D4u);
    ctx->pc = 0x1F97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F97C0u, 0x2220CCu, 0x2220D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220D4u;
label_2220d4:
    // 0x2220d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2220d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2220d8:
    // 0x2220d8: 0x8c371a50  lw          $s7, 0x1A50($at)
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_2220dc:
    // 0x2220dc: 0x36e20010  ori         $v0, $s7, 0x10
    ctx->pc = 0x2220dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_2220e0:
    // 0x2220e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2220e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2220e4:
    // 0x2220e4: 0xac221a50  sw          $v0, 0x1A50($at)
    ctx->pc = 0x2220e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 2));
label_2220e8:
    // 0x2220e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2220e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2220ec:
    // 0x2220ec: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x2220ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2220f0:
    // 0x2220f0: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2220f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2220f4:
    // 0x2220f4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2220f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2220f8:
    // 0x2220f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2220fc:
    if (ctx->pc == 0x2220FCu) {
        ctx->pc = 0x222100u;
        goto label_222100;
    }
    ctx->pc = 0x2220F8u;
    {
        const bool branch_taken_0x2220f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2220f8) {
            ctx->pc = 0x222118u;
            goto label_222118;
        }
    }
    ctx->pc = 0x222100u;
label_222100:
    // 0x222100: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x222100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222104:
    // 0x222104: 0x24c410b0  addiu       $a0, $a2, 0x10B0
    ctx->pc = 0x222104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4272));
label_222108:
    // 0x222108: 0xc0624b4  jal         func_1892D0
label_22210c:
    if (ctx->pc == 0x22210Cu) {
        ctx->pc = 0x222110u;
        goto label_222110;
    }
    ctx->pc = 0x222108u;
    SET_GPR_U32(ctx, 31, 0x222110u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x222108u, 0x222110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222110u;
label_222110:
    // 0x222110: 0x10000005  b           . + 4 + (0x5 << 2)
label_222114:
    if (ctx->pc == 0x222114u) {
        ctx->pc = 0x222118u;
        goto label_222118;
    }
    ctx->pc = 0x222110u;
    {
        const bool branch_taken_0x222110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222110) {
            ctx->pc = 0x222128u;
            goto label_222128;
        }
    }
    ctx->pc = 0x222118u;
label_222118:
    // 0x222118: 0x8fb700e8  lw          $s7, 0xE8($sp)
    ctx->pc = 0x222118u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22211c:
    // 0x22211c: 0x26e410b0  addiu       $a0, $s7, 0x10B0
    ctx->pc = 0x22211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4272));
label_222120:
    // 0x222120: 0xc0624f8  jal         func_1893E0
label_222124:
    if (ctx->pc == 0x222124u) {
        ctx->pc = 0x222128u;
        goto label_222128;
    }
    ctx->pc = 0x222120u;
    SET_GPR_U32(ctx, 31, 0x222128u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x222120u, 0x222128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222128u;
label_222128:
    // 0x222128: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22212c:
    // 0x22212c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x22212cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_222130:
    // 0x222130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222134:
    // 0x222134: 0xc05d25c  jal         func_174970
label_222138:
    if (ctx->pc == 0x222138u) {
        ctx->pc = 0x22213Cu;
        goto label_22213c;
    }
    ctx->pc = 0x222134u;
    SET_GPR_U32(ctx, 31, 0x22213Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x222134u, 0x22213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22213Cu;
label_22213c:
    // 0x22213c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_222140:
    if (ctx->pc == 0x222140u) {
        ctx->pc = 0x222144u;
        goto label_222144;
    }
    ctx->pc = 0x22213Cu;
    {
        const bool branch_taken_0x22213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22213c) {
            ctx->pc = 0x22216Cu;
            goto label_22216c;
        }
    }
    ctx->pc = 0x222144u;
label_222144:
    // 0x222144: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x222144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222148:
    // 0x222148: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x222148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
label_22214c:
    // 0x22214c: 0x84440094  lh          $a0, 0x94($v0)
    ctx->pc = 0x22214cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
label_222150:
    // 0x222150: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x222150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_222154:
    // 0x222154: 0xa4430094  sh          $v1, 0x94($v0)
    ctx->pc = 0x222154u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 3));
label_222158:
    // 0x222158: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22215c:
    // 0x22215c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_222160:
    // 0x222160: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x222160u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
label_222164:
    // 0x222164: 0x10000009  b           . + 4 + (0x9 << 2)
label_222168:
    if (ctx->pc == 0x222168u) {
        ctx->pc = 0x22216Cu;
        goto label_22216c;
    }
    ctx->pc = 0x222164u;
    {
        const bool branch_taken_0x222164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222164) {
            ctx->pc = 0x22218Cu;
            goto label_22218c;
        }
    }
    ctx->pc = 0x22216Cu;
label_22216c:
    // 0x22216c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x22216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222170:
    // 0x222170: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x222170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_222174:
    // 0x222174: 0xa4400094  sh          $zero, 0x94($v0)
    ctx->pc = 0x222174u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 0));
label_222178:
    // 0x222178: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x222178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22217c:
    // 0x22217c: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x22217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_222180:
    // 0x222180: 0x84440096  lh          $a0, 0x96($v0)
    ctx->pc = 0x222180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
label_222184:
    // 0x222184: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x222184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_222188:
    // 0x222188: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x222188u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 3));
label_22218c:
    // 0x22218c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x22218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222190:
    // 0x222190: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x222190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_222194:
    // 0x222194: 0x90830073  lbu         $v1, 0x73($a0)
    ctx->pc = 0x222194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 115)));
label_222198:
    // 0x222198: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x222198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22219c:
    // 0x22219c: 0xa0830073  sb          $v1, 0x73($a0)
    ctx->pc = 0x22219cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 115), (uint8_t)GPR_U32(ctx, 3));
label_2221a0:
    // 0x2221a0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2221a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2221a4:
    // 0x2221a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2221a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2221a8:
    // 0x2221a8: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x2221a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
label_2221ac:
    // 0x2221ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2221acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2221b0:
    // 0x2221b0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2221b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2221b4:
    // 0x2221b4: 0x146000bc  bnez        $v1, . + 4 + (0xBC << 2)
label_2221b8:
    if (ctx->pc == 0x2221B8u) {
        ctx->pc = 0x2221BCu;
        goto label_2221bc;
    }
    ctx->pc = 0x2221B4u;
    {
        const bool branch_taken_0x2221b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2221b4) {
            ctx->pc = 0x2224A8u;
            goto label_2224a8;
        }
    }
    ctx->pc = 0x2221BCu;
label_2221bc:
    // 0x2221bc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2221bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2221c0:
    // 0x2221c0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2221c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_2221c4:
    // 0x2221c4: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2221c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_2221c8:
    // 0x2221c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2221c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2221cc:
    // 0x2221cc: 0x44000b6  bltz        $v0, . + 4 + (0xB6 << 2)
label_2221d0:
    if (ctx->pc == 0x2221D0u) {
        ctx->pc = 0x2221D4u;
        goto label_2221d4;
    }
    ctx->pc = 0x2221CCu;
    {
        const bool branch_taken_0x2221cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2221cc) {
            ctx->pc = 0x2224A8u;
            goto label_2224a8;
        }
    }
    ctx->pc = 0x2221D4u;
label_2221d4:
    // 0x2221d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2221d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2221d8:
    // 0x2221d8: 0x0  nop
    ctx->pc = 0x2221d8u;
    // NOP
label_2221dc:
    // 0x2221dc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2221dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2221e0:
    // 0x2221e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2221e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2221e4:
    // 0x2221e4: 0x0  nop
    ctx->pc = 0x2221e4u;
    // NOP
label_2221e8:
    // 0x2221e8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2221e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2221ec:
    // 0x2221ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2221ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2221f0:
    // 0x2221f0: 0x0  nop
    ctx->pc = 0x2221f0u;
    // NOP
label_2221f4:
    // 0x2221f4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2221f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2221f8:
    // 0x2221f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2221f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2221fc:
    // 0x2221fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2221fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222200:
    // 0x222200: 0x0  nop
    ctx->pc = 0x222200u;
    // NOP
label_222204:
    // 0x222204: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x222204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_222208:
    // 0x222208: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22220c:
    // 0x22220c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_222210:
    // 0x222210: 0x945e00aa  lhu         $fp, 0xAA($v0)
    ctx->pc = 0x222210u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
label_222214:
    // 0x222214: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x222214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_222218:
    // 0x222218: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x222218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_22221c:
    // 0x22221c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_222220:
    if (ctx->pc == 0x222220u) {
        ctx->pc = 0x222224u;
        goto label_222224;
    }
    ctx->pc = 0x22221Cu;
    {
        const bool branch_taken_0x22221c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22221c) {
            ctx->pc = 0x22235Cu;
            goto label_22235c;
        }
    }
    ctx->pc = 0x222224u;
label_222224:
    // 0x222224: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x222224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_222228:
    // 0x222228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22222c:
    // 0x22222c: 0x0  nop
    ctx->pc = 0x22222cu;
    // NOP
label_222230:
    // 0x222230: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x222230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_222234:
    // 0x222234: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222238:
    // 0x222238: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x222238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_22223c:
    // 0x22223c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x22223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_222240:
    // 0x222240: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x222240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_222244:
    // 0x222244: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x222244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_222248:
    // 0x222248: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x222248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_22224c:
    // 0x22224c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22224cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_222250:
    // 0x222250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x222250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_222254:
    // 0x222254: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x222254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_222258:
    // 0x222258: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x222258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
label_22225c:
    // 0x22225c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22225cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_222260:
    // 0x222260: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_222264:
    // 0x222264: 0xc062f5c  jal         func_18BD70
label_222268:
    if (ctx->pc == 0x222268u) {
        ctx->pc = 0x22226Cu;
        goto label_22226c;
    }
    ctx->pc = 0x222264u;
    SET_GPR_U32(ctx, 31, 0x22226Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x222264u, 0x22226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22226Cu;
label_22226c:
    // 0x22226c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22226cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222270:
    // 0x222270: 0xc0630a8  jal         func_18C2A0
label_222274:
    if (ctx->pc == 0x222274u) {
        ctx->pc = 0x222278u;
        goto label_222278;
    }
    ctx->pc = 0x222270u;
    SET_GPR_U32(ctx, 31, 0x222278u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222270u, 0x222278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222278u;
label_222278:
    // 0x222278: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x222278u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22227c:
    // 0x22227c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x22227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222280:
    // 0x222280: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x222280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_222284:
    // 0x222284: 0x24620280  addiu       $v0, $v1, 0x280
    ctx->pc = 0x222284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_222288:
    // 0x222288: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x222288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_22228c:
    // 0x22228c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x22228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_222290:
    // 0x222290: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x222290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_222294:
    // 0x222294: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x222294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
label_222298:
    // 0x222298: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x222298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_22229c:
    // 0x22229c: 0x463824  and         $a3, $v0, $a2
    ctx->pc = 0x22229cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2222a0:
    // 0x2222a0: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
label_2222a4:
    // 0x2222a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2222a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2222a8:
    // 0x2222a8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2222a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2222ac:
    // 0x2222ac: 0xc062f5c  jal         func_18BD70
label_2222b0:
    if (ctx->pc == 0x2222B0u) {
        ctx->pc = 0x2222B4u;
        goto label_2222b4;
    }
    ctx->pc = 0x2222ACu;
    SET_GPR_U32(ctx, 31, 0x2222B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2222ACu, 0x2222B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222B4u;
label_2222b4:
    // 0x2222b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2222b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2222b8:
    // 0x2222b8: 0xc0630a8  jal         func_18C2A0
label_2222bc:
    if (ctx->pc == 0x2222BCu) {
        ctx->pc = 0x2222C0u;
        goto label_2222c0;
    }
    ctx->pc = 0x2222B8u;
    SET_GPR_U32(ctx, 31, 0x2222C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2222B8u, 0x2222C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222C0u;
label_2222c0:
    // 0x2222c0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2222c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2222c4:
    // 0x2222c4: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x2222c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2222c8:
    // 0x2222c8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_2222cc:
    // 0x2222cc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2222ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2222d0:
    // 0x2222d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2222d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2222d4:
    // 0x2222d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2222d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2222d8:
    // 0x2222d8: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x2222d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
label_2222dc:
    // 0x2222dc: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2222dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2222e0:
    // 0x2222e0: 0x863824  and         $a3, $a0, $a2
    ctx->pc = 0x2222e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2222e4:
    // 0x2222e4: 0x24080e13  addiu       $t0, $zero, 0xE13
    ctx->pc = 0x2222e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
label_2222e8:
    // 0x2222e8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2222e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2222ec:
    // 0x2222ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2222ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2222f0:
    // 0x2222f0: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2222f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2222f4:
    // 0x2222f4: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2222f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2222f8:
    // 0x2222f8: 0xc062f5c  jal         func_18BD70
label_2222fc:
    if (ctx->pc == 0x2222FCu) {
        ctx->pc = 0x222300u;
        goto label_222300;
    }
    ctx->pc = 0x2222F8u;
    SET_GPR_U32(ctx, 31, 0x222300u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2222F8u, 0x222300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222300u;
label_222300:
    // 0x222300: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222300u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222304:
    // 0x222304: 0xc0630a8  jal         func_18C2A0
label_222308:
    if (ctx->pc == 0x222308u) {
        ctx->pc = 0x22230Cu;
        goto label_22230c;
    }
    ctx->pc = 0x222304u;
    SET_GPR_U32(ctx, 31, 0x22230Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222304u, 0x22230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22230Cu;
label_22230c:
    // 0x22230c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x22230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222310:
    // 0x222310: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x222310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_222314:
    // 0x222314: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x222314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_222318:
    // 0x222318: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x222318u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_22231c:
    // 0x22231c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x22231cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_222320:
    // 0x222320: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x222320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_222324:
    // 0x222324: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x222324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
label_222328:
    // 0x222328: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x222328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_22232c:
    // 0x22232c: 0x2023824  and         $a3, $s0, $v0
    ctx->pc = 0x22232cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_222330:
    // 0x222330: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x222330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
label_222334:
    // 0x222334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x222334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_222338:
    // 0x222338: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22233c:
    // 0x22233c: 0xc062f5c  jal         func_18BD70
label_222340:
    if (ctx->pc == 0x222340u) {
        ctx->pc = 0x222344u;
        goto label_222344;
    }
    ctx->pc = 0x22233Cu;
    SET_GPR_U32(ctx, 31, 0x222344u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22233Cu, 0x222344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222344u;
label_222344:
    // 0x222344: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222344u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222348:
    // 0x222348: 0xc0630a8  jal         func_18C2A0
label_22234c:
    if (ctx->pc == 0x22234Cu) {
        ctx->pc = 0x222350u;
        goto label_222350;
    }
    ctx->pc = 0x222348u;
    SET_GPR_U32(ctx, 31, 0x222350u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222348u, 0x222350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222350u;
label_222350:
    // 0x222350: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222354:
    // 0x222354: 0x10000023  b           . + 4 + (0x23 << 2)
label_222358:
    if (ctx->pc == 0x222358u) {
        ctx->pc = 0x22235Cu;
        goto label_22235c;
    }
    ctx->pc = 0x222354u;
    {
        const bool branch_taken_0x222354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222354) {
            ctx->pc = 0x2223E4u;
            goto label_2223e4;
        }
    }
    ctx->pc = 0x22235Cu;
label_22235c:
    // 0x22235c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x22235cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222360:
    // 0x222360: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x222360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_222364:
    // 0x222364: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x222364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_222368:
    // 0x222368: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x222368u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_22236c:
    // 0x22236c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x22236cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_222370:
    // 0x222370: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x222370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_222374:
    // 0x222374: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x222374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_222378:
    // 0x222378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x222378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_22237c:
    // 0x22237c: 0x2023824  and         $a3, $s0, $v0
    ctx->pc = 0x22237cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_222380:
    // 0x222380: 0x24040e0f  addiu       $a0, $zero, 0xE0F
    ctx->pc = 0x222380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3599));
label_222384:
    // 0x222384: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x222384u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_222388:
    // 0x222388: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22238c:
    // 0x22238c: 0xc062f5c  jal         func_18BD70
label_222390:
    if (ctx->pc == 0x222390u) {
        ctx->pc = 0x222394u;
        goto label_222394;
    }
    ctx->pc = 0x22238Cu;
    SET_GPR_U32(ctx, 31, 0x222394u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22238Cu, 0x222394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222394u;
label_222394:
    // 0x222394: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222398:
    // 0x222398: 0xc0630a8  jal         func_18C2A0
label_22239c:
    if (ctx->pc == 0x22239Cu) {
        ctx->pc = 0x2223A0u;
        goto label_2223a0;
    }
    ctx->pc = 0x222398u;
    SET_GPR_U32(ctx, 31, 0x2223A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222398u, 0x2223A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223A0u;
label_2223a0:
    // 0x2223a0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2223a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2223a4:
    // 0x2223a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2223a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2223a8:
    // 0x2223a8: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x2223a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_2223ac:
    // 0x2223ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2223acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2223b0:
    // 0x2223b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2223b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2223b4:
    // 0x2223b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2223b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2223b8:
    // 0x2223b8: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x2223b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_2223bc:
    // 0x2223bc: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x2223bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2223c0:
    // 0x2223c0: 0x653824  and         $a3, $v1, $a1
    ctx->pc = 0x2223c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2223c4:
    // 0x2223c4: 0x24040e0f  addiu       $a0, $zero, 0xE0F
    ctx->pc = 0x2223c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3599));
label_2223c8:
    // 0x2223c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2223c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2223cc:
    // 0x2223cc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2223ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2223d0:
    // 0x2223d0: 0xc062f5c  jal         func_18BD70
label_2223d4:
    if (ctx->pc == 0x2223D4u) {
        ctx->pc = 0x2223D8u;
        goto label_2223d8;
    }
    ctx->pc = 0x2223D0u;
    SET_GPR_U32(ctx, 31, 0x2223D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2223D0u, 0x2223D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223D8u;
label_2223d8:
    // 0x2223d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2223d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2223dc:
    // 0x2223dc: 0xc0630a8  jal         func_18C2A0
label_2223e0:
    if (ctx->pc == 0x2223E0u) {
        ctx->pc = 0x2223E4u;
        goto label_2223e4;
    }
    ctx->pc = 0x2223DCu;
    SET_GPR_U32(ctx, 31, 0x2223E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2223DCu, 0x2223E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223E4u;
label_2223e4:
    // 0x2223e4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2223e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2223e8:
    // 0x2223e8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2223e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2223ec:
    // 0x2223ec: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x2223ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2223f0:
    // 0x2223f0: 0x30c70200  andi        $a3, $a2, 0x200
    ctx->pc = 0x2223f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
label_2223f4:
    // 0x2223f4: 0x10e0002c  beqz        $a3, . + 4 + (0x2C << 2)
label_2223f8:
    if (ctx->pc == 0x2223F8u) {
        ctx->pc = 0x2223FCu;
        goto label_2223fc;
    }
    ctx->pc = 0x2223F4u;
    {
        const bool branch_taken_0x2223f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223f4) {
            ctx->pc = 0x2224A8u;
            goto label_2224a8;
        }
    }
    ctx->pc = 0x2223FCu;
label_2223fc:
    // 0x2223fc: 0x3c0843c8  lui         $t0, 0x43C8
    ctx->pc = 0x2223fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17352 << 16));
label_222400:
    // 0x222400: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x222400u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222404:
    // 0x222404: 0x0  nop
    ctx->pc = 0x222404u;
    // NOP
label_222408:
    // 0x222408: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x222408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_22240c:
    // 0x22240c: 0x8fa900e8  lw          $t1, 0xE8($sp)
    ctx->pc = 0x22240cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222410:
    // 0x222410: 0x8d220130  lw          $v0, 0x130($t1)
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
label_222414:
    // 0x222414: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
label_222418:
    // 0x222418: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x222418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_22241c:
    // 0x22241c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22241cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_222420:
    // 0x222420: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x222420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_222424:
    // 0x222424: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x222424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_222428:
    // 0x222428: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x222428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_22242c:
    // 0x22242c: 0x703824  and         $a3, $v1, $s0
    ctx->pc = 0x22242cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_222430:
    // 0x222430: 0x24040e10  addiu       $a0, $zero, 0xE10
    ctx->pc = 0x222430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
label_222434:
    // 0x222434: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x222434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_222438:
    // 0x222438: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22243c:
    // 0x22243c: 0xc062f5c  jal         func_18BD70
label_222440:
    if (ctx->pc == 0x222440u) {
        ctx->pc = 0x222444u;
        goto label_222444;
    }
    ctx->pc = 0x22243Cu;
    SET_GPR_U32(ctx, 31, 0x222444u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22243Cu, 0x222444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222444u;
label_222444:
    // 0x222444: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222444u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222448:
    // 0x222448: 0xc0630a8  jal         func_18C2A0
label_22244c:
    if (ctx->pc == 0x22244Cu) {
        ctx->pc = 0x222450u;
        goto label_222450;
    }
    ctx->pc = 0x222448u;
    SET_GPR_U32(ctx, 31, 0x222450u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222448u, 0x222450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222450u;
label_222450:
    // 0x222450: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x222450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_222454:
    // 0x222454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222458:
    // 0x222458: 0x0  nop
    ctx->pc = 0x222458u;
    // NOP
label_22245c:
    // 0x22245c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x22245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_222460:
    // 0x222460: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222464:
    // 0x222464: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x222464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_222468:
    // 0x222468: 0x24540880  addiu       $s4, $v0, 0x880
    ctx->pc = 0x222468u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
label_22246c:
    // 0x22246c: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x22246cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_222470:
    // 0x222470: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x222470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_222474:
    // 0x222474: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x222474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_222478:
    // 0x222478: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x222478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
label_22247c:
    // 0x22247c: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x22247cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_222480:
    // 0x222480: 0x643824  and         $a3, $v1, $a0
    ctx->pc = 0x222480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_222484:
    // 0x222484: 0x24020e10  addiu       $v0, $zero, 0xE10
    ctx->pc = 0x222484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
label_222488:
    // 0x222488: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22248c:
    // 0x22248c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22248cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_222490:
    // 0x222490: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_222494:
    // 0x222494: 0xc062f5c  jal         func_18BD70
label_222498:
    if (ctx->pc == 0x222498u) {
        ctx->pc = 0x22249Cu;
        goto label_22249c;
    }
    ctx->pc = 0x222494u;
    SET_GPR_U32(ctx, 31, 0x22249Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x222494u, 0x22249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22249Cu;
label_22249c:
    // 0x22249c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22249cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2224a0:
    // 0x2224a0: 0xc0630a8  jal         func_18C2A0
label_2224a4:
    if (ctx->pc == 0x2224A4u) {
        ctx->pc = 0x2224A8u;
        goto label_2224a8;
    }
    ctx->pc = 0x2224A0u;
    SET_GPR_U32(ctx, 31, 0x2224A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2224A0u, 0x2224A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224A8u;
label_2224a8:
    // 0x2224a8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2224a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2224ac:
    // 0x2224ac: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2224b0:
    // 0x2224b0: 0x24750120  addiu       $s5, $v1, 0x120
    ctx->pc = 0x2224b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2224b4:
    // 0x2224b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2224b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2224b8:
    // 0x2224b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2224b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2224bc:
    // 0x2224bc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2224bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_2224c0:
    // 0x2224c0: 0xc079140  jal         func_1E4500
label_2224c4:
    if (ctx->pc == 0x2224C4u) {
        ctx->pc = 0x2224C8u;
        goto label_2224c8;
    }
    ctx->pc = 0x2224C0u;
    SET_GPR_U32(ctx, 31, 0x2224C8u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x2224C0u, 0x2224C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224C8u;
label_2224c8:
    // 0x2224c8: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2224c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2224cc:
    // 0x2224cc: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2224ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_2224d0:
    // 0x2224d0: 0x24440480  addiu       $a0, $v0, 0x480
    ctx->pc = 0x2224d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_2224d4:
    // 0x2224d4: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x2224d4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2224d8:
    // 0x2224d8: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2224d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2224dc:
    // 0x2224dc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2224dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2224e0:
    // 0x2224e0: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2224e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_2224e4:
    // 0x2224e4: 0xc079140  jal         func_1E4500
label_2224e8:
    if (ctx->pc == 0x2224E8u) {
        ctx->pc = 0x2224ECu;
        goto label_2224ec;
    }
    ctx->pc = 0x2224E4u;
    SET_GPR_U32(ctx, 31, 0x2224ECu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x2224E4u, 0x2224ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224ECu;
label_2224ec:
    // 0x2224ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2224ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2224f0:
    // 0x2224f0: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2224f4:
    // 0x2224f4: 0x244402d0  addiu       $a0, $v0, 0x2D0
    ctx->pc = 0x2224f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
label_2224f8:
    // 0x2224f8: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x2224f8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2224fc:
    // 0x2224fc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2224fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222500:
    // 0x222500: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222504:
    // 0x222504: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x222504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_222508:
    // 0x222508: 0xc079140  jal         func_1E4500
label_22250c:
    if (ctx->pc == 0x22250Cu) {
        ctx->pc = 0x222510u;
        goto label_222510;
    }
    ctx->pc = 0x222508u;
    SET_GPR_U32(ctx, 31, 0x222510u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x222508u, 0x222510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222510u;
label_222510:
    // 0x222510: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222514:
    // 0x222514: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x222514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_222518:
    // 0x222518: 0x24550510  addiu       $s5, $v0, 0x510
    ctx->pc = 0x222518u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
label_22251c:
    // 0x22251c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x22251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222520:
    // 0x222520: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x222520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_222524:
    // 0x222524: 0xc079140  jal         func_1E4500
label_222528:
    if (ctx->pc == 0x222528u) {
        ctx->pc = 0x22252Cu;
        goto label_22252c;
    }
    ctx->pc = 0x222524u;
    SET_GPR_U32(ctx, 31, 0x22252Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x222524u, 0x22252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22252Cu;
label_22252c:
    // 0x22252c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x22252cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222530:
    // 0x222530: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x222530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_222534:
    // 0x222534: 0x24d50750  addiu       $s5, $a2, 0x750
    ctx->pc = 0x222534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 1872));
label_222538:
    // 0x222538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_22253c:
    // 0x22253c: 0x8c280140  lw          $t0, 0x140($at)
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222540:
    // 0x222540: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x222540u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_222544:
    // 0x222544: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222548:
    // 0x222548: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x222548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_22254c:
    // 0x22254c: 0x8c5e0234  lw          $fp, 0x234($v0)
    ctx->pc = 0x22254cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_222550:
    // 0x222550: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222554:
    // 0x222554: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x222554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_222558:
    // 0x222558: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x222558u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22255c:
    // 0x22255c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22255cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222560:
    // 0x222560: 0x8c300140  lw          $s0, 0x140($at)
    ctx->pc = 0x222560u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222564:
    // 0x222564: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x222564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_222568:
    // 0x222568: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22256c:
    // 0x22256c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222570:
    // 0x222570: 0x8c5e0234  lw          $fp, 0x234($v0)
    ctx->pc = 0x222570u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_222574:
    // 0x222574: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222578:
    // 0x222578: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_22257c:
    // 0x22257c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22257cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_222580:
    // 0x222580: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x222580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222584:
    // 0x222584: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x222584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_222588:
    // 0x222588: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x222588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22258c:
    // 0x22258c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x22258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_222590:
    // 0x222590: 0x24640204  addiu       $a0, $v1, 0x204
    ctx->pc = 0x222590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 516));
label_222594:
    // 0x222594: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x222594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
label_222598:
    // 0x222598: 0xc06b06c  jal         func_1AC1B0
label_22259c:
    if (ctx->pc == 0x22259Cu) {
        ctx->pc = 0x2225A0u;
        goto label_2225a0;
    }
    ctx->pc = 0x222598u;
    SET_GPR_U32(ctx, 31, 0x2225A0u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x222598u, 0x2225A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225A0u;
label_2225a0:
    // 0x2225a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2225a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2225a4:
    // 0x2225a4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2225a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2225a8:
    // 0x2225a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2225a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2225ac:
    // 0x2225ac: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2225acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2225b0:
    // 0x2225b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2225b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2225b4:
    // 0x2225b4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2225b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2225b8:
    // 0x2225b8: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x2225b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2225bc:
    // 0x2225bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2225bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2225c0:
    // 0x2225c0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2225c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2225c4:
    // 0x2225c4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2225c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2225c8:
    // 0x2225c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2225c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2225cc:
    // 0x2225cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2225ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2225d0:
    // 0x2225d0: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x2225d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_2225d4:
    // 0x2225d4: 0x24e40204  addiu       $a0, $a3, 0x204
    ctx->pc = 0x2225d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 516));
label_2225d8:
    // 0x2225d8: 0x24020150  addiu       $v0, $zero, 0x150
    ctx->pc = 0x2225d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_2225dc:
    // 0x2225dc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2225dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2225e0:
    // 0x2225e0: 0xc06b07c  jal         func_1AC1F0
label_2225e4:
    if (ctx->pc == 0x2225E4u) {
        ctx->pc = 0x2225E8u;
        goto label_2225e8;
    }
    ctx->pc = 0x2225E0u;
    SET_GPR_U32(ctx, 31, 0x2225E8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2225E0u, 0x2225E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225E8u;
label_2225e8:
    // 0x2225e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2225e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2225ec:
    // 0x2225ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2225ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2225f0:
    // 0x2225f0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x2225f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2225f4:
    // 0x2225f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2225f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2225f8:
    // 0x2225f8: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2225fc:
    // 0x2225fc: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2225fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_222600:
    // 0x222600: 0x8c570244  lw          $s7, 0x244($v0)
    ctx->pc = 0x222600u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_222604:
    // 0x222604: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x222604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_222608:
    // 0x222608: 0xc074974  jal         func_1D25D0
label_22260c:
    if (ctx->pc == 0x22260Cu) {
        ctx->pc = 0x222610u;
        goto label_222610;
    }
    ctx->pc = 0x222608u;
    SET_GPR_U32(ctx, 31, 0x222610u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x222608u, 0x222610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222610u;
label_222610:
    // 0x222610: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222614:
    // 0x222614: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222618:
    // 0x222618: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x222618u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_22261c:
    // 0x22261c: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x22261cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_222620:
    // 0x222620: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_222624:
    // 0x222624: 0x8fa900e8  lw          $t1, 0xE8($sp)
    ctx->pc = 0x222624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222628:
    // 0x222628: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x222628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_22262c:
    // 0x22262c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22262cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222630:
    // 0x222630: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222634:
    // 0x222634: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x222634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_222638:
    // 0x222638: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22263c:
    // 0x22263c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_222640:
    // 0x222640: 0x8c65024c  lw          $a1, 0x24C($v1)
    ctx->pc = 0x222640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
label_222644:
    // 0x222644: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x222644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_222648:
    // 0x222648: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x222648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_22264c:
    // 0x22264c: 0xc06b07c  jal         func_1AC1F0
label_222650:
    if (ctx->pc == 0x222650u) {
        ctx->pc = 0x222654u;
        goto label_222654;
    }
    ctx->pc = 0x22264Cu;
    SET_GPR_U32(ctx, 31, 0x222654u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x22264Cu, 0x222654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222654u;
label_222654:
    // 0x222654: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x222654u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222658:
    // 0x222658: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_22265c:
    // 0x22265c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x22265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222660:
    // 0x222660: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x222660u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_222664:
    // 0x222664: 0x8fb300e8  lw          $s3, 0xE8($sp)
    ctx->pc = 0x222664u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222668:
    // 0x222668: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x222668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_22266c:
    // 0x22266c: 0x8c57024c  lw          $s7, 0x24C($v0)
    ctx->pc = 0x22266cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
label_222670:
    // 0x222670: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x222670u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_222674:
    // 0x222674: 0xc074974  jal         func_1D25D0
label_222678:
    if (ctx->pc == 0x222678u) {
        ctx->pc = 0x22267Cu;
        goto label_22267c;
    }
    ctx->pc = 0x222674u;
    SET_GPR_U32(ctx, 31, 0x22267Cu);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x222674u, 0x22267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22267Cu;
label_22267c:
    // 0x22267c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22267cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222680:
    // 0x222680: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222684:
    // 0x222684: 0x8c57024c  lw          $s7, 0x24C($v0)
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
label_222688:
    // 0x222688: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22268c:
    // 0x22268c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_222690:
    // 0x222690: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x222690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_222694:
    // 0x222694: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222698:
    // 0x222698: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x222698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22269c:
    // 0x22269c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22269cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2226a0:
    // 0x2226a0: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x2226a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_2226a4:
    // 0x2226a4: 0xc0749a4  jal         func_1D2690
label_2226a8:
    if (ctx->pc == 0x2226A8u) {
        ctx->pc = 0x2226ACu;
        goto label_2226ac;
    }
    ctx->pc = 0x2226A4u;
    SET_GPR_U32(ctx, 31, 0x2226ACu);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2226A4u, 0x2226ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226ACu;
label_2226ac:
    // 0x2226ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2226acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2226b0:
    // 0x2226b0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2226b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2226b4:
    // 0x2226b4: 0x8c570250  lw          $s7, 0x250($v0)
    ctx->pc = 0x2226b4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_2226b8:
    // 0x2226b8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2226b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2226bc:
    // 0x2226bc: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x2226bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_2226c0:
    // 0x2226c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2226c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2226c4:
    // 0x2226c4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2226c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2226c8:
    // 0x2226c8: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2226c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_2226cc:
    // 0x2226cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2226ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2226d0:
    // 0x2226d0: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x2226d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_2226d4:
    // 0x2226d4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2226d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2226d8:
    // 0x2226d8: 0xc0749a4  jal         func_1D2690
label_2226dc:
    if (ctx->pc == 0x2226DCu) {
        ctx->pc = 0x2226E0u;
        goto label_2226e0;
    }
    ctx->pc = 0x2226D8u;
    SET_GPR_U32(ctx, 31, 0x2226E0u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2226D8u, 0x2226E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226E0u;
label_2226e0:
    // 0x2226e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2226e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2226e4:
    // 0x2226e4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2226e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2226e8:
    // 0x2226e8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2226e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2226ec:
    // 0x2226ec: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2226ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2226f0:
    // 0x2226f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2226f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2226f4:
    // 0x2226f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2226f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2226f8:
    // 0x2226f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2226f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2226fc:
    // 0x2226fc: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x2226fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_222700:
    // 0x222700: 0xc06b0d4  jal         func_1AC350
label_222704:
    if (ctx->pc == 0x222704u) {
        ctx->pc = 0x222708u;
        goto label_222708;
    }
    ctx->pc = 0x222700u;
    SET_GPR_U32(ctx, 31, 0x222708u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x222700u, 0x222708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222708u;
label_222708:
    // 0x222708: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_22270c:
    // 0x22270c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x22270cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222710:
    // 0x222710: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x222710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_222714:
    // 0x222714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_222718:
    // 0x222718: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x222718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22271c:
    // 0x22271c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x22271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222720:
    // 0x222720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_222724:
    // 0x222724: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x222724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_222728:
    // 0x222728: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22272c:
    // 0x22272c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x22272cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_222730:
    // 0x222730: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x222730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_222734:
    // 0x222734: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x222734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_222738:
    // 0x222738: 0x4600155  bltz        $v1, . + 4 + (0x155 << 2)
label_22273c:
    if (ctx->pc == 0x22273Cu) {
        ctx->pc = 0x222740u;
        goto label_222740;
    }
    ctx->pc = 0x222738u;
    {
        const bool branch_taken_0x222738 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x222738) {
            ctx->pc = 0x222C90u;
            goto label_222c90;
        }
    }
    ctx->pc = 0x222740u;
label_222740:
    // 0x222740: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222744:
    // 0x222744: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x222744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_222748:
    // 0x222748: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x222748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_22274c:
    // 0x22274c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x22274cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_222750:
    // 0x222750: 0x1460014f  bnez        $v1, . + 4 + (0x14F << 2)
label_222754:
    if (ctx->pc == 0x222754u) {
        ctx->pc = 0x222758u;
        goto label_222758;
    }
    ctx->pc = 0x222750u;
    {
        const bool branch_taken_0x222750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222750) {
            ctx->pc = 0x222C90u;
            goto label_222c90;
        }
    }
    ctx->pc = 0x222758u;
label_222758:
    // 0x222758: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_22275c:
    // 0x22275c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x22275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222760:
    // 0x222760: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x222760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_222764:
    // 0x222764: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222768:
    // 0x222768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22276c:
    // 0x22276c: 0x8c5e023c  lw          $fp, 0x23C($v0)
    ctx->pc = 0x22276cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_222770:
    // 0x222770: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222774:
    // 0x222774: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222778:
    // 0x222778: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x222778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_22277c:
    // 0x22277c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222780:
    // 0x222780: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x222780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_222784:
    // 0x222784: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222788:
    // 0x222788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22278c:
    // 0x22278c: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x22278cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_222790:
    // 0x222790: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x222790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
label_222794:
    // 0x222794: 0xc06b06c  jal         func_1AC1B0
label_222798:
    if (ctx->pc == 0x222798u) {
        ctx->pc = 0x22279Cu;
        goto label_22279c;
    }
    ctx->pc = 0x222794u;
    SET_GPR_U32(ctx, 31, 0x22279Cu);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x222794u, 0x22279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22279Cu;
label_22279c:
    // 0x22279c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22279cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2227a0:
    // 0x2227a0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2227a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2227a4:
    // 0x2227a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2227a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2227a8:
    // 0x2227a8: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x2227a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2227ac:
    // 0x2227ac: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x2227acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2227b0:
    // 0x2227b0: 0x8c86025c  lw          $a2, 0x25C($a0)
    ctx->pc = 0x2227b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 604)));
label_2227b4:
    // 0x2227b4: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x2227b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2227b8:
    // 0x2227b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2227b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2227bc:
    // 0x2227bc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2227bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2227c0:
    // 0x2227c0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2227c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2227c4:
    // 0x2227c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2227c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2227c8:
    // 0x2227c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2227c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2227cc:
    // 0x2227cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2227ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2227d0:
    // 0x2227d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2227d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2227d4:
    // 0x2227d4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2227d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2227d8:
    // 0x2227d8: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2227d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_2227dc:
    // 0x2227dc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2227dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2227e0:
    // 0x2227e0: 0xc06b07c  jal         func_1AC1F0
label_2227e4:
    if (ctx->pc == 0x2227E4u) {
        ctx->pc = 0x2227E8u;
        goto label_2227e8;
    }
    ctx->pc = 0x2227E0u;
    SET_GPR_U32(ctx, 31, 0x2227E8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2227E0u, 0x2227E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227E8u;
label_2227e8:
    // 0x2227e8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2227e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2227ec:
    // 0x2227ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2227ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2227f0:
    // 0x2227f0: 0x8c86025c  lw          $a2, 0x25C($a0)
    ctx->pc = 0x2227f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 604)));
label_2227f4:
    // 0x2227f4: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x2227f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2227f8:
    // 0x2227f8: 0x26c20970  addiu       $v0, $s6, 0x970
    ctx->pc = 0x2227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2416));
label_2227fc:
    // 0x2227fc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2227fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_222800:
    // 0x222800: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x222800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222804:
    // 0x222804: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x222804u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_222808:
    // 0x222808: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x222808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22280c:
    // 0x22280c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x22280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_222810:
    // 0x222810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222814:
    // 0x222814: 0x0  nop
    ctx->pc = 0x222814u;
    // NOP
label_222818:
    // 0x222818: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x222818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22281c:
    // 0x22281c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22281cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_222820:
    // 0x222820: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222824:
    // 0x222824: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x222824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_222828:
    // 0x222828: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22282c:
    // 0x22282c: 0x8c450260  lw          $a1, 0x260($v0)
    ctx->pc = 0x22282cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 608)));
label_222830:
    // 0x222830: 0x26c60970  addiu       $a2, $s6, 0x970
    ctx->pc = 0x222830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 2416));
label_222834:
    // 0x222834: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x222834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222838:
    // 0x222838: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x222838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_22283c:
    // 0x22283c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222840:
    // 0x222840: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x222840u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222844:
    // 0x222844: 0xc074efc  jal         func_1D3BF0
label_222848:
    if (ctx->pc == 0x222848u) {
        ctx->pc = 0x22284Cu;
        goto label_22284c;
    }
    ctx->pc = 0x222844u;
    SET_GPR_U32(ctx, 31, 0x22284Cu);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x222844u, 0x22284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22284Cu;
label_22284c:
    // 0x22284c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222850:
    // 0x222850: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x222850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222854:
    // 0x222854: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x222854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_222858:
    // 0x222858: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22285c:
    // 0x22285c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222860:
    // 0x222860: 0x8c50026c  lw          $s0, 0x26C($v0)
    ctx->pc = 0x222860u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_222864:
    // 0x222864: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222868:
    // 0x222868: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_22286c:
    // 0x22286c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_222870:
    // 0x222870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222874:
    // 0x222874: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x222874u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_222878:
    // 0x222878: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x222878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22287c:
    // 0x22287c: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x22287cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_222880:
    // 0x222880: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x222880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_222884:
    // 0x222884: 0x24c4021c  addiu       $a0, $a2, 0x21C
    ctx->pc = 0x222884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 540));
label_222888:
    // 0x222888: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x222888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22288c:
    // 0x22288c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_222890:
    // 0x222890: 0xc06b07c  jal         func_1AC1F0
label_222894:
    if (ctx->pc == 0x222894u) {
        ctx->pc = 0x222898u;
        goto label_222898;
    }
    ctx->pc = 0x222890u;
    SET_GPR_U32(ctx, 31, 0x222898u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x222890u, 0x222898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222898u;
label_222898:
    // 0x222898: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22289c:
    // 0x22289c: 0x8c50026c  lw          $s0, 0x26C($v0)
    ctx->pc = 0x22289cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_2228a0:
    // 0x2228a0: 0x3c02c44d  lui         $v0, 0xC44D
    ctx->pc = 0x2228a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50253 << 16));
label_2228a4:
    // 0x2228a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2228a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2228a8:
    // 0x2228a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2228a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2228ac:
    // 0x2228ac: 0x0  nop
    ctx->pc = 0x2228acu;
    // NOP
label_2228b0:
    // 0x2228b0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2228b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2228b4:
    // 0x2228b4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x2228b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
label_2228b8:
    // 0x2228b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2228b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2228bc:
    // 0x2228bc: 0x0  nop
    ctx->pc = 0x2228bcu;
    // NOP
label_2228c0:
    // 0x2228c0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2228c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2228c4:
    // 0x2228c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2228c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2228c8:
    // 0x2228c8: 0x0  nop
    ctx->pc = 0x2228c8u;
    // NOP
label_2228cc:
    // 0x2228cc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2228ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2228d0:
    // 0x2228d0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2228d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_2228d4:
    // 0x2228d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2228d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2228d8:
    // 0x2228d8: 0x0  nop
    ctx->pc = 0x2228d8u;
    // NOP
label_2228dc:
    // 0x2228dc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2228dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2228e0:
    // 0x2228e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2228e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2228e4:
    // 0x2228e4: 0x26c60880  addiu       $a2, $s6, 0x880
    ctx->pc = 0x2228e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
label_2228e8:
    // 0x2228e8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2228e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2228ec:
    // 0x2228ec: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2228ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2228f0:
    // 0x2228f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2228f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2228f4:
    // 0x2228f4: 0xc040bf4  jal         func_102FD0
label_2228f8:
    if (ctx->pc == 0x2228F8u) {
        ctx->pc = 0x2228FCu;
        goto label_2228fc;
    }
    ctx->pc = 0x2228F4u;
    SET_GPR_U32(ctx, 31, 0x2228FCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2228FCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2228FCu) { return; }
    ctx->pc = 0x2228FCu;
label_2228fc:
    // 0x2228fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2228fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_222900:
    // 0x222900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222904:
    // 0x222904: 0x0  nop
    ctx->pc = 0x222904u;
    // NOP
label_222908:
    // 0x222908: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_22290c:
    // 0x22290c: 0x3c02c402  lui         $v0, 0xC402
    ctx->pc = 0x22290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50178 << 16));
label_222910:
    // 0x222910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222914:
    // 0x222914: 0x0  nop
    ctx->pc = 0x222914u;
    // NOP
label_222918:
    // 0x222918: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x222918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22291c:
    // 0x22291c: 0x3c034427  lui         $v1, 0x4427
    ctx->pc = 0x22291cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17447 << 16));
label_222920:
    // 0x222920: 0x3462c000  ori         $v0, $v1, 0xC000
    ctx->pc = 0x222920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_222924:
    // 0x222924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222928:
    // 0x222928: 0x0  nop
    ctx->pc = 0x222928u;
    // NOP
label_22292c:
    // 0x22292c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x22292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_222930:
    // 0x222930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222934:
    // 0x222934: 0x0  nop
    ctx->pc = 0x222934u;
    // NOP
label_222938:
    // 0x222938: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x222938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_22293c:
    // 0x22293c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22293cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_222940:
    // 0x222940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222944:
    // 0x222944: 0x0  nop
    ctx->pc = 0x222944u;
    // NOP
label_222948:
    // 0x222948: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_22294c:
    // 0x22294c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x22294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222950:
    // 0x222950: 0x26c50880  addiu       $a1, $s6, 0x880
    ctx->pc = 0x222950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
label_222954:
    // 0x222954: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x222954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222958:
    // 0x222958: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x222958u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_22295c:
    // 0x22295c: 0xc040bf4  jal         func_102FD0
label_222960:
    if (ctx->pc == 0x222960u) {
        ctx->pc = 0x222964u;
        goto label_222964;
    }
    ctx->pc = 0x22295Cu;
    SET_GPR_U32(ctx, 31, 0x222964u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222964u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222964u) { return; }
    ctx->pc = 0x222964u;
label_222964:
    // 0x222964: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222968:
    // 0x222968: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_22296c:
    // 0x22296c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x22296cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222970:
    // 0x222970: 0x0  nop
    ctx->pc = 0x222970u;
    // NOP
label_222974:
    // 0x222974: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_222978:
    // 0x222978: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22297c:
    // 0x22297c: 0x8c42026c  lw          $v0, 0x26C($v0)
    ctx->pc = 0x22297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_222980:
    // 0x222980: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222984:
    // 0x222984: 0x8c650270  lw          $a1, 0x270($v1)
    ctx->pc = 0x222984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
label_222988:
    // 0x222988: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22298c:
    // 0x22298c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x22298cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222990:
    // 0x222990: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x222990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222994:
    // 0x222994: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x222994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_222998:
    // 0x222998: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_22299c:
    // 0x22299c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x22299cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2229a0:
    // 0x2229a0: 0xc074efc  jal         func_1D3BF0
label_2229a4:
    if (ctx->pc == 0x2229A4u) {
        ctx->pc = 0x2229A8u;
        goto label_2229a8;
    }
    ctx->pc = 0x2229A0u;
    SET_GPR_U32(ctx, 31, 0x2229A8u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x2229A0u, 0x2229A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229A8u;
label_2229a8:
    // 0x2229a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2229a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2229ac:
    // 0x2229ac: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2229acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2229b0:
    // 0x2229b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2229b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2229b4:
    // 0x2229b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2229b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2229b8:
    // 0x2229b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2229b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2229bc:
    // 0x2229bc: 0x8c500274  lw          $s0, 0x274($v0)
    ctx->pc = 0x2229bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_2229c0:
    // 0x2229c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2229c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2229c4:
    // 0x2229c4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2229c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2229c8:
    // 0x2229c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2229c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2229cc:
    // 0x2229cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2229ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2229d0:
    // 0x2229d0: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x2229d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2229d4:
    // 0x2229d4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2229d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2229d8:
    // 0x2229d8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2229d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2229dc:
    // 0x2229dc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2229dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2229e0:
    // 0x2229e0: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_2229e4:
    // 0x2229e4: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2229e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2229e8:
    // 0x2229e8: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2229e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2229ec:
    // 0x2229ec: 0xc06b07c  jal         func_1AC1F0
label_2229f0:
    if (ctx->pc == 0x2229F0u) {
        ctx->pc = 0x2229F4u;
        goto label_2229f4;
    }
    ctx->pc = 0x2229ECu;
    SET_GPR_U32(ctx, 31, 0x2229F4u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2229ECu, 0x2229F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229F4u;
label_2229f4:
    // 0x2229f4: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2229f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2229f8:
    // 0x2229f8: 0x8cc20274  lw          $v0, 0x274($a2)
    ctx->pc = 0x2229f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 628)));
label_2229fc:
    // 0x2229fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2229fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222a00:
    // 0x222a00: 0x3c02c402  lui         $v0, 0xC402
    ctx->pc = 0x222a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50178 << 16));
label_222a04:
    // 0x222a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222a08:
    // 0x222a08: 0x0  nop
    ctx->pc = 0x222a08u;
    // NOP
label_222a0c:
    // 0x222a0c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x222a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_222a10:
    // 0x222a10: 0x3c034427  lui         $v1, 0x4427
    ctx->pc = 0x222a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17447 << 16));
label_222a14:
    // 0x222a14: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x222a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_222a18:
    // 0x222a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222a1c:
    // 0x222a1c: 0x0  nop
    ctx->pc = 0x222a1cu;
    // NOP
label_222a20:
    // 0x222a20: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x222a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_222a24:
    // 0x222a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222a28:
    // 0x222a28: 0x0  nop
    ctx->pc = 0x222a28u;
    // NOP
label_222a2c:
    // 0x222a2c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x222a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_222a30:
    // 0x222a30: 0x3c153f80  lui         $s5, 0x3F80
    ctx->pc = 0x222a30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16256 << 16));
label_222a34:
    // 0x222a34: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x222a34u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222a38:
    // 0x222a38: 0x0  nop
    ctx->pc = 0x222a38u;
    // NOP
label_222a3c:
    // 0x222a3c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_222a40:
    // 0x222a40: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x222a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222a44:
    // 0x222a44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222a44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222a48:
    // 0x222a48: 0x26c20880  addiu       $v0, $s6, 0x880
    ctx->pc = 0x222a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
label_222a4c:
    // 0x222a4c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x222a4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222a50:
    // 0x222a50: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x222a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222a54:
    // 0x222a54: 0xc040bf4  jal         func_102FD0
label_222a58:
    if (ctx->pc == 0x222A58u) {
        ctx->pc = 0x222A5Cu;
        goto label_222a5c;
    }
    ctx->pc = 0x222A54u;
    SET_GPR_U32(ctx, 31, 0x222A5Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222A5Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222A5Cu) { return; }
    ctx->pc = 0x222A5Cu;
label_222a5c:
    // 0x222a5c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x222a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_222a60:
    // 0x222a60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x222a60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222a64:
    // 0x222a64: 0x0  nop
    ctx->pc = 0x222a64u;
    // NOP
label_222a68:
    // 0x222a68: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_222a6c:
    // 0x222a6c: 0x3c05c395  lui         $a1, 0xC395
    ctx->pc = 0x222a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50069 << 16));
label_222a70:
    // 0x222a70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x222a70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222a74:
    // 0x222a74: 0x0  nop
    ctx->pc = 0x222a74u;
    // NOP
label_222a78:
    // 0x222a78: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x222a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_222a7c:
    // 0x222a7c: 0x3c04442d  lui         $a0, 0x442D
    ctx->pc = 0x222a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17453 << 16));
label_222a80:
    // 0x222a80: 0x3482c000  ori         $v0, $a0, 0xC000
    ctx->pc = 0x222a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_222a84:
    // 0x222a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222a88:
    // 0x222a88: 0x0  nop
    ctx->pc = 0x222a88u;
    // NOP
label_222a8c:
    // 0x222a8c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x222a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_222a90:
    // 0x222a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222a94:
    // 0x222a94: 0x0  nop
    ctx->pc = 0x222a94u;
    // NOP
label_222a98:
    // 0x222a98: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x222a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_222a9c:
    // 0x222a9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_222aa0:
    // 0x222aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222aa4:
    // 0x222aa4: 0x0  nop
    ctx->pc = 0x222aa4u;
    // NOP
label_222aa8:
    // 0x222aa8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_222aac:
    // 0x222aac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222ab0:
    // 0x222ab0: 0x26c20880  addiu       $v0, $s6, 0x880
    ctx->pc = 0x222ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
label_222ab4:
    // 0x222ab4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x222ab4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222ab8:
    // 0x222ab8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x222ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222abc:
    // 0x222abc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x222abcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222ac0:
    // 0x222ac0: 0xc040bf4  jal         func_102FD0
label_222ac4:
    if (ctx->pc == 0x222AC4u) {
        ctx->pc = 0x222AC8u;
        goto label_222ac8;
    }
    ctx->pc = 0x222AC0u;
    SET_GPR_U32(ctx, 31, 0x222AC8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222AC8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222AC8u) { return; }
    ctx->pc = 0x222AC8u;
label_222ac8:
    // 0x222ac8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_222acc:
    // 0x222acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222ad0:
    // 0x222ad0: 0x0  nop
    ctx->pc = 0x222ad0u;
    // NOP
label_222ad4:
    // 0x222ad4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_222ad8:
    // 0x222ad8: 0x8fb500e8  lw          $s5, 0xE8($sp)
    ctx->pc = 0x222ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222adc:
    // 0x222adc: 0x8ea40274  lw          $a0, 0x274($s5)
    ctx->pc = 0x222adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 628)));
label_222ae0:
    // 0x222ae0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222ae4:
    // 0x222ae4: 0x8c450278  lw          $a1, 0x278($v0)
    ctx->pc = 0x222ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
label_222ae8:
    // 0x222ae8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x222ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222aec:
    // 0x222aec: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x222aecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222af0:
    // 0x222af0: 0x72a03e28  paddub      $a3, $s5, $zero
    ctx->pc = 0x222af0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_222af4:
    // 0x222af4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x222af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_222af8:
    // 0x222af8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222afc:
    // 0x222afc: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x222afcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222b00:
    // 0x222b00: 0xc074efc  jal         func_1D3BF0
label_222b04:
    if (ctx->pc == 0x222B04u) {
        ctx->pc = 0x222B08u;
        goto label_222b08;
    }
    ctx->pc = 0x222B00u;
    SET_GPR_U32(ctx, 31, 0x222B08u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x222B00u, 0x222B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B08u;
label_222b08:
    // 0x222b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222b0c:
    // 0x222b0c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x222b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222b10:
    // 0x222b10: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x222b10u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_222b14:
    // 0x222b14: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222b18:
    // 0x222b18: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x222b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_222b1c:
    // 0x222b1c: 0x8c50027c  lw          $s0, 0x27C($v0)
    ctx->pc = 0x222b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
label_222b20:
    // 0x222b20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222b24:
    // 0x222b24: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222b28:
    // 0x222b28: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x222b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_222b2c:
    // 0x222b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222b30:
    // 0x222b30: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x222b30u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_222b34:
    // 0x222b34: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222b38:
    // 0x222b38: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x222b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_222b3c:
    // 0x222b3c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x222b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_222b40:
    // 0x222b40: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x222b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_222b44:
    // 0x222b44: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x222b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_222b48:
    // 0x222b48: 0xc06b07c  jal         func_1AC1F0
label_222b4c:
    if (ctx->pc == 0x222B4Cu) {
        ctx->pc = 0x222B50u;
        goto label_222b50;
    }
    ctx->pc = 0x222B48u;
    SET_GPR_U32(ctx, 31, 0x222B50u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x222B48u, 0x222B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B50u;
label_222b50:
    // 0x222b50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x222b50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222b54:
    // 0x222b54: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x222b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222b58:
    // 0x222b58: 0x8c82027c  lw          $v0, 0x27C($a0)
    ctx->pc = 0x222b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
label_222b5c:
    // 0x222b5c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x222b5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222b60:
    // 0x222b60: 0x3c04c395  lui         $a0, 0xC395
    ctx->pc = 0x222b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50069 << 16));
label_222b64:
    // 0x222b64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x222b64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222b68:
    // 0x222b68: 0x0  nop
    ctx->pc = 0x222b68u;
    // NOP
label_222b6c:
    // 0x222b6c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x222b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_222b70:
    // 0x222b70: 0x3c02442d  lui         $v0, 0x442D
    ctx->pc = 0x222b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17453 << 16));
label_222b74:
    // 0x222b74: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x222b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_222b78:
    // 0x222b78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222b7c:
    // 0x222b7c: 0x0  nop
    ctx->pc = 0x222b7cu;
    // NOP
label_222b80:
    // 0x222b80: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x222b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_222b84:
    // 0x222b84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222b88:
    // 0x222b88: 0x0  nop
    ctx->pc = 0x222b88u;
    // NOP
label_222b8c:
    // 0x222b8c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x222b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_222b90:
    // 0x222b90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_222b94:
    // 0x222b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222b98:
    // 0x222b98: 0x0  nop
    ctx->pc = 0x222b98u;
    // NOP
label_222b9c:
    // 0x222b9c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_222ba0:
    // 0x222ba0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x222ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222ba4:
    // 0x222ba4: 0x26c70880  addiu       $a3, $s6, 0x880
    ctx->pc = 0x222ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
label_222ba8:
    // 0x222ba8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x222ba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_222bac:
    // 0x222bac: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x222bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222bb0:
    // 0x222bb0: 0xc040bf4  jal         func_102FD0
label_222bb4:
    if (ctx->pc == 0x222BB4u) {
        ctx->pc = 0x222BB8u;
        goto label_222bb8;
    }
    ctx->pc = 0x222BB0u;
    SET_GPR_U32(ctx, 31, 0x222BB8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222BB8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222BB8u) { return; }
    ctx->pc = 0x222BB8u;
label_222bb8:
    // 0x222bb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x222bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_222bbc:
    // 0x222bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222bc0:
    // 0x222bc0: 0x0  nop
    ctx->pc = 0x222bc0u;
    // NOP
label_222bc4:
    // 0x222bc4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x222bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_222bc8:
    // 0x222bc8: 0x3c02c30a  lui         $v0, 0xC30A
    ctx->pc = 0x222bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49930 << 16));
label_222bcc:
    // 0x222bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222bd0:
    // 0x222bd0: 0x0  nop
    ctx->pc = 0x222bd0u;
    // NOP
label_222bd4:
    // 0x222bd4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x222bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_222bd8:
    // 0x222bd8: 0x3c05441b  lui         $a1, 0x441B
    ctx->pc = 0x222bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17435 << 16));
label_222bdc:
    // 0x222bdc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x222bdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222be0:
    // 0x222be0: 0x0  nop
    ctx->pc = 0x222be0u;
    // NOP
label_222be4:
    // 0x222be4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x222be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_222be8:
    // 0x222be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222bec:
    // 0x222bec: 0x0  nop
    ctx->pc = 0x222becu;
    // NOP
label_222bf0:
    // 0x222bf0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x222bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_222bf4:
    // 0x222bf4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x222bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_222bf8:
    // 0x222bf8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x222bf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222bfc:
    // 0x222bfc: 0x0  nop
    ctx->pc = 0x222bfcu;
    // NOP
label_222c00:
    // 0x222c00: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_222c04:
    // 0x222c04: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x222c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222c08:
    // 0x222c08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222c0c:
    // 0x222c0c: 0x26c50880  addiu       $a1, $s6, 0x880
    ctx->pc = 0x222c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
label_222c10:
    // 0x222c10: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x222c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222c14:
    // 0x222c14: 0xc040bf4  jal         func_102FD0
label_222c18:
    if (ctx->pc == 0x222C18u) {
        ctx->pc = 0x222C1Cu;
        goto label_222c1c;
    }
    ctx->pc = 0x222C14u;
    SET_GPR_U32(ctx, 31, 0x222C1Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x222C1Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x222C1Cu) { return; }
    ctx->pc = 0x222C1Cu;
label_222c1c:
    // 0x222c1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x222c1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222c20:
    // 0x222c20: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x222c20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_222c24:
    // 0x222c24: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x222c24u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222c28:
    // 0x222c28: 0x0  nop
    ctx->pc = 0x222c28u;
    // NOP
label_222c2c:
    // 0x222c2c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x222c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_222c30:
    // 0x222c30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222c34:
    // 0x222c34: 0x8c57027c  lw          $s7, 0x27C($v0)
    ctx->pc = 0x222c34u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
label_222c38:
    // 0x222c38: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222c3c:
    // 0x222c3c: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x222c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
label_222c40:
    // 0x222c40: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x222c40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_222c44:
    // 0x222c44: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x222c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_222c48:
    // 0x222c48: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x222c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_222c4c:
    // 0x222c4c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x222c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_222c50:
    // 0x222c50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222c54:
    // 0x222c54: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x222c54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222c58:
    // 0x222c58: 0xc074efc  jal         func_1D3BF0
label_222c5c:
    if (ctx->pc == 0x222C5Cu) {
        ctx->pc = 0x222C60u;
        goto label_222c60;
    }
    ctx->pc = 0x222C58u;
    SET_GPR_U32(ctx, 31, 0x222C60u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x222C58u, 0x222C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C60u;
label_222c60:
    // 0x222c60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_222c64:
    // 0x222c64: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x222c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_222c68:
    // 0x222c68: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x222c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_222c6c:
    // 0x222c6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x222c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_222c70:
    // 0x222c70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x222c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_222c74:
    // 0x222c74: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x222c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_222c78:
    // 0x222c78: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x222c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_222c7c:
    // 0x222c7c: 0x2486021c  addiu       $a2, $a0, 0x21C
    ctx->pc = 0x222c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
label_222c80:
    // 0x222c80: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x222c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_222c84:
    // 0x222c84: 0xc06b0d4  jal         func_1AC350
label_222c88:
    if (ctx->pc == 0x222C88u) {
        ctx->pc = 0x222C8Cu;
        goto label_222c8c;
    }
    ctx->pc = 0x222C84u;
    SET_GPR_U32(ctx, 31, 0x222C8Cu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x222C84u, 0x222C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C8Cu;
label_222c8c:
    // 0x222c8c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x222c8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_222c90:
    // 0x222c90: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x222c90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_222c94:
    // 0x222c94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x222c94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_222c98:
    // 0x222c98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x222c98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_222c9c:
    // 0x222c9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x222c9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_222ca0:
    // 0x222ca0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x222ca0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_222ca4:
    // 0x222ca4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x222ca4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_222ca8:
    // 0x222ca8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x222ca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_222cac:
    // 0x222cac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x222cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_222cb0:
    // 0x222cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_222cb4:
    // 0x222cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222cb8:
    // 0x222cb8: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x222cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_222cbc:
    // 0x222cbc: 0x3e00008  jr          $ra
label_222cc0:
    if (ctx->pc == 0x222CC0u) {
        ctx->pc = 0x222CC4u;
        goto label_fallthrough_0x222cbc;
    }
    ctx->pc = 0x222CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x222cbc:
    ctx->pc = 0x222CC4u;
}
