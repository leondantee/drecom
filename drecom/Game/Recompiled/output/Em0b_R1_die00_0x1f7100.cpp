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

// Function: Em0b_R1_die00
// Address: 0x1f7100 - 0x1f8090
void Em0b_R1_die00_0x1f7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_die00_0x1f7100");
#endif

    switch (ctx->pc) {
        case 0x1f7100u: goto label_1f7100;
        case 0x1f7104u: goto label_1f7104;
        case 0x1f7108u: goto label_1f7108;
        case 0x1f710cu: goto label_1f710c;
        case 0x1f7110u: goto label_1f7110;
        case 0x1f7114u: goto label_1f7114;
        case 0x1f7118u: goto label_1f7118;
        case 0x1f711cu: goto label_1f711c;
        case 0x1f7120u: goto label_1f7120;
        case 0x1f7124u: goto label_1f7124;
        case 0x1f7128u: goto label_1f7128;
        case 0x1f712cu: goto label_1f712c;
        case 0x1f7130u: goto label_1f7130;
        case 0x1f7134u: goto label_1f7134;
        case 0x1f7138u: goto label_1f7138;
        case 0x1f713cu: goto label_1f713c;
        case 0x1f7140u: goto label_1f7140;
        case 0x1f7144u: goto label_1f7144;
        case 0x1f7148u: goto label_1f7148;
        case 0x1f714cu: goto label_1f714c;
        case 0x1f7150u: goto label_1f7150;
        case 0x1f7154u: goto label_1f7154;
        case 0x1f7158u: goto label_1f7158;
        case 0x1f715cu: goto label_1f715c;
        case 0x1f7160u: goto label_1f7160;
        case 0x1f7164u: goto label_1f7164;
        case 0x1f7168u: goto label_1f7168;
        case 0x1f716cu: goto label_1f716c;
        case 0x1f7170u: goto label_1f7170;
        case 0x1f7174u: goto label_1f7174;
        case 0x1f7178u: goto label_1f7178;
        case 0x1f717cu: goto label_1f717c;
        case 0x1f7180u: goto label_1f7180;
        case 0x1f7184u: goto label_1f7184;
        case 0x1f7188u: goto label_1f7188;
        case 0x1f718cu: goto label_1f718c;
        case 0x1f7190u: goto label_1f7190;
        case 0x1f7194u: goto label_1f7194;
        case 0x1f7198u: goto label_1f7198;
        case 0x1f719cu: goto label_1f719c;
        case 0x1f71a0u: goto label_1f71a0;
        case 0x1f71a4u: goto label_1f71a4;
        case 0x1f71a8u: goto label_1f71a8;
        case 0x1f71acu: goto label_1f71ac;
        case 0x1f71b0u: goto label_1f71b0;
        case 0x1f71b4u: goto label_1f71b4;
        case 0x1f71b8u: goto label_1f71b8;
        case 0x1f71bcu: goto label_1f71bc;
        case 0x1f71c0u: goto label_1f71c0;
        case 0x1f71c4u: goto label_1f71c4;
        case 0x1f71c8u: goto label_1f71c8;
        case 0x1f71ccu: goto label_1f71cc;
        case 0x1f71d0u: goto label_1f71d0;
        case 0x1f71d4u: goto label_1f71d4;
        case 0x1f71d8u: goto label_1f71d8;
        case 0x1f71dcu: goto label_1f71dc;
        case 0x1f71e0u: goto label_1f71e0;
        case 0x1f71e4u: goto label_1f71e4;
        case 0x1f71e8u: goto label_1f71e8;
        case 0x1f71ecu: goto label_1f71ec;
        case 0x1f71f0u: goto label_1f71f0;
        case 0x1f71f4u: goto label_1f71f4;
        case 0x1f71f8u: goto label_1f71f8;
        case 0x1f71fcu: goto label_1f71fc;
        case 0x1f7200u: goto label_1f7200;
        case 0x1f7204u: goto label_1f7204;
        case 0x1f7208u: goto label_1f7208;
        case 0x1f720cu: goto label_1f720c;
        case 0x1f7210u: goto label_1f7210;
        case 0x1f7214u: goto label_1f7214;
        case 0x1f7218u: goto label_1f7218;
        case 0x1f721cu: goto label_1f721c;
        case 0x1f7220u: goto label_1f7220;
        case 0x1f7224u: goto label_1f7224;
        case 0x1f7228u: goto label_1f7228;
        case 0x1f722cu: goto label_1f722c;
        case 0x1f7230u: goto label_1f7230;
        case 0x1f7234u: goto label_1f7234;
        case 0x1f7238u: goto label_1f7238;
        case 0x1f723cu: goto label_1f723c;
        case 0x1f7240u: goto label_1f7240;
        case 0x1f7244u: goto label_1f7244;
        case 0x1f7248u: goto label_1f7248;
        case 0x1f724cu: goto label_1f724c;
        case 0x1f7250u: goto label_1f7250;
        case 0x1f7254u: goto label_1f7254;
        case 0x1f7258u: goto label_1f7258;
        case 0x1f725cu: goto label_1f725c;
        case 0x1f7260u: goto label_1f7260;
        case 0x1f7264u: goto label_1f7264;
        case 0x1f7268u: goto label_1f7268;
        case 0x1f726cu: goto label_1f726c;
        case 0x1f7270u: goto label_1f7270;
        case 0x1f7274u: goto label_1f7274;
        case 0x1f7278u: goto label_1f7278;
        case 0x1f727cu: goto label_1f727c;
        case 0x1f7280u: goto label_1f7280;
        case 0x1f7284u: goto label_1f7284;
        case 0x1f7288u: goto label_1f7288;
        case 0x1f728cu: goto label_1f728c;
        case 0x1f7290u: goto label_1f7290;
        case 0x1f7294u: goto label_1f7294;
        case 0x1f7298u: goto label_1f7298;
        case 0x1f729cu: goto label_1f729c;
        case 0x1f72a0u: goto label_1f72a0;
        case 0x1f72a4u: goto label_1f72a4;
        case 0x1f72a8u: goto label_1f72a8;
        case 0x1f72acu: goto label_1f72ac;
        case 0x1f72b0u: goto label_1f72b0;
        case 0x1f72b4u: goto label_1f72b4;
        case 0x1f72b8u: goto label_1f72b8;
        case 0x1f72bcu: goto label_1f72bc;
        case 0x1f72c0u: goto label_1f72c0;
        case 0x1f72c4u: goto label_1f72c4;
        case 0x1f72c8u: goto label_1f72c8;
        case 0x1f72ccu: goto label_1f72cc;
        case 0x1f72d0u: goto label_1f72d0;
        case 0x1f72d4u: goto label_1f72d4;
        case 0x1f72d8u: goto label_1f72d8;
        case 0x1f72dcu: goto label_1f72dc;
        case 0x1f72e0u: goto label_1f72e0;
        case 0x1f72e4u: goto label_1f72e4;
        case 0x1f72e8u: goto label_1f72e8;
        case 0x1f72ecu: goto label_1f72ec;
        case 0x1f72f0u: goto label_1f72f0;
        case 0x1f72f4u: goto label_1f72f4;
        case 0x1f72f8u: goto label_1f72f8;
        case 0x1f72fcu: goto label_1f72fc;
        case 0x1f7300u: goto label_1f7300;
        case 0x1f7304u: goto label_1f7304;
        case 0x1f7308u: goto label_1f7308;
        case 0x1f730cu: goto label_1f730c;
        case 0x1f7310u: goto label_1f7310;
        case 0x1f7314u: goto label_1f7314;
        case 0x1f7318u: goto label_1f7318;
        case 0x1f731cu: goto label_1f731c;
        case 0x1f7320u: goto label_1f7320;
        case 0x1f7324u: goto label_1f7324;
        case 0x1f7328u: goto label_1f7328;
        case 0x1f732cu: goto label_1f732c;
        case 0x1f7330u: goto label_1f7330;
        case 0x1f7334u: goto label_1f7334;
        case 0x1f7338u: goto label_1f7338;
        case 0x1f733cu: goto label_1f733c;
        case 0x1f7340u: goto label_1f7340;
        case 0x1f7344u: goto label_1f7344;
        case 0x1f7348u: goto label_1f7348;
        case 0x1f734cu: goto label_1f734c;
        case 0x1f7350u: goto label_1f7350;
        case 0x1f7354u: goto label_1f7354;
        case 0x1f7358u: goto label_1f7358;
        case 0x1f735cu: goto label_1f735c;
        case 0x1f7360u: goto label_1f7360;
        case 0x1f7364u: goto label_1f7364;
        case 0x1f7368u: goto label_1f7368;
        case 0x1f736cu: goto label_1f736c;
        case 0x1f7370u: goto label_1f7370;
        case 0x1f7374u: goto label_1f7374;
        case 0x1f7378u: goto label_1f7378;
        case 0x1f737cu: goto label_1f737c;
        case 0x1f7380u: goto label_1f7380;
        case 0x1f7384u: goto label_1f7384;
        case 0x1f7388u: goto label_1f7388;
        case 0x1f738cu: goto label_1f738c;
        case 0x1f7390u: goto label_1f7390;
        case 0x1f7394u: goto label_1f7394;
        case 0x1f7398u: goto label_1f7398;
        case 0x1f739cu: goto label_1f739c;
        case 0x1f73a0u: goto label_1f73a0;
        case 0x1f73a4u: goto label_1f73a4;
        case 0x1f73a8u: goto label_1f73a8;
        case 0x1f73acu: goto label_1f73ac;
        case 0x1f73b0u: goto label_1f73b0;
        case 0x1f73b4u: goto label_1f73b4;
        case 0x1f73b8u: goto label_1f73b8;
        case 0x1f73bcu: goto label_1f73bc;
        case 0x1f73c0u: goto label_1f73c0;
        case 0x1f73c4u: goto label_1f73c4;
        case 0x1f73c8u: goto label_1f73c8;
        case 0x1f73ccu: goto label_1f73cc;
        case 0x1f73d0u: goto label_1f73d0;
        case 0x1f73d4u: goto label_1f73d4;
        case 0x1f73d8u: goto label_1f73d8;
        case 0x1f73dcu: goto label_1f73dc;
        case 0x1f73e0u: goto label_1f73e0;
        case 0x1f73e4u: goto label_1f73e4;
        case 0x1f73e8u: goto label_1f73e8;
        case 0x1f73ecu: goto label_1f73ec;
        case 0x1f73f0u: goto label_1f73f0;
        case 0x1f73f4u: goto label_1f73f4;
        case 0x1f73f8u: goto label_1f73f8;
        case 0x1f73fcu: goto label_1f73fc;
        case 0x1f7400u: goto label_1f7400;
        case 0x1f7404u: goto label_1f7404;
        case 0x1f7408u: goto label_1f7408;
        case 0x1f740cu: goto label_1f740c;
        case 0x1f7410u: goto label_1f7410;
        case 0x1f7414u: goto label_1f7414;
        case 0x1f7418u: goto label_1f7418;
        case 0x1f741cu: goto label_1f741c;
        case 0x1f7420u: goto label_1f7420;
        case 0x1f7424u: goto label_1f7424;
        case 0x1f7428u: goto label_1f7428;
        case 0x1f742cu: goto label_1f742c;
        case 0x1f7430u: goto label_1f7430;
        case 0x1f7434u: goto label_1f7434;
        case 0x1f7438u: goto label_1f7438;
        case 0x1f743cu: goto label_1f743c;
        case 0x1f7440u: goto label_1f7440;
        case 0x1f7444u: goto label_1f7444;
        case 0x1f7448u: goto label_1f7448;
        case 0x1f744cu: goto label_1f744c;
        case 0x1f7450u: goto label_1f7450;
        case 0x1f7454u: goto label_1f7454;
        case 0x1f7458u: goto label_1f7458;
        case 0x1f745cu: goto label_1f745c;
        case 0x1f7460u: goto label_1f7460;
        case 0x1f7464u: goto label_1f7464;
        case 0x1f7468u: goto label_1f7468;
        case 0x1f746cu: goto label_1f746c;
        case 0x1f7470u: goto label_1f7470;
        case 0x1f7474u: goto label_1f7474;
        case 0x1f7478u: goto label_1f7478;
        case 0x1f747cu: goto label_1f747c;
        case 0x1f7480u: goto label_1f7480;
        case 0x1f7484u: goto label_1f7484;
        case 0x1f7488u: goto label_1f7488;
        case 0x1f748cu: goto label_1f748c;
        case 0x1f7490u: goto label_1f7490;
        case 0x1f7494u: goto label_1f7494;
        case 0x1f7498u: goto label_1f7498;
        case 0x1f749cu: goto label_1f749c;
        case 0x1f74a0u: goto label_1f74a0;
        case 0x1f74a4u: goto label_1f74a4;
        case 0x1f74a8u: goto label_1f74a8;
        case 0x1f74acu: goto label_1f74ac;
        case 0x1f74b0u: goto label_1f74b0;
        case 0x1f74b4u: goto label_1f74b4;
        case 0x1f74b8u: goto label_1f74b8;
        case 0x1f74bcu: goto label_1f74bc;
        case 0x1f74c0u: goto label_1f74c0;
        case 0x1f74c4u: goto label_1f74c4;
        case 0x1f74c8u: goto label_1f74c8;
        case 0x1f74ccu: goto label_1f74cc;
        case 0x1f74d0u: goto label_1f74d0;
        case 0x1f74d4u: goto label_1f74d4;
        case 0x1f74d8u: goto label_1f74d8;
        case 0x1f74dcu: goto label_1f74dc;
        case 0x1f74e0u: goto label_1f74e0;
        case 0x1f74e4u: goto label_1f74e4;
        case 0x1f74e8u: goto label_1f74e8;
        case 0x1f74ecu: goto label_1f74ec;
        case 0x1f74f0u: goto label_1f74f0;
        case 0x1f74f4u: goto label_1f74f4;
        case 0x1f74f8u: goto label_1f74f8;
        case 0x1f74fcu: goto label_1f74fc;
        case 0x1f7500u: goto label_1f7500;
        case 0x1f7504u: goto label_1f7504;
        case 0x1f7508u: goto label_1f7508;
        case 0x1f750cu: goto label_1f750c;
        case 0x1f7510u: goto label_1f7510;
        case 0x1f7514u: goto label_1f7514;
        case 0x1f7518u: goto label_1f7518;
        case 0x1f751cu: goto label_1f751c;
        case 0x1f7520u: goto label_1f7520;
        case 0x1f7524u: goto label_1f7524;
        case 0x1f7528u: goto label_1f7528;
        case 0x1f752cu: goto label_1f752c;
        case 0x1f7530u: goto label_1f7530;
        case 0x1f7534u: goto label_1f7534;
        case 0x1f7538u: goto label_1f7538;
        case 0x1f753cu: goto label_1f753c;
        case 0x1f7540u: goto label_1f7540;
        case 0x1f7544u: goto label_1f7544;
        case 0x1f7548u: goto label_1f7548;
        case 0x1f754cu: goto label_1f754c;
        case 0x1f7550u: goto label_1f7550;
        case 0x1f7554u: goto label_1f7554;
        case 0x1f7558u: goto label_1f7558;
        case 0x1f755cu: goto label_1f755c;
        case 0x1f7560u: goto label_1f7560;
        case 0x1f7564u: goto label_1f7564;
        case 0x1f7568u: goto label_1f7568;
        case 0x1f756cu: goto label_1f756c;
        case 0x1f7570u: goto label_1f7570;
        case 0x1f7574u: goto label_1f7574;
        case 0x1f7578u: goto label_1f7578;
        case 0x1f757cu: goto label_1f757c;
        case 0x1f7580u: goto label_1f7580;
        case 0x1f7584u: goto label_1f7584;
        case 0x1f7588u: goto label_1f7588;
        case 0x1f758cu: goto label_1f758c;
        case 0x1f7590u: goto label_1f7590;
        case 0x1f7594u: goto label_1f7594;
        case 0x1f7598u: goto label_1f7598;
        case 0x1f759cu: goto label_1f759c;
        case 0x1f75a0u: goto label_1f75a0;
        case 0x1f75a4u: goto label_1f75a4;
        case 0x1f75a8u: goto label_1f75a8;
        case 0x1f75acu: goto label_1f75ac;
        case 0x1f75b0u: goto label_1f75b0;
        case 0x1f75b4u: goto label_1f75b4;
        case 0x1f75b8u: goto label_1f75b8;
        case 0x1f75bcu: goto label_1f75bc;
        case 0x1f75c0u: goto label_1f75c0;
        case 0x1f75c4u: goto label_1f75c4;
        case 0x1f75c8u: goto label_1f75c8;
        case 0x1f75ccu: goto label_1f75cc;
        case 0x1f75d0u: goto label_1f75d0;
        case 0x1f75d4u: goto label_1f75d4;
        case 0x1f75d8u: goto label_1f75d8;
        case 0x1f75dcu: goto label_1f75dc;
        case 0x1f75e0u: goto label_1f75e0;
        case 0x1f75e4u: goto label_1f75e4;
        case 0x1f75e8u: goto label_1f75e8;
        case 0x1f75ecu: goto label_1f75ec;
        case 0x1f75f0u: goto label_1f75f0;
        case 0x1f75f4u: goto label_1f75f4;
        case 0x1f75f8u: goto label_1f75f8;
        case 0x1f75fcu: goto label_1f75fc;
        case 0x1f7600u: goto label_1f7600;
        case 0x1f7604u: goto label_1f7604;
        case 0x1f7608u: goto label_1f7608;
        case 0x1f760cu: goto label_1f760c;
        case 0x1f7610u: goto label_1f7610;
        case 0x1f7614u: goto label_1f7614;
        case 0x1f7618u: goto label_1f7618;
        case 0x1f761cu: goto label_1f761c;
        case 0x1f7620u: goto label_1f7620;
        case 0x1f7624u: goto label_1f7624;
        case 0x1f7628u: goto label_1f7628;
        case 0x1f762cu: goto label_1f762c;
        case 0x1f7630u: goto label_1f7630;
        case 0x1f7634u: goto label_1f7634;
        case 0x1f7638u: goto label_1f7638;
        case 0x1f763cu: goto label_1f763c;
        case 0x1f7640u: goto label_1f7640;
        case 0x1f7644u: goto label_1f7644;
        case 0x1f7648u: goto label_1f7648;
        case 0x1f764cu: goto label_1f764c;
        case 0x1f7650u: goto label_1f7650;
        case 0x1f7654u: goto label_1f7654;
        case 0x1f7658u: goto label_1f7658;
        case 0x1f765cu: goto label_1f765c;
        case 0x1f7660u: goto label_1f7660;
        case 0x1f7664u: goto label_1f7664;
        case 0x1f7668u: goto label_1f7668;
        case 0x1f766cu: goto label_1f766c;
        case 0x1f7670u: goto label_1f7670;
        case 0x1f7674u: goto label_1f7674;
        case 0x1f7678u: goto label_1f7678;
        case 0x1f767cu: goto label_1f767c;
        case 0x1f7680u: goto label_1f7680;
        case 0x1f7684u: goto label_1f7684;
        case 0x1f7688u: goto label_1f7688;
        case 0x1f768cu: goto label_1f768c;
        case 0x1f7690u: goto label_1f7690;
        case 0x1f7694u: goto label_1f7694;
        case 0x1f7698u: goto label_1f7698;
        case 0x1f769cu: goto label_1f769c;
        case 0x1f76a0u: goto label_1f76a0;
        case 0x1f76a4u: goto label_1f76a4;
        case 0x1f76a8u: goto label_1f76a8;
        case 0x1f76acu: goto label_1f76ac;
        case 0x1f76b0u: goto label_1f76b0;
        case 0x1f76b4u: goto label_1f76b4;
        case 0x1f76b8u: goto label_1f76b8;
        case 0x1f76bcu: goto label_1f76bc;
        case 0x1f76c0u: goto label_1f76c0;
        case 0x1f76c4u: goto label_1f76c4;
        case 0x1f76c8u: goto label_1f76c8;
        case 0x1f76ccu: goto label_1f76cc;
        case 0x1f76d0u: goto label_1f76d0;
        case 0x1f76d4u: goto label_1f76d4;
        case 0x1f76d8u: goto label_1f76d8;
        case 0x1f76dcu: goto label_1f76dc;
        case 0x1f76e0u: goto label_1f76e0;
        case 0x1f76e4u: goto label_1f76e4;
        case 0x1f76e8u: goto label_1f76e8;
        case 0x1f76ecu: goto label_1f76ec;
        case 0x1f76f0u: goto label_1f76f0;
        case 0x1f76f4u: goto label_1f76f4;
        case 0x1f76f8u: goto label_1f76f8;
        case 0x1f76fcu: goto label_1f76fc;
        case 0x1f7700u: goto label_1f7700;
        case 0x1f7704u: goto label_1f7704;
        case 0x1f7708u: goto label_1f7708;
        case 0x1f770cu: goto label_1f770c;
        case 0x1f7710u: goto label_1f7710;
        case 0x1f7714u: goto label_1f7714;
        case 0x1f7718u: goto label_1f7718;
        case 0x1f771cu: goto label_1f771c;
        case 0x1f7720u: goto label_1f7720;
        case 0x1f7724u: goto label_1f7724;
        case 0x1f7728u: goto label_1f7728;
        case 0x1f772cu: goto label_1f772c;
        case 0x1f7730u: goto label_1f7730;
        case 0x1f7734u: goto label_1f7734;
        case 0x1f7738u: goto label_1f7738;
        case 0x1f773cu: goto label_1f773c;
        case 0x1f7740u: goto label_1f7740;
        case 0x1f7744u: goto label_1f7744;
        case 0x1f7748u: goto label_1f7748;
        case 0x1f774cu: goto label_1f774c;
        case 0x1f7750u: goto label_1f7750;
        case 0x1f7754u: goto label_1f7754;
        case 0x1f7758u: goto label_1f7758;
        case 0x1f775cu: goto label_1f775c;
        case 0x1f7760u: goto label_1f7760;
        case 0x1f7764u: goto label_1f7764;
        case 0x1f7768u: goto label_1f7768;
        case 0x1f776cu: goto label_1f776c;
        case 0x1f7770u: goto label_1f7770;
        case 0x1f7774u: goto label_1f7774;
        case 0x1f7778u: goto label_1f7778;
        case 0x1f777cu: goto label_1f777c;
        case 0x1f7780u: goto label_1f7780;
        case 0x1f7784u: goto label_1f7784;
        case 0x1f7788u: goto label_1f7788;
        case 0x1f778cu: goto label_1f778c;
        case 0x1f7790u: goto label_1f7790;
        case 0x1f7794u: goto label_1f7794;
        case 0x1f7798u: goto label_1f7798;
        case 0x1f779cu: goto label_1f779c;
        case 0x1f77a0u: goto label_1f77a0;
        case 0x1f77a4u: goto label_1f77a4;
        case 0x1f77a8u: goto label_1f77a8;
        case 0x1f77acu: goto label_1f77ac;
        case 0x1f77b0u: goto label_1f77b0;
        case 0x1f77b4u: goto label_1f77b4;
        case 0x1f77b8u: goto label_1f77b8;
        case 0x1f77bcu: goto label_1f77bc;
        case 0x1f77c0u: goto label_1f77c0;
        case 0x1f77c4u: goto label_1f77c4;
        case 0x1f77c8u: goto label_1f77c8;
        case 0x1f77ccu: goto label_1f77cc;
        case 0x1f77d0u: goto label_1f77d0;
        case 0x1f77d4u: goto label_1f77d4;
        case 0x1f77d8u: goto label_1f77d8;
        case 0x1f77dcu: goto label_1f77dc;
        case 0x1f77e0u: goto label_1f77e0;
        case 0x1f77e4u: goto label_1f77e4;
        case 0x1f77e8u: goto label_1f77e8;
        case 0x1f77ecu: goto label_1f77ec;
        case 0x1f77f0u: goto label_1f77f0;
        case 0x1f77f4u: goto label_1f77f4;
        case 0x1f77f8u: goto label_1f77f8;
        case 0x1f77fcu: goto label_1f77fc;
        case 0x1f7800u: goto label_1f7800;
        case 0x1f7804u: goto label_1f7804;
        case 0x1f7808u: goto label_1f7808;
        case 0x1f780cu: goto label_1f780c;
        case 0x1f7810u: goto label_1f7810;
        case 0x1f7814u: goto label_1f7814;
        case 0x1f7818u: goto label_1f7818;
        case 0x1f781cu: goto label_1f781c;
        case 0x1f7820u: goto label_1f7820;
        case 0x1f7824u: goto label_1f7824;
        case 0x1f7828u: goto label_1f7828;
        case 0x1f782cu: goto label_1f782c;
        case 0x1f7830u: goto label_1f7830;
        case 0x1f7834u: goto label_1f7834;
        case 0x1f7838u: goto label_1f7838;
        case 0x1f783cu: goto label_1f783c;
        case 0x1f7840u: goto label_1f7840;
        case 0x1f7844u: goto label_1f7844;
        case 0x1f7848u: goto label_1f7848;
        case 0x1f784cu: goto label_1f784c;
        case 0x1f7850u: goto label_1f7850;
        case 0x1f7854u: goto label_1f7854;
        case 0x1f7858u: goto label_1f7858;
        case 0x1f785cu: goto label_1f785c;
        case 0x1f7860u: goto label_1f7860;
        case 0x1f7864u: goto label_1f7864;
        case 0x1f7868u: goto label_1f7868;
        case 0x1f786cu: goto label_1f786c;
        case 0x1f7870u: goto label_1f7870;
        case 0x1f7874u: goto label_1f7874;
        case 0x1f7878u: goto label_1f7878;
        case 0x1f787cu: goto label_1f787c;
        case 0x1f7880u: goto label_1f7880;
        case 0x1f7884u: goto label_1f7884;
        case 0x1f7888u: goto label_1f7888;
        case 0x1f788cu: goto label_1f788c;
        case 0x1f7890u: goto label_1f7890;
        case 0x1f7894u: goto label_1f7894;
        case 0x1f7898u: goto label_1f7898;
        case 0x1f789cu: goto label_1f789c;
        case 0x1f78a0u: goto label_1f78a0;
        case 0x1f78a4u: goto label_1f78a4;
        case 0x1f78a8u: goto label_1f78a8;
        case 0x1f78acu: goto label_1f78ac;
        case 0x1f78b0u: goto label_1f78b0;
        case 0x1f78b4u: goto label_1f78b4;
        case 0x1f78b8u: goto label_1f78b8;
        case 0x1f78bcu: goto label_1f78bc;
        case 0x1f78c0u: goto label_1f78c0;
        case 0x1f78c4u: goto label_1f78c4;
        case 0x1f78c8u: goto label_1f78c8;
        case 0x1f78ccu: goto label_1f78cc;
        case 0x1f78d0u: goto label_1f78d0;
        case 0x1f78d4u: goto label_1f78d4;
        case 0x1f78d8u: goto label_1f78d8;
        case 0x1f78dcu: goto label_1f78dc;
        case 0x1f78e0u: goto label_1f78e0;
        case 0x1f78e4u: goto label_1f78e4;
        case 0x1f78e8u: goto label_1f78e8;
        case 0x1f78ecu: goto label_1f78ec;
        case 0x1f78f0u: goto label_1f78f0;
        case 0x1f78f4u: goto label_1f78f4;
        case 0x1f78f8u: goto label_1f78f8;
        case 0x1f78fcu: goto label_1f78fc;
        case 0x1f7900u: goto label_1f7900;
        case 0x1f7904u: goto label_1f7904;
        case 0x1f7908u: goto label_1f7908;
        case 0x1f790cu: goto label_1f790c;
        case 0x1f7910u: goto label_1f7910;
        case 0x1f7914u: goto label_1f7914;
        case 0x1f7918u: goto label_1f7918;
        case 0x1f791cu: goto label_1f791c;
        case 0x1f7920u: goto label_1f7920;
        case 0x1f7924u: goto label_1f7924;
        case 0x1f7928u: goto label_1f7928;
        case 0x1f792cu: goto label_1f792c;
        case 0x1f7930u: goto label_1f7930;
        case 0x1f7934u: goto label_1f7934;
        case 0x1f7938u: goto label_1f7938;
        case 0x1f793cu: goto label_1f793c;
        case 0x1f7940u: goto label_1f7940;
        case 0x1f7944u: goto label_1f7944;
        case 0x1f7948u: goto label_1f7948;
        case 0x1f794cu: goto label_1f794c;
        case 0x1f7950u: goto label_1f7950;
        case 0x1f7954u: goto label_1f7954;
        case 0x1f7958u: goto label_1f7958;
        case 0x1f795cu: goto label_1f795c;
        case 0x1f7960u: goto label_1f7960;
        case 0x1f7964u: goto label_1f7964;
        case 0x1f7968u: goto label_1f7968;
        case 0x1f796cu: goto label_1f796c;
        case 0x1f7970u: goto label_1f7970;
        case 0x1f7974u: goto label_1f7974;
        case 0x1f7978u: goto label_1f7978;
        case 0x1f797cu: goto label_1f797c;
        case 0x1f7980u: goto label_1f7980;
        case 0x1f7984u: goto label_1f7984;
        case 0x1f7988u: goto label_1f7988;
        case 0x1f798cu: goto label_1f798c;
        case 0x1f7990u: goto label_1f7990;
        case 0x1f7994u: goto label_1f7994;
        case 0x1f7998u: goto label_1f7998;
        case 0x1f799cu: goto label_1f799c;
        case 0x1f79a0u: goto label_1f79a0;
        case 0x1f79a4u: goto label_1f79a4;
        case 0x1f79a8u: goto label_1f79a8;
        case 0x1f79acu: goto label_1f79ac;
        case 0x1f79b0u: goto label_1f79b0;
        case 0x1f79b4u: goto label_1f79b4;
        case 0x1f79b8u: goto label_1f79b8;
        case 0x1f79bcu: goto label_1f79bc;
        case 0x1f79c0u: goto label_1f79c0;
        case 0x1f79c4u: goto label_1f79c4;
        case 0x1f79c8u: goto label_1f79c8;
        case 0x1f79ccu: goto label_1f79cc;
        case 0x1f79d0u: goto label_1f79d0;
        case 0x1f79d4u: goto label_1f79d4;
        case 0x1f79d8u: goto label_1f79d8;
        case 0x1f79dcu: goto label_1f79dc;
        case 0x1f79e0u: goto label_1f79e0;
        case 0x1f79e4u: goto label_1f79e4;
        case 0x1f79e8u: goto label_1f79e8;
        case 0x1f79ecu: goto label_1f79ec;
        case 0x1f79f0u: goto label_1f79f0;
        case 0x1f79f4u: goto label_1f79f4;
        case 0x1f79f8u: goto label_1f79f8;
        case 0x1f79fcu: goto label_1f79fc;
        case 0x1f7a00u: goto label_1f7a00;
        case 0x1f7a04u: goto label_1f7a04;
        case 0x1f7a08u: goto label_1f7a08;
        case 0x1f7a0cu: goto label_1f7a0c;
        case 0x1f7a10u: goto label_1f7a10;
        case 0x1f7a14u: goto label_1f7a14;
        case 0x1f7a18u: goto label_1f7a18;
        case 0x1f7a1cu: goto label_1f7a1c;
        case 0x1f7a20u: goto label_1f7a20;
        case 0x1f7a24u: goto label_1f7a24;
        case 0x1f7a28u: goto label_1f7a28;
        case 0x1f7a2cu: goto label_1f7a2c;
        case 0x1f7a30u: goto label_1f7a30;
        case 0x1f7a34u: goto label_1f7a34;
        case 0x1f7a38u: goto label_1f7a38;
        case 0x1f7a3cu: goto label_1f7a3c;
        case 0x1f7a40u: goto label_1f7a40;
        case 0x1f7a44u: goto label_1f7a44;
        case 0x1f7a48u: goto label_1f7a48;
        case 0x1f7a4cu: goto label_1f7a4c;
        case 0x1f7a50u: goto label_1f7a50;
        case 0x1f7a54u: goto label_1f7a54;
        case 0x1f7a58u: goto label_1f7a58;
        case 0x1f7a5cu: goto label_1f7a5c;
        case 0x1f7a60u: goto label_1f7a60;
        case 0x1f7a64u: goto label_1f7a64;
        case 0x1f7a68u: goto label_1f7a68;
        case 0x1f7a6cu: goto label_1f7a6c;
        case 0x1f7a70u: goto label_1f7a70;
        case 0x1f7a74u: goto label_1f7a74;
        case 0x1f7a78u: goto label_1f7a78;
        case 0x1f7a7cu: goto label_1f7a7c;
        case 0x1f7a80u: goto label_1f7a80;
        case 0x1f7a84u: goto label_1f7a84;
        case 0x1f7a88u: goto label_1f7a88;
        case 0x1f7a8cu: goto label_1f7a8c;
        case 0x1f7a90u: goto label_1f7a90;
        case 0x1f7a94u: goto label_1f7a94;
        case 0x1f7a98u: goto label_1f7a98;
        case 0x1f7a9cu: goto label_1f7a9c;
        case 0x1f7aa0u: goto label_1f7aa0;
        case 0x1f7aa4u: goto label_1f7aa4;
        case 0x1f7aa8u: goto label_1f7aa8;
        case 0x1f7aacu: goto label_1f7aac;
        case 0x1f7ab0u: goto label_1f7ab0;
        case 0x1f7ab4u: goto label_1f7ab4;
        case 0x1f7ab8u: goto label_1f7ab8;
        case 0x1f7abcu: goto label_1f7abc;
        case 0x1f7ac0u: goto label_1f7ac0;
        case 0x1f7ac4u: goto label_1f7ac4;
        case 0x1f7ac8u: goto label_1f7ac8;
        case 0x1f7accu: goto label_1f7acc;
        case 0x1f7ad0u: goto label_1f7ad0;
        case 0x1f7ad4u: goto label_1f7ad4;
        case 0x1f7ad8u: goto label_1f7ad8;
        case 0x1f7adcu: goto label_1f7adc;
        case 0x1f7ae0u: goto label_1f7ae0;
        case 0x1f7ae4u: goto label_1f7ae4;
        case 0x1f7ae8u: goto label_1f7ae8;
        case 0x1f7aecu: goto label_1f7aec;
        case 0x1f7af0u: goto label_1f7af0;
        case 0x1f7af4u: goto label_1f7af4;
        case 0x1f7af8u: goto label_1f7af8;
        case 0x1f7afcu: goto label_1f7afc;
        case 0x1f7b00u: goto label_1f7b00;
        case 0x1f7b04u: goto label_1f7b04;
        case 0x1f7b08u: goto label_1f7b08;
        case 0x1f7b0cu: goto label_1f7b0c;
        case 0x1f7b10u: goto label_1f7b10;
        case 0x1f7b14u: goto label_1f7b14;
        case 0x1f7b18u: goto label_1f7b18;
        case 0x1f7b1cu: goto label_1f7b1c;
        case 0x1f7b20u: goto label_1f7b20;
        case 0x1f7b24u: goto label_1f7b24;
        case 0x1f7b28u: goto label_1f7b28;
        case 0x1f7b2cu: goto label_1f7b2c;
        case 0x1f7b30u: goto label_1f7b30;
        case 0x1f7b34u: goto label_1f7b34;
        case 0x1f7b38u: goto label_1f7b38;
        case 0x1f7b3cu: goto label_1f7b3c;
        case 0x1f7b40u: goto label_1f7b40;
        case 0x1f7b44u: goto label_1f7b44;
        case 0x1f7b48u: goto label_1f7b48;
        case 0x1f7b4cu: goto label_1f7b4c;
        case 0x1f7b50u: goto label_1f7b50;
        case 0x1f7b54u: goto label_1f7b54;
        case 0x1f7b58u: goto label_1f7b58;
        case 0x1f7b5cu: goto label_1f7b5c;
        case 0x1f7b60u: goto label_1f7b60;
        case 0x1f7b64u: goto label_1f7b64;
        case 0x1f7b68u: goto label_1f7b68;
        case 0x1f7b6cu: goto label_1f7b6c;
        case 0x1f7b70u: goto label_1f7b70;
        case 0x1f7b74u: goto label_1f7b74;
        case 0x1f7b78u: goto label_1f7b78;
        case 0x1f7b7cu: goto label_1f7b7c;
        case 0x1f7b80u: goto label_1f7b80;
        case 0x1f7b84u: goto label_1f7b84;
        case 0x1f7b88u: goto label_1f7b88;
        case 0x1f7b8cu: goto label_1f7b8c;
        case 0x1f7b90u: goto label_1f7b90;
        case 0x1f7b94u: goto label_1f7b94;
        case 0x1f7b98u: goto label_1f7b98;
        case 0x1f7b9cu: goto label_1f7b9c;
        case 0x1f7ba0u: goto label_1f7ba0;
        case 0x1f7ba4u: goto label_1f7ba4;
        case 0x1f7ba8u: goto label_1f7ba8;
        case 0x1f7bacu: goto label_1f7bac;
        case 0x1f7bb0u: goto label_1f7bb0;
        case 0x1f7bb4u: goto label_1f7bb4;
        case 0x1f7bb8u: goto label_1f7bb8;
        case 0x1f7bbcu: goto label_1f7bbc;
        case 0x1f7bc0u: goto label_1f7bc0;
        case 0x1f7bc4u: goto label_1f7bc4;
        case 0x1f7bc8u: goto label_1f7bc8;
        case 0x1f7bccu: goto label_1f7bcc;
        case 0x1f7bd0u: goto label_1f7bd0;
        case 0x1f7bd4u: goto label_1f7bd4;
        case 0x1f7bd8u: goto label_1f7bd8;
        case 0x1f7bdcu: goto label_1f7bdc;
        case 0x1f7be0u: goto label_1f7be0;
        case 0x1f7be4u: goto label_1f7be4;
        case 0x1f7be8u: goto label_1f7be8;
        case 0x1f7becu: goto label_1f7bec;
        case 0x1f7bf0u: goto label_1f7bf0;
        case 0x1f7bf4u: goto label_1f7bf4;
        case 0x1f7bf8u: goto label_1f7bf8;
        case 0x1f7bfcu: goto label_1f7bfc;
        case 0x1f7c00u: goto label_1f7c00;
        case 0x1f7c04u: goto label_1f7c04;
        case 0x1f7c08u: goto label_1f7c08;
        case 0x1f7c0cu: goto label_1f7c0c;
        case 0x1f7c10u: goto label_1f7c10;
        case 0x1f7c14u: goto label_1f7c14;
        case 0x1f7c18u: goto label_1f7c18;
        case 0x1f7c1cu: goto label_1f7c1c;
        case 0x1f7c20u: goto label_1f7c20;
        case 0x1f7c24u: goto label_1f7c24;
        case 0x1f7c28u: goto label_1f7c28;
        case 0x1f7c2cu: goto label_1f7c2c;
        case 0x1f7c30u: goto label_1f7c30;
        case 0x1f7c34u: goto label_1f7c34;
        case 0x1f7c38u: goto label_1f7c38;
        case 0x1f7c3cu: goto label_1f7c3c;
        case 0x1f7c40u: goto label_1f7c40;
        case 0x1f7c44u: goto label_1f7c44;
        case 0x1f7c48u: goto label_1f7c48;
        case 0x1f7c4cu: goto label_1f7c4c;
        case 0x1f7c50u: goto label_1f7c50;
        case 0x1f7c54u: goto label_1f7c54;
        case 0x1f7c58u: goto label_1f7c58;
        case 0x1f7c5cu: goto label_1f7c5c;
        case 0x1f7c60u: goto label_1f7c60;
        case 0x1f7c64u: goto label_1f7c64;
        case 0x1f7c68u: goto label_1f7c68;
        case 0x1f7c6cu: goto label_1f7c6c;
        case 0x1f7c70u: goto label_1f7c70;
        case 0x1f7c74u: goto label_1f7c74;
        case 0x1f7c78u: goto label_1f7c78;
        case 0x1f7c7cu: goto label_1f7c7c;
        case 0x1f7c80u: goto label_1f7c80;
        case 0x1f7c84u: goto label_1f7c84;
        case 0x1f7c88u: goto label_1f7c88;
        case 0x1f7c8cu: goto label_1f7c8c;
        case 0x1f7c90u: goto label_1f7c90;
        case 0x1f7c94u: goto label_1f7c94;
        case 0x1f7c98u: goto label_1f7c98;
        case 0x1f7c9cu: goto label_1f7c9c;
        case 0x1f7ca0u: goto label_1f7ca0;
        case 0x1f7ca4u: goto label_1f7ca4;
        case 0x1f7ca8u: goto label_1f7ca8;
        case 0x1f7cacu: goto label_1f7cac;
        case 0x1f7cb0u: goto label_1f7cb0;
        case 0x1f7cb4u: goto label_1f7cb4;
        case 0x1f7cb8u: goto label_1f7cb8;
        case 0x1f7cbcu: goto label_1f7cbc;
        case 0x1f7cc0u: goto label_1f7cc0;
        case 0x1f7cc4u: goto label_1f7cc4;
        case 0x1f7cc8u: goto label_1f7cc8;
        case 0x1f7cccu: goto label_1f7ccc;
        case 0x1f7cd0u: goto label_1f7cd0;
        case 0x1f7cd4u: goto label_1f7cd4;
        case 0x1f7cd8u: goto label_1f7cd8;
        case 0x1f7cdcu: goto label_1f7cdc;
        case 0x1f7ce0u: goto label_1f7ce0;
        case 0x1f7ce4u: goto label_1f7ce4;
        case 0x1f7ce8u: goto label_1f7ce8;
        case 0x1f7cecu: goto label_1f7cec;
        case 0x1f7cf0u: goto label_1f7cf0;
        case 0x1f7cf4u: goto label_1f7cf4;
        case 0x1f7cf8u: goto label_1f7cf8;
        case 0x1f7cfcu: goto label_1f7cfc;
        case 0x1f7d00u: goto label_1f7d00;
        case 0x1f7d04u: goto label_1f7d04;
        case 0x1f7d08u: goto label_1f7d08;
        case 0x1f7d0cu: goto label_1f7d0c;
        case 0x1f7d10u: goto label_1f7d10;
        case 0x1f7d14u: goto label_1f7d14;
        case 0x1f7d18u: goto label_1f7d18;
        case 0x1f7d1cu: goto label_1f7d1c;
        case 0x1f7d20u: goto label_1f7d20;
        case 0x1f7d24u: goto label_1f7d24;
        case 0x1f7d28u: goto label_1f7d28;
        case 0x1f7d2cu: goto label_1f7d2c;
        case 0x1f7d30u: goto label_1f7d30;
        case 0x1f7d34u: goto label_1f7d34;
        case 0x1f7d38u: goto label_1f7d38;
        case 0x1f7d3cu: goto label_1f7d3c;
        case 0x1f7d40u: goto label_1f7d40;
        case 0x1f7d44u: goto label_1f7d44;
        case 0x1f7d48u: goto label_1f7d48;
        case 0x1f7d4cu: goto label_1f7d4c;
        case 0x1f7d50u: goto label_1f7d50;
        case 0x1f7d54u: goto label_1f7d54;
        case 0x1f7d58u: goto label_1f7d58;
        case 0x1f7d5cu: goto label_1f7d5c;
        case 0x1f7d60u: goto label_1f7d60;
        case 0x1f7d64u: goto label_1f7d64;
        case 0x1f7d68u: goto label_1f7d68;
        case 0x1f7d6cu: goto label_1f7d6c;
        case 0x1f7d70u: goto label_1f7d70;
        case 0x1f7d74u: goto label_1f7d74;
        case 0x1f7d78u: goto label_1f7d78;
        case 0x1f7d7cu: goto label_1f7d7c;
        case 0x1f7d80u: goto label_1f7d80;
        case 0x1f7d84u: goto label_1f7d84;
        case 0x1f7d88u: goto label_1f7d88;
        case 0x1f7d8cu: goto label_1f7d8c;
        case 0x1f7d90u: goto label_1f7d90;
        case 0x1f7d94u: goto label_1f7d94;
        case 0x1f7d98u: goto label_1f7d98;
        case 0x1f7d9cu: goto label_1f7d9c;
        case 0x1f7da0u: goto label_1f7da0;
        case 0x1f7da4u: goto label_1f7da4;
        case 0x1f7da8u: goto label_1f7da8;
        case 0x1f7dacu: goto label_1f7dac;
        case 0x1f7db0u: goto label_1f7db0;
        case 0x1f7db4u: goto label_1f7db4;
        case 0x1f7db8u: goto label_1f7db8;
        case 0x1f7dbcu: goto label_1f7dbc;
        case 0x1f7dc0u: goto label_1f7dc0;
        case 0x1f7dc4u: goto label_1f7dc4;
        case 0x1f7dc8u: goto label_1f7dc8;
        case 0x1f7dccu: goto label_1f7dcc;
        case 0x1f7dd0u: goto label_1f7dd0;
        case 0x1f7dd4u: goto label_1f7dd4;
        case 0x1f7dd8u: goto label_1f7dd8;
        case 0x1f7ddcu: goto label_1f7ddc;
        case 0x1f7de0u: goto label_1f7de0;
        case 0x1f7de4u: goto label_1f7de4;
        case 0x1f7de8u: goto label_1f7de8;
        case 0x1f7decu: goto label_1f7dec;
        case 0x1f7df0u: goto label_1f7df0;
        case 0x1f7df4u: goto label_1f7df4;
        case 0x1f7df8u: goto label_1f7df8;
        case 0x1f7dfcu: goto label_1f7dfc;
        case 0x1f7e00u: goto label_1f7e00;
        case 0x1f7e04u: goto label_1f7e04;
        case 0x1f7e08u: goto label_1f7e08;
        case 0x1f7e0cu: goto label_1f7e0c;
        case 0x1f7e10u: goto label_1f7e10;
        case 0x1f7e14u: goto label_1f7e14;
        case 0x1f7e18u: goto label_1f7e18;
        case 0x1f7e1cu: goto label_1f7e1c;
        case 0x1f7e20u: goto label_1f7e20;
        case 0x1f7e24u: goto label_1f7e24;
        case 0x1f7e28u: goto label_1f7e28;
        case 0x1f7e2cu: goto label_1f7e2c;
        case 0x1f7e30u: goto label_1f7e30;
        case 0x1f7e34u: goto label_1f7e34;
        case 0x1f7e38u: goto label_1f7e38;
        case 0x1f7e3cu: goto label_1f7e3c;
        case 0x1f7e40u: goto label_1f7e40;
        case 0x1f7e44u: goto label_1f7e44;
        case 0x1f7e48u: goto label_1f7e48;
        case 0x1f7e4cu: goto label_1f7e4c;
        case 0x1f7e50u: goto label_1f7e50;
        case 0x1f7e54u: goto label_1f7e54;
        case 0x1f7e58u: goto label_1f7e58;
        case 0x1f7e5cu: goto label_1f7e5c;
        case 0x1f7e60u: goto label_1f7e60;
        case 0x1f7e64u: goto label_1f7e64;
        case 0x1f7e68u: goto label_1f7e68;
        case 0x1f7e6cu: goto label_1f7e6c;
        case 0x1f7e70u: goto label_1f7e70;
        case 0x1f7e74u: goto label_1f7e74;
        case 0x1f7e78u: goto label_1f7e78;
        case 0x1f7e7cu: goto label_1f7e7c;
        case 0x1f7e80u: goto label_1f7e80;
        case 0x1f7e84u: goto label_1f7e84;
        case 0x1f7e88u: goto label_1f7e88;
        case 0x1f7e8cu: goto label_1f7e8c;
        case 0x1f7e90u: goto label_1f7e90;
        case 0x1f7e94u: goto label_1f7e94;
        case 0x1f7e98u: goto label_1f7e98;
        case 0x1f7e9cu: goto label_1f7e9c;
        case 0x1f7ea0u: goto label_1f7ea0;
        case 0x1f7ea4u: goto label_1f7ea4;
        case 0x1f7ea8u: goto label_1f7ea8;
        case 0x1f7eacu: goto label_1f7eac;
        case 0x1f7eb0u: goto label_1f7eb0;
        case 0x1f7eb4u: goto label_1f7eb4;
        case 0x1f7eb8u: goto label_1f7eb8;
        case 0x1f7ebcu: goto label_1f7ebc;
        case 0x1f7ec0u: goto label_1f7ec0;
        case 0x1f7ec4u: goto label_1f7ec4;
        case 0x1f7ec8u: goto label_1f7ec8;
        case 0x1f7eccu: goto label_1f7ecc;
        case 0x1f7ed0u: goto label_1f7ed0;
        case 0x1f7ed4u: goto label_1f7ed4;
        case 0x1f7ed8u: goto label_1f7ed8;
        case 0x1f7edcu: goto label_1f7edc;
        case 0x1f7ee0u: goto label_1f7ee0;
        case 0x1f7ee4u: goto label_1f7ee4;
        case 0x1f7ee8u: goto label_1f7ee8;
        case 0x1f7eecu: goto label_1f7eec;
        case 0x1f7ef0u: goto label_1f7ef0;
        case 0x1f7ef4u: goto label_1f7ef4;
        case 0x1f7ef8u: goto label_1f7ef8;
        case 0x1f7efcu: goto label_1f7efc;
        case 0x1f7f00u: goto label_1f7f00;
        case 0x1f7f04u: goto label_1f7f04;
        case 0x1f7f08u: goto label_1f7f08;
        case 0x1f7f0cu: goto label_1f7f0c;
        case 0x1f7f10u: goto label_1f7f10;
        case 0x1f7f14u: goto label_1f7f14;
        case 0x1f7f18u: goto label_1f7f18;
        case 0x1f7f1cu: goto label_1f7f1c;
        case 0x1f7f20u: goto label_1f7f20;
        case 0x1f7f24u: goto label_1f7f24;
        case 0x1f7f28u: goto label_1f7f28;
        case 0x1f7f2cu: goto label_1f7f2c;
        case 0x1f7f30u: goto label_1f7f30;
        case 0x1f7f34u: goto label_1f7f34;
        case 0x1f7f38u: goto label_1f7f38;
        case 0x1f7f3cu: goto label_1f7f3c;
        case 0x1f7f40u: goto label_1f7f40;
        case 0x1f7f44u: goto label_1f7f44;
        case 0x1f7f48u: goto label_1f7f48;
        case 0x1f7f4cu: goto label_1f7f4c;
        case 0x1f7f50u: goto label_1f7f50;
        case 0x1f7f54u: goto label_1f7f54;
        case 0x1f7f58u: goto label_1f7f58;
        case 0x1f7f5cu: goto label_1f7f5c;
        case 0x1f7f60u: goto label_1f7f60;
        case 0x1f7f64u: goto label_1f7f64;
        case 0x1f7f68u: goto label_1f7f68;
        case 0x1f7f6cu: goto label_1f7f6c;
        case 0x1f7f70u: goto label_1f7f70;
        case 0x1f7f74u: goto label_1f7f74;
        case 0x1f7f78u: goto label_1f7f78;
        case 0x1f7f7cu: goto label_1f7f7c;
        case 0x1f7f80u: goto label_1f7f80;
        case 0x1f7f84u: goto label_1f7f84;
        case 0x1f7f88u: goto label_1f7f88;
        case 0x1f7f8cu: goto label_1f7f8c;
        case 0x1f7f90u: goto label_1f7f90;
        case 0x1f7f94u: goto label_1f7f94;
        case 0x1f7f98u: goto label_1f7f98;
        case 0x1f7f9cu: goto label_1f7f9c;
        case 0x1f7fa0u: goto label_1f7fa0;
        case 0x1f7fa4u: goto label_1f7fa4;
        case 0x1f7fa8u: goto label_1f7fa8;
        case 0x1f7facu: goto label_1f7fac;
        case 0x1f7fb0u: goto label_1f7fb0;
        case 0x1f7fb4u: goto label_1f7fb4;
        case 0x1f7fb8u: goto label_1f7fb8;
        case 0x1f7fbcu: goto label_1f7fbc;
        case 0x1f7fc0u: goto label_1f7fc0;
        case 0x1f7fc4u: goto label_1f7fc4;
        case 0x1f7fc8u: goto label_1f7fc8;
        case 0x1f7fccu: goto label_1f7fcc;
        case 0x1f7fd0u: goto label_1f7fd0;
        case 0x1f7fd4u: goto label_1f7fd4;
        case 0x1f7fd8u: goto label_1f7fd8;
        case 0x1f7fdcu: goto label_1f7fdc;
        case 0x1f7fe0u: goto label_1f7fe0;
        case 0x1f7fe4u: goto label_1f7fe4;
        case 0x1f7fe8u: goto label_1f7fe8;
        case 0x1f7fecu: goto label_1f7fec;
        case 0x1f7ff0u: goto label_1f7ff0;
        case 0x1f7ff4u: goto label_1f7ff4;
        case 0x1f7ff8u: goto label_1f7ff8;
        case 0x1f7ffcu: goto label_1f7ffc;
        case 0x1f8000u: goto label_1f8000;
        case 0x1f8004u: goto label_1f8004;
        case 0x1f8008u: goto label_1f8008;
        case 0x1f800cu: goto label_1f800c;
        case 0x1f8010u: goto label_1f8010;
        case 0x1f8014u: goto label_1f8014;
        case 0x1f8018u: goto label_1f8018;
        case 0x1f801cu: goto label_1f801c;
        case 0x1f8020u: goto label_1f8020;
        case 0x1f8024u: goto label_1f8024;
        case 0x1f8028u: goto label_1f8028;
        case 0x1f802cu: goto label_1f802c;
        case 0x1f8030u: goto label_1f8030;
        case 0x1f8034u: goto label_1f8034;
        case 0x1f8038u: goto label_1f8038;
        case 0x1f803cu: goto label_1f803c;
        case 0x1f8040u: goto label_1f8040;
        case 0x1f8044u: goto label_1f8044;
        case 0x1f8048u: goto label_1f8048;
        case 0x1f804cu: goto label_1f804c;
        case 0x1f8050u: goto label_1f8050;
        case 0x1f8054u: goto label_1f8054;
        case 0x1f8058u: goto label_1f8058;
        case 0x1f805cu: goto label_1f805c;
        case 0x1f8060u: goto label_1f8060;
        case 0x1f8064u: goto label_1f8064;
        case 0x1f8068u: goto label_1f8068;
        case 0x1f806cu: goto label_1f806c;
        case 0x1f8070u: goto label_1f8070;
        case 0x1f8074u: goto label_1f8074;
        case 0x1f8078u: goto label_1f8078;
        case 0x1f807cu: goto label_1f807c;
        case 0x1f8080u: goto label_1f8080;
        case 0x1f8084u: goto label_1f8084;
        case 0x1f8088u: goto label_1f8088;
        case 0x1f808cu: goto label_1f808c;
        default: break;
    }

    ctx->pc = 0x1f7100u;

