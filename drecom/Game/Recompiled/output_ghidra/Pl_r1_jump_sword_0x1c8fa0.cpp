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

// Function: Pl_r1_jump_sword
// Address: 0x1c8fa0 - 0x1c9f28
void Pl_r1_jump_sword_0x1c8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_jump_sword_0x1c8fa0");
#endif

    switch (ctx->pc) {
        case 0x1c8fa0u: goto label_1c8fa0;
        case 0x1c8fa4u: goto label_1c8fa4;
        case 0x1c8fa8u: goto label_1c8fa8;
        case 0x1c8facu: goto label_1c8fac;
        case 0x1c8fb0u: goto label_1c8fb0;
        case 0x1c8fb4u: goto label_1c8fb4;
        case 0x1c8fb8u: goto label_1c8fb8;
        case 0x1c8fbcu: goto label_1c8fbc;
        case 0x1c8fc0u: goto label_1c8fc0;
        case 0x1c8fc4u: goto label_1c8fc4;
        case 0x1c8fc8u: goto label_1c8fc8;
        case 0x1c8fccu: goto label_1c8fcc;
        case 0x1c8fd0u: goto label_1c8fd0;
        case 0x1c8fd4u: goto label_1c8fd4;
        case 0x1c8fd8u: goto label_1c8fd8;
        case 0x1c8fdcu: goto label_1c8fdc;
        case 0x1c8fe0u: goto label_1c8fe0;
        case 0x1c8fe4u: goto label_1c8fe4;
        case 0x1c8fe8u: goto label_1c8fe8;
        case 0x1c8fecu: goto label_1c8fec;
        case 0x1c8ff0u: goto label_1c8ff0;
        case 0x1c8ff4u: goto label_1c8ff4;
        case 0x1c8ff8u: goto label_1c8ff8;
        case 0x1c8ffcu: goto label_1c8ffc;
        case 0x1c9000u: goto label_1c9000;
        case 0x1c9004u: goto label_1c9004;
        case 0x1c9008u: goto label_1c9008;
        case 0x1c900cu: goto label_1c900c;
        case 0x1c9010u: goto label_1c9010;
        case 0x1c9014u: goto label_1c9014;
        case 0x1c9018u: goto label_1c9018;
        case 0x1c901cu: goto label_1c901c;
        case 0x1c9020u: goto label_1c9020;
        case 0x1c9024u: goto label_1c9024;
        case 0x1c9028u: goto label_1c9028;
        case 0x1c902cu: goto label_1c902c;
        case 0x1c9030u: goto label_1c9030;
        case 0x1c9034u: goto label_1c9034;
        case 0x1c9038u: goto label_1c9038;
        case 0x1c903cu: goto label_1c903c;
        case 0x1c9040u: goto label_1c9040;
        case 0x1c9044u: goto label_1c9044;
        case 0x1c9048u: goto label_1c9048;
        case 0x1c904cu: goto label_1c904c;
        case 0x1c9050u: goto label_1c9050;
        case 0x1c9054u: goto label_1c9054;
        case 0x1c9058u: goto label_1c9058;
        case 0x1c905cu: goto label_1c905c;
        case 0x1c9060u: goto label_1c9060;
        case 0x1c9064u: goto label_1c9064;
        case 0x1c9068u: goto label_1c9068;
        case 0x1c906cu: goto label_1c906c;
        case 0x1c9070u: goto label_1c9070;
        case 0x1c9074u: goto label_1c9074;
        case 0x1c9078u: goto label_1c9078;
        case 0x1c907cu: goto label_1c907c;
        case 0x1c9080u: goto label_1c9080;
        case 0x1c9084u: goto label_1c9084;
        case 0x1c9088u: goto label_1c9088;
        case 0x1c908cu: goto label_1c908c;
        case 0x1c9090u: goto label_1c9090;
        case 0x1c9094u: goto label_1c9094;
        case 0x1c9098u: goto label_1c9098;
        case 0x1c909cu: goto label_1c909c;
        case 0x1c90a0u: goto label_1c90a0;
        case 0x1c90a4u: goto label_1c90a4;
        case 0x1c90a8u: goto label_1c90a8;
        case 0x1c90acu: goto label_1c90ac;
        case 0x1c90b0u: goto label_1c90b0;
        case 0x1c90b4u: goto label_1c90b4;
        case 0x1c90b8u: goto label_1c90b8;
        case 0x1c90bcu: goto label_1c90bc;
        case 0x1c90c0u: goto label_1c90c0;
        case 0x1c90c4u: goto label_1c90c4;
        case 0x1c90c8u: goto label_1c90c8;
        case 0x1c90ccu: goto label_1c90cc;
        case 0x1c90d0u: goto label_1c90d0;
        case 0x1c90d4u: goto label_1c90d4;
        case 0x1c90d8u: goto label_1c90d8;
        case 0x1c90dcu: goto label_1c90dc;
        case 0x1c90e0u: goto label_1c90e0;
        case 0x1c90e4u: goto label_1c90e4;
        case 0x1c90e8u: goto label_1c90e8;
        case 0x1c90ecu: goto label_1c90ec;
        case 0x1c90f0u: goto label_1c90f0;
        case 0x1c90f4u: goto label_1c90f4;
        case 0x1c90f8u: goto label_1c90f8;
        case 0x1c90fcu: goto label_1c90fc;
        case 0x1c9100u: goto label_1c9100;
        case 0x1c9104u: goto label_1c9104;
        case 0x1c9108u: goto label_1c9108;
        case 0x1c910cu: goto label_1c910c;
        case 0x1c9110u: goto label_1c9110;
        case 0x1c9114u: goto label_1c9114;
        case 0x1c9118u: goto label_1c9118;
        case 0x1c911cu: goto label_1c911c;
        case 0x1c9120u: goto label_1c9120;
        case 0x1c9124u: goto label_1c9124;
        case 0x1c9128u: goto label_1c9128;
        case 0x1c912cu: goto label_1c912c;
        case 0x1c9130u: goto label_1c9130;
        case 0x1c9134u: goto label_1c9134;
        case 0x1c9138u: goto label_1c9138;
        case 0x1c913cu: goto label_1c913c;
        case 0x1c9140u: goto label_1c9140;
        case 0x1c9144u: goto label_1c9144;
        case 0x1c9148u: goto label_1c9148;
        case 0x1c914cu: goto label_1c914c;
        case 0x1c9150u: goto label_1c9150;
        case 0x1c9154u: goto label_1c9154;
        case 0x1c9158u: goto label_1c9158;
        case 0x1c915cu: goto label_1c915c;
        case 0x1c9160u: goto label_1c9160;
        case 0x1c9164u: goto label_1c9164;
        case 0x1c9168u: goto label_1c9168;
        case 0x1c916cu: goto label_1c916c;
        case 0x1c9170u: goto label_1c9170;
        case 0x1c9174u: goto label_1c9174;
        case 0x1c9178u: goto label_1c9178;
        case 0x1c917cu: goto label_1c917c;
        case 0x1c9180u: goto label_1c9180;
        case 0x1c9184u: goto label_1c9184;
        case 0x1c9188u: goto label_1c9188;
        case 0x1c918cu: goto label_1c918c;
        case 0x1c9190u: goto label_1c9190;
        case 0x1c9194u: goto label_1c9194;
        case 0x1c9198u: goto label_1c9198;
        case 0x1c919cu: goto label_1c919c;
        case 0x1c91a0u: goto label_1c91a0;
        case 0x1c91a4u: goto label_1c91a4;
        case 0x1c91a8u: goto label_1c91a8;
        case 0x1c91acu: goto label_1c91ac;
        case 0x1c91b0u: goto label_1c91b0;
        case 0x1c91b4u: goto label_1c91b4;
        case 0x1c91b8u: goto label_1c91b8;
        case 0x1c91bcu: goto label_1c91bc;
        case 0x1c91c0u: goto label_1c91c0;
        case 0x1c91c4u: goto label_1c91c4;
        case 0x1c91c8u: goto label_1c91c8;
        case 0x1c91ccu: goto label_1c91cc;
        case 0x1c91d0u: goto label_1c91d0;
        case 0x1c91d4u: goto label_1c91d4;
        case 0x1c91d8u: goto label_1c91d8;
        case 0x1c91dcu: goto label_1c91dc;
        case 0x1c91e0u: goto label_1c91e0;
        case 0x1c91e4u: goto label_1c91e4;
        case 0x1c91e8u: goto label_1c91e8;
        case 0x1c91ecu: goto label_1c91ec;
        case 0x1c91f0u: goto label_1c91f0;
        case 0x1c91f4u: goto label_1c91f4;
        case 0x1c91f8u: goto label_1c91f8;
        case 0x1c91fcu: goto label_1c91fc;
        case 0x1c9200u: goto label_1c9200;
        case 0x1c9204u: goto label_1c9204;
        case 0x1c9208u: goto label_1c9208;
        case 0x1c920cu: goto label_1c920c;
        case 0x1c9210u: goto label_1c9210;
        case 0x1c9214u: goto label_1c9214;
        case 0x1c9218u: goto label_1c9218;
        case 0x1c921cu: goto label_1c921c;
        case 0x1c9220u: goto label_1c9220;
        case 0x1c9224u: goto label_1c9224;
        case 0x1c9228u: goto label_1c9228;
        case 0x1c922cu: goto label_1c922c;
        case 0x1c9230u: goto label_1c9230;
        case 0x1c9234u: goto label_1c9234;
        case 0x1c9238u: goto label_1c9238;
        case 0x1c923cu: goto label_1c923c;
        case 0x1c9240u: goto label_1c9240;
        case 0x1c9244u: goto label_1c9244;
        case 0x1c9248u: goto label_1c9248;
        case 0x1c924cu: goto label_1c924c;
        case 0x1c9250u: goto label_1c9250;
        case 0x1c9254u: goto label_1c9254;
        case 0x1c9258u: goto label_1c9258;
        case 0x1c925cu: goto label_1c925c;
        case 0x1c9260u: goto label_1c9260;
        case 0x1c9264u: goto label_1c9264;
        case 0x1c9268u: goto label_1c9268;
        case 0x1c926cu: goto label_1c926c;
        case 0x1c9270u: goto label_1c9270;
        case 0x1c9274u: goto label_1c9274;
        case 0x1c9278u: goto label_1c9278;
        case 0x1c927cu: goto label_1c927c;
        case 0x1c9280u: goto label_1c9280;
        case 0x1c9284u: goto label_1c9284;
        case 0x1c9288u: goto label_1c9288;
        case 0x1c928cu: goto label_1c928c;
        case 0x1c9290u: goto label_1c9290;
        case 0x1c9294u: goto label_1c9294;
        case 0x1c9298u: goto label_1c9298;
        case 0x1c929cu: goto label_1c929c;
        case 0x1c92a0u: goto label_1c92a0;
        case 0x1c92a4u: goto label_1c92a4;
        case 0x1c92a8u: goto label_1c92a8;
        case 0x1c92acu: goto label_1c92ac;
        case 0x1c92b0u: goto label_1c92b0;
        case 0x1c92b4u: goto label_1c92b4;
        case 0x1c92b8u: goto label_1c92b8;
        case 0x1c92bcu: goto label_1c92bc;
        case 0x1c92c0u: goto label_1c92c0;
        case 0x1c92c4u: goto label_1c92c4;
        case 0x1c92c8u: goto label_1c92c8;
        case 0x1c92ccu: goto label_1c92cc;
        case 0x1c92d0u: goto label_1c92d0;
        case 0x1c92d4u: goto label_1c92d4;
        case 0x1c92d8u: goto label_1c92d8;
        case 0x1c92dcu: goto label_1c92dc;
        case 0x1c92e0u: goto label_1c92e0;
        case 0x1c92e4u: goto label_1c92e4;
        case 0x1c92e8u: goto label_1c92e8;
        case 0x1c92ecu: goto label_1c92ec;
        case 0x1c92f0u: goto label_1c92f0;
        case 0x1c92f4u: goto label_1c92f4;
        case 0x1c92f8u: goto label_1c92f8;
        case 0x1c92fcu: goto label_1c92fc;
        case 0x1c9300u: goto label_1c9300;
        case 0x1c9304u: goto label_1c9304;
        case 0x1c9308u: goto label_1c9308;
        case 0x1c930cu: goto label_1c930c;
        case 0x1c9310u: goto label_1c9310;
        case 0x1c9314u: goto label_1c9314;
        case 0x1c9318u: goto label_1c9318;
        case 0x1c931cu: goto label_1c931c;
        case 0x1c9320u: goto label_1c9320;
        case 0x1c9324u: goto label_1c9324;
        case 0x1c9328u: goto label_1c9328;
        case 0x1c932cu: goto label_1c932c;
        case 0x1c9330u: goto label_1c9330;
        case 0x1c9334u: goto label_1c9334;
        case 0x1c9338u: goto label_1c9338;
        case 0x1c933cu: goto label_1c933c;
        case 0x1c9340u: goto label_1c9340;
        case 0x1c9344u: goto label_1c9344;
        case 0x1c9348u: goto label_1c9348;
        case 0x1c934cu: goto label_1c934c;
        case 0x1c9350u: goto label_1c9350;
        case 0x1c9354u: goto label_1c9354;
        case 0x1c9358u: goto label_1c9358;
        case 0x1c935cu: goto label_1c935c;
        case 0x1c9360u: goto label_1c9360;
        case 0x1c9364u: goto label_1c9364;
        case 0x1c9368u: goto label_1c9368;
        case 0x1c936cu: goto label_1c936c;
        case 0x1c9370u: goto label_1c9370;
        case 0x1c9374u: goto label_1c9374;
        case 0x1c9378u: goto label_1c9378;
        case 0x1c937cu: goto label_1c937c;
        case 0x1c9380u: goto label_1c9380;
        case 0x1c9384u: goto label_1c9384;
        case 0x1c9388u: goto label_1c9388;
        case 0x1c938cu: goto label_1c938c;
        case 0x1c9390u: goto label_1c9390;
        case 0x1c9394u: goto label_1c9394;
        case 0x1c9398u: goto label_1c9398;
        case 0x1c939cu: goto label_1c939c;
        case 0x1c93a0u: goto label_1c93a0;
        case 0x1c93a4u: goto label_1c93a4;
        case 0x1c93a8u: goto label_1c93a8;
        case 0x1c93acu: goto label_1c93ac;
        case 0x1c93b0u: goto label_1c93b0;
        case 0x1c93b4u: goto label_1c93b4;
        case 0x1c93b8u: goto label_1c93b8;
        case 0x1c93bcu: goto label_1c93bc;
        case 0x1c93c0u: goto label_1c93c0;
        case 0x1c93c4u: goto label_1c93c4;
        case 0x1c93c8u: goto label_1c93c8;
        case 0x1c93ccu: goto label_1c93cc;
        case 0x1c93d0u: goto label_1c93d0;
        case 0x1c93d4u: goto label_1c93d4;
        case 0x1c93d8u: goto label_1c93d8;
        case 0x1c93dcu: goto label_1c93dc;
        case 0x1c93e0u: goto label_1c93e0;
        case 0x1c93e4u: goto label_1c93e4;
        case 0x1c93e8u: goto label_1c93e8;
        case 0x1c93ecu: goto label_1c93ec;
        case 0x1c93f0u: goto label_1c93f0;
        case 0x1c93f4u: goto label_1c93f4;
        case 0x1c93f8u: goto label_1c93f8;
        case 0x1c93fcu: goto label_1c93fc;
        case 0x1c9400u: goto label_1c9400;
        case 0x1c9404u: goto label_1c9404;
        case 0x1c9408u: goto label_1c9408;
        case 0x1c940cu: goto label_1c940c;
        case 0x1c9410u: goto label_1c9410;
        case 0x1c9414u: goto label_1c9414;
        case 0x1c9418u: goto label_1c9418;
        case 0x1c941cu: goto label_1c941c;
        case 0x1c9420u: goto label_1c9420;
        case 0x1c9424u: goto label_1c9424;
        case 0x1c9428u: goto label_1c9428;
        case 0x1c942cu: goto label_1c942c;
        case 0x1c9430u: goto label_1c9430;
        case 0x1c9434u: goto label_1c9434;
        case 0x1c9438u: goto label_1c9438;
        case 0x1c943cu: goto label_1c943c;
        case 0x1c9440u: goto label_1c9440;
        case 0x1c9444u: goto label_1c9444;
        case 0x1c9448u: goto label_1c9448;
        case 0x1c944cu: goto label_1c944c;
        case 0x1c9450u: goto label_1c9450;
        case 0x1c9454u: goto label_1c9454;
        case 0x1c9458u: goto label_1c9458;
        case 0x1c945cu: goto label_1c945c;
        case 0x1c9460u: goto label_1c9460;
        case 0x1c9464u: goto label_1c9464;
        case 0x1c9468u: goto label_1c9468;
        case 0x1c946cu: goto label_1c946c;
        case 0x1c9470u: goto label_1c9470;
        case 0x1c9474u: goto label_1c9474;
        case 0x1c9478u: goto label_1c9478;
        case 0x1c947cu: goto label_1c947c;
        case 0x1c9480u: goto label_1c9480;
        case 0x1c9484u: goto label_1c9484;
        case 0x1c9488u: goto label_1c9488;
        case 0x1c948cu: goto label_1c948c;
        case 0x1c9490u: goto label_1c9490;
        case 0x1c9494u: goto label_1c9494;
        case 0x1c9498u: goto label_1c9498;
        case 0x1c949cu: goto label_1c949c;
        case 0x1c94a0u: goto label_1c94a0;
        case 0x1c94a4u: goto label_1c94a4;
        case 0x1c94a8u: goto label_1c94a8;
        case 0x1c94acu: goto label_1c94ac;
        case 0x1c94b0u: goto label_1c94b0;
        case 0x1c94b4u: goto label_1c94b4;
        case 0x1c94b8u: goto label_1c94b8;
        case 0x1c94bcu: goto label_1c94bc;
        case 0x1c94c0u: goto label_1c94c0;
        case 0x1c94c4u: goto label_1c94c4;
        case 0x1c94c8u: goto label_1c94c8;
        case 0x1c94ccu: goto label_1c94cc;
        case 0x1c94d0u: goto label_1c94d0;
        case 0x1c94d4u: goto label_1c94d4;
        case 0x1c94d8u: goto label_1c94d8;
        case 0x1c94dcu: goto label_1c94dc;
        case 0x1c94e0u: goto label_1c94e0;
        case 0x1c94e4u: goto label_1c94e4;
        case 0x1c94e8u: goto label_1c94e8;
        case 0x1c94ecu: goto label_1c94ec;
        case 0x1c94f0u: goto label_1c94f0;
        case 0x1c94f4u: goto label_1c94f4;
        case 0x1c94f8u: goto label_1c94f8;
        case 0x1c94fcu: goto label_1c94fc;
        case 0x1c9500u: goto label_1c9500;
        case 0x1c9504u: goto label_1c9504;
        case 0x1c9508u: goto label_1c9508;
        case 0x1c950cu: goto label_1c950c;
        case 0x1c9510u: goto label_1c9510;
        case 0x1c9514u: goto label_1c9514;
        case 0x1c9518u: goto label_1c9518;
        case 0x1c951cu: goto label_1c951c;
        case 0x1c9520u: goto label_1c9520;
        case 0x1c9524u: goto label_1c9524;
        case 0x1c9528u: goto label_1c9528;
        case 0x1c952cu: goto label_1c952c;
        case 0x1c9530u: goto label_1c9530;
        case 0x1c9534u: goto label_1c9534;
        case 0x1c9538u: goto label_1c9538;
        case 0x1c953cu: goto label_1c953c;
        case 0x1c9540u: goto label_1c9540;
        case 0x1c9544u: goto label_1c9544;
        case 0x1c9548u: goto label_1c9548;
        case 0x1c954cu: goto label_1c954c;
        case 0x1c9550u: goto label_1c9550;
        case 0x1c9554u: goto label_1c9554;
        case 0x1c9558u: goto label_1c9558;
        case 0x1c955cu: goto label_1c955c;
        case 0x1c9560u: goto label_1c9560;
        case 0x1c9564u: goto label_1c9564;
        case 0x1c9568u: goto label_1c9568;
        case 0x1c956cu: goto label_1c956c;
        case 0x1c9570u: goto label_1c9570;
        case 0x1c9574u: goto label_1c9574;
        case 0x1c9578u: goto label_1c9578;
        case 0x1c957cu: goto label_1c957c;
        case 0x1c9580u: goto label_1c9580;
        case 0x1c9584u: goto label_1c9584;
        case 0x1c9588u: goto label_1c9588;
        case 0x1c958cu: goto label_1c958c;
        case 0x1c9590u: goto label_1c9590;
        case 0x1c9594u: goto label_1c9594;
        case 0x1c9598u: goto label_1c9598;
        case 0x1c959cu: goto label_1c959c;
        case 0x1c95a0u: goto label_1c95a0;
        case 0x1c95a4u: goto label_1c95a4;
        case 0x1c95a8u: goto label_1c95a8;
        case 0x1c95acu: goto label_1c95ac;
        case 0x1c95b0u: goto label_1c95b0;
        case 0x1c95b4u: goto label_1c95b4;
        case 0x1c95b8u: goto label_1c95b8;
        case 0x1c95bcu: goto label_1c95bc;
        case 0x1c95c0u: goto label_1c95c0;
        case 0x1c95c4u: goto label_1c95c4;
        case 0x1c95c8u: goto label_1c95c8;
        case 0x1c95ccu: goto label_1c95cc;
        case 0x1c95d0u: goto label_1c95d0;
        case 0x1c95d4u: goto label_1c95d4;
        case 0x1c95d8u: goto label_1c95d8;
        case 0x1c95dcu: goto label_1c95dc;
        case 0x1c95e0u: goto label_1c95e0;
        case 0x1c95e4u: goto label_1c95e4;
        case 0x1c95e8u: goto label_1c95e8;
        case 0x1c95ecu: goto label_1c95ec;
        case 0x1c95f0u: goto label_1c95f0;
        case 0x1c95f4u: goto label_1c95f4;
        case 0x1c95f8u: goto label_1c95f8;
        case 0x1c95fcu: goto label_1c95fc;
        case 0x1c9600u: goto label_1c9600;
        case 0x1c9604u: goto label_1c9604;
        case 0x1c9608u: goto label_1c9608;
        case 0x1c960cu: goto label_1c960c;
        case 0x1c9610u: goto label_1c9610;
        case 0x1c9614u: goto label_1c9614;
        case 0x1c9618u: goto label_1c9618;
        case 0x1c961cu: goto label_1c961c;
        case 0x1c9620u: goto label_1c9620;
        case 0x1c9624u: goto label_1c9624;
        case 0x1c9628u: goto label_1c9628;
        case 0x1c962cu: goto label_1c962c;
        case 0x1c9630u: goto label_1c9630;
        case 0x1c9634u: goto label_1c9634;
        case 0x1c9638u: goto label_1c9638;
        case 0x1c963cu: goto label_1c963c;
        case 0x1c9640u: goto label_1c9640;
        case 0x1c9644u: goto label_1c9644;
        case 0x1c9648u: goto label_1c9648;
        case 0x1c964cu: goto label_1c964c;
        case 0x1c9650u: goto label_1c9650;
        case 0x1c9654u: goto label_1c9654;
        case 0x1c9658u: goto label_1c9658;
        case 0x1c965cu: goto label_1c965c;
        case 0x1c9660u: goto label_1c9660;
        case 0x1c9664u: goto label_1c9664;
        case 0x1c9668u: goto label_1c9668;
        case 0x1c966cu: goto label_1c966c;
        case 0x1c9670u: goto label_1c9670;
        case 0x1c9674u: goto label_1c9674;
        case 0x1c9678u: goto label_1c9678;
        case 0x1c967cu: goto label_1c967c;
        case 0x1c9680u: goto label_1c9680;
        case 0x1c9684u: goto label_1c9684;
        case 0x1c9688u: goto label_1c9688;
        case 0x1c968cu: goto label_1c968c;
        case 0x1c9690u: goto label_1c9690;
        case 0x1c9694u: goto label_1c9694;
        case 0x1c9698u: goto label_1c9698;
        case 0x1c969cu: goto label_1c969c;
        case 0x1c96a0u: goto label_1c96a0;
        case 0x1c96a4u: goto label_1c96a4;
        case 0x1c96a8u: goto label_1c96a8;
        case 0x1c96acu: goto label_1c96ac;
        case 0x1c96b0u: goto label_1c96b0;
        case 0x1c96b4u: goto label_1c96b4;
        case 0x1c96b8u: goto label_1c96b8;
        case 0x1c96bcu: goto label_1c96bc;
        case 0x1c96c0u: goto label_1c96c0;
        case 0x1c96c4u: goto label_1c96c4;
        case 0x1c96c8u: goto label_1c96c8;
        case 0x1c96ccu: goto label_1c96cc;
        case 0x1c96d0u: goto label_1c96d0;
        case 0x1c96d4u: goto label_1c96d4;
        case 0x1c96d8u: goto label_1c96d8;
        case 0x1c96dcu: goto label_1c96dc;
        case 0x1c96e0u: goto label_1c96e0;
        case 0x1c96e4u: goto label_1c96e4;
        case 0x1c96e8u: goto label_1c96e8;
        case 0x1c96ecu: goto label_1c96ec;
        case 0x1c96f0u: goto label_1c96f0;
        case 0x1c96f4u: goto label_1c96f4;
        case 0x1c96f8u: goto label_1c96f8;
        case 0x1c96fcu: goto label_1c96fc;
        case 0x1c9700u: goto label_1c9700;
        case 0x1c9704u: goto label_1c9704;
        case 0x1c9708u: goto label_1c9708;
        case 0x1c970cu: goto label_1c970c;
        case 0x1c9710u: goto label_1c9710;
        case 0x1c9714u: goto label_1c9714;
        case 0x1c9718u: goto label_1c9718;
        case 0x1c971cu: goto label_1c971c;
        case 0x1c9720u: goto label_1c9720;
        case 0x1c9724u: goto label_1c9724;
        case 0x1c9728u: goto label_1c9728;
        case 0x1c972cu: goto label_1c972c;
        case 0x1c9730u: goto label_1c9730;
        case 0x1c9734u: goto label_1c9734;
        case 0x1c9738u: goto label_1c9738;
        case 0x1c973cu: goto label_1c973c;
        case 0x1c9740u: goto label_1c9740;
        case 0x1c9744u: goto label_1c9744;
        case 0x1c9748u: goto label_1c9748;
        case 0x1c974cu: goto label_1c974c;
        case 0x1c9750u: goto label_1c9750;
        case 0x1c9754u: goto label_1c9754;
        case 0x1c9758u: goto label_1c9758;
        case 0x1c975cu: goto label_1c975c;
        case 0x1c9760u: goto label_1c9760;
        case 0x1c9764u: goto label_1c9764;
        case 0x1c9768u: goto label_1c9768;
        case 0x1c976cu: goto label_1c976c;
        case 0x1c9770u: goto label_1c9770;
        case 0x1c9774u: goto label_1c9774;
        case 0x1c9778u: goto label_1c9778;
        case 0x1c977cu: goto label_1c977c;
        case 0x1c9780u: goto label_1c9780;
        case 0x1c9784u: goto label_1c9784;
        case 0x1c9788u: goto label_1c9788;
        case 0x1c978cu: goto label_1c978c;
        case 0x1c9790u: goto label_1c9790;
        case 0x1c9794u: goto label_1c9794;
        case 0x1c9798u: goto label_1c9798;
        case 0x1c979cu: goto label_1c979c;
        case 0x1c97a0u: goto label_1c97a0;
        case 0x1c97a4u: goto label_1c97a4;
        case 0x1c97a8u: goto label_1c97a8;
        case 0x1c97acu: goto label_1c97ac;
        case 0x1c97b0u: goto label_1c97b0;
        case 0x1c97b4u: goto label_1c97b4;
        case 0x1c97b8u: goto label_1c97b8;
        case 0x1c97bcu: goto label_1c97bc;
        case 0x1c97c0u: goto label_1c97c0;
        case 0x1c97c4u: goto label_1c97c4;
        case 0x1c97c8u: goto label_1c97c8;
        case 0x1c97ccu: goto label_1c97cc;
        case 0x1c97d0u: goto label_1c97d0;
        case 0x1c97d4u: goto label_1c97d4;
        case 0x1c97d8u: goto label_1c97d8;
        case 0x1c97dcu: goto label_1c97dc;
        case 0x1c97e0u: goto label_1c97e0;
        case 0x1c97e4u: goto label_1c97e4;
        case 0x1c97e8u: goto label_1c97e8;
        case 0x1c97ecu: goto label_1c97ec;
        case 0x1c97f0u: goto label_1c97f0;
        case 0x1c97f4u: goto label_1c97f4;
        case 0x1c97f8u: goto label_1c97f8;
        case 0x1c97fcu: goto label_1c97fc;
        case 0x1c9800u: goto label_1c9800;
        case 0x1c9804u: goto label_1c9804;
        case 0x1c9808u: goto label_1c9808;
        case 0x1c980cu: goto label_1c980c;
        case 0x1c9810u: goto label_1c9810;
        case 0x1c9814u: goto label_1c9814;
        case 0x1c9818u: goto label_1c9818;
        case 0x1c981cu: goto label_1c981c;
        case 0x1c9820u: goto label_1c9820;
        case 0x1c9824u: goto label_1c9824;
        case 0x1c9828u: goto label_1c9828;
        case 0x1c982cu: goto label_1c982c;
        case 0x1c9830u: goto label_1c9830;
        case 0x1c9834u: goto label_1c9834;
        case 0x1c9838u: goto label_1c9838;
        case 0x1c983cu: goto label_1c983c;
        case 0x1c9840u: goto label_1c9840;
        case 0x1c9844u: goto label_1c9844;
        case 0x1c9848u: goto label_1c9848;
        case 0x1c984cu: goto label_1c984c;
        case 0x1c9850u: goto label_1c9850;
        case 0x1c9854u: goto label_1c9854;
        case 0x1c9858u: goto label_1c9858;
        case 0x1c985cu: goto label_1c985c;
        case 0x1c9860u: goto label_1c9860;
        case 0x1c9864u: goto label_1c9864;
        case 0x1c9868u: goto label_1c9868;
        case 0x1c986cu: goto label_1c986c;
        case 0x1c9870u: goto label_1c9870;
        case 0x1c9874u: goto label_1c9874;
        case 0x1c9878u: goto label_1c9878;
        case 0x1c987cu: goto label_1c987c;
        case 0x1c9880u: goto label_1c9880;
        case 0x1c9884u: goto label_1c9884;
        case 0x1c9888u: goto label_1c9888;
        case 0x1c988cu: goto label_1c988c;
        case 0x1c9890u: goto label_1c9890;
        case 0x1c9894u: goto label_1c9894;
        case 0x1c9898u: goto label_1c9898;
        case 0x1c989cu: goto label_1c989c;
        case 0x1c98a0u: goto label_1c98a0;
        case 0x1c98a4u: goto label_1c98a4;
        case 0x1c98a8u: goto label_1c98a8;
        case 0x1c98acu: goto label_1c98ac;
        case 0x1c98b0u: goto label_1c98b0;
        case 0x1c98b4u: goto label_1c98b4;
        case 0x1c98b8u: goto label_1c98b8;
        case 0x1c98bcu: goto label_1c98bc;
        case 0x1c98c0u: goto label_1c98c0;
        case 0x1c98c4u: goto label_1c98c4;
        case 0x1c98c8u: goto label_1c98c8;
        case 0x1c98ccu: goto label_1c98cc;
        case 0x1c98d0u: goto label_1c98d0;
        case 0x1c98d4u: goto label_1c98d4;
        case 0x1c98d8u: goto label_1c98d8;
        case 0x1c98dcu: goto label_1c98dc;
        case 0x1c98e0u: goto label_1c98e0;
        case 0x1c98e4u: goto label_1c98e4;
        case 0x1c98e8u: goto label_1c98e8;
        case 0x1c98ecu: goto label_1c98ec;
        case 0x1c98f0u: goto label_1c98f0;
        case 0x1c98f4u: goto label_1c98f4;
        case 0x1c98f8u: goto label_1c98f8;
        case 0x1c98fcu: goto label_1c98fc;
        case 0x1c9900u: goto label_1c9900;
        case 0x1c9904u: goto label_1c9904;
        case 0x1c9908u: goto label_1c9908;
        case 0x1c990cu: goto label_1c990c;
        case 0x1c9910u: goto label_1c9910;
        case 0x1c9914u: goto label_1c9914;
        case 0x1c9918u: goto label_1c9918;
        case 0x1c991cu: goto label_1c991c;
        case 0x1c9920u: goto label_1c9920;
        case 0x1c9924u: goto label_1c9924;
        case 0x1c9928u: goto label_1c9928;
        case 0x1c992cu: goto label_1c992c;
        case 0x1c9930u: goto label_1c9930;
        case 0x1c9934u: goto label_1c9934;
        case 0x1c9938u: goto label_1c9938;
        case 0x1c993cu: goto label_1c993c;
        case 0x1c9940u: goto label_1c9940;
        case 0x1c9944u: goto label_1c9944;
        case 0x1c9948u: goto label_1c9948;
        case 0x1c994cu: goto label_1c994c;
        case 0x1c9950u: goto label_1c9950;
        case 0x1c9954u: goto label_1c9954;
        case 0x1c9958u: goto label_1c9958;
        case 0x1c995cu: goto label_1c995c;
        case 0x1c9960u: goto label_1c9960;
        case 0x1c9964u: goto label_1c9964;
        case 0x1c9968u: goto label_1c9968;
        case 0x1c996cu: goto label_1c996c;
        case 0x1c9970u: goto label_1c9970;
        case 0x1c9974u: goto label_1c9974;
        case 0x1c9978u: goto label_1c9978;
        case 0x1c997cu: goto label_1c997c;
        case 0x1c9980u: goto label_1c9980;
        case 0x1c9984u: goto label_1c9984;
        case 0x1c9988u: goto label_1c9988;
        case 0x1c998cu: goto label_1c998c;
        case 0x1c9990u: goto label_1c9990;
        case 0x1c9994u: goto label_1c9994;
        case 0x1c9998u: goto label_1c9998;
        case 0x1c999cu: goto label_1c999c;
        case 0x1c99a0u: goto label_1c99a0;
        case 0x1c99a4u: goto label_1c99a4;
        case 0x1c99a8u: goto label_1c99a8;
        case 0x1c99acu: goto label_1c99ac;
        case 0x1c99b0u: goto label_1c99b0;
        case 0x1c99b4u: goto label_1c99b4;
        case 0x1c99b8u: goto label_1c99b8;
        case 0x1c99bcu: goto label_1c99bc;
        case 0x1c99c0u: goto label_1c99c0;
        case 0x1c99c4u: goto label_1c99c4;
        case 0x1c99c8u: goto label_1c99c8;
        case 0x1c99ccu: goto label_1c99cc;
        case 0x1c99d0u: goto label_1c99d0;
        case 0x1c99d4u: goto label_1c99d4;
        case 0x1c99d8u: goto label_1c99d8;
        case 0x1c99dcu: goto label_1c99dc;
        case 0x1c99e0u: goto label_1c99e0;
        case 0x1c99e4u: goto label_1c99e4;
        case 0x1c99e8u: goto label_1c99e8;
        case 0x1c99ecu: goto label_1c99ec;
        case 0x1c99f0u: goto label_1c99f0;
        case 0x1c99f4u: goto label_1c99f4;
        case 0x1c99f8u: goto label_1c99f8;
        case 0x1c99fcu: goto label_1c99fc;
        case 0x1c9a00u: goto label_1c9a00;
        case 0x1c9a04u: goto label_1c9a04;
        case 0x1c9a08u: goto label_1c9a08;
        case 0x1c9a0cu: goto label_1c9a0c;
        case 0x1c9a10u: goto label_1c9a10;
        case 0x1c9a14u: goto label_1c9a14;
        case 0x1c9a18u: goto label_1c9a18;
        case 0x1c9a1cu: goto label_1c9a1c;
        case 0x1c9a20u: goto label_1c9a20;
        case 0x1c9a24u: goto label_1c9a24;
        case 0x1c9a28u: goto label_1c9a28;
        case 0x1c9a2cu: goto label_1c9a2c;
        case 0x1c9a30u: goto label_1c9a30;
        case 0x1c9a34u: goto label_1c9a34;
        case 0x1c9a38u: goto label_1c9a38;
        case 0x1c9a3cu: goto label_1c9a3c;
        case 0x1c9a40u: goto label_1c9a40;
        case 0x1c9a44u: goto label_1c9a44;
        case 0x1c9a48u: goto label_1c9a48;
        case 0x1c9a4cu: goto label_1c9a4c;
        case 0x1c9a50u: goto label_1c9a50;
        case 0x1c9a54u: goto label_1c9a54;
        case 0x1c9a58u: goto label_1c9a58;
        case 0x1c9a5cu: goto label_1c9a5c;
        case 0x1c9a60u: goto label_1c9a60;
        case 0x1c9a64u: goto label_1c9a64;
        case 0x1c9a68u: goto label_1c9a68;
        case 0x1c9a6cu: goto label_1c9a6c;
        case 0x1c9a70u: goto label_1c9a70;
        case 0x1c9a74u: goto label_1c9a74;
        case 0x1c9a78u: goto label_1c9a78;
        case 0x1c9a7cu: goto label_1c9a7c;
        case 0x1c9a80u: goto label_1c9a80;
        case 0x1c9a84u: goto label_1c9a84;
        case 0x1c9a88u: goto label_1c9a88;
        case 0x1c9a8cu: goto label_1c9a8c;
        case 0x1c9a90u: goto label_1c9a90;
        case 0x1c9a94u: goto label_1c9a94;
        case 0x1c9a98u: goto label_1c9a98;
        case 0x1c9a9cu: goto label_1c9a9c;
        case 0x1c9aa0u: goto label_1c9aa0;
        case 0x1c9aa4u: goto label_1c9aa4;
        case 0x1c9aa8u: goto label_1c9aa8;
        case 0x1c9aacu: goto label_1c9aac;
        case 0x1c9ab0u: goto label_1c9ab0;
        case 0x1c9ab4u: goto label_1c9ab4;
        case 0x1c9ab8u: goto label_1c9ab8;
        case 0x1c9abcu: goto label_1c9abc;
        case 0x1c9ac0u: goto label_1c9ac0;
        case 0x1c9ac4u: goto label_1c9ac4;
        case 0x1c9ac8u: goto label_1c9ac8;
        case 0x1c9accu: goto label_1c9acc;
        case 0x1c9ad0u: goto label_1c9ad0;
        case 0x1c9ad4u: goto label_1c9ad4;
        case 0x1c9ad8u: goto label_1c9ad8;
        case 0x1c9adcu: goto label_1c9adc;
        case 0x1c9ae0u: goto label_1c9ae0;
        case 0x1c9ae4u: goto label_1c9ae4;
        case 0x1c9ae8u: goto label_1c9ae8;
        case 0x1c9aecu: goto label_1c9aec;
        case 0x1c9af0u: goto label_1c9af0;
        case 0x1c9af4u: goto label_1c9af4;
        case 0x1c9af8u: goto label_1c9af8;
        case 0x1c9afcu: goto label_1c9afc;
        case 0x1c9b00u: goto label_1c9b00;
        case 0x1c9b04u: goto label_1c9b04;
        case 0x1c9b08u: goto label_1c9b08;
        case 0x1c9b0cu: goto label_1c9b0c;
        case 0x1c9b10u: goto label_1c9b10;
        case 0x1c9b14u: goto label_1c9b14;
        case 0x1c9b18u: goto label_1c9b18;
        case 0x1c9b1cu: goto label_1c9b1c;
        case 0x1c9b20u: goto label_1c9b20;
        case 0x1c9b24u: goto label_1c9b24;
        case 0x1c9b28u: goto label_1c9b28;
        case 0x1c9b2cu: goto label_1c9b2c;
        case 0x1c9b30u: goto label_1c9b30;
        case 0x1c9b34u: goto label_1c9b34;
        case 0x1c9b38u: goto label_1c9b38;
        case 0x1c9b3cu: goto label_1c9b3c;
        case 0x1c9b40u: goto label_1c9b40;
        case 0x1c9b44u: goto label_1c9b44;
        case 0x1c9b48u: goto label_1c9b48;
        case 0x1c9b4cu: goto label_1c9b4c;
        case 0x1c9b50u: goto label_1c9b50;
        case 0x1c9b54u: goto label_1c9b54;
        case 0x1c9b58u: goto label_1c9b58;
        case 0x1c9b5cu: goto label_1c9b5c;
        case 0x1c9b60u: goto label_1c9b60;
        case 0x1c9b64u: goto label_1c9b64;
        case 0x1c9b68u: goto label_1c9b68;
        case 0x1c9b6cu: goto label_1c9b6c;
        case 0x1c9b70u: goto label_1c9b70;
        case 0x1c9b74u: goto label_1c9b74;
        case 0x1c9b78u: goto label_1c9b78;
        case 0x1c9b7cu: goto label_1c9b7c;
        case 0x1c9b80u: goto label_1c9b80;
        case 0x1c9b84u: goto label_1c9b84;
        case 0x1c9b88u: goto label_1c9b88;
        case 0x1c9b8cu: goto label_1c9b8c;
        case 0x1c9b90u: goto label_1c9b90;
        case 0x1c9b94u: goto label_1c9b94;
        case 0x1c9b98u: goto label_1c9b98;
        case 0x1c9b9cu: goto label_1c9b9c;
        case 0x1c9ba0u: goto label_1c9ba0;
        case 0x1c9ba4u: goto label_1c9ba4;
        case 0x1c9ba8u: goto label_1c9ba8;
        case 0x1c9bacu: goto label_1c9bac;
        case 0x1c9bb0u: goto label_1c9bb0;
        case 0x1c9bb4u: goto label_1c9bb4;
        case 0x1c9bb8u: goto label_1c9bb8;
        case 0x1c9bbcu: goto label_1c9bbc;
        case 0x1c9bc0u: goto label_1c9bc0;
        case 0x1c9bc4u: goto label_1c9bc4;
        case 0x1c9bc8u: goto label_1c9bc8;
        case 0x1c9bccu: goto label_1c9bcc;
        case 0x1c9bd0u: goto label_1c9bd0;
        case 0x1c9bd4u: goto label_1c9bd4;
        case 0x1c9bd8u: goto label_1c9bd8;
        case 0x1c9bdcu: goto label_1c9bdc;
        case 0x1c9be0u: goto label_1c9be0;
        case 0x1c9be4u: goto label_1c9be4;
        case 0x1c9be8u: goto label_1c9be8;
        case 0x1c9becu: goto label_1c9bec;
        case 0x1c9bf0u: goto label_1c9bf0;
        case 0x1c9bf4u: goto label_1c9bf4;
        case 0x1c9bf8u: goto label_1c9bf8;
        case 0x1c9bfcu: goto label_1c9bfc;
        case 0x1c9c00u: goto label_1c9c00;
        case 0x1c9c04u: goto label_1c9c04;
        case 0x1c9c08u: goto label_1c9c08;
        case 0x1c9c0cu: goto label_1c9c0c;
        case 0x1c9c10u: goto label_1c9c10;
        case 0x1c9c14u: goto label_1c9c14;
        case 0x1c9c18u: goto label_1c9c18;
        case 0x1c9c1cu: goto label_1c9c1c;
        case 0x1c9c20u: goto label_1c9c20;
        case 0x1c9c24u: goto label_1c9c24;
        case 0x1c9c28u: goto label_1c9c28;
        case 0x1c9c2cu: goto label_1c9c2c;
        case 0x1c9c30u: goto label_1c9c30;
        case 0x1c9c34u: goto label_1c9c34;
        case 0x1c9c38u: goto label_1c9c38;
        case 0x1c9c3cu: goto label_1c9c3c;
        case 0x1c9c40u: goto label_1c9c40;
        case 0x1c9c44u: goto label_1c9c44;
        case 0x1c9c48u: goto label_1c9c48;
        case 0x1c9c4cu: goto label_1c9c4c;
        case 0x1c9c50u: goto label_1c9c50;
        case 0x1c9c54u: goto label_1c9c54;
        case 0x1c9c58u: goto label_1c9c58;
        case 0x1c9c5cu: goto label_1c9c5c;
        case 0x1c9c60u: goto label_1c9c60;
        case 0x1c9c64u: goto label_1c9c64;
        case 0x1c9c68u: goto label_1c9c68;
        case 0x1c9c6cu: goto label_1c9c6c;
        case 0x1c9c70u: goto label_1c9c70;
        case 0x1c9c74u: goto label_1c9c74;
        case 0x1c9c78u: goto label_1c9c78;
        case 0x1c9c7cu: goto label_1c9c7c;
        case 0x1c9c80u: goto label_1c9c80;
        case 0x1c9c84u: goto label_1c9c84;
        case 0x1c9c88u: goto label_1c9c88;
        case 0x1c9c8cu: goto label_1c9c8c;
        case 0x1c9c90u: goto label_1c9c90;
        case 0x1c9c94u: goto label_1c9c94;
        case 0x1c9c98u: goto label_1c9c98;
        case 0x1c9c9cu: goto label_1c9c9c;
        case 0x1c9ca0u: goto label_1c9ca0;
        case 0x1c9ca4u: goto label_1c9ca4;
        case 0x1c9ca8u: goto label_1c9ca8;
        case 0x1c9cacu: goto label_1c9cac;
        case 0x1c9cb0u: goto label_1c9cb0;
        case 0x1c9cb4u: goto label_1c9cb4;
        case 0x1c9cb8u: goto label_1c9cb8;
        case 0x1c9cbcu: goto label_1c9cbc;
        case 0x1c9cc0u: goto label_1c9cc0;
        case 0x1c9cc4u: goto label_1c9cc4;
        case 0x1c9cc8u: goto label_1c9cc8;
        case 0x1c9cccu: goto label_1c9ccc;
        case 0x1c9cd0u: goto label_1c9cd0;
        case 0x1c9cd4u: goto label_1c9cd4;
        case 0x1c9cd8u: goto label_1c9cd8;
        case 0x1c9cdcu: goto label_1c9cdc;
        case 0x1c9ce0u: goto label_1c9ce0;
        case 0x1c9ce4u: goto label_1c9ce4;
        case 0x1c9ce8u: goto label_1c9ce8;
        case 0x1c9cecu: goto label_1c9cec;
        case 0x1c9cf0u: goto label_1c9cf0;
        case 0x1c9cf4u: goto label_1c9cf4;
        case 0x1c9cf8u: goto label_1c9cf8;
        case 0x1c9cfcu: goto label_1c9cfc;
        case 0x1c9d00u: goto label_1c9d00;
        case 0x1c9d04u: goto label_1c9d04;
        case 0x1c9d08u: goto label_1c9d08;
        case 0x1c9d0cu: goto label_1c9d0c;
        case 0x1c9d10u: goto label_1c9d10;
        case 0x1c9d14u: goto label_1c9d14;
        case 0x1c9d18u: goto label_1c9d18;
        case 0x1c9d1cu: goto label_1c9d1c;
        case 0x1c9d20u: goto label_1c9d20;
        case 0x1c9d24u: goto label_1c9d24;
        case 0x1c9d28u: goto label_1c9d28;
        case 0x1c9d2cu: goto label_1c9d2c;
        case 0x1c9d30u: goto label_1c9d30;
        case 0x1c9d34u: goto label_1c9d34;
        case 0x1c9d38u: goto label_1c9d38;
        case 0x1c9d3cu: goto label_1c9d3c;
        case 0x1c9d40u: goto label_1c9d40;
        case 0x1c9d44u: goto label_1c9d44;
        case 0x1c9d48u: goto label_1c9d48;
        case 0x1c9d4cu: goto label_1c9d4c;
        case 0x1c9d50u: goto label_1c9d50;
        case 0x1c9d54u: goto label_1c9d54;
        case 0x1c9d58u: goto label_1c9d58;
        case 0x1c9d5cu: goto label_1c9d5c;
        case 0x1c9d60u: goto label_1c9d60;
        case 0x1c9d64u: goto label_1c9d64;
        case 0x1c9d68u: goto label_1c9d68;
        case 0x1c9d6cu: goto label_1c9d6c;
        case 0x1c9d70u: goto label_1c9d70;
        case 0x1c9d74u: goto label_1c9d74;
        case 0x1c9d78u: goto label_1c9d78;
        case 0x1c9d7cu: goto label_1c9d7c;
        case 0x1c9d80u: goto label_1c9d80;
        case 0x1c9d84u: goto label_1c9d84;
        case 0x1c9d88u: goto label_1c9d88;
        case 0x1c9d8cu: goto label_1c9d8c;
        case 0x1c9d90u: goto label_1c9d90;
        case 0x1c9d94u: goto label_1c9d94;
        case 0x1c9d98u: goto label_1c9d98;
        case 0x1c9d9cu: goto label_1c9d9c;
        case 0x1c9da0u: goto label_1c9da0;
        case 0x1c9da4u: goto label_1c9da4;
        case 0x1c9da8u: goto label_1c9da8;
        case 0x1c9dacu: goto label_1c9dac;
        case 0x1c9db0u: goto label_1c9db0;
        case 0x1c9db4u: goto label_1c9db4;
        case 0x1c9db8u: goto label_1c9db8;
        case 0x1c9dbcu: goto label_1c9dbc;
        case 0x1c9dc0u: goto label_1c9dc0;
        case 0x1c9dc4u: goto label_1c9dc4;
        case 0x1c9dc8u: goto label_1c9dc8;
        case 0x1c9dccu: goto label_1c9dcc;
        case 0x1c9dd0u: goto label_1c9dd0;
        case 0x1c9dd4u: goto label_1c9dd4;
        case 0x1c9dd8u: goto label_1c9dd8;
        case 0x1c9ddcu: goto label_1c9ddc;
        case 0x1c9de0u: goto label_1c9de0;
        case 0x1c9de4u: goto label_1c9de4;
        case 0x1c9de8u: goto label_1c9de8;
        case 0x1c9decu: goto label_1c9dec;
        case 0x1c9df0u: goto label_1c9df0;
        case 0x1c9df4u: goto label_1c9df4;
        case 0x1c9df8u: goto label_1c9df8;
        case 0x1c9dfcu: goto label_1c9dfc;
        case 0x1c9e00u: goto label_1c9e00;
        case 0x1c9e04u: goto label_1c9e04;
        case 0x1c9e08u: goto label_1c9e08;
        case 0x1c9e0cu: goto label_1c9e0c;
        case 0x1c9e10u: goto label_1c9e10;
        case 0x1c9e14u: goto label_1c9e14;
        case 0x1c9e18u: goto label_1c9e18;
        case 0x1c9e1cu: goto label_1c9e1c;
        case 0x1c9e20u: goto label_1c9e20;
        case 0x1c9e24u: goto label_1c9e24;
        case 0x1c9e28u: goto label_1c9e28;
        case 0x1c9e2cu: goto label_1c9e2c;
        case 0x1c9e30u: goto label_1c9e30;
        case 0x1c9e34u: goto label_1c9e34;
        case 0x1c9e38u: goto label_1c9e38;
        case 0x1c9e3cu: goto label_1c9e3c;
        case 0x1c9e40u: goto label_1c9e40;
        case 0x1c9e44u: goto label_1c9e44;
        case 0x1c9e48u: goto label_1c9e48;
        case 0x1c9e4cu: goto label_1c9e4c;
        case 0x1c9e50u: goto label_1c9e50;
        case 0x1c9e54u: goto label_1c9e54;
        case 0x1c9e58u: goto label_1c9e58;
        case 0x1c9e5cu: goto label_1c9e5c;
        case 0x1c9e60u: goto label_1c9e60;
        case 0x1c9e64u: goto label_1c9e64;
        case 0x1c9e68u: goto label_1c9e68;
        case 0x1c9e6cu: goto label_1c9e6c;
        case 0x1c9e70u: goto label_1c9e70;
        case 0x1c9e74u: goto label_1c9e74;
        case 0x1c9e78u: goto label_1c9e78;
        case 0x1c9e7cu: goto label_1c9e7c;
        case 0x1c9e80u: goto label_1c9e80;
        case 0x1c9e84u: goto label_1c9e84;
        case 0x1c9e88u: goto label_1c9e88;
        case 0x1c9e8cu: goto label_1c9e8c;
        case 0x1c9e90u: goto label_1c9e90;
        case 0x1c9e94u: goto label_1c9e94;
        case 0x1c9e98u: goto label_1c9e98;
        case 0x1c9e9cu: goto label_1c9e9c;
        case 0x1c9ea0u: goto label_1c9ea0;
        case 0x1c9ea4u: goto label_1c9ea4;
        case 0x1c9ea8u: goto label_1c9ea8;
        case 0x1c9eacu: goto label_1c9eac;
        case 0x1c9eb0u: goto label_1c9eb0;
        case 0x1c9eb4u: goto label_1c9eb4;
        case 0x1c9eb8u: goto label_1c9eb8;
        case 0x1c9ebcu: goto label_1c9ebc;
        case 0x1c9ec0u: goto label_1c9ec0;
        case 0x1c9ec4u: goto label_1c9ec4;
        case 0x1c9ec8u: goto label_1c9ec8;
        case 0x1c9eccu: goto label_1c9ecc;
        case 0x1c9ed0u: goto label_1c9ed0;
        case 0x1c9ed4u: goto label_1c9ed4;
        case 0x1c9ed8u: goto label_1c9ed8;
        case 0x1c9edcu: goto label_1c9edc;
        case 0x1c9ee0u: goto label_1c9ee0;
        case 0x1c9ee4u: goto label_1c9ee4;
        case 0x1c9ee8u: goto label_1c9ee8;
        case 0x1c9eecu: goto label_1c9eec;
        case 0x1c9ef0u: goto label_1c9ef0;
        case 0x1c9ef4u: goto label_1c9ef4;
        case 0x1c9ef8u: goto label_1c9ef8;
        case 0x1c9efcu: goto label_1c9efc;
        case 0x1c9f00u: goto label_1c9f00;
        case 0x1c9f04u: goto label_1c9f04;
        case 0x1c9f08u: goto label_1c9f08;
        case 0x1c9f0cu: goto label_1c9f0c;
        case 0x1c9f10u: goto label_1c9f10;
        case 0x1c9f14u: goto label_1c9f14;
        case 0x1c9f18u: goto label_1c9f18;
        case 0x1c9f1cu: goto label_1c9f1c;
        case 0x1c9f20u: goto label_1c9f20;
        case 0x1c9f24u: goto label_1c9f24;
        default: break;
    }

    ctx->pc = 0x1c8fa0u;

