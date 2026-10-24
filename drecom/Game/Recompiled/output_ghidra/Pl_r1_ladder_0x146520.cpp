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

// Function: Pl_r1_ladder
// Address: 0x146520 - 0x147620
void Pl_r1_ladder_0x146520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_ladder_0x146520");
#endif

    switch (ctx->pc) {
        case 0x146520u: goto label_146520;
        case 0x146524u: goto label_146524;
        case 0x146528u: goto label_146528;
        case 0x14652cu: goto label_14652c;
        case 0x146530u: goto label_146530;
        case 0x146534u: goto label_146534;
        case 0x146538u: goto label_146538;
        case 0x14653cu: goto label_14653c;
        case 0x146540u: goto label_146540;
        case 0x146544u: goto label_146544;
        case 0x146548u: goto label_146548;
        case 0x14654cu: goto label_14654c;
        case 0x146550u: goto label_146550;
        case 0x146554u: goto label_146554;
        case 0x146558u: goto label_146558;
        case 0x14655cu: goto label_14655c;
        case 0x146560u: goto label_146560;
        case 0x146564u: goto label_146564;
        case 0x146568u: goto label_146568;
        case 0x14656cu: goto label_14656c;
        case 0x146570u: goto label_146570;
        case 0x146574u: goto label_146574;
        case 0x146578u: goto label_146578;
        case 0x14657cu: goto label_14657c;
        case 0x146580u: goto label_146580;
        case 0x146584u: goto label_146584;
        case 0x146588u: goto label_146588;
        case 0x14658cu: goto label_14658c;
        case 0x146590u: goto label_146590;
        case 0x146594u: goto label_146594;
        case 0x146598u: goto label_146598;
        case 0x14659cu: goto label_14659c;
        case 0x1465a0u: goto label_1465a0;
        case 0x1465a4u: goto label_1465a4;
        case 0x1465a8u: goto label_1465a8;
        case 0x1465acu: goto label_1465ac;
        case 0x1465b0u: goto label_1465b0;
        case 0x1465b4u: goto label_1465b4;
        case 0x1465b8u: goto label_1465b8;
        case 0x1465bcu: goto label_1465bc;
        case 0x1465c0u: goto label_1465c0;
        case 0x1465c4u: goto label_1465c4;
        case 0x1465c8u: goto label_1465c8;
        case 0x1465ccu: goto label_1465cc;
        case 0x1465d0u: goto label_1465d0;
        case 0x1465d4u: goto label_1465d4;
        case 0x1465d8u: goto label_1465d8;
        case 0x1465dcu: goto label_1465dc;
        case 0x1465e0u: goto label_1465e0;
        case 0x1465e4u: goto label_1465e4;
        case 0x1465e8u: goto label_1465e8;
        case 0x1465ecu: goto label_1465ec;
        case 0x1465f0u: goto label_1465f0;
        case 0x1465f4u: goto label_1465f4;
        case 0x1465f8u: goto label_1465f8;
        case 0x1465fcu: goto label_1465fc;
        case 0x146600u: goto label_146600;
        case 0x146604u: goto label_146604;
        case 0x146608u: goto label_146608;
        case 0x14660cu: goto label_14660c;
        case 0x146610u: goto label_146610;
        case 0x146614u: goto label_146614;
        case 0x146618u: goto label_146618;
        case 0x14661cu: goto label_14661c;
        case 0x146620u: goto label_146620;
        case 0x146624u: goto label_146624;
        case 0x146628u: goto label_146628;
        case 0x14662cu: goto label_14662c;
        case 0x146630u: goto label_146630;
        case 0x146634u: goto label_146634;
        case 0x146638u: goto label_146638;
        case 0x14663cu: goto label_14663c;
        case 0x146640u: goto label_146640;
        case 0x146644u: goto label_146644;
        case 0x146648u: goto label_146648;
        case 0x14664cu: goto label_14664c;
        case 0x146650u: goto label_146650;
        case 0x146654u: goto label_146654;
        case 0x146658u: goto label_146658;
        case 0x14665cu: goto label_14665c;
        case 0x146660u: goto label_146660;
        case 0x146664u: goto label_146664;
        case 0x146668u: goto label_146668;
        case 0x14666cu: goto label_14666c;
        case 0x146670u: goto label_146670;
        case 0x146674u: goto label_146674;
        case 0x146678u: goto label_146678;
        case 0x14667cu: goto label_14667c;
        case 0x146680u: goto label_146680;
        case 0x146684u: goto label_146684;
        case 0x146688u: goto label_146688;
        case 0x14668cu: goto label_14668c;
        case 0x146690u: goto label_146690;
        case 0x146694u: goto label_146694;
        case 0x146698u: goto label_146698;
        case 0x14669cu: goto label_14669c;
        case 0x1466a0u: goto label_1466a0;
        case 0x1466a4u: goto label_1466a4;
        case 0x1466a8u: goto label_1466a8;
        case 0x1466acu: goto label_1466ac;
        case 0x1466b0u: goto label_1466b0;
        case 0x1466b4u: goto label_1466b4;
        case 0x1466b8u: goto label_1466b8;
        case 0x1466bcu: goto label_1466bc;
        case 0x1466c0u: goto label_1466c0;
        case 0x1466c4u: goto label_1466c4;
        case 0x1466c8u: goto label_1466c8;
        case 0x1466ccu: goto label_1466cc;
        case 0x1466d0u: goto label_1466d0;
        case 0x1466d4u: goto label_1466d4;
        case 0x1466d8u: goto label_1466d8;
        case 0x1466dcu: goto label_1466dc;
        case 0x1466e0u: goto label_1466e0;
        case 0x1466e4u: goto label_1466e4;
        case 0x1466e8u: goto label_1466e8;
        case 0x1466ecu: goto label_1466ec;
        case 0x1466f0u: goto label_1466f0;
        case 0x1466f4u: goto label_1466f4;
        case 0x1466f8u: goto label_1466f8;
        case 0x1466fcu: goto label_1466fc;
        case 0x146700u: goto label_146700;
        case 0x146704u: goto label_146704;
        case 0x146708u: goto label_146708;
        case 0x14670cu: goto label_14670c;
        case 0x146710u: goto label_146710;
        case 0x146714u: goto label_146714;
        case 0x146718u: goto label_146718;
        case 0x14671cu: goto label_14671c;
        case 0x146720u: goto label_146720;
        case 0x146724u: goto label_146724;
        case 0x146728u: goto label_146728;
        case 0x14672cu: goto label_14672c;
        case 0x146730u: goto label_146730;
        case 0x146734u: goto label_146734;
        case 0x146738u: goto label_146738;
        case 0x14673cu: goto label_14673c;
        case 0x146740u: goto label_146740;
        case 0x146744u: goto label_146744;
        case 0x146748u: goto label_146748;
        case 0x14674cu: goto label_14674c;
        case 0x146750u: goto label_146750;
        case 0x146754u: goto label_146754;
        case 0x146758u: goto label_146758;
        case 0x14675cu: goto label_14675c;
        case 0x146760u: goto label_146760;
        case 0x146764u: goto label_146764;
        case 0x146768u: goto label_146768;
        case 0x14676cu: goto label_14676c;
        case 0x146770u: goto label_146770;
        case 0x146774u: goto label_146774;
        case 0x146778u: goto label_146778;
        case 0x14677cu: goto label_14677c;
        case 0x146780u: goto label_146780;
        case 0x146784u: goto label_146784;
        case 0x146788u: goto label_146788;
        case 0x14678cu: goto label_14678c;
        case 0x146790u: goto label_146790;
        case 0x146794u: goto label_146794;
        case 0x146798u: goto label_146798;
        case 0x14679cu: goto label_14679c;
        case 0x1467a0u: goto label_1467a0;
        case 0x1467a4u: goto label_1467a4;
        case 0x1467a8u: goto label_1467a8;
        case 0x1467acu: goto label_1467ac;
        case 0x1467b0u: goto label_1467b0;
        case 0x1467b4u: goto label_1467b4;
        case 0x1467b8u: goto label_1467b8;
        case 0x1467bcu: goto label_1467bc;
        case 0x1467c0u: goto label_1467c0;
        case 0x1467c4u: goto label_1467c4;
        case 0x1467c8u: goto label_1467c8;
        case 0x1467ccu: goto label_1467cc;
        case 0x1467d0u: goto label_1467d0;
        case 0x1467d4u: goto label_1467d4;
        case 0x1467d8u: goto label_1467d8;
        case 0x1467dcu: goto label_1467dc;
        case 0x1467e0u: goto label_1467e0;
        case 0x1467e4u: goto label_1467e4;
        case 0x1467e8u: goto label_1467e8;
        case 0x1467ecu: goto label_1467ec;
        case 0x1467f0u: goto label_1467f0;
        case 0x1467f4u: goto label_1467f4;
        case 0x1467f8u: goto label_1467f8;
        case 0x1467fcu: goto label_1467fc;
        case 0x146800u: goto label_146800;
        case 0x146804u: goto label_146804;
        case 0x146808u: goto label_146808;
        case 0x14680cu: goto label_14680c;
        case 0x146810u: goto label_146810;
        case 0x146814u: goto label_146814;
        case 0x146818u: goto label_146818;
        case 0x14681cu: goto label_14681c;
        case 0x146820u: goto label_146820;
        case 0x146824u: goto label_146824;
        case 0x146828u: goto label_146828;
        case 0x14682cu: goto label_14682c;
        case 0x146830u: goto label_146830;
        case 0x146834u: goto label_146834;
        case 0x146838u: goto label_146838;
        case 0x14683cu: goto label_14683c;
        case 0x146840u: goto label_146840;
        case 0x146844u: goto label_146844;
        case 0x146848u: goto label_146848;
        case 0x14684cu: goto label_14684c;
        case 0x146850u: goto label_146850;
        case 0x146854u: goto label_146854;
        case 0x146858u: goto label_146858;
        case 0x14685cu: goto label_14685c;
        case 0x146860u: goto label_146860;
        case 0x146864u: goto label_146864;
        case 0x146868u: goto label_146868;
        case 0x14686cu: goto label_14686c;
        case 0x146870u: goto label_146870;
        case 0x146874u: goto label_146874;
        case 0x146878u: goto label_146878;
        case 0x14687cu: goto label_14687c;
        case 0x146880u: goto label_146880;
        case 0x146884u: goto label_146884;
        case 0x146888u: goto label_146888;
        case 0x14688cu: goto label_14688c;
        case 0x146890u: goto label_146890;
        case 0x146894u: goto label_146894;
        case 0x146898u: goto label_146898;
        case 0x14689cu: goto label_14689c;
        case 0x1468a0u: goto label_1468a0;
        case 0x1468a4u: goto label_1468a4;
        case 0x1468a8u: goto label_1468a8;
        case 0x1468acu: goto label_1468ac;
        case 0x1468b0u: goto label_1468b0;
        case 0x1468b4u: goto label_1468b4;
        case 0x1468b8u: goto label_1468b8;
        case 0x1468bcu: goto label_1468bc;
        case 0x1468c0u: goto label_1468c0;
        case 0x1468c4u: goto label_1468c4;
        case 0x1468c8u: goto label_1468c8;
        case 0x1468ccu: goto label_1468cc;
        case 0x1468d0u: goto label_1468d0;
        case 0x1468d4u: goto label_1468d4;
        case 0x1468d8u: goto label_1468d8;
        case 0x1468dcu: goto label_1468dc;
        case 0x1468e0u: goto label_1468e0;
        case 0x1468e4u: goto label_1468e4;
        case 0x1468e8u: goto label_1468e8;
        case 0x1468ecu: goto label_1468ec;
        case 0x1468f0u: goto label_1468f0;
        case 0x1468f4u: goto label_1468f4;
        case 0x1468f8u: goto label_1468f8;
        case 0x1468fcu: goto label_1468fc;
        case 0x146900u: goto label_146900;
        case 0x146904u: goto label_146904;
        case 0x146908u: goto label_146908;
        case 0x14690cu: goto label_14690c;
        case 0x146910u: goto label_146910;
        case 0x146914u: goto label_146914;
        case 0x146918u: goto label_146918;
        case 0x14691cu: goto label_14691c;
        case 0x146920u: goto label_146920;
        case 0x146924u: goto label_146924;
        case 0x146928u: goto label_146928;
        case 0x14692cu: goto label_14692c;
        case 0x146930u: goto label_146930;
        case 0x146934u: goto label_146934;
        case 0x146938u: goto label_146938;
        case 0x14693cu: goto label_14693c;
        case 0x146940u: goto label_146940;
        case 0x146944u: goto label_146944;
        case 0x146948u: goto label_146948;
        case 0x14694cu: goto label_14694c;
        case 0x146950u: goto label_146950;
        case 0x146954u: goto label_146954;
        case 0x146958u: goto label_146958;
        case 0x14695cu: goto label_14695c;
        case 0x146960u: goto label_146960;
        case 0x146964u: goto label_146964;
        case 0x146968u: goto label_146968;
        case 0x14696cu: goto label_14696c;
        case 0x146970u: goto label_146970;
        case 0x146974u: goto label_146974;
        case 0x146978u: goto label_146978;
        case 0x14697cu: goto label_14697c;
        case 0x146980u: goto label_146980;
        case 0x146984u: goto label_146984;
        case 0x146988u: goto label_146988;
        case 0x14698cu: goto label_14698c;
        case 0x146990u: goto label_146990;
        case 0x146994u: goto label_146994;
        case 0x146998u: goto label_146998;
        case 0x14699cu: goto label_14699c;
        case 0x1469a0u: goto label_1469a0;
        case 0x1469a4u: goto label_1469a4;
        case 0x1469a8u: goto label_1469a8;
        case 0x1469acu: goto label_1469ac;
        case 0x1469b0u: goto label_1469b0;
        case 0x1469b4u: goto label_1469b4;
        case 0x1469b8u: goto label_1469b8;
        case 0x1469bcu: goto label_1469bc;
        case 0x1469c0u: goto label_1469c0;
        case 0x1469c4u: goto label_1469c4;
        case 0x1469c8u: goto label_1469c8;
        case 0x1469ccu: goto label_1469cc;
        case 0x1469d0u: goto label_1469d0;
        case 0x1469d4u: goto label_1469d4;
        case 0x1469d8u: goto label_1469d8;
        case 0x1469dcu: goto label_1469dc;
        case 0x1469e0u: goto label_1469e0;
        case 0x1469e4u: goto label_1469e4;
        case 0x1469e8u: goto label_1469e8;
        case 0x1469ecu: goto label_1469ec;
        case 0x1469f0u: goto label_1469f0;
        case 0x1469f4u: goto label_1469f4;
        case 0x1469f8u: goto label_1469f8;
        case 0x1469fcu: goto label_1469fc;
        case 0x146a00u: goto label_146a00;
        case 0x146a04u: goto label_146a04;
        case 0x146a08u: goto label_146a08;
        case 0x146a0cu: goto label_146a0c;
        case 0x146a10u: goto label_146a10;
        case 0x146a14u: goto label_146a14;
        case 0x146a18u: goto label_146a18;
        case 0x146a1cu: goto label_146a1c;
        case 0x146a20u: goto label_146a20;
        case 0x146a24u: goto label_146a24;
        case 0x146a28u: goto label_146a28;
        case 0x146a2cu: goto label_146a2c;
        case 0x146a30u: goto label_146a30;
        case 0x146a34u: goto label_146a34;
        case 0x146a38u: goto label_146a38;
        case 0x146a3cu: goto label_146a3c;
        case 0x146a40u: goto label_146a40;
        case 0x146a44u: goto label_146a44;
        case 0x146a48u: goto label_146a48;
        case 0x146a4cu: goto label_146a4c;
        case 0x146a50u: goto label_146a50;
        case 0x146a54u: goto label_146a54;
        case 0x146a58u: goto label_146a58;
        case 0x146a5cu: goto label_146a5c;
        case 0x146a60u: goto label_146a60;
        case 0x146a64u: goto label_146a64;
        case 0x146a68u: goto label_146a68;
        case 0x146a6cu: goto label_146a6c;
        case 0x146a70u: goto label_146a70;
        case 0x146a74u: goto label_146a74;
        case 0x146a78u: goto label_146a78;
        case 0x146a7cu: goto label_146a7c;
        case 0x146a80u: goto label_146a80;
        case 0x146a84u: goto label_146a84;
        case 0x146a88u: goto label_146a88;
        case 0x146a8cu: goto label_146a8c;
        case 0x146a90u: goto label_146a90;
        case 0x146a94u: goto label_146a94;
        case 0x146a98u: goto label_146a98;
        case 0x146a9cu: goto label_146a9c;
        case 0x146aa0u: goto label_146aa0;
        case 0x146aa4u: goto label_146aa4;
        case 0x146aa8u: goto label_146aa8;
        case 0x146aacu: goto label_146aac;
        case 0x146ab0u: goto label_146ab0;
        case 0x146ab4u: goto label_146ab4;
        case 0x146ab8u: goto label_146ab8;
        case 0x146abcu: goto label_146abc;
        case 0x146ac0u: goto label_146ac0;
        case 0x146ac4u: goto label_146ac4;
        case 0x146ac8u: goto label_146ac8;
        case 0x146accu: goto label_146acc;
        case 0x146ad0u: goto label_146ad0;
        case 0x146ad4u: goto label_146ad4;
        case 0x146ad8u: goto label_146ad8;
        case 0x146adcu: goto label_146adc;
        case 0x146ae0u: goto label_146ae0;
        case 0x146ae4u: goto label_146ae4;
        case 0x146ae8u: goto label_146ae8;
        case 0x146aecu: goto label_146aec;
        case 0x146af0u: goto label_146af0;
        case 0x146af4u: goto label_146af4;
        case 0x146af8u: goto label_146af8;
        case 0x146afcu: goto label_146afc;
        case 0x146b00u: goto label_146b00;
        case 0x146b04u: goto label_146b04;
        case 0x146b08u: goto label_146b08;
        case 0x146b0cu: goto label_146b0c;
        case 0x146b10u: goto label_146b10;
        case 0x146b14u: goto label_146b14;
        case 0x146b18u: goto label_146b18;
        case 0x146b1cu: goto label_146b1c;
        case 0x146b20u: goto label_146b20;
        case 0x146b24u: goto label_146b24;
        case 0x146b28u: goto label_146b28;
        case 0x146b2cu: goto label_146b2c;
        case 0x146b30u: goto label_146b30;
        case 0x146b34u: goto label_146b34;
        case 0x146b38u: goto label_146b38;
        case 0x146b3cu: goto label_146b3c;
        case 0x146b40u: goto label_146b40;
        case 0x146b44u: goto label_146b44;
        case 0x146b48u: goto label_146b48;
        case 0x146b4cu: goto label_146b4c;
        case 0x146b50u: goto label_146b50;
        case 0x146b54u: goto label_146b54;
        case 0x146b58u: goto label_146b58;
        case 0x146b5cu: goto label_146b5c;
        case 0x146b60u: goto label_146b60;
        case 0x146b64u: goto label_146b64;
        case 0x146b68u: goto label_146b68;
        case 0x146b6cu: goto label_146b6c;
        case 0x146b70u: goto label_146b70;
        case 0x146b74u: goto label_146b74;
        case 0x146b78u: goto label_146b78;
        case 0x146b7cu: goto label_146b7c;
        case 0x146b80u: goto label_146b80;
        case 0x146b84u: goto label_146b84;
        case 0x146b88u: goto label_146b88;
        case 0x146b8cu: goto label_146b8c;
        case 0x146b90u: goto label_146b90;
        case 0x146b94u: goto label_146b94;
        case 0x146b98u: goto label_146b98;
        case 0x146b9cu: goto label_146b9c;
        case 0x146ba0u: goto label_146ba0;
        case 0x146ba4u: goto label_146ba4;
        case 0x146ba8u: goto label_146ba8;
        case 0x146bacu: goto label_146bac;
        case 0x146bb0u: goto label_146bb0;
        case 0x146bb4u: goto label_146bb4;
        case 0x146bb8u: goto label_146bb8;
        case 0x146bbcu: goto label_146bbc;
        case 0x146bc0u: goto label_146bc0;
        case 0x146bc4u: goto label_146bc4;
        case 0x146bc8u: goto label_146bc8;
        case 0x146bccu: goto label_146bcc;
        case 0x146bd0u: goto label_146bd0;
        case 0x146bd4u: goto label_146bd4;
        case 0x146bd8u: goto label_146bd8;
        case 0x146bdcu: goto label_146bdc;
        case 0x146be0u: goto label_146be0;
        case 0x146be4u: goto label_146be4;
        case 0x146be8u: goto label_146be8;
        case 0x146becu: goto label_146bec;
        case 0x146bf0u: goto label_146bf0;
        case 0x146bf4u: goto label_146bf4;
        case 0x146bf8u: goto label_146bf8;
        case 0x146bfcu: goto label_146bfc;
        case 0x146c00u: goto label_146c00;
        case 0x146c04u: goto label_146c04;
        case 0x146c08u: goto label_146c08;
        case 0x146c0cu: goto label_146c0c;
        case 0x146c10u: goto label_146c10;
        case 0x146c14u: goto label_146c14;
        case 0x146c18u: goto label_146c18;
        case 0x146c1cu: goto label_146c1c;
        case 0x146c20u: goto label_146c20;
        case 0x146c24u: goto label_146c24;
        case 0x146c28u: goto label_146c28;
        case 0x146c2cu: goto label_146c2c;
        case 0x146c30u: goto label_146c30;
        case 0x146c34u: goto label_146c34;
        case 0x146c38u: goto label_146c38;
        case 0x146c3cu: goto label_146c3c;
        case 0x146c40u: goto label_146c40;
        case 0x146c44u: goto label_146c44;
        case 0x146c48u: goto label_146c48;
        case 0x146c4cu: goto label_146c4c;
        case 0x146c50u: goto label_146c50;
        case 0x146c54u: goto label_146c54;
        case 0x146c58u: goto label_146c58;
        case 0x146c5cu: goto label_146c5c;
        case 0x146c60u: goto label_146c60;
        case 0x146c64u: goto label_146c64;
        case 0x146c68u: goto label_146c68;
        case 0x146c6cu: goto label_146c6c;
        case 0x146c70u: goto label_146c70;
        case 0x146c74u: goto label_146c74;
        case 0x146c78u: goto label_146c78;
        case 0x146c7cu: goto label_146c7c;
        case 0x146c80u: goto label_146c80;
        case 0x146c84u: goto label_146c84;
        case 0x146c88u: goto label_146c88;
        case 0x146c8cu: goto label_146c8c;
        case 0x146c90u: goto label_146c90;
        case 0x146c94u: goto label_146c94;
        case 0x146c98u: goto label_146c98;
        case 0x146c9cu: goto label_146c9c;
        case 0x146ca0u: goto label_146ca0;
        case 0x146ca4u: goto label_146ca4;
        case 0x146ca8u: goto label_146ca8;
        case 0x146cacu: goto label_146cac;
        case 0x146cb0u: goto label_146cb0;
        case 0x146cb4u: goto label_146cb4;
        case 0x146cb8u: goto label_146cb8;
        case 0x146cbcu: goto label_146cbc;
        case 0x146cc0u: goto label_146cc0;
        case 0x146cc4u: goto label_146cc4;
        case 0x146cc8u: goto label_146cc8;
        case 0x146cccu: goto label_146ccc;
        case 0x146cd0u: goto label_146cd0;
        case 0x146cd4u: goto label_146cd4;
        case 0x146cd8u: goto label_146cd8;
        case 0x146cdcu: goto label_146cdc;
        case 0x146ce0u: goto label_146ce0;
        case 0x146ce4u: goto label_146ce4;
        case 0x146ce8u: goto label_146ce8;
        case 0x146cecu: goto label_146cec;
        case 0x146cf0u: goto label_146cf0;
        case 0x146cf4u: goto label_146cf4;
        case 0x146cf8u: goto label_146cf8;
        case 0x146cfcu: goto label_146cfc;
        case 0x146d00u: goto label_146d00;
        case 0x146d04u: goto label_146d04;
        case 0x146d08u: goto label_146d08;
        case 0x146d0cu: goto label_146d0c;
        case 0x146d10u: goto label_146d10;
        case 0x146d14u: goto label_146d14;
        case 0x146d18u: goto label_146d18;
        case 0x146d1cu: goto label_146d1c;
        case 0x146d20u: goto label_146d20;
        case 0x146d24u: goto label_146d24;
        case 0x146d28u: goto label_146d28;
        case 0x146d2cu: goto label_146d2c;
        case 0x146d30u: goto label_146d30;
        case 0x146d34u: goto label_146d34;
        case 0x146d38u: goto label_146d38;
        case 0x146d3cu: goto label_146d3c;
        case 0x146d40u: goto label_146d40;
        case 0x146d44u: goto label_146d44;
        case 0x146d48u: goto label_146d48;
        case 0x146d4cu: goto label_146d4c;
        case 0x146d50u: goto label_146d50;
        case 0x146d54u: goto label_146d54;
        case 0x146d58u: goto label_146d58;
        case 0x146d5cu: goto label_146d5c;
        case 0x146d60u: goto label_146d60;
        case 0x146d64u: goto label_146d64;
        case 0x146d68u: goto label_146d68;
        case 0x146d6cu: goto label_146d6c;
        case 0x146d70u: goto label_146d70;
        case 0x146d74u: goto label_146d74;
        case 0x146d78u: goto label_146d78;
        case 0x146d7cu: goto label_146d7c;
        case 0x146d80u: goto label_146d80;
        case 0x146d84u: goto label_146d84;
        case 0x146d88u: goto label_146d88;
        case 0x146d8cu: goto label_146d8c;
        case 0x146d90u: goto label_146d90;
        case 0x146d94u: goto label_146d94;
        case 0x146d98u: goto label_146d98;
        case 0x146d9cu: goto label_146d9c;
        case 0x146da0u: goto label_146da0;
        case 0x146da4u: goto label_146da4;
        case 0x146da8u: goto label_146da8;
        case 0x146dacu: goto label_146dac;
        case 0x146db0u: goto label_146db0;
        case 0x146db4u: goto label_146db4;
        case 0x146db8u: goto label_146db8;
        case 0x146dbcu: goto label_146dbc;
        case 0x146dc0u: goto label_146dc0;
        case 0x146dc4u: goto label_146dc4;
        case 0x146dc8u: goto label_146dc8;
        case 0x146dccu: goto label_146dcc;
        case 0x146dd0u: goto label_146dd0;
        case 0x146dd4u: goto label_146dd4;
        case 0x146dd8u: goto label_146dd8;
        case 0x146ddcu: goto label_146ddc;
        case 0x146de0u: goto label_146de0;
        case 0x146de4u: goto label_146de4;
        case 0x146de8u: goto label_146de8;
        case 0x146decu: goto label_146dec;
        case 0x146df0u: goto label_146df0;
        case 0x146df4u: goto label_146df4;
        case 0x146df8u: goto label_146df8;
        case 0x146dfcu: goto label_146dfc;
        case 0x146e00u: goto label_146e00;
        case 0x146e04u: goto label_146e04;
        case 0x146e08u: goto label_146e08;
        case 0x146e0cu: goto label_146e0c;
        case 0x146e10u: goto label_146e10;
        case 0x146e14u: goto label_146e14;
        case 0x146e18u: goto label_146e18;
        case 0x146e1cu: goto label_146e1c;
        case 0x146e20u: goto label_146e20;
        case 0x146e24u: goto label_146e24;
        case 0x146e28u: goto label_146e28;
        case 0x146e2cu: goto label_146e2c;
        case 0x146e30u: goto label_146e30;
        case 0x146e34u: goto label_146e34;
        case 0x146e38u: goto label_146e38;
        case 0x146e3cu: goto label_146e3c;
        case 0x146e40u: goto label_146e40;
        case 0x146e44u: goto label_146e44;
        case 0x146e48u: goto label_146e48;
        case 0x146e4cu: goto label_146e4c;
        case 0x146e50u: goto label_146e50;
        case 0x146e54u: goto label_146e54;
        case 0x146e58u: goto label_146e58;
        case 0x146e5cu: goto label_146e5c;
        case 0x146e60u: goto label_146e60;
        case 0x146e64u: goto label_146e64;
        case 0x146e68u: goto label_146e68;
        case 0x146e6cu: goto label_146e6c;
        case 0x146e70u: goto label_146e70;
        case 0x146e74u: goto label_146e74;
        case 0x146e78u: goto label_146e78;
        case 0x146e7cu: goto label_146e7c;
        case 0x146e80u: goto label_146e80;
        case 0x146e84u: goto label_146e84;
        case 0x146e88u: goto label_146e88;
        case 0x146e8cu: goto label_146e8c;
        case 0x146e90u: goto label_146e90;
        case 0x146e94u: goto label_146e94;
        case 0x146e98u: goto label_146e98;
        case 0x146e9cu: goto label_146e9c;
        case 0x146ea0u: goto label_146ea0;
        case 0x146ea4u: goto label_146ea4;
        case 0x146ea8u: goto label_146ea8;
        case 0x146eacu: goto label_146eac;
        case 0x146eb0u: goto label_146eb0;
        case 0x146eb4u: goto label_146eb4;
        case 0x146eb8u: goto label_146eb8;
        case 0x146ebcu: goto label_146ebc;
        case 0x146ec0u: goto label_146ec0;
        case 0x146ec4u: goto label_146ec4;
        case 0x146ec8u: goto label_146ec8;
        case 0x146eccu: goto label_146ecc;
        case 0x146ed0u: goto label_146ed0;
        case 0x146ed4u: goto label_146ed4;
        case 0x146ed8u: goto label_146ed8;
        case 0x146edcu: goto label_146edc;
        case 0x146ee0u: goto label_146ee0;
        case 0x146ee4u: goto label_146ee4;
        case 0x146ee8u: goto label_146ee8;
        case 0x146eecu: goto label_146eec;
        case 0x146ef0u: goto label_146ef0;
        case 0x146ef4u: goto label_146ef4;
        case 0x146ef8u: goto label_146ef8;
        case 0x146efcu: goto label_146efc;
        case 0x146f00u: goto label_146f00;
        case 0x146f04u: goto label_146f04;
        case 0x146f08u: goto label_146f08;
        case 0x146f0cu: goto label_146f0c;
        case 0x146f10u: goto label_146f10;
        case 0x146f14u: goto label_146f14;
        case 0x146f18u: goto label_146f18;
        case 0x146f1cu: goto label_146f1c;
        case 0x146f20u: goto label_146f20;
        case 0x146f24u: goto label_146f24;
        case 0x146f28u: goto label_146f28;
        case 0x146f2cu: goto label_146f2c;
        case 0x146f30u: goto label_146f30;
        case 0x146f34u: goto label_146f34;
        case 0x146f38u: goto label_146f38;
        case 0x146f3cu: goto label_146f3c;
        case 0x146f40u: goto label_146f40;
        case 0x146f44u: goto label_146f44;
        case 0x146f48u: goto label_146f48;
        case 0x146f4cu: goto label_146f4c;
        case 0x146f50u: goto label_146f50;
        case 0x146f54u: goto label_146f54;
        case 0x146f58u: goto label_146f58;
        case 0x146f5cu: goto label_146f5c;
        case 0x146f60u: goto label_146f60;
        case 0x146f64u: goto label_146f64;
        case 0x146f68u: goto label_146f68;
        case 0x146f6cu: goto label_146f6c;
        case 0x146f70u: goto label_146f70;
        case 0x146f74u: goto label_146f74;
        case 0x146f78u: goto label_146f78;
        case 0x146f7cu: goto label_146f7c;
        case 0x146f80u: goto label_146f80;
        case 0x146f84u: goto label_146f84;
        case 0x146f88u: goto label_146f88;
        case 0x146f8cu: goto label_146f8c;
        case 0x146f90u: goto label_146f90;
        case 0x146f94u: goto label_146f94;
        case 0x146f98u: goto label_146f98;
        case 0x146f9cu: goto label_146f9c;
        case 0x146fa0u: goto label_146fa0;
        case 0x146fa4u: goto label_146fa4;
        case 0x146fa8u: goto label_146fa8;
        case 0x146facu: goto label_146fac;
        case 0x146fb0u: goto label_146fb0;
        case 0x146fb4u: goto label_146fb4;
        case 0x146fb8u: goto label_146fb8;
        case 0x146fbcu: goto label_146fbc;
        case 0x146fc0u: goto label_146fc0;
        case 0x146fc4u: goto label_146fc4;
        case 0x146fc8u: goto label_146fc8;
        case 0x146fccu: goto label_146fcc;
        case 0x146fd0u: goto label_146fd0;
        case 0x146fd4u: goto label_146fd4;
        case 0x146fd8u: goto label_146fd8;
        case 0x146fdcu: goto label_146fdc;
        case 0x146fe0u: goto label_146fe0;
        case 0x146fe4u: goto label_146fe4;
        case 0x146fe8u: goto label_146fe8;
        case 0x146fecu: goto label_146fec;
        case 0x146ff0u: goto label_146ff0;
        case 0x146ff4u: goto label_146ff4;
        case 0x146ff8u: goto label_146ff8;
        case 0x146ffcu: goto label_146ffc;
        case 0x147000u: goto label_147000;
        case 0x147004u: goto label_147004;
        case 0x147008u: goto label_147008;
        case 0x14700cu: goto label_14700c;
        case 0x147010u: goto label_147010;
        case 0x147014u: goto label_147014;
        case 0x147018u: goto label_147018;
        case 0x14701cu: goto label_14701c;
        case 0x147020u: goto label_147020;
        case 0x147024u: goto label_147024;
        case 0x147028u: goto label_147028;
        case 0x14702cu: goto label_14702c;
        case 0x147030u: goto label_147030;
        case 0x147034u: goto label_147034;
        case 0x147038u: goto label_147038;
        case 0x14703cu: goto label_14703c;
        case 0x147040u: goto label_147040;
        case 0x147044u: goto label_147044;
        case 0x147048u: goto label_147048;
        case 0x14704cu: goto label_14704c;
        case 0x147050u: goto label_147050;
        case 0x147054u: goto label_147054;
        case 0x147058u: goto label_147058;
        case 0x14705cu: goto label_14705c;
        case 0x147060u: goto label_147060;
        case 0x147064u: goto label_147064;
        case 0x147068u: goto label_147068;
        case 0x14706cu: goto label_14706c;
        case 0x147070u: goto label_147070;
        case 0x147074u: goto label_147074;
        case 0x147078u: goto label_147078;
        case 0x14707cu: goto label_14707c;
        case 0x147080u: goto label_147080;
        case 0x147084u: goto label_147084;
        case 0x147088u: goto label_147088;
        case 0x14708cu: goto label_14708c;
        case 0x147090u: goto label_147090;
        case 0x147094u: goto label_147094;
        case 0x147098u: goto label_147098;
        case 0x14709cu: goto label_14709c;
        case 0x1470a0u: goto label_1470a0;
        case 0x1470a4u: goto label_1470a4;
        case 0x1470a8u: goto label_1470a8;
        case 0x1470acu: goto label_1470ac;
        case 0x1470b0u: goto label_1470b0;
        case 0x1470b4u: goto label_1470b4;
        case 0x1470b8u: goto label_1470b8;
        case 0x1470bcu: goto label_1470bc;
        case 0x1470c0u: goto label_1470c0;
        case 0x1470c4u: goto label_1470c4;
        case 0x1470c8u: goto label_1470c8;
        case 0x1470ccu: goto label_1470cc;
        case 0x1470d0u: goto label_1470d0;
        case 0x1470d4u: goto label_1470d4;
        case 0x1470d8u: goto label_1470d8;
        case 0x1470dcu: goto label_1470dc;
        case 0x1470e0u: goto label_1470e0;
        case 0x1470e4u: goto label_1470e4;
        case 0x1470e8u: goto label_1470e8;
        case 0x1470ecu: goto label_1470ec;
        case 0x1470f0u: goto label_1470f0;
        case 0x1470f4u: goto label_1470f4;
        case 0x1470f8u: goto label_1470f8;
        case 0x1470fcu: goto label_1470fc;
        case 0x147100u: goto label_147100;
        case 0x147104u: goto label_147104;
        case 0x147108u: goto label_147108;
        case 0x14710cu: goto label_14710c;
        case 0x147110u: goto label_147110;
        case 0x147114u: goto label_147114;
        case 0x147118u: goto label_147118;
        case 0x14711cu: goto label_14711c;
        case 0x147120u: goto label_147120;
        case 0x147124u: goto label_147124;
        case 0x147128u: goto label_147128;
        case 0x14712cu: goto label_14712c;
        case 0x147130u: goto label_147130;
        case 0x147134u: goto label_147134;
        case 0x147138u: goto label_147138;
        case 0x14713cu: goto label_14713c;
        case 0x147140u: goto label_147140;
        case 0x147144u: goto label_147144;
        case 0x147148u: goto label_147148;
        case 0x14714cu: goto label_14714c;
        case 0x147150u: goto label_147150;
        case 0x147154u: goto label_147154;
        case 0x147158u: goto label_147158;
        case 0x14715cu: goto label_14715c;
        case 0x147160u: goto label_147160;
        case 0x147164u: goto label_147164;
        case 0x147168u: goto label_147168;
        case 0x14716cu: goto label_14716c;
        case 0x147170u: goto label_147170;
        case 0x147174u: goto label_147174;
        case 0x147178u: goto label_147178;
        case 0x14717cu: goto label_14717c;
        case 0x147180u: goto label_147180;
        case 0x147184u: goto label_147184;
        case 0x147188u: goto label_147188;
        case 0x14718cu: goto label_14718c;
        case 0x147190u: goto label_147190;
        case 0x147194u: goto label_147194;
        case 0x147198u: goto label_147198;
        case 0x14719cu: goto label_14719c;
        case 0x1471a0u: goto label_1471a0;
        case 0x1471a4u: goto label_1471a4;
        case 0x1471a8u: goto label_1471a8;
        case 0x1471acu: goto label_1471ac;
        case 0x1471b0u: goto label_1471b0;
        case 0x1471b4u: goto label_1471b4;
        case 0x1471b8u: goto label_1471b8;
        case 0x1471bcu: goto label_1471bc;
        case 0x1471c0u: goto label_1471c0;
        case 0x1471c4u: goto label_1471c4;
        case 0x1471c8u: goto label_1471c8;
        case 0x1471ccu: goto label_1471cc;
        case 0x1471d0u: goto label_1471d0;
        case 0x1471d4u: goto label_1471d4;
        case 0x1471d8u: goto label_1471d8;
        case 0x1471dcu: goto label_1471dc;
        case 0x1471e0u: goto label_1471e0;
        case 0x1471e4u: goto label_1471e4;
        case 0x1471e8u: goto label_1471e8;
        case 0x1471ecu: goto label_1471ec;
        case 0x1471f0u: goto label_1471f0;
        case 0x1471f4u: goto label_1471f4;
        case 0x1471f8u: goto label_1471f8;
        case 0x1471fcu: goto label_1471fc;
        case 0x147200u: goto label_147200;
        case 0x147204u: goto label_147204;
        case 0x147208u: goto label_147208;
        case 0x14720cu: goto label_14720c;
        case 0x147210u: goto label_147210;
        case 0x147214u: goto label_147214;
        case 0x147218u: goto label_147218;
        case 0x14721cu: goto label_14721c;
        case 0x147220u: goto label_147220;
        case 0x147224u: goto label_147224;
        case 0x147228u: goto label_147228;
        case 0x14722cu: goto label_14722c;
        case 0x147230u: goto label_147230;
        case 0x147234u: goto label_147234;
        case 0x147238u: goto label_147238;
        case 0x14723cu: goto label_14723c;
        case 0x147240u: goto label_147240;
        case 0x147244u: goto label_147244;
        case 0x147248u: goto label_147248;
        case 0x14724cu: goto label_14724c;
        case 0x147250u: goto label_147250;
        case 0x147254u: goto label_147254;
        case 0x147258u: goto label_147258;
        case 0x14725cu: goto label_14725c;
        case 0x147260u: goto label_147260;
        case 0x147264u: goto label_147264;
        case 0x147268u: goto label_147268;
        case 0x14726cu: goto label_14726c;
        case 0x147270u: goto label_147270;
        case 0x147274u: goto label_147274;
        case 0x147278u: goto label_147278;
        case 0x14727cu: goto label_14727c;
        case 0x147280u: goto label_147280;
        case 0x147284u: goto label_147284;
        case 0x147288u: goto label_147288;
        case 0x14728cu: goto label_14728c;
        case 0x147290u: goto label_147290;
        case 0x147294u: goto label_147294;
        case 0x147298u: goto label_147298;
        case 0x14729cu: goto label_14729c;
        case 0x1472a0u: goto label_1472a0;
        case 0x1472a4u: goto label_1472a4;
        case 0x1472a8u: goto label_1472a8;
        case 0x1472acu: goto label_1472ac;
        case 0x1472b0u: goto label_1472b0;
        case 0x1472b4u: goto label_1472b4;
        case 0x1472b8u: goto label_1472b8;
        case 0x1472bcu: goto label_1472bc;
        case 0x1472c0u: goto label_1472c0;
        case 0x1472c4u: goto label_1472c4;
        case 0x1472c8u: goto label_1472c8;
        case 0x1472ccu: goto label_1472cc;
        case 0x1472d0u: goto label_1472d0;
        case 0x1472d4u: goto label_1472d4;
        case 0x1472d8u: goto label_1472d8;
        case 0x1472dcu: goto label_1472dc;
        case 0x1472e0u: goto label_1472e0;
        case 0x1472e4u: goto label_1472e4;
        case 0x1472e8u: goto label_1472e8;
        case 0x1472ecu: goto label_1472ec;
        case 0x1472f0u: goto label_1472f0;
        case 0x1472f4u: goto label_1472f4;
        case 0x1472f8u: goto label_1472f8;
        case 0x1472fcu: goto label_1472fc;
        case 0x147300u: goto label_147300;
        case 0x147304u: goto label_147304;
        case 0x147308u: goto label_147308;
        case 0x14730cu: goto label_14730c;
        case 0x147310u: goto label_147310;
        case 0x147314u: goto label_147314;
        case 0x147318u: goto label_147318;
        case 0x14731cu: goto label_14731c;
        case 0x147320u: goto label_147320;
        case 0x147324u: goto label_147324;
        case 0x147328u: goto label_147328;
        case 0x14732cu: goto label_14732c;
        case 0x147330u: goto label_147330;
        case 0x147334u: goto label_147334;
        case 0x147338u: goto label_147338;
        case 0x14733cu: goto label_14733c;
        case 0x147340u: goto label_147340;
        case 0x147344u: goto label_147344;
        case 0x147348u: goto label_147348;
        case 0x14734cu: goto label_14734c;
        case 0x147350u: goto label_147350;
        case 0x147354u: goto label_147354;
        case 0x147358u: goto label_147358;
        case 0x14735cu: goto label_14735c;
        case 0x147360u: goto label_147360;
        case 0x147364u: goto label_147364;
        case 0x147368u: goto label_147368;
        case 0x14736cu: goto label_14736c;
        case 0x147370u: goto label_147370;
        case 0x147374u: goto label_147374;
        case 0x147378u: goto label_147378;
        case 0x14737cu: goto label_14737c;
        case 0x147380u: goto label_147380;
        case 0x147384u: goto label_147384;
        case 0x147388u: goto label_147388;
        case 0x14738cu: goto label_14738c;
        case 0x147390u: goto label_147390;
        case 0x147394u: goto label_147394;
        case 0x147398u: goto label_147398;
        case 0x14739cu: goto label_14739c;
        case 0x1473a0u: goto label_1473a0;
        case 0x1473a4u: goto label_1473a4;
        case 0x1473a8u: goto label_1473a8;
        case 0x1473acu: goto label_1473ac;
        case 0x1473b0u: goto label_1473b0;
        case 0x1473b4u: goto label_1473b4;
        case 0x1473b8u: goto label_1473b8;
        case 0x1473bcu: goto label_1473bc;
        case 0x1473c0u: goto label_1473c0;
        case 0x1473c4u: goto label_1473c4;
        case 0x1473c8u: goto label_1473c8;
        case 0x1473ccu: goto label_1473cc;
        case 0x1473d0u: goto label_1473d0;
        case 0x1473d4u: goto label_1473d4;
        case 0x1473d8u: goto label_1473d8;
        case 0x1473dcu: goto label_1473dc;
        case 0x1473e0u: goto label_1473e0;
        case 0x1473e4u: goto label_1473e4;
        case 0x1473e8u: goto label_1473e8;
        case 0x1473ecu: goto label_1473ec;
        case 0x1473f0u: goto label_1473f0;
        case 0x1473f4u: goto label_1473f4;
        case 0x1473f8u: goto label_1473f8;
        case 0x1473fcu: goto label_1473fc;
        case 0x147400u: goto label_147400;
        case 0x147404u: goto label_147404;
        case 0x147408u: goto label_147408;
        case 0x14740cu: goto label_14740c;
        case 0x147410u: goto label_147410;
        case 0x147414u: goto label_147414;
        case 0x147418u: goto label_147418;
        case 0x14741cu: goto label_14741c;
        case 0x147420u: goto label_147420;
        case 0x147424u: goto label_147424;
        case 0x147428u: goto label_147428;
        case 0x14742cu: goto label_14742c;
        case 0x147430u: goto label_147430;
        case 0x147434u: goto label_147434;
        case 0x147438u: goto label_147438;
        case 0x14743cu: goto label_14743c;
        case 0x147440u: goto label_147440;
        case 0x147444u: goto label_147444;
        case 0x147448u: goto label_147448;
        case 0x14744cu: goto label_14744c;
        case 0x147450u: goto label_147450;
        case 0x147454u: goto label_147454;
        case 0x147458u: goto label_147458;
        case 0x14745cu: goto label_14745c;
        case 0x147460u: goto label_147460;
        case 0x147464u: goto label_147464;
        case 0x147468u: goto label_147468;
        case 0x14746cu: goto label_14746c;
        case 0x147470u: goto label_147470;
        case 0x147474u: goto label_147474;
        case 0x147478u: goto label_147478;
        case 0x14747cu: goto label_14747c;
        case 0x147480u: goto label_147480;
        case 0x147484u: goto label_147484;
        case 0x147488u: goto label_147488;
        case 0x14748cu: goto label_14748c;
        case 0x147490u: goto label_147490;
        case 0x147494u: goto label_147494;
        case 0x147498u: goto label_147498;
        case 0x14749cu: goto label_14749c;
        case 0x1474a0u: goto label_1474a0;
        case 0x1474a4u: goto label_1474a4;
        case 0x1474a8u: goto label_1474a8;
        case 0x1474acu: goto label_1474ac;
        case 0x1474b0u: goto label_1474b0;
        case 0x1474b4u: goto label_1474b4;
        case 0x1474b8u: goto label_1474b8;
        case 0x1474bcu: goto label_1474bc;
        case 0x1474c0u: goto label_1474c0;
        case 0x1474c4u: goto label_1474c4;
        case 0x1474c8u: goto label_1474c8;
        case 0x1474ccu: goto label_1474cc;
        case 0x1474d0u: goto label_1474d0;
        case 0x1474d4u: goto label_1474d4;
        case 0x1474d8u: goto label_1474d8;
        case 0x1474dcu: goto label_1474dc;
        case 0x1474e0u: goto label_1474e0;
        case 0x1474e4u: goto label_1474e4;
        case 0x1474e8u: goto label_1474e8;
        case 0x1474ecu: goto label_1474ec;
        case 0x1474f0u: goto label_1474f0;
        case 0x1474f4u: goto label_1474f4;
        case 0x1474f8u: goto label_1474f8;
        case 0x1474fcu: goto label_1474fc;
        case 0x147500u: goto label_147500;
        case 0x147504u: goto label_147504;
        case 0x147508u: goto label_147508;
        case 0x14750cu: goto label_14750c;
        case 0x147510u: goto label_147510;
        case 0x147514u: goto label_147514;
        case 0x147518u: goto label_147518;
        case 0x14751cu: goto label_14751c;
        case 0x147520u: goto label_147520;
        case 0x147524u: goto label_147524;
        case 0x147528u: goto label_147528;
        case 0x14752cu: goto label_14752c;
        case 0x147530u: goto label_147530;
        case 0x147534u: goto label_147534;
        case 0x147538u: goto label_147538;
        case 0x14753cu: goto label_14753c;
        case 0x147540u: goto label_147540;
        case 0x147544u: goto label_147544;
        case 0x147548u: goto label_147548;
        case 0x14754cu: goto label_14754c;
        case 0x147550u: goto label_147550;
        case 0x147554u: goto label_147554;
        case 0x147558u: goto label_147558;
        case 0x14755cu: goto label_14755c;
        case 0x147560u: goto label_147560;
        case 0x147564u: goto label_147564;
        case 0x147568u: goto label_147568;
        case 0x14756cu: goto label_14756c;
        case 0x147570u: goto label_147570;
        case 0x147574u: goto label_147574;
        case 0x147578u: goto label_147578;
        case 0x14757cu: goto label_14757c;
        case 0x147580u: goto label_147580;
        case 0x147584u: goto label_147584;
        case 0x147588u: goto label_147588;
        case 0x14758cu: goto label_14758c;
        case 0x147590u: goto label_147590;
        case 0x147594u: goto label_147594;
        case 0x147598u: goto label_147598;
        case 0x14759cu: goto label_14759c;
        case 0x1475a0u: goto label_1475a0;
        case 0x1475a4u: goto label_1475a4;
        case 0x1475a8u: goto label_1475a8;
        case 0x1475acu: goto label_1475ac;
        case 0x1475b0u: goto label_1475b0;
        case 0x1475b4u: goto label_1475b4;
        case 0x1475b8u: goto label_1475b8;
        case 0x1475bcu: goto label_1475bc;
        case 0x1475c0u: goto label_1475c0;
        case 0x1475c4u: goto label_1475c4;
        case 0x1475c8u: goto label_1475c8;
        case 0x1475ccu: goto label_1475cc;
        case 0x1475d0u: goto label_1475d0;
        case 0x1475d4u: goto label_1475d4;
        case 0x1475d8u: goto label_1475d8;
        case 0x1475dcu: goto label_1475dc;
        case 0x1475e0u: goto label_1475e0;
        case 0x1475e4u: goto label_1475e4;
        case 0x1475e8u: goto label_1475e8;
        case 0x1475ecu: goto label_1475ec;
        case 0x1475f0u: goto label_1475f0;
        case 0x1475f4u: goto label_1475f4;
        case 0x1475f8u: goto label_1475f8;
        case 0x1475fcu: goto label_1475fc;
        case 0x147600u: goto label_147600;
        case 0x147604u: goto label_147604;
        case 0x147608u: goto label_147608;
        case 0x14760cu: goto label_14760c;
        case 0x147610u: goto label_147610;
        case 0x147614u: goto label_147614;
        case 0x147618u: goto label_147618;
        case 0x14761cu: goto label_14761c;
        default: break;
    }

    ctx->pc = 0x146520u;

