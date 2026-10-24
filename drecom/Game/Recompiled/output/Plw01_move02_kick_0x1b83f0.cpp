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

// Function: Plw01_move02_kick
// Address: 0x1b83f0 - 0x1b983c
void Plw01_move02_kick_0x1b83f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move02_kick_0x1b83f0");
#endif

    switch (ctx->pc) {
        case 0x1b83f0u: goto label_1b83f0;
        case 0x1b83f4u: goto label_1b83f4;
        case 0x1b83f8u: goto label_1b83f8;
        case 0x1b83fcu: goto label_1b83fc;
        case 0x1b8400u: goto label_1b8400;
        case 0x1b8404u: goto label_1b8404;
        case 0x1b8408u: goto label_1b8408;
        case 0x1b840cu: goto label_1b840c;
        case 0x1b8410u: goto label_1b8410;
        case 0x1b8414u: goto label_1b8414;
        case 0x1b8418u: goto label_1b8418;
        case 0x1b841cu: goto label_1b841c;
        case 0x1b8420u: goto label_1b8420;
        case 0x1b8424u: goto label_1b8424;
        case 0x1b8428u: goto label_1b8428;
        case 0x1b842cu: goto label_1b842c;
        case 0x1b8430u: goto label_1b8430;
        case 0x1b8434u: goto label_1b8434;
        case 0x1b8438u: goto label_1b8438;
        case 0x1b843cu: goto label_1b843c;
        case 0x1b8440u: goto label_1b8440;
        case 0x1b8444u: goto label_1b8444;
        case 0x1b8448u: goto label_1b8448;
        case 0x1b844cu: goto label_1b844c;
        case 0x1b8450u: goto label_1b8450;
        case 0x1b8454u: goto label_1b8454;
        case 0x1b8458u: goto label_1b8458;
        case 0x1b845cu: goto label_1b845c;
        case 0x1b8460u: goto label_1b8460;
        case 0x1b8464u: goto label_1b8464;
        case 0x1b8468u: goto label_1b8468;
        case 0x1b846cu: goto label_1b846c;
        case 0x1b8470u: goto label_1b8470;
        case 0x1b8474u: goto label_1b8474;
        case 0x1b8478u: goto label_1b8478;
        case 0x1b847cu: goto label_1b847c;
        case 0x1b8480u: goto label_1b8480;
        case 0x1b8484u: goto label_1b8484;
        case 0x1b8488u: goto label_1b8488;
        case 0x1b848cu: goto label_1b848c;
        case 0x1b8490u: goto label_1b8490;
        case 0x1b8494u: goto label_1b8494;
        case 0x1b8498u: goto label_1b8498;
        case 0x1b849cu: goto label_1b849c;
        case 0x1b84a0u: goto label_1b84a0;
        case 0x1b84a4u: goto label_1b84a4;
        case 0x1b84a8u: goto label_1b84a8;
        case 0x1b84acu: goto label_1b84ac;
        case 0x1b84b0u: goto label_1b84b0;
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84b8u: goto label_1b84b8;
        case 0x1b84bcu: goto label_1b84bc;
        case 0x1b84c0u: goto label_1b84c0;
        case 0x1b84c4u: goto label_1b84c4;
        case 0x1b84c8u: goto label_1b84c8;
        case 0x1b84ccu: goto label_1b84cc;
        case 0x1b84d0u: goto label_1b84d0;
        case 0x1b84d4u: goto label_1b84d4;
        case 0x1b84d8u: goto label_1b84d8;
        case 0x1b84dcu: goto label_1b84dc;
        case 0x1b84e0u: goto label_1b84e0;
        case 0x1b84e4u: goto label_1b84e4;
        case 0x1b84e8u: goto label_1b84e8;
        case 0x1b84ecu: goto label_1b84ec;
        case 0x1b84f0u: goto label_1b84f0;
        case 0x1b84f4u: goto label_1b84f4;
        case 0x1b84f8u: goto label_1b84f8;
        case 0x1b84fcu: goto label_1b84fc;
        case 0x1b8500u: goto label_1b8500;
        case 0x1b8504u: goto label_1b8504;
        case 0x1b8508u: goto label_1b8508;
        case 0x1b850cu: goto label_1b850c;
        case 0x1b8510u: goto label_1b8510;
        case 0x1b8514u: goto label_1b8514;
        case 0x1b8518u: goto label_1b8518;
        case 0x1b851cu: goto label_1b851c;
        case 0x1b8520u: goto label_1b8520;
        case 0x1b8524u: goto label_1b8524;
        case 0x1b8528u: goto label_1b8528;
        case 0x1b852cu: goto label_1b852c;
        case 0x1b8530u: goto label_1b8530;
        case 0x1b8534u: goto label_1b8534;
        case 0x1b8538u: goto label_1b8538;
        case 0x1b853cu: goto label_1b853c;
        case 0x1b8540u: goto label_1b8540;
        case 0x1b8544u: goto label_1b8544;
        case 0x1b8548u: goto label_1b8548;
        case 0x1b854cu: goto label_1b854c;
        case 0x1b8550u: goto label_1b8550;
        case 0x1b8554u: goto label_1b8554;
        case 0x1b8558u: goto label_1b8558;
        case 0x1b855cu: goto label_1b855c;
        case 0x1b8560u: goto label_1b8560;
        case 0x1b8564u: goto label_1b8564;
        case 0x1b8568u: goto label_1b8568;
        case 0x1b856cu: goto label_1b856c;
        case 0x1b8570u: goto label_1b8570;
        case 0x1b8574u: goto label_1b8574;
        case 0x1b8578u: goto label_1b8578;
        case 0x1b857cu: goto label_1b857c;
        case 0x1b8580u: goto label_1b8580;
        case 0x1b8584u: goto label_1b8584;
        case 0x1b8588u: goto label_1b8588;
        case 0x1b858cu: goto label_1b858c;
        case 0x1b8590u: goto label_1b8590;
        case 0x1b8594u: goto label_1b8594;
        case 0x1b8598u: goto label_1b8598;
        case 0x1b859cu: goto label_1b859c;
        case 0x1b85a0u: goto label_1b85a0;
        case 0x1b85a4u: goto label_1b85a4;
        case 0x1b85a8u: goto label_1b85a8;
        case 0x1b85acu: goto label_1b85ac;
        case 0x1b85b0u: goto label_1b85b0;
        case 0x1b85b4u: goto label_1b85b4;
        case 0x1b85b8u: goto label_1b85b8;
        case 0x1b85bcu: goto label_1b85bc;
        case 0x1b85c0u: goto label_1b85c0;
        case 0x1b85c4u: goto label_1b85c4;
        case 0x1b85c8u: goto label_1b85c8;
        case 0x1b85ccu: goto label_1b85cc;
        case 0x1b85d0u: goto label_1b85d0;
        case 0x1b85d4u: goto label_1b85d4;
        case 0x1b85d8u: goto label_1b85d8;
        case 0x1b85dcu: goto label_1b85dc;
        case 0x1b85e0u: goto label_1b85e0;
        case 0x1b85e4u: goto label_1b85e4;
        case 0x1b85e8u: goto label_1b85e8;
        case 0x1b85ecu: goto label_1b85ec;
        case 0x1b85f0u: goto label_1b85f0;
        case 0x1b85f4u: goto label_1b85f4;
        case 0x1b85f8u: goto label_1b85f8;
        case 0x1b85fcu: goto label_1b85fc;
        case 0x1b8600u: goto label_1b8600;
        case 0x1b8604u: goto label_1b8604;
        case 0x1b8608u: goto label_1b8608;
        case 0x1b860cu: goto label_1b860c;
        case 0x1b8610u: goto label_1b8610;
        case 0x1b8614u: goto label_1b8614;
        case 0x1b8618u: goto label_1b8618;
        case 0x1b861cu: goto label_1b861c;
        case 0x1b8620u: goto label_1b8620;
        case 0x1b8624u: goto label_1b8624;
        case 0x1b8628u: goto label_1b8628;
        case 0x1b862cu: goto label_1b862c;
        case 0x1b8630u: goto label_1b8630;
        case 0x1b8634u: goto label_1b8634;
        case 0x1b8638u: goto label_1b8638;
        case 0x1b863cu: goto label_1b863c;
        case 0x1b8640u: goto label_1b8640;
        case 0x1b8644u: goto label_1b8644;
        case 0x1b8648u: goto label_1b8648;
        case 0x1b864cu: goto label_1b864c;
        case 0x1b8650u: goto label_1b8650;
        case 0x1b8654u: goto label_1b8654;
        case 0x1b8658u: goto label_1b8658;
        case 0x1b865cu: goto label_1b865c;
        case 0x1b8660u: goto label_1b8660;
        case 0x1b8664u: goto label_1b8664;
        case 0x1b8668u: goto label_1b8668;
        case 0x1b866cu: goto label_1b866c;
        case 0x1b8670u: goto label_1b8670;
        case 0x1b8674u: goto label_1b8674;
        case 0x1b8678u: goto label_1b8678;
        case 0x1b867cu: goto label_1b867c;
        case 0x1b8680u: goto label_1b8680;
        case 0x1b8684u: goto label_1b8684;
        case 0x1b8688u: goto label_1b8688;
        case 0x1b868cu: goto label_1b868c;
        case 0x1b8690u: goto label_1b8690;
        case 0x1b8694u: goto label_1b8694;
        case 0x1b8698u: goto label_1b8698;
        case 0x1b869cu: goto label_1b869c;
        case 0x1b86a0u: goto label_1b86a0;
        case 0x1b86a4u: goto label_1b86a4;
        case 0x1b86a8u: goto label_1b86a8;
        case 0x1b86acu: goto label_1b86ac;
        case 0x1b86b0u: goto label_1b86b0;
        case 0x1b86b4u: goto label_1b86b4;
        case 0x1b86b8u: goto label_1b86b8;
        case 0x1b86bcu: goto label_1b86bc;
        case 0x1b86c0u: goto label_1b86c0;
        case 0x1b86c4u: goto label_1b86c4;
        case 0x1b86c8u: goto label_1b86c8;
        case 0x1b86ccu: goto label_1b86cc;
        case 0x1b86d0u: goto label_1b86d0;
        case 0x1b86d4u: goto label_1b86d4;
        case 0x1b86d8u: goto label_1b86d8;
        case 0x1b86dcu: goto label_1b86dc;
        case 0x1b86e0u: goto label_1b86e0;
        case 0x1b86e4u: goto label_1b86e4;
        case 0x1b86e8u: goto label_1b86e8;
        case 0x1b86ecu: goto label_1b86ec;
        case 0x1b86f0u: goto label_1b86f0;
        case 0x1b86f4u: goto label_1b86f4;
        case 0x1b86f8u: goto label_1b86f8;
        case 0x1b86fcu: goto label_1b86fc;
        case 0x1b8700u: goto label_1b8700;
        case 0x1b8704u: goto label_1b8704;
        case 0x1b8708u: goto label_1b8708;
        case 0x1b870cu: goto label_1b870c;
        case 0x1b8710u: goto label_1b8710;
        case 0x1b8714u: goto label_1b8714;
        case 0x1b8718u: goto label_1b8718;
        case 0x1b871cu: goto label_1b871c;
        case 0x1b8720u: goto label_1b8720;
        case 0x1b8724u: goto label_1b8724;
        case 0x1b8728u: goto label_1b8728;
        case 0x1b872cu: goto label_1b872c;
        case 0x1b8730u: goto label_1b8730;
        case 0x1b8734u: goto label_1b8734;
        case 0x1b8738u: goto label_1b8738;
        case 0x1b873cu: goto label_1b873c;
        case 0x1b8740u: goto label_1b8740;
        case 0x1b8744u: goto label_1b8744;
        case 0x1b8748u: goto label_1b8748;
        case 0x1b874cu: goto label_1b874c;
        case 0x1b8750u: goto label_1b8750;
        case 0x1b8754u: goto label_1b8754;
        case 0x1b8758u: goto label_1b8758;
        case 0x1b875cu: goto label_1b875c;
        case 0x1b8760u: goto label_1b8760;
        case 0x1b8764u: goto label_1b8764;
        case 0x1b8768u: goto label_1b8768;
        case 0x1b876cu: goto label_1b876c;
        case 0x1b8770u: goto label_1b8770;
        case 0x1b8774u: goto label_1b8774;
        case 0x1b8778u: goto label_1b8778;
        case 0x1b877cu: goto label_1b877c;
        case 0x1b8780u: goto label_1b8780;
        case 0x1b8784u: goto label_1b8784;
        case 0x1b8788u: goto label_1b8788;
        case 0x1b878cu: goto label_1b878c;
        case 0x1b8790u: goto label_1b8790;
        case 0x1b8794u: goto label_1b8794;
        case 0x1b8798u: goto label_1b8798;
        case 0x1b879cu: goto label_1b879c;
        case 0x1b87a0u: goto label_1b87a0;
        case 0x1b87a4u: goto label_1b87a4;
        case 0x1b87a8u: goto label_1b87a8;
        case 0x1b87acu: goto label_1b87ac;
        case 0x1b87b0u: goto label_1b87b0;
        case 0x1b87b4u: goto label_1b87b4;
        case 0x1b87b8u: goto label_1b87b8;
        case 0x1b87bcu: goto label_1b87bc;
        case 0x1b87c0u: goto label_1b87c0;
        case 0x1b87c4u: goto label_1b87c4;
        case 0x1b87c8u: goto label_1b87c8;
        case 0x1b87ccu: goto label_1b87cc;
        case 0x1b87d0u: goto label_1b87d0;
        case 0x1b87d4u: goto label_1b87d4;
        case 0x1b87d8u: goto label_1b87d8;
        case 0x1b87dcu: goto label_1b87dc;
        case 0x1b87e0u: goto label_1b87e0;
        case 0x1b87e4u: goto label_1b87e4;
        case 0x1b87e8u: goto label_1b87e8;
        case 0x1b87ecu: goto label_1b87ec;
        case 0x1b87f0u: goto label_1b87f0;
        case 0x1b87f4u: goto label_1b87f4;
        case 0x1b87f8u: goto label_1b87f8;
        case 0x1b87fcu: goto label_1b87fc;
        case 0x1b8800u: goto label_1b8800;
        case 0x1b8804u: goto label_1b8804;
        case 0x1b8808u: goto label_1b8808;
        case 0x1b880cu: goto label_1b880c;
        case 0x1b8810u: goto label_1b8810;
        case 0x1b8814u: goto label_1b8814;
        case 0x1b8818u: goto label_1b8818;
        case 0x1b881cu: goto label_1b881c;
        case 0x1b8820u: goto label_1b8820;
        case 0x1b8824u: goto label_1b8824;
        case 0x1b8828u: goto label_1b8828;
        case 0x1b882cu: goto label_1b882c;
        case 0x1b8830u: goto label_1b8830;
        case 0x1b8834u: goto label_1b8834;
        case 0x1b8838u: goto label_1b8838;
        case 0x1b883cu: goto label_1b883c;
        case 0x1b8840u: goto label_1b8840;
        case 0x1b8844u: goto label_1b8844;
        case 0x1b8848u: goto label_1b8848;
        case 0x1b884cu: goto label_1b884c;
        case 0x1b8850u: goto label_1b8850;
        case 0x1b8854u: goto label_1b8854;
        case 0x1b8858u: goto label_1b8858;
        case 0x1b885cu: goto label_1b885c;
        case 0x1b8860u: goto label_1b8860;
        case 0x1b8864u: goto label_1b8864;
        case 0x1b8868u: goto label_1b8868;
        case 0x1b886cu: goto label_1b886c;
        case 0x1b8870u: goto label_1b8870;
        case 0x1b8874u: goto label_1b8874;
        case 0x1b8878u: goto label_1b8878;
        case 0x1b887cu: goto label_1b887c;
        case 0x1b8880u: goto label_1b8880;
        case 0x1b8884u: goto label_1b8884;
        case 0x1b8888u: goto label_1b8888;
        case 0x1b888cu: goto label_1b888c;
        case 0x1b8890u: goto label_1b8890;
        case 0x1b8894u: goto label_1b8894;
        case 0x1b8898u: goto label_1b8898;
        case 0x1b889cu: goto label_1b889c;
        case 0x1b88a0u: goto label_1b88a0;
        case 0x1b88a4u: goto label_1b88a4;
        case 0x1b88a8u: goto label_1b88a8;
        case 0x1b88acu: goto label_1b88ac;
        case 0x1b88b0u: goto label_1b88b0;
        case 0x1b88b4u: goto label_1b88b4;
        case 0x1b88b8u: goto label_1b88b8;
        case 0x1b88bcu: goto label_1b88bc;
        case 0x1b88c0u: goto label_1b88c0;
        case 0x1b88c4u: goto label_1b88c4;
        case 0x1b88c8u: goto label_1b88c8;
        case 0x1b88ccu: goto label_1b88cc;
        case 0x1b88d0u: goto label_1b88d0;
        case 0x1b88d4u: goto label_1b88d4;
        case 0x1b88d8u: goto label_1b88d8;
        case 0x1b88dcu: goto label_1b88dc;
        case 0x1b88e0u: goto label_1b88e0;
        case 0x1b88e4u: goto label_1b88e4;
        case 0x1b88e8u: goto label_1b88e8;
        case 0x1b88ecu: goto label_1b88ec;
        case 0x1b88f0u: goto label_1b88f0;
        case 0x1b88f4u: goto label_1b88f4;
        case 0x1b88f8u: goto label_1b88f8;
        case 0x1b88fcu: goto label_1b88fc;
        case 0x1b8900u: goto label_1b8900;
        case 0x1b8904u: goto label_1b8904;
        case 0x1b8908u: goto label_1b8908;
        case 0x1b890cu: goto label_1b890c;
        case 0x1b8910u: goto label_1b8910;
        case 0x1b8914u: goto label_1b8914;
        case 0x1b8918u: goto label_1b8918;
        case 0x1b891cu: goto label_1b891c;
        case 0x1b8920u: goto label_1b8920;
        case 0x1b8924u: goto label_1b8924;
        case 0x1b8928u: goto label_1b8928;
        case 0x1b892cu: goto label_1b892c;
        case 0x1b8930u: goto label_1b8930;
        case 0x1b8934u: goto label_1b8934;
        case 0x1b8938u: goto label_1b8938;
        case 0x1b893cu: goto label_1b893c;
        case 0x1b8940u: goto label_1b8940;
        case 0x1b8944u: goto label_1b8944;
        case 0x1b8948u: goto label_1b8948;
        case 0x1b894cu: goto label_1b894c;
        case 0x1b8950u: goto label_1b8950;
        case 0x1b8954u: goto label_1b8954;
        case 0x1b8958u: goto label_1b8958;
        case 0x1b895cu: goto label_1b895c;
        case 0x1b8960u: goto label_1b8960;
        case 0x1b8964u: goto label_1b8964;
        case 0x1b8968u: goto label_1b8968;
        case 0x1b896cu: goto label_1b896c;
        case 0x1b8970u: goto label_1b8970;
        case 0x1b8974u: goto label_1b8974;
        case 0x1b8978u: goto label_1b8978;
        case 0x1b897cu: goto label_1b897c;
        case 0x1b8980u: goto label_1b8980;
        case 0x1b8984u: goto label_1b8984;
        case 0x1b8988u: goto label_1b8988;
        case 0x1b898cu: goto label_1b898c;
        case 0x1b8990u: goto label_1b8990;
        case 0x1b8994u: goto label_1b8994;
        case 0x1b8998u: goto label_1b8998;
        case 0x1b899cu: goto label_1b899c;
        case 0x1b89a0u: goto label_1b89a0;
        case 0x1b89a4u: goto label_1b89a4;
        case 0x1b89a8u: goto label_1b89a8;
        case 0x1b89acu: goto label_1b89ac;
        case 0x1b89b0u: goto label_1b89b0;
        case 0x1b89b4u: goto label_1b89b4;
        case 0x1b89b8u: goto label_1b89b8;
        case 0x1b89bcu: goto label_1b89bc;
        case 0x1b89c0u: goto label_1b89c0;
        case 0x1b89c4u: goto label_1b89c4;
        case 0x1b89c8u: goto label_1b89c8;
        case 0x1b89ccu: goto label_1b89cc;
        case 0x1b89d0u: goto label_1b89d0;
        case 0x1b89d4u: goto label_1b89d4;
        case 0x1b89d8u: goto label_1b89d8;
        case 0x1b89dcu: goto label_1b89dc;
        case 0x1b89e0u: goto label_1b89e0;
        case 0x1b89e4u: goto label_1b89e4;
        case 0x1b89e8u: goto label_1b89e8;
        case 0x1b89ecu: goto label_1b89ec;
        case 0x1b89f0u: goto label_1b89f0;
        case 0x1b89f4u: goto label_1b89f4;
        case 0x1b89f8u: goto label_1b89f8;
        case 0x1b89fcu: goto label_1b89fc;
        case 0x1b8a00u: goto label_1b8a00;
        case 0x1b8a04u: goto label_1b8a04;
        case 0x1b8a08u: goto label_1b8a08;
        case 0x1b8a0cu: goto label_1b8a0c;
        case 0x1b8a10u: goto label_1b8a10;
        case 0x1b8a14u: goto label_1b8a14;
        case 0x1b8a18u: goto label_1b8a18;
        case 0x1b8a1cu: goto label_1b8a1c;
        case 0x1b8a20u: goto label_1b8a20;
        case 0x1b8a24u: goto label_1b8a24;
        case 0x1b8a28u: goto label_1b8a28;
        case 0x1b8a2cu: goto label_1b8a2c;
        case 0x1b8a30u: goto label_1b8a30;
        case 0x1b8a34u: goto label_1b8a34;
        case 0x1b8a38u: goto label_1b8a38;
        case 0x1b8a3cu: goto label_1b8a3c;
        case 0x1b8a40u: goto label_1b8a40;
        case 0x1b8a44u: goto label_1b8a44;
        case 0x1b8a48u: goto label_1b8a48;
        case 0x1b8a4cu: goto label_1b8a4c;
        case 0x1b8a50u: goto label_1b8a50;
        case 0x1b8a54u: goto label_1b8a54;
        case 0x1b8a58u: goto label_1b8a58;
        case 0x1b8a5cu: goto label_1b8a5c;
        case 0x1b8a60u: goto label_1b8a60;
        case 0x1b8a64u: goto label_1b8a64;
        case 0x1b8a68u: goto label_1b8a68;
        case 0x1b8a6cu: goto label_1b8a6c;
        case 0x1b8a70u: goto label_1b8a70;
        case 0x1b8a74u: goto label_1b8a74;
        case 0x1b8a78u: goto label_1b8a78;
        case 0x1b8a7cu: goto label_1b8a7c;
        case 0x1b8a80u: goto label_1b8a80;
        case 0x1b8a84u: goto label_1b8a84;
        case 0x1b8a88u: goto label_1b8a88;
        case 0x1b8a8cu: goto label_1b8a8c;
        case 0x1b8a90u: goto label_1b8a90;
        case 0x1b8a94u: goto label_1b8a94;
        case 0x1b8a98u: goto label_1b8a98;
        case 0x1b8a9cu: goto label_1b8a9c;
        case 0x1b8aa0u: goto label_1b8aa0;
        case 0x1b8aa4u: goto label_1b8aa4;
        case 0x1b8aa8u: goto label_1b8aa8;
        case 0x1b8aacu: goto label_1b8aac;
        case 0x1b8ab0u: goto label_1b8ab0;
        case 0x1b8ab4u: goto label_1b8ab4;
        case 0x1b8ab8u: goto label_1b8ab8;
        case 0x1b8abcu: goto label_1b8abc;
        case 0x1b8ac0u: goto label_1b8ac0;
        case 0x1b8ac4u: goto label_1b8ac4;
        case 0x1b8ac8u: goto label_1b8ac8;
        case 0x1b8accu: goto label_1b8acc;
        case 0x1b8ad0u: goto label_1b8ad0;
        case 0x1b8ad4u: goto label_1b8ad4;
        case 0x1b8ad8u: goto label_1b8ad8;
        case 0x1b8adcu: goto label_1b8adc;
        case 0x1b8ae0u: goto label_1b8ae0;
        case 0x1b8ae4u: goto label_1b8ae4;
        case 0x1b8ae8u: goto label_1b8ae8;
        case 0x1b8aecu: goto label_1b8aec;
        case 0x1b8af0u: goto label_1b8af0;
        case 0x1b8af4u: goto label_1b8af4;
        case 0x1b8af8u: goto label_1b8af8;
        case 0x1b8afcu: goto label_1b8afc;
        case 0x1b8b00u: goto label_1b8b00;
        case 0x1b8b04u: goto label_1b8b04;
        case 0x1b8b08u: goto label_1b8b08;
        case 0x1b8b0cu: goto label_1b8b0c;
        case 0x1b8b10u: goto label_1b8b10;
        case 0x1b8b14u: goto label_1b8b14;
        case 0x1b8b18u: goto label_1b8b18;
        case 0x1b8b1cu: goto label_1b8b1c;
        case 0x1b8b20u: goto label_1b8b20;
        case 0x1b8b24u: goto label_1b8b24;
        case 0x1b8b28u: goto label_1b8b28;
        case 0x1b8b2cu: goto label_1b8b2c;
        case 0x1b8b30u: goto label_1b8b30;
        case 0x1b8b34u: goto label_1b8b34;
        case 0x1b8b38u: goto label_1b8b38;
        case 0x1b8b3cu: goto label_1b8b3c;
        case 0x1b8b40u: goto label_1b8b40;
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b48u: goto label_1b8b48;
        case 0x1b8b4cu: goto label_1b8b4c;
        case 0x1b8b50u: goto label_1b8b50;
        case 0x1b8b54u: goto label_1b8b54;
        case 0x1b8b58u: goto label_1b8b58;
        case 0x1b8b5cu: goto label_1b8b5c;
        case 0x1b8b60u: goto label_1b8b60;
        case 0x1b8b64u: goto label_1b8b64;
        case 0x1b8b68u: goto label_1b8b68;
        case 0x1b8b6cu: goto label_1b8b6c;
        case 0x1b8b70u: goto label_1b8b70;
        case 0x1b8b74u: goto label_1b8b74;
        case 0x1b8b78u: goto label_1b8b78;
        case 0x1b8b7cu: goto label_1b8b7c;
        case 0x1b8b80u: goto label_1b8b80;
        case 0x1b8b84u: goto label_1b8b84;
        case 0x1b8b88u: goto label_1b8b88;
        case 0x1b8b8cu: goto label_1b8b8c;
        case 0x1b8b90u: goto label_1b8b90;
        case 0x1b8b94u: goto label_1b8b94;
        case 0x1b8b98u: goto label_1b8b98;
        case 0x1b8b9cu: goto label_1b8b9c;
        case 0x1b8ba0u: goto label_1b8ba0;
        case 0x1b8ba4u: goto label_1b8ba4;
        case 0x1b8ba8u: goto label_1b8ba8;
        case 0x1b8bacu: goto label_1b8bac;
        case 0x1b8bb0u: goto label_1b8bb0;
        case 0x1b8bb4u: goto label_1b8bb4;
        case 0x1b8bb8u: goto label_1b8bb8;
        case 0x1b8bbcu: goto label_1b8bbc;
        case 0x1b8bc0u: goto label_1b8bc0;
        case 0x1b8bc4u: goto label_1b8bc4;
        case 0x1b8bc8u: goto label_1b8bc8;
        case 0x1b8bccu: goto label_1b8bcc;
        case 0x1b8bd0u: goto label_1b8bd0;
        case 0x1b8bd4u: goto label_1b8bd4;
        case 0x1b8bd8u: goto label_1b8bd8;
        case 0x1b8bdcu: goto label_1b8bdc;
        case 0x1b8be0u: goto label_1b8be0;
        case 0x1b8be4u: goto label_1b8be4;
        case 0x1b8be8u: goto label_1b8be8;
        case 0x1b8becu: goto label_1b8bec;
        case 0x1b8bf0u: goto label_1b8bf0;
        case 0x1b8bf4u: goto label_1b8bf4;
        case 0x1b8bf8u: goto label_1b8bf8;
        case 0x1b8bfcu: goto label_1b8bfc;
        case 0x1b8c00u: goto label_1b8c00;
        case 0x1b8c04u: goto label_1b8c04;
        case 0x1b8c08u: goto label_1b8c08;
        case 0x1b8c0cu: goto label_1b8c0c;
        case 0x1b8c10u: goto label_1b8c10;
        case 0x1b8c14u: goto label_1b8c14;
        case 0x1b8c18u: goto label_1b8c18;
        case 0x1b8c1cu: goto label_1b8c1c;
        case 0x1b8c20u: goto label_1b8c20;
        case 0x1b8c24u: goto label_1b8c24;
        case 0x1b8c28u: goto label_1b8c28;
        case 0x1b8c2cu: goto label_1b8c2c;
        case 0x1b8c30u: goto label_1b8c30;
        case 0x1b8c34u: goto label_1b8c34;
        case 0x1b8c38u: goto label_1b8c38;
        case 0x1b8c3cu: goto label_1b8c3c;
        case 0x1b8c40u: goto label_1b8c40;
        case 0x1b8c44u: goto label_1b8c44;
        case 0x1b8c48u: goto label_1b8c48;
        case 0x1b8c4cu: goto label_1b8c4c;
        case 0x1b8c50u: goto label_1b8c50;
        case 0x1b8c54u: goto label_1b8c54;
        case 0x1b8c58u: goto label_1b8c58;
        case 0x1b8c5cu: goto label_1b8c5c;
        case 0x1b8c60u: goto label_1b8c60;
        case 0x1b8c64u: goto label_1b8c64;
        case 0x1b8c68u: goto label_1b8c68;
        case 0x1b8c6cu: goto label_1b8c6c;
        case 0x1b8c70u: goto label_1b8c70;
        case 0x1b8c74u: goto label_1b8c74;
        case 0x1b8c78u: goto label_1b8c78;
        case 0x1b8c7cu: goto label_1b8c7c;
        case 0x1b8c80u: goto label_1b8c80;
        case 0x1b8c84u: goto label_1b8c84;
        case 0x1b8c88u: goto label_1b8c88;
        case 0x1b8c8cu: goto label_1b8c8c;
        case 0x1b8c90u: goto label_1b8c90;
        case 0x1b8c94u: goto label_1b8c94;
        case 0x1b8c98u: goto label_1b8c98;
        case 0x1b8c9cu: goto label_1b8c9c;
        case 0x1b8ca0u: goto label_1b8ca0;
        case 0x1b8ca4u: goto label_1b8ca4;
        case 0x1b8ca8u: goto label_1b8ca8;
        case 0x1b8cacu: goto label_1b8cac;
        case 0x1b8cb0u: goto label_1b8cb0;
        case 0x1b8cb4u: goto label_1b8cb4;
        case 0x1b8cb8u: goto label_1b8cb8;
        case 0x1b8cbcu: goto label_1b8cbc;
        case 0x1b8cc0u: goto label_1b8cc0;
        case 0x1b8cc4u: goto label_1b8cc4;
        case 0x1b8cc8u: goto label_1b8cc8;
        case 0x1b8cccu: goto label_1b8ccc;
        case 0x1b8cd0u: goto label_1b8cd0;
        case 0x1b8cd4u: goto label_1b8cd4;
        case 0x1b8cd8u: goto label_1b8cd8;
        case 0x1b8cdcu: goto label_1b8cdc;
        case 0x1b8ce0u: goto label_1b8ce0;
        case 0x1b8ce4u: goto label_1b8ce4;
        case 0x1b8ce8u: goto label_1b8ce8;
        case 0x1b8cecu: goto label_1b8cec;
        case 0x1b8cf0u: goto label_1b8cf0;
        case 0x1b8cf4u: goto label_1b8cf4;
        case 0x1b8cf8u: goto label_1b8cf8;
        case 0x1b8cfcu: goto label_1b8cfc;
        case 0x1b8d00u: goto label_1b8d00;
        case 0x1b8d04u: goto label_1b8d04;
        case 0x1b8d08u: goto label_1b8d08;
        case 0x1b8d0cu: goto label_1b8d0c;
        case 0x1b8d10u: goto label_1b8d10;
        case 0x1b8d14u: goto label_1b8d14;
        case 0x1b8d18u: goto label_1b8d18;
        case 0x1b8d1cu: goto label_1b8d1c;
        case 0x1b8d20u: goto label_1b8d20;
        case 0x1b8d24u: goto label_1b8d24;
        case 0x1b8d28u: goto label_1b8d28;
        case 0x1b8d2cu: goto label_1b8d2c;
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        case 0x1b8dd0u: goto label_1b8dd0;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8dd8u: goto label_1b8dd8;
        case 0x1b8ddcu: goto label_1b8ddc;
        case 0x1b8de0u: goto label_1b8de0;
        case 0x1b8de4u: goto label_1b8de4;
        case 0x1b8de8u: goto label_1b8de8;
        case 0x1b8decu: goto label_1b8dec;
        case 0x1b8df0u: goto label_1b8df0;
        case 0x1b8df4u: goto label_1b8df4;
        case 0x1b8df8u: goto label_1b8df8;
        case 0x1b8dfcu: goto label_1b8dfc;
        case 0x1b8e00u: goto label_1b8e00;
        case 0x1b8e04u: goto label_1b8e04;
        case 0x1b8e08u: goto label_1b8e08;
        case 0x1b8e0cu: goto label_1b8e0c;
        case 0x1b8e10u: goto label_1b8e10;
        case 0x1b8e14u: goto label_1b8e14;
        case 0x1b8e18u: goto label_1b8e18;
        case 0x1b8e1cu: goto label_1b8e1c;
        case 0x1b8e20u: goto label_1b8e20;
        case 0x1b8e24u: goto label_1b8e24;
        case 0x1b8e28u: goto label_1b8e28;
        case 0x1b8e2cu: goto label_1b8e2c;
        case 0x1b8e30u: goto label_1b8e30;
        case 0x1b8e34u: goto label_1b8e34;
        case 0x1b8e38u: goto label_1b8e38;
        case 0x1b8e3cu: goto label_1b8e3c;
        case 0x1b8e40u: goto label_1b8e40;
        case 0x1b8e44u: goto label_1b8e44;
        case 0x1b8e48u: goto label_1b8e48;
        case 0x1b8e4cu: goto label_1b8e4c;
        case 0x1b8e50u: goto label_1b8e50;
        case 0x1b8e54u: goto label_1b8e54;
        case 0x1b8e58u: goto label_1b8e58;
        case 0x1b8e5cu: goto label_1b8e5c;
        case 0x1b8e60u: goto label_1b8e60;
        case 0x1b8e64u: goto label_1b8e64;
        case 0x1b8e68u: goto label_1b8e68;
        case 0x1b8e6cu: goto label_1b8e6c;
        case 0x1b8e70u: goto label_1b8e70;
        case 0x1b8e74u: goto label_1b8e74;
        case 0x1b8e78u: goto label_1b8e78;
        case 0x1b8e7cu: goto label_1b8e7c;
        case 0x1b8e80u: goto label_1b8e80;
        case 0x1b8e84u: goto label_1b8e84;
        case 0x1b8e88u: goto label_1b8e88;
        case 0x1b8e8cu: goto label_1b8e8c;
        case 0x1b8e90u: goto label_1b8e90;
        case 0x1b8e94u: goto label_1b8e94;
        case 0x1b8e98u: goto label_1b8e98;
        case 0x1b8e9cu: goto label_1b8e9c;
        case 0x1b8ea0u: goto label_1b8ea0;
        case 0x1b8ea4u: goto label_1b8ea4;
        case 0x1b8ea8u: goto label_1b8ea8;
        case 0x1b8eacu: goto label_1b8eac;
        case 0x1b8eb0u: goto label_1b8eb0;
        case 0x1b8eb4u: goto label_1b8eb4;
        case 0x1b8eb8u: goto label_1b8eb8;
        case 0x1b8ebcu: goto label_1b8ebc;
        case 0x1b8ec0u: goto label_1b8ec0;
        case 0x1b8ec4u: goto label_1b8ec4;
        case 0x1b8ec8u: goto label_1b8ec8;
        case 0x1b8eccu: goto label_1b8ecc;
        case 0x1b8ed0u: goto label_1b8ed0;
        case 0x1b8ed4u: goto label_1b8ed4;
        case 0x1b8ed8u: goto label_1b8ed8;
        case 0x1b8edcu: goto label_1b8edc;
        case 0x1b8ee0u: goto label_1b8ee0;
        case 0x1b8ee4u: goto label_1b8ee4;
        case 0x1b8ee8u: goto label_1b8ee8;
        case 0x1b8eecu: goto label_1b8eec;
        case 0x1b8ef0u: goto label_1b8ef0;
        case 0x1b8ef4u: goto label_1b8ef4;
        case 0x1b8ef8u: goto label_1b8ef8;
        case 0x1b8efcu: goto label_1b8efc;
        case 0x1b8f00u: goto label_1b8f00;
        case 0x1b8f04u: goto label_1b8f04;
        case 0x1b8f08u: goto label_1b8f08;
        case 0x1b8f0cu: goto label_1b8f0c;
        case 0x1b8f10u: goto label_1b8f10;
        case 0x1b8f14u: goto label_1b8f14;
        case 0x1b8f18u: goto label_1b8f18;
        case 0x1b8f1cu: goto label_1b8f1c;
        case 0x1b8f20u: goto label_1b8f20;
        case 0x1b8f24u: goto label_1b8f24;
        case 0x1b8f28u: goto label_1b8f28;
        case 0x1b8f2cu: goto label_1b8f2c;
        case 0x1b8f30u: goto label_1b8f30;
        case 0x1b8f34u: goto label_1b8f34;
        case 0x1b8f38u: goto label_1b8f38;
        case 0x1b8f3cu: goto label_1b8f3c;
        case 0x1b8f40u: goto label_1b8f40;
        case 0x1b8f44u: goto label_1b8f44;
        case 0x1b8f48u: goto label_1b8f48;
        case 0x1b8f4cu: goto label_1b8f4c;
        case 0x1b8f50u: goto label_1b8f50;
        case 0x1b8f54u: goto label_1b8f54;
        case 0x1b8f58u: goto label_1b8f58;
        case 0x1b8f5cu: goto label_1b8f5c;
        case 0x1b8f60u: goto label_1b8f60;
        case 0x1b8f64u: goto label_1b8f64;
        case 0x1b8f68u: goto label_1b8f68;
        case 0x1b8f6cu: goto label_1b8f6c;
        case 0x1b8f70u: goto label_1b8f70;
        case 0x1b8f74u: goto label_1b8f74;
        case 0x1b8f78u: goto label_1b8f78;
        case 0x1b8f7cu: goto label_1b8f7c;
        case 0x1b8f80u: goto label_1b8f80;
        case 0x1b8f84u: goto label_1b8f84;
        case 0x1b8f88u: goto label_1b8f88;
        case 0x1b8f8cu: goto label_1b8f8c;
        case 0x1b8f90u: goto label_1b8f90;
        case 0x1b8f94u: goto label_1b8f94;
        case 0x1b8f98u: goto label_1b8f98;
        case 0x1b8f9cu: goto label_1b8f9c;
        case 0x1b8fa0u: goto label_1b8fa0;
        case 0x1b8fa4u: goto label_1b8fa4;
        case 0x1b8fa8u: goto label_1b8fa8;
        case 0x1b8facu: goto label_1b8fac;
        case 0x1b8fb0u: goto label_1b8fb0;
        case 0x1b8fb4u: goto label_1b8fb4;
        case 0x1b8fb8u: goto label_1b8fb8;
        case 0x1b8fbcu: goto label_1b8fbc;
        case 0x1b8fc0u: goto label_1b8fc0;
        case 0x1b8fc4u: goto label_1b8fc4;
        case 0x1b8fc8u: goto label_1b8fc8;
        case 0x1b8fccu: goto label_1b8fcc;
        case 0x1b8fd0u: goto label_1b8fd0;
        case 0x1b8fd4u: goto label_1b8fd4;
        case 0x1b8fd8u: goto label_1b8fd8;
        case 0x1b8fdcu: goto label_1b8fdc;
        case 0x1b8fe0u: goto label_1b8fe0;
        case 0x1b8fe4u: goto label_1b8fe4;
        case 0x1b8fe8u: goto label_1b8fe8;
        case 0x1b8fecu: goto label_1b8fec;
        case 0x1b8ff0u: goto label_1b8ff0;
        case 0x1b8ff4u: goto label_1b8ff4;
        case 0x1b8ff8u: goto label_1b8ff8;
        case 0x1b8ffcu: goto label_1b8ffc;
        case 0x1b9000u: goto label_1b9000;
        case 0x1b9004u: goto label_1b9004;
        case 0x1b9008u: goto label_1b9008;
        case 0x1b900cu: goto label_1b900c;
        case 0x1b9010u: goto label_1b9010;
        case 0x1b9014u: goto label_1b9014;
        case 0x1b9018u: goto label_1b9018;
        case 0x1b901cu: goto label_1b901c;
        case 0x1b9020u: goto label_1b9020;
        case 0x1b9024u: goto label_1b9024;
        case 0x1b9028u: goto label_1b9028;
        case 0x1b902cu: goto label_1b902c;
        case 0x1b9030u: goto label_1b9030;
        case 0x1b9034u: goto label_1b9034;
        case 0x1b9038u: goto label_1b9038;
        case 0x1b903cu: goto label_1b903c;
        case 0x1b9040u: goto label_1b9040;
        case 0x1b9044u: goto label_1b9044;
        case 0x1b9048u: goto label_1b9048;
        case 0x1b904cu: goto label_1b904c;
        case 0x1b9050u: goto label_1b9050;
        case 0x1b9054u: goto label_1b9054;
        case 0x1b9058u: goto label_1b9058;
        case 0x1b905cu: goto label_1b905c;
        case 0x1b9060u: goto label_1b9060;
        case 0x1b9064u: goto label_1b9064;
        case 0x1b9068u: goto label_1b9068;
        case 0x1b906cu: goto label_1b906c;
        case 0x1b9070u: goto label_1b9070;
        case 0x1b9074u: goto label_1b9074;
        case 0x1b9078u: goto label_1b9078;
        case 0x1b907cu: goto label_1b907c;
        case 0x1b9080u: goto label_1b9080;
        case 0x1b9084u: goto label_1b9084;
        case 0x1b9088u: goto label_1b9088;
        case 0x1b908cu: goto label_1b908c;
        case 0x1b9090u: goto label_1b9090;
        case 0x1b9094u: goto label_1b9094;
        case 0x1b9098u: goto label_1b9098;
        case 0x1b909cu: goto label_1b909c;
        case 0x1b90a0u: goto label_1b90a0;
        case 0x1b90a4u: goto label_1b90a4;
        case 0x1b90a8u: goto label_1b90a8;
        case 0x1b90acu: goto label_1b90ac;
        case 0x1b90b0u: goto label_1b90b0;
        case 0x1b90b4u: goto label_1b90b4;
        case 0x1b90b8u: goto label_1b90b8;
        case 0x1b90bcu: goto label_1b90bc;
        case 0x1b90c0u: goto label_1b90c0;
        case 0x1b90c4u: goto label_1b90c4;
        case 0x1b90c8u: goto label_1b90c8;
        case 0x1b90ccu: goto label_1b90cc;
        case 0x1b90d0u: goto label_1b90d0;
        case 0x1b90d4u: goto label_1b90d4;
        case 0x1b90d8u: goto label_1b90d8;
        case 0x1b90dcu: goto label_1b90dc;
        case 0x1b90e0u: goto label_1b90e0;
        case 0x1b90e4u: goto label_1b90e4;
        case 0x1b90e8u: goto label_1b90e8;
        case 0x1b90ecu: goto label_1b90ec;
        case 0x1b90f0u: goto label_1b90f0;
        case 0x1b90f4u: goto label_1b90f4;
        case 0x1b90f8u: goto label_1b90f8;
        case 0x1b90fcu: goto label_1b90fc;
        case 0x1b9100u: goto label_1b9100;
        case 0x1b9104u: goto label_1b9104;
        case 0x1b9108u: goto label_1b9108;
        case 0x1b910cu: goto label_1b910c;
        case 0x1b9110u: goto label_1b9110;
        case 0x1b9114u: goto label_1b9114;
        case 0x1b9118u: goto label_1b9118;
        case 0x1b911cu: goto label_1b911c;
        case 0x1b9120u: goto label_1b9120;
        case 0x1b9124u: goto label_1b9124;
        case 0x1b9128u: goto label_1b9128;
        case 0x1b912cu: goto label_1b912c;
        case 0x1b9130u: goto label_1b9130;
        case 0x1b9134u: goto label_1b9134;
        case 0x1b9138u: goto label_1b9138;
        case 0x1b913cu: goto label_1b913c;
        case 0x1b9140u: goto label_1b9140;
        case 0x1b9144u: goto label_1b9144;
        case 0x1b9148u: goto label_1b9148;
        case 0x1b914cu: goto label_1b914c;
        case 0x1b9150u: goto label_1b9150;
        case 0x1b9154u: goto label_1b9154;
        case 0x1b9158u: goto label_1b9158;
        case 0x1b915cu: goto label_1b915c;
        case 0x1b9160u: goto label_1b9160;
        case 0x1b9164u: goto label_1b9164;
        case 0x1b9168u: goto label_1b9168;
        case 0x1b916cu: goto label_1b916c;
        case 0x1b9170u: goto label_1b9170;
        case 0x1b9174u: goto label_1b9174;
        case 0x1b9178u: goto label_1b9178;
        case 0x1b917cu: goto label_1b917c;
        case 0x1b9180u: goto label_1b9180;
        case 0x1b9184u: goto label_1b9184;
        case 0x1b9188u: goto label_1b9188;
        case 0x1b918cu: goto label_1b918c;
        case 0x1b9190u: goto label_1b9190;
        case 0x1b9194u: goto label_1b9194;
        case 0x1b9198u: goto label_1b9198;
        case 0x1b919cu: goto label_1b919c;
        case 0x1b91a0u: goto label_1b91a0;
        case 0x1b91a4u: goto label_1b91a4;
        case 0x1b91a8u: goto label_1b91a8;
        case 0x1b91acu: goto label_1b91ac;
        case 0x1b91b0u: goto label_1b91b0;
        case 0x1b91b4u: goto label_1b91b4;
        case 0x1b91b8u: goto label_1b91b8;
        case 0x1b91bcu: goto label_1b91bc;
        case 0x1b91c0u: goto label_1b91c0;
        case 0x1b91c4u: goto label_1b91c4;
        case 0x1b91c8u: goto label_1b91c8;
        case 0x1b91ccu: goto label_1b91cc;
        case 0x1b91d0u: goto label_1b91d0;
        case 0x1b91d4u: goto label_1b91d4;
        case 0x1b91d8u: goto label_1b91d8;
        case 0x1b91dcu: goto label_1b91dc;
        case 0x1b91e0u: goto label_1b91e0;
        case 0x1b91e4u: goto label_1b91e4;
        case 0x1b91e8u: goto label_1b91e8;
        case 0x1b91ecu: goto label_1b91ec;
        case 0x1b91f0u: goto label_1b91f0;
        case 0x1b91f4u: goto label_1b91f4;
        case 0x1b91f8u: goto label_1b91f8;
        case 0x1b91fcu: goto label_1b91fc;
        case 0x1b9200u: goto label_1b9200;
        case 0x1b9204u: goto label_1b9204;
        case 0x1b9208u: goto label_1b9208;
        case 0x1b920cu: goto label_1b920c;
        case 0x1b9210u: goto label_1b9210;
        case 0x1b9214u: goto label_1b9214;
        case 0x1b9218u: goto label_1b9218;
        case 0x1b921cu: goto label_1b921c;
        case 0x1b9220u: goto label_1b9220;
        case 0x1b9224u: goto label_1b9224;
        case 0x1b9228u: goto label_1b9228;
        case 0x1b922cu: goto label_1b922c;
        case 0x1b9230u: goto label_1b9230;
        case 0x1b9234u: goto label_1b9234;
        case 0x1b9238u: goto label_1b9238;
        case 0x1b923cu: goto label_1b923c;
        case 0x1b9240u: goto label_1b9240;
        case 0x1b9244u: goto label_1b9244;
        case 0x1b9248u: goto label_1b9248;
        case 0x1b924cu: goto label_1b924c;
        case 0x1b9250u: goto label_1b9250;
        case 0x1b9254u: goto label_1b9254;
        case 0x1b9258u: goto label_1b9258;
        case 0x1b925cu: goto label_1b925c;
        case 0x1b9260u: goto label_1b9260;
        case 0x1b9264u: goto label_1b9264;
        case 0x1b9268u: goto label_1b9268;
        case 0x1b926cu: goto label_1b926c;
        case 0x1b9270u: goto label_1b9270;
        case 0x1b9274u: goto label_1b9274;
        case 0x1b9278u: goto label_1b9278;
        case 0x1b927cu: goto label_1b927c;
        case 0x1b9280u: goto label_1b9280;
        case 0x1b9284u: goto label_1b9284;
        case 0x1b9288u: goto label_1b9288;
        case 0x1b928cu: goto label_1b928c;
        case 0x1b9290u: goto label_1b9290;
        case 0x1b9294u: goto label_1b9294;
        case 0x1b9298u: goto label_1b9298;
        case 0x1b929cu: goto label_1b929c;
        case 0x1b92a0u: goto label_1b92a0;
        case 0x1b92a4u: goto label_1b92a4;
        case 0x1b92a8u: goto label_1b92a8;
        case 0x1b92acu: goto label_1b92ac;
        case 0x1b92b0u: goto label_1b92b0;
        case 0x1b92b4u: goto label_1b92b4;
        case 0x1b92b8u: goto label_1b92b8;
        case 0x1b92bcu: goto label_1b92bc;
        case 0x1b92c0u: goto label_1b92c0;
        case 0x1b92c4u: goto label_1b92c4;
        case 0x1b92c8u: goto label_1b92c8;
        case 0x1b92ccu: goto label_1b92cc;
        case 0x1b92d0u: goto label_1b92d0;
        case 0x1b92d4u: goto label_1b92d4;
        case 0x1b92d8u: goto label_1b92d8;
        case 0x1b92dcu: goto label_1b92dc;
        case 0x1b92e0u: goto label_1b92e0;
        case 0x1b92e4u: goto label_1b92e4;
        case 0x1b92e8u: goto label_1b92e8;
        case 0x1b92ecu: goto label_1b92ec;
        case 0x1b92f0u: goto label_1b92f0;
        case 0x1b92f4u: goto label_1b92f4;
        case 0x1b92f8u: goto label_1b92f8;
        case 0x1b92fcu: goto label_1b92fc;
        case 0x1b9300u: goto label_1b9300;
        case 0x1b9304u: goto label_1b9304;
        case 0x1b9308u: goto label_1b9308;
        case 0x1b930cu: goto label_1b930c;
        case 0x1b9310u: goto label_1b9310;
        case 0x1b9314u: goto label_1b9314;
        case 0x1b9318u: goto label_1b9318;
        case 0x1b931cu: goto label_1b931c;
        case 0x1b9320u: goto label_1b9320;
        case 0x1b9324u: goto label_1b9324;
        case 0x1b9328u: goto label_1b9328;
        case 0x1b932cu: goto label_1b932c;
        case 0x1b9330u: goto label_1b9330;
        case 0x1b9334u: goto label_1b9334;
        case 0x1b9338u: goto label_1b9338;
        case 0x1b933cu: goto label_1b933c;
        case 0x1b9340u: goto label_1b9340;
        case 0x1b9344u: goto label_1b9344;
        case 0x1b9348u: goto label_1b9348;
        case 0x1b934cu: goto label_1b934c;
        case 0x1b9350u: goto label_1b9350;
        case 0x1b9354u: goto label_1b9354;
        case 0x1b9358u: goto label_1b9358;
        case 0x1b935cu: goto label_1b935c;
        case 0x1b9360u: goto label_1b9360;
        case 0x1b9364u: goto label_1b9364;
        case 0x1b9368u: goto label_1b9368;
        case 0x1b936cu: goto label_1b936c;
        case 0x1b9370u: goto label_1b9370;
        case 0x1b9374u: goto label_1b9374;
        case 0x1b9378u: goto label_1b9378;
        case 0x1b937cu: goto label_1b937c;
        case 0x1b9380u: goto label_1b9380;
        case 0x1b9384u: goto label_1b9384;
        case 0x1b9388u: goto label_1b9388;
        case 0x1b938cu: goto label_1b938c;
        case 0x1b9390u: goto label_1b9390;
        case 0x1b9394u: goto label_1b9394;
        case 0x1b9398u: goto label_1b9398;
        case 0x1b939cu: goto label_1b939c;
        case 0x1b93a0u: goto label_1b93a0;
        case 0x1b93a4u: goto label_1b93a4;
        case 0x1b93a8u: goto label_1b93a8;
        case 0x1b93acu: goto label_1b93ac;
        case 0x1b93b0u: goto label_1b93b0;
        case 0x1b93b4u: goto label_1b93b4;
        case 0x1b93b8u: goto label_1b93b8;
        case 0x1b93bcu: goto label_1b93bc;
        case 0x1b93c0u: goto label_1b93c0;
        case 0x1b93c4u: goto label_1b93c4;
        case 0x1b93c8u: goto label_1b93c8;
        case 0x1b93ccu: goto label_1b93cc;
        case 0x1b93d0u: goto label_1b93d0;
        case 0x1b93d4u: goto label_1b93d4;
        case 0x1b93d8u: goto label_1b93d8;
        case 0x1b93dcu: goto label_1b93dc;
        case 0x1b93e0u: goto label_1b93e0;
        case 0x1b93e4u: goto label_1b93e4;
        case 0x1b93e8u: goto label_1b93e8;
        case 0x1b93ecu: goto label_1b93ec;
        case 0x1b93f0u: goto label_1b93f0;
        case 0x1b93f4u: goto label_1b93f4;
        case 0x1b93f8u: goto label_1b93f8;
        case 0x1b93fcu: goto label_1b93fc;
        case 0x1b9400u: goto label_1b9400;
        case 0x1b9404u: goto label_1b9404;
        case 0x1b9408u: goto label_1b9408;
        case 0x1b940cu: goto label_1b940c;
        case 0x1b9410u: goto label_1b9410;
        case 0x1b9414u: goto label_1b9414;
        case 0x1b9418u: goto label_1b9418;
        case 0x1b941cu: goto label_1b941c;
        case 0x1b9420u: goto label_1b9420;
        case 0x1b9424u: goto label_1b9424;
        case 0x1b9428u: goto label_1b9428;
        case 0x1b942cu: goto label_1b942c;
        case 0x1b9430u: goto label_1b9430;
        case 0x1b9434u: goto label_1b9434;
        case 0x1b9438u: goto label_1b9438;
        case 0x1b943cu: goto label_1b943c;
        case 0x1b9440u: goto label_1b9440;
        case 0x1b9444u: goto label_1b9444;
        case 0x1b9448u: goto label_1b9448;
        case 0x1b944cu: goto label_1b944c;
        case 0x1b9450u: goto label_1b9450;
        case 0x1b9454u: goto label_1b9454;
        case 0x1b9458u: goto label_1b9458;
        case 0x1b945cu: goto label_1b945c;
        case 0x1b9460u: goto label_1b9460;
        case 0x1b9464u: goto label_1b9464;
        case 0x1b9468u: goto label_1b9468;
        case 0x1b946cu: goto label_1b946c;
        case 0x1b9470u: goto label_1b9470;
        case 0x1b9474u: goto label_1b9474;
        case 0x1b9478u: goto label_1b9478;
        case 0x1b947cu: goto label_1b947c;
        case 0x1b9480u: goto label_1b9480;
        case 0x1b9484u: goto label_1b9484;
        case 0x1b9488u: goto label_1b9488;
        case 0x1b948cu: goto label_1b948c;
        case 0x1b9490u: goto label_1b9490;
        case 0x1b9494u: goto label_1b9494;
        case 0x1b9498u: goto label_1b9498;
        case 0x1b949cu: goto label_1b949c;
        case 0x1b94a0u: goto label_1b94a0;
        case 0x1b94a4u: goto label_1b94a4;
        case 0x1b94a8u: goto label_1b94a8;
        case 0x1b94acu: goto label_1b94ac;
        case 0x1b94b0u: goto label_1b94b0;
        case 0x1b94b4u: goto label_1b94b4;
        case 0x1b94b8u: goto label_1b94b8;
        case 0x1b94bcu: goto label_1b94bc;
        case 0x1b94c0u: goto label_1b94c0;
        case 0x1b94c4u: goto label_1b94c4;
        case 0x1b94c8u: goto label_1b94c8;
        case 0x1b94ccu: goto label_1b94cc;
        case 0x1b94d0u: goto label_1b94d0;
        case 0x1b94d4u: goto label_1b94d4;
        case 0x1b94d8u: goto label_1b94d8;
        case 0x1b94dcu: goto label_1b94dc;
        case 0x1b94e0u: goto label_1b94e0;
        case 0x1b94e4u: goto label_1b94e4;
        case 0x1b94e8u: goto label_1b94e8;
        case 0x1b94ecu: goto label_1b94ec;
        case 0x1b94f0u: goto label_1b94f0;
        case 0x1b94f4u: goto label_1b94f4;
        case 0x1b94f8u: goto label_1b94f8;
        case 0x1b94fcu: goto label_1b94fc;
        case 0x1b9500u: goto label_1b9500;
        case 0x1b9504u: goto label_1b9504;
        case 0x1b9508u: goto label_1b9508;
        case 0x1b950cu: goto label_1b950c;
        case 0x1b9510u: goto label_1b9510;
        case 0x1b9514u: goto label_1b9514;
        case 0x1b9518u: goto label_1b9518;
        case 0x1b951cu: goto label_1b951c;
        case 0x1b9520u: goto label_1b9520;
        case 0x1b9524u: goto label_1b9524;
        case 0x1b9528u: goto label_1b9528;
        case 0x1b952cu: goto label_1b952c;
        case 0x1b9530u: goto label_1b9530;
        case 0x1b9534u: goto label_1b9534;
        case 0x1b9538u: goto label_1b9538;
        case 0x1b953cu: goto label_1b953c;
        case 0x1b9540u: goto label_1b9540;
        case 0x1b9544u: goto label_1b9544;
        case 0x1b9548u: goto label_1b9548;
        case 0x1b954cu: goto label_1b954c;
        case 0x1b9550u: goto label_1b9550;
        case 0x1b9554u: goto label_1b9554;
        case 0x1b9558u: goto label_1b9558;
        case 0x1b955cu: goto label_1b955c;
        case 0x1b9560u: goto label_1b9560;
        case 0x1b9564u: goto label_1b9564;
        case 0x1b9568u: goto label_1b9568;
        case 0x1b956cu: goto label_1b956c;
        case 0x1b9570u: goto label_1b9570;
        case 0x1b9574u: goto label_1b9574;
        case 0x1b9578u: goto label_1b9578;
        case 0x1b957cu: goto label_1b957c;
        case 0x1b9580u: goto label_1b9580;
        case 0x1b9584u: goto label_1b9584;
        case 0x1b9588u: goto label_1b9588;
        case 0x1b958cu: goto label_1b958c;
        case 0x1b9590u: goto label_1b9590;
        case 0x1b9594u: goto label_1b9594;
        case 0x1b9598u: goto label_1b9598;
        case 0x1b959cu: goto label_1b959c;
        case 0x1b95a0u: goto label_1b95a0;
        case 0x1b95a4u: goto label_1b95a4;
        case 0x1b95a8u: goto label_1b95a8;
        case 0x1b95acu: goto label_1b95ac;
        case 0x1b95b0u: goto label_1b95b0;
        case 0x1b95b4u: goto label_1b95b4;
        case 0x1b95b8u: goto label_1b95b8;
        case 0x1b95bcu: goto label_1b95bc;
        case 0x1b95c0u: goto label_1b95c0;
        case 0x1b95c4u: goto label_1b95c4;
        case 0x1b95c8u: goto label_1b95c8;
        case 0x1b95ccu: goto label_1b95cc;
        case 0x1b95d0u: goto label_1b95d0;
        case 0x1b95d4u: goto label_1b95d4;
        case 0x1b95d8u: goto label_1b95d8;
        case 0x1b95dcu: goto label_1b95dc;
        case 0x1b95e0u: goto label_1b95e0;
        case 0x1b95e4u: goto label_1b95e4;
        case 0x1b95e8u: goto label_1b95e8;
        case 0x1b95ecu: goto label_1b95ec;
        case 0x1b95f0u: goto label_1b95f0;
        case 0x1b95f4u: goto label_1b95f4;
        case 0x1b95f8u: goto label_1b95f8;
        case 0x1b95fcu: goto label_1b95fc;
        case 0x1b9600u: goto label_1b9600;
        case 0x1b9604u: goto label_1b9604;
        case 0x1b9608u: goto label_1b9608;
        case 0x1b960cu: goto label_1b960c;
        case 0x1b9610u: goto label_1b9610;
        case 0x1b9614u: goto label_1b9614;
        case 0x1b9618u: goto label_1b9618;
        case 0x1b961cu: goto label_1b961c;
        case 0x1b9620u: goto label_1b9620;
        case 0x1b9624u: goto label_1b9624;
        case 0x1b9628u: goto label_1b9628;
        case 0x1b962cu: goto label_1b962c;
        case 0x1b9630u: goto label_1b9630;
        case 0x1b9634u: goto label_1b9634;
        case 0x1b9638u: goto label_1b9638;
        case 0x1b963cu: goto label_1b963c;
        case 0x1b9640u: goto label_1b9640;
        case 0x1b9644u: goto label_1b9644;
        case 0x1b9648u: goto label_1b9648;
        case 0x1b964cu: goto label_1b964c;
        case 0x1b9650u: goto label_1b9650;
        case 0x1b9654u: goto label_1b9654;
        case 0x1b9658u: goto label_1b9658;
        case 0x1b965cu: goto label_1b965c;
        case 0x1b9660u: goto label_1b9660;
        case 0x1b9664u: goto label_1b9664;
        case 0x1b9668u: goto label_1b9668;
        case 0x1b966cu: goto label_1b966c;
        case 0x1b9670u: goto label_1b9670;
        case 0x1b9674u: goto label_1b9674;
        case 0x1b9678u: goto label_1b9678;
        case 0x1b967cu: goto label_1b967c;
        case 0x1b9680u: goto label_1b9680;
        case 0x1b9684u: goto label_1b9684;
        case 0x1b9688u: goto label_1b9688;
        case 0x1b968cu: goto label_1b968c;
        case 0x1b9690u: goto label_1b9690;
        case 0x1b9694u: goto label_1b9694;
        case 0x1b9698u: goto label_1b9698;
        case 0x1b969cu: goto label_1b969c;
        case 0x1b96a0u: goto label_1b96a0;
        case 0x1b96a4u: goto label_1b96a4;
        case 0x1b96a8u: goto label_1b96a8;
        case 0x1b96acu: goto label_1b96ac;
        case 0x1b96b0u: goto label_1b96b0;
        case 0x1b96b4u: goto label_1b96b4;
        case 0x1b96b8u: goto label_1b96b8;
        case 0x1b96bcu: goto label_1b96bc;
        case 0x1b96c0u: goto label_1b96c0;
        case 0x1b96c4u: goto label_1b96c4;
        case 0x1b96c8u: goto label_1b96c8;
        case 0x1b96ccu: goto label_1b96cc;
        case 0x1b96d0u: goto label_1b96d0;
        case 0x1b96d4u: goto label_1b96d4;
        case 0x1b96d8u: goto label_1b96d8;
        case 0x1b96dcu: goto label_1b96dc;
        case 0x1b96e0u: goto label_1b96e0;
        case 0x1b96e4u: goto label_1b96e4;
        case 0x1b96e8u: goto label_1b96e8;
        case 0x1b96ecu: goto label_1b96ec;
        case 0x1b96f0u: goto label_1b96f0;
        case 0x1b96f4u: goto label_1b96f4;
        case 0x1b96f8u: goto label_1b96f8;
        case 0x1b96fcu: goto label_1b96fc;
        case 0x1b9700u: goto label_1b9700;
        case 0x1b9704u: goto label_1b9704;
        case 0x1b9708u: goto label_1b9708;
        case 0x1b970cu: goto label_1b970c;
        case 0x1b9710u: goto label_1b9710;
        case 0x1b9714u: goto label_1b9714;
        case 0x1b9718u: goto label_1b9718;
        case 0x1b971cu: goto label_1b971c;
        case 0x1b9720u: goto label_1b9720;
        case 0x1b9724u: goto label_1b9724;
        case 0x1b9728u: goto label_1b9728;
        case 0x1b972cu: goto label_1b972c;
        case 0x1b9730u: goto label_1b9730;
        case 0x1b9734u: goto label_1b9734;
        case 0x1b9738u: goto label_1b9738;
        case 0x1b973cu: goto label_1b973c;
        case 0x1b9740u: goto label_1b9740;
        case 0x1b9744u: goto label_1b9744;
        case 0x1b9748u: goto label_1b9748;
        case 0x1b974cu: goto label_1b974c;
        case 0x1b9750u: goto label_1b9750;
        case 0x1b9754u: goto label_1b9754;
        case 0x1b9758u: goto label_1b9758;
        case 0x1b975cu: goto label_1b975c;
        case 0x1b9760u: goto label_1b9760;
        case 0x1b9764u: goto label_1b9764;
        case 0x1b9768u: goto label_1b9768;
        case 0x1b976cu: goto label_1b976c;
        case 0x1b9770u: goto label_1b9770;
        case 0x1b9774u: goto label_1b9774;
        case 0x1b9778u: goto label_1b9778;
        case 0x1b977cu: goto label_1b977c;
        case 0x1b9780u: goto label_1b9780;
        case 0x1b9784u: goto label_1b9784;
        case 0x1b9788u: goto label_1b9788;
        case 0x1b978cu: goto label_1b978c;
        case 0x1b9790u: goto label_1b9790;
        case 0x1b9794u: goto label_1b9794;
        case 0x1b9798u: goto label_1b9798;
        case 0x1b979cu: goto label_1b979c;
        case 0x1b97a0u: goto label_1b97a0;
        case 0x1b97a4u: goto label_1b97a4;
        case 0x1b97a8u: goto label_1b97a8;
        case 0x1b97acu: goto label_1b97ac;
        case 0x1b97b0u: goto label_1b97b0;
        case 0x1b97b4u: goto label_1b97b4;
        case 0x1b97b8u: goto label_1b97b8;
        case 0x1b97bcu: goto label_1b97bc;
        case 0x1b97c0u: goto label_1b97c0;
        case 0x1b97c4u: goto label_1b97c4;
        case 0x1b97c8u: goto label_1b97c8;
        case 0x1b97ccu: goto label_1b97cc;
        case 0x1b97d0u: goto label_1b97d0;
        case 0x1b97d4u: goto label_1b97d4;
        case 0x1b97d8u: goto label_1b97d8;
        case 0x1b97dcu: goto label_1b97dc;
        case 0x1b97e0u: goto label_1b97e0;
        case 0x1b97e4u: goto label_1b97e4;
        case 0x1b97e8u: goto label_1b97e8;
        case 0x1b97ecu: goto label_1b97ec;
        case 0x1b97f0u: goto label_1b97f0;
        case 0x1b97f4u: goto label_1b97f4;
        case 0x1b97f8u: goto label_1b97f8;
        case 0x1b97fcu: goto label_1b97fc;
        case 0x1b9800u: goto label_1b9800;
        case 0x1b9804u: goto label_1b9804;
        case 0x1b9808u: goto label_1b9808;
        case 0x1b980cu: goto label_1b980c;
        case 0x1b9810u: goto label_1b9810;
        case 0x1b9814u: goto label_1b9814;
        case 0x1b9818u: goto label_1b9818;
        case 0x1b981cu: goto label_1b981c;
        case 0x1b9820u: goto label_1b9820;
        case 0x1b9824u: goto label_1b9824;
        case 0x1b9828u: goto label_1b9828;
        case 0x1b982cu: goto label_1b982c;
        case 0x1b9830u: goto label_1b9830;
        case 0x1b9834u: goto label_1b9834;
        case 0x1b9838u: goto label_1b9838;
        default: break;
    }

    ctx->pc = 0x1b83f0u;