label_1f7100:
    // 0x1f7100: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f7100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f7104:
    // 0x1f7104: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1f7104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_1f7108:
    // 0x1f7108: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f7108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f710c:
    // 0x1f710c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f7110:
    // 0x1f7110: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f7110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f7114:
    // 0x1f7114: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f7114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f7118:
    // 0x1f7118: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f7118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f711c:
    // 0x1f711c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f7120:
    // 0x1f7120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f7120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f7124:
    // 0x1f7124: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f7128:
    // 0x1f7128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f712c:
    // 0x1f712c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x1f712cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
label_1f7130:
    // 0x1f7130: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7134:
    // 0x1f7134: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x1f7134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_1f7138:
    // 0x1f7138: 0x247e3520  addiu       $fp, $v1, 0x3520
    ctx->pc = 0x1f7138u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
label_1f713c:
    // 0x1f713c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7140:
    // 0x1f7140: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f7140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1f7144:
    // 0x1f7144: 0x24630880  addiu       $v1, $v1, 0x880
    ctx->pc = 0x1f7144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
label_1f7148:
    // 0x1f7148: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1f7148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1f714c:
    // 0x1f714c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f714cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7150:
    // 0x1f7150: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f7150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1f7154:
    // 0x1f7154: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1f7154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1f7158:
    // 0x1f7158: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x1f7158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1f715c:
    // 0x1f715c: 0x102003bf  beqz        $at, . + 4 + (0x3BF << 2)
