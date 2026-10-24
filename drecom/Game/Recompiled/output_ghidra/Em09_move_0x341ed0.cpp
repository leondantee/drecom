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

// Function: Em09_move
// Address: 0x341ed0 - 0x342fe0
void Em09_move_0x341ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_move_0x341ed0");
#endif

    switch (ctx->pc) {
        case 0x341ed0u: goto label_341ed0;
        case 0x341ed4u: goto label_341ed4;
        case 0x341ed8u: goto label_341ed8;
        case 0x341edcu: goto label_341edc;
        case 0x341ee0u: goto label_341ee0;
        case 0x341ee4u: goto label_341ee4;
        case 0x341ee8u: goto label_341ee8;
        case 0x341eecu: goto label_341eec;
        case 0x341ef0u: goto label_341ef0;
        case 0x341ef4u: goto label_341ef4;
        case 0x341ef8u: goto label_341ef8;
        case 0x341efcu: goto label_341efc;
        case 0x341f00u: goto label_341f00;
        case 0x341f04u: goto label_341f04;
        case 0x341f08u: goto label_341f08;
        case 0x341f0cu: goto label_341f0c;
        case 0x341f10u: goto label_341f10;
        case 0x341f14u: goto label_341f14;
        case 0x341f18u: goto label_341f18;
        case 0x341f1cu: goto label_341f1c;
        case 0x341f20u: goto label_341f20;
        case 0x341f24u: goto label_341f24;
        case 0x341f28u: goto label_341f28;
        case 0x341f2cu: goto label_341f2c;
        case 0x341f30u: goto label_341f30;
        case 0x341f34u: goto label_341f34;
        case 0x341f38u: goto label_341f38;
        case 0x341f3cu: goto label_341f3c;
        case 0x341f40u: goto label_341f40;
        case 0x341f44u: goto label_341f44;
        case 0x341f48u: goto label_341f48;
        case 0x341f4cu: goto label_341f4c;
        case 0x341f50u: goto label_341f50;
        case 0x341f54u: goto label_341f54;
        case 0x341f58u: goto label_341f58;
        case 0x341f5cu: goto label_341f5c;
        case 0x341f60u: goto label_341f60;
        case 0x341f64u: goto label_341f64;
        case 0x341f68u: goto label_341f68;
        case 0x341f6cu: goto label_341f6c;
        case 0x341f70u: goto label_341f70;
        case 0x341f74u: goto label_341f74;
        case 0x341f78u: goto label_341f78;
        case 0x341f7cu: goto label_341f7c;
        case 0x341f80u: goto label_341f80;
        case 0x341f84u: goto label_341f84;
        case 0x341f88u: goto label_341f88;
        case 0x341f8cu: goto label_341f8c;
        case 0x341f90u: goto label_341f90;
        case 0x341f94u: goto label_341f94;
        case 0x341f98u: goto label_341f98;
        case 0x341f9cu: goto label_341f9c;
        case 0x341fa0u: goto label_341fa0;
        case 0x341fa4u: goto label_341fa4;
        case 0x341fa8u: goto label_341fa8;
        case 0x341facu: goto label_341fac;
        case 0x341fb0u: goto label_341fb0;
        case 0x341fb4u: goto label_341fb4;
        case 0x341fb8u: goto label_341fb8;
        case 0x341fbcu: goto label_341fbc;
        case 0x341fc0u: goto label_341fc0;
        case 0x341fc4u: goto label_341fc4;
        case 0x341fc8u: goto label_341fc8;
        case 0x341fccu: goto label_341fcc;
        case 0x341fd0u: goto label_341fd0;
        case 0x341fd4u: goto label_341fd4;
        case 0x341fd8u: goto label_341fd8;
        case 0x341fdcu: goto label_341fdc;
        case 0x341fe0u: goto label_341fe0;
        case 0x341fe4u: goto label_341fe4;
        case 0x341fe8u: goto label_341fe8;
        case 0x341fecu: goto label_341fec;
        case 0x341ff0u: goto label_341ff0;
        case 0x341ff4u: goto label_341ff4;
        case 0x341ff8u: goto label_341ff8;
        case 0x341ffcu: goto label_341ffc;
        case 0x342000u: goto label_342000;
        case 0x342004u: goto label_342004;
        case 0x342008u: goto label_342008;
        case 0x34200cu: goto label_34200c;
        case 0x342010u: goto label_342010;
        case 0x342014u: goto label_342014;
        case 0x342018u: goto label_342018;
        case 0x34201cu: goto label_34201c;
        case 0x342020u: goto label_342020;
        case 0x342024u: goto label_342024;
        case 0x342028u: goto label_342028;
        case 0x34202cu: goto label_34202c;
        case 0x342030u: goto label_342030;
        case 0x342034u: goto label_342034;
        case 0x342038u: goto label_342038;
        case 0x34203cu: goto label_34203c;
        case 0x342040u: goto label_342040;
        case 0x342044u: goto label_342044;
        case 0x342048u: goto label_342048;
        case 0x34204cu: goto label_34204c;
        case 0x342050u: goto label_342050;
        case 0x342054u: goto label_342054;
        case 0x342058u: goto label_342058;
        case 0x34205cu: goto label_34205c;
        case 0x342060u: goto label_342060;
        case 0x342064u: goto label_342064;
        case 0x342068u: goto label_342068;
        case 0x34206cu: goto label_34206c;
        case 0x342070u: goto label_342070;
        case 0x342074u: goto label_342074;
        case 0x342078u: goto label_342078;
        case 0x34207cu: goto label_34207c;
        case 0x342080u: goto label_342080;
        case 0x342084u: goto label_342084;
        case 0x342088u: goto label_342088;
        case 0x34208cu: goto label_34208c;
        case 0x342090u: goto label_342090;
        case 0x342094u: goto label_342094;
        case 0x342098u: goto label_342098;
        case 0x34209cu: goto label_34209c;
        case 0x3420a0u: goto label_3420a0;
        case 0x3420a4u: goto label_3420a4;
        case 0x3420a8u: goto label_3420a8;
        case 0x3420acu: goto label_3420ac;
        case 0x3420b0u: goto label_3420b0;
        case 0x3420b4u: goto label_3420b4;
        case 0x3420b8u: goto label_3420b8;
        case 0x3420bcu: goto label_3420bc;
        case 0x3420c0u: goto label_3420c0;
        case 0x3420c4u: goto label_3420c4;
        case 0x3420c8u: goto label_3420c8;
        case 0x3420ccu: goto label_3420cc;
        case 0x3420d0u: goto label_3420d0;
        case 0x3420d4u: goto label_3420d4;
        case 0x3420d8u: goto label_3420d8;
        case 0x3420dcu: goto label_3420dc;
        case 0x3420e0u: goto label_3420e0;
        case 0x3420e4u: goto label_3420e4;
        case 0x3420e8u: goto label_3420e8;
        case 0x3420ecu: goto label_3420ec;
        case 0x3420f0u: goto label_3420f0;
        case 0x3420f4u: goto label_3420f4;
        case 0x3420f8u: goto label_3420f8;
        case 0x3420fcu: goto label_3420fc;
        case 0x342100u: goto label_342100;
        case 0x342104u: goto label_342104;
        case 0x342108u: goto label_342108;
        case 0x34210cu: goto label_34210c;
        case 0x342110u: goto label_342110;
        case 0x342114u: goto label_342114;
        case 0x342118u: goto label_342118;
        case 0x34211cu: goto label_34211c;
        case 0x342120u: goto label_342120;
        case 0x342124u: goto label_342124;
        case 0x342128u: goto label_342128;
        case 0x34212cu: goto label_34212c;
        case 0x342130u: goto label_342130;
        case 0x342134u: goto label_342134;
        case 0x342138u: goto label_342138;
        case 0x34213cu: goto label_34213c;
        case 0x342140u: goto label_342140;
        case 0x342144u: goto label_342144;
        case 0x342148u: goto label_342148;
        case 0x34214cu: goto label_34214c;
        case 0x342150u: goto label_342150;
        case 0x342154u: goto label_342154;
        case 0x342158u: goto label_342158;
        case 0x34215cu: goto label_34215c;
        case 0x342160u: goto label_342160;
        case 0x342164u: goto label_342164;
        case 0x342168u: goto label_342168;
        case 0x34216cu: goto label_34216c;
        case 0x342170u: goto label_342170;
        case 0x342174u: goto label_342174;
        case 0x342178u: goto label_342178;
        case 0x34217cu: goto label_34217c;
        case 0x342180u: goto label_342180;
        case 0x342184u: goto label_342184;
        case 0x342188u: goto label_342188;
        case 0x34218cu: goto label_34218c;
        case 0x342190u: goto label_342190;
        case 0x342194u: goto label_342194;
        case 0x342198u: goto label_342198;
        case 0x34219cu: goto label_34219c;
        case 0x3421a0u: goto label_3421a0;
        case 0x3421a4u: goto label_3421a4;
        case 0x3421a8u: goto label_3421a8;
        case 0x3421acu: goto label_3421ac;
        case 0x3421b0u: goto label_3421b0;
        case 0x3421b4u: goto label_3421b4;
        case 0x3421b8u: goto label_3421b8;
        case 0x3421bcu: goto label_3421bc;
        case 0x3421c0u: goto label_3421c0;
        case 0x3421c4u: goto label_3421c4;
        case 0x3421c8u: goto label_3421c8;
        case 0x3421ccu: goto label_3421cc;
        case 0x3421d0u: goto label_3421d0;
        case 0x3421d4u: goto label_3421d4;
        case 0x3421d8u: goto label_3421d8;
        case 0x3421dcu: goto label_3421dc;
        case 0x3421e0u: goto label_3421e0;
        case 0x3421e4u: goto label_3421e4;
        case 0x3421e8u: goto label_3421e8;
        case 0x3421ecu: goto label_3421ec;
        case 0x3421f0u: goto label_3421f0;
        case 0x3421f4u: goto label_3421f4;
        case 0x3421f8u: goto label_3421f8;
        case 0x3421fcu: goto label_3421fc;
        case 0x342200u: goto label_342200;
        case 0x342204u: goto label_342204;
        case 0x342208u: goto label_342208;
        case 0x34220cu: goto label_34220c;
        case 0x342210u: goto label_342210;
        case 0x342214u: goto label_342214;
        case 0x342218u: goto label_342218;
        case 0x34221cu: goto label_34221c;
        case 0x342220u: goto label_342220;
        case 0x342224u: goto label_342224;
        case 0x342228u: goto label_342228;
        case 0x34222cu: goto label_34222c;
        case 0x342230u: goto label_342230;
        case 0x342234u: goto label_342234;
        case 0x342238u: goto label_342238;
        case 0x34223cu: goto label_34223c;
        case 0x342240u: goto label_342240;
        case 0x342244u: goto label_342244;
        case 0x342248u: goto label_342248;
        case 0x34224cu: goto label_34224c;
        case 0x342250u: goto label_342250;
        case 0x342254u: goto label_342254;
        case 0x342258u: goto label_342258;
        case 0x34225cu: goto label_34225c;
        case 0x342260u: goto label_342260;
        case 0x342264u: goto label_342264;
        case 0x342268u: goto label_342268;
        case 0x34226cu: goto label_34226c;
        case 0x342270u: goto label_342270;
        case 0x342274u: goto label_342274;
        case 0x342278u: goto label_342278;
        case 0x34227cu: goto label_34227c;
        case 0x342280u: goto label_342280;
        case 0x342284u: goto label_342284;
        case 0x342288u: goto label_342288;
        case 0x34228cu: goto label_34228c;
        case 0x342290u: goto label_342290;
        case 0x342294u: goto label_342294;
        case 0x342298u: goto label_342298;
        case 0x34229cu: goto label_34229c;
        case 0x3422a0u: goto label_3422a0;
        case 0x3422a4u: goto label_3422a4;
        case 0x3422a8u: goto label_3422a8;
        case 0x3422acu: goto label_3422ac;
        case 0x3422b0u: goto label_3422b0;
        case 0x3422b4u: goto label_3422b4;
        case 0x3422b8u: goto label_3422b8;
        case 0x3422bcu: goto label_3422bc;
        case 0x3422c0u: goto label_3422c0;
        case 0x3422c4u: goto label_3422c4;
        case 0x3422c8u: goto label_3422c8;
        case 0x3422ccu: goto label_3422cc;
        case 0x3422d0u: goto label_3422d0;
        case 0x3422d4u: goto label_3422d4;
        case 0x3422d8u: goto label_3422d8;
        case 0x3422dcu: goto label_3422dc;
        case 0x3422e0u: goto label_3422e0;
        case 0x3422e4u: goto label_3422e4;
        case 0x3422e8u: goto label_3422e8;
        case 0x3422ecu: goto label_3422ec;
        case 0x3422f0u: goto label_3422f0;
        case 0x3422f4u: goto label_3422f4;
        case 0x3422f8u: goto label_3422f8;
        case 0x3422fcu: goto label_3422fc;
        case 0x342300u: goto label_342300;
        case 0x342304u: goto label_342304;
        case 0x342308u: goto label_342308;
        case 0x34230cu: goto label_34230c;
        case 0x342310u: goto label_342310;
        case 0x342314u: goto label_342314;
        case 0x342318u: goto label_342318;
        case 0x34231cu: goto label_34231c;
        case 0x342320u: goto label_342320;
        case 0x342324u: goto label_342324;
        case 0x342328u: goto label_342328;
        case 0x34232cu: goto label_34232c;
        case 0x342330u: goto label_342330;
        case 0x342334u: goto label_342334;
        case 0x342338u: goto label_342338;
        case 0x34233cu: goto label_34233c;
        case 0x342340u: goto label_342340;
        case 0x342344u: goto label_342344;
        case 0x342348u: goto label_342348;
        case 0x34234cu: goto label_34234c;
        case 0x342350u: goto label_342350;
        case 0x342354u: goto label_342354;
        case 0x342358u: goto label_342358;
        case 0x34235cu: goto label_34235c;
        case 0x342360u: goto label_342360;
        case 0x342364u: goto label_342364;
        case 0x342368u: goto label_342368;
        case 0x34236cu: goto label_34236c;
        case 0x342370u: goto label_342370;
        case 0x342374u: goto label_342374;
        case 0x342378u: goto label_342378;
        case 0x34237cu: goto label_34237c;
        case 0x342380u: goto label_342380;
        case 0x342384u: goto label_342384;
        case 0x342388u: goto label_342388;
        case 0x34238cu: goto label_34238c;
        case 0x342390u: goto label_342390;
        case 0x342394u: goto label_342394;
        case 0x342398u: goto label_342398;
        case 0x34239cu: goto label_34239c;
        case 0x3423a0u: goto label_3423a0;
        case 0x3423a4u: goto label_3423a4;
        case 0x3423a8u: goto label_3423a8;
        case 0x3423acu: goto label_3423ac;
        case 0x3423b0u: goto label_3423b0;
        case 0x3423b4u: goto label_3423b4;
        case 0x3423b8u: goto label_3423b8;
        case 0x3423bcu: goto label_3423bc;
        case 0x3423c0u: goto label_3423c0;
        case 0x3423c4u: goto label_3423c4;
        case 0x3423c8u: goto label_3423c8;
        case 0x3423ccu: goto label_3423cc;
        case 0x3423d0u: goto label_3423d0;
        case 0x3423d4u: goto label_3423d4;
        case 0x3423d8u: goto label_3423d8;
        case 0x3423dcu: goto label_3423dc;
        case 0x3423e0u: goto label_3423e0;
        case 0x3423e4u: goto label_3423e4;
        case 0x3423e8u: goto label_3423e8;
        case 0x3423ecu: goto label_3423ec;
        case 0x3423f0u: goto label_3423f0;
        case 0x3423f4u: goto label_3423f4;
        case 0x3423f8u: goto label_3423f8;
        case 0x3423fcu: goto label_3423fc;
        case 0x342400u: goto label_342400;
        case 0x342404u: goto label_342404;
        case 0x342408u: goto label_342408;
        case 0x34240cu: goto label_34240c;
        case 0x342410u: goto label_342410;
        case 0x342414u: goto label_342414;
        case 0x342418u: goto label_342418;
        case 0x34241cu: goto label_34241c;
        case 0x342420u: goto label_342420;
        case 0x342424u: goto label_342424;
        case 0x342428u: goto label_342428;
        case 0x34242cu: goto label_34242c;
        case 0x342430u: goto label_342430;
        case 0x342434u: goto label_342434;
        case 0x342438u: goto label_342438;
        case 0x34243cu: goto label_34243c;
        case 0x342440u: goto label_342440;
        case 0x342444u: goto label_342444;
        case 0x342448u: goto label_342448;
        case 0x34244cu: goto label_34244c;
        case 0x342450u: goto label_342450;
        case 0x342454u: goto label_342454;
        case 0x342458u: goto label_342458;
        case 0x34245cu: goto label_34245c;
        case 0x342460u: goto label_342460;
        case 0x342464u: goto label_342464;
        case 0x342468u: goto label_342468;
        case 0x34246cu: goto label_34246c;
        case 0x342470u: goto label_342470;
        case 0x342474u: goto label_342474;
        case 0x342478u: goto label_342478;
        case 0x34247cu: goto label_34247c;
        case 0x342480u: goto label_342480;
        case 0x342484u: goto label_342484;
        case 0x342488u: goto label_342488;
        case 0x34248cu: goto label_34248c;
        case 0x342490u: goto label_342490;
        case 0x342494u: goto label_342494;
        case 0x342498u: goto label_342498;
        case 0x34249cu: goto label_34249c;
        case 0x3424a0u: goto label_3424a0;
        case 0x3424a4u: goto label_3424a4;
        case 0x3424a8u: goto label_3424a8;
        case 0x3424acu: goto label_3424ac;
        case 0x3424b0u: goto label_3424b0;
        case 0x3424b4u: goto label_3424b4;
        case 0x3424b8u: goto label_3424b8;
        case 0x3424bcu: goto label_3424bc;
        case 0x3424c0u: goto label_3424c0;
        case 0x3424c4u: goto label_3424c4;
        case 0x3424c8u: goto label_3424c8;
        case 0x3424ccu: goto label_3424cc;
        case 0x3424d0u: goto label_3424d0;
        case 0x3424d4u: goto label_3424d4;
        case 0x3424d8u: goto label_3424d8;
        case 0x3424dcu: goto label_3424dc;
        case 0x3424e0u: goto label_3424e0;
        case 0x3424e4u: goto label_3424e4;
        case 0x3424e8u: goto label_3424e8;
        case 0x3424ecu: goto label_3424ec;
        case 0x3424f0u: goto label_3424f0;
        case 0x3424f4u: goto label_3424f4;
        case 0x3424f8u: goto label_3424f8;
        case 0x3424fcu: goto label_3424fc;
        case 0x342500u: goto label_342500;
        case 0x342504u: goto label_342504;
        case 0x342508u: goto label_342508;
        case 0x34250cu: goto label_34250c;
        case 0x342510u: goto label_342510;
        case 0x342514u: goto label_342514;
        case 0x342518u: goto label_342518;
        case 0x34251cu: goto label_34251c;
        case 0x342520u: goto label_342520;
        case 0x342524u: goto label_342524;
        case 0x342528u: goto label_342528;
        case 0x34252cu: goto label_34252c;
        case 0x342530u: goto label_342530;
        case 0x342534u: goto label_342534;
        case 0x342538u: goto label_342538;
        case 0x34253cu: goto label_34253c;
        case 0x342540u: goto label_342540;
        case 0x342544u: goto label_342544;
        case 0x342548u: goto label_342548;
        case 0x34254cu: goto label_34254c;
        case 0x342550u: goto label_342550;
        case 0x342554u: goto label_342554;
        case 0x342558u: goto label_342558;
        case 0x34255cu: goto label_34255c;
        case 0x342560u: goto label_342560;
        case 0x342564u: goto label_342564;
        case 0x342568u: goto label_342568;
        case 0x34256cu: goto label_34256c;
        case 0x342570u: goto label_342570;
        case 0x342574u: goto label_342574;
        case 0x342578u: goto label_342578;
        case 0x34257cu: goto label_34257c;
        case 0x342580u: goto label_342580;
        case 0x342584u: goto label_342584;
        case 0x342588u: goto label_342588;
        case 0x34258cu: goto label_34258c;
        case 0x342590u: goto label_342590;
        case 0x342594u: goto label_342594;
        case 0x342598u: goto label_342598;
        case 0x34259cu: goto label_34259c;
        case 0x3425a0u: goto label_3425a0;
        case 0x3425a4u: goto label_3425a4;
        case 0x3425a8u: goto label_3425a8;
        case 0x3425acu: goto label_3425ac;
        case 0x3425b0u: goto label_3425b0;
        case 0x3425b4u: goto label_3425b4;
        case 0x3425b8u: goto label_3425b8;
        case 0x3425bcu: goto label_3425bc;
        case 0x3425c0u: goto label_3425c0;
        case 0x3425c4u: goto label_3425c4;
        case 0x3425c8u: goto label_3425c8;
        case 0x3425ccu: goto label_3425cc;
        case 0x3425d0u: goto label_3425d0;
        case 0x3425d4u: goto label_3425d4;
        case 0x3425d8u: goto label_3425d8;
        case 0x3425dcu: goto label_3425dc;
        case 0x3425e0u: goto label_3425e0;
        case 0x3425e4u: goto label_3425e4;
        case 0x3425e8u: goto label_3425e8;
        case 0x3425ecu: goto label_3425ec;
        case 0x3425f0u: goto label_3425f0;
        case 0x3425f4u: goto label_3425f4;
        case 0x3425f8u: goto label_3425f8;
        case 0x3425fcu: goto label_3425fc;
        case 0x342600u: goto label_342600;
        case 0x342604u: goto label_342604;
        case 0x342608u: goto label_342608;
        case 0x34260cu: goto label_34260c;
        case 0x342610u: goto label_342610;
        case 0x342614u: goto label_342614;
        case 0x342618u: goto label_342618;
        case 0x34261cu: goto label_34261c;
        case 0x342620u: goto label_342620;
        case 0x342624u: goto label_342624;
        case 0x342628u: goto label_342628;
        case 0x34262cu: goto label_34262c;
        case 0x342630u: goto label_342630;
        case 0x342634u: goto label_342634;
        case 0x342638u: goto label_342638;
        case 0x34263cu: goto label_34263c;
        case 0x342640u: goto label_342640;
        case 0x342644u: goto label_342644;
        case 0x342648u: goto label_342648;
        case 0x34264cu: goto label_34264c;
        case 0x342650u: goto label_342650;
        case 0x342654u: goto label_342654;
        case 0x342658u: goto label_342658;
        case 0x34265cu: goto label_34265c;
        case 0x342660u: goto label_342660;
        case 0x342664u: goto label_342664;
        case 0x342668u: goto label_342668;
        case 0x34266cu: goto label_34266c;
        case 0x342670u: goto label_342670;
        case 0x342674u: goto label_342674;
        case 0x342678u: goto label_342678;
        case 0x34267cu: goto label_34267c;
        case 0x342680u: goto label_342680;
        case 0x342684u: goto label_342684;
        case 0x342688u: goto label_342688;
        case 0x34268cu: goto label_34268c;
        case 0x342690u: goto label_342690;
        case 0x342694u: goto label_342694;
        case 0x342698u: goto label_342698;
        case 0x34269cu: goto label_34269c;
        case 0x3426a0u: goto label_3426a0;
        case 0x3426a4u: goto label_3426a4;
        case 0x3426a8u: goto label_3426a8;
        case 0x3426acu: goto label_3426ac;
        case 0x3426b0u: goto label_3426b0;
        case 0x3426b4u: goto label_3426b4;
        case 0x3426b8u: goto label_3426b8;
        case 0x3426bcu: goto label_3426bc;
        case 0x3426c0u: goto label_3426c0;
        case 0x3426c4u: goto label_3426c4;
        case 0x3426c8u: goto label_3426c8;
        case 0x3426ccu: goto label_3426cc;
        case 0x3426d0u: goto label_3426d0;
        case 0x3426d4u: goto label_3426d4;
        case 0x3426d8u: goto label_3426d8;
        case 0x3426dcu: goto label_3426dc;
        case 0x3426e0u: goto label_3426e0;
        case 0x3426e4u: goto label_3426e4;
        case 0x3426e8u: goto label_3426e8;
        case 0x3426ecu: goto label_3426ec;
        case 0x3426f0u: goto label_3426f0;
        case 0x3426f4u: goto label_3426f4;
        case 0x3426f8u: goto label_3426f8;
        case 0x3426fcu: goto label_3426fc;
        case 0x342700u: goto label_342700;
        case 0x342704u: goto label_342704;
        case 0x342708u: goto label_342708;
        case 0x34270cu: goto label_34270c;
        case 0x342710u: goto label_342710;
        case 0x342714u: goto label_342714;
        case 0x342718u: goto label_342718;
        case 0x34271cu: goto label_34271c;
        case 0x342720u: goto label_342720;
        case 0x342724u: goto label_342724;
        case 0x342728u: goto label_342728;
        case 0x34272cu: goto label_34272c;
        case 0x342730u: goto label_342730;
        case 0x342734u: goto label_342734;
        case 0x342738u: goto label_342738;
        case 0x34273cu: goto label_34273c;
        case 0x342740u: goto label_342740;
        case 0x342744u: goto label_342744;
        case 0x342748u: goto label_342748;
        case 0x34274cu: goto label_34274c;
        case 0x342750u: goto label_342750;
        case 0x342754u: goto label_342754;
        case 0x342758u: goto label_342758;
        case 0x34275cu: goto label_34275c;
        case 0x342760u: goto label_342760;
        case 0x342764u: goto label_342764;
        case 0x342768u: goto label_342768;
        case 0x34276cu: goto label_34276c;
        case 0x342770u: goto label_342770;
        case 0x342774u: goto label_342774;
        case 0x342778u: goto label_342778;
        case 0x34277cu: goto label_34277c;
        case 0x342780u: goto label_342780;
        case 0x342784u: goto label_342784;
        case 0x342788u: goto label_342788;
        case 0x34278cu: goto label_34278c;
        case 0x342790u: goto label_342790;
        case 0x342794u: goto label_342794;
        case 0x342798u: goto label_342798;
        case 0x34279cu: goto label_34279c;
        case 0x3427a0u: goto label_3427a0;
        case 0x3427a4u: goto label_3427a4;
        case 0x3427a8u: goto label_3427a8;
        case 0x3427acu: goto label_3427ac;
        case 0x3427b0u: goto label_3427b0;
        case 0x3427b4u: goto label_3427b4;
        case 0x3427b8u: goto label_3427b8;
        case 0x3427bcu: goto label_3427bc;
        case 0x3427c0u: goto label_3427c0;
        case 0x3427c4u: goto label_3427c4;
        case 0x3427c8u: goto label_3427c8;
        case 0x3427ccu: goto label_3427cc;
        case 0x3427d0u: goto label_3427d0;
        case 0x3427d4u: goto label_3427d4;
        case 0x3427d8u: goto label_3427d8;
        case 0x3427dcu: goto label_3427dc;
        case 0x3427e0u: goto label_3427e0;
        case 0x3427e4u: goto label_3427e4;
        case 0x3427e8u: goto label_3427e8;
        case 0x3427ecu: goto label_3427ec;
        case 0x3427f0u: goto label_3427f0;
        case 0x3427f4u: goto label_3427f4;
        case 0x3427f8u: goto label_3427f8;
        case 0x3427fcu: goto label_3427fc;
        case 0x342800u: goto label_342800;
        case 0x342804u: goto label_342804;
        case 0x342808u: goto label_342808;
        case 0x34280cu: goto label_34280c;
        case 0x342810u: goto label_342810;
        case 0x342814u: goto label_342814;
        case 0x342818u: goto label_342818;
        case 0x34281cu: goto label_34281c;
        case 0x342820u: goto label_342820;
        case 0x342824u: goto label_342824;
        case 0x342828u: goto label_342828;
        case 0x34282cu: goto label_34282c;
        case 0x342830u: goto label_342830;
        case 0x342834u: goto label_342834;
        case 0x342838u: goto label_342838;
        case 0x34283cu: goto label_34283c;
        case 0x342840u: goto label_342840;
        case 0x342844u: goto label_342844;
        case 0x342848u: goto label_342848;
        case 0x34284cu: goto label_34284c;
        case 0x342850u: goto label_342850;
        case 0x342854u: goto label_342854;
        case 0x342858u: goto label_342858;
        case 0x34285cu: goto label_34285c;
        case 0x342860u: goto label_342860;
        case 0x342864u: goto label_342864;
        case 0x342868u: goto label_342868;
        case 0x34286cu: goto label_34286c;
        case 0x342870u: goto label_342870;
        case 0x342874u: goto label_342874;
        case 0x342878u: goto label_342878;
        case 0x34287cu: goto label_34287c;
        case 0x342880u: goto label_342880;
        case 0x342884u: goto label_342884;
        case 0x342888u: goto label_342888;
        case 0x34288cu: goto label_34288c;
        case 0x342890u: goto label_342890;
        case 0x342894u: goto label_342894;
        case 0x342898u: goto label_342898;
        case 0x34289cu: goto label_34289c;
        case 0x3428a0u: goto label_3428a0;
        case 0x3428a4u: goto label_3428a4;
        case 0x3428a8u: goto label_3428a8;
        case 0x3428acu: goto label_3428ac;
        case 0x3428b0u: goto label_3428b0;
        case 0x3428b4u: goto label_3428b4;
        case 0x3428b8u: goto label_3428b8;
        case 0x3428bcu: goto label_3428bc;
        case 0x3428c0u: goto label_3428c0;
        case 0x3428c4u: goto label_3428c4;
        case 0x3428c8u: goto label_3428c8;
        case 0x3428ccu: goto label_3428cc;
        case 0x3428d0u: goto label_3428d0;
        case 0x3428d4u: goto label_3428d4;
        case 0x3428d8u: goto label_3428d8;
        case 0x3428dcu: goto label_3428dc;
        case 0x3428e0u: goto label_3428e0;
        case 0x3428e4u: goto label_3428e4;
        case 0x3428e8u: goto label_3428e8;
        case 0x3428ecu: goto label_3428ec;
        case 0x3428f0u: goto label_3428f0;
        case 0x3428f4u: goto label_3428f4;
        case 0x3428f8u: goto label_3428f8;
        case 0x3428fcu: goto label_3428fc;
        case 0x342900u: goto label_342900;
        case 0x342904u: goto label_342904;
        case 0x342908u: goto label_342908;
        case 0x34290cu: goto label_34290c;
        case 0x342910u: goto label_342910;
        case 0x342914u: goto label_342914;
        case 0x342918u: goto label_342918;
        case 0x34291cu: goto label_34291c;
        case 0x342920u: goto label_342920;
        case 0x342924u: goto label_342924;
        case 0x342928u: goto label_342928;
        case 0x34292cu: goto label_34292c;
        case 0x342930u: goto label_342930;
        case 0x342934u: goto label_342934;
        case 0x342938u: goto label_342938;
        case 0x34293cu: goto label_34293c;
        case 0x342940u: goto label_342940;
        case 0x342944u: goto label_342944;
        case 0x342948u: goto label_342948;
        case 0x34294cu: goto label_34294c;
        case 0x342950u: goto label_342950;
        case 0x342954u: goto label_342954;
        case 0x342958u: goto label_342958;
        case 0x34295cu: goto label_34295c;
        case 0x342960u: goto label_342960;
        case 0x342964u: goto label_342964;
        case 0x342968u: goto label_342968;
        case 0x34296cu: goto label_34296c;
        case 0x342970u: goto label_342970;
        case 0x342974u: goto label_342974;
        case 0x342978u: goto label_342978;
        case 0x34297cu: goto label_34297c;
        case 0x342980u: goto label_342980;
        case 0x342984u: goto label_342984;
        case 0x342988u: goto label_342988;
        case 0x34298cu: goto label_34298c;
        case 0x342990u: goto label_342990;
        case 0x342994u: goto label_342994;
        case 0x342998u: goto label_342998;
        case 0x34299cu: goto label_34299c;
        case 0x3429a0u: goto label_3429a0;
        case 0x3429a4u: goto label_3429a4;
        case 0x3429a8u: goto label_3429a8;
        case 0x3429acu: goto label_3429ac;
        case 0x3429b0u: goto label_3429b0;
        case 0x3429b4u: goto label_3429b4;
        case 0x3429b8u: goto label_3429b8;
        case 0x3429bcu: goto label_3429bc;
        case 0x3429c0u: goto label_3429c0;
        case 0x3429c4u: goto label_3429c4;
        case 0x3429c8u: goto label_3429c8;
        case 0x3429ccu: goto label_3429cc;
        case 0x3429d0u: goto label_3429d0;
        case 0x3429d4u: goto label_3429d4;
        case 0x3429d8u: goto label_3429d8;
        case 0x3429dcu: goto label_3429dc;
        case 0x3429e0u: goto label_3429e0;
        case 0x3429e4u: goto label_3429e4;
        case 0x3429e8u: goto label_3429e8;
        case 0x3429ecu: goto label_3429ec;
        case 0x3429f0u: goto label_3429f0;
        case 0x3429f4u: goto label_3429f4;
        case 0x3429f8u: goto label_3429f8;
        case 0x3429fcu: goto label_3429fc;
        case 0x342a00u: goto label_342a00;
        case 0x342a04u: goto label_342a04;
        case 0x342a08u: goto label_342a08;
        case 0x342a0cu: goto label_342a0c;
        case 0x342a10u: goto label_342a10;
        case 0x342a14u: goto label_342a14;
        case 0x342a18u: goto label_342a18;
        case 0x342a1cu: goto label_342a1c;
        case 0x342a20u: goto label_342a20;
        case 0x342a24u: goto label_342a24;
        case 0x342a28u: goto label_342a28;
        case 0x342a2cu: goto label_342a2c;
        case 0x342a30u: goto label_342a30;
        case 0x342a34u: goto label_342a34;
        case 0x342a38u: goto label_342a38;
        case 0x342a3cu: goto label_342a3c;
        case 0x342a40u: goto label_342a40;
        case 0x342a44u: goto label_342a44;
        case 0x342a48u: goto label_342a48;
        case 0x342a4cu: goto label_342a4c;
        case 0x342a50u: goto label_342a50;
        case 0x342a54u: goto label_342a54;
        case 0x342a58u: goto label_342a58;
        case 0x342a5cu: goto label_342a5c;
        case 0x342a60u: goto label_342a60;
        case 0x342a64u: goto label_342a64;
        case 0x342a68u: goto label_342a68;
        case 0x342a6cu: goto label_342a6c;
        case 0x342a70u: goto label_342a70;
        case 0x342a74u: goto label_342a74;
        case 0x342a78u: goto label_342a78;
        case 0x342a7cu: goto label_342a7c;
        case 0x342a80u: goto label_342a80;
        case 0x342a84u: goto label_342a84;
        case 0x342a88u: goto label_342a88;
        case 0x342a8cu: goto label_342a8c;
        case 0x342a90u: goto label_342a90;
        case 0x342a94u: goto label_342a94;
        case 0x342a98u: goto label_342a98;
        case 0x342a9cu: goto label_342a9c;
        case 0x342aa0u: goto label_342aa0;
        case 0x342aa4u: goto label_342aa4;
        case 0x342aa8u: goto label_342aa8;
        case 0x342aacu: goto label_342aac;
        case 0x342ab0u: goto label_342ab0;
        case 0x342ab4u: goto label_342ab4;
        case 0x342ab8u: goto label_342ab8;
        case 0x342abcu: goto label_342abc;
        case 0x342ac0u: goto label_342ac0;
        case 0x342ac4u: goto label_342ac4;
        case 0x342ac8u: goto label_342ac8;
        case 0x342accu: goto label_342acc;
        case 0x342ad0u: goto label_342ad0;
        case 0x342ad4u: goto label_342ad4;
        case 0x342ad8u: goto label_342ad8;
        case 0x342adcu: goto label_342adc;
        case 0x342ae0u: goto label_342ae0;
        case 0x342ae4u: goto label_342ae4;
        case 0x342ae8u: goto label_342ae8;
        case 0x342aecu: goto label_342aec;
        case 0x342af0u: goto label_342af0;
        case 0x342af4u: goto label_342af4;
        case 0x342af8u: goto label_342af8;
        case 0x342afcu: goto label_342afc;
        case 0x342b00u: goto label_342b00;
        case 0x342b04u: goto label_342b04;
        case 0x342b08u: goto label_342b08;
        case 0x342b0cu: goto label_342b0c;
        case 0x342b10u: goto label_342b10;
        case 0x342b14u: goto label_342b14;
        case 0x342b18u: goto label_342b18;
        case 0x342b1cu: goto label_342b1c;
        case 0x342b20u: goto label_342b20;
        case 0x342b24u: goto label_342b24;
        case 0x342b28u: goto label_342b28;
        case 0x342b2cu: goto label_342b2c;
        case 0x342b30u: goto label_342b30;
        case 0x342b34u: goto label_342b34;
        case 0x342b38u: goto label_342b38;
        case 0x342b3cu: goto label_342b3c;
        case 0x342b40u: goto label_342b40;
        case 0x342b44u: goto label_342b44;
        case 0x342b48u: goto label_342b48;
        case 0x342b4cu: goto label_342b4c;
        case 0x342b50u: goto label_342b50;
        case 0x342b54u: goto label_342b54;
        case 0x342b58u: goto label_342b58;
        case 0x342b5cu: goto label_342b5c;
        case 0x342b60u: goto label_342b60;
        case 0x342b64u: goto label_342b64;
        case 0x342b68u: goto label_342b68;
        case 0x342b6cu: goto label_342b6c;
        case 0x342b70u: goto label_342b70;
        case 0x342b74u: goto label_342b74;
        case 0x342b78u: goto label_342b78;
        case 0x342b7cu: goto label_342b7c;
        case 0x342b80u: goto label_342b80;
        case 0x342b84u: goto label_342b84;
        case 0x342b88u: goto label_342b88;
        case 0x342b8cu: goto label_342b8c;
        case 0x342b90u: goto label_342b90;
        case 0x342b94u: goto label_342b94;
        case 0x342b98u: goto label_342b98;
        case 0x342b9cu: goto label_342b9c;
        case 0x342ba0u: goto label_342ba0;
        case 0x342ba4u: goto label_342ba4;
        case 0x342ba8u: goto label_342ba8;
        case 0x342bacu: goto label_342bac;
        case 0x342bb0u: goto label_342bb0;
        case 0x342bb4u: goto label_342bb4;
        case 0x342bb8u: goto label_342bb8;
        case 0x342bbcu: goto label_342bbc;
        case 0x342bc0u: goto label_342bc0;
        case 0x342bc4u: goto label_342bc4;
        case 0x342bc8u: goto label_342bc8;
        case 0x342bccu: goto label_342bcc;
        case 0x342bd0u: goto label_342bd0;
        case 0x342bd4u: goto label_342bd4;
        case 0x342bd8u: goto label_342bd8;
        case 0x342bdcu: goto label_342bdc;
        case 0x342be0u: goto label_342be0;
        case 0x342be4u: goto label_342be4;
        case 0x342be8u: goto label_342be8;
        case 0x342becu: goto label_342bec;
        case 0x342bf0u: goto label_342bf0;
        case 0x342bf4u: goto label_342bf4;
        case 0x342bf8u: goto label_342bf8;
        case 0x342bfcu: goto label_342bfc;
        case 0x342c00u: goto label_342c00;
        case 0x342c04u: goto label_342c04;
        case 0x342c08u: goto label_342c08;
        case 0x342c0cu: goto label_342c0c;
        case 0x342c10u: goto label_342c10;
        case 0x342c14u: goto label_342c14;
        case 0x342c18u: goto label_342c18;
        case 0x342c1cu: goto label_342c1c;
        case 0x342c20u: goto label_342c20;
        case 0x342c24u: goto label_342c24;
        case 0x342c28u: goto label_342c28;
        case 0x342c2cu: goto label_342c2c;
        case 0x342c30u: goto label_342c30;
        case 0x342c34u: goto label_342c34;
        case 0x342c38u: goto label_342c38;
        case 0x342c3cu: goto label_342c3c;
        case 0x342c40u: goto label_342c40;
        case 0x342c44u: goto label_342c44;
        case 0x342c48u: goto label_342c48;
        case 0x342c4cu: goto label_342c4c;
        case 0x342c50u: goto label_342c50;
        case 0x342c54u: goto label_342c54;
        case 0x342c58u: goto label_342c58;
        case 0x342c5cu: goto label_342c5c;
        case 0x342c60u: goto label_342c60;
        case 0x342c64u: goto label_342c64;
        case 0x342c68u: goto label_342c68;
        case 0x342c6cu: goto label_342c6c;
        case 0x342c70u: goto label_342c70;
        case 0x342c74u: goto label_342c74;
        case 0x342c78u: goto label_342c78;
        case 0x342c7cu: goto label_342c7c;
        case 0x342c80u: goto label_342c80;
        case 0x342c84u: goto label_342c84;
        case 0x342c88u: goto label_342c88;
        case 0x342c8cu: goto label_342c8c;
        case 0x342c90u: goto label_342c90;
        case 0x342c94u: goto label_342c94;
        case 0x342c98u: goto label_342c98;
        case 0x342c9cu: goto label_342c9c;
        case 0x342ca0u: goto label_342ca0;
        case 0x342ca4u: goto label_342ca4;
        case 0x342ca8u: goto label_342ca8;
        case 0x342cacu: goto label_342cac;
        case 0x342cb0u: goto label_342cb0;
        case 0x342cb4u: goto label_342cb4;
        case 0x342cb8u: goto label_342cb8;
        case 0x342cbcu: goto label_342cbc;
        case 0x342cc0u: goto label_342cc0;
        case 0x342cc4u: goto label_342cc4;
        case 0x342cc8u: goto label_342cc8;
        case 0x342cccu: goto label_342ccc;
        case 0x342cd0u: goto label_342cd0;
        case 0x342cd4u: goto label_342cd4;
        case 0x342cd8u: goto label_342cd8;
        case 0x342cdcu: goto label_342cdc;
        case 0x342ce0u: goto label_342ce0;
        case 0x342ce4u: goto label_342ce4;
        case 0x342ce8u: goto label_342ce8;
        case 0x342cecu: goto label_342cec;
        case 0x342cf0u: goto label_342cf0;
        case 0x342cf4u: goto label_342cf4;
        case 0x342cf8u: goto label_342cf8;
        case 0x342cfcu: goto label_342cfc;
        case 0x342d00u: goto label_342d00;
        case 0x342d04u: goto label_342d04;
        case 0x342d08u: goto label_342d08;
        case 0x342d0cu: goto label_342d0c;
        case 0x342d10u: goto label_342d10;
        case 0x342d14u: goto label_342d14;
        case 0x342d18u: goto label_342d18;
        case 0x342d1cu: goto label_342d1c;
        case 0x342d20u: goto label_342d20;
        case 0x342d24u: goto label_342d24;
        case 0x342d28u: goto label_342d28;
        case 0x342d2cu: goto label_342d2c;
        case 0x342d30u: goto label_342d30;
        case 0x342d34u: goto label_342d34;
        case 0x342d38u: goto label_342d38;
        case 0x342d3cu: goto label_342d3c;
        case 0x342d40u: goto label_342d40;
        case 0x342d44u: goto label_342d44;
        case 0x342d48u: goto label_342d48;
        case 0x342d4cu: goto label_342d4c;
        case 0x342d50u: goto label_342d50;
        case 0x342d54u: goto label_342d54;
        case 0x342d58u: goto label_342d58;
        case 0x342d5cu: goto label_342d5c;
        case 0x342d60u: goto label_342d60;
        case 0x342d64u: goto label_342d64;
        case 0x342d68u: goto label_342d68;
        case 0x342d6cu: goto label_342d6c;
        case 0x342d70u: goto label_342d70;
        case 0x342d74u: goto label_342d74;
        case 0x342d78u: goto label_342d78;
        case 0x342d7cu: goto label_342d7c;
        case 0x342d80u: goto label_342d80;
        case 0x342d84u: goto label_342d84;
        case 0x342d88u: goto label_342d88;
        case 0x342d8cu: goto label_342d8c;
        case 0x342d90u: goto label_342d90;
        case 0x342d94u: goto label_342d94;
        case 0x342d98u: goto label_342d98;
        case 0x342d9cu: goto label_342d9c;
        case 0x342da0u: goto label_342da0;
        case 0x342da4u: goto label_342da4;
        case 0x342da8u: goto label_342da8;
        case 0x342dacu: goto label_342dac;
        case 0x342db0u: goto label_342db0;
        case 0x342db4u: goto label_342db4;
        case 0x342db8u: goto label_342db8;
        case 0x342dbcu: goto label_342dbc;
        case 0x342dc0u: goto label_342dc0;
        case 0x342dc4u: goto label_342dc4;
        case 0x342dc8u: goto label_342dc8;
        case 0x342dccu: goto label_342dcc;
        case 0x342dd0u: goto label_342dd0;
        case 0x342dd4u: goto label_342dd4;
        case 0x342dd8u: goto label_342dd8;
        case 0x342ddcu: goto label_342ddc;
        case 0x342de0u: goto label_342de0;
        case 0x342de4u: goto label_342de4;
        case 0x342de8u: goto label_342de8;
        case 0x342decu: goto label_342dec;
        case 0x342df0u: goto label_342df0;
        case 0x342df4u: goto label_342df4;
        case 0x342df8u: goto label_342df8;
        case 0x342dfcu: goto label_342dfc;
        case 0x342e00u: goto label_342e00;
        case 0x342e04u: goto label_342e04;
        case 0x342e08u: goto label_342e08;
        case 0x342e0cu: goto label_342e0c;
        case 0x342e10u: goto label_342e10;
        case 0x342e14u: goto label_342e14;
        case 0x342e18u: goto label_342e18;
        case 0x342e1cu: goto label_342e1c;
        case 0x342e20u: goto label_342e20;
        case 0x342e24u: goto label_342e24;
        case 0x342e28u: goto label_342e28;
        case 0x342e2cu: goto label_342e2c;
        case 0x342e30u: goto label_342e30;
        case 0x342e34u: goto label_342e34;
        case 0x342e38u: goto label_342e38;
        case 0x342e3cu: goto label_342e3c;
        case 0x342e40u: goto label_342e40;
        case 0x342e44u: goto label_342e44;
        case 0x342e48u: goto label_342e48;
        case 0x342e4cu: goto label_342e4c;
        case 0x342e50u: goto label_342e50;
        case 0x342e54u: goto label_342e54;
        case 0x342e58u: goto label_342e58;
        case 0x342e5cu: goto label_342e5c;
        case 0x342e60u: goto label_342e60;
        case 0x342e64u: goto label_342e64;
        case 0x342e68u: goto label_342e68;
        case 0x342e6cu: goto label_342e6c;
        case 0x342e70u: goto label_342e70;
        case 0x342e74u: goto label_342e74;
        case 0x342e78u: goto label_342e78;
        case 0x342e7cu: goto label_342e7c;
        case 0x342e80u: goto label_342e80;
        case 0x342e84u: goto label_342e84;
        case 0x342e88u: goto label_342e88;
        case 0x342e8cu: goto label_342e8c;
        case 0x342e90u: goto label_342e90;
        case 0x342e94u: goto label_342e94;
        case 0x342e98u: goto label_342e98;
        case 0x342e9cu: goto label_342e9c;
        case 0x342ea0u: goto label_342ea0;
        case 0x342ea4u: goto label_342ea4;
        case 0x342ea8u: goto label_342ea8;
        case 0x342eacu: goto label_342eac;
        case 0x342eb0u: goto label_342eb0;
        case 0x342eb4u: goto label_342eb4;
        case 0x342eb8u: goto label_342eb8;
        case 0x342ebcu: goto label_342ebc;
        case 0x342ec0u: goto label_342ec0;
        case 0x342ec4u: goto label_342ec4;
        case 0x342ec8u: goto label_342ec8;
        case 0x342eccu: goto label_342ecc;
        case 0x342ed0u: goto label_342ed0;
        case 0x342ed4u: goto label_342ed4;
        case 0x342ed8u: goto label_342ed8;
        case 0x342edcu: goto label_342edc;
        case 0x342ee0u: goto label_342ee0;
        case 0x342ee4u: goto label_342ee4;
        case 0x342ee8u: goto label_342ee8;
        case 0x342eecu: goto label_342eec;
        case 0x342ef0u: goto label_342ef0;
        case 0x342ef4u: goto label_342ef4;
        case 0x342ef8u: goto label_342ef8;
        case 0x342efcu: goto label_342efc;
        case 0x342f00u: goto label_342f00;
        case 0x342f04u: goto label_342f04;
        case 0x342f08u: goto label_342f08;
        case 0x342f0cu: goto label_342f0c;
        case 0x342f10u: goto label_342f10;
        case 0x342f14u: goto label_342f14;
        case 0x342f18u: goto label_342f18;
        case 0x342f1cu: goto label_342f1c;
        case 0x342f20u: goto label_342f20;
        case 0x342f24u: goto label_342f24;
        case 0x342f28u: goto label_342f28;
        case 0x342f2cu: goto label_342f2c;
        case 0x342f30u: goto label_342f30;
        case 0x342f34u: goto label_342f34;
        case 0x342f38u: goto label_342f38;
        case 0x342f3cu: goto label_342f3c;
        case 0x342f40u: goto label_342f40;
        case 0x342f44u: goto label_342f44;
        case 0x342f48u: goto label_342f48;
        case 0x342f4cu: goto label_342f4c;
        case 0x342f50u: goto label_342f50;
        case 0x342f54u: goto label_342f54;
        case 0x342f58u: goto label_342f58;
        case 0x342f5cu: goto label_342f5c;
        case 0x342f60u: goto label_342f60;
        case 0x342f64u: goto label_342f64;
        case 0x342f68u: goto label_342f68;
        case 0x342f6cu: goto label_342f6c;
        case 0x342f70u: goto label_342f70;
        case 0x342f74u: goto label_342f74;
        case 0x342f78u: goto label_342f78;
        case 0x342f7cu: goto label_342f7c;
        case 0x342f80u: goto label_342f80;
        case 0x342f84u: goto label_342f84;
        case 0x342f88u: goto label_342f88;
        case 0x342f8cu: goto label_342f8c;
        case 0x342f90u: goto label_342f90;
        case 0x342f94u: goto label_342f94;
        case 0x342f98u: goto label_342f98;
        case 0x342f9cu: goto label_342f9c;
        case 0x342fa0u: goto label_342fa0;
        case 0x342fa4u: goto label_342fa4;
        case 0x342fa8u: goto label_342fa8;
        case 0x342facu: goto label_342fac;
        case 0x342fb0u: goto label_342fb0;
        case 0x342fb4u: goto label_342fb4;
        case 0x342fb8u: goto label_342fb8;
        case 0x342fbcu: goto label_342fbc;
        case 0x342fc0u: goto label_342fc0;
        case 0x342fc4u: goto label_342fc4;
        case 0x342fc8u: goto label_342fc8;
        case 0x342fccu: goto label_342fcc;
        case 0x342fd0u: goto label_342fd0;
        case 0x342fd4u: goto label_342fd4;
        case 0x342fd8u: goto label_342fd8;
        case 0x342fdcu: goto label_342fdc;
        default: break;
    }

    ctx->pc = 0x341ed0u;

