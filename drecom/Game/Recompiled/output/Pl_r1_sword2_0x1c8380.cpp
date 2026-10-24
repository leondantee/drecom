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

// Function: Pl_r1_sword2
// Address: 0x1c8380 - 0x1c8f9c
void Pl_r1_sword2_0x1c8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_sword2_0x1c8380");
#endif

    switch (ctx->pc) {
        case 0x1c8380u: goto label_1c8380;
        case 0x1c8384u: goto label_1c8384;
        case 0x1c8388u: goto label_1c8388;
        case 0x1c838cu: goto label_1c838c;
        case 0x1c8390u: goto label_1c8390;
        case 0x1c8394u: goto label_1c8394;
        case 0x1c8398u: goto label_1c8398;
        case 0x1c839cu: goto label_1c839c;
        case 0x1c83a0u: goto label_1c83a0;
        case 0x1c83a4u: goto label_1c83a4;
        case 0x1c83a8u: goto label_1c83a8;
        case 0x1c83acu: goto label_1c83ac;
        case 0x1c83b0u: goto label_1c83b0;
        case 0x1c83b4u: goto label_1c83b4;
        case 0x1c83b8u: goto label_1c83b8;
        case 0x1c83bcu: goto label_1c83bc;
        case 0x1c83c0u: goto label_1c83c0;
        case 0x1c83c4u: goto label_1c83c4;
        case 0x1c83c8u: goto label_1c83c8;
        case 0x1c83ccu: goto label_1c83cc;
        case 0x1c83d0u: goto label_1c83d0;
        case 0x1c83d4u: goto label_1c83d4;
        case 0x1c83d8u: goto label_1c83d8;
        case 0x1c83dcu: goto label_1c83dc;
        case 0x1c83e0u: goto label_1c83e0;
        case 0x1c83e4u: goto label_1c83e4;
        case 0x1c83e8u: goto label_1c83e8;
        case 0x1c83ecu: goto label_1c83ec;
        case 0x1c83f0u: goto label_1c83f0;
        case 0x1c83f4u: goto label_1c83f4;
        case 0x1c83f8u: goto label_1c83f8;
        case 0x1c83fcu: goto label_1c83fc;
        case 0x1c8400u: goto label_1c8400;
        case 0x1c8404u: goto label_1c8404;
        case 0x1c8408u: goto label_1c8408;
        case 0x1c840cu: goto label_1c840c;
        case 0x1c8410u: goto label_1c8410;
        case 0x1c8414u: goto label_1c8414;
        case 0x1c8418u: goto label_1c8418;
        case 0x1c841cu: goto label_1c841c;
        case 0x1c8420u: goto label_1c8420;
        case 0x1c8424u: goto label_1c8424;
        case 0x1c8428u: goto label_1c8428;
        case 0x1c842cu: goto label_1c842c;
        case 0x1c8430u: goto label_1c8430;
        case 0x1c8434u: goto label_1c8434;
        case 0x1c8438u: goto label_1c8438;
        case 0x1c843cu: goto label_1c843c;
        case 0x1c8440u: goto label_1c8440;
        case 0x1c8444u: goto label_1c8444;
        case 0x1c8448u: goto label_1c8448;
        case 0x1c844cu: goto label_1c844c;
        case 0x1c8450u: goto label_1c8450;
        case 0x1c8454u: goto label_1c8454;
        case 0x1c8458u: goto label_1c8458;
        case 0x1c845cu: goto label_1c845c;
        case 0x1c8460u: goto label_1c8460;
        case 0x1c8464u: goto label_1c8464;
        case 0x1c8468u: goto label_1c8468;
        case 0x1c846cu: goto label_1c846c;
        case 0x1c8470u: goto label_1c8470;
        case 0x1c8474u: goto label_1c8474;
        case 0x1c8478u: goto label_1c8478;
        case 0x1c847cu: goto label_1c847c;
        case 0x1c8480u: goto label_1c8480;
        case 0x1c8484u: goto label_1c8484;
        case 0x1c8488u: goto label_1c8488;
        case 0x1c848cu: goto label_1c848c;
        case 0x1c8490u: goto label_1c8490;
        case 0x1c8494u: goto label_1c8494;
        case 0x1c8498u: goto label_1c8498;
        case 0x1c849cu: goto label_1c849c;
        case 0x1c84a0u: goto label_1c84a0;
        case 0x1c84a4u: goto label_1c84a4;
        case 0x1c84a8u: goto label_1c84a8;
        case 0x1c84acu: goto label_1c84ac;
        case 0x1c84b0u: goto label_1c84b0;
        case 0x1c84b4u: goto label_1c84b4;
        case 0x1c84b8u: goto label_1c84b8;
        case 0x1c84bcu: goto label_1c84bc;
        case 0x1c84c0u: goto label_1c84c0;
        case 0x1c84c4u: goto label_1c84c4;
        case 0x1c84c8u: goto label_1c84c8;
        case 0x1c84ccu: goto label_1c84cc;
        case 0x1c84d0u: goto label_1c84d0;
        case 0x1c84d4u: goto label_1c84d4;
        case 0x1c84d8u: goto label_1c84d8;
        case 0x1c84dcu: goto label_1c84dc;
        case 0x1c84e0u: goto label_1c84e0;
        case 0x1c84e4u: goto label_1c84e4;
        case 0x1c84e8u: goto label_1c84e8;
        case 0x1c84ecu: goto label_1c84ec;
        case 0x1c84f0u: goto label_1c84f0;
        case 0x1c84f4u: goto label_1c84f4;
        case 0x1c84f8u: goto label_1c84f8;
        case 0x1c84fcu: goto label_1c84fc;
        case 0x1c8500u: goto label_1c8500;
        case 0x1c8504u: goto label_1c8504;
        case 0x1c8508u: goto label_1c8508;
        case 0x1c850cu: goto label_1c850c;
        case 0x1c8510u: goto label_1c8510;
        case 0x1c8514u: goto label_1c8514;
        case 0x1c8518u: goto label_1c8518;
        case 0x1c851cu: goto label_1c851c;
        case 0x1c8520u: goto label_1c8520;
        case 0x1c8524u: goto label_1c8524;
        case 0x1c8528u: goto label_1c8528;
        case 0x1c852cu: goto label_1c852c;
        case 0x1c8530u: goto label_1c8530;
        case 0x1c8534u: goto label_1c8534;
        case 0x1c8538u: goto label_1c8538;
        case 0x1c853cu: goto label_1c853c;
        case 0x1c8540u: goto label_1c8540;
        case 0x1c8544u: goto label_1c8544;
        case 0x1c8548u: goto label_1c8548;
        case 0x1c854cu: goto label_1c854c;
        case 0x1c8550u: goto label_1c8550;
        case 0x1c8554u: goto label_1c8554;
        case 0x1c8558u: goto label_1c8558;
        case 0x1c855cu: goto label_1c855c;
        case 0x1c8560u: goto label_1c8560;
        case 0x1c8564u: goto label_1c8564;
        case 0x1c8568u: goto label_1c8568;
        case 0x1c856cu: goto label_1c856c;
        case 0x1c8570u: goto label_1c8570;
        case 0x1c8574u: goto label_1c8574;
        case 0x1c8578u: goto label_1c8578;
        case 0x1c857cu: goto label_1c857c;
        case 0x1c8580u: goto label_1c8580;
        case 0x1c8584u: goto label_1c8584;
        case 0x1c8588u: goto label_1c8588;
        case 0x1c858cu: goto label_1c858c;
        case 0x1c8590u: goto label_1c8590;
        case 0x1c8594u: goto label_1c8594;
        case 0x1c8598u: goto label_1c8598;
        case 0x1c859cu: goto label_1c859c;
        case 0x1c85a0u: goto label_1c85a0;
        case 0x1c85a4u: goto label_1c85a4;
        case 0x1c85a8u: goto label_1c85a8;
        case 0x1c85acu: goto label_1c85ac;
        case 0x1c85b0u: goto label_1c85b0;
        case 0x1c85b4u: goto label_1c85b4;
        case 0x1c85b8u: goto label_1c85b8;
        case 0x1c85bcu: goto label_1c85bc;
        case 0x1c85c0u: goto label_1c85c0;
        case 0x1c85c4u: goto label_1c85c4;
        case 0x1c85c8u: goto label_1c85c8;
        case 0x1c85ccu: goto label_1c85cc;
        case 0x1c85d0u: goto label_1c85d0;
        case 0x1c85d4u: goto label_1c85d4;
        case 0x1c85d8u: goto label_1c85d8;
        case 0x1c85dcu: goto label_1c85dc;
        case 0x1c85e0u: goto label_1c85e0;
        case 0x1c85e4u: goto label_1c85e4;
        case 0x1c85e8u: goto label_1c85e8;
        case 0x1c85ecu: goto label_1c85ec;
        case 0x1c85f0u: goto label_1c85f0;
        case 0x1c85f4u: goto label_1c85f4;
        case 0x1c85f8u: goto label_1c85f8;
        case 0x1c85fcu: goto label_1c85fc;
        case 0x1c8600u: goto label_1c8600;
        case 0x1c8604u: goto label_1c8604;
        case 0x1c8608u: goto label_1c8608;
        case 0x1c860cu: goto label_1c860c;
        case 0x1c8610u: goto label_1c8610;
        case 0x1c8614u: goto label_1c8614;
        case 0x1c8618u: goto label_1c8618;
        case 0x1c861cu: goto label_1c861c;
        case 0x1c8620u: goto label_1c8620;
        case 0x1c8624u: goto label_1c8624;
        case 0x1c8628u: goto label_1c8628;
        case 0x1c862cu: goto label_1c862c;
        case 0x1c8630u: goto label_1c8630;
        case 0x1c8634u: goto label_1c8634;
        case 0x1c8638u: goto label_1c8638;
        case 0x1c863cu: goto label_1c863c;
        case 0x1c8640u: goto label_1c8640;
        case 0x1c8644u: goto label_1c8644;
        case 0x1c8648u: goto label_1c8648;
        case 0x1c864cu: goto label_1c864c;
        case 0x1c8650u: goto label_1c8650;
        case 0x1c8654u: goto label_1c8654;
        case 0x1c8658u: goto label_1c8658;
        case 0x1c865cu: goto label_1c865c;
        case 0x1c8660u: goto label_1c8660;
        case 0x1c8664u: goto label_1c8664;
        case 0x1c8668u: goto label_1c8668;
        case 0x1c866cu: goto label_1c866c;
        case 0x1c8670u: goto label_1c8670;
        case 0x1c8674u: goto label_1c8674;
        case 0x1c8678u: goto label_1c8678;
        case 0x1c867cu: goto label_1c867c;
        case 0x1c8680u: goto label_1c8680;
        case 0x1c8684u: goto label_1c8684;
        case 0x1c8688u: goto label_1c8688;
        case 0x1c868cu: goto label_1c868c;
        case 0x1c8690u: goto label_1c8690;
        case 0x1c8694u: goto label_1c8694;
        case 0x1c8698u: goto label_1c8698;
        case 0x1c869cu: goto label_1c869c;
        case 0x1c86a0u: goto label_1c86a0;
        case 0x1c86a4u: goto label_1c86a4;
        case 0x1c86a8u: goto label_1c86a8;
        case 0x1c86acu: goto label_1c86ac;
        case 0x1c86b0u: goto label_1c86b0;
        case 0x1c86b4u: goto label_1c86b4;
        case 0x1c86b8u: goto label_1c86b8;
        case 0x1c86bcu: goto label_1c86bc;
        case 0x1c86c0u: goto label_1c86c0;
        case 0x1c86c4u: goto label_1c86c4;
        case 0x1c86c8u: goto label_1c86c8;
        case 0x1c86ccu: goto label_1c86cc;
        case 0x1c86d0u: goto label_1c86d0;
        case 0x1c86d4u: goto label_1c86d4;
        case 0x1c86d8u: goto label_1c86d8;
        case 0x1c86dcu: goto label_1c86dc;
        case 0x1c86e0u: goto label_1c86e0;
        case 0x1c86e4u: goto label_1c86e4;
        case 0x1c86e8u: goto label_1c86e8;
        case 0x1c86ecu: goto label_1c86ec;
        case 0x1c86f0u: goto label_1c86f0;
        case 0x1c86f4u: goto label_1c86f4;
        case 0x1c86f8u: goto label_1c86f8;
        case 0x1c86fcu: goto label_1c86fc;
        case 0x1c8700u: goto label_1c8700;
        case 0x1c8704u: goto label_1c8704;
        case 0x1c8708u: goto label_1c8708;
        case 0x1c870cu: goto label_1c870c;
        case 0x1c8710u: goto label_1c8710;
        case 0x1c8714u: goto label_1c8714;
        case 0x1c8718u: goto label_1c8718;
        case 0x1c871cu: goto label_1c871c;
        case 0x1c8720u: goto label_1c8720;
        case 0x1c8724u: goto label_1c8724;
        case 0x1c8728u: goto label_1c8728;
        case 0x1c872cu: goto label_1c872c;
        case 0x1c8730u: goto label_1c8730;
        case 0x1c8734u: goto label_1c8734;
        case 0x1c8738u: goto label_1c8738;
        case 0x1c873cu: goto label_1c873c;
        case 0x1c8740u: goto label_1c8740;
        case 0x1c8744u: goto label_1c8744;
        case 0x1c8748u: goto label_1c8748;
        case 0x1c874cu: goto label_1c874c;
        case 0x1c8750u: goto label_1c8750;
        case 0x1c8754u: goto label_1c8754;
        case 0x1c8758u: goto label_1c8758;
        case 0x1c875cu: goto label_1c875c;
        case 0x1c8760u: goto label_1c8760;
        case 0x1c8764u: goto label_1c8764;
        case 0x1c8768u: goto label_1c8768;
        case 0x1c876cu: goto label_1c876c;
        case 0x1c8770u: goto label_1c8770;
        case 0x1c8774u: goto label_1c8774;
        case 0x1c8778u: goto label_1c8778;
        case 0x1c877cu: goto label_1c877c;
        case 0x1c8780u: goto label_1c8780;
        case 0x1c8784u: goto label_1c8784;
        case 0x1c8788u: goto label_1c8788;
        case 0x1c878cu: goto label_1c878c;
        case 0x1c8790u: goto label_1c8790;
        case 0x1c8794u: goto label_1c8794;
        case 0x1c8798u: goto label_1c8798;
        case 0x1c879cu: goto label_1c879c;
        case 0x1c87a0u: goto label_1c87a0;
        case 0x1c87a4u: goto label_1c87a4;
        case 0x1c87a8u: goto label_1c87a8;
        case 0x1c87acu: goto label_1c87ac;
        case 0x1c87b0u: goto label_1c87b0;
        case 0x1c87b4u: goto label_1c87b4;
        case 0x1c87b8u: goto label_1c87b8;
        case 0x1c87bcu: goto label_1c87bc;
        case 0x1c87c0u: goto label_1c87c0;
        case 0x1c87c4u: goto label_1c87c4;
        case 0x1c87c8u: goto label_1c87c8;
        case 0x1c87ccu: goto label_1c87cc;
        case 0x1c87d0u: goto label_1c87d0;
        case 0x1c87d4u: goto label_1c87d4;
        case 0x1c87d8u: goto label_1c87d8;
        case 0x1c87dcu: goto label_1c87dc;
        case 0x1c87e0u: goto label_1c87e0;
        case 0x1c87e4u: goto label_1c87e4;
        case 0x1c87e8u: goto label_1c87e8;
        case 0x1c87ecu: goto label_1c87ec;
        case 0x1c87f0u: goto label_1c87f0;
        case 0x1c87f4u: goto label_1c87f4;
        case 0x1c87f8u: goto label_1c87f8;
        case 0x1c87fcu: goto label_1c87fc;
        case 0x1c8800u: goto label_1c8800;
        case 0x1c8804u: goto label_1c8804;
        case 0x1c8808u: goto label_1c8808;
        case 0x1c880cu: goto label_1c880c;
        case 0x1c8810u: goto label_1c8810;
        case 0x1c8814u: goto label_1c8814;
        case 0x1c8818u: goto label_1c8818;
        case 0x1c881cu: goto label_1c881c;
        case 0x1c8820u: goto label_1c8820;
        case 0x1c8824u: goto label_1c8824;
        case 0x1c8828u: goto label_1c8828;
        case 0x1c882cu: goto label_1c882c;
        case 0x1c8830u: goto label_1c8830;
        case 0x1c8834u: goto label_1c8834;
        case 0x1c8838u: goto label_1c8838;
        case 0x1c883cu: goto label_1c883c;
        case 0x1c8840u: goto label_1c8840;
        case 0x1c8844u: goto label_1c8844;
        case 0x1c8848u: goto label_1c8848;
        case 0x1c884cu: goto label_1c884c;
        case 0x1c8850u: goto label_1c8850;
        case 0x1c8854u: goto label_1c8854;
        case 0x1c8858u: goto label_1c8858;
        case 0x1c885cu: goto label_1c885c;
        case 0x1c8860u: goto label_1c8860;
        case 0x1c8864u: goto label_1c8864;
        case 0x1c8868u: goto label_1c8868;
        case 0x1c886cu: goto label_1c886c;
        case 0x1c8870u: goto label_1c8870;
        case 0x1c8874u: goto label_1c8874;
        case 0x1c8878u: goto label_1c8878;
        case 0x1c887cu: goto label_1c887c;
        case 0x1c8880u: goto label_1c8880;
        case 0x1c8884u: goto label_1c8884;
        case 0x1c8888u: goto label_1c8888;
        case 0x1c888cu: goto label_1c888c;
        case 0x1c8890u: goto label_1c8890;
        case 0x1c8894u: goto label_1c8894;
        case 0x1c8898u: goto label_1c8898;
        case 0x1c889cu: goto label_1c889c;
        case 0x1c88a0u: goto label_1c88a0;
        case 0x1c88a4u: goto label_1c88a4;
        case 0x1c88a8u: goto label_1c88a8;
        case 0x1c88acu: goto label_1c88ac;
        case 0x1c88b0u: goto label_1c88b0;
        case 0x1c88b4u: goto label_1c88b4;
        case 0x1c88b8u: goto label_1c88b8;
        case 0x1c88bcu: goto label_1c88bc;
        case 0x1c88c0u: goto label_1c88c0;
        case 0x1c88c4u: goto label_1c88c4;
        case 0x1c88c8u: goto label_1c88c8;
        case 0x1c88ccu: goto label_1c88cc;
        case 0x1c88d0u: goto label_1c88d0;
        case 0x1c88d4u: goto label_1c88d4;
        case 0x1c88d8u: goto label_1c88d8;
        case 0x1c88dcu: goto label_1c88dc;
        case 0x1c88e0u: goto label_1c88e0;
        case 0x1c88e4u: goto label_1c88e4;
        case 0x1c88e8u: goto label_1c88e8;
        case 0x1c88ecu: goto label_1c88ec;
        case 0x1c88f0u: goto label_1c88f0;
        case 0x1c88f4u: goto label_1c88f4;
        case 0x1c88f8u: goto label_1c88f8;
        case 0x1c88fcu: goto label_1c88fc;
        case 0x1c8900u: goto label_1c8900;
        case 0x1c8904u: goto label_1c8904;
        case 0x1c8908u: goto label_1c8908;
        case 0x1c890cu: goto label_1c890c;
        case 0x1c8910u: goto label_1c8910;
        case 0x1c8914u: goto label_1c8914;
        case 0x1c8918u: goto label_1c8918;
        case 0x1c891cu: goto label_1c891c;
        case 0x1c8920u: goto label_1c8920;
        case 0x1c8924u: goto label_1c8924;
        case 0x1c8928u: goto label_1c8928;
        case 0x1c892cu: goto label_1c892c;
        case 0x1c8930u: goto label_1c8930;
        case 0x1c8934u: goto label_1c8934;
        case 0x1c8938u: goto label_1c8938;
        case 0x1c893cu: goto label_1c893c;
        case 0x1c8940u: goto label_1c8940;
        case 0x1c8944u: goto label_1c8944;
        case 0x1c8948u: goto label_1c8948;
        case 0x1c894cu: goto label_1c894c;
        case 0x1c8950u: goto label_1c8950;
        case 0x1c8954u: goto label_1c8954;
        case 0x1c8958u: goto label_1c8958;
        case 0x1c895cu: goto label_1c895c;
        case 0x1c8960u: goto label_1c8960;
        case 0x1c8964u: goto label_1c8964;
        case 0x1c8968u: goto label_1c8968;
        case 0x1c896cu: goto label_1c896c;
        case 0x1c8970u: goto label_1c8970;
        case 0x1c8974u: goto label_1c8974;
        case 0x1c8978u: goto label_1c8978;
        case 0x1c897cu: goto label_1c897c;
        case 0x1c8980u: goto label_1c8980;
        case 0x1c8984u: goto label_1c8984;
        case 0x1c8988u: goto label_1c8988;
        case 0x1c898cu: goto label_1c898c;
        case 0x1c8990u: goto label_1c8990;
        case 0x1c8994u: goto label_1c8994;
        case 0x1c8998u: goto label_1c8998;
        case 0x1c899cu: goto label_1c899c;
        case 0x1c89a0u: goto label_1c89a0;
        case 0x1c89a4u: goto label_1c89a4;
        case 0x1c89a8u: goto label_1c89a8;
        case 0x1c89acu: goto label_1c89ac;
        case 0x1c89b0u: goto label_1c89b0;
        case 0x1c89b4u: goto label_1c89b4;
        case 0x1c89b8u: goto label_1c89b8;
        case 0x1c89bcu: goto label_1c89bc;
        case 0x1c89c0u: goto label_1c89c0;
        case 0x1c89c4u: goto label_1c89c4;
        case 0x1c89c8u: goto label_1c89c8;
        case 0x1c89ccu: goto label_1c89cc;
        case 0x1c89d0u: goto label_1c89d0;
        case 0x1c89d4u: goto label_1c89d4;
        case 0x1c89d8u: goto label_1c89d8;
        case 0x1c89dcu: goto label_1c89dc;
        case 0x1c89e0u: goto label_1c89e0;
        case 0x1c89e4u: goto label_1c89e4;
        case 0x1c89e8u: goto label_1c89e8;
        case 0x1c89ecu: goto label_1c89ec;
        case 0x1c89f0u: goto label_1c89f0;
        case 0x1c89f4u: goto label_1c89f4;
        case 0x1c89f8u: goto label_1c89f8;
        case 0x1c89fcu: goto label_1c89fc;
        case 0x1c8a00u: goto label_1c8a00;
        case 0x1c8a04u: goto label_1c8a04;
        case 0x1c8a08u: goto label_1c8a08;
        case 0x1c8a0cu: goto label_1c8a0c;
        case 0x1c8a10u: goto label_1c8a10;
        case 0x1c8a14u: goto label_1c8a14;
        case 0x1c8a18u: goto label_1c8a18;
        case 0x1c8a1cu: goto label_1c8a1c;
        case 0x1c8a20u: goto label_1c8a20;
        case 0x1c8a24u: goto label_1c8a24;
        case 0x1c8a28u: goto label_1c8a28;
        case 0x1c8a2cu: goto label_1c8a2c;
        case 0x1c8a30u: goto label_1c8a30;
        case 0x1c8a34u: goto label_1c8a34;
        case 0x1c8a38u: goto label_1c8a38;
        case 0x1c8a3cu: goto label_1c8a3c;
        case 0x1c8a40u: goto label_1c8a40;
        case 0x1c8a44u: goto label_1c8a44;
        case 0x1c8a48u: goto label_1c8a48;
        case 0x1c8a4cu: goto label_1c8a4c;
        case 0x1c8a50u: goto label_1c8a50;
        case 0x1c8a54u: goto label_1c8a54;
        case 0x1c8a58u: goto label_1c8a58;
        case 0x1c8a5cu: goto label_1c8a5c;
        case 0x1c8a60u: goto label_1c8a60;
        case 0x1c8a64u: goto label_1c8a64;
        case 0x1c8a68u: goto label_1c8a68;
        case 0x1c8a6cu: goto label_1c8a6c;
        case 0x1c8a70u: goto label_1c8a70;
        case 0x1c8a74u: goto label_1c8a74;
        case 0x1c8a78u: goto label_1c8a78;
        case 0x1c8a7cu: goto label_1c8a7c;
        case 0x1c8a80u: goto label_1c8a80;
        case 0x1c8a84u: goto label_1c8a84;
        case 0x1c8a88u: goto label_1c8a88;
        case 0x1c8a8cu: goto label_1c8a8c;
        case 0x1c8a90u: goto label_1c8a90;
        case 0x1c8a94u: goto label_1c8a94;
        case 0x1c8a98u: goto label_1c8a98;
        case 0x1c8a9cu: goto label_1c8a9c;
        case 0x1c8aa0u: goto label_1c8aa0;
        case 0x1c8aa4u: goto label_1c8aa4;
        case 0x1c8aa8u: goto label_1c8aa8;
        case 0x1c8aacu: goto label_1c8aac;
        case 0x1c8ab0u: goto label_1c8ab0;
        case 0x1c8ab4u: goto label_1c8ab4;
        case 0x1c8ab8u: goto label_1c8ab8;
        case 0x1c8abcu: goto label_1c8abc;
        case 0x1c8ac0u: goto label_1c8ac0;
        case 0x1c8ac4u: goto label_1c8ac4;
        case 0x1c8ac8u: goto label_1c8ac8;
        case 0x1c8accu: goto label_1c8acc;
        case 0x1c8ad0u: goto label_1c8ad0;
        case 0x1c8ad4u: goto label_1c8ad4;
        case 0x1c8ad8u: goto label_1c8ad8;
        case 0x1c8adcu: goto label_1c8adc;
        case 0x1c8ae0u: goto label_1c8ae0;
        case 0x1c8ae4u: goto label_1c8ae4;
        case 0x1c8ae8u: goto label_1c8ae8;
        case 0x1c8aecu: goto label_1c8aec;
        case 0x1c8af0u: goto label_1c8af0;
        case 0x1c8af4u: goto label_1c8af4;
        case 0x1c8af8u: goto label_1c8af8;
        case 0x1c8afcu: goto label_1c8afc;
        case 0x1c8b00u: goto label_1c8b00;
        case 0x1c8b04u: goto label_1c8b04;
        case 0x1c8b08u: goto label_1c8b08;
        case 0x1c8b0cu: goto label_1c8b0c;
        case 0x1c8b10u: goto label_1c8b10;
        case 0x1c8b14u: goto label_1c8b14;
        case 0x1c8b18u: goto label_1c8b18;
        case 0x1c8b1cu: goto label_1c8b1c;
        case 0x1c8b20u: goto label_1c8b20;
        case 0x1c8b24u: goto label_1c8b24;
        case 0x1c8b28u: goto label_1c8b28;
        case 0x1c8b2cu: goto label_1c8b2c;
        case 0x1c8b30u: goto label_1c8b30;
        case 0x1c8b34u: goto label_1c8b34;
        case 0x1c8b38u: goto label_1c8b38;
        case 0x1c8b3cu: goto label_1c8b3c;
        case 0x1c8b40u: goto label_1c8b40;
        case 0x1c8b44u: goto label_1c8b44;
        case 0x1c8b48u: goto label_1c8b48;
        case 0x1c8b4cu: goto label_1c8b4c;
        case 0x1c8b50u: goto label_1c8b50;
        case 0x1c8b54u: goto label_1c8b54;
        case 0x1c8b58u: goto label_1c8b58;
        case 0x1c8b5cu: goto label_1c8b5c;
        case 0x1c8b60u: goto label_1c8b60;
        case 0x1c8b64u: goto label_1c8b64;
        case 0x1c8b68u: goto label_1c8b68;
        case 0x1c8b6cu: goto label_1c8b6c;
        case 0x1c8b70u: goto label_1c8b70;
        case 0x1c8b74u: goto label_1c8b74;
        case 0x1c8b78u: goto label_1c8b78;
        case 0x1c8b7cu: goto label_1c8b7c;
        case 0x1c8b80u: goto label_1c8b80;
        case 0x1c8b84u: goto label_1c8b84;
        case 0x1c8b88u: goto label_1c8b88;
        case 0x1c8b8cu: goto label_1c8b8c;
        case 0x1c8b90u: goto label_1c8b90;
        case 0x1c8b94u: goto label_1c8b94;
        case 0x1c8b98u: goto label_1c8b98;
        case 0x1c8b9cu: goto label_1c8b9c;
        case 0x1c8ba0u: goto label_1c8ba0;
        case 0x1c8ba4u: goto label_1c8ba4;
        case 0x1c8ba8u: goto label_1c8ba8;
        case 0x1c8bacu: goto label_1c8bac;
        case 0x1c8bb0u: goto label_1c8bb0;
        case 0x1c8bb4u: goto label_1c8bb4;
        case 0x1c8bb8u: goto label_1c8bb8;
        case 0x1c8bbcu: goto label_1c8bbc;
        case 0x1c8bc0u: goto label_1c8bc0;
        case 0x1c8bc4u: goto label_1c8bc4;
        case 0x1c8bc8u: goto label_1c8bc8;
        case 0x1c8bccu: goto label_1c8bcc;
        case 0x1c8bd0u: goto label_1c8bd0;
        case 0x1c8bd4u: goto label_1c8bd4;
        case 0x1c8bd8u: goto label_1c8bd8;
        case 0x1c8bdcu: goto label_1c8bdc;
        case 0x1c8be0u: goto label_1c8be0;
        case 0x1c8be4u: goto label_1c8be4;
        case 0x1c8be8u: goto label_1c8be8;
        case 0x1c8becu: goto label_1c8bec;
        case 0x1c8bf0u: goto label_1c8bf0;
        case 0x1c8bf4u: goto label_1c8bf4;
        case 0x1c8bf8u: goto label_1c8bf8;
        case 0x1c8bfcu: goto label_1c8bfc;
        case 0x1c8c00u: goto label_1c8c00;
        case 0x1c8c04u: goto label_1c8c04;
        case 0x1c8c08u: goto label_1c8c08;
        case 0x1c8c0cu: goto label_1c8c0c;
        case 0x1c8c10u: goto label_1c8c10;
        case 0x1c8c14u: goto label_1c8c14;
        case 0x1c8c18u: goto label_1c8c18;
        case 0x1c8c1cu: goto label_1c8c1c;
        case 0x1c8c20u: goto label_1c8c20;
        case 0x1c8c24u: goto label_1c8c24;
        case 0x1c8c28u: goto label_1c8c28;
        case 0x1c8c2cu: goto label_1c8c2c;
        case 0x1c8c30u: goto label_1c8c30;
        case 0x1c8c34u: goto label_1c8c34;
        case 0x1c8c38u: goto label_1c8c38;
        case 0x1c8c3cu: goto label_1c8c3c;
        case 0x1c8c40u: goto label_1c8c40;
        case 0x1c8c44u: goto label_1c8c44;
        case 0x1c8c48u: goto label_1c8c48;
        case 0x1c8c4cu: goto label_1c8c4c;
        case 0x1c8c50u: goto label_1c8c50;
        case 0x1c8c54u: goto label_1c8c54;
        case 0x1c8c58u: goto label_1c8c58;
        case 0x1c8c5cu: goto label_1c8c5c;
        case 0x1c8c60u: goto label_1c8c60;
        case 0x1c8c64u: goto label_1c8c64;
        case 0x1c8c68u: goto label_1c8c68;
        case 0x1c8c6cu: goto label_1c8c6c;
        case 0x1c8c70u: goto label_1c8c70;
        case 0x1c8c74u: goto label_1c8c74;
        case 0x1c8c78u: goto label_1c8c78;
        case 0x1c8c7cu: goto label_1c8c7c;
        case 0x1c8c80u: goto label_1c8c80;
        case 0x1c8c84u: goto label_1c8c84;
        case 0x1c8c88u: goto label_1c8c88;
        case 0x1c8c8cu: goto label_1c8c8c;
        case 0x1c8c90u: goto label_1c8c90;
        case 0x1c8c94u: goto label_1c8c94;
        case 0x1c8c98u: goto label_1c8c98;
        case 0x1c8c9cu: goto label_1c8c9c;
        case 0x1c8ca0u: goto label_1c8ca0;
        case 0x1c8ca4u: goto label_1c8ca4;
        case 0x1c8ca8u: goto label_1c8ca8;
        case 0x1c8cacu: goto label_1c8cac;
        case 0x1c8cb0u: goto label_1c8cb0;
        case 0x1c8cb4u: goto label_1c8cb4;
        case 0x1c8cb8u: goto label_1c8cb8;
        case 0x1c8cbcu: goto label_1c8cbc;
        case 0x1c8cc0u: goto label_1c8cc0;
        case 0x1c8cc4u: goto label_1c8cc4;
        case 0x1c8cc8u: goto label_1c8cc8;
        case 0x1c8cccu: goto label_1c8ccc;
        case 0x1c8cd0u: goto label_1c8cd0;
        case 0x1c8cd4u: goto label_1c8cd4;
        case 0x1c8cd8u: goto label_1c8cd8;
        case 0x1c8cdcu: goto label_1c8cdc;
        case 0x1c8ce0u: goto label_1c8ce0;
        case 0x1c8ce4u: goto label_1c8ce4;
        case 0x1c8ce8u: goto label_1c8ce8;
        case 0x1c8cecu: goto label_1c8cec;
        case 0x1c8cf0u: goto label_1c8cf0;
        case 0x1c8cf4u: goto label_1c8cf4;
        case 0x1c8cf8u: goto label_1c8cf8;
        case 0x1c8cfcu: goto label_1c8cfc;
        case 0x1c8d00u: goto label_1c8d00;
        case 0x1c8d04u: goto label_1c8d04;
        case 0x1c8d08u: goto label_1c8d08;
        case 0x1c8d0cu: goto label_1c8d0c;
        case 0x1c8d10u: goto label_1c8d10;
        case 0x1c8d14u: goto label_1c8d14;
        case 0x1c8d18u: goto label_1c8d18;
        case 0x1c8d1cu: goto label_1c8d1c;
        case 0x1c8d20u: goto label_1c8d20;
        case 0x1c8d24u: goto label_1c8d24;
        case 0x1c8d28u: goto label_1c8d28;
        case 0x1c8d2cu: goto label_1c8d2c;
        case 0x1c8d30u: goto label_1c8d30;
        case 0x1c8d34u: goto label_1c8d34;
        case 0x1c8d38u: goto label_1c8d38;
        case 0x1c8d3cu: goto label_1c8d3c;
        case 0x1c8d40u: goto label_1c8d40;
        case 0x1c8d44u: goto label_1c8d44;
        case 0x1c8d48u: goto label_1c8d48;
        case 0x1c8d4cu: goto label_1c8d4c;
        case 0x1c8d50u: goto label_1c8d50;
        case 0x1c8d54u: goto label_1c8d54;
        case 0x1c8d58u: goto label_1c8d58;
        case 0x1c8d5cu: goto label_1c8d5c;
        case 0x1c8d60u: goto label_1c8d60;
        case 0x1c8d64u: goto label_1c8d64;
        case 0x1c8d68u: goto label_1c8d68;
        case 0x1c8d6cu: goto label_1c8d6c;
        case 0x1c8d70u: goto label_1c8d70;
        case 0x1c8d74u: goto label_1c8d74;
        case 0x1c8d78u: goto label_1c8d78;
        case 0x1c8d7cu: goto label_1c8d7c;
        case 0x1c8d80u: goto label_1c8d80;
        case 0x1c8d84u: goto label_1c8d84;
        case 0x1c8d88u: goto label_1c8d88;
        case 0x1c8d8cu: goto label_1c8d8c;
        case 0x1c8d90u: goto label_1c8d90;
        case 0x1c8d94u: goto label_1c8d94;
        case 0x1c8d98u: goto label_1c8d98;
        case 0x1c8d9cu: goto label_1c8d9c;
        case 0x1c8da0u: goto label_1c8da0;
        case 0x1c8da4u: goto label_1c8da4;
        case 0x1c8da8u: goto label_1c8da8;
        case 0x1c8dacu: goto label_1c8dac;
        case 0x1c8db0u: goto label_1c8db0;
        case 0x1c8db4u: goto label_1c8db4;
        case 0x1c8db8u: goto label_1c8db8;
        case 0x1c8dbcu: goto label_1c8dbc;
        case 0x1c8dc0u: goto label_1c8dc0;
        case 0x1c8dc4u: goto label_1c8dc4;
        case 0x1c8dc8u: goto label_1c8dc8;
        case 0x1c8dccu: goto label_1c8dcc;
        case 0x1c8dd0u: goto label_1c8dd0;
        case 0x1c8dd4u: goto label_1c8dd4;
        case 0x1c8dd8u: goto label_1c8dd8;
        case 0x1c8ddcu: goto label_1c8ddc;
        case 0x1c8de0u: goto label_1c8de0;
        case 0x1c8de4u: goto label_1c8de4;
        case 0x1c8de8u: goto label_1c8de8;
        case 0x1c8decu: goto label_1c8dec;
        case 0x1c8df0u: goto label_1c8df0;
        case 0x1c8df4u: goto label_1c8df4;
        case 0x1c8df8u: goto label_1c8df8;
        case 0x1c8dfcu: goto label_1c8dfc;
        case 0x1c8e00u: goto label_1c8e00;
        case 0x1c8e04u: goto label_1c8e04;
        case 0x1c8e08u: goto label_1c8e08;
        case 0x1c8e0cu: goto label_1c8e0c;
        case 0x1c8e10u: goto label_1c8e10;
        case 0x1c8e14u: goto label_1c8e14;
        case 0x1c8e18u: goto label_1c8e18;
        case 0x1c8e1cu: goto label_1c8e1c;
        case 0x1c8e20u: goto label_1c8e20;
        case 0x1c8e24u: goto label_1c8e24;
        case 0x1c8e28u: goto label_1c8e28;
        case 0x1c8e2cu: goto label_1c8e2c;
        case 0x1c8e30u: goto label_1c8e30;
        case 0x1c8e34u: goto label_1c8e34;
        case 0x1c8e38u: goto label_1c8e38;
        case 0x1c8e3cu: goto label_1c8e3c;
        case 0x1c8e40u: goto label_1c8e40;
        case 0x1c8e44u: goto label_1c8e44;
        case 0x1c8e48u: goto label_1c8e48;
        case 0x1c8e4cu: goto label_1c8e4c;
        case 0x1c8e50u: goto label_1c8e50;
        case 0x1c8e54u: goto label_1c8e54;
        case 0x1c8e58u: goto label_1c8e58;
        case 0x1c8e5cu: goto label_1c8e5c;
        case 0x1c8e60u: goto label_1c8e60;
        case 0x1c8e64u: goto label_1c8e64;
        case 0x1c8e68u: goto label_1c8e68;
        case 0x1c8e6cu: goto label_1c8e6c;
        case 0x1c8e70u: goto label_1c8e70;
        case 0x1c8e74u: goto label_1c8e74;
        case 0x1c8e78u: goto label_1c8e78;
        case 0x1c8e7cu: goto label_1c8e7c;
        case 0x1c8e80u: goto label_1c8e80;
        case 0x1c8e84u: goto label_1c8e84;
        case 0x1c8e88u: goto label_1c8e88;
        case 0x1c8e8cu: goto label_1c8e8c;
        case 0x1c8e90u: goto label_1c8e90;
        case 0x1c8e94u: goto label_1c8e94;
        case 0x1c8e98u: goto label_1c8e98;
        case 0x1c8e9cu: goto label_1c8e9c;
        case 0x1c8ea0u: goto label_1c8ea0;
        case 0x1c8ea4u: goto label_1c8ea4;
        case 0x1c8ea8u: goto label_1c8ea8;
        case 0x1c8eacu: goto label_1c8eac;
        case 0x1c8eb0u: goto label_1c8eb0;
        case 0x1c8eb4u: goto label_1c8eb4;
        case 0x1c8eb8u: goto label_1c8eb8;
        case 0x1c8ebcu: goto label_1c8ebc;
        case 0x1c8ec0u: goto label_1c8ec0;
        case 0x1c8ec4u: goto label_1c8ec4;
        case 0x1c8ec8u: goto label_1c8ec8;
        case 0x1c8eccu: goto label_1c8ecc;
        case 0x1c8ed0u: goto label_1c8ed0;
        case 0x1c8ed4u: goto label_1c8ed4;
        case 0x1c8ed8u: goto label_1c8ed8;
        case 0x1c8edcu: goto label_1c8edc;
        case 0x1c8ee0u: goto label_1c8ee0;
        case 0x1c8ee4u: goto label_1c8ee4;
        case 0x1c8ee8u: goto label_1c8ee8;
        case 0x1c8eecu: goto label_1c8eec;
        case 0x1c8ef0u: goto label_1c8ef0;
        case 0x1c8ef4u: goto label_1c8ef4;
        case 0x1c8ef8u: goto label_1c8ef8;
        case 0x1c8efcu: goto label_1c8efc;
        case 0x1c8f00u: goto label_1c8f00;
        case 0x1c8f04u: goto label_1c8f04;
        case 0x1c8f08u: goto label_1c8f08;
        case 0x1c8f0cu: goto label_1c8f0c;
        case 0x1c8f10u: goto label_1c8f10;
        case 0x1c8f14u: goto label_1c8f14;
        case 0x1c8f18u: goto label_1c8f18;
        case 0x1c8f1cu: goto label_1c8f1c;
        case 0x1c8f20u: goto label_1c8f20;
        case 0x1c8f24u: goto label_1c8f24;
        case 0x1c8f28u: goto label_1c8f28;
        case 0x1c8f2cu: goto label_1c8f2c;
        case 0x1c8f30u: goto label_1c8f30;
        case 0x1c8f34u: goto label_1c8f34;
        case 0x1c8f38u: goto label_1c8f38;
        case 0x1c8f3cu: goto label_1c8f3c;
        case 0x1c8f40u: goto label_1c8f40;
        case 0x1c8f44u: goto label_1c8f44;
        case 0x1c8f48u: goto label_1c8f48;
        case 0x1c8f4cu: goto label_1c8f4c;
        case 0x1c8f50u: goto label_1c8f50;
        case 0x1c8f54u: goto label_1c8f54;
        case 0x1c8f58u: goto label_1c8f58;
        case 0x1c8f5cu: goto label_1c8f5c;
        case 0x1c8f60u: goto label_1c8f60;
        case 0x1c8f64u: goto label_1c8f64;
        case 0x1c8f68u: goto label_1c8f68;
        case 0x1c8f6cu: goto label_1c8f6c;
        case 0x1c8f70u: goto label_1c8f70;
        case 0x1c8f74u: goto label_1c8f74;
        case 0x1c8f78u: goto label_1c8f78;
        case 0x1c8f7cu: goto label_1c8f7c;
        case 0x1c8f80u: goto label_1c8f80;
        case 0x1c8f84u: goto label_1c8f84;
        case 0x1c8f88u: goto label_1c8f88;
        case 0x1c8f8cu: goto label_1c8f8c;
        case 0x1c8f90u: goto label_1c8f90;
        case 0x1c8f94u: goto label_1c8f94;
        case 0x1c8f98u: goto label_1c8f98;
        default: break;
    }

    ctx->pc = 0x1c8380u;

