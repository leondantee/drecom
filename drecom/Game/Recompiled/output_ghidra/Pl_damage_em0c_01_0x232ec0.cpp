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

// Function: Pl_damage_em0c_01
// Address: 0x232ec0 - 0x233998
void Pl_damage_em0c_01_0x232ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_damage_em0c_01_0x232ec0");
#endif

    switch (ctx->pc) {
        case 0x232ec0u: goto label_232ec0;
        case 0x232ec4u: goto label_232ec4;
        case 0x232ec8u: goto label_232ec8;
        case 0x232eccu: goto label_232ecc;
        case 0x232ed0u: goto label_232ed0;
        case 0x232ed4u: goto label_232ed4;
        case 0x232ed8u: goto label_232ed8;
        case 0x232edcu: goto label_232edc;
        case 0x232ee0u: goto label_232ee0;
        case 0x232ee4u: goto label_232ee4;
        case 0x232ee8u: goto label_232ee8;
        case 0x232eecu: goto label_232eec;
        case 0x232ef0u: goto label_232ef0;
        case 0x232ef4u: goto label_232ef4;
        case 0x232ef8u: goto label_232ef8;
        case 0x232efcu: goto label_232efc;
        case 0x232f00u: goto label_232f00;
        case 0x232f04u: goto label_232f04;
        case 0x232f08u: goto label_232f08;
        case 0x232f0cu: goto label_232f0c;
        case 0x232f10u: goto label_232f10;
        case 0x232f14u: goto label_232f14;
        case 0x232f18u: goto label_232f18;
        case 0x232f1cu: goto label_232f1c;
        case 0x232f20u: goto label_232f20;
        case 0x232f24u: goto label_232f24;
        case 0x232f28u: goto label_232f28;
        case 0x232f2cu: goto label_232f2c;
        case 0x232f30u: goto label_232f30;
        case 0x232f34u: goto label_232f34;
        case 0x232f38u: goto label_232f38;
        case 0x232f3cu: goto label_232f3c;
        case 0x232f40u: goto label_232f40;
        case 0x232f44u: goto label_232f44;
        case 0x232f48u: goto label_232f48;
        case 0x232f4cu: goto label_232f4c;
        case 0x232f50u: goto label_232f50;
        case 0x232f54u: goto label_232f54;
        case 0x232f58u: goto label_232f58;
        case 0x232f5cu: goto label_232f5c;
        case 0x232f60u: goto label_232f60;
        case 0x232f64u: goto label_232f64;
        case 0x232f68u: goto label_232f68;
        case 0x232f6cu: goto label_232f6c;
        case 0x232f70u: goto label_232f70;
        case 0x232f74u: goto label_232f74;
        case 0x232f78u: goto label_232f78;
        case 0x232f7cu: goto label_232f7c;
        case 0x232f80u: goto label_232f80;
        case 0x232f84u: goto label_232f84;
        case 0x232f88u: goto label_232f88;
        case 0x232f8cu: goto label_232f8c;
        case 0x232f90u: goto label_232f90;
        case 0x232f94u: goto label_232f94;
        case 0x232f98u: goto label_232f98;
        case 0x232f9cu: goto label_232f9c;
        case 0x232fa0u: goto label_232fa0;
        case 0x232fa4u: goto label_232fa4;
        case 0x232fa8u: goto label_232fa8;
        case 0x232facu: goto label_232fac;
        case 0x232fb0u: goto label_232fb0;
        case 0x232fb4u: goto label_232fb4;
        case 0x232fb8u: goto label_232fb8;
        case 0x232fbcu: goto label_232fbc;
        case 0x232fc0u: goto label_232fc0;
        case 0x232fc4u: goto label_232fc4;
        case 0x232fc8u: goto label_232fc8;
        case 0x232fccu: goto label_232fcc;
        case 0x232fd0u: goto label_232fd0;
        case 0x232fd4u: goto label_232fd4;
        case 0x232fd8u: goto label_232fd8;
        case 0x232fdcu: goto label_232fdc;
        case 0x232fe0u: goto label_232fe0;
        case 0x232fe4u: goto label_232fe4;
        case 0x232fe8u: goto label_232fe8;
        case 0x232fecu: goto label_232fec;
        case 0x232ff0u: goto label_232ff0;
        case 0x232ff4u: goto label_232ff4;
        case 0x232ff8u: goto label_232ff8;
        case 0x232ffcu: goto label_232ffc;
        case 0x233000u: goto label_233000;
        case 0x233004u: goto label_233004;
        case 0x233008u: goto label_233008;
        case 0x23300cu: goto label_23300c;
        case 0x233010u: goto label_233010;
        case 0x233014u: goto label_233014;
        case 0x233018u: goto label_233018;
        case 0x23301cu: goto label_23301c;
        case 0x233020u: goto label_233020;
        case 0x233024u: goto label_233024;
        case 0x233028u: goto label_233028;
        case 0x23302cu: goto label_23302c;
        case 0x233030u: goto label_233030;
        case 0x233034u: goto label_233034;
        case 0x233038u: goto label_233038;
        case 0x23303cu: goto label_23303c;
        case 0x233040u: goto label_233040;
        case 0x233044u: goto label_233044;
        case 0x233048u: goto label_233048;
        case 0x23304cu: goto label_23304c;
        case 0x233050u: goto label_233050;
        case 0x233054u: goto label_233054;
        case 0x233058u: goto label_233058;
        case 0x23305cu: goto label_23305c;
        case 0x233060u: goto label_233060;
        case 0x233064u: goto label_233064;
        case 0x233068u: goto label_233068;
        case 0x23306cu: goto label_23306c;
        case 0x233070u: goto label_233070;
        case 0x233074u: goto label_233074;
        case 0x233078u: goto label_233078;
        case 0x23307cu: goto label_23307c;
        case 0x233080u: goto label_233080;
        case 0x233084u: goto label_233084;
        case 0x233088u: goto label_233088;
        case 0x23308cu: goto label_23308c;
        case 0x233090u: goto label_233090;
        case 0x233094u: goto label_233094;
        case 0x233098u: goto label_233098;
        case 0x23309cu: goto label_23309c;
        case 0x2330a0u: goto label_2330a0;
        case 0x2330a4u: goto label_2330a4;
        case 0x2330a8u: goto label_2330a8;
        case 0x2330acu: goto label_2330ac;
        case 0x2330b0u: goto label_2330b0;
        case 0x2330b4u: goto label_2330b4;
        case 0x2330b8u: goto label_2330b8;
        case 0x2330bcu: goto label_2330bc;
        case 0x2330c0u: goto label_2330c0;
        case 0x2330c4u: goto label_2330c4;
        case 0x2330c8u: goto label_2330c8;
        case 0x2330ccu: goto label_2330cc;
        case 0x2330d0u: goto label_2330d0;
        case 0x2330d4u: goto label_2330d4;
        case 0x2330d8u: goto label_2330d8;
        case 0x2330dcu: goto label_2330dc;
        case 0x2330e0u: goto label_2330e0;
        case 0x2330e4u: goto label_2330e4;
        case 0x2330e8u: goto label_2330e8;
        case 0x2330ecu: goto label_2330ec;
        case 0x2330f0u: goto label_2330f0;
        case 0x2330f4u: goto label_2330f4;
        case 0x2330f8u: goto label_2330f8;
        case 0x2330fcu: goto label_2330fc;
        case 0x233100u: goto label_233100;
        case 0x233104u: goto label_233104;
        case 0x233108u: goto label_233108;
        case 0x23310cu: goto label_23310c;
        case 0x233110u: goto label_233110;
        case 0x233114u: goto label_233114;
        case 0x233118u: goto label_233118;
        case 0x23311cu: goto label_23311c;
        case 0x233120u: goto label_233120;
        case 0x233124u: goto label_233124;
        case 0x233128u: goto label_233128;
        case 0x23312cu: goto label_23312c;
        case 0x233130u: goto label_233130;
        case 0x233134u: goto label_233134;
        case 0x233138u: goto label_233138;
        case 0x23313cu: goto label_23313c;
        case 0x233140u: goto label_233140;
        case 0x233144u: goto label_233144;
        case 0x233148u: goto label_233148;
        case 0x23314cu: goto label_23314c;
        case 0x233150u: goto label_233150;
        case 0x233154u: goto label_233154;
        case 0x233158u: goto label_233158;
        case 0x23315cu: goto label_23315c;
        case 0x233160u: goto label_233160;
        case 0x233164u: goto label_233164;
        case 0x233168u: goto label_233168;
        case 0x23316cu: goto label_23316c;
        case 0x233170u: goto label_233170;
        case 0x233174u: goto label_233174;
        case 0x233178u: goto label_233178;
        case 0x23317cu: goto label_23317c;
        case 0x233180u: goto label_233180;
        case 0x233184u: goto label_233184;
        case 0x233188u: goto label_233188;
        case 0x23318cu: goto label_23318c;
        case 0x233190u: goto label_233190;
        case 0x233194u: goto label_233194;
        case 0x233198u: goto label_233198;
        case 0x23319cu: goto label_23319c;
        case 0x2331a0u: goto label_2331a0;
        case 0x2331a4u: goto label_2331a4;
        case 0x2331a8u: goto label_2331a8;
        case 0x2331acu: goto label_2331ac;
        case 0x2331b0u: goto label_2331b0;
        case 0x2331b4u: goto label_2331b4;
        case 0x2331b8u: goto label_2331b8;
        case 0x2331bcu: goto label_2331bc;
        case 0x2331c0u: goto label_2331c0;
        case 0x2331c4u: goto label_2331c4;
        case 0x2331c8u: goto label_2331c8;
        case 0x2331ccu: goto label_2331cc;
        case 0x2331d0u: goto label_2331d0;
        case 0x2331d4u: goto label_2331d4;
        case 0x2331d8u: goto label_2331d8;
        case 0x2331dcu: goto label_2331dc;
        case 0x2331e0u: goto label_2331e0;
        case 0x2331e4u: goto label_2331e4;
        case 0x2331e8u: goto label_2331e8;
        case 0x2331ecu: goto label_2331ec;
        case 0x2331f0u: goto label_2331f0;
        case 0x2331f4u: goto label_2331f4;
        case 0x2331f8u: goto label_2331f8;
        case 0x2331fcu: goto label_2331fc;
        case 0x233200u: goto label_233200;
        case 0x233204u: goto label_233204;
        case 0x233208u: goto label_233208;
        case 0x23320cu: goto label_23320c;
        case 0x233210u: goto label_233210;
        case 0x233214u: goto label_233214;
        case 0x233218u: goto label_233218;
        case 0x23321cu: goto label_23321c;
        case 0x233220u: goto label_233220;
        case 0x233224u: goto label_233224;
        case 0x233228u: goto label_233228;
        case 0x23322cu: goto label_23322c;
        case 0x233230u: goto label_233230;
        case 0x233234u: goto label_233234;
        case 0x233238u: goto label_233238;
        case 0x23323cu: goto label_23323c;
        case 0x233240u: goto label_233240;
        case 0x233244u: goto label_233244;
        case 0x233248u: goto label_233248;
        case 0x23324cu: goto label_23324c;
        case 0x233250u: goto label_233250;
        case 0x233254u: goto label_233254;
        case 0x233258u: goto label_233258;
        case 0x23325cu: goto label_23325c;
        case 0x233260u: goto label_233260;
        case 0x233264u: goto label_233264;
        case 0x233268u: goto label_233268;
        case 0x23326cu: goto label_23326c;
        case 0x233270u: goto label_233270;
        case 0x233274u: goto label_233274;
        case 0x233278u: goto label_233278;
        case 0x23327cu: goto label_23327c;
        case 0x233280u: goto label_233280;
        case 0x233284u: goto label_233284;
        case 0x233288u: goto label_233288;
        case 0x23328cu: goto label_23328c;
        case 0x233290u: goto label_233290;
        case 0x233294u: goto label_233294;
        case 0x233298u: goto label_233298;
        case 0x23329cu: goto label_23329c;
        case 0x2332a0u: goto label_2332a0;
        case 0x2332a4u: goto label_2332a4;
        case 0x2332a8u: goto label_2332a8;
        case 0x2332acu: goto label_2332ac;
        case 0x2332b0u: goto label_2332b0;
        case 0x2332b4u: goto label_2332b4;
        case 0x2332b8u: goto label_2332b8;
        case 0x2332bcu: goto label_2332bc;
        case 0x2332c0u: goto label_2332c0;
        case 0x2332c4u: goto label_2332c4;
        case 0x2332c8u: goto label_2332c8;
        case 0x2332ccu: goto label_2332cc;
        case 0x2332d0u: goto label_2332d0;
        case 0x2332d4u: goto label_2332d4;
        case 0x2332d8u: goto label_2332d8;
        case 0x2332dcu: goto label_2332dc;
        case 0x2332e0u: goto label_2332e0;
        case 0x2332e4u: goto label_2332e4;
        case 0x2332e8u: goto label_2332e8;
        case 0x2332ecu: goto label_2332ec;
        case 0x2332f0u: goto label_2332f0;
        case 0x2332f4u: goto label_2332f4;
        case 0x2332f8u: goto label_2332f8;
        case 0x2332fcu: goto label_2332fc;
        case 0x233300u: goto label_233300;
        case 0x233304u: goto label_233304;
        case 0x233308u: goto label_233308;
        case 0x23330cu: goto label_23330c;
        case 0x233310u: goto label_233310;
        case 0x233314u: goto label_233314;
        case 0x233318u: goto label_233318;
        case 0x23331cu: goto label_23331c;
        case 0x233320u: goto label_233320;
        case 0x233324u: goto label_233324;
        case 0x233328u: goto label_233328;
        case 0x23332cu: goto label_23332c;
        case 0x233330u: goto label_233330;
        case 0x233334u: goto label_233334;
        case 0x233338u: goto label_233338;
        case 0x23333cu: goto label_23333c;
        case 0x233340u: goto label_233340;
        case 0x233344u: goto label_233344;
        case 0x233348u: goto label_233348;
        case 0x23334cu: goto label_23334c;
        case 0x233350u: goto label_233350;
        case 0x233354u: goto label_233354;
        case 0x233358u: goto label_233358;
        case 0x23335cu: goto label_23335c;
        case 0x233360u: goto label_233360;
        case 0x233364u: goto label_233364;
        case 0x233368u: goto label_233368;
        case 0x23336cu: goto label_23336c;
        case 0x233370u: goto label_233370;
        case 0x233374u: goto label_233374;
        case 0x233378u: goto label_233378;
        case 0x23337cu: goto label_23337c;
        case 0x233380u: goto label_233380;
        case 0x233384u: goto label_233384;
        case 0x233388u: goto label_233388;
        case 0x23338cu: goto label_23338c;
        case 0x233390u: goto label_233390;
        case 0x233394u: goto label_233394;
        case 0x233398u: goto label_233398;
        case 0x23339cu: goto label_23339c;
        case 0x2333a0u: goto label_2333a0;
        case 0x2333a4u: goto label_2333a4;
        case 0x2333a8u: goto label_2333a8;
        case 0x2333acu: goto label_2333ac;
        case 0x2333b0u: goto label_2333b0;
        case 0x2333b4u: goto label_2333b4;
        case 0x2333b8u: goto label_2333b8;
        case 0x2333bcu: goto label_2333bc;
        case 0x2333c0u: goto label_2333c0;
        case 0x2333c4u: goto label_2333c4;
        case 0x2333c8u: goto label_2333c8;
        case 0x2333ccu: goto label_2333cc;
        case 0x2333d0u: goto label_2333d0;
        case 0x2333d4u: goto label_2333d4;
        case 0x2333d8u: goto label_2333d8;
        case 0x2333dcu: goto label_2333dc;
        case 0x2333e0u: goto label_2333e0;
        case 0x2333e4u: goto label_2333e4;
        case 0x2333e8u: goto label_2333e8;
        case 0x2333ecu: goto label_2333ec;
        case 0x2333f0u: goto label_2333f0;
        case 0x2333f4u: goto label_2333f4;
        case 0x2333f8u: goto label_2333f8;
        case 0x2333fcu: goto label_2333fc;
        case 0x233400u: goto label_233400;
        case 0x233404u: goto label_233404;
        case 0x233408u: goto label_233408;
        case 0x23340cu: goto label_23340c;
        case 0x233410u: goto label_233410;
        case 0x233414u: goto label_233414;
        case 0x233418u: goto label_233418;
        case 0x23341cu: goto label_23341c;
        case 0x233420u: goto label_233420;
        case 0x233424u: goto label_233424;
        case 0x233428u: goto label_233428;
        case 0x23342cu: goto label_23342c;
        case 0x233430u: goto label_233430;
        case 0x233434u: goto label_233434;
        case 0x233438u: goto label_233438;
        case 0x23343cu: goto label_23343c;
        case 0x233440u: goto label_233440;
        case 0x233444u: goto label_233444;
        case 0x233448u: goto label_233448;
        case 0x23344cu: goto label_23344c;
        case 0x233450u: goto label_233450;
        case 0x233454u: goto label_233454;
        case 0x233458u: goto label_233458;
        case 0x23345cu: goto label_23345c;
        case 0x233460u: goto label_233460;
        case 0x233464u: goto label_233464;
        case 0x233468u: goto label_233468;
        case 0x23346cu: goto label_23346c;
        case 0x233470u: goto label_233470;
        case 0x233474u: goto label_233474;
        case 0x233478u: goto label_233478;
        case 0x23347cu: goto label_23347c;
        case 0x233480u: goto label_233480;
        case 0x233484u: goto label_233484;
        case 0x233488u: goto label_233488;
        case 0x23348cu: goto label_23348c;
        case 0x233490u: goto label_233490;
        case 0x233494u: goto label_233494;
        case 0x233498u: goto label_233498;
        case 0x23349cu: goto label_23349c;
        case 0x2334a0u: goto label_2334a0;
        case 0x2334a4u: goto label_2334a4;
        case 0x2334a8u: goto label_2334a8;
        case 0x2334acu: goto label_2334ac;
        case 0x2334b0u: goto label_2334b0;
        case 0x2334b4u: goto label_2334b4;
        case 0x2334b8u: goto label_2334b8;
        case 0x2334bcu: goto label_2334bc;
        case 0x2334c0u: goto label_2334c0;
        case 0x2334c4u: goto label_2334c4;
        case 0x2334c8u: goto label_2334c8;
        case 0x2334ccu: goto label_2334cc;
        case 0x2334d0u: goto label_2334d0;
        case 0x2334d4u: goto label_2334d4;
        case 0x2334d8u: goto label_2334d8;
        case 0x2334dcu: goto label_2334dc;
        case 0x2334e0u: goto label_2334e0;
        case 0x2334e4u: goto label_2334e4;
        case 0x2334e8u: goto label_2334e8;
        case 0x2334ecu: goto label_2334ec;
        case 0x2334f0u: goto label_2334f0;
        case 0x2334f4u: goto label_2334f4;
        case 0x2334f8u: goto label_2334f8;
        case 0x2334fcu: goto label_2334fc;
        case 0x233500u: goto label_233500;
        case 0x233504u: goto label_233504;
        case 0x233508u: goto label_233508;
        case 0x23350cu: goto label_23350c;
        case 0x233510u: goto label_233510;
        case 0x233514u: goto label_233514;
        case 0x233518u: goto label_233518;
        case 0x23351cu: goto label_23351c;
        case 0x233520u: goto label_233520;
        case 0x233524u: goto label_233524;
        case 0x233528u: goto label_233528;
        case 0x23352cu: goto label_23352c;
        case 0x233530u: goto label_233530;
        case 0x233534u: goto label_233534;
        case 0x233538u: goto label_233538;
        case 0x23353cu: goto label_23353c;
        case 0x233540u: goto label_233540;
        case 0x233544u: goto label_233544;
        case 0x233548u: goto label_233548;
        case 0x23354cu: goto label_23354c;
        case 0x233550u: goto label_233550;
        case 0x233554u: goto label_233554;
        case 0x233558u: goto label_233558;
        case 0x23355cu: goto label_23355c;
        case 0x233560u: goto label_233560;
        case 0x233564u: goto label_233564;
        case 0x233568u: goto label_233568;
        case 0x23356cu: goto label_23356c;
        case 0x233570u: goto label_233570;
        case 0x233574u: goto label_233574;
        case 0x233578u: goto label_233578;
        case 0x23357cu: goto label_23357c;
        case 0x233580u: goto label_233580;
        case 0x233584u: goto label_233584;
        case 0x233588u: goto label_233588;
        case 0x23358cu: goto label_23358c;
        case 0x233590u: goto label_233590;
        case 0x233594u: goto label_233594;
        case 0x233598u: goto label_233598;
        case 0x23359cu: goto label_23359c;
        case 0x2335a0u: goto label_2335a0;
        case 0x2335a4u: goto label_2335a4;
        case 0x2335a8u: goto label_2335a8;
        case 0x2335acu: goto label_2335ac;
        case 0x2335b0u: goto label_2335b0;
        case 0x2335b4u: goto label_2335b4;
        case 0x2335b8u: goto label_2335b8;
        case 0x2335bcu: goto label_2335bc;
        case 0x2335c0u: goto label_2335c0;
        case 0x2335c4u: goto label_2335c4;
        case 0x2335c8u: goto label_2335c8;
        case 0x2335ccu: goto label_2335cc;
        case 0x2335d0u: goto label_2335d0;
        case 0x2335d4u: goto label_2335d4;
        case 0x2335d8u: goto label_2335d8;
        case 0x2335dcu: goto label_2335dc;
        case 0x2335e0u: goto label_2335e0;
        case 0x2335e4u: goto label_2335e4;
        case 0x2335e8u: goto label_2335e8;
        case 0x2335ecu: goto label_2335ec;
        case 0x2335f0u: goto label_2335f0;
        case 0x2335f4u: goto label_2335f4;
        case 0x2335f8u: goto label_2335f8;
        case 0x2335fcu: goto label_2335fc;
        case 0x233600u: goto label_233600;
        case 0x233604u: goto label_233604;
        case 0x233608u: goto label_233608;
        case 0x23360cu: goto label_23360c;
        case 0x233610u: goto label_233610;
        case 0x233614u: goto label_233614;
        case 0x233618u: goto label_233618;
        case 0x23361cu: goto label_23361c;
        case 0x233620u: goto label_233620;
        case 0x233624u: goto label_233624;
        case 0x233628u: goto label_233628;
        case 0x23362cu: goto label_23362c;
        case 0x233630u: goto label_233630;
        case 0x233634u: goto label_233634;
        case 0x233638u: goto label_233638;
        case 0x23363cu: goto label_23363c;
        case 0x233640u: goto label_233640;
        case 0x233644u: goto label_233644;
        case 0x233648u: goto label_233648;
        case 0x23364cu: goto label_23364c;
        case 0x233650u: goto label_233650;
        case 0x233654u: goto label_233654;
        case 0x233658u: goto label_233658;
        case 0x23365cu: goto label_23365c;
        case 0x233660u: goto label_233660;
        case 0x233664u: goto label_233664;
        case 0x233668u: goto label_233668;
        case 0x23366cu: goto label_23366c;
        case 0x233670u: goto label_233670;
        case 0x233674u: goto label_233674;
        case 0x233678u: goto label_233678;
        case 0x23367cu: goto label_23367c;
        case 0x233680u: goto label_233680;
        case 0x233684u: goto label_233684;
        case 0x233688u: goto label_233688;
        case 0x23368cu: goto label_23368c;
        case 0x233690u: goto label_233690;
        case 0x233694u: goto label_233694;
        case 0x233698u: goto label_233698;
        case 0x23369cu: goto label_23369c;
        case 0x2336a0u: goto label_2336a0;
        case 0x2336a4u: goto label_2336a4;
        case 0x2336a8u: goto label_2336a8;
        case 0x2336acu: goto label_2336ac;
        case 0x2336b0u: goto label_2336b0;
        case 0x2336b4u: goto label_2336b4;
        case 0x2336b8u: goto label_2336b8;
        case 0x2336bcu: goto label_2336bc;
        case 0x2336c0u: goto label_2336c0;
        case 0x2336c4u: goto label_2336c4;
        case 0x2336c8u: goto label_2336c8;
        case 0x2336ccu: goto label_2336cc;
        case 0x2336d0u: goto label_2336d0;
        case 0x2336d4u: goto label_2336d4;
        case 0x2336d8u: goto label_2336d8;
        case 0x2336dcu: goto label_2336dc;
        case 0x2336e0u: goto label_2336e0;
        case 0x2336e4u: goto label_2336e4;
        case 0x2336e8u: goto label_2336e8;
        case 0x2336ecu: goto label_2336ec;
        case 0x2336f0u: goto label_2336f0;
        case 0x2336f4u: goto label_2336f4;
        case 0x2336f8u: goto label_2336f8;
        case 0x2336fcu: goto label_2336fc;
        case 0x233700u: goto label_233700;
        case 0x233704u: goto label_233704;
        case 0x233708u: goto label_233708;
        case 0x23370cu: goto label_23370c;
        case 0x233710u: goto label_233710;
        case 0x233714u: goto label_233714;
        case 0x233718u: goto label_233718;
        case 0x23371cu: goto label_23371c;
        case 0x233720u: goto label_233720;
        case 0x233724u: goto label_233724;
        case 0x233728u: goto label_233728;
        case 0x23372cu: goto label_23372c;
        case 0x233730u: goto label_233730;
        case 0x233734u: goto label_233734;
        case 0x233738u: goto label_233738;
        case 0x23373cu: goto label_23373c;
        case 0x233740u: goto label_233740;
        case 0x233744u: goto label_233744;
        case 0x233748u: goto label_233748;
        case 0x23374cu: goto label_23374c;
        case 0x233750u: goto label_233750;
        case 0x233754u: goto label_233754;
        case 0x233758u: goto label_233758;
        case 0x23375cu: goto label_23375c;
        case 0x233760u: goto label_233760;
        case 0x233764u: goto label_233764;
        case 0x233768u: goto label_233768;
        case 0x23376cu: goto label_23376c;
        case 0x233770u: goto label_233770;
        case 0x233774u: goto label_233774;
        case 0x233778u: goto label_233778;
        case 0x23377cu: goto label_23377c;
        case 0x233780u: goto label_233780;
        case 0x233784u: goto label_233784;
        case 0x233788u: goto label_233788;
        case 0x23378cu: goto label_23378c;
        case 0x233790u: goto label_233790;
        case 0x233794u: goto label_233794;
        case 0x233798u: goto label_233798;
        case 0x23379cu: goto label_23379c;
        case 0x2337a0u: goto label_2337a0;
        case 0x2337a4u: goto label_2337a4;
        case 0x2337a8u: goto label_2337a8;
        case 0x2337acu: goto label_2337ac;
        case 0x2337b0u: goto label_2337b0;
        case 0x2337b4u: goto label_2337b4;
        case 0x2337b8u: goto label_2337b8;
        case 0x2337bcu: goto label_2337bc;
        case 0x2337c0u: goto label_2337c0;
        case 0x2337c4u: goto label_2337c4;
        case 0x2337c8u: goto label_2337c8;
        case 0x2337ccu: goto label_2337cc;
        case 0x2337d0u: goto label_2337d0;
        case 0x2337d4u: goto label_2337d4;
        case 0x2337d8u: goto label_2337d8;
        case 0x2337dcu: goto label_2337dc;
        case 0x2337e0u: goto label_2337e0;
        case 0x2337e4u: goto label_2337e4;
        case 0x2337e8u: goto label_2337e8;
        case 0x2337ecu: goto label_2337ec;
        case 0x2337f0u: goto label_2337f0;
        case 0x2337f4u: goto label_2337f4;
        case 0x2337f8u: goto label_2337f8;
        case 0x2337fcu: goto label_2337fc;
        case 0x233800u: goto label_233800;
        case 0x233804u: goto label_233804;
        case 0x233808u: goto label_233808;
        case 0x23380cu: goto label_23380c;
        case 0x233810u: goto label_233810;
        case 0x233814u: goto label_233814;
        case 0x233818u: goto label_233818;
        case 0x23381cu: goto label_23381c;
        case 0x233820u: goto label_233820;
        case 0x233824u: goto label_233824;
        case 0x233828u: goto label_233828;
        case 0x23382cu: goto label_23382c;
        case 0x233830u: goto label_233830;
        case 0x233834u: goto label_233834;
        case 0x233838u: goto label_233838;
        case 0x23383cu: goto label_23383c;
        case 0x233840u: goto label_233840;
        case 0x233844u: goto label_233844;
        case 0x233848u: goto label_233848;
        case 0x23384cu: goto label_23384c;
        case 0x233850u: goto label_233850;
        case 0x233854u: goto label_233854;
        case 0x233858u: goto label_233858;
        case 0x23385cu: goto label_23385c;
        case 0x233860u: goto label_233860;
        case 0x233864u: goto label_233864;
        case 0x233868u: goto label_233868;
        case 0x23386cu: goto label_23386c;
        case 0x233870u: goto label_233870;
        case 0x233874u: goto label_233874;
        case 0x233878u: goto label_233878;
        case 0x23387cu: goto label_23387c;
        case 0x233880u: goto label_233880;
        case 0x233884u: goto label_233884;
        case 0x233888u: goto label_233888;
        case 0x23388cu: goto label_23388c;
        case 0x233890u: goto label_233890;
        case 0x233894u: goto label_233894;
        case 0x233898u: goto label_233898;
        case 0x23389cu: goto label_23389c;
        case 0x2338a0u: goto label_2338a0;
        case 0x2338a4u: goto label_2338a4;
        case 0x2338a8u: goto label_2338a8;
        case 0x2338acu: goto label_2338ac;
        case 0x2338b0u: goto label_2338b0;
        case 0x2338b4u: goto label_2338b4;
        case 0x2338b8u: goto label_2338b8;
        case 0x2338bcu: goto label_2338bc;
        case 0x2338c0u: goto label_2338c0;
        case 0x2338c4u: goto label_2338c4;
        case 0x2338c8u: goto label_2338c8;
        case 0x2338ccu: goto label_2338cc;
        case 0x2338d0u: goto label_2338d0;
        case 0x2338d4u: goto label_2338d4;
        case 0x2338d8u: goto label_2338d8;
        case 0x2338dcu: goto label_2338dc;
        case 0x2338e0u: goto label_2338e0;
        case 0x2338e4u: goto label_2338e4;
        case 0x2338e8u: goto label_2338e8;
        case 0x2338ecu: goto label_2338ec;
        case 0x2338f0u: goto label_2338f0;
        case 0x2338f4u: goto label_2338f4;
        case 0x2338f8u: goto label_2338f8;
        case 0x2338fcu: goto label_2338fc;
        case 0x233900u: goto label_233900;
        case 0x233904u: goto label_233904;
        case 0x233908u: goto label_233908;
        case 0x23390cu: goto label_23390c;
        case 0x233910u: goto label_233910;
        case 0x233914u: goto label_233914;
        case 0x233918u: goto label_233918;
        case 0x23391cu: goto label_23391c;
        case 0x233920u: goto label_233920;
        case 0x233924u: goto label_233924;
        case 0x233928u: goto label_233928;
        case 0x23392cu: goto label_23392c;
        case 0x233930u: goto label_233930;
        case 0x233934u: goto label_233934;
        case 0x233938u: goto label_233938;
        case 0x23393cu: goto label_23393c;
        case 0x233940u: goto label_233940;
        case 0x233944u: goto label_233944;
        case 0x233948u: goto label_233948;
        case 0x23394cu: goto label_23394c;
        case 0x233950u: goto label_233950;
        case 0x233954u: goto label_233954;
        case 0x233958u: goto label_233958;
        case 0x23395cu: goto label_23395c;
        case 0x233960u: goto label_233960;
        case 0x233964u: goto label_233964;
        case 0x233968u: goto label_233968;
        case 0x23396cu: goto label_23396c;
        case 0x233970u: goto label_233970;
        case 0x233974u: goto label_233974;
        case 0x233978u: goto label_233978;
        case 0x23397cu: goto label_23397c;
        case 0x233980u: goto label_233980;
        case 0x233984u: goto label_233984;
        case 0x233988u: goto label_233988;
        case 0x23398cu: goto label_23398c;
        case 0x233990u: goto label_233990;
        case 0x233994u: goto label_233994;
        default: break;
    }

    ctx->pc = 0x232ec0u;