label_341ed0:
    // 0x341ed0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x341ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_341ed4:
    // 0x341ed4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x341ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
label_341ed8:
    // 0x341ed8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x341ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_341edc:
    // 0x341edc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x341edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_341ee0:
    // 0x341ee0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x341ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_341ee4:
    // 0x341ee4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x341ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_341ee8:
    // 0x341ee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x341ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_341eec:
    // 0x341eec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x341eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_341ef0:
    // 0x341ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_341ef4:
    // 0x341ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_341ef8:
    // 0x341ef8: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x341ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_341efc:
    // 0x341efc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x341efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_341f00:
    // 0x341f00: 0x24570080  addiu       $s7, $v0, 0x80
    ctx->pc = 0x341f00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_341f04:
    // 0x341f04: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x341f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_341f08:
    // 0x341f08: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x341f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_341f0c:
    // 0x341f0c: 0x245236b0  addiu       $s2, $v0, 0x36B0
    ctx->pc = 0x341f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
label_341f10:
    // 0x341f10: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341f10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f14:
    // 0x341f14: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x341f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_341f18:
    // 0x341f18: 0xc0677d8  jal         func_19DF60
label_341f1c:
    if (ctx->pc == 0x341F1Cu) {
        ctx->pc = 0x341F20u;
        goto label_341f20;
    }
    ctx->pc = 0x341F18u;
    SET_GPR_U32(ctx, 31, 0x341F20u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x341F18u, 0x341F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F20u;
label_341f20:
    // 0x341f20: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341f20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f24:
    // 0x341f24: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x341f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f28:
    // 0x341f28: 0xc64c0108  lwc1        $f12, 0x108($s2)
    ctx->pc = 0x341f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_341f2c:
    // 0x341f2c: 0xc067808  jal         func_19E020
label_341f30:
    if (ctx->pc == 0x341F30u) {
        ctx->pc = 0x341F34u;
        goto label_341f34;
    }
    ctx->pc = 0x341F2Cu;
    SET_GPR_U32(ctx, 31, 0x341F34u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x341F2Cu, 0x341F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F34u;
label_341f34:
    // 0x341f34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x341f34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_341f38:
    // 0x341f38: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f3c:
    // 0x341f3c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x341f3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f40:
    // 0x341f40: 0xc64c010c  lwc1        $f12, 0x10C($s2)
    ctx->pc = 0x341f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_341f44:
    // 0x341f44: 0xc0676d0  jal         func_19DB40
label_341f48:
    if (ctx->pc == 0x341F48u) {
        ctx->pc = 0x341F4Cu;
        goto label_341f4c;
    }
    ctx->pc = 0x341F44u;
    SET_GPR_U32(ctx, 31, 0x341F4Cu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x341F44u, 0x341F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F4Cu;
label_341f4c:
    // 0x341f4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341f4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_341f50:
    // 0x341f50: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x341f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_341f54:
    // 0x341f54: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x341f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_341f58:
    // 0x341f58: 0x247239d0  addiu       $s2, $v1, 0x39D0
    ctx->pc = 0x341f58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 14800));
label_341f5c:
    // 0x341f5c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341f5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f60:
    // 0x341f60: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x341f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_341f64:
    // 0x341f64: 0xc0677d8  jal         func_19DF60
label_341f68:
    if (ctx->pc == 0x341F68u) {
        ctx->pc = 0x341F6Cu;
        goto label_341f6c;
    }
    ctx->pc = 0x341F64u;
    SET_GPR_U32(ctx, 31, 0x341F6Cu);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x341F64u, 0x341F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F6Cu;
label_341f6c:
    // 0x341f6c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f70:
    // 0x341f70: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x341f70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f74:
    // 0x341f74: 0xc64c0108  lwc1        $f12, 0x108($s2)
    ctx->pc = 0x341f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_341f78:
    // 0x341f78: 0xc067808  jal         func_19E020
label_341f7c:
    if (ctx->pc == 0x341F7Cu) {
        ctx->pc = 0x341F80u;
        goto label_341f80;
    }
    ctx->pc = 0x341F78u;
    SET_GPR_U32(ctx, 31, 0x341F80u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x341F78u, 0x341F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F80u;
label_341f80:
    // 0x341f80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341f80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_341f84:
    // 0x341f84: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341f84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f88:
    // 0x341f88: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x341f88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341f8c:
    // 0x341f8c: 0xc64c010c  lwc1        $f12, 0x10C($s2)
    ctx->pc = 0x341f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_341f90:
    // 0x341f90: 0xc0676d0  jal         func_19DB40
label_341f94:
    if (ctx->pc == 0x341F94u) {
        ctx->pc = 0x341F98u;
        goto label_341f98;
    }
    ctx->pc = 0x341F90u;
    SET_GPR_U32(ctx, 31, 0x341F98u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x341F90u, 0x341F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F98u;
label_341f98:
    // 0x341f98: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x341f98u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_341f9c:
    // 0x341f9c: 0x8fb00118  lw          $s0, 0x118($sp)
    ctx->pc = 0x341f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_341fa0:
    // 0x341fa0: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x341fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_341fa4:
    // 0x341fa4: 0x24723b60  addiu       $s2, $v1, 0x3B60
    ctx->pc = 0x341fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
label_341fa8:
    // 0x341fa8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341fa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341fac:
    // 0x341fac: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x341facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_341fb0:
    // 0x341fb0: 0xc0677d8  jal         func_19DF60
label_341fb4:
    if (ctx->pc == 0x341FB4u) {
        ctx->pc = 0x341FB8u;
        goto label_341fb8;
    }
    ctx->pc = 0x341FB0u;
    SET_GPR_U32(ctx, 31, 0x341FB8u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x341FB0u, 0x341FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341FB8u;
label_341fb8:
    // 0x341fb8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341fb8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_341fbc:
    // 0x341fbc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341fbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341fc0:
    // 0x341fc0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x341fc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341fc4:
    // 0x341fc4: 0xc64c0108  lwc1        $f12, 0x108($s2)
    ctx->pc = 0x341fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_341fc8:
    // 0x341fc8: 0xc067808  jal         func_19E020
label_341fcc:
    if (ctx->pc == 0x341FCCu) {
        ctx->pc = 0x341FD0u;
        goto label_341fd0;
    }
    ctx->pc = 0x341FC8u;
    SET_GPR_U32(ctx, 31, 0x341FD0u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x341FC8u, 0x341FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341FD0u;
label_341fd0:
    // 0x341fd0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x341fd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_341fd4:
    // 0x341fd4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341fd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341fd8:
    // 0x341fd8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x341fd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341fdc:
    // 0x341fdc: 0xc64c010c  lwc1        $f12, 0x10C($s2)
    ctx->pc = 0x341fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_341fe0:
    // 0x341fe0: 0xc0676d0  jal         func_19DB40
label_341fe4:
    if (ctx->pc == 0x341FE4u) {
        ctx->pc = 0x341FE8u;
        goto label_341fe8;
    }
    ctx->pc = 0x341FE0u;
    SET_GPR_U32(ctx, 31, 0x341FE8u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x341FE0u, 0x341FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341FE8u;
label_341fe8:
    // 0x341fe8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341fe8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_341fec:
    // 0x341fec: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x341fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_341ff0:
    // 0x341ff0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x341ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_341ff4:
    // 0x341ff4: 0x24723cf0  addiu       $s2, $v1, 0x3CF0
    ctx->pc = 0x341ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 15600));
label_341ff8:
    // 0x341ff8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x341ff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_341ffc:
    // 0x341ffc: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x341ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_342000:
    // 0x342000: 0xc0677d8  jal         func_19DF60
label_342004:
    if (ctx->pc == 0x342004u) {
        ctx->pc = 0x342008u;
        goto label_342008;
    }
    ctx->pc = 0x342000u;
    SET_GPR_U32(ctx, 31, 0x342008u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x342000u, 0x342008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342008u;
label_342008:
    // 0x342008: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x342008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_34200c:
    // 0x34200c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x34200cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_342010:
    // 0x342010: 0xc64c0108  lwc1        $f12, 0x108($s2)
    ctx->pc = 0x342010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_342014:
    // 0x342014: 0xc067808  jal         func_19E020
label_342018:
    if (ctx->pc == 0x342018u) {
        ctx->pc = 0x34201Cu;
        goto label_34201c;
    }
    ctx->pc = 0x342014u;
    SET_GPR_U32(ctx, 31, 0x34201Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x342014u, 0x34201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34201Cu;
label_34201c:
    // 0x34201c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x34201cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342020:
    // 0x342020: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x342020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_342024:
    // 0x342024: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x342024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_342028:
    // 0x342028: 0xc64c010c  lwc1        $f12, 0x10C($s2)
    ctx->pc = 0x342028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34202c:
    // 0x34202c: 0xc0676d0  jal         func_19DB40
label_342030:
    if (ctx->pc == 0x342030u) {
        ctx->pc = 0x342034u;
        goto label_342034;
    }
    ctx->pc = 0x34202Cu;
    SET_GPR_U32(ctx, 31, 0x342034u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x34202Cu, 0x342034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342034u;
label_342034:
    // 0x342034: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x342034u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342038:
    // 0x342038: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34203c:
    // 0x34203c: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x34203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_342040:
    // 0x342040: 0x24523840  addiu       $s2, $v0, 0x3840
    ctx->pc = 0x342040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14400));
label_342044:
    // 0x342044: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x342044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_342048:
    // 0x342048: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x342048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34204c:
    // 0x34204c: 0xc0677d8  jal         func_19DF60
label_342050:
    if (ctx->pc == 0x342050u) {
        ctx->pc = 0x342054u;
        goto label_342054;
    }
    ctx->pc = 0x34204Cu;
    SET_GPR_U32(ctx, 31, 0x342054u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x34204Cu, 0x342054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342054u;
label_342054:
    // 0x342054: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x342054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_342058:
    // 0x342058: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x342058u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_34205c:
    // 0x34205c: 0xc64c0108  lwc1        $f12, 0x108($s2)
    ctx->pc = 0x34205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_342060:
    // 0x342060: 0xc067808  jal         func_19E020
label_342064:
    if (ctx->pc == 0x342064u) {
        ctx->pc = 0x342068u;
        goto label_342068;
    }
    ctx->pc = 0x342060u;
    SET_GPR_U32(ctx, 31, 0x342068u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x342060u, 0x342068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342068u;
label_342068:
    // 0x342068: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x342068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_34206c:
    // 0x34206c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x34206cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_342070:
    // 0x342070: 0xc64c010c  lwc1        $f12, 0x10C($s2)
    ctx->pc = 0x342070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_342074:
    // 0x342074: 0xc0676d0  jal         func_19DB40
label_342078:
    if (ctx->pc == 0x342078u) {
        ctx->pc = 0x34207Cu;
        goto label_34207c;
    }
    ctx->pc = 0x342074u;
    SET_GPR_U32(ctx, 31, 0x34207Cu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x342074u, 0x34207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34207Cu;
label_34207c:
    // 0x34207c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34207cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342080:
    // 0x342080: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342084:
    // 0x342084: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342088:
    // 0x342088: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x342088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_34208c:
    // 0x34208c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_342090:
    // 0x342090: 0x2a880  sll         $s5, $v0, 2
    ctx->pc = 0x342090u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342094:
    // 0x342094: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x342094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_342098:
    // 0x342098: 0x2445a3e0  addiu       $a1, $v0, -0x5C20
    ctx->pc = 0x342098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943712));
label_34209c:
    // 0x34209c: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x34209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_3420a0:
    // 0x3420a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3420a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3420a4:
    // 0x3420a4: 0x60f809  jalr        $v1
label_3420a8:
    if (ctx->pc == 0x3420A8u) {
        ctx->pc = 0x3420ACu;
        goto label_3420ac;
    }
    ctx->pc = 0x3420A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3420ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3420A4u, 0x3420ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3420ACu;
label_3420ac:
    // 0x3420ac: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3420acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3420b0:
    // 0x3420b0: 0xc0d47f0  jal         func_351FC0
label_3420b4:
    if (ctx->pc == 0x3420B4u) {
        ctx->pc = 0x3420B8u;
        goto label_3420b8;
    }
    ctx->pc = 0x3420B0u;
    SET_GPR_U32(ctx, 31, 0x3420B8u);
    ctx->pc = 0x351FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351FC0u, 0x3420B0u, 0x3420B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420B8u;
label_3420b8:
    // 0x3420b8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3420b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3420bc:
    // 0x3420bc: 0xc0d49b0  jal         func_3526C0
label_3420c0:
    if (ctx->pc == 0x3420C0u) {
        ctx->pc = 0x3420C4u;
        goto label_3420c4;
    }
    ctx->pc = 0x3420BCu;
    SET_GPR_U32(ctx, 31, 0x3420C4u);
    ctx->pc = 0x3526C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3526C0u, 0x3420BCu, 0x3420C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420C4u;
label_3420c4:
    // 0x3420c4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3420c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3420c8:
    // 0x3420c8: 0xc0d4aa0  jal         func_352A80
label_3420cc:
    if (ctx->pc == 0x3420CCu) {
        ctx->pc = 0x3420D0u;
        goto label_3420d0;
    }
    ctx->pc = 0x3420C8u;
    SET_GPR_U32(ctx, 31, 0x3420D0u);
    ctx->pc = 0x352A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352A80u, 0x3420C8u, 0x3420D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420D0u;
label_3420d0:
    // 0x3420d0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3420d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3420d4:
    // 0x3420d4: 0xc0d4bc0  jal         func_352F00
label_3420d8:
    if (ctx->pc == 0x3420D8u) {
        ctx->pc = 0x3420DCu;
        goto label_3420dc;
    }
    ctx->pc = 0x3420D4u;
    SET_GPR_U32(ctx, 31, 0x3420DCu);
    ctx->pc = 0x352F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352F00u, 0x3420D4u, 0x3420DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420DCu;
label_3420dc:
    // 0x3420dc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3420dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3420e0:
    // 0x3420e0: 0xc0d54c8  jal         func_355320
label_3420e4:
    if (ctx->pc == 0x3420E4u) {
        ctx->pc = 0x3420E8u;
        goto label_3420e8;
    }
    ctx->pc = 0x3420E0u;
    SET_GPR_U32(ctx, 31, 0x3420E8u);
    ctx->pc = 0x355320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355320u, 0x3420E0u, 0x3420E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420E8u;
label_3420e8:
    // 0x3420e8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3420e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3420ec:
    // 0x3420ec: 0xc0d5608  jal         func_355820
label_3420f0:
    if (ctx->pc == 0x3420F0u) {
        ctx->pc = 0x3420F4u;
        goto label_3420f4;
    }
    ctx->pc = 0x3420ECu;
    SET_GPR_U32(ctx, 31, 0x3420F4u);
    ctx->pc = 0x355820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355820u, 0x3420ECu, 0x3420F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420F4u;
label_3420f4:
    // 0x3420f4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3420f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3420f8:
    // 0x3420f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3420f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3420fc:
    // 0x3420fc: 0xc05d25c  jal         func_174970
label_342100:
    if (ctx->pc == 0x342100u) {
        ctx->pc = 0x342104u;
        goto label_342104;
    }
    ctx->pc = 0x3420FCu;
    SET_GPR_U32(ctx, 31, 0x342104u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x3420FCu, 0x342104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342104u;
label_342104:
    // 0x342104: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_342108:
    if (ctx->pc == 0x342108u) {
        ctx->pc = 0x34210Cu;
        goto label_34210c;
    }
    ctx->pc = 0x342104u;
    {
        const bool branch_taken_0x342104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342104) {
            ctx->pc = 0x342128u;
            goto label_342128;
        }
    }
    ctx->pc = 0x34210Cu;
label_34210c:
    // 0x34210c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342110:
    // 0x342110: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342114:
    // 0x342114: 0x848200c0  lh          $v0, 0xC0($a0)
    ctx->pc = 0x342114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 192)));
label_342118:
    // 0x342118: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x342118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34211c:
    // 0x34211c: 0xa48300c0  sh          $v1, 0xC0($a0)
    ctx->pc = 0x34211cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 3));
label_342120:
    // 0x342120: 0x10000004  b           . + 4 + (0x4 << 2)
label_342124:
    if (ctx->pc == 0x342124u) {
        ctx->pc = 0x342128u;
        goto label_342128;
    }
    ctx->pc = 0x342120u;
    {
        const bool branch_taken_0x342120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342120) {
            ctx->pc = 0x342134u;
            goto label_342134;
        }
    }
    ctx->pc = 0x342128u;