label_1c8380:
    // 0x1c8380: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c8380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1c8384:
    // 0x1c8384: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1c8384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1c8388:
    // 0x1c8388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c838c:
    // 0x1c838c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x1c838cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_1c8390:
    // 0x1c8390: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c8390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1c8394:
    // 0x1c8394: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c8394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1c8398:
    // 0x1c8398: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c839c:
    // 0x1c839c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1c839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1c83a0:
    // 0x1c83a0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1c83a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1c83a4:
    // 0x1c83a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c83a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c83a8:
    // 0x1c83a8: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1c83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1c83ac:
    // 0x1c83ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c83acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c83b0:
    // 0x1c83b0: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c83b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1c83b4:
    // 0x1c83b4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1c83b8:
    if (ctx->pc == 0x1C83B8u) {
        ctx->pc = 0x1C83BCu;
        goto label_1c83bc;
    }
    ctx->pc = 0x1C83B4u;
    {
        const bool branch_taken_0x1c83b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c83b4) {
            ctx->pc = 0x1C83DCu;
            goto label_1c83dc;
        }
    }
    ctx->pc = 0x1C83BCu;
label_1c83bc:
    // 0x1c83bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c83bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c83c0:
    // 0x1c83c0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c83c4:
    // 0x1c83c4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1c83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_1c83c8:
    // 0x1c83c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c83c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c83cc:
    // 0x1c83cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c83ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c83d0:
    // 0x1c83d0: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1c83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1c83d4:
    // 0x1c83d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c83d8:
    // 0x1c83d8: 0xa0601921  sb          $zero, 0x1921($v1)
    ctx->pc = 0x1c83d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6433), (uint8_t)GPR_U32(ctx, 0));