label_232ec0:
    // 0x232ec0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x232ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_232ec4:
    // 0x232ec4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x232ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_232ec8:
    // 0x232ec8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x232ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_232ecc:
    // 0x232ecc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x232eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_232ed0:
    // 0x232ed0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x232ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_232ed4:
    // 0x232ed4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x232ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_232ed8:
    // 0x232ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_232edc:
    // 0x232edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232ee0:
    // 0x232ee0: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x232ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
label_232ee4:
    // 0x232ee4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x232ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_232ee8:
    // 0x232ee8: 0x24750080  addiu       $s5, $v1, 0x80
    ctx->pc = 0x232ee8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_232eec:
    // 0x232eec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x232eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232ef0:
    // 0x232ef0: 0x8c631210  lw          $v1, 0x1210($v1)
    ctx->pc = 0x232ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
label_232ef4:
    // 0x232ef4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x232ef4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_232ef8:
    // 0x232ef8: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x232ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_232efc:
    // 0x232efc: 0x24830fa0  addiu       $v1, $a0, 0xFA0
    ctx->pc = 0x232efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
label_232f00:
    // 0x232f00: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x232f00u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_232f04:
    // 0x232f04: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x232f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232f08:
    // 0x232f08: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x232f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_232f0c:
    // 0x232f0c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x232f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_232f10:
    // 0x232f10: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x232f10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_232f14:
    // 0x232f14: 0x10200293  beqz        $at, . + 4 + (0x293 << 2)