label_342128:
    // 0x342128: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34212c:
    // 0x34212c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342130:
    // 0x342130: 0xa44000c0  sh          $zero, 0xC0($v0)
    ctx->pc = 0x342130u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 192), (uint16_t)GPR_U32(ctx, 0));
label_342134:
    // 0x342134: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342138:
    // 0x342138: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x342138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_34213c:
    // 0x34213c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_342140:
    // 0x342140: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_342144:
    if (ctx->pc == 0x342144u) {
        ctx->pc = 0x342148u;
        goto label_342148;
    }
    ctx->pc = 0x342140u;
    {
        const bool branch_taken_0x342140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342140) {
            ctx->pc = 0x342164u;
            goto label_342164;
        }
    }
    ctx->pc = 0x342148u;
label_342148:
    // 0x342148: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34214c:
    // 0x34214c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342150:
    // 0x342150: 0x846200c2  lh          $v0, 0xC2($v1)
    ctx->pc = 0x342150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
label_342154:
    // 0x342154: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x342154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_342158:
    // 0x342158: 0xa47300c2  sh          $s3, 0xC2($v1)
    ctx->pc = 0x342158u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 194), (uint16_t)GPR_U32(ctx, 19));
label_34215c:
    // 0x34215c: 0x10000004  b           . + 4 + (0x4 << 2)