label_1c83dc:
    // 0x1c83dc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c83e0:
    // 0x1c83e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1c83e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1c83e4:
    // 0x1c83e4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1c83e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c83e8:
    // 0x1c83e8: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x1c83e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1c83ec:
    // 0x1c83ec: 0x102002ad  beqz        $at, . + 4 + (0x2AD << 2)
label_1c83f0:
    if (ctx->pc == 0x1C83F0u) {
        ctx->pc = 0x1C83F4u;
        goto label_1c83f4;
    }
    ctx->pc = 0x1C83ECu;
    {
        const bool branch_taken_0x1c83ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c83ec) {
            ctx->pc = 0x1C8EA4u;
            goto label_1c8ea4;
        }
    }
    ctx->pc = 0x1C83F4u;
label_1c83f4:
    // 0x1c83f4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1c83f8:
    // 0x1c83f8: 0x2464f440  addiu       $a0, $v1, -0xBC0
    ctx->pc = 0x1c83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964288));
label_1c83fc:
    // 0x1c83fc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c8400:
    // 0x1c8400: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1c8400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c8404:
    // 0x1c8404: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1c8404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c8408:
    // 0x1c8408: 0xc00008  jr          $a2
label_1c840c:
    if (ctx->pc == 0x1C840Cu) {
        ctx->pc = 0x1C8410u;
        goto label_1c8410;
    }
    ctx->pc = 0x1C8408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8408u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C8410u;