label_232f18:
    if (ctx->pc == 0x232F18u) {
        ctx->pc = 0x232F1Cu;
        goto label_232f1c;
    }
    ctx->pc = 0x232F14u;
    {
        const bool branch_taken_0x232f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f14) {
            ctx->pc = 0x233964u;
            goto label_233964;
        }
    }
    ctx->pc = 0x232F1Cu;
label_232f1c:
    // 0x232f1c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x232f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_232f20:
    // 0x232f20: 0x246411f0  addiu       $a0, $v1, 0x11F0
    ctx->pc = 0x232f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4592));
label_232f24:
    // 0x232f24: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x232f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_232f28:
    // 0x232f28: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x232f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_232f2c:
    // 0x232f2c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x232f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_232f30:
    // 0x232f30: 0xe00008  jr          $a3
label_232f34:
    if (ctx->pc == 0x232F34u) {
        ctx->pc = 0x232F38u;
        goto label_232f38;
    }
    ctx->pc = 0x232F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232F30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x232F38u;
label_232f38:
    // 0x232f38: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x232f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232f3c:
    // 0x232f3c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x232f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_232f40:
    // 0x232f40: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x232f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_232f44:
    // 0x232f44: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x232f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_232f48:
    // 0x232f48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x232f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_232f4c:
    // 0x232f4c: 0xc0965d0  jal         func_259740
label_232f50:
    if (ctx->pc == 0x232F50u) {
        ctx->pc = 0x232F54u;
        goto label_232f54;
    }
    ctx->pc = 0x232F4Cu;
    SET_GPR_U32(ctx, 31, 0x232F54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x232F4Cu, 0x232F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F54u;
label_232f54:
    // 0x232f54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x232f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232f58:
    // 0x232f58: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x232f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232f5c:
    // 0x232f5c: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x232f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_232f60:
    // 0x232f60: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x232f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_232f64:
    // 0x232f64: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232f68:
    // 0x232f68: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x232f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_232f6c:
    // 0x232f6c: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x232f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_232f70:
    // 0x232f70: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x232f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232f74:
    // 0x232f74: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x232f74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
label_232f78:
    // 0x232f78: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x232f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_232f7c:
    // 0x232f7c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232f80:
    // 0x232f80: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x232f80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_232f84:
    // 0x232f84: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x232f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232f88:
    // 0x232f88: 0xac8013fc  sw          $zero, 0x13FC($a0)
    ctx->pc = 0x232f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5116), GPR_U32(ctx, 0));