label_1c8fa0:
    // 0x1c8fa0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c8fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1c8fa4:
    // 0x1c8fa4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1c8fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1c8fa8:
    // 0x1c8fa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c8fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c8fac:
    // 0x1c8fac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c8fb0:
    // 0x1c8fb0: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x1c8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_1c8fb4:
    // 0x1c8fb4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1c8fb8:
    // 0x1c8fb8: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x1c8fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1c8fbc:
    // 0x1c8fbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8fc0:
    // 0x1c8fc0: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1c8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1c8fc4:
    // 0x1c8fc4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x1c8fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1c8fc8:
    // 0x1c8fc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8fcc:
    // 0x1c8fcc: 0xac241a64  sw          $a0, 0x1A64($at)
    ctx->pc = 0x1c8fccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 4));
label_1c8fd0:
    // 0x1c8fd0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8fd4:
    // 0x1c8fd4: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c8fd8:
    // 0x1c8fd8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1c8fdc:
    if (ctx->pc == 0x1C8FDCu) {
        ctx->pc = 0x1C8FE0u;
        goto label_1c8fe0;
    }
    ctx->pc = 0x1C8FD8u;
    {
        const bool branch_taken_0x1c8fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8fd8) {
            ctx->pc = 0x1C9000u;
            goto label_1c9000;
        }
    }
    ctx->pc = 0x1C8FE0u;
