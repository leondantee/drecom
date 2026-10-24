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

// Function: Player_camera_check
// Address: 0x187170 - 0x187b60
void Player_camera_check_0x187170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Player_camera_check_0x187170");
#endif

    switch (ctx->pc) {
        case 0x187170u: goto label_187170;
        case 0x187174u: goto label_187174;
        case 0x187178u: goto label_187178;
        case 0x18717cu: goto label_18717c;
        case 0x187180u: goto label_187180;
        case 0x187184u: goto label_187184;
        case 0x187188u: goto label_187188;
        case 0x18718cu: goto label_18718c;
        case 0x187190u: goto label_187190;
        case 0x187194u: goto label_187194;
        case 0x187198u: goto label_187198;
        case 0x18719cu: goto label_18719c;
        case 0x1871a0u: goto label_1871a0;
        case 0x1871a4u: goto label_1871a4;
        case 0x1871a8u: goto label_1871a8;
        case 0x1871acu: goto label_1871ac;
        case 0x1871b0u: goto label_1871b0;
        case 0x1871b4u: goto label_1871b4;
        case 0x1871b8u: goto label_1871b8;
        case 0x1871bcu: goto label_1871bc;
        case 0x1871c0u: goto label_1871c0;
        case 0x1871c4u: goto label_1871c4;
        case 0x1871c8u: goto label_1871c8;
        case 0x1871ccu: goto label_1871cc;
        case 0x1871d0u: goto label_1871d0;
        case 0x1871d4u: goto label_1871d4;
        case 0x1871d8u: goto label_1871d8;
        case 0x1871dcu: goto label_1871dc;
        case 0x1871e0u: goto label_1871e0;
        case 0x1871e4u: goto label_1871e4;
        case 0x1871e8u: goto label_1871e8;
        case 0x1871ecu: goto label_1871ec;
        case 0x1871f0u: goto label_1871f0;
        case 0x1871f4u: goto label_1871f4;
        case 0x1871f8u: goto label_1871f8;
        case 0x1871fcu: goto label_1871fc;
        case 0x187200u: goto label_187200;
        case 0x187204u: goto label_187204;
        case 0x187208u: goto label_187208;
        case 0x18720cu: goto label_18720c;
        case 0x187210u: goto label_187210;
        case 0x187214u: goto label_187214;
        case 0x187218u: goto label_187218;
        case 0x18721cu: goto label_18721c;
        case 0x187220u: goto label_187220;
        case 0x187224u: goto label_187224;
        case 0x187228u: goto label_187228;
        case 0x18722cu: goto label_18722c;
        case 0x187230u: goto label_187230;
        case 0x187234u: goto label_187234;
        case 0x187238u: goto label_187238;
        case 0x18723cu: goto label_18723c;
        case 0x187240u: goto label_187240;
        case 0x187244u: goto label_187244;
        case 0x187248u: goto label_187248;
        case 0x18724cu: goto label_18724c;
        case 0x187250u: goto label_187250;
        case 0x187254u: goto label_187254;
        case 0x187258u: goto label_187258;
        case 0x18725cu: goto label_18725c;
        case 0x187260u: goto label_187260;
        case 0x187264u: goto label_187264;
        case 0x187268u: goto label_187268;
        case 0x18726cu: goto label_18726c;
        case 0x187270u: goto label_187270;
        case 0x187274u: goto label_187274;
        case 0x187278u: goto label_187278;
        case 0x18727cu: goto label_18727c;
        case 0x187280u: goto label_187280;
        case 0x187284u: goto label_187284;
        case 0x187288u: goto label_187288;
        case 0x18728cu: goto label_18728c;
        case 0x187290u: goto label_187290;
        case 0x187294u: goto label_187294;
        case 0x187298u: goto label_187298;
        case 0x18729cu: goto label_18729c;
        case 0x1872a0u: goto label_1872a0;
        case 0x1872a4u: goto label_1872a4;
        case 0x1872a8u: goto label_1872a8;
        case 0x1872acu: goto label_1872ac;
        case 0x1872b0u: goto label_1872b0;
        case 0x1872b4u: goto label_1872b4;
        case 0x1872b8u: goto label_1872b8;
        case 0x1872bcu: goto label_1872bc;
        case 0x1872c0u: goto label_1872c0;
        case 0x1872c4u: goto label_1872c4;
        case 0x1872c8u: goto label_1872c8;
        case 0x1872ccu: goto label_1872cc;
        case 0x1872d0u: goto label_1872d0;
        case 0x1872d4u: goto label_1872d4;
        case 0x1872d8u: goto label_1872d8;
        case 0x1872dcu: goto label_1872dc;
        case 0x1872e0u: goto label_1872e0;
        case 0x1872e4u: goto label_1872e4;
        case 0x1872e8u: goto label_1872e8;
        case 0x1872ecu: goto label_1872ec;
        case 0x1872f0u: goto label_1872f0;
        case 0x1872f4u: goto label_1872f4;
        case 0x1872f8u: goto label_1872f8;
        case 0x1872fcu: goto label_1872fc;
        case 0x187300u: goto label_187300;
        case 0x187304u: goto label_187304;
        case 0x187308u: goto label_187308;
        case 0x18730cu: goto label_18730c;
        case 0x187310u: goto label_187310;
        case 0x187314u: goto label_187314;
        case 0x187318u: goto label_187318;
        case 0x18731cu: goto label_18731c;
        case 0x187320u: goto label_187320;
        case 0x187324u: goto label_187324;
        case 0x187328u: goto label_187328;
        case 0x18732cu: goto label_18732c;
        case 0x187330u: goto label_187330;
        case 0x187334u: goto label_187334;
        case 0x187338u: goto label_187338;
        case 0x18733cu: goto label_18733c;
        case 0x187340u: goto label_187340;
        case 0x187344u: goto label_187344;
        case 0x187348u: goto label_187348;
        case 0x18734cu: goto label_18734c;
        case 0x187350u: goto label_187350;
        case 0x187354u: goto label_187354;
        case 0x187358u: goto label_187358;
        case 0x18735cu: goto label_18735c;
        case 0x187360u: goto label_187360;
        case 0x187364u: goto label_187364;
        case 0x187368u: goto label_187368;
        case 0x18736cu: goto label_18736c;
        case 0x187370u: goto label_187370;
        case 0x187374u: goto label_187374;
        case 0x187378u: goto label_187378;
        case 0x18737cu: goto label_18737c;
        case 0x187380u: goto label_187380;
        case 0x187384u: goto label_187384;
        case 0x187388u: goto label_187388;
        case 0x18738cu: goto label_18738c;
        case 0x187390u: goto label_187390;
        case 0x187394u: goto label_187394;
        case 0x187398u: goto label_187398;
        case 0x18739cu: goto label_18739c;
        case 0x1873a0u: goto label_1873a0;
        case 0x1873a4u: goto label_1873a4;
        case 0x1873a8u: goto label_1873a8;
        case 0x1873acu: goto label_1873ac;
        case 0x1873b0u: goto label_1873b0;
        case 0x1873b4u: goto label_1873b4;
        case 0x1873b8u: goto label_1873b8;
        case 0x1873bcu: goto label_1873bc;
        case 0x1873c0u: goto label_1873c0;
        case 0x1873c4u: goto label_1873c4;
        case 0x1873c8u: goto label_1873c8;
        case 0x1873ccu: goto label_1873cc;
        case 0x1873d0u: goto label_1873d0;
        case 0x1873d4u: goto label_1873d4;
        case 0x1873d8u: goto label_1873d8;
        case 0x1873dcu: goto label_1873dc;
        case 0x1873e0u: goto label_1873e0;
        case 0x1873e4u: goto label_1873e4;
        case 0x1873e8u: goto label_1873e8;
        case 0x1873ecu: goto label_1873ec;
        case 0x1873f0u: goto label_1873f0;
        case 0x1873f4u: goto label_1873f4;
        case 0x1873f8u: goto label_1873f8;
        case 0x1873fcu: goto label_1873fc;
        case 0x187400u: goto label_187400;
        case 0x187404u: goto label_187404;
        case 0x187408u: goto label_187408;
        case 0x18740cu: goto label_18740c;
        case 0x187410u: goto label_187410;
        case 0x187414u: goto label_187414;
        case 0x187418u: goto label_187418;
        case 0x18741cu: goto label_18741c;
        case 0x187420u: goto label_187420;
        case 0x187424u: goto label_187424;
        case 0x187428u: goto label_187428;
        case 0x18742cu: goto label_18742c;
        case 0x187430u: goto label_187430;
        case 0x187434u: goto label_187434;
        case 0x187438u: goto label_187438;
        case 0x18743cu: goto label_18743c;
        case 0x187440u: goto label_187440;
        case 0x187444u: goto label_187444;
        case 0x187448u: goto label_187448;
        case 0x18744cu: goto label_18744c;
        case 0x187450u: goto label_187450;
        case 0x187454u: goto label_187454;
        case 0x187458u: goto label_187458;
        case 0x18745cu: goto label_18745c;
        case 0x187460u: goto label_187460;
        case 0x187464u: goto label_187464;
        case 0x187468u: goto label_187468;
        case 0x18746cu: goto label_18746c;
        case 0x187470u: goto label_187470;
        case 0x187474u: goto label_187474;
        case 0x187478u: goto label_187478;
        case 0x18747cu: goto label_18747c;
        case 0x187480u: goto label_187480;
        case 0x187484u: goto label_187484;
        case 0x187488u: goto label_187488;
        case 0x18748cu: goto label_18748c;
        case 0x187490u: goto label_187490;
        case 0x187494u: goto label_187494;
        case 0x187498u: goto label_187498;
        case 0x18749cu: goto label_18749c;
        case 0x1874a0u: goto label_1874a0;
        case 0x1874a4u: goto label_1874a4;
        case 0x1874a8u: goto label_1874a8;
        case 0x1874acu: goto label_1874ac;
        case 0x1874b0u: goto label_1874b0;
        case 0x1874b4u: goto label_1874b4;
        case 0x1874b8u: goto label_1874b8;
        case 0x1874bcu: goto label_1874bc;
        case 0x1874c0u: goto label_1874c0;
        case 0x1874c4u: goto label_1874c4;
        case 0x1874c8u: goto label_1874c8;
        case 0x1874ccu: goto label_1874cc;
        case 0x1874d0u: goto label_1874d0;
        case 0x1874d4u: goto label_1874d4;
        case 0x1874d8u: goto label_1874d8;
        case 0x1874dcu: goto label_1874dc;
        case 0x1874e0u: goto label_1874e0;
        case 0x1874e4u: goto label_1874e4;
        case 0x1874e8u: goto label_1874e8;
        case 0x1874ecu: goto label_1874ec;
        case 0x1874f0u: goto label_1874f0;
        case 0x1874f4u: goto label_1874f4;
        case 0x1874f8u: goto label_1874f8;
        case 0x1874fcu: goto label_1874fc;
        case 0x187500u: goto label_187500;
        case 0x187504u: goto label_187504;
        case 0x187508u: goto label_187508;
        case 0x18750cu: goto label_18750c;
        case 0x187510u: goto label_187510;
        case 0x187514u: goto label_187514;
        case 0x187518u: goto label_187518;
        case 0x18751cu: goto label_18751c;
        case 0x187520u: goto label_187520;
        case 0x187524u: goto label_187524;
        case 0x187528u: goto label_187528;
        case 0x18752cu: goto label_18752c;
        case 0x187530u: goto label_187530;
        case 0x187534u: goto label_187534;
        case 0x187538u: goto label_187538;
        case 0x18753cu: goto label_18753c;
        case 0x187540u: goto label_187540;
        case 0x187544u: goto label_187544;
        case 0x187548u: goto label_187548;
        case 0x18754cu: goto label_18754c;
        case 0x187550u: goto label_187550;
        case 0x187554u: goto label_187554;
        case 0x187558u: goto label_187558;
        case 0x18755cu: goto label_18755c;
        case 0x187560u: goto label_187560;
        case 0x187564u: goto label_187564;
        case 0x187568u: goto label_187568;
        case 0x18756cu: goto label_18756c;
        case 0x187570u: goto label_187570;
        case 0x187574u: goto label_187574;
        case 0x187578u: goto label_187578;
        case 0x18757cu: goto label_18757c;
        case 0x187580u: goto label_187580;
        case 0x187584u: goto label_187584;
        case 0x187588u: goto label_187588;
        case 0x18758cu: goto label_18758c;
        case 0x187590u: goto label_187590;
        case 0x187594u: goto label_187594;
        case 0x187598u: goto label_187598;
        case 0x18759cu: goto label_18759c;
        case 0x1875a0u: goto label_1875a0;
        case 0x1875a4u: goto label_1875a4;
        case 0x1875a8u: goto label_1875a8;
        case 0x1875acu: goto label_1875ac;
        case 0x1875b0u: goto label_1875b0;
        case 0x1875b4u: goto label_1875b4;
        case 0x1875b8u: goto label_1875b8;
        case 0x1875bcu: goto label_1875bc;
        case 0x1875c0u: goto label_1875c0;
        case 0x1875c4u: goto label_1875c4;
        case 0x1875c8u: goto label_1875c8;
        case 0x1875ccu: goto label_1875cc;
        case 0x1875d0u: goto label_1875d0;
        case 0x1875d4u: goto label_1875d4;
        case 0x1875d8u: goto label_1875d8;
        case 0x1875dcu: goto label_1875dc;
        case 0x1875e0u: goto label_1875e0;
        case 0x1875e4u: goto label_1875e4;
        case 0x1875e8u: goto label_1875e8;
        case 0x1875ecu: goto label_1875ec;
        case 0x1875f0u: goto label_1875f0;
        case 0x1875f4u: goto label_1875f4;
        case 0x1875f8u: goto label_1875f8;
        case 0x1875fcu: goto label_1875fc;
        case 0x187600u: goto label_187600;
        case 0x187604u: goto label_187604;
        case 0x187608u: goto label_187608;
        case 0x18760cu: goto label_18760c;
        case 0x187610u: goto label_187610;
        case 0x187614u: goto label_187614;
        case 0x187618u: goto label_187618;
        case 0x18761cu: goto label_18761c;
        case 0x187620u: goto label_187620;
        case 0x187624u: goto label_187624;
        case 0x187628u: goto label_187628;
        case 0x18762cu: goto label_18762c;
        case 0x187630u: goto label_187630;
        case 0x187634u: goto label_187634;
        case 0x187638u: goto label_187638;
        case 0x18763cu: goto label_18763c;
        case 0x187640u: goto label_187640;
        case 0x187644u: goto label_187644;
        case 0x187648u: goto label_187648;
        case 0x18764cu: goto label_18764c;
        case 0x187650u: goto label_187650;
        case 0x187654u: goto label_187654;
        case 0x187658u: goto label_187658;
        case 0x18765cu: goto label_18765c;
        case 0x187660u: goto label_187660;
        case 0x187664u: goto label_187664;
        case 0x187668u: goto label_187668;
        case 0x18766cu: goto label_18766c;
        case 0x187670u: goto label_187670;
        case 0x187674u: goto label_187674;
        case 0x187678u: goto label_187678;
        case 0x18767cu: goto label_18767c;
        case 0x187680u: goto label_187680;
        case 0x187684u: goto label_187684;
        case 0x187688u: goto label_187688;
        case 0x18768cu: goto label_18768c;
        case 0x187690u: goto label_187690;
        case 0x187694u: goto label_187694;
        case 0x187698u: goto label_187698;
        case 0x18769cu: goto label_18769c;
        case 0x1876a0u: goto label_1876a0;
        case 0x1876a4u: goto label_1876a4;
        case 0x1876a8u: goto label_1876a8;
        case 0x1876acu: goto label_1876ac;
        case 0x1876b0u: goto label_1876b0;
        case 0x1876b4u: goto label_1876b4;
        case 0x1876b8u: goto label_1876b8;
        case 0x1876bcu: goto label_1876bc;
        case 0x1876c0u: goto label_1876c0;
        case 0x1876c4u: goto label_1876c4;
        case 0x1876c8u: goto label_1876c8;
        case 0x1876ccu: goto label_1876cc;
        case 0x1876d0u: goto label_1876d0;
        case 0x1876d4u: goto label_1876d4;
        case 0x1876d8u: goto label_1876d8;
        case 0x1876dcu: goto label_1876dc;
        case 0x1876e0u: goto label_1876e0;
        case 0x1876e4u: goto label_1876e4;
        case 0x1876e8u: goto label_1876e8;
        case 0x1876ecu: goto label_1876ec;
        case 0x1876f0u: goto label_1876f0;
        case 0x1876f4u: goto label_1876f4;
        case 0x1876f8u: goto label_1876f8;
        case 0x1876fcu: goto label_1876fc;
        case 0x187700u: goto label_187700;
        case 0x187704u: goto label_187704;
        case 0x187708u: goto label_187708;
        case 0x18770cu: goto label_18770c;
        case 0x187710u: goto label_187710;
        case 0x187714u: goto label_187714;
        case 0x187718u: goto label_187718;
        case 0x18771cu: goto label_18771c;
        case 0x187720u: goto label_187720;
        case 0x187724u: goto label_187724;
        case 0x187728u: goto label_187728;
        case 0x18772cu: goto label_18772c;
        case 0x187730u: goto label_187730;
        case 0x187734u: goto label_187734;
        case 0x187738u: goto label_187738;
        case 0x18773cu: goto label_18773c;
        case 0x187740u: goto label_187740;
        case 0x187744u: goto label_187744;
        case 0x187748u: goto label_187748;
        case 0x18774cu: goto label_18774c;
        case 0x187750u: goto label_187750;
        case 0x187754u: goto label_187754;
        case 0x187758u: goto label_187758;
        case 0x18775cu: goto label_18775c;
        case 0x187760u: goto label_187760;
        case 0x187764u: goto label_187764;
        case 0x187768u: goto label_187768;
        case 0x18776cu: goto label_18776c;
        case 0x187770u: goto label_187770;
        case 0x187774u: goto label_187774;
        case 0x187778u: goto label_187778;
        case 0x18777cu: goto label_18777c;
        case 0x187780u: goto label_187780;
        case 0x187784u: goto label_187784;
        case 0x187788u: goto label_187788;
        case 0x18778cu: goto label_18778c;
        case 0x187790u: goto label_187790;
        case 0x187794u: goto label_187794;
        case 0x187798u: goto label_187798;
        case 0x18779cu: goto label_18779c;
        case 0x1877a0u: goto label_1877a0;
        case 0x1877a4u: goto label_1877a4;
        case 0x1877a8u: goto label_1877a8;
        case 0x1877acu: goto label_1877ac;
        case 0x1877b0u: goto label_1877b0;
        case 0x1877b4u: goto label_1877b4;
        case 0x1877b8u: goto label_1877b8;
        case 0x1877bcu: goto label_1877bc;
        case 0x1877c0u: goto label_1877c0;
        case 0x1877c4u: goto label_1877c4;
        case 0x1877c8u: goto label_1877c8;
        case 0x1877ccu: goto label_1877cc;
        case 0x1877d0u: goto label_1877d0;
        case 0x1877d4u: goto label_1877d4;
        case 0x1877d8u: goto label_1877d8;
        case 0x1877dcu: goto label_1877dc;
        case 0x1877e0u: goto label_1877e0;
        case 0x1877e4u: goto label_1877e4;
        case 0x1877e8u: goto label_1877e8;
        case 0x1877ecu: goto label_1877ec;
        case 0x1877f0u: goto label_1877f0;
        case 0x1877f4u: goto label_1877f4;
        case 0x1877f8u: goto label_1877f8;
        case 0x1877fcu: goto label_1877fc;
        case 0x187800u: goto label_187800;
        case 0x187804u: goto label_187804;
        case 0x187808u: goto label_187808;
        case 0x18780cu: goto label_18780c;
        case 0x187810u: goto label_187810;
        case 0x187814u: goto label_187814;
        case 0x187818u: goto label_187818;
        case 0x18781cu: goto label_18781c;
        case 0x187820u: goto label_187820;
        case 0x187824u: goto label_187824;
        case 0x187828u: goto label_187828;
        case 0x18782cu: goto label_18782c;
        case 0x187830u: goto label_187830;
        case 0x187834u: goto label_187834;
        case 0x187838u: goto label_187838;
        case 0x18783cu: goto label_18783c;
        case 0x187840u: goto label_187840;
        case 0x187844u: goto label_187844;
        case 0x187848u: goto label_187848;
        case 0x18784cu: goto label_18784c;
        case 0x187850u: goto label_187850;
        case 0x187854u: goto label_187854;
        case 0x187858u: goto label_187858;
        case 0x18785cu: goto label_18785c;
        case 0x187860u: goto label_187860;
        case 0x187864u: goto label_187864;
        case 0x187868u: goto label_187868;
        case 0x18786cu: goto label_18786c;
        case 0x187870u: goto label_187870;
        case 0x187874u: goto label_187874;
        case 0x187878u: goto label_187878;
        case 0x18787cu: goto label_18787c;
        case 0x187880u: goto label_187880;
        case 0x187884u: goto label_187884;
        case 0x187888u: goto label_187888;
        case 0x18788cu: goto label_18788c;
        case 0x187890u: goto label_187890;
        case 0x187894u: goto label_187894;
        case 0x187898u: goto label_187898;
        case 0x18789cu: goto label_18789c;
        case 0x1878a0u: goto label_1878a0;
        case 0x1878a4u: goto label_1878a4;
        case 0x1878a8u: goto label_1878a8;
        case 0x1878acu: goto label_1878ac;
        case 0x1878b0u: goto label_1878b0;
        case 0x1878b4u: goto label_1878b4;
        case 0x1878b8u: goto label_1878b8;
        case 0x1878bcu: goto label_1878bc;
        case 0x1878c0u: goto label_1878c0;
        case 0x1878c4u: goto label_1878c4;
        case 0x1878c8u: goto label_1878c8;
        case 0x1878ccu: goto label_1878cc;
        case 0x1878d0u: goto label_1878d0;
        case 0x1878d4u: goto label_1878d4;
        case 0x1878d8u: goto label_1878d8;
        case 0x1878dcu: goto label_1878dc;
        case 0x1878e0u: goto label_1878e0;
        case 0x1878e4u: goto label_1878e4;
        case 0x1878e8u: goto label_1878e8;
        case 0x1878ecu: goto label_1878ec;
        case 0x1878f0u: goto label_1878f0;
        case 0x1878f4u: goto label_1878f4;
        case 0x1878f8u: goto label_1878f8;
        case 0x1878fcu: goto label_1878fc;
        case 0x187900u: goto label_187900;
        case 0x187904u: goto label_187904;
        case 0x187908u: goto label_187908;
        case 0x18790cu: goto label_18790c;
        case 0x187910u: goto label_187910;
        case 0x187914u: goto label_187914;
        case 0x187918u: goto label_187918;
        case 0x18791cu: goto label_18791c;
        case 0x187920u: goto label_187920;
        case 0x187924u: goto label_187924;
        case 0x187928u: goto label_187928;
        case 0x18792cu: goto label_18792c;
        case 0x187930u: goto label_187930;
        case 0x187934u: goto label_187934;
        case 0x187938u: goto label_187938;
        case 0x18793cu: goto label_18793c;
        case 0x187940u: goto label_187940;
        case 0x187944u: goto label_187944;
        case 0x187948u: goto label_187948;
        case 0x18794cu: goto label_18794c;
        case 0x187950u: goto label_187950;
        case 0x187954u: goto label_187954;
        case 0x187958u: goto label_187958;
        case 0x18795cu: goto label_18795c;
        case 0x187960u: goto label_187960;
        case 0x187964u: goto label_187964;
        case 0x187968u: goto label_187968;
        case 0x18796cu: goto label_18796c;
        case 0x187970u: goto label_187970;
        case 0x187974u: goto label_187974;
        case 0x187978u: goto label_187978;
        case 0x18797cu: goto label_18797c;
        case 0x187980u: goto label_187980;
        case 0x187984u: goto label_187984;
        case 0x187988u: goto label_187988;
        case 0x18798cu: goto label_18798c;
        case 0x187990u: goto label_187990;
        case 0x187994u: goto label_187994;
        case 0x187998u: goto label_187998;
        case 0x18799cu: goto label_18799c;
        case 0x1879a0u: goto label_1879a0;
        case 0x1879a4u: goto label_1879a4;
        case 0x1879a8u: goto label_1879a8;
        case 0x1879acu: goto label_1879ac;
        case 0x1879b0u: goto label_1879b0;
        case 0x1879b4u: goto label_1879b4;
        case 0x1879b8u: goto label_1879b8;
        case 0x1879bcu: goto label_1879bc;
        case 0x1879c0u: goto label_1879c0;
        case 0x1879c4u: goto label_1879c4;
        case 0x1879c8u: goto label_1879c8;
        case 0x1879ccu: goto label_1879cc;
        case 0x1879d0u: goto label_1879d0;
        case 0x1879d4u: goto label_1879d4;
        case 0x1879d8u: goto label_1879d8;
        case 0x1879dcu: goto label_1879dc;
        case 0x1879e0u: goto label_1879e0;
        case 0x1879e4u: goto label_1879e4;
        case 0x1879e8u: goto label_1879e8;
        case 0x1879ecu: goto label_1879ec;
        case 0x1879f0u: goto label_1879f0;
        case 0x1879f4u: goto label_1879f4;
        case 0x1879f8u: goto label_1879f8;
        case 0x1879fcu: goto label_1879fc;
        case 0x187a00u: goto label_187a00;
        case 0x187a04u: goto label_187a04;
        case 0x187a08u: goto label_187a08;
        case 0x187a0cu: goto label_187a0c;
        case 0x187a10u: goto label_187a10;
        case 0x187a14u: goto label_187a14;
        case 0x187a18u: goto label_187a18;
        case 0x187a1cu: goto label_187a1c;
        case 0x187a20u: goto label_187a20;
        case 0x187a24u: goto label_187a24;
        case 0x187a28u: goto label_187a28;
        case 0x187a2cu: goto label_187a2c;
        case 0x187a30u: goto label_187a30;
        case 0x187a34u: goto label_187a34;
        case 0x187a38u: goto label_187a38;
        case 0x187a3cu: goto label_187a3c;
        case 0x187a40u: goto label_187a40;
        case 0x187a44u: goto label_187a44;
        case 0x187a48u: goto label_187a48;
        case 0x187a4cu: goto label_187a4c;
        case 0x187a50u: goto label_187a50;
        case 0x187a54u: goto label_187a54;
        case 0x187a58u: goto label_187a58;
        case 0x187a5cu: goto label_187a5c;
        case 0x187a60u: goto label_187a60;
        case 0x187a64u: goto label_187a64;
        case 0x187a68u: goto label_187a68;
        case 0x187a6cu: goto label_187a6c;
        case 0x187a70u: goto label_187a70;
        case 0x187a74u: goto label_187a74;
        case 0x187a78u: goto label_187a78;
        case 0x187a7cu: goto label_187a7c;
        case 0x187a80u: goto label_187a80;
        case 0x187a84u: goto label_187a84;
        case 0x187a88u: goto label_187a88;
        case 0x187a8cu: goto label_187a8c;
        case 0x187a90u: goto label_187a90;
        case 0x187a94u: goto label_187a94;
        case 0x187a98u: goto label_187a98;
        case 0x187a9cu: goto label_187a9c;
        case 0x187aa0u: goto label_187aa0;
        case 0x187aa4u: goto label_187aa4;
        case 0x187aa8u: goto label_187aa8;
        case 0x187aacu: goto label_187aac;
        case 0x187ab0u: goto label_187ab0;
        case 0x187ab4u: goto label_187ab4;
        case 0x187ab8u: goto label_187ab8;
        case 0x187abcu: goto label_187abc;
        case 0x187ac0u: goto label_187ac0;
        case 0x187ac4u: goto label_187ac4;
        case 0x187ac8u: goto label_187ac8;
        case 0x187accu: goto label_187acc;
        case 0x187ad0u: goto label_187ad0;
        case 0x187ad4u: goto label_187ad4;
        case 0x187ad8u: goto label_187ad8;
        case 0x187adcu: goto label_187adc;
        case 0x187ae0u: goto label_187ae0;
        case 0x187ae4u: goto label_187ae4;
        case 0x187ae8u: goto label_187ae8;
        case 0x187aecu: goto label_187aec;
        case 0x187af0u: goto label_187af0;
        case 0x187af4u: goto label_187af4;
        case 0x187af8u: goto label_187af8;
        case 0x187afcu: goto label_187afc;
        case 0x187b00u: goto label_187b00;
        case 0x187b04u: goto label_187b04;
        case 0x187b08u: goto label_187b08;
        case 0x187b0cu: goto label_187b0c;
        case 0x187b10u: goto label_187b10;
        case 0x187b14u: goto label_187b14;
        case 0x187b18u: goto label_187b18;
        case 0x187b1cu: goto label_187b1c;
        case 0x187b20u: goto label_187b20;
        case 0x187b24u: goto label_187b24;
        case 0x187b28u: goto label_187b28;
        case 0x187b2cu: goto label_187b2c;
        case 0x187b30u: goto label_187b30;
        case 0x187b34u: goto label_187b34;
        case 0x187b38u: goto label_187b38;
        case 0x187b3cu: goto label_187b3c;
        case 0x187b40u: goto label_187b40;
        case 0x187b44u: goto label_187b44;
        case 0x187b48u: goto label_187b48;
        case 0x187b4cu: goto label_187b4c;
        case 0x187b50u: goto label_187b50;
        case 0x187b54u: goto label_187b54;
        case 0x187b58u: goto label_187b58;
        case 0x187b5cu: goto label_187b5c;
        default: break;
    }

    ctx->pc = 0x187170u;