label_1f7160:
    if (ctx->pc == 0x1F7160u) {
        ctx->pc = 0x1F7164u;
        goto label_1f7164;
    }
    ctx->pc = 0x1F715Cu;
    {
        const bool branch_taken_0x1f715c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f715c) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F7164u;
label_1f7164:
    // 0x1f7164: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f7164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_1f7168:
    // 0x1f7168: 0x24830cd0  addiu       $v1, $a0, 0xCD0
    ctx->pc = 0x1f7168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3280));
label_1f716c:
    // 0x1f716c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f716cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f7170:
    // 0x1f7170: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f7170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f7174:
    // 0x1f7174: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f7178:
    // 0x1f7178: 0x600008  jr          $v1
label_1f717c:
    if (ctx->pc == 0x1F717Cu) {
        ctx->pc = 0x1F7180u;
        goto label_1f7180;
    }
    ctx->pc = 0x1F7178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7178u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F7180u;
label_1f7180:
    // 0x1f7180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7184:
    // 0x1f7184: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7188:
    // 0x1f7188: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f7188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1f718c:
    // 0x1f718c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f718cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7190:
    // 0x1f7190: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7194:
    // 0x1f7194: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1f7194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
label_1f7198:
    // 0x1f7198: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f719c:
    // 0x1f719c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f71a0:
    // 0x1f71a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f71a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1f71a4:
    // 0x1f71a4: 0x24060417  addiu       $a2, $zero, 0x417
    ctx->pc = 0x1f71a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