label_342160:
    if (ctx->pc == 0x342160u) {
        ctx->pc = 0x342164u;
        goto label_342164;
    }
    ctx->pc = 0x34215Cu;
    {
        const bool branch_taken_0x34215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34215c) {
            ctx->pc = 0x342170u;
            goto label_342170;
        }
    }
    ctx->pc = 0x342164u;
label_342164:
    // 0x342164: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342168:
    // 0x342168: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x342168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_34216c:
    // 0x34216c: 0xa44000c2  sh          $zero, 0xC2($v0)
    ctx->pc = 0x34216cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 0));
label_342170:
    // 0x342170: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342174:
    // 0x342174: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x342174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_342178:
    // 0x342178: 0x84620034  lh          $v0, 0x34($v1)
    ctx->pc = 0x342178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
label_34217c:
    // 0x34217c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342180:
    if (ctx->pc == 0x342180u) {
        ctx->pc = 0x342184u;
        goto label_342184;
    }
    ctx->pc = 0x34217Cu;
    {
        const bool branch_taken_0x34217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34217c) {
            ctx->pc = 0x342198u;
            goto label_342198;
        }
    }
    ctx->pc = 0x342184u;
label_342184:
    // 0x342184: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342188:
    // 0x342188: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x342188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_34218c:
    // 0x34218c: 0x84a40034  lh          $a0, 0x34($a1)
    ctx->pc = 0x34218cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