label_1b83f0:
    // 0x1b83f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b83f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b83f4:
    // 0x1b83f4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1b83f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_1b83f8:
    // 0x1b83f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b83f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b83fc:
    // 0x1b83fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b83fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b8400:
    // 0x1b8400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8404:
    // 0x1b8404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b8408:
    // 0x1b8408: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1b8408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1b840c:
    // 0x1b840c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1b840cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1b8410:
    // 0x1b8410: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x1b8410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1b8414:
    // 0x1b8414: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1b8414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1b8418:
    // 0x1b8418: 0x2473ec70  addiu       $s3, $v1, -0x1390
    ctx->pc = 0x1b8418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_1b841c:
    // 0x1b841c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b841cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8420:
    // 0x1b8420: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1b8420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b8424:
    // 0x1b8424: 0x3c0397ff  lui         $v1, 0x97FF
    ctx->pc = 0x1b8424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38911 << 16));
label_1b8428:
    // 0x1b8428: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1b8428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b842c:
    // 0x1b842c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1b842cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1b8430:
    // 0x1b8430: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1b8430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1b8434:
    // 0x1b8434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8438:
    // 0x1b8438: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b843c:
    // 0x1b843c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1b843cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1b8440:
    // 0x1b8440: 0x8e0319e4  lw          $v1, 0x19E4($s0)
    ctx->pc = 0x1b8440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6628)));