label_1c8fe0:
    // 0x1c8fe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8fe4:
    // 0x1c8fe4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c8fe8:
    // 0x1c8fe8: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1c8fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_1c8fec:
    // 0x1c8fec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c8fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c8ff0:
    // 0x1c8ff0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c8ff4:
    // 0x1c8ff4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1c8ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1c8ff8:
    // 0x1c8ff8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c8ffc:
    // 0x1c8ffc: 0xa0a01921  sb          $zero, 0x1921($a1)
    ctx->pc = 0x1c8ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6433), (uint8_t)GPR_U32(ctx, 0));
label_1c9000:
    // 0x1c9000: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9004:
    // 0x1c9004: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c9004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c9008:
    // 0x1c9008: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c9008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c900c:
    // 0x1c900c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x1c900cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1c9010:
    // 0x1c9010: 0x1020037c  beqz        $at, . + 4 + (0x37C << 2)
label_1c9014:
    if (ctx->pc == 0x1C9014u) {
        ctx->pc = 0x1C9018u;
        goto label_1c9018;
    }
    ctx->pc = 0x1C9010u;
    {
        const bool branch_taken_0x1c9010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9010) {
            ctx->pc = 0x1C9E04u;
            goto label_1c9e04;
        }
    }
    ctx->pc = 0x1C9018u;