label_187170:
    // 0x187170: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x187170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_187174:
    // 0x187174: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x187174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_187178:
    // 0x187178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18717c:
    // 0x18717c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_187180:
    // 0x187180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187184:
    // 0x187184: 0xa3a40088  sb          $a0, 0x88($sp)
    ctx->pc = 0x187184u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 4));
label_187188:
    // 0x187188: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x187188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_18718c:
    // 0x18718c: 0x2471fe10  addiu       $s1, $v1, -0x1F0
    ctx->pc = 0x18718cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
label_187190:
    // 0x187190: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187194:
    // 0x187194: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x187194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_187198:
    // 0x187198: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x187198u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_18719c:
    // 0x18719c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x18719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1871a0:
    // 0x1871a0: 0x24702380  addiu       $s0, $v1, 0x2380
    ctx->pc = 0x1871a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9088));
label_1871a4:
    // 0x1871a4: 0x93a30088  lbu         $v1, 0x88($sp)
    ctx->pc = 0x1871a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
label_1871a8:
    // 0x1871a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1871a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1871ac:
    // 0x1871ac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1871b0:
    if (ctx->pc == 0x1871B0u) {
        ctx->pc = 0x1871B4u;
        goto label_1871b4;
    }
    ctx->pc = 0x1871ACu;
    {
        const bool branch_taken_0x1871ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1871ac) {
            ctx->pc = 0x1871C4u;
            goto label_1871c4;
        }
    }
    ctx->pc = 0x1871B4u;