label_146520:
    // 0x146520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x146520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_146524:
    // 0x146524: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x146524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_146528:
    // 0x146528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14652c:
    // 0x14652c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_146530:
    // 0x146530: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x146530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_146534:
    // 0x146534: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x146534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_146538:
    // 0x146538: 0x24910080  addiu       $s1, $a0, 0x80
    ctx->pc = 0x146538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_14653c:
    // 0x14653c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x14653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_146540:
    // 0x146540: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x146540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_146544:
    // 0x146544: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_146548:
    if (ctx->pc == 0x146548u) {
        ctx->pc = 0x14654Cu;
        goto label_14654c;
    }
    ctx->pc = 0x146544u;
    {
        const bool branch_taken_0x146544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146544) {
            ctx->pc = 0x146570u;
            goto label_146570;
        }
    }
    ctx->pc = 0x14654Cu;
label_14654c:
    // 0x14654c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146550:
    // 0x146550: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x146550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_146554:
    // 0x146554: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x146554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_146558:
    // 0x146558: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x146558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_14655c:
    // 0x14655c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_146560:
    if (ctx->pc == 0x146560u) {
        ctx->pc = 0x146564u;
        goto label_146564;
    }
    ctx->pc = 0x14655Cu;
    {
        const bool branch_taken_0x14655c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14655c) {
            ctx->pc = 0x146570u;
            goto label_146570;
        }
    }
    ctx->pc = 0x146564u;