label_1c9018:
    // 0x1c9018: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1c9018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1c901c:
    // 0x1c901c: 0x2465f460  addiu       $a1, $v1, -0xBA0
    ctx->pc = 0x1c901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964320));
label_1c9020:
    // 0x1c9020: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1c9020u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c9024:
    // 0x1c9024: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x1c9024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1c9028:
    // 0x1c9028: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1c902c:
    // 0x1c902c: 0x1000008  jr          $t0
label_1c9030:
    if (ctx->pc == 0x1C9030u) {
        ctx->pc = 0x1C9034u;
        goto label_1c9034;
    }
    ctx->pc = 0x1C902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C902Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C9034u;
label_1c9034:
    // 0x1c9034: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c9034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9038:
    // 0x1c9038: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c903c:
    // 0x1c903c: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x1c903cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
label_1c9040:
    // 0x1c9040: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1c9040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1c9044:
    // 0x1c9044: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c9044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1c9048:
    // 0x1c9048: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c9048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1c904c:
    // 0x1c904c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9050:
    // 0x1c9050: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9054:
    // 0x1c9054: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c9054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c9058:
    // 0x1c9058: 0x2406079f  addiu       $a2, $zero, 0x79F
    ctx->pc = 0x1c9058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1951));
label_1c905c:
    // 0x1c905c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c905cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9060:
    // 0x1c9060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c9060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c9064:
    // 0x1c9064: 0xc0965d0  jal         func_259740
label_1c9068:
    if (ctx->pc == 0x1C9068u) {
        ctx->pc = 0x1C906Cu;
        goto label_1c906c;
    }
    ctx->pc = 0x1C9064u;
    SET_GPR_U32(ctx, 31, 0x1C906Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C9064u, 0x1C906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C906Cu;
label_1c906c:
    // 0x1c906c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9070:
    // 0x1c9070: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c9070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c9074:
    // 0x1c9074: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1c9074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_1c9078:
    // 0x1c9078: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x1c9078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1c907c:
    // 0x1c907c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1c9080:
    if (ctx->pc == 0x1C9080u) {
        ctx->pc = 0x1C9084u;
        goto label_1c9084;
    }
    ctx->pc = 0x1C907Cu;
    {
        const bool branch_taken_0x1c907c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c907c) {
            ctx->pc = 0x1C90C8u;
            goto label_1c90c8;
        }
    }
    ctx->pc = 0x1C9084u;
label_1c9084:
    // 0x1c9084: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1c9084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1c9088:
    // 0x1c9088: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c908c:
    // 0x1c908c: 0xa0641576  sb          $a0, 0x1576($v1)
    ctx->pc = 0x1c908cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 4));
label_1c9090:
    // 0x1c9090: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c9090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9094:
    // 0x1c9094: 0x8ce30130  lw          $v1, 0x130($a3)
    ctx->pc = 0x1c9094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_1c9098:
    // 0x1c9098: 0x3c06469c  lui         $a2, 0x469C
    ctx->pc = 0x1c9098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18076 << 16));
label_1c909c:
    // 0x1c909c: 0x34c24000  ori         $v0, $a2, 0x4000
    ctx->pc = 0x1c909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_1c90a0:
    // 0x1c90a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c90a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c90a4:
    // 0x1c90a4: 0x24090300  addiu       $t1, $zero, 0x300
    ctx->pc = 0x1c90a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_1c90a8:
    // 0x1c90a8: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x1c90a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_1c90ac:
    // 0x1c90ac: 0x246a0030  addiu       $t2, $v1, 0x30
    ctx->pc = 0x1c90acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1c90b0:
    // 0x1c90b0: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x1c90b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_1c90b4:
    // 0x1c90b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c90b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c90b8:
    // 0x1c90b8: 0xc067b18  jal         func_19EC60
label_1c90bc:
    if (ctx->pc == 0x1C90BCu) {
        ctx->pc = 0x1C90C0u;
        goto label_1c90c0;
    }
    ctx->pc = 0x1C90B8u;
    SET_GPR_U32(ctx, 31, 0x1C90C0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C90B8u, 0x1C90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90C0u;
label_1c90c0:
    // 0x1c90c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c90c4:
    if (ctx->pc == 0x1C90C4u) {
        ctx->pc = 0x1C90C8u;
        goto label_1c90c8;
    }
    ctx->pc = 0x1C90C0u;
    {
        const bool branch_taken_0x1c90c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90c0) {
            ctx->pc = 0x1C90D4u;
            goto label_1c90d4;
        }
    }
    ctx->pc = 0x1C90C8u;
label_1c90c8:
    // 0x1c90c8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1c90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c90cc:
    // 0x1c90cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c90d0:
    // 0x1c90d0: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x1c90d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
label_1c90d4:
    // 0x1c90d4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1c90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1c90d8:
    // 0x1c90d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c90dc:
    // 0x1c90dc: 0xa0431577  sb          $v1, 0x1577($v0)
    ctx->pc = 0x1c90dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 3));
label_1c90e0:
    // 0x1c90e0: 0xc057048  jal         func_15C120
label_1c90e4:
    if (ctx->pc == 0x1C90E4u) {
        ctx->pc = 0x1C90E8u;
        goto label_1c90e8;
    }
    ctx->pc = 0x1C90E0u;
    SET_GPR_U32(ctx, 31, 0x1C90E8u);
    ctx->pc = 0x15C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C120u, 0x1C90E0u, 0x1C90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90E8u;
label_1c90e8:
    // 0x1c90e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1c90ec:
    if (ctx->pc == 0x1C90ECu) {
        ctx->pc = 0x1C90F0u;
        goto label_1c90f0;
    }
    ctx->pc = 0x1C90E8u;
    {
        const bool branch_taken_0x1c90e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90e8) {
            ctx->pc = 0x1C9138u;
            goto label_1c9138;
        }
    }
    ctx->pc = 0x1C90F0u;
label_1c90f0:
    // 0x1c90f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c90f4:
    // 0x1c90f4: 0x8c6313ec  lw          $v1, 0x13EC($v1)
    ctx->pc = 0x1c90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5100)));
label_1c90f8:
    // 0x1c90f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1c90fc:
    if (ctx->pc == 0x1C90FCu) {
        ctx->pc = 0x1C9100u;
        goto label_1c9100;
    }
    ctx->pc = 0x1C90F8u;
    {
        const bool branch_taken_0x1c90f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90f8) {
            ctx->pc = 0x1C9138u;
            goto label_1c9138;
        }
    }
    ctx->pc = 0x1C9100u;
label_1c9100:
    // 0x1c9100: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9104:
    // 0x1c9104: 0x8c8513ec  lw          $a1, 0x13EC($a0)
    ctx->pc = 0x1c9104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5100)));
label_1c9108:
    // 0x1c9108: 0xc4a1128c  lwc1        $f1, 0x128C($a1)
    ctx->pc = 0x1c9108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c910c:
    // 0x1c910c: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x1c910cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
label_1c9110:
    // 0x1c9110: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c9110u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9114:
    // 0x1c9114: 0x0  nop
    ctx->pc = 0x1c9114u;
    // NOP
label_1c9118:
    // 0x1c9118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c911c:
    // 0x1c911c: 0x0  nop
    ctx->pc = 0x1c911cu;
    // NOP
label_1c9120:
    // 0x1c9120: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1c9124:
    if (ctx->pc == 0x1C9124u) {
        ctx->pc = 0x1C9128u;
        goto label_1c9128;
    }
    ctx->pc = 0x1C9120u;
    {
        const bool branch_taken_0x1c9120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9120) {
            ctx->pc = 0x1C9138u;
            goto label_1c9138;
        }
    }
    ctx->pc = 0x1C9128u;
label_1c9128:
    // 0x1c9128: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c912c:
    // 0x1c912c: 0x8c4313ec  lw          $v1, 0x13EC($v0)
    ctx->pc = 0x1c912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
label_1c9130:
    // 0x1c9130: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9134:
    // 0x1c9134: 0xac4313e8  sw          $v1, 0x13E8($v0)
    ctx->pc = 0x1c9134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 3));
label_1c9138:
    // 0x1c9138: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1c9138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_1c913c:
    // 0x1c913c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c913cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9140:
    // 0x1c9140: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9144:
    // 0x1c9144: 0xe4a01280  swc1        $f0, 0x1280($a1)
    ctx->pc = 0x1c9144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4736), bits); }
label_1c9148:
    // 0x1c9148: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c914c:
    // 0x1c914c: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1c914cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_1c9150:
    // 0x1c9150: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9154:
    // 0x1c9154: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1c9154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
label_1c9158:
    // 0x1c9158: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c915c:
    // 0x1c915c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9160:
    // 0x1c9160: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1c9160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_1c9164:
    // 0x1c9164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9168:
    // 0x1c9168: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c916c:
    // 0x1c916c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1c916cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1c9170:
    // 0x1c9170: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9174:
    // 0x1c9174: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1c9174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9178:
    // 0x1c9178: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c9178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1c917c:
    // 0x1c917c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c917cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9180:
    // 0x1c9180: 0x0  nop
    ctx->pc = 0x1c9180u;
    // NOP
label_1c9184:
    // 0x1c9184: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9188:
    // 0x1c9188: 0x0  nop
    ctx->pc = 0x1c9188u;
    // NOP
label_1c918c:
    // 0x1c918c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1c9190:
    if (ctx->pc == 0x1C9190u) {
        ctx->pc = 0x1C9194u;
        goto label_1c9194;
    }
    ctx->pc = 0x1C918Cu;
    {
        const bool branch_taken_0x1c918c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c918c) {
            ctx->pc = 0x1C91A4u;
            goto label_1c91a4;
        }
    }
    ctx->pc = 0x1C9194u;
label_1c9194:
    // 0x1c9194: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c9194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1c9198:
    // 0x1c9198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c919c:
    // 0x1c919c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c91a0:
    // 0x1c91a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1c91a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1c91a4:
    // 0x1c91a4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c91a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c91a8:
    // 0x1c91a8: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1c91a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c91ac:
    // 0x1c91ac: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1c91acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_1c91b0:
    // 0x1c91b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c91b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c91b4:
    // 0x1c91b4: 0x0  nop
    ctx->pc = 0x1c91b4u;
    // NOP
label_1c91b8:
    // 0x1c91b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c91b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c91bc:
    // 0x1c91bc: 0x0  nop
    ctx->pc = 0x1c91bcu;
    // NOP
label_1c91c0:
    // 0x1c91c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1c91c4:
    if (ctx->pc == 0x1C91C4u) {
        ctx->pc = 0x1C91C8u;
        goto label_1c91c8;
    }
    ctx->pc = 0x1C91C0u;
    {
        const bool branch_taken_0x1c91c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c91c0) {
            ctx->pc = 0x1C91D8u;
            goto label_1c91d8;
        }
    }
    ctx->pc = 0x1C91C8u;
label_1c91c8:
    // 0x1c91c8: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1c91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_1c91cc:
    // 0x1c91cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c91ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c91d0:
    // 0x1c91d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c91d4:
    // 0x1c91d4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1c91d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1c91d8:
    // 0x1c91d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c91dc:
    // 0x1c91dc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c91dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c91e0:
    // 0x1c91e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c91e4:
    // 0x1c91e4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1c91e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_1c91e8:
    // 0x1c91e8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c91ec:
    // 0x1c91ec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c91ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c91f0:
    // 0x1c91f0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c91f4:
    // 0x1c91f4: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1c91f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c91f8:
    // 0x1c91f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c91f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c91fc:
    // 0x1c91fc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c91fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c9200:
    // 0x1c9200: 0x30850200  andi        $a1, $a0, 0x200
    ctx->pc = 0x1c9200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_1c9204:
    // 0x1c9204: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1c9208:
    if (ctx->pc == 0x1C9208u) {
        ctx->pc = 0x1C920Cu;
        goto label_1c920c;
    }
    ctx->pc = 0x1C9204u;
    {
        const bool branch_taken_0x1c9204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9204) {
            ctx->pc = 0x1C9218u;
            goto label_1c9218;
        }
    }
    ctx->pc = 0x1C920Cu;
label_1c920c:
    // 0x1c920c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c9210:
    // 0x1c9210: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9214:
    // 0x1c9214: 0xa04313a7  sb          $v1, 0x13A7($v0)
    ctx->pc = 0x1c9214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5031), (uint8_t)GPR_U32(ctx, 3));
label_1c9218:
    // 0x1c9218: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c921c:
    // 0x1c921c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c921cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1c9220:
    // 0x1c9220: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c9224:
    // 0x1c9224: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c9224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1c9228:
    // 0x1c9228: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c922c:
    if (ctx->pc == 0x1C922Cu) {
        ctx->pc = 0x1C9230u;
        goto label_1c9230;
    }
    ctx->pc = 0x1C9228u;
    {
        const bool branch_taken_0x1c9228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9228) {
            ctx->pc = 0x1C9244u;
            goto label_1c9244;
        }
    }
    ctx->pc = 0x1C9230u;
label_1c9230:
    // 0x1c9230: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c9230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c9234:
    // 0x1c9234: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9238:
    // 0x1c9238: 0xa0431577  sb          $v1, 0x1577($v0)
    ctx->pc = 0x1c9238u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 3));
label_1c923c:
    // 0x1c923c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c9240:
    if (ctx->pc == 0x1C9240u) {
        ctx->pc = 0x1C9244u;
        goto label_1c9244;
    }
    ctx->pc = 0x1C923Cu;
    {
        const bool branch_taken_0x1c923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c923c) {
            ctx->pc = 0x1C9250u;
            goto label_1c9250;
        }
    }
    ctx->pc = 0x1C9244u;
label_1c9244:
    // 0x1c9244: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1c9244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1c9248:
    // 0x1c9248: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c924c:
    // 0x1c924c: 0xa0431577  sb          $v1, 0x1577($v0)
    ctx->pc = 0x1c924cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 3));
label_1c9250:
    // 0x1c9250: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9254:
    // 0x1c9254: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x1c9254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
label_1c9258:
    // 0x1c9258: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c925c:
    // 0x1c925c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1c925cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_1c9260:
    // 0x1c9260: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1c9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1c9264:
    // 0x1c9264: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_1c9268:
    if (ctx->pc == 0x1C9268u) {
        ctx->pc = 0x1C926Cu;
        goto label_1c926c;
    }
    ctx->pc = 0x1C9264u;
    {
        const bool branch_taken_0x1c9264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9264) {
            ctx->pc = 0x1C930Cu;
            goto label_1c930c;
        }
    }
    ctx->pc = 0x1C926Cu;
label_1c926c:
    // 0x1c926c: 0xc067694  jal         func_19DA50
label_1c9270:
    if (ctx->pc == 0x1C9270u) {
        ctx->pc = 0x1C9274u;
        goto label_1c9274;
    }
    ctx->pc = 0x1C926Cu;
    SET_GPR_U32(ctx, 31, 0x1C9274u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C926Cu, 0x1C9274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9274u;
label_1c9274:
    // 0x1c9274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c9278:
    // 0x1c9278: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1c9278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1c927c:
    // 0x1c927c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1c927cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1c9280:
    // 0x1c9280: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c9280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c9284:
    // 0x1c9284: 0x24429228  addiu       $v0, $v0, -0x6DD8
    ctx->pc = 0x1c9284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939176));
label_1c9288:
    // 0x1c9288: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1c928c:
    // 0x1c928c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1c928cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9290:
    // 0x1c9290: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1c9290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c9294:
    // 0x1c9294: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9298:
    // 0x1c9298: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1c9298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1c929c:
    // 0x1c929c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1c929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1c92a0:
    // 0x1c92a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1c92a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1c92a4:
    // 0x1c92a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c92a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c92a8:
    // 0x1c92a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c92a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1c92ac:
    // 0x1c92ac: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c92acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1c92b0:
    // 0x1c92b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c92b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c92b4:
    // 0x1c92b4: 0xc067b18  jal         func_19EC60
label_1c92b8:
    if (ctx->pc == 0x1C92B8u) {
        ctx->pc = 0x1C92BCu;
        goto label_1c92bc;
    }
    ctx->pc = 0x1C92B4u;
    SET_GPR_U32(ctx, 31, 0x1C92BCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C92B4u, 0x1C92BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92BCu;
label_1c92bc:
    // 0x1c92bc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c92c0:
    // 0x1c92c0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1c92c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c92c4:
    // 0x1c92c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c92c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c92c8:
    // 0x1c92c8: 0x0  nop
    ctx->pc = 0x1c92c8u;
    // NOP
label_1c92cc:
    // 0x1c92cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c92ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c92d0:
    // 0x1c92d0: 0x0  nop
    ctx->pc = 0x1c92d0u;
    // NOP
label_1c92d4:
    // 0x1c92d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1c92d8:
    if (ctx->pc == 0x1C92D8u) {
        ctx->pc = 0x1C92DCu;
        goto label_1c92dc;
    }
    ctx->pc = 0x1C92D4u;
    {
        const bool branch_taken_0x1c92d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c92d4) {
            ctx->pc = 0x1C92E8u;
            goto label_1c92e8;
        }
    }
    ctx->pc = 0x1C92DCu;
label_1c92dc:
    // 0x1c92dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c92dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c92e0:
    // 0x1c92e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c92e4:
    // 0x1c92e4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c92e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1c92e8:
    // 0x1c92e8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1c92e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1c92ec:
    // 0x1c92ec: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1c92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1c92f0:
    // 0x1c92f0: 0xc0684d8  jal         func_1A1360