label_1871b4:
    // 0x1871b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1871b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1871b8:
    // 0x1871b8: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1871b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_1871bc:
    // 0x1871bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1871bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1871c0:
    // 0x1871c0: 0xac200358  sw          $zero, 0x358($at)
    ctx->pc = 0x1871c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 856), GPR_U32(ctx, 0));
label_1871c4:
    // 0x1871c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1871c8:
    // 0x1871c8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1871c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963512)));
label_1871cc:
    // 0x1871cc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1871ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_1871d0:
    // 0x1871d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1871d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1871d4:
    // 0x1871d4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1871d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1871d8:
    // 0x1871d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1871d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1871dc:
    // 0x1871dc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1871dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1871e0:
    // 0x1871e0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1871e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_1871e4:
    // 0x1871e4: 0x24621380  addiu       $v0, $v1, 0x1380
    ctx->pc = 0x1871e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
label_1871e8:
    // 0x1871e8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1871e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1871ec:
    // 0x1871ec: 0x8c850158  lw          $a1, 0x158($a0)
    ctx->pc = 0x1871ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_1871f0:
    // 0x1871f0: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1871f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1871f4:
    // 0x1871f4: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x1871f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1871f8:
    // 0x1871f8: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x1871f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_1871fc:
    // 0x1871fc: 0xac830158  sw          $v1, 0x158($a0)
    ctx->pc = 0x1871fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 3));
label_187200:
    // 0x187200: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x187200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_187204:
    // 0x187204: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x187204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_187208:
    // 0x187208: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_18720c:
    if (ctx->pc == 0x18720Cu) {
        ctx->pc = 0x187210u;
        goto label_187210;
    }
    ctx->pc = 0x187208u;
    {
        const bool branch_taken_0x187208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x187208) {
            ctx->pc = 0x187220u;
            goto label_187220;
        }
    }
    ctx->pc = 0x187210u;
label_187210:
    // 0x187210: 0x8e030164  lw          $v1, 0x164($s0)
    ctx->pc = 0x187210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_187214:
    // 0x187214: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_187218:
    // 0x187218: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_18721c:
    if (ctx->pc == 0x18721Cu) {
        ctx->pc = 0x187220u;
        goto label_187220;
    }
    ctx->pc = 0x187218u;
    {
        const bool branch_taken_0x187218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187218) {
            ctx->pc = 0x187258u;
            goto label_187258;
        }
    }
    ctx->pc = 0x187220u;
label_187220:
    // 0x187220: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x187220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_187224:
    // 0x187224: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x187224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_187228:
    // 0x187228: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18722c:
    // 0x18722c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18722cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_187230:
    // 0x187230: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187230u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_187234:
    // 0x187234: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x187234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_187238:
    // 0x187238: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x187238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_18723c:
    // 0x18723c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_187240:
    // 0x187240: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187240u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_187244:
    // 0x187244: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x187244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_187248:
    // 0x187248: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18724c:
    // 0x18724c: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x18724cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
label_187250:
    // 0x187250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_187254:
    // 0x187254: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x187254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
label_187258:
    // 0x187258: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x187258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_18725c:
    // 0x18725c: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_187260:
    // 0x187260: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x187260u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_187264:
    // 0x187264: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_187268:
    // 0x187268: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x187268u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18726c:
    // 0x18726c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18726cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187270:
    // 0x187270: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x187270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_187274:
    // 0x187274: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x187274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
label_187278:
    // 0x187278: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_18727c:
    if (ctx->pc == 0x18727Cu) {
        ctx->pc = 0x187280u;
        goto label_187280;
    }
    ctx->pc = 0x187278u;
    {
        const bool branch_taken_0x187278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187278) {
            ctx->pc = 0x187304u;
            goto label_187304;
        }
    }
    ctx->pc = 0x187280u;