label_1f71a8:
    // 0x1f71a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f71a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f71ac:
    // 0x1f71ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f71acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f71b0:
    // 0x1f71b0: 0xc0965d0  jal         func_259740
label_1f71b4:
    if (ctx->pc == 0x1F71B4u) {
        ctx->pc = 0x1F71B8u;
        goto label_1f71b8;
    }
    ctx->pc = 0x1F71B0u;
    SET_GPR_U32(ctx, 31, 0x1F71B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F71B0u, 0x1F71B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71B8u;
label_1f71b8:
    // 0x1f71b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1f71b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f71bc:
    // 0x1f71bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f71bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f71c0:
    // 0x1f71c0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f71c4:
    // 0x1f71c4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1f71c8:
    // 0x1f71c8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1f71c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_1f71cc:
    // 0x1f71cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f71ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f71d0:
    // 0x1f71d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f71d4:
    // 0x1f71d4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f71d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f71d8:
    // 0x1f71d8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1f71d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1f71dc:
    // 0x1f71dc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1f71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_1f71e0:
    // 0x1f71e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f71e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f71e4:
    // 0x1f71e4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f71e8:
    // 0x1f71e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f71ec:
    // 0x1f71ec: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f71ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_1f71f0:
    // 0x1f71f0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1f71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_1f71f4:
    // 0x1f71f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f71f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f71f8:
    // 0x1f71f8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f71fc:
    // 0x1f71fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f71fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7200:
    // 0x1f7200: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f7200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1f7204:
    // 0x1f7204: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7208:
    // 0x1f7208: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f720c:
    // 0x1f720c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1f7210:
    // 0x1f7210: 0x34740018  ori         $s4, $v1, 0x18
    ctx->pc = 0x1f7210u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
label_1f7214:
    // 0x1f7214: 0xac940030  sw          $s4, 0x30($a0)
    ctx->pc = 0x1f7214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 20));
label_1f7218:
    // 0x1f7218: 0x8fb500c8  lw          $s5, 0xC8($sp)
    ctx->pc = 0x1f7218u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f721c:
    // 0x1f721c: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x1f721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_1f7220:
    // 0x1f7220: 0x24710120  addiu       $s1, $v1, 0x120
    ctx->pc = 0x1f7220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1f7224:
    // 0x1f7224: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1f7224u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1f7228:
    // 0x1f7228: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1f7228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1f722c:
    // 0x1f722c: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1f722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
label_1f7230:
    // 0x1f7230: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1f7230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
label_1f7234:
    // 0x1f7234: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1f7234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_1f7238:
    // 0x1f7238: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1f7238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1f723c:
    // 0x1f723c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f723cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1f7240:
    // 0x1f7240: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1f7240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_1f7244:
    // 0x1f7244: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f7244u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1f7248:
    // 0x1f7248: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f724c:
    // 0x1f724c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1f724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1f7250:
    // 0x1f7250: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x1f7250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_1f7254:
    // 0x1f7254: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f7254u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1f7258:
    // 0x1f7258: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f725c:
    // 0x1f725c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1f725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_1f7260:
    // 0x1f7260: 0x24710240  addiu       $s1, $v1, 0x240
    ctx->pc = 0x1f7260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
label_1f7264:
    // 0x1f7264: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f7264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1f7268:
    // 0x1f7268: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x1f7268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f726c:
    // 0x1f726c: 0x8cc40058  lw          $a0, 0x58($a2)
    ctx->pc = 0x1f726cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_1f7270:
    // 0x1f7270: 0x249102d0  addiu       $s1, $a0, 0x2D0
    ctx->pc = 0x1f7270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
label_1f7274:
    // 0x1f7274: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1f7274u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1f7278:
    // 0x1f7278: 0x8e480024  lw          $t0, 0x24($s2)
    ctx->pc = 0x1f7278u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1f727c:
    // 0x1f727c: 0x35030002  ori         $v1, $t0, 0x2
    ctx->pc = 0x1f727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_1f7280:
    // 0x1f7280: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1f7280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_1f7284:
    // 0x1f7284: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f7284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1f7288:
    // 0x1f7288: 0x3c044496  lui         $a0, 0x4496
    ctx->pc = 0x1f7288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17558 << 16));
label_1f728c:
    // 0x1f728c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f728cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7290:
    // 0x1f7290: 0x0  nop
    ctx->pc = 0x1f7290u;
    // NOP
label_1f7294:
    // 0x1f7294: 0xe64000a0  swc1        $f0, 0xA0($s2)
    ctx->pc = 0x1f7294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
label_1f7298:
    // 0x1f7298: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x1f7298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
label_1f729c:
    // 0x1f729c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f729cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f72a0:
    // 0x1f72a0: 0x0  nop
    ctx->pc = 0x1f72a0u;
    // NOP
label_1f72a4:
    // 0x1f72a4: 0xe64000a4  swc1        $f0, 0xA4($s2)
    ctx->pc = 0x1f72a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
label_1f72a8:
    // 0x1f72a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f72a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f72ac:
    // 0x1f72ac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f72acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f72b0:
    // 0x1f72b0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f72b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_1f72b4:
    // 0x1f72b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f72b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f72b8:
    // 0x1f72b8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f72bc:
    // 0x1f72bc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1f72bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_1f72c0:
    // 0x1f72c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f72c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f72c4:
    // 0x1f72c4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f72c8:
    // 0x1f72c8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f72c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_1f72cc:
    // 0x1f72cc: 0x3c04c080  lui         $a0, 0xC080
    ctx->pc = 0x1f72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49280 << 16));
label_1f72d0:
    // 0x1f72d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f72d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f72d4:
    // 0x1f72d4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f72d8:
    // 0x1f72d8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f72d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f72dc:
    // 0x1f72dc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x1f72dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_1f72e0:
    // 0x1f72e0: 0x27c30150  addiu       $v1, $fp, 0x150
    ctx->pc = 0x1f72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
label_1f72e4:
    // 0x1f72e4: 0x9477002e  lhu         $s7, 0x2E($v1)
    ctx->pc = 0x1f72e4u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
label_1f72e8:
    // 0x1f72e8: 0x36f60003  ori         $s6, $s7, 0x3
    ctx->pc = 0x1f72e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)3);
label_1f72ec:
    // 0x1f72ec: 0xa476002e  sh          $s6, 0x2E($v1)
    ctx->pc = 0x1f72ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 22));
label_1f72f0:
    // 0x1f72f0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f72f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f72f4:
    // 0x1f72f4: 0x24a310b0  addiu       $v1, $a1, 0x10B0
    ctx->pc = 0x1f72f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
label_1f72f8:
    // 0x1f72f8: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x1f72f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_1f72fc:
    // 0x1f72fc: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1f72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1f7300:
    // 0x1f7300: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1f7300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1f7304:
    // 0x1f7304: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f7304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1f7308:
    // 0x1f7308: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1f7308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1f730c:
    // 0x1f730c: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1f730cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
label_1f7310:
    // 0x1f7310: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1f7310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7314:
    // 0x1f7314: 0x8fb500c8  lw          $s5, 0xC8($sp)
    ctx->pc = 0x1f7314u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7318:
    // 0x1f7318: 0xa6b4127e  sh          $s4, 0x127E($s5)
    ctx->pc = 0x1f7318u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4734), (uint16_t)GPR_U32(ctx, 20));
label_1f731c:
    // 0x1f731c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f731cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7320:
    // 0x1f7320: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f7320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f7324:
    // 0x1f7324: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1f7324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_1f7328:
    // 0x1f7328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f7328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1f732c:
    // 0x1f732c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f732cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1f7330:
    // 0x1f7330: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f7330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1f7334:
    // 0x1f7334: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1f7334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1f7338:
    // 0x1f7338: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1f7338u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f733c:
    // 0x1f733c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f733cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7340:
    // 0x1f7340: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x1f7340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
label_1f7344:
    // 0x1f7344: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f7344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1f7348:
    // 0x1f7348: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7348u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f734c:
    // 0x1f734c: 0xc067b18  jal         func_19EC60
label_1f7350:
    if (ctx->pc == 0x1F7350u) {
        ctx->pc = 0x1F7354u;
        goto label_1f7354;
    }
    ctx->pc = 0x1F734Cu;
    SET_GPR_U32(ctx, 31, 0x1F7354u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F734Cu, 0x1F7354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7354u;
label_1f7354:
    // 0x1f7354: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7354u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7358:
    // 0x1f7358: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1f7358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_1f735c:
    // 0x1f735c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1f735cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1f7360:
    // 0x1f7360: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f7360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f7364:
    // 0x1f7364: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7368:
    // 0x1f7368: 0x24040517  addiu       $a0, $zero, 0x517
    ctx->pc = 0x1f7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
label_1f736c:
    // 0x1f736c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1f7370:
    // 0x1f7370: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7374:
    // 0x1f7374: 0xc067b18  jal         func_19EC60
label_1f7378:
    if (ctx->pc == 0x1F7378u) {
        ctx->pc = 0x1F737Cu;
        goto label_1f737c;
    }
    ctx->pc = 0x1F7374u;
    SET_GPR_U32(ctx, 31, 0x1F737Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F7374u, 0x1F737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F737Cu;
label_1f737c:
    // 0x1f737c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f737cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7380:
    // 0x1f7380: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7384:
    // 0x1f7384: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x1f7384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
label_1f7388:
    // 0x1f7388: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f738c:
    // 0x1f738c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1f738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7390:
    // 0x1f7390: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f7390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1f7394:
    // 0x1f7394: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f7394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1f7398:
    // 0x1f7398: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x1f7398u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1f739c:
    // 0x1f739c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1f73a0:
    if (ctx->pc == 0x1F73A0u) {
        ctx->pc = 0x1F73A4u;
        goto label_1f73a4;
    }
    ctx->pc = 0x1F739Cu;
    {
        const bool branch_taken_0x1f739c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f739c) {
            ctx->pc = 0x1F73C0u;
            goto label_1f73c0;
        }
    }
    ctx->pc = 0x1F73A4u;
label_1f73a4:
    // 0x1f73a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f73a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1f73a8:
    // 0x1f73a8: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_1f73ac:
    // 0x1f73ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f73acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f73b0:
    // 0x1f73b0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f73b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_1f73b4:
    // 0x1f73b4: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x1f73b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1f73b8:
    // 0x1f73b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f73b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1f73bc:
    // 0x1f73bc: 0xac311a58  sw          $s1, 0x1A58($at)
    ctx->pc = 0x1f73bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6744), GPR_U32(ctx, 17));
label_1f73c0:
    // 0x1f73c0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f73c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f73c4:
    // 0x1f73c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f73c8:
    // 0x1f73c8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f73c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1f73cc:
    // 0x1f73cc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f73ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f73d0:
    // 0x1f73d0: 0xc0974dc  jal         func_25D370