label_232f8c:
    // 0x232f8c: 0x241100f0  addiu       $s1, $zero, 0xF0
    ctx->pc = 0x232f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_232f90:
    // 0x232f90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232f94:
    // 0x232f94: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x232f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
label_232f98:
    // 0x232f98: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x232f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_232f9c:
    // 0x232f9c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x232f9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_232fa0:
    // 0x232fa0: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x232fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232fa4:
    // 0x232fa4: 0x84a2138c  lh          $v0, 0x138C($a1)
    ctx->pc = 0x232fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5004)));
label_232fa8:
    // 0x232fa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x232fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_232fac:
    // 0x232fac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232facu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_232fb0:
    // 0x232fb0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x232fb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_232fb4:
    // 0x232fb4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x232fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232fb8:
    // 0x232fb8: 0x84a2138c  lh          $v0, 0x138C($a1)
    ctx->pc = 0x232fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5004)));
label_232fbc:
    // 0x232fbc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x232fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_232fc0:
    // 0x232fc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232fc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_232fc4:
    // 0x232fc4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x232fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_232fc8:
    // 0x232fc8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x232fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_232fcc:
    // 0x232fcc: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x232fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_232fd0:
    // 0x232fd0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_232fd4:
    if (ctx->pc == 0x232FD4u) {
        ctx->pc = 0x232FD8u;
        goto label_232fd8;
    }
    ctx->pc = 0x232FD0u;
    {
        const bool branch_taken_0x232fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x232fd0) {
            ctx->pc = 0x232FDCu;
            goto label_232fdc;
        }
    }
    ctx->pc = 0x232FD8u;
label_232fd8:
    // 0x232fd8: 0x24110168  addiu       $s1, $zero, 0x168
    ctx->pc = 0x232fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_232fdc:
    // 0x232fdc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232fe0:
    // 0x232fe0: 0x844410a6  lh          $a0, 0x10A6($v0)
    ctx->pc = 0x232fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
label_232fe4:
    // 0x232fe4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x232fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_232fe8:
    // 0x232fe8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x232fe8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_232fec:
    // 0x232fec: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_232ff0:
    // 0x232ff0: 0x8444138c  lh          $a0, 0x138C($v0)
    ctx->pc = 0x232ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5004)));
label_232ff4:
    // 0x232ff4: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x232ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_232ff8:
    // 0x232ff8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232ff8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_232ffc:
    // 0x232ffc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x232ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_233000:
    // 0x233000: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x233000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_233004:
    // 0x233004: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_233008:
    if (ctx->pc == 0x233008u) {
        ctx->pc = 0x23300Cu;
        goto label_23300c;
    }
    ctx->pc = 0x233004u;
    {
        const bool branch_taken_0x233004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x233004) {
            ctx->pc = 0x233010u;
            goto label_233010;
        }
    }
    ctx->pc = 0x23300Cu;
label_23300c:
    // 0x23300c: 0x241101e0  addiu       $s1, $zero, 0x1E0
    ctx->pc = 0x23300cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_233010:
    // 0x233010: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233014:
    // 0x233014: 0x848510a6  lh          $a1, 0x10A6($a0)
    ctx->pc = 0x233014u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
label_233018:
    // 0x233018: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x233018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_23301c:
    // 0x23301c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23301cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_233020:
    // 0x233020: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233024:
    // 0x233024: 0x8444138c  lh          $a0, 0x138C($v0)
    ctx->pc = 0x233024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5004)));
label_233028:
    // 0x233028: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x233028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_23302c:
    // 0x23302c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x23302cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_233030:
    // 0x233030: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x233030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
label_233034:
    // 0x233034: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x233034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_233038:
    // 0x233038: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_23303c:
    if (ctx->pc == 0x23303Cu) {
        ctx->pc = 0x233040u;
        goto label_233040;
    }
    ctx->pc = 0x233038u;
    {
        const bool branch_taken_0x233038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x233038) {
            ctx->pc = 0x233044u;
            goto label_233044;
        }
    }
    ctx->pc = 0x233040u;
label_233040:
    // 0x233040: 0x241104b0  addiu       $s1, $zero, 0x4B0
    ctx->pc = 0x233040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_233044:
    // 0x233044: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233048:
    // 0x233048: 0x848510a6  lh          $a1, 0x10A6($a0)
    ctx->pc = 0x233048u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
label_23304c:
    // 0x23304c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x23304cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_233050:
    // 0x233050: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x233050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_233054:
    // 0x233054: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x233054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_233058:
    // 0x233058: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_23305c:
    if (ctx->pc == 0x23305Cu) {
        ctx->pc = 0x233060u;
        goto label_233060;
    }
    ctx->pc = 0x233058u;
    {
        const bool branch_taken_0x233058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x233058) {
            ctx->pc = 0x233064u;
            goto label_233064;
        }
    }
    ctx->pc = 0x233060u;
label_233060:
    // 0x233060: 0x24111770  addiu       $s1, $zero, 0x1770
    ctx->pc = 0x233060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_233064:
    // 0x233064: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x233064u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_233068:
    // 0x233068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23306c:
    // 0x23306c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_233070:
    // 0x233070: 0xc0576a4  jal         func_15DA90
label_233074:
    if (ctx->pc == 0x233074u) {
        ctx->pc = 0x233078u;
        goto label_233078;
    }
    ctx->pc = 0x233070u;
    SET_GPR_U32(ctx, 31, 0x233078u);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x233070u, 0x233078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233078u;
label_233078:
    // 0x233078: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x233078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23307c:
    // 0x23307c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x23307cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_233080:
    // 0x233080: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x233080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_233084:
    // 0x233084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233088:
    // 0x233088: 0x0  nop
    ctx->pc = 0x233088u;
    // NOP
label_23308c:
    // 0x23308c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x23308cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_233090:
    // 0x233090: 0xc058fec  jal         func_163FB0
label_233094:
    if (ctx->pc == 0x233094u) {
        ctx->pc = 0x233098u;
        goto label_233098;
    }
    ctx->pc = 0x233090u;
    SET_GPR_U32(ctx, 31, 0x233098u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x233090u, 0x233098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233098u;
label_233098:
    // 0x233098: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x233098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23309c:
    // 0x23309c: 0xe4a01290  swc1        $f0, 0x1290($a1)
    ctx->pc = 0x23309cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4752), bits); }
label_2330a0:
    // 0x2330a0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2330a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_2330a4:
    // 0x2330a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2330a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2330a8:
    // 0x2330a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2330a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2330ac:
    // 0x2330ac: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2330acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2330b0:
    // 0x2330b0: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x2330b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2330b4:
    // 0x2330b4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2330b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2330b8:
    // 0x2330b8: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x2330b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2330bc:
    // 0x2330bc: 0xc058f50  jal         func_163D40