label_1c8410:
    // 0x1c8410: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c8410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8414:
    // 0x1c8414: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1c8414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1c8418:
    // 0x1c8418: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1c8418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_1c841c:
    // 0x1c841c: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x1c841cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c8420:
    // 0x1c8420: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1c8420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_1c8424:
    // 0x1c8424: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1c8424u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_1c8428:
    // 0x1c8428: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c842c:
    // 0x1c842c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1c842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8430:
    // 0x1c8430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c8430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c8434:
    // 0x1c8434: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
label_1c8438:
    if (ctx->pc == 0x1C8438u) {
        ctx->pc = 0x1C843Cu;
        goto label_1c843c;
    }
    ctx->pc = 0x1C8434u;
    {
        const bool branch_taken_0x1c8434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8434) {
            ctx->pc = 0x1C84ACu;
            goto label_1c84ac;
        }
    }
    ctx->pc = 0x1C843Cu;
label_1c843c:
    // 0x1c843c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8440:
    // 0x1c8440: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_1c8444:
    if (ctx->pc == 0x1C8444u) {
        ctx->pc = 0x1C8448u;
        goto label_1c8448;
    }
    ctx->pc = 0x1C8440u;
    {
        const bool branch_taken_0x1c8440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8440) {
            ctx->pc = 0x1C8480u;
            goto label_1c8480;
        }
    }
    ctx->pc = 0x1C8448u;
label_1c8448:
    // 0x1c8448: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c844c:
    if (ctx->pc == 0x1C844Cu) {
        ctx->pc = 0x1C8450u;
        goto label_1c8450;
    }
    ctx->pc = 0x1C8448u;
    {
        const bool branch_taken_0x1c8448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8448) {
            ctx->pc = 0x1C8458u;
            goto label_1c8458;
        }
    }
    ctx->pc = 0x1C8450u;
label_1c8450:
    // 0x1c8450: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1c8454:
    if (ctx->pc == 0x1C8454u) {
        ctx->pc = 0x1C8458u;
        goto label_1c8458;
    }
    ctx->pc = 0x1C8450u;
    {
        const bool branch_taken_0x1c8450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8450) {
            ctx->pc = 0x1C84CCu;
            goto label_1c84cc;
        }
    }
    ctx->pc = 0x1C8458u;
label_1c8458:
    // 0x1c8458: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c845c:
    // 0x1c845c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8460:
    // 0x1c8460: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1c8460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1c8464:
    // 0x1c8464: 0x24061e7d  addiu       $a2, $zero, 0x1E7D
    ctx->pc = 0x1c8464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7805));
label_1c8468:
    // 0x1c8468: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c846c:
    // 0x1c846c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c846cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c8470:
    // 0x1c8470: 0xc0965d0  jal         func_259740
label_1c8474:
    if (ctx->pc == 0x1C8474u) {
        ctx->pc = 0x1C8478u;
        goto label_1c8478;
    }
    ctx->pc = 0x1C8470u;
    SET_GPR_U32(ctx, 31, 0x1C8478u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C8470u, 0x1C8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8478u;
label_1c8478:
    // 0x1c8478: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c847c:
    if (ctx->pc == 0x1C847Cu) {
        ctx->pc = 0x1C8480u;
        goto label_1c8480;
    }
    ctx->pc = 0x1C8478u;
    {
        const bool branch_taken_0x1c8478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8478) {
            ctx->pc = 0x1C84CCu;
            goto label_1c84cc;
        }
    }
    ctx->pc = 0x1C8480u;
label_1c8480:
    // 0x1c8480: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8484:
    // 0x1c8484: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8488:
    // 0x1c8488: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c8488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1c848c:
    // 0x1c848c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1c848cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1c8490:
    // 0x1c8490: 0x24061e7e  addiu       $a2, $zero, 0x1E7E
    ctx->pc = 0x1c8490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7806));
label_1c8494:
    // 0x1c8494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8498:
    // 0x1c8498: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c8498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c849c:
    // 0x1c849c: 0xc0965d0  jal         func_259740
label_1c84a0:
    if (ctx->pc == 0x1C84A0u) {
        ctx->pc = 0x1C84A4u;
        goto label_1c84a4;
    }
    ctx->pc = 0x1C849Cu;
    SET_GPR_U32(ctx, 31, 0x1C84A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C849Cu, 0x1C84A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84A4u;
label_1c84a4:
    // 0x1c84a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c84a8:
    if (ctx->pc == 0x1C84A8u) {
        ctx->pc = 0x1C84ACu;
        goto label_1c84ac;
    }
    ctx->pc = 0x1C84A4u;
    {
        const bool branch_taken_0x1c84a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c84a4) {
            ctx->pc = 0x1C84CCu;
            goto label_1c84cc;
        }
    }
    ctx->pc = 0x1C84ACu;
label_1c84ac:
    // 0x1c84ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c84acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c84b0:
    // 0x1c84b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c84b4:
    // 0x1c84b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1c84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1c84b8:
    // 0x1c84b8: 0x24061e7f  addiu       $a2, $zero, 0x1E7F
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7807));
label_1c84bc:
    // 0x1c84bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c84bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c84c0:
    // 0x1c84c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c84c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c84c4:
    // 0x1c84c4: 0xc0965d0  jal         func_259740
label_1c84c8:
    if (ctx->pc == 0x1C84C8u) {
        ctx->pc = 0x1C84CCu;
        goto label_1c84cc;
    }
    ctx->pc = 0x1C84C4u;
    SET_GPR_U32(ctx, 31, 0x1C84CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C84C4u, 0x1C84CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84CCu;
label_1c84cc:
    // 0x1c84cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c84d0:
    // 0x1c84d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c84d4:
    // 0x1c84d4: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x1c84d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
label_1c84d8:
    // 0x1c84d8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1c84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1c84dc:
    // 0x1c84dc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c84e0:
    // 0x1c84e0: 0xa0621577  sb          $v0, 0x1577($v1)
    ctx->pc = 0x1c84e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5495), (uint8_t)GPR_U32(ctx, 2));
label_1c84e4:
    // 0x1c84e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c84e8:
    // 0x1c84e8: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1c84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_1c84ec:
    // 0x1c84ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c84ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c84f0:
    // 0x1c84f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c84f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c84f4:
    // 0x1c84f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c84f8:
    // 0x1c84f8: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1c84f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c84fc:
    // 0x1c84fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c84fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8500:
    // 0x1c8500: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1c8500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c8504:
    // 0x1c8504: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1c8504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1c8508:
    // 0x1c8508: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c850c:
    if (ctx->pc == 0x1C850Cu) {
        ctx->pc = 0x1C8510u;
        goto label_1c8510;
    }
    ctx->pc = 0x1C8508u;
    {
        const bool branch_taken_0x1c8508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8508) {
            ctx->pc = 0x1C851Cu;
            goto label_1c851c;
        }
    }
    ctx->pc = 0x1C8510u;
label_1c8510:
    // 0x1c8510: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c8514:
    // 0x1c8514: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8518:
    // 0x1c8518: 0xa04313a7  sb          $v1, 0x13A7($v0)
    ctx->pc = 0x1c8518u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5031), (uint8_t)GPR_U32(ctx, 3));
label_1c851c:
    // 0x1c851c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8520:
    // 0x1c8520: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c8520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_1c8524:
    // 0x1c8524: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1c8528:
    if (ctx->pc == 0x1C8528u) {
        ctx->pc = 0x1C852Cu;
        goto label_1c852c;
    }
    ctx->pc = 0x1C8524u;
    {
        const bool branch_taken_0x1c8524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8524) {
            ctx->pc = 0x1C8594u;
            goto label_1c8594;
        }
    }
    ctx->pc = 0x1C852Cu;
label_1c852c:
    // 0x1c852c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8530:
    // 0x1c8530: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8534:
    // 0x1c8534: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1c8538:
    if (ctx->pc == 0x1C8538u) {
        ctx->pc = 0x1C853Cu;
        goto label_1c853c;
    }
    ctx->pc = 0x1C8534u;
    {
        const bool branch_taken_0x1c8534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8534) {
            ctx->pc = 0x1C8594u;
            goto label_1c8594;
        }
    }
    ctx->pc = 0x1C853Cu;
label_1c853c:
    // 0x1c853c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8540:
    // 0x1c8540: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c8540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8544:
    // 0x1c8544: 0x8cc213e8  lw          $v0, 0x13E8($a2)
    ctx->pc = 0x1c8544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5096)));
label_1c8548:
    // 0x1c8548: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c8548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1c854c:
    // 0x1c854c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1c854cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1c8550:
    // 0x1c8550: 0xc05ccfc  jal         func_1733F0
label_1c8554:
    if (ctx->pc == 0x1C8554u) {
        ctx->pc = 0x1C8558u;
        goto label_1c8558;
    }
    ctx->pc = 0x1C8550u;
    SET_GPR_U32(ctx, 31, 0x1C8558u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C8550u, 0x1C8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8558u;
label_1c8558:
    // 0x1c8558: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c855c:
    // 0x1c855c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1c855cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_1c8560:
    // 0x1c8560: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8564:
    // 0x1c8564: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8568:
    // 0x1c8568: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1c8568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
label_1c856c:
    // 0x1c856c: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1c856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1c8570:
    // 0x1c8570: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c8570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c8574:
    // 0x1c8574: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1c8574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c8578:
    // 0x1c8578: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1c8578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c857c:
    // 0x1c857c: 0xc058f50  jal         func_163D40
label_1c8580:
    if (ctx->pc == 0x1C8580u) {
        ctx->pc = 0x1C8584u;
        goto label_1c8584;
    }
    ctx->pc = 0x1C857Cu;
    SET_GPR_U32(ctx, 31, 0x1C8584u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C857Cu, 0x1C8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8584u;
label_1c8584:
    // 0x1c8584: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8588:
    // 0x1c8588: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c8588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1c858c:
    // 0x1c858c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c8590:
    if (ctx->pc == 0x1C8590u) {
        ctx->pc = 0x1C8594u;
        goto label_1c8594;
    }
    ctx->pc = 0x1C858Cu;
    {
        const bool branch_taken_0x1c858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c858c) {
            ctx->pc = 0x1C85C0u;
            goto label_1c85c0;
        }
    }
    ctx->pc = 0x1C8594u;
label_1c8594:
    // 0x1c8594: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8598:
    // 0x1c8598: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c859c:
    // 0x1c859c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1c859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_1c85a0:
    // 0x1c85a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c85a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1c85a4:
    // 0x1c85a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c85a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c85a8:
    // 0x1c85a8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1c85a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c85ac:
    // 0x1c85ac: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1c85acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c85b0:
    // 0x1c85b0: 0xc058f50  jal         func_163D40
label_1c85b4:
    if (ctx->pc == 0x1C85B4u) {
        ctx->pc = 0x1C85B8u;
        goto label_1c85b8;
    }
    ctx->pc = 0x1C85B0u;
    SET_GPR_U32(ctx, 31, 0x1C85B8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C85B0u, 0x1C85B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85B8u;
label_1c85b8:
    // 0x1c85b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c85bc:
    // 0x1c85bc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c85bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1c85c0:
    // 0x1c85c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c85c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c85c4:
    // 0x1c85c4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c85c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1c85c8:
    // 0x1c85c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c85c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c85cc:
    // 0x1c85cc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c85ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1c85d0:
    // 0x1c85d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c85d4:
    if (ctx->pc == 0x1C85D4u) {
        ctx->pc = 0x1C85D8u;
        goto label_1c85d8;
    }
    ctx->pc = 0x1C85D0u;
    {
        const bool branch_taken_0x1c85d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c85d0) {
            ctx->pc = 0x1C85E4u;
            goto label_1c85e4;
        }
    }
    ctx->pc = 0x1C85D8u;
label_1c85d8:
    // 0x1c85d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c85dc:
    // 0x1c85dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c85e0:
    // 0x1c85e0: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1c85e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1c85e4:
    // 0x1c85e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c85e8:
    // 0x1c85e8: 0x8c451b60  lw          $a1, 0x1B60($v0)
    ctx->pc = 0x1c85e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1c85ec:
    // 0x1c85ec: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1c85f0:
    if (ctx->pc == 0x1C85F0u) {
        ctx->pc = 0x1C85F4u;
        goto label_1c85f4;
    }
    ctx->pc = 0x1C85ECu;
    {
        const bool branch_taken_0x1c85ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c85ec) {
            ctx->pc = 0x1C8620u;
            goto label_1c8620;
        }
    }
    ctx->pc = 0x1C85F4u;