label_146564:
    // 0x146564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146568:
    // 0x146568: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14656c:
    // 0x14656c: 0xac831b68  sw          $v1, 0x1B68($a0)
    ctx->pc = 0x14656cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 3));
label_146570:
    // 0x146570: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146574:
    // 0x146574: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x146574u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_146578:
    // 0x146578: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x146578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14657c:
    // 0x14657c: 0x2ca1001e  sltiu       $at, $a1, 0x1E
    ctx->pc = 0x14657cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_146580:
    // 0x146580: 0x10200421  beqz        $at, . + 4 + (0x421 << 2)
label_146584:
    if (ctx->pc == 0x146584u) {
        ctx->pc = 0x146588u;
        goto label_146588;
    }
    ctx->pc = 0x146580u;
    {
        const bool branch_taken_0x146580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146580) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146588u;
label_146588:
    // 0x146588: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x146588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14658c:
    // 0x14658c: 0x2464e6c0  addiu       $a0, $v1, -0x1940
    ctx->pc = 0x14658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960832));
label_146590:
    // 0x146590: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x146590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_146594:
    // 0x146594: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x146594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_146598:
    // 0x146598: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x146598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14659c:
    // 0x14659c: 0x600008  jr          $v1
label_1465a0:
    if (ctx->pc == 0x1465A0u) {
        ctx->pc = 0x1465A4u;
        goto label_1465a4;
    }
    ctx->pc = 0x14659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14659Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1465A4u;
label_1465a4:
    // 0x1465a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1465a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1465a8:
    // 0x1465a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1465a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1465ac:
    // 0x1465ac: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1465acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1465b0:
    // 0x1465b0: 0x24060a0e  addiu       $a2, $zero, 0xA0E
    ctx->pc = 0x1465b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2574));
label_1465b4:
    // 0x1465b4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x1465b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1465b8:
    // 0x1465b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1465b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1465bc:
    // 0x1465bc: 0xc0965d0  jal         func_259740
label_1465c0:
    if (ctx->pc == 0x1465C0u) {
        ctx->pc = 0x1465C4u;
        goto label_1465c4;
    }
    ctx->pc = 0x1465BCu;
    SET_GPR_U32(ctx, 31, 0x1465C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1465BCu, 0x1465C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465C4u;
label_1465c4:
    // 0x1465c4: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1465c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1465c8:
    // 0x1465c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1465c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1465cc:
    // 0x1465cc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1465ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1465d0:
    // 0x1465d0: 0x25071b40  addiu       $a3, $t0, 0x1B40
    ctx->pc = 0x1465d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 6976));
label_1465d4:
    // 0x1465d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1465d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1465d8:
    // 0x1465d8: 0x24a81b30  addiu       $t0, $a1, 0x1B30
    ctx->pc = 0x1465d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6960));