label_187280:
    // 0x187280: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_187284:
    // 0x187284: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x187284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958024)));
label_187288:
    // 0x187288: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x187288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_18728c:
    // 0x18728c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18728cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_187290:
    // 0x187290: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_187294:
    if (ctx->pc == 0x187294u) {
        ctx->pc = 0x187298u;
        goto label_187298;
    }
    ctx->pc = 0x187290u;
    {
        const bool branch_taken_0x187290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187290) {
            ctx->pc = 0x187304u;
            goto label_187304;
        }
    }
    ctx->pc = 0x187298u;
label_187298:
    // 0x187298: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18729c:
    // 0x18729c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x18729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1872a0:
    // 0x1872a0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1872a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_1872a4:
    // 0x1872a4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1872a8:
    if (ctx->pc == 0x1872A8u) {
        ctx->pc = 0x1872ACu;
        goto label_1872ac;
    }
    ctx->pc = 0x1872A4u;
    {
        const bool branch_taken_0x1872a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1872a4) {
            ctx->pc = 0x187304u;
            goto label_187304;
        }
    }
    ctx->pc = 0x1872ACu;
label_1872ac:
    // 0x1872ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1872acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1872b0:
    // 0x1872b0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1872b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1872b4:
    // 0x1872b4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1872b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1872b8:
    // 0x1872b8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1872bc:
    if (ctx->pc == 0x1872BCu) {
        ctx->pc = 0x1872C0u;
        goto label_1872c0;
    }
    ctx->pc = 0x1872B8u;
    {
        const bool branch_taken_0x1872b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1872b8) {
            ctx->pc = 0x187304u;
            goto label_187304;
        }
    }
    ctx->pc = 0x1872C0u;
label_1872c0:
    // 0x1872c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1872c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1872c4:
    // 0x1872c4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1872c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1872c8:
    // 0x1872c8: 0xc05cf7c  jal         func_173DF0
label_1872cc:
    if (ctx->pc == 0x1872CCu) {
        ctx->pc = 0x1872D0u;
        goto label_1872d0;
    }
    ctx->pc = 0x1872C8u;
    SET_GPR_U32(ctx, 31, 0x1872D0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1872C8u, 0x1872D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872D0u;
label_1872d0:
    // 0x1872d0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1872d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1872d4:
    // 0x1872d4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1872d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1872d8:
    // 0x1872d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1872d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1872dc:
    // 0x1872dc: 0xc4200368  lwc1        $f0, 0x368($at)
    ctx->pc = 0x1872dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1872e0:
    // 0x1872e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1872e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1872e4:
    // 0x1872e4: 0x0  nop
    ctx->pc = 0x1872e4u;
    // NOP
label_1872e8:
    // 0x1872e8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1872ec:
    if (ctx->pc == 0x1872ECu) {
        ctx->pc = 0x1872F0u;
        goto label_1872f0;
    }
    ctx->pc = 0x1872E8u;
    {
        const bool branch_taken_0x1872e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1872e8) {
            ctx->pc = 0x187310u;
            goto label_187310;
        }
    }
    ctx->pc = 0x1872F0u;
label_1872f0:
    // 0x1872f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1872f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1872f4:
    // 0x1872f4: 0xc4200368  lwc1        $f0, 0x368($at)
    ctx->pc = 0x1872f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1872f8:
    // 0x1872f8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1872f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1872fc:
    // 0x1872fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_187300:
    if (ctx->pc == 0x187300u) {
        ctx->pc = 0x187304u;
        goto label_187304;
    }
    ctx->pc = 0x1872FCu;
    {
        const bool branch_taken_0x1872fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872fc) {
            ctx->pc = 0x187310u;
            goto label_187310;
        }
    }
    ctx->pc = 0x187304u;
label_187304:
    // 0x187304: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x187304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_187308:
    // 0x187308: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_18730c:
    // 0x18730c: 0xe4200368  swc1        $f0, 0x368($at)
    ctx->pc = 0x18730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 872), bits); }
label_187310:
    // 0x187310: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x187310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_187314:
    // 0x187314: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x187314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_187318:
    // 0x187318: 0xc061ed8  jal         func_187B60
label_18731c:
    if (ctx->pc == 0x18731Cu) {
        ctx->pc = 0x187320u;
        goto label_187320;
    }
    ctx->pc = 0x187318u;
    SET_GPR_U32(ctx, 31, 0x187320u);
    ctx->pc = 0x187B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187B60u, 0x187318u, 0x187320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187320u;
label_187320:
    // 0x187320: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_187324:
    if (ctx->pc == 0x187324u) {
        ctx->pc = 0x187328u;
        goto label_187328;
    }
    ctx->pc = 0x187320u;
    {
        const bool branch_taken_0x187320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187320) {
            ctx->pc = 0x187354u;
            goto label_187354;
        }
    }
    ctx->pc = 0x187328u;
label_187328:
    // 0x187328: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_18732c:
    // 0x18732c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x18732cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_187330:
    // 0x187330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_187334:
    // 0x187334: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_187338:
    // 0x187338: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_18733c:
    // 0x18733c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x18733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
label_187340:
    // 0x187340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_187344:
    // 0x187344: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187348:
    // 0x187348: 0xac220af8  sw          $v0, 0xAF8($at)
    ctx->pc = 0x187348u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2808), GPR_U32(ctx, 2));
label_18734c:
    // 0x18734c: 0x1000000f  b           . + 4 + (0xF << 2)
label_187350:
    if (ctx->pc == 0x187350u) {
        ctx->pc = 0x187354u;
        goto label_187354;
    }
    ctx->pc = 0x18734Cu;
    {
        const bool branch_taken_0x18734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18734c) {
            ctx->pc = 0x18738Cu;
            goto label_18738c;
        }
    }
    ctx->pc = 0x187354u;
label_187354:
    // 0x187354: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187358:
    // 0x187358: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x187358u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963512)));
label_18735c:
    // 0x18735c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18735cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_187360:
    // 0x187360: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187360u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_187364:
    // 0x187364: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x187364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_187368:
    // 0x187368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18736c:
    // 0x18736c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18736cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_187370:
    // 0x187370: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_187374:
    // 0x187374: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
label_187378:
    // 0x187378: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18737c:
    // 0x18737c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18737cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187380:
    // 0x187380: 0xac220af8  sw          $v0, 0xAF8($at)
    ctx->pc = 0x187380u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2808), GPR_U32(ctx, 2));
label_187384:
    // 0x187384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_187388:
    // 0x187388: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x187388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_18738c:
    // 0x18738c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x18738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_187390:
    // 0x187390: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x187390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_187394:
    // 0x187394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_187398:
    // 0x187398: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x187398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_18739c:
    // 0x18739c: 0xa4225920  sh          $v0, 0x5920($at)
    ctx->pc = 0x18739cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 22816), (uint16_t)GPR_U32(ctx, 2));
label_1873a0:
    // 0x1873a0: 0xc0620d8  jal         func_188360
label_1873a4:
    if (ctx->pc == 0x1873A4u) {
        ctx->pc = 0x1873A8u;
        goto label_1873a8;
    }
    ctx->pc = 0x1873A0u;
    SET_GPR_U32(ctx, 31, 0x1873A8u);
    ctx->pc = 0x188360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188360u, 0x1873A0u, 0x1873A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873A8u;
label_1873a8:
    // 0x1873a8: 0xa38280ac  sb          $v0, -0x7F54($gp)
    ctx->pc = 0x1873a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934700), (uint8_t)GPR_U32(ctx, 2));
label_1873ac:
    // 0x1873ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1873acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1873b0:
    // 0x1873b0: 0x8c240358  lw          $a0, 0x358($at)
    ctx->pc = 0x1873b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 856)));
label_1873b4:
    // 0x1873b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1873b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1873b8:
    // 0x1873b8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_1873bc:
    if (ctx->pc == 0x1873BCu) {
        ctx->pc = 0x1873C0u;
        goto label_1873c0;
    }
    ctx->pc = 0x1873B8u;
    {
        const bool branch_taken_0x1873b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1873b8) {
            ctx->pc = 0x187404u;
            goto label_187404;
        }
    }
    ctx->pc = 0x1873C0u;
label_1873c0:
    // 0x1873c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1873c4:
    if (ctx->pc == 0x1873C4u) {
        ctx->pc = 0x1873C8u;
        goto label_1873c8;
    }
    ctx->pc = 0x1873C0u;
    {
        const bool branch_taken_0x1873c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873c0) {
            ctx->pc = 0x1873D0u;
            goto label_1873d0;
        }
    }
    ctx->pc = 0x1873C8u;
label_1873c8:
    // 0x1873c8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1873cc:
    if (ctx->pc == 0x1873CCu) {
        ctx->pc = 0x1873D0u;
        goto label_1873d0;
    }
    ctx->pc = 0x1873C8u;
    {
        const bool branch_taken_0x1873c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873c8) {
            ctx->pc = 0x187430u;
            goto label_187430;
        }
    }
    ctx->pc = 0x1873D0u;
label_1873d0:
    // 0x1873d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1873d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1873d4:
    // 0x1873d4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1873d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1873d8:
    // 0x1873d8: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1873d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1873dc:
    // 0x1873dc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1873e0:
    if (ctx->pc == 0x1873E0u) {
        ctx->pc = 0x1873E4u;
        goto label_1873e4;
    }
    ctx->pc = 0x1873DCu;
    {
        const bool branch_taken_0x1873dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873dc) {
            ctx->pc = 0x187430u;
            goto label_187430;
        }
    }
    ctx->pc = 0x1873E4u;
label_1873e4:
    // 0x1873e4: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1873e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1873e8:
    // 0x1873e8: 0xc061014  jal         func_184050
label_1873ec:
    if (ctx->pc == 0x1873ECu) {
        ctx->pc = 0x1873F0u;
        goto label_1873f0;
    }
    ctx->pc = 0x1873E8u;
    SET_GPR_U32(ctx, 31, 0x1873F0u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1873E8u, 0x1873F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873F0u;
label_1873f0:
    // 0x1873f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1873f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1873f4:
    // 0x1873f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1873f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1873f8:
    // 0x1873f8: 0xac230358  sw          $v1, 0x358($at)
    ctx->pc = 0x1873f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 856), GPR_U32(ctx, 3));
label_1873fc:
    // 0x1873fc: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_187400:
    if (ctx->pc == 0x187400u) {
        ctx->pc = 0x187404u;
        goto label_187404;
    }
    ctx->pc = 0x1873FCu;
    {
        const bool branch_taken_0x1873fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873fc) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187404u;
label_187404:
    // 0x187404: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187408:
    // 0x187408: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_18740c:
    // 0x18740c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x18740cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_187410:
    // 0x187410: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_187414:
    if (ctx->pc == 0x187414u) {
        ctx->pc = 0x187418u;
        goto label_187418;
    }
    ctx->pc = 0x187410u;
    {
        const bool branch_taken_0x187410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187410) {
            ctx->pc = 0x187428u;
            goto label_187428;
        }
    }
    ctx->pc = 0x187418u;
label_187418:
    // 0x187418: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_18741c:
    // 0x18741c: 0xac200358  sw          $zero, 0x358($at)
    ctx->pc = 0x18741cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 856), GPR_U32(ctx, 0));
label_187420:
    // 0x187420: 0x10000003  b           . + 4 + (0x3 << 2)
label_187424:
    if (ctx->pc == 0x187424u) {
        ctx->pc = 0x187428u;
        goto label_187428;
    }
    ctx->pc = 0x187420u;
    {
        const bool branch_taken_0x187420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187420) {
            ctx->pc = 0x187430u;
            goto label_187430;
        }
    }
    ctx->pc = 0x187428u;