label_1c85f4:
    // 0x1c85f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c85f8:
    // 0x1c85f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c85fc:
    // 0x1c85fc: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
label_1c8600:
    // 0x1c8600: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1c8600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c8604:
    // 0x1c8604: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1c8604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1c8608:
    // 0x1c8608: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c860c:
    // 0x1c860c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c8610:
    // 0x1c8610: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1c8610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_1c8614:
    // 0x1c8614: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c8618:
    // 0x1c8618: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c861c:
    // 0x1c861c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1c861cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1c8620:
    // 0x1c8620: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8624:
    // 0x1c8624: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8624u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8628:
    // 0x1c8628: 0xc096b40  jal         func_25AD00
label_1c862c:
    if (ctx->pc == 0x1C862Cu) {
        ctx->pc = 0x1C8630u;
        goto label_1c8630;
    }
    ctx->pc = 0x1C8628u;
    SET_GPR_U32(ctx, 31, 0x1C8630u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C8628u, 0x1C8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8630u;
label_1c8630:
    // 0x1c8630: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8634:
    // 0x1c8634: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c8634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8638:
    // 0x1c8638: 0xc05cd10  jal         func_173440
label_1c863c:
    if (ctx->pc == 0x1C863Cu) {
        ctx->pc = 0x1C8640u;
        goto label_1c8640;
    }
    ctx->pc = 0x1C8638u;
    SET_GPR_U32(ctx, 31, 0x1C8640u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C8638u, 0x1C8640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8640u;
label_1c8640:
    // 0x1c8640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c8644:
    // 0x1c8644: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8648:
    // 0x1c8648: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8648u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c864c:
    // 0x1c864c: 0xc0573d8  jal         func_15CF60
label_1c8650:
    if (ctx->pc == 0x1C8650u) {
        ctx->pc = 0x1C8654u;
        goto label_1c8654;
    }
    ctx->pc = 0x1C864Cu;
    SET_GPR_U32(ctx, 31, 0x1C8654u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C864Cu, 0x1C8654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8654u;
label_1c8654:
    // 0x1c8654: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8654u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8658:
    // 0x1c8658: 0xc097530  jal         func_25D4C0
label_1c865c:
    if (ctx->pc == 0x1C865Cu) {
        ctx->pc = 0x1C8660u;
        goto label_1c8660;
    }
    ctx->pc = 0x1C8658u;
    SET_GPR_U32(ctx, 31, 0x1C8660u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C8658u, 0x1C8660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8660u;
label_1c8660:
    // 0x1c8660: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8664:
    // 0x1c8664: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1c8664u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1c8668:
    // 0x1c8668: 0x1080020e  beqz        $a0, . + 4 + (0x20E << 2)
label_1c866c:
    if (ctx->pc == 0x1C866Cu) {
        ctx->pc = 0x1C8670u;
        goto label_1c8670;
    }
    ctx->pc = 0x1C8668u;
    {
        const bool branch_taken_0x1c8668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8668) {
            ctx->pc = 0x1C8EA4u;
            goto label_1c8ea4;
        }
    }
    ctx->pc = 0x1C8670u;
label_1c8670:
    // 0x1c8670: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8674:
    // 0x1c8674: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c8678:
    // 0x1c8678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c8678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c867c:
    // 0x1c867c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c867cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c8680:
    // 0x1c8680: 0x10000241  b           . + 4 + (0x241 << 2)
label_1c8684:
    if (ctx->pc == 0x1C8684u) {
        ctx->pc = 0x1C8688u;
        goto label_1c8688;
    }
    ctx->pc = 0x1C8680u;
    {
        const bool branch_taken_0x1c8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8680) {
            ctx->pc = 0x1C8F88u;
            goto label_1c8f88;
        }
    }
    ctx->pc = 0x1C8688u;
label_1c8688:
    // 0x1c8688: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c868c:
    // 0x1c868c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8690:
    // 0x1c8690: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c8690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c8694:
    // 0x1c8694: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c8694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c8698:
    // 0x1c8698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c869c:
    // 0x1c869c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c869cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c86a0:
    // 0x1c86a0: 0xc0965d0  jal         func_259740
label_1c86a4:
    if (ctx->pc == 0x1C86A4u) {
        ctx->pc = 0x1C86A8u;
        goto label_1c86a8;
    }
    ctx->pc = 0x1C86A0u;
    SET_GPR_U32(ctx, 31, 0x1C86A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C86A0u, 0x1C86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86A8u;
label_1c86a8:
    // 0x1c86a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c86a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c86ac:
    // 0x1c86ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c86acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c86b0:
    // 0x1c86b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c86b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c86b4:
    // 0x1c86b4: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1c86b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_1c86b8:
    // 0x1c86b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c86b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c86bc:
    // 0x1c86bc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c86c0:
    // 0x1c86c0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1c86c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_1c86c4:
    // 0x1c86c4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x1c86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_1c86c8:
    // 0x1c86c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c86c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c86cc:
    // 0x1c86cc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c86d0:
    // 0x1c86d0: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1c86d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_1c86d4:
    // 0x1c86d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c86d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c86d8:
    // 0x1c86d8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c86dc:
    // 0x1c86dc: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1c86dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1c86e0:
    // 0x1c86e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1c86e4:
    if (ctx->pc == 0x1C86E4u) {
        ctx->pc = 0x1C86E8u;
        goto label_1c86e8;
    }
    ctx->pc = 0x1C86E0u;
    {
        const bool branch_taken_0x1c86e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c86e0) {
            ctx->pc = 0x1C86FCu;
            goto label_1c86fc;
        }
    }
    ctx->pc = 0x1C86E8u;
label_1c86e8:
    // 0x1c86e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c86ec:
    // 0x1c86ec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c86f0:
    // 0x1c86f0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c86f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1c86f4:
    // 0x1c86f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c86f8:
    if (ctx->pc == 0x1C86F8u) {
        ctx->pc = 0x1C86FCu;
        goto label_1c86fc;
    }
    ctx->pc = 0x1C86F4u;
    {
        const bool branch_taken_0x1c86f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c86f4) {
            ctx->pc = 0x1C8724u;
            goto label_1c8724;
        }
    }
    ctx->pc = 0x1C86FCu;
label_1c86fc:
    // 0x1c86fc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c86fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8700:
    // 0x1c8700: 0x908313a4  lbu         $v1, 0x13A4($a0)
    ctx->pc = 0x1c8700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5028)));
label_1c8704:
    // 0x1c8704: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c8704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c8708:
    // 0x1c8708: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c8708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c870c:
    // 0x1c870c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c8710:
    // 0x1c8710: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1c8710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1c8714:
    // 0x1c8714: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1c8714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_1c8718:
    // 0x1c8718: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1c8718u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1c871c:
    // 0x1c871c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8720:
    // 0x1c8720: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c8720u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1c8724:
    // 0x1c8724: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8728:
    // 0x1c8728: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1c8728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1c872c:
    // 0x1c872c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c872cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8730:
    // 0x1c8730: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c8730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1c8734:
    // 0x1c8734: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c8734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c8738:
    // 0x1c8738: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x1c8738u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c873c:
    // 0x1c873c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c873cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8740:
    // 0x1c8740: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1c8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c8744:
    // 0x1c8744: 0x30430200  andi        $v1, $v0, 0x200
    ctx->pc = 0x1c8744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1c8748:
    // 0x1c8748: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c874c:
    if (ctx->pc == 0x1C874Cu) {
        ctx->pc = 0x1C8750u;
        goto label_1c8750;
    }
    ctx->pc = 0x1C8748u;
    {
        const bool branch_taken_0x1c8748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8748) {
            ctx->pc = 0x1C875Cu;
            goto label_1c875c;
        }
    }
    ctx->pc = 0x1C8750u;
label_1c8750:
    // 0x1c8750: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c8750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c8754:
    // 0x1c8754: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8758:
    // 0x1c8758: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1c8758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1c875c:
    // 0x1c875c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c875cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8760:
    // 0x1c8760: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c8760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c8764:
    // 0x1c8764: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c8764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
label_1c8768:
    // 0x1c8768: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c8768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c876c:
    // 0x1c876c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c876cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c8770:
    // 0x1c8770: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8774:
    // 0x1c8774: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1c8774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
label_1c8778:
    // 0x1c8778: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c8778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c877c:
    // 0x1c877c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1c877cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1c8780:
    // 0x1c8780: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1c8784:
    if (ctx->pc == 0x1C8784u) {
        ctx->pc = 0x1C8788u;
        goto label_1c8788;
    }
    ctx->pc = 0x1C8780u;
    {
        const bool branch_taken_0x1c8780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8780) {
            ctx->pc = 0x1C87ACu;
            goto label_1c87ac;
        }
    }
    ctx->pc = 0x1C8788u;
label_1c8788:
    // 0x1c8788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c878c:
    // 0x1c878c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c878cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c8790:
    // 0x1c8790: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c8790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1c8794:
    // 0x1c8794: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c8794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c8798:
    // 0x1c8798: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c879c:
    // 0x1c879c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1c879cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1c87a0:
    // 0x1c87a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1c87a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c87a4:
    // 0x1c87a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c87a8:
    // 0x1c87a8: 0xa064157d  sb          $a0, 0x157D($v1)
    ctx->pc = 0x1c87a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5501), (uint8_t)GPR_U32(ctx, 4));
label_1c87ac:
    // 0x1c87ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c87acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c87b0:
    // 0x1c87b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c87b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c87b4:
    // 0x1c87b4: 0xc096b40  jal         func_25AD00
label_1c87b8:
    if (ctx->pc == 0x1C87B8u) {
        ctx->pc = 0x1C87BCu;
        goto label_1c87bc;
    }
    ctx->pc = 0x1C87B4u;
    SET_GPR_U32(ctx, 31, 0x1C87BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C87B4u, 0x1C87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87BCu;
label_1c87bc:
    // 0x1c87bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c87bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c87c0:
    // 0x1c87c0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c87c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c87c4:
    // 0x1c87c4: 0xc05cd10  jal         func_173440
label_1c87c8:
    if (ctx->pc == 0x1C87C8u) {
        ctx->pc = 0x1C87CCu;
        goto label_1c87cc;
    }
    ctx->pc = 0x1C87C4u;
    SET_GPR_U32(ctx, 31, 0x1C87CCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C87C4u, 0x1C87CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87CCu;
label_1c87cc:
    // 0x1c87cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c87ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c87d0:
    // 0x1c87d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c87d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c87d4:
    // 0x1c87d4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c87d8:
    // 0x1c87d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c87d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c87dc:
    // 0x1c87dc: 0xc0573d8  jal         func_15CF60
label_1c87e0:
    if (ctx->pc == 0x1C87E0u) {
        ctx->pc = 0x1C87E4u;
        goto label_1c87e4;
    }
    ctx->pc = 0x1C87DCu;
    SET_GPR_U32(ctx, 31, 0x1C87E4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C87DCu, 0x1C87E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87E4u;
label_1c87e4:
    // 0x1c87e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c87e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c87e8:
    // 0x1c87e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c87e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c87ec:
    // 0x1c87ec: 0xc097530  jal         func_25D4C0
label_1c87f0:
    if (ctx->pc == 0x1C87F0u) {
        ctx->pc = 0x1C87F4u;
        goto label_1c87f4;
    }
    ctx->pc = 0x1C87ECu;
    SET_GPR_U32(ctx, 31, 0x1C87F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C87ECu, 0x1C87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87F4u;
label_1c87f4:
    // 0x1c87f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c87f8:
    // 0x1c87f8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1c87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1c87fc:
    // 0x1c87fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1c87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1c8800:
    // 0x1c8800: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c8800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c8804:
    // 0x1c8804: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c8804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1c8808:
    // 0x1c8808: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1c8808u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c880c:
    // 0x1c880c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1c880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1c8810:
    // 0x1c8810: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1c8810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1c8814:
    // 0x1c8814: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c8814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c8818:
    // 0x1c8818: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c881c:
    // 0x1c881c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c881cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8820:
    // 0x1c8820: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1c8820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1c8824:
    // 0x1c8824: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8828:
    // 0x1c8828: 0xc086488  jal         func_219220
label_1c882c:
    if (ctx->pc == 0x1C882Cu) {
        ctx->pc = 0x1C8830u;
        goto label_1c8830;
    }
    ctx->pc = 0x1C8828u;
    SET_GPR_U32(ctx, 31, 0x1C8830u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x1C8828u, 0x1C8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8830u;
label_1c8830:
    // 0x1c8830: 0xc057808  jal         func_15E020
label_1c8834:
    if (ctx->pc == 0x1C8834u) {
        ctx->pc = 0x1C8838u;
        goto label_1c8838;
    }
    ctx->pc = 0x1C8830u;
    SET_GPR_U32(ctx, 31, 0x1C8838u);
    ctx->pc = 0x15E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E020u, 0x1C8830u, 0x1C8838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8838u;
label_1c8838:
    // 0x1c8838: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8838u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c883c:
    // 0x1c883c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8840:
    // 0x1c8840: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c8840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c8844:
    // 0x1c8844: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_1c8848:
    if (ctx->pc == 0x1C8848u) {
        ctx->pc = 0x1C884Cu;
        goto label_1c884c;
    }
    ctx->pc = 0x1C8844u;
    {
        const bool branch_taken_0x1c8844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8844) {
            ctx->pc = 0x1C88E0u;
            goto label_1c88e0;
        }
    }
    ctx->pc = 0x1C884Cu;
label_1c884c:
    // 0x1c884c: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c884cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8850:
    // 0x1c8850: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x1c8850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1c8854:
    // 0x1c8854: 0x11200022  beqz        $t1, . + 4 + (0x22 << 2)
label_1c8858:
    if (ctx->pc == 0x1C8858u) {
        ctx->pc = 0x1C885Cu;
        goto label_1c885c;
    }
    ctx->pc = 0x1C8854u;
    {
        const bool branch_taken_0x1c8854 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8854) {
            ctx->pc = 0x1C88E0u;
            goto label_1c88e0;
        }
    }
    ctx->pc = 0x1C885Cu;
label_1c885c:
    // 0x1c885c: 0x8faa0088  lw          $t2, 0x88($sp)
    ctx->pc = 0x1c885cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8860:
    // 0x1c8860: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8864:
    // 0x1c8864: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c8864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_1c8868:
    // 0x1c8868: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c8868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c886c:
    // 0x1c886c: 0x25450120  addiu       $a1, $t2, 0x120
    ctx->pc = 0x1c886cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 288));
label_1c8870:
    // 0x1c8870: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1c8870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1c8874:
    // 0x1c8874: 0xc0675b0  jal         func_19D6C0
label_1c8878:
    if (ctx->pc == 0x1C8878u) {
        ctx->pc = 0x1C887Cu;
        goto label_1c887c;
    }
    ctx->pc = 0x1C8874u;
    SET_GPR_U32(ctx, 31, 0x1C887Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C8874u, 0x1C887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C887Cu;
label_1c887c:
    // 0x1c887c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c8880:
    // 0x1c8880: 0xc067588  jal         func_19D620
label_1c8884:
    if (ctx->pc == 0x1C8884u) {
        ctx->pc = 0x1C8888u;
        goto label_1c8888;
    }
    ctx->pc = 0x1C8880u;
    SET_GPR_U32(ctx, 31, 0x1C8888u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1C8880u, 0x1C8888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8888u;
label_1c8888:
    // 0x1c8888: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c8888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c888c:
    // 0x1c888c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8890:
    // 0x1c8890: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c8890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c8894:
    // 0x1c8894: 0xc46111e0  lwc1        $f1, 0x11E0($v1)
    ctx->pc = 0x1c8894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8898:
    // 0x1c8898: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c889c:
    // 0x1c889c: 0xc46011e0  lwc1        $f0, 0x11E0($v1)
    ctx->pc = 0x1c889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c88a0:
    // 0x1c88a0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1c88a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c88a4:
    // 0x1c88a4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1c88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_1c88a8:
    // 0x1c88a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c88a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c88ac:
    // 0x1c88ac: 0x0  nop
    ctx->pc = 0x1c88acu;
    // NOP
label_1c88b0:
    // 0x1c88b0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1c88b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c88b4:
    // 0x1c88b4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c88b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c88b8:
    // 0x1c88b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c88b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c88bc:
    // 0x1c88bc: 0x0  nop
    ctx->pc = 0x1c88bcu;
    // NOP
label_1c88c0:
    // 0x1c88c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c88c4:
    if (ctx->pc == 0x1C88C4u) {
        ctx->pc = 0x1C88C8u;
        goto label_1c88c8;
    }
    ctx->pc = 0x1C88C0u;
    {
        const bool branch_taken_0x1c88c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c88c0) {
            ctx->pc = 0x1C88E0u;
            goto label_1c88e0;
        }
    }
    ctx->pc = 0x1C88C8u;
label_1c88c8:
    // 0x1c88c8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c88c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c88cc:
    // 0x1c88cc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c88ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c88d0:
    // 0x1c88d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c88d4:
    // 0x1c88d4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c88d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c88d8:
    // 0x1c88d8: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_1c88dc:
    if (ctx->pc == 0x1C88DCu) {
        ctx->pc = 0x1C88E0u;
        goto label_1c88e0;
    }
    ctx->pc = 0x1C88D8u;
    {
        const bool branch_taken_0x1c88d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c88d8) {
            ctx->pc = 0x1C8F88u;
            goto label_1c8f88;
        }
    }
    ctx->pc = 0x1C88E0u;
label_1c88e0:
    // 0x1c88e0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c88e4:
    // 0x1c88e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1c88e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1c88e8:
    // 0x1c88e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1c88ec:
    if (ctx->pc == 0x1C88ECu) {
        ctx->pc = 0x1C88F0u;
        goto label_1c88f0;
    }
    ctx->pc = 0x1C88E8u;
    {
        const bool branch_taken_0x1c88e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c88e8) {
            ctx->pc = 0x1C8908u;
            goto label_1c8908;
        }
    }
    ctx->pc = 0x1C88F0u;