label_1c92f4:
    if (ctx->pc == 0x1C92F4u) {
        ctx->pc = 0x1C92F8u;
        goto label_1c92f8;
    }
    ctx->pc = 0x1C92F0u;
    SET_GPR_U32(ctx, 31, 0x1C92F8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1C92F0u, 0x1C92F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92F8u;
label_1c92f8:
    // 0x1c92f8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1c92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_1c92fc:
    // 0x1c92fc: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1c92fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_1c9300:
    // 0x1c9300: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1c9300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_1c9304:
    // 0x1c9304: 0xc0684d8  jal         func_1A1360
label_1c9308:
    if (ctx->pc == 0x1C9308u) {
        ctx->pc = 0x1C930Cu;
        goto label_1c930c;
    }
    ctx->pc = 0x1C9304u;
    SET_GPR_U32(ctx, 31, 0x1C930Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1C9304u, 0x1C930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C930Cu;
label_1c930c:
    // 0x1c930c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9310:
    // 0x1c9310: 0x904309db  lbu         $v1, 0x9DB($v0)
    ctx->pc = 0x1c9310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1c9314:
    // 0x1c9314: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c9314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c9318:
    // 0x1c9318: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x1c9318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1c931c:
    // 0x1c931c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1c9320:
    if (ctx->pc == 0x1C9320u) {
        ctx->pc = 0x1C9324u;
        goto label_1c9324;
    }
    ctx->pc = 0x1C931Cu;
    {
        const bool branch_taken_0x1c931c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c931c) {
            ctx->pc = 0x1C933Cu;
            goto label_1c933c;
        }
    }
    ctx->pc = 0x1C9324u;
label_1c9324:
    // 0x1c9324: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9328:
    // 0x1c9328: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1c9328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c932c:
    // 0x1c932c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1c932cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_1c9330:
    // 0x1c9330: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x1c9330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1c9334:
    // 0x1c9334: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c9338:
    if (ctx->pc == 0x1C9338u) {
        ctx->pc = 0x1C933Cu;
        goto label_1c933c;
    }
    ctx->pc = 0x1C9334u;
    {
        const bool branch_taken_0x1c9334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9334) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C933Cu;
label_1c933c:
    // 0x1c933c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c933cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9340:
    // 0x1c9340: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c9344:
    // 0x1c9344: 0x3c078040  lui         $a3, 0x8040
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32832 << 16));
label_1c9348:
    // 0x1c9348: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1c9348u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1c934c:
    // 0x1c934c: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1c934cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
label_1c9350:
    // 0x1c9350: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9354:
    // 0x1c9354: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c9354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c9358:
    // 0x1c9358: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x1c9358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
label_1c935c:
    // 0x1c935c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c9360:
    // 0x1c9360: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1c9360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c9364:
    // 0x1c9364: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1c9364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_1c9368:
    // 0x1c9368: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c936c:
    if (ctx->pc == 0x1C936Cu) {
        ctx->pc = 0x1C9370u;
        goto label_1c9370;
    }
    ctx->pc = 0x1C9368u;
    {
        const bool branch_taken_0x1c9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9368) {
            ctx->pc = 0x1C9388u;
            goto label_1c9388;
        }
    }
    ctx->pc = 0x1C9370u;
label_1c9370:
    // 0x1c9370: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9374:
    // 0x1c9374: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c9374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c9378:
    // 0x1c9378: 0x3c027fbf  lui         $v0, 0x7FBF
    ctx->pc = 0x1c9378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32703 << 16));
label_1c937c:
    // 0x1c937c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c9380:
    // 0x1c9380: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c9380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c9384:
    // 0x1c9384: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c9384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c9388:
    // 0x1c9388: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c938c:
    // 0x1c938c: 0x904409db  lbu         $a0, 0x9DB($v0)
    ctx->pc = 0x1c938cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1c9390:
    // 0x1c9390: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1c9390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c9394:
    // 0x1c9394: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1c9394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1c9398:
    // 0x1c9398: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1c939c:
    if (ctx->pc == 0x1C939Cu) {
        ctx->pc = 0x1C93A0u;
        goto label_1c93a0;
    }
    ctx->pc = 0x1C9398u;
    {
        const bool branch_taken_0x1c9398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9398) {
            ctx->pc = 0x1C9420u;
            goto label_1c9420;
        }
    }
    ctx->pc = 0x1C93A0u;
label_1c93a0:
    // 0x1c93a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c93a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c93a4:
    // 0x1c93a4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1c93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c93a8:
    // 0x1c93a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1c93a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_1c93ac:
    // 0x1c93ac: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x1c93acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1c93b0:
    // 0x1c93b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c93b4:
    // 0x1c93b4: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1c93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_1c93b8:
    // 0x1c93b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c93b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c93bc:
    // 0x1c93bc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c93c0:
    // 0x1c93c0: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1c93c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
label_1c93c4:
    // 0x1c93c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c93c8:
    // 0x1c93c8: 0x8c441b6c  lw          $a0, 0x1B6C($v0)
    ctx->pc = 0x1c93c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1c93cc:
    // 0x1c93cc: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_1c93d0:
    if (ctx->pc == 0x1C93D0u) {
        ctx->pc = 0x1C93D4u;
        goto label_1c93d4;
    }
    ctx->pc = 0x1C93CCu;
    {
        const bool branch_taken_0x1c93cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c93cc) {
            ctx->pc = 0x1C9420u;
            goto label_1c9420;
        }
    }
    ctx->pc = 0x1C93D4u;
label_1c93d4:
    // 0x1c93d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c93d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c93d8:
    // 0x1c93d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c93dc:
    // 0x1c93dc: 0xac431b6c  sw          $v1, 0x1B6C($v0)
    ctx->pc = 0x1c93dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 3));
label_1c93e0:
    // 0x1c93e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c93e4:
    // 0x1c93e4: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1c93e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
label_1c93e8:
    // 0x1c93e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c93ec:
    if (ctx->pc == 0x1C93ECu) {
        ctx->pc = 0x1C93F0u;
        goto label_1c93f0;
    }
    ctx->pc = 0x1C93E8u;
    {
        const bool branch_taken_0x1c93e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93e8) {
            ctx->pc = 0x1C9420u;
            goto label_1c9420;
        }
    }
    ctx->pc = 0x1C93F0u;
label_1c93f0:
    // 0x1c93f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c93f4:
    // 0x1c93f4: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1c93f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1c93f8:
    // 0x1c93f8: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1c93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
label_1c93fc:
    // 0x1c93fc: 0xa46215ec  sh          $v0, 0x15EC($v1)
    ctx->pc = 0x1c93fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 2));
label_1c9400:
    // 0x1c9400: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9404:
    // 0x1c9404: 0x844315ec  lh          $v1, 0x15EC($v0)
    ctx->pc = 0x1c9404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
label_1c9408:
    // 0x1c9408: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1c9408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_1c940c:
    // 0x1c940c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c940cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c9410:
    // 0x1c9410: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1c9414:
    if (ctx->pc == 0x1C9414u) {
        ctx->pc = 0x1C9418u;
        goto label_1c9418;
    }
    ctx->pc = 0x1C9410u;
    {
        const bool branch_taken_0x1c9410 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c9410) {
            ctx->pc = 0x1C9420u;
            goto label_1c9420;
        }
    }
    ctx->pc = 0x1C9418u;
label_1c9418:
    // 0x1c9418: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c941c:
    // 0x1c941c: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1c941cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1c9420:
    // 0x1c9420: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9424:
    // 0x1c9424: 0x8c8213e8  lw          $v0, 0x13E8($a0)
    ctx->pc = 0x1c9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
label_1c9428:
    // 0x1c9428: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1c942c:
    if (ctx->pc == 0x1C942Cu) {
        ctx->pc = 0x1C9430u;
        goto label_1c9430;
    }
    ctx->pc = 0x1C9428u;
    {
        const bool branch_taken_0x1c9428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9428) {
            ctx->pc = 0x1C9478u;
            goto label_1c9478;
        }
    }
    ctx->pc = 0x1C9430u;
label_1c9430:
    // 0x1c9430: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9434:
    // 0x1c9434: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9438:
    // 0x1c9438: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c9438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_1c943c:
    // 0x1c943c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1c943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1c9440:
    // 0x1c9440: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1c9440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1c9444:
    // 0x1c9444: 0xc05ccfc  jal         func_1733F0
label_1c9448:
    if (ctx->pc == 0x1C9448u) {
        ctx->pc = 0x1C944Cu;
        goto label_1c944c;
    }
    ctx->pc = 0x1C9444u;
    SET_GPR_U32(ctx, 31, 0x1C944Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C9444u, 0x1C944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C944Cu;
label_1c944c:
    // 0x1c944c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c944cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1c9450:
    // 0x1c9450: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9454:
    // 0x1c9454: 0x3c043ec9  lui         $a0, 0x3EC9
    ctx->pc = 0x1c9454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16073 << 16));
label_1c9458:
    // 0x1c9458: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1c9458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1c945c:
    // 0x1c945c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c945cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c9460:
    // 0x1c9460: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1c9460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9464:
    // 0x1c9464: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1c9464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c9468:
    // 0x1c9468: 0xc058f50  jal         func_163D40
label_1c946c:
    if (ctx->pc == 0x1C946Cu) {
        ctx->pc = 0x1C9470u;
        goto label_1c9470;
    }
    ctx->pc = 0x1C9468u;
    SET_GPR_U32(ctx, 31, 0x1C9470u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C9468u, 0x1C9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9470u;
label_1c9470:
    // 0x1c9470: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9474:
    // 0x1c9474: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x1c9474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
label_1c9478:
    // 0x1c9478: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c947c:
    // 0x1c947c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c9480:
    // 0x1c9480: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1c9480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1c9484:
    // 0x1c9484: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c9484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1c9488:
    // 0x1c9488: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c9488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1c948c:
    // 0x1c948c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9490:
    // 0x1c9490: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c9490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1c9494:
    // 0x1c9494: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c9494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c9498:
    // 0x1c9498: 0xc096b40  jal         func_25AD00
label_1c949c:
    if (ctx->pc == 0x1C949Cu) {
        ctx->pc = 0x1C94A0u;
        goto label_1c94a0;
    }
    ctx->pc = 0x1C9498u;
    SET_GPR_U32(ctx, 31, 0x1C94A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C9498u, 0x1C94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94A0u;
label_1c94a0:
    // 0x1c94a0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c94a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c94a4:
    // 0x1c94a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c94a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c94a8:
    // 0x1c94a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1c94a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1c94ac:
    // 0x1c94ac: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1c94acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c94b0:
    // 0x1c94b0: 0xc05cd58  jal         func_173560
label_1c94b4:
    if (ctx->pc == 0x1C94B4u) {
        ctx->pc = 0x1C94B8u;
        goto label_1c94b8;
    }
    ctx->pc = 0x1C94B0u;
    SET_GPR_U32(ctx, 31, 0x1C94B8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1C94B0u, 0x1C94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94B8u;
label_1c94b8:
    // 0x1c94b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c94b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c94bc:
    // 0x1c94bc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c94c0:
    // 0x1c94c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c94c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c94c4:
    // 0x1c94c4: 0xc057480  jal         func_15D200
label_1c94c8:
    if (ctx->pc == 0x1C94C8u) {
        ctx->pc = 0x1C94CCu;
        goto label_1c94cc;
    }
    ctx->pc = 0x1C94C4u;
    SET_GPR_U32(ctx, 31, 0x1C94CCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1C94C4u, 0x1C94CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94CCu;
label_1c94cc:
    // 0x1c94cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c94ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c94d0:
    // 0x1c94d0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c94d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c94d4:
    // 0x1c94d4: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1c94d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c94d8:
    // 0x1c94d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c94d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c94dc:
    // 0x1c94dc: 0x0  nop
    ctx->pc = 0x1c94dcu;
    // NOP
label_1c94e0:
    // 0x1c94e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c94e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c94e4:
    // 0x1c94e4: 0x0  nop
    ctx->pc = 0x1c94e4u;
    // NOP
label_1c94e8:
    // 0x1c94e8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_1c94ec:
    if (ctx->pc == 0x1C94ECu) {
        ctx->pc = 0x1C94F0u;
        goto label_1c94f0;
    }
    ctx->pc = 0x1C94E8u;
    {
        const bool branch_taken_0x1c94e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c94e8) {
            ctx->pc = 0x1C9560u;
            goto label_1c9560;
        }
    }
    ctx->pc = 0x1C94F0u;
label_1c94f0:
    // 0x1c94f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c94f4:
    // 0x1c94f4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c94f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1c94f8:
    // 0x1c94f8: 0xc057a80  jal         func_15EA00
label_1c94fc:
    if (ctx->pc == 0x1C94FCu) {
        ctx->pc = 0x1C9500u;
        goto label_1c9500;
    }
    ctx->pc = 0x1C94F8u;
    SET_GPR_U32(ctx, 31, 0x1C9500u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1C94F8u, 0x1C9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9500u;
label_1c9500:
    // 0x1c9500: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x1c9500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
label_1c9504:
    // 0x1c9504: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1c9504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1c9508:
    // 0x1c9508: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c9508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c950c:
    // 0x1c950c: 0x0  nop
    ctx->pc = 0x1c950cu;
    // NOP
label_1c9510:
    // 0x1c9510: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9510u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c9514:
    // 0x1c9514: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1c9514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1c9518:
    // 0x1c9518: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c951c:
    // 0x1c951c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1c951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9520:
    // 0x1c9520: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9524:
    // 0x1c9524: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1c9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9528:
    // 0x1c9528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c952c:
    // 0x1c952c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1c952cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1c9530:
    // 0x1c9530: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9534:
    // 0x1c9534: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c9534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9538:
    // 0x1c9538: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1c9538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c953c:
    // 0x1c953c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c953cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9540:
    // 0x1c9540: 0x0  nop
    ctx->pc = 0x1c9540u;
    // NOP
label_1c9544:
    // 0x1c9544: 0x45010052  bc1t        . + 4 + (0x52 << 2)
label_1c9548:
    if (ctx->pc == 0x1C9548u) {
        ctx->pc = 0x1C954Cu;
        goto label_1c954c;
    }
    ctx->pc = 0x1C9544u;
    {
        const bool branch_taken_0x1c9544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9544) {
            ctx->pc = 0x1C9690u;
            goto label_1c9690;
        }
    }
    ctx->pc = 0x1C954Cu;
label_1c954c:
    // 0x1c954c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1c954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9550:
    // 0x1c9550: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9554:
    // 0x1c9554: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1c9554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1c9558:
    // 0x1c9558: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1c955c:
    if (ctx->pc == 0x1C955Cu) {
        ctx->pc = 0x1C9560u;
        goto label_1c9560;
    }
    ctx->pc = 0x1C9558u;
    {
        const bool branch_taken_0x1c9558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9558) {
            ctx->pc = 0x1C9690u;
            goto label_1c9690;
        }
    }
    ctx->pc = 0x1C9560u;
label_1c9560:
    // 0x1c9560: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9564:
    // 0x1c9564: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9568:
    // 0x1c9568: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1c9568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1c956c:
    // 0x1c956c: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1c956cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1c9570:
    // 0x1c9570: 0xc05cf7c  jal         func_173DF0
label_1c9574:
    if (ctx->pc == 0x1C9574u) {
        ctx->pc = 0x1C9578u;
        goto label_1c9578;
    }
    ctx->pc = 0x1C9570u;
    SET_GPR_U32(ctx, 31, 0x1C9578u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1C9570u, 0x1C9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9578u;
label_1c9578:
    // 0x1c9578: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c9578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c957c:
    // 0x1c957c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9580:
    // 0x1c9580: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1c9580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9584:
    // 0x1c9584: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9588:
    // 0x1c9588: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c9588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c958c:
    // 0x1c958c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c958cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c9590:
    // 0x1c9590: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c9590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1c9594:
    // 0x1c9594: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9598:
    // 0x1c9598: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1c9598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c959c:
    // 0x1c959c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c95a0:
    // 0x1c95a0: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1c95a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c95a4:
    // 0x1c95a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c95a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c95a8:
    // 0x1c95a8: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1c95a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1c95ac:
    // 0x1c95ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c95acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c95b0:
    // 0x1c95b0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1c95b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c95b4:
    // 0x1c95b4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c95b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c95b8:
    // 0x1c95b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c95b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c95bc:
    // 0x1c95bc: 0x0  nop
    ctx->pc = 0x1c95bcu;
    // NOP
label_1c95c0:
    // 0x1c95c0: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_1c95c4:
    if (ctx->pc == 0x1C95C4u) {
        ctx->pc = 0x1C95C8u;
        goto label_1c95c8;
    }
    ctx->pc = 0x1C95C0u;
    {
        const bool branch_taken_0x1c95c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c95c0) {
            ctx->pc = 0x1C9690u;
            goto label_1c9690;
        }
    }
    ctx->pc = 0x1C95C8u;
label_1c95c8:
    // 0x1c95c8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c95c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c95cc:
    // 0x1c95cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c95d0:
    // 0x1c95d0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1c95d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1c95d4:
    // 0x1c95d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c95d8:
    // 0x1c95d8: 0x8c621b60  lw          $v0, 0x1B60($v1)
    ctx->pc = 0x1c95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1c95dc:
    // 0x1c95dc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_1c95e0:
    if (ctx->pc == 0x1C95E0u) {
        ctx->pc = 0x1C95E4u;
        goto label_1c95e4;
    }
    ctx->pc = 0x1C95DCu;
    {
        const bool branch_taken_0x1c95dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c95dc) {
            ctx->pc = 0x1C9684u;
            goto label_1c9684;
        }
    }
    ctx->pc = 0x1C95E4u;
label_1c95e4:
    // 0x1c95e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c95e8:
    // 0x1c95e8: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1c95e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c95ec:
    // 0x1c95ec: 0x3c03c332  lui         $v1, 0xC332
    ctx->pc = 0x1c95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49970 << 16));
label_1c95f0:
    // 0x1c95f0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1c95f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1c95f4:
    // 0x1c95f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c95f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c95f8:
    // 0x1c95f8: 0x0  nop
    ctx->pc = 0x1c95f8u;
    // NOP
label_1c95fc:
    // 0x1c95fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c95fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9600:
    // 0x1c9600: 0x0  nop
    ctx->pc = 0x1c9600u;
    // NOP
label_1c9604:
    // 0x1c9604: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1c9608:
    if (ctx->pc == 0x1C9608u) {
        ctx->pc = 0x1C960Cu;
        goto label_1c960c;
    }
    ctx->pc = 0x1C9604u;
    {
        const bool branch_taken_0x1c9604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9604) {
            ctx->pc = 0x1C9620u;
            goto label_1c9620;
        }
    }
    ctx->pc = 0x1C960Cu;
label_1c960c:
    // 0x1c960c: 0xc05772c  jal         func_15DCB0
label_1c9610:
    if (ctx->pc == 0x1C9610u) {
        ctx->pc = 0x1C9614u;
        goto label_1c9614;
    }
    ctx->pc = 0x1C960Cu;
    SET_GPR_U32(ctx, 31, 0x1C9614u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1C960Cu, 0x1C9614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9614u;
label_1c9614:
    // 0x1c9614: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c9614u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c9618:
    // 0x1c9618: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c961c:
    if (ctx->pc == 0x1C961Cu) {
        ctx->pc = 0x1C9620u;
        goto label_1c9620;
    }
    ctx->pc = 0x1C9618u;
    {
        const bool branch_taken_0x1c9618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9618) {
            ctx->pc = 0x1C962Cu;
            goto label_1c962c;
        }
    }
    ctx->pc = 0x1C9620u;