label_1b8444:
    // 0x1b8444: 0x34640400  ori         $a0, $v1, 0x400
    ctx->pc = 0x1b8444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_1b8448:
    // 0x1b8448: 0xae0419e4  sw          $a0, 0x19E4($s0)
    ctx->pc = 0x1b8448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6628), GPR_U32(ctx, 4));
label_1b844c:
    // 0x1b844c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b844cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8450:
    // 0x1b8450: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1b8450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1b8454:
    // 0x1b8454: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1b8454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b8458:
    // 0x1b8458: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x1b8458u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_1b845c:
    // 0x1b845c: 0x102004cb  beqz        $at, . + 4 + (0x4CB << 2)
label_1b8460:
    if (ctx->pc == 0x1B8460u) {
        ctx->pc = 0x1B8464u;
        goto label_1b8464;
    }
    ctx->pc = 0x1B845Cu;
    {
        const bool branch_taken_0x1b845c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b845c) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8464u;
label_1b8464:
    // 0x1b8464: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1b8464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1b8468:
    // 0x1b8468: 0x2464f300  addiu       $a0, $v1, -0xD00
    ctx->pc = 0x1b8468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963968));
label_1b846c:
    // 0x1b846c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b846cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b8470:
    // 0x1b8470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b8474:
    // 0x1b8474: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b8474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b8478:
    // 0x1b8478: 0x600008  jr          $v1
label_1b847c:
    if (ctx->pc == 0x1B847Cu) {
        ctx->pc = 0x1B8480u;
        goto label_1b8480;
    }
    ctx->pc = 0x1B8478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8478u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B8480u;
label_1b8480:
    // 0x1b8480: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b8480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b8484:
    // 0x1b8484: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8488:
    // 0x1b8488: 0xa08210a8  sb          $v0, 0x10A8($a0)
    ctx->pc = 0x1b8488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 2));
label_1b848c:
    // 0x1b848c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8490:
    // 0x1b8490: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8494:
    // 0x1b8494: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1b8494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8498:
    // 0x1b8498: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1b8498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b849c:
    // 0x1b849c: 0xc058f20  jal         func_163C80
label_1b84a0:
    if (ctx->pc == 0x1B84A0u) {
        ctx->pc = 0x1B84A4u;
        goto label_1b84a4;
    }
    ctx->pc = 0x1B849Cu;
    SET_GPR_U32(ctx, 31, 0x1B84A4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B849Cu, 0x1B84A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84A4u;
label_1b84a4:
    // 0x1b84a4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b84a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b84a8:
    // 0x1b84a8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b84a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b84ac:
    // 0x1b84ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b84acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b84b0:
    // 0x1b84b0: 0x0  nop
    ctx->pc = 0x1b84b0u;
    // NOP
label_1b84b4:
    // 0x1b84b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b84b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b84b8:
    // 0x1b84b8: 0x0  nop
    ctx->pc = 0x1b84b8u;
    // NOP
label_1b84bc:
    // 0x1b84bc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1b84c0:
    if (ctx->pc == 0x1B84C0u) {
        ctx->pc = 0x1B84C4u;
        goto label_1b84c4;
    }
    ctx->pc = 0x1B84BCu;
    {
        const bool branch_taken_0x1b84bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b84bc) {
            ctx->pc = 0x1B84FCu;
            goto label_1b84fc;
        }
    }
    ctx->pc = 0x1B84C4u;