label_2330c0:
    if (ctx->pc == 0x2330C0u) {
        ctx->pc = 0x2330C4u;
        goto label_2330c4;
    }
    ctx->pc = 0x2330BCu;
    SET_GPR_U32(ctx, 31, 0x2330C4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2330BCu, 0x2330C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330C4u;
label_2330c4:
    // 0x2330c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2330c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2330c8:
    // 0x2330c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2330c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2330cc:
    // 0x2330cc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2330ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2330d0:
    // 0x2330d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2330d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2330d4:
    // 0x2330d4: 0xc096b40  jal         func_25AD00
label_2330d8:
    if (ctx->pc == 0x2330D8u) {
        ctx->pc = 0x2330DCu;
        goto label_2330dc;
    }
    ctx->pc = 0x2330D4u;
    SET_GPR_U32(ctx, 31, 0x2330DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2330D4u, 0x2330DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330DCu;
label_2330dc:
    // 0x2330dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2330dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2330e0:
    // 0x2330e0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2330e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2330e4:
    // 0x2330e4: 0x94640a00  lhu         $a0, 0xA00($v1)
    ctx->pc = 0x2330e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
label_2330e8:
    // 0x2330e8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2330e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2330ec:
    // 0x2330ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2330f0:
    if (ctx->pc == 0x2330F0u) {
        ctx->pc = 0x2330F4u;
        goto label_2330f4;
    }
    ctx->pc = 0x2330ECu;
    {
        const bool branch_taken_0x2330ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2330ec) {
            ctx->pc = 0x23310Cu;
            goto label_23310c;
        }
    }
    ctx->pc = 0x2330F4u;
label_2330f4:
    // 0x2330f4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2330f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2330f8:
    // 0x2330f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2330f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2330fc:
    // 0x2330fc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2330fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_233100:
    // 0x233100: 0xc05cd58  jal         func_173560
label_233104:
    if (ctx->pc == 0x233104u) {
        ctx->pc = 0x233108u;
        goto label_233108;
    }
    ctx->pc = 0x233100u;
    SET_GPR_U32(ctx, 31, 0x233108u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x233100u, 0x233108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233108u;
label_233108:
    // 0x233108: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233108u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23310c:
    // 0x23310c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233110:
    // 0x233110: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x233110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_233114:
    // 0x233114: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x233114u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_233118:
    // 0x233118: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x233118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23311c:
    // 0x23311c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x23311cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_233120:
    // 0x233120: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x233120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_233124:
    // 0x233124: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233128:
    // 0x233128: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x233128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23312c:
    // 0x23312c: 0xc0573d8  jal         func_15CF60
label_233130:
    if (ctx->pc == 0x233130u) {
        ctx->pc = 0x233134u;
        goto label_233134;
    }
    ctx->pc = 0x23312Cu;
    SET_GPR_U32(ctx, 31, 0x233134u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x23312Cu, 0x233134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233134u;
label_233134:
    // 0x233134: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233134u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_233138:
    // 0x233138: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23313c:
    // 0x23313c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_233140:
    // 0x233140: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x233140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_233144:
    // 0x233144: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x233144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_233148:
    // 0x233148: 0xc040c80  jal         func_103200
label_23314c:
    if (ctx->pc == 0x23314Cu) {
        ctx->pc = 0x233150u;
        goto label_233150;
    }
    ctx->pc = 0x233148u;
    SET_GPR_U32(ctx, 31, 0x233150u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x233150u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x233150u) { return; }
    ctx->pc = 0x233150u;
label_233150:
    // 0x233150: 0x260612a0  addiu       $a2, $s0, 0x12A0
    ctx->pc = 0x233150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
label_233154:
    // 0x233154: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x233154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_233158:
    // 0x233158: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x233158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23315c:
    // 0x23315c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x23315cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_233160:
    // 0x233160: 0x260812a0  addiu       $t0, $s0, 0x12A0
    ctx->pc = 0x233160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
label_233164:
    // 0x233164: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x233164u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_233168:
    // 0x233168: 0xc040c7a  jal         func_1031E8
label_23316c:
    if (ctx->pc == 0x23316Cu) {
        ctx->pc = 0x233170u;
        goto label_233170;
    }
    ctx->pc = 0x233168u;
    SET_GPR_U32(ctx, 31, 0x233170u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x233170u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x233170u) { return; }
    ctx->pc = 0x233170u;
label_233170:
    // 0x233170: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233174:
    // 0x233174: 0xc0974dc  jal         func_25D370
label_233178:
    if (ctx->pc == 0x233178u) {
        ctx->pc = 0x23317Cu;
        goto label_23317c;
    }
    ctx->pc = 0x233174u;
    SET_GPR_U32(ctx, 31, 0x23317Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x233174u, 0x23317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23317Cu;
label_23317c:
    // 0x23317c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233180:
    // 0x233180: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x233180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_233184:
    // 0x233184: 0x106001f7  beqz        $v1, . + 4 + (0x1F7 << 2)
label_233188:
    if (ctx->pc == 0x233188u) {
        ctx->pc = 0x23318Cu;
        goto label_23318c;
    }
    ctx->pc = 0x233184u;
    {
        const bool branch_taken_0x233184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233184) {
            ctx->pc = 0x233964u;
            goto label_233964;
        }
    }
    ctx->pc = 0x23318Cu;
label_23318c:
    // 0x23318c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233190:
    // 0x233190: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x233190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_233194:
    // 0x233194: 0x24060502  addiu       $a2, $zero, 0x502
    ctx->pc = 0x233194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
label_233198:
    // 0x233198: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x233198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_23319c:
    // 0x23319c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23319cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2331a0:
    // 0x2331a0: 0xc0965d0  jal         func_259740
label_2331a4:
    if (ctx->pc == 0x2331A4u) {
        ctx->pc = 0x2331A8u;
        goto label_2331a8;
    }
    ctx->pc = 0x2331A0u;
    SET_GPR_U32(ctx, 31, 0x2331A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2331A0u, 0x2331A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331A8u;
label_2331a8:
    // 0x2331a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2331a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2331ac:
    // 0x2331ac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2331acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2331b0:
    // 0x2331b0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2331b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2331b4:
    // 0x2331b4: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_2331b8:
    if (ctx->pc == 0x2331B8u) {
        ctx->pc = 0x2331BCu;
        goto label_2331bc;
    }
    ctx->pc = 0x2331B4u;
    {
        const bool branch_taken_0x2331b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2331b4) {
            ctx->pc = 0x233964u;
            goto label_233964;
        }
    }
    ctx->pc = 0x2331BCu;
label_2331bc:
    // 0x2331bc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2331bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2331c0:
    // 0x2331c0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2331c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2331c4:
    // 0x2331c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2331c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2331c8:
    // 0x2331c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2331c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2331cc:
    // 0x2331cc: 0x0  nop
    ctx->pc = 0x2331ccu;
    // NOP
label_2331d0:
    // 0x2331d0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2331d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2331d4:
    // 0x2331d4: 0xc058fec  jal         func_163FB0
label_2331d8:
    if (ctx->pc == 0x2331D8u) {
        ctx->pc = 0x2331DCu;
        goto label_2331dc;
    }
    ctx->pc = 0x2331D4u;
    SET_GPR_U32(ctx, 31, 0x2331DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2331D4u, 0x2331DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331DCu;
label_2331dc:
    // 0x2331dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2331dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2331e0:
    // 0x2331e0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2331e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2331e4:
    // 0x2331e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2331e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2331e8:
    // 0x2331e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2331e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2331ec:
    // 0x2331ec: 0xc096b40  jal         func_25AD00
label_2331f0:
    if (ctx->pc == 0x2331F0u) {
        ctx->pc = 0x2331F4u;
        goto label_2331f4;
    }
    ctx->pc = 0x2331ECu;
    SET_GPR_U32(ctx, 31, 0x2331F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2331ECu, 0x2331F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331F4u;
label_2331f4:
    // 0x2331f4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2331f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2331f8:
    // 0x2331f8: 0x94440a00  lhu         $a0, 0xA00($v0)
    ctx->pc = 0x2331f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
label_2331fc:
    // 0x2331fc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2331fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_233200:
    // 0x233200: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_233204:
    if (ctx->pc == 0x233204u) {
        ctx->pc = 0x233208u;
        goto label_233208;
    }
    ctx->pc = 0x233200u;
    {
        const bool branch_taken_0x233200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x233200) {
            ctx->pc = 0x23321Cu;
            goto label_23321c;
        }
    }
    ctx->pc = 0x233208u;
label_233208:
    // 0x233208: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23320c:
    // 0x23320c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233210:
    // 0x233210: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x233210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_233214:
    // 0x233214: 0xc05cd58  jal         func_173560
label_233218:
    if (ctx->pc == 0x233218u) {
        ctx->pc = 0x23321Cu;
        goto label_23321c;
    }
    ctx->pc = 0x233214u;
    SET_GPR_U32(ctx, 31, 0x23321Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x233214u, 0x23321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23321Cu;
label_23321c:
    // 0x23321c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23321cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_233220:
    // 0x233220: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233224:
    // 0x233224: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x233224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_233228:
    // 0x233228: 0xc0573d8  jal         func_15CF60
label_23322c:
    if (ctx->pc == 0x23322Cu) {
        ctx->pc = 0x233230u;
        goto label_233230;
    }
    ctx->pc = 0x233228u;
    SET_GPR_U32(ctx, 31, 0x233230u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x233228u, 0x233230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233230u;
label_233230:
    // 0x233230: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x233230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233234:
    // 0x233234: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x233234u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_233238:
    // 0x233238: 0xc0974dc  jal         func_25D370
label_23323c:
    if (ctx->pc == 0x23323Cu) {
        ctx->pc = 0x233240u;
        goto label_233240;
    }
    ctx->pc = 0x233238u;
    SET_GPR_U32(ctx, 31, 0x233240u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x233238u, 0x233240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233240u;
label_233240:
    // 0x233240: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x233240u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_233244:
    // 0x233244: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x233244u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_233248:
    // 0x233248: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23324c:
    // 0x23324c: 0x15030047  bne         $t0, $v1, . + 4 + (0x47 << 2)
label_233250:
    if (ctx->pc == 0x233250u) {
        ctx->pc = 0x233254u;
        goto label_233254;
    }
    ctx->pc = 0x23324Cu;
    {
        const bool branch_taken_0x23324c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x23324c) {
            ctx->pc = 0x23336Cu;
            goto label_23336c;
        }
    }
    ctx->pc = 0x233254u;
label_233254:
    // 0x233254: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233258:
    // 0x233258: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x233258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
label_23325c:
    // 0x23325c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23325cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_233260:
    // 0x233260: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x233260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_233264:
    // 0x233264: 0x18600041  blez        $v1, . + 4 + (0x41 << 2)
label_233268:
    if (ctx->pc == 0x233268u) {
        ctx->pc = 0x23326Cu;
        goto label_23326c;
    }
    ctx->pc = 0x233264u;
    {
        const bool branch_taken_0x233264 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x233264) {
            ctx->pc = 0x23336Cu;
            goto label_23336c;
        }
    }
    ctx->pc = 0x23326Cu;
label_23326c:
    // 0x23326c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x23326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
label_233270:
    // 0x233270: 0x84630096  lh          $v1, 0x96($v1)
    ctx->pc = 0x233270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
label_233274:
    // 0x233274: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_233278:
    if (ctx->pc == 0x233278u) {
        ctx->pc = 0x23327Cu;
        goto label_23327c;
    }
    ctx->pc = 0x233274u;
    {
        const bool branch_taken_0x233274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233274) {
            ctx->pc = 0x23336Cu;
            goto label_23336c;
        }
    }
    ctx->pc = 0x23327Cu;
label_23327c:
    // 0x23327c: 0x8fb10098  lw          $s1, 0x98($sp)
    ctx->pc = 0x23327cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233280:
    // 0x233280: 0x862510a6  lh          $a1, 0x10A6($s1)
    ctx->pc = 0x233280u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
label_233284:
    // 0x233284: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x233284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_233288:
    // 0x233288: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x233288u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_23328c:
    // 0x23328c: 0x1cc00008  bgtz        $a2, . + 4 + (0x8 << 2)
label_233290:
    if (ctx->pc == 0x233290u) {
        ctx->pc = 0x233294u;
        goto label_233294;
    }
    ctx->pc = 0x23328Cu;
    {
        const bool branch_taken_0x23328c = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x23328c) {
            ctx->pc = 0x2332B0u;
            goto label_2332b0;
        }
    }
    ctx->pc = 0x233294u;
label_233294:
    // 0x233294: 0x24111770  addiu       $s1, $zero, 0x1770
    ctx->pc = 0x233294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_233298:
    // 0x233298: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x233298u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_23329c:
    // 0x23329c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23329cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2332a0:
    // 0x2332a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2332a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2332a4:
    // 0x2332a4: 0xc0576a4  jal         func_15DA90
label_2332a8:
    if (ctx->pc == 0x2332A8u) {
        ctx->pc = 0x2332ACu;
        goto label_2332ac;
    }
    ctx->pc = 0x2332A4u;
    SET_GPR_U32(ctx, 31, 0x2332ACu);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x2332A4u, 0x2332ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332ACu;
label_2332ac:
    // 0x2332ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2332acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2332b0:
    // 0x2332b0: 0xc0576b8  jal         func_15DAE0
label_2332b4:
    if (ctx->pc == 0x2332B4u) {
        ctx->pc = 0x2332B8u;
        goto label_2332b8;
    }
    ctx->pc = 0x2332B0u;
    SET_GPR_U32(ctx, 31, 0x2332B8u);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x2332B0u, 0x2332B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332B8u;
label_2332b8:
    // 0x2332b8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2332b8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2332bc:
    // 0x2332bc: 0x3a630001  xori        $v1, $s3, 0x1
    ctx->pc = 0x2332bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_2332c0:
    // 0x2332c0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2332c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2332c4:
    // 0x2332c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2332c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2332c8:
    // 0x2332c8: 0x16630028  bne         $s3, $v1, . + 4 + (0x28 << 2)
label_2332cc:
    if (ctx->pc == 0x2332CCu) {
        ctx->pc = 0x2332D0u;
        goto label_2332d0;
    }
    ctx->pc = 0x2332C8u;
    {
        const bool branch_taken_0x2332c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x2332c8) {
            ctx->pc = 0x23336Cu;
            goto label_23336c;
        }
    }
    ctx->pc = 0x2332D0u;
label_2332d0:
    // 0x2332d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2332d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2332d4:
    // 0x2332d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2332d8:
    // 0x2332d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2332d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2332dc:
    // 0x2332dc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2332dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2332e0:
    // 0x2332e0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2332e4:
    // 0x2332e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2332e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2332e8:
    // 0x2332e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2332ec:
    // 0x2332ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2332ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2332f0:
    // 0x2332f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2332f4:
    // 0x2332f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2332f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2332f8:
    // 0x2332f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2332fc:
    // 0x2332fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2332fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_233300:
    // 0x233300: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x233300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_233304:
    // 0x233304: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233308:
    // 0x233308: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x233308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_23330c:
    // 0x23330c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x23330cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_233310:
    // 0x233310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233314:
    // 0x233314: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233318:
    // 0x233318: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x233318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_23331c:
    // 0x23331c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x23331cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_233320:
    // 0x233320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233324:
    // 0x233324: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233328:
    // 0x233328: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x233328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_23332c:
    // 0x23332c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_233330:
    // 0x233330: 0x26830150  addiu       $v1, $s4, 0x150
    ctx->pc = 0x233330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
label_233334:
    // 0x233334: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x233334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
label_233338:
    // 0x233338: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23333c:
    // 0x23333c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23333cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_233340:
    // 0x233340: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x233340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_233344:
    // 0x233344: 0x2472ec70  addiu       $s2, $v1, -0x1390
    ctx->pc = 0x233344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_233348:
    // 0x233348: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x233348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_23334c:
    // 0x23334c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23334cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233350:
    // 0x233350: 0x0  nop
    ctx->pc = 0x233350u;
    // NOP
label_233354:
    // 0x233354: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x233354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
label_233358:
    // 0x233358: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x233358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_23335c:
    // 0x23335c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_233360:
    // 0x233360: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x233360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_233364:
    // 0x233364: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x233364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_233368:
    // 0x233368: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x233368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
label_23336c:
    // 0x23336c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233370:
    // 0x233370: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x233370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
label_233374:
    // 0x233374: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x233374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_233378:
    // 0x233378: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x233378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_23337c:
    // 0x23337c: 0x14830179  bne         $a0, $v1, . + 4 + (0x179 << 2)
label_233380:
    if (ctx->pc == 0x233380u) {
        ctx->pc = 0x233384u;
        goto label_233384;
    }
    ctx->pc = 0x23337Cu;
    {
        const bool branch_taken_0x23337c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23337c) {
            ctx->pc = 0x233964u;
            goto label_233964;
        }
    }
    ctx->pc = 0x233384u;
label_233384:
    // 0x233384: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x233384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_233388:
    // 0x233388: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23338c:
    // 0x23338c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x23338cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_233390:
    // 0x233390: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x233390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_233394:
    // 0x233394: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x233394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_233398:
    // 0x233398: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x233398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23339c:
    // 0x23339c: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x23339cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
label_2333a0:
    // 0x2333a0: 0x10000170  b           . + 4 + (0x170 << 2)
label_2333a4:
    if (ctx->pc == 0x2333A4u) {
        ctx->pc = 0x2333A8u;
        goto label_2333a8;
    }
    ctx->pc = 0x2333A0u;
    {
        const bool branch_taken_0x2333a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2333a0) {
            ctx->pc = 0x233964u;
            goto label_233964;
        }
    }
    ctx->pc = 0x2333A8u;