label_342190:
    // 0x342190: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x342190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_342194:
    // 0x342194: 0xa4b10034  sh          $s1, 0x34($a1)
    ctx->pc = 0x342194u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 17));
label_342198:
    // 0x342198: 0x8fb00118  lw          $s0, 0x118($sp)
    ctx->pc = 0x342198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34219c:
    // 0x34219c: 0x26021330  addiu       $v0, $s0, 0x1330
    ctx->pc = 0x34219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
label_3421a0:
    // 0x3421a0: 0x84530068  lh          $s3, 0x68($v0)
    ctx->pc = 0x3421a0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_3421a4:
    // 0x3421a4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_3421a8:
    if (ctx->pc == 0x3421A8u) {
        ctx->pc = 0x3421ACu;
        goto label_3421ac;
    }
    ctx->pc = 0x3421A4u;
    {
        const bool branch_taken_0x3421a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3421a4) {
            ctx->pc = 0x3421C0u;
            goto label_3421c0;
        }
    }
    ctx->pc = 0x3421ACu;
label_3421ac:
    // 0x3421ac: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3421acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3421b0:
    // 0x3421b0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3421b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3421b4:
    // 0x3421b4: 0x84620068  lh          $v0, 0x68($v1)
    ctx->pc = 0x3421b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_3421b8:
    // 0x3421b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3421b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3421bc:
    // 0x3421bc: 0xa4620068  sh          $v0, 0x68($v1)
    ctx->pc = 0x3421bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 2));
label_3421c0:
    // 0x3421c0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3421c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3421c4:
    // 0x3421c4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x3421c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_3421c8:
    // 0x3421c8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x3421c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3421cc:
    // 0x3421cc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3421ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3421d0:
    // 0x3421d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3421d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3421d4:
    // 0x3421d4: 0x84440036  lh          $a0, 0x36($v0)
    ctx->pc = 0x3421d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
label_3421d8:
    // 0x3421d8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x3421d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_3421dc:
    // 0x3421dc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3421dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3421e0:
    // 0x3421e0: 0x10650043  beq         $v1, $a1, . + 4 + (0x43 << 2)
label_3421e4:
    if (ctx->pc == 0x3421E4u) {
        ctx->pc = 0x3421E8u;
        goto label_3421e8;
    }
    ctx->pc = 0x3421E0u;
    {
        const bool branch_taken_0x3421e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3421e0) {
            ctx->pc = 0x3422F0u;
            goto label_3422f0;
        }
    }
    ctx->pc = 0x3421E8u;
label_3421e8:
    // 0x3421e8: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x3421e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3421ec:
    // 0x3421ec: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x3421ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
label_3421f0:
    // 0x3421f0: 0x84420036  lh          $v0, 0x36($v0)
    ctx->pc = 0x3421f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
label_3421f4:
    // 0x3421f4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3421f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_3421f8:
    // 0x3421f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3421f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3421fc:
    // 0x3421fc: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x3421fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_342200:
    // 0x342200: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x342200u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_342204:
    // 0x342204: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_342208:
    if (ctx->pc == 0x342208u) {
        ctx->pc = 0x34220Cu;
        goto label_34220c;
    }
    ctx->pc = 0x342204u;
    {
        const bool branch_taken_0x342204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342204) {
            ctx->pc = 0x342268u;
            goto label_342268;
        }
    }
    ctx->pc = 0x34220Cu;
label_34220c:
    // 0x34220c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342210:
    // 0x342210: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342214:
    // 0x342214: 0x8443003c  lh          $v1, 0x3C($v0)
    ctx->pc = 0x342214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
label_342218:
    // 0x342218: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x342218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_34221c:
    // 0x34221c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34221cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_342220:
    // 0x342220: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x342220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_342224:
    // 0x342224: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x342224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_342228:
    // 0x342228: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x342228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_34222c:
    // 0x34222c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342230:
    // 0x342230: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342234:
    // 0x342234: 0x84850036  lh          $a1, 0x36($a0)
    ctx->pc = 0x342234u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
label_342238:
    // 0x342238: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x342238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_34223c:
    // 0x34223c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x34223cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_342240:
    // 0x342240: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x342240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_342244:
    // 0x342244: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x342244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_342248:
    // 0x342248: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_34224c:
    if (ctx->pc == 0x34224Cu) {
        ctx->pc = 0x342250u;
        goto label_342250;
    }
    ctx->pc = 0x342248u;
    {
        const bool branch_taken_0x342248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342248) {
            ctx->pc = 0x342268u;
            goto label_342268;
        }
    }
    ctx->pc = 0x342250u;
label_342250:
    // 0x342250: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342254:
    // 0x342254: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342258:
    // 0x342258: 0x84500036  lh          $s0, 0x36($v0)
    ctx->pc = 0x342258u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
label_34225c:
    // 0x34225c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x34225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_342260:
    // 0x342260: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342260u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_342264:
    // 0x342264: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x342264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_342268:
    // 0x342268: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34226c:
    // 0x34226c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34226cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_342270:
    // 0x342270: 0x84c70036  lh          $a3, 0x36($a2)
    ctx->pc = 0x342270u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 54)));
label_342274:
    // 0x342274: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x342274u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_342278:
    // 0x342278: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x342278u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_34227c:
    // 0x34227c: 0x26290060  addiu       $t1, $s1, 0x60
    ctx->pc = 0x34227cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_342280:
    // 0x342280: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x342280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_342284:
    // 0x342284: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x342284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_342288:
    // 0x342288: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_34228c:
    if (ctx->pc == 0x34228Cu) {
        ctx->pc = 0x342290u;
        goto label_342290;
    }
    ctx->pc = 0x342288u;
    {
        const bool branch_taken_0x342288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342288) {
            ctx->pc = 0x3422F0u;
            goto label_3422f0;
        }
    }
    ctx->pc = 0x342290u;
label_342290:
    // 0x342290: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342294:
    // 0x342294: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x342294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_342298:
    // 0x342298: 0x8462003c  lh          $v0, 0x3C($v1)
    ctx->pc = 0x342298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_34229c:
    // 0x34229c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x34229cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3422a0:
    // 0x3422a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3422a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3422a4:
    // 0x3422a4: 0x8e340060  lw          $s4, 0x60($s1)
    ctx->pc = 0x3422a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3422a8:
    // 0x3422a8: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x3422a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3422ac:
    // 0x3422ac: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x3422acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_3422b0:
    // 0x3422b0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3422b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3422b4:
    // 0x3422b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3422b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3422b8:
    // 0x3422b8: 0x84420036  lh          $v0, 0x36($v0)
    ctx->pc = 0x3422b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
label_3422bc:
    // 0x3422bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3422bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_3422c0:
    // 0x3422c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3422c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3422c4:
    // 0x3422c4: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x3422c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_3422c8:
    // 0x3422c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3422c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3422cc:
    // 0x3422cc: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3422ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3422d0:
    // 0x3422d0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_3422d4:
    if (ctx->pc == 0x3422D4u) {
        ctx->pc = 0x3422D8u;
        goto label_3422d8;
    }
    ctx->pc = 0x3422D0u;
    {
        const bool branch_taken_0x3422d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3422d0) {
            ctx->pc = 0x3422F0u;
            goto label_3422f0;
        }
    }
    ctx->pc = 0x3422D8u;
label_3422d8:
    // 0x3422d8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3422d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3422dc:
    // 0x3422dc: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x3422dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_3422e0:
    // 0x3422e0: 0x84c20036  lh          $v0, 0x36($a2)
    ctx->pc = 0x3422e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 54)));
label_3422e4:
    // 0x3422e4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3422e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_3422e8:
    // 0x3422e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3422e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3422ec:
    // 0x3422ec: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x3422ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_3422f0:
    // 0x3422f0: 0x8e340064  lw          $s4, 0x64($s1)
    ctx->pc = 0x3422f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3422f4:
    // 0x3422f4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3422f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3422f8:
    // 0x3422f8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3422f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3422fc:
    // 0x3422fc: 0x84620038  lh          $v0, 0x38($v1)
    ctx->pc = 0x3422fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_342300:
    // 0x342300: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_342304:
    // 0x342304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_342308:
    // 0x342308: 0x12820043  beq         $s4, $v0, . + 4 + (0x43 << 2)
label_34230c:
    if (ctx->pc == 0x34230Cu) {
        ctx->pc = 0x342310u;
        goto label_342310;
    }
    ctx->pc = 0x342308u;
    {
        const bool branch_taken_0x342308 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x342308) {
            ctx->pc = 0x342418u;
            goto label_342418;
        }
    }
    ctx->pc = 0x342310u;
label_342310:
    // 0x342310: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342314:
    // 0x342314: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342318:
    // 0x342318: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x342318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_34231c:
    // 0x34231c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x34231cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
label_342320:
    // 0x342320: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x342320u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_342324:
    // 0x342324: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x342324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_342328:
    // 0x342328: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x342328u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_34232c:
    // 0x34232c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_342330:
    if (ctx->pc == 0x342330u) {
        ctx->pc = 0x342334u;
        goto label_342334;
    }
    ctx->pc = 0x34232Cu;
    {
        const bool branch_taken_0x34232c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34232c) {
            ctx->pc = 0x342390u;
            goto label_342390;
        }
    }
    ctx->pc = 0x342334u;
label_342334:
    // 0x342334: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342338:
    // 0x342338: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x342338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_34233c:
    // 0x34233c: 0x84a6003c  lh          $a2, 0x3C($a1)
    ctx->pc = 0x34233cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_342340:
    // 0x342340: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x342340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_342344:
    // 0x342344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_342348:
    // 0x342348: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x342348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_34234c:
    // 0x34234c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_342350:
    // 0x342350: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x342350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_342354:
    // 0x342354: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342358:
    // 0x342358: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x342358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_34235c:
    // 0x34235c: 0x84620038  lh          $v0, 0x38($v1)
    ctx->pc = 0x34235cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_342360:
    // 0x342360: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_342364:
    // 0x342364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_342368:
    // 0x342368: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x342368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_34236c:
    // 0x34236c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x34236cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_342370:
    // 0x342370: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_342374:
    if (ctx->pc == 0x342374u) {
        ctx->pc = 0x342378u;
        goto label_342378;
    }
    ctx->pc = 0x342370u;
    {
        const bool branch_taken_0x342370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342370) {
            ctx->pc = 0x342390u;
            goto label_342390;
        }
    }
    ctx->pc = 0x342378u;
label_342378:
    // 0x342378: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34237c:
    // 0x34237c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342380:
    // 0x342380: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x342380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_342384:
    // 0x342384: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x342384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_342388:
    // 0x342388: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x342388u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_34238c:
    // 0x34238c: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x34238cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_342390:
    // 0x342390: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342394:
    // 0x342394: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x342394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_342398:
    // 0x342398: 0x84c20038  lh          $v0, 0x38($a2)
    ctx->pc = 0x342398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 56)));
label_34239c:
    // 0x34239c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x34239cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_3423a0:
    // 0x3423a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3423a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3423a4:
    // 0x3423a4: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3423a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3423a8:
    // 0x3423a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3423a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3423ac:
    // 0x3423ac: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3423acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3423b0:
    // 0x3423b0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_3423b4:
    if (ctx->pc == 0x3423B4u) {
        ctx->pc = 0x3423B8u;
        goto label_3423b8;
    }
    ctx->pc = 0x3423B0u;
    {
        const bool branch_taken_0x3423b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423b0) {
            ctx->pc = 0x342418u;
            goto label_342418;
        }
    }
    ctx->pc = 0x3423B8u;
label_3423b8:
    // 0x3423b8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3423b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3423bc:
    // 0x3423bc: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x3423bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3423c0:
    // 0x3423c0: 0x84a6003c  lh          $a2, 0x3C($a1)
    ctx->pc = 0x3423c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_3423c4:
    // 0x3423c4: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x3423c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
label_3423c8:
    // 0x3423c8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x3423c8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_3423cc:
    // 0x3423cc: 0x8e280064  lw          $t0, 0x64($s1)
    ctx->pc = 0x3423ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3423d0:
    // 0x3423d0: 0x1074823  subu        $t1, $t0, $a3
    ctx->pc = 0x3423d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_3423d4:
    // 0x3423d4: 0xae290064  sw          $t1, 0x64($s1)
    ctx->pc = 0x3423d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 9));
label_3423d8:
    // 0x3423d8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3423d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3423dc:
    // 0x3423dc: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x3423dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_3423e0:
    // 0x3423e0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x3423e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_3423e4:
    // 0x3423e4: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x3423e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_3423e8:
    // 0x3423e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3423e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3423ec:
    // 0x3423ec: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x3423ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3423f0:
    // 0x3423f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3423f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3423f4:
    // 0x3423f4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3423f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3423f8:
    // 0x3423f8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_3423fc:
    if (ctx->pc == 0x3423FCu) {
        ctx->pc = 0x342400u;
        goto label_342400;
    }
    ctx->pc = 0x3423F8u;
    {
        const bool branch_taken_0x3423f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423f8) {
            ctx->pc = 0x342418u;
            goto label_342418;
        }
    }
    ctx->pc = 0x342400u;
label_342400:
    // 0x342400: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342404:
    // 0x342404: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x342404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_342408:
    // 0x342408: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x342408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_34240c:
    // 0x34240c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x34240cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_342410:
    // 0x342410: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x342410u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_342414:
    // 0x342414: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x342414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_342418:
    // 0x342418: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x342418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_34241c:
    // 0x34241c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x34241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342420:
    // 0x342420: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x342420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_342424:
    // 0x342424: 0x8442003a  lh          $v0, 0x3A($v0)
    ctx->pc = 0x342424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
label_342428:
    // 0x342428: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_34242c:
    // 0x34242c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34242cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_342430:
    // 0x342430: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_342434:
    if (ctx->pc == 0x342434u) {
        ctx->pc = 0x342438u;
        goto label_342438;
    }
    ctx->pc = 0x342430u;
    {
        const bool branch_taken_0x342430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x342430) {
            ctx->pc = 0x342540u;
            goto label_342540;
        }
    }
    ctx->pc = 0x342438u;
label_342438:
    // 0x342438: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34243c:
    // 0x34243c: 0x24841330  addiu       $a0, $a0, 0x1330
    ctx->pc = 0x34243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_342440:
    // 0x342440: 0x8482003a  lh          $v0, 0x3A($a0)
    ctx->pc = 0x342440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
label_342444:
    // 0x342444: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_342448:
    // 0x342448: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342448u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34244c:
    // 0x34244c: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x34244cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_342450:
    // 0x342450: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x342450u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_342454:
    // 0x342454: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_342458:
    if (ctx->pc == 0x342458u) {
        ctx->pc = 0x34245Cu;
        goto label_34245c;
    }
    ctx->pc = 0x342454u;
    {
        const bool branch_taken_0x342454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342454) {
            ctx->pc = 0x3424B8u;
            goto label_3424b8;
        }
    }
    ctx->pc = 0x34245Cu;
label_34245c:
    // 0x34245c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342460:
    // 0x342460: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342464:
    // 0x342464: 0x8456003c  lh          $s6, 0x3C($v0)
    ctx->pc = 0x342464u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
label_342468:
    // 0x342468: 0x161c3c  dsll32      $v1, $s6, 16
    ctx->pc = 0x342468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 16));
label_34246c:
    // 0x34246c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34246cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_342470:
    // 0x342470: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x342470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_342474:
    // 0x342474: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x342474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342478:
    // 0x342478: 0xae240068  sw          $a0, 0x68($s1)
    ctx->pc = 0x342478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 4));
label_34247c:
    // 0x34247c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x34247cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342480:
    // 0x342480: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x342480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_342484:
    // 0x342484: 0x84c2003a  lh          $v0, 0x3A($a2)
    ctx->pc = 0x342484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 58)));
label_342488:
    // 0x342488: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x342488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_34248c:
    // 0x34248c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34248cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_342490:
    // 0x342490: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x342490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_342494:
    // 0x342494: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x342494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_342498:
    // 0x342498: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_34249c:
    if (ctx->pc == 0x34249Cu) {
        ctx->pc = 0x3424A0u;
        goto label_3424a0;
    }
    ctx->pc = 0x342498u;
    {
        const bool branch_taken_0x342498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342498) {
            ctx->pc = 0x3424B8u;
            goto label_3424b8;
        }
    }
    ctx->pc = 0x3424A0u;
label_3424a0:
    // 0x3424a0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3424a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3424a4:
    // 0x3424a4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x3424a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_3424a8:
    // 0x3424a8: 0x84a6003a  lh          $a2, 0x3A($a1)
    ctx->pc = 0x3424a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 58)));
label_3424ac:
    // 0x3424ac: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x3424acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_3424b0:
    // 0x3424b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3424b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3424b4:
    // 0x3424b4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x3424b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_3424b8:
    // 0x3424b8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x3424b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3424bc:
    // 0x3424bc: 0x24671330  addiu       $a3, $v1, 0x1330
    ctx->pc = 0x3424bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3424c0:
    // 0x3424c0: 0x84e4003a  lh          $a0, 0x3A($a3)
    ctx->pc = 0x3424c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 58)));