label_1f73d4:
    if (ctx->pc == 0x1F73D4u) {
        ctx->pc = 0x1F73D8u;
        goto label_1f73d8;
    }
    ctx->pc = 0x1F73D0u;
    SET_GPR_U32(ctx, 31, 0x1F73D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F73D0u, 0x1F73D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73D8u;
label_1f73d8:
    // 0x1f73d8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f73dc:
    // 0x1f73dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f73dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1f73e0:
    // 0x1f73e0: 0x1060031e  beqz        $v1, . + 4 + (0x31E << 2)
label_1f73e4:
    if (ctx->pc == 0x1F73E4u) {
        ctx->pc = 0x1F73E8u;
        goto label_1f73e8;
    }
    ctx->pc = 0x1F73E0u;
    {
        const bool branch_taken_0x1f73e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f73e0) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F73E8u;
label_1f73e8:
    // 0x1f73e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f73ec:
    // 0x1f73ec: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f73ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f73f0:
    // 0x1f73f0: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1f73f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_1f73f4:
    // 0x1f73f4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f73f8:
    // 0x1f73f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f73fc:
    // 0x1f73fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f73fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1f7400:
    // 0x1f7400: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x1f7400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
label_1f7404:
    // 0x1f7404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f7404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7408:
    // 0x1f7408: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f7408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f740c:
    // 0x1f740c: 0xc0965d0  jal         func_259740
label_1f7410:
    if (ctx->pc == 0x1F7410u) {
        ctx->pc = 0x1F7414u;
        goto label_1f7414;
    }
    ctx->pc = 0x1F740Cu;
    SET_GPR_U32(ctx, 31, 0x1F7414u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F740Cu, 0x1F7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7414u;
label_1f7414:
    // 0x1f7414: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f7414u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7418:
    // 0x1f7418: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f7418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1f741c:
    // 0x1f741c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1f7420:
    // 0x1f7420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f7420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f7424:
    // 0x1f7424: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1f7424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
label_1f7428:
    // 0x1f7428: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1f7428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_1f742c:
    // 0x1f742c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f742cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7430:
    // 0x1f7430: 0xc067b18  jal         func_19EC60
label_1f7434:
    if (ctx->pc == 0x1F7434u) {
        ctx->pc = 0x1F7438u;
        goto label_1f7438;
    }
    ctx->pc = 0x1F7430u;
    SET_GPR_U32(ctx, 31, 0x1F7438u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F7430u, 0x1F7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7438u;
label_1f7438:
    // 0x1f7438: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f743c:
    // 0x1f743c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f743cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7440:
    // 0x1f7440: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7440u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7444:
    // 0x1f7444: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f7444u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7448:
    // 0x1f7448: 0xc0c7a24  jal         func_31E890
label_1f744c:
    if (ctx->pc == 0x1F744Cu) {
        ctx->pc = 0x1F7450u;
        goto label_1f7450;
    }
    ctx->pc = 0x1F7448u;
    SET_GPR_U32(ctx, 31, 0x1F7450u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F7448u, 0x1F7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7450u;
label_1f7450:
    // 0x1f7450: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7454:
    // 0x1f7454: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f7454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7458:
    // 0x1f7458: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7458u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f745c:
    // 0x1f745c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f745cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7460:
    // 0x1f7460: 0xc0c7a24  jal         func_31E890
label_1f7464:
    if (ctx->pc == 0x1F7464u) {
        ctx->pc = 0x1F7468u;
        goto label_1f7468;
    }
    ctx->pc = 0x1F7460u;
    SET_GPR_U32(ctx, 31, 0x1F7468u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F7460u, 0x1F7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7468u;
label_1f7468:
    // 0x1f7468: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f746c:
    // 0x1f746c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1f746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1f7470:
    // 0x1f7470: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7470u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7474:
    // 0x1f7474: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f7474u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7478:
    // 0x1f7478: 0xc0c7a24  jal         func_31E890
label_1f747c:
    if (ctx->pc == 0x1F747Cu) {
        ctx->pc = 0x1F7480u;
        goto label_1f7480;
    }
    ctx->pc = 0x1F7478u;
    SET_GPR_U32(ctx, 31, 0x1F7480u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F7478u, 0x1F7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7480u;
label_1f7480:
    // 0x1f7480: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7484:
    // 0x1f7484: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7488:
    // 0x1f7488: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x1f7488u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
label_1f748c:
    // 0x1f748c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1f748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1f7490:
    // 0x1f7490: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1f7490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1f7494:
    // 0x1f7494: 0x106002f1  beqz        $v1, . + 4 + (0x2F1 << 2)
label_1f7498:
    if (ctx->pc == 0x1F7498u) {
        ctx->pc = 0x1F749Cu;
        goto label_1f749c;
    }
    ctx->pc = 0x1F7494u;
    {
        const bool branch_taken_0x1f7494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7494) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F749Cu;
label_1f749c:
    // 0x1f749c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f74a0:
    // 0x1f74a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f74a4:
    // 0x1f74a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f74a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f74a8:
    // 0x1f74a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f74a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f74ac:
    // 0x1f74ac: 0xc0c7a24  jal         func_31E890
label_1f74b0:
    if (ctx->pc == 0x1F74B0u) {
        ctx->pc = 0x1F74B4u;
        goto label_1f74b4;
    }
    ctx->pc = 0x1F74ACu;
    SET_GPR_U32(ctx, 31, 0x1F74B4u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F74ACu, 0x1F74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74B4u;
label_1f74b4:
    // 0x1f74b4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f74b8:
    // 0x1f74b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f74b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f74bc:
    // 0x1f74bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f74bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f74c0:
    // 0x1f74c0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f74c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f74c4:
    // 0x1f74c4: 0xc0c7a24  jal         func_31E890
label_1f74c8:
    if (ctx->pc == 0x1F74C8u) {
        ctx->pc = 0x1F74CCu;
        goto label_1f74cc;
    }
    ctx->pc = 0x1F74C4u;
    SET_GPR_U32(ctx, 31, 0x1F74CCu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F74C4u, 0x1F74CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74CCu;
label_1f74cc:
    // 0x1f74cc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f74ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f74d0:
    // 0x1f74d0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f74d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f74d4:
    // 0x1f74d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f74d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f74d8:
    // 0x1f74d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f74d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f74dc:
    // 0x1f74dc: 0xc0c7a24  jal         func_31E890
label_1f74e0:
    if (ctx->pc == 0x1F74E0u) {
        ctx->pc = 0x1F74E4u;
        goto label_1f74e4;
    }
    ctx->pc = 0x1F74DCu;
    SET_GPR_U32(ctx, 31, 0x1F74E4u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F74DCu, 0x1F74E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74E4u;
label_1f74e4:
    // 0x1f74e4: 0x100002dd  b           . + 4 + (0x2DD << 2)
label_1f74e8:
    if (ctx->pc == 0x1F74E8u) {
        ctx->pc = 0x1F74ECu;
        goto label_1f74ec;
    }
    ctx->pc = 0x1F74E4u;
    {
        const bool branch_taken_0x1f74e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f74e4) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F74ECu;
label_1f74ec:
    // 0x1f74ec: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f74f0:
    // 0x1f74f0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1f74f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1f74f4:
    // 0x1f74f4: 0xc0974dc  jal         func_25D370
label_1f74f8:
    if (ctx->pc == 0x1F74F8u) {
        ctx->pc = 0x1F74FCu;
        goto label_1f74fc;
    }
    ctx->pc = 0x1F74F4u;
    SET_GPR_U32(ctx, 31, 0x1F74FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F74F4u, 0x1F74FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74FCu;
label_1f74fc:
    // 0x1f74fc: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f74fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7500:
    // 0x1f7500: 0x910309e7  lbu         $v1, 0x9E7($t0)
    ctx->pc = 0x1f7500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
label_1f7504:
    // 0x1f7504: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_1f7508:
    if (ctx->pc == 0x1F7508u) {
        ctx->pc = 0x1F750Cu;
        goto label_1f750c;
    }
    ctx->pc = 0x1F7504u;
    {
        const bool branch_taken_0x1f7504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7504) {
            ctx->pc = 0x1F7584u;
            goto label_1f7584;
        }
    }
    ctx->pc = 0x1F750Cu;
label_1f750c:
    // 0x1f750c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7510:
    // 0x1f7510: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7514:
    // 0x1f7514: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f7514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1f7518:
    // 0x1f7518: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x1f7518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
label_1f751c:
    // 0x1f751c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f751cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7520:
    // 0x1f7520: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f7520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f7524:
    // 0x1f7524: 0xc0965d0  jal         func_259740
label_1f7528:
    if (ctx->pc == 0x1F7528u) {
        ctx->pc = 0x1F752Cu;
        goto label_1f752c;
    }
    ctx->pc = 0x1F7524u;
    SET_GPR_U32(ctx, 31, 0x1F752Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F7524u, 0x1F752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F752Cu;
label_1f752c:
    // 0x1f752c: 0xc067694  jal         func_19DA50
label_1f7530:
    if (ctx->pc == 0x1F7530u) {
        ctx->pc = 0x1F7534u;
        goto label_1f7534;
    }
    ctx->pc = 0x1F752Cu;
    SET_GPR_U32(ctx, 31, 0x1F7534u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F752Cu, 0x1F7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7534u;
label_1f7534:
    // 0x1f7534: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f7534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f7538:
    // 0x1f7538: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f7538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_1f753c:
    // 0x1f753c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f753cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f7540:
    // 0x1f7540: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7544:
    // 0x1f7544: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x1f7544u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
label_1f7548:
    // 0x1f7548: 0xc067694  jal         func_19DA50
label_1f754c:
    if (ctx->pc == 0x1F754Cu) {
        ctx->pc = 0x1F7550u;
        goto label_1f7550;
    }
    ctx->pc = 0x1F7548u;
    SET_GPR_U32(ctx, 31, 0x1F7550u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F7548u, 0x1F7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7550u;
label_1f7550:
    // 0x1f7550: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f7550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f7554:
    // 0x1f7554: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f7554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1f7558:
    // 0x1f7558: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1f755c:
    if (ctx->pc == 0x1F755Cu) {
        ctx->pc = 0x1F7560u;
        goto label_1f7560;
    }
    ctx->pc = 0x1F7558u;
    {
        const bool branch_taken_0x1f7558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7558) {
            ctx->pc = 0x1F7584u;
            goto label_1f7584;
        }
    }
    ctx->pc = 0x1F7560u;
label_1f7560:
    // 0x1f7560: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7564:
    // 0x1f7564: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1f7564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_1f7568:
    // 0x1f7568: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f7568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1f756c:
    // 0x1f756c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f756cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f7570:
    // 0x1f7570: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1f7570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
label_1f7574:
    // 0x1f7574: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f7574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1f7578:
    // 0x1f7578: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f757c:
    // 0x1f757c: 0xc067b18  jal         func_19EC60
label_1f7580:
    if (ctx->pc == 0x1F7580u) {
        ctx->pc = 0x1F7584u;
        goto label_1f7584;
    }
    ctx->pc = 0x1F757Cu;
    SET_GPR_U32(ctx, 31, 0x1F7584u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F757Cu, 0x1F7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7584u;
label_1f7584:
    // 0x1f7584: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7588:
    // 0x1f7588: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f758c:
    // 0x1f758c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1f758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7590:
    // 0x1f7590: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7594:
    // 0x1f7594: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f7594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7598:
    // 0x1f7598: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f7598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f759c:
    // 0x1f759c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1f75a0:
    // 0x1f75a0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f75a4:
    // 0x1f75a4: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f75a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_1f75a8:
    // 0x1f75a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f75a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1f75ac:
    // 0x1f75ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f75acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1f75b0:
    // 0x1f75b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f75b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1f75b4:
    // 0x1f75b4: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_1f75b8:
    if (ctx->pc == 0x1F75B8u) {
        ctx->pc = 0x1F75BCu;
        goto label_1f75bc;
    }
    ctx->pc = 0x1F75B4u;
    {
        const bool branch_taken_0x1f75b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f75b4) {
            ctx->pc = 0x1F76ACu;
            goto label_1f76ac;
        }
    }
    ctx->pc = 0x1F75BCu;
label_1f75bc:
    // 0x1f75bc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f75c0:
    // 0x1f75c0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f75c4:
    // 0x1f75c4: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x1f75c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f75c8:
    // 0x1f75c8: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x1f75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
label_1f75cc:
    // 0x1f75cc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1f75ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_1f75d0:
    // 0x1f75d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f75d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f75d4:
    // 0x1f75d4: 0x0  nop
    ctx->pc = 0x1f75d4u;
    // NOP
label_1f75d8:
    // 0x1f75d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f75d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f75dc:
    // 0x1f75dc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1f75dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1f75e0:
    // 0x1f75e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f75e4:
    // 0x1f75e4: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1f75e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f75e8:
    // 0x1f75e8: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x1f75e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f75ec:
    // 0x1f75ec: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1f75ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_1f75f0:
    // 0x1f75f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f75f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f75f4:
    // 0x1f75f4: 0x0  nop
    ctx->pc = 0x1f75f4u;
    // NOP
label_1f75f8:
    // 0x1f75f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f75f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f75fc:
    // 0x1f75fc: 0x0  nop
    ctx->pc = 0x1f75fcu;
    // NOP
label_1f7600:
    // 0x1f7600: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1f7604:
    if (ctx->pc == 0x1F7604u) {
        ctx->pc = 0x1F7608u;
        goto label_1f7608;
    }
    ctx->pc = 0x1F7600u;
    {
        const bool branch_taken_0x1f7600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7600) {
            ctx->pc = 0x1F7618u;
            goto label_1f7618;
        }
    }
    ctx->pc = 0x1F7608u;
label_1f7608:
    // 0x1f7608: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f760c:
    // 0x1f760c: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x1f760cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
label_1f7610:
    // 0x1f7610: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1f7610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1f7614:
    // 0x1f7614: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x1f7614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_1f7618:
    // 0x1f7618: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f761c:
    // 0x1f761c: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x1f761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7620:
    // 0x1f7620: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x1f7620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_1f7624:
    // 0x1f7624: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x1f7624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_1f7628:
    // 0x1f7628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f762c:
    // 0x1f762c: 0x0  nop
    ctx->pc = 0x1f762cu;
    // NOP
label_1f7630:
    // 0x1f7630: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f7630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f7634:
    // 0x1f7634: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f7634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_1f7638:
    // 0x1f7638: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f763c:
    // 0x1f763c: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x1f763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7640:
    // 0x1f7640: 0x3c033c0e  lui         $v1, 0x3C0E
    ctx->pc = 0x1f7640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15374 << 16));
label_1f7644:
    // 0x1f7644: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x1f7644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_1f7648:
    // 0x1f7648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f764c:
    // 0x1f764c: 0x0  nop
    ctx->pc = 0x1f764cu;
    // NOP
label_1f7650:
    // 0x1f7650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f7650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f7654:
    // 0x1f7654: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1f7654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1f7658:
    // 0x1f7658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f765c:
    // 0x1f765c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7660:
    // 0x1f7660: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7664:
    // 0x1f7664: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1f7664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_1f7668:
    // 0x1f7668: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1f7668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_1f766c:
    // 0x1f766c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f766cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7670:
    // 0x1f7670: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7674:
    // 0x1f7674: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7678:
    // 0x1f7678: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1f7678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1f767c:
    // 0x1f767c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1f767cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_1f7680:
    // 0x1f7680: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7684:
    // 0x1f7684: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7688:
    // 0x1f7688: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f768c:
    // 0x1f768c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1f768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_1f7690:
    // 0x1f7690: 0x3c054020  lui         $a1, 0x4020
    ctx->pc = 0x1f7690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16416 << 16));
label_1f7694:
    // 0x1f7694: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f7694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7698:
    // 0x1f7698: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f769c:
    // 0x1f769c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f76a0:
    // 0x1f76a0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f76a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1f76a4:
    // 0x1f76a4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1f76a8:
    if (ctx->pc == 0x1F76A8u) {
        ctx->pc = 0x1F76ACu;
        goto label_1f76ac;
    }
    ctx->pc = 0x1F76A4u;
    {
        const bool branch_taken_0x1f76a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76a4) {
            ctx->pc = 0x1F7798u;
            goto label_1f7798;
        }
    }
    ctx->pc = 0x1F76ACu;
label_1f76ac:
    // 0x1f76ac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f76acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f76b0:
    // 0x1f76b0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f76b4:
    // 0x1f76b4: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x1f76b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f76b8:
    // 0x1f76b8: 0x3c033e75  lui         $v1, 0x3E75
    ctx->pc = 0x1f76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15989 << 16));
label_1f76bc:
    // 0x1f76bc: 0x3464c28f  ori         $a0, $v1, 0xC28F
    ctx->pc = 0x1f76bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_1f76c0:
    // 0x1f76c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f76c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f76c4:
    // 0x1f76c4: 0x0  nop
    ctx->pc = 0x1f76c4u;
    // NOP
label_1f76c8:
    // 0x1f76c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f76c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f76cc:
    // 0x1f76cc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x1f76ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_1f76d0:
    // 0x1f76d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f76d4:
    // 0x1f76d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f76d8:
    // 0x1f76d8: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1f76d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f76dc:
    // 0x1f76dc: 0x3c05c1a0  lui         $a1, 0xC1A0
    ctx->pc = 0x1f76dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49568 << 16));
label_1f76e0:
    // 0x1f76e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f76e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f76e4:
    // 0x1f76e4: 0x0  nop
    ctx->pc = 0x1f76e4u;
    // NOP
label_1f76e8:
    // 0x1f76e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f76e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f76ec:
    // 0x1f76ec: 0x0  nop
    ctx->pc = 0x1f76ecu;
    // NOP
label_1f76f0:
    // 0x1f76f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1f76f4:
    if (ctx->pc == 0x1F76F4u) {
        ctx->pc = 0x1F76F8u;
        goto label_1f76f8;
    }
    ctx->pc = 0x1F76F0u;
    {
        const bool branch_taken_0x1f76f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f76f0) {
            ctx->pc = 0x1F770Cu;
            goto label_1f770c;
        }
    }
    ctx->pc = 0x1F76F8u;