label_1b84c4:
    // 0x1b84c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b84c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b84c8:
    // 0x1b84c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b84cc:
    // 0x1b84cc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b84d0:
    // 0x1b84d0: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1b84d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_1b84d4:
    // 0x1b84d4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b84d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b84d8:
    // 0x1b84d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b84d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b84dc:
    // 0x1b84dc: 0xc0965d0  jal         func_259740
label_1b84e0:
    if (ctx->pc == 0x1B84E0u) {
        ctx->pc = 0x1B84E4u;
        goto label_1b84e4;
    }
    ctx->pc = 0x1B84DCu;
    SET_GPR_U32(ctx, 31, 0x1B84E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B84DCu, 0x1B84E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84E4u;
label_1b84e4:
    // 0x1b84e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b84e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b84e8:
    // 0x1b84e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b84e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b84ec:
    // 0x1b84ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b84ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b84f0:
    // 0x1b84f0: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1b84f4:
    // 0x1b84f4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b84f8:
    if (ctx->pc == 0x1B84F8u) {
        ctx->pc = 0x1B84FCu;
        goto label_1b84fc;
    }
    ctx->pc = 0x1B84F4u;
    {
        const bool branch_taken_0x1b84f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b84f4) {
            ctx->pc = 0x1B8528u;
            goto label_1b8528;
        }
    }
    ctx->pc = 0x1B84FCu;
label_1b84fc:
    // 0x1b84fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8500:
    // 0x1b8500: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8504:
    // 0x1b8504: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b8504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b8508:
    // 0x1b8508: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1b8508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_1b850c:
    // 0x1b850c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b850cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8510:
    // 0x1b8510: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b8514:
    // 0x1b8514: 0xc0965d0  jal         func_259740
label_1b8518:
    if (ctx->pc == 0x1B8518u) {
        ctx->pc = 0x1B851Cu;
        goto label_1b851c;
    }
    ctx->pc = 0x1B8514u;
    SET_GPR_U32(ctx, 31, 0x1B851Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B8514u, 0x1B851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B851Cu;
label_1b851c:
    // 0x1b851c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b851cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8520:
    // 0x1b8520: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8524:
    // 0x1b8524: 0xae201b60  sw          $zero, 0x1B60($s1)
    ctx->pc = 0x1b8524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7008), GPR_U32(ctx, 0));
label_1b8528:
    // 0x1b8528: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1b8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
label_1b852c:
    // 0x1b852c: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x1b852cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_1b8530:
    // 0x1b8530: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1b8530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_1b8534:
    // 0x1b8534: 0xc0684d8  jal         func_1A1360
label_1b8538:
    if (ctx->pc == 0x1B8538u) {
        ctx->pc = 0x1B853Cu;
        goto label_1b853c;
    }
    ctx->pc = 0x1B8534u;
    SET_GPR_U32(ctx, 31, 0x1B853Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1B8534u, 0x1B853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B853Cu;
label_1b853c:
    // 0x1b853c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b853cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8540:
    // 0x1b8540: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8544:
    // 0x1b8544: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b8544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b8548:
    // 0x1b8548: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1b8548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b854c:
    // 0x1b854c: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1b854cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
label_1b8550:
    // 0x1b8550: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8554:
    // 0x1b8554: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1b8554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b8558:
    // 0x1b8558: 0x3c080400  lui         $t0, 0x400
    ctx->pc = 0x1b8558u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
label_1b855c:
    // 0x1b855c: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x1b855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1b8560:
    // 0x1b8560: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b8560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1b8564:
    // 0x1b8564: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b8568:
    // 0x1b8568: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b8568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b856c:
    // 0x1b856c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b856cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1b8570:
    // 0x1b8570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b8574:
    // 0x1b8574: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b8574u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1b8578:
    // 0x1b8578: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b857c:
    // 0x1b857c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b857cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b8580:
    // 0x1b8580: 0xc096b40  jal         func_25AD00
label_1b8584:
    if (ctx->pc == 0x1B8584u) {
        ctx->pc = 0x1B8588u;
        goto label_1b8588;
    }
    ctx->pc = 0x1B8580u;
    SET_GPR_U32(ctx, 31, 0x1B8588u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B8580u, 0x1B8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8588u;
label_1b8588:
    // 0x1b8588: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b8588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b858c:
    // 0x1b858c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8590:
    // 0x1b8590: 0xc05cd10  jal         func_173440
label_1b8594:
    if (ctx->pc == 0x1B8594u) {
        ctx->pc = 0x1B8598u;
        goto label_1b8598;
    }
    ctx->pc = 0x1B8590u;
    SET_GPR_U32(ctx, 31, 0x1B8598u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B8590u, 0x1B8598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8598u;
label_1b8598:
    // 0x1b8598: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8598u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b859c:
    // 0x1b859c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b859cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b85a0:
    // 0x1b85a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b85a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b85a4:
    // 0x1b85a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b85a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b85a8:
    // 0x1b85a8: 0xc057480  jal         func_15D200
label_1b85ac:
    if (ctx->pc == 0x1B85ACu) {
        ctx->pc = 0x1B85B0u;
        goto label_1b85b0;
    }
    ctx->pc = 0x1B85A8u;
    SET_GPR_U32(ctx, 31, 0x1B85B0u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B85A8u, 0x1B85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85B0u;
label_1b85b0:
    // 0x1b85b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b85b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b85b4:
    // 0x1b85b4: 0xc097530  jal         func_25D4C0
label_1b85b8:
    if (ctx->pc == 0x1B85B8u) {
        ctx->pc = 0x1B85BCu;
        goto label_1b85bc;
    }
    ctx->pc = 0x1B85B4u;
    SET_GPR_U32(ctx, 31, 0x1B85BCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B85B4u, 0x1B85BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85BCu;
label_1b85bc:
    // 0x1b85bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b85bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b85c0:
    // 0x1b85c0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b85c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b85c4:
    // 0x1b85c4: 0x90c409e7  lbu         $a0, 0x9E7($a2)
    ctx->pc = 0x1b85c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
label_1b85c8:
    // 0x1b85c8: 0x10800470  beqz        $a0, . + 4 + (0x470 << 2)
label_1b85cc:
    if (ctx->pc == 0x1B85CCu) {
        ctx->pc = 0x1B85D0u;
        goto label_1b85d0;
    }
    ctx->pc = 0x1B85C8u;
    {
        const bool branch_taken_0x1b85c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b85c8) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B85D0u;
label_1b85d0:
    // 0x1b85d0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b85d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b85d4:
    // 0x1b85d4: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1b85d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1b85d8:
    // 0x1b85d8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b85dc:
    // 0x1b85dc: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1b85dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b85e0:
    // 0x1b85e0: 0x1000046a  b           . + 4 + (0x46A << 2)
label_1b85e4:
    if (ctx->pc == 0x1B85E4u) {
        ctx->pc = 0x1B85E8u;
        goto label_1b85e8;
    }
    ctx->pc = 0x1B85E0u;
    {
        const bool branch_taken_0x1b85e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b85e0) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B85E8u;
label_1b85e8:
    // 0x1b85e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b85ec:
    // 0x1b85ec: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x1b85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
label_1b85f0:
    // 0x1b85f0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1b85f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1b85f4:
    // 0x1b85f4: 0x30a60020  andi        $a2, $a1, 0x20
    ctx->pc = 0x1b85f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_1b85f8:
    // 0x1b85f8: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_1b85fc:
    if (ctx->pc == 0x1B85FCu) {
        ctx->pc = 0x1B8600u;
        goto label_1b8600;
    }
    ctx->pc = 0x1B85F8u;
    {
        const bool branch_taken_0x1b85f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b85f8) {
            ctx->pc = 0x1B860Cu;
            goto label_1b860c;
        }
    }
    ctx->pc = 0x1B8600u;
label_1b8600:
    // 0x1b8600: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b8600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8604:
    // 0x1b8604: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b8604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8608:
    // 0x1b8608: 0xad071b64  sw          $a3, 0x1B64($t0)
    ctx->pc = 0x1b8608u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7012), GPR_U32(ctx, 7));
label_1b860c:
    // 0x1b860c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8610:
    // 0x1b8610: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1b8610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1b8614:
    // 0x1b8614: 0xc0675a4  jal         func_19D690
label_1b8618:
    if (ctx->pc == 0x1B8618u) {
        ctx->pc = 0x1B861Cu;
        goto label_1b861c;
    }
    ctx->pc = 0x1B8614u;
    SET_GPR_U32(ctx, 31, 0x1B861Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1B8614u, 0x1B861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B861Cu;
label_1b861c:
    // 0x1b861c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8620:
    // 0x1b8620: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x1b8620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_1b8624:
    // 0x1b8624: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1b8628:
    if (ctx->pc == 0x1B8628u) {
        ctx->pc = 0x1B862Cu;
        goto label_1b862c;
    }
    ctx->pc = 0x1B8624u;
    {
        const bool branch_taken_0x1b8624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8624) {
            ctx->pc = 0x1B8664u;
            goto label_1b8664;
        }
    }
    ctx->pc = 0x1B862Cu;
label_1b862c:
    // 0x1b862c: 0x3c0442a2  lui         $a0, 0x42A2
    ctx->pc = 0x1b862cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17058 << 16));
label_1b8630:
    // 0x1b8630: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8634:
    // 0x1b8634: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8638:
    // 0x1b8638: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1b8638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1b863c:
    // 0x1b863c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1b8640:
    // 0x1b8640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8644:
    // 0x1b8644: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8648:
    // 0x1b8648: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b8648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1b864c:
    // 0x1b864c: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_1b8650:
    // 0x1b8650: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8650u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8654:
    // 0x1b8654: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8658:
    // 0x1b8658: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1b8658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1b865c:
    // 0x1b865c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b8660:
    if (ctx->pc == 0x1B8660u) {
        ctx->pc = 0x1B8664u;
        goto label_1b8664;
    }
    ctx->pc = 0x1B865Cu;
    {
        const bool branch_taken_0x1b865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b865c) {
            ctx->pc = 0x1B869Cu;
            goto label_1b869c;
        }
    }
    ctx->pc = 0x1B8664u;
label_1b8664:
    // 0x1b8664: 0x3c044309  lui         $a0, 0x4309
    ctx->pc = 0x1b8664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17161 << 16));
label_1b8668:
    // 0x1b8668: 0x3483b333  ori         $v1, $a0, 0xB333
    ctx->pc = 0x1b8668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45875);
label_1b866c:
    // 0x1b866c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b866cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8670:
    // 0x1b8670: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8674:
    // 0x1b8674: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b8674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b8678:
    // 0x1b8678: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b8678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
label_1b867c:
    // 0x1b867c: 0x34443334  ori         $a0, $v0, 0x3334
    ctx->pc = 0x1b867cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
label_1b8680:
    // 0x1b8680: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8680u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8684:
    // 0x1b8684: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8688:
    // 0x1b8688: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b8688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1b868c:
    // 0x1b868c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1b868cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1b8690:
    // 0x1b8690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8694:
    // 0x1b8694: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8698:
    // 0x1b8698: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1b8698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_1b869c:
    // 0x1b869c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b86a0:
    // 0x1b86a0: 0x8c621b60  lw          $v0, 0x1B60($v1)
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1b86a4:
    // 0x1b86a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b86a8:
    if (ctx->pc == 0x1B86A8u) {
        ctx->pc = 0x1B86ACu;
        goto label_1b86ac;
    }
    ctx->pc = 0x1B86A4u;
    {
        const bool branch_taken_0x1b86a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b86a4) {
            ctx->pc = 0x1B86DCu;
            goto label_1b86dc;
        }
    }
    ctx->pc = 0x1B86ACu;
label_1b86ac:
    // 0x1b86ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b86acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b86b0:
    // 0x1b86b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b86b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b86b4:
    // 0x1b86b4: 0x8ca60368  lw          $a2, 0x368($a1)
    ctx->pc = 0x1b86b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_1b86b8:
    // 0x1b86b8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1b86b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1b86bc:
    // 0x1b86bc: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1b86bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1b86c0:
    // 0x1b86c0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b86c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b86c4:
    // 0x1b86c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b86c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b86c8:
    // 0x1b86c8: 0xc0965d0  jal         func_259740
label_1b86cc:
    if (ctx->pc == 0x1B86CCu) {
        ctx->pc = 0x1B86D0u;
        goto label_1b86d0;
    }
    ctx->pc = 0x1B86C8u;
    SET_GPR_U32(ctx, 31, 0x1B86D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B86C8u, 0x1B86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86D0u;
label_1b86d0:
    // 0x1b86d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b86d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b86d4:
    // 0x1b86d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b86d8:
    if (ctx->pc == 0x1B86D8u) {
        ctx->pc = 0x1B86DCu;
        goto label_1b86dc;
    }
    ctx->pc = 0x1B86D4u;
    {
        const bool branch_taken_0x1b86d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b86d4) {
            ctx->pc = 0x1B8700u;
            goto label_1b8700;
        }
    }
    ctx->pc = 0x1B86DCu;
label_1b86dc:
    // 0x1b86dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b86e0:
    // 0x1b86e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b86e4:
    // 0x1b86e4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b86e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b86e8:
    // 0x1b86e8: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1b86e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1b86ec:
    // 0x1b86ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b86ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b86f0:
    // 0x1b86f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b86f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b86f4:
    // 0x1b86f4: 0xc0965d0  jal         func_259740
label_1b86f8:
    if (ctx->pc == 0x1B86F8u) {
        ctx->pc = 0x1B86FCu;
        goto label_1b86fc;
    }
    ctx->pc = 0x1B86F4u;
    SET_GPR_U32(ctx, 31, 0x1B86FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B86F4u, 0x1B86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86FCu;
label_1b86fc:
    // 0x1b86fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b86fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8700:
    // 0x1b8700: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b8700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b8704:
    // 0x1b8704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8708:
    // 0x1b8708: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b870c:
    // 0x1b870c: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b870cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b8710:
    // 0x1b8710: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b8710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b8714:
    // 0x1b8714: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8718:
    // 0x1b8718: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x1b8718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
label_1b871c:
    // 0x1b871c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b871cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8720:
    // 0x1b8720: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b8720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b8724:
    // 0x1b8724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b8724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b8728:
    // 0x1b8728: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b8728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b872c:
    // 0x1b872c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8730:
    // 0x1b8730: 0x904309da  lbu         $v1, 0x9DA($v0)
    ctx->pc = 0x1b8730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
label_1b8734:
    // 0x1b8734: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b8734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b8738:
    // 0x1b8738: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1b8738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_1b873c:
    // 0x1b873c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1b873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1b8740:
    // 0x1b8740: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
label_1b8744:
    if (ctx->pc == 0x1B8744u) {
        ctx->pc = 0x1B8748u;
        goto label_1b8748;
    }
    ctx->pc = 0x1B8740u;
    {
        const bool branch_taken_0x1b8740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b8740) {
            ctx->pc = 0x1B87A0u;
            goto label_1b87a0;
        }
    }
    ctx->pc = 0x1B8748u;
label_1b8748:
    // 0x1b8748: 0xc067694  jal         func_19DA50