label_2333a8:
    // 0x2333a8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2333ac:
    // 0x2333ac: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x2333acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_2333b0:
    // 0x2333b0: 0x24060501  addiu       $a2, $zero, 0x501
    ctx->pc = 0x2333b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
label_2333b4:
    // 0x2333b4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2333b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_2333b8:
    // 0x2333b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2333b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2333bc:
    // 0x2333bc: 0xc0965d0  jal         func_259740
label_2333c0:
    if (ctx->pc == 0x2333C0u) {
        ctx->pc = 0x2333C4u;
        goto label_2333c4;
    }
    ctx->pc = 0x2333BCu;
    SET_GPR_U32(ctx, 31, 0x2333C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2333BCu, 0x2333C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333C4u;
label_2333c4:
    // 0x2333c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2333c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2333c8:
    // 0x2333c8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2333c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2333cc:
    // 0x2333cc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2333ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2333d0:
    // 0x2333d0: 0xa600127a  sh          $zero, 0x127A($s0)
    ctx->pc = 0x2333d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2333d4:
    // 0x2333d4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2333d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2333d8:
    // 0x2333d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2333d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2333dc:
    // 0x2333dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2333dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2333e0:
    // 0x2333e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2333e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2333e4:
    // 0x2333e4: 0x0  nop
    ctx->pc = 0x2333e4u;
    // NOP
label_2333e8:
    // 0x2333e8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2333e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2333ec:
    // 0x2333ec: 0xc058fec  jal         func_163FB0
label_2333f0:
    if (ctx->pc == 0x2333F0u) {
        ctx->pc = 0x2333F4u;
        goto label_2333f4;
    }
    ctx->pc = 0x2333ECu;
    SET_GPR_U32(ctx, 31, 0x2333F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2333ECu, 0x2333F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333F4u;
label_2333f4:
    // 0x2333f4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2333f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2333f8:
    // 0x2333f8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2333f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2333fc:
    // 0x2333fc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2333fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233400:
    // 0x233400: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x233400u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_233404:
    // 0x233404: 0xc096b40  jal         func_25AD00
label_233408:
    if (ctx->pc == 0x233408u) {
        ctx->pc = 0x23340Cu;
        goto label_23340c;
    }
    ctx->pc = 0x233404u;
    SET_GPR_U32(ctx, 31, 0x23340Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x233404u, 0x23340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23340Cu;
label_23340c:
    // 0x23340c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233410:
    // 0x233410: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x233410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
label_233414:
    // 0x233414: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x233414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_233418:
    // 0x233418: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23341c:
    if (ctx->pc == 0x23341Cu) {
        ctx->pc = 0x233420u;
        goto label_233420;
    }
    ctx->pc = 0x233418u;
    {
        const bool branch_taken_0x233418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233418) {
            ctx->pc = 0x233434u;
            goto label_233434;
        }
    }
    ctx->pc = 0x233420u;
label_233420:
    // 0x233420: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233424:
    // 0x233424: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233428:
    // 0x233428: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x233428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23342c:
    // 0x23342c: 0xc05cd58  jal         func_173560
label_233430:
    if (ctx->pc == 0x233430u) {
        ctx->pc = 0x233434u;
        goto label_233434;
    }
    ctx->pc = 0x23342Cu;
    SET_GPR_U32(ctx, 31, 0x233434u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x23342Cu, 0x233434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233434u;
label_233434:
    // 0x233434: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x233434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_233438:
    // 0x233438: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23343c:
    // 0x23343c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_233440:
    // 0x233440: 0xc0573d8  jal         func_15CF60
label_233444:
    if (ctx->pc == 0x233444u) {
        ctx->pc = 0x233448u;
        goto label_233448;
    }
    ctx->pc = 0x233440u;
    SET_GPR_U32(ctx, 31, 0x233448u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x233440u, 0x233448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233448u;
label_233448:
    // 0x233448: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23344c:
    // 0x23344c: 0xc0974dc  jal         func_25D370
label_233450:
    if (ctx->pc == 0x233450u) {
        ctx->pc = 0x233454u;
        goto label_233454;
    }
    ctx->pc = 0x23344Cu;
    SET_GPR_U32(ctx, 31, 0x233454u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23344Cu, 0x233454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233454u;
label_233454:
    // 0x233454: 0x920309db  lbu         $v1, 0x9DB($s0)
    ctx->pc = 0x233454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2523)));
label_233458:
    // 0x233458: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x233458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_23345c:
    // 0x23345c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23345cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_233460:
    // 0x233460: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
label_233464:
    if (ctx->pc == 0x233464u) {
        ctx->pc = 0x233468u;
        goto label_233468;
    }
    ctx->pc = 0x233460u;
    {
        const bool branch_taken_0x233460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233460) {
            ctx->pc = 0x233764u;
            goto label_233764;
        }
    }
    ctx->pc = 0x233468u;
label_233468:
    // 0x233468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23346c:
    // 0x23346c: 0x0  nop
    ctx->pc = 0x23346cu;
    // NOP
label_233470:
    // 0x233470: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x233470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_233474:
    // 0x233474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233478:
    // 0x233478: 0x0  nop
    ctx->pc = 0x233478u;
    // NOP
label_23347c:
    // 0x23347c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x23347cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_233480:
    // 0x233480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233484:
    // 0x233484: 0x0  nop
    ctx->pc = 0x233484u;
    // NOP
label_233488:
    // 0x233488: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x233488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_23348c:
    // 0x23348c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_233490:
    // 0x233490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233494:
    // 0x233494: 0x0  nop
    ctx->pc = 0x233494u;
    // NOP
label_233498:
    // 0x233498: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x233498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_23349c:
    // 0x23349c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2334a0:
    // 0x2334a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2334a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2334a4:
    // 0x2334a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2334a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2334a8:
    // 0x2334a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2334a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2334ac:
    // 0x2334ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2334acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2334b0:
    // 0x2334b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2334b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2334b4:
    // 0x2334b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2334b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2334b8:
    // 0x2334b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2334b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2334bc:
    // 0x2334bc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x2334bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_2334c0:
    // 0x2334c0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2334c4:
    // 0x2334c4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2334c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2334c8:
    // 0x2334c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2334c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2334cc:
    // 0x2334cc: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2334ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2334d0:
    // 0x2334d0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2334d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2334d4:
    // 0x2334d4: 0xc06371c  jal         func_18DC70
label_2334d8:
    if (ctx->pc == 0x2334D8u) {
        ctx->pc = 0x2334DCu;
        goto label_2334dc;
    }
    ctx->pc = 0x2334D4u;
    SET_GPR_U32(ctx, 31, 0x2334DCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2334D4u, 0x2334DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334DCu;
label_2334dc:
    // 0x2334dc: 0xc067694  jal         func_19DA50
label_2334e0:
    if (ctx->pc == 0x2334E0u) {
        ctx->pc = 0x2334E4u;
        goto label_2334e4;
    }
    ctx->pc = 0x2334DCu;
    SET_GPR_U32(ctx, 31, 0x2334E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2334DCu, 0x2334E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334E4u;
label_2334e4:
    // 0x2334e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2334e8:
    if (ctx->pc == 0x2334E8u) {
        ctx->pc = 0x2334ECu;
        goto label_2334ec;
    }
    ctx->pc = 0x2334E4u;
    {
        const bool branch_taken_0x2334e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2334e4) {
            ctx->pc = 0x233500u;
            goto label_233500;
        }
    }
    ctx->pc = 0x2334ECu;
label_2334ec:
    // 0x2334ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2334ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2334f0:
    // 0x2334f0: 0x0  nop
    ctx->pc = 0x2334f0u;
    // NOP
label_2334f4:
    // 0x2334f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2334f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2334f8:
    // 0x2334f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2334fc:
    if (ctx->pc == 0x2334FCu) {
        ctx->pc = 0x233500u;
        goto label_233500;
    }
    ctx->pc = 0x2334F8u;
    {
        const bool branch_taken_0x2334f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2334f8) {
            ctx->pc = 0x23351Cu;
            goto label_23351c;
        }
    }
    ctx->pc = 0x233500u;
label_233500:
    // 0x233500: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x233500u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_233504:
    // 0x233504: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x233504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_233508:
    // 0x233508: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x233508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23350c:
    // 0x23350c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23350cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233510:
    // 0x233510: 0x0  nop
    ctx->pc = 0x233510u;
    // NOP
label_233514:
    // 0x233514: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x233514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_233518:
    // 0x233518: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x233518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23351c:
    // 0x23351c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x23351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233520:
    // 0x233520: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x233520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_233524:
    // 0x233524: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x233524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_233528:
    // 0x233528: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23352c:
    // 0x23352c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23352cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_233530:
    // 0x233530: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x233530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_233534:
    // 0x233534: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x233534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_233538:
    // 0x233538: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x233538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23353c:
    // 0x23353c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_233540:
    // 0x233540: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x233540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_233544:
    // 0x233544: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_233548:
    // 0x233548: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x233548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_23354c:
    // 0x23354c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233550:
    // 0x233550: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x233550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_233554:
    // 0x233554: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x233554u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_233558:
    // 0x233558: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x233558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_23355c:
    // 0x23355c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23355cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_233560:
    // 0x233560: 0xc06371c  jal         func_18DC70
label_233564:
    if (ctx->pc == 0x233564u) {
        ctx->pc = 0x233568u;
        goto label_233568;
    }
    ctx->pc = 0x233560u;
    SET_GPR_U32(ctx, 31, 0x233568u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x233560u, 0x233568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233568u;
label_233568:
    // 0x233568: 0xc067694  jal         func_19DA50
label_23356c:
    if (ctx->pc == 0x23356Cu) {
        ctx->pc = 0x233570u;
        goto label_233570;
    }
    ctx->pc = 0x233568u;
    SET_GPR_U32(ctx, 31, 0x233570u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x233568u, 0x233570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233570u;
label_233570:
    // 0x233570: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233570u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_233574:
    // 0x233574: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_233578:
    if (ctx->pc == 0x233578u) {
        ctx->pc = 0x23357Cu;
        goto label_23357c;
    }
    ctx->pc = 0x233574u;
    {
        const bool branch_taken_0x233574 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x233574) {
            ctx->pc = 0x233590u;
            goto label_233590;
        }
    }
    ctx->pc = 0x23357Cu;
label_23357c:
    // 0x23357c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23357cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233580:
    // 0x233580: 0x0  nop
    ctx->pc = 0x233580u;
    // NOP
label_233584:
    // 0x233584: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x233584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_233588:
    // 0x233588: 0x10000008  b           . + 4 + (0x8 << 2)
label_23358c:
    if (ctx->pc == 0x23358Cu) {
        ctx->pc = 0x233590u;
        goto label_233590;
    }
    ctx->pc = 0x233588u;
    {
        const bool branch_taken_0x233588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233588) {
            ctx->pc = 0x2335ACu;
            goto label_2335ac;
        }
    }
    ctx->pc = 0x233590u;
label_233590:
    // 0x233590: 0x3a842  srl         $s5, $v1, 1
    ctx->pc = 0x233590u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_233594:
    // 0x233594: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x233594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_233598:
    // 0x233598: 0x2a3a825  or          $s5, $s5, $v1
    ctx->pc = 0x233598u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
label_23359c:
    // 0x23359c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x23359cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2335a0:
    // 0x2335a0: 0x0  nop
    ctx->pc = 0x2335a0u;
    // NOP
label_2335a4:
    // 0x2335a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2335a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2335a8:
    // 0x2335a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2335a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2335ac:
    // 0x2335ac: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2335acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2335b0:
    // 0x2335b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2335b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2335b4:
    // 0x2335b4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2335b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2335b8:
    // 0x2335b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2335b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2335bc:
    // 0x2335bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2335bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_2335c0:
    // 0x2335c0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2335c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2335c4:
    // 0x2335c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2335c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2335c8:
    // 0x2335c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2335c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2335cc:
    // 0x2335cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2335ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2335d0:
    // 0x2335d0: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x2335d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2335d4:
    // 0x2335d4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2335d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_2335d8:
    // 0x2335d8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2335d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_2335dc:
    // 0x2335dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2335dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2335e0:
    // 0x2335e0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2335e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2335e4:
    // 0x2335e4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2335e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2335e8:
    // 0x2335e8: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x2335e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2335ec:
    // 0x2335ec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2335ecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2335f0:
    // 0x2335f0: 0xc06371c  jal         func_18DC70
label_2335f4:
    if (ctx->pc == 0x2335F4u) {
        ctx->pc = 0x2335F8u;
        goto label_2335f8;
    }
    ctx->pc = 0x2335F0u;
    SET_GPR_U32(ctx, 31, 0x2335F8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2335F0u, 0x2335F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335F8u;
label_2335f8:
    // 0x2335f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2335f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2335fc:
    // 0x2335fc: 0x8605127a  lh          $a1, 0x127A($s0)
    ctx->pc = 0x2335fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4730)));