label_1f76f8:
    // 0x1f76f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f76fc:
    // 0x1f76fc: 0x8486127e  lh          $a2, 0x127E($a0)
    ctx->pc = 0x1f76fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
label_1f7700:
    // 0x1f7700: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x1f7700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1f7704:
    // 0x1f7704: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x1f7704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
label_1f7708:
    // 0x1f7708: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x1f7708u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_1f770c:
    // 0x1f770c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7710:
    // 0x1f7710: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x1f7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7714:
    // 0x1f7714: 0x3c033bdf  lui         $v1, 0x3BDF
    ctx->pc = 0x1f7714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15327 << 16));
label_1f7718:
    // 0x1f7718: 0x3463ca6a  ori         $v1, $v1, 0xCA6A
    ctx->pc = 0x1f7718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51818);
label_1f771c:
    // 0x1f771c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f771cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7720:
    // 0x1f7720: 0x0  nop
    ctx->pc = 0x1f7720u;
    // NOP
label_1f7724:
    // 0x1f7724: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f7724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f7728:
    // 0x1f7728: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f7728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_1f772c:
    // 0x1f772c: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x1f772cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7730:
    // 0x1f7730: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1f7730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7734:
    // 0x1f7734: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x1f7734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_1f7738:
    // 0x1f7738: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x1f7738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_1f773c:
    // 0x1f773c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f773cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7740:
    // 0x1f7740: 0x0  nop
    ctx->pc = 0x1f7740u;
    // NOP
label_1f7744:
    // 0x1f7744: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f7744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f7748:
    // 0x1f7748: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1f7748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1f774c:
    // 0x1f774c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f774cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7750:
    // 0x1f7750: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7754:
    // 0x1f7754: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1f7758:
    // 0x1f7758: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1f7758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_1f775c:
    // 0x1f775c: 0x3c04c1a4  lui         $a0, 0xC1A4
    ctx->pc = 0x1f775cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49572 << 16));
label_1f7760:
    // 0x1f7760: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f7760u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7764:
    // 0x1f7764: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7768:
    // 0x1f7768: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f776c:
    // 0x1f776c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f776cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1f7770:
    // 0x1f7770: 0x3c044020  lui         $a0, 0x4020
    ctx->pc = 0x1f7770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16416 << 16));
label_1f7774:
    // 0x1f7774: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f7774u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7778:
    // 0x1f7778: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f777c:
    // 0x1f777c: 0x247e1330  addiu       $fp, $v1, 0x1330
    ctx->pc = 0x1f777cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7780:
    // 0x1f7780: 0xe7c00020  swc1        $f0, 0x20($fp)
    ctx->pc = 0x1f7780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 32), bits); }
label_1f7784:
    // 0x1f7784: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1f7784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_1f7788:
    // 0x1f7788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f778c:
    // 0x1f778c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7790:
    // 0x1f7790: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7794:
    // 0x1f7794: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f7794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1f7798:
    // 0x1f7798: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f779c:
    // 0x1f779c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f77a0:
    // 0x1f77a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f77a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1f77a4:
    // 0x1f77a4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f77a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f77a8:
    // 0x1f77a8: 0x3c05459c  lui         $a1, 0x459C
    ctx->pc = 0x1f77a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17820 << 16));
label_1f77ac:
    // 0x1f77ac: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x1f77acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1f77b0:
    // 0x1f77b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f77b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f77b4:
    // 0x1f77b4: 0x0  nop
    ctx->pc = 0x1f77b4u;
    // NOP
label_1f77b8:
    // 0x1f77b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f77b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f77bc:
    // 0x1f77bc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f77bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f77c0:
    // 0x1f77c0: 0x0  nop
    ctx->pc = 0x1f77c0u;
    // NOP
label_1f77c4:
    // 0x1f77c4: 0x45000225  bc1f        . + 4 + (0x225 << 2)
label_1f77c8:
    if (ctx->pc == 0x1F77C8u) {
        ctx->pc = 0x1F77CCu;
        goto label_1f77cc;
    }
    ctx->pc = 0x1F77C4u;
    {
        const bool branch_taken_0x1f77c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f77c4) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F77CCu;
label_1f77cc:
    // 0x1f77cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f77d0:
    // 0x1f77d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f77d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f77d4:
    // 0x1f77d4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f77d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1f77d8:
    // 0x1f77d8: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x1f77d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1f77dc:
    // 0x1f77dc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f77e0:
    // 0x1f77e0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f77e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1f77e4:
    // 0x1f77e4: 0x1000021d  b           . + 4 + (0x21D << 2)
label_1f77e8:
    if (ctx->pc == 0x1F77E8u) {
        ctx->pc = 0x1F77ECu;
        goto label_1f77ec;
    }
    ctx->pc = 0x1F77E4u;
    {
        const bool branch_taken_0x1f77e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f77e4) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F77ECu;
label_1f77ec:
    // 0x1f77ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f77ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1f77f0:
    // 0x1f77f0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f77f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f77f4:
    // 0x1f77f4: 0x3c0346ea  lui         $v1, 0x46EA
    ctx->pc = 0x1f77f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18154 << 16));
label_1f77f8:
    // 0x1f77f8: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x1f77f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_1f77fc:
    // 0x1f77fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f77fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7800:
    // 0x1f7800: 0x0  nop
    ctx->pc = 0x1f7800u;
    // NOP
label_1f7804:
    // 0x1f7804: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f7804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f7808:
    // 0x1f7808: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f780c:
    // 0x1f780c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1f780cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1f7810:
    // 0x1f7810: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7814:
    // 0x1f7814: 0xc097b94  jal         func_25EE50
label_1f7818:
    if (ctx->pc == 0x1F7818u) {
        ctx->pc = 0x1F781Cu;
        goto label_1f781c;
    }
    ctx->pc = 0x1F7814u;
    SET_GPR_U32(ctx, 31, 0x1F781Cu);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x1F7814u, 0x1F781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F781Cu;
label_1f781c:
    // 0x1f781c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7820:
    // 0x1f7820: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x1f7820u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_1f7824:
    // 0x1f7824: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x1f7824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1f7828:
    // 0x1f7828: 0xa4861278  sh          $a2, 0x1278($a0)
    ctx->pc = 0x1f7828u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 6));
label_1f782c:
    // 0x1f782c: 0x14a0020b  bnez        $a1, . + 4 + (0x20B << 2)
label_1f7830:
    if (ctx->pc == 0x1F7830u) {
        ctx->pc = 0x1F7834u;
        goto label_1f7834;
    }
    ctx->pc = 0x1F782Cu;
    {
        const bool branch_taken_0x1f782c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f782c) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F7834u;
label_1f7834:
    // 0x1f7834: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1f7834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7838:
    // 0x1f7838: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f7838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f783c:
    // 0x1f783c: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x1f783cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
label_1f7840:
    // 0x1f7840: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7844:
    // 0x1f7844: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f7844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f7848:
    // 0x1f7848: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f7848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f784c:
    // 0x1f784c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1f7850:
    // 0x1f7850: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f7850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1f7854:
    // 0x1f7854: 0x10000201  b           . + 4 + (0x201 << 2)
label_1f7858:
    if (ctx->pc == 0x1F7858u) {
        ctx->pc = 0x1F785Cu;
        goto label_1f785c;
    }
    ctx->pc = 0x1F7854u;
    {
        const bool branch_taken_0x1f7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7854) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F785Cu;
label_1f785c:
    // 0x1f785c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f785cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7860:
    // 0x1f7860: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f7860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f7864:
    // 0x1f7864: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1f7864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_1f7868:
    // 0x1f7868: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f7868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1f786c:
    // 0x1f786c: 0x100001fb  b           . + 4 + (0x1FB << 2)
label_1f7870:
    if (ctx->pc == 0x1F7870u) {
        ctx->pc = 0x1F7874u;
        goto label_1f7874;
    }
    ctx->pc = 0x1F786Cu;
    {
        const bool branch_taken_0x1f786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f786c) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F7874u;
label_1f7874:
    // 0x1f7874: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7878:
    // 0x1f7878: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f787c:
    // 0x1f787c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1f787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f7880:
    // 0x1f7880: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1f7880u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1f7884:
    // 0x1f7884: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7888:
    // 0x1f7888: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f7888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1f788c:
    // 0x1f788c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1f788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1f7890:
    // 0x1f7890: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x1f7890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_1f7894:
    // 0x1f7894: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x1f7894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_1f7898:
    // 0x1f7898: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f789c:
    // 0x1f789c: 0x8c7402d0  lw          $s4, 0x2D0($v1)
    ctx->pc = 0x1f789cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_1f78a0:
    // 0x1f78a0: 0x8e1502d0  lw          $s5, 0x2D0($s0)
    ctx->pc = 0x1f78a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_1f78a4:
    // 0x1f78a4: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x1f78a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f78a8:
    // 0x1f78a8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f78a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f78ac:
    // 0x1f78ac: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x1f78acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f78b0:
    // 0x1f78b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f78b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f78b4:
    // 0x1f78b4: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f78b8:
    // 0x1f78b8: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x1f78b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
label_1f78bc:
    // 0x1f78bc: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x1f78bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f78c0:
    // 0x1f78c0: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x1f78c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f78c4:
    // 0x1f78c4: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x1f78c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
label_1f78c8:
    // 0x1f78c8: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x1f78c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f78cc:
    // 0x1f78cc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f78d0:
    // 0x1f78d0: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x1f78d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f78d4:
    // 0x1f78d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f78d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f78d8:
    // 0x1f78d8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f78d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f78dc:
    // 0x1f78dc: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1f78dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
label_1f78e0:
    // 0x1f78e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f78e4:
    // 0x1f78e4: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1f78e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1f78e8:
    // 0x1f78e8: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_1f78ec:
    if (ctx->pc == 0x1F78ECu) {
        ctx->pc = 0x1F78F0u;
        goto label_1f78f0;
    }
    ctx->pc = 0x1F78E8u;
    {
        const bool branch_taken_0x1f78e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f78e8) {
            ctx->pc = 0x1F7954u;
            goto label_1f7954;
        }
    }
    ctx->pc = 0x1F78F0u;
label_1f78f0:
    // 0x1f78f0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f78f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f78f4:
    // 0x1f78f4: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x1f78f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f78f8:
    // 0x1f78f8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1f78fc:
    // 0x1f78fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f78fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7900:
    // 0x1f7900: 0x0  nop
    ctx->pc = 0x1f7900u;
    // NOP
label_1f7904:
    // 0x1f7904: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f7904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f7908:
    // 0x1f7908: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x1f7908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_1f790c:
    // 0x1f790c: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f790cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7910:
    // 0x1f7910: 0xc6210184  lwc1        $f1, 0x184($s1)
    ctx->pc = 0x1f7910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7914:
    // 0x1f7914: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x1f7914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
label_1f7918:
    // 0x1f7918: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f7918u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f791c:
    // 0x1f791c: 0x0  nop
    ctx->pc = 0x1f791cu;
    // NOP
label_1f7920:
    // 0x1f7920: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f7920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7924:
    // 0x1f7924: 0x0  nop
    ctx->pc = 0x1f7924u;
    // NOP
label_1f7928:
    // 0x1f7928: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_1f792c:
    if (ctx->pc == 0x1F792Cu) {
        ctx->pc = 0x1F7930u;
        goto label_1f7930;
    }
    ctx->pc = 0x1F7928u;
    {
        const bool branch_taken_0x1f7928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7928) {
            ctx->pc = 0x1F79ACu;
            goto label_1f79ac;
        }
    }
    ctx->pc = 0x1F7930u;
label_1f7930:
    // 0x1f7930: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1f7934:
    // 0x1f7934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7938:
    // 0x1f7938: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f7938u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f793c:
    // 0x1f793c: 0xe6200184  swc1        $f0, 0x184($s1)
    ctx->pc = 0x1f793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
label_1f7940:
    // 0x1f7940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f7940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7944:
    // 0x1f7944: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7948:
    // 0x1f7948: 0xa486127a  sh          $a2, 0x127A($a0)
    ctx->pc = 0x1f7948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 6));
label_1f794c:
    // 0x1f794c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1f7950:
    if (ctx->pc == 0x1F7950u) {
        ctx->pc = 0x1F7954u;
        goto label_1f7954;
    }
    ctx->pc = 0x1F794Cu;
    {
        const bool branch_taken_0x1f794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f794c) {
            ctx->pc = 0x1F79ACu;
            goto label_1f79ac;
        }
    }
    ctx->pc = 0x1F7954u;
label_1f7954:
    // 0x1f7954: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f7954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7958:
    // 0x1f7958: 0xc6210184  lwc1        $f1, 0x184($s1)
    ctx->pc = 0x1f7958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f795c:
    // 0x1f795c: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x1f795cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
label_1f7960:
    // 0x1f7960: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1f7960u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7964:
    // 0x1f7964: 0x0  nop
    ctx->pc = 0x1f7964u;
    // NOP
label_1f7968:
    // 0x1f7968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f7968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f796c:
    // 0x1f796c: 0xe6200184  swc1        $f0, 0x184($s1)
    ctx->pc = 0x1f796cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
label_1f7970:
    // 0x1f7970: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f7970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7974:
    // 0x1f7974: 0xc5010184  lwc1        $f1, 0x184($t0)
    ctx->pc = 0x1f7974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7978:
    // 0x1f7978: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x1f7978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
label_1f797c:
    // 0x1f797c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f797cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7980:
    // 0x1f7980: 0x0  nop
    ctx->pc = 0x1f7980u;
    // NOP
label_1f7984:
    // 0x1f7984: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f7984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7988:
    // 0x1f7988: 0x0  nop
    ctx->pc = 0x1f7988u;
    // NOP
label_1f798c:
    // 0x1f798c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1f7990:
    if (ctx->pc == 0x1F7990u) {
        ctx->pc = 0x1F7994u;
        goto label_1f7994;
    }
    ctx->pc = 0x1F798Cu;
    {
        const bool branch_taken_0x1f798c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f798c) {
            ctx->pc = 0x1F79ACu;
            goto label_1f79ac;
        }
    }
    ctx->pc = 0x1F7994u;
label_1f7994:
    // 0x1f7994: 0x3c04c248  lui         $a0, 0xC248
    ctx->pc = 0x1f7994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49736 << 16));
label_1f7998:
    // 0x1f7998: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f7998u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f799c:
    // 0x1f799c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f799cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f79a0:
    // 0x1f79a0: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x1f79a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
label_1f79a4:
    // 0x1f79a4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f79a8:
    // 0x1f79a8: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x1f79a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
label_1f79ac:
    // 0x1f79ac: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1f79acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f79b0:
    // 0x1f79b0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f79b4:
    // 0x1f79b4: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f79b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_1f79b8:
    // 0x1f79b8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1f79b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f79bc:
    // 0x1f79bc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f79c0:
    // 0x1f79c0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f79c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1f79c4:
    // 0x1f79c4: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x1f79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f79c8:
    // 0x1f79c8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f79c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f79cc:
    // 0x1f79cc: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x1f79ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
label_1f79d0:
    // 0x1f79d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f79d4:
    // 0x1f79d4: 0x94650050  lhu         $a1, 0x50($v1)
    ctx->pc = 0x1f79d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f79d8:
    // 0x1f79d8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1f79d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1f79dc:
    // 0x1f79dc: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x1f79dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_1f79e0:
    // 0x1f79e0: 0x7280b628  paddub      $s6, $s4, $zero
    ctx->pc = 0x1f79e0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1f79e4:
    // 0x1f79e4: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x1f79e4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1f79e8:
    // 0x1f79e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f79ec:
    // 0x1f79ec: 0x0  nop
    ctx->pc = 0x1f79ecu;
    // NOP
label_1f79f0:
    // 0x1f79f0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1f79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1f79f4:
    // 0x1f79f4: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x1f79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1f79f8:
    // 0x1f79f8: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x1f79f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_1f79fc:
    // 0x1f79fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1f7a00:
    // 0x1f7a00: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1f7a00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1f7a04:
    // 0x1f7a04: 0xaec40004  sw          $a0, 0x4($s6)
    ctx->pc = 0x1f7a04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 4));
label_1f7a08:
    // 0x1f7a08: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1f7a08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_1f7a0c:
    // 0x1f7a0c: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