label_1b874c:
    if (ctx->pc == 0x1B874Cu) {
        ctx->pc = 0x1B8750u;
        goto label_1b8750;
    }
    ctx->pc = 0x1B8748u;
    SET_GPR_U32(ctx, 31, 0x1B8750u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1B8748u, 0x1B8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8750u;
label_1b8750:
    // 0x1b8750: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8750u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8754:
    // 0x1b8754: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b8754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b8758:
    // 0x1b8758: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x1b8758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1b875c:
    // 0x1b875c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1b875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1b8760:
    // 0x1b8760: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b8760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1b8764:
    // 0x1b8764: 0x248552d8  addiu       $a1, $a0, 0x52D8
    ctx->pc = 0x1b8764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
label_1b8768:
    // 0x1b8768: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1b8768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b876c:
    // 0x1b876c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1b876cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1b8770:
    // 0x1b8770: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x1b8770u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1b8774:
    // 0x1b8774: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8778:
    // 0x1b8778: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1b8778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1b877c:
    // 0x1b877c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1b877cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1b8780:
    // 0x1b8780: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1b8780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1b8784:
    // 0x1b8784: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1b8784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8788:
    // 0x1b8788: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b8788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1b878c:
    // 0x1b878c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1b878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1b8790:
    // 0x1b8790: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1b8790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b8794:
    // 0x1b8794: 0xc067b18  jal         func_19EC60
label_1b8798:
    if (ctx->pc == 0x1B8798u) {
        ctx->pc = 0x1B879Cu;
        goto label_1b879c;
    }
    ctx->pc = 0x1B8794u;
    SET_GPR_U32(ctx, 31, 0x1B879Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1B8794u, 0x1B879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B879Cu;
label_1b879c:
    // 0x1b879c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b879cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b87a0:
    // 0x1b87a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b87a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b87a4:
    // 0x1b87a4: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b87a8:
    // 0x1b87a8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b87a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1b87ac:
    // 0x1b87ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b87acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b87b0:
    // 0x1b87b0: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b87b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1b87b4:
    // 0x1b87b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b87b8:
    // 0x1b87b8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b87b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b87bc:
    // 0x1b87bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1b87c0:
    // 0x1b87c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b87c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b87c4:
    // 0x1b87c4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b87c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1b87c8:
    // 0x1b87c8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b87c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b87cc:
    // 0x1b87cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b87d0:
    // 0x1b87d0: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1b87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
label_1b87d4:
    // 0x1b87d4: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1b87d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1b87d8:
    // 0x1b87d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b87d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b87dc:
    // 0x1b87dc: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1b87dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b87e0:
    // 0x1b87e0: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1b87e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b87e4:
    // 0x1b87e4: 0xc058f50  jal         func_163D40
label_1b87e8:
    if (ctx->pc == 0x1B87E8u) {
        ctx->pc = 0x1B87ECu;
        goto label_1b87ec;
    }
    ctx->pc = 0x1B87E4u;
    SET_GPR_U32(ctx, 31, 0x1B87ECu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B87E4u, 0x1B87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87ECu;
label_1b87ec:
    // 0x1b87ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b87f0:
    // 0x1b87f0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b87f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1b87f4:
    // 0x1b87f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b87f8:
    // 0x1b87f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b87f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b87fc:
    // 0x1b87fc: 0xc096b40  jal         func_25AD00
label_1b8800:
    if (ctx->pc == 0x1B8800u) {
        ctx->pc = 0x1B8804u;
        goto label_1b8804;
    }
    ctx->pc = 0x1B87FCu;
    SET_GPR_U32(ctx, 31, 0x1B8804u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B87FCu, 0x1B8804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8804u;
label_1b8804:
    // 0x1b8804: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8808:
    // 0x1b8808: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b880c:
    // 0x1b880c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8810:
    // 0x1b8810: 0xc05cd58  jal         func_173560
label_1b8814:
    if (ctx->pc == 0x1B8814u) {
        ctx->pc = 0x1B8818u;
        goto label_1b8818;
    }
    ctx->pc = 0x1B8810u;
    SET_GPR_U32(ctx, 31, 0x1B8818u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B8810u, 0x1B8818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8818u;
label_1b8818:
    // 0x1b8818: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8818u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b881c:
    // 0x1b881c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b881cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8820:
    // 0x1b8820: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8824:
    // 0x1b8824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b8828:
    // 0x1b8828: 0xc057480  jal         func_15D200
label_1b882c:
    if (ctx->pc == 0x1B882Cu) {
        ctx->pc = 0x1B8830u;
        goto label_1b8830;
    }
    ctx->pc = 0x1B8828u;
    SET_GPR_U32(ctx, 31, 0x1B8830u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B8828u, 0x1B8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8830u;
label_1b8830:
    // 0x1b8830: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8830u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8834:
    // 0x1b8834: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8838:
    // 0x1b8838: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1b8838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1b883c:
    // 0x1b883c: 0xc057a80  jal         func_15EA00
label_1b8840:
    if (ctx->pc == 0x1B8840u) {
        ctx->pc = 0x1B8844u;
        goto label_1b8844;
    }
    ctx->pc = 0x1B883Cu;
    SET_GPR_U32(ctx, 31, 0x1B8844u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B883Cu, 0x1B8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8844u;
label_1b8844:
    // 0x1b8844: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x1b8844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
label_1b8848:
    // 0x1b8848: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1b8848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1b884c:
    // 0x1b884c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b884cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8850:
    // 0x1b8850: 0x0  nop
    ctx->pc = 0x1b8850u;
    // NOP
label_1b8854:
    // 0x1b8854: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b8854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b8858:
    // 0x1b8858: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1b885c:
    // 0x1b885c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8860:
    // 0x1b8860: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b8860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8864:
    // 0x1b8864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8868:
    // 0x1b8868: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b8868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b886c:
    // 0x1b886c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b886cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b8870:
    // 0x1b8870: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b8870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b8874:
    // 0x1b8874: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8878:
    // 0x1b8878: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b887c:
    // 0x1b887c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8880:
    // 0x1b8880: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8884:
    // 0x1b8884: 0x0  nop
    ctx->pc = 0x1b8884u;
    // NOP
label_1b8888:
    // 0x1b8888: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b888c:
    if (ctx->pc == 0x1B888Cu) {
        ctx->pc = 0x1B8890u;
        goto label_1b8890;
    }
    ctx->pc = 0x1B8888u;
    {
        const bool branch_taken_0x1b8888 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8888) {
            ctx->pc = 0x1B889Cu;
            goto label_1b889c;
        }
    }
    ctx->pc = 0x1B8890u;
label_1b8890:
    // 0x1b8890: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8894:
    // 0x1b8894: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8898:
    // 0x1b8898: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b8898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1b889c:
    // 0x1b889c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b88a0:
    // 0x1b88a0: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1b88a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b88a4:
    // 0x1b88a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b88a8:
    // 0x1b88a8: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b88a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b88ac:
    // 0x1b88ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b88acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b88b0:
    // 0x1b88b0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b88b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b88b4:
    // 0x1b88b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b88b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b88b8:
    // 0x1b88b8: 0xc097530  jal         func_25D4C0
label_1b88bc:
    if (ctx->pc == 0x1B88BCu) {
        ctx->pc = 0x1B88C0u;
        goto label_1b88c0;
    }
    ctx->pc = 0x1B88B8u;
    SET_GPR_U32(ctx, 31, 0x1B88C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B88B8u, 0x1B88C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88C0u;
label_1b88c0:
    // 0x1b88c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b88c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b88c4:
    // 0x1b88c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b88c8:
    // 0x1b88c8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b88c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b88cc:
    // 0x1b88cc: 0x106003af  beqz        $v1, . + 4 + (0x3AF << 2)
label_1b88d0:
    if (ctx->pc == 0x1B88D0u) {
        ctx->pc = 0x1B88D4u;
        goto label_1b88d4;
    }
    ctx->pc = 0x1B88CCu;
    {
        const bool branch_taken_0x1b88cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b88cc) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B88D4u;
label_1b88d4:
    // 0x1b88d4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b88d8:
    // 0x1b88d8: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1b88d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1b88dc:
    // 0x1b88dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b88e0:
    // 0x1b88e0: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1b88e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b88e4:
    // 0x1b88e4: 0x100003a9  b           . + 4 + (0x3A9 << 2)
label_1b88e8:
    if (ctx->pc == 0x1B88E8u) {
        ctx->pc = 0x1B88ECu;
        goto label_1b88ec;
    }
    ctx->pc = 0x1B88E4u;
    {
        const bool branch_taken_0x1b88e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b88e4) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B88ECu;
label_1b88ec:
    // 0x1b88ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b88f0:
    // 0x1b88f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b88f4:
    // 0x1b88f4: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x1b88f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1b88f8:
    // 0x1b88f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b88fc:
    // 0x1b88fc: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1b88fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_1b8900:
    // 0x1b8900: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8904:
    // 0x1b8904: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8908:
    // 0x1b8908: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b8908u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b890c:
    // 0x1b890c: 0x8cc70368  lw          $a3, 0x368($a2)
    ctx->pc = 0x1b890cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
label_1b8910:
    // 0x1b8910: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1b8910u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1b8914:
    // 0x1b8914: 0x2408004f  addiu       $t0, $zero, 0x4F
    ctx->pc = 0x1b8914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1b8918:
    // 0x1b8918: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x1b8918u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1b891c:
    // 0x1b891c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b891cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8920:
    // 0x1b8920: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b8920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b8924:
    // 0x1b8924: 0xc0965d0  jal         func_259740
label_1b8928:
    if (ctx->pc == 0x1B8928u) {
        ctx->pc = 0x1B892Cu;
        goto label_1b892c;
    }
    ctx->pc = 0x1B8924u;
    SET_GPR_U32(ctx, 31, 0x1B892Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B8924u, 0x1B892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B892Cu;
label_1b892c:
    // 0x1b892c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8930:
    // 0x1b8930: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1b8930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1b8934:
    // 0x1b8934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b8938:
    // 0x1b8938: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1b8938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b893c:
    // 0x1b893c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b893cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b8940:
    // 0x1b8940: 0x8c241a64  lw          $a0, 0x1A64($at)
    ctx->pc = 0x1b8940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b8944:
    // 0x1b8944: 0x34850100  ori         $a1, $a0, 0x100
    ctx->pc = 0x1b8944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_1b8948:
    // 0x1b8948: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b894c:
    // 0x1b894c: 0xac251a64  sw          $a1, 0x1A64($at)
    ctx->pc = 0x1b894cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 5));
label_1b8950:
    // 0x1b8950: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8954:
    // 0x1b8954: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b8954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b8958:
    // 0x1b8958: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1b8958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1b895c:
    // 0x1b895c: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x1b895cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1b8960:
    // 0x1b8960: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1b8960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1b8964:
    // 0x1b8964: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8968:
    // 0x1b8968: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b896c:
    // 0x1b896c: 0xc096b40  jal         func_25AD00
label_1b8970:
    if (ctx->pc == 0x1B8970u) {
        ctx->pc = 0x1B8974u;
        goto label_1b8974;
    }
    ctx->pc = 0x1B896Cu;
    SET_GPR_U32(ctx, 31, 0x1B8974u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B896Cu, 0x1B8974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8974u;
label_1b8974:
    // 0x1b8974: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8978:
    // 0x1b8978: 0x8c641b64  lw          $a0, 0x1B64($v1)
    ctx->pc = 0x1b8978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_1b897c:
    // 0x1b897c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1b8980:
    if (ctx->pc == 0x1B8980u) {
        ctx->pc = 0x1B8984u;
        goto label_1b8984;
    }
    ctx->pc = 0x1B897Cu;
    {
        const bool branch_taken_0x1b897c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b897c) {
            ctx->pc = 0x1B89A8u;
            goto label_1b89a8;
        }
    }
    ctx->pc = 0x1B8984u;
label_1b8984:
    // 0x1b8984: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8988:
    // 0x1b8988: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b898c:
    // 0x1b898c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b898cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_1b8990:
    // 0x1b8990: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x1b8990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1b8994:
    // 0x1b8994: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1b8994u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8998:
    // 0x1b8998: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x1b8998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b899c:
    // 0x1b899c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1b899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1b89a0:
    // 0x1b89a0: 0xc040ed8  jal         func_103B60
label_1b89a4:
    if (ctx->pc == 0x1B89A4u) {
        ctx->pc = 0x1B89A8u;
        goto label_1b89a8;
    }
    ctx->pc = 0x1B89A0u;
    SET_GPR_U32(ctx, 31, 0x1B89A8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B89A8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B89A8u) { return; }
    ctx->pc = 0x1B89A8u;
label_1b89a8:
    // 0x1b89a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b89ac:
    // 0x1b89ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b89acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b89b0:
    // 0x1b89b0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b89b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b89b4:
    // 0x1b89b4: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x1b89b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b89b8:
    // 0x1b89b8: 0xc058f20  jal         func_163C80
label_1b89bc:
    if (ctx->pc == 0x1B89BCu) {
        ctx->pc = 0x1B89C0u;
        goto label_1b89c0;
    }
    ctx->pc = 0x1B89B8u;
    SET_GPR_U32(ctx, 31, 0x1B89C0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B89B8u, 0x1B89C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89C0u;
label_1b89c0:
    // 0x1b89c0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b89c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b89c4:
    // 0x1b89c4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b89c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b89c8:
    // 0x1b89c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b89c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b89cc:
    // 0x1b89cc: 0x0  nop
    ctx->pc = 0x1b89ccu;
    // NOP
label_1b89d0:
    // 0x1b89d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b89d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b89d4:
    // 0x1b89d4: 0x0  nop
    ctx->pc = 0x1b89d4u;
    // NOP
label_1b89d8:
    // 0x1b89d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b89dc:
    if (ctx->pc == 0x1B89DCu) {
        ctx->pc = 0x1B89E0u;
        goto label_1b89e0;
    }
    ctx->pc = 0x1B89D8u;
    {
        const bool branch_taken_0x1b89d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b89d8) {
            ctx->pc = 0x1B89F4u;
            goto label_1b89f4;
        }
    }
    ctx->pc = 0x1B89E0u;
label_1b89e0:
    // 0x1b89e0: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1b89e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_1b89e4:
    // 0x1b89e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b89e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b89e8:
    // 0x1b89e8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b89e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b89ec:
    // 0x1b89ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b89ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b89f0:
    // 0x1b89f0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b89f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b89f4:
    // 0x1b89f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b89f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b89f8:
    // 0x1b89f8: 0xc4a11b5c  lwc1        $f1, 0x1B5C($a1)
    ctx->pc = 0x1b89f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b89fc:
    // 0x1b89fc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1b8a00:
    // 0x1b8a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8a04:
    // 0x1b8a04: 0x0  nop
    ctx->pc = 0x1b8a04u;
    // NOP
label_1b8a08:
    // 0x1b8a08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8a0c:
    // 0x1b8a0c: 0x0  nop
    ctx->pc = 0x1b8a0cu;
    // NOP
label_1b8a10:
    // 0x1b8a10: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b8a14:
    if (ctx->pc == 0x1B8A14u) {
        ctx->pc = 0x1B8A18u;
        goto label_1b8a18;
    }
    ctx->pc = 0x1B8A10u;
    {
        const bool branch_taken_0x1b8a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8a10) {
            ctx->pc = 0x1B8AF4u;
            goto label_1b8af4;
        }
    }
    ctx->pc = 0x1B8A18u;
label_1b8a18:
    // 0x1b8a18: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8a1c:
    // 0x1b8a1c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1b8a20:
    // 0x1b8a20: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b8a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1b8a24:
    // 0x1b8a24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8a28:
    // 0x1b8a28: 0x0  nop
    ctx->pc = 0x1b8a28u;
    // NOP
label_1b8a2c:
    // 0x1b8a2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8a30:
    // 0x1b8a30: 0x0  nop
    ctx->pc = 0x1b8a30u;
    // NOP
label_1b8a34:
    // 0x1b8a34: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b8a38:
    if (ctx->pc == 0x1B8A38u) {
        ctx->pc = 0x1B8A3Cu;
        goto label_1b8a3c;
    }
    ctx->pc = 0x1B8A34u;
    {
        const bool branch_taken_0x1b8a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8a34) {
            ctx->pc = 0x1B8A98u;
            goto label_1b8a98;
        }
    }
    ctx->pc = 0x1B8A3Cu;
label_1b8a3c:
    // 0x1b8a3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8a40:
    // 0x1b8a40: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b8a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8a44:
    // 0x1b8a44: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b8a48:
    // 0x1b8a48: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b8a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b8a4c:
    // 0x1b8a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8a50:
    // 0x1b8a50: 0x0  nop
    ctx->pc = 0x1b8a50u;
    // NOP
label_1b8a54:
    // 0x1b8a54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b8a54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b8a58:
    // 0x1b8a58: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b8a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b8a5c:
    // 0x1b8a5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8a60:
    // 0x1b8a60: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b8a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8a64:
    // 0x1b8a64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b8a68:
    // 0x1b8a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8a6c:
    // 0x1b8a6c: 0x0  nop
    ctx->pc = 0x1b8a6cu;
    // NOP
label_1b8a70:
    // 0x1b8a70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8a74:
    // 0x1b8a74: 0x0  nop
    ctx->pc = 0x1b8a74u;
    // NOP
label_1b8a78:
    // 0x1b8a78: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b8a7c:
    if (ctx->pc == 0x1B8A7Cu) {
        ctx->pc = 0x1B8A80u;
        goto label_1b8a80;
    }
    ctx->pc = 0x1B8A78u;
    {
        const bool branch_taken_0x1b8a78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8a78) {
            ctx->pc = 0x1B8AF4u;
            goto label_1b8af4;
        }
    }
    ctx->pc = 0x1B8A80u;
label_1b8a80:
    // 0x1b8a80: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1b8a84:
    // 0x1b8a84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8a84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8a88:
    // 0x1b8a88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8a8c:
    // 0x1b8a8c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b8a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b8a90:
    // 0x1b8a90: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b8a94:
    if (ctx->pc == 0x1B8A94u) {
        ctx->pc = 0x1B8A98u;
        goto label_1b8a98;
    }
    ctx->pc = 0x1B8A90u;
    {
        const bool branch_taken_0x1b8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a90) {
            ctx->pc = 0x1B8AF4u;
            goto label_1b8af4;
        }
    }
    ctx->pc = 0x1B8A98u;
label_1b8a98:
    // 0x1b8a98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8a9c:
    // 0x1b8a9c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b8a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8aa0:
    // 0x1b8aa0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b8aa4:
    // 0x1b8aa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b8aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b8aa8:
    // 0x1b8aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8aac:
    // 0x1b8aac: 0x0  nop
    ctx->pc = 0x1b8aacu;
    // NOP
label_1b8ab0:
    // 0x1b8ab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8ab4:
    // 0x1b8ab4: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b8ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b8ab8:
    // 0x1b8ab8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8abc:
    // 0x1b8abc: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b8abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8ac0:
    // 0x1b8ac0: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1b8ac4:
    // 0x1b8ac4: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x1b8ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1b8ac8:
    // 0x1b8ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8acc:
    // 0x1b8acc: 0x0  nop
    ctx->pc = 0x1b8accu;
    // NOP
label_1b8ad0:
    // 0x1b8ad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8ad4:
    // 0x1b8ad4: 0x0  nop
    ctx->pc = 0x1b8ad4u;
    // NOP
label_1b8ad8:
    // 0x1b8ad8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b8adc:
    if (ctx->pc == 0x1B8ADCu) {
        ctx->pc = 0x1B8AE0u;
        goto label_1b8ae0;
    }
    ctx->pc = 0x1B8AD8u;
    {
        const bool branch_taken_0x1b8ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8ad8) {
            ctx->pc = 0x1B8AF4u;
            goto label_1b8af4;
        }
    }
    ctx->pc = 0x1B8AE0u;
label_1b8ae0:
    // 0x1b8ae0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_1b8ae4:
    // 0x1b8ae4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b8ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1b8ae8:
    // 0x1b8ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8aec:
    // 0x1b8aec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8af0:
    // 0x1b8af0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b8af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b8af4:
    // 0x1b8af4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8af8:
    // 0x1b8af8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8afc:
    // 0x1b8afc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8b00:
    // 0x1b8b00: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b8b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1b8b04:
    // 0x1b8b04: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b8b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b8b08:
    // 0x1b8b08: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1b8b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8b0c:
    // 0x1b8b0c: 0xc040ed8  jal         func_103B60
label_1b8b10:
    if (ctx->pc == 0x1B8B10u) {
        ctx->pc = 0x1B8B14u;
        goto label_1b8b14;
    }
    ctx->pc = 0x1B8B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B8B14u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B8B14u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B8B14u) { return; }
    ctx->pc = 0x1B8B14u;
label_1b8b14:
    // 0x1b8b14: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8b18:
    // 0x1b8b18: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b8b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8b1c:
    // 0x1b8b1c: 0xc60c1290  lwc1        $f12, 0x1290($s0)
    ctx->pc = 0x1b8b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8b20:
    // 0x1b8b20: 0xc05cd58  jal         func_173560
label_1b8b24:
    if (ctx->pc == 0x1B8B24u) {
        ctx->pc = 0x1B8B28u;
        goto label_1b8b28;
    }
    ctx->pc = 0x1B8B20u;
    SET_GPR_U32(ctx, 31, 0x1B8B28u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B8B20u, 0x1B8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B28u;
label_1b8b28:
    // 0x1b8b28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8b28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8b2c:
    // 0x1b8b2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b8b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8b30:
    // 0x1b8b30: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b8b30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8b34:
    // 0x1b8b34: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1b8b34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1b8b38:
    // 0x1b8b38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8b38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b8b3c:
    // 0x1b8b3c: 0xc057480  jal         func_15D200
label_1b8b40:
    if (ctx->pc == 0x1B8B40u) {
        ctx->pc = 0x1B8B44u;
        goto label_1b8b44;
    }
    ctx->pc = 0x1B8B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8B44u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B8B3Cu, 0x1B8B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B44u;
label_1b8b44:
    // 0x1b8b44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b8b44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8b48:
    // 0x1b8b48: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8b4c:
    // 0x1b8b4c: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1b8b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_1b8b50:
    // 0x1b8b50: 0xc057a80  jal         func_15EA00
label_1b8b54:
    if (ctx->pc == 0x1B8B54u) {
        ctx->pc = 0x1B8B58u;
        goto label_1b8b58;
    }
    ctx->pc = 0x1B8B50u;
    SET_GPR_U32(ctx, 31, 0x1B8B58u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B8B50u, 0x1B8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B58u;
label_1b8b58:
    // 0x1b8b58: 0x3c044467  lui         $a0, 0x4467
    ctx->pc = 0x1b8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17511 << 16));
label_1b8b5c:
    // 0x1b8b5c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1b8b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1b8b60:
    // 0x1b8b60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b8b60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8b64:
    // 0x1b8b64: 0x0  nop
    ctx->pc = 0x1b8b64u;
    // NOP
label_1b8b68:
    // 0x1b8b68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b8b68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b8b6c:
    // 0x1b8b6c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1b8b70:
    // 0x1b8b70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8b74:
    // 0x1b8b74: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b8b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8b78:
    // 0x1b8b78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8b7c:
    // 0x1b8b7c: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x1b8b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8b80:
    // 0x1b8b80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b8b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b8b84:
    // 0x1b8b84: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b8b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1b8b88:
    // 0x1b8b88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8b8c:
    // 0x1b8b8c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b8b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8b90:
    // 0x1b8b90: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8b94:
    // 0x1b8b94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8b98:
    // 0x1b8b98: 0x0  nop
    ctx->pc = 0x1b8b98u;
    // NOP
label_1b8b9c:
    // 0x1b8b9c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b8ba0:
    if (ctx->pc == 0x1B8BA0u) {
        ctx->pc = 0x1B8BA4u;
        goto label_1b8ba4;
    }
    ctx->pc = 0x1B8B9Cu;
    {
        const bool branch_taken_0x1b8b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8b9c) {
            ctx->pc = 0x1B8BB0u;
            goto label_1b8bb0;
        }
    }
    ctx->pc = 0x1B8BA4u;
label_1b8ba4:
    // 0x1b8ba4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8ba8:
    // 0x1b8ba8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8bac:
    // 0x1b8bac: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b8bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1b8bb0:
    // 0x1b8bb0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8bb4:
    // 0x1b8bb4: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1b8bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8bb8:
    // 0x1b8bb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8bbc:
    // 0x1b8bbc: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8bc0:
    // 0x1b8bc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b8bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b8bc4:
    // 0x1b8bc4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b8bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b8bc8:
    // 0x1b8bc8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b8bc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b8bcc:
    // 0x1b8bcc: 0xc097530  jal         func_25D4C0
label_1b8bd0:
    if (ctx->pc == 0x1B8BD0u) {
        ctx->pc = 0x1B8BD4u;
        goto label_1b8bd4;
    }
    ctx->pc = 0x1B8BCCu;
    SET_GPR_U32(ctx, 31, 0x1B8BD4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B8BCCu, 0x1B8BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8BD4u;
label_1b8bd4:
    // 0x1b8bd4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b8bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8bd8:
    // 0x1b8bd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8bdc:
    // 0x1b8bdc: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1b8bdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_1b8be0:
    // 0x1b8be0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b8be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b8be4:
    // 0x1b8be4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1b8be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1b8be8:
    // 0x1b8be8: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_1b8bec:
    if (ctx->pc == 0x1B8BECu) {
        ctx->pc = 0x1B8BF0u;
        goto label_1b8bf0;
    }
    ctx->pc = 0x1B8BE8u;
    {
        const bool branch_taken_0x1b8be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8be8) {
            ctx->pc = 0x1B8C94u;
            goto label_1b8c94;
        }
    }
    ctx->pc = 0x1B8BF0u;
label_1b8bf0:
    // 0x1b8bf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8bf4:
    // 0x1b8bf4: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x1b8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
label_1b8bf8:
    // 0x1b8bf8: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x1b8bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1b8bfc:
    // 0x1b8bfc: 0xc0587a8  jal         func_161EA0
label_1b8c00:
    if (ctx->pc == 0x1B8C00u) {
        ctx->pc = 0x1B8C04u;
        goto label_1b8c04;
    }
    ctx->pc = 0x1B8BFCu;
    SET_GPR_U32(ctx, 31, 0x1B8C04u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B8BFCu, 0x1B8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C04u;
label_1b8c04:
    // 0x1b8c04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b8c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8c08:
    // 0x1b8c08: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
label_1b8c0c:
    if (ctx->pc == 0x1B8C0Cu) {
        ctx->pc = 0x1B8C10u;
        goto label_1b8c10;
    }
    ctx->pc = 0x1B8C08u;
    {
        const bool branch_taken_0x1b8c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c08) {
            ctx->pc = 0x1B8D4Cu;
            goto label_1b8d4c;
        }
    }
    ctx->pc = 0x1B8C10u;
label_1b8c10:
    // 0x1b8c10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8c14:
    // 0x1b8c14: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b8c18:
    // 0x1b8c18: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b8c1c:
    // 0x1b8c1c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1b8c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b8c20:
    // 0x1b8c20: 0x10a002da  beqz        $a1, . + 4 + (0x2DA << 2)
label_1b8c24:
    if (ctx->pc == 0x1B8C24u) {
        ctx->pc = 0x1B8C28u;
        goto label_1b8c28;
    }
    ctx->pc = 0x1B8C20u;
    {
        const bool branch_taken_0x1b8c20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c20) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8C28u;
label_1b8c28:
    // 0x1b8c28: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8c2c:
    // 0x1b8c2c: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1b8c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b8c30:
    // 0x1b8c30: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b8c34:
    // 0x1b8c34: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1b8c34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b8c38:
    // 0x1b8c38: 0xe82024  and         $a0, $a3, $t0
    ctx->pc = 0x1b8c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_1b8c3c:
    // 0x1b8c3c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1b8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1b8c40:
    // 0x1b8c40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8c44:
    // 0x1b8c44: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1b8c44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b8c48:
    // 0x1b8c48: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b8c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b8c4c:
    // 0x1b8c4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b8c50:
    // 0x1b8c50: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
label_1b8c54:
    if (ctx->pc == 0x1B8C54u) {
        ctx->pc = 0x1B8C58u;
        goto label_1b8c58;
    }
    ctx->pc = 0x1B8C50u;
    {
        const bool branch_taken_0x1b8c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b8c50) {
            ctx->pc = 0x1B8C80u;
            goto label_1b8c80;
        }
    }
    ctx->pc = 0x1B8C58u;
label_1b8c58:
    // 0x1b8c58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8c5c:
    // 0x1b8c5c: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
label_1b8c60:
    if (ctx->pc == 0x1B8C60u) {
        ctx->pc = 0x1B8C64u;
        goto label_1b8c64;
    }
    ctx->pc = 0x1B8C5Cu;
    {
        const bool branch_taken_0x1b8c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1b8c5c) {
            ctx->pc = 0x1B8C80u;
            goto label_1b8c80;
        }
    }
    ctx->pc = 0x1B8C64u;
label_1b8c64:
    // 0x1b8c64: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b8c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8c68:
    // 0x1b8c68: 0x106702c8  beq         $v1, $a3, . + 4 + (0x2C8 << 2)
label_1b8c6c:
    if (ctx->pc == 0x1B8C6Cu) {
        ctx->pc = 0x1B8C70u;
        goto label_1b8c70;
    }
    ctx->pc = 0x1B8C68u;
    {
        const bool branch_taken_0x1b8c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1b8c68) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8C70u;
label_1b8c70:
    // 0x1b8c70: 0x106002c6  beqz        $v1, . + 4 + (0x2C6 << 2)
label_1b8c74:
    if (ctx->pc == 0x1B8C74u) {
        ctx->pc = 0x1B8C78u;
        goto label_1b8c78;
    }
    ctx->pc = 0x1B8C70u;
    {
        const bool branch_taken_0x1b8c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c70) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8C78u;
label_1b8c78:
    // 0x1b8c78: 0x100002c4  b           . + 4 + (0x2C4 << 2)
label_1b8c7c:
    if (ctx->pc == 0x1B8C7Cu) {
        ctx->pc = 0x1B8C80u;
        goto label_1b8c80;
    }
    ctx->pc = 0x1B8C78u;
    {
        const bool branch_taken_0x1b8c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c78) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8C80u;
label_1b8c80:
    // 0x1b8c80: 0xc0c5238  jal         func_3148E0
label_1b8c84:
    if (ctx->pc == 0x1B8C84u) {
        ctx->pc = 0x1B8C88u;
        goto label_1b8c88;
    }
    ctx->pc = 0x1B8C80u;
    SET_GPR_U32(ctx, 31, 0x1B8C88u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B8C80u, 0x1B8C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C88u;
label_1b8c88:
    // 0x1b8c88: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b8c88u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8c8c:
    // 0x1b8c8c: 0x100002bf  b           . + 4 + (0x2BF << 2)
label_1b8c90:
    if (ctx->pc == 0x1B8C90u) {
        ctx->pc = 0x1B8C94u;
        goto label_1b8c94;
    }
    ctx->pc = 0x1B8C8Cu;
    {
        const bool branch_taken_0x1b8c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c8c) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8C94u;
label_1b8c94:
    // 0x1b8c94: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b8c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b8c98:
    // 0x1b8c98: 0xc0587a8  jal         func_161EA0
label_1b8c9c:
    if (ctx->pc == 0x1B8C9Cu) {
        ctx->pc = 0x1B8CA0u;
        goto label_1b8ca0;
    }
    ctx->pc = 0x1B8C98u;
    SET_GPR_U32(ctx, 31, 0x1B8CA0u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B8C98u, 0x1B8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8CA0u;
label_1b8ca0:
    // 0x1b8ca0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1b8ca0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8ca4:
    // 0x1b8ca4: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_1b8ca8:
    if (ctx->pc == 0x1B8CA8u) {
        ctx->pc = 0x1B8CACu;
        goto label_1b8cac;
    }
    ctx->pc = 0x1B8CA4u;
    {
        const bool branch_taken_0x1b8ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ca4) {
            ctx->pc = 0x1B8D4Cu;
            goto label_1b8d4c;
        }
    }
    ctx->pc = 0x1B8CACu;
label_1b8cac:
    // 0x1b8cac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b8cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8cb0:
    // 0x1b8cb0: 0x16240006  bne         $s1, $a0, . + 4 + (0x6 << 2)
label_1b8cb4:
    if (ctx->pc == 0x1B8CB4u) {
        ctx->pc = 0x1B8CB8u;
        goto label_1b8cb8;
    }
    ctx->pc = 0x1B8CB0u;
    {
        const bool branch_taken_0x1b8cb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b8cb0) {
            ctx->pc = 0x1B8CCCu;
            goto label_1b8ccc;
        }
    }
    ctx->pc = 0x1B8CB8u;
label_1b8cb8:
    // 0x1b8cb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8cbc:
    // 0x1b8cbc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8cc0:
    // 0x1b8cc0: 0xaca31b68  sw          $v1, 0x1B68($a1)
    ctx->pc = 0x1b8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 3));
label_1b8cc4:
    // 0x1b8cc4: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b8cc8:
    if (ctx->pc == 0x1B8CC8u) {
        ctx->pc = 0x1B8CCCu;
        goto label_1b8ccc;
    }
    ctx->pc = 0x1B8CC4u;
    {
        const bool branch_taken_0x1b8cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cc4) {
            ctx->pc = 0x1B8D4Cu;
            goto label_1b8d4c;
        }
    }
    ctx->pc = 0x1B8CCCu;
label_1b8ccc:
    // 0x1b8ccc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8cd0:
    // 0x1b8cd0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b8cd4:
    // 0x1b8cd4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b8cd8:
    // 0x1b8cd8: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1b8cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b8cdc:
    // 0x1b8cdc: 0x10a002ab  beqz        $a1, . + 4 + (0x2AB << 2)