label_233600:
    // 0x233600: 0x14a00058  bnez        $a1, . + 4 + (0x58 << 2)
label_233604:
    if (ctx->pc == 0x233604u) {
        ctx->pc = 0x233608u;
        goto label_233608;
    }
    ctx->pc = 0x233600u;
    {
        const bool branch_taken_0x233600 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x233600) {
            ctx->pc = 0x233764u;
            goto label_233764;
        }
    }
    ctx->pc = 0x233608u;
label_233608:
    // 0x233608: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23360c:
    // 0x23360c: 0xa606127a  sh          $a2, 0x127A($s0)
    ctx->pc = 0x23360cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 6));
label_233610:
    // 0x233610: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x233610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
label_233614:
    // 0x233614: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x233614u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_233618:
    // 0x233618: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x233618u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
label_23361c:
    // 0x23361c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x23361cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_233620:
    // 0x233620: 0xc0684d8  jal         func_1A1360
label_233624:
    if (ctx->pc == 0x233624u) {
        ctx->pc = 0x233628u;
        goto label_233628;
    }
    ctx->pc = 0x233620u;
    SET_GPR_U32(ctx, 31, 0x233628u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233620u, 0x233628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233628u;
label_233628:
    // 0x233628: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x233628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_23362c:
    // 0x23362c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x23362cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_233630:
    // 0x233630: 0x3465000e  ori         $a1, $v1, 0xE
    ctx->pc = 0x233630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14);
label_233634:
    // 0x233634: 0xc0684d8  jal         func_1A1360
label_233638:
    if (ctx->pc == 0x233638u) {
        ctx->pc = 0x23363Cu;
        goto label_23363c;
    }
    ctx->pc = 0x233634u;
    SET_GPR_U32(ctx, 31, 0x23363Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233634u, 0x23363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23363Cu;
label_23363c:
    // 0x23363c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23363cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_233640:
    // 0x233640: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x233640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_233644:
    // 0x233644: 0x3465001c  ori         $a1, $v1, 0x1C
    ctx->pc = 0x233644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
label_233648:
    // 0x233648: 0xc0684d8  jal         func_1A1360
label_23364c:
    if (ctx->pc == 0x23364Cu) {
        ctx->pc = 0x233650u;
        goto label_233650;
    }
    ctx->pc = 0x233648u;
    SET_GPR_U32(ctx, 31, 0x233650u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233648u, 0x233650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233650u;
label_233650:
    // 0x233650: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x233650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_233654:
    // 0x233654: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x233654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_233658:
    // 0x233658: 0x34510027  ori         $s1, $v0, 0x27
    ctx->pc = 0x233658u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
label_23365c:
    // 0x23365c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x23365cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_233660:
    // 0x233660: 0xc0684d8  jal         func_1A1360
label_233664:
    if (ctx->pc == 0x233664u) {
        ctx->pc = 0x233668u;
        goto label_233668;
    }
    ctx->pc = 0x233660u;
    SET_GPR_U32(ctx, 31, 0x233668u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233660u, 0x233668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233668u;
label_233668:
    // 0x233668: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x233668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_23366c:
    // 0x23366c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x23366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_233670:
    // 0x233670: 0x34450035  ori         $a1, $v0, 0x35
    ctx->pc = 0x233670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
label_233674:
    // 0x233674: 0xc0684d8  jal         func_1A1360
label_233678:
    if (ctx->pc == 0x233678u) {
        ctx->pc = 0x23367Cu;
        goto label_23367c;
    }
    ctx->pc = 0x233674u;
    SET_GPR_U32(ctx, 31, 0x23367Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233674u, 0x23367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23367Cu;
label_23367c:
    // 0x23367c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x23367cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_233680:
    // 0x233680: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x233680u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_233684:
    // 0x233684: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x233684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_233688:
    // 0x233688: 0x34450041  ori         $a1, $v0, 0x41
    ctx->pc = 0x233688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
label_23368c:
    // 0x23368c: 0xc0684d8  jal         func_1A1360
label_233690:
    if (ctx->pc == 0x233690u) {
        ctx->pc = 0x233694u;
        goto label_233694;
    }
    ctx->pc = 0x23368Cu;
    SET_GPR_U32(ctx, 31, 0x233694u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23368Cu, 0x233694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233694u;
label_233694:
    // 0x233694: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x233694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_233698:
    // 0x233698: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x233698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23369c:
    // 0x23369c: 0x3c11000f  lui         $s1, 0xF
    ctx->pc = 0x23369cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)15 << 16));
label_2336a0:
    // 0x2336a0: 0x36250050  ori         $a1, $s1, 0x50
    ctx->pc = 0x2336a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)80);
label_2336a4:
    // 0x2336a4: 0xc0684d8  jal         func_1A1360
label_2336a8:
    if (ctx->pc == 0x2336A8u) {
        ctx->pc = 0x2336ACu;
        goto label_2336ac;
    }
    ctx->pc = 0x2336A4u;
    SET_GPR_U32(ctx, 31, 0x2336ACu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336A4u, 0x2336ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336ACu;
label_2336ac:
    // 0x2336ac: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2336acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_2336b0:
    // 0x2336b0: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x2336b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_2336b4:
    // 0x2336b4: 0xc0684d8  jal         func_1A1360
label_2336b8:
    if (ctx->pc == 0x2336B8u) {
        ctx->pc = 0x2336BCu;
        goto label_2336bc;
    }
    ctx->pc = 0x2336B4u;
    SET_GPR_U32(ctx, 31, 0x2336BCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336B4u, 0x2336BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336BCu;
label_2336bc:
    // 0x2336bc: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2336bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_2336c0:
    // 0x2336c0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_2336c4:
    // 0x2336c4: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x2336c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
label_2336c8:
    // 0x2336c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2336c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2336cc:
    // 0x2336cc: 0xc0684d8  jal         func_1A1360
label_2336d0:
    if (ctx->pc == 0x2336D0u) {
        ctx->pc = 0x2336D4u;
        goto label_2336d4;
    }
    ctx->pc = 0x2336CCu;
    SET_GPR_U32(ctx, 31, 0x2336D4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336CCu, 0x2336D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336D4u;
label_2336d4:
    // 0x2336d4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2336d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2336d8:
    // 0x2336d8: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2336d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_2336dc:
    // 0x2336dc: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2336dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_2336e0:
    // 0x2336e0: 0x3465001c  ori         $a1, $v1, 0x1C
    ctx->pc = 0x2336e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
label_2336e4:
    // 0x2336e4: 0xc0684d8  jal         func_1A1360
label_2336e8:
    if (ctx->pc == 0x2336E8u) {
        ctx->pc = 0x2336ECu;
        goto label_2336ec;
    }
    ctx->pc = 0x2336E4u;
    SET_GPR_U32(ctx, 31, 0x2336ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336E4u, 0x2336ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336ECu;
label_2336ec:
    // 0x2336ec: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2336ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_2336f0:
    // 0x2336f0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2336f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_2336f4:
    // 0x2336f4: 0x34450027  ori         $a1, $v0, 0x27
    ctx->pc = 0x2336f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
label_2336f8:
    // 0x2336f8: 0xc0684d8  jal         func_1A1360
label_2336fc:
    if (ctx->pc == 0x2336FCu) {
        ctx->pc = 0x233700u;
        goto label_233700;
    }
    ctx->pc = 0x2336F8u;
    SET_GPR_U32(ctx, 31, 0x233700u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336F8u, 0x233700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233700u;
label_233700:
    // 0x233700: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x233700u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_233704:
    // 0x233704: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x233704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_233708:
    // 0x233708: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x233708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_23370c:
    // 0x23370c: 0x34450035  ori         $a1, $v0, 0x35
    ctx->pc = 0x23370cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
label_233710:
    // 0x233710: 0xc0684d8  jal         func_1A1360
label_233714:
    if (ctx->pc == 0x233714u) {
        ctx->pc = 0x233718u;
        goto label_233718;
    }
    ctx->pc = 0x233710u;
    SET_GPR_U32(ctx, 31, 0x233718u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233710u, 0x233718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233718u;
label_233718:
    // 0x233718: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x233718u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23371c:
    // 0x23371c: 0x3c0502ff  lui         $a1, 0x2FF
    ctx->pc = 0x23371cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)767 << 16));
label_233720:
    // 0x233720: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x233720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_233724:
    // 0x233724: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x233724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_233728:
    // 0x233728: 0x34460041  ori         $a2, $v0, 0x41
    ctx->pc = 0x233728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
label_23372c:
    // 0x23372c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x23372cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_233730:
    // 0x233730: 0xc0684d8  jal         func_1A1360
label_233734:
    if (ctx->pc == 0x233734u) {
        ctx->pc = 0x233738u;
        goto label_233738;
    }
    ctx->pc = 0x233730u;
    SET_GPR_U32(ctx, 31, 0x233738u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233730u, 0x233738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233738u;
label_233738:
    // 0x233738: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x233738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_23373c:
    // 0x23373c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x23373cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_233740:
    // 0x233740: 0x34450050  ori         $a1, $v0, 0x50
    ctx->pc = 0x233740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
label_233744:
    // 0x233744: 0xc0684d8  jal         func_1A1360
label_233748:
    if (ctx->pc == 0x233748u) {
        ctx->pc = 0x23374Cu;
        goto label_23374c;
    }
    ctx->pc = 0x233744u;
    SET_GPR_U32(ctx, 31, 0x23374Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233744u, 0x23374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23374Cu;
label_23374c:
    // 0x23374c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x23374cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_233750:
    // 0x233750: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x233750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_233754:
    // 0x233754: 0x34450078  ori         $a1, $v0, 0x78
    ctx->pc = 0x233754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)120);
label_233758:
    // 0x233758: 0xc0684d8  jal         func_1A1360
label_23375c:
    if (ctx->pc == 0x23375Cu) {
        ctx->pc = 0x233760u;
        goto label_233760;
    }
    ctx->pc = 0x233758u;
    SET_GPR_U32(ctx, 31, 0x233760u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233758u, 0x233760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233760u;
label_233760:
    // 0x233760: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x233760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_233764:
    // 0x233764: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233768:
    // 0x233768: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x233768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_23376c:
    // 0x23376c: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_233770:
    if (ctx->pc == 0x233770u) {
        ctx->pc = 0x233774u;
        goto label_233774;
    }
    ctx->pc = 0x23376Cu;
    {
        const bool branch_taken_0x23376c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23376c) {
            ctx->pc = 0x233964u;
            goto label_233964;
        }
    }
    ctx->pc = 0x233774u;
label_233774:
    // 0x233774: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233778:
    // 0x233778: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23377c:
    // 0x23377c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23377cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_233780:
    // 0x233780: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x233780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_233784:
    // 0x233784: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233788:
    // 0x233788: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x233788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_23378c:
    // 0x23378c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23378cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233790:
    // 0x233790: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x233790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_233794:
    // 0x233794: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233798:
    // 0x233798: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x233798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_23379c:
    // 0x23379c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2337a0:
    // 0x2337a0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2337a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2337a4:
    // 0x2337a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2337a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2337a8:
    // 0x2337a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2337a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2337ac:
    // 0x2337ac: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2337acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_2337b0:
    // 0x2337b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2337b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2337b4:
    // 0x2337b4: 0x26850150  addiu       $a1, $s4, 0x150
    ctx->pc = 0x2337b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
label_2337b8:
    // 0x2337b8: 0xa0a4001d  sb          $a0, 0x1D($a1)
    ctx->pc = 0x2337b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29), (uint8_t)GPR_U32(ctx, 4));
label_2337bc:
    // 0x2337bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2337bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2337c0:
    // 0x2337c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2337c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2337c4:
    // 0x2337c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2337c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_2337c8:
    // 0x2337c8: 0x2464ec70  addiu       $a0, $v1, -0x1390
    ctx->pc = 0x2337c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_2337cc:
    // 0x2337cc: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2337ccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2337d0:
    // 0x2337d0: 0x3c05437a  lui         $a1, 0x437A
    ctx->pc = 0x2337d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17274 << 16));