label_187428:
    // 0x187428: 0x100001c6  b           . + 4 + (0x1C6 << 2)
label_18742c:
    if (ctx->pc == 0x18742Cu) {
        ctx->pc = 0x187430u;
        goto label_187430;
    }
    ctx->pc = 0x187428u;
    {
        const bool branch_taken_0x187428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187428) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187430u;
label_187430:
    // 0x187430: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187434:
    // 0x187434: 0x8c250350  lw          $a1, 0x350($at)
    ctx->pc = 0x187434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 848)));
label_187438:
    // 0x187438: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x187438u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_18743c:
    // 0x18743c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_187440:
    if (ctx->pc == 0x187440u) {
        ctx->pc = 0x187444u;
        goto label_187444;
    }
    ctx->pc = 0x18743Cu;
    {
        const bool branch_taken_0x18743c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18743c) {
            ctx->pc = 0x187460u;
            goto label_187460;
        }
    }
    ctx->pc = 0x187444u;
label_187444:
    // 0x187444: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_187448:
    // 0x187448: 0x2464ed80  addiu       $a0, $v1, -0x1280
    ctx->pc = 0x187448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
label_18744c:
    // 0x18744c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18744cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_187450:
    // 0x187450: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187454:
    // 0x187454: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187458:
    // 0x187458: 0x600008  jr          $v1
label_18745c:
    if (ctx->pc == 0x18745Cu) {
        ctx->pc = 0x187460u;
        goto label_187460;
    }
    ctx->pc = 0x187458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187458u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x187460u;
label_187460:
    // 0x187460: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187464:
    // 0x187464: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_187468:
    // 0x187468: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x187468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_18746c:
    // 0x18746c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_187470:
    if (ctx->pc == 0x187470u) {
        ctx->pc = 0x187474u;
        goto label_187474;
    }
    ctx->pc = 0x18746Cu;
    {
        const bool branch_taken_0x18746c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18746c) {
            ctx->pc = 0x187484u;
            goto label_187484;
        }
    }
    ctx->pc = 0x187474u;
label_187474:
    // 0x187474: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187478:
    // 0x187478: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187478u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_18747c:
    // 0x18747c: 0x10000120  b           . + 4 + (0x120 << 2)
label_187480:
    if (ctx->pc == 0x187480u) {
        ctx->pc = 0x187484u;
        goto label_187484;
    }
    ctx->pc = 0x18747Cu;
    {
        const bool branch_taken_0x18747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18747c) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x187484u;
label_187484:
    // 0x187484: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187488:
    // 0x187488: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x187488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_18748c:
    // 0x18748c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x18748cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_187490:
    // 0x187490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_187494:
    // 0x187494: 0x1060011a  beqz        $v1, . + 4 + (0x11A << 2)
label_187498:
    if (ctx->pc == 0x187498u) {
        ctx->pc = 0x18749Cu;
        goto label_18749c;
    }
    ctx->pc = 0x187494u;
    {
        const bool branch_taken_0x187494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187494) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x18749Cu;
label_18749c:
    // 0x18749c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x18749cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1874a0:
    // 0x1874a0: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x1874a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_1874a4:
    // 0x1874a4: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
label_1874a8:
    if (ctx->pc == 0x1874A8u) {
        ctx->pc = 0x1874ACu;
        goto label_1874ac;
    }
    ctx->pc = 0x1874A4u;
    {
        const bool branch_taken_0x1874a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1874a4) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1874ACu;
label_1874ac:
    // 0x1874ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1874acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1874b0:
    // 0x1874b0: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x1874b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958024)));
label_1874b4:
    // 0x1874b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1874b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1874b8:
    // 0x1874b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1874b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1874bc:
    // 0x1874bc: 0x14600110  bnez        $v1, . + 4 + (0x110 << 2)
label_1874c0:
    if (ctx->pc == 0x1874C0u) {
        ctx->pc = 0x1874C4u;
        goto label_1874c4;
    }
    ctx->pc = 0x1874BCu;
    {
        const bool branch_taken_0x1874bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1874bc) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1874C4u;
label_1874c4:
    // 0x1874c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1874c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1874c8:
    // 0x1874c8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1874c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963512)));
label_1874cc:
    // 0x1874cc: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1874ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_1874d0:
    // 0x1874d0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1874d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1874d4:
    // 0x1874d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1874d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1874d8:
    // 0x1874d8: 0xc062080  jal         func_188200
label_1874dc:
    if (ctx->pc == 0x1874DCu) {
        ctx->pc = 0x1874E0u;
        goto label_1874e0;
    }
    ctx->pc = 0x1874D8u;
    SET_GPR_U32(ctx, 31, 0x1874E0u);
    ctx->pc = 0x188200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188200u, 0x1874D8u, 0x1874E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874E0u;
label_1874e0:
    // 0x1874e0: 0x938380ac  lbu         $v1, -0x7F54($gp)
    ctx->pc = 0x1874e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934700)));
label_1874e4:
    // 0x1874e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1874e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1874e8:
    // 0x1874e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1874e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1874ec:
    // 0x1874ec: 0x10830104  beq         $a0, $v1, . + 4 + (0x104 << 2)
label_1874f0:
    if (ctx->pc == 0x1874F0u) {
        ctx->pc = 0x1874F4u;
        goto label_1874f4;
    }
    ctx->pc = 0x1874ECu;
    {
        const bool branch_taken_0x1874ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1874ec) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1874F4u;
label_1874f4:
    // 0x1874f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1874f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1874f8:
    // 0x1874f8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_1874fc:
    if (ctx->pc == 0x1874FCu) {
        ctx->pc = 0x187500u;
        goto label_187500;
    }
    ctx->pc = 0x1874F8u;
    {
        const bool branch_taken_0x1874f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1874f8) {
            ctx->pc = 0x187544u;
            goto label_187544;
        }
    }
    ctx->pc = 0x187500u;
label_187500:
    // 0x187500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187504:
    // 0x187504: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_187508:
    if (ctx->pc == 0x187508u) {
        ctx->pc = 0x18750Cu;
        goto label_18750c;
    }
    ctx->pc = 0x187504u;
    {
        const bool branch_taken_0x187504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x187504) {
            ctx->pc = 0x18751Cu;
            goto label_18751c;
        }
    }
    ctx->pc = 0x18750Cu;
label_18750c:
    // 0x18750c: 0x108000fc  beqz        $a0, . + 4 + (0xFC << 2)
label_187510:
    if (ctx->pc == 0x187510u) {
        ctx->pc = 0x187514u;
        goto label_187514;
    }
    ctx->pc = 0x18750Cu;
    {
        const bool branch_taken_0x18750c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18750c) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x187514u;
label_187514:
    // 0x187514: 0x100000fa  b           . + 4 + (0xFA << 2)
label_187518:
    if (ctx->pc == 0x187518u) {
        ctx->pc = 0x18751Cu;
        goto label_18751c;
    }
    ctx->pc = 0x187514u;
    {
        const bool branch_taken_0x187514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187514) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x18751Cu;
label_18751c:
    // 0x18751c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_187520:
    // 0x187520: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x187520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
label_187524:
    // 0x187524: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187528:
    // 0x187528: 0xc061014  jal         func_184050
label_18752c:
    if (ctx->pc == 0x18752Cu) {
        ctx->pc = 0x187530u;
        goto label_187530;
    }
    ctx->pc = 0x187528u;
    SET_GPR_U32(ctx, 31, 0x187530u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187528u, 0x187530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187530u;
label_187530:
    // 0x187530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187534:
    // 0x187534: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187538:
    // 0x187538: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187538u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 3));
label_18753c:
    // 0x18753c: 0x10000181  b           . + 4 + (0x181 << 2)
label_187540:
    if (ctx->pc == 0x187540u) {
        ctx->pc = 0x187544u;
        goto label_187544;
    }
    ctx->pc = 0x18753Cu;
    {
        const bool branch_taken_0x18753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18753c) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187544u;
label_187544:
    // 0x187544: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_187548:
    // 0x187548: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x187548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
label_18754c:
    // 0x18754c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_187550:
    // 0x187550: 0xc061014  jal         func_184050
label_187554:
    if (ctx->pc == 0x187554u) {
        ctx->pc = 0x187558u;
        goto label_187558;
    }
    ctx->pc = 0x187550u;
    SET_GPR_U32(ctx, 31, 0x187558u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187550u, 0x187558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187558u;
label_187558:
    // 0x187558: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x187558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18755c:
    // 0x18755c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18755cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187560:
    // 0x187560: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187560u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 3));
label_187564:
    // 0x187564: 0x10000177  b           . + 4 + (0x177 << 2)
label_187568:
    if (ctx->pc == 0x187568u) {
        ctx->pc = 0x18756Cu;
        goto label_18756c;
    }
    ctx->pc = 0x187564u;
    {
        const bool branch_taken_0x187564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187564) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x18756Cu;
label_18756c:
    // 0x18756c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18756cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187570:
    // 0x187570: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_187574:
    // 0x187574: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x187574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_187578:
    // 0x187578: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_18757c:
    if (ctx->pc == 0x18757Cu) {
        ctx->pc = 0x187580u;
        goto label_187580;
    }
    ctx->pc = 0x187578u;
    {
        const bool branch_taken_0x187578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187578) {
            ctx->pc = 0x187590u;
            goto label_187590;
        }
    }
    ctx->pc = 0x187580u;
label_187580:
    // 0x187580: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187584:
    // 0x187584: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187584u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_187588:
    // 0x187588: 0x100000dd  b           . + 4 + (0xDD << 2)
label_18758c:
    if (ctx->pc == 0x18758Cu) {
        ctx->pc = 0x187590u;
        goto label_187590;
    }
    ctx->pc = 0x187588u;
    {
        const bool branch_taken_0x187588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187588) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x187590u;
label_187590:
    // 0x187590: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_187594:
    // 0x187594: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x187594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_187598:
    // 0x187598: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_18759c:
    if (ctx->pc == 0x18759Cu) {
        ctx->pc = 0x1875A0u;
        goto label_1875a0;
    }
    ctx->pc = 0x187598u;
    {
        const bool branch_taken_0x187598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187598) {
            ctx->pc = 0x1875B0u;
            goto label_1875b0;
        }
    }
    ctx->pc = 0x1875A0u;
label_1875a0:
    // 0x1875a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1875a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1875a4:
    // 0x1875a4: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1875a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_1875a8:
    // 0x1875a8: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_1875ac:
    if (ctx->pc == 0x1875ACu) {
        ctx->pc = 0x1875B0u;
        goto label_1875b0;
    }
    ctx->pc = 0x1875A8u;
    {
        const bool branch_taken_0x1875a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875a8) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1875B0u;
label_1875b0:
    // 0x1875b0: 0x938380ac  lbu         $v1, -0x7F54($gp)
    ctx->pc = 0x1875b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934700)));
label_1875b4:
    // 0x1875b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1875b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1875b8:
    // 0x1875b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1875b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1875bc:
    // 0x1875bc: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1875c0:
    if (ctx->pc == 0x1875C0u) {
        ctx->pc = 0x1875C4u;
        goto label_1875c4;
    }
    ctx->pc = 0x1875BCu;
    {
        const bool branch_taken_0x1875bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1875bc) {
            ctx->pc = 0x1875D4u;
            goto label_1875d4;
        }
    }
    ctx->pc = 0x1875C4u;
label_1875c4:
    // 0x1875c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1875c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1875c8:
    // 0x1875c8: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1875c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_1875cc:
    // 0x1875cc: 0x100000cc  b           . + 4 + (0xCC << 2)