label_1b8ce0:
    if (ctx->pc == 0x1B8CE0u) {
        ctx->pc = 0x1B8CE4u;
        goto label_1b8ce4;
    }
    ctx->pc = 0x1B8CDCu;
    {
        const bool branch_taken_0x1b8cdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cdc) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8CE4u;
label_1b8ce4:
    // 0x1b8ce4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8ce8:
    // 0x1b8ce8: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1b8ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b8cec:
    // 0x1b8cec: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b8cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b8cf0:
    // 0x1b8cf0: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1b8cf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b8cf4:
    // 0x1b8cf4: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x1b8cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_1b8cf8:
    // 0x1b8cf8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b8cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1b8cfc:
    // 0x1b8cfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8d00:
    // 0x1b8d00: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1b8d00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b8d04:
    // 0x1b8d04: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1b8d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b8d08:
    // 0x1b8d08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b8d0c:
    // 0x1b8d0c: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
label_1b8d10:
    if (ctx->pc == 0x1B8D10u) {
        ctx->pc = 0x1B8D14u;
        goto label_1b8d14;
    }
    ctx->pc = 0x1B8D0Cu;
    {
        const bool branch_taken_0x1b8d0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b8d0c) {
            ctx->pc = 0x1B8D3Cu;
            goto label_1b8d3c;
        }
    }
    ctx->pc = 0x1B8D14u;
label_1b8d14:
    // 0x1b8d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8d18:
    // 0x1b8d18: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1b8d1c:
    if (ctx->pc == 0x1B8D1Cu) {
        ctx->pc = 0x1B8D20u;
        goto label_1b8d20;
    }
    ctx->pc = 0x1B8D18u;
    {
        const bool branch_taken_0x1b8d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b8d18) {
            ctx->pc = 0x1B8D3Cu;
            goto label_1b8d3c;
        }
    }
    ctx->pc = 0x1B8D20u;
label_1b8d20:
    // 0x1b8d20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8d24:
    // 0x1b8d24: 0x10a40299  beq         $a1, $a0, . + 4 + (0x299 << 2)
label_1b8d28:
    if (ctx->pc == 0x1B8D28u) {
        ctx->pc = 0x1B8D2Cu;
        goto label_1b8d2c;
    }
    ctx->pc = 0x1B8D24u;
    {
        const bool branch_taken_0x1b8d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b8d24) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8D2Cu;
label_1b8d2c:
    // 0x1b8d2c: 0x10a00297  beqz        $a1, . + 4 + (0x297 << 2)
label_1b8d30:
    if (ctx->pc == 0x1B8D30u) {
        ctx->pc = 0x1B8D34u;
        goto label_1b8d34;
    }
    ctx->pc = 0x1B8D2Cu;
    {
        const bool branch_taken_0x1b8d2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d2c) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8D34u;
label_1b8d34:
    // 0x1b8d34: 0x10000295  b           . + 4 + (0x295 << 2)
label_1b8d38:
    if (ctx->pc == 0x1B8D38u) {
        ctx->pc = 0x1B8D3Cu;
        goto label_1b8d3c;
    }
    ctx->pc = 0x1B8D34u;
    {
        const bool branch_taken_0x1b8d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d34) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8D3Cu;
label_1b8d3c:
    // 0x1b8d3c: 0xc0c5238  jal         func_3148E0
label_1b8d40:
    if (ctx->pc == 0x1B8D40u) {
        ctx->pc = 0x1B8D44u;
        goto label_1b8d44;
    }
    ctx->pc = 0x1B8D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8D44u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B8D3Cu, 0x1B8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D44u;
label_1b8d44:
    // 0x1b8d44: 0x10000291  b           . + 4 + (0x291 << 2)
label_1b8d48:
    if (ctx->pc == 0x1B8D48u) {
        ctx->pc = 0x1B8D4Cu;
        goto label_1b8d4c;
    }
    ctx->pc = 0x1B8D44u;
    {
        const bool branch_taken_0x1b8d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d44) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8D4Cu;
label_1b8d4c:
    // 0x1b8d4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8d50:
    // 0x1b8d50: 0x906609e7  lbu         $a2, 0x9E7($v1)
    ctx->pc = 0x1b8d50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b8d54:
    // 0x1b8d54: 0x10c0028d  beqz        $a2, . + 4 + (0x28D << 2)
label_1b8d58:
    if (ctx->pc == 0x1B8D58u) {
        ctx->pc = 0x1B8D5Cu;
        goto label_1b8d5c;
    }
    ctx->pc = 0x1B8D54u;
    {
        const bool branch_taken_0x1b8d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d54) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8D5Cu;
label_1b8d5c:
    // 0x1b8d5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8d60:
    // 0x1b8d60: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1b8d60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b8d64:
    // 0x1b8d64: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1b8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b8d68:
    // 0x1b8d68: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b8d68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b8d6c:
    // 0x1b8d6c: 0x10000287  b           . + 4 + (0x287 << 2)
label_1b8d70:
    if (ctx->pc == 0x1B8D70u) {
        ctx->pc = 0x1B8D74u;
        goto label_1b8d74;
    }
    ctx->pc = 0x1B8D6Cu;
    {
        const bool branch_taken_0x1b8d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d6c) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B8D74u;
label_1b8d74:
    // 0x1b8d74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8d78:
    // 0x1b8d78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8d7c:
    // 0x1b8d7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b8d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1b8d80:
    // 0x1b8d80: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1b8d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1b8d84:
    // 0x1b8d84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b8d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8d88:
    // 0x1b8d88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b8d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b8d8c:
    // 0x1b8d8c: 0xc0965d0  jal         func_259740
label_1b8d90:
    if (ctx->pc == 0x1B8D90u) {
        ctx->pc = 0x1B8D94u;
        goto label_1b8d94;
    }
    ctx->pc = 0x1B8D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B8D94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B8D8Cu, 0x1B8D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D94u;
label_1b8d94:
    // 0x1b8d94: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
label_1b8d98:
    // 0x1b8d98: 0x34443334  ori         $a0, $v0, 0x3334
    ctx->pc = 0x1b8d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
label_1b8d9c:
    // 0x1b8d9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8d9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8da0:
    // 0x1b8da0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8da4:
    // 0x1b8da4: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1b8da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1b8da8:
    // 0x1b8da8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8dac:
    // 0x1b8dac: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1b8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1b8db0:
    // 0x1b8db0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8db4:
    // 0x1b8db4: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1b8db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b8db8:
    // 0x1b8db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b8dbc:
    // 0x1b8dbc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1b8dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b8dc0:
    // 0x1b8dc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b8dc4:
    // 0x1b8dc4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b8dc8:
    // 0x1b8dc8: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x1b8dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1b8dcc:
    // 0x1b8dcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b8dd0:
    // 0x1b8dd0: 0xac241a64  sw          $a0, 0x1A64($at)
    ctx->pc = 0x1b8dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 4));
label_1b8dd4:
    // 0x1b8dd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8dd8:
    // 0x1b8dd8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b8ddc:
    // 0x1b8ddc: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1b8de0:
    // 0x1b8de0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b8de4:
    // 0x1b8de4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1b8de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1b8de8:
    // 0x1b8de8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8dec:
    // 0x1b8dec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b8df0:
    // 0x1b8df0: 0xc096b40  jal         func_25AD00
label_1b8df4:
    if (ctx->pc == 0x1B8DF4u) {
        ctx->pc = 0x1B8DF8u;
        goto label_1b8df8;
    }
    ctx->pc = 0x1B8DF0u;
    SET_GPR_U32(ctx, 31, 0x1B8DF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B8DF0u, 0x1B8DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DF8u;
label_1b8df8:
    // 0x1b8df8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8dfc:
    // 0x1b8dfc: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1b8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1b8e00:
    // 0x1b8e00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b8e04:
    if (ctx->pc == 0x1B8E04u) {
        ctx->pc = 0x1B8E08u;
        goto label_1b8e08;
    }
    ctx->pc = 0x1B8E00u;
    {
        const bool branch_taken_0x1b8e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e00) {
            ctx->pc = 0x1B8E38u;
            goto label_1b8e38;
        }
    }
    ctx->pc = 0x1B8E08u;
label_1b8e08:
    // 0x1b8e08: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8e0c:
    // 0x1b8e0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8e10:
    // 0x1b8e10: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x1b8e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
label_1b8e14:
    // 0x1b8e14: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x1b8e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_1b8e18:
    // 0x1b8e18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8e1c:
    // 0x1b8e1c: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b8e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b8e20:
    // 0x1b8e20: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b8e20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b8e24:
    // 0x1b8e24: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x1b8e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b8e28:
    // 0x1b8e28: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1b8e28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1b8e2c:
    // 0x1b8e2c: 0xc040ed8  jal         func_103B60
label_1b8e30:
    if (ctx->pc == 0x1B8E30u) {
        ctx->pc = 0x1B8E34u;
        goto label_1b8e34;
    }
    ctx->pc = 0x1B8E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E34u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B8E34u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B8E34u) { return; }
    ctx->pc = 0x1B8E34u;
label_1b8e34:
    // 0x1b8e34: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b8e34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8e38:
    // 0x1b8e38: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b8e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8e3c:
    // 0x1b8e3c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b8e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8e40:
    // 0x1b8e40: 0xc4ec1290  lwc1        $f12, 0x1290($a3)
    ctx->pc = 0x1b8e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8e44:
    // 0x1b8e44: 0xc50d1380  lwc1        $f13, 0x1380($t0)
    ctx->pc = 0x1b8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b8e48:
    // 0x1b8e48: 0xc058f20  jal         func_163C80
label_1b8e4c:
    if (ctx->pc == 0x1B8E4Cu) {
        ctx->pc = 0x1B8E50u;
        goto label_1b8e50;
    }
    ctx->pc = 0x1B8E48u;
    SET_GPR_U32(ctx, 31, 0x1B8E50u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B8E48u, 0x1B8E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E50u;
label_1b8e50:
    // 0x1b8e50: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b8e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b8e54:
    // 0x1b8e54: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8e58:
    // 0x1b8e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8e5c:
    // 0x1b8e5c: 0x0  nop
    ctx->pc = 0x1b8e5cu;
    // NOP
label_1b8e60:
    // 0x1b8e60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8e64:
    // 0x1b8e64: 0x0  nop
    ctx->pc = 0x1b8e64u;
    // NOP
label_1b8e68:
    // 0x1b8e68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b8e6c:
    if (ctx->pc == 0x1B8E6Cu) {
        ctx->pc = 0x1B8E70u;
        goto label_1b8e70;
    }
    ctx->pc = 0x1B8E68u;
    {
        const bool branch_taken_0x1b8e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8e68) {
            ctx->pc = 0x1B8E84u;
            goto label_1b8e84;
        }
    }
    ctx->pc = 0x1B8E70u;
label_1b8e70:
    // 0x1b8e70: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1b8e74:
    // 0x1b8e74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b8e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8e78:
    // 0x1b8e78: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b8e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8e7c:
    // 0x1b8e7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b8e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b8e80:
    // 0x1b8e80: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b8e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b8e84:
    // 0x1b8e84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8e88:
    // 0x1b8e88: 0xc4811b5c  lwc1        $f1, 0x1B5C($a0)
    ctx->pc = 0x1b8e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8e8c:
    // 0x1b8e8c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1b8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
label_1b8e90:
    // 0x1b8e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8e94:
    // 0x1b8e94: 0x0  nop
    ctx->pc = 0x1b8e94u;
    // NOP
label_1b8e98:
    // 0x1b8e98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8e9c:
    // 0x1b8e9c: 0x0  nop
    ctx->pc = 0x1b8e9cu;
    // NOP
label_1b8ea0:
    // 0x1b8ea0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b8ea4:
    if (ctx->pc == 0x1B8EA4u) {
        ctx->pc = 0x1B8EA8u;
        goto label_1b8ea8;
    }
    ctx->pc = 0x1B8EA0u;
    {
        const bool branch_taken_0x1b8ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8ea0) {
            ctx->pc = 0x1B8F84u;
            goto label_1b8f84;
        }
    }
    ctx->pc = 0x1B8EA8u;
label_1b8ea8:
    // 0x1b8ea8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b8ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8eac:
    // 0x1b8eac: 0x3c063fc9  lui         $a2, 0x3FC9
    ctx->pc = 0x1b8eacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16329 << 16));
label_1b8eb0:
    // 0x1b8eb0: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x1b8eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
label_1b8eb4:
    // 0x1b8eb4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b8eb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8eb8:
    // 0x1b8eb8: 0x0  nop
    ctx->pc = 0x1b8eb8u;
    // NOP
label_1b8ebc:
    // 0x1b8ebc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8ec0:
    // 0x1b8ec0: 0x0  nop
    ctx->pc = 0x1b8ec0u;
    // NOP
label_1b8ec4:
    // 0x1b8ec4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b8ec8:
    if (ctx->pc == 0x1B8EC8u) {
        ctx->pc = 0x1B8ECCu;
        goto label_1b8ecc;
    }
    ctx->pc = 0x1B8EC4u;
    {
        const bool branch_taken_0x1b8ec4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8ec4) {
            ctx->pc = 0x1B8F28u;
            goto label_1b8f28;
        }
    }
    ctx->pc = 0x1B8ECCu;
label_1b8ecc:
    // 0x1b8ecc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b8eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8ed0:
    // 0x1b8ed0: 0xc4e11b50  lwc1        $f1, 0x1B50($a3)
    ctx->pc = 0x1b8ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8ed4:
    // 0x1b8ed4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1b8ed8:
    // 0x1b8ed8: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x1b8ed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1b8edc:
    // 0x1b8edc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1b8edcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8ee0:
    // 0x1b8ee0: 0x0  nop
    ctx->pc = 0x1b8ee0u;
    // NOP
label_1b8ee4:
    // 0x1b8ee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b8ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b8ee8:
    // 0x1b8ee8: 0xe4e01b50  swc1        $f0, 0x1B50($a3)
    ctx->pc = 0x1b8ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 6992), bits); }
label_1b8eec:
    // 0x1b8eec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8ef0:
    // 0x1b8ef0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b8ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8ef4:
    // 0x1b8ef4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1b8ef8:
    // 0x1b8ef8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8ef8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8efc:
    // 0x1b8efc: 0x0  nop
    ctx->pc = 0x1b8efcu;
    // NOP
label_1b8f00:
    // 0x1b8f00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8f04:
    // 0x1b8f04: 0x0  nop
    ctx->pc = 0x1b8f04u;
    // NOP
label_1b8f08:
    // 0x1b8f08: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b8f0c:
    if (ctx->pc == 0x1B8F0Cu) {
        ctx->pc = 0x1B8F10u;
        goto label_1b8f10;
    }
    ctx->pc = 0x1B8F08u;
    {
        const bool branch_taken_0x1b8f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8f08) {
            ctx->pc = 0x1B8F84u;
            goto label_1b8f84;
        }
    }
    ctx->pc = 0x1B8F10u;
label_1b8f10:
    // 0x1b8f10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b8f14:
    // 0x1b8f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8f18:
    // 0x1b8f18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8f1c:
    // 0x1b8f1c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b8f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b8f20:
    // 0x1b8f20: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b8f24:
    if (ctx->pc == 0x1B8F24u) {
        ctx->pc = 0x1B8F28u;
        goto label_1b8f28;
    }
    ctx->pc = 0x1B8F20u;
    {
        const bool branch_taken_0x1b8f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f20) {
            ctx->pc = 0x1B8F84u;
            goto label_1b8f84;
        }
    }
    ctx->pc = 0x1B8F28u;
label_1b8f28:
    // 0x1b8f28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8f2c:
    // 0x1b8f2c: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b8f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8f30:
    // 0x1b8f30: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1b8f34:
    // 0x1b8f34: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b8f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1b8f38:
    // 0x1b8f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8f3c:
    // 0x1b8f3c: 0x0  nop
    ctx->pc = 0x1b8f3cu;
    // NOP
label_1b8f40:
    // 0x1b8f40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8f44:
    // 0x1b8f44: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b8f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b8f48:
    // 0x1b8f48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8f4c:
    // 0x1b8f4c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b8f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8f50:
    // 0x1b8f50: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1b8f54:
    // 0x1b8f54: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b8f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1b8f58:
    // 0x1b8f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8f5c:
    // 0x1b8f5c: 0x0  nop
    ctx->pc = 0x1b8f5cu;
    // NOP
label_1b8f60:
    // 0x1b8f60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8f64:
    // 0x1b8f64: 0x0  nop
    ctx->pc = 0x1b8f64u;
    // NOP
label_1b8f68:
    // 0x1b8f68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b8f6c:
    if (ctx->pc == 0x1B8F6Cu) {
        ctx->pc = 0x1B8F70u;
        goto label_1b8f70;
    }
    ctx->pc = 0x1B8F68u;
    {
        const bool branch_taken_0x1b8f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8f68) {
            ctx->pc = 0x1B8F84u;
            goto label_1b8f84;
        }
    }
    ctx->pc = 0x1B8F70u;
label_1b8f70:
    // 0x1b8f70: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1b8f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
label_1b8f74:
    // 0x1b8f74: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x1b8f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_1b8f78:
    // 0x1b8f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8f7c:
    // 0x1b8f7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8f80:
    // 0x1b8f80: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b8f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b8f84:
    // 0x1b8f84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8f88:
    // 0x1b8f88: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8f8c:
    // 0x1b8f8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8f90:
    // 0x1b8f90: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1b8f94:
    // 0x1b8f94: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b8f98:
    // 0x1b8f98: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1b8f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8f9c:
    // 0x1b8f9c: 0xc040ed8  jal         func_103B60
label_1b8fa0:
    if (ctx->pc == 0x1B8FA0u) {
        ctx->pc = 0x1B8FA4u;
        goto label_1b8fa4;
    }
    ctx->pc = 0x1B8F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B8FA4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B8FA4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B8FA4u) { return; }
    ctx->pc = 0x1B8FA4u;
label_1b8fa4:
    // 0x1b8fa4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8fa4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8fa8:
    // 0x1b8fa8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8fac:
    // 0x1b8fac: 0xc05cd10  jal         func_173440
label_1b8fb0:
    if (ctx->pc == 0x1B8FB0u) {
        ctx->pc = 0x1B8FB4u;
        goto label_1b8fb4;
    }
    ctx->pc = 0x1B8FACu;
    SET_GPR_U32(ctx, 31, 0x1B8FB4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B8FACu, 0x1B8FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FB4u;
label_1b8fb4:
    // 0x1b8fb4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1b8fb4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8fb8:
    // 0x1b8fb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b8fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8fbc:
    // 0x1b8fbc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8fc0:
    // 0x1b8fc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8fc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b8fc4:
    // 0x1b8fc4: 0xc057480  jal         func_15D200
label_1b8fc8:
    if (ctx->pc == 0x1B8FC8u) {
        ctx->pc = 0x1B8FCCu;
        goto label_1b8fcc;
    }
    ctx->pc = 0x1B8FC4u;
    SET_GPR_U32(ctx, 31, 0x1B8FCCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B8FC4u, 0x1B8FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FCCu;
label_1b8fcc:
    // 0x1b8fcc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b8fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b8fd0:
    // 0x1b8fd0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8fd4:
    // 0x1b8fd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8fd8:
    // 0x1b8fd8: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1b8fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1b8fdc:
    // 0x1b8fdc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b8fdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b8fe0:
    // 0x1b8fe0: 0x246312c0  addiu       $v1, $v1, 0x12C0
    ctx->pc = 0x1b8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1b8fe4:
    // 0x1b8fe4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1b8fe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b8fe8:
    // 0x1b8fe8: 0xc05cf7c  jal         func_173DF0
label_1b8fec:
    if (ctx->pc == 0x1B8FECu) {
        ctx->pc = 0x1B8FF0u;
        goto label_1b8ff0;
    }
    ctx->pc = 0x1B8FE8u;
    SET_GPR_U32(ctx, 31, 0x1B8FF0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B8FE8u, 0x1B8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FF0u;
label_1b8ff0:
    // 0x1b8ff0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b8ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b8ff4:
    // 0x1b8ff4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b8ff8:
    // 0x1b8ff8: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8ffc:
    // 0x1b8ffc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9000:
    // 0x1b9000: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9004:
    // 0x1b9004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b9008:
    // 0x1b9008: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b900c:
    // 0x1b900c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9010:
    // 0x1b9010: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1b9010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9014:
    // 0x1b9014: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9018:
    // 0x1b9018: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b9018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b901c:
    // 0x1b901c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b901cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b9020:
    // 0x1b9020: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b9020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_1b9024:
    // 0x1b9024: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9028:
    // 0x1b9028: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b9028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b902c:
    // 0x1b902c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9030:
    // 0x1b9030: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9034:
    // 0x1b9034: 0x0  nop
    ctx->pc = 0x1b9034u;
    // NOP
label_1b9038:
    // 0x1b9038: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b903c:
    if (ctx->pc == 0x1B903Cu) {
        ctx->pc = 0x1B9040u;
        goto label_1b9040;
    }
    ctx->pc = 0x1B9038u;
    {
        const bool branch_taken_0x1b9038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9038) {
            ctx->pc = 0x1B9058u;
            goto label_1b9058;
        }
    }
    ctx->pc = 0x1B9040u;
label_1b9040:
    // 0x1b9040: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b9040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9044:
    // 0x1b9044: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9048:
    // 0x1b9048: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b904c:
    // 0x1b904c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b904cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9050:
    // 0x1b9050: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9054:
    // 0x1b9054: 0xac851b60  sw          $a1, 0x1B60($a0)
    ctx->pc = 0x1b9054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 5));
label_1b9058:
    // 0x1b9058: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b9058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b905c:
    // 0x1b905c: 0xc097530  jal         func_25D4C0
label_1b9060:
    if (ctx->pc == 0x1B9060u) {
        ctx->pc = 0x1B9064u;
        goto label_1b9064;
    }
    ctx->pc = 0x1B905Cu;
    SET_GPR_U32(ctx, 31, 0x1B9064u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B905Cu, 0x1B9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9064u;
label_1b9064:
    // 0x1b9064: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9068:
    // 0x1b9068: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1b9068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1b906c:
    // 0x1b906c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1b9070:
    if (ctx->pc == 0x1B9070u) {
        ctx->pc = 0x1B9074u;
        goto label_1b9074;
    }
    ctx->pc = 0x1B906Cu;
    {
        const bool branch_taken_0x1b906c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b906c) {
            ctx->pc = 0x1B9088u;
            goto label_1b9088;
        }
    }
    ctx->pc = 0x1B9074u;
label_1b9074:
    // 0x1b9074: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b9074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b9078:
    // 0x1b9078: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b907c:
    // 0x1b907c: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1b907cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b9080:
    // 0x1b9080: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_1b9084:
    if (ctx->pc == 0x1B9084u) {
        ctx->pc = 0x1B9088u;
        goto label_1b9088;
    }
    ctx->pc = 0x1B9080u;
    {
        const bool branch_taken_0x1b9080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9080) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9088u;
label_1b9088:
    // 0x1b9088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b908c:
    // 0x1b908c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b908cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9090:
    // 0x1b9090: 0xc0587a8  jal         func_161EA0
label_1b9094:
    if (ctx->pc == 0x1B9094u) {
        ctx->pc = 0x1B9098u;
        goto label_1b9098;
    }
    ctx->pc = 0x1B9090u;
    SET_GPR_U32(ctx, 31, 0x1B9098u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B9090u, 0x1B9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9098u;
label_1b9098:
    // 0x1b9098: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b909c:
    // 0x1b909c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_1b90a0:
    if (ctx->pc == 0x1B90A0u) {
        ctx->pc = 0x1B90A4u;
        goto label_1b90a4;
    }
    ctx->pc = 0x1B909Cu;
    {
        const bool branch_taken_0x1b909c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b909c) {
            ctx->pc = 0x1B9128u;
            goto label_1b9128;
        }
    }
    ctx->pc = 0x1B90A4u;
label_1b90a4:
    // 0x1b90a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b90a8:
    // 0x1b90a8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1b90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b90ac:
    // 0x1b90ac: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b90acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1b90b0:
    // 0x1b90b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b90b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b90b4:
    // 0x1b90b4: 0x106001b5  beqz        $v1, . + 4 + (0x1B5 << 2)
label_1b90b8:
    if (ctx->pc == 0x1B90B8u) {
        ctx->pc = 0x1B90BCu;
        goto label_1b90bc;
    }
    ctx->pc = 0x1B90B4u;
    {
        const bool branch_taken_0x1b90b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b90b4) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B90BCu;