label_1c88f0:
    // 0x1c88f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c88f4:
    // 0x1c88f4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1c88f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1c88f8:
    // 0x1c88f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c88fc:
    // 0x1c88fc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1c88fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_1c8900:
    // 0x1c8900: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c8904:
    if (ctx->pc == 0x1C8904u) {
        ctx->pc = 0x1C8908u;
        goto label_1c8908;
    }
    ctx->pc = 0x1C8900u;
    {
        const bool branch_taken_0x1c8900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8900) {
            ctx->pc = 0x1C8920u;
            goto label_1c8920;
        }
    }
    ctx->pc = 0x1C8908u;
label_1c8908:
    // 0x1c8908: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c890c:
    // 0x1c890c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c890cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c8910:
    // 0x1c8910: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c8910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c8914:
    // 0x1c8914: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c8914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c8918:
    // 0x1c8918: 0x1000019b  b           . + 4 + (0x19B << 2)
label_1c891c:
    if (ctx->pc == 0x1C891Cu) {
        ctx->pc = 0x1C8920u;
        goto label_1c8920;
    }
    ctx->pc = 0x1C8918u;
    {
        const bool branch_taken_0x1c8918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8918) {
            ctx->pc = 0x1C8F88u;
            goto label_1c8f88;
        }
    }
    ctx->pc = 0x1C8920u;
label_1c8920:
    // 0x1c8920: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8924:
    // 0x1c8924: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8928:
    // 0x1c8928: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c8928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c892c:
    // 0x1c892c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1c8930:
    // 0x1c8930: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1c8934:
    // 0x1c8934: 0xc0675b0  jal         func_19D6C0
label_1c8938:
    if (ctx->pc == 0x1C8938u) {
        ctx->pc = 0x1C893Cu;
        goto label_1c893c;
    }
    ctx->pc = 0x1C8934u;
    SET_GPR_U32(ctx, 31, 0x1C893Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C8934u, 0x1C893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C893Cu;
label_1c893c:
    // 0x1c893c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1c893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8940:
    // 0x1c8940: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1c8940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8944:
    // 0x1c8944: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1c8944u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c8948:
    // 0x1c8948: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1c8948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c894c:
    // 0x1c894c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8950:
    // 0x1c8950: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c8950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c8954:
    // 0x1c8954: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1c8954u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1c8958:
    // 0x1c8958: 0xc06757c  jal         func_19D5F0
label_1c895c:
    if (ctx->pc == 0x1C895Cu) {
        ctx->pc = 0x1C8960u;
        goto label_1c8960;
    }
    ctx->pc = 0x1C8958u;
    SET_GPR_U32(ctx, 31, 0x1C8960u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1C8958u, 0x1C8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8960u;
label_1c8960:
    // 0x1c8960: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c8960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c8964:
    // 0x1c8964: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1c8964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8968:
    // 0x1c8968: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1c8968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1c896c:
    // 0x1c896c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c896cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8970:
    // 0x1c8970: 0x0  nop
    ctx->pc = 0x1c8970u;
    // NOP
label_1c8974:
    // 0x1c8974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8978:
    // 0x1c8978: 0x0  nop
    ctx->pc = 0x1c8978u;
    // NOP
label_1c897c:
    // 0x1c897c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_1c8980:
    if (ctx->pc == 0x1C8980u) {
        ctx->pc = 0x1C8984u;
        goto label_1c8984;
    }
    ctx->pc = 0x1C897Cu;
    {
        const bool branch_taken_0x1c897c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c897c) {
            ctx->pc = 0x1C8A04u;
            goto label_1c8a04;
        }
    }
    ctx->pc = 0x1C8984u;
label_1c8984:
    // 0x1c8984: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8988:
    // 0x1c8988: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1c8988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
label_1c898c:
    // 0x1c898c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c8990:
    // 0x1c8990: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x1c8990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
label_1c8994:
    // 0x1c8994: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8998:
    // 0x1c8998: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1c8998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1c899c:
    // 0x1c899c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x1c899cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1c89a0:
    // 0x1c89a0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1c89a4:
    if (ctx->pc == 0x1C89A4u) {
        ctx->pc = 0x1C89A8u;
        goto label_1c89a8;
    }
    ctx->pc = 0x1C89A0u;
    {
        const bool branch_taken_0x1c89a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c89a0) {
            ctx->pc = 0x1C89C0u;
            goto label_1c89c0;
        }
    }
    ctx->pc = 0x1C89A8u;
label_1c89a8:
    // 0x1c89a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c89ac:
    // 0x1c89ac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c89acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c89b0:
    // 0x1c89b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c89b4:
    // 0x1c89b4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c89b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c89b8:
    // 0x1c89b8: 0x10000173  b           . + 4 + (0x173 << 2)
label_1c89bc:
    if (ctx->pc == 0x1C89BCu) {
        ctx->pc = 0x1C89C0u;
        goto label_1c89c0;
    }
    ctx->pc = 0x1C89B8u;
    {
        const bool branch_taken_0x1c89b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c89b8) {
            ctx->pc = 0x1C8F88u;
            goto label_1c8f88;
        }
    }
    ctx->pc = 0x1C89C0u;
label_1c89c0:
    // 0x1c89c0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1c89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c89c4:
    // 0x1c89c4: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1c89c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c89c8:
    // 0x1c89c8: 0xc0455e6  jal         func_115798
label_1c89cc:
    if (ctx->pc == 0x1C89CCu) {
        ctx->pc = 0x1C89D0u;
        goto label_1c89d0;
    }
    ctx->pc = 0x1C89C8u;
    SET_GPR_U32(ctx, 31, 0x1C89D0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1C89C8u, 0x1C89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89D0u;
label_1c89d0:
    // 0x1c89d0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c89d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1c89d4:
    // 0x1c89d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c89d8:
    // 0x1c89d8: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x1c89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_1c89dc:
    // 0x1c89dc: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1c89dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_1c89e0:
    // 0x1c89e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c89e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c89e4:
    // 0x1c89e4: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1c89e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c89e8:
    // 0x1c89e8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1c89e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c89ec:
    // 0x1c89ec: 0xc058f50  jal         func_163D40
label_1c89f0:
    if (ctx->pc == 0x1C89F0u) {
        ctx->pc = 0x1C89F4u;
        goto label_1c89f4;
    }
    ctx->pc = 0x1C89ECu;
    SET_GPR_U32(ctx, 31, 0x1C89F4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C89ECu, 0x1C89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89F4u;
label_1c89f4:
    // 0x1c89f4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c89f8:
    // 0x1c89f8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c89f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1c89fc:
    // 0x1c89fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c8a00:
    if (ctx->pc == 0x1C8A00u) {
        ctx->pc = 0x1C8A04u;
        goto label_1c8a04;
    }
    ctx->pc = 0x1C89FCu;
    {
        const bool branch_taken_0x1c89fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c89fc) {
            ctx->pc = 0x1C8A0Cu;
            goto label_1c8a0c;
        }
    }
    ctx->pc = 0x1C8A04u;
label_1c8a04:
    // 0x1c8a04: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a08:
    // 0x1c8a08: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1c8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1c8a0c:
    // 0x1c8a0c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a10:
    // 0x1c8a10: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c8a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c8a14:
    // 0x1c8a14: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1c8a18:
    // 0x1c8a18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c8a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c8a1c:
    // 0x1c8a1c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1c8a20:
    if (ctx->pc == 0x1C8A20u) {
        ctx->pc = 0x1C8A24u;
        goto label_1c8a24;
    }
    ctx->pc = 0x1C8A1Cu;
    {
        const bool branch_taken_0x1c8a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a1c) {
            ctx->pc = 0x1C8A3Cu;
            goto label_1c8a3c;
        }
    }
    ctx->pc = 0x1C8A24u;
label_1c8a24:
    // 0x1c8a24: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a28:
    // 0x1c8a28: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c8a2c:
    // 0x1c8a2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c8a30:
    // 0x1c8a30: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c8a30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c8a34:
    // 0x1c8a34: 0x10000154  b           . + 4 + (0x154 << 2)
label_1c8a38:
    if (ctx->pc == 0x1C8A38u) {
        ctx->pc = 0x1C8A3Cu;
        goto label_1c8a3c;
    }
    ctx->pc = 0x1C8A34u;
    {
        const bool branch_taken_0x1c8a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a34) {
            ctx->pc = 0x1C8F88u;
            goto label_1c8f88;
        }
    }
    ctx->pc = 0x1C8A3Cu;
label_1c8a3c:
    // 0x1c8a3c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a40:
    // 0x1c8a40: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1c8a40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c8a44:
    // 0x1c8a44: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1c8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1c8a48:
    // 0x1c8a48: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1c8a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1c8a4c:
    // 0x1c8a4c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1c8a50:
    if (ctx->pc == 0x1C8A50u) {
        ctx->pc = 0x1C8A54u;
        goto label_1c8a54;
    }
    ctx->pc = 0x1C8A4Cu;
    {
        const bool branch_taken_0x1c8a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a4c) {
            ctx->pc = 0x1C8A98u;
            goto label_1c8a98;
        }
    }
    ctx->pc = 0x1C8A54u;
label_1c8a54:
    // 0x1c8a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8a58:
    // 0x1c8a58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a5c:
    // 0x1c8a5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c8a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c8a60:
    // 0x1c8a60: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1c8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c8a64:
    // 0x1c8a64: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a68:
    // 0x1c8a68: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c8a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1c8a6c:
    // 0x1c8a6c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a70:
    // 0x1c8a70: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c8a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c8a74:
    // 0x1c8a74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a78:
    // 0x1c8a78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c8a7c:
    // 0x1c8a7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a80:
    // 0x1c8a80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c8a84:
    // 0x1c8a84: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c8a88:
    // 0x1c8a88: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8a8c:
    // 0x1c8a8c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c8a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c8a90:
    // 0x1c8a90: 0x10000104  b           . + 4 + (0x104 << 2)
label_1c8a94:
    if (ctx->pc == 0x1C8A94u) {
        ctx->pc = 0x1C8A98u;
        goto label_1c8a98;
    }
    ctx->pc = 0x1C8A90u;
    {
        const bool branch_taken_0x1c8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a90) {
            ctx->pc = 0x1C8EA4u;
            goto label_1c8ea4;
        }
    }
    ctx->pc = 0x1C8A98u;
label_1c8a98:
    // 0x1c8a98: 0xc057e44  jal         func_15F910
label_1c8a9c:
    if (ctx->pc == 0x1C8A9Cu) {
        ctx->pc = 0x1C8AA0u;
        goto label_1c8aa0;
    }
    ctx->pc = 0x1C8A98u;
    SET_GPR_U32(ctx, 31, 0x1C8AA0u);
    ctx->pc = 0x15F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F910u, 0x1C8A98u, 0x1C8AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AA0u;
label_1c8aa0:
    // 0x1c8aa0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8aa0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8aa4:
    // 0x1c8aa4: 0x14600138  bnez        $v1, . + 4 + (0x138 << 2)
label_1c8aa8:
    if (ctx->pc == 0x1C8AA8u) {
        ctx->pc = 0x1C8AACu;
        goto label_1c8aac;
    }
    ctx->pc = 0x1C8AA4u;
    {
        const bool branch_taken_0x1c8aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8aa4) {
            ctx->pc = 0x1C8F88u;
            goto label_1c8f88;
        }
    }
    ctx->pc = 0x1C8AACu;