label_1f7a10:
    if (ctx->pc == 0x1F7A10u) {
        ctx->pc = 0x1F7A14u;
        goto label_1f7a14;
    }
    ctx->pc = 0x1F7A0Cu;
    {
        const bool branch_taken_0x1f7a0c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1f7a0c) {
            ctx->pc = 0x1F79F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79f0;
        }
    }
    ctx->pc = 0x1F7A14u;
label_1f7a14:
    // 0x1f7a14: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1f7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f7a18:
    // 0x1f7a18: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1f7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1f7a1c:
    // 0x1f7a1c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1f7a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1f7a20:
    // 0x1f7a20: 0x26940190  addiu       $s4, $s4, 0x190
    ctx->pc = 0x1f7a20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_1f7a24:
    // 0x1f7a24: 0x26b50190  addiu       $s5, $s5, 0x190
    ctx->pc = 0x1f7a24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
label_1f7a28:
    // 0x1f7a28: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f7a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1f7a2c:
    // 0x1f7a2c: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x1f7a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1f7a30:
    // 0x1f7a30: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1f7a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_1f7a34:
    // 0x1f7a34: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
label_1f7a38:
    if (ctx->pc == 0x1F7A38u) {
        ctx->pc = 0x1F7A3Cu;
        goto label_1f7a3c;
    }
    ctx->pc = 0x1F7A34u;
    {
        const bool branch_taken_0x1f7a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a34) {
            ctx->pc = 0x1F79E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79e0;
        }
    }
    ctx->pc = 0x1F7A3Cu;
label_1f7a3c:
    // 0x1f7a3c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7a40:
    // 0x1f7a40: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1f7a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1f7a44:
    // 0x1f7a44: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f7a48:
    if (ctx->pc == 0x1F7A48u) {
        ctx->pc = 0x1F7A4Cu;
        goto label_1f7a4c;
    }
    ctx->pc = 0x1F7A44u;
    {
        const bool branch_taken_0x1f7a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a44) {
            ctx->pc = 0x1F7A5Cu;
            goto label_1f7a5c;
        }
    }
    ctx->pc = 0x1F7A4Cu;
label_1f7a4c:
    // 0x1f7a4c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7a50:
    // 0x1f7a50: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1f7a50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_1f7a54:
    // 0x1f7a54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f7a58:
    // 0x1f7a58: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1f7a58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1f7a5c:
    // 0x1f7a5c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7a60:
    // 0x1f7a60: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x1f7a60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_1f7a64:
    // 0x1f7a64: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
label_1f7a68:
    if (ctx->pc == 0x1F7A68u) {
        ctx->pc = 0x1F7A6Cu;
        goto label_1f7a6c;
    }
    ctx->pc = 0x1F7A64u;
    {
        const bool branch_taken_0x1f7a64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a64) {
            ctx->pc = 0x1F7A9Cu;
            goto label_1f7a9c;
        }
    }
    ctx->pc = 0x1F7A6Cu;
label_1f7a6c:
    // 0x1f7a6c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7a70:
    // 0x1f7a70: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x1f7a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7a74:
    // 0x1f7a74: 0x3c034244  lui         $v1, 0x4244
    ctx->pc = 0x1f7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16964 << 16));
label_1f7a78:
    // 0x1f7a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7a7c:
    // 0x1f7a7c: 0x0  nop
    ctx->pc = 0x1f7a7cu;
    // NOP
label_1f7a80:
    // 0x1f7a80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f7a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7a84:
    // 0x1f7a84: 0x0  nop
    ctx->pc = 0x1f7a84u;
    // NOP
label_1f7a88:
    // 0x1f7a88: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1f7a8c:
    if (ctx->pc == 0x1F7A8Cu) {
        ctx->pc = 0x1F7A90u;
        goto label_1f7a90;
    }
    ctx->pc = 0x1F7A88u;
    {
        const bool branch_taken_0x1f7a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7a88) {
            ctx->pc = 0x1F7A9Cu;
            goto label_1f7a9c;
        }
    }
    ctx->pc = 0x1F7A90u;
label_1f7a90:
    // 0x1f7a90: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f7a94:
    // 0x1f7a94: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7a98:
    // 0x1f7a98: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f7a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1f7a9c:
    // 0x1f7a9c: 0x860410a6  lh          $a0, 0x10A6($s0)
    ctx->pc = 0x1f7a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
label_1f7aa0:
    // 0x1f7aa0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1f7aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_1f7aa4:
    // 0x1f7aa4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f7aa4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1f7aa8:
    // 0x1f7aa8: 0x4a1016c  bgez        $a1, . + 4 + (0x16C << 2)
label_1f7aac:
    if (ctx->pc == 0x1F7AACu) {
        ctx->pc = 0x1F7AB0u;
        goto label_1f7ab0;
    }
    ctx->pc = 0x1F7AA8u;
    {
        const bool branch_taken_0x1f7aa8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1f7aa8) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F7AB0u;
label_1f7ab0:
    // 0x1f7ab0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f7ab4:
    // 0x1f7ab4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7ab8:
    // 0x1f7ab8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f7ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1f7abc:
    // 0x1f7abc: 0x10000167  b           . + 4 + (0x167 << 2)
label_1f7ac0:
    if (ctx->pc == 0x1F7AC0u) {
        ctx->pc = 0x1F7AC4u;
        goto label_1f7ac4;
    }
    ctx->pc = 0x1F7ABCu;
    {
        const bool branch_taken_0x1f7abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7abc) {
            ctx->pc = 0x1F805Cu;
            goto label_1f805c;
        }
    }
    ctx->pc = 0x1F7AC4u;
label_1f7ac4:
    // 0x1f7ac4: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x1f7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_1f7ac8:
    // 0x1f7ac8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7acc:
    // 0x1f7acc: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1f7accu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1f7ad0:
    // 0x1f7ad0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7ad4:
    // 0x1f7ad4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1f7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1f7ad8:
    // 0x1f7ad8: 0x24510090  addiu       $s1, $v0, 0x90
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1f7adc:
    // 0x1f7adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7ae0:
    // 0x1f7ae0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1f7ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f7ae4:
    // 0x1f7ae4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7ae8:
    // 0x1f7ae8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1f7aec:
    // 0x1f7aec: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x1f7aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1f7af0:
    // 0x1f7af0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7af4:
    // 0x1f7af4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1f7af4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f7af8:
    // 0x1f7af8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7afc:
    // 0x1f7afc: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1f7afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1f7b00:
    // 0x1f7b00: 0x24820240  addiu       $v0, $a0, 0x240
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
label_1f7b04:
    // 0x1f7b04: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1f7b04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7b08:
    // 0x1f7b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7b0c:
    // 0x1f7b0c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1f7b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f7b10:
    // 0x1f7b10: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7b14:
    // 0x1f7b14: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1f7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1f7b18:
    // 0x1f7b18: 0x245102d0  addiu       $s1, $v0, 0x2D0
    ctx->pc = 0x1f7b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
label_1f7b1c:
    // 0x1f7b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7b20:
    // 0x1f7b20: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1f7b20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f7b24:
    // 0x1f7b24: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7b28:
    // 0x1f7b28: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1f7b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1f7b2c:
    // 0x1f7b2c: 0x24a60480  addiu       $a2, $a1, 0x480
    ctx->pc = 0x1f7b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
label_1f7b30:
    // 0x1f7b30: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x1f7b30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1f7b34:
    // 0x1f7b34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f7b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7b38:
    // 0x1f7b38: 0xa2270000  sb          $a3, 0x0($s1)
    ctx->pc = 0x1f7b38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 7));
label_1f7b3c:
    // 0x1f7b3c: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f7b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7b40:
    // 0x1f7b40: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x1f7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
label_1f7b44:
    // 0x1f7b44: 0x24510510  addiu       $s1, $v0, 0x510
    ctx->pc = 0x1f7b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
label_1f7b48:
    // 0x1f7b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7b4c:
    // 0x1f7b4c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1f7b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f7b50:
    // 0x1f7b50: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7b54:
    // 0x1f7b54: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1f7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1f7b58:
    // 0x1f7b58: 0x248505a0  addiu       $a1, $a0, 0x5A0
    ctx->pc = 0x1f7b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
label_1f7b5c:
    // 0x1f7b5c: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1f7b5cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1f7b60:
    // 0x1f7b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7b64:
    // 0x1f7b64: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1f7b64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f7b68:
    // 0x1f7b68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7b6c:
    // 0x1f7b6c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7b70:
    // 0x1f7b70: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1f7b70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_1f7b74:
    // 0x1f7b74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7b78:
    // 0x1f7b78: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7b7c:
    // 0x1f7b7c: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1f7b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_1f7b80:
    // 0x1f7b80: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7b84:
    // 0x1f7b84: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f7b84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1f7b88:
    // 0x1f7b88: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7b8c:
    // 0x1f7b8c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1f7b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1f7b90:
    // 0x1f7b90: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7b94:
    // 0x1f7b94: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1f7b94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1f7b98:
    // 0x1f7b98: 0x97c20140  lhu         $v0, 0x140($fp)
    ctx->pc = 0x1f7b98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 320)));
label_1f7b9c:
    // 0x1f7b9c: 0x3043ff5b  andi        $v1, $v0, 0xFF5B
    ctx->pc = 0x1f7b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65371);
label_1f7ba0:
    // 0x1f7ba0: 0xa7c30140  sh          $v1, 0x140($fp)
    ctx->pc = 0x1f7ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 320), (uint16_t)GPR_U32(ctx, 3));
label_1f7ba4:
    // 0x1f7ba4: 0x97c302d0  lhu         $v1, 0x2D0($fp)
    ctx->pc = 0x1f7ba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 720)));
label_1f7ba8:
    // 0x1f7ba8: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x1f7ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_1f7bac:
    // 0x1f7bac: 0xa7c302d0  sh          $v1, 0x2D0($fp)
    ctx->pc = 0x1f7bacu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 720), (uint16_t)GPR_U32(ctx, 3));
label_1f7bb0:
    // 0x1f7bb0: 0x97c30460  lhu         $v1, 0x460($fp)
    ctx->pc = 0x1f7bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1120)));
label_1f7bb4:
    // 0x1f7bb4: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x1f7bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_1f7bb8:
    // 0x1f7bb8: 0xa7c30460  sh          $v1, 0x460($fp)
    ctx->pc = 0x1f7bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 1120), (uint16_t)GPR_U32(ctx, 3));
label_1f7bbc:
    // 0x1f7bbc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7bc0:
    // 0x1f7bc0: 0xa4801278  sh          $zero, 0x1278($a0)
    ctx->pc = 0x1f7bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 0));
label_1f7bc4:
    // 0x1f7bc4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7bc8:
    // 0x1f7bc8: 0xa4a0127a  sh          $zero, 0x127A($a1)
    ctx->pc = 0x1f7bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 0));
label_1f7bcc:
    // 0x1f7bcc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7bd0:
    // 0x1f7bd0: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1f7bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1f7bd4:
    // 0x1f7bd4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7bd8:
    // 0x1f7bd8: 0xa480127e  sh          $zero, 0x127E($a0)
    ctx->pc = 0x1f7bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 0));
label_1f7bdc:
    // 0x1f7bdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7be0:
    // 0x1f7be0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7be4:
    // 0x1f7be4: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x1f7be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
label_1f7be8:
    // 0x1f7be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7bec:
    // 0x1f7bec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7bf0:
    // 0x1f7bf0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1f7bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1f7bf4:
    // 0x1f7bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7bf8:
    // 0x1f7bf8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7bfc:
    // 0x1f7bfc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1f7bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_1f7c00:
    // 0x1f7c00: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7c04:
    // 0x1f7c04: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7c08:
    // 0x1f7c08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f7c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7c0c:
    // 0x1f7c0c: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x1f7c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_1f7c10:
    // 0x1f7c10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7c10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7c14:
    // 0x1f7c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7c18:
    // 0x1f7c18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1f7c18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7c1c:
    // 0x1f7c1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f7c20:
    // 0x1f7c20: 0xc0965d0  jal         func_259740
label_1f7c24:
    if (ctx->pc == 0x1F7C24u) {
        ctx->pc = 0x1F7C28u;
        goto label_1f7c28;
    }
    ctx->pc = 0x1F7C20u;
    SET_GPR_U32(ctx, 31, 0x1F7C28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F7C20u, 0x1F7C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C28u;
label_1f7c28:
    // 0x1f7c28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7c28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7c2c:
    // 0x1f7c2c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7c30:
    // 0x1f7c30: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f7c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1f7c34:
    // 0x1f7c34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1f7c38:
    // 0x1f7c38: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7c3c:
    // 0x1f7c3c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x1f7c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_1f7c40:
    // 0x1f7c40: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1f7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1f7c44:
    // 0x1f7c44: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x1f7c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7c48:
    // 0x1f7c48: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
label_1f7c4c:
    // 0x1f7c4c: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1f7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_1f7c50:
    // 0x1f7c50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7c54:
    // 0x1f7c54: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7c58:
    // 0x1f7c58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1f7c5c:
    // 0x1f7c5c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1f7c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1f7c60:
    // 0x1f7c60: 0xc067694  jal         func_19DA50
label_1f7c64:
    if (ctx->pc == 0x1F7C64u) {
        ctx->pc = 0x1F7C68u;
        goto label_1f7c68;
    }
    ctx->pc = 0x1F7C60u;
    SET_GPR_U32(ctx, 31, 0x1F7C68u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F7C60u, 0x1F7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C68u;
label_1f7c68:
    // 0x1f7c68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f7c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f7c6c:
    // 0x1f7c6c: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x1f7c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_1f7c70:
    // 0x1f7c70: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x1f7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1f7c74:
    // 0x1f7c74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f7c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1f7c78:
    // 0x1f7c78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f7c78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f7c7c:
    // 0x1f7c7c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7c80:
    // 0x1f7c80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7c84:
    // 0x1f7c84: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x1f7c84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
label_1f7c88:
    // 0x1f7c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7c8c:
    // 0x1f7c8c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7c90:
    // 0x1f7c90: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1f7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7c94:
    // 0x1f7c94: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1f7c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_1f7c98:
    // 0x1f7c98: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7c9c:
    // 0x1f7c9c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f7c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1f7ca0:
    // 0x1f7ca0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1f7ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_1f7ca4:
    // 0x1f7ca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7ca8:
    // 0x1f7ca8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7cac:
    // 0x1f7cac: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1f7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_1f7cb0:
    // 0x1f7cb0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f7cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1f7cb4:
    // 0x1f7cb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7cb8:
    // 0x1f7cb8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7cbc:
    // 0x1f7cbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7cc0:
    // 0x1f7cc0: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f7cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_1f7cc4:
    // 0x1f7cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7cc8:
    // 0x1f7cc8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7ccc:
    // 0x1f7ccc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7cd0:
    // 0x1f7cd0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f7cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1f7cd4:
    // 0x1f7cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7cd8:
    // 0x1f7cd8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7cdc:
    // 0x1f7cdc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7ce0:
    // 0x1f7ce0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f7ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_1f7ce4:
    // 0x1f7ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7ce8:
    // 0x1f7ce8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7cec:
    // 0x1f7cec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7cf0:
    // 0x1f7cf0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f7cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1f7cf4:
    // 0x1f7cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7cf8:
    // 0x1f7cf8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7cfc:
    // 0x1f7cfc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1f7d00:
    // 0x1f7d00: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f7d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1f7d04:
    // 0x1f7d04: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7d08:
    // 0x1f7d08: 0x246310b0  addiu       $v1, $v1, 0x10B0
    ctx->pc = 0x1f7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
label_1f7d0c:
    // 0x1f7d0c: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x1f7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_1f7d10:
    // 0x1f7d10: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x1f7d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1f7d14:
    // 0x1f7d14: 0x8cc500f0  lw          $a1, 0xF0($a2)
    ctx->pc = 0x1f7d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_1f7d18:
    // 0x1f7d18: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1f7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_1f7d1c:
    // 0x1f7d1c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1f7d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1f7d20:
    // 0x1f7d20: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1f7d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1f7d24:
    // 0x1f7d24: 0xacc300f0  sw          $v1, 0xF0($a2)
    ctx->pc = 0x1f7d24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 3));
label_1f7d28:
    // 0x1f7d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7d2c:
    // 0x1f7d2c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7d30:
    // 0x1f7d30: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1f7d34:
    // 0x1f7d34: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1f7d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_1f7d38:
    // 0x1f7d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7d3c:
    // 0x1f7d3c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7d40:
    // 0x1f7d40: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7d44:
    // 0x1f7d44: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1f7d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_1f7d48:
    // 0x1f7d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7d4c:
    // 0x1f7d4c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7d50:
    // 0x1f7d50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7d54:
    // 0x1f7d54: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1f7d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
label_1f7d58:
    // 0x1f7d58: 0xc067694  jal         func_19DA50