label_1c9620:
    // 0x1c9620: 0xc05774c  jal         func_15DD30
label_1c9624:
    if (ctx->pc == 0x1C9624u) {
        ctx->pc = 0x1C9628u;
        goto label_1c9628;
    }
    ctx->pc = 0x1C9620u;
    SET_GPR_U32(ctx, 31, 0x1C9628u);
    ctx->pc = 0x15DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DD30u, 0x1C9620u, 0x1C9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9628u;
label_1c9628:
    // 0x1c9628: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c9628u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c962c:
    // 0x1c962c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1c962cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1c9630:
    // 0x1c9630: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1c9630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1c9634:
    // 0x1c9634: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c9634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c9638:
    // 0x1c9638: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c963c:
    // 0x1c963c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1c963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1c9640:
    // 0x1c9640: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1c9640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1c9644:
    // 0x1c9644: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1c9644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1c9648:
    // 0x1c9648: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c9648u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c964c:
    // 0x1c964c: 0xc067b18  jal         func_19EC60
label_1c9650:
    if (ctx->pc == 0x1C9650u) {
        ctx->pc = 0x1C9654u;
        goto label_1c9654;
    }
    ctx->pc = 0x1C964Cu;
    SET_GPR_U32(ctx, 31, 0x1C9654u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C964Cu, 0x1C9654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9654u;
label_1c9654:
    // 0x1c9654: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c9654u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c9658:
    // 0x1c9658: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c965c:
    // 0x1c965c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1c965cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1c9660:
    // 0x1c9660: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1c9660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_1c9664:
    // 0x1c9664: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1c9664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1c9668:
    // 0x1c9668: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c9668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c966c:
    // 0x1c966c: 0x24040402  addiu       $a0, $zero, 0x402
    ctx->pc = 0x1c966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
label_1c9670:
    // 0x1c9670: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c9670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1c9674:
    // 0x1c9674: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c9674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9678:
    // 0x1c9678: 0xc067b18  jal         func_19EC60
label_1c967c:
    if (ctx->pc == 0x1C967Cu) {
        ctx->pc = 0x1C9680u;
        goto label_1c9680;
    }
    ctx->pc = 0x1C9678u;
    SET_GPR_U32(ctx, 31, 0x1C9680u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C9678u, 0x1C9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9680u;
label_1c9680:
    // 0x1c9680: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c9680u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c9684:
    // 0x1c9684: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9688:
    // 0x1c9688: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c968c:
    // 0x1c968c: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1c968cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1c9690:
    // 0x1c9690: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9694:
    // 0x1c9694: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1c9694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9698:
    // 0x1c9698: 0x8fb10088  lw          $s1, 0x88($sp)
    ctx->pc = 0x1c9698u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c969c:
    // 0x1c969c: 0xc6201284  lwc1        $f0, 0x1284($s1)
    ctx->pc = 0x1c969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c96a0:
    // 0x1c96a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c96a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c96a4:
    // 0x1c96a4: 0xe6201284  swc1        $f0, 0x1284($s1)
    ctx->pc = 0x1c96a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4740), bits); }
label_1c96a8:
    // 0x1c96a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c96a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c96ac:
    // 0x1c96ac: 0xc097530  jal         func_25D4C0
label_1c96b0:
    if (ctx->pc == 0x1C96B0u) {
        ctx->pc = 0x1C96B4u;
        goto label_1c96b4;
    }
    ctx->pc = 0x1C96ACu;
    SET_GPR_U32(ctx, 31, 0x1C96B4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C96ACu, 0x1C96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96B4u;
label_1c96b4:
    // 0x1c96b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c96b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c96b8:
    // 0x1c96b8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c96b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c96bc:
    // 0x1c96bc: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1c96bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_1c96c0:
    // 0x1c96c0: 0x106001d0  beqz        $v1, . + 4 + (0x1D0 << 2)
label_1c96c4:
    if (ctx->pc == 0x1C96C4u) {
        ctx->pc = 0x1C96C8u;
        goto label_1c96c8;
    }
    ctx->pc = 0x1C96C0u;
    {
        const bool branch_taken_0x1c96c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96c0) {
            ctx->pc = 0x1C9E04u;
            goto label_1c9e04;
        }
    }
    ctx->pc = 0x1C96C8u;
label_1c96c8:
    // 0x1c96c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c96cc:
    // 0x1c96cc: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1c96ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1c96d0:
    // 0x1c96d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1c96d4:
    if (ctx->pc == 0x1C96D4u) {
        ctx->pc = 0x1C96D8u;
        goto label_1c96d8;
    }
    ctx->pc = 0x1C96D0u;
    {
        const bool branch_taken_0x1c96d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96d0) {
            ctx->pc = 0x1C96ECu;
            goto label_1c96ec;
        }
    }
    ctx->pc = 0x1C96D8u;
label_1c96d8:
    // 0x1c96d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1c96d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c96dc:
    // 0x1c96dc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c96e0:
    // 0x1c96e0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c96e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c96e4:
    // 0x1c96e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c96e8:
    if (ctx->pc == 0x1C96E8u) {
        ctx->pc = 0x1C96ECu;
        goto label_1c96ec;
    }
    ctx->pc = 0x1C96E4u;
    {
        const bool branch_taken_0x1c96e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96e4) {
            ctx->pc = 0x1C96FCu;
            goto label_1c96fc;
        }
    }
    ctx->pc = 0x1C96ECu;
label_1c96ec:
    // 0x1c96ec: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c96ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c96f0:
    // 0x1c96f0: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c96f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1c96f4:
    // 0x1c96f4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c96f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c96f8:
    // 0x1c96f8: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c96f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c96fc:
    // 0x1c96fc: 0x10000204  b           . + 4 + (0x204 << 2)
label_1c9700:
    if (ctx->pc == 0x1C9700u) {
        ctx->pc = 0x1C9704u;
        goto label_1c9704;
    }
    ctx->pc = 0x1C96FCu;
    {
        const bool branch_taken_0x1c96fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96fc) {
            ctx->pc = 0x1C9F10u;
            goto label_1c9f10;
        }
    }
    ctx->pc = 0x1C9704u;
label_1c9704:
    // 0x1c9704: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9708:
    // 0x1c9708: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c970c:
    // 0x1c970c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c970cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1c9710:
    // 0x1c9710: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1c9710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1c9714:
    // 0x1c9714: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9718:
    // 0x1c9718: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c9718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c971c:
    // 0x1c971c: 0xc0965d0  jal         func_259740
label_1c9720:
    if (ctx->pc == 0x1C9720u) {
        ctx->pc = 0x1C9724u;
        goto label_1c9724;
    }
    ctx->pc = 0x1C971Cu;
    SET_GPR_U32(ctx, 31, 0x1C9724u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C971Cu, 0x1C9724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9724u;
label_1c9724:
    // 0x1c9724: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c9724u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c9728:
    // 0x1c9728: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c972c:
    // 0x1c972c: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1c972cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1c9730:
    // 0x1c9730: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9734:
    // 0x1c9734: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c9734u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1c9738:
    // 0x1c9738: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c9738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c973c:
    // 0x1c973c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c973cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c9740:
    // 0x1c9740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c9744:
    // 0x1c9744: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c9744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c9748:
    // 0x1c9748: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x1c9748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_1c974c:
    // 0x1c974c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c9750:
    if (ctx->pc == 0x1C9750u) {
        ctx->pc = 0x1C9754u;
        goto label_1c9754;
    }
    ctx->pc = 0x1C974Cu;
    {
        const bool branch_taken_0x1c974c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c974c) {
            ctx->pc = 0x1C9760u;
            goto label_1c9760;
        }
    }
    ctx->pc = 0x1C9754u;
label_1c9754:
    // 0x1c9754: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c9754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c9758:
    // 0x1c9758: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c9758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c975c:
    // 0x1c975c: 0xa0c513a7  sb          $a1, 0x13A7($a2)
    ctx->pc = 0x1c975cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5031), (uint8_t)GPR_U32(ctx, 5));
label_1c9760:
    // 0x1c9760: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c9760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9764:
    // 0x1c9764: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1c9764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1c9768:
    // 0x1c9768: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c9768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
label_1c976c:
    // 0x1c976c: 0x1022025  or          $a0, $t0, $v0
    ctx->pc = 0x1c976cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1c9770:
    // 0x1c9770: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1c9770u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_1c9774:
    // 0x1c9774: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9778:
    // 0x1c9778: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1c9778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c977c:
    // 0x1c977c: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x1c977cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
label_1c9780:
    // 0x1c9780: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1c9780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1c9784:
    // 0x1c9784: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1c9784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1c9788:
    // 0x1c9788: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c9788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1c978c:
    // 0x1c978c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c978cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c9790:
    // 0x1c9790: 0x8c271a98  lw          $a3, 0x1A98($at)
    ctx->pc = 0x1c9790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c9794:
    // 0x1c9794: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c9794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1c9798:
    // 0x1c9798: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x1c9798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1c979c:
    // 0x1c979c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c97a0:
    // 0x1c97a0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1c97a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1c97a4:
    // 0x1c97a4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1c97a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c97a8:
    // 0x1c97a8: 0x8fa90088  lw          $t1, 0x88($sp)
    ctx->pc = 0x1c97a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c97ac:
    // 0x1c97ac: 0xa126157d  sb          $a2, 0x157D($t1)
    ctx->pc = 0x1c97acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5501), (uint8_t)GPR_U32(ctx, 6));
label_1c97b0:
    // 0x1c97b0: 0x8faa0088  lw          $t2, 0x88($sp)
    ctx->pc = 0x1c97b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c97b4:
    // 0x1c97b4: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x1c97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_1c97b8:
    // 0x1c97b8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1c97bc:
    // 0x1c97bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c97bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c97c0:
    // 0x1c97c0: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x1c97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
label_1c97c4:
    // 0x1c97c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c97c8:
    // 0x1c97c8: 0x8c6213e8  lw          $v0, 0x13E8($v1)
    ctx->pc = 0x1c97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c97cc:
    // 0x1c97cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1c97d0:
    if (ctx->pc == 0x1C97D0u) {
        ctx->pc = 0x1C97D4u;
        goto label_1c97d4;
    }
    ctx->pc = 0x1C97CCu;
    {
        const bool branch_taken_0x1c97cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c97cc) {
            ctx->pc = 0x1C981Cu;
            goto label_1c981c;
        }
    }
    ctx->pc = 0x1C97D4u;
label_1c97d4:
    // 0x1c97d4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c97d8:
    // 0x1c97d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c97dc:
    // 0x1c97dc: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1c97e0:
    // 0x1c97e0: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1c97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1c97e4:
    // 0x1c97e4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c97e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1c97e8:
    // 0x1c97e8: 0xc05ccfc  jal         func_1733F0