label_1465dc:
    // 0x1465dc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1465dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1465e0:
    // 0x1465e0: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x1465e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_1465e4:
    // 0x1465e4: 0xc0675b0  jal         func_19D6C0
label_1465e8:
    if (ctx->pc == 0x1465E8u) {
        ctx->pc = 0x1465ECu;
        goto label_1465ec;
    }
    ctx->pc = 0x1465E4u;
    SET_GPR_U32(ctx, 31, 0x1465ECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1465E4u, 0x1465ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465ECu;
label_1465ec:
    // 0x1465ec: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1465ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1465f0:
    // 0x1465f0: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1465f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1465f4:
    // 0x1465f4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1465f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1465f8:
    // 0x1465f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1465f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1465fc:
    // 0x1465fc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1465fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146600:
    // 0x146600: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x146600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_146604:
    // 0x146604: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x146604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
label_146608:
    // 0x146608: 0xc040ed8  jal         func_103B60
label_14660c:
    if (ctx->pc == 0x14660Cu) {
        ctx->pc = 0x146610u;
        goto label_146610;
    }
    ctx->pc = 0x146608u;
    SET_GPR_U32(ctx, 31, 0x146610u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x146610u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x146610u) { return; }
    ctx->pc = 0x146610u;
label_146610:
    // 0x146610: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146610u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146614:
    // 0x146614: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x146614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_146618:
    // 0x146618: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14661c:
    // 0x14661c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x14661cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_146620:
    // 0x146620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146624:
    // 0x146624: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146628:
    // 0x146628: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x146628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_14662c:
    // 0x14662c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14662cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146630:
    // 0x146630: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146634:
    // 0x146634: 0xe4a01b54  swc1        $f0, 0x1B54($a1)
    ctx->pc = 0x146634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6996), bits); }
label_146638:
    // 0x146638: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x146638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14663c:
    // 0x14663c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146640:
    // 0x146640: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x146640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
label_146644:
    // 0x146644: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146648:
    // 0x146648: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x146648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
label_14664c:
    // 0x14664c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x14664cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146650:
    // 0x146650: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x146650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_146654:
    // 0x146654: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x146654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146658:
    // 0x146658: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x146658u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_14665c:
    // 0x14665c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146660:
    // 0x146660: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x146660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_146664:
    // 0x146664: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_146668:
    if (ctx->pc == 0x146668u) {
        ctx->pc = 0x14666Cu;
        goto label_14666c;
    }
    ctx->pc = 0x146664u;
    {
        const bool branch_taken_0x146664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146664) {
            ctx->pc = 0x14669Cu;
            goto label_14669c;
        }
    }
    ctx->pc = 0x14666Cu;
label_14666c:
    // 0x14666c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146670:
    // 0x146670: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x146670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_146674:
    // 0x146674: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x146674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_146678:
    // 0x146678: 0xa4661278  sh          $a2, 0x1278($v1)
    ctx->pc = 0x146678u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 6));
label_14667c:
    // 0x14667c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x14667cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146680:
    // 0x146680: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146684:
    // 0x146684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146688:
    // 0x146688: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x146688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_14668c:
    // 0x14668c: 0x25050120  addiu       $a1, $t0, 0x120
    ctx->pc = 0x14668cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
label_146690:
    // 0x146690: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x146690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_146694:
    // 0x146694: 0xc0675a8  jal         func_19D6A0
label_146698:
    if (ctx->pc == 0x146698u) {
        ctx->pc = 0x14669Cu;
        goto label_14669c;
    }
    ctx->pc = 0x146694u;
    SET_GPR_U32(ctx, 31, 0x14669Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x146694u, 0x14669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14669Cu;
label_14669c:
    // 0x14669c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1466a0:
    // 0x1466a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1466a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1466a4:
    // 0x1466a4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1466a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_1466a8:
    // 0x1466a8: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x1466a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1466ac:
    // 0x1466ac: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x1466acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1466b0:
    // 0x1466b0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1466b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1466b4:
    // 0x1466b4: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x1466b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1466b8:
    // 0x1466b8: 0xc058f50  jal         func_163D40
label_1466bc:
    if (ctx->pc == 0x1466BCu) {
        ctx->pc = 0x1466C0u;
        goto label_1466c0;
    }
    ctx->pc = 0x1466B8u;
    SET_GPR_U32(ctx, 31, 0x1466C0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1466B8u, 0x1466C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466C0u;
label_1466c0:
    // 0x1466c0: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1466c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1466c4:
    // 0x1466c4: 0xe50000d4  swc1        $f0, 0xD4($t0)
    ctx->pc = 0x1466c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 212), bits); }
label_1466c8:
    // 0x1466c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1466c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1466cc:
    // 0x1466cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1466ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1466d0:
    // 0x1466d0: 0xc096b40  jal         func_25AD00
label_1466d4:
    if (ctx->pc == 0x1466D4u) {
        ctx->pc = 0x1466D8u;
        goto label_1466d8;
    }
    ctx->pc = 0x1466D0u;
    SET_GPR_U32(ctx, 31, 0x1466D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1466D0u, 0x1466D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466D8u;
label_1466d8:
    // 0x1466d8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1466d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1466dc:
    // 0x1466dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1466dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1466e0:
    // 0x1466e0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1466e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1466e4:
    // 0x1466e4: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1466e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1466e8:
    // 0x1466e8: 0xc05cd58  jal         func_173560
label_1466ec:
    if (ctx->pc == 0x1466ECu) {
        ctx->pc = 0x1466F0u;
        goto label_1466f0;
    }
    ctx->pc = 0x1466E8u;
    SET_GPR_U32(ctx, 31, 0x1466F0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1466E8u, 0x1466F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466F0u;
label_1466f0:
    // 0x1466f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1466f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1466f4:
    // 0x1466f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1466f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1466f8:
    // 0x1466f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1466f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1466fc:
    // 0x1466fc: 0xc0573d8  jal         func_15CF60
label_146700:
    if (ctx->pc == 0x146700u) {
        ctx->pc = 0x146704u;
        goto label_146704;
    }
    ctx->pc = 0x1466FCu;
    SET_GPR_U32(ctx, 31, 0x146704u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1466FCu, 0x146704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146704u;
label_146704:
    // 0x146704: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146704u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146708:
    // 0x146708: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146708u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14670c:
    // 0x14670c: 0xc097530  jal         func_25D4C0
label_146710:
    if (ctx->pc == 0x146710u) {
        ctx->pc = 0x146714u;
        goto label_146714;
    }
    ctx->pc = 0x14670Cu;
    SET_GPR_U32(ctx, 31, 0x146714u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14670Cu, 0x146714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146714u;
label_146714:
    // 0x146714: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146714u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146718:
    // 0x146718: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14671c:
    // 0x14671c: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x14671cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_146720:
    // 0x146720: 0x106003b9  beqz        $v1, . + 4 + (0x3B9 << 2)
label_146724:
    if (ctx->pc == 0x146724u) {
        ctx->pc = 0x146728u;
        goto label_146728;
    }
    ctx->pc = 0x146720u;
    {
        const bool branch_taken_0x146720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146720) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146728u;
label_146728:
    // 0x146728: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14672c:
    // 0x14672c: 0xc4a01290  lwc1        $f0, 0x1290($a1)
    ctx->pc = 0x14672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_146730:
    // 0x146730: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146734:
    // 0x146734: 0xe4c000d4  swc1        $f0, 0xD4($a2)
    ctx->pc = 0x146734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 212), bits); }
label_146738:
    // 0x146738: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x146738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14673c:
    // 0x14673c: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x14673cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146740:
    // 0x146740: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x146740u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
label_146744:
    // 0x146744: 0x100003b0  b           . + 4 + (0x3B0 << 2)
label_146748:
    if (ctx->pc == 0x146748u) {
        ctx->pc = 0x14674Cu;
        goto label_14674c;
    }
    ctx->pc = 0x146744u;
    {
        const bool branch_taken_0x146744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146744) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14674Cu;
label_14674c:
    // 0x14674c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x14674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146750:
    // 0x146750: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146754:
    // 0x146754: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x146754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_146758:
    // 0x146758: 0x24060a12  addiu       $a2, $zero, 0xA12
    ctx->pc = 0x146758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2578));
label_14675c:
    // 0x14675c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14675cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_146760:
    // 0x146760: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_146764:
    // 0x146764: 0xc0965d0  jal         func_259740
label_146768:
    if (ctx->pc == 0x146768u) {
        ctx->pc = 0x14676Cu;
        goto label_14676c;
    }
    ctx->pc = 0x146764u;
    SET_GPR_U32(ctx, 31, 0x14676Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146764u, 0x14676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14676Cu;
label_14676c:
    // 0x14676c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14676cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146770:
    // 0x146770: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146774:
    // 0x146774: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146778:
    // 0x146778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14677c:
    // 0x14677c: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x14677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
label_146780:
    // 0x146780: 0x24a51b30  addiu       $a1, $a1, 0x1B30
    ctx->pc = 0x146780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6960));
label_146784:
    // 0x146784: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x146784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_146788:
    // 0x146788: 0xc0675b0  jal         func_19D6C0
label_14678c:
    if (ctx->pc == 0x14678Cu) {
        ctx->pc = 0x146790u;
        goto label_146790;
    }
    ctx->pc = 0x146788u;
    SET_GPR_U32(ctx, 31, 0x146790u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x146788u, 0x146790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146790u;
label_146790:
    // 0x146790: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146790u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146794:
    // 0x146794: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x146794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_146798:
    // 0x146798: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x146798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_14679c:
    // 0x14679c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x14679cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1467a0:
    // 0x1467a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1467a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1467a4:
    // 0x1467a4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1467a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1467a8:
    // 0x1467a8: 0x24631b40  addiu       $v1, $v1, 0x1B40
    ctx->pc = 0x1467a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_1467ac:
    // 0x1467ac: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1467acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1467b0:
    // 0x1467b0: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x1467b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
label_1467b4:
    // 0x1467b4: 0xc040ed8  jal         func_103B60
label_1467b8:
    if (ctx->pc == 0x1467B8u) {
        ctx->pc = 0x1467BCu;
        goto label_1467bc;
    }
    ctx->pc = 0x1467B4u;
    SET_GPR_U32(ctx, 31, 0x1467BCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1467BCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1467BCu) { return; }
    ctx->pc = 0x1467BCu;
label_1467bc:
    // 0x1467bc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1467bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1467c0:
    // 0x1467c0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1467c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1467c4:
    // 0x1467c4: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1467c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1467c8:
    // 0x1467c8: 0xa5071278  sh          $a3, 0x1278($t0)
    ctx->pc = 0x1467c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 7));
label_1467cc:
    // 0x1467cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1467ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1467d0:
    // 0x1467d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1467d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1467d4:
    // 0x1467d4: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1467d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_1467d8:
    // 0x1467d8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1467d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1467dc:
    // 0x1467dc: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1467dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1467e0:
    // 0x1467e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1467e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1467e4:
    // 0x1467e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1467e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1467e8:
    // 0x1467e8: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x1467e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_1467ec:
    // 0x1467ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1467ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1467f0:
    // 0x1467f0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1467f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1467f4:
    // 0x1467f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1467f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1467f8:
    // 0x1467f8: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x1467f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
label_1467fc:
    // 0x1467fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1467fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146800:
    // 0x146800: 0xac801b68  sw          $zero, 0x1B68($a0)
    ctx->pc = 0x146800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 0));
label_146804:
    // 0x146804: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146808:
    // 0x146808: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x146808u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14680c:
    // 0x14680c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x14680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146810:
    // 0x146810: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x146810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_146814:
    // 0x146814: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146818:
    // 0x146818: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x146818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_14681c:
    // 0x14681c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_146820:
    if (ctx->pc == 0x146820u) {
        ctx->pc = 0x146824u;
        goto label_146824;
    }
    ctx->pc = 0x14681Cu;
    {
        const bool branch_taken_0x14681c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14681c) {
            ctx->pc = 0x146854u;
            goto label_146854;
        }
    }
    ctx->pc = 0x146824u;
label_146824:
    // 0x146824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146828:
    // 0x146828: 0x84441278  lh          $a0, 0x1278($v0)
    ctx->pc = 0x146828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14682c:
    // 0x14682c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x14682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_146830:
    // 0x146830: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x146830u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_146834:
    // 0x146834: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146838:
    // 0x146838: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14683c:
    // 0x14683c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146840:
    // 0x146840: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x146840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_146844:
    // 0x146844: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x146844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_146848:
    // 0x146848: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x146848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_14684c:
    // 0x14684c: 0xc0675a8  jal         func_19D6A0
label_146850:
    if (ctx->pc == 0x146850u) {
        ctx->pc = 0x146854u;
        goto label_146854;
    }
    ctx->pc = 0x14684Cu;
    SET_GPR_U32(ctx, 31, 0x146854u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x14684Cu, 0x146854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146854u;
label_146854:
    // 0x146854: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146858:
    // 0x146858: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14685c:
    // 0x14685c: 0x3c063e49  lui         $a2, 0x3E49
    ctx->pc = 0x14685cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15945 << 16));
label_146860:
    // 0x146860: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x146860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
label_146864:
    // 0x146864: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x146864u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_146868:
    // 0x146868: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x146868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14686c:
    // 0x14686c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_146870:
    // 0x146870: 0xc058f50  jal         func_163D40