label_3424c4:
    // 0x3424c4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x3424c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_3424c8:
    // 0x3424c8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3424c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3424cc:
    // 0x3424cc: 0x26260068  addiu       $a2, $s1, 0x68
    ctx->pc = 0x3424ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_3424d0:
    // 0x3424d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3424d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3424d4:
    // 0x3424d4: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x3424d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3424d8:
    // 0x3424d8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_3424dc:
    if (ctx->pc == 0x3424DCu) {
        ctx->pc = 0x3424E0u;
        goto label_3424e0;
    }
    ctx->pc = 0x3424D8u;
    {
        const bool branch_taken_0x3424d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3424d8) {
            ctx->pc = 0x342540u;
            goto label_342540;
        }
    }
    ctx->pc = 0x3424E0u;
label_3424e0:
    // 0x3424e0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x3424e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3424e4:
    // 0x3424e4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x3424e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3424e8:
    // 0x3424e8: 0x8444003c  lh          $a0, 0x3C($v0)
    ctx->pc = 0x3424e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
label_3424ec:
    // 0x3424ec: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x3424ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_3424f0:
    // 0x3424f0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3424f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3424f4:
    // 0x3424f4: 0x8e260068  lw          $a2, 0x68($s1)
    ctx->pc = 0x3424f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3424f8:
    // 0x3424f8: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x3424f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3424fc:
    // 0x3424fc: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x3424fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_342500:
    // 0x342500: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342504:
    // 0x342504: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x342504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_342508:
    // 0x342508: 0x8486003a  lh          $a2, 0x3A($a0)
    ctx->pc = 0x342508u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
label_34250c:
    // 0x34250c: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x34250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_342510:
    // 0x342510: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342510u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_342514:
    // 0x342514: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x342514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_342518:
    // 0x342518: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x342518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34251c:
    // 0x34251c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x34251cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_342520:
    // 0x342520: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_342524:
    if (ctx->pc == 0x342524u) {
        ctx->pc = 0x342528u;
        goto label_342528;
    }
    ctx->pc = 0x342520u;
    {
        const bool branch_taken_0x342520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342520) {
            ctx->pc = 0x342540u;
            goto label_342540;
        }
    }
    ctx->pc = 0x342528u;
label_342528:
    // 0x342528: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34252c:
    // 0x34252c: 0x24571330  addiu       $s7, $v0, 0x1330
    ctx->pc = 0x34252cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342530:
    // 0x342530: 0x86e2003a  lh          $v0, 0x3A($s7)
    ctx->pc = 0x342530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 58)));
label_342534:
    // 0x342534: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_342538:
    // 0x342538: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342538u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34253c:
    // 0x34253c: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x34253cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_342540:
    // 0x342540: 0x8fb20118  lw          $s2, 0x118($sp)
    ctx->pc = 0x342540u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342544:
    // 0x342544: 0x26421330  addiu       $v0, $s2, 0x1330
    ctx->pc = 0x342544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
label_342548:
    // 0x342548: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x342548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_34254c:
    // 0x34254c: 0x24830005  addiu       $v1, $a0, 0x5
    ctx->pc = 0x34254cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_342550:
    // 0x342550: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x342550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_342554:
    // 0x342554: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342558:
    // 0x342558: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x342558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_34255c:
    // 0x34255c: 0x8c720024  lw          $s2, 0x24($v1)
    ctx->pc = 0x34255cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_342560:
    // 0x342560: 0x26420005  addiu       $v0, $s2, 0x5
    ctx->pc = 0x342560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
label_342564:
    // 0x342564: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x342564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_342568:
    // 0x342568: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34256c:
    // 0x34256c: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x34256cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_342570:
    // 0x342570: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x342570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_342574:
    // 0x342574: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342578:
    // 0x342578: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x342578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_34257c:
    // 0x34257c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x34257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_342580:
    // 0x342580: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x342580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342584:
    // 0x342584: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x342584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_342588:
    // 0x342588: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34258c:
    // 0x34258c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_342590:
    // 0x342590: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x342590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_342594:
    // 0x342594: 0x8e120058  lw          $s2, 0x58($s0)
    ctx->pc = 0x342594u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342598:
    // 0x342598: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x342598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_34259c:
    // 0x34259c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x34259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3425a0:
    // 0x3425a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3425a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3425a4:
    // 0x3425a4: 0x30c31fff  andi        $v1, $a2, 0x1FFF
    ctx->pc = 0x3425a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8191);
label_3425a8:
    // 0x3425a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3425a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3425ac:
    // 0x3425ac: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3425acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3425b0:
    // 0x3425b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3425b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3425b4:
    // 0x3425b4: 0x30521fff  andi        $s2, $v0, 0x1FFF
    ctx->pc = 0x3425b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_3425b8:
    // 0x3425b8: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x3425b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_3425bc:
    // 0x3425bc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3425bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3425c0:
    // 0x3425c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3425c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3425c4:
    // 0x3425c4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3425c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3425c8:
    // 0x3425c8: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3425c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3425cc:
    // 0x3425cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3425ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3425d0:
    // 0x3425d0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3425d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3425d4:
    // 0x3425d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3425d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3425d8:
    // 0x3425d8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3425d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3425dc:
    // 0x3425dc: 0x8e15005c  lw          $s5, 0x5C($s0)
    ctx->pc = 0x3425dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3425e0:
    // 0x3425e0: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3425e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3425e4:
    // 0x3425e4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3425e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3425e8:
    // 0x3425e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3425e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3425ec:
    // 0x3425ec: 0x30a31fff  andi        $v1, $a1, 0x1FFF
    ctx->pc = 0x3425ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
label_3425f0:
    // 0x3425f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3425f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3425f4:
    // 0x3425f4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3425f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3425f8:
    // 0x3425f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3425f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3425fc:
    // 0x3425fc: 0x30441fff  andi        $a0, $v0, 0x1FFF
    ctx->pc = 0x3425fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_342600:
    // 0x342600: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x342600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_342604:
    // 0x342604: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342608:
    // 0x342608: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x342608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_34260c:
    // 0x34260c: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x34260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_342610:
    // 0x342610: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x342610u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342614:
    // 0x342614: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x342614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_342618:
    // 0x342618: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x342618u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_34261c:
    // 0x34261c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342620:
    // 0x342620: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342624:
    // 0x342624: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x342624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_342628:
    // 0x342628: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x342628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_34262c:
    // 0x34262c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34262cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_342630:
    // 0x342630: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342634:
    // 0x342634: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342638:
    // 0x342638: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x342638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_34263c:
    // 0x34263c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x34263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342640:
    // 0x342640: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x342640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_342644:
    // 0x342644: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x342644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342648:
    // 0x342648: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x342648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34264c:
    // 0x34264c: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x34264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_342650:
    // 0x342650: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x342650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_342654:
    // 0x342654: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x342654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342658:
    // 0x342658: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x342658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_34265c:
    // 0x34265c: 0x30431fff  andi        $v1, $v0, 0x1FFF
    ctx->pc = 0x34265cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_342660:
    // 0x342660: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x342660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_342664:
    // 0x342664: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342668:
    // 0x342668: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_34266c:
    // 0x34266c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x34266cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_342670:
    // 0x342670: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342674:
    // 0x342674: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x342674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_342678:
    // 0x342678: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34267c:
    // 0x34267c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342680:
    // 0x342680: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x342680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_342684:
    // 0x342684: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342688:
    // 0x342688: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x342688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_34268c:
    // 0x34268c: 0x8e13005c  lw          $s3, 0x5C($s0)
    ctx->pc = 0x34268cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342690:
    // 0x342690: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x342690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_342694:
    // 0x342694: 0x30621fff  andi        $v0, $v1, 0x1FFF
    ctx->pc = 0x342694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_342698:
    // 0x342698: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x342698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_34269c:
    // 0x34269c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x34269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3426a0:
    // 0x3426a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3426a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3426a4:
    // 0x3426a4: 0x30621fff  andi        $v0, $v1, 0x1FFF
    ctx->pc = 0x3426a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_3426a8:
    // 0x3426a8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3426a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3426ac:
    // 0x3426ac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3426acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3426b0:
    // 0x3426b0: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x3426b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_3426b4:
    // 0x3426b4: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x3426b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_3426b8:
    // 0x3426b8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x3426b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_3426bc:
    // 0x3426bc: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x3426bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3426c0:
    // 0x3426c0: 0x8ca40058  lw          $a0, 0x58($a1)
    ctx->pc = 0x3426c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_3426c4:
    // 0x3426c4: 0x24910240  addiu       $s1, $a0, 0x240
    ctx->pc = 0x3426c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
label_3426c8:
    // 0x3426c8: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x3426c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3426cc:
    // 0x3426cc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3426ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3426d0:
    // 0x3426d0: 0x24531330  addiu       $s3, $v0, 0x1330
    ctx->pc = 0x3426d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3426d4:
    // 0x3426d4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3426d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3426d8:
    // 0x3426d8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3426d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3426dc:
    // 0x3426dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3426dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3426e0:
    // 0x3426e0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3426e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3426e4:
    // 0x3426e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3426e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3426e8:
    // 0x3426e8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3426e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3426ec:
    // 0x3426ec: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x3426ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3426f0:
    // 0x3426f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3426f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3426f4:
    // 0x3426f4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3426f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3426f8:
    // 0x3426f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3426f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3426fc:
    // 0x3426fc: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3426fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_342700:
    // 0x342700: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x342700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_342704:
    // 0x342704: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x342704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342708:
    // 0x342708: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x342708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_34270c:
    // 0x34270c: 0x30a61fff  andi        $a2, $a1, 0x1FFF
    ctx->pc = 0x34270cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
label_342710:
    // 0x342710: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x342710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_342714:
    // 0x342714: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342718:
    // 0x342718: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_34271c:
    // 0x34271c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x34271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_342720:
    // 0x342720: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342724:
    // 0x342724: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x342724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_342728:
    // 0x342728: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34272c:
    // 0x34272c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342730:
    // 0x342730: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x342730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_342734:
    // 0x342734: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342738:
    // 0x342738: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x342738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_34273c:
    // 0x34273c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x34273cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342740:
    // 0x342740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x342740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_342744:
    // 0x342744: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x342744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_342748:
    // 0x342748: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x342748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34274c:
    // 0x34274c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x34274cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342750:
    // 0x342750: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x342750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_342754:
    // 0x342754: 0x30a61fff  andi        $a2, $a1, 0x1FFF
    ctx->pc = 0x342754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
label_342758:
    // 0x342758: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x342758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_34275c:
    // 0x34275c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342760:
    // 0x342760: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x342760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_342764:
    // 0x342764: 0x244202d0  addiu       $v0, $v0, 0x2D0
    ctx->pc = 0x342764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
label_342768:
    // 0x342768: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x342768u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_34276c:
    // 0x34276c: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x34276cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_342770:
    // 0x342770: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342774:
    // 0x342774: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x342774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342778:
    // 0x342778: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x342778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_34277c:
    // 0x34277c: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x34277cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342780:
    // 0x342780: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x342780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_342784:
    // 0x342784: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x342784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342788:
    // 0x342788: 0x25091330  addiu       $t1, $t0, 0x1330
    ctx->pc = 0x342788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
label_34278c:
    // 0x34278c: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x34278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
label_342790:
    // 0x342790: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x342790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342794:
    // 0x342794: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x342794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_342798:
    // 0x342798: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x342798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_34279c:
    // 0x34279c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3427a0:
    // 0x3427a0: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3427a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_3427a4:
    // 0x3427a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3427a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3427a8:
    // 0x3427a8: 0x8e140058  lw          $s4, 0x58($s0)
    ctx->pc = 0x3427a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3427ac:
    // 0x3427ac: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3427acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3427b0:
    // 0x3427b0: 0x30621fff  andi        $v0, $v1, 0x1FFF
    ctx->pc = 0x3427b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_3427b4:
    // 0x3427b4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3427b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3427b8:
    // 0x3427b8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3427b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3427bc:
    // 0x3427bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3427bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3427c0:
    // 0x3427c0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3427c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3427c4:
    // 0x3427c4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3427c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3427c8:
    // 0x3427c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3427c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3427cc:
    // 0x3427cc: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x3427ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3427d0:
    // 0x3427d0: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x3427d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_3427d4:
    // 0x3427d4: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x3427d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3427d8:
    // 0x3427d8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3427d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3427dc:
    // 0x3427dc: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x3427dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_3427e0:
    // 0x3427e0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3427e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3427e4:
    // 0x3427e4: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x3427e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3427e8:
    // 0x3427e8: 0x32821fff  andi        $v0, $s4, 0x1FFF
    ctx->pc = 0x3427e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8191);
label_3427ec:
    // 0x3427ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3427ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3427f0:
    // 0x3427f0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3427f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3427f4:
    // 0x3427f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3427f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3427f8:
    // 0x3427f8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3427f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_3427fc:
    // 0x3427fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3427fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_342800:
    // 0x342800: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342804:
    // 0x342804: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x342804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_342808:
    // 0x342808: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x342808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
label_34280c:
    // 0x34280c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x34280cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342810:
    // 0x342810: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x342810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_342814:
    // 0x342814: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342818:
    // 0x342818: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_34281c:
    // 0x34281c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x34281cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_342820:
    // 0x342820: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x342820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342824:
    // 0x342824: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x342824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_342828:
    // 0x342828: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34282c:
    // 0x34282c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342830:
    // 0x342830: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x342830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_342834:
    // 0x342834: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x342834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342838:
    // 0x342838: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x342838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_34283c:
    // 0x34283c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x34283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342840:
    // 0x342840: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x342840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_342844:
    // 0x342844: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x342844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_342848:
    // 0x342848: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x342848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34284c:
    // 0x34284c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x34284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_342850:
    // 0x342850: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x342850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_342854:
    // 0x342854: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x342854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_342858:
    // 0x342858: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x342858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34285c:
    // 0x34285c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342860:
    // 0x342860: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342864:
    // 0x342864: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x342864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_342868:
    // 0x342868: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x342868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_34286c:
    // 0x34286c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x34286cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_342870:
    // 0x342870: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342874:
    // 0x342874: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x342874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_342878:
    // 0x342878: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x342878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_34287c:
    // 0x34287c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x34287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342880:
    // 0x342880: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x342880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_342884:
    // 0x342884: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342888:
    // 0x342888: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x342888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34288c:
    // 0x34288c: 0x30a61fff  andi        $a2, $a1, 0x1FFF
    ctx->pc = 0x34288cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
label_342890:
    // 0x342890: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x342890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_342894:
    // 0x342894: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x342894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_342898:
    // 0x342898: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x342898u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_34289c:
    // 0x34289c: 0x31091fff  andi        $t1, $t0, 0x1FFF
    ctx->pc = 0x34289cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8191);
label_3428a0:
    // 0x3428a0: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x3428a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
label_3428a4:
    // 0x3428a4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3428a8:
    // 0x3428a8: 0xc0d4cd0  jal         func_353340
label_3428ac:
    if (ctx->pc == 0x3428ACu) {
        ctx->pc = 0x3428B0u;
        goto label_3428b0;
    }
    ctx->pc = 0x3428A8u;
    SET_GPR_U32(ctx, 31, 0x3428B0u);
    ctx->pc = 0x353340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353340u, 0x3428A8u, 0x3428B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428B0u;
label_3428b0:
    // 0x3428b0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3428b4:
    // 0x3428b4: 0xc0d4e24  jal         func_353890
label_3428b8:
    if (ctx->pc == 0x3428B8u) {
        ctx->pc = 0x3428BCu;
        goto label_3428bc;
    }
    ctx->pc = 0x3428B4u;
    SET_GPR_U32(ctx, 31, 0x3428BCu);
    ctx->pc = 0x353890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353890u, 0x3428B4u, 0x3428BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428BCu;
label_3428bc:
    // 0x3428bc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3428c0:
    // 0x3428c0: 0xc0d4ef4  jal         func_353BD0
label_3428c4:
    if (ctx->pc == 0x3428C4u) {
        ctx->pc = 0x3428C8u;
        goto label_3428c8;
    }
    ctx->pc = 0x3428C0u;
    SET_GPR_U32(ctx, 31, 0x3428C8u);
    ctx->pc = 0x353BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BD0u, 0x3428C0u, 0x3428C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428C8u;
label_3428c8:
    // 0x3428c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3428c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3428cc:
    // 0x3428cc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3428d0:
    // 0x3428d0: 0xc0d5414  jal         func_355050
label_3428d4:
    if (ctx->pc == 0x3428D4u) {
        ctx->pc = 0x3428D8u;
        goto label_3428d8;
    }
    ctx->pc = 0x3428D0u;
    SET_GPR_U32(ctx, 31, 0x3428D8u);
    ctx->pc = 0x355050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355050u, 0x3428D0u, 0x3428D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428D8u;
label_3428d8:
    // 0x3428d8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3428d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3428dc:
    // 0x3428dc: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x3428dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_3428e0:
    // 0x3428e0: 0x248301b0  addiu       $v1, $a0, 0x1B0
    ctx->pc = 0x3428e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
label_3428e4:
    // 0x3428e4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x3428e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3428e8:
    // 0x3428e8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3428ec:
    // 0x3428ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x3428ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_3428f0:
    // 0x3428f0: 0xc079140  jal         func_1E4500