label_1b90bc:
    // 0x1b90bc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b90bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b90c0:
    // 0x1b90c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b90c4:
    // 0x1b90c4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b90c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b90c8:
    // 0x1b90c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b90c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b90cc:
    // 0x1b90cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b90ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b90d0:
    // 0x1b90d0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1b90d4:
    // 0x1b90d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b90d8:
    // 0x1b90d8: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b90d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b90dc:
    // 0x1b90dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b90dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b90e0:
    // 0x1b90e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b90e4:
    // 0x1b90e4: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1b90e8:
    if (ctx->pc == 0x1B90E8u) {
        ctx->pc = 0x1B90ECu;
        goto label_1b90ec;
    }
    ctx->pc = 0x1B90E4u;
    {
        const bool branch_taken_0x1b90e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b90e4) {
            ctx->pc = 0x1B9114u;
            goto label_1b9114;
        }
    }
    ctx->pc = 0x1B90ECu;
label_1b90ec:
    // 0x1b90ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b90f0:
    // 0x1b90f0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1b90f4:
    if (ctx->pc == 0x1B90F4u) {
        ctx->pc = 0x1B90F8u;
        goto label_1b90f8;
    }
    ctx->pc = 0x1B90F0u;
    {
        const bool branch_taken_0x1b90f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b90f0) {
            ctx->pc = 0x1B9114u;
            goto label_1b9114;
        }
    }
    ctx->pc = 0x1B90F8u;
label_1b90f8:
    // 0x1b90f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b90fc:
    // 0x1b90fc: 0x108301a3  beq         $a0, $v1, . + 4 + (0x1A3 << 2)
label_1b9100:
    if (ctx->pc == 0x1B9100u) {
        ctx->pc = 0x1B9104u;
        goto label_1b9104;
    }
    ctx->pc = 0x1B90FCu;
    {
        const bool branch_taken_0x1b90fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b90fc) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9104u;
label_1b9104:
    // 0x1b9104: 0x108001a1  beqz        $a0, . + 4 + (0x1A1 << 2)
label_1b9108:
    if (ctx->pc == 0x1B9108u) {
        ctx->pc = 0x1B910Cu;
        goto label_1b910c;
    }
    ctx->pc = 0x1B9104u;
    {
        const bool branch_taken_0x1b9104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9104) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B910Cu;
label_1b910c:
    // 0x1b910c: 0x1000019f  b           . + 4 + (0x19F << 2)
label_1b9110:
    if (ctx->pc == 0x1B9110u) {
        ctx->pc = 0x1B9114u;
        goto label_1b9114;
    }
    ctx->pc = 0x1B910Cu;
    {
        const bool branch_taken_0x1b910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b910c) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9114u;
label_1b9114:
    // 0x1b9114: 0xc0c5238  jal         func_3148E0
label_1b9118:
    if (ctx->pc == 0x1B9118u) {
        ctx->pc = 0x1B911Cu;
        goto label_1b911c;
    }
    ctx->pc = 0x1B9114u;
    SET_GPR_U32(ctx, 31, 0x1B911Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B9114u, 0x1B911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B911Cu;
label_1b911c:
    // 0x1b911c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b911cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9120:
    // 0x1b9120: 0x1000019a  b           . + 4 + (0x19A << 2)
label_1b9124:
    if (ctx->pc == 0x1B9124u) {
        ctx->pc = 0x1B9128u;
        goto label_1b9128;
    }
    ctx->pc = 0x1B9120u;
    {
        const bool branch_taken_0x1b9120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9120) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9128u;
label_1b9128:
    // 0x1b9128: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b912c:
    // 0x1b912c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x1b912cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b9130:
    // 0x1b9130: 0x10a00196  beqz        $a1, . + 4 + (0x196 << 2)
label_1b9134:
    if (ctx->pc == 0x1B9134u) {
        ctx->pc = 0x1B9138u;
        goto label_1b9138;
    }
    ctx->pc = 0x1B9130u;
    {
        const bool branch_taken_0x1b9130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9130) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9138u;
label_1b9138:
    // 0x1b9138: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b913c:
    // 0x1b913c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b913cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b9140:
    // 0x1b9140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b9140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b9144:
    // 0x1b9144: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b9144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b9148:
    // 0x1b9148: 0x10000190  b           . + 4 + (0x190 << 2)
label_1b914c:
    if (ctx->pc == 0x1B914Cu) {
        ctx->pc = 0x1B9150u;
        goto label_1b9150;
    }
    ctx->pc = 0x1B9148u;
    {
        const bool branch_taken_0x1b9148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9148) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9150u;
label_1b9150:
    // 0x1b9150: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9154:
    // 0x1b9154: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9158:
    // 0x1b9158: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b9158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1b915c:
    // 0x1b915c: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1b915cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_1b9160:
    // 0x1b9160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9164:
    // 0x1b9164: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b9168:
    // 0x1b9168: 0xc0965d0  jal         func_259740
label_1b916c:
    if (ctx->pc == 0x1B916Cu) {
        ctx->pc = 0x1B9170u;
        goto label_1b9170;
    }
    ctx->pc = 0x1B9168u;
    SET_GPR_U32(ctx, 31, 0x1B9170u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9168u, 0x1B9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9170u;
label_1b9170:
    // 0x1b9170: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b9170u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9174:
    // 0x1b9174: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b9174u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9178:
    // 0x1b9178: 0xad001b60  sw          $zero, 0x1B60($t0)
    ctx->pc = 0x1b9178u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 0));
label_1b917c:
    // 0x1b917c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1b9180:
    // 0x1b9180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9184:
    // 0x1b9184: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9188:
    // 0x1b9188: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1b9188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1b918c:
    // 0x1b918c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9190:
    // 0x1b9190: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1b9190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1b9194:
    // 0x1b9194: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b9198:
    if (ctx->pc == 0x1B9198u) {
        ctx->pc = 0x1B919Cu;
        goto label_1b919c;
    }
    ctx->pc = 0x1B9194u;
    {
        const bool branch_taken_0x1b9194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9194) {
            ctx->pc = 0x1B91C4u;
            goto label_1b91c4;
        }
    }
    ctx->pc = 0x1B919Cu;
label_1b919c:
    // 0x1b919c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b91a0:
    // 0x1b91a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b91a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b91a4:
    // 0x1b91a4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1b91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1b91a8:
    // 0x1b91a8: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1b91a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1b91ac:
    // 0x1b91ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b91acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b91b0:
    // 0x1b91b0: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b91b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1b91b4:
    // 0x1b91b4: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b91b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b91b8:
    // 0x1b91b8: 0xc040ed8  jal         func_103B60
label_1b91bc:
    if (ctx->pc == 0x1B91BCu) {
        ctx->pc = 0x1B91C0u;
        goto label_1b91c0;
    }
    ctx->pc = 0x1B91B8u;
    SET_GPR_U32(ctx, 31, 0x1B91C0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B91C0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B91C0u) { return; }
    ctx->pc = 0x1B91C0u;
label_1b91c0:
    // 0x1b91c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b91c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b91c4:
    // 0x1b91c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b91c8:
    // 0x1b91c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b91cc:
    // 0x1b91cc: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x1b91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_1b91d0:
    // 0x1b91d0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b91d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b91d4:
    // 0x1b91d4: 0xc040c9e  jal         func_103278
label_1b91d8:
    if (ctx->pc == 0x1B91D8u) {
        ctx->pc = 0x1B91DCu;
        goto label_1b91dc;
    }
    ctx->pc = 0x1B91D4u;
    SET_GPR_U32(ctx, 31, 0x1B91DCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B91DCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B91DCu) { return; }
    ctx->pc = 0x1B91DCu;
label_1b91dc:
    // 0x1b91dc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b91dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b91e0:
    // 0x1b91e0: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x1b91e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_1b91e4:
    // 0x1b91e4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b91e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b91e8:
    // 0x1b91e8: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x1b91e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b91ec:
    // 0x1b91ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b91ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b91f0:
    // 0x1b91f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b91f4:
    // 0x1b91f4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1b91f8:
    // 0x1b91f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b91f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b91fc:
    // 0x1b91fc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1b91fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1b9200:
    // 0x1b9200: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9204:
    // 0x1b9204: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b9204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b9208:
    // 0x1b9208: 0xc096b40  jal         func_25AD00
label_1b920c:
    if (ctx->pc == 0x1B920Cu) {
        ctx->pc = 0x1B9210u;
        goto label_1b9210;
    }
    ctx->pc = 0x1B9208u;
    SET_GPR_U32(ctx, 31, 0x1B9210u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B9208u, 0x1B9210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9210u;
label_1b9210:
    // 0x1b9210: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9214:
    // 0x1b9214: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9218:
    // 0x1b9218: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b9218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b921c:
    // 0x1b921c: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x1b921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b9220:
    // 0x1b9220: 0xc058f20  jal         func_163C80
label_1b9224:
    if (ctx->pc == 0x1B9224u) {
        ctx->pc = 0x1B9228u;
        goto label_1b9228;
    }
    ctx->pc = 0x1B9220u;
    SET_GPR_U32(ctx, 31, 0x1B9228u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B9220u, 0x1B9228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9228u;
label_1b9228:
    // 0x1b9228: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b922c:
    // 0x1b922c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9230:
    // 0x1b9230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9234:
    // 0x1b9234: 0x0  nop
    ctx->pc = 0x1b9234u;
    // NOP
label_1b9238:
    // 0x1b9238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b923c:
    // 0x1b923c: 0x0  nop
    ctx->pc = 0x1b923cu;
    // NOP
label_1b9240:
    // 0x1b9240: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b9244:
    if (ctx->pc == 0x1B9244u) {
        ctx->pc = 0x1B9248u;
        goto label_1b9248;
    }
    ctx->pc = 0x1B9240u;
    {
        const bool branch_taken_0x1b9240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9240) {
            ctx->pc = 0x1B925Cu;
            goto label_1b925c;
        }
    }
    ctx->pc = 0x1B9248u;
label_1b9248:
    // 0x1b9248: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b9248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1b924c:
    // 0x1b924c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b924cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b9250:
    // 0x1b9250: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9254:
    // 0x1b9254: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b9254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b9258:
    // 0x1b9258: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b925c:
    // 0x1b925c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9260:
    // 0x1b9260: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1b9260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9264:
    // 0x1b9264: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b9264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1b9268:
    // 0x1b9268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b926c:
    // 0x1b926c: 0x0  nop
    ctx->pc = 0x1b926cu;
    // NOP
label_1b9270:
    // 0x1b9270: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9274:
    // 0x1b9274: 0x0  nop
    ctx->pc = 0x1b9274u;
    // NOP
label_1b9278:
    // 0x1b9278: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b927c:
    if (ctx->pc == 0x1B927Cu) {
        ctx->pc = 0x1B9280u;
        goto label_1b9280;
    }
    ctx->pc = 0x1B9278u;
    {
        const bool branch_taken_0x1b9278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9278) {
            ctx->pc = 0x1B935Cu;
            goto label_1b935c;
        }
    }
    ctx->pc = 0x1B9280u;
label_1b9280:
    // 0x1b9280: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b9280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9284:
    // 0x1b9284: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b9284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1b9288:
    // 0x1b9288: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1b928c:
    // 0x1b928c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b928cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9290:
    // 0x1b9290: 0x0  nop
    ctx->pc = 0x1b9290u;
    // NOP
label_1b9294:
    // 0x1b9294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9298:
    // 0x1b9298: 0x0  nop
    ctx->pc = 0x1b9298u;
    // NOP
label_1b929c:
    // 0x1b929c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b92a0:
    if (ctx->pc == 0x1B92A0u) {
        ctx->pc = 0x1B92A4u;
        goto label_1b92a4;
    }
    ctx->pc = 0x1B929Cu;
    {
        const bool branch_taken_0x1b929c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b929c) {
            ctx->pc = 0x1B9300u;
            goto label_1b9300;
        }
    }
    ctx->pc = 0x1B92A4u;
label_1b92a4:
    // 0x1b92a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b92a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b92a8:
    // 0x1b92a8: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b92a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b92ac:
    // 0x1b92ac: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b92acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1b92b0:
    // 0x1b92b0: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x1b92b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1b92b4:
    // 0x1b92b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b92b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b92b8:
    // 0x1b92b8: 0x0  nop
    ctx->pc = 0x1b92b8u;
    // NOP
label_1b92bc:
    // 0x1b92bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b92bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b92c0:
    // 0x1b92c0: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b92c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b92c4:
    // 0x1b92c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b92c8:
    // 0x1b92c8: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b92c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b92cc:
    // 0x1b92cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b92d0:
    // 0x1b92d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b92d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b92d4:
    // 0x1b92d4: 0x0  nop
    ctx->pc = 0x1b92d4u;
    // NOP
label_1b92d8:
    // 0x1b92d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b92d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b92dc:
    // 0x1b92dc: 0x0  nop
    ctx->pc = 0x1b92dcu;
    // NOP
label_1b92e0:
    // 0x1b92e0: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b92e4:
    if (ctx->pc == 0x1B92E4u) {
        ctx->pc = 0x1B92E8u;
        goto label_1b92e8;
    }
    ctx->pc = 0x1B92E0u;
    {
        const bool branch_taken_0x1b92e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b92e0) {
            ctx->pc = 0x1B935Cu;
            goto label_1b935c;
        }
    }
    ctx->pc = 0x1B92E8u;
label_1b92e8:
    // 0x1b92e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b92ec:
    // 0x1b92ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b92ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b92f0:
    // 0x1b92f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b92f4:
    // 0x1b92f4: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b92f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b92f8:
    // 0x1b92f8: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b92fc:
    if (ctx->pc == 0x1B92FCu) {
        ctx->pc = 0x1B9300u;
        goto label_1b9300;
    }
    ctx->pc = 0x1B92F8u;
    {
        const bool branch_taken_0x1b92f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b92f8) {
            ctx->pc = 0x1B935Cu;
            goto label_1b935c;
        }
    }
    ctx->pc = 0x1B9300u;
label_1b9300:
    // 0x1b9300: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9304:
    // 0x1b9304: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b9304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9308:
    // 0x1b9308: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b9308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b930c:
    // 0x1b930c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b9310:
    // 0x1b9310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9314:
    // 0x1b9314: 0x0  nop
    ctx->pc = 0x1b9314u;
    // NOP
label_1b9318:
    // 0x1b9318: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b931c:
    // 0x1b931c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b9320:
    // 0x1b9320: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9324:
    // 0x1b9324: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b9324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9328:
    // 0x1b9328: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b9328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1b932c:
    // 0x1b932c: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x1b932cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1b9330:
    // 0x1b9330: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b9330u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9334:
    // 0x1b9334: 0x0  nop
    ctx->pc = 0x1b9334u;
    // NOP
label_1b9338:
    // 0x1b9338: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b933c:
    // 0x1b933c: 0x0  nop
    ctx->pc = 0x1b933cu;
    // NOP
label_1b9340:
    // 0x1b9340: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b9344:
    if (ctx->pc == 0x1B9344u) {
        ctx->pc = 0x1B9348u;
        goto label_1b9348;
    }
    ctx->pc = 0x1B9340u;
    {
        const bool branch_taken_0x1b9340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9340) {
            ctx->pc = 0x1B935Cu;
            goto label_1b935c;
        }
    }
    ctx->pc = 0x1B9348u;
label_1b9348:
    // 0x1b9348: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1b9348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
label_1b934c:
    // 0x1b934c: 0x34826666  ori         $v0, $a0, 0x6666
    ctx->pc = 0x1b934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_1b9350:
    // 0x1b9350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9354:
    // 0x1b9354: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9358:
    // 0x1b9358: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b9358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_1b935c:
    // 0x1b935c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9360:
    // 0x1b9360: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b9360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9364:
    // 0x1b9364: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9368:
    // 0x1b9368: 0x24930180  addiu       $s3, $a0, 0x180
    ctx->pc = 0x1b9368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1b936c:
    // 0x1b936c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1b936cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1b9370:
    // 0x1b9370: 0x26051b40  addiu       $a1, $s0, 0x1B40
    ctx->pc = 0x1b9370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6976));
label_1b9374:
    // 0x1b9374: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1b9374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9378:
    // 0x1b9378: 0xc040ed8  jal         func_103B60
label_1b937c:
    if (ctx->pc == 0x1B937Cu) {
        ctx->pc = 0x1B9380u;
        goto label_1b9380;
    }
    ctx->pc = 0x1B9378u;
    SET_GPR_U32(ctx, 31, 0x1B9380u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B9380u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B9380u) { return; }
    ctx->pc = 0x1B9380u;
label_1b9380:
    // 0x1b9380: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b9380u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9384:
    // 0x1b9384: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9388:
    // 0x1b9388: 0xc05cd10  jal         func_173440
label_1b938c:
    if (ctx->pc == 0x1B938Cu) {
        ctx->pc = 0x1B9390u;
        goto label_1b9390;
    }
    ctx->pc = 0x1B9388u;
    SET_GPR_U32(ctx, 31, 0x1B9390u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B9388u, 0x1B9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9390u;
label_1b9390:
    // 0x1b9390: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9390u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9394:
    // 0x1b9394: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b9398:
    // 0x1b9398: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b939c:
    // 0x1b939c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b939cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b93a0:
    // 0x1b93a0: 0xc057480  jal         func_15D200
label_1b93a4:
    if (ctx->pc == 0x1B93A4u) {
        ctx->pc = 0x1B93A8u;
        goto label_1b93a8;
    }
    ctx->pc = 0x1B93A0u;
    SET_GPR_U32(ctx, 31, 0x1B93A8u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B93A0u, 0x1B93A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93A8u;
label_1b93a8:
    // 0x1b93a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b93a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b93ac:
    // 0x1b93ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b93acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b93b0:
    // 0x1b93b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b93b4:
    // 0x1b93b4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1b93b8:
    // 0x1b93b8: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1b93b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1b93bc:
    // 0x1b93bc: 0xc05cf7c  jal         func_173DF0
label_1b93c0:
    if (ctx->pc == 0x1B93C0u) {
        ctx->pc = 0x1B93C4u;
        goto label_1b93c4;
    }
    ctx->pc = 0x1B93BCu;
    SET_GPR_U32(ctx, 31, 0x1B93C4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B93BCu, 0x1B93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93C4u;
label_1b93c4:
    // 0x1b93c4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b93c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b93c8:
    // 0x1b93c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b93cc:
    // 0x1b93cc: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b93ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b93d0:
    // 0x1b93d0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b93d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b93d4:
    // 0x1b93d4: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x1b93d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b93d8:
    // 0x1b93d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b93d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b93dc:
    // 0x1b93dc: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b93dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
label_1b93e0:
    // 0x1b93e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b93e4:
    // 0x1b93e4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1b93e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b93e8:
    // 0x1b93e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b93e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b93ec:
    // 0x1b93ec: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b93ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b93f0:
    // 0x1b93f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b93f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b93f4:
    // 0x1b93f4: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b93f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_1b93f8:
    // 0x1b93f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b93f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b93fc:
    // 0x1b93fc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b93fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9400:
    // 0x1b9400: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b9400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9404:
    // 0x1b9404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9408:
    // 0x1b9408: 0x0  nop
    ctx->pc = 0x1b9408u;
    // NOP
label_1b940c:
    // 0x1b940c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b9410:
    if (ctx->pc == 0x1B9410u) {
        ctx->pc = 0x1B9414u;
        goto label_1b9414;
    }
    ctx->pc = 0x1B940Cu;
    {
        const bool branch_taken_0x1b940c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b940c) {
            ctx->pc = 0x1B942Cu;
            goto label_1b942c;
        }
    }
    ctx->pc = 0x1B9414u;
label_1b9414:
    // 0x1b9414: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b9414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9418:
    // 0x1b9418: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b941c:
    // 0x1b941c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b941cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b9420:
    // 0x1b9420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9424:
    // 0x1b9424: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9428:
    // 0x1b9428: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1b9428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1b942c:
    // 0x1b942c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b942cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b9430:
    // 0x1b9430: 0xc097530  jal         func_25D4C0
label_1b9434:
    if (ctx->pc == 0x1B9434u) {
        ctx->pc = 0x1B9438u;
        goto label_1b9438;
    }
    ctx->pc = 0x1B9430u;
    SET_GPR_U32(ctx, 31, 0x1B9438u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B9430u, 0x1B9438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9438u;
label_1b9438:
    // 0x1b9438: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b943c:
    // 0x1b943c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9440:
    // 0x1b9440: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1b9440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
label_1b9444:
    // 0x1b9444: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1b9448:
    if (ctx->pc == 0x1B9448u) {
        ctx->pc = 0x1B944Cu;
        goto label_1b944c;
    }
    ctx->pc = 0x1B9444u;
    {
        const bool branch_taken_0x1b9444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9444) {
            ctx->pc = 0x1B9464u;
            goto label_1b9464;
        }
    }
    ctx->pc = 0x1B944Cu;
label_1b944c:
    // 0x1b944c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9450:
    // 0x1b9450: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b9450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b9454:
    // 0x1b9454: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1b9454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b9458:
    // 0x1b9458: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1b9458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
label_1b945c:
    // 0x1b945c: 0x100000cb  b           . + 4 + (0xCB << 2)
label_1b9460:
    if (ctx->pc == 0x1B9460u) {
        ctx->pc = 0x1B9464u;
        goto label_1b9464;
    }
    ctx->pc = 0x1B945Cu;
    {
        const bool branch_taken_0x1b945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b945c) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9464u;
label_1b9464:
    // 0x1b9464: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b9464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9468:
    // 0x1b9468: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1b9468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1b946c:
    // 0x1b946c: 0xc0587a8  jal         func_161EA0
label_1b9470:
    if (ctx->pc == 0x1B9470u) {
        ctx->pc = 0x1B9474u;
        goto label_1b9474;
    }
    ctx->pc = 0x1B946Cu;
    SET_GPR_U32(ctx, 31, 0x1B9474u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B946Cu, 0x1B9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9474u;
label_1b9474:
    // 0x1b9474: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b9474u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9478:
    // 0x1b9478: 0x10e000c4  beqz        $a3, . + 4 + (0xC4 << 2)
label_1b947c:
    if (ctx->pc == 0x1B947Cu) {
        ctx->pc = 0x1B9480u;
        goto label_1b9480;
    }
    ctx->pc = 0x1B9478u;
    {
        const bool branch_taken_0x1b9478 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9478) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9480u;
label_1b9480:
    // 0x1b9480: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b9480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9484:
    // 0x1b9484: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1b9484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1b9488:
    // 0x1b9488: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b9488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1b948c:
    // 0x1b948c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b9490:
    // 0x1b9490: 0x106000be  beqz        $v1, . + 4 + (0xBE << 2)
label_1b9494:
    if (ctx->pc == 0x1B9494u) {
        ctx->pc = 0x1B9498u;
        goto label_1b9498;
    }
    ctx->pc = 0x1B9490u;
    {
        const bool branch_taken_0x1b9490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9490) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9498u;
label_1b9498:
    // 0x1b9498: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b949c:
    // 0x1b949c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b94a0:
    // 0x1b94a0: 0x3c06feff  lui         $a2, 0xFEFF
    ctx->pc = 0x1b94a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65279 << 16));
label_1b94a4:
    // 0x1b94a4: 0x34c5ffff  ori         $a1, $a2, 0xFFFF
    ctx->pc = 0x1b94a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1b94a8:
    // 0x1b94a8: 0x653824  and         $a3, $v1, $a1
    ctx->pc = 0x1b94a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1b94ac:
    // 0x1b94ac: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1b94acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1b94b0:
    // 0x1b94b0: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b94b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b94b4:
    // 0x1b94b4: 0x910413a6  lbu         $a0, 0x13A6($t0)
    ctx->pc = 0x1b94b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5030)));
label_1b94b8:
    // 0x1b94b8: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x1b94b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b94bc:
    // 0x1b94bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b94c0:
    // 0x1b94c0: 0x1224000b  beq         $s1, $a0, . + 4 + (0xB << 2)
label_1b94c4:
    if (ctx->pc == 0x1B94C4u) {
        ctx->pc = 0x1B94C8u;
        goto label_1b94c8;
    }
    ctx->pc = 0x1B94C0u;
    {
        const bool branch_taken_0x1b94c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b94c0) {
            ctx->pc = 0x1B94F0u;
            goto label_1b94f0;
        }
    }
    ctx->pc = 0x1B94C8u;
label_1b94c8:
    // 0x1b94c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b94cc:
    // 0x1b94cc: 0x12230008  beq         $s1, $v1, . + 4 + (0x8 << 2)