label_1875d0:
    if (ctx->pc == 0x1875D0u) {
        ctx->pc = 0x1875D4u;
        goto label_1875d4;
    }
    ctx->pc = 0x1875CCu;
    {
        const bool branch_taken_0x1875cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875cc) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1875D4u;
label_1875d4:
    // 0x1875d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1875d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1875d8:
    // 0x1875d8: 0x8c22efa8  lw          $v0, -0x1058($at)
    ctx->pc = 0x1875d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_1875dc:
    // 0x1875dc: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x1875dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
label_1875e0:
    // 0x1875e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1875e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1875e4:
    // 0x1875e4: 0xc061014  jal         func_184050
label_1875e8:
    if (ctx->pc == 0x1875E8u) {
        ctx->pc = 0x1875ECu;
        goto label_1875ec;
    }
    ctx->pc = 0x1875E4u;
    SET_GPR_U32(ctx, 31, 0x1875ECu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1875E4u, 0x1875ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1875ECu;
label_1875ec:
    // 0x1875ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1875ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1875f0:
    // 0x1875f0: 0x8c230350  lw          $v1, 0x350($at)
    ctx->pc = 0x1875f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 848)));
label_1875f4:
    // 0x1875f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1875f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1875f8:
    // 0x1875f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1875f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1875fc:
    // 0x1875fc: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x1875fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 3));
label_187600:
    // 0x187600: 0x10000150  b           . + 4 + (0x150 << 2)
label_187604:
    if (ctx->pc == 0x187604u) {
        ctx->pc = 0x187608u;
        goto label_187608;
    }
    ctx->pc = 0x187600u;
    {
        const bool branch_taken_0x187600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187600) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187608u;
label_187608:
    // 0x187608: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18760c:
    // 0x18760c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x18760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_187610:
    // 0x187610: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x187610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_187614:
    // 0x187614: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_187618:
    if (ctx->pc == 0x187618u) {
        ctx->pc = 0x18761Cu;
        goto label_18761c;
    }
    ctx->pc = 0x187614u;
    {
        const bool branch_taken_0x187614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187614) {
            ctx->pc = 0x18762Cu;
            goto label_18762c;
        }
    }
    ctx->pc = 0x18761Cu;
label_18761c:
    // 0x18761c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187620:
    // 0x187620: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187620u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_187624:
    // 0x187624: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_187628:
    if (ctx->pc == 0x187628u) {
        ctx->pc = 0x18762Cu;
        goto label_18762c;
    }
    ctx->pc = 0x187624u;
    {
        const bool branch_taken_0x187624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187624) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x18762Cu;
label_18762c:
    // 0x18762c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x18762cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_187630:
    // 0x187630: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x187630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_187634:
    // 0x187634: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_187638:
    if (ctx->pc == 0x187638u) {
        ctx->pc = 0x18763Cu;
        goto label_18763c;
    }
    ctx->pc = 0x187634u;
    {
        const bool branch_taken_0x187634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187634) {
            ctx->pc = 0x18764Cu;
            goto label_18764c;
        }
    }
    ctx->pc = 0x18763Cu;
label_18763c:
    // 0x18763c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18763cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187640:
    // 0x187640: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187640u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_187644:
    // 0x187644: 0x100000ae  b           . + 4 + (0xAE << 2)
label_187648:
    if (ctx->pc == 0x187648u) {
        ctx->pc = 0x18764Cu;
        goto label_18764c;
    }
    ctx->pc = 0x187644u;
    {
        const bool branch_taken_0x187644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187644) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x18764Cu;
label_18764c:
    // 0x18764c: 0x938380ac  lbu         $v1, -0x7F54($gp)
    ctx->pc = 0x18764cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934700)));
label_187650:
    // 0x187650: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x187650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_187654:
    // 0x187654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187658:
    // 0x187658: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_18765c:
    if (ctx->pc == 0x18765Cu) {
        ctx->pc = 0x187660u;
        goto label_187660;
    }
    ctx->pc = 0x187658u;
    {
        const bool branch_taken_0x187658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x187658) {
            ctx->pc = 0x187670u;
            goto label_187670;
        }
    }
    ctx->pc = 0x187660u;
label_187660:
    // 0x187660: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187664:
    // 0x187664: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187664u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_187668:
    // 0x187668: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_18766c:
    if (ctx->pc == 0x18766Cu) {
        ctx->pc = 0x187670u;
        goto label_187670;
    }
    ctx->pc = 0x187668u;
    {
        const bool branch_taken_0x187668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187668) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x187670u;
label_187670:
    // 0x187670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_187674:
    // 0x187674: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x187674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958024)));
label_187678:
    // 0x187678: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x187678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_18767c:
    // 0x18767c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18767cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_187680:
    // 0x187680: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_187684:
    if (ctx->pc == 0x187684u) {
        ctx->pc = 0x187688u;
        goto label_187688;
    }
    ctx->pc = 0x187680u;
    {
        const bool branch_taken_0x187680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187680) {
            ctx->pc = 0x187694u;
            goto label_187694;
        }
    }
    ctx->pc = 0x187688u;
label_187688:
    // 0x187688: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_18768c:
    // 0x18768c: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x18768cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_187690:
    // 0x187690: 0xae03016c  sw          $v1, 0x16C($s0)
    ctx->pc = 0x187690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 3));
label_187694:
    // 0x187694: 0x1000012b  b           . + 4 + (0x12B << 2)
label_187698:
    if (ctx->pc == 0x187698u) {
        ctx->pc = 0x18769Cu;
        goto label_18769c;
    }
    ctx->pc = 0x187694u;
    {
        const bool branch_taken_0x187694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187694) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x18769Cu;
label_18769c:
    // 0x18769c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1876a0:
    // 0x1876a0: 0xc061014  jal         func_184050
label_1876a4:
    if (ctx->pc == 0x1876A4u) {
        ctx->pc = 0x1876A8u;
        goto label_1876a8;
    }
    ctx->pc = 0x1876A0u;
    SET_GPR_U32(ctx, 31, 0x1876A8u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1876A0u, 0x1876A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876A8u;
label_1876a8:
    // 0x1876a8: 0x10000126  b           . + 4 + (0x126 << 2)
label_1876ac:
    if (ctx->pc == 0x1876ACu) {
        ctx->pc = 0x1876B0u;
        goto label_1876b0;
    }
    ctx->pc = 0x1876A8u;
    {
        const bool branch_taken_0x1876a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876a8) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x1876B0u;
label_1876b0:
    // 0x1876b0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1876b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1876b4:
    // 0x1876b4: 0xc061014  jal         func_184050
label_1876b8:
    if (ctx->pc == 0x1876B8u) {
        ctx->pc = 0x1876BCu;
        goto label_1876bc;
    }
    ctx->pc = 0x1876B4u;
    SET_GPR_U32(ctx, 31, 0x1876BCu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1876B4u, 0x1876BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876BCu;
label_1876bc:
    // 0x1876bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1876bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1876c0:
    // 0x1876c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1876c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1876c4:
    // 0x1876c4: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x1876c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 3));
label_1876c8:
    // 0x1876c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1876c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1876cc:
    // 0x1876cc: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x1876ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
label_1876d0:
    // 0x1876d0: 0x1000011c  b           . + 4 + (0x11C << 2)
label_1876d4:
    if (ctx->pc == 0x1876D4u) {
        ctx->pc = 0x1876D8u;
        goto label_1876d8;
    }
    ctx->pc = 0x1876D0u;
    {
        const bool branch_taken_0x1876d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876d0) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x1876D8u;
label_1876d8:
    // 0x1876d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1876d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1876dc:
    // 0x1876dc: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1876dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1876e0:
    // 0x1876e0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1876e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1876e4:
    // 0x1876e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1876e8:
    if (ctx->pc == 0x1876E8u) {
        ctx->pc = 0x1876ECu;
        goto label_1876ec;
    }
    ctx->pc = 0x1876E4u;
    {
        const bool branch_taken_0x1876e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876e4) {
            ctx->pc = 0x18770Cu;
            goto label_18770c;
        }
    }
    ctx->pc = 0x1876ECu;
label_1876ec:
    // 0x1876ec: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1876ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1876f0:
    // 0x1876f0: 0xc061014  jal         func_184050
label_1876f4:
    if (ctx->pc == 0x1876F4u) {
        ctx->pc = 0x1876F8u;
        goto label_1876f8;
    }
    ctx->pc = 0x1876F0u;
    SET_GPR_U32(ctx, 31, 0x1876F8u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1876F0u, 0x1876F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876F8u;
label_1876f8:
    // 0x1876f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1876fc:
    // 0x1876fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1876fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187700:
    // 0x187700: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 3));
label_187704:
    // 0x187704: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x187704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_187708:
    // 0x187708: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x187708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
label_18770c:
    // 0x18770c: 0x1000010d  b           . + 4 + (0x10D << 2)
label_187710:
    if (ctx->pc == 0x187710u) {
        ctx->pc = 0x187714u;
        goto label_187714;
    }
    ctx->pc = 0x18770Cu;
    {
        const bool branch_taken_0x18770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18770c) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187714u;
label_187714:
    // 0x187714: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187718:
    // 0x187718: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_18771c:
    // 0x18771c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x18771cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_187720:
    // 0x187720: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_187724:
    if (ctx->pc == 0x187724u) {
        ctx->pc = 0x187728u;
        goto label_187728;
    }
    ctx->pc = 0x187720u;
    {
        const bool branch_taken_0x187720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187720) {
            ctx->pc = 0x18773Cu;
            goto label_18773c;
        }
    }
    ctx->pc = 0x187728u;
label_187728:
    // 0x187728: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18772c:
    // 0x18772c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18772cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187730:
    // 0x187730: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 3));
label_187734:
    // 0x187734: 0x10000103  b           . + 4 + (0x103 << 2)
label_187738:
    if (ctx->pc == 0x187738u) {
        ctx->pc = 0x18773Cu;
        goto label_18773c;
    }
    ctx->pc = 0x187734u;
    {
        const bool branch_taken_0x187734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187734) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x18773Cu;
label_18773c:
    // 0x18773c: 0x10000101  b           . + 4 + (0x101 << 2)
label_187740:
    if (ctx->pc == 0x187740u) {
        ctx->pc = 0x187744u;
        goto label_187744;
    }
    ctx->pc = 0x18773Cu;
    {
        const bool branch_taken_0x18773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18773c) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187744u;
label_187744:
    // 0x187744: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187748:
    // 0x187748: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_18774c:
    // 0x18774c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x18774cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_187750:
    // 0x187750: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_187754:
    if (ctx->pc == 0x187754u) {
        ctx->pc = 0x187758u;
        goto label_187758;
    }
    ctx->pc = 0x187750u;
    {
        const bool branch_taken_0x187750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187750) {
            ctx->pc = 0x187790u;
            goto label_187790;
        }
    }
    ctx->pc = 0x187758u;
label_187758:
    // 0x187758: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18775c:
    // 0x18775c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x18775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_187760:
    // 0x187760: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_187764:
    // 0x187764: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_187768:
    // 0x187768: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x187768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18776c:
    // 0x18776c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187770:
    // 0x187770: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x187770u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_187774:
    // 0x187774: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x187774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_187778:
    // 0x187778: 0xc061014  jal         func_184050