label_3428f4:
    if (ctx->pc == 0x3428F4u) {
        ctx->pc = 0x3428F8u;
        goto label_3428f8;
    }
    ctx->pc = 0x3428F0u;
    SET_GPR_U32(ctx, 31, 0x3428F8u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x3428F0u, 0x3428F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428F8u;
label_3428f8:
    // 0x3428f8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3428f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3428fc:
    // 0x3428fc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3428fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_342900:
    // 0x342900: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x342900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
label_342904:
    // 0x342904: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x342904u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_342908:
    // 0x342908: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34290c:
    // 0x34290c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x34290cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_342910:
    // 0x342910: 0xc079140  jal         func_1E4500
label_342914:
    if (ctx->pc == 0x342914u) {
        ctx->pc = 0x342918u;
        goto label_342918;
    }
    ctx->pc = 0x342910u;
    SET_GPR_U32(ctx, 31, 0x342918u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x342910u, 0x342918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342918u;
label_342918:
    // 0x342918: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_34291c:
    // 0x34291c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x34291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342920:
    // 0x342920: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x342920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342924:
    // 0x342924: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342928:
    // 0x342928: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x342928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_34292c:
    // 0x34292c: 0x8c560234  lw          $s6, 0x234($v0)
    ctx->pc = 0x34292cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_342930:
    // 0x342930: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342934:
    // 0x342934: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342938:
    // 0x342938: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x342938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_34293c:
    // 0x34293c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x34293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342940:
    // 0x342940: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x342940u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_342944:
    // 0x342944: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x342944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342948:
    // 0x342948: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x342948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_34294c:
    // 0x34294c: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x34294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_342950:
    // 0x342950: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x342950u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_342954:
    // 0x342954: 0xc06b06c  jal         func_1AC1B0
label_342958:
    if (ctx->pc == 0x342958u) {
        ctx->pc = 0x34295Cu;
        goto label_34295c;
    }
    ctx->pc = 0x342954u;
    SET_GPR_U32(ctx, 31, 0x34295Cu);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x342954u, 0x34295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34295Cu;
label_34295c:
    // 0x34295c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x34295cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342960:
    // 0x342960: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x342960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342964:
    // 0x342964: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x342964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_342968:
    // 0x342968: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x342968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_34296c:
    // 0x34296c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x34296cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_342970:
    // 0x342970: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342974:
    // 0x342974: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x342974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_342978:
    // 0x342978: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_34297c:
    // 0x34297c: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34297cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_342980:
    // 0x342980: 0x90a60071  lbu         $a2, 0x71($a1)
    ctx->pc = 0x342980u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 113)));
label_342984:
    // 0x342984: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x342984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_342988:
    // 0x342988: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x342988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_34298c:
    // 0x34298c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342990:
    // 0x342990: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x342990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342994:
    // 0x342994: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342998:
    // 0x342998: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x342998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_34299c:
    // 0x34299c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x34299cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3429a0:
    // 0x3429a0: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x3429a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3429a4:
    // 0x3429a4: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x3429a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_3429a8:
    // 0x3429a8: 0x24e40204  addiu       $a0, $a3, 0x204
    ctx->pc = 0x3429a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 516));
label_3429ac:
    // 0x3429ac: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x3429acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_3429b0:
    // 0x3429b0: 0xc06b07c  jal         func_1AC1F0
label_3429b4:
    if (ctx->pc == 0x3429B4u) {
        ctx->pc = 0x3429B8u;
        goto label_3429b8;
    }
    ctx->pc = 0x3429B0u;
    SET_GPR_U32(ctx, 31, 0x3429B8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x3429B0u, 0x3429B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429B8u;
label_3429b8:
    // 0x3429b8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x3429b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3429bc:
    // 0x3429bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3429bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3429c0:
    // 0x3429c0: 0x90620071  lbu         $v0, 0x71($v1)
    ctx->pc = 0x3429c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
label_3429c4:
    // 0x3429c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3429c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3429c8:
    // 0x3429c8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x3429c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3429cc:
    // 0x3429cc: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x3429ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3429d0:
    // 0x3429d0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x3429d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3429d4:
    // 0x3429d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3429d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_3429d8:
    // 0x3429d8: 0x8c270140  lw          $a3, 0x140($at)
    ctx->pc = 0x3429d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_3429dc:
    // 0x3429dc: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x3429dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3429e0:
    // 0x3429e0: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x3429e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3429e4:
    // 0x3429e4: 0x8d350244  lw          $s5, 0x244($t1)
    ctx->pc = 0x3429e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 580)));
label_3429e8:
    // 0x3429e8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x3429e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_3429ec:
    // 0x3429ec: 0xc074974  jal         func_1D25D0
label_3429f0:
    if (ctx->pc == 0x3429F0u) {
        ctx->pc = 0x3429F4u;
        goto label_3429f4;
    }
    ctx->pc = 0x3429ECu;
    SET_GPR_U32(ctx, 31, 0x3429F4u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x3429ECu, 0x3429F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429F4u;
label_3429f4:
    // 0x3429f4: 0x8fb70118  lw          $s7, 0x118($sp)
    ctx->pc = 0x3429f4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3429f8:
    // 0x3429f8: 0x26e21330  addiu       $v0, $s7, 0x1330
    ctx->pc = 0x3429f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4912));
label_3429fc:
    // 0x3429fc: 0x90420070  lbu         $v0, 0x70($v0)
    ctx->pc = 0x3429fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_342a00:
    // 0x342a00: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x342a00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_342a04:
    // 0x342a04: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x342a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_342a08:
    // 0x342a08: 0x1242002a  beq         $s2, $v0, . + 4 + (0x2A << 2)
label_342a0c:
    if (ctx->pc == 0x342A0Cu) {
        ctx->pc = 0x342A10u;
        goto label_342a10;
    }
    ctx->pc = 0x342A08u;
    {
        const bool branch_taken_0x342a08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x342a08) {
            ctx->pc = 0x342AB4u;
            goto label_342ab4;
        }
    }
    ctx->pc = 0x342A10u;
label_342a10:
    // 0x342a10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342a14:
    // 0x342a14: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x342a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342a18:
    // 0x342a18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x342a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_342a1c:
    // 0x342a1c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x342a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_342a20:
    // 0x342a20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x342a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342a24:
    // 0x342a24: 0x8fb20118  lw          $s2, 0x118($sp)
    ctx->pc = 0x342a24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342a28:
    // 0x342a28: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x342a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_342a2c:
    // 0x342a2c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342a30:
    // 0x342a30: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x342a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_342a34:
    // 0x342a34: 0x92300070  lbu         $s0, 0x70($s1)
    ctx->pc = 0x342a34u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_342a38:
    // 0x342a38: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x342a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_342a3c:
    // 0x342a3c: 0x390c0  sll         $s2, $v1, 3
    ctx->pc = 0x342a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_342a40:
    // 0x342a40: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342a44:
    // 0x342a44: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x342a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_342a48:
    // 0x342a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342a4c:
    // 0x342a4c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342a50:
    // 0x342a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x342a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_342a54:
    // 0x342a54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x342a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_342a58:
    // 0x342a58: 0x8c720244  lw          $s2, 0x244($v1)
    ctx->pc = 0x342a58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
label_342a5c:
    // 0x342a5c: 0x24420204  addiu       $v0, $v0, 0x204
    ctx->pc = 0x342a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_342a60:
    // 0x342a60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342a64:
    // 0x342a64: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x342a64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_342a68:
    // 0x342a68: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x342a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_342a6c:
    // 0x342a6c: 0xc06b07c  jal         func_1AC1F0
label_342a70:
    if (ctx->pc == 0x342A70u) {
        ctx->pc = 0x342A74u;
        goto label_342a74;
    }
    ctx->pc = 0x342A6Cu;
    SET_GPR_U32(ctx, 31, 0x342A74u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x342A6Cu, 0x342A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A74u;
label_342a74:
    // 0x342a74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x342a74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342a78:
    // 0x342a78: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342a7c:
    // 0x342a7c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x342a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_342a80:
    // 0x342a80: 0x90520070  lbu         $s2, 0x70($v0)
    ctx->pc = 0x342a80u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_342a84:
    // 0x342a84: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x342a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_342a88:
    // 0x342a88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x342a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_342a8c:
    // 0x342a8c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342a90:
    // 0x342a90: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x342a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_342a94:
    // 0x342a94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342a98:
    // 0x342a98: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342a9c:
    // 0x342a9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342aa0:
    // 0x342aa0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_342aa4:
    // 0x342aa4: 0x8c550244  lw          $s5, 0x244($v0)
    ctx->pc = 0x342aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_342aa8:
    // 0x342aa8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x342aa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_342aac:
    // 0x342aac: 0xc074974  jal         func_1D25D0
label_342ab0:
    if (ctx->pc == 0x342AB0u) {
        ctx->pc = 0x342AB4u;
        goto label_342ab4;
    }
    ctx->pc = 0x342AACu;
    SET_GPR_U32(ctx, 31, 0x342AB4u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x342AACu, 0x342AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AB4u;
label_342ab4:
    // 0x342ab4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342ab8:
    // 0x342ab8: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x342ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342abc:
    // 0x342abc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x342abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_342ac0:
    // 0x342ac0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x342ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_342ac4:
    // 0x342ac4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x342ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_342ac8:
    // 0x342ac8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342acc:
    // 0x342acc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_342ad0:
    // 0x342ad0: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x342ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_342ad4:
    // 0x342ad4: 0xc06b0d4  jal         func_1AC350
label_342ad8:
    if (ctx->pc == 0x342AD8u) {
        ctx->pc = 0x342ADCu;
        goto label_342adc;
    }
    ctx->pc = 0x342AD4u;
    SET_GPR_U32(ctx, 31, 0x342ADCu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x342AD4u, 0x342ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342ADCu;
label_342adc:
    // 0x342adc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342ae0:
    // 0x342ae0: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x342ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342ae4:
    // 0x342ae4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x342ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_342ae8:
    // 0x342ae8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342aec:
    // 0x342aec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_342af0:
    // 0x342af0: 0x8c44023c  lw          $a0, 0x23C($v0)
    ctx->pc = 0x342af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_342af4:
    // 0x342af4: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x342af4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_342af8:
    // 0x342af8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342afc:
    // 0x342afc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342b00:
    // 0x342b00: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x342b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_342b04:
    // 0x342b04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_342b08:
    // 0x342b08: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x342b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342b0c:
    // 0x342b0c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342b10:
    // 0x342b10: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x342b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_342b14:
    // 0x342b14: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x342b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_342b18:
    // 0x342b18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342b1c:
    // 0x342b1c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342b20:
    // 0x342b20: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x342b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_342b24:
    // 0x342b24: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_342b28:
    // 0x342b28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x342b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342b2c:
    // 0x342b2c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342b30:
    // 0x342b30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342b34:
    // 0x342b34: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x342b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_342b38:
    // 0x342b38: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x342b38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_342b3c:
    // 0x342b3c: 0xc06b06c  jal         func_1AC1B0
label_342b40:
    if (ctx->pc == 0x342B40u) {
        ctx->pc = 0x342B44u;
        goto label_342b44;
    }
    ctx->pc = 0x342B3Cu;
    SET_GPR_U32(ctx, 31, 0x342B44u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x342B3Cu, 0x342B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B44u;
label_342b44:
    // 0x342b44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342b48:
    // 0x342b48: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342b4c:
    // 0x342b4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342b50:
    // 0x342b50: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342b54:
    // 0x342b54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x342b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_342b58:
    // 0x342b58: 0x8c53026c  lw          $s3, 0x26C($v0)
    ctx->pc = 0x342b58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_342b5c:
    // 0x342b5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342b60:
    // 0x342b60: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342b64:
    // 0x342b64: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x342b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_342b68:
    // 0x342b68: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x342b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342b6c:
    // 0x342b6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x342b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_342b70:
    // 0x342b70: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342b74:
    // 0x342b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342b78:
    // 0x342b78: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x342b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_342b7c:
    // 0x342b7c: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x342b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_342b80:
    // 0x342b80: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x342b80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_342b84:
    // 0x342b84: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x342b84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_342b88:
    // 0x342b88: 0xc06b07c  jal         func_1AC1F0
label_342b8c:
    if (ctx->pc == 0x342B8Cu) {
        ctx->pc = 0x342B90u;
        goto label_342b90;
    }
    ctx->pc = 0x342B88u;
    SET_GPR_U32(ctx, 31, 0x342B90u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x342B88u, 0x342B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B90u;
label_342b90:
    // 0x342b90: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x342b90u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342b94:
    // 0x342b94: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342b98:
    // 0x342b98: 0x8c53026c  lw          $s3, 0x26C($v0)
    ctx->pc = 0x342b98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_342b9c:
    // 0x342b9c: 0x3c03c20a  lui         $v1, 0xC20A
    ctx->pc = 0x342b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49674 << 16));
label_342ba0:
    // 0x342ba0: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x342ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_342ba4:
    // 0x342ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342ba8:
    // 0x342ba8: 0x0  nop
    ctx->pc = 0x342ba8u;
    // NOP
label_342bac:
    // 0x342bac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x342bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_342bb0:
    // 0x342bb0: 0x3c02c215  lui         $v0, 0xC215
    ctx->pc = 0x342bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49685 << 16));
label_342bb4:
    // 0x342bb4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x342bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_342bb8:
    // 0x342bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342bbc:
    // 0x342bbc: 0x0  nop
    ctx->pc = 0x342bbcu;
    // NOP
label_342bc0:
    // 0x342bc0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x342bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_342bc4:
    // 0x342bc4: 0x3c114308  lui         $s1, 0x4308
    ctx->pc = 0x342bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)17160 << 16));
label_342bc8:
    // 0x342bc8: 0x3622e666  ori         $v0, $s1, 0xE666
    ctx->pc = 0x342bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)58982);
label_342bcc:
    // 0x342bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342bd0:
    // 0x342bd0: 0x0  nop
    ctx->pc = 0x342bd0u;
    // NOP
label_342bd4:
    // 0x342bd4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x342bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_342bd8:
    // 0x342bd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x342bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_342bdc:
    // 0x342bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342be0:
    // 0x342be0: 0x0  nop
    ctx->pc = 0x342be0u;
    // NOP
label_342be4:
    // 0x342be4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x342be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_342be8:
    // 0x342be8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342bec:
    // 0x342bec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x342becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_342bf0:
    // 0x342bf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x342bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_342bf4:
    // 0x342bf4: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x342bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_342bf8:
    // 0x342bf8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x342bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_342bfc:
    // 0x342bfc: 0xc040bf4  jal         func_102FD0
label_342c00:
    if (ctx->pc == 0x342C00u) {
        ctx->pc = 0x342C04u;
        goto label_342c04;
    }
    ctx->pc = 0x342BFCu;
    SET_GPR_U32(ctx, 31, 0x342C04u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342C04u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342C04u) { return; }
    ctx->pc = 0x342C04u;
label_342c04:
    // 0x342c04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_342c08:
    // 0x342c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342c0c:
    // 0x342c0c: 0x0  nop
    ctx->pc = 0x342c0cu;
    // NOP
label_342c10:
    // 0x342c10: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x342c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_342c14:
    // 0x342c14: 0x3c02c20a  lui         $v0, 0xC20A
    ctx->pc = 0x342c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49674 << 16));
label_342c18:
    // 0x342c18: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x342c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_342c1c:
    // 0x342c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342c20:
    // 0x342c20: 0x0  nop
    ctx->pc = 0x342c20u;
    // NOP
label_342c24:
    // 0x342c24: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x342c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_342c28:
    // 0x342c28: 0x3c02c255  lui         $v0, 0xC255
    ctx->pc = 0x342c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49749 << 16));
label_342c2c:
    // 0x342c2c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x342c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_342c30:
    // 0x342c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342c34:
    // 0x342c34: 0x0  nop
    ctx->pc = 0x342c34u;
    // NOP
label_342c38:
    // 0x342c38: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x342c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_342c3c:
    // 0x342c3c: 0x3c024308  lui         $v0, 0x4308
    ctx->pc = 0x342c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17160 << 16));
label_342c40:
    // 0x342c40: 0x3443e666  ori         $v1, $v0, 0xE666
    ctx->pc = 0x342c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58982);
label_342c44:
    // 0x342c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342c48:
    // 0x342c48: 0x0  nop
    ctx->pc = 0x342c48u;
    // NOP
label_342c4c:
    // 0x342c4c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x342c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_342c50:
    // 0x342c50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x342c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_342c54:
    // 0x342c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342c58:
    // 0x342c58: 0x0  nop
    ctx->pc = 0x342c58u;
    // NOP
label_342c5c:
    // 0x342c5c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x342c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_342c60:
    // 0x342c60: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342c64:
    // 0x342c64: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x342c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_342c68:
    // 0x342c68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x342c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_342c6c:
    // 0x342c6c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x342c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_342c70:
    // 0x342c70: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x342c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_342c74:
    // 0x342c74: 0xc040bf4  jal         func_102FD0
label_342c78:
    if (ctx->pc == 0x342C78u) {
        ctx->pc = 0x342C7Cu;
        goto label_342c7c;
    }
    ctx->pc = 0x342C74u;
    SET_GPR_U32(ctx, 31, 0x342C7Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342C7Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342C7Cu) { return; }
    ctx->pc = 0x342C7Cu;
label_342c7c:
    // 0x342c7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_342c80:
    // 0x342c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342c84:
    // 0x342c84: 0x0  nop
    ctx->pc = 0x342c84u;
    // NOP
label_342c88:
    // 0x342c88: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x342c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_342c8c:
    // 0x342c8c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342c90:
    // 0x342c90: 0x8c50026c  lw          $s0, 0x26C($v0)
    ctx->pc = 0x342c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_342c94:
    // 0x342c94: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342c98:
    // 0x342c98: 0x8c450270  lw          $a1, 0x270($v0)
    ctx->pc = 0x342c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