label_1f7d5c:
    if (ctx->pc == 0x1F7D5Cu) {
        ctx->pc = 0x1F7D60u;
        goto label_1f7d60;
    }
    ctx->pc = 0x1F7D58u;
    SET_GPR_U32(ctx, 31, 0x1F7D60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F7D58u, 0x1F7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D60u;
label_1f7d60:
    // 0x1f7d60: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7d60u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7d64:
    // 0x1f7d64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f7d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1f7d68:
    // 0x1f7d68: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1f7d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_1f7d6c:
    // 0x1f7d6c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1f7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1f7d70:
    // 0x1f7d70: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f7d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_1f7d74:
    // 0x1f7d74: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f7d74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1f7d78:
    // 0x1f7d78: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7d7c:
    // 0x1f7d7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7d80:
    // 0x1f7d80: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x1f7d80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
label_1f7d84:
    // 0x1f7d84: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7d88:
    // 0x1f7d88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f7d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f7d8c:
    // 0x1f7d8c: 0xc096b40  jal         func_25AD00
label_1f7d90:
    if (ctx->pc == 0x1F7D90u) {
        ctx->pc = 0x1F7D94u;
        goto label_1f7d94;
    }
    ctx->pc = 0x1F7D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F7D94u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F7D8Cu, 0x1F7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D94u;
label_1f7d94:
    // 0x1f7d94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7d94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7d98:
    // 0x1f7d98: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7d9c:
    // 0x1f7d9c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f7d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7da0:
    // 0x1f7da0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7da4:
    // 0x1f7da4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f7da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7da8:
    // 0x1f7da8: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x1f7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_1f7dac:
    // 0x1f7dac: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7db0:
    // 0x1f7db0: 0xc07e3b0  jal         func_1F8EC0
label_1f7db4:
    if (ctx->pc == 0x1F7DB4u) {
        ctx->pc = 0x1F7DB8u;
        goto label_1f7db8;
    }
    ctx->pc = 0x1F7DB0u;
    SET_GPR_U32(ctx, 31, 0x1F7DB8u);
    ctx->pc = 0x1F8EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8EC0u, 0x1F7DB0u, 0x1F7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DB8u;
label_1f7db8:
    // 0x1f7db8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7db8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7dbc:
    // 0x1f7dbc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7dc0:
    // 0x1f7dc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7dc4:
    // 0x1f7dc4: 0x24650054  addiu       $a1, $v1, 0x54
    ctx->pc = 0x1f7dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_1f7dc8:
    // 0x1f7dc8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7dcc:
    // 0x1f7dcc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1f7dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1f7dd0:
    // 0x1f7dd0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1f7dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f7dd4:
    // 0x1f7dd4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f7dd4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f7dd8:
    // 0x1f7dd8: 0xc05d328  jal         func_174CA0
label_1f7ddc:
    if (ctx->pc == 0x1F7DDCu) {
        ctx->pc = 0x1F7DE0u;
        goto label_1f7de0;
    }
    ctx->pc = 0x1F7DD8u;
    SET_GPR_U32(ctx, 31, 0x1F7DE0u);
    ctx->pc = 0x174CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174CA0u, 0x1F7DD8u, 0x1F7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DE0u;
label_1f7de0:
    // 0x1f7de0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7de0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7de4:
    // 0x1f7de4: 0xffa300a8  sd          $v1, 0xA8($sp)
    ctx->pc = 0x1f7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 3));
label_1f7de8:
    // 0x1f7de8: 0xdfa400a8  ld          $a0, 0xA8($sp)
    ctx->pc = 0x1f7de8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_1f7dec:
    // 0x1f7dec: 0x10800091  beqz        $a0, . + 4 + (0x91 << 2)
label_1f7df0:
    if (ctx->pc == 0x1F7DF0u) {
        ctx->pc = 0x1F7DF4u;
        goto label_1f7df4;
    }
    ctx->pc = 0x1F7DECu;
    {
        const bool branch_taken_0x1f7dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7dec) {
            ctx->pc = 0x1F8034u;
            goto label_1f8034;
        }
    }
    ctx->pc = 0x1F7DF4u;
label_1f7df4:
    // 0x1f7df4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7df8:
    // 0x1f7df8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7dfc:
    // 0x1f7dfc: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1f7dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f7e00:
    // 0x1f7e00: 0x86041278  lh          $a0, 0x1278($s0)
    ctx->pc = 0x1f7e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
label_1f7e04:
    // 0x1f7e04: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e08:
    // 0x1f7e08: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f7e08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1f7e0c:
    // 0x1f7e0c: 0x8604127a  lh          $a0, 0x127A($s0)
    ctx->pc = 0x1f7e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4730)));
label_1f7e10:
    // 0x1f7e10: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e14:
    // 0x1f7e14: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1f7e14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1f7e18:
    // 0x1f7e18: 0x8604127c  lh          $a0, 0x127C($s0)
    ctx->pc = 0x1f7e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4732)));
label_1f7e1c:
    // 0x1f7e1c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e20:
    // 0x1f7e20: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1f7e20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
label_1f7e24:
    // 0x1f7e24: 0x8604127e  lh          $a0, 0x127E($s0)
    ctx->pc = 0x1f7e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4734)));
label_1f7e28:
    // 0x1f7e28: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e2c:
    // 0x1f7e2c: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x1f7e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_1f7e30:
    // 0x1f7e30: 0x8fbe00c8  lw          $fp, 0xC8($sp)
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e34:
    // 0x1f7e34: 0xc7c00120  lwc1        $f0, 0x120($fp)
    ctx->pc = 0x1f7e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7e38:
    // 0x1f7e38: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e3c:
    // 0x1f7e3c: 0xe4600170  swc1        $f0, 0x170($v1)
    ctx->pc = 0x1f7e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 368), bits); }
label_1f7e40:
    // 0x1f7e40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e44:
    // 0x1f7e44: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f7e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7e48:
    // 0x1f7e48: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e4c:
    // 0x1f7e4c: 0xe4600174  swc1        $f0, 0x174($v1)
    ctx->pc = 0x1f7e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
label_1f7e50:
    // 0x1f7e50: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e54:
    // 0x1f7e54: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x1f7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7e58:
    // 0x1f7e58: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e5c:
    // 0x1f7e5c: 0xe4600178  swc1        $f0, 0x178($v1)
    ctx->pc = 0x1f7e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 376), bits); }
label_1f7e60:
    // 0x1f7e60: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1f7e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7e64:
    // 0x1f7e64: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e68:
    // 0x1f7e68: 0xe4a000d0  swc1        $f0, 0xD0($a1)
    ctx->pc = 0x1f7e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
label_1f7e6c:
    // 0x1f7e6c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1f7e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7e70:
    // 0x1f7e70: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e74:
    // 0x1f7e74: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1f7e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1f7e78:
    // 0x1f7e78: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x1f7e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7e7c:
    // 0x1f7e7c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e80:
    // 0x1f7e80: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f7e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
label_1f7e84:
    // 0x1f7e84: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x1f7e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7e88:
    // 0x1f7e88: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e8c:
    // 0x1f7e8c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1f7e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
label_1f7e90:
    // 0x1f7e90: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x1f7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7e94:
    // 0x1f7e94: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7e98:
    // 0x1f7e98: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f7e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_1f7e9c:
    // 0x1f7e9c: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x1f7e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7ea0:
    // 0x1f7ea0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7ea4:
    // 0x1f7ea4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f7ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1f7ea8:
    // 0x1f7ea8: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x1f7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7eac:
    // 0x1f7eac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7eb0:
    // 0x1f7eb0: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f7eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_1f7eb4:
    // 0x1f7eb4: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x1f7eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7eb8:
    // 0x1f7eb8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7ebc:
    // 0x1f7ebc: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f7ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_1f7ec0:
    // 0x1f7ec0: 0xc60001a8  lwc1        $f0, 0x1A8($s0)
    ctx->pc = 0x1f7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7ec4:
    // 0x1f7ec4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7ec8:
    // 0x1f7ec8: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x1f7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_1f7ecc:
    // 0x1f7ecc: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x1f7eccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1f7ed0:
    // 0x1f7ed0: 0x26621330  addiu       $v0, $s3, 0x1330
    ctx->pc = 0x1f7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7ed4:
    // 0x1f7ed4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7ed8:
    // 0x1f7ed8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7edc:
    // 0x1f7edc: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f7edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1f7ee0:
    // 0x1f7ee0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1f7ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1f7ee4:
    // 0x1f7ee4: 0x26661330  addiu       $a2, $s3, 0x1330
    ctx->pc = 0x1f7ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7ee8:
    // 0x1f7ee8: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1f7ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7eec:
    // 0x1f7eec: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x1f7eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7ef0:
    // 0x1f7ef0: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1f7ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
label_1f7ef4:
    // 0x1f7ef4: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x1f7ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
label_1f7ef8:
    // 0x1f7ef8: 0x26651330  addiu       $a1, $s3, 0x1330
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7efc:
    // 0x1f7efc: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1f7efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7f00:
    // 0x1f7f00: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7f04:
    // 0x1f7f04: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1f7f08:
    // 0x1f7f08: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f7f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_1f7f0c:
    // 0x1f7f0c: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x1f7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7f10:
    // 0x1f7f10: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f7f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7f14:
    // 0x1f7f14: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7f18:
    // 0x1f7f18: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1f7f1c:
    // 0x1f7f1c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f7f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1f7f20:
    // 0x1f7f20: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x1f7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7f24:
    // 0x1f7f24: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1f7f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7f28:
    // 0x1f7f28: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7f2c:
    // 0x1f7f2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7f30:
    // 0x1f7f30: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f7f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_1f7f34:
    // 0x1f7f34: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x1f7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7f38:
    // 0x1f7f38: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7f3c:
    // 0x1f7f3c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7f40:
    // 0x1f7f40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7f44:
    // 0x1f7f44: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f7f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1f7f48:
    // 0x1f7f48: 0x26641330  addiu       $a0, $s3, 0x1330
    ctx->pc = 0x1f7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7f4c:
    // 0x1f7f4c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1f7f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7f50:
    // 0x1f7f50: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7f54:
    // 0x1f7f54: 0x24741330  addiu       $s4, $v1, 0x1330
    ctx->pc = 0x1f7f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7f58:
    // 0x1f7f58: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x1f7f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_1f7f5c:
    // 0x1f7f5c: 0x26751330  addiu       $s5, $s3, 0x1330
    ctx->pc = 0x1f7f5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7f60:
    // 0x1f7f60: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x1f7f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7f64:
    // 0x1f7f64: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7f68:
    // 0x1f7f68: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x1f7f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7f6c:
    // 0x1f7f6c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x1f7f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_1f7f70:
    // 0x1f7f70: 0x26721330  addiu       $s2, $s3, 0x1330
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7f74:
    // 0x1f7f74: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x1f7f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7f78:
    // 0x1f7f78: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7f7c:
    // 0x1f7f7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7f80:
    // 0x1f7f80: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f7f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1f7f84:
    // 0x1f7f84: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x1f7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
label_1f7f88:
    // 0x1f7f88: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f7f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7f8c:
    // 0x1f7f8c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7f90:
    // 0x1f7f90: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1f7f94:
    // 0x1f7f94: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x1f7f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_1f7f98:
    // 0x1f7f98: 0x960309ea  lhu         $v1, 0x9EA($s0)
    ctx->pc = 0x1f7f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
label_1f7f9c:
    // 0x1f7f9c: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7fa0:
    // 0x1f7fa0: 0xa62309ea  sh          $v1, 0x9EA($s1)
    ctx->pc = 0x1f7fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2538), (uint16_t)GPR_U32(ctx, 3));
label_1f7fa4:
    // 0x1f7fa4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7fa8:
    // 0x1f7fa8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7fac:
    // 0x1f7fac: 0x947109ea  lhu         $s1, 0x9EA($v1)
    ctx->pc = 0x1f7facu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2538)));
label_1f7fb0:
    // 0x1f7fb0: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x1f7fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1f7fb4:
    // 0x1f7fb4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7fb8:
    // 0x1f7fb8: 0x8cb10368  lw          $s1, 0x368($a1)
    ctx->pc = 0x1f7fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_1f7fbc:
    // 0x1f7fbc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f7fbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1f7fc0:
    // 0x1f7fc0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f7fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7fc4:
    // 0x1f7fc4: 0x72403e28  paddub      $a3, $s2, $zero
    ctx->pc = 0x1f7fc4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1f7fc8:
    // 0x1f7fc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f7fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f7fcc:
    // 0x1f7fcc: 0xc0965d0  jal         func_259740
label_1f7fd0:
    if (ctx->pc == 0x1F7FD0u) {
        ctx->pc = 0x1F7FD4u;
        goto label_1f7fd4;
    }
    ctx->pc = 0x1F7FCCu;
    SET_GPR_U32(ctx, 31, 0x1F7FD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F7FCCu, 0x1F7FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FD4u;
label_1f7fd4:
    // 0x1f7fd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7fd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7fd8:
    // 0x1f7fd8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7fdc:
    // 0x1f7fdc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f7fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f7fe0:
    // 0x1f7fe0: 0xc096b40  jal         func_25AD00
label_1f7fe4:
    if (ctx->pc == 0x1F7FE4u) {
        ctx->pc = 0x1F7FE8u;
        goto label_1f7fe8;
    }
    ctx->pc = 0x1F7FE0u;
    SET_GPR_U32(ctx, 31, 0x1F7FE8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F7FE0u, 0x1F7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FE8u;
label_1f7fe8:
    // 0x1f7fe8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7fe8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7fec:
    // 0x1f7fec: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f7ff0:
    // 0x1f7ff0: 0xc0974dc  jal         func_25D370
label_1f7ff4:
    if (ctx->pc == 0x1F7FF4u) {
        ctx->pc = 0x1F7FF8u;
        goto label_1f7ff8;
    }
    ctx->pc = 0x1F7FF0u;
    SET_GPR_U32(ctx, 31, 0x1F7FF8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F7FF0u, 0x1F7FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FF8u;
label_1f7ff8:
    // 0x1f7ff8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7ff8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f7ffc:
    // 0x1f7ffc: 0x96040a00  lhu         $a0, 0xA00($s0)
    ctx->pc = 0x1f7ffcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2560)));
label_1f8000:
    // 0x1f8000: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f8000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f8004:
    // 0x1f8004: 0xa4640a00  sh          $a0, 0xA00($v1)
    ctx->pc = 0x1f8004u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2560), (uint16_t)GPR_U32(ctx, 4));
label_1f8008:
    // 0x1f8008: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f8008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f800c:
    // 0x1f800c: 0x3c1746c3  lui         $s7, 0x46C3
    ctx->pc = 0x1f800cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)18115 << 16));
label_1f8010:
    // 0x1f8010: 0x36e35000  ori         $v1, $s7, 0x5000
    ctx->pc = 0x1f8010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)20480);
label_1f8014:
    // 0x1f8014: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f8014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8018:
    // 0x1f8018: 0x24160522  addiu       $s6, $zero, 0x522
    ctx->pc = 0x1f8018u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
label_1f801c:
    // 0x1f801c: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x1f801cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_1f8020:
    // 0x1f8020: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1f8020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1f8024:
    // 0x1f8024: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f8024u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f8028:
    // 0x1f8028: 0xc067b18  jal         func_19EC60
label_1f802c:
    if (ctx->pc == 0x1F802Cu) {
        ctx->pc = 0x1F8030u;
        goto label_1f8030;
    }
    ctx->pc = 0x1F8028u;
    SET_GPR_U32(ctx, 31, 0x1F8030u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F8028u, 0x1F8030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8030u;
label_1f8030:
    // 0x1f8030: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f8030u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f8034:
    // 0x1f8034: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f8034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f8038:
    // 0x1f8038: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f8038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f803c:
    // 0x1f803c: 0xc096b40  jal         func_25AD00
label_1f8040:
    if (ctx->pc == 0x1F8040u) {
        ctx->pc = 0x1F8044u;
        goto label_1f8044;
    }
    ctx->pc = 0x1F803Cu;
    SET_GPR_U32(ctx, 31, 0x1F8044u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F803Cu, 0x1F8044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8044u;
label_1f8044:
    // 0x1f8044: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f8044u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f8048:
    // 0x1f8048: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f8048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f804c:
    // 0x1f804c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1f804cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1f8050:
    // 0x1f8050: 0xc0974dc  jal         func_25D370
label_1f8054:
    if (ctx->pc == 0x1F8054u) {
        ctx->pc = 0x1F8058u;
        goto label_1f8058;
    }
    ctx->pc = 0x1F8050u;
    SET_GPR_U32(ctx, 31, 0x1F8058u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8050u, 0x1F8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8058u;
label_1f8058:
    // 0x1f8058: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1f8058u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f805c:
    // 0x1f805c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1f805cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f8060:
    // 0x1f8060: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f8060u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f8064:
    // 0x1f8064: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f8064u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f8068:
    // 0x1f8068: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f8068u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f806c:
    // 0x1f806c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f806cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f8070:
    // 0x1f8070: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f8070u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f8074:
    // 0x1f8074: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f8074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f8078:
    // 0x1f8078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f8078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f807c:
    // 0x1f807c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f807cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8080:
    // 0x1f8080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8084:
    // 0x1f8084: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1f8084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f8088:
    // 0x1f8088: 0x3e00008  jr          $ra
label_1f808c:
    if (ctx->pc == 0x1F808Cu) {
        ctx->pc = 0x1F8090u;
        goto label_fallthrough_0x1f8088;
    }
    ctx->pc = 0x1F8088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f8088:
    ctx->pc = 0x1F8090u;
}