label_1c8aac:
    // 0x1c8aac: 0x100000fd  b           . + 4 + (0xFD << 2)
label_1c8ab0:
    if (ctx->pc == 0x1C8AB0u) {
        ctx->pc = 0x1C8AB4u;
        goto label_1c8ab4;
    }
    ctx->pc = 0x1C8AACu;
    {
        const bool branch_taken_0x1c8aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8aac) {
            ctx->pc = 0x1C8EA4u;
            goto label_1c8ea4;
        }
    }
    ctx->pc = 0x1C8AB4u;
label_1c8ab4:
    // 0x1c8ab4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8ab8:
    // 0x1c8ab8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8abc:
    // 0x1c8abc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c8ac0:
    // 0x1c8ac0: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x1c8ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_1c8ac4:
    // 0x1c8ac4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8ac8:
    // 0x1c8ac8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c8ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c8acc:
    // 0x1c8acc: 0xc0965d0  jal         func_259740
label_1c8ad0:
    if (ctx->pc == 0x1C8AD0u) {
        ctx->pc = 0x1C8AD4u;
        goto label_1c8ad4;
    }
    ctx->pc = 0x1C8ACCu;
    SET_GPR_U32(ctx, 31, 0x1C8AD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C8ACCu, 0x1C8AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AD4u;
label_1c8ad4:
    // 0x1c8ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8ad8:
    // 0x1c8ad8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8adc:
    // 0x1c8adc: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1c8adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1c8ae0:
    // 0x1c8ae0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8ae4:
    // 0x1c8ae4: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x1c8ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
label_1c8ae8:
    // 0x1c8ae8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8aec:
    // 0x1c8aec: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1c8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
label_1c8af0:
    // 0x1c8af0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c8af4:
    // 0x1c8af4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8af8:
    // 0x1c8af8: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x1c8af8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
label_1c8afc:
    // 0x1c8afc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c8afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1c8b00:
    // 0x1c8b00: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8b04:
    // 0x1c8b04: 0xa0441577  sb          $a0, 0x1577($v0)
    ctx->pc = 0x1c8b04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 4));
label_1c8b08:
    // 0x1c8b08: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1c8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_1c8b0c:
    // 0x1c8b0c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c8b0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1c8b10:
    // 0x1c8b10: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x1c8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
label_1c8b14:
    // 0x1c8b14: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1c8b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1c8b18:
    // 0x1c8b18: 0xc0684d8  jal         func_1A1360
label_1c8b1c:
    if (ctx->pc == 0x1C8B1Cu) {
        ctx->pc = 0x1C8B20u;
        goto label_1c8b20;
    }
    ctx->pc = 0x1C8B18u;
    SET_GPR_U32(ctx, 31, 0x1C8B20u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1C8B18u, 0x1C8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B20u;
label_1c8b20:
    // 0x1c8b20: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1c8b20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8b24:
    // 0x1c8b24: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1c8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_1c8b28:
    // 0x1c8b28: 0x3448ff80  ori         $t0, $v0, 0xFF80
    ctx->pc = 0x1c8b28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_1c8b2c:
    // 0x1c8b2c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1c8b2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1c8b30:
    // 0x1c8b30: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1c8b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
label_1c8b34:
    // 0x1c8b34: 0xc0684d8  jal         func_1A1360
label_1c8b38:
    if (ctx->pc == 0x1C8B38u) {
        ctx->pc = 0x1C8B3Cu;
        goto label_1c8b3c;
    }
    ctx->pc = 0x1C8B34u;
    SET_GPR_U32(ctx, 31, 0x1C8B3Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1C8B34u, 0x1C8B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B3Cu;
label_1c8b3c:
    // 0x1c8b3c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8b40:
    // 0x1c8b40: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1c8b40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1c8b44:
    // 0x1c8b44: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1c8b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1c8b48:
    // 0x1c8b48: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x1c8b48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
label_1c8b4c:
    // 0x1c8b4c: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x1c8b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8b50:
    // 0x1c8b50: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1c8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1c8b54:
    // 0x1c8b54: 0x3c048040  lui         $a0, 0x8040
    ctx->pc = 0x1c8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32832 << 16));
label_1c8b58:
    // 0x1c8b58: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c8b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1c8b5c:
    // 0x1c8b5c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1c8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_1c8b60:
    // 0x1c8b60: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1c8b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1c8b64:
    // 0x1c8b64: 0x30a60040  andi        $a2, $a1, 0x40
    ctx->pc = 0x1c8b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_1c8b68:
    // 0x1c8b68: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1c8b6c:
    if (ctx->pc == 0x1C8B6Cu) {
        ctx->pc = 0x1C8B70u;
        goto label_1c8b70;
    }
    ctx->pc = 0x1C8B68u;
    {
        const bool branch_taken_0x1c8b68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b68) {
            ctx->pc = 0x1C8B7Cu;
            goto label_1c8b7c;
        }
    }
    ctx->pc = 0x1C8B70u;
label_1c8b70:
    // 0x1c8b70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8b74:
    // 0x1c8b74: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x1c8b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8b78:
    // 0x1c8b78: 0xad071b64  sw          $a3, 0x1B64($t0)
    ctx->pc = 0x1c8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7012), GPR_U32(ctx, 7));
label_1c8b7c:
    // 0x1c8b7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8b80:
    // 0x1c8b80: 0x904309db  lbu         $v1, 0x9DB($v0)
    ctx->pc = 0x1c8b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1c8b84:
    // 0x1c8b84: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1c8b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c8b88:
    // 0x1c8b88: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c8b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1c8b8c:
    // 0x1c8b8c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1c8b90:
    if (ctx->pc == 0x1C8B90u) {
        ctx->pc = 0x1C8B94u;
        goto label_1c8b94;
    }
    ctx->pc = 0x1C8B8Cu;
    {
        const bool branch_taken_0x1c8b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b8c) {
            ctx->pc = 0x1C8BD8u;
            goto label_1c8bd8;
        }
    }
    ctx->pc = 0x1C8B94u;
label_1c8b94:
    // 0x1c8b94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8b98:
    // 0x1c8b98: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c8b9c:
    // 0x1c8b9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1c8ba0:
    // 0x1c8ba0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1c8ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c8ba4:
    // 0x1c8ba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8ba8:
    // 0x1c8ba8: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1c8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_1c8bac:
    // 0x1c8bac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c8bb0:
    // 0x1c8bb0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8bb4:
    // 0x1c8bb4: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1c8bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
label_1c8bb8:
    // 0x1c8bb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8bbc:
    // 0x1c8bbc: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1c8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c8bc0:
    // 0x1c8bc0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1c8bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1c8bc4:
    // 0x1c8bc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c8bc8:
    if (ctx->pc == 0x1C8BC8u) {
        ctx->pc = 0x1C8BCCu;
        goto label_1c8bcc;
    }
    ctx->pc = 0x1C8BC4u;
    {
        const bool branch_taken_0x1c8bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8bc4) {
            ctx->pc = 0x1C8BD8u;
            goto label_1c8bd8;
        }
    }
    ctx->pc = 0x1C8BCCu;
label_1c8bcc:
    // 0x1c8bcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c8bd0:
    // 0x1c8bd0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8bd4:
    // 0x1c8bd4: 0xa04313a7  sb          $v1, 0x13A7($v0)
    ctx->pc = 0x1c8bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5031), (uint8_t)GPR_U32(ctx, 3));
label_1c8bd8:
    // 0x1c8bd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8bdc:
    // 0x1c8bdc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c8bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1c8be0:
    // 0x1c8be0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c8be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c8be4:
    // 0x1c8be4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c8be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1c8be8:
    // 0x1c8be8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1c8bec:
    if (ctx->pc == 0x1C8BECu) {
        ctx->pc = 0x1C8BF0u;
        goto label_1c8bf0;
    }
    ctx->pc = 0x1C8BE8u;
    {
        const bool branch_taken_0x1c8be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8be8) {
            ctx->pc = 0x1C8C68u;
            goto label_1c8c68;
        }
    }
    ctx->pc = 0x1C8BF0u;
label_1c8bf0:
    // 0x1c8bf0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1c8bf4:
    // 0x1c8bf4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c8bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c8bf8:
    // 0x1c8bf8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8bfc:
    // 0x1c8bfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8bfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8c00:
    // 0x1c8c00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c8c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8c04:
    // 0x1c8c04: 0xc0561d4  jal         func_158750
label_1c8c08:
    if (ctx->pc == 0x1C8C08u) {
        ctx->pc = 0x1C8C0Cu;
        goto label_1c8c0c;
    }
    ctx->pc = 0x1C8C04u;
    SET_GPR_U32(ctx, 31, 0x1C8C0Cu);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1C8C04u, 0x1C8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C0Cu;
label_1c8c0c:
    // 0x1c8c0c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c10:
    // 0x1c8c10: 0x8c851b6c  lw          $a1, 0x1B6C($a0)
    ctx->pc = 0x1c8c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
label_1c8c14:
    // 0x1c8c14: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
label_1c8c18:
    if (ctx->pc == 0x1C8C18u) {
        ctx->pc = 0x1C8C1Cu;
        goto label_1c8c1c;
    }
    ctx->pc = 0x1C8C14u;
    {
        const bool branch_taken_0x1c8c14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c14) {
            ctx->pc = 0x1C8C68u;
            goto label_1c8c68;
        }
    }
    ctx->pc = 0x1C8C1Cu;
label_1c8c1c:
    // 0x1c8c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8c20:
    // 0x1c8c20: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c24:
    // 0x1c8c24: 0xaca21b6c  sw          $v0, 0x1B6C($a1)
    ctx->pc = 0x1c8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7020), GPR_U32(ctx, 2));
label_1c8c28:
    // 0x1c8c28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c2c:
    // 0x1c8c2c: 0x848215ec  lh          $v0, 0x15EC($a0)
    ctx->pc = 0x1c8c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
label_1c8c30:
    // 0x1c8c30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c8c34:
    if (ctx->pc == 0x1C8C34u) {
        ctx->pc = 0x1C8C38u;
        goto label_1c8c38;
    }
    ctx->pc = 0x1C8C30u;
    {
        const bool branch_taken_0x1c8c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c30) {
            ctx->pc = 0x1C8C68u;
            goto label_1c8c68;
        }
    }
    ctx->pc = 0x1C8C38u;
label_1c8c38:
    // 0x1c8c38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c3c:
    // 0x1c8c3c: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1c8c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c8c40:
    // 0x1c8c40: 0x2444fda8  addiu       $a0, $v0, -0x258
    ctx->pc = 0x1c8c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966696));
label_1c8c44:
    // 0x1c8c44: 0xa46415ec  sh          $a0, 0x15EC($v1)
    ctx->pc = 0x1c8c44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 4));
label_1c8c48:
    // 0x1c8c48: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c4c:
    // 0x1c8c4c: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1c8c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c8c50:
    // 0x1c8c50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c8c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1c8c54:
    // 0x1c8c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c8c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c8c58:
    // 0x1c8c58: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1c8c5c:
    if (ctx->pc == 0x1C8C5Cu) {
        ctx->pc = 0x1C8C60u;
        goto label_1c8c60;
    }
    ctx->pc = 0x1C8C58u;
    {
        const bool branch_taken_0x1c8c58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c8c58) {
            ctx->pc = 0x1C8C68u;
            goto label_1c8c68;
        }
    }
    ctx->pc = 0x1C8C60u;
label_1c8c60:
    // 0x1c8c60: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c64:
    // 0x1c8c64: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1c8c64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1c8c68:
    // 0x1c8c68: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c6c:
    // 0x1c8c6c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c8c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1c8c70:
    // 0x1c8c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c8c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c8c74:
    // 0x1c8c74: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c8c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1c8c78:
    // 0x1c8c78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c8c7c:
    if (ctx->pc == 0x1C8C7Cu) {
        ctx->pc = 0x1C8C80u;
        goto label_1c8c80;
    }
    ctx->pc = 0x1C8C78u;
    {
        const bool branch_taken_0x1c8c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c78) {
            ctx->pc = 0x1C8C88u;
            goto label_1c8c88;
        }
    }
    ctx->pc = 0x1C8C80u;
label_1c8c80:
    // 0x1c8c80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c84:
    // 0x1c8c84: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1c8c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1c8c88:
    // 0x1c8c88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c8c:
    // 0x1c8c8c: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x1c8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1c8c90:
    // 0x1c8c90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c8c94:
    if (ctx->pc == 0x1C8C94u) {
        ctx->pc = 0x1C8C98u;
        goto label_1c8c98;
    }
    ctx->pc = 0x1C8C90u;
    {
        const bool branch_taken_0x1c8c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c90) {
            ctx->pc = 0x1C8CCCu;
            goto label_1c8ccc;
        }
    }
    ctx->pc = 0x1C8C98u;
label_1c8c98:
    // 0x1c8c98: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8c9c:
    // 0x1c8c9c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c8ca0:
    // 0x1c8ca0: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
label_1c8ca4:
    // 0x1c8ca4: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1c8ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c8ca8:
    // 0x1c8ca8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1c8cac:
    // 0x1c8cac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8cb0:
    // 0x1c8cb0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c8cb4:
    // 0x1c8cb4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1c8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_1c8cb8:
    // 0x1c8cb8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1c8cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c8cbc:
    // 0x1c8cbc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1c8cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c8cc0:
    // 0x1c8cc0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1c8cc4:
    // 0x1c8cc4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c8cc8:
    if (ctx->pc == 0x1C8CC8u) {
        ctx->pc = 0x1C8CCCu;
        goto label_1c8ccc;
    }
    ctx->pc = 0x1C8CC4u;
    {
        const bool branch_taken_0x1c8cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8cc4) {
            ctx->pc = 0x1C8CE4u;
            goto label_1c8ce4;
        }
    }
    ctx->pc = 0x1C8CCCu;
label_1c8ccc:
    // 0x1c8ccc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8cd0:
    // 0x1c8cd0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c8cd4:
    // 0x1c8cd4: 0x3c027fbf  lui         $v0, 0x7FBF
    ctx->pc = 0x1c8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32703 << 16));
label_1c8cd8:
    // 0x1c8cd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c8cdc:
    // 0x1c8cdc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c8cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1c8ce0:
    // 0x1c8ce0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c8ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1c8ce4:
    // 0x1c8ce4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8ce8:
    // 0x1c8ce8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8ce8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8cec:
    // 0x1c8cec: 0xc096b40  jal         func_25AD00