label_342c9c:
    // 0x342c9c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x342c9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_342ca0:
    // 0x342ca0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x342ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_342ca4:
    // 0x342ca4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x342ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_342ca8:
    // 0x342ca8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x342ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_342cac:
    // 0x342cac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342cb0:
    // 0x342cb0: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x342cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342cb4:
    // 0x342cb4: 0xc075378  jal         func_1D4DE0
label_342cb8:
    if (ctx->pc == 0x342CB8u) {
        ctx->pc = 0x342CBCu;
        goto label_342cbc;
    }
    ctx->pc = 0x342CB4u;
    SET_GPR_U32(ctx, 31, 0x342CBCu);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x342CB4u, 0x342CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342CBCu;
label_342cbc:
    // 0x342cbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342cc0:
    // 0x342cc0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342cc4:
    // 0x342cc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x342cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_342cc8:
    // 0x342cc8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342ccc:
    // 0x342ccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342cd0:
    // 0x342cd0: 0x8c540274  lw          $s4, 0x274($v0)
    ctx->pc = 0x342cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_342cd4:
    // 0x342cd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342cd8:
    // 0x342cd8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342cdc:
    // 0x342cdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x342cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_342ce0:
    // 0x342ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342ce4:
    // 0x342ce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342ce8:
    // 0x342ce8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342cec:
    // 0x342cec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x342cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_342cf0:
    // 0x342cf0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x342cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_342cf4:
    // 0x342cf4: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x342cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_342cf8:
    // 0x342cf8: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x342cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_342cfc:
    // 0x342cfc: 0xc06b07c  jal         func_1AC1F0
label_342d00:
    if (ctx->pc == 0x342D00u) {
        ctx->pc = 0x342D04u;
        goto label_342d04;
    }
    ctx->pc = 0x342CFCu;
    SET_GPR_U32(ctx, 31, 0x342D04u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x342CFCu, 0x342D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342D04u;
label_342d04:
    // 0x342d04: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342d08:
    // 0x342d08: 0x8c740274  lw          $s4, 0x274($v1)
    ctx->pc = 0x342d08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
label_342d0c:
    // 0x342d0c: 0x3c03420a  lui         $v1, 0x420A
    ctx->pc = 0x342d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16906 << 16));
label_342d10:
    // 0x342d10: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x342d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_342d14:
    // 0x342d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342d18:
    // 0x342d18: 0x0  nop
    ctx->pc = 0x342d18u;
    // NOP
label_342d1c:
    // 0x342d1c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x342d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_342d20:
    // 0x342d20: 0x3c02c215  lui         $v0, 0xC215
    ctx->pc = 0x342d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49685 << 16));
label_342d24:
    // 0x342d24: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x342d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_342d28:
    // 0x342d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342d2c:
    // 0x342d2c: 0x0  nop
    ctx->pc = 0x342d2cu;
    // NOP
label_342d30:
    // 0x342d30: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x342d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_342d34:
    // 0x342d34: 0x3c024308  lui         $v0, 0x4308
    ctx->pc = 0x342d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17160 << 16));
label_342d38:
    // 0x342d38: 0x3442e666  ori         $v0, $v0, 0xE666
    ctx->pc = 0x342d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58982);
label_342d3c:
    // 0x342d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342d40:
    // 0x342d40: 0x0  nop
    ctx->pc = 0x342d40u;
    // NOP
label_342d44:
    // 0x342d44: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x342d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_342d48:
    // 0x342d48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_342d4c:
    // 0x342d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342d50:
    // 0x342d50: 0x0  nop
    ctx->pc = 0x342d50u;
    // NOP
label_342d54:
    // 0x342d54: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x342d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_342d58:
    // 0x342d58: 0x8fb00118  lw          $s0, 0x118($sp)
    ctx->pc = 0x342d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342d5c:
    // 0x342d5c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x342d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_342d60:
    // 0x342d60: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x342d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_342d64:
    // 0x342d64: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x342d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_342d68:
    // 0x342d68: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x342d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_342d6c:
    // 0x342d6c: 0xc040bf4  jal         func_102FD0
label_342d70:
    if (ctx->pc == 0x342D70u) {
        ctx->pc = 0x342D74u;
        goto label_342d74;
    }
    ctx->pc = 0x342D6Cu;
    SET_GPR_U32(ctx, 31, 0x342D74u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342D74u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342D74u) { return; }
    ctx->pc = 0x342D74u;
label_342d74:
    // 0x342d74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x342d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_342d78:
    // 0x342d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342d7c:
    // 0x342d7c: 0x0  nop
    ctx->pc = 0x342d7cu;
    // NOP
label_342d80:
    // 0x342d80: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x342d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_342d84:
    // 0x342d84: 0x3c02420a  lui         $v0, 0x420A
    ctx->pc = 0x342d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16906 << 16));
label_342d88:
    // 0x342d88: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x342d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_342d8c:
    // 0x342d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342d90:
    // 0x342d90: 0x0  nop
    ctx->pc = 0x342d90u;
    // NOP
label_342d94:
    // 0x342d94: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x342d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_342d98:
    // 0x342d98: 0x3c02c255  lui         $v0, 0xC255
    ctx->pc = 0x342d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49749 << 16));
label_342d9c:
    // 0x342d9c: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x342d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_342da0:
    // 0x342da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342da4:
    // 0x342da4: 0x0  nop
    ctx->pc = 0x342da4u;
    // NOP
label_342da8:
    // 0x342da8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x342da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_342dac:
    // 0x342dac: 0x3c034308  lui         $v1, 0x4308
    ctx->pc = 0x342dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17160 << 16));
label_342db0:
    // 0x342db0: 0x3462e666  ori         $v0, $v1, 0xE666
    ctx->pc = 0x342db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58982);
label_342db4:
    // 0x342db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342db8:
    // 0x342db8: 0x0  nop
    ctx->pc = 0x342db8u;
    // NOP
label_342dbc:
    // 0x342dbc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x342dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_342dc0:
    // 0x342dc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_342dc4:
    // 0x342dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342dc8:
    // 0x342dc8: 0x0  nop
    ctx->pc = 0x342dc8u;
    // NOP
label_342dcc:
    // 0x342dcc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x342dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_342dd0:
    // 0x342dd0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342dd4:
    // 0x342dd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x342dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_342dd8:
    // 0x342dd8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x342dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_342ddc:
    // 0x342ddc: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x342ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_342de0:
    // 0x342de0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x342de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_342de4:
    // 0x342de4: 0xc040bf4  jal         func_102FD0
label_342de8:
    if (ctx->pc == 0x342DE8u) {
        ctx->pc = 0x342DECu;
        goto label_342dec;
    }
    ctx->pc = 0x342DE4u;
    SET_GPR_U32(ctx, 31, 0x342DECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342DECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342DECu) { return; }
    ctx->pc = 0x342DECu;
label_342dec:
    // 0x342dec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x342decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_342df0:
    // 0x342df0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342df0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342df4:
    // 0x342df4: 0x0  nop
    ctx->pc = 0x342df4u;
    // NOP
label_342df8:
    // 0x342df8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x342df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_342dfc:
    // 0x342dfc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342e00:
    // 0x342e00: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x342e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_342e04:
    // 0x342e04: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342e08:
    // 0x342e08: 0x8c450278  lw          $a1, 0x278($v0)
    ctx->pc = 0x342e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
label_342e0c:
    // 0x342e0c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x342e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_342e10:
    // 0x342e10: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x342e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_342e14:
    // 0x342e14: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x342e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_342e18:
    // 0x342e18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342e1c:
    // 0x342e1c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x342e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342e20:
    // 0x342e20: 0xc075378  jal         func_1D4DE0
label_342e24:
    if (ctx->pc == 0x342E24u) {
        ctx->pc = 0x342E28u;
        goto label_342e28;
    }
    ctx->pc = 0x342E20u;
    SET_GPR_U32(ctx, 31, 0x342E28u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x342E20u, 0x342E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E28u;
label_342e28:
    // 0x342e28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342e28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342e2c:
    // 0x342e2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_342e30:
    // 0x342e30: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_342e34:
    // 0x342e34: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x342e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_342e38:
    // 0x342e38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_342e3c:
    // 0x342e3c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x342e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342e40:
    // 0x342e40: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342e44:
    // 0x342e44: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x342e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_342e48:
    // 0x342e48: 0x2482021c  addiu       $v0, $a0, 0x21C
    ctx->pc = 0x342e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
label_342e4c:
    // 0x342e4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342e4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342e50:
    // 0x342e50: 0xc06b0d4  jal         func_1AC350
label_342e54:
    if (ctx->pc == 0x342E54u) {
        ctx->pc = 0x342E58u;
        goto label_342e58;
    }
    ctx->pc = 0x342E50u;
    SET_GPR_U32(ctx, 31, 0x342E58u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x342E50u, 0x342E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E58u;
label_342e58:
    // 0x342e58: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x342e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_342e5c:
    // 0x342e5c: 0xc0675a4  jal         func_19D690
label_342e60:
    if (ctx->pc == 0x342E60u) {
        ctx->pc = 0x342E64u;
        goto label_342e64;
    }
    ctx->pc = 0x342E5Cu;
    SET_GPR_U32(ctx, 31, 0x342E64u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x342E5Cu, 0x342E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E64u;
label_342e64:
    // 0x342e64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x342e64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342e68:
    // 0x342e68: 0x3c0443e1  lui         $a0, 0x43E1
    ctx->pc = 0x342e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17377 << 16));
label_342e6c:
    // 0x342e6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x342e6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342e70:
    // 0x342e70: 0x0  nop
    ctx->pc = 0x342e70u;
    // NOP
label_342e74:
    // 0x342e74: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x342e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_342e78:
    // 0x342e78: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x342e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_342e7c:
    // 0x342e7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342e7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342e80:
    // 0x342e80: 0xc0675a4  jal         func_19D690
label_342e84:
    if (ctx->pc == 0x342E84u) {
        ctx->pc = 0x342E88u;
        goto label_342e88;
    }
    ctx->pc = 0x342E80u;
    SET_GPR_U32(ctx, 31, 0x342E88u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x342E80u, 0x342E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E88u;
label_342e88:
    // 0x342e88: 0x3c02c3e1  lui         $v0, 0xC3E1
    ctx->pc = 0x342e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50145 << 16));
label_342e8c:
    // 0x342e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342e90:
    // 0x342e90: 0x0  nop
    ctx->pc = 0x342e90u;
    // NOP
label_342e94:
    // 0x342e94: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x342e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_342e98:
    // 0x342e98: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x342e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_342e9c:
    // 0x342e9c: 0xc0675a4  jal         func_19D690
label_342ea0:
    if (ctx->pc == 0x342EA0u) {
        ctx->pc = 0x342EA4u;
        goto label_342ea4;
    }
    ctx->pc = 0x342E9Cu;
    SET_GPR_U32(ctx, 31, 0x342EA4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x342E9Cu, 0x342EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342EA4u;
label_342ea4:
    // 0x342ea4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342ea4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342ea8:
    // 0x342ea8: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x342ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
label_342eac:
    // 0x342eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342eb0:
    // 0x342eb0: 0x0  nop
    ctx->pc = 0x342eb0u;
    // NOP
label_342eb4:
    // 0x342eb4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x342eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_342eb8:
    // 0x342eb8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x342eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_342ebc:
    // 0x342ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342ec0:
    // 0x342ec0: 0x0  nop
    ctx->pc = 0x342ec0u;
    // NOP
label_342ec4:
    // 0x342ec4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x342ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_342ec8:
    // 0x342ec8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x342ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_342ecc:
    // 0x342ecc: 0xc0675a4  jal         func_19D690
label_342ed0:
    if (ctx->pc == 0x342ED0u) {
        ctx->pc = 0x342ED4u;
        goto label_342ed4;
    }
    ctx->pc = 0x342ECCu;
    SET_GPR_U32(ctx, 31, 0x342ED4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x342ECCu, 0x342ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342ED4u;
label_342ed4:
    // 0x342ed4: 0x3c02c3e1  lui         $v0, 0xC3E1
    ctx->pc = 0x342ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50145 << 16));
label_342ed8:
    // 0x342ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342edc:
    // 0x342edc: 0x0  nop
    ctx->pc = 0x342edcu;
    // NOP
label_342ee0:
    // 0x342ee0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x342ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_342ee4:
    // 0x342ee4: 0x3c1641f0  lui         $s6, 0x41F0
    ctx->pc = 0x342ee4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16880 << 16));
label_342ee8:
    // 0x342ee8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x342ee8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_342eec:
    // 0x342eec: 0x0  nop
    ctx->pc = 0x342eecu;
    // NOP
label_342ef0:
    // 0x342ef0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x342ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_342ef4:
    // 0x342ef4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342ef8:
    // 0x342ef8: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x342ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_342efc:
    // 0x342efc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x342efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_342f00:
    // 0x342f00: 0x24450140  addiu       $a1, $v0, 0x140
    ctx->pc = 0x342f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_342f04:
    // 0x342f04: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x342f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_342f08:
    // 0x342f08: 0xc040bf4  jal         func_102FD0
label_342f0c:
    if (ctx->pc == 0x342F0Cu) {
        ctx->pc = 0x342F10u;
        goto label_342f10;
    }
    ctx->pc = 0x342F08u;
    SET_GPR_U32(ctx, 31, 0x342F10u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342F10u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342F10u) { return; }
    ctx->pc = 0x342F10u;
label_342f10:
    // 0x342f10: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342f14:
    // 0x342f14: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x342f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_342f18:
    // 0x342f18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x342f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_342f1c:
    // 0x342f1c: 0x24450140  addiu       $a1, $v0, 0x140
    ctx->pc = 0x342f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_342f20:
    // 0x342f20: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x342f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_342f24:
    // 0x342f24: 0xc040bf4  jal         func_102FD0
label_342f28:
    if (ctx->pc == 0x342F28u) {
        ctx->pc = 0x342F2Cu;
        goto label_342f2c;
    }
    ctx->pc = 0x342F24u;
    SET_GPR_U32(ctx, 31, 0x342F2Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342F2Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342F2Cu) { return; }
    ctx->pc = 0x342F2Cu;
label_342f2c:
    // 0x342f2c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342f30:
    // 0x342f30: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x342f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_342f34:
    // 0x342f34: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x342f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_342f38:
    // 0x342f38: 0x24e501c0  addiu       $a1, $a3, 0x1C0
    ctx->pc = 0x342f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
label_342f3c:
    // 0x342f3c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x342f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_342f40:
    // 0x342f40: 0xc040bf4  jal         func_102FD0
label_342f44:
    if (ctx->pc == 0x342F44u) {
        ctx->pc = 0x342F48u;
        goto label_342f48;
    }
    ctx->pc = 0x342F40u;
    SET_GPR_U32(ctx, 31, 0x342F48u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342F48u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342F48u) { return; }
    ctx->pc = 0x342F48u;
label_342f48:
    // 0x342f48: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342f4c:
    // 0x342f4c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x342f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_342f50:
    // 0x342f50: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x342f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_342f54:
    // 0x342f54: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x342f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_342f58:
    // 0x342f58: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x342f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_342f5c:
    // 0x342f5c: 0xc040bf4  jal         func_102FD0
label_342f60:
    if (ctx->pc == 0x342F60u) {
        ctx->pc = 0x342F64u;
        goto label_342f64;
    }
    ctx->pc = 0x342F5Cu;
    SET_GPR_U32(ctx, 31, 0x342F64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x342F64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x342F64u) { return; }
    ctx->pc = 0x342F64u;
label_342f64:
    // 0x342f64: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_342f68:
    // 0x342f68: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x342f68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
label_342f6c:
    // 0x342f6c: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x342f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_342f70:
    // 0x342f70: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x342f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_342f74:
    // 0x342f74: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x342f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_342f78:
    // 0x342f78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x342f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_342f7c:
    // 0x342f7c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x342f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_342f80:
    // 0x342f80: 0x24425ac0  addiu       $v0, $v0, 0x5AC0
    ctx->pc = 0x342f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23232));
label_342f84:
    // 0x342f84: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x342f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342f88:
    // 0x342f88: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x342f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_342f8c:
    // 0x342f8c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x342f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_342f90:
    // 0x342f90: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x342f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_342f94:
    // 0x342f94: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x342f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_342f98:
    // 0x342f98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x342f98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_342f9c:
    // 0x342f9c: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x342f9cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_342fa0:
    // 0x342fa0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x342fa0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_342fa4:
    // 0x342fa4: 0xc05ae28  jal         func_16B8A0
label_342fa8:
    if (ctx->pc == 0x342FA8u) {
        ctx->pc = 0x342FACu;
        goto label_342fac;
    }
    ctx->pc = 0x342FA4u;
    SET_GPR_U32(ctx, 31, 0x342FACu);
    ctx->pc = 0x16B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B8A0u, 0x342FA4u, 0x342FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342FACu;
label_342fac:
    // 0x342fac: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x342facu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_342fb0:
    // 0x342fb0: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x342fb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_342fb4:
    // 0x342fb4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x342fb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_342fb8:
    // 0x342fb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x342fb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_342fbc:
    // 0x342fbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x342fbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_342fc0:
    // 0x342fc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x342fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_342fc4:
    // 0x342fc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x342fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342fc8:
    // 0x342fc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342fcc:
    // 0x342fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342fd0:
    // 0x342fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_342fd4:
    // 0x342fd4: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x342fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_342fd8:
    // 0x342fd8: 0x3e00008  jr          $ra
label_342fdc:
    if (ctx->pc == 0x342FDCu) {
        ctx->pc = 0x342FE0u;
        goto label_fallthrough_0x342fd8;
    }
    ctx->pc = 0x342FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x342fd8:
    ctx->pc = 0x342FE0u;
}