label_146874:
    if (ctx->pc == 0x146874u) {
        ctx->pc = 0x146878u;
        goto label_146878;
    }
    ctx->pc = 0x146870u;
    SET_GPR_U32(ctx, 31, 0x146878u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x146870u, 0x146878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146878u;
label_146878:
    // 0x146878: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14687c:
    // 0x14687c: 0xe4e000d4  swc1        $f0, 0xD4($a3)
    ctx->pc = 0x14687cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
label_146880:
    // 0x146880: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146884:
    // 0x146884: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x146884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_146888:
    // 0x146888: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14688c:
    // 0x14688c: 0xc096b40  jal         func_25AD00
label_146890:
    if (ctx->pc == 0x146890u) {
        ctx->pc = 0x146894u;
        goto label_146894;
    }
    ctx->pc = 0x14688Cu;
    SET_GPR_U32(ctx, 31, 0x146894u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14688Cu, 0x146894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146894u;
label_146894:
    // 0x146894: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146898:
    // 0x146898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14689c:
    // 0x14689c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1468a0:
    // 0x1468a0: 0xc05cd58  jal         func_173560
label_1468a4:
    if (ctx->pc == 0x1468A4u) {
        ctx->pc = 0x1468A8u;
        goto label_1468a8;
    }
    ctx->pc = 0x1468A0u;
    SET_GPR_U32(ctx, 31, 0x1468A8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1468A0u, 0x1468A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468A8u;
label_1468a8:
    // 0x1468a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1468a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1468ac:
    // 0x1468ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1468acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1468b0:
    // 0x1468b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1468b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1468b4:
    // 0x1468b4: 0xc0573d8  jal         func_15CF60
label_1468b8:
    if (ctx->pc == 0x1468B8u) {
        ctx->pc = 0x1468BCu;
        goto label_1468bc;
    }
    ctx->pc = 0x1468B4u;
    SET_GPR_U32(ctx, 31, 0x1468BCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1468B4u, 0x1468BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468BCu;
label_1468bc:
    // 0x1468bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1468bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1468c0:
    // 0x1468c0: 0xc097530  jal         func_25D4C0
label_1468c4:
    if (ctx->pc == 0x1468C4u) {
        ctx->pc = 0x1468C8u;
        goto label_1468c8;
    }
    ctx->pc = 0x1468C0u;
    SET_GPR_U32(ctx, 31, 0x1468C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1468C0u, 0x1468C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468C8u;
label_1468c8:
    // 0x1468c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1468c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1468cc:
    // 0x1468cc: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x1468ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_1468d0:
    // 0x1468d0: 0x10a0034d  beqz        $a1, . + 4 + (0x34D << 2)
label_1468d4:
    if (ctx->pc == 0x1468D4u) {
        ctx->pc = 0x1468D8u;
        goto label_1468d8;
    }
    ctx->pc = 0x1468D0u;
    {
        const bool branch_taken_0x1468d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468d0) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x1468D8u;
label_1468d8:
    // 0x1468d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1468d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1468dc:
    // 0x1468dc: 0xc4601290  lwc1        $f0, 0x1290($v1)
    ctx->pc = 0x1468dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1468e0:
    // 0x1468e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1468e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1468e4:
    // 0x1468e4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1468e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1468e8:
    // 0x1468e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1468e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1468ec:
    // 0x1468ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1468ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1468f0:
    // 0x1468f0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1468f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1468f4:
    // 0x1468f4: 0x10000344  b           . + 4 + (0x344 << 2)
label_1468f8:
    if (ctx->pc == 0x1468F8u) {
        ctx->pc = 0x1468FCu;
        goto label_1468fc;
    }
    ctx->pc = 0x1468F4u;
    {
        const bool branch_taken_0x1468f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468f4) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x1468FCu;
label_1468fc:
    // 0x1468fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1468fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146900:
    // 0x146900: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x146900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_146904:
    // 0x146904: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146908:
    // 0x146908: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x146908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14690c:
    // 0x14690c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14690cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_146910:
    // 0x146910: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x146910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_146914:
    // 0x146914: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146918:
    // 0x146918: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x146918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14691c:
    // 0x14691c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146920:
    // 0x146920: 0xc4601b54  lwc1        $f0, 0x1B54($v1)
    ctx->pc = 0x146920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_146924:
    // 0x146924: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x146924u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_146928:
    // 0x146928: 0xc058fec  jal         func_163FB0
label_14692c:
    if (ctx->pc == 0x14692Cu) {
        ctx->pc = 0x146930u;
        goto label_146930;
    }
    ctx->pc = 0x146928u;
    SET_GPR_U32(ctx, 31, 0x146930u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x146928u, 0x146930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146930u;
label_146930:
    // 0x146930: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146934:
    // 0x146934: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x146934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_146938:
    // 0x146938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14693c:
    // 0x14693c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146940:
    // 0x146940: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x146940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_146944:
    // 0x146944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146948:
    // 0x146948: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14694c:
    // 0x14694c: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x14694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_146950:
    // 0x146950: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146954:
    // 0x146954: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146958:
    // 0x146958: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x146958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_14695c:
    // 0x14695c: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x14695cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_146960:
    // 0x146960: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146964:
    // 0x146964: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_146968:
    // 0x146968: 0xc0965d0  jal         func_259740
label_14696c:
    if (ctx->pc == 0x14696Cu) {
        ctx->pc = 0x146970u;
        goto label_146970;
    }
    ctx->pc = 0x146968u;
    SET_GPR_U32(ctx, 31, 0x146970u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146968u, 0x146970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146970u;
label_146970:
    // 0x146970: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146970u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146974:
    // 0x146974: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146978:
    // 0x146978: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x146978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14697c:
    // 0x14697c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x14697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_146980:
    // 0x146980: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x146980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_146984:
    // 0x146984: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146988:
    // 0x146988: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x146988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_14698c:
    // 0x14698c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14698cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146990:
    // 0x146990: 0xc096b40  jal         func_25AD00
label_146994:
    if (ctx->pc == 0x146994u) {
        ctx->pc = 0x146998u;
        goto label_146998;
    }
    ctx->pc = 0x146990u;
    SET_GPR_U32(ctx, 31, 0x146998u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146990u, 0x146998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146998u;
label_146998:
    // 0x146998: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146998u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14699c:
    // 0x14699c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x14699cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1469a0:
    // 0x1469a0: 0xc05cd10  jal         func_173440
label_1469a4:
    if (ctx->pc == 0x1469A4u) {
        ctx->pc = 0x1469A8u;
        goto label_1469a8;
    }
    ctx->pc = 0x1469A0u;
    SET_GPR_U32(ctx, 31, 0x1469A8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1469A0u, 0x1469A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469A8u;
label_1469a8:
    // 0x1469a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1469a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1469ac:
    // 0x1469ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1469b0:
    // 0x1469b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1469b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1469b4:
    // 0x1469b4: 0xc0573d8  jal         func_15CF60
label_1469b8:
    if (ctx->pc == 0x1469B8u) {
        ctx->pc = 0x1469BCu;
        goto label_1469bc;
    }
    ctx->pc = 0x1469B4u;
    SET_GPR_U32(ctx, 31, 0x1469BCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1469B4u, 0x1469BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469BCu;
label_1469bc:
    // 0x1469bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1469bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1469c0:
    // 0x1469c0: 0xc097530  jal         func_25D4C0
label_1469c4:
    if (ctx->pc == 0x1469C4u) {
        ctx->pc = 0x1469C8u;
        goto label_1469c8;
    }
    ctx->pc = 0x1469C0u;
    SET_GPR_U32(ctx, 31, 0x1469C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1469C0u, 0x1469C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469C8u;
label_1469c8:
    // 0x1469c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1469c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1469cc:
    // 0x1469cc: 0x8c641b68  lw          $a0, 0x1B68($v1)
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
label_1469d0:
    // 0x1469d0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1469d4:
    if (ctx->pc == 0x1469D4u) {
        ctx->pc = 0x1469D8u;
        goto label_1469d8;
    }
    ctx->pc = 0x1469D0u;
    {
        const bool branch_taken_0x1469d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469d0) {
            ctx->pc = 0x146A14u;
            goto label_146a14;
        }
    }
    ctx->pc = 0x1469D8u;
label_1469d8:
    // 0x1469d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1469d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1469dc:
    // 0x1469dc: 0x8c641b64  lw          $a0, 0x1B64($v1)
    ctx->pc = 0x1469dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_1469e0:
    // 0x1469e0: 0x2c810011  sltiu       $at, $a0, 0x11
    ctx->pc = 0x1469e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_1469e4:
    // 0x1469e4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1469e8:
    if (ctx->pc == 0x1469E8u) {
        ctx->pc = 0x1469ECu;
        goto label_1469ec;
    }
    ctx->pc = 0x1469E4u;
    {
        const bool branch_taken_0x1469e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469e4) {
            ctx->pc = 0x146A00u;
            goto label_146a00;
        }
    }
    ctx->pc = 0x1469ECu;
label_1469ec:
    // 0x1469ec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1469ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1469f0:
    // 0x1469f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1469f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1469f4:
    // 0x1469f4: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1469f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
label_1469f8:
    // 0x1469f8: 0x10000303  b           . + 4 + (0x303 << 2)
label_1469fc:
    if (ctx->pc == 0x1469FCu) {
        ctx->pc = 0x146A00u;
        goto label_146a00;
    }
    ctx->pc = 0x1469F8u;
    {
        const bool branch_taken_0x1469f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469f8) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146A00u;
label_146a00:
    // 0x146a00: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x146a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_146a04:
    // 0x146a04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146a08:
    // 0x146a08: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x146a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_146a0c:
    // 0x146a0c: 0x100002fe  b           . + 4 + (0x2FE << 2)
label_146a10:
    if (ctx->pc == 0x146A10u) {
        ctx->pc = 0x146A14u;
        goto label_146a14;
    }
    ctx->pc = 0x146A0Cu;
    {
        const bool branch_taken_0x146a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a0c) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146A14u;
label_146a14:
    // 0x146a14: 0xc057a4c  jal         func_15E930
label_146a18:
    if (ctx->pc == 0x146A18u) {
        ctx->pc = 0x146A1Cu;
        goto label_146a1c;
    }
    ctx->pc = 0x146A14u;
    SET_GPR_U32(ctx, 31, 0x146A1Cu);
    ctx->pc = 0x15E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E930u, 0x146A14u, 0x146A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A1Cu;
label_146a1c:
    // 0x146a1c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x146a1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146a20:
    // 0x146a20: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x146a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_146a24:
    // 0x146a24: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_146a28:
    if (ctx->pc == 0x146A28u) {
        ctx->pc = 0x146A2Cu;
        goto label_146a2c;
    }
    ctx->pc = 0x146A24u;
    {
        const bool branch_taken_0x146a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a24) {
            ctx->pc = 0x146A70u;
            goto label_146a70;
        }
    }
    ctx->pc = 0x146A2Cu;
label_146a2c:
    // 0x146a2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146a30:
    // 0x146a30: 0x8c641b64  lw          $a0, 0x1B64($v1)
    ctx->pc = 0x146a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_146a34:
    // 0x146a34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146a38:
    // 0x146a38: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x146a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_146a3c:
    // 0x146a3c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x146a3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_146a40:
    // 0x146a40: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_146a44:
    if (ctx->pc == 0x146A44u) {
        ctx->pc = 0x146A48u;
        goto label_146a48;
    }
    ctx->pc = 0x146A40u;
    {
        const bool branch_taken_0x146a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146a40) {
            ctx->pc = 0x146A5Cu;
            goto label_146a5c;
        }
    }
    ctx->pc = 0x146A48u;
label_146a48:
    // 0x146a48: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x146a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_146a4c:
    // 0x146a4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146a50:
    // 0x146a50: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x146a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_146a54:
    // 0x146a54: 0x100002ec  b           . + 4 + (0x2EC << 2)
label_146a58:
    if (ctx->pc == 0x146A58u) {
        ctx->pc = 0x146A5Cu;
        goto label_146a5c;
    }
    ctx->pc = 0x146A54u;
    {
        const bool branch_taken_0x146a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a54) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146A5Cu;
label_146a5c:
    // 0x146a5c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x146a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_146a60:
    // 0x146a60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146a64:
    // 0x146a64: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x146a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_146a68:
    // 0x146a68: 0x100002e7  b           . + 4 + (0x2E7 << 2)
label_146a6c:
    if (ctx->pc == 0x146A6Cu) {
        ctx->pc = 0x146A70u;
        goto label_146a70;
    }
    ctx->pc = 0x146A68u;
    {
        const bool branch_taken_0x146a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a68) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146A70u;
label_146a70:
    // 0x146a70: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x146a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_146a74:
    // 0x146a74: 0x106002e4  beqz        $v1, . + 4 + (0x2E4 << 2)
label_146a78:
    if (ctx->pc == 0x146A78u) {
        ctx->pc = 0x146A7Cu;
        goto label_146a7c;
    }
    ctx->pc = 0x146A74u;
    {
        const bool branch_taken_0x146a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a74) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146A7Cu;
label_146a7c:
    // 0x146a7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146a80:
    // 0x146a80: 0x8c831b64  lw          $v1, 0x1B64($a0)
    ctx->pc = 0x146a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
label_146a84:
    // 0x146a84: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x146a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_146a88:
    // 0x146a88: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_146a8c:
    if (ctx->pc == 0x146A8Cu) {
        ctx->pc = 0x146A90u;
        goto label_146a90;
    }
    ctx->pc = 0x146A88u;
    {
        const bool branch_taken_0x146a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a88) {
            ctx->pc = 0x146AA4u;
            goto label_146aa4;
        }
    }
    ctx->pc = 0x146A90u;
label_146a90:
    // 0x146a90: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x146a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_146a94:
    // 0x146a94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146a98:
    // 0x146a98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146a98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_146a9c:
    // 0x146a9c: 0x100002da  b           . + 4 + (0x2DA << 2)
label_146aa0:
    if (ctx->pc == 0x146AA0u) {
        ctx->pc = 0x146AA4u;
        goto label_146aa4;
    }
    ctx->pc = 0x146A9Cu;
    {
        const bool branch_taken_0x146a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a9c) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146AA4u;
label_146aa4:
    // 0x146aa4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x146aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_146aa8:
    // 0x146aa8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146aac:
    // 0x146aac: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x146aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_146ab0:
    // 0x146ab0: 0x100002d5  b           . + 4 + (0x2D5 << 2)
label_146ab4:
    if (ctx->pc == 0x146AB4u) {
        ctx->pc = 0x146AB8u;
        goto label_146ab8;
    }
    ctx->pc = 0x146AB0u;
    {
        const bool branch_taken_0x146ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ab0) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146AB8u;
label_146ab8:
    // 0x146ab8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146abc:
    // 0x146abc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x146abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146ac0:
    // 0x146ac0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x146ac0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_146ac4:
    // 0x146ac4: 0x8ce80368  lw          $t0, 0x368($a3)
    ctx->pc = 0x146ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 872)));
label_146ac8:
    // 0x146ac8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x146ac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_146acc:
    // 0x146acc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x146accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_146ad0:
    // 0x146ad0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146ad4:
    // 0x146ad4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_146ad8:
    // 0x146ad8: 0xc0965d0  jal         func_259740
label_146adc:
    if (ctx->pc == 0x146ADCu) {
        ctx->pc = 0x146AE0u;
        goto label_146ae0;
    }
    ctx->pc = 0x146AD8u;
    SET_GPR_U32(ctx, 31, 0x146AE0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146AD8u, 0x146AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146AE0u;
label_146ae0:
    // 0x146ae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146ae4:
    // 0x146ae4: 0x8c821b64  lw          $v0, 0x1B64($a0)
    ctx->pc = 0x146ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
label_146ae8:
    // 0x146ae8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x146ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_146aec:
    // 0x146aec: 0xac821b64  sw          $v0, 0x1B64($a0)
    ctx->pc = 0x146aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7012), GPR_U32(ctx, 2));
label_146af0:
    // 0x146af0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146af4:
    // 0x146af4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x146af4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_146af8:
    // 0x146af8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x146af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146afc:
    // 0x146afc: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x146afcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_146b00:
    // 0x146b00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146b04:
    // 0x146b04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146b04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146b08:
    // 0x146b08: 0xc096b40  jal         func_25AD00
label_146b0c:
    if (ctx->pc == 0x146B0Cu) {
        ctx->pc = 0x146B10u;
        goto label_146b10;
    }
    ctx->pc = 0x146B08u;
    SET_GPR_U32(ctx, 31, 0x146B10u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146B08u, 0x146B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B10u;
label_146b10:
    // 0x146b10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146b14:
    // 0x146b14: 0xc05cd10  jal         func_173440
label_146b18:
    if (ctx->pc == 0x146B18u) {
        ctx->pc = 0x146B1Cu;
        goto label_146b1c;
    }
    ctx->pc = 0x146B14u;
    SET_GPR_U32(ctx, 31, 0x146B1Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146B14u, 0x146B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B1Cu;
label_146b1c:
    // 0x146b1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146b1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146b20:
    // 0x146b20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_146b24:
    // 0x146b24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146b28:
    // 0x146b28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_146b2c:
    // 0x146b2c: 0xc0573d8  jal         func_15CF60
label_146b30:
    if (ctx->pc == 0x146B30u) {
        ctx->pc = 0x146B34u;
        goto label_146b34;
    }
    ctx->pc = 0x146B2Cu;
    SET_GPR_U32(ctx, 31, 0x146B34u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146B2Cu, 0x146B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B34u;
label_146b34:
    // 0x146b34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146b34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146b38:
    // 0x146b38: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146b38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146b3c:
    // 0x146b3c: 0xc097530  jal         func_25D4C0
label_146b40:
    if (ctx->pc == 0x146B40u) {
        ctx->pc = 0x146B44u;
        goto label_146b44;
    }
    ctx->pc = 0x146B3Cu;
    SET_GPR_U32(ctx, 31, 0x146B44u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146B3Cu, 0x146B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B44u;
label_146b44:
    // 0x146b44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146b48:
    // 0x146b48: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x146b48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_146b4c:
    // 0x146b4c: 0x10a002ae  beqz        $a1, . + 4 + (0x2AE << 2)
label_146b50:
    if (ctx->pc == 0x146B50u) {
        ctx->pc = 0x146B54u;
        goto label_146b54;
    }
    ctx->pc = 0x146B4Cu;
    {
        const bool branch_taken_0x146b4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b4c) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146B54u;
label_146b54:
    // 0x146b54: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146b58:
    // 0x146b58: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x146b58u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_146b5c:
    // 0x146b5c: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x146b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_146b60:
    // 0x146b60: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x146b60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
label_146b64:
    // 0x146b64: 0x100002a8  b           . + 4 + (0x2A8 << 2)
label_146b68:
    if (ctx->pc == 0x146B68u) {
        ctx->pc = 0x146B6Cu;
        goto label_146b6c;
    }
    ctx->pc = 0x146B64u;
    {
        const bool branch_taken_0x146b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b64) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146B6Cu;
label_146b6c:
    // 0x146b6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146b70:
    // 0x146b70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146b74:
    // 0x146b74: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x146b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_146b78:
    // 0x146b78: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x146b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_146b7c:
    // 0x146b7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146b80:
    // 0x146b80: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_146b84:
    // 0x146b84: 0xc0965d0  jal         func_259740
label_146b88:
    if (ctx->pc == 0x146B88u) {
        ctx->pc = 0x146B8Cu;
        goto label_146b8c;
    }
    ctx->pc = 0x146B84u;
    SET_GPR_U32(ctx, 31, 0x146B8Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146B84u, 0x146B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B8Cu;
label_146b8c:
    // 0x146b8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146b90:
    // 0x146b90: 0x8c911b64  lw          $s1, 0x1B64($a0)
    ctx->pc = 0x146b90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
label_146b94:
    // 0x146b94: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x146b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_146b98:
    // 0x146b98: 0xac831b64  sw          $v1, 0x1B64($a0)
    ctx->pc = 0x146b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7012), GPR_U32(ctx, 3));
label_146b9c:
    // 0x146b9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146ba0:
    // 0x146ba0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x146ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_146ba4:
    // 0x146ba4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_146ba8:
    // 0x146ba8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_146bac:
    // 0x146bac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146bb0:
    // 0x146bb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146bb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146bb4:
    // 0x146bb4: 0xc096b40  jal         func_25AD00
label_146bb8:
    if (ctx->pc == 0x146BB8u) {
        ctx->pc = 0x146BBCu;
        goto label_146bbc;
    }
    ctx->pc = 0x146BB4u;
    SET_GPR_U32(ctx, 31, 0x146BBCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146BB4u, 0x146BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BBCu;
label_146bbc:
    // 0x146bbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146bbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146bc0:
    // 0x146bc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146bc4:
    // 0x146bc4: 0xc05cd10  jal         func_173440
label_146bc8:
    if (ctx->pc == 0x146BC8u) {
        ctx->pc = 0x146BCCu;
        goto label_146bcc;
    }
    ctx->pc = 0x146BC4u;
    SET_GPR_U32(ctx, 31, 0x146BCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146BC4u, 0x146BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BCCu;
label_146bcc:
    // 0x146bcc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146bccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146bd0:
    // 0x146bd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_146bd4:
    // 0x146bd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146bd8:
    // 0x146bd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_146bdc:
    // 0x146bdc: 0xc0573d8  jal         func_15CF60
label_146be0:
    if (ctx->pc == 0x146BE0u) {
        ctx->pc = 0x146BE4u;
        goto label_146be4;
    }
    ctx->pc = 0x146BDCu;
    SET_GPR_U32(ctx, 31, 0x146BE4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146BDCu, 0x146BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BE4u;
label_146be4:
    // 0x146be4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146be4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146be8:
    // 0x146be8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146be8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146bec:
    // 0x146bec: 0xc097530  jal         func_25D4C0
label_146bf0:
    if (ctx->pc == 0x146BF0u) {
        ctx->pc = 0x146BF4u;
        goto label_146bf4;
    }
    ctx->pc = 0x146BECu;
    SET_GPR_U32(ctx, 31, 0x146BF4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146BECu, 0x146BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BF4u;
label_146bf4:
    // 0x146bf4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146bf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146bf8:
    // 0x146bf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146bfc:
    // 0x146bfc: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x146bfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_146c00:
    // 0x146c00: 0x10a00281  beqz        $a1, . + 4 + (0x281 << 2)
label_146c04:
    if (ctx->pc == 0x146C04u) {
        ctx->pc = 0x146C08u;
        goto label_146c08;
    }
    ctx->pc = 0x146C00u;
    {
        const bool branch_taken_0x146c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c00) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146C08u;
label_146c08:
    // 0x146c08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x146c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_146c0c:
    // 0x146c0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146c10:
    // 0x146c10: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146c10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_146c14:
    // 0x146c14: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x146c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_146c18:
    // 0x146c18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146c1c:
    // 0x146c1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146c20:
    // 0x146c20: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x146c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_146c24:
    // 0x146c24: 0x10000278  b           . + 4 + (0x278 << 2)
label_146c28:
    if (ctx->pc == 0x146C28u) {
        ctx->pc = 0x146C2Cu;
        goto label_146c2c;
    }
    ctx->pc = 0x146C24u;
    {
        const bool branch_taken_0x146c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c24) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146C2Cu;
label_146c2c:
    // 0x146c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146c30:
    // 0x146c30: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146c34:
    // 0x146c34: 0xe4c01b50  swc1        $f0, 0x1B50($a2)
    ctx->pc = 0x146c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 6992), bits); }
label_146c38:
    // 0x146c38: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x146c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146c3c:
    // 0x146c3c: 0xc4e10124  lwc1        $f1, 0x124($a3)
    ctx->pc = 0x146c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_146c40:
    // 0x146c40: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x146c40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
label_146c44:
    // 0x146c44: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x146c44u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146c48:
    // 0x146c48: 0x0  nop
    ctx->pc = 0x146c48u;
    // NOP
label_146c4c:
    // 0x146c4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_146c50:
    // 0x146c50: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x146c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
label_146c54:
    // 0x146c54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146c58:
    // 0x146c58: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146c58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146c5c:
    // 0x146c5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146c5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146c60:
    // 0x146c60: 0x8d050368  lw          $a1, 0x368($t0)
    ctx->pc = 0x146c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
label_146c64:
    // 0x146c64: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x146c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_146c68:
    // 0x146c68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146c6c:
    // 0x146c6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_146c70:
    // 0x146c70: 0xc0965d0  jal         func_259740
label_146c74:
    if (ctx->pc == 0x146C74u) {
        ctx->pc = 0x146C78u;
        goto label_146c78;
    }
    ctx->pc = 0x146C70u;
    SET_GPR_U32(ctx, 31, 0x146C78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146C70u, 0x146C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C78u;
label_146c78:
    // 0x146c78: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x146c78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146c7c:
    // 0x146c7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146c80:
    // 0x146c80: 0x8c441b64  lw          $a0, 0x1B64($v0)
    ctx->pc = 0x146c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_146c84:
    // 0x146c84: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x146c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_146c88:
    // 0x146c88: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x146c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
label_146c8c:
    // 0x146c8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146c90:
    // 0x146c90: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x146c90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_146c94:
    // 0x146c94: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x146c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_146c98:
    // 0x146c98: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x146c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_146c9c:
    // 0x146c9c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146ca0:
    // 0x146ca0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x146ca0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_146ca4:
    // 0x146ca4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146ca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146ca8:
    // 0x146ca8: 0xc096b40  jal         func_25AD00
label_146cac:
    if (ctx->pc == 0x146CACu) {
        ctx->pc = 0x146CB0u;
        goto label_146cb0;
    }
    ctx->pc = 0x146CA8u;
    SET_GPR_U32(ctx, 31, 0x146CB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146CA8u, 0x146CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146CB0u;
label_146cb0:
    // 0x146cb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146cb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146cb4:
    // 0x146cb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146cb8:
    // 0x146cb8: 0xc05cd10  jal         func_173440
label_146cbc:
    if (ctx->pc == 0x146CBCu) {
        ctx->pc = 0x146CC0u;
        goto label_146cc0;
    }
    ctx->pc = 0x146CB8u;
    SET_GPR_U32(ctx, 31, 0x146CC0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146CB8u, 0x146CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146CC0u;
label_146cc0:
    // 0x146cc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146cc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146cc4:
    // 0x146cc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_146cc8:
    // 0x146cc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146ccc:
    // 0x146ccc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_146cd0:
    // 0x146cd0: 0xc0573d8  jal         func_15CF60
label_146cd4:
    if (ctx->pc == 0x146CD4u) {
        ctx->pc = 0x146CD8u;
        goto label_146cd8;
    }
    ctx->pc = 0x146CD0u;
    SET_GPR_U32(ctx, 31, 0x146CD8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146CD0u, 0x146CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146CD8u;
label_146cd8:
    // 0x146cd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146cdc:
    // 0x146cdc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146cdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146ce0:
    // 0x146ce0: 0xc097530  jal         func_25D4C0
label_146ce4:
    if (ctx->pc == 0x146CE4u) {
        ctx->pc = 0x146CE8u;
        goto label_146ce8;
    }
    ctx->pc = 0x146CE0u;
    SET_GPR_U32(ctx, 31, 0x146CE8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146CE0u, 0x146CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146CE8u;
label_146ce8:
    // 0x146ce8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146ce8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146cec:
    // 0x146cec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146cf0:
    // 0x146cf0: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x146cf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_146cf4:
    // 0x146cf4: 0x10a00244  beqz        $a1, . + 4 + (0x244 << 2)
label_146cf8:
    if (ctx->pc == 0x146CF8u) {
        ctx->pc = 0x146CFCu;
        goto label_146cfc;
    }
    ctx->pc = 0x146CF4u;
    {
        const bool branch_taken_0x146cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x146cf4) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146CFCu;
label_146cfc:
    // 0x146cfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146d00:
    // 0x146d00: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x146d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_146d04:
    // 0x146d04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_146d08:
    // 0x146d08: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146d08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_146d0c:
    // 0x146d0c: 0x1000023e  b           . + 4 + (0x23E << 2)
label_146d10:
    if (ctx->pc == 0x146D10u) {
        ctx->pc = 0x146D14u;
        goto label_146d14;
    }
    ctx->pc = 0x146D0Cu;
    {
        const bool branch_taken_0x146d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146d0c) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146D14u;
label_146d14:
    // 0x146d14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146d18:
    // 0x146d18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146d1c:
    // 0x146d1c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x146d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_146d20:
    // 0x146d20: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x146d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_146d24:
    // 0x146d24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146d28:
    // 0x146d28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_146d2c:
    // 0x146d2c: 0xc0965d0  jal         func_259740
label_146d30:
    if (ctx->pc == 0x146D30u) {
        ctx->pc = 0x146D34u;
        goto label_146d34;
    }
    ctx->pc = 0x146D2Cu;
    SET_GPR_U32(ctx, 31, 0x146D34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146D2Cu, 0x146D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D34u;
label_146d34:
    // 0x146d34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146d38:
    // 0x146d38: 0x8c851b64  lw          $a1, 0x1B64($a0)
    ctx->pc = 0x146d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
label_146d3c:
    // 0x146d3c: 0x24a6fffe  addiu       $a2, $a1, -0x2
    ctx->pc = 0x146d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_146d40:
    // 0x146d40: 0xac861b64  sw          $a2, 0x1B64($a0)
    ctx->pc = 0x146d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7012), GPR_U32(ctx, 6));
label_146d44:
    // 0x146d44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146d48:
    // 0x146d48: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x146d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_146d4c:
    // 0x146d4c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x146d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_146d50:
    // 0x146d50: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x146d50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_146d54:
    // 0x146d54: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146d58:
    // 0x146d58: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x146d58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_146d5c:
    // 0x146d5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146d5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146d60:
    // 0x146d60: 0xc096b40  jal         func_25AD00
label_146d64:
    if (ctx->pc == 0x146D64u) {
        ctx->pc = 0x146D68u;
        goto label_146d68;
    }
    ctx->pc = 0x146D60u;
    SET_GPR_U32(ctx, 31, 0x146D68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146D60u, 0x146D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D68u;
label_146d68:
    // 0x146d68: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146d68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146d6c:
    // 0x146d6c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x146d6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_146d70:
    // 0x146d70: 0xc05cd10  jal         func_173440
label_146d74:
    if (ctx->pc == 0x146D74u) {
        ctx->pc = 0x146D78u;
        goto label_146d78;
    }
    ctx->pc = 0x146D70u;
    SET_GPR_U32(ctx, 31, 0x146D78u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146D70u, 0x146D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D78u;
label_146d78:
    // 0x146d78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146d78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146d7c:
    // 0x146d7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_146d80:
    // 0x146d80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146d84:
    // 0x146d84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146d84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146d88:
    // 0x146d88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_146d8c:
    // 0x146d8c: 0xc0573d8  jal         func_15CF60
label_146d90:
    if (ctx->pc == 0x146D90u) {
        ctx->pc = 0x146D94u;
        goto label_146d94;
    }
    ctx->pc = 0x146D8Cu;
    SET_GPR_U32(ctx, 31, 0x146D94u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146D8Cu, 0x146D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D94u;
label_146d94:
    // 0x146d94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146d94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146d98:
    // 0x146d98: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146d98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146d9c:
    // 0x146d9c: 0xc097530  jal         func_25D4C0
label_146da0:
    if (ctx->pc == 0x146DA0u) {
        ctx->pc = 0x146DA4u;
        goto label_146da4;
    }
    ctx->pc = 0x146D9Cu;
    SET_GPR_U32(ctx, 31, 0x146DA4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146D9Cu, 0x146DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DA4u;
label_146da4:
    // 0x146da4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146da8:
    // 0x146da8: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x146da8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_146dac:
    // 0x146dac: 0x10a00216  beqz        $a1, . + 4 + (0x216 << 2)
label_146db0:
    if (ctx->pc == 0x146DB0u) {
        ctx->pc = 0x146DB4u;
        goto label_146db4;
    }
    ctx->pc = 0x146DACu;
    {
        const bool branch_taken_0x146dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x146dac) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146DB4u;
label_146db4:
    // 0x146db4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_146db8:
    // 0x146db8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146dbc:
    // 0x146dbc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_146dc0:
    // 0x146dc0: 0x10000211  b           . + 4 + (0x211 << 2)
label_146dc4:
    if (ctx->pc == 0x146DC4u) {
        ctx->pc = 0x146DC8u;
        goto label_146dc8;
    }
    ctx->pc = 0x146DC0u;
    {
        const bool branch_taken_0x146dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146dc0) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146DC8u;
label_146dc8:
    // 0x146dc8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146dcc:
    // 0x146dcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146dd0:
    // 0x146dd0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x146dd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_146dd4:
    // 0x146dd4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x146dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_146dd8:
    // 0x146dd8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x146dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_146ddc:
    // 0x146ddc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146de0:
    // 0x146de0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_146de4:
    // 0x146de4: 0xc0965d0  jal         func_259740
label_146de8:
    if (ctx->pc == 0x146DE8u) {
        ctx->pc = 0x146DECu;
        goto label_146dec;
    }
    ctx->pc = 0x146DE4u;
    SET_GPR_U32(ctx, 31, 0x146DECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146DE4u, 0x146DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DECu;
label_146dec:
    // 0x146dec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146decu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146df0:
    // 0x146df0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146df4:
    // 0x146df4: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x146df4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_146df8:
    // 0x146df8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x146df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_146dfc:
    // 0x146dfc: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x146dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
label_146e00:
    // 0x146e00: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x146e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146e04:
    // 0x146e04: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x146e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_146e08:
    // 0x146e08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146e08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146e0c:
    // 0x146e0c: 0xc096b40  jal         func_25AD00
label_146e10:
    if (ctx->pc == 0x146E10u) {
        ctx->pc = 0x146E14u;
        goto label_146e14;
    }
    ctx->pc = 0x146E0Cu;
    SET_GPR_U32(ctx, 31, 0x146E14u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146E0Cu, 0x146E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E14u;
label_146e14:
    // 0x146e14: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x146e14u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146e18:
    // 0x146e18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146e1c:
    // 0x146e1c: 0xc05cd10  jal         func_173440
label_146e20:
    if (ctx->pc == 0x146E20u) {
        ctx->pc = 0x146E24u;
        goto label_146e24;
    }
    ctx->pc = 0x146E1Cu;
    SET_GPR_U32(ctx, 31, 0x146E24u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146E1Cu, 0x146E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E24u;
label_146e24:
    // 0x146e24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146e28:
    // 0x146e28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_146e2c:
    // 0x146e2c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146e30:
    // 0x146e30: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x146e30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_146e34:
    // 0x146e34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x146e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_146e38:
    // 0x146e38: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x146e38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_146e3c:
    // 0x146e3c: 0xc0573d8  jal         func_15CF60
label_146e40:
    if (ctx->pc == 0x146E40u) {
        ctx->pc = 0x146E44u;
        goto label_146e44;
    }
    ctx->pc = 0x146E3Cu;
    SET_GPR_U32(ctx, 31, 0x146E44u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146E3Cu, 0x146E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E44u;
label_146e44:
    // 0x146e44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146e44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146e48:
    // 0x146e48: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146e48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146e4c:
    // 0x146e4c: 0xc097530  jal         func_25D4C0
label_146e50:
    if (ctx->pc == 0x146E50u) {
        ctx->pc = 0x146E54u;
        goto label_146e54;
    }
    ctx->pc = 0x146E4Cu;
    SET_GPR_U32(ctx, 31, 0x146E54u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146E4Cu, 0x146E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E54u;
label_146e54:
    // 0x146e54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x146e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146e58:
    // 0x146e58: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146e5c:
    // 0x146e5c: 0x90c309e7  lbu         $v1, 0x9E7($a2)
    ctx->pc = 0x146e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
label_146e60:
    // 0x146e60: 0x106001e9  beqz        $v1, . + 4 + (0x1E9 << 2)
label_146e64:
    if (ctx->pc == 0x146E64u) {
        ctx->pc = 0x146E68u;
        goto label_146e68;
    }
    ctx->pc = 0x146E60u;
    {
        const bool branch_taken_0x146e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e60) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146E68u;
label_146e68:
    // 0x146e68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146e6c:
    // 0x146e6c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x146e6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_146e70:
    // 0x146e70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_146e74:
    // 0x146e74: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_146e78:
    // 0x146e78: 0x100001e3  b           . + 4 + (0x1E3 << 2)
label_146e7c:
    if (ctx->pc == 0x146E7Cu) {
        ctx->pc = 0x146E80u;
        goto label_146e80;
    }
    ctx->pc = 0x146E78u;
    {
        const bool branch_taken_0x146e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e78) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146E80u;
label_146e80:
    // 0x146e80: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146e84:
    // 0x146e84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146e88:
    // 0x146e88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x146e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_146e8c:
    // 0x146e8c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x146e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_146e90:
    // 0x146e90: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x146e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_146e94:
    // 0x146e94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146e98:
    // 0x146e98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_146e9c:
    // 0x146e9c: 0xc0965d0  jal         func_259740
label_146ea0:
    if (ctx->pc == 0x146EA0u) {
        ctx->pc = 0x146EA4u;
        goto label_146ea4;
    }
    ctx->pc = 0x146E9Cu;
    SET_GPR_U32(ctx, 31, 0x146EA4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146E9Cu, 0x146EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EA4u;
label_146ea4:
    // 0x146ea4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x146ea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146ea8:
    // 0x146ea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146eac:
    // 0x146eac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146eb0:
    // 0x146eb0: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x146eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_146eb4:
    // 0x146eb4: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x146eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_146eb8:
    // 0x146eb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146ebc:
    // 0x146ebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146ec0:
    // 0x146ec0: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x146ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_146ec4:
    // 0x146ec4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146ec8:
    // 0x146ec8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x146ec8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_146ecc:
    // 0x146ecc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x146eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146ed0:
    // 0x146ed0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x146ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_146ed4:
    // 0x146ed4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146ed8:
    // 0x146ed8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146ed8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146edc:
    // 0x146edc: 0xc096b40  jal         func_25AD00
label_146ee0:
    if (ctx->pc == 0x146EE0u) {
        ctx->pc = 0x146EE4u;
        goto label_146ee4;
    }
    ctx->pc = 0x146EDCu;
    SET_GPR_U32(ctx, 31, 0x146EE4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146EDCu, 0x146EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EE4u;
label_146ee4:
    // 0x146ee4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146ee4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146ee8:
    // 0x146ee8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146eec:
    // 0x146eec: 0xc05cd10  jal         func_173440
label_146ef0:
    if (ctx->pc == 0x146EF0u) {
        ctx->pc = 0x146EF4u;
        goto label_146ef4;
    }
    ctx->pc = 0x146EECu;
    SET_GPR_U32(ctx, 31, 0x146EF4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146EECu, 0x146EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EF4u;
label_146ef4:
    // 0x146ef4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_146ef8:
    // 0x146ef8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146efc:
    // 0x146efc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_146f00:
    // 0x146f00: 0xc0573d8  jal         func_15CF60
label_146f04:
    if (ctx->pc == 0x146F04u) {
        ctx->pc = 0x146F08u;
        goto label_146f08;
    }
    ctx->pc = 0x146F00u;
    SET_GPR_U32(ctx, 31, 0x146F08u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146F00u, 0x146F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F08u;
label_146f08:
    // 0x146f08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146f0c:
    // 0x146f0c: 0xc05cf54  jal         func_173D50
label_146f10:
    if (ctx->pc == 0x146F10u) {
        ctx->pc = 0x146F14u;
        goto label_146f14;
    }
    ctx->pc = 0x146F0Cu;
    SET_GPR_U32(ctx, 31, 0x146F14u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x146F0Cu, 0x146F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F14u;
label_146f14:
    // 0x146f14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146f14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146f18:
    // 0x146f18: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_146f1c:
    if (ctx->pc == 0x146F1Cu) {
        ctx->pc = 0x146F20u;
        goto label_146f20;
    }
    ctx->pc = 0x146F18u;
    {
        const bool branch_taken_0x146f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f18) {
            ctx->pc = 0x146F54u;
            goto label_146f54;
        }
    }
    ctx->pc = 0x146F20u;
label_146f20:
    // 0x146f20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146f24:
    // 0x146f24: 0x8c831b64  lw          $v1, 0x1B64($a0)
    ctx->pc = 0x146f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
label_146f28:
    // 0x146f28: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x146f28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_146f2c:
    // 0x146f2c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_146f30:
    if (ctx->pc == 0x146F30u) {
        ctx->pc = 0x146F34u;
        goto label_146f34;
    }
    ctx->pc = 0x146F2Cu;
    {
        const bool branch_taken_0x146f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f2c) {
            ctx->pc = 0x146F48u;
            goto label_146f48;
        }
    }
    ctx->pc = 0x146F34u;
label_146f34:
    // 0x146f34: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x146f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_146f38:
    // 0x146f38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146f3c:
    // 0x146f3c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x146f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_146f40:
    // 0x146f40: 0x10000004  b           . + 4 + (0x4 << 2)
label_146f44:
    if (ctx->pc == 0x146F44u) {
        ctx->pc = 0x146F48u;
        goto label_146f48;
    }
    ctx->pc = 0x146F40u;
    {
        const bool branch_taken_0x146f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f40) {
            ctx->pc = 0x146F54u;
            goto label_146f54;
        }
    }
    ctx->pc = 0x146F48u;
label_146f48:
    // 0x146f48: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x146f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_146f4c:
    // 0x146f4c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146f50:
    // 0x146f50: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x146f50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
label_146f54:
    // 0x146f54: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146f54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146f58:
    // 0x146f58: 0xc097530  jal         func_25D4C0
label_146f5c:
    if (ctx->pc == 0x146F5Cu) {
        ctx->pc = 0x146F60u;
        goto label_146f60;
    }
    ctx->pc = 0x146F58u;
    SET_GPR_U32(ctx, 31, 0x146F60u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146F58u, 0x146F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F60u;
label_146f60:
    // 0x146f60: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_146f64:
    if (ctx->pc == 0x146F64u) {
        ctx->pc = 0x146F68u;
        goto label_146f68;
    }
    ctx->pc = 0x146F60u;
    {
        const bool branch_taken_0x146f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f60) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x146F68u;
label_146f68:
    // 0x146f68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146f6c:
    // 0x146f6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146f70:
    // 0x146f70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x146f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_146f74:
    // 0x146f74: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x146f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_146f78:
    // 0x146f78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146f7c:
    // 0x146f7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_146f80:
    // 0x146f80: 0xc0965d0  jal         func_259740
label_146f84:
    if (ctx->pc == 0x146F84u) {
        ctx->pc = 0x146F88u;
        goto label_146f88;
    }
    ctx->pc = 0x146F80u;
    SET_GPR_U32(ctx, 31, 0x146F88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146F80u, 0x146F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F88u;
label_146f88:
    // 0x146f88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146f8c:
    // 0x146f8c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x146f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_146f90:
    // 0x146f90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_146f94:
    // 0x146f94: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x146f94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_146f98:
    // 0x146f98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146f9c:
    // 0x146f9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146fa0:
    // 0x146fa0: 0xc096b40  jal         func_25AD00
label_146fa4:
    if (ctx->pc == 0x146FA4u) {
        ctx->pc = 0x146FA8u;
        goto label_146fa8;
    }
    ctx->pc = 0x146FA0u;
    SET_GPR_U32(ctx, 31, 0x146FA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146FA0u, 0x146FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FA8u;
label_146fa8:
    // 0x146fa8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x146fa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146fac:
    // 0x146fac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146fb0:
    // 0x146fb0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146fb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146fb4:
    // 0x146fb4: 0xc05cd10  jal         func_173440
label_146fb8:
    if (ctx->pc == 0x146FB8u) {
        ctx->pc = 0x146FBCu;
        goto label_146fbc;
    }
    ctx->pc = 0x146FB4u;
    SET_GPR_U32(ctx, 31, 0x146FBCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146FB4u, 0x146FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FBCu;
label_146fbc:
    // 0x146fbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_146fc0:
    // 0x146fc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146fc4:
    // 0x146fc4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_146fc8:
    // 0x146fc8: 0xc0573d8  jal         func_15CF60
label_146fcc:
    if (ctx->pc == 0x146FCCu) {
        ctx->pc = 0x146FD0u;
        goto label_146fd0;
    }
    ctx->pc = 0x146FC8u;
    SET_GPR_U32(ctx, 31, 0x146FD0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146FC8u, 0x146FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FD0u;
label_146fd0:
    // 0x146fd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146fd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146fd4:
    // 0x146fd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146fd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_146fd8:
    // 0x146fd8: 0xc097530  jal         func_25D4C0
label_146fdc:
    if (ctx->pc == 0x146FDCu) {
        ctx->pc = 0x146FE0u;
        goto label_146fe0;
    }
    ctx->pc = 0x146FD8u;
    SET_GPR_U32(ctx, 31, 0x146FE0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146FD8u, 0x146FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FE0u;
label_146fe0:
    // 0x146fe0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146fe0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_146fe4:
    // 0x146fe4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146fe8:
    // 0x146fe8: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x146fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
label_146fec:
    // 0x146fec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x146fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_146ff0:
    // 0x146ff0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x146ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_146ff4:
    // 0x146ff4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_146ff8:
    if (ctx->pc == 0x146FF8u) {
        ctx->pc = 0x146FFCu;
        goto label_146ffc;
    }
    ctx->pc = 0x146FF4u;
    {
        const bool branch_taken_0x146ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ff4) {
            ctx->pc = 0x14701Cu;
            goto label_14701c;
        }
    }
    ctx->pc = 0x146FFCu;
label_146ffc:
    // 0x146ffc: 0xc0585dc  jal         func_161770
label_147000:
    if (ctx->pc == 0x147000u) {
        ctx->pc = 0x147004u;
        goto label_147004;
    }
    ctx->pc = 0x146FFCu;
    SET_GPR_U32(ctx, 31, 0x147004u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x146FFCu, 0x147004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147004u;
label_147004:
    // 0x147004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_147008:
    if (ctx->pc == 0x147008u) {
        ctx->pc = 0x14700Cu;
        goto label_14700c;
    }
    ctx->pc = 0x147004u;
    {
        const bool branch_taken_0x147004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147004) {
            ctx->pc = 0x14701Cu;
            goto label_14701c;
        }
    }
    ctx->pc = 0x14700Cu;
label_14700c:
    // 0x14700c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147010:
    // 0x147010: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_147014:
    // 0x147014: 0x1000017c  b           . + 4 + (0x17C << 2)
label_147018:
    if (ctx->pc == 0x147018u) {
        ctx->pc = 0x14701Cu;
        goto label_14701c;
    }
    ctx->pc = 0x147014u;
    {
        const bool branch_taken_0x147014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147014) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14701Cu;
label_14701c:
    // 0x14701c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147020:
    // 0x147020: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_147024:
    // 0x147024: 0x10600178  beqz        $v1, . + 4 + (0x178 << 2)
label_147028:
    if (ctx->pc == 0x147028u) {
        ctx->pc = 0x14702Cu;
        goto label_14702c;
    }
    ctx->pc = 0x147024u;
    {
        const bool branch_taken_0x147024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147024) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14702Cu;
label_14702c:
    // 0x14702c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147030:
    // 0x147030: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147034:
    // 0x147034: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x147034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_147038:
    // 0x147038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14703c:
    // 0x14703c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14703cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_147040:
    // 0x147040: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x147040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147044:
    // 0x147044: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x147044u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_147048:
    // 0x147048: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14704c:
    // 0x14704c: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x14704cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_147050:
    // 0x147050: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x147050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_147054:
    // 0x147054: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x147054u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147058:
    // 0x147058: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x147058u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
label_14705c:
    // 0x14705c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147060:
    // 0x147060: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_147064:
    // 0x147064: 0x10000168  b           . + 4 + (0x168 << 2)
label_147068:
    if (ctx->pc == 0x147068u) {
        ctx->pc = 0x14706Cu;
        goto label_14706c;
    }
    ctx->pc = 0x147064u;
    {
        const bool branch_taken_0x147064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147064) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14706Cu;
label_14706c:
    // 0x14706c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x14706cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147070:
    // 0x147070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147074:
    // 0x147074: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x147074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_147078:
    // 0x147078: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x147078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_14707c:
    // 0x14707c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147080:
    // 0x147080: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x147080u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147084:
    // 0x147084: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147088:
    // 0x147088: 0xc0965d0  jal         func_259740
label_14708c:
    if (ctx->pc == 0x14708Cu) {
        ctx->pc = 0x147090u;
        goto label_147090;
    }
    ctx->pc = 0x147088u;
    SET_GPR_U32(ctx, 31, 0x147090u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147088u, 0x147090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147090u;
label_147090:
    // 0x147090: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147094:
    // 0x147094: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x147094u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_147098:
    // 0x147098: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x147098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14709c:
    // 0x14709c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x14709cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_1470a0:
    // 0x1470a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1470a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1470a4:
    // 0x1470a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1470a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1470a8:
    // 0x1470a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1470a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1470ac:
    // 0x1470ac: 0xc096b40  jal         func_25AD00
label_1470b0:
    if (ctx->pc == 0x1470B0u) {
        ctx->pc = 0x1470B4u;
        goto label_1470b4;
    }
    ctx->pc = 0x1470ACu;
    SET_GPR_U32(ctx, 31, 0x1470B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1470ACu, 0x1470B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470B4u;
label_1470b4:
    // 0x1470b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1470b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1470b8:
    // 0x1470b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1470b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1470bc:
    // 0x1470bc: 0xc05cd10  jal         func_173440
label_1470c0:
    if (ctx->pc == 0x1470C0u) {
        ctx->pc = 0x1470C4u;
        goto label_1470c4;
    }
    ctx->pc = 0x1470BCu;
    SET_GPR_U32(ctx, 31, 0x1470C4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1470BCu, 0x1470C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470C4u;
label_1470c4:
    // 0x1470c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1470c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1470c8:
    // 0x1470c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1470c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1470cc:
    // 0x1470cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1470ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1470d0:
    // 0x1470d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1470d4:
    // 0x1470d4: 0xc0573d8  jal         func_15CF60
label_1470d8:
    if (ctx->pc == 0x1470D8u) {
        ctx->pc = 0x1470DCu;
        goto label_1470dc;
    }
    ctx->pc = 0x1470D4u;
    SET_GPR_U32(ctx, 31, 0x1470DCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1470D4u, 0x1470DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470DCu;
label_1470dc:
    // 0x1470dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1470dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1470e0:
    // 0x1470e0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1470e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1470e4:
    // 0x1470e4: 0xc097530  jal         func_25D4C0
label_1470e8:
    if (ctx->pc == 0x1470E8u) {
        ctx->pc = 0x1470ECu;
        goto label_1470ec;
    }
    ctx->pc = 0x1470E4u;
    SET_GPR_U32(ctx, 31, 0x1470ECu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1470E4u, 0x1470ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470ECu;
label_1470ec:
    // 0x1470ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1470ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1470f0:
    // 0x1470f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1470f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1470f4:
    // 0x1470f4: 0x907009db  lbu         $s0, 0x9DB($v1)
    ctx->pc = 0x1470f4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1470f8:
    // 0x1470f8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1470f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1470fc:
    // 0x1470fc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1470fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_147100:
    // 0x147100: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_147104:
    if (ctx->pc == 0x147104u) {
        ctx->pc = 0x147108u;
        goto label_147108;
    }
    ctx->pc = 0x147100u;
    {
        const bool branch_taken_0x147100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147100) {
            ctx->pc = 0x14712Cu;
            goto label_14712c;
        }
    }
    ctx->pc = 0x147108u;
label_147108:
    // 0x147108: 0xc0585dc  jal         func_161770
label_14710c:
    if (ctx->pc == 0x14710Cu) {
        ctx->pc = 0x147110u;
        goto label_147110;
    }
    ctx->pc = 0x147108u;
    SET_GPR_U32(ctx, 31, 0x147110u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x147108u, 0x147110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147110u;
label_147110:
    // 0x147110: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147114:
    // 0x147114: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_147118:
    if (ctx->pc == 0x147118u) {
        ctx->pc = 0x14711Cu;
        goto label_14711c;
    }
    ctx->pc = 0x147114u;
    {
        const bool branch_taken_0x147114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x147114) {
            ctx->pc = 0x14712Cu;
            goto label_14712c;
        }
    }
    ctx->pc = 0x14711Cu;
label_14711c:
    // 0x14711c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147120:
    // 0x147120: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_147124:
    // 0x147124: 0x10000138  b           . + 4 + (0x138 << 2)
label_147128:
    if (ctx->pc == 0x147128u) {
        ctx->pc = 0x14712Cu;
        goto label_14712c;
    }
    ctx->pc = 0x147124u;
    {
        const bool branch_taken_0x147124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147124) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14712Cu;
label_14712c:
    // 0x14712c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147130:
    // 0x147130: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_147134:
    // 0x147134: 0x10600134  beqz        $v1, . + 4 + (0x134 << 2)
label_147138:
    if (ctx->pc == 0x147138u) {
        ctx->pc = 0x14713Cu;
        goto label_14713c;
    }
    ctx->pc = 0x147134u;
    {
        const bool branch_taken_0x147134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147134) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14713Cu;
label_14713c:
    // 0x14713c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147140:
    // 0x147140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147144:
    // 0x147144: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x147144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_147148:
    // 0x147148: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14714c:
    // 0x14714c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x14714cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_147150:
    // 0x147150: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147154:
    // 0x147154: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x147154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_147158:
    // 0x147158: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14715c:
    // 0x14715c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14715cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_147160:
    // 0x147160: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x147160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_147164:
    // 0x147164: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147168:
    // 0x147168: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x147168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14716c:
    // 0x14716c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147170:
    // 0x147170: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_147174:
    // 0x147174: 0x10000124  b           . + 4 + (0x124 << 2)
label_147178:
    if (ctx->pc == 0x147178u) {
        ctx->pc = 0x14717Cu;
        goto label_14717c;
    }
    ctx->pc = 0x147174u;
    {
        const bool branch_taken_0x147174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147174) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14717Cu;
label_14717c:
    // 0x14717c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x14717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147180:
    // 0x147180: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147184:
    // 0x147184: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x147184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_147188:
    // 0x147188: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x147188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_14718c:
    // 0x14718c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14718cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147190:
    // 0x147190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147194:
    // 0x147194: 0xc0965d0  jal         func_259740
label_147198:
    if (ctx->pc == 0x147198u) {
        ctx->pc = 0x14719Cu;
        goto label_14719c;
    }
    ctx->pc = 0x147194u;
    SET_GPR_U32(ctx, 31, 0x14719Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147194u, 0x14719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14719Cu;
label_14719c:
    // 0x14719c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x14719cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1471a0:
    // 0x1471a0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1471a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1471a4:
    // 0x1471a4: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x1471a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_1471a8:
    // 0x1471a8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1471a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1471ac:
    // 0x1471ac: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x1471acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_1471b0:
    // 0x1471b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1471b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1471b4:
    // 0x1471b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1471b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1471b8:
    // 0x1471b8: 0xc096b40  jal         func_25AD00
label_1471bc:
    if (ctx->pc == 0x1471BCu) {
        ctx->pc = 0x1471C0u;
        goto label_1471c0;
    }
    ctx->pc = 0x1471B8u;
    SET_GPR_U32(ctx, 31, 0x1471C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1471B8u, 0x1471C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471C0u;
label_1471c0:
    // 0x1471c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1471c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1471c4:
    // 0x1471c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1471c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1471c8:
    // 0x1471c8: 0xc05cd10  jal         func_173440
label_1471cc:
    if (ctx->pc == 0x1471CCu) {
        ctx->pc = 0x1471D0u;
        goto label_1471d0;
    }
    ctx->pc = 0x1471C8u;
    SET_GPR_U32(ctx, 31, 0x1471D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1471C8u, 0x1471D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471D0u;
label_1471d0:
    // 0x1471d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1471d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1471d4:
    // 0x1471d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1471d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1471d8:
    // 0x1471d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1471d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1471dc:
    // 0x1471dc: 0xc0573d8  jal         func_15CF60
label_1471e0:
    if (ctx->pc == 0x1471E0u) {
        ctx->pc = 0x1471E4u;
        goto label_1471e4;
    }
    ctx->pc = 0x1471DCu;
    SET_GPR_U32(ctx, 31, 0x1471E4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1471DCu, 0x1471E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471E4u;
label_1471e4:
    // 0x1471e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1471e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1471e8:
    // 0x1471e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1471e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1471ec:
    // 0x1471ec: 0xc097530  jal         func_25D4C0
label_1471f0:
    if (ctx->pc == 0x1471F0u) {
        ctx->pc = 0x1471F4u;
        goto label_1471f4;
    }
    ctx->pc = 0x1471ECu;
    SET_GPR_U32(ctx, 31, 0x1471F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1471ECu, 0x1471F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471F4u;
label_1471f4:
    // 0x1471f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1471f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1471f8:
    // 0x1471f8: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1471f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_1471fc:
    // 0x1471fc: 0x10600102  beqz        $v1, . + 4 + (0x102 << 2)
label_147200:
    if (ctx->pc == 0x147200u) {
        ctx->pc = 0x147204u;
        goto label_147204;
    }
    ctx->pc = 0x1471FCu;
    {
        const bool branch_taken_0x1471fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1471fc) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x147204u;
label_147204:
    // 0x147204: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147208:
    // 0x147208: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x147208u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14720c:
    // 0x14720c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x14720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_147210:
    // 0x147210: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x147210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_147214:
    // 0x147214: 0x100000fc  b           . + 4 + (0xFC << 2)
label_147218:
    if (ctx->pc == 0x147218u) {
        ctx->pc = 0x14721Cu;
        goto label_14721c;
    }
    ctx->pc = 0x147214u;
    {
        const bool branch_taken_0x147214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147214) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14721Cu;
label_14721c:
    // 0x14721c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147220:
    // 0x147220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147224:
    // 0x147224: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147228:
    // 0x147228: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x147228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_14722c:
    // 0x14722c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x14722cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_147230:
    // 0x147230: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147234:
    // 0x147234: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147238:
    // 0x147238: 0xc0965d0  jal         func_259740
label_14723c:
    if (ctx->pc == 0x14723Cu) {
        ctx->pc = 0x147240u;
        goto label_147240;
    }
    ctx->pc = 0x147238u;
    SET_GPR_U32(ctx, 31, 0x147240u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147238u, 0x147240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147240u;
label_147240:
    // 0x147240: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147244:
    // 0x147244: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147248:
    // 0x147248: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x147248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14724c:
    // 0x14724c: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x14724cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
label_147250:
    // 0x147250: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x147250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_147254:
    // 0x147254: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x147254u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147258:
    // 0x147258: 0x0  nop
    ctx->pc = 0x147258u;
    // NOP
label_14725c:
    // 0x14725c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14725cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_147260:
    // 0x147260: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x147260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_147264:
    // 0x147264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x147264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147268:
    // 0x147268: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14726c:
    // 0x14726c: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x14726cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_147270:
    // 0x147270: 0x3c114040  lui         $s1, 0x4040
    ctx->pc = 0x147270u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16448 << 16));
label_147274:
    // 0x147274: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x147274u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147278:
    // 0x147278: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14727c:
    // 0x14727c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x14727cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_147280:
    // 0x147280: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147284:
    // 0x147284: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_147288:
    // 0x147288: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14728c:
    // 0x14728c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14728cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_147290:
    // 0x147290: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147294:
    // 0x147294: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147294u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147298:
    // 0x147298: 0xc096b40  jal         func_25AD00
label_14729c:
    if (ctx->pc == 0x14729Cu) {
        ctx->pc = 0x1472A0u;
        goto label_1472a0;
    }
    ctx->pc = 0x147298u;
    SET_GPR_U32(ctx, 31, 0x1472A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147298u, 0x1472A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472A0u;
label_1472a0:
    // 0x1472a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1472a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1472a4:
    // 0x1472a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1472a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1472a8:
    // 0x1472a8: 0xc05cd10  jal         func_173440
label_1472ac:
    if (ctx->pc == 0x1472ACu) {
        ctx->pc = 0x1472B0u;
        goto label_1472b0;
    }
    ctx->pc = 0x1472A8u;
    SET_GPR_U32(ctx, 31, 0x1472B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1472A8u, 0x1472B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472B0u;
label_1472b0:
    // 0x1472b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1472b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1472b4:
    // 0x1472b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1472b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1472b8:
    // 0x1472b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1472b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1472bc:
    // 0x1472bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1472bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1472c0:
    // 0x1472c0: 0xc0573d8  jal         func_15CF60
label_1472c4:
    if (ctx->pc == 0x1472C4u) {
        ctx->pc = 0x1472C8u;
        goto label_1472c8;
    }
    ctx->pc = 0x1472C0u;
    SET_GPR_U32(ctx, 31, 0x1472C8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1472C0u, 0x1472C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472C8u;
label_1472c8:
    // 0x1472c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1472c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1472cc:
    // 0x1472cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1472ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1472d0:
    // 0x1472d0: 0xc05cf54  jal         func_173D50
label_1472d4:
    if (ctx->pc == 0x1472D4u) {
        ctx->pc = 0x1472D8u;
        goto label_1472d8;
    }
    ctx->pc = 0x1472D0u;
    SET_GPR_U32(ctx, 31, 0x1472D8u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x1472D0u, 0x1472D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472D8u;
label_1472d8:
    // 0x1472d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1472d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1472dc:
    // 0x1472dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1472e0:
    if (ctx->pc == 0x1472E0u) {
        ctx->pc = 0x1472E4u;
        goto label_1472e4;
    }
    ctx->pc = 0x1472DCu;
    {
        const bool branch_taken_0x1472dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1472dc) {
            ctx->pc = 0x1472F4u;
            goto label_1472f4;
        }
    }
    ctx->pc = 0x1472E4u;
label_1472e4:
    // 0x1472e4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1472e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1472e8:
    // 0x1472e8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1472e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1472ec:
    // 0x1472ec: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1472ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1472f0:
    // 0x1472f0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x1472f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_1472f4:
    // 0x1472f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1472f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1472f8:
    // 0x1472f8: 0xc097530  jal         func_25D4C0
label_1472fc:
    if (ctx->pc == 0x1472FCu) {
        ctx->pc = 0x147300u;
        goto label_147300;
    }
    ctx->pc = 0x1472F8u;
    SET_GPR_U32(ctx, 31, 0x147300u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1472F8u, 0x147300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147300u;
label_147300:
    // 0x147300: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147300u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147304:
    // 0x147304: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_147308:
    if (ctx->pc == 0x147308u) {
        ctx->pc = 0x14730Cu;
        goto label_14730c;
    }
    ctx->pc = 0x147304u;
    {
        const bool branch_taken_0x147304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147304) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14730Cu;
label_14730c:
    // 0x14730c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x14730cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147310:
    // 0x147310: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147314:
    // 0x147314: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x147314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_147318:
    // 0x147318: 0x8cc70368  lw          $a3, 0x368($a2)
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
label_14731c:
    // 0x14731c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x14731cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_147320:
    // 0x147320: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x147320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_147324:
    // 0x147324: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x147324u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_147328:
    // 0x147328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14732c:
    // 0x14732c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x14732cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147330:
    // 0x147330: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147334:
    // 0x147334: 0xc0965d0  jal         func_259740
label_147338:
    if (ctx->pc == 0x147338u) {
        ctx->pc = 0x14733Cu;
        goto label_14733c;
    }
    ctx->pc = 0x147334u;
    SET_GPR_U32(ctx, 31, 0x14733Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147334u, 0x14733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14733Cu;
label_14733c:
    // 0x14733c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x14733cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147340:
    // 0x147340: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147344:
    // 0x147344: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x147344u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_147348:
    // 0x147348: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x147348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_14734c:
    // 0x14734c: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x14734cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
label_147350:
    // 0x147350: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147354:
    // 0x147354: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x147354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_147358:
    // 0x147358: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147358u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14735c:
    // 0x14735c: 0xc096b40  jal         func_25AD00
label_147360:
    if (ctx->pc == 0x147360u) {
        ctx->pc = 0x147364u;
        goto label_147364;
    }
    ctx->pc = 0x14735Cu;
    SET_GPR_U32(ctx, 31, 0x147364u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14735Cu, 0x147364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147364u;
label_147364:
    // 0x147364: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147368:
    // 0x147368: 0xc05cd10  jal         func_173440
label_14736c:
    if (ctx->pc == 0x14736Cu) {
        ctx->pc = 0x147370u;
        goto label_147370;
    }
    ctx->pc = 0x147368u;
    SET_GPR_U32(ctx, 31, 0x147370u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x147368u, 0x147370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147370u;
label_147370:
    // 0x147370: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147370u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147374:
    // 0x147374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_147378:
    // 0x147378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14737c:
    // 0x14737c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14737cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147380:
    // 0x147380: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x147380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_147384:
    // 0x147384: 0xc0573d8  jal         func_15CF60
label_147388:
    if (ctx->pc == 0x147388u) {
        ctx->pc = 0x14738Cu;
        goto label_14738c;
    }
    ctx->pc = 0x147384u;
    SET_GPR_U32(ctx, 31, 0x14738Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x147384u, 0x14738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14738Cu;
label_14738c:
    // 0x14738c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14738cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147390:
    // 0x147390: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147394:
    // 0x147394: 0xc097530  jal         func_25D4C0
label_147398:
    if (ctx->pc == 0x147398u) {
        ctx->pc = 0x14739Cu;
        goto label_14739c;
    }
    ctx->pc = 0x147394u;
    SET_GPR_U32(ctx, 31, 0x14739Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147394u, 0x14739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14739Cu;
label_14739c:
    // 0x14739c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x14739cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1473a0:
    // 0x1473a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1473a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1473a4:
    // 0x1473a4: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x1473a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1473a8:
    // 0x1473a8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1473a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1473ac:
    // 0x1473ac: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1473acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1473b0:
    // 0x1473b0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1473b4:
    if (ctx->pc == 0x1473B4u) {
        ctx->pc = 0x1473B8u;
        goto label_1473b8;
    }
    ctx->pc = 0x1473B0u;
    {
        const bool branch_taken_0x1473b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473b0) {
            ctx->pc = 0x1473DCu;
            goto label_1473dc;
        }
    }
    ctx->pc = 0x1473B8u;
label_1473b8:
    // 0x1473b8: 0xc0585dc  jal         func_161770
label_1473bc:
    if (ctx->pc == 0x1473BCu) {
        ctx->pc = 0x1473C0u;
        goto label_1473c0;
    }
    ctx->pc = 0x1473B8u;
    SET_GPR_U32(ctx, 31, 0x1473C0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1473B8u, 0x1473C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473C0u;
label_1473c0:
    // 0x1473c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1473c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1473c4:
    // 0x1473c4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1473c8:
    if (ctx->pc == 0x1473C8u) {
        ctx->pc = 0x1473CCu;
        goto label_1473cc;
    }
    ctx->pc = 0x1473C4u;
    {
        const bool branch_taken_0x1473c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473c4) {
            ctx->pc = 0x1473DCu;
            goto label_1473dc;
        }
    }
    ctx->pc = 0x1473CCu;
label_1473cc:
    // 0x1473cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1473ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1473d0:
    // 0x1473d0: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1473d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1473d4:
    // 0x1473d4: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1473d8:
    if (ctx->pc == 0x1473D8u) {
        ctx->pc = 0x1473DCu;
        goto label_1473dc;
    }
    ctx->pc = 0x1473D4u;
    {
        const bool branch_taken_0x1473d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473d4) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x1473DCu;
label_1473dc:
    // 0x1473dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1473dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1473e0:
    // 0x1473e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1473e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1473e4:
    // 0x1473e4: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
label_1473e8:
    if (ctx->pc == 0x1473E8u) {
        ctx->pc = 0x1473ECu;
        goto label_1473ec;
    }
    ctx->pc = 0x1473E4u;
    {
        const bool branch_taken_0x1473e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473e4) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x1473ECu;
label_1473ec:
    // 0x1473ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1473ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1473f0:
    // 0x1473f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1473f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1473f4:
    // 0x1473f4: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1473f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_1473f8:
    // 0x1473f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1473f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1473fc:
    // 0x1473fc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1473fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_147400:
    // 0x147400: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147404:
    // 0x147404: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x147404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_147408:
    // 0x147408: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14740c:
    // 0x14740c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x14740cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_147410:
    // 0x147410: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x147410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_147414:
    // 0x147414: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x147414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147418:
    // 0x147418: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x147418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_14741c:
    // 0x14741c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x14741cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147420:
    // 0x147420: 0xa0c010a8  sb          $zero, 0x10A8($a2)
    ctx->pc = 0x147420u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4264), (uint8_t)GPR_U32(ctx, 0));
label_147424:
    // 0x147424: 0x10000078  b           . + 4 + (0x78 << 2)
label_147428:
    if (ctx->pc == 0x147428u) {
        ctx->pc = 0x14742Cu;
        goto label_14742c;
    }
    ctx->pc = 0x147424u;
    {
        const bool branch_taken_0x147424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147424) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x14742Cu;
label_14742c:
    // 0x14742c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x14742cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147430:
    // 0x147430: 0xc4e10124  lwc1        $f1, 0x124($a3)
    ctx->pc = 0x147430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147434:
    // 0x147434: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x147434u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
label_147438:
    // 0x147438: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x147438u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14743c:
    // 0x14743c: 0x0  nop
    ctx->pc = 0x14743cu;
    // NOP
label_147440:
    // 0x147440: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_147444:
    // 0x147444: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x147444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
label_147448:
    // 0x147448: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14744c:
    // 0x14744c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147450:
    // 0x147450: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x147450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_147454:
    // 0x147454: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x147454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_147458:
    // 0x147458: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x147458u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14745c:
    // 0x14745c: 0x0  nop
    ctx->pc = 0x14745cu;
    // NOP
label_147460:
    // 0x147460: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x147460u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_147464:
    // 0x147464: 0xc058fec  jal         func_163FB0
label_147468:
    if (ctx->pc == 0x147468u) {
        ctx->pc = 0x14746Cu;
        goto label_14746c;
    }
    ctx->pc = 0x147464u;
    SET_GPR_U32(ctx, 31, 0x14746Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x147464u, 0x14746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14746Cu;
label_14746c:
    // 0x14746c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x14746cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147470:
    // 0x147470: 0xe4c000d4  swc1        $f0, 0xD4($a2)
    ctx->pc = 0x147470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 212), bits); }
label_147474:
    // 0x147474: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147478:
    // 0x147478: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14747c:
    // 0x14747c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14747cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147480:
    // 0x147480: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x147480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_147484:
    // 0x147484: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x147484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_147488:
    // 0x147488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14748c:
    // 0x14748c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x14748cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147490:
    // 0x147490: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147494:
    // 0x147494: 0xc0965d0  jal         func_259740
label_147498:
    if (ctx->pc == 0x147498u) {
        ctx->pc = 0x14749Cu;
        goto label_14749c;
    }
    ctx->pc = 0x147494u;
    SET_GPR_U32(ctx, 31, 0x14749Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147494u, 0x14749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14749Cu;
label_14749c:
    // 0x14749c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14749cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1474a0:
    // 0x1474a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1474a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1474a4:
    // 0x1474a4: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x1474a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1474a8:
    // 0x1474a8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1474a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1474ac:
    // 0x1474ac: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1474acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1474b0:
    // 0x1474b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1474b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1474b4:
    // 0x1474b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1474b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1474b8:
    // 0x1474b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1474b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1474bc:
    // 0x1474bc: 0xc096b40  jal         func_25AD00
label_1474c0:
    if (ctx->pc == 0x1474C0u) {
        ctx->pc = 0x1474C4u;
        goto label_1474c4;
    }
    ctx->pc = 0x1474BCu;
    SET_GPR_U32(ctx, 31, 0x1474C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1474BCu, 0x1474C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474C4u;
label_1474c4:
    // 0x1474c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1474c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1474c8:
    // 0x1474c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1474c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1474cc:
    // 0x1474cc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1474ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1474d0:
    // 0x1474d0: 0xc05cd10  jal         func_173440
label_1474d4:
    if (ctx->pc == 0x1474D4u) {
        ctx->pc = 0x1474D8u;
        goto label_1474d8;
    }
    ctx->pc = 0x1474D0u;
    SET_GPR_U32(ctx, 31, 0x1474D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1474D0u, 0x1474D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474D8u;
label_1474d8:
    // 0x1474d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1474d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1474dc:
    // 0x1474dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1474dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1474e0:
    // 0x1474e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1474e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1474e4:
    // 0x1474e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1474e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1474e8:
    // 0x1474e8: 0xc0573d8  jal         func_15CF60
label_1474ec:
    if (ctx->pc == 0x1474ECu) {
        ctx->pc = 0x1474F0u;
        goto label_1474f0;
    }
    ctx->pc = 0x1474E8u;
    SET_GPR_U32(ctx, 31, 0x1474F0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1474E8u, 0x1474F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474F0u;
label_1474f0:
    // 0x1474f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1474f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1474f4:
    // 0x1474f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1474f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1474f8:
    // 0x1474f8: 0xc097530  jal         func_25D4C0
label_1474fc:
    if (ctx->pc == 0x1474FCu) {
        ctx->pc = 0x147500u;
        goto label_147500;
    }
    ctx->pc = 0x1474F8u;
    SET_GPR_U32(ctx, 31, 0x147500u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1474F8u, 0x147500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147500u;
label_147500:
    // 0x147500: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x147500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147504:
    // 0x147504: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147508:
    // 0x147508: 0x90c709df  lbu         $a3, 0x9DF($a2)
    ctx->pc = 0x147508u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
label_14750c:
    // 0x14750c: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x14750cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_147510:
    // 0x147510: 0x31040010  andi        $a0, $t0, 0x10
    ctx->pc = 0x147510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
label_147514:
    // 0x147514: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_147518:
    if (ctx->pc == 0x147518u) {
        ctx->pc = 0x14751Cu;
        goto label_14751c;
    }
    ctx->pc = 0x147514u;
    {
        const bool branch_taken_0x147514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x147514) {
            ctx->pc = 0x147584u;
            goto label_147584;
        }
    }
    ctx->pc = 0x14751Cu;
label_14751c:
    // 0x14751c: 0xc057acc  jal         func_15EB30
label_147520:
    if (ctx->pc == 0x147520u) {
        ctx->pc = 0x147524u;
        goto label_147524;
    }
    ctx->pc = 0x14751Cu;
    SET_GPR_U32(ctx, 31, 0x147524u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14751Cu, 0x147524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147524u;
label_147524:
    // 0x147524: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_147528:
    if (ctx->pc == 0x147528u) {
        ctx->pc = 0x14752Cu;
        goto label_14752c;
    }
    ctx->pc = 0x147524u;
    {
        const bool branch_taken_0x147524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147524) {
            ctx->pc = 0x147584u;
            goto label_147584;
        }
    }
    ctx->pc = 0x14752Cu;
label_14752c:
    // 0x14752c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x14752cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_147530:
    // 0x147530: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147534:
    // 0x147534: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x147534u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_147538:
    // 0x147538: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x147538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14753c:
    // 0x14753c: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x14753cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_147540:
    // 0x147540: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x147540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_147544:
    // 0x147544: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x147544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
label_147548:
    // 0x147548: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x147548u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_14754c:
    // 0x14754c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x14754cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147550:
    // 0x147550: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x147550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147554:
    // 0x147554: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x147554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
label_147558:
    // 0x147558: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x147558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_14755c:
    // 0x14755c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14755cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147560:
    // 0x147560: 0x0  nop
    ctx->pc = 0x147560u;
    // NOP
label_147564:
    // 0x147564: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x147564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_147568:
    // 0x147568: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x147568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14756c:
    // 0x14756c: 0xe4a01b30  swc1        $f0, 0x1B30($a1)
    ctx->pc = 0x14756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6960), bits); }
label_147570:
    // 0x147570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x147570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147574:
    // 0x147574: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147578:
    // 0x147578: 0xa06610a8  sb          $a2, 0x10A8($v1)
    ctx->pc = 0x147578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 6));
label_14757c:
    // 0x14757c: 0x10000022  b           . + 4 + (0x22 << 2)
label_147580:
    if (ctx->pc == 0x147580u) {
        ctx->pc = 0x147584u;
        goto label_147584;
    }
    ctx->pc = 0x14757Cu;
    {
        const bool branch_taken_0x14757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14757c) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x147584u;
label_147584:
    // 0x147584: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147588:
    // 0x147588: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x147588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_14758c:
    // 0x14758c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_147590:
    if (ctx->pc == 0x147590u) {
        ctx->pc = 0x147594u;
        goto label_147594;
    }
    ctx->pc = 0x14758Cu;
    {
        const bool branch_taken_0x14758c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14758c) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x147594u;
label_147594:
    // 0x147594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147598:
    // 0x147598: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x147598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14759c:
    // 0x14759c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x14759cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1475a0:
    // 0x1475a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1475a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1475a4:
    // 0x1475a4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1475a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1475a8:
    // 0x1475a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1475a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1475ac:
    // 0x1475ac: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1475acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1475b0:
    // 0x1475b0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1475b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1475b4:
    // 0x1475b4: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x1475b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_1475b8:
    // 0x1475b8: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1475b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1475bc:
    // 0x1475bc: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1475bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1475c0:
    // 0x1475c0: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x1475c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
label_1475c4:
    // 0x1475c4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1475c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1475c8:
    // 0x1475c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1475c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1475cc:
    // 0x1475cc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1475ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1475d0:
    // 0x1475d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1475d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1475d4:
    // 0x1475d4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1475d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1475d8:
    // 0x1475d8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1475d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1475dc:
    // 0x1475dc: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1475dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1475e0:
    // 0x1475e0: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x1475e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
label_1475e4:
    // 0x1475e4: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x1475e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1475e8:
    // 0x1475e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1475e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1475ec:
    // 0x1475ec: 0x0  nop
    ctx->pc = 0x1475ecu;
    // NOP
label_1475f0:
    // 0x1475f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1475f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1475f4:
    // 0x1475f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1475f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1475f8:
    // 0x1475f8: 0xe4801b30  swc1        $f0, 0x1B30($a0)
    ctx->pc = 0x1475f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6960), bits); }
label_1475fc:
    // 0x1475fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1475fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147600:
    // 0x147600: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_147604:
    // 0x147604: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x147604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
label_147608:
    // 0x147608: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x147608u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14760c:
    // 0x14760c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14760cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_147610:
    // 0x147610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_147614:
    // 0x147614: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x147614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_147618:
    // 0x147618: 0x3e00008  jr          $ra
label_14761c:
    if (ctx->pc == 0x14761Cu) {
        ctx->pc = 0x147620u;
        goto label_fallthrough_0x147618;
    }
    ctx->pc = 0x147618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x147618:
    ctx->pc = 0x147620u;
}