label_1c8cf0:
    if (ctx->pc == 0x1C8CF0u) {
        ctx->pc = 0x1C8CF4u;
        goto label_1c8cf4;
    }
    ctx->pc = 0x1C8CECu;
    SET_GPR_U32(ctx, 31, 0x1C8CF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C8CECu, 0x1C8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CF4u;
label_1c8cf4:
    // 0x1c8cf4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8cf8:
    // 0x1c8cf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c8cf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8cfc:
    // 0x1c8cfc: 0xc05cd10  jal         func_173440
label_1c8d00:
    if (ctx->pc == 0x1C8D00u) {
        ctx->pc = 0x1C8D04u;
        goto label_1c8d04;
    }
    ctx->pc = 0x1C8CFCu;
    SET_GPR_U32(ctx, 31, 0x1C8D04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C8CFCu, 0x1C8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D04u;
label_1c8d04:
    // 0x1c8d04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8d04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8d08:
    // 0x1c8d08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c8d0c:
    // 0x1c8d0c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8d10:
    // 0x1c8d10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8d14:
    // 0x1c8d14: 0xc0573d8  jal         func_15CF60
label_1c8d18:
    if (ctx->pc == 0x1C8D18u) {
        ctx->pc = 0x1C8D1Cu;
        goto label_1c8d1c;
    }
    ctx->pc = 0x1C8D14u;
    SET_GPR_U32(ctx, 31, 0x1C8D1Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C8D14u, 0x1C8D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D1Cu;
label_1c8d1c:
    // 0x1c8d1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c8d1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8d20:
    // 0x1c8d20: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8d24:
    // 0x1c8d24: 0xc097530  jal         func_25D4C0
label_1c8d28:
    if (ctx->pc == 0x1C8D28u) {
        ctx->pc = 0x1C8D2Cu;
        goto label_1c8d2c;
    }
    ctx->pc = 0x1C8D24u;
    SET_GPR_U32(ctx, 31, 0x1C8D2Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C8D24u, 0x1C8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D2Cu;
label_1c8d2c:
    // 0x1c8d2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8d2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8d30:
    // 0x1c8d30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8d34:
    // 0x1c8d34: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c8d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c8d38:
    // 0x1c8d38: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1c8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1c8d3c:
    // 0x1c8d3c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1c8d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c8d40:
    // 0x1c8d40: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_1c8d44:
    if (ctx->pc == 0x1C8D44u) {
        ctx->pc = 0x1C8D48u;
        goto label_1c8d48;
    }
    ctx->pc = 0x1C8D40u;
    {
        const bool branch_taken_0x1c8d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d40) {
            ctx->pc = 0x1C8D8Cu;
            goto label_1c8d8c;
        }
    }
    ctx->pc = 0x1C8D48u;
label_1c8d48:
    // 0x1c8d48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c8d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8d4c:
    // 0x1c8d4c: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c8d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8d50:
    // 0x1c8d50: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x1c8d50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
label_1c8d54:
    // 0x1c8d54: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x1c8d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c8d58:
    // 0x1c8d58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8d5c:
    // 0x1c8d5c: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x1c8d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
label_1c8d60:
    // 0x1c8d60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8d64:
    // 0x1c8d64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c8d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c8d68:
    // 0x1c8d68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8d6c:
    // 0x1c8d6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c8d70:
    // 0x1c8d70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8d74:
    // 0x1c8d74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c8d78:
    // 0x1c8d78: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1c8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c8d7c:
    // 0x1c8d7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8d80:
    // 0x1c8d80: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c8d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c8d84:
    // 0x1c8d84: 0x10000047  b           . + 4 + (0x47 << 2)
label_1c8d88:
    if (ctx->pc == 0x1C8D88u) {
        ctx->pc = 0x1C8D8Cu;
        goto label_1c8d8c;
    }
    ctx->pc = 0x1C8D84u;
    {
        const bool branch_taken_0x1c8d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d84) {
            ctx->pc = 0x1C8EA4u;
            goto label_1c8ea4;
        }
    }
    ctx->pc = 0x1C8D8Cu;
label_1c8d8c:
    // 0x1c8d8c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8d90:
    // 0x1c8d90: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1c8d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1c8d94:
    // 0x1c8d94: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
label_1c8d98:
    if (ctx->pc == 0x1C8D98u) {
        ctx->pc = 0x1C8D9Cu;
        goto label_1c8d9c;
    }
    ctx->pc = 0x1C8D94u;
    {
        const bool branch_taken_0x1c8d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d94) {
            ctx->pc = 0x1C8EA4u;
            goto label_1c8ea4;
        }
    }
    ctx->pc = 0x1C8D9Cu;
label_1c8d9c:
    // 0x1c8d9c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8da0:
    // 0x1c8da0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c8da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c8da4:
    // 0x1c8da4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1c8da8:
    // 0x1c8da8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c8da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c8dac:
    // 0x1c8dac: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
label_1c8db0:
    if (ctx->pc == 0x1C8DB0u) {
        ctx->pc = 0x1C8DB4u;
        goto label_1c8db4;
    }
    ctx->pc = 0x1C8DACu;
    {
        const bool branch_taken_0x1c8dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8dac) {
            ctx->pc = 0x1C8E6Cu;
            goto label_1c8e6c;
        }
    }
    ctx->pc = 0x1C8DB4u;
label_1c8db4:
    // 0x1c8db4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8db8:
    // 0x1c8db8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8dbc:
    // 0x1c8dbc: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1c8dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_1c8dc0:
    // 0x1c8dc0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8dc4:
    // 0x1c8dc4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c8dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8dc8:
    // 0x1c8dc8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8dcc:
    // 0x1c8dcc: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c8dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
label_1c8dd0:
    // 0x1c8dd0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8dd4:
    // 0x1c8dd4: 0xc4801568  lwc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c8dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8dd8:
    // 0x1c8dd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8ddc:
    // 0x1c8ddc: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c8ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c8de0:
    // 0x1c8de0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8de4:
    // 0x1c8de4: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c8de4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1c8de8:
    // 0x1c8de8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8dec:
    // 0x1c8dec: 0x8ca313e8  lw          $v1, 0x13E8($a1)
    ctx->pc = 0x1c8decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
label_1c8df0:
    // 0x1c8df0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c8df4:
    if (ctx->pc == 0x1C8DF4u) {
        ctx->pc = 0x1C8DF8u;
        goto label_1c8df8;
    }
    ctx->pc = 0x1C8DF0u;
    {
        const bool branch_taken_0x1c8df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8df0) {
            ctx->pc = 0x1C8E04u;
            goto label_1c8e04;
        }
    }
    ctx->pc = 0x1C8DF8u;
label_1c8df8:
    // 0x1c8df8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8dfc:
    // 0x1c8dfc: 0xc0571d0  jal         func_15C740
label_1c8e00:
    if (ctx->pc == 0x1C8E00u) {
        ctx->pc = 0x1C8E04u;
        goto label_1c8e04;
    }
    ctx->pc = 0x1C8DFCu;
    SET_GPR_U32(ctx, 31, 0x1C8E04u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C8DFCu, 0x1C8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E04u;
label_1c8e04:
    // 0x1c8e04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8e08:
    // 0x1c8e08: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e0c:
    // 0x1c8e0c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c8e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c8e10:
    // 0x1c8e10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c8e14:
    // 0x1c8e14: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e18:
    // 0x1c8e18: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1c8e18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c8e1c:
    // 0x1c8e1c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e20:
    // 0x1c8e20: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c8e20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c8e24:
    // 0x1c8e24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e28:
    // 0x1c8e28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c8e2c:
    // 0x1c8e2c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e30:
    // 0x1c8e30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c8e34:
    // 0x1c8e34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8e38:
    // 0x1c8e38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e3c:
    // 0x1c8e3c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c8e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c8e40:
    // 0x1c8e40: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e44:
    // 0x1c8e44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8e44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c8e48:
    // 0x1c8e48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c8e4c:
    // 0x1c8e4c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e50:
    // 0x1c8e50: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1c8e50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1c8e54:
    // 0x1c8e54: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e58:
    // 0x1c8e58: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1c8e58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1c8e5c:
    // 0x1c8e5c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e60:
    // 0x1c8e60: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1c8e60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1c8e64:
    // 0x1c8e64: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c8e68:
    if (ctx->pc == 0x1C8E68u) {
        ctx->pc = 0x1C8E6Cu;
        goto label_1c8e6c;
    }
    ctx->pc = 0x1C8E64u;
    {
        const bool branch_taken_0x1c8e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e64) {
            ctx->pc = 0x1C8E9Cu;
            goto label_1c8e9c;
        }
    }
    ctx->pc = 0x1C8E6Cu;
label_1c8e6c:
    // 0x1c8e6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8e70:
    // 0x1c8e70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e74:
    // 0x1c8e74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c8e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c8e78:
    // 0x1c8e78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e7c:
    // 0x1c8e7c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1c8e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c8e80:
    // 0x1c8e80: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e84:
    // 0x1c8e84: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1c8e84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c8e88:
    // 0x1c8e88: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e8c:
    // 0x1c8e8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c8e90:
    // 0x1c8e90: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c8e94:
    // 0x1c8e94: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8e98:
    // 0x1c8e98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c8e9c:
    // 0x1c8e9c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1c8ea0:
    if (ctx->pc == 0x1C8EA0u) {
        ctx->pc = 0x1C8EA4u;
        goto label_1c8ea4;
    }
    ctx->pc = 0x1C8E9Cu;
    {
        const bool branch_taken_0x1c8e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e9c) {
            ctx->pc = 0x1C8F88u;
            goto label_1c8f88;
        }
    }
    ctx->pc = 0x1C8EA4u;
label_1c8ea4:
    // 0x1c8ea4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8ea8:
    // 0x1c8ea8: 0x8c24013c  lw          $a0, 0x13C($at)
    ctx->pc = 0x1c8ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_1c8eac:
    // 0x1c8eac: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x1c8eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_1c8eb0:
    // 0x1c8eb0: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_1c8eb4:
    if (ctx->pc == 0x1C8EB4u) {
        ctx->pc = 0x1C8EB8u;
        goto label_1c8eb8;
    }
    ctx->pc = 0x1C8EB0u;
    {
        const bool branch_taken_0x1c8eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8eb0) {
            ctx->pc = 0x1C8F88u;
            goto label_1c8f88;
        }
    }
    ctx->pc = 0x1C8EB8u;
label_1c8eb8:
    // 0x1c8eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8ebc:
    // 0x1c8ebc: 0x0  nop
    ctx->pc = 0x1c8ebcu;
    // NOP
label_1c8ec0:
    // 0x1c8ec0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c8ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c8ec4:
    // 0x1c8ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8ec8:
    // 0x1c8ec8: 0x0  nop
    ctx->pc = 0x1c8ec8u;
    // NOP
label_1c8ecc:
    // 0x1c8ecc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c8eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c8ed0:
    // 0x1c8ed0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1c8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1c8ed4:
    // 0x1c8ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8ed8:
    // 0x1c8ed8: 0x0  nop
    ctx->pc = 0x1c8ed8u;
    // NOP
label_1c8edc:
    // 0x1c8edc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c8edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c8ee0:
    // 0x1c8ee0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c8ee4:
    // 0x1c8ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8ee8:
    // 0x1c8ee8: 0x0  nop
    ctx->pc = 0x1c8ee8u;
    // NOP
label_1c8eec:
    // 0x1c8eec: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1c8eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1c8ef0:
    // 0x1c8ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8ef4:
    // 0x1c8ef4: 0x0  nop
    ctx->pc = 0x1c8ef4u;
    // NOP
label_1c8ef8:
    // 0x1c8ef8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c8ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c8efc:
    // 0x1c8efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8f00:
    // 0x1c8f00: 0x0  nop
    ctx->pc = 0x1c8f00u;
    // NOP
label_1c8f04:
    // 0x1c8f04: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c8f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1c8f08:
    // 0x1c8f08: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x1c8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_1c8f0c:
    // 0x1c8f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8f10:
    // 0x1c8f10: 0x0  nop
    ctx->pc = 0x1c8f10u;
    // NOP
label_1c8f14:
    // 0x1c8f14: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1c8f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1c8f18:
    // 0x1c8f18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c8f1c:
    // 0x1c8f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8f20:
    // 0x1c8f20: 0x0  nop
    ctx->pc = 0x1c8f20u;
    // NOP
label_1c8f24:
    // 0x1c8f24: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1c8f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1c8f28:
    // 0x1c8f28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c8f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c8f2c:
    // 0x1c8f2c: 0xc0675a4  jal         func_19D690
label_1c8f30:
    if (ctx->pc == 0x1C8F30u) {
        ctx->pc = 0x1C8F34u;
        goto label_1c8f34;
    }
    ctx->pc = 0x1C8F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F34u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1C8F2Cu, 0x1C8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F34u;
label_1c8f34:
    // 0x1c8f34: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1c8f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1c8f38:
    // 0x1c8f38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1c8f3c:
    // 0x1c8f3c: 0x24469240  addiu       $a2, $v0, -0x6DC0
    ctx->pc = 0x1c8f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
label_1c8f40:
    // 0x1c8f40: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x1c8f40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_1c8f44:
    // 0x1c8f44: 0x24e29240  addiu       $v0, $a3, -0x6DC0
    ctx->pc = 0x1c8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939200));
label_1c8f48:
    // 0x1c8f48: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1c8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1c8f4c:
    // 0x1c8f4c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c8f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c8f50:
    // 0x1c8f50: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1c8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1c8f54:
    // 0x1c8f54: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1c8f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c8f58:
    // 0x1c8f58: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1c8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1c8f5c:
    // 0x1c8f5c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1c8f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c8f60:
    // 0x1c8f60: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1c8f60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1c8f64:
    // 0x1c8f64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8f64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8f68:
    // 0x1c8f68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c8f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c8f6c:
    // 0x1c8f6c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1c8f6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c8f70:
    // 0x1c8f70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1c8f70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8f74:
    // 0x1c8f74: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1c8f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c8f78:
    // 0x1c8f78: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x1c8f78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c8f7c:
    // 0x1c8f7c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1c8f7cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8f80:
    // 0x1c8f80: 0xc0bbdc4  jal         func_2EF710
label_1c8f84:
    if (ctx->pc == 0x1C8F84u) {
        ctx->pc = 0x1C8F88u;
        goto label_1c8f88;
    }
    ctx->pc = 0x1C8F80u;
    SET_GPR_U32(ctx, 31, 0x1C8F88u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x1C8F80u, 0x1C8F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F88u;
label_1c8f88:
    // 0x1c8f88: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1c8f88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8f8c:
    // 0x1c8f8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8f90:
    // 0x1c8f90: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1c8f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c8f94:
    // 0x1c8f94: 0x3e00008  jr          $ra
label_1c8f98:
    if (ctx->pc == 0x1C8F98u) {
        ctx->pc = 0x1C8F9Cu;
        goto label_fallthrough_0x1c8f94;
    }
    ctx->pc = 0x1C8F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c8f94:
    ctx->pc = 0x1C8F9Cu;
}