label_18777c:
    if (ctx->pc == 0x18777Cu) {
        ctx->pc = 0x187780u;
        goto label_187780;
    }
    ctx->pc = 0x187778u;
    SET_GPR_U32(ctx, 31, 0x187780u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187778u, 0x187780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187780u;
label_187780:
    // 0x187780: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187784:
    // 0x187784: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x187784u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_187788:
    // 0x187788: 0x1000005d  b           . + 4 + (0x5D << 2)
label_18778c:
    if (ctx->pc == 0x18778Cu) {
        ctx->pc = 0x187790u;
        goto label_187790;
    }
    ctx->pc = 0x187788u;
    {
        const bool branch_taken_0x187788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187788) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x187790u;
label_187790:
    // 0x187790: 0x100000ec  b           . + 4 + (0xEC << 2)
label_187794:
    if (ctx->pc == 0x187794u) {
        ctx->pc = 0x187798u;
        goto label_187798;
    }
    ctx->pc = 0x187790u;
    {
        const bool branch_taken_0x187790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187790) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187798u;
label_187798:
    // 0x187798: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18779c:
    // 0x18779c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x18779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1877a0:
    // 0x1877a0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1877a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_1877a4:
    // 0x1877a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1877a8:
    if (ctx->pc == 0x1877A8u) {
        ctx->pc = 0x1877ACu;
        goto label_1877ac;
    }
    ctx->pc = 0x1877A4u;
    {
        const bool branch_taken_0x1877a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1877a4) {
            ctx->pc = 0x1877BCu;
            goto label_1877bc;
        }
    }
    ctx->pc = 0x1877ACu;
label_1877ac:
    // 0x1877ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1877acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1877b0:
    // 0x1877b0: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1877b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_1877b4:
    // 0x1877b4: 0x10000052  b           . + 4 + (0x52 << 2)
label_1877b8:
    if (ctx->pc == 0x1877B8u) {
        ctx->pc = 0x1877BCu;
        goto label_1877bc;
    }
    ctx->pc = 0x1877B4u;
    {
        const bool branch_taken_0x1877b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1877b4) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1877BCu;
label_1877bc:
    // 0x1877bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1877bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1877c0:
    // 0x1877c0: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x1877c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_1877c4:
    // 0x1877c4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1877c8:
    if (ctx->pc == 0x1877C8u) {
        ctx->pc = 0x1877CCu;
        goto label_1877cc;
    }
    ctx->pc = 0x1877C4u;
    {
        const bool branch_taken_0x1877c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1877c4) {
            ctx->pc = 0x1877DCu;
            goto label_1877dc;
        }
    }
    ctx->pc = 0x1877CCu;
label_1877cc:
    // 0x1877cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1877ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1877d0:
    // 0x1877d0: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1877d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_1877d4:
    // 0x1877d4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1877d8:
    if (ctx->pc == 0x1877D8u) {
        ctx->pc = 0x1877DCu;
        goto label_1877dc;
    }
    ctx->pc = 0x1877D4u;
    {
        const bool branch_taken_0x1877d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1877d4) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1877DCu;
label_1877dc:
    // 0x1877dc: 0x938380ac  lbu         $v1, -0x7F54($gp)
    ctx->pc = 0x1877dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934700)));
label_1877e0:
    // 0x1877e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1877e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1877e4:
    // 0x1877e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1877e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1877e8:
    // 0x1877e8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1877ec:
    if (ctx->pc == 0x1877ECu) {
        ctx->pc = 0x1877F0u;
        goto label_1877f0;
    }
    ctx->pc = 0x1877E8u;
    {
        const bool branch_taken_0x1877e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1877e8) {
            ctx->pc = 0x187800u;
            goto label_187800;
        }
    }
    ctx->pc = 0x1877F0u;
label_1877f0:
    // 0x1877f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1877f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1877f4:
    // 0x1877f4: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1877f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_1877f8:
    // 0x1877f8: 0x10000041  b           . + 4 + (0x41 << 2)
label_1877fc:
    if (ctx->pc == 0x1877FCu) {
        ctx->pc = 0x187800u;
        goto label_187800;
    }
    ctx->pc = 0x1877F8u;
    {
        const bool branch_taken_0x1877f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1877f8) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x187800u;
label_187800:
    // 0x187800: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_187804:
    // 0x187804: 0x8c22efa8  lw          $v0, -0x1058($at)
    ctx->pc = 0x187804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_187808:
    // 0x187808: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x187808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
label_18780c:
    // 0x18780c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_187810:
    // 0x187810: 0xc061014  jal         func_184050
label_187814:
    if (ctx->pc == 0x187814u) {
        ctx->pc = 0x187818u;
        goto label_187818;
    }
    ctx->pc = 0x187810u;
    SET_GPR_U32(ctx, 31, 0x187818u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187810u, 0x187818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187818u;
label_187818:
    // 0x187818: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_18781c:
    // 0x18781c: 0x8c230350  lw          $v1, 0x350($at)
    ctx->pc = 0x18781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 848)));
label_187820:
    // 0x187820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x187820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_187824:
    // 0x187824: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187828:
    // 0x187828: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187828u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 3));
label_18782c:
    // 0x18782c: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_187830:
    if (ctx->pc == 0x187830u) {
        ctx->pc = 0x187834u;
        goto label_187834;
    }
    ctx->pc = 0x18782Cu;
    {
        const bool branch_taken_0x18782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18782c) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187834u;
label_187834:
    // 0x187834: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_187838:
    // 0x187838: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_18783c:
    // 0x18783c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x18783cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_187840:
    // 0x187840: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_187844:
    if (ctx->pc == 0x187844u) {
        ctx->pc = 0x187848u;
        goto label_187848;
    }
    ctx->pc = 0x187840u;
    {
        const bool branch_taken_0x187840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187840) {
            ctx->pc = 0x187858u;
            goto label_187858;
        }
    }
    ctx->pc = 0x187848u;
label_187848:
    // 0x187848: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_18784c:
    // 0x18784c: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x18784cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_187850:
    // 0x187850: 0x1000002b  b           . + 4 + (0x2B << 2)
label_187854:
    if (ctx->pc == 0x187854u) {
        ctx->pc = 0x187858u;
        goto label_187858;
    }
    ctx->pc = 0x187850u;
    {
        const bool branch_taken_0x187850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187850) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x187858u;
label_187858:
    // 0x187858: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_18785c:
    // 0x18785c: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x18785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_187860:
    // 0x187860: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_187864:
    if (ctx->pc == 0x187864u) {
        ctx->pc = 0x187868u;
        goto label_187868;
    }
    ctx->pc = 0x187860u;
    {
        const bool branch_taken_0x187860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187860) {
            ctx->pc = 0x187878u;
            goto label_187878;
        }
    }
    ctx->pc = 0x187868u;
label_187868:
    // 0x187868: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_18786c:
    // 0x18786c: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x18786cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_187870:
    // 0x187870: 0x10000023  b           . + 4 + (0x23 << 2)
label_187874:
    if (ctx->pc == 0x187874u) {
        ctx->pc = 0x187878u;
        goto label_187878;
    }
    ctx->pc = 0x187870u;
    {
        const bool branch_taken_0x187870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187870) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x187878u;
label_187878:
    // 0x187878: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_18787c:
    // 0x18787c: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x18787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963112)));
label_187880:
    // 0x187880: 0xae03016c  sw          $v1, 0x16C($s0)
    ctx->pc = 0x187880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 3));
label_187884:
    // 0x187884: 0x100000af  b           . + 4 + (0xAF << 2)
label_187888:
    if (ctx->pc == 0x187888u) {
        ctx->pc = 0x18788Cu;
        goto label_18788c;
    }
    ctx->pc = 0x187884u;
    {
        const bool branch_taken_0x187884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187884) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x18788Cu;
label_18788c:
    // 0x18788c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x18788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_187890:
    // 0x187890: 0xc061014  jal         func_184050
label_187894:
    if (ctx->pc == 0x187894u) {
        ctx->pc = 0x187898u;
        goto label_187898;
    }
    ctx->pc = 0x187890u;
    SET_GPR_U32(ctx, 31, 0x187898u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187890u, 0x187898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187898u;
label_187898:
    // 0x187898: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_18789c:
    // 0x18789c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18789cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1878a0:
    // 0x1878a0: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x1878a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 3));
label_1878a4:
    // 0x1878a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1878a8:
    // 0x1878a8: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x1878a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
label_1878ac:
    // 0x1878ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1878acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1878b0:
    // 0x1878b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1878b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1878b4:
    // 0x1878b4: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1878b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_1878b8:
    // 0x1878b8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1878bc:
    if (ctx->pc == 0x1878BCu) {
        ctx->pc = 0x1878C0u;
        goto label_1878c0;
    }
    ctx->pc = 0x1878B8u;
    {
        const bool branch_taken_0x1878b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1878b8) {
            ctx->pc = 0x1878F8u;
            goto label_1878f8;
        }
    }
    ctx->pc = 0x1878C0u;
label_1878c0:
    // 0x1878c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1878c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1878c4:
    // 0x1878c4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1878c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1878c8:
    // 0x1878c8: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_1878cc:
    // 0x1878cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1878ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1878d0:
    // 0x1878d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1878d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1878d4:
    // 0x1878d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1878d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1878d8:
    // 0x1878d8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1878d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1878dc:
    // 0x1878dc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1878e0:
    // 0x1878e0: 0xc061014  jal         func_184050
label_1878e4:
    if (ctx->pc == 0x1878E4u) {
        ctx->pc = 0x1878E8u;
        goto label_1878e8;
    }
    ctx->pc = 0x1878E0u;
    SET_GPR_U32(ctx, 31, 0x1878E8u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1878E0u, 0x1878E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878E8u;
label_1878e8:
    // 0x1878e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1878e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1878ec:
    // 0x1878ec: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1878ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
label_1878f0:
    // 0x1878f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1878f4:
    if (ctx->pc == 0x1878F4u) {
        ctx->pc = 0x1878F8u;
        goto label_1878f8;
    }
    ctx->pc = 0x1878F0u;
    {
        const bool branch_taken_0x1878f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878f0) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1878F8u;
label_1878f8:
    // 0x1878f8: 0x10000092  b           . + 4 + (0x92 << 2)
label_1878fc:
    if (ctx->pc == 0x1878FCu) {
        ctx->pc = 0x187900u;
        goto label_187900;
    }
    ctx->pc = 0x1878F8u;
    {
        const bool branch_taken_0x1878f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878f8) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187900u;
label_187900:
    // 0x187900: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187904:
    // 0x187904: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x187904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963512)));
label_187908:
    // 0x187908: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x187908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_18790c:
    // 0x18790c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x18790cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_187910:
    // 0x187910: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x187910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_187914:
    // 0x187914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187918:
    // 0x187918: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x187918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_18791c:
    // 0x18791c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18791cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_187920:
    // 0x187920: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
label_187924:
    // 0x187924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187928:
    // 0x187928: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x187928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_18792c:
    // 0x18792c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x18792cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_187930:
    // 0x187930: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_187934:
    // 0x187934: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_187938:
    if (ctx->pc == 0x187938u) {
        ctx->pc = 0x18793Cu;
        goto label_18793c;
    }
    ctx->pc = 0x187934u;
    {
        const bool branch_taken_0x187934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187934) {
            ctx->pc = 0x187A54u;
            goto label_187a54;
        }
    }
    ctx->pc = 0x18793Cu;
label_18793c:
    // 0x18793c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x18793cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_187940:
    // 0x187940: 0xc42cef90  lwc1        $f12, -0x1070($at)
    ctx->pc = 0x187940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294963088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_187944:
    // 0x187944: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_187948:
    // 0x187948: 0xc42def98  lwc1        $f13, -0x1068($at)
    ctx->pc = 0x187948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294963096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18794c:
    // 0x18794c: 0xc0455e6  jal         func_115798