label_1c97ec:
    if (ctx->pc == 0x1C97ECu) {
        ctx->pc = 0x1C97F0u;
        goto label_1c97f0;
    }
    ctx->pc = 0x1C97E8u;
    SET_GPR_U32(ctx, 31, 0x1C97F0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C97E8u, 0x1C97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97F0u;
label_1c97f0:
    // 0x1c97f0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c97f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1c97f4:
    // 0x1c97f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c97f8:
    // 0x1c97f8: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1c97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
label_1c97fc:
    // 0x1c97fc: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1c97fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1c9800:
    // 0x1c9800: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c9800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c9804:
    // 0x1c9804: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1c9804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9808:
    // 0x1c9808: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1c9808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c980c:
    // 0x1c980c: 0xc058f50  jal         func_163D40
label_1c9810:
    if (ctx->pc == 0x1C9810u) {
        ctx->pc = 0x1C9814u;
        goto label_1c9814;
    }
    ctx->pc = 0x1C980Cu;
    SET_GPR_U32(ctx, 31, 0x1C9814u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C980Cu, 0x1C9814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9814u;
label_1c9814:
    // 0x1c9814: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9818:
    // 0x1c9818: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c9818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1c981c:
    // 0x1c981c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c981cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9820:
    // 0x1c9820: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c9820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c9824:
    // 0x1c9824: 0xc096b40  jal         func_25AD00
label_1c9828:
    if (ctx->pc == 0x1C9828u) {
        ctx->pc = 0x1C982Cu;
        goto label_1c982c;
    }
    ctx->pc = 0x1C9824u;
    SET_GPR_U32(ctx, 31, 0x1C982Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C9824u, 0x1C982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C982Cu;
label_1c982c:
    // 0x1c982c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c982cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9830:
    // 0x1c9830: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9834:
    // 0x1c9834: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1c9834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9838:
    // 0x1c9838: 0xc05cd58  jal         func_173560
label_1c983c:
    if (ctx->pc == 0x1C983Cu) {
        ctx->pc = 0x1C9840u;
        goto label_1c9840;
    }
    ctx->pc = 0x1C9838u;
    SET_GPR_U32(ctx, 31, 0x1C9840u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1C9838u, 0x1C9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9840u;
label_1c9840:
    // 0x1c9840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c9844:
    // 0x1c9844: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9848:
    // 0x1c9848: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c984c:
    // 0x1c984c: 0xc057480  jal         func_15D200
label_1c9850:
    if (ctx->pc == 0x1C9850u) {
        ctx->pc = 0x1C9854u;
        goto label_1c9854;
    }
    ctx->pc = 0x1C984Cu;
    SET_GPR_U32(ctx, 31, 0x1C9854u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1C984Cu, 0x1C9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9854u;
label_1c9854:
    // 0x1c9854: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9858:
    // 0x1c9858: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1c9858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c985c:
    // 0x1c985c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c985cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9860:
    // 0x1c9860: 0x0  nop
    ctx->pc = 0x1c9860u;
    // NOP
label_1c9864:
    // 0x1c9864: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9868:
    // 0x1c9868: 0x0  nop
    ctx->pc = 0x1c9868u;
    // NOP
label_1c986c:
    // 0x1c986c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_1c9870:
    if (ctx->pc == 0x1C9870u) {
        ctx->pc = 0x1C9874u;
        goto label_1c9874;
    }
    ctx->pc = 0x1C986Cu;
    {
        const bool branch_taken_0x1c986c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c986c) {
            ctx->pc = 0x1C98E4u;
            goto label_1c98e4;
        }
    }
    ctx->pc = 0x1C9874u;
label_1c9874:
    // 0x1c9874: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9878:
    // 0x1c9878: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1c9878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1c987c:
    // 0x1c987c: 0xc057a80  jal         func_15EA00
label_1c9880:
    if (ctx->pc == 0x1C9880u) {
        ctx->pc = 0x1C9884u;
        goto label_1c9884;
    }
    ctx->pc = 0x1C987Cu;
    SET_GPR_U32(ctx, 31, 0x1C9884u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1C987Cu, 0x1C9884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9884u;
label_1c9884:
    // 0x1c9884: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1c9884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_1c9888:
    // 0x1c9888: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1c9888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1c988c:
    // 0x1c988c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c988cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c9890:
    // 0x1c9890: 0x0  nop
    ctx->pc = 0x1c9890u;
    // NOP
label_1c9894:
    // 0x1c9894: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c9898:
    // 0x1c9898: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1c9898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1c989c:
    // 0x1c989c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c98a0:
    // 0x1c98a0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1c98a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c98a4:
    // 0x1c98a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c98a8:
    // 0x1c98a8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c98a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c98ac:
    // 0x1c98ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c98acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c98b0:
    // 0x1c98b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c98b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1c98b4:
    // 0x1c98b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c98b8:
    // 0x1c98b8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c98b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c98bc:
    // 0x1c98bc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1c98bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c98c0:
    // 0x1c98c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c98c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c98c4:
    // 0x1c98c4: 0x0  nop
    ctx->pc = 0x1c98c4u;
    // NOP
label_1c98c8:
    // 0x1c98c8: 0x4501004e  bc1t        . + 4 + (0x4E << 2)
label_1c98cc:
    if (ctx->pc == 0x1C98CCu) {
        ctx->pc = 0x1C98D0u;
        goto label_1c98d0;
    }
    ctx->pc = 0x1C98C8u;
    {
        const bool branch_taken_0x1c98c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c98c8) {
            ctx->pc = 0x1C9A04u;
            goto label_1c9a04;
        }
    }
    ctx->pc = 0x1C98D0u;
label_1c98d0:
    // 0x1c98d0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1c98d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c98d4:
    // 0x1c98d4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c98d8:
    // 0x1c98d8: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1c98d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1c98dc:
    // 0x1c98dc: 0x10000049  b           . + 4 + (0x49 << 2)
label_1c98e0:
    if (ctx->pc == 0x1C98E0u) {
        ctx->pc = 0x1C98E4u;
        goto label_1c98e4;
    }
    ctx->pc = 0x1C98DCu;
    {
        const bool branch_taken_0x1c98dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c98dc) {
            ctx->pc = 0x1C9A04u;
            goto label_1c9a04;
        }
    }
    ctx->pc = 0x1C98E4u;
label_1c98e4:
    // 0x1c98e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c98e8:
    // 0x1c98e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c98ec:
    // 0x1c98ec: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c98ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1c98f0:
    // 0x1c98f0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1c98f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1c98f4:
    // 0x1c98f4: 0xc05cf7c  jal         func_173DF0
label_1c98f8:
    if (ctx->pc == 0x1C98F8u) {
        ctx->pc = 0x1C98FCu;
        goto label_1c98fc;
    }
    ctx->pc = 0x1C98F4u;
    SET_GPR_U32(ctx, 31, 0x1C98FCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1C98F4u, 0x1C98FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98FCu;
label_1c98fc:
    // 0x1c98fc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c98fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c9900:
    // 0x1c9900: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9904:
    // 0x1c9904: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1c9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9908:
    // 0x1c9908: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c990c:
    // 0x1c990c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9910:
    // 0x1c9910: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c9914:
    // 0x1c9914: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c9914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1c9918:
    // 0x1c9918: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c991c:
    // 0x1c991c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1c991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9920:
    // 0x1c9920: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9924:
    // 0x1c9924: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9928:
    // 0x1c9928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c992c:
    // 0x1c992c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c992cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1c9930:
    // 0x1c9930: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9934:
    // 0x1c9934: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c9934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9938:
    // 0x1c9938: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c993c:
    // 0x1c993c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c993cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9940:
    // 0x1c9940: 0x0  nop
    ctx->pc = 0x1c9940u;
    // NOP
label_1c9944:
    // 0x1c9944: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_1c9948:
    if (ctx->pc == 0x1C9948u) {
        ctx->pc = 0x1C994Cu;
        goto label_1c994c;
    }
    ctx->pc = 0x1C9944u;
    {
        const bool branch_taken_0x1c9944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9944) {
            ctx->pc = 0x1C9A04u;
            goto label_1c9a04;
        }
    }
    ctx->pc = 0x1C994Cu;
label_1c994c:
    // 0x1c994c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9950:
    // 0x1c9950: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9954:
    // 0x1c9954: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c9954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1c9958:
    // 0x1c9958: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c995c:
    // 0x1c995c: 0x8c621b60  lw          $v0, 0x1B60($v1)
    ctx->pc = 0x1c995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1c9960:
    // 0x1c9960: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1c9964:
    if (ctx->pc == 0x1C9964u) {
        ctx->pc = 0x1C9968u;
        goto label_1c9968;
    }
    ctx->pc = 0x1C9960u;
    {
        const bool branch_taken_0x1c9960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9960) {
            ctx->pc = 0x1C99F8u;
            goto label_1c99f8;
        }
    }
    ctx->pc = 0x1C9968u;
label_1c9968:
    // 0x1c9968: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c996c:
    // 0x1c996c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1c996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9970:
    // 0x1c9970: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x1c9970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
label_1c9974:
    // 0x1c9974: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1c9974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1c9978:
    // 0x1c9978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c997c:
    // 0x1c997c: 0x0  nop
    ctx->pc = 0x1c997cu;
    // NOP
label_1c9980:
    // 0x1c9980: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9984:
    // 0x1c9984: 0x0  nop
    ctx->pc = 0x1c9984u;
    // NOP
label_1c9988:
    // 0x1c9988: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1c998c:
    if (ctx->pc == 0x1C998Cu) {
        ctx->pc = 0x1C9990u;
        goto label_1c9990;
    }
    ctx->pc = 0x1C9988u;
    {
        const bool branch_taken_0x1c9988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9988) {
            ctx->pc = 0x1C99A0u;
            goto label_1c99a0;
        }
    }
    ctx->pc = 0x1C9990u;
label_1c9990:
    // 0x1c9990: 0xc05772c  jal         func_15DCB0
label_1c9994:
    if (ctx->pc == 0x1C9994u) {
        ctx->pc = 0x1C9998u;
        goto label_1c9998;
    }
    ctx->pc = 0x1C9990u;
    SET_GPR_U32(ctx, 31, 0x1C9998u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1C9990u, 0x1C9998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9998u;
label_1c9998:
    // 0x1c9998: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c999c:
    if (ctx->pc == 0x1C999Cu) {
        ctx->pc = 0x1C99A0u;
        goto label_1c99a0;
    }
    ctx->pc = 0x1C9998u;
    {
        const bool branch_taken_0x1c9998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9998) {
            ctx->pc = 0x1C99A8u;
            goto label_1c99a8;
        }
    }
    ctx->pc = 0x1C99A0u;
label_1c99a0:
    // 0x1c99a0: 0xc05774c  jal         func_15DD30
label_1c99a4:
    if (ctx->pc == 0x1C99A4u) {
        ctx->pc = 0x1C99A8u;
        goto label_1c99a8;
    }
    ctx->pc = 0x1C99A0u;
    SET_GPR_U32(ctx, 31, 0x1C99A8u);
    ctx->pc = 0x15DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DD30u, 0x1C99A0u, 0x1C99A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A8u;
label_1c99a8:
    // 0x1c99a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1c99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1c99ac:
    // 0x1c99ac: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1c99acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1c99b0:
    // 0x1c99b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c99b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c99b4:
    // 0x1c99b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c99b8:
    // 0x1c99b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1c99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1c99bc:
    // 0x1c99bc: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1c99bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1c99c0:
    // 0x1c99c0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1c99c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1c99c4:
    // 0x1c99c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c99c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c99c8:
    // 0x1c99c8: 0xc067b18  jal         func_19EC60
label_1c99cc:
    if (ctx->pc == 0x1C99CCu) {
        ctx->pc = 0x1C99D0u;
        goto label_1c99d0;
    }
    ctx->pc = 0x1C99C8u;
    SET_GPR_U32(ctx, 31, 0x1C99D0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C99C8u, 0x1C99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99D0u;
label_1c99d0:
    // 0x1c99d0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1c99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1c99d4:
    // 0x1c99d4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1c99d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1c99d8:
    // 0x1c99d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c99d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c99dc:
    // 0x1c99dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c99e0:
    // 0x1c99e0: 0x8c500130  lw          $s0, 0x130($v0)
    ctx->pc = 0x1c99e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1c99e4:
    // 0x1c99e4: 0x24040402  addiu       $a0, $zero, 0x402
    ctx->pc = 0x1c99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
label_1c99e8:
    // 0x1c99e8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1c99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1c99ec:
    // 0x1c99ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c99ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c99f0:
    // 0x1c99f0: 0xc067b18  jal         func_19EC60
label_1c99f4:
    if (ctx->pc == 0x1C99F4u) {
        ctx->pc = 0x1C99F8u;
        goto label_1c99f8;
    }
    ctx->pc = 0x1C99F0u;
    SET_GPR_U32(ctx, 31, 0x1C99F8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C99F0u, 0x1C99F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99F8u;
label_1c99f8:
    // 0x1c99f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c99fc:
    // 0x1c99fc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c99fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a00:
    // 0x1c9a00: 0xaca21b60  sw          $v0, 0x1B60($a1)
    ctx->pc = 0x1c9a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 2));
label_1c9a04:
    // 0x1c9a04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a08:
    // 0x1c9a08: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1c9a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9a0c:
    // 0x1c9a0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a10:
    // 0x1c9a10: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c9a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9a14:
    // 0x1c9a14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c9a18:
    // 0x1c9a18: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c9a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1c9a1c:
    // 0x1c9a1c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c9a1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9a20:
    // 0x1c9a20: 0xc097530  jal         func_25D4C0
label_1c9a24:
    if (ctx->pc == 0x1C9A24u) {
        ctx->pc = 0x1C9A28u;
        goto label_1c9a28;
    }
    ctx->pc = 0x1C9A20u;
    SET_GPR_U32(ctx, 31, 0x1C9A28u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C9A20u, 0x1C9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A28u;
label_1c9a28:
    // 0x1c9a28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a2c:
    // 0x1c9a2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c9a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c9a30:
    // 0x1c9a30: 0xc096b40  jal         func_25AD00
label_1c9a34:
    if (ctx->pc == 0x1C9A34u) {
        ctx->pc = 0x1C9A38u;
        goto label_1c9a38;
    }
    ctx->pc = 0x1C9A30u;
    SET_GPR_U32(ctx, 31, 0x1C9A38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C9A30u, 0x1C9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A38u;
label_1c9a38:
    // 0x1c9a38: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a3c:
    // 0x1c9a3c: 0xc05cd10  jal         func_173440
label_1c9a40:
    if (ctx->pc == 0x1C9A40u) {
        ctx->pc = 0x1C9A44u;
        goto label_1c9a44;
    }
    ctx->pc = 0x1C9A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C9A3Cu, 0x1C9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A44u;
label_1c9a44:
    // 0x1c9a44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c9a48:
    // 0x1c9a48: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a4c:
    // 0x1c9a4c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c9a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1c9a50:
    // 0x1c9a50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9a50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9a54:
    // 0x1c9a54: 0xc0573d8  jal         func_15CF60
label_1c9a58:
    if (ctx->pc == 0x1C9A58u) {
        ctx->pc = 0x1C9A5Cu;
        goto label_1c9a5c;
    }
    ctx->pc = 0x1C9A54u;
    SET_GPR_U32(ctx, 31, 0x1C9A5Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C9A54u, 0x1C9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A5Cu;
label_1c9a5c:
    // 0x1c9a5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c9a5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9a60:
    // 0x1c9a60: 0xc097530  jal         func_25D4C0
label_1c9a64:
    if (ctx->pc == 0x1C9A64u) {
        ctx->pc = 0x1C9A68u;
        goto label_1c9a68;
    }
    ctx->pc = 0x1C9A60u;
    SET_GPR_U32(ctx, 31, 0x1C9A68u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C9A60u, 0x1C9A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A68u;
label_1c9a68:
    // 0x1c9a68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a6c:
    // 0x1c9a6c: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1c9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1c9a70:
    // 0x1c9a70: 0x106000e4  beqz        $v1, . + 4 + (0xE4 << 2)
label_1c9a74:
    if (ctx->pc == 0x1C9A74u) {
        ctx->pc = 0x1C9A78u;
        goto label_1c9a78;
    }
    ctx->pc = 0x1C9A70u;
    {
        const bool branch_taken_0x1c9a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a70) {
            ctx->pc = 0x1C9E04u;
            goto label_1c9e04;
        }
    }
    ctx->pc = 0x1C9A78u;
label_1c9a78:
    // 0x1c9a78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a7c:
    // 0x1c9a7c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c9a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c9a80:
    // 0x1c9a80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c9a84:
    // 0x1c9a84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c9a84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c9a88:
    // 0x1c9a88: 0x10000121  b           . + 4 + (0x121 << 2)
label_1c9a8c:
    if (ctx->pc == 0x1C9A8Cu) {
        ctx->pc = 0x1C9A90u;
        goto label_1c9a90;
    }
    ctx->pc = 0x1C9A88u;
    {
        const bool branch_taken_0x1c9a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a88) {
            ctx->pc = 0x1C9F10u;
            goto label_1c9f10;
        }
    }
    ctx->pc = 0x1C9A90u;
label_1c9a90:
    // 0x1c9a90: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a94:
    // 0x1c9a94: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9a98:
    // 0x1c9a98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1c9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1c9a9c:
    // 0x1c9a9c: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x1c9a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_1c9aa0:
    // 0x1c9aa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9aa4:
    // 0x1c9aa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c9aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c9aa8:
    // 0x1c9aa8: 0xc0965d0  jal         func_259740
label_1c9aac:
    if (ctx->pc == 0x1C9AACu) {
        ctx->pc = 0x1C9AB0u;
        goto label_1c9ab0;
    }
    ctx->pc = 0x1C9AA8u;
    SET_GPR_U32(ctx, 31, 0x1C9AB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C9AA8u, 0x1C9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AB0u;
label_1c9ab0:
    // 0x1c9ab0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1c9ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c9ab4:
    // 0x1c9ab4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9ab8:
    // 0x1c9ab8: 0xa064157d  sb          $a0, 0x157D($v1)
    ctx->pc = 0x1c9ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5501), (uint8_t)GPR_U32(ctx, 4));
label_1c9abc:
    // 0x1c9abc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9ac0:
    // 0x1c9ac0: 0xa06013b4  sb          $zero, 0x13B4($v1)
    ctx->pc = 0x1c9ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5044), (uint8_t)GPR_U32(ctx, 0));
label_1c9ac4:
    // 0x1c9ac4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9ac8:
    // 0x1c9ac8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c9ac8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1c9acc:
    // 0x1c9acc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c9accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c9ad0:
    // 0x1c9ad0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c9ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c9ad4:
    // 0x1c9ad4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9ad8:
    // 0x1c9ad8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c9ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1c9adc:
    // 0x1c9adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c9ae0:
    // 0x1c9ae0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c9ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1c9ae4:
    // 0x1c9ae4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c9ae8:
    if (ctx->pc == 0x1C9AE8u) {
        ctx->pc = 0x1C9AECu;
        goto label_1c9aec;
    }
    ctx->pc = 0x1C9AE4u;
    {
        const bool branch_taken_0x1c9ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ae4) {
            ctx->pc = 0x1C9B20u;
            goto label_1c9b20;
        }
    }
    ctx->pc = 0x1C9AECu;
label_1c9aec:
    // 0x1c9aec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9af0:
    // 0x1c9af0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c9af4:
    // 0x1c9af4: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
label_1c9af8:
    // 0x1c9af8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c9af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c9afc:
    // 0x1c9afc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c9afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c9b00:
    // 0x1c9b00: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9b04:
    // 0x1c9b04: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c9b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c9b08:
    // 0x1c9b08: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1c9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_1c9b0c:
    // 0x1c9b0c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1c9b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c9b10:
    // 0x1c9b10: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1c9b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c9b14:
    // 0x1c9b14: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1c9b18:
    // 0x1c9b18: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c9b1c:
    if (ctx->pc == 0x1C9B1Cu) {
        ctx->pc = 0x1C9B20u;
        goto label_1c9b20;
    }
    ctx->pc = 0x1C9B18u;
    {
        const bool branch_taken_0x1c9b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b18) {
            ctx->pc = 0x1C9B38u;
            goto label_1c9b38;
        }
    }
    ctx->pc = 0x1C9B20u;
label_1c9b20:
    // 0x1c9b20: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9b24:
    // 0x1c9b24: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c9b28:
    // 0x1c9b28: 0x3c027fbf  lui         $v0, 0x7FBF
    ctx->pc = 0x1c9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32703 << 16));
label_1c9b2c:
    // 0x1c9b2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c9b30:
    // 0x1c9b30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c9b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c9b34:
    // 0x1c9b34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c9b38:
    // 0x1c9b38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9b3c:
    // 0x1c9b3c: 0x906209db  lbu         $v0, 0x9DB($v1)
    ctx->pc = 0x1c9b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1c9b40:
    // 0x1c9b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c9b44:
    // 0x1c9b44: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c9b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1c9b48:
    // 0x1c9b48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c9b4c:
    if (ctx->pc == 0x1C9B4Cu) {
        ctx->pc = 0x1C9B50u;
        goto label_1c9b50;
    }
    ctx->pc = 0x1C9B48u;
    {
        const bool branch_taken_0x1c9b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b48) {
            ctx->pc = 0x1C9B68u;
            goto label_1c9b68;
        }
    }
    ctx->pc = 0x1C9B50u;
label_1c9b50:
    // 0x1c9b50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c9b54:
    // 0x1c9b54: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c9b58:
    // 0x1c9b58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1c9b5c:
    // 0x1c9b5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c9b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c9b60:
    // 0x1c9b60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c9b64:
    // 0x1c9b64: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1c9b64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1c9b68:
    // 0x1c9b68: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9b6c:
    // 0x1c9b6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9b6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9b70:
    // 0x1c9b70: 0xc096b40  jal         func_25AD00