label_2337d4:
    // 0x2337d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2337d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2337d8:
    // 0x2337d8: 0x0  nop
    ctx->pc = 0x2337d8u;
    // NOP
label_2337dc:
    // 0x2337dc: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x2337dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
label_2337e0:
    // 0x2337e0: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x2337e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_2337e4:
    // 0x2337e4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2337e8:
    if (ctx->pc == 0x2337E8u) {
        ctx->pc = 0x2337ECu;
        goto label_2337ec;
    }
    ctx->pc = 0x2337E4u;
    {
        const bool branch_taken_0x2337e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2337e4) {
            ctx->pc = 0x233964u;
            goto label_233964;
        }
    }
    ctx->pc = 0x2337ECu;
label_2337ec:
    // 0x2337ec: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2337ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2337f0:
    // 0x2337f0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2337f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2337f4:
    // 0x2337f4: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2337f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_2337f8:
    // 0x2337f8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2337f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2337fc:
    // 0x2337fc: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x2337fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
label_233800:
    // 0x233800: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x233800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_233804:
    // 0x233804: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x233804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_233808:
    // 0x233808: 0xc0965d0  jal         func_259740
label_23380c:
    if (ctx->pc == 0x23380Cu) {
        ctx->pc = 0x233810u;
        goto label_233810;
    }
    ctx->pc = 0x233808u;
    SET_GPR_U32(ctx, 31, 0x233810u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x233808u, 0x233810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233810u;
label_233810:
    // 0x233810: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x233810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_233814:
    // 0x233814: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233818:
    // 0x233818: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x233818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_23381c:
    // 0x23381c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x23381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233820:
    // 0x233820: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x233820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_233824:
    // 0x233824: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x233824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_233828:
    // 0x233828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23382c:
    // 0x23382c: 0x0  nop
    ctx->pc = 0x23382cu;
    // NOP
label_233830:
    // 0x233830: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x233830u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_233834:
    // 0x233834: 0xc058fec  jal         func_163FB0
label_233838:
    if (ctx->pc == 0x233838u) {
        ctx->pc = 0x23383Cu;
        goto label_23383c;
    }
    ctx->pc = 0x233834u;
    SET_GPR_U32(ctx, 31, 0x23383Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x233834u, 0x23383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23383Cu;
label_23383c:
    // 0x23383c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233840:
    // 0x233840: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x233840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
label_233844:
    // 0x233844: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x233844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233848:
    // 0x233848: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x233848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23384c:
    // 0x23384c: 0x3c083e49  lui         $t0, 0x3E49
    ctx->pc = 0x23384cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15945 << 16));
label_233850:
    // 0x233850: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x233850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
label_233854:
    // 0x233854: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x233854u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_233858:
    // 0x233858: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x233858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23385c:
    // 0x23385c: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x23385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_233860:
    // 0x233860: 0xc058f50  jal         func_163D40
label_233864:
    if (ctx->pc == 0x233864u) {
        ctx->pc = 0x233868u;
        goto label_233868;
    }
    ctx->pc = 0x233860u;
    SET_GPR_U32(ctx, 31, 0x233868u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x233860u, 0x233868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233868u;
label_233868:
    // 0x233868: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23386c:
    // 0x23386c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_233870:
    // 0x233870: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233874:
    // 0x233874: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x233874u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_233878:
    // 0x233878: 0xc096b40  jal         func_25AD00
label_23387c:
    if (ctx->pc == 0x23387Cu) {
        ctx->pc = 0x233880u;
        goto label_233880;
    }
    ctx->pc = 0x233878u;
    SET_GPR_U32(ctx, 31, 0x233880u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x233878u, 0x233880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233880u;
label_233880:
    // 0x233880: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233880u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_233884:
    // 0x233884: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233888:
    // 0x233888: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x233888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
label_23388c:
    // 0x23388c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x23388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_233890:
    // 0x233890: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_233894:
    if (ctx->pc == 0x233894u) {
        ctx->pc = 0x233898u;
        goto label_233898;
    }
    ctx->pc = 0x233890u;
    {
        const bool branch_taken_0x233890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233890) {
            ctx->pc = 0x2338ACu;
            goto label_2338ac;
        }
    }
    ctx->pc = 0x233898u;
label_233898:
    // 0x233898: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23389c:
    // 0x23389c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2338a0:
    // 0x2338a0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2338a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2338a4:
    // 0x2338a4: 0xc05cd58  jal         func_173560
label_2338a8:
    if (ctx->pc == 0x2338A8u) {
        ctx->pc = 0x2338ACu;
        goto label_2338ac;
    }
    ctx->pc = 0x2338A4u;
    SET_GPR_U32(ctx, 31, 0x2338ACu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2338A4u, 0x2338ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338ACu;
label_2338ac:
    // 0x2338ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2338acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2338b0:
    // 0x2338b0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2338b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2338b4:
    // 0x2338b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2338b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2338b8:
    // 0x2338b8: 0xc0573d8  jal         func_15CF60
label_2338bc:
    if (ctx->pc == 0x2338BCu) {
        ctx->pc = 0x2338C0u;
        goto label_2338c0;
    }
    ctx->pc = 0x2338B8u;
    SET_GPR_U32(ctx, 31, 0x2338C0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x2338B8u, 0x2338C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338C0u;
label_2338c0:
    // 0x2338c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2338c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2338c4:
    // 0x2338c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2338c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2338c8:
    // 0x2338c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2338c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2338cc:
    // 0x2338cc: 0xc0974dc  jal         func_25D370
label_2338d0:
    if (ctx->pc == 0x2338D0u) {
        ctx->pc = 0x2338D4u;
        goto label_2338d4;
    }
    ctx->pc = 0x2338CCu;
    SET_GPR_U32(ctx, 31, 0x2338D4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2338CCu, 0x2338D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338D4u;
label_2338d4:
    // 0x2338d4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2338d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2338d8:
    // 0x2338d8: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x2338d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_2338dc:
    // 0x2338dc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_2338e0:
    if (ctx->pc == 0x2338E0u) {
        ctx->pc = 0x2338E4u;
        goto label_2338e4;
    }
    ctx->pc = 0x2338DCu;
    {
        const bool branch_taken_0x2338dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2338dc) {
            ctx->pc = 0x233918u;
            goto label_233918;
        }
    }
    ctx->pc = 0x2338E4u;
label_2338e4:
    // 0x2338e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2338e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2338e8:
    // 0x2338e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2338e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2338ec:
    // 0x2338ec: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x2338ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_2338f0:
    // 0x2338f0: 0x24020502  addiu       $v0, $zero, 0x502
    ctx->pc = 0x2338f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
label_2338f4:
    // 0x2338f4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2338f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2338f8:
    // 0x2338f8: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_2338fc:
    // 0x2338fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2338fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_233900:
    // 0x233900: 0xc0965d0  jal         func_259740
label_233904:
    if (ctx->pc == 0x233904u) {
        ctx->pc = 0x233908u;
        goto label_233908;
    }
    ctx->pc = 0x233900u;
    SET_GPR_U32(ctx, 31, 0x233908u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x233900u, 0x233908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233908u;
label_233908:
    // 0x233908: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233908u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23390c:
    // 0x23390c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233910:
    // 0x233910: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_233914:
    // 0x233914: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x233914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_233918:
    // 0x233918: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23391c:
    // 0x23391c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x23391cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_233920:
    // 0x233920: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x233920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_233924:
    // 0x233924: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x233924u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_233928:
    // 0x233928: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_23392c:
    if (ctx->pc == 0x23392Cu) {
        ctx->pc = 0x233930u;
        goto label_233930;
    }
    ctx->pc = 0x233928u;
    {
        const bool branch_taken_0x233928 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x233928) {
            ctx->pc = 0x23394Cu;
            goto label_23394c;
        }
    }
    ctx->pc = 0x233930u;
label_233930:
    // 0x233930: 0x24111770  addiu       $s1, $zero, 0x1770
    ctx->pc = 0x233930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_233934:
    // 0x233934: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x233934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_233938:
    // 0x233938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23393c:
    // 0x23393c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23393cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_233940:
    // 0x233940: 0xc0576a4  jal         func_15DA90
label_233944:
    if (ctx->pc == 0x233944u) {
        ctx->pc = 0x233948u;
        goto label_233948;
    }
    ctx->pc = 0x233940u;
    SET_GPR_U32(ctx, 31, 0x233948u);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x233940u, 0x233948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233948u;
label_233948:
    // 0x233948: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x233948u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23394c:
    // 0x23394c: 0xc0576b8  jal         func_15DAE0
label_233950:
    if (ctx->pc == 0x233950u) {
        ctx->pc = 0x233954u;
        goto label_233954;
    }
    ctx->pc = 0x23394Cu;
    SET_GPR_U32(ctx, 31, 0x233954u);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x23394Cu, 0x233954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233954u;
label_233954:
    // 0x233954: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x233954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_233958:
    // 0x233958: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x233958u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_23395c:
    // 0x23395c: 0x3a660001  xori        $a2, $s3, 0x1
    ctx->pc = 0x23395cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_233960:
    // 0x233960: 0x2cc30001  sltiu       $v1, $a2, 0x1
    ctx->pc = 0x233960u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_233964:
    // 0x233964: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x233964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233968:
    // 0x233968: 0x8fb30098  lw          $s3, 0x98($sp)
    ctx->pc = 0x233968u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23396c:
    // 0x23396c: 0xe6600124  swc1        $f0, 0x124($s3)
    ctx->pc = 0x23396cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 292), bits); }
label_233970:
    // 0x233970: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x233970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_233974:
    // 0x233974: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x233974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_233978:
    // 0x233978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x233978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23397c:
    // 0x23397c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23397cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_233980:
    // 0x233980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x233980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_233984:
    // 0x233984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_233988:
    // 0x233988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23398c:
    // 0x23398c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x23398cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_233990:
    // 0x233990: 0x3e00008  jr          $ra
label_233994:
    if (ctx->pc == 0x233994u) {
        ctx->pc = 0x233998u;
        goto label_fallthrough_0x233990;
    }
    ctx->pc = 0x233990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x233990:
    ctx->pc = 0x233998u;
}