label_187950:
    if (ctx->pc == 0x187950u) {
        ctx->pc = 0x187954u;
        goto label_187954;
    }
    ctx->pc = 0x18794Cu;
    SET_GPR_U32(ctx, 31, 0x187954u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x18794Cu, 0x187954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187954u;
label_187954:
    // 0x187954: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x187954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_187958:
    // 0x187958: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_18795c:
    // 0x18795c: 0xc421ef44  lwc1        $f1, -0x10BC($at)
    ctx->pc = 0x18795cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294963012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_187960:
    // 0x187960: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x187960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_187964:
    // 0x187964: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x187964u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_187968:
    // 0x187968: 0xc058fec  jal         func_163FB0
label_18796c:
    if (ctx->pc == 0x18796Cu) {
        ctx->pc = 0x187970u;
        goto label_187970;
    }
    ctx->pc = 0x187968u;
    SET_GPR_U32(ctx, 31, 0x187970u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x187968u, 0x187970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187970u;
label_187970:
    // 0x187970: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x187970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_187974:
    // 0x187974: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187978:
    // 0x187978: 0xc42c0370  lwc1        $f12, 0x370($at)
    ctx->pc = 0x187978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18797c:
    // 0x18797c: 0xc7ad007c  lwc1        $f13, 0x7C($sp)
    ctx->pc = 0x18797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_187980:
    // 0x187980: 0xc058f20  jal         func_163C80
label_187984:
    if (ctx->pc == 0x187984u) {
        ctx->pc = 0x187988u;
        goto label_187988;
    }
    ctx->pc = 0x187980u;
    SET_GPR_U32(ctx, 31, 0x187988u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x187980u, 0x187988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187988u;
label_187988:
    // 0x187988: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x187988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_18798c:
    // 0x18798c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x18798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_187990:
    // 0x187990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x187990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187994:
    // 0x187994: 0x0  nop
    ctx->pc = 0x187994u;
    // NOP
label_187998:
    // 0x187998: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x187998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18799c:
    // 0x18799c: 0x0  nop
    ctx->pc = 0x18799cu;
    // NOP
label_1879a0:
    // 0x1879a0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1879a4:
    if (ctx->pc == 0x1879A4u) {
        ctx->pc = 0x1879A8u;
        goto label_1879a8;
    }
    ctx->pc = 0x1879A0u;
    {
        const bool branch_taken_0x1879a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1879a0) {
            ctx->pc = 0x1879BCu;
            goto label_1879bc;
        }
    }
    ctx->pc = 0x1879A8u;
label_1879a8:
    // 0x1879a8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1879ac:
    // 0x1879ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1879acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1879b0:
    // 0x1879b0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1879b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1879b4:
    // 0x1879b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1879b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1879b8:
    // 0x1879b8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1879b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1879bc:
    // 0x1879bc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1879bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1879c0:
    // 0x1879c0: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x1879c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
label_1879c4:
    // 0x1879c4: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1879c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_1879c8:
    // 0x1879c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1879c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1879cc:
    // 0x1879cc: 0x0  nop
    ctx->pc = 0x1879ccu;
    // NOP
label_1879d0:
    // 0x1879d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1879d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1879d4:
    // 0x1879d4: 0x0  nop
    ctx->pc = 0x1879d4u;
    // NOP
label_1879d8:
    // 0x1879d8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_1879dc:
    if (ctx->pc == 0x1879DCu) {
        ctx->pc = 0x1879E0u;
        goto label_1879e0;
    }
    ctx->pc = 0x1879D8u;
    {
        const bool branch_taken_0x1879d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1879d8) {
            ctx->pc = 0x187A54u;
            goto label_187a54;
        }
    }
    ctx->pc = 0x1879E0u;
label_1879e0:
    // 0x1879e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1879e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1879e4:
    // 0x1879e4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1879e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963512)));
label_1879e8:
    // 0x1879e8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1879e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_1879ec:
    // 0x1879ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1879ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1879f0:
    // 0x1879f0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1879f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1879f4:
    // 0x1879f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1879f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1879f8:
    // 0x1879f8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1879f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1879fc:
    // 0x1879fc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1879fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_187a00:
    // 0x187a00: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
label_187a04:
    // 0x187a04: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x187a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187a08:
    // 0x187a08: 0x8ca40158  lw          $a0, 0x158($a1)
    ctx->pc = 0x187a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
label_187a0c:
    // 0x187a0c: 0x3c03f2ff  lui         $v1, 0xF2FF
    ctx->pc = 0x187a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62207 << 16));
label_187a10:
    // 0x187a10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x187a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_187a14:
    // 0x187a14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_187a18:
    // 0x187a18: 0xaca30158  sw          $v1, 0x158($a1)
    ctx->pc = 0x187a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 3));
label_187a1c:
    // 0x187a1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187a20:
    // 0x187a20: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963512)));
label_187a24:
    // 0x187a24: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x187a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_187a28:
    // 0x187a28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x187a28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_187a2c:
    // 0x187a2c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x187a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_187a30:
    // 0x187a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187a34:
    // 0x187a34: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_187a38:
    // 0x187a38: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x187a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_187a3c:
    // 0x187a3c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
label_187a40:
    // 0x187a40: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x187a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187a44:
    // 0x187a44: 0x8ca40158  lw          $a0, 0x158($a1)
    ctx->pc = 0x187a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
label_187a48:
    // 0x187a48: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x187a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_187a4c:
    // 0x187a4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x187a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_187a50:
    // 0x187a50: 0xaca30158  sw          $v1, 0x158($a1)
    ctx->pc = 0x187a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 3));
label_187a54:
    // 0x187a54: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_187a58:
    // 0x187a58: 0xc421ef48  lwc1        $f1, -0x10B8($at)
    ctx->pc = 0x187a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294963016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_187a5c:
    // 0x187a5c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x187a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
label_187a60:
    // 0x187a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187a64:
    // 0x187a64: 0x0  nop
    ctx->pc = 0x187a64u;
    // NOP
label_187a68:
    // 0x187a68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x187a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187a6c:
    // 0x187a6c: 0x0  nop
    ctx->pc = 0x187a6cu;
    // NOP
label_187a70:
    // 0x187a70: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_187a74:
    if (ctx->pc == 0x187A74u) {
        ctx->pc = 0x187A78u;
        goto label_187a78;
    }
    ctx->pc = 0x187A70u;
    {
        const bool branch_taken_0x187a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187a70) {
            ctx->pc = 0x187AB4u;
            goto label_187ab4;
        }
    }
    ctx->pc = 0x187A78u;
label_187a78:
    // 0x187a78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187a7c:
    // 0x187a7c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x187a7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963512)));
label_187a80:
    // 0x187a80: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x187a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_187a84:
    // 0x187a84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x187a84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_187a88:
    // 0x187a88: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x187a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_187a8c:
    // 0x187a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187a90:
    // 0x187a90: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x187a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_187a94:
    // 0x187a94: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x187a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_187a98:
    // 0x187a98: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
label_187a9c:
    // 0x187a9c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x187a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187aa0:
    // 0x187aa0: 0x8ca40158  lw          $a0, 0x158($a1)
    ctx->pc = 0x187aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
label_187aa4:
    // 0x187aa4: 0x3c03f2ff  lui         $v1, 0xF2FF
    ctx->pc = 0x187aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62207 << 16));
label_187aa8:
    // 0x187aa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x187aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_187aac:
    // 0x187aac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_187ab0:
    // 0x187ab0: 0xaca30158  sw          $v1, 0x158($a1)
    ctx->pc = 0x187ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 3));
label_187ab4:
    // 0x187ab4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187ab8:
    // 0x187ab8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x187ab8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963512)));
label_187abc:
    // 0x187abc: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x187abcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
label_187ac0:
    // 0x187ac0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x187ac0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_187ac4:
    // 0x187ac4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x187ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_187ac8:
    // 0x187ac8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x187ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_187acc:
    // 0x187acc: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x187accu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_187ad0:
    // 0x187ad0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_187ad4:
    // 0x187ad4: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x187ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
label_187ad8:
    // 0x187ad8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x187ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_187adc:
    // 0x187adc: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x187adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_187ae0:
    // 0x187ae0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x187ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_187ae4:
    // 0x187ae4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_187ae8:
    // 0x187ae8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_187aec:
    if (ctx->pc == 0x187AECu) {
        ctx->pc = 0x187AF0u;
        goto label_187af0;
    }
    ctx->pc = 0x187AE8u;
    {
        const bool branch_taken_0x187ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ae8) {
            ctx->pc = 0x187B0Cu;
            goto label_187b0c;
        }
    }
    ctx->pc = 0x187AF0u;
label_187af0:
    // 0x187af0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187af4:
    // 0x187af4: 0x8c240360  lw          $a0, 0x360($at)
    ctx->pc = 0x187af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 864)));
label_187af8:
    // 0x187af8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_187afc:
    // 0x187afc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187b00:
    // 0x187b00: 0xac230360  sw          $v1, 0x360($at)
    ctx->pc = 0x187b00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 864), GPR_U32(ctx, 3));
label_187b04:
    // 0x187b04: 0x10000009  b           . + 4 + (0x9 << 2)
label_187b08:
    if (ctx->pc == 0x187B08u) {
        ctx->pc = 0x187B0Cu;
        goto label_187b0c;
    }
    ctx->pc = 0x187B04u;
    {
        const bool branch_taken_0x187b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b04) {
            ctx->pc = 0x187B2Cu;
            goto label_187b2c;
        }
    }
    ctx->pc = 0x187B0Cu;
label_187b0c:
    // 0x187b0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x187b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_187b10:
    // 0x187b10: 0x2444ef90  addiu       $a0, $v0, -0x1070
    ctx->pc = 0x187b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
label_187b14:
    // 0x187b14: 0x264501a0  addiu       $a1, $s2, 0x1A0
    ctx->pc = 0x187b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_187b18:
    // 0x187b18: 0x26460190  addiu       $a2, $s2, 0x190
    ctx->pc = 0x187b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
label_187b1c:
    // 0x187b1c: 0xc0675b0  jal         func_19D6C0
label_187b20:
    if (ctx->pc == 0x187B20u) {
        ctx->pc = 0x187B24u;
        goto label_187b24;
    }
    ctx->pc = 0x187B1Cu;
    SET_GPR_U32(ctx, 31, 0x187B24u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x187B1Cu, 0x187B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B24u;
label_187b24:
    // 0x187b24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_187b28:
    // 0x187b28: 0xac200360  sw          $zero, 0x360($at)
    ctx->pc = 0x187b28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 864), GPR_U32(ctx, 0));
label_187b2c:
    // 0x187b2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x187b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_187b30:
    // 0x187b30: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_187b34:
    if (ctx->pc == 0x187B34u) {
        ctx->pc = 0x187B38u;
        goto label_187b38;
    }
    ctx->pc = 0x187B30u;
    {
        const bool branch_taken_0x187b30 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x187b30) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187B38u;
label_187b38:
    // 0x187b38: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x187b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_187b3c:
    // 0x187b3c: 0xc061f34  jal         func_187CD0
label_187b40:
    if (ctx->pc == 0x187B40u) {
        ctx->pc = 0x187B44u;
        goto label_187b44;
    }
    ctx->pc = 0x187B3Cu;
    SET_GPR_U32(ctx, 31, 0x187B44u);
    ctx->pc = 0x187CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187CD0u, 0x187B3Cu, 0x187B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B44u;
label_187b44:
    // 0x187b44: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x187b44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_187b48:
    // 0x187b48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_187b4c:
    // 0x187b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_187b50:
    // 0x187b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_187b54:
    // 0x187b54: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x187b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_187b58:
    // 0x187b58: 0x3e00008  jr          $ra
label_187b5c:
    if (ctx->pc == 0x187B5Cu) {
        ctx->pc = 0x187B60u;
        goto label_fallthrough_0x187b58;
    }
    ctx->pc = 0x187B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x187b58:
    ctx->pc = 0x187B60u;
}