label_1b94d0:
    if (ctx->pc == 0x1B94D0u) {
        ctx->pc = 0x1B94D4u;
        goto label_1b94d4;
    }
    ctx->pc = 0x1B94CCu;
    {
        const bool branch_taken_0x1b94cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b94cc) {
            ctx->pc = 0x1B94F0u;
            goto label_1b94f0;
        }
    }
    ctx->pc = 0x1B94D4u;
label_1b94d4:
    // 0x1b94d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b94d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b94d8:
    // 0x1b94d8: 0x122500ac  beq         $s1, $a1, . + 4 + (0xAC << 2)
label_1b94dc:
    if (ctx->pc == 0x1B94DCu) {
        ctx->pc = 0x1B94E0u;
        goto label_1b94e0;
    }
    ctx->pc = 0x1B94D8u;
    {
        const bool branch_taken_0x1b94d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b94d8) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B94E0u;
label_1b94e0:
    // 0x1b94e0: 0x122000aa  beqz        $s1, . + 4 + (0xAA << 2)
label_1b94e4:
    if (ctx->pc == 0x1B94E4u) {
        ctx->pc = 0x1B94E8u;
        goto label_1b94e8;
    }
    ctx->pc = 0x1B94E0u;
    {
        const bool branch_taken_0x1b94e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94e0) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B94E8u;
label_1b94e8:
    // 0x1b94e8: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_1b94ec:
    if (ctx->pc == 0x1B94ECu) {
        ctx->pc = 0x1B94F0u;
        goto label_1b94f0;
    }
    ctx->pc = 0x1B94E8u;
    {
        const bool branch_taken_0x1b94e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94e8) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B94F0u;
label_1b94f0:
    // 0x1b94f0: 0xc0c5238  jal         func_3148E0
label_1b94f4:
    if (ctx->pc == 0x1B94F4u) {
        ctx->pc = 0x1B94F8u;
        goto label_1b94f8;
    }
    ctx->pc = 0x1B94F0u;
    SET_GPR_U32(ctx, 31, 0x1B94F8u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B94F0u, 0x1B94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94F8u;
label_1b94f8:
    // 0x1b94f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b94f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b94fc:
    // 0x1b94fc: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_1b9500:
    if (ctx->pc == 0x1B9500u) {
        ctx->pc = 0x1B9504u;
        goto label_1b9504;
    }
    ctx->pc = 0x1B94FCu;
    {
        const bool branch_taken_0x1b94fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94fc) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9504u;
label_1b9504:
    // 0x1b9504: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9508:
    // 0x1b9508: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b950c:
    // 0x1b950c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b950cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b9510:
    // 0x1b9510: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1b9510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1b9514:
    // 0x1b9514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9518:
    // 0x1b9518: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b951c:
    // 0x1b951c: 0xc0965d0  jal         func_259740
label_1b9520:
    if (ctx->pc == 0x1B9520u) {
        ctx->pc = 0x1B9524u;
        goto label_1b9524;
    }
    ctx->pc = 0x1B951Cu;
    SET_GPR_U32(ctx, 31, 0x1B9524u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B951Cu, 0x1B9524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9524u;
label_1b9524:
    // 0x1b9524: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9524u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9528:
    // 0x1b9528: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b952c:
    // 0x1b952c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9530:
    // 0x1b9530: 0x3c04c332  lui         $a0, 0xC332
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49970 << 16));
label_1b9534:
    // 0x1b9534: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x1b9534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_1b9538:
    // 0x1b9538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b953c:
    // 0x1b953c: 0x0  nop
    ctx->pc = 0x1b953cu;
    // NOP
label_1b9540:
    // 0x1b9540: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9544:
    // 0x1b9544: 0x0  nop
    ctx->pc = 0x1b9544u;
    // NOP
label_1b9548:
    // 0x1b9548: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1b954c:
    if (ctx->pc == 0x1B954Cu) {
        ctx->pc = 0x1B9550u;
        goto label_1b9550;
    }
    ctx->pc = 0x1B9548u;
    {
        const bool branch_taken_0x1b9548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9548) {
            ctx->pc = 0x1B955Cu;
            goto label_1b955c;
        }
    }
    ctx->pc = 0x1B9550u;
label_1b9550:
    // 0x1b9550: 0xc05772c  jal         func_15DCB0
label_1b9554:
    if (ctx->pc == 0x1B9554u) {
        ctx->pc = 0x1B9558u;
        goto label_1b9558;
    }
    ctx->pc = 0x1B9550u;
    SET_GPR_U32(ctx, 31, 0x1B9558u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1B9550u, 0x1B9558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9558u;
label_1b9558:
    // 0x1b9558: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b9558u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b955c:
    // 0x1b955c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b955cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9560:
    // 0x1b9560: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1b9560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
label_1b9564:
    // 0x1b9564: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9568:
    // 0x1b9568: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b9568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b956c:
    // 0x1b956c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1b956cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_1b9570:
    // 0x1b9570: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1b9570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b9574:
    // 0x1b9574: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1b9578:
    if (ctx->pc == 0x1B9578u) {
        ctx->pc = 0x1B957Cu;
        goto label_1b957c;
    }
    ctx->pc = 0x1B9574u;
    {
        const bool branch_taken_0x1b9574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9574) {
            ctx->pc = 0x1B95E0u;
            goto label_1b95e0;
        }
    }
    ctx->pc = 0x1B957Cu;
label_1b957c:
    // 0x1b957c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b957cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9580:
    // 0x1b9580: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b9580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b9584:
    // 0x1b9584: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b9584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b9588:
    // 0x1b9588: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x1b9588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b958c:
    // 0x1b958c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1b958cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1b9590:
    // 0x1b9590: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1b9590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1b9594:
    // 0x1b9594: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9598:
    // 0x1b9598: 0x904513a6  lbu         $a1, 0x13A6($v0)
    ctx->pc = 0x1b9598u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
label_1b959c:
    // 0x1b959c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1b959cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b95a0:
    // 0x1b95a0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1b95a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b95a4:
    // 0x1b95a4: 0x10c7000b  beq         $a2, $a3, . + 4 + (0xB << 2)
label_1b95a8:
    if (ctx->pc == 0x1B95A8u) {
        ctx->pc = 0x1B95ACu;
        goto label_1b95ac;
    }
    ctx->pc = 0x1B95A4u;
    {
        const bool branch_taken_0x1b95a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x1b95a4) {
            ctx->pc = 0x1B95D4u;
            goto label_1b95d4;
        }
    }
    ctx->pc = 0x1B95ACu;
label_1b95ac:
    // 0x1b95ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b95acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b95b0:
    // 0x1b95b0: 0x10c80008  beq         $a2, $t0, . + 4 + (0x8 << 2)
label_1b95b4:
    if (ctx->pc == 0x1B95B4u) {
        ctx->pc = 0x1B95B8u;
        goto label_1b95b8;
    }
    ctx->pc = 0x1B95B0u;
    {
        const bool branch_taken_0x1b95b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x1b95b0) {
            ctx->pc = 0x1B95D4u;
            goto label_1b95d4;
        }
    }
    ctx->pc = 0x1B95B8u;
label_1b95b8:
    // 0x1b95b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b95bc:
    // 0x1b95bc: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
label_1b95c0:
    if (ctx->pc == 0x1B95C0u) {
        ctx->pc = 0x1B95C4u;
        goto label_1b95c4;
    }
    ctx->pc = 0x1B95BCu;
    {
        const bool branch_taken_0x1b95bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b95bc) {
            ctx->pc = 0x1B95E0u;
            goto label_1b95e0;
        }
    }
    ctx->pc = 0x1B95C4u;
label_1b95c4:
    // 0x1b95c4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b95c8:
    if (ctx->pc == 0x1B95C8u) {
        ctx->pc = 0x1B95CCu;
        goto label_1b95cc;
    }
    ctx->pc = 0x1B95C4u;
    {
        const bool branch_taken_0x1b95c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95c4) {
            ctx->pc = 0x1B95E0u;
            goto label_1b95e0;
        }
    }
    ctx->pc = 0x1B95CCu;
label_1b95cc:
    // 0x1b95cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b95d0:
    if (ctx->pc == 0x1B95D0u) {
        ctx->pc = 0x1B95D4u;
        goto label_1b95d4;
    }
    ctx->pc = 0x1B95CCu;
    {
        const bool branch_taken_0x1b95cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95cc) {
            ctx->pc = 0x1B95E0u;
            goto label_1b95e0;
        }
    }
    ctx->pc = 0x1B95D4u;
label_1b95d4:
    // 0x1b95d4: 0xc0c5238  jal         func_3148E0
label_1b95d8:
    if (ctx->pc == 0x1B95D8u) {
        ctx->pc = 0x1B95DCu;
        goto label_1b95dc;
    }
    ctx->pc = 0x1B95D4u;
    SET_GPR_U32(ctx, 31, 0x1B95DCu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B95D4u, 0x1B95DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B95DCu;
label_1b95dc:
    // 0x1b95dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b95dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b95e0:
    // 0x1b95e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b95e4:
    // 0x1b95e4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1b95e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1b95e8:
    // 0x1b95e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b95e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b95ec:
    // 0x1b95ec: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1b95ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b95f0:
    // 0x1b95f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b95f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b95f4:
    // 0x1b95f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b95f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b95f8:
    // 0x1b95f8: 0xc096b40  jal         func_25AD00
label_1b95fc:
    if (ctx->pc == 0x1B95FCu) {
        ctx->pc = 0x1B9600u;
        goto label_1b9600;
    }
    ctx->pc = 0x1B95F8u;
    SET_GPR_U32(ctx, 31, 0x1B9600u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B95F8u, 0x1B9600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9600u;
label_1b9600:
    // 0x1b9600: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9604:
    // 0x1b9604: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9608:
    // 0x1b9608: 0xc05cd10  jal         func_173440
label_1b960c:
    if (ctx->pc == 0x1B960Cu) {
        ctx->pc = 0x1B9610u;
        goto label_1b9610;
    }
    ctx->pc = 0x1B9608u;
    SET_GPR_U32(ctx, 31, 0x1B9610u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B9608u, 0x1B9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9610u;
label_1b9610:
    // 0x1b9610: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b9614:
    // 0x1b9614: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9618:
    // 0x1b9618: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b9618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b961c:
    // 0x1b961c: 0xc0573d8  jal         func_15CF60
label_1b9620:
    if (ctx->pc == 0x1B9620u) {
        ctx->pc = 0x1B9624u;
        goto label_1b9624;
    }
    ctx->pc = 0x1B961Cu;
    SET_GPR_U32(ctx, 31, 0x1B9624u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1B961Cu, 0x1B9624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9624u;
label_1b9624:
    // 0x1b9624: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b9624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b9628:
    // 0x1b9628: 0xc097530  jal         func_25D4C0
label_1b962c:
    if (ctx->pc == 0x1B962Cu) {
        ctx->pc = 0x1B9630u;
        goto label_1b9630;
    }
    ctx->pc = 0x1B9628u;
    SET_GPR_U32(ctx, 31, 0x1B9630u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B9628u, 0x1B9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9630u;
label_1b9630:
    // 0x1b9630: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9630u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9634:
    // 0x1b9634: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9638:
    // 0x1b9638: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b963c:
    // 0x1b963c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1b9640:
    // 0x1b9640: 0x246212c0  addiu       $v0, $v1, 0x12C0
    ctx->pc = 0x1b9640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1b9644:
    // 0x1b9644: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b9644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b9648:
    // 0x1b9648: 0xc05cf7c  jal         func_173DF0
label_1b964c:
    if (ctx->pc == 0x1B964Cu) {
        ctx->pc = 0x1B9650u;
        goto label_1b9650;
    }
    ctx->pc = 0x1B9648u;
    SET_GPR_U32(ctx, 31, 0x1B9650u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B9648u, 0x1B9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9650u;
label_1b9650:
    // 0x1b9650: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b9650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b9654:
    // 0x1b9654: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9658:
    // 0x1b9658: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b9658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b965c:
    // 0x1b965c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1b965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1b9660:
    // 0x1b9660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9664:
    // 0x1b9664: 0x0  nop
    ctx->pc = 0x1b9664u;
    // NOP
label_1b9668:
    // 0x1b9668: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b9668u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b966c:
    // 0x1b966c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9670:
    // 0x1b9670: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9674:
    // 0x1b9674: 0x0  nop
    ctx->pc = 0x1b9674u;
    // NOP
label_1b9678:
    // 0x1b9678: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_1b967c:
    if (ctx->pc == 0x1B967Cu) {
        ctx->pc = 0x1B9680u;
        goto label_1b9680;
    }
    ctx->pc = 0x1B9678u;
    {
        const bool branch_taken_0x1b9678 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9678) {
            ctx->pc = 0x1B96FCu;
            goto label_1b96fc;
        }
    }
    ctx->pc = 0x1B9680u;
label_1b9680:
    // 0x1b9680: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9684:
    // 0x1b9684: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9688:
    // 0x1b9688: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b968c:
    // 0x1b968c: 0x24a41b40  addiu       $a0, $a1, 0x1B40
    ctx->pc = 0x1b968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
label_1b9690:
    // 0x1b9690: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1b9690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1b9694:
    // 0x1b9694: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1b9694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1b9698:
    // 0x1b9698: 0xc0675b0  jal         func_19D6C0
label_1b969c:
    if (ctx->pc == 0x1B969Cu) {
        ctx->pc = 0x1B96A0u;
        goto label_1b96a0;
    }
    ctx->pc = 0x1B9698u;
    SET_GPR_U32(ctx, 31, 0x1B96A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B9698u, 0x1B96A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96A0u;
label_1b96a0:
    // 0x1b96a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b96a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b96a4:
    // 0x1b96a4: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b96a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b96a8:
    // 0x1b96a8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b96a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b96ac:
    // 0x1b96ac: 0xc4ec1b40  lwc1        $f12, 0x1B40($a3)
    ctx->pc = 0x1b96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b96b0:
    // 0x1b96b0: 0xc50d1b48  lwc1        $f13, 0x1B48($t0)
    ctx->pc = 0x1b96b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b96b4:
    // 0x1b96b4: 0xc0455e6  jal         func_115798
label_1b96b8:
    if (ctx->pc == 0x1B96B8u) {
        ctx->pc = 0x1B96BCu;
        goto label_1b96bc;
    }
    ctx->pc = 0x1B96B4u;
    SET_GPR_U32(ctx, 31, 0x1B96BCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B96B4u, 0x1B96BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96BCu;
label_1b96bc:
    // 0x1b96bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b96c0:
    // 0x1b96c0: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1b96c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1b96c4:
    // 0x1b96c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b96c8:
    // 0x1b96c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b96cc:
    // 0x1b96cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b96ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1b96d0:
    // 0x1b96d0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1b96d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1b96d4:
    // 0x1b96d4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b96d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b96d8:
    // 0x1b96d8: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x1b96d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
label_1b96dc:
    // 0x1b96dc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b96dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b96e0:
    // 0x1b96e0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1b96e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b96e4:
    // 0x1b96e4: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b96e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b96e8:
    // 0x1b96e8: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x1b96e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b96ec:
    // 0x1b96ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b96f0:
    // 0x1b96f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1b96f4:
    // 0x1b96f4: 0x10000025  b           . + 4 + (0x25 << 2)
label_1b96f8:
    if (ctx->pc == 0x1B96F8u) {
        ctx->pc = 0x1B96FCu;
        goto label_1b96fc;
    }
    ctx->pc = 0x1B96F4u;
    {
        const bool branch_taken_0x1b96f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b96f4) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B96FCu;
label_1b96fc:
    // 0x1b96fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9700:
    // 0x1b9700: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1b9700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1b9704:
    // 0x1b9704: 0xc057b54  jal         func_15ED50
label_1b9708:
    if (ctx->pc == 0x1B9708u) {
        ctx->pc = 0x1B970Cu;
        goto label_1b970c;
    }
    ctx->pc = 0x1B9704u;
    SET_GPR_U32(ctx, 31, 0x1B970Cu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1B9704u, 0x1B970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B970Cu;
label_1b970c:
    // 0x1b970c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1b9710:
    if (ctx->pc == 0x1B9710u) {
        ctx->pc = 0x1B9714u;
        goto label_1b9714;
    }
    ctx->pc = 0x1B970Cu;
    {
        const bool branch_taken_0x1b970c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b970c) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9714u;
label_1b9714:
    // 0x1b9714: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9718:
    // 0x1b9718: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x1b9718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1b971c:
    // 0x1b971c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b971cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b9720:
    // 0x1b9720: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1b9720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1b9724:
    // 0x1b9724: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1b9728:
    if (ctx->pc == 0x1B9728u) {
        ctx->pc = 0x1B972Cu;
        goto label_1b972c;
    }
    ctx->pc = 0x1B9724u;
    {
        const bool branch_taken_0x1b9724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9724) {
            ctx->pc = 0x1B974Cu;
            goto label_1b974c;
        }
    }
    ctx->pc = 0x1B972Cu;
label_1b972c:
    // 0x1b972c: 0xc0585dc  jal         func_161770
label_1b9730:
    if (ctx->pc == 0x1B9730u) {
        ctx->pc = 0x1B9734u;
        goto label_1b9734;
    }
    ctx->pc = 0x1B972Cu;
    SET_GPR_U32(ctx, 31, 0x1B9734u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1B972Cu, 0x1B9734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9734u;
label_1b9734:
    // 0x1b9734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b9738:
    if (ctx->pc == 0x1B9738u) {
        ctx->pc = 0x1B973Cu;
        goto label_1b973c;
    }
    ctx->pc = 0x1B9734u;
    {
        const bool branch_taken_0x1b9734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9734) {
            ctx->pc = 0x1B974Cu;
            goto label_1b974c;
        }
    }
    ctx->pc = 0x1B973Cu;
label_1b973c:
    // 0x1b973c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9740:
    // 0x1b9740: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1b9740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1b9744:
    // 0x1b9744: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b9748:
    if (ctx->pc == 0x1B9748u) {
        ctx->pc = 0x1B974Cu;
        goto label_1b974c;
    }
    ctx->pc = 0x1B9744u;
    {
        const bool branch_taken_0x1b9744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9744) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B974Cu;
label_1b974c:
    // 0x1b974c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9750:
    // 0x1b9750: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b9750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b9754:
    // 0x1b9754: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1b9758:
    if (ctx->pc == 0x1B9758u) {
        ctx->pc = 0x1B975Cu;
        goto label_1b975c;
    }
    ctx->pc = 0x1B9754u;
    {
        const bool branch_taken_0x1b9754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9754) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B975Cu;
label_1b975c:
    // 0x1b975c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9760:
    // 0x1b9760: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9764:
    // 0x1b9764: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b9764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1b9768:
    // 0x1b9768: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b976c:
    // 0x1b976c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1b976cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1b9770:
    // 0x1b9770: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9774:
    // 0x1b9774: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1b9774u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b9778:
    // 0x1b9778: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b977c:
    // 0x1b977c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b977cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b9780:
    // 0x1b9780: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b9780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b9784:
    // 0x1b9784: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9788:
    // 0x1b9788: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1b9788u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1b978c:
    // 0x1b978c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b9790:
    // 0x1b9790: 0x8c641b6c  lw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1b9790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1b9794:
    // 0x1b9794: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1b9798:
    if (ctx->pc == 0x1B9798u) {
        ctx->pc = 0x1B979Cu;
        goto label_1b979c;
    }
    ctx->pc = 0x1B9794u;
    {
        const bool branch_taken_0x1b9794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9794) {
            ctx->pc = 0x1B97B8u;
            goto label_1b97b8;
        }
    }
    ctx->pc = 0x1B979Cu;
label_1b979c:
    // 0x1b979c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b97a0:
    // 0x1b97a0: 0x8c321a98  lw          $s2, 0x1A98($at)
    ctx->pc = 0x1b97a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b97a4:
    // 0x1b97a4: 0x3c05ff7f  lui         $a1, 0xFF7F
    ctx->pc = 0x1b97a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65407 << 16));
label_1b97a8:
    // 0x1b97a8: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x1b97a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1b97ac:
    // 0x1b97ac: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x1b97acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_1b97b0:
    // 0x1b97b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b97b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b97b4:
    // 0x1b97b4: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1b97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_1b97b8:
    // 0x1b97b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b97bc:
    // 0x1b97bc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1b97bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b97c0:
    // 0x1b97c0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b97c4:
    // 0x1b97c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b97c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b97c8:
    // 0x1b97c8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1b97cc:
    if (ctx->pc == 0x1B97CCu) {
        ctx->pc = 0x1B97D0u;
        goto label_1b97d0;
    }
    ctx->pc = 0x1B97C8u;
    {
        const bool branch_taken_0x1b97c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b97c8) {
            ctx->pc = 0x1B981Cu;
            goto label_1b981c;
        }
    }
    ctx->pc = 0x1B97D0u;
label_1b97d0:
    // 0x1b97d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b97d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b97d4:
    // 0x1b97d4: 0x906513a6  lbu         $a1, 0x13A6($v1)
    ctx->pc = 0x1b97d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b97d8:
    // 0x1b97d8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b97d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b97dc:
    // 0x1b97dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b97e0:
    // 0x1b97e0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1b97e4:
    if (ctx->pc == 0x1B97E4u) {
        ctx->pc = 0x1B97E8u;
        goto label_1b97e8;
    }
    ctx->pc = 0x1B97E0u;
    {
        const bool branch_taken_0x1b97e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b97e0) {
            ctx->pc = 0x1B9810u;
            goto label_1b9810;
        }
    }
    ctx->pc = 0x1B97E8u;
label_1b97e8:
    // 0x1b97e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b97e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b97ec:
    // 0x1b97ec: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1b97f0:
    if (ctx->pc == 0x1B97F0u) {
        ctx->pc = 0x1B97F4u;
        goto label_1b97f4;
    }
    ctx->pc = 0x1B97ECu;
    {
        const bool branch_taken_0x1b97ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b97ec) {
            ctx->pc = 0x1B9810u;
            goto label_1b9810;
        }
    }
    ctx->pc = 0x1B97F4u;
label_1b97f4:
    // 0x1b97f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b97f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b97f8:
    // 0x1b97f8: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
label_1b97fc:
    if (ctx->pc == 0x1B97FCu) {
        ctx->pc = 0x1B9800u;
        goto label_1b9800;
    }
    ctx->pc = 0x1B97F8u;
    {
        const bool branch_taken_0x1b97f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b97f8) {
            ctx->pc = 0x1B981Cu;
            goto label_1b981c;
        }
    }
    ctx->pc = 0x1B9800u;
label_1b9800:
    // 0x1b9800: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1b9804:
    if (ctx->pc == 0x1B9804u) {
        ctx->pc = 0x1B9808u;
        goto label_1b9808;
    }
    ctx->pc = 0x1B9800u;
    {
        const bool branch_taken_0x1b9800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9800) {
            ctx->pc = 0x1B981Cu;
            goto label_1b981c;
        }
    }
    ctx->pc = 0x1B9808u;
label_1b9808:
    // 0x1b9808: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b980c:
    if (ctx->pc == 0x1B980Cu) {
        ctx->pc = 0x1B9810u;
        goto label_1b9810;
    }
    ctx->pc = 0x1B9808u;
    {
        const bool branch_taken_0x1b9808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9808) {
            ctx->pc = 0x1B981Cu;
            goto label_1b981c;
        }
    }
    ctx->pc = 0x1B9810u;
label_1b9810:
    // 0x1b9810: 0xc0c5244  jal         func_314910
label_1b9814:
    if (ctx->pc == 0x1B9814u) {
        ctx->pc = 0x1B9818u;
        goto label_1b9818;
    }
    ctx->pc = 0x1B9810u;
    SET_GPR_U32(ctx, 31, 0x1B9818u);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1B9810u, 0x1B9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9818u;
label_1b9818:
    // 0x1b9818: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b981c:
    // 0x1b981c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1b981cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b9820:
    // 0x1b9820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b9820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9824:
    // 0x1b9824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9828:
    // 0x1b9828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b982c:
    // 0x1b982c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b982cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9830:
    // 0x1b9830: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b9830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b9834:
    // 0x1b9834: 0x3e00008  jr          $ra
label_1b9838:
    if (ctx->pc == 0x1B9838u) {
        ctx->pc = 0x1B983Cu;
        goto label_fallthrough_0x1b9834;
    }
    ctx->pc = 0x1B9834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b9834:
    ctx->pc = 0x1B983Cu;
}