label_1c9b74:
    if (ctx->pc == 0x1C9B74u) {
        ctx->pc = 0x1C9B78u;
        goto label_1c9b78;
    }
    ctx->pc = 0x1C9B70u;
    SET_GPR_U32(ctx, 31, 0x1C9B78u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C9B70u, 0x1C9B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B78u;
label_1c9b78:
    // 0x1c9b78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9b7c:
    // 0x1c9b7c: 0xc05cd10  jal         func_173440
label_1c9b80:
    if (ctx->pc == 0x1C9B80u) {
        ctx->pc = 0x1C9B84u;
        goto label_1c9b84;
    }
    ctx->pc = 0x1C9B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B84u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C9B7Cu, 0x1C9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B84u;
label_1c9b84:
    // 0x1c9b84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c9b88:
    // 0x1c9b88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9b8c:
    // 0x1c9b8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c9b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c9b90:
    // 0x1c9b90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9b94:
    // 0x1c9b94: 0xc0573d8  jal         func_15CF60
label_1c9b98:
    if (ctx->pc == 0x1C9B98u) {
        ctx->pc = 0x1C9B9Cu;
        goto label_1c9b9c;
    }
    ctx->pc = 0x1C9B94u;
    SET_GPR_U32(ctx, 31, 0x1C9B9Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C9B94u, 0x1C9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B9Cu;
label_1c9b9c:
    // 0x1c9b9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c9b9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c9ba0:
    // 0x1c9ba0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c9ba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9ba4:
    // 0x1c9ba4: 0xc097530  jal         func_25D4C0
label_1c9ba8:
    if (ctx->pc == 0x1C9BA8u) {
        ctx->pc = 0x1C9BACu;
        goto label_1c9bac;
    }
    ctx->pc = 0x1C9BA4u;
    SET_GPR_U32(ctx, 31, 0x1C9BACu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C9BA4u, 0x1C9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BACu;
label_1c9bac:
    // 0x1c9bac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c9bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c9bb0:
    // 0x1c9bb0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9bb4:
    // 0x1c9bb4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9bb8:
    // 0x1c9bb8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1c9bbc:
    // 0x1c9bbc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1c9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1c9bc0:
    // 0x1c9bc0: 0xc05cf7c  jal         func_173DF0
label_1c9bc4:
    if (ctx->pc == 0x1C9BC4u) {
        ctx->pc = 0x1C9BC8u;
        goto label_1c9bc8;
    }
    ctx->pc = 0x1C9BC0u;
    SET_GPR_U32(ctx, 31, 0x1C9BC8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1C9BC0u, 0x1C9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BC8u;
label_1c9bc8:
    // 0x1c9bc8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c9bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c9bcc:
    // 0x1c9bcc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9bd0:
    // 0x1c9bd0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1c9bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9bd4:
    // 0x1c9bd4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1c9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1c9bd8:
    // 0x1c9bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9bdc:
    // 0x1c9bdc: 0x0  nop
    ctx->pc = 0x1c9bdcu;
    // NOP
label_1c9be0:
    // 0x1c9be0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c9be0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c9be4:
    // 0x1c9be4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c9be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9be8:
    // 0x1c9be8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c9be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9bec:
    // 0x1c9bec: 0x0  nop
    ctx->pc = 0x1c9becu;
    // NOP
label_1c9bf0:
    // 0x1c9bf0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_1c9bf4:
    if (ctx->pc == 0x1C9BF4u) {
        ctx->pc = 0x1C9BF8u;
        goto label_1c9bf8;
    }
    ctx->pc = 0x1C9BF0u;
    {
        const bool branch_taken_0x1c9bf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9bf0) {
            ctx->pc = 0x1C9C78u;
            goto label_1c9c78;
        }
    }
    ctx->pc = 0x1C9BF8u;
label_1c9bf8:
    // 0x1c9bf8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9bfc:
    // 0x1c9bfc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c00:
    // 0x1c9c00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c04:
    // 0x1c9c04: 0x24851b40  addiu       $a1, $a0, 0x1B40
    ctx->pc = 0x1c9c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
label_1c9c08:
    // 0x1c9c08: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c9c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1c9c0c:
    // 0x1c9c0c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1c9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1c9c10:
    // 0x1c9c10: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c9c10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c9c14:
    // 0x1c9c14: 0x24660170  addiu       $a2, $v1, 0x170
    ctx->pc = 0x1c9c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
label_1c9c18:
    // 0x1c9c18: 0xc0675b0  jal         func_19D6C0
label_1c9c1c:
    if (ctx->pc == 0x1C9C1Cu) {
        ctx->pc = 0x1C9C20u;
        goto label_1c9c20;
    }
    ctx->pc = 0x1C9C18u;
    SET_GPR_U32(ctx, 31, 0x1C9C20u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C9C18u, 0x1C9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C20u;
label_1c9c20:
    // 0x1c9c20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c24:
    // 0x1c9c24: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c28:
    // 0x1c9c28: 0xc44c1b40  lwc1        $f12, 0x1B40($v0)
    ctx->pc = 0x1c9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9c2c:
    // 0x1c9c2c: 0xc48d1b48  lwc1        $f13, 0x1B48($a0)
    ctx->pc = 0x1c9c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c9c30:
    // 0x1c9c30: 0xc0455e6  jal         func_115798
label_1c9c34:
    if (ctx->pc == 0x1C9C34u) {
        ctx->pc = 0x1C9C38u;
        goto label_1c9c38;
    }
    ctx->pc = 0x1C9C30u;
    SET_GPR_U32(ctx, 31, 0x1C9C38u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1C9C30u, 0x1C9C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C38u;
label_1c9c38:
    // 0x1c9c38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c3c:
    // 0x1c9c3c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c9c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1c9c40:
    // 0x1c9c40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9c44:
    // 0x1c9c44: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c48:
    // 0x1c9c48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c9c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c9c4c:
    // 0x1c9c4c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1c9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1c9c50:
    // 0x1c9c50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c54:
    // 0x1c9c54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c9c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1c9c58:
    // 0x1c9c58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c5c:
    // 0x1c9c5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c9c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c9c60:
    // 0x1c9c60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c64:
    // 0x1c9c64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c9c64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c9c68:
    // 0x1c9c68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c6c:
    // 0x1c9c6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c9c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c9c70:
    // 0x1c9c70: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_1c9c74:
    if (ctx->pc == 0x1C9C74u) {
        ctx->pc = 0x1C9C78u;
        goto label_1c9c78;
    }
    ctx->pc = 0x1C9C70u;
    {
        const bool branch_taken_0x1c9c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c70) {
            ctx->pc = 0x1C9F10u;
            goto label_1c9f10;
        }
    }
    ctx->pc = 0x1C9C78u;
label_1c9c78:
    // 0x1c9c78: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c7c:
    // 0x1c9c7c: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1c9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1c9c80:
    // 0x1c9c80: 0xc057b54  jal         func_15ED50
label_1c9c84:
    if (ctx->pc == 0x1C9C84u) {
        ctx->pc = 0x1C9C88u;
        goto label_1c9c88;
    }
    ctx->pc = 0x1C9C80u;
    SET_GPR_U32(ctx, 31, 0x1C9C88u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1C9C80u, 0x1C9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C88u;
label_1c9c88:
    // 0x1c9c88: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
label_1c9c8c:
    if (ctx->pc == 0x1C9C8Cu) {
        ctx->pc = 0x1C9C90u;
        goto label_1c9c90;
    }
    ctx->pc = 0x1C9C88u;
    {
        const bool branch_taken_0x1c9c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c88) {
            ctx->pc = 0x1C9F10u;
            goto label_1c9f10;
        }
    }
    ctx->pc = 0x1C9C90u;
label_1c9c90:
    // 0x1c9c90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9c94:
    // 0x1c9c94: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1c9c94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_1c9c98:
    // 0x1c9c98: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1c9c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c9c9c:
    // 0x1c9c9c: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1c9c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_1c9ca0:
    // 0x1c9ca0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c9ca4:
    if (ctx->pc == 0x1C9CA4u) {
        ctx->pc = 0x1C9CA8u;
        goto label_1c9ca8;
    }
    ctx->pc = 0x1C9CA0u;
    {
        const bool branch_taken_0x1c9ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ca0) {
            ctx->pc = 0x1C9CB8u;
            goto label_1c9cb8;
        }
    }
    ctx->pc = 0x1C9CA8u;
label_1c9ca8:
    // 0x1c9ca8: 0xc058608  jal         func_161820
label_1c9cac:
    if (ctx->pc == 0x1C9CACu) {
        ctx->pc = 0x1C9CB0u;
        goto label_1c9cb0;
    }
    ctx->pc = 0x1C9CA8u;
    SET_GPR_U32(ctx, 31, 0x1C9CB0u);
    ctx->pc = 0x161820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161820u, 0x1C9CA8u, 0x1C9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CB0u;
label_1c9cb0:
    // 0x1c9cb0: 0xc0586b0  jal         func_161AC0
label_1c9cb4:
    if (ctx->pc == 0x1C9CB4u) {
        ctx->pc = 0x1C9CB8u;
        goto label_1c9cb8;
    }
    ctx->pc = 0x1C9CB0u;
    SET_GPR_U32(ctx, 31, 0x1C9CB8u);
    ctx->pc = 0x161AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161AC0u, 0x1C9CB0u, 0x1C9CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CB8u;
label_1c9cb8:
    // 0x1c9cb8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9cbc:
    // 0x1c9cbc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1c9cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_1c9cc0:
    // 0x1c9cc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c9cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c9cc4:
    // 0x1c9cc4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c9cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1c9cc8:
    // 0x1c9cc8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1c9ccc:
    if (ctx->pc == 0x1C9CCCu) {
        ctx->pc = 0x1C9CD0u;
        goto label_1c9cd0;
    }
    ctx->pc = 0x1C9CC8u;
    {
        const bool branch_taken_0x1c9cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9cc8) {
            ctx->pc = 0x1C9CF0u;
            goto label_1c9cf0;
        }
    }
    ctx->pc = 0x1C9CD0u;
label_1c9cd0:
    // 0x1c9cd0: 0xc0584bc  jal         func_1612F0
label_1c9cd4:
    if (ctx->pc == 0x1C9CD4u) {
        ctx->pc = 0x1C9CD8u;
        goto label_1c9cd8;
    }
    ctx->pc = 0x1C9CD0u;
    SET_GPR_U32(ctx, 31, 0x1C9CD8u);
    ctx->pc = 0x1612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1612F0u, 0x1C9CD0u, 0x1C9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CD8u;
label_1c9cd8:
    // 0x1c9cd8: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_1c9cdc:
    if (ctx->pc == 0x1C9CDCu) {
        ctx->pc = 0x1C9CE0u;
        goto label_1c9ce0;
    }
    ctx->pc = 0x1C9CD8u;
    {
        const bool branch_taken_0x1c9cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9cd8) {
            ctx->pc = 0x1C9F10u;
            goto label_1c9f10;
        }
    }
    ctx->pc = 0x1C9CE0u;
label_1c9ce0:
    // 0x1c9ce0: 0xc0585dc  jal         func_161770
label_1c9ce4:
    if (ctx->pc == 0x1C9CE4u) {
        ctx->pc = 0x1C9CE8u;
        goto label_1c9ce8;
    }
    ctx->pc = 0x1C9CE0u;
    SET_GPR_U32(ctx, 31, 0x1C9CE8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1C9CE0u, 0x1C9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CE8u;
label_1c9ce8:
    // 0x1c9ce8: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
label_1c9cec:
    if (ctx->pc == 0x1C9CECu) {
        ctx->pc = 0x1C9CF0u;
        goto label_1c9cf0;
    }
    ctx->pc = 0x1C9CE8u;
    {
        const bool branch_taken_0x1c9ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ce8) {
            ctx->pc = 0x1C9F10u;
            goto label_1c9f10;
        }
    }
    ctx->pc = 0x1C9CF0u;
label_1c9cf0:
    // 0x1c9cf0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9cf4:
    // 0x1c9cf4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c9cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1c9cf8:
    // 0x1c9cf8: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_1c9cfc:
    if (ctx->pc == 0x1C9CFCu) {
        ctx->pc = 0x1C9D00u;
        goto label_1c9d00;
    }
    ctx->pc = 0x1C9CF8u;
    {
        const bool branch_taken_0x1c9cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9cf8) {
            ctx->pc = 0x1C9E04u;
            goto label_1c9e04;
        }
    }
    ctx->pc = 0x1C9D00u;
label_1c9d00:
    // 0x1c9d00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d04:
    // 0x1c9d04: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c9d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c9d08:
    // 0x1c9d08: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1c9d0c:
    // 0x1c9d0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c9d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c9d10:
    // 0x1c9d10: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1c9d14:
    if (ctx->pc == 0x1C9D14u) {
        ctx->pc = 0x1C9D18u;
        goto label_1c9d18;
    }
    ctx->pc = 0x1C9D10u;
    {
        const bool branch_taken_0x1c9d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d10) {
            ctx->pc = 0x1C9DD4u;
            goto label_1c9dd4;
        }
    }
    ctx->pc = 0x1C9D18u;
label_1c9d18:
    // 0x1c9d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9d1c:
    // 0x1c9d1c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d20:
    // 0x1c9d20: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1c9d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_1c9d24:
    // 0x1c9d24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d28:
    // 0x1c9d28: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c9d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9d2c:
    // 0x1c9d2c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d30:
    // 0x1c9d30: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c9d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
label_1c9d34:
    // 0x1c9d34: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d38:
    // 0x1c9d38: 0xc4a01568  lwc1        $f0, 0x1568($a1)
    ctx->pc = 0x1c9d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9d3c:
    // 0x1c9d3c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d40:
    // 0x1c9d40: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c9d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c9d44:
    // 0x1c9d44: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d48:
    // 0x1c9d48: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c9d48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1c9d4c:
    // 0x1c9d4c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d50:
    // 0x1c9d50: 0x8ca313e8  lw          $v1, 0x13E8($a1)
    ctx->pc = 0x1c9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
label_1c9d54:
    // 0x1c9d54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c9d58:
    if (ctx->pc == 0x1C9D58u) {
        ctx->pc = 0x1C9D5Cu;
        goto label_1c9d5c;
    }
    ctx->pc = 0x1C9D54u;
    {
        const bool branch_taken_0x1c9d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d54) {
            ctx->pc = 0x1C9D6Cu;
            goto label_1c9d6c;
        }
    }
    ctx->pc = 0x1C9D5Cu;
label_1c9d5c:
    // 0x1c9d5c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d60:
    // 0x1c9d60: 0xc0571d0  jal         func_15C740
label_1c9d64:
    if (ctx->pc == 0x1C9D64u) {
        ctx->pc = 0x1C9D68u;
        goto label_1c9d68;
    }
    ctx->pc = 0x1C9D60u;
    SET_GPR_U32(ctx, 31, 0x1C9D68u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C9D60u, 0x1C9D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D68u;
label_1c9d68:
    // 0x1c9d68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c9d68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1c9d6c:
    // 0x1c9d6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9d70:
    // 0x1c9d70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d74:
    // 0x1c9d74: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c9d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1c9d78:
    // 0x1c9d78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c9d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c9d7c:
    // 0x1c9d7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d80:
    // 0x1c9d80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c9d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1c9d84:
    // 0x1c9d84: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d88:
    // 0x1c9d88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c9d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c9d8c:
    // 0x1c9d8c: 0x8fb10088  lw          $s1, 0x88($sp)
    ctx->pc = 0x1c9d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d90:
    // 0x1c9d90: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x1c9d90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c9d94:
    // 0x1c9d94: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9d98:
    // 0x1c9d98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c9d9c:
    // 0x1c9d9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9da0:
    // 0x1c9da0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9da4:
    // 0x1c9da4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c9da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c9da8:
    // 0x1c9da8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9dac:
    // 0x1c9dac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c9dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c9db0:
    // 0x1c9db0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c9db4:
    // 0x1c9db4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9db8:
    // 0x1c9db8: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1c9db8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1c9dbc:
    // 0x1c9dbc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9dc0:
    // 0x1c9dc0: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1c9dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1c9dc4:
    // 0x1c9dc4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9dc8:
    // 0x1c9dc8: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1c9dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1c9dcc:
    // 0x1c9dcc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c9dd0:
    if (ctx->pc == 0x1C9DD0u) {
        ctx->pc = 0x1C9DD4u;
        goto label_1c9dd4;
    }
    ctx->pc = 0x1C9DCCu;
    {
        const bool branch_taken_0x1c9dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9dcc) {
            ctx->pc = 0x1C9E04u;
            goto label_1c9e04;
        }
    }
    ctx->pc = 0x1C9DD4u;
label_1c9dd4:
    // 0x1c9dd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9dd8:
    // 0x1c9dd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9ddc:
    // 0x1c9ddc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c9ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c9de0:
    // 0x1c9de0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9de4:
    // 0x1c9de4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1c9de4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c9de8:
    // 0x1c9de8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9dec:
    // 0x1c9dec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c9decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c9df0:
    // 0x1c9df0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9df4:
    // 0x1c9df4: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1c9df4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c9df8:
    // 0x1c9df8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c9df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c9dfc:
    // 0x1c9dfc: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c9dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9e00:
    // 0x1c9e00: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x1c9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
label_1c9e04:
    // 0x1c9e04: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x1c9e04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c9e08:
    // 0x1c9e08: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x1c9e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1c9e0c:
    // 0x1c9e0c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1c9e10:
    // 0x1c9e10: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1c9e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1c9e14:
    // 0x1c9e14: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_1c9e18:
    if (ctx->pc == 0x1C9E18u) {
        ctx->pc = 0x1C9E1Cu;
        goto label_1c9e1c;
    }
    ctx->pc = 0x1C9E14u;
    {
        const bool branch_taken_0x1c9e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e14) {
            ctx->pc = 0x1C9F10u;
            goto label_1c9f10;
        }
    }
    ctx->pc = 0x1C9E1Cu;
label_1c9e1c:
    // 0x1c9e1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c9e20:
    // 0x1c9e20: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c9e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1c9e24:
    // 0x1c9e24: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1c9e28:
    // 0x1c9e28: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c9e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c9e2c:
    // 0x1c9e2c: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
label_1c9e30:
    if (ctx->pc == 0x1C9E30u) {
        ctx->pc = 0x1C9E34u;
        goto label_1c9e34;
    }
    ctx->pc = 0x1C9E2Cu;
    {
        const bool branch_taken_0x1c9e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e2c) {
            ctx->pc = 0x1C9F10u;
            goto label_1c9f10;
        }
    }
    ctx->pc = 0x1C9E34u;
label_1c9e34:
    // 0x1c9e34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1c9e38:
    // 0x1c9e38: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1c9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_1c9e3c:
    // 0x1c9e3c: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x1c9e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_1c9e40:
    // 0x1c9e40: 0x14a00033  bnez        $a1, . + 4 + (0x33 << 2)
label_1c9e44:
    if (ctx->pc == 0x1C9E44u) {
        ctx->pc = 0x1C9E48u;
        goto label_1c9e48;
    }
    ctx->pc = 0x1C9E40u;
    {
        const bool branch_taken_0x1c9e40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e40) {
            ctx->pc = 0x1C9F10u;
            goto label_1c9f10;
        }
    }
    ctx->pc = 0x1C9E48u;
label_1c9e48:
    // 0x1c9e48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e4c:
    // 0x1c9e4c: 0x0  nop
    ctx->pc = 0x1c9e4cu;
    // NOP
label_1c9e50:
    // 0x1c9e50: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c9e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c9e54:
    // 0x1c9e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e58:
    // 0x1c9e58: 0x0  nop
    ctx->pc = 0x1c9e58u;
    // NOP
label_1c9e5c:
    // 0x1c9e5c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c9e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c9e60:
    // 0x1c9e60: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x1c9e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
label_1c9e64:
    // 0x1c9e64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c9e64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e68:
    // 0x1c9e68: 0x0  nop
    ctx->pc = 0x1c9e68u;
    // NOP
label_1c9e6c:
    // 0x1c9e6c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c9e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c9e70:
    // 0x1c9e70: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1c9e70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1c9e74:
    // 0x1c9e74: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1c9e74u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e78:
    // 0x1c9e78: 0x0  nop
    ctx->pc = 0x1c9e78u;
    // NOP
label_1c9e7c:
    // 0x1c9e7c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1c9e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1c9e80:
    // 0x1c9e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e84:
    // 0x1c9e84: 0x0  nop
    ctx->pc = 0x1c9e84u;
    // NOP
label_1c9e88:
    // 0x1c9e88: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c9e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c9e8c:
    // 0x1c9e8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9e8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9e90:
    // 0x1c9e90: 0x0  nop
    ctx->pc = 0x1c9e90u;
    // NOP
label_1c9e94:
    // 0x1c9e94: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c9e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1c9e98:
    // 0x1c9e98: 0x3c084416  lui         $t0, 0x4416
    ctx->pc = 0x1c9e98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17430 << 16));
label_1c9e9c:
    // 0x1c9e9c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c9e9cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9ea0:
    // 0x1c9ea0: 0x0  nop
    ctx->pc = 0x1c9ea0u;
    // NOP
label_1c9ea4:
    // 0x1c9ea4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1c9ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1c9ea8:
    // 0x1c9ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c9eac:
    // 0x1c9eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9eb0:
    // 0x1c9eb0: 0x0  nop
    ctx->pc = 0x1c9eb0u;
    // NOP
label_1c9eb4:
    // 0x1c9eb4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1c9eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1c9eb8:
    // 0x1c9eb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c9ebc:
    // 0x1c9ebc: 0xc0675a4  jal         func_19D690
label_1c9ec0:
    if (ctx->pc == 0x1C9EC0u) {
        ctx->pc = 0x1C9EC4u;
        goto label_1c9ec4;
    }
    ctx->pc = 0x1C9EBCu;
    SET_GPR_U32(ctx, 31, 0x1C9EC4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1C9EBCu, 0x1C9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EC4u;
label_1c9ec4:
    // 0x1c9ec4: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x1c9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_1c9ec8:
    // 0x1c9ec8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1c9ec8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c9ecc:
    // 0x1c9ecc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1c9eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1c9ed0:
    // 0x1c9ed0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1c9ed4:
    // 0x1c9ed4: 0x24649240  addiu       $a0, $v1, -0x6DC0
    ctx->pc = 0x1c9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
label_1c9ed8:
    // 0x1c9ed8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1c9edc:
    // 0x1c9edc: 0x24679240  addiu       $a3, $v1, -0x6DC0
    ctx->pc = 0x1c9edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
label_1c9ee0:
    // 0x1c9ee0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1c9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_1c9ee4:
    // 0x1c9ee4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1c9ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c9ee8:
    // 0x1c9ee8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1c9eec:
    // 0x1c9eec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c9eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1c9ef0:
    // 0x1c9ef0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9ef0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9ef4:
    // 0x1c9ef4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c9ef8:
    // 0x1c9ef8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1c9ef8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9efc:
    // 0x1c9efc: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1c9efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c9f00:
    // 0x1c9f00: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x1c9f00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c9f04:
    // 0x1c9f04: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1c9f04u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9f08:
    // 0x1c9f08: 0xc0bbdc4  jal         func_2EF710
label_1c9f0c:
    if (ctx->pc == 0x1C9F0Cu) {
        ctx->pc = 0x1C9F10u;
        goto label_1c9f10;
    }
    ctx->pc = 0x1C9F08u;
    SET_GPR_U32(ctx, 31, 0x1C9F10u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x1C9F08u, 0x1C9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F10u;
label_1c9f10:
    // 0x1c9f10: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1c9f10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c9f14:
    // 0x1c9f14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c9f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9f18:
    // 0x1c9f18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c9f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9f1c:
    // 0x1c9f1c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1c9f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c9f20:
    // 0x1c9f20: 0x3e00008  jr          $ra
label_1c9f24:
    if (ctx->pc == 0x1C9F24u) {
        ctx->pc = 0x1C9F28u;
        goto label_fallthrough_0x1c9f20;
    }
    ctx->pc = 0x1C9F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c9f20:
    ctx->pc = 0x1C9F28u;
}
