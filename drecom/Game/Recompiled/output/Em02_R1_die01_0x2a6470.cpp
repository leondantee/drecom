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

// Function: Em02_R1_die01
// Address: 0x2a6470 - 0x2a747c
void Em02_R1_die01_0x2a6470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_die01_0x2a6470");
#endif

    switch (ctx->pc) {
        case 0x2a6470u: goto label_2a6470;
        case 0x2a6474u: goto label_2a6474;
        case 0x2a6478u: goto label_2a6478;
        case 0x2a647cu: goto label_2a647c;
        case 0x2a6480u: goto label_2a6480;
        case 0x2a6484u: goto label_2a6484;
        case 0x2a6488u: goto label_2a6488;
        case 0x2a648cu: goto label_2a648c;
        case 0x2a6490u: goto label_2a6490;
        case 0x2a6494u: goto label_2a6494;
        case 0x2a6498u: goto label_2a6498;
        case 0x2a649cu: goto label_2a649c;
        case 0x2a64a0u: goto label_2a64a0;
        case 0x2a64a4u: goto label_2a64a4;
        case 0x2a64a8u: goto label_2a64a8;
        case 0x2a64acu: goto label_2a64ac;
        case 0x2a64b0u: goto label_2a64b0;
        case 0x2a64b4u: goto label_2a64b4;
        case 0x2a64b8u: goto label_2a64b8;
        case 0x2a64bcu: goto label_2a64bc;
        case 0x2a64c0u: goto label_2a64c0;
        case 0x2a64c4u: goto label_2a64c4;
        case 0x2a64c8u: goto label_2a64c8;
        case 0x2a64ccu: goto label_2a64cc;
        case 0x2a64d0u: goto label_2a64d0;
        case 0x2a64d4u: goto label_2a64d4;
        case 0x2a64d8u: goto label_2a64d8;
        case 0x2a64dcu: goto label_2a64dc;
        case 0x2a64e0u: goto label_2a64e0;
        case 0x2a64e4u: goto label_2a64e4;
        case 0x2a64e8u: goto label_2a64e8;
        case 0x2a64ecu: goto label_2a64ec;
        case 0x2a64f0u: goto label_2a64f0;
        case 0x2a64f4u: goto label_2a64f4;
        case 0x2a64f8u: goto label_2a64f8;
        case 0x2a64fcu: goto label_2a64fc;
        case 0x2a6500u: goto label_2a6500;
        case 0x2a6504u: goto label_2a6504;
        case 0x2a6508u: goto label_2a6508;
        case 0x2a650cu: goto label_2a650c;
        case 0x2a6510u: goto label_2a6510;
        case 0x2a6514u: goto label_2a6514;
        case 0x2a6518u: goto label_2a6518;
        case 0x2a651cu: goto label_2a651c;
        case 0x2a6520u: goto label_2a6520;
        case 0x2a6524u: goto label_2a6524;
        case 0x2a6528u: goto label_2a6528;
        case 0x2a652cu: goto label_2a652c;
        case 0x2a6530u: goto label_2a6530;
        case 0x2a6534u: goto label_2a6534;
        case 0x2a6538u: goto label_2a6538;
        case 0x2a653cu: goto label_2a653c;
        case 0x2a6540u: goto label_2a6540;
        case 0x2a6544u: goto label_2a6544;
        case 0x2a6548u: goto label_2a6548;
        case 0x2a654cu: goto label_2a654c;
        case 0x2a6550u: goto label_2a6550;
        case 0x2a6554u: goto label_2a6554;
        case 0x2a6558u: goto label_2a6558;
        case 0x2a655cu: goto label_2a655c;
        case 0x2a6560u: goto label_2a6560;
        case 0x2a6564u: goto label_2a6564;
        case 0x2a6568u: goto label_2a6568;
        case 0x2a656cu: goto label_2a656c;
        case 0x2a6570u: goto label_2a6570;
        case 0x2a6574u: goto label_2a6574;
        case 0x2a6578u: goto label_2a6578;
        case 0x2a657cu: goto label_2a657c;
        case 0x2a6580u: goto label_2a6580;
        case 0x2a6584u: goto label_2a6584;
        case 0x2a6588u: goto label_2a6588;
        case 0x2a658cu: goto label_2a658c;
        case 0x2a6590u: goto label_2a6590;
        case 0x2a6594u: goto label_2a6594;
        case 0x2a6598u: goto label_2a6598;
        case 0x2a659cu: goto label_2a659c;
        case 0x2a65a0u: goto label_2a65a0;
        case 0x2a65a4u: goto label_2a65a4;
        case 0x2a65a8u: goto label_2a65a8;
        case 0x2a65acu: goto label_2a65ac;
        case 0x2a65b0u: goto label_2a65b0;
        case 0x2a65b4u: goto label_2a65b4;
        case 0x2a65b8u: goto label_2a65b8;
        case 0x2a65bcu: goto label_2a65bc;
        case 0x2a65c0u: goto label_2a65c0;
        case 0x2a65c4u: goto label_2a65c4;
        case 0x2a65c8u: goto label_2a65c8;
        case 0x2a65ccu: goto label_2a65cc;
        case 0x2a65d0u: goto label_2a65d0;
        case 0x2a65d4u: goto label_2a65d4;
        case 0x2a65d8u: goto label_2a65d8;
        case 0x2a65dcu: goto label_2a65dc;
        case 0x2a65e0u: goto label_2a65e0;
        case 0x2a65e4u: goto label_2a65e4;
        case 0x2a65e8u: goto label_2a65e8;
        case 0x2a65ecu: goto label_2a65ec;
        case 0x2a65f0u: goto label_2a65f0;
        case 0x2a65f4u: goto label_2a65f4;
        case 0x2a65f8u: goto label_2a65f8;
        case 0x2a65fcu: goto label_2a65fc;
        case 0x2a6600u: goto label_2a6600;
        case 0x2a6604u: goto label_2a6604;
        case 0x2a6608u: goto label_2a6608;
        case 0x2a660cu: goto label_2a660c;
        case 0x2a6610u: goto label_2a6610;
        case 0x2a6614u: goto label_2a6614;
        case 0x2a6618u: goto label_2a6618;
        case 0x2a661cu: goto label_2a661c;
        case 0x2a6620u: goto label_2a6620;
        case 0x2a6624u: goto label_2a6624;
        case 0x2a6628u: goto label_2a6628;
        case 0x2a662cu: goto label_2a662c;
        case 0x2a6630u: goto label_2a6630;
        case 0x2a6634u: goto label_2a6634;
        case 0x2a6638u: goto label_2a6638;
        case 0x2a663cu: goto label_2a663c;
        case 0x2a6640u: goto label_2a6640;
        case 0x2a6644u: goto label_2a6644;
        case 0x2a6648u: goto label_2a6648;
        case 0x2a664cu: goto label_2a664c;
        case 0x2a6650u: goto label_2a6650;
        case 0x2a6654u: goto label_2a6654;
        case 0x2a6658u: goto label_2a6658;
        case 0x2a665cu: goto label_2a665c;
        case 0x2a6660u: goto label_2a6660;
        case 0x2a6664u: goto label_2a6664;
        case 0x2a6668u: goto label_2a6668;
        case 0x2a666cu: goto label_2a666c;
        case 0x2a6670u: goto label_2a6670;
        case 0x2a6674u: goto label_2a6674;
        case 0x2a6678u: goto label_2a6678;
        case 0x2a667cu: goto label_2a667c;
        case 0x2a6680u: goto label_2a6680;
        case 0x2a6684u: goto label_2a6684;
        case 0x2a6688u: goto label_2a6688;
        case 0x2a668cu: goto label_2a668c;
        case 0x2a6690u: goto label_2a6690;
        case 0x2a6694u: goto label_2a6694;
        case 0x2a6698u: goto label_2a6698;
        case 0x2a669cu: goto label_2a669c;
        case 0x2a66a0u: goto label_2a66a0;
        case 0x2a66a4u: goto label_2a66a4;
        case 0x2a66a8u: goto label_2a66a8;
        case 0x2a66acu: goto label_2a66ac;
        case 0x2a66b0u: goto label_2a66b0;
        case 0x2a66b4u: goto label_2a66b4;
        case 0x2a66b8u: goto label_2a66b8;
        case 0x2a66bcu: goto label_2a66bc;
        case 0x2a66c0u: goto label_2a66c0;
        case 0x2a66c4u: goto label_2a66c4;
        case 0x2a66c8u: goto label_2a66c8;
        case 0x2a66ccu: goto label_2a66cc;
        case 0x2a66d0u: goto label_2a66d0;
        case 0x2a66d4u: goto label_2a66d4;
        case 0x2a66d8u: goto label_2a66d8;
        case 0x2a66dcu: goto label_2a66dc;
        case 0x2a66e0u: goto label_2a66e0;
        case 0x2a66e4u: goto label_2a66e4;
        case 0x2a66e8u: goto label_2a66e8;
        case 0x2a66ecu: goto label_2a66ec;
        case 0x2a66f0u: goto label_2a66f0;
        case 0x2a66f4u: goto label_2a66f4;
        case 0x2a66f8u: goto label_2a66f8;
        case 0x2a66fcu: goto label_2a66fc;
        case 0x2a6700u: goto label_2a6700;
        case 0x2a6704u: goto label_2a6704;
        case 0x2a6708u: goto label_2a6708;
        case 0x2a670cu: goto label_2a670c;
        case 0x2a6710u: goto label_2a6710;
        case 0x2a6714u: goto label_2a6714;
        case 0x2a6718u: goto label_2a6718;
        case 0x2a671cu: goto label_2a671c;
        case 0x2a6720u: goto label_2a6720;
        case 0x2a6724u: goto label_2a6724;
        case 0x2a6728u: goto label_2a6728;
        case 0x2a672cu: goto label_2a672c;
        case 0x2a6730u: goto label_2a6730;
        case 0x2a6734u: goto label_2a6734;
        case 0x2a6738u: goto label_2a6738;
        case 0x2a673cu: goto label_2a673c;
        case 0x2a6740u: goto label_2a6740;
        case 0x2a6744u: goto label_2a6744;
        case 0x2a6748u: goto label_2a6748;
        case 0x2a674cu: goto label_2a674c;
        case 0x2a6750u: goto label_2a6750;
        case 0x2a6754u: goto label_2a6754;
        case 0x2a6758u: goto label_2a6758;
        case 0x2a675cu: goto label_2a675c;
        case 0x2a6760u: goto label_2a6760;
        case 0x2a6764u: goto label_2a6764;
        case 0x2a6768u: goto label_2a6768;
        case 0x2a676cu: goto label_2a676c;
        case 0x2a6770u: goto label_2a6770;
        case 0x2a6774u: goto label_2a6774;
        case 0x2a6778u: goto label_2a6778;
        case 0x2a677cu: goto label_2a677c;
        case 0x2a6780u: goto label_2a6780;
        case 0x2a6784u: goto label_2a6784;
        case 0x2a6788u: goto label_2a6788;
        case 0x2a678cu: goto label_2a678c;
        case 0x2a6790u: goto label_2a6790;
        case 0x2a6794u: goto label_2a6794;
        case 0x2a6798u: goto label_2a6798;
        case 0x2a679cu: goto label_2a679c;
        case 0x2a67a0u: goto label_2a67a0;
        case 0x2a67a4u: goto label_2a67a4;
        case 0x2a67a8u: goto label_2a67a8;
        case 0x2a67acu: goto label_2a67ac;
        case 0x2a67b0u: goto label_2a67b0;
        case 0x2a67b4u: goto label_2a67b4;
        case 0x2a67b8u: goto label_2a67b8;
        case 0x2a67bcu: goto label_2a67bc;
        case 0x2a67c0u: goto label_2a67c0;
        case 0x2a67c4u: goto label_2a67c4;
        case 0x2a67c8u: goto label_2a67c8;
        case 0x2a67ccu: goto label_2a67cc;
        case 0x2a67d0u: goto label_2a67d0;
        case 0x2a67d4u: goto label_2a67d4;
        case 0x2a67d8u: goto label_2a67d8;
        case 0x2a67dcu: goto label_2a67dc;
        case 0x2a67e0u: goto label_2a67e0;
        case 0x2a67e4u: goto label_2a67e4;
        case 0x2a67e8u: goto label_2a67e8;
        case 0x2a67ecu: goto label_2a67ec;
        case 0x2a67f0u: goto label_2a67f0;
        case 0x2a67f4u: goto label_2a67f4;
        case 0x2a67f8u: goto label_2a67f8;
        case 0x2a67fcu: goto label_2a67fc;
        case 0x2a6800u: goto label_2a6800;
        case 0x2a6804u: goto label_2a6804;
        case 0x2a6808u: goto label_2a6808;
        case 0x2a680cu: goto label_2a680c;
        case 0x2a6810u: goto label_2a6810;
        case 0x2a6814u: goto label_2a6814;
        case 0x2a6818u: goto label_2a6818;
        case 0x2a681cu: goto label_2a681c;
        case 0x2a6820u: goto label_2a6820;
        case 0x2a6824u: goto label_2a6824;
        case 0x2a6828u: goto label_2a6828;
        case 0x2a682cu: goto label_2a682c;
        case 0x2a6830u: goto label_2a6830;
        case 0x2a6834u: goto label_2a6834;
        case 0x2a6838u: goto label_2a6838;
        case 0x2a683cu: goto label_2a683c;
        case 0x2a6840u: goto label_2a6840;
        case 0x2a6844u: goto label_2a6844;
        case 0x2a6848u: goto label_2a6848;
        case 0x2a684cu: goto label_2a684c;
        case 0x2a6850u: goto label_2a6850;
        case 0x2a6854u: goto label_2a6854;
        case 0x2a6858u: goto label_2a6858;
        case 0x2a685cu: goto label_2a685c;
        case 0x2a6860u: goto label_2a6860;
        case 0x2a6864u: goto label_2a6864;
        case 0x2a6868u: goto label_2a6868;
        case 0x2a686cu: goto label_2a686c;
        case 0x2a6870u: goto label_2a6870;
        case 0x2a6874u: goto label_2a6874;
        case 0x2a6878u: goto label_2a6878;
        case 0x2a687cu: goto label_2a687c;
        case 0x2a6880u: goto label_2a6880;
        case 0x2a6884u: goto label_2a6884;
        case 0x2a6888u: goto label_2a6888;
        case 0x2a688cu: goto label_2a688c;
        case 0x2a6890u: goto label_2a6890;
        case 0x2a6894u: goto label_2a6894;
        case 0x2a6898u: goto label_2a6898;
        case 0x2a689cu: goto label_2a689c;
        case 0x2a68a0u: goto label_2a68a0;
        case 0x2a68a4u: goto label_2a68a4;
        case 0x2a68a8u: goto label_2a68a8;
        case 0x2a68acu: goto label_2a68ac;
        case 0x2a68b0u: goto label_2a68b0;
        case 0x2a68b4u: goto label_2a68b4;
        case 0x2a68b8u: goto label_2a68b8;
        case 0x2a68bcu: goto label_2a68bc;
        case 0x2a68c0u: goto label_2a68c0;
        case 0x2a68c4u: goto label_2a68c4;
        case 0x2a68c8u: goto label_2a68c8;
        case 0x2a68ccu: goto label_2a68cc;
        case 0x2a68d0u: goto label_2a68d0;
        case 0x2a68d4u: goto label_2a68d4;
        case 0x2a68d8u: goto label_2a68d8;
        case 0x2a68dcu: goto label_2a68dc;
        case 0x2a68e0u: goto label_2a68e0;
        case 0x2a68e4u: goto label_2a68e4;
        case 0x2a68e8u: goto label_2a68e8;
        case 0x2a68ecu: goto label_2a68ec;
        case 0x2a68f0u: goto label_2a68f0;
        case 0x2a68f4u: goto label_2a68f4;
        case 0x2a68f8u: goto label_2a68f8;
        case 0x2a68fcu: goto label_2a68fc;
        case 0x2a6900u: goto label_2a6900;
        case 0x2a6904u: goto label_2a6904;
        case 0x2a6908u: goto label_2a6908;
        case 0x2a690cu: goto label_2a690c;
        case 0x2a6910u: goto label_2a6910;
        case 0x2a6914u: goto label_2a6914;
        case 0x2a6918u: goto label_2a6918;
        case 0x2a691cu: goto label_2a691c;
        case 0x2a6920u: goto label_2a6920;
        case 0x2a6924u: goto label_2a6924;
        case 0x2a6928u: goto label_2a6928;
        case 0x2a692cu: goto label_2a692c;
        case 0x2a6930u: goto label_2a6930;
        case 0x2a6934u: goto label_2a6934;
        case 0x2a6938u: goto label_2a6938;
        case 0x2a693cu: goto label_2a693c;
        case 0x2a6940u: goto label_2a6940;
        case 0x2a6944u: goto label_2a6944;
        case 0x2a6948u: goto label_2a6948;
        case 0x2a694cu: goto label_2a694c;
        case 0x2a6950u: goto label_2a6950;
        case 0x2a6954u: goto label_2a6954;
        case 0x2a6958u: goto label_2a6958;
        case 0x2a695cu: goto label_2a695c;
        case 0x2a6960u: goto label_2a6960;
        case 0x2a6964u: goto label_2a6964;
        case 0x2a6968u: goto label_2a6968;
        case 0x2a696cu: goto label_2a696c;
        case 0x2a6970u: goto label_2a6970;
        case 0x2a6974u: goto label_2a6974;
        case 0x2a6978u: goto label_2a6978;
        case 0x2a697cu: goto label_2a697c;
        case 0x2a6980u: goto label_2a6980;
        case 0x2a6984u: goto label_2a6984;
        case 0x2a6988u: goto label_2a6988;
        case 0x2a698cu: goto label_2a698c;
        case 0x2a6990u: goto label_2a6990;
        case 0x2a6994u: goto label_2a6994;
        case 0x2a6998u: goto label_2a6998;
        case 0x2a699cu: goto label_2a699c;
        case 0x2a69a0u: goto label_2a69a0;
        case 0x2a69a4u: goto label_2a69a4;
        case 0x2a69a8u: goto label_2a69a8;
        case 0x2a69acu: goto label_2a69ac;
        case 0x2a69b0u: goto label_2a69b0;
        case 0x2a69b4u: goto label_2a69b4;
        case 0x2a69b8u: goto label_2a69b8;
        case 0x2a69bcu: goto label_2a69bc;
        case 0x2a69c0u: goto label_2a69c0;
        case 0x2a69c4u: goto label_2a69c4;
        case 0x2a69c8u: goto label_2a69c8;
        case 0x2a69ccu: goto label_2a69cc;
        case 0x2a69d0u: goto label_2a69d0;
        case 0x2a69d4u: goto label_2a69d4;
        case 0x2a69d8u: goto label_2a69d8;
        case 0x2a69dcu: goto label_2a69dc;
        case 0x2a69e0u: goto label_2a69e0;
        case 0x2a69e4u: goto label_2a69e4;
        case 0x2a69e8u: goto label_2a69e8;
        case 0x2a69ecu: goto label_2a69ec;
        case 0x2a69f0u: goto label_2a69f0;
        case 0x2a69f4u: goto label_2a69f4;
        case 0x2a69f8u: goto label_2a69f8;
        case 0x2a69fcu: goto label_2a69fc;
        case 0x2a6a00u: goto label_2a6a00;
        case 0x2a6a04u: goto label_2a6a04;
        case 0x2a6a08u: goto label_2a6a08;
        case 0x2a6a0cu: goto label_2a6a0c;
        case 0x2a6a10u: goto label_2a6a10;
        case 0x2a6a14u: goto label_2a6a14;
        case 0x2a6a18u: goto label_2a6a18;
        case 0x2a6a1cu: goto label_2a6a1c;
        case 0x2a6a20u: goto label_2a6a20;
        case 0x2a6a24u: goto label_2a6a24;
        case 0x2a6a28u: goto label_2a6a28;
        case 0x2a6a2cu: goto label_2a6a2c;
        case 0x2a6a30u: goto label_2a6a30;
        case 0x2a6a34u: goto label_2a6a34;
        case 0x2a6a38u: goto label_2a6a38;
        case 0x2a6a3cu: goto label_2a6a3c;
        case 0x2a6a40u: goto label_2a6a40;
        case 0x2a6a44u: goto label_2a6a44;
        case 0x2a6a48u: goto label_2a6a48;
        case 0x2a6a4cu: goto label_2a6a4c;
        case 0x2a6a50u: goto label_2a6a50;
        case 0x2a6a54u: goto label_2a6a54;
        case 0x2a6a58u: goto label_2a6a58;
        case 0x2a6a5cu: goto label_2a6a5c;
        case 0x2a6a60u: goto label_2a6a60;
        case 0x2a6a64u: goto label_2a6a64;
        case 0x2a6a68u: goto label_2a6a68;
        case 0x2a6a6cu: goto label_2a6a6c;
        case 0x2a6a70u: goto label_2a6a70;
        case 0x2a6a74u: goto label_2a6a74;
        case 0x2a6a78u: goto label_2a6a78;
        case 0x2a6a7cu: goto label_2a6a7c;
        case 0x2a6a80u: goto label_2a6a80;
        case 0x2a6a84u: goto label_2a6a84;
        case 0x2a6a88u: goto label_2a6a88;
        case 0x2a6a8cu: goto label_2a6a8c;
        case 0x2a6a90u: goto label_2a6a90;
        case 0x2a6a94u: goto label_2a6a94;
        case 0x2a6a98u: goto label_2a6a98;
        case 0x2a6a9cu: goto label_2a6a9c;
        case 0x2a6aa0u: goto label_2a6aa0;
        case 0x2a6aa4u: goto label_2a6aa4;
        case 0x2a6aa8u: goto label_2a6aa8;
        case 0x2a6aacu: goto label_2a6aac;
        case 0x2a6ab0u: goto label_2a6ab0;
        case 0x2a6ab4u: goto label_2a6ab4;
        case 0x2a6ab8u: goto label_2a6ab8;
        case 0x2a6abcu: goto label_2a6abc;
        case 0x2a6ac0u: goto label_2a6ac0;
        case 0x2a6ac4u: goto label_2a6ac4;
        case 0x2a6ac8u: goto label_2a6ac8;
        case 0x2a6accu: goto label_2a6acc;
        case 0x2a6ad0u: goto label_2a6ad0;
        case 0x2a6ad4u: goto label_2a6ad4;
        case 0x2a6ad8u: goto label_2a6ad8;
        case 0x2a6adcu: goto label_2a6adc;
        case 0x2a6ae0u: goto label_2a6ae0;
        case 0x2a6ae4u: goto label_2a6ae4;
        case 0x2a6ae8u: goto label_2a6ae8;
        case 0x2a6aecu: goto label_2a6aec;
        case 0x2a6af0u: goto label_2a6af0;
        case 0x2a6af4u: goto label_2a6af4;
        case 0x2a6af8u: goto label_2a6af8;
        case 0x2a6afcu: goto label_2a6afc;
        case 0x2a6b00u: goto label_2a6b00;
        case 0x2a6b04u: goto label_2a6b04;
        case 0x2a6b08u: goto label_2a6b08;
        case 0x2a6b0cu: goto label_2a6b0c;
        case 0x2a6b10u: goto label_2a6b10;
        case 0x2a6b14u: goto label_2a6b14;
        case 0x2a6b18u: goto label_2a6b18;
        case 0x2a6b1cu: goto label_2a6b1c;
        case 0x2a6b20u: goto label_2a6b20;
        case 0x2a6b24u: goto label_2a6b24;
        case 0x2a6b28u: goto label_2a6b28;
        case 0x2a6b2cu: goto label_2a6b2c;
        case 0x2a6b30u: goto label_2a6b30;
        case 0x2a6b34u: goto label_2a6b34;
        case 0x2a6b38u: goto label_2a6b38;
        case 0x2a6b3cu: goto label_2a6b3c;
        case 0x2a6b40u: goto label_2a6b40;
        case 0x2a6b44u: goto label_2a6b44;
        case 0x2a6b48u: goto label_2a6b48;
        case 0x2a6b4cu: goto label_2a6b4c;
        case 0x2a6b50u: goto label_2a6b50;
        case 0x2a6b54u: goto label_2a6b54;
        case 0x2a6b58u: goto label_2a6b58;
        case 0x2a6b5cu: goto label_2a6b5c;
        case 0x2a6b60u: goto label_2a6b60;
        case 0x2a6b64u: goto label_2a6b64;
        case 0x2a6b68u: goto label_2a6b68;
        case 0x2a6b6cu: goto label_2a6b6c;
        case 0x2a6b70u: goto label_2a6b70;
        case 0x2a6b74u: goto label_2a6b74;
        case 0x2a6b78u: goto label_2a6b78;
        case 0x2a6b7cu: goto label_2a6b7c;
        case 0x2a6b80u: goto label_2a6b80;
        case 0x2a6b84u: goto label_2a6b84;
        case 0x2a6b88u: goto label_2a6b88;
        case 0x2a6b8cu: goto label_2a6b8c;
        case 0x2a6b90u: goto label_2a6b90;
        case 0x2a6b94u: goto label_2a6b94;
        case 0x2a6b98u: goto label_2a6b98;
        case 0x2a6b9cu: goto label_2a6b9c;
        case 0x2a6ba0u: goto label_2a6ba0;
        case 0x2a6ba4u: goto label_2a6ba4;
        case 0x2a6ba8u: goto label_2a6ba8;
        case 0x2a6bacu: goto label_2a6bac;
        case 0x2a6bb0u: goto label_2a6bb0;
        case 0x2a6bb4u: goto label_2a6bb4;
        case 0x2a6bb8u: goto label_2a6bb8;
        case 0x2a6bbcu: goto label_2a6bbc;
        case 0x2a6bc0u: goto label_2a6bc0;
        case 0x2a6bc4u: goto label_2a6bc4;
        case 0x2a6bc8u: goto label_2a6bc8;
        case 0x2a6bccu: goto label_2a6bcc;
        case 0x2a6bd0u: goto label_2a6bd0;
        case 0x2a6bd4u: goto label_2a6bd4;
        case 0x2a6bd8u: goto label_2a6bd8;
        case 0x2a6bdcu: goto label_2a6bdc;
        case 0x2a6be0u: goto label_2a6be0;
        case 0x2a6be4u: goto label_2a6be4;
        case 0x2a6be8u: goto label_2a6be8;
        case 0x2a6becu: goto label_2a6bec;
        case 0x2a6bf0u: goto label_2a6bf0;
        case 0x2a6bf4u: goto label_2a6bf4;
        case 0x2a6bf8u: goto label_2a6bf8;
        case 0x2a6bfcu: goto label_2a6bfc;
        case 0x2a6c00u: goto label_2a6c00;
        case 0x2a6c04u: goto label_2a6c04;
        case 0x2a6c08u: goto label_2a6c08;
        case 0x2a6c0cu: goto label_2a6c0c;
        case 0x2a6c10u: goto label_2a6c10;
        case 0x2a6c14u: goto label_2a6c14;
        case 0x2a6c18u: goto label_2a6c18;
        case 0x2a6c1cu: goto label_2a6c1c;
        case 0x2a6c20u: goto label_2a6c20;
        case 0x2a6c24u: goto label_2a6c24;
        case 0x2a6c28u: goto label_2a6c28;
        case 0x2a6c2cu: goto label_2a6c2c;
        case 0x2a6c30u: goto label_2a6c30;
        case 0x2a6c34u: goto label_2a6c34;
        case 0x2a6c38u: goto label_2a6c38;
        case 0x2a6c3cu: goto label_2a6c3c;
        case 0x2a6c40u: goto label_2a6c40;
        case 0x2a6c44u: goto label_2a6c44;
        case 0x2a6c48u: goto label_2a6c48;
        case 0x2a6c4cu: goto label_2a6c4c;
        case 0x2a6c50u: goto label_2a6c50;
        case 0x2a6c54u: goto label_2a6c54;
        case 0x2a6c58u: goto label_2a6c58;
        case 0x2a6c5cu: goto label_2a6c5c;
        case 0x2a6c60u: goto label_2a6c60;
        case 0x2a6c64u: goto label_2a6c64;
        case 0x2a6c68u: goto label_2a6c68;
        case 0x2a6c6cu: goto label_2a6c6c;
        case 0x2a6c70u: goto label_2a6c70;
        case 0x2a6c74u: goto label_2a6c74;
        case 0x2a6c78u: goto label_2a6c78;
        case 0x2a6c7cu: goto label_2a6c7c;
        case 0x2a6c80u: goto label_2a6c80;
        case 0x2a6c84u: goto label_2a6c84;
        case 0x2a6c88u: goto label_2a6c88;
        case 0x2a6c8cu: goto label_2a6c8c;
        case 0x2a6c90u: goto label_2a6c90;
        case 0x2a6c94u: goto label_2a6c94;
        case 0x2a6c98u: goto label_2a6c98;
        case 0x2a6c9cu: goto label_2a6c9c;
        case 0x2a6ca0u: goto label_2a6ca0;
        case 0x2a6ca4u: goto label_2a6ca4;
        case 0x2a6ca8u: goto label_2a6ca8;
        case 0x2a6cacu: goto label_2a6cac;
        case 0x2a6cb0u: goto label_2a6cb0;
        case 0x2a6cb4u: goto label_2a6cb4;
        case 0x2a6cb8u: goto label_2a6cb8;
        case 0x2a6cbcu: goto label_2a6cbc;
        case 0x2a6cc0u: goto label_2a6cc0;
        case 0x2a6cc4u: goto label_2a6cc4;
        case 0x2a6cc8u: goto label_2a6cc8;
        case 0x2a6cccu: goto label_2a6ccc;
        case 0x2a6cd0u: goto label_2a6cd0;
        case 0x2a6cd4u: goto label_2a6cd4;
        case 0x2a6cd8u: goto label_2a6cd8;
        case 0x2a6cdcu: goto label_2a6cdc;
        case 0x2a6ce0u: goto label_2a6ce0;
        case 0x2a6ce4u: goto label_2a6ce4;
        case 0x2a6ce8u: goto label_2a6ce8;
        case 0x2a6cecu: goto label_2a6cec;
        case 0x2a6cf0u: goto label_2a6cf0;
        case 0x2a6cf4u: goto label_2a6cf4;
        case 0x2a6cf8u: goto label_2a6cf8;
        case 0x2a6cfcu: goto label_2a6cfc;
        case 0x2a6d00u: goto label_2a6d00;
        case 0x2a6d04u: goto label_2a6d04;
        case 0x2a6d08u: goto label_2a6d08;
        case 0x2a6d0cu: goto label_2a6d0c;
        case 0x2a6d10u: goto label_2a6d10;
        case 0x2a6d14u: goto label_2a6d14;
        case 0x2a6d18u: goto label_2a6d18;
        case 0x2a6d1cu: goto label_2a6d1c;
        case 0x2a6d20u: goto label_2a6d20;
        case 0x2a6d24u: goto label_2a6d24;
        case 0x2a6d28u: goto label_2a6d28;
        case 0x2a6d2cu: goto label_2a6d2c;
        case 0x2a6d30u: goto label_2a6d30;
        case 0x2a6d34u: goto label_2a6d34;
        case 0x2a6d38u: goto label_2a6d38;
        case 0x2a6d3cu: goto label_2a6d3c;
        case 0x2a6d40u: goto label_2a6d40;
        case 0x2a6d44u: goto label_2a6d44;
        case 0x2a6d48u: goto label_2a6d48;
        case 0x2a6d4cu: goto label_2a6d4c;
        case 0x2a6d50u: goto label_2a6d50;
        case 0x2a6d54u: goto label_2a6d54;
        case 0x2a6d58u: goto label_2a6d58;
        case 0x2a6d5cu: goto label_2a6d5c;
        case 0x2a6d60u: goto label_2a6d60;
        case 0x2a6d64u: goto label_2a6d64;
        case 0x2a6d68u: goto label_2a6d68;
        case 0x2a6d6cu: goto label_2a6d6c;
        case 0x2a6d70u: goto label_2a6d70;
        case 0x2a6d74u: goto label_2a6d74;
        case 0x2a6d78u: goto label_2a6d78;
        case 0x2a6d7cu: goto label_2a6d7c;
        case 0x2a6d80u: goto label_2a6d80;
        case 0x2a6d84u: goto label_2a6d84;
        case 0x2a6d88u: goto label_2a6d88;
        case 0x2a6d8cu: goto label_2a6d8c;
        case 0x2a6d90u: goto label_2a6d90;
        case 0x2a6d94u: goto label_2a6d94;
        case 0x2a6d98u: goto label_2a6d98;
        case 0x2a6d9cu: goto label_2a6d9c;
        case 0x2a6da0u: goto label_2a6da0;
        case 0x2a6da4u: goto label_2a6da4;
        case 0x2a6da8u: goto label_2a6da8;
        case 0x2a6dacu: goto label_2a6dac;
        case 0x2a6db0u: goto label_2a6db0;
        case 0x2a6db4u: goto label_2a6db4;
        case 0x2a6db8u: goto label_2a6db8;
        case 0x2a6dbcu: goto label_2a6dbc;
        case 0x2a6dc0u: goto label_2a6dc0;
        case 0x2a6dc4u: goto label_2a6dc4;
        case 0x2a6dc8u: goto label_2a6dc8;
        case 0x2a6dccu: goto label_2a6dcc;
        case 0x2a6dd0u: goto label_2a6dd0;
        case 0x2a6dd4u: goto label_2a6dd4;
        case 0x2a6dd8u: goto label_2a6dd8;
        case 0x2a6ddcu: goto label_2a6ddc;
        case 0x2a6de0u: goto label_2a6de0;
        case 0x2a6de4u: goto label_2a6de4;
        case 0x2a6de8u: goto label_2a6de8;
        case 0x2a6decu: goto label_2a6dec;
        case 0x2a6df0u: goto label_2a6df0;
        case 0x2a6df4u: goto label_2a6df4;
        case 0x2a6df8u: goto label_2a6df8;
        case 0x2a6dfcu: goto label_2a6dfc;
        case 0x2a6e00u: goto label_2a6e00;
        case 0x2a6e04u: goto label_2a6e04;
        case 0x2a6e08u: goto label_2a6e08;
        case 0x2a6e0cu: goto label_2a6e0c;
        case 0x2a6e10u: goto label_2a6e10;
        case 0x2a6e14u: goto label_2a6e14;
        case 0x2a6e18u: goto label_2a6e18;
        case 0x2a6e1cu: goto label_2a6e1c;
        case 0x2a6e20u: goto label_2a6e20;
        case 0x2a6e24u: goto label_2a6e24;
        case 0x2a6e28u: goto label_2a6e28;
        case 0x2a6e2cu: goto label_2a6e2c;
        case 0x2a6e30u: goto label_2a6e30;
        case 0x2a6e34u: goto label_2a6e34;
        case 0x2a6e38u: goto label_2a6e38;
        case 0x2a6e3cu: goto label_2a6e3c;
        case 0x2a6e40u: goto label_2a6e40;
        case 0x2a6e44u: goto label_2a6e44;
        case 0x2a6e48u: goto label_2a6e48;
        case 0x2a6e4cu: goto label_2a6e4c;
        case 0x2a6e50u: goto label_2a6e50;
        case 0x2a6e54u: goto label_2a6e54;
        case 0x2a6e58u: goto label_2a6e58;
        case 0x2a6e5cu: goto label_2a6e5c;
        case 0x2a6e60u: goto label_2a6e60;
        case 0x2a6e64u: goto label_2a6e64;
        case 0x2a6e68u: goto label_2a6e68;
        case 0x2a6e6cu: goto label_2a6e6c;
        case 0x2a6e70u: goto label_2a6e70;
        case 0x2a6e74u: goto label_2a6e74;
        case 0x2a6e78u: goto label_2a6e78;
        case 0x2a6e7cu: goto label_2a6e7c;
        case 0x2a6e80u: goto label_2a6e80;
        case 0x2a6e84u: goto label_2a6e84;
        case 0x2a6e88u: goto label_2a6e88;
        case 0x2a6e8cu: goto label_2a6e8c;
        case 0x2a6e90u: goto label_2a6e90;
        case 0x2a6e94u: goto label_2a6e94;
        case 0x2a6e98u: goto label_2a6e98;
        case 0x2a6e9cu: goto label_2a6e9c;
        case 0x2a6ea0u: goto label_2a6ea0;
        case 0x2a6ea4u: goto label_2a6ea4;
        case 0x2a6ea8u: goto label_2a6ea8;
        case 0x2a6eacu: goto label_2a6eac;
        case 0x2a6eb0u: goto label_2a6eb0;
        case 0x2a6eb4u: goto label_2a6eb4;
        case 0x2a6eb8u: goto label_2a6eb8;
        case 0x2a6ebcu: goto label_2a6ebc;
        case 0x2a6ec0u: goto label_2a6ec0;
        case 0x2a6ec4u: goto label_2a6ec4;
        case 0x2a6ec8u: goto label_2a6ec8;
        case 0x2a6eccu: goto label_2a6ecc;
        case 0x2a6ed0u: goto label_2a6ed0;
        case 0x2a6ed4u: goto label_2a6ed4;
        case 0x2a6ed8u: goto label_2a6ed8;
        case 0x2a6edcu: goto label_2a6edc;
        case 0x2a6ee0u: goto label_2a6ee0;
        case 0x2a6ee4u: goto label_2a6ee4;
        case 0x2a6ee8u: goto label_2a6ee8;
        case 0x2a6eecu: goto label_2a6eec;
        case 0x2a6ef0u: goto label_2a6ef0;
        case 0x2a6ef4u: goto label_2a6ef4;
        case 0x2a6ef8u: goto label_2a6ef8;
        case 0x2a6efcu: goto label_2a6efc;
        case 0x2a6f00u: goto label_2a6f00;
        case 0x2a6f04u: goto label_2a6f04;
        case 0x2a6f08u: goto label_2a6f08;
        case 0x2a6f0cu: goto label_2a6f0c;
        case 0x2a6f10u: goto label_2a6f10;
        case 0x2a6f14u: goto label_2a6f14;
        case 0x2a6f18u: goto label_2a6f18;
        case 0x2a6f1cu: goto label_2a6f1c;
        case 0x2a6f20u: goto label_2a6f20;
        case 0x2a6f24u: goto label_2a6f24;
        case 0x2a6f28u: goto label_2a6f28;
        case 0x2a6f2cu: goto label_2a6f2c;
        case 0x2a6f30u: goto label_2a6f30;
        case 0x2a6f34u: goto label_2a6f34;
        case 0x2a6f38u: goto label_2a6f38;
        case 0x2a6f3cu: goto label_2a6f3c;
        case 0x2a6f40u: goto label_2a6f40;
        case 0x2a6f44u: goto label_2a6f44;
        case 0x2a6f48u: goto label_2a6f48;
        case 0x2a6f4cu: goto label_2a6f4c;
        case 0x2a6f50u: goto label_2a6f50;
        case 0x2a6f54u: goto label_2a6f54;
        case 0x2a6f58u: goto label_2a6f58;
        case 0x2a6f5cu: goto label_2a6f5c;
        case 0x2a6f60u: goto label_2a6f60;
        case 0x2a6f64u: goto label_2a6f64;
        case 0x2a6f68u: goto label_2a6f68;
        case 0x2a6f6cu: goto label_2a6f6c;
        case 0x2a6f70u: goto label_2a6f70;
        case 0x2a6f74u: goto label_2a6f74;
        case 0x2a6f78u: goto label_2a6f78;
        case 0x2a6f7cu: goto label_2a6f7c;
        case 0x2a6f80u: goto label_2a6f80;
        case 0x2a6f84u: goto label_2a6f84;
        case 0x2a6f88u: goto label_2a6f88;
        case 0x2a6f8cu: goto label_2a6f8c;
        case 0x2a6f90u: goto label_2a6f90;
        case 0x2a6f94u: goto label_2a6f94;
        case 0x2a6f98u: goto label_2a6f98;
        case 0x2a6f9cu: goto label_2a6f9c;
        case 0x2a6fa0u: goto label_2a6fa0;
        case 0x2a6fa4u: goto label_2a6fa4;
        case 0x2a6fa8u: goto label_2a6fa8;
        case 0x2a6facu: goto label_2a6fac;
        case 0x2a6fb0u: goto label_2a6fb0;
        case 0x2a6fb4u: goto label_2a6fb4;
        case 0x2a6fb8u: goto label_2a6fb8;
        case 0x2a6fbcu: goto label_2a6fbc;
        case 0x2a6fc0u: goto label_2a6fc0;
        case 0x2a6fc4u: goto label_2a6fc4;
        case 0x2a6fc8u: goto label_2a6fc8;
        case 0x2a6fccu: goto label_2a6fcc;
        case 0x2a6fd0u: goto label_2a6fd0;
        case 0x2a6fd4u: goto label_2a6fd4;
        case 0x2a6fd8u: goto label_2a6fd8;
        case 0x2a6fdcu: goto label_2a6fdc;
        case 0x2a6fe0u: goto label_2a6fe0;
        case 0x2a6fe4u: goto label_2a6fe4;
        case 0x2a6fe8u: goto label_2a6fe8;
        case 0x2a6fecu: goto label_2a6fec;
        case 0x2a6ff0u: goto label_2a6ff0;
        case 0x2a6ff4u: goto label_2a6ff4;
        case 0x2a6ff8u: goto label_2a6ff8;
        case 0x2a6ffcu: goto label_2a6ffc;
        case 0x2a7000u: goto label_2a7000;
        case 0x2a7004u: goto label_2a7004;
        case 0x2a7008u: goto label_2a7008;
        case 0x2a700cu: goto label_2a700c;
        case 0x2a7010u: goto label_2a7010;
        case 0x2a7014u: goto label_2a7014;
        case 0x2a7018u: goto label_2a7018;
        case 0x2a701cu: goto label_2a701c;
        case 0x2a7020u: goto label_2a7020;
        case 0x2a7024u: goto label_2a7024;
        case 0x2a7028u: goto label_2a7028;
        case 0x2a702cu: goto label_2a702c;
        case 0x2a7030u: goto label_2a7030;
        case 0x2a7034u: goto label_2a7034;
        case 0x2a7038u: goto label_2a7038;
        case 0x2a703cu: goto label_2a703c;
        case 0x2a7040u: goto label_2a7040;
        case 0x2a7044u: goto label_2a7044;
        case 0x2a7048u: goto label_2a7048;
        case 0x2a704cu: goto label_2a704c;
        case 0x2a7050u: goto label_2a7050;
        case 0x2a7054u: goto label_2a7054;
        case 0x2a7058u: goto label_2a7058;
        case 0x2a705cu: goto label_2a705c;
        case 0x2a7060u: goto label_2a7060;
        case 0x2a7064u: goto label_2a7064;
        case 0x2a7068u: goto label_2a7068;
        case 0x2a706cu: goto label_2a706c;
        case 0x2a7070u: goto label_2a7070;
        case 0x2a7074u: goto label_2a7074;
        case 0x2a7078u: goto label_2a7078;
        case 0x2a707cu: goto label_2a707c;
        case 0x2a7080u: goto label_2a7080;
        case 0x2a7084u: goto label_2a7084;
        case 0x2a7088u: goto label_2a7088;
        case 0x2a708cu: goto label_2a708c;
        case 0x2a7090u: goto label_2a7090;
        case 0x2a7094u: goto label_2a7094;
        case 0x2a7098u: goto label_2a7098;
        case 0x2a709cu: goto label_2a709c;
        case 0x2a70a0u: goto label_2a70a0;
        case 0x2a70a4u: goto label_2a70a4;
        case 0x2a70a8u: goto label_2a70a8;
        case 0x2a70acu: goto label_2a70ac;
        case 0x2a70b0u: goto label_2a70b0;
        case 0x2a70b4u: goto label_2a70b4;
        case 0x2a70b8u: goto label_2a70b8;
        case 0x2a70bcu: goto label_2a70bc;
        case 0x2a70c0u: goto label_2a70c0;
        case 0x2a70c4u: goto label_2a70c4;
        case 0x2a70c8u: goto label_2a70c8;
        case 0x2a70ccu: goto label_2a70cc;
        case 0x2a70d0u: goto label_2a70d0;
        case 0x2a70d4u: goto label_2a70d4;
        case 0x2a70d8u: goto label_2a70d8;
        case 0x2a70dcu: goto label_2a70dc;
        case 0x2a70e0u: goto label_2a70e0;
        case 0x2a70e4u: goto label_2a70e4;
        case 0x2a70e8u: goto label_2a70e8;
        case 0x2a70ecu: goto label_2a70ec;
        case 0x2a70f0u: goto label_2a70f0;
        case 0x2a70f4u: goto label_2a70f4;
        case 0x2a70f8u: goto label_2a70f8;
        case 0x2a70fcu: goto label_2a70fc;
        case 0x2a7100u: goto label_2a7100;
        case 0x2a7104u: goto label_2a7104;
        case 0x2a7108u: goto label_2a7108;
        case 0x2a710cu: goto label_2a710c;
        case 0x2a7110u: goto label_2a7110;
        case 0x2a7114u: goto label_2a7114;
        case 0x2a7118u: goto label_2a7118;
        case 0x2a711cu: goto label_2a711c;
        case 0x2a7120u: goto label_2a7120;
        case 0x2a7124u: goto label_2a7124;
        case 0x2a7128u: goto label_2a7128;
        case 0x2a712cu: goto label_2a712c;
        case 0x2a7130u: goto label_2a7130;
        case 0x2a7134u: goto label_2a7134;
        case 0x2a7138u: goto label_2a7138;
        case 0x2a713cu: goto label_2a713c;
        case 0x2a7140u: goto label_2a7140;
        case 0x2a7144u: goto label_2a7144;
        case 0x2a7148u: goto label_2a7148;
        case 0x2a714cu: goto label_2a714c;
        case 0x2a7150u: goto label_2a7150;
        case 0x2a7154u: goto label_2a7154;
        case 0x2a7158u: goto label_2a7158;
        case 0x2a715cu: goto label_2a715c;
        case 0x2a7160u: goto label_2a7160;
        case 0x2a7164u: goto label_2a7164;
        case 0x2a7168u: goto label_2a7168;
        case 0x2a716cu: goto label_2a716c;
        case 0x2a7170u: goto label_2a7170;
        case 0x2a7174u: goto label_2a7174;
        case 0x2a7178u: goto label_2a7178;
        case 0x2a717cu: goto label_2a717c;
        case 0x2a7180u: goto label_2a7180;
        case 0x2a7184u: goto label_2a7184;
        case 0x2a7188u: goto label_2a7188;
        case 0x2a718cu: goto label_2a718c;
        case 0x2a7190u: goto label_2a7190;
        case 0x2a7194u: goto label_2a7194;
        case 0x2a7198u: goto label_2a7198;
        case 0x2a719cu: goto label_2a719c;
        case 0x2a71a0u: goto label_2a71a0;
        case 0x2a71a4u: goto label_2a71a4;
        case 0x2a71a8u: goto label_2a71a8;
        case 0x2a71acu: goto label_2a71ac;
        case 0x2a71b0u: goto label_2a71b0;
        case 0x2a71b4u: goto label_2a71b4;
        case 0x2a71b8u: goto label_2a71b8;
        case 0x2a71bcu: goto label_2a71bc;
        case 0x2a71c0u: goto label_2a71c0;
        case 0x2a71c4u: goto label_2a71c4;
        case 0x2a71c8u: goto label_2a71c8;
        case 0x2a71ccu: goto label_2a71cc;
        case 0x2a71d0u: goto label_2a71d0;
        case 0x2a71d4u: goto label_2a71d4;
        case 0x2a71d8u: goto label_2a71d8;
        case 0x2a71dcu: goto label_2a71dc;
        case 0x2a71e0u: goto label_2a71e0;
        case 0x2a71e4u: goto label_2a71e4;
        case 0x2a71e8u: goto label_2a71e8;
        case 0x2a71ecu: goto label_2a71ec;
        case 0x2a71f0u: goto label_2a71f0;
        case 0x2a71f4u: goto label_2a71f4;
        case 0x2a71f8u: goto label_2a71f8;
        case 0x2a71fcu: goto label_2a71fc;
        case 0x2a7200u: goto label_2a7200;
        case 0x2a7204u: goto label_2a7204;
        case 0x2a7208u: goto label_2a7208;
        case 0x2a720cu: goto label_2a720c;
        case 0x2a7210u: goto label_2a7210;
        case 0x2a7214u: goto label_2a7214;
        case 0x2a7218u: goto label_2a7218;
        case 0x2a721cu: goto label_2a721c;
        case 0x2a7220u: goto label_2a7220;
        case 0x2a7224u: goto label_2a7224;
        case 0x2a7228u: goto label_2a7228;
        case 0x2a722cu: goto label_2a722c;
        case 0x2a7230u: goto label_2a7230;
        case 0x2a7234u: goto label_2a7234;
        case 0x2a7238u: goto label_2a7238;
        case 0x2a723cu: goto label_2a723c;
        case 0x2a7240u: goto label_2a7240;
        case 0x2a7244u: goto label_2a7244;
        case 0x2a7248u: goto label_2a7248;
        case 0x2a724cu: goto label_2a724c;
        case 0x2a7250u: goto label_2a7250;
        case 0x2a7254u: goto label_2a7254;
        case 0x2a7258u: goto label_2a7258;
        case 0x2a725cu: goto label_2a725c;
        case 0x2a7260u: goto label_2a7260;
        case 0x2a7264u: goto label_2a7264;
        case 0x2a7268u: goto label_2a7268;
        case 0x2a726cu: goto label_2a726c;
        case 0x2a7270u: goto label_2a7270;
        case 0x2a7274u: goto label_2a7274;
        case 0x2a7278u: goto label_2a7278;
        case 0x2a727cu: goto label_2a727c;
        case 0x2a7280u: goto label_2a7280;
        case 0x2a7284u: goto label_2a7284;
        case 0x2a7288u: goto label_2a7288;
        case 0x2a728cu: goto label_2a728c;
        case 0x2a7290u: goto label_2a7290;
        case 0x2a7294u: goto label_2a7294;
        case 0x2a7298u: goto label_2a7298;
        case 0x2a729cu: goto label_2a729c;
        case 0x2a72a0u: goto label_2a72a0;
        case 0x2a72a4u: goto label_2a72a4;
        case 0x2a72a8u: goto label_2a72a8;
        case 0x2a72acu: goto label_2a72ac;
        case 0x2a72b0u: goto label_2a72b0;
        case 0x2a72b4u: goto label_2a72b4;
        case 0x2a72b8u: goto label_2a72b8;
        case 0x2a72bcu: goto label_2a72bc;
        case 0x2a72c0u: goto label_2a72c0;
        case 0x2a72c4u: goto label_2a72c4;
        case 0x2a72c8u: goto label_2a72c8;
        case 0x2a72ccu: goto label_2a72cc;
        case 0x2a72d0u: goto label_2a72d0;
        case 0x2a72d4u: goto label_2a72d4;
        case 0x2a72d8u: goto label_2a72d8;
        case 0x2a72dcu: goto label_2a72dc;
        case 0x2a72e0u: goto label_2a72e0;
        case 0x2a72e4u: goto label_2a72e4;
        case 0x2a72e8u: goto label_2a72e8;
        case 0x2a72ecu: goto label_2a72ec;
        case 0x2a72f0u: goto label_2a72f0;
        case 0x2a72f4u: goto label_2a72f4;
        case 0x2a72f8u: goto label_2a72f8;
        case 0x2a72fcu: goto label_2a72fc;
        case 0x2a7300u: goto label_2a7300;
        case 0x2a7304u: goto label_2a7304;
        case 0x2a7308u: goto label_2a7308;
        case 0x2a730cu: goto label_2a730c;
        case 0x2a7310u: goto label_2a7310;
        case 0x2a7314u: goto label_2a7314;
        case 0x2a7318u: goto label_2a7318;
        case 0x2a731cu: goto label_2a731c;
        case 0x2a7320u: goto label_2a7320;
        case 0x2a7324u: goto label_2a7324;
        case 0x2a7328u: goto label_2a7328;
        case 0x2a732cu: goto label_2a732c;
        case 0x2a7330u: goto label_2a7330;
        case 0x2a7334u: goto label_2a7334;
        case 0x2a7338u: goto label_2a7338;
        case 0x2a733cu: goto label_2a733c;
        case 0x2a7340u: goto label_2a7340;
        case 0x2a7344u: goto label_2a7344;
        case 0x2a7348u: goto label_2a7348;
        case 0x2a734cu: goto label_2a734c;
        case 0x2a7350u: goto label_2a7350;
        case 0x2a7354u: goto label_2a7354;
        case 0x2a7358u: goto label_2a7358;
        case 0x2a735cu: goto label_2a735c;
        case 0x2a7360u: goto label_2a7360;
        case 0x2a7364u: goto label_2a7364;
        case 0x2a7368u: goto label_2a7368;
        case 0x2a736cu: goto label_2a736c;
        case 0x2a7370u: goto label_2a7370;
        case 0x2a7374u: goto label_2a7374;
        case 0x2a7378u: goto label_2a7378;
        case 0x2a737cu: goto label_2a737c;
        case 0x2a7380u: goto label_2a7380;
        case 0x2a7384u: goto label_2a7384;
        case 0x2a7388u: goto label_2a7388;
        case 0x2a738cu: goto label_2a738c;
        case 0x2a7390u: goto label_2a7390;
        case 0x2a7394u: goto label_2a7394;
        case 0x2a7398u: goto label_2a7398;
        case 0x2a739cu: goto label_2a739c;
        case 0x2a73a0u: goto label_2a73a0;
        case 0x2a73a4u: goto label_2a73a4;
        case 0x2a73a8u: goto label_2a73a8;
        case 0x2a73acu: goto label_2a73ac;
        case 0x2a73b0u: goto label_2a73b0;
        case 0x2a73b4u: goto label_2a73b4;
        case 0x2a73b8u: goto label_2a73b8;
        case 0x2a73bcu: goto label_2a73bc;
        case 0x2a73c0u: goto label_2a73c0;
        case 0x2a73c4u: goto label_2a73c4;
        case 0x2a73c8u: goto label_2a73c8;
        case 0x2a73ccu: goto label_2a73cc;
        case 0x2a73d0u: goto label_2a73d0;
        case 0x2a73d4u: goto label_2a73d4;
        case 0x2a73d8u: goto label_2a73d8;
        case 0x2a73dcu: goto label_2a73dc;
        case 0x2a73e0u: goto label_2a73e0;
        case 0x2a73e4u: goto label_2a73e4;
        case 0x2a73e8u: goto label_2a73e8;
        case 0x2a73ecu: goto label_2a73ec;
        case 0x2a73f0u: goto label_2a73f0;
        case 0x2a73f4u: goto label_2a73f4;
        case 0x2a73f8u: goto label_2a73f8;
        case 0x2a73fcu: goto label_2a73fc;
        case 0x2a7400u: goto label_2a7400;
        case 0x2a7404u: goto label_2a7404;
        case 0x2a7408u: goto label_2a7408;
        case 0x2a740cu: goto label_2a740c;
        case 0x2a7410u: goto label_2a7410;
        case 0x2a7414u: goto label_2a7414;
        case 0x2a7418u: goto label_2a7418;
        case 0x2a741cu: goto label_2a741c;
        case 0x2a7420u: goto label_2a7420;
        case 0x2a7424u: goto label_2a7424;
        case 0x2a7428u: goto label_2a7428;
        case 0x2a742cu: goto label_2a742c;
        case 0x2a7430u: goto label_2a7430;
        case 0x2a7434u: goto label_2a7434;
        case 0x2a7438u: goto label_2a7438;
        case 0x2a743cu: goto label_2a743c;
        case 0x2a7440u: goto label_2a7440;
        case 0x2a7444u: goto label_2a7444;
        case 0x2a7448u: goto label_2a7448;
        case 0x2a744cu: goto label_2a744c;
        case 0x2a7450u: goto label_2a7450;
        case 0x2a7454u: goto label_2a7454;
        case 0x2a7458u: goto label_2a7458;
        case 0x2a745cu: goto label_2a745c;
        case 0x2a7460u: goto label_2a7460;
        case 0x2a7464u: goto label_2a7464;
        case 0x2a7468u: goto label_2a7468;
        case 0x2a746cu: goto label_2a746c;
        case 0x2a7470u: goto label_2a7470;
        case 0x2a7474u: goto label_2a7474;
        case 0x2a7478u: goto label_2a7478;
        default: break;
    }

    ctx->pc = 0x2a6470u;

label_2a6470:
    // 0x2a6470: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2a6470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2a6474:
    // 0x2a6474: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2a6474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_2a6478:
    // 0x2a6478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a647c:
    // 0x2a647c: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x2a647cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
label_2a6480:
    // 0x2a6480: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a6480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6484:
    // 0x2a6484: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6488:
    // 0x2a6488: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2a6488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_2a648c:
    // 0x2a648c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6490:
    // 0x2a6490: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x2a6490u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2a6494:
    // 0x2a6494: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x2a6494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2a6498:
    // 0x2a6498: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x2a6498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2a649c:
    // 0x2a649c: 0x102003f2  beqz        $at, . + 4 + (0x3F2 << 2)
label_2a64a0:
    if (ctx->pc == 0x2A64A0u) {
        ctx->pc = 0x2A64A4u;
        goto label_2a64a4;
    }
    ctx->pc = 0x2A649Cu;
    {
        const bool branch_taken_0x2a649c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a649c) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A64A4u;
label_2a64a4:
    // 0x2a64a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a64a8:
    // 0x2a64a8: 0x246518a0  addiu       $a1, $v1, 0x18A0
    ctx->pc = 0x2a64a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6304));
label_2a64ac:
    // 0x2a64ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a64acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2a64b0:
    // 0x2a64b0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2a64b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2a64b4:
    // 0x2a64b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a64b8:
    // 0x2a64b8: 0x600008  jr          $v1
label_2a64bc:
    if (ctx->pc == 0x2A64BCu) {
        ctx->pc = 0x2A64C0u;
        goto label_2a64c0;
    }
    ctx->pc = 0x2A64B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A64B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A64C0u;
label_2a64c0:
    // 0x2a64c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a64c4:
    // 0x2a64c4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a64c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a64c8:
    // 0x2a64c8: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2a64c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_2a64cc:
    // 0x2a64cc: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a64ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a64d0:
    // 0x2a64d0: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a64d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a64d4:
    // 0x2a64d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a64d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a64d8:
    // 0x2a64d8: 0x8cc80368  lw          $t0, 0x368($a2)
    ctx->pc = 0x2a64d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
label_2a64dc:
    // 0x2a64dc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a64dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a64e0:
    // 0x2a64e0: 0x24060410  addiu       $a2, $zero, 0x410
    ctx->pc = 0x2a64e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2a64e4:
    // 0x2a64e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a64e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a64e8:
    // 0x2a64e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a64e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a64ec:
    // 0x2a64ec: 0xc0965d0  jal         func_259740
label_2a64f0:
    if (ctx->pc == 0x2A64F0u) {
        ctx->pc = 0x2A64F4u;
        goto label_2a64f4;
    }
    ctx->pc = 0x2A64ECu;
    SET_GPR_U32(ctx, 31, 0x2A64F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A64ECu, 0x2A64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64F4u;
label_2a64f4:
    // 0x2a64f4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a64f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a64f8:
    // 0x2a64f8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a64f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a64fc:
    // 0x2a64fc: 0xc4c100d4  lwc1        $f1, 0xD4($a2)
    ctx->pc = 0x2a64fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6500:
    // 0x2a6500: 0x3c084049  lui         $t0, 0x4049
    ctx->pc = 0x2a6500u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16457 << 16));
label_2a6504:
    // 0x2a6504: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x2a6504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
label_2a6508:
    // 0x2a6508: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a6508u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a650c:
    // 0x2a650c: 0x0  nop
    ctx->pc = 0x2a650cu;
    // NOP
label_2a6510:
    // 0x2a6510: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6510u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a6514:
    // 0x2a6514: 0xc058fec  jal         func_163FB0
label_2a6518:
    if (ctx->pc == 0x2A6518u) {
        ctx->pc = 0x2A651Cu;
        goto label_2a651c;
    }
    ctx->pc = 0x2A6514u;
    SET_GPR_U32(ctx, 31, 0x2A651Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6514u, 0x2A651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A651Cu;
label_2a651c:
    // 0x2a651c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6520:
    // 0x2a6520: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a6520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2a6524:
    // 0x2a6524: 0x3c033e0e  lui         $v1, 0x3E0E
    ctx->pc = 0x2a6524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
label_2a6528:
    // 0x2a6528: 0x3462fa35  ori         $v0, $v1, 0xFA35
    ctx->pc = 0x2a6528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_2a652c:
    // 0x2a652c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a652cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6530:
    // 0x2a6530: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6534:
    // 0x2a6534: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6538:
    // 0x2a6538: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x2a6538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2a653c:
    // 0x2a653c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a653cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a6540:
    // 0x2a6540: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x2a6540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a6544:
    // 0x2a6544: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a6544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_2a6548:
    // 0x2a6548: 0x2462dce0  addiu       $v0, $v1, -0x2320
    ctx->pc = 0x2a6548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
label_2a654c:
    // 0x2a654c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a654cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6550:
    // 0x2a6550: 0xc05c848  jal         func_172120
label_2a6554:
    if (ctx->pc == 0x2A6554u) {
        ctx->pc = 0x2A6558u;
        goto label_2a6558;
    }
    ctx->pc = 0x2A6550u;
    SET_GPR_U32(ctx, 31, 0x2A6558u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A6550u, 0x2A6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6558u;
label_2a6558:
    // 0x2a6558: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a6558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_2a655c:
    // 0x2a655c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6560:
    // 0x2a6560: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a6560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6564:
    // 0x2a6564: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6568:
    // 0x2a6568: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a6568u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a656c:
    // 0x2a656c: 0xc058fec  jal         func_163FB0
label_2a6570:
    if (ctx->pc == 0x2A6570u) {
        ctx->pc = 0x2A6574u;
        goto label_2a6574;
    }
    ctx->pc = 0x2A656Cu;
    SET_GPR_U32(ctx, 31, 0x2A6574u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A656Cu, 0x2A6574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6574u;
label_2a6574:
    // 0x2a6574: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6578:
    // 0x2a6578: 0xe4c000d4  swc1        $f0, 0xD4($a2)
    ctx->pc = 0x2a6578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 212), bits); }
label_2a657c:
    // 0x2a657c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6580:
    // 0x2a6580: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a6580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6584:
    // 0x2a6584: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2a6584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_2a6588:
    // 0x2a6588: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2a6588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2a658c:
    // 0x2a658c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a658cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6590:
    // 0x2a6590: 0x0  nop
    ctx->pc = 0x2a6590u;
    // NOP
label_2a6594:
    // 0x2a6594: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2a6594u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a6598:
    // 0x2a6598: 0xc058fec  jal         func_163FB0
label_2a659c:
    if (ctx->pc == 0x2A659Cu) {
        ctx->pc = 0x2A65A0u;
        goto label_2a65a0;
    }
    ctx->pc = 0x2A6598u;
    SET_GPR_U32(ctx, 31, 0x2A65A0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6598u, 0x2A65A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65A0u;
label_2a65a0:
    // 0x2a65a0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a65a4:
    // 0x2a65a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a65a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2a65a8:
    // 0x2a65a8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a65a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a65ac:
    // 0x2a65ac: 0xc4c10120  lwc1        $f1, 0x120($a2)
    ctx->pc = 0x2a65acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a65b0:
    // 0x2a65b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a65b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2a65b4:
    // 0x2a65b4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a65b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a65b8:
    // 0x2a65b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a65b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a65bc:
    // 0x2a65bc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a65bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2a65c0:
    // 0x2a65c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a65c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a65c4:
    // 0x2a65c4: 0x0  nop
    ctx->pc = 0x2a65c4u;
    // NOP
label_2a65c8:
    // 0x2a65c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a65c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2a65cc:
    // 0x2a65cc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a65d0:
    // 0x2a65d0: 0xc4610128  lwc1        $f1, 0x128($v1)
    ctx->pc = 0x2a65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a65d4:
    // 0x2a65d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a65d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2a65d8:
    // 0x2a65d8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a65d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a65dc:
    // 0x2a65dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a65dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a65e0:
    // 0x2a65e0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a65e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2a65e4:
    // 0x2a65e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a65e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2a65e8:
    // 0x2a65e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a65e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a65ec:
    // 0x2a65ec: 0x0  nop
    ctx->pc = 0x2a65ecu;
    // NOP
label_2a65f0:
    // 0x2a65f0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a65f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2a65f4:
    // 0x2a65f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a65f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a65f8:
    // 0x2a65f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a65f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a65fc:
    // 0x2a65fc: 0xc040c24  jal         func_103090
label_2a6600:
    if (ctx->pc == 0x2A6600u) {
        ctx->pc = 0x2A6604u;
        goto label_2a6604;
    }
    ctx->pc = 0x2A65FCu;
    SET_GPR_U32(ctx, 31, 0x2A6604u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A6604u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A6604u) { return; }
    ctx->pc = 0x2A6604u;
label_2a6604:
    // 0x2a6604: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2a6604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
label_2a6608:
    // 0x2a6608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a6608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a660c:
    // 0x2a660c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6610:
    // 0x2a6610: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a6610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a6614:
    // 0x2a6614: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6618:
    // 0x2a6618: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a6618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
label_2a661c:
    // 0x2a661c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a661cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6620:
    // 0x2a6620: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6624:
    // 0x2a6624: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x2a6624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
label_2a6628:
    // 0x2a6628: 0x3c06c2f0  lui         $a2, 0xC2F0
    ctx->pc = 0x2a6628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49904 << 16));
label_2a662c:
    // 0x2a662c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2a662cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6630:
    // 0x2a6630: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a6630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6634:
    // 0x2a6634: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a6634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a6638:
    // 0x2a6638: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a663c:
    // 0x2a663c: 0xe4e00188  swc1        $f0, 0x188($a3)
    ctx->pc = 0x2a663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 392), bits); }
label_2a6640:
    // 0x2a6640: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a6640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6644:
    // 0x2a6644: 0x250300d0  addiu       $v1, $t0, 0xD0
    ctx->pc = 0x2a6644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
label_2a6648:
    // 0x2a6648: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2a6648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2a664c:
    // 0x2a664c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a6650:
    // 0x2a6650: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2a6650u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_2a6654:
    // 0x2a6654: 0xc067648  jal         func_19D920
label_2a6658:
    if (ctx->pc == 0x2A6658u) {
        ctx->pc = 0x2A665Cu;
        goto label_2a665c;
    }
    ctx->pc = 0x2A6654u;
    SET_GPR_U32(ctx, 31, 0x2A665Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A6654u, 0x2A665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A665Cu;
label_2a665c:
    // 0x2a665c: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2a665cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_2a6660:
    // 0x2a6660: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x2a6660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_2a6664:
    // 0x2a6664: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a6664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6668:
    // 0x2a6668: 0x0  nop
    ctx->pc = 0x2a6668u;
    // NOP
label_2a666c:
    // 0x2a666c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a666cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a6670:
    // 0x2a6670: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2a6670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_2a6674:
    // 0x2a6674: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6674u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6678:
    // 0x2a6678: 0x0  nop
    ctx->pc = 0x2a6678u;
    // NOP
label_2a667c:
    // 0x2a667c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a667cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6680:
    // 0x2a6680: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6684:
    // 0x2a6684: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6684u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a6688:
    // 0x2a6688: 0xc058fec  jal         func_163FB0
label_2a668c:
    if (ctx->pc == 0x2A668Cu) {
        ctx->pc = 0x2A6690u;
        goto label_2a6690;
    }
    ctx->pc = 0x2A6688u;
    SET_GPR_U32(ctx, 31, 0x2A6690u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6688u, 0x2A6690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6690u;
label_2a6690:
    // 0x2a6690: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2a6694:
    // 0x2a6694: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6698:
    // 0x2a6698: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2a6698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_2a669c:
    // 0x2a669c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2a669cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_2a66a0:
    // 0x2a66a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a66a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2a66a4:
    // 0x2a66a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a66a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2a66a8:
    // 0x2a66a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a66a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a66ac:
    // 0x2a66ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2a66acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2a66b0:
    // 0x2a66b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2a66b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_2a66b4:
    // 0x2a66b4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2a66b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_2a66b8:
    // 0x2a66b8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a66bc:
    // 0x2a66bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a66bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a66c0:
    // 0x2a66c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a66c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a66c4:
    // 0x2a66c4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a66c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2a66c8:
    // 0x2a66c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a66c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a66cc:
    // 0x2a66cc: 0xc06371c  jal         func_18DC70
label_2a66d0:
    if (ctx->pc == 0x2A66D0u) {
        ctx->pc = 0x2A66D4u;
        goto label_2a66d4;
    }
    ctx->pc = 0x2A66CCu;
    SET_GPR_U32(ctx, 31, 0x2A66D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A66CCu, 0x2A66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66D4u;
label_2a66d4:
    // 0x2a66d4: 0xc067648  jal         func_19D920
label_2a66d8:
    if (ctx->pc == 0x2A66D8u) {
        ctx->pc = 0x2A66DCu;
        goto label_2a66dc;
    }
    ctx->pc = 0x2A66D4u;
    SET_GPR_U32(ctx, 31, 0x2A66DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A66D4u, 0x2A66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66DCu;
label_2a66dc:
    // 0x2a66dc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_2a66e0:
    // 0x2a66e0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a66e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_2a66e4:
    // 0x2a66e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a66e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a66e8:
    // 0x2a66e8: 0x0  nop
    ctx->pc = 0x2a66e8u;
    // NOP
label_2a66ec:
    // 0x2a66ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a66ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a66f0:
    // 0x2a66f0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2a66f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_2a66f4:
    // 0x2a66f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a66f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a66f8:
    // 0x2a66f8: 0x0  nop
    ctx->pc = 0x2a66f8u;
    // NOP
label_2a66fc:
    // 0x2a66fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a66fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6700:
    // 0x2a6700: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6704:
    // 0x2a6704: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6704u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a6708:
    // 0x2a6708: 0xc058fec  jal         func_163FB0
label_2a670c:
    if (ctx->pc == 0x2A670Cu) {
        ctx->pc = 0x2A6710u;
        goto label_2a6710;
    }
    ctx->pc = 0x2A6708u;
    SET_GPR_U32(ctx, 31, 0x2A6710u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6708u, 0x2A6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6710u;
label_2a6710:
    // 0x2a6710: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2a6714:
    // 0x2a6714: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6718:
    // 0x2a6718: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2a6718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
label_2a671c:
    // 0x2a671c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2a671cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_2a6720:
    // 0x2a6720: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2a6720u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2a6724:
    // 0x2a6724: 0x84c38  dsll        $t1, $t0, 16
    ctx->pc = 0x2a6724u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << 16);
label_2a6728:
    // 0x2a6728: 0x352affff  ori         $t2, $t1, 0xFFFF
    ctx->pc = 0x2a6728u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_2a672c:
    // 0x2a672c: 0xea1024  and         $v0, $a3, $t2
    ctx->pc = 0x2a672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
label_2a6730:
    // 0x2a6730: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a6730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2a6734:
    // 0x2a6734: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2a6734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_2a6738:
    // 0x2a6738: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a673c:
    // 0x2a673c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a673cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a6740:
    // 0x2a6740: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a6740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a6744:
    // 0x2a6744: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a6744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2a6748:
    // 0x2a6748: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a6748u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a674c:
    // 0x2a674c: 0xc06371c  jal         func_18DC70
label_2a6750:
    if (ctx->pc == 0x2A6750u) {
        ctx->pc = 0x2A6754u;
        goto label_2a6754;
    }
    ctx->pc = 0x2A674Cu;
    SET_GPR_U32(ctx, 31, 0x2A6754u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A674Cu, 0x2A6754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6754u;
label_2a6754:
    // 0x2a6754: 0xc067648  jal         func_19D920
label_2a6758:
    if (ctx->pc == 0x2A6758u) {
        ctx->pc = 0x2A675Cu;
        goto label_2a675c;
    }
    ctx->pc = 0x2A6754u;
    SET_GPR_U32(ctx, 31, 0x2A675Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A6754u, 0x2A675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A675Cu;
label_2a675c:
    // 0x2a675c: 0x3c083c8e  lui         $t0, 0x3C8E
    ctx->pc = 0x2a675cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15502 << 16));
label_2a6760:
    // 0x2a6760: 0x3507fa35  ori         $a3, $t0, 0xFA35
    ctx->pc = 0x2a6760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64053);
label_2a6764:
    // 0x2a6764: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a6764u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6768:
    // 0x2a6768: 0x0  nop
    ctx->pc = 0x2a6768u;
    // NOP
label_2a676c:
    // 0x2a676c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a676cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a6770:
    // 0x2a6770: 0x3c0942b4  lui         $t1, 0x42B4
    ctx->pc = 0x2a6770u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17076 << 16));
label_2a6774:
    // 0x2a6774: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a6774u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6778:
    // 0x2a6778: 0x0  nop
    ctx->pc = 0x2a6778u;
    // NOP
label_2a677c:
    // 0x2a677c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a677cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6780:
    // 0x2a6780: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6784:
    // 0x2a6784: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6784u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a6788:
    // 0x2a6788: 0xc058fec  jal         func_163FB0
label_2a678c:
    if (ctx->pc == 0x2A678Cu) {
        ctx->pc = 0x2A6790u;
        goto label_2a6790;
    }
    ctx->pc = 0x2A6788u;
    SET_GPR_U32(ctx, 31, 0x2A6790u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6788u, 0x2A6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6790u;
label_2a6790:
    // 0x2a6790: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2a6794:
    // 0x2a6794: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a6794u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6798:
    // 0x2a6798: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2a6798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_2a679c:
    // 0x2a679c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2a67a0:
    // 0x2a67a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a67a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2a67a4:
    // 0x2a67a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a67a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2a67a8:
    // 0x2a67a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a67a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a67ac:
    // 0x2a67ac: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x2a67acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a67b0:
    // 0x2a67b0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a67b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_2a67b4:
    // 0x2a67b4: 0x34a60008  ori         $a2, $a1, 0x8
    ctx->pc = 0x2a67b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_2a67b8:
    // 0x2a67b8: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a67b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a67bc:
    // 0x2a67bc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a67bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a67c0:
    // 0x2a67c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a67c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a67c4:
    // 0x2a67c4: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2a67c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a67c8:
    // 0x2a67c8: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a67c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a67cc:
    // 0x2a67cc: 0x8ce90130  lw          $t1, 0x130($a3)
    ctx->pc = 0x2a67ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_2a67d0:
    // 0x2a67d0: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a67d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2a67d4:
    // 0x2a67d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a67d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a67d8:
    // 0x2a67d8: 0xc06371c  jal         func_18DC70
label_2a67dc:
    if (ctx->pc == 0x2A67DCu) {
        ctx->pc = 0x2A67E0u;
        goto label_2a67e0;
    }
    ctx->pc = 0x2A67D8u;
    SET_GPR_U32(ctx, 31, 0x2A67E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A67D8u, 0x2A67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A67E0u;
label_2a67e0:
    // 0x2a67e0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2a67e4:
    // 0x2a67e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a67e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a67e8:
    // 0x2a67e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a67ec:
    // 0x2a67ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2a67f0:
    // 0x2a67f0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a67f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2a67f4:
    // 0x2a67f4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a67f8:
    // 0x2a67f8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a67fc:
    // 0x2a67fc: 0x14800088  bnez        $a0, . + 4 + (0x88 << 2)
label_2a6800:
    if (ctx->pc == 0x2A6800u) {
        ctx->pc = 0x2A6804u;
        goto label_2a6804;
    }
    ctx->pc = 0x2A67FCu;
    {
        const bool branch_taken_0x2a67fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a67fc) {
            ctx->pc = 0x2A6A20u;
            goto label_2a6a20;
        }
    }
    ctx->pc = 0x2A6804u;
label_2a6804:
    // 0x2a6804: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2a6804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a6808:
    // 0x2a6808: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6808u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2a680c:
    // 0x2a680c: 0xc0675a4  jal         func_19D690
label_2a6810:
    if (ctx->pc == 0x2A6810u) {
        ctx->pc = 0x2A6814u;
        goto label_2a6814;
    }
    ctx->pc = 0x2A680Cu;
    SET_GPR_U32(ctx, 31, 0x2A6814u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A680Cu, 0x2A6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6814u;
label_2a6814:
    // 0x2a6814: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a6814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a6818:
    // 0x2a6818: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a6818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a681c:
    // 0x2a681c: 0xc0675a4  jal         func_19D690
label_2a6820:
    if (ctx->pc == 0x2A6820u) {
        ctx->pc = 0x2A6824u;
        goto label_2a6824;
    }
    ctx->pc = 0x2A681Cu;
    SET_GPR_U32(ctx, 31, 0x2A6824u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A681Cu, 0x2A6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6824u;
label_2a6824:
    // 0x2a6824: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a6824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a6828:
    // 0x2a6828: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a6828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2a682c:
    // 0x2a682c: 0xc0675a4  jal         func_19D690
label_2a6830:
    if (ctx->pc == 0x2A6830u) {
        ctx->pc = 0x2A6834u;
        goto label_2a6834;
    }
    ctx->pc = 0x2A682Cu;
    SET_GPR_U32(ctx, 31, 0x2A6834u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A682Cu, 0x2A6834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6834u;
label_2a6834:
    // 0x2a6834: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a6834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_2a6838:
    // 0x2a6838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a683c:
    // 0x2a683c: 0x0  nop
    ctx->pc = 0x2a683cu;
    // NOP
label_2a6840:
    // 0x2a6840: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a6840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2a6844:
    // 0x2a6844: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x2a6844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
label_2a6848:
    // 0x2a6848: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a684c:
    // 0x2a684c: 0x0  nop
    ctx->pc = 0x2a684cu;
    // NOP
label_2a6850:
    // 0x2a6850: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a6850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2a6854:
    // 0x2a6854: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a6854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_2a6858:
    // 0x2a6858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a685c:
    // 0x2a685c: 0x0  nop
    ctx->pc = 0x2a685cu;
    // NOP
label_2a6860:
    // 0x2a6860: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a6860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2a6864:
    // 0x2a6864: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2a6864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
label_2a6868:
    // 0x2a6868: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a686c:
    // 0x2a686c: 0x0  nop
    ctx->pc = 0x2a686cu;
    // NOP
label_2a6870:
    // 0x2a6870: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a6870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_2a6874:
    // 0x2a6874: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a6874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2a6878:
    // 0x2a6878: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a6878u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a687c:
    // 0x2a687c: 0x0  nop
    ctx->pc = 0x2a687cu;
    // NOP
label_2a6880:
    // 0x2a6880: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a6880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2a6884:
    // 0x2a6884: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a6884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_2a6888:
    // 0x2a6888: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a6888u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a688c:
    // 0x2a688c: 0x0  nop
    ctx->pc = 0x2a688cu;
    // NOP
label_2a6890:
    // 0x2a6890: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a6890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2a6894:
    // 0x2a6894: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a6894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a6898:
    // 0x2a6898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a689c:
    // 0x2a689c: 0x0  nop
    ctx->pc = 0x2a689cu;
    // NOP
label_2a68a0:
    // 0x2a68a0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a68a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2a68a4:
    // 0x2a68a4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a68a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a68a8:
    // 0x2a68a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a68a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a68ac:
    // 0x2a68ac: 0x0  nop
    ctx->pc = 0x2a68acu;
    // NOP
label_2a68b0:
    // 0x2a68b0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a68b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2a68b4:
    // 0x2a68b4: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x2a68b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
label_2a68b8:
    // 0x2a68b8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a68b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a68bc:
    // 0x2a68bc: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a68bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
label_2a68c0:
    // 0x2a68c0: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a68c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
label_2a68c4:
    // 0x2a68c4: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a68c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a68c8:
    // 0x2a68c8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a68cc:
    // 0x2a68cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a68d0:
    // 0x2a68d0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a68d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a68d4:
    // 0x2a68d4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a68d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a68d8:
    // 0x2a68d8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a68d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a68dc:
    // 0x2a68dc: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a68dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a68e0:
    // 0x2a68e0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a68e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a68e4:
    // 0x2a68e4: 0xc086970  jal         func_21A5C0
label_2a68e8:
    if (ctx->pc == 0x2A68E8u) {
        ctx->pc = 0x2A68ECu;
        goto label_2a68ec;
    }
    ctx->pc = 0x2A68E4u;
    SET_GPR_U32(ctx, 31, 0x2A68ECu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A68E4u, 0x2A68ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68ECu;
label_2a68ec:
    // 0x2a68ec: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a68ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
label_2a68f0:
    // 0x2a68f0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a68f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a68f4:
    // 0x2a68f4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a68f8:
    // 0x2a68f8: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x2a68f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a68fc:
    // 0x2a68fc: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x2a68fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6900:
    // 0x2a6900: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6904:
    // 0x2a6904: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a6904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a6908:
    // 0x2a6908: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a6908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a690c:
    // 0x2a690c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a690cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a6910:
    // 0x2a6910: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a6910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a6914:
    // 0x2a6914: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a6914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a6918:
    // 0x2a6918: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a6918u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a691c:
    // 0x2a691c: 0xc086970  jal         func_21A5C0
label_2a6920:
    if (ctx->pc == 0x2A6920u) {
        ctx->pc = 0x2A6924u;
        goto label_2a6924;
    }
    ctx->pc = 0x2A691Cu;
    SET_GPR_U32(ctx, 31, 0x2A6924u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A691Cu, 0x2A6924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6924u;
label_2a6924:
    // 0x2a6924: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a6924u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
label_2a6928:
    // 0x2a6928: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a6928u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a692c:
    // 0x2a692c: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a692cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
label_2a6930:
    // 0x2a6930: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a6930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_2a6934:
    // 0x2a6934: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a6934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6938:
    // 0x2a6938: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a693c:
    // 0x2a693c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2a6940:
    // 0x2a6940: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a6940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a6944:
    // 0x2a6944: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a6944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a6948:
    // 0x2a6948: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a6948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a694c:
    // 0x2a694c: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a694cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a6950:
    // 0x2a6950: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a6950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a6954:
    // 0x2a6954: 0xc086970  jal         func_21A5C0
label_2a6958:
    if (ctx->pc == 0x2A6958u) {
        ctx->pc = 0x2A695Cu;
        goto label_2a695c;
    }
    ctx->pc = 0x2A6954u;
    SET_GPR_U32(ctx, 31, 0x2A695Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6954u, 0x2A695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A695Cu;
label_2a695c:
    // 0x2a695c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a695cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6960:
    // 0x2a6960: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a6960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_2a6964:
    // 0x2a6964: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a6964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6968:
    // 0x2a6968: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a6968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a696c:
    // 0x2a696c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x2a696cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a6970:
    // 0x2a6970: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a6970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6974:
    // 0x2a6974: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6978:
    // 0x2a6978: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6978u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a697c:
    // 0x2a697c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2a6980:
    // 0x2a6980: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a6980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a6984:
    // 0x2a6984: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a6984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a6988:
    // 0x2a6988: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a6988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a698c:
    // 0x2a698c: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a698cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a6990:
    // 0x2a6990: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a6990u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a6994:
    // 0x2a6994: 0xc086970  jal         func_21A5C0
label_2a6998:
    if (ctx->pc == 0x2A6998u) {
        ctx->pc = 0x2A699Cu;
        goto label_2a699c;
    }
    ctx->pc = 0x2A6994u;
    SET_GPR_U32(ctx, 31, 0x2A699Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6994u, 0x2A699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A699Cu;
label_2a699c:
    // 0x2a699c: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a699cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_2a69a0:
    // 0x2a69a0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a69a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a69a4:
    // 0x2a69a4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a69a8:
    // 0x2a69a8: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x2a69a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a69ac:
    // 0x2a69ac: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a69acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a69b0:
    // 0x2a69b0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a69b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a69b4:
    // 0x2a69b4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a69b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2a69b8:
    // 0x2a69b8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a69b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a69bc:
    // 0x2a69bc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a69bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a69c0:
    // 0x2a69c0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a69c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a69c4:
    // 0x2a69c4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a69c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a69c8:
    // 0x2a69c8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a69c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a69cc:
    // 0x2a69cc: 0xc086970  jal         func_21A5C0
label_2a69d0:
    if (ctx->pc == 0x2A69D0u) {
        ctx->pc = 0x2A69D4u;
        goto label_2a69d4;
    }
    ctx->pc = 0x2A69CCu;
    SET_GPR_U32(ctx, 31, 0x2A69D4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A69CCu, 0x2A69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69D4u;
label_2a69d4:
    // 0x2a69d4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2a69d8:
    // 0x2a69d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a69d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a69dc:
    // 0x2a69dc: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x2a69dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
label_2a69e0:
    // 0x2a69e0: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2a69e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
label_2a69e4:
    // 0x2a69e4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a69e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a69e8:
    // 0x2a69e8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a69e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a69ec:
    // 0x2a69ec: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a69ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a69f0:
    // 0x2a69f0: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x2a69f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a69f4:
    // 0x2a69f4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a69f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a69f8:
    // 0x2a69f8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a69f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a69fc:
    // 0x2a69fc: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a69fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a6a00:
    // 0x2a6a00: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a6a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a6a04:
    // 0x2a6a04: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a6a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a6a08:
    // 0x2a6a08: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a6a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a6a0c:
    // 0x2a6a0c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a6a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a6a10:
    // 0x2a6a10: 0xc086970  jal         func_21A5C0
label_2a6a14:
    if (ctx->pc == 0x2A6A14u) {
        ctx->pc = 0x2A6A18u;
        goto label_2a6a18;
    }
    ctx->pc = 0x2A6A10u;
    SET_GPR_U32(ctx, 31, 0x2A6A18u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6A10u, 0x2A6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A18u;
label_2a6a18:
    // 0x2a6a18: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2a6a1c:
    if (ctx->pc == 0x2A6A1Cu) {
        ctx->pc = 0x2A6A20u;
        goto label_2a6a20;
    }
    ctx->pc = 0x2A6A18u;
    {
        const bool branch_taken_0x2a6a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6a18) {
            ctx->pc = 0x2A6A98u;
            goto label_2a6a98;
        }
    }
    ctx->pc = 0x2A6A20u;
label_2a6a20:
    // 0x2a6a20: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a6a24:
    // 0x2a6a24: 0xc0675a4  jal         func_19D690
label_2a6a28:
    if (ctx->pc == 0x2A6A28u) {
        ctx->pc = 0x2A6A2Cu;
        goto label_2a6a2c;
    }
    ctx->pc = 0x2A6A24u;
    SET_GPR_U32(ctx, 31, 0x2A6A2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6A24u, 0x2A6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A2Cu;
label_2a6a2c:
    // 0x2a6a2c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6a30:
    // 0x2a6a30: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a6a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a6a34:
    // 0x2a6a34: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a6a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a6a38:
    // 0x2a6a38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6a3c:
    // 0x2a6a3c: 0xc086b14  jal         func_21AC50
label_2a6a40:
    if (ctx->pc == 0x2A6A40u) {
        ctx->pc = 0x2A6A44u;
        goto label_2a6a44;
    }
    ctx->pc = 0x2A6A3Cu;
    SET_GPR_U32(ctx, 31, 0x2A6A44u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6A3Cu, 0x2A6A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A44u;
label_2a6a44:
    // 0x2a6a44: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6a48:
    // 0x2a6a48: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a6a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a6a4c:
    // 0x2a6a4c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a6a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a6a50:
    // 0x2a6a50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6a54:
    // 0x2a6a54: 0xc086b14  jal         func_21AC50
label_2a6a58:
    if (ctx->pc == 0x2A6A58u) {
        ctx->pc = 0x2A6A5Cu;
        goto label_2a6a5c;
    }
    ctx->pc = 0x2A6A54u;
    SET_GPR_U32(ctx, 31, 0x2A6A5Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6A54u, 0x2A6A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A5Cu;
label_2a6a5c:
    // 0x2a6a5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6a5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6a60:
    // 0x2a6a60: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6a64:
    // 0x2a6a64: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2a6a68:
    // 0x2a6a68: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a6a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a6a6c:
    // 0x2a6a6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6a70:
    // 0x2a6a70: 0xc086b14  jal         func_21AC50
label_2a6a74:
    if (ctx->pc == 0x2A6A74u) {
        ctx->pc = 0x2A6A78u;
        goto label_2a6a78;
    }
    ctx->pc = 0x2A6A70u;
    SET_GPR_U32(ctx, 31, 0x2A6A78u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6A70u, 0x2A6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A78u;
label_2a6a78:
    // 0x2a6a78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6a78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6a7c:
    // 0x2a6a7c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6a80:
    // 0x2a6a80: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a6a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a6a84:
    // 0x2a6a84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a6a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a6a88:
    // 0x2a6a88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6a8c:
    // 0x2a6a8c: 0xc086b14  jal         func_21AC50
label_2a6a90:
    if (ctx->pc == 0x2A6A90u) {
        ctx->pc = 0x2A6A94u;
        goto label_2a6a94;
    }
    ctx->pc = 0x2A6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A6A94u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6A8Cu, 0x2A6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A94u;
label_2a6a94:
    // 0x2a6a94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6a94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6a98:
    // 0x2a6a98: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6a9c:
    // 0x2a6a9c: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a6a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6aa0:
    // 0x2a6aa0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2a6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_2a6aa4:
    // 0x2a6aa4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2a6aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2a6aa8:
    // 0x2a6aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6aac:
    // 0x2a6aac: 0x0  nop
    ctx->pc = 0x2a6aacu;
    // NOP
label_2a6ab0:
    // 0x2a6ab0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6ab0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a6ab4:
    // 0x2a6ab4: 0xc058fec  jal         func_163FB0
label_2a6ab8:
    if (ctx->pc == 0x2A6AB8u) {
        ctx->pc = 0x2A6ABCu;
        goto label_2a6abc;
    }
    ctx->pc = 0x2A6AB4u;
    SET_GPR_U32(ctx, 31, 0x2A6ABCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6AB4u, 0x2A6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6ABCu;
label_2a6abc:
    // 0x2a6abc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6ac0:
    // 0x2a6ac0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2a6ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_2a6ac4:
    // 0x2a6ac4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6ac8:
    // 0x2a6ac8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6acc:
    // 0x2a6acc: 0x3c043d0e  lui         $a0, 0x3D0E
    ctx->pc = 0x2a6accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15630 << 16));
label_2a6ad0:
    // 0x2a6ad0: 0x3483fa35  ori         $v1, $a0, 0xFA35
    ctx->pc = 0x2a6ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
label_2a6ad4:
    // 0x2a6ad4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a6ad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6ad8:
    // 0x2a6ad8: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x2a6ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2a6adc:
    // 0x2a6adc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a6adcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a6ae0:
    // 0x2a6ae0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2a6ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a6ae4:
    // 0x2a6ae4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_2a6ae8:
    // 0x2a6ae8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a6ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_2a6aec:
    // 0x2a6aec: 0xc05c848  jal         func_172120
label_2a6af0:
    if (ctx->pc == 0x2A6AF0u) {
        ctx->pc = 0x2A6AF4u;
        goto label_2a6af4;
    }
    ctx->pc = 0x2A6AECu;
    SET_GPR_U32(ctx, 31, 0x2A6AF4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A6AECu, 0x2A6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AF4u;
label_2a6af4:
    // 0x2a6af4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a6af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_2a6af8:
    // 0x2a6af8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6afc:
    // 0x2a6afc: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x2a6afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6b00:
    // 0x2a6b00: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a6b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6b04:
    // 0x2a6b04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a6b04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a6b08:
    // 0x2a6b08: 0xc058fec  jal         func_163FB0
label_2a6b0c:
    if (ctx->pc == 0x2A6B0Cu) {
        ctx->pc = 0x2A6B10u;
        goto label_2a6b10;
    }
    ctx->pc = 0x2A6B08u;
    SET_GPR_U32(ctx, 31, 0x2A6B10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6B08u, 0x2A6B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B10u;
label_2a6b10:
    // 0x2a6b10: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b14:
    // 0x2a6b14: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x2a6b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
label_2a6b18:
    // 0x2a6b18: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b1c:
    // 0x2a6b1c: 0xc4c100d4  lwc1        $f1, 0xD4($a2)
    ctx->pc = 0x2a6b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6b20:
    // 0x2a6b20: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2a6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2a6b24:
    // 0x2a6b24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a6b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2a6b28:
    // 0x2a6b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6b2c:
    // 0x2a6b2c: 0x0  nop
    ctx->pc = 0x2a6b2cu;
    // NOP
label_2a6b30:
    // 0x2a6b30: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2a6b30u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a6b34:
    // 0x2a6b34: 0xc058fec  jal         func_163FB0
label_2a6b38:
    if (ctx->pc == 0x2A6B38u) {
        ctx->pc = 0x2A6B3Cu;
        goto label_2a6b3c;
    }
    ctx->pc = 0x2A6B34u;
    SET_GPR_U32(ctx, 31, 0x2A6B3Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6B34u, 0x2A6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B3Cu;
label_2a6b3c:
    // 0x2a6b3c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b40:
    // 0x2a6b40: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a6b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2a6b44:
    // 0x2a6b44: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b48:
    // 0x2a6b48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a6b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a6b4c:
    // 0x2a6b4c: 0xc096b40  jal         func_25AD00
label_2a6b50:
    if (ctx->pc == 0x2A6B50u) {
        ctx->pc = 0x2A6B54u;
        goto label_2a6b54;
    }
    ctx->pc = 0x2A6B4Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A6B4Cu, 0x2A6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B54u;
label_2a6b54:
    // 0x2a6b54: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b58:
    // 0x2a6b58: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b5c:
    // 0x2a6b5c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b60:
    // 0x2a6b60: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a6b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2a6b64:
    // 0x2a6b64: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a6b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_2a6b68:
    // 0x2a6b68: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a6b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_2a6b6c:
    // 0x2a6b6c: 0xc0675a8  jal         func_19D6A0
label_2a6b70:
    if (ctx->pc == 0x2A6B70u) {
        ctx->pc = 0x2A6B74u;
        goto label_2a6b74;
    }
    ctx->pc = 0x2A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B74u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A6B6Cu, 0x2A6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B74u;
label_2a6b74:
    // 0x2a6b74: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b78:
    // 0x2a6b78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6b78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a6b7c:
    // 0x2a6b7c: 0xc0a748c  jal         func_29D230
label_2a6b80:
    if (ctx->pc == 0x2A6B80u) {
        ctx->pc = 0x2A6B84u;
        goto label_2a6b84;
    }
    ctx->pc = 0x2A6B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B84u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A6B7Cu, 0x2A6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B84u;
label_2a6b84:
    // 0x2a6b84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6b84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6b88:
    // 0x2a6b88: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b8c:
    // 0x2a6b8c: 0xc0b3764  jal         func_2CDD90
label_2a6b90:
    if (ctx->pc == 0x2A6B90u) {
        ctx->pc = 0x2A6B94u;
        goto label_2a6b94;
    }
    ctx->pc = 0x2A6B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B94u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A6B8Cu, 0x2A6B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B94u;
label_2a6b94:
    // 0x2a6b94: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6b94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6b98:
    // 0x2a6b98: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6b9c:
    // 0x2a6b9c: 0xc0aa354  jal         func_2A8D50
label_2a6ba0:
    if (ctx->pc == 0x2A6BA0u) {
        ctx->pc = 0x2A6BA4u;
        goto label_2a6ba4;
    }
    ctx->pc = 0x2A6B9Cu;
    SET_GPR_U32(ctx, 31, 0x2A6BA4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A6B9Cu, 0x2A6BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BA4u;
label_2a6ba4:
    // 0x2a6ba4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6ba4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6ba8:
    // 0x2a6ba8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6bac:
    // 0x2a6bac: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
label_2a6bb0:
    // 0x2a6bb0: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x2a6bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_2a6bb4:
    // 0x2a6bb4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a6bb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6bb8:
    // 0x2a6bb8: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a6bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6bbc:
    // 0x2a6bbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6bc0:
    // 0x2a6bc0: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a6bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
label_2a6bc4:
    // 0x2a6bc4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6bc8:
    // 0x2a6bc8: 0x3c053f73  lui         $a1, 0x3F73
    ctx->pc = 0x2a6bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16243 << 16));
label_2a6bcc:
    // 0x2a6bcc: 0x34a43333  ori         $a0, $a1, 0x3333
    ctx->pc = 0x2a6bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
label_2a6bd0:
    // 0x2a6bd0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a6bd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6bd4:
    // 0x2a6bd4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2a6bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6bd8:
    // 0x2a6bd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6bdc:
    // 0x2a6bdc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a6bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_2a6be0:
    // 0x2a6be0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6be4:
    // 0x2a6be4: 0x90c709e7  lbu         $a3, 0x9E7($a2)
    ctx->pc = 0x2a6be4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
label_2a6be8:
    // 0x2a6be8: 0x10e0021f  beqz        $a3, . + 4 + (0x21F << 2)
label_2a6bec:
    if (ctx->pc == 0x2A6BECu) {
        ctx->pc = 0x2A6BF0u;
        goto label_2a6bf0;
    }
    ctx->pc = 0x2A6BE8u;
    {
        const bool branch_taken_0x2a6be8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6be8) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A6BF0u;
label_2a6bf0:
    // 0x2a6bf0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6bf4:
    // 0x2a6bf4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6bf8:
    // 0x2a6bf8: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x2a6bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
label_2a6bfc:
    // 0x2a6bfc: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6c00:
    // 0x2a6c00: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a6c00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6c04:
    // 0x2a6c04: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a6c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a6c08:
    // 0x2a6c08: 0x8ce50368  lw          $a1, 0x368($a3)
    ctx->pc = 0x2a6c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 872)));
label_2a6c0c:
    // 0x2a6c0c: 0x24060411  addiu       $a2, $zero, 0x411
    ctx->pc = 0x2a6c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
label_2a6c10:
    // 0x2a6c10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6c14:
    // 0x2a6c14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a6c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a6c18:
    // 0x2a6c18: 0xc0965d0  jal         func_259740
label_2a6c1c:
    if (ctx->pc == 0x2A6C1Cu) {
        ctx->pc = 0x2A6C20u;
        goto label_2a6c20;
    }
    ctx->pc = 0x2A6C18u;
    SET_GPR_U32(ctx, 31, 0x2A6C20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A6C18u, 0x2A6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C20u;
label_2a6c20:
    // 0x2a6c20: 0x10000211  b           . + 4 + (0x211 << 2)
label_2a6c24:
    if (ctx->pc == 0x2A6C24u) {
        ctx->pc = 0x2A6C28u;
        goto label_2a6c28;
    }
    ctx->pc = 0x2A6C20u;
    {
        const bool branch_taken_0x2a6c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6c20) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A6C28u;
label_2a6c28:
    // 0x2a6c28: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6c2c:
    // 0x2a6c2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6c30:
    // 0x2a6c30: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a6c34:
    // 0x2a6c34: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2a6c34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2a6c38:
    // 0x2a6c38: 0xc096b40  jal         func_25AD00
label_2a6c3c:
    if (ctx->pc == 0x2A6C3Cu) {
        ctx->pc = 0x2A6C40u;
        goto label_2a6c40;
    }
    ctx->pc = 0x2A6C38u;
    SET_GPR_U32(ctx, 31, 0x2A6C40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A6C38u, 0x2A6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C40u;
label_2a6c40:
    // 0x2a6c40: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6c44:
    // 0x2a6c44: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6c48:
    // 0x2a6c48: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6c4c:
    // 0x2a6c4c: 0x24e20120  addiu       $v0, $a3, 0x120
    ctx->pc = 0x2a6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_2a6c50:
    // 0x2a6c50: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6c50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6c54:
    // 0x2a6c54: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x2a6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_2a6c58:
    // 0x2a6c58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a6c58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6c5c:
    // 0x2a6c5c: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a6c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_2a6c60:
    // 0x2a6c60: 0xc0675a8  jal         func_19D6A0
label_2a6c64:
    if (ctx->pc == 0x2A6C64u) {
        ctx->pc = 0x2A6C68u;
        goto label_2a6c68;
    }
    ctx->pc = 0x2A6C60u;
    SET_GPR_U32(ctx, 31, 0x2A6C68u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A6C60u, 0x2A6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C68u;
label_2a6c68:
    // 0x2a6c68: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6c6c:
    // 0x2a6c6c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a6c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2a6c70:
    // 0x2a6c70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6c70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a6c74:
    // 0x2a6c74: 0xc0a748c  jal         func_29D230
label_2a6c78:
    if (ctx->pc == 0x2A6C78u) {
        ctx->pc = 0x2A6C7Cu;
        goto label_2a6c7c;
    }
    ctx->pc = 0x2A6C74u;
    SET_GPR_U32(ctx, 31, 0x2A6C7Cu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A6C74u, 0x2A6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C7Cu;
label_2a6c7c:
    // 0x2a6c7c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6c7cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6c80:
    // 0x2a6c80: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6c84:
    // 0x2a6c84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6c88:
    // 0x2a6c88: 0xc0b3764  jal         func_2CDD90
label_2a6c8c:
    if (ctx->pc == 0x2A6C8Cu) {
        ctx->pc = 0x2A6C90u;
        goto label_2a6c90;
    }
    ctx->pc = 0x2A6C88u;
    SET_GPR_U32(ctx, 31, 0x2A6C90u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A6C88u, 0x2A6C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C90u;
label_2a6c90:
    // 0x2a6c90: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6c90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6c94:
    // 0x2a6c94: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6c98:
    // 0x2a6c98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2a6c9c:
    // 0x2a6c9c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6ca0:
    // 0x2a6ca0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6ca4:
    // 0x2a6ca4: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x2a6ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6ca8:
    // 0x2a6ca8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a6ca8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6cac:
    // 0x2a6cac: 0x0  nop
    ctx->pc = 0x2a6cacu;
    // NOP
label_2a6cb0:
    // 0x2a6cb0: 0x450001ed  bc1f        . + 4 + (0x1ED << 2)
label_2a6cb4:
    if (ctx->pc == 0x2A6CB4u) {
        ctx->pc = 0x2A6CB8u;
        goto label_2a6cb8;
    }
    ctx->pc = 0x2A6CB0u;
    {
        const bool branch_taken_0x2a6cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6cb0) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A6CB8u;
label_2a6cb8:
    // 0x2a6cb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a6cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a6cbc:
    // 0x2a6cbc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6cc0:
    // 0x2a6cc0: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x2a6cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_2a6cc4:
    // 0x2a6cc4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6cc8:
    // 0x2a6cc8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6ccc:
    // 0x2a6ccc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6cccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2a6cd0:
    // 0x2a6cd0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a6cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2a6cd4:
    // 0x2a6cd4: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2a6cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2a6cd8:
    // 0x2a6cd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6cdc:
    // 0x2a6cdc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a6cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a6ce0:
    // 0x2a6ce0: 0xc0965d0  jal         func_259740
label_2a6ce4:
    if (ctx->pc == 0x2A6CE4u) {
        ctx->pc = 0x2A6CE8u;
        goto label_2a6ce8;
    }
    ctx->pc = 0x2A6CE0u;
    SET_GPR_U32(ctx, 31, 0x2A6CE8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A6CE0u, 0x2A6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CE8u;
label_2a6ce8:
    // 0x2a6ce8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6ce8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6cec:
    // 0x2a6cec: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6cf0:
    // 0x2a6cf0: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x2a6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2a6cf4:
    // 0x2a6cf4: 0x14a0006f  bnez        $a1, . + 4 + (0x6F << 2)
label_2a6cf8:
    if (ctx->pc == 0x2A6CF8u) {
        ctx->pc = 0x2A6CFCu;
        goto label_2a6cfc;
    }
    ctx->pc = 0x2A6CF4u;
    {
        const bool branch_taken_0x2a6cf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6cf4) {
            ctx->pc = 0x2A6EB4u;
            goto label_2a6eb4;
        }
    }
    ctx->pc = 0x2A6CFCu;
label_2a6cfc:
    // 0x2a6cfc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a6d00:
    // 0x2a6d00: 0xc0675a4  jal         func_19D690
label_2a6d04:
    if (ctx->pc == 0x2A6D04u) {
        ctx->pc = 0x2A6D08u;
        goto label_2a6d08;
    }
    ctx->pc = 0x2A6D00u;
    SET_GPR_U32(ctx, 31, 0x2A6D08u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6D00u, 0x2A6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D08u;
label_2a6d08:
    // 0x2a6d08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6d08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6d0c:
    // 0x2a6d0c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a6d10:
    // 0x2a6d10: 0xc0675a4  jal         func_19D690
label_2a6d14:
    if (ctx->pc == 0x2A6D14u) {
        ctx->pc = 0x2A6D18u;
        goto label_2a6d18;
    }
    ctx->pc = 0x2A6D10u;
    SET_GPR_U32(ctx, 31, 0x2A6D18u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6D10u, 0x2A6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D18u;
label_2a6d18:
    // 0x2a6d18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6d18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6d1c:
    // 0x2a6d1c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2a6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a6d20:
    // 0x2a6d20: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2a6d24:
    // 0x2a6d24: 0xc0675a4  jal         func_19D690
label_2a6d28:
    if (ctx->pc == 0x2A6D28u) {
        ctx->pc = 0x2A6D2Cu;
        goto label_2a6d2c;
    }
    ctx->pc = 0x2A6D24u;
    SET_GPR_U32(ctx, 31, 0x2A6D2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6D24u, 0x2A6D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D2Cu;
label_2a6d2c:
    // 0x2a6d2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6d2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6d30:
    // 0x2a6d30: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2a6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
label_2a6d34:
    // 0x2a6d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6d38:
    // 0x2a6d38: 0x0  nop
    ctx->pc = 0x2a6d38u;
    // NOP
label_2a6d3c:
    // 0x2a6d3c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a6d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2a6d40:
    // 0x2a6d40: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2a6d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
label_2a6d44:
    // 0x2a6d44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6d48:
    // 0x2a6d48: 0x0  nop
    ctx->pc = 0x2a6d48u;
    // NOP
label_2a6d4c:
    // 0x2a6d4c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a6d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2a6d50:
    // 0x2a6d50: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2a6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_2a6d54:
    // 0x2a6d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6d58:
    // 0x2a6d58: 0x0  nop
    ctx->pc = 0x2a6d58u;
    // NOP
label_2a6d5c:
    // 0x2a6d5c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a6d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2a6d60:
    // 0x2a6d60: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2a6d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
label_2a6d64:
    // 0x2a6d64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6d64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6d68:
    // 0x2a6d68: 0x0  nop
    ctx->pc = 0x2a6d68u;
    // NOP
label_2a6d6c:
    // 0x2a6d6c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a6d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2a6d70:
    // 0x2a6d70: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a6d74:
    // 0x2a6d74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6d74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6d78:
    // 0x2a6d78: 0x0  nop
    ctx->pc = 0x2a6d78u;
    // NOP
label_2a6d7c:
    // 0x2a6d7c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a6d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2a6d80:
    // 0x2a6d80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a6d84:
    // 0x2a6d84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6d88:
    // 0x2a6d88: 0x0  nop
    ctx->pc = 0x2a6d88u;
    // NOP
label_2a6d8c:
    // 0x2a6d8c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a6d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2a6d90:
    // 0x2a6d90: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a6d90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2a6d94:
    // 0x2a6d94: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a6d94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6d98:
    // 0x2a6d98: 0x0  nop
    ctx->pc = 0x2a6d98u;
    // NOP
label_2a6d9c:
    // 0x2a6d9c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a6d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2a6da0:
    // 0x2a6da0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a6da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_2a6da4:
    // 0x2a6da4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a6da4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6da8:
    // 0x2a6da8: 0x0  nop
    ctx->pc = 0x2a6da8u;
    // NOP
label_2a6dac:
    // 0x2a6dac: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2a6dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_2a6db0:
    // 0x2a6db0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2a6db4:
    // 0x2a6db4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6db8:
    // 0x2a6db8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a6dbc:
    // 0x2a6dbc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a6dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a6dc0:
    // 0x2a6dc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a6dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6dc4:
    // 0x2a6dc4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6dc8:
    // 0x2a6dc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6dc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a6dcc:
    // 0x2a6dcc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a6dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a6dd0:
    // 0x2a6dd0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a6dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a6dd4:
    // 0x2a6dd4: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a6dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a6dd8:
    // 0x2a6dd8: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a6dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a6ddc:
    // 0x2a6ddc: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a6ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a6de0:
    // 0x2a6de0: 0xc086970  jal         func_21A5C0
label_2a6de4:
    if (ctx->pc == 0x2A6DE4u) {
        ctx->pc = 0x2A6DE8u;
        goto label_2a6de8;
    }
    ctx->pc = 0x2A6DE0u;
    SET_GPR_U32(ctx, 31, 0x2A6DE8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6DE0u, 0x2A6DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6DE8u;
label_2a6de8:
    // 0x2a6de8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2a6dec:
    // 0x2a6dec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6df0:
    // 0x2a6df0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a6df4:
    // 0x2a6df4: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a6df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a6df8:
    // 0x2a6df8: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a6df8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6dfc:
    // 0x2a6dfc: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6e00:
    // 0x2a6e00: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a6e00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a6e04:
    // 0x2a6e04: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a6e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6e08:
    // 0x2a6e08: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a6e08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a6e0c:
    // 0x2a6e0c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a6e10:
    // 0x2a6e10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6e10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6e14:
    // 0x2a6e14: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a6e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a6e18:
    // 0x2a6e18: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a6e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a6e1c:
    // 0x2a6e1c: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a6e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a6e20:
    // 0x2a6e20: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a6e20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a6e24:
    // 0x2a6e24: 0xc086970  jal         func_21A5C0
label_2a6e28:
    if (ctx->pc == 0x2A6E28u) {
        ctx->pc = 0x2A6E2Cu;
        goto label_2a6e2c;
    }
    ctx->pc = 0x2A6E24u;
    SET_GPR_U32(ctx, 31, 0x2A6E2Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6E24u, 0x2A6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E2Cu;
label_2a6e2c:
    // 0x2a6e2c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_2a6e30:
    // 0x2a6e30: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a6e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6e34:
    // 0x2a6e34: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_2a6e38:
    // 0x2a6e38: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a6e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_2a6e3c:
    // 0x2a6e3c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a6e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6e40:
    // 0x2a6e40: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6e44:
    // 0x2a6e44: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a6e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a6e48:
    // 0x2a6e48: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a6e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a6e4c:
    // 0x2a6e4c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a6e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a6e50:
    // 0x2a6e50: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a6e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a6e54:
    // 0x2a6e54: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a6e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a6e58:
    // 0x2a6e58: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a6e5c:
    // 0x2a6e5c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a6e5cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6e60:
    // 0x2a6e60: 0xc086970  jal         func_21A5C0
label_2a6e64:
    if (ctx->pc == 0x2A6E64u) {
        ctx->pc = 0x2A6E68u;
        goto label_2a6e68;
    }
    ctx->pc = 0x2A6E60u;
    SET_GPR_U32(ctx, 31, 0x2A6E68u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6E60u, 0x2A6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E68u;
label_2a6e68:
    // 0x2a6e68: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2a6e6c:
    // 0x2a6e6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6e70:
    // 0x2a6e70: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a6e74:
    // 0x2a6e74: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a6e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a6e78:
    // 0x2a6e78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a6e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6e7c:
    // 0x2a6e7c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6e80:
    // 0x2a6e80: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2a6e84:
    // 0x2a6e84: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a6e88:
    // 0x2a6e88: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6e88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6e8c:
    // 0x2a6e8c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a6e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a6e90:
    // 0x2a6e90: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2a6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a6e94:
    // 0x2a6e94: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2a6e94u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6e98:
    // 0x2a6e98: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a6e98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a6e9c:
    // 0x2a6e9c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a6ea0:
    // 0x2a6ea0: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a6ea0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6ea4:
    // 0x2a6ea4: 0xc086970  jal         func_21A5C0
label_2a6ea8:
    if (ctx->pc == 0x2A6EA8u) {
        ctx->pc = 0x2A6EACu;
        goto label_2a6eac;
    }
    ctx->pc = 0x2A6EA4u;
    SET_GPR_U32(ctx, 31, 0x2A6EACu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6EA4u, 0x2A6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EACu;
label_2a6eac:
    // 0x2a6eac: 0x1000016e  b           . + 4 + (0x16E << 2)
label_2a6eb0:
    if (ctx->pc == 0x2A6EB0u) {
        ctx->pc = 0x2A6EB4u;
        goto label_2a6eb4;
    }
    ctx->pc = 0x2A6EACu;
    {
        const bool branch_taken_0x2a6eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6eac) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A6EB4u;
label_2a6eb4:
    // 0x2a6eb4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2a6eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a6eb8:
    // 0x2a6eb8: 0xc0675a4  jal         func_19D690
label_2a6ebc:
    if (ctx->pc == 0x2A6EBCu) {
        ctx->pc = 0x2A6EC0u;
        goto label_2a6ec0;
    }
    ctx->pc = 0x2A6EB8u;
    SET_GPR_U32(ctx, 31, 0x2A6EC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6EB8u, 0x2A6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EC0u;
label_2a6ec0:
    // 0x2a6ec0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6ec4:
    // 0x2a6ec4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6ec4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a6ec8:
    // 0x2a6ec8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a6ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a6ecc:
    // 0x2a6ecc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6ed0:
    // 0x2a6ed0: 0xc086b14  jal         func_21AC50
label_2a6ed4:
    if (ctx->pc == 0x2A6ED4u) {
        ctx->pc = 0x2A6ED8u;
        goto label_2a6ed8;
    }
    ctx->pc = 0x2A6ED0u;
    SET_GPR_U32(ctx, 31, 0x2A6ED8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6ED0u, 0x2A6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6ED8u;
label_2a6ed8:
    // 0x2a6ed8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6edc:
    // 0x2a6edc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6ee0:
    // 0x2a6ee0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a6ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a6ee4:
    // 0x2a6ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6ee8:
    // 0x2a6ee8: 0xc086b14  jal         func_21AC50
label_2a6eec:
    if (ctx->pc == 0x2A6EECu) {
        ctx->pc = 0x2A6EF0u;
        goto label_2a6ef0;
    }
    ctx->pc = 0x2A6EE8u;
    SET_GPR_U32(ctx, 31, 0x2A6EF0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6EE8u, 0x2A6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EF0u;
label_2a6ef0:
    // 0x2a6ef0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6ef4:
    // 0x2a6ef4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6ef8:
    // 0x2a6ef8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6ef8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2a6efc:
    // 0x2a6efc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2a6efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a6f00:
    // 0x2a6f00: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a6f00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a6f04:
    // 0x2a6f04: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a6f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a6f08:
    // 0x2a6f08: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a6f08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a6f0c:
    // 0x2a6f0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a6f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6f10:
    // 0x2a6f10: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2a6f10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a6f14:
    // 0x2a6f14: 0xc086b14  jal         func_21AC50
label_2a6f18:
    if (ctx->pc == 0x2A6F18u) {
        ctx->pc = 0x2A6F1Cu;
        goto label_2a6f1c;
    }
    ctx->pc = 0x2A6F14u;
    SET_GPR_U32(ctx, 31, 0x2A6F1Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6F14u, 0x2A6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F1Cu;
label_2a6f1c:
    // 0x2a6f1c: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a6f1cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6f20:
    // 0x2a6f20: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a6f20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6f24:
    // 0x2a6f24: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a6f24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2a6f28:
    // 0x2a6f28: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2a6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2a6f2c:
    // 0x2a6f2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a6f2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6f30:
    // 0x2a6f30: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a6f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a6f34:
    // 0x2a6f34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6f38:
    // 0x2a6f38: 0xc086b14  jal         func_21AC50
label_2a6f3c:
    if (ctx->pc == 0x2A6F3Cu) {
        ctx->pc = 0x2A6F40u;
        goto label_2a6f40;
    }
    ctx->pc = 0x2A6F38u;
    SET_GPR_U32(ctx, 31, 0x2A6F40u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6F38u, 0x2A6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F40u;
label_2a6f40:
    // 0x2a6f40: 0x10000149  b           . + 4 + (0x149 << 2)
label_2a6f44:
    if (ctx->pc == 0x2A6F44u) {
        ctx->pc = 0x2A6F48u;
        goto label_2a6f48;
    }
    ctx->pc = 0x2A6F40u;
    {
        const bool branch_taken_0x2a6f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6f40) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A6F48u;
label_2a6f48:
    // 0x2a6f48: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6f4c:
    // 0x2a6f4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a6f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a6f50:
    // 0x2a6f50: 0xc096b40  jal         func_25AD00
label_2a6f54:
    if (ctx->pc == 0x2A6F54u) {
        ctx->pc = 0x2A6F58u;
        goto label_2a6f58;
    }
    ctx->pc = 0x2A6F50u;
    SET_GPR_U32(ctx, 31, 0x2A6F58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A6F50u, 0x2A6F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F58u;
label_2a6f58:
    // 0x2a6f58: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6f58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6f5c:
    // 0x2a6f5c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6f60:
    // 0x2a6f60: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a6f60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6f64:
    // 0x2a6f64: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a6f64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6f68:
    // 0x2a6f68: 0x24ea0120  addiu       $t2, $a3, 0x120
    ctx->pc = 0x2a6f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_2a6f6c:
    // 0x2a6f6c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a6f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2a6f70:
    // 0x2a6f70: 0x25020120  addiu       $v0, $t0, 0x120
    ctx->pc = 0x2a6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
label_2a6f74:
    // 0x2a6f74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a6f74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6f78:
    // 0x2a6f78: 0x25260180  addiu       $a2, $t1, 0x180
    ctx->pc = 0x2a6f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 384));
label_2a6f7c:
    // 0x2a6f7c: 0xc0675a8  jal         func_19D6A0
label_2a6f80:
    if (ctx->pc == 0x2A6F80u) {
        ctx->pc = 0x2A6F84u;
        goto label_2a6f84;
    }
    ctx->pc = 0x2A6F7Cu;
    SET_GPR_U32(ctx, 31, 0x2A6F84u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A6F7Cu, 0x2A6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F84u;
label_2a6f84:
    // 0x2a6f84: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6f88:
    // 0x2a6f88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6f88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a6f8c:
    // 0x2a6f8c: 0xc0a748c  jal         func_29D230
label_2a6f90:
    if (ctx->pc == 0x2A6F90u) {
        ctx->pc = 0x2A6F94u;
        goto label_2a6f94;
    }
    ctx->pc = 0x2A6F8Cu;
    SET_GPR_U32(ctx, 31, 0x2A6F94u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A6F8Cu, 0x2A6F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F94u;
label_2a6f94:
    // 0x2a6f94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6f98:
    // 0x2a6f98: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6f9c:
    // 0x2a6f9c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6f9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2a6fa0:
    // 0x2a6fa0: 0xc0b3764  jal         func_2CDD90
label_2a6fa4:
    if (ctx->pc == 0x2A6FA4u) {
        ctx->pc = 0x2A6FA8u;
        goto label_2a6fa8;
    }
    ctx->pc = 0x2A6FA0u;
    SET_GPR_U32(ctx, 31, 0x2A6FA8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A6FA0u, 0x2A6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6FA8u;
label_2a6fa8:
    // 0x2a6fa8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6fa8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6fac:
    // 0x2a6fac: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6facu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6fb0:
    // 0x2a6fb0: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x2a6fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_2a6fb4:
    // 0x2a6fb4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2a6fb4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6fb8:
    // 0x2a6fb8: 0xc4e00180  lwc1        $f0, 0x180($a3)
    ctx->pc = 0x2a6fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6fbc:
    // 0x2a6fbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6fc0:
    // 0x2a6fc0: 0xe4e00180  swc1        $f0, 0x180($a3)
    ctx->pc = 0x2a6fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 384), bits); }
label_2a6fc4:
    // 0x2a6fc4: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a6fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6fc8:
    // 0x2a6fc8: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x2a6fc8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
label_2a6fcc:
    // 0x2a6fcc: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2a6fccu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6fd0:
    // 0x2a6fd0: 0xc5200188  lwc1        $f0, 0x188($t1)
    ctx->pc = 0x2a6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6fd4:
    // 0x2a6fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6fd8:
    // 0x2a6fd8: 0xe5200188  swc1        $f0, 0x188($t1)
    ctx->pc = 0x2a6fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 392), bits); }
label_2a6fdc:
    // 0x2a6fdc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6fe0:
    // 0x2a6fe0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a6fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2a6fe4:
    // 0x2a6fe4: 0x10600120  beqz        $v1, . + 4 + (0x120 << 2)
label_2a6fe8:
    if (ctx->pc == 0x2A6FE8u) {
        ctx->pc = 0x2A6FECu;
        goto label_2a6fec;
    }
    ctx->pc = 0x2A6FE4u;
    {
        const bool branch_taken_0x2a6fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6fe4) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A6FECu;
label_2a6fec:
    // 0x2a6fec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a6ff0:
    // 0x2a6ff0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6ff4:
    // 0x2a6ff4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a6ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2a6ff8:
    // 0x2a6ff8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6ffc:
    // 0x2a6ffc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7000:
    // 0x2a7000: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a7000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2a7004:
    // 0x2a7004: 0x8c460368  lw          $a2, 0x368($v0)
    ctx->pc = 0x2a7004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2a7008:
    // 0x2a7008: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a7008u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a700c:
    // 0x2a700c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x2a700cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2a7010:
    // 0x2a7010: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a7010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a7014:
    // 0x2a7014: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a7014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7018:
    // 0x2a7018: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2a7018u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a701c:
    // 0x2a701c: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x2a701cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a7020:
    // 0x2a7020: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2a7020u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2a7024:
    // 0x2a7024: 0xc0965d0  jal         func_259740
label_2a7028:
    if (ctx->pc == 0x2A7028u) {
        ctx->pc = 0x2A702Cu;
        goto label_2a702c;
    }
    ctx->pc = 0x2A7024u;
    SET_GPR_U32(ctx, 31, 0x2A702Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7024u, 0x2A702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A702Cu;
label_2a702c:
    // 0x2a702c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a702cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7030:
    // 0x2a7030: 0x1000010d  b           . + 4 + (0x10D << 2)
label_2a7034:
    if (ctx->pc == 0x2A7034u) {
        ctx->pc = 0x2A7038u;
        goto label_2a7038;
    }
    ctx->pc = 0x2A7030u;
    {
        const bool branch_taken_0x2a7030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7030) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A7038u;
label_2a7038:
    // 0x2a7038: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a7038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a703c:
    // 0x2a703c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2a703cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_2a7040:
    // 0x2a7040: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7044:
    // 0x2a7044: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a7044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a7048:
    // 0x2a7048: 0xc096b40  jal         func_25AD00
label_2a704c:
    if (ctx->pc == 0x2A704Cu) {
        ctx->pc = 0x2A7050u;
        goto label_2a7050;
    }
    ctx->pc = 0x2A7048u;
    SET_GPR_U32(ctx, 31, 0x2A7050u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A7048u, 0x2A7050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7050u;
label_2a7050:
    // 0x2a7050: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7054:
    // 0x2a7054: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a7054u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a7058:
    // 0x2a7058: 0xc0a748c  jal         func_29D230
label_2a705c:
    if (ctx->pc == 0x2A705Cu) {
        ctx->pc = 0x2A7060u;
        goto label_2a7060;
    }
    ctx->pc = 0x2A7058u;
    SET_GPR_U32(ctx, 31, 0x2A7060u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A7058u, 0x2A7060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7060u;
label_2a7060:
    // 0x2a7060: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a7060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7064:
    // 0x2a7064: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a7064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7068:
    // 0x2a7068: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a7068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a706c:
    // 0x2a706c: 0xc0b3764  jal         func_2CDD90
label_2a7070:
    if (ctx->pc == 0x2A7070u) {
        ctx->pc = 0x2A7074u;
        goto label_2a7074;
    }
    ctx->pc = 0x2A706Cu;
    SET_GPR_U32(ctx, 31, 0x2A7074u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A706Cu, 0x2A7074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7074u;
label_2a7074:
    // 0x2a7074: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a7074u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7078:
    // 0x2a7078: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a7078u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a707c:
    // 0x2a707c: 0x910909e7  lbu         $t1, 0x9E7($t0)
    ctx->pc = 0x2a707cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
label_2a7080:
    // 0x2a7080: 0x112000f9  beqz        $t1, . + 4 + (0xF9 << 2)
label_2a7084:
    if (ctx->pc == 0x2A7084u) {
        ctx->pc = 0x2A7088u;
        goto label_2a7088;
    }
    ctx->pc = 0x2A7080u;
    {
        const bool branch_taken_0x2a7080 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7080) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A7088u;
label_2a7088:
    // 0x2a7088: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2a7088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a708c:
    // 0x2a708c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7090:
    // 0x2a7090: 0xa04a0002  sb          $t2, 0x2($v0)
    ctx->pc = 0x2a7090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 10));
label_2a7094:
    // 0x2a7094: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a7094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7098:
    // 0x2a7098: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a709c:
    // 0x2a709c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a709cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2a70a0:
    // 0x2a70a0: 0x3406f01e  ori         $a2, $zero, 0xF01E
    ctx->pc = 0x2a70a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61470);
label_2a70a4:
    // 0x2a70a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a70a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a70a8:
    // 0x2a70a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a70a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a70ac:
    // 0x2a70ac: 0xc0965d0  jal         func_259740
label_2a70b0:
    if (ctx->pc == 0x2A70B0u) {
        ctx->pc = 0x2A70B4u;
        goto label_2a70b4;
    }
    ctx->pc = 0x2A70ACu;
    SET_GPR_U32(ctx, 31, 0x2A70B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A70ACu, 0x2A70B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70B4u;
label_2a70b4:
    // 0x2a70b4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a70b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a70b8:
    // 0x2a70b8: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a70b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a70bc:
    // 0x2a70bc: 0xa5001278  sh          $zero, 0x1278($t0)
    ctx->pc = 0x2a70bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2a70c0:
    // 0x2a70c0: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a70c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a70c4:
    // 0x2a70c4: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x2a70c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_2a70c8:
    // 0x2a70c8: 0x35420040  ori         $v0, $t2, 0x40
    ctx->pc = 0x2a70c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64);
label_2a70cc:
    // 0x2a70cc: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x2a70ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_2a70d0:
    // 0x2a70d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a70d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a70d4:
    // 0x2a70d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a70d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a70d8:
    // 0x2a70d8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a70dc:
    // 0x2a70dc: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x2a70dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
label_2a70e0:
    // 0x2a70e0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a70e4:
    // 0x2a70e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a70e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a70e8:
    // 0x2a70e8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a70e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a70ec:
    // 0x2a70ec: 0xe4a001a4  swc1        $f0, 0x1A4($a1)
    ctx->pc = 0x2a70ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
label_2a70f0:
    // 0x2a70f0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a70f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2a70f4:
    // 0x2a70f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a70f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a70f8:
    // 0x2a70f8: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a70f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a70fc:
    // 0x2a70fc: 0xe4e001a8  swc1        $f0, 0x1A8($a3)
    ctx->pc = 0x2a70fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 424), bits); }
label_2a7100:
    // 0x2a7100: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a7100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7104:
    // 0x2a7104: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a7104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2a7108:
    // 0x2a7108: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a7108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a710c:
    // 0x2a710c: 0xc0c7a0c  jal         func_31E830
label_2a7110:
    if (ctx->pc == 0x2A7110u) {
        ctx->pc = 0x2A7114u;
        goto label_2a7114;
    }
    ctx->pc = 0x2A710Cu;
    SET_GPR_U32(ctx, 31, 0x2A7114u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2A710Cu, 0x2A7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7114u;
label_2a7114:
    // 0x2a7114: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7114u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7118:
    // 0x2a7118: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a7118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a711c:
    // 0x2a711c: 0x94e3000e  lhu         $v1, 0xE($a3)
    ctx->pc = 0x2a711cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
label_2a7120:
    // 0x2a7120: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2a7120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_2a7124:
    // 0x2a7124: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x2a7124u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
label_2a7128:
    // 0x2a7128: 0x100000cf  b           . + 4 + (0xCF << 2)
label_2a712c:
    if (ctx->pc == 0x2A712Cu) {
        ctx->pc = 0x2A7130u;
        goto label_2a7130;
    }
    ctx->pc = 0x2A7128u;
    {
        const bool branch_taken_0x2a7128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7128) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A7130u;
label_2a7130:
    // 0x2a7130: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a7130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7134:
    // 0x2a7134: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a7134u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2a7138:
    // 0x2a7138: 0xc0b3764  jal         func_2CDD90
label_2a713c:
    if (ctx->pc == 0x2A713Cu) {
        ctx->pc = 0x2A7140u;
        goto label_2a7140;
    }
    ctx->pc = 0x2A7138u;
    SET_GPR_U32(ctx, 31, 0x2A7140u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A7138u, 0x2A7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7140u;
label_2a7140:
    // 0x2a7140: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7140u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7144:
    // 0x2a7144: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a7144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7148:
    // 0x2a7148: 0xc4e101a4  lwc1        $f1, 0x1A4($a3)
    ctx->pc = 0x2a7148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a714c:
    // 0x2a714c: 0x3c043ae1  lui         $a0, 0x3AE1
    ctx->pc = 0x2a714cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15073 << 16));
label_2a7150:
    // 0x2a7150: 0x3483fc78  ori         $v1, $a0, 0xFC78
    ctx->pc = 0x2a7150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64632);
label_2a7154:
    // 0x2a7154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a7154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7158:
    // 0x2a7158: 0x0  nop
    ctx->pc = 0x2a7158u;
    // NOP
label_2a715c:
    // 0x2a715c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a715cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a7160:
    // 0x2a7160: 0xe4e001a4  swc1        $f0, 0x1A4($a3)
    ctx->pc = 0x2a7160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 420), bits); }
label_2a7164:
    // 0x2a7164: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a7164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7168:
    // 0x2a7168: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x2a7168u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_2a716c:
    // 0x2a716c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x2a716cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2a7170:
    // 0x2a7170: 0xa4a71278  sh          $a3, 0x1278($a1)
    ctx->pc = 0x2a7170u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 7));
label_2a7174:
    // 0x2a7174: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a7174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7178:
    // 0x2a7178: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2a7178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2a717c:
    // 0x2a717c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2a7180:
    // 0x2a7180: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a7180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2a7184:
    // 0x2a7184: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2a7184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2a7188:
    // 0x2a7188: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_2a718c:
    if (ctx->pc == 0x2A718Cu) {
        ctx->pc = 0x2A7190u;
        goto label_2a7190;
    }
    ctx->pc = 0x2A7188u;
    {
        const bool branch_taken_0x2a7188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7188) {
            ctx->pc = 0x2A7254u;
            goto label_2a7254;
        }
    }
    ctx->pc = 0x2A7190u;
label_2a7190:
    // 0x2a7190: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a7190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a7194:
    // 0x2a7194: 0xc0675a4  jal         func_19D690
label_2a7198:
    if (ctx->pc == 0x2A7198u) {
        ctx->pc = 0x2A719Cu;
        goto label_2a719c;
    }
    ctx->pc = 0x2A7194u;
    SET_GPR_U32(ctx, 31, 0x2A719Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A7194u, 0x2A719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A719Cu;
label_2a719c:
    // 0x2a719c: 0x3c05c2c8  lui         $a1, 0xC2C8
    ctx->pc = 0x2a719cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49864 << 16));
label_2a71a0:
    // 0x2a71a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a71a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a71a4:
    // 0x2a71a4: 0x0  nop
    ctx->pc = 0x2a71a4u;
    // NOP
label_2a71a8:
    // 0x2a71a8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a71a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2a71ac:
    // 0x2a71ac: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2a71acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2a71b0:
    // 0x2a71b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a71b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a71b4:
    // 0x2a71b4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a71b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a71b8:
    // 0x2a71b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a71b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a71bc:
    // 0x2a71bc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a71bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a71c0:
    // 0x2a71c0: 0xc0c4acc  jal         func_312B30
label_2a71c4:
    if (ctx->pc == 0x2A71C4u) {
        ctx->pc = 0x2A71C8u;
        goto label_2a71c8;
    }
    ctx->pc = 0x2A71C0u;
    SET_GPR_U32(ctx, 31, 0x2A71C8u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A71C0u, 0x2A71C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71C8u;
label_2a71c8:
    // 0x2a71c8: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x2a71c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_2a71cc:
    // 0x2a71cc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a71ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a71d0:
    // 0x2a71d0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a71d4:
    // 0x2a71d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a71d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a71d8:
    // 0x2a71d8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a71d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a71dc:
    // 0x2a71dc: 0xc0c4acc  jal         func_312B30
label_2a71e0:
    if (ctx->pc == 0x2A71E0u) {
        ctx->pc = 0x2A71E4u;
        goto label_2a71e4;
    }
    ctx->pc = 0x2A71DCu;
    SET_GPR_U32(ctx, 31, 0x2A71E4u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A71DCu, 0x2A71E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71E4u;
label_2a71e4:
    // 0x2a71e4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2a71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
label_2a71e8:
    // 0x2a71e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a71e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a71ec:
    // 0x2a71ec: 0x0  nop
    ctx->pc = 0x2a71ecu;
    // NOP
label_2a71f0:
    // 0x2a71f0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a71f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2a71f4:
    // 0x2a71f4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2a71f8:
    // 0x2a71f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a71f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a71fc:
    // 0x2a71fc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7200:
    // 0x2a7200: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a7200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a7204:
    // 0x2a7204: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2a7204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a7208:
    // 0x2a7208: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a720c:
    // 0x2a720c: 0xc0c4acc  jal         func_312B30
label_2a7210:
    if (ctx->pc == 0x2A7210u) {
        ctx->pc = 0x2A7214u;
        goto label_2a7214;
    }
    ctx->pc = 0x2A720Cu;
    SET_GPR_U32(ctx, 31, 0x2A7214u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A720Cu, 0x2A7214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7214u;
label_2a7214:
    // 0x2a7214: 0x3c05c348  lui         $a1, 0xC348
    ctx->pc = 0x2a7214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49992 << 16));
label_2a7218:
    // 0x2a7218: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a7218u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a721c:
    // 0x2a721c: 0x0  nop
    ctx->pc = 0x2a721cu;
    // NOP
label_2a7220:
    // 0x2a7220: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a7220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2a7224:
    // 0x2a7224: 0x3c04c396  lui         $a0, 0xC396
    ctx->pc = 0x2a7224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50070 << 16));
label_2a7228:
    // 0x2a7228: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a7228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a722c:
    // 0x2a722c: 0x0  nop
    ctx->pc = 0x2a722cu;
    // NOP
label_2a7230:
    // 0x2a7230: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a7230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2a7234:
    // 0x2a7234: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2a7234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2a7238:
    // 0x2a7238: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a7238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a723c:
    // 0x2a723c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7240:
    // 0x2a7240: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a7240u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a7244:
    // 0x2a7244: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a7244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a7248:
    // 0x2a7248: 0xc0c4acc  jal         func_312B30
label_2a724c:
    if (ctx->pc == 0x2A724Cu) {
        ctx->pc = 0x2A7250u;
        goto label_2a7250;
    }
    ctx->pc = 0x2A7248u;
    SET_GPR_U32(ctx, 31, 0x2A7250u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A7248u, 0x2A7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7250u;
label_2a7250:
    // 0x2a7250: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a7250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7254:
    // 0x2a7254: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a7254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7258:
    // 0x2a7258: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x2a7258u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2a725c:
    // 0x2a725c: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_2a7260:
    if (ctx->pc == 0x2A7260u) {
        ctx->pc = 0x2A7264u;
        goto label_2a7264;
    }
    ctx->pc = 0x2A725Cu;
    {
        const bool branch_taken_0x2a725c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a725c) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A7264u;
label_2a7264:
    // 0x2a7264: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2a7264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a7268:
    // 0x2a7268: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a7268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a726c:
    // 0x2a726c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a726cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2a7270:
    // 0x2a7270: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a7270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7274:
    // 0x2a7274: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7278:
    // 0x2a7278: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a7278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_2a727c:
    // 0x2a727c: 0x24061e1f  addiu       $a2, $zero, 0x1E1F
    ctx->pc = 0x2a727cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7711));
label_2a7280:
    // 0x2a7280: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7284:
    // 0x2a7284: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a7288:
    // 0x2a7288: 0xc0965d0  jal         func_259740
label_2a728c:
    if (ctx->pc == 0x2A728Cu) {
        ctx->pc = 0x2A7290u;
        goto label_2a7290;
    }
    ctx->pc = 0x2A7288u;
    SET_GPR_U32(ctx, 31, 0x2A7290u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7288u, 0x2A7290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7290u;
label_2a7290:
    // 0x2a7290: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7290u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7294:
    // 0x2a7294: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a7294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7298:
    // 0x2a7298: 0x24e810b0  addiu       $t0, $a3, 0x10B0
    ctx->pc = 0x2a7298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4272));
label_2a729c:
    // 0x2a729c: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x2a729cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a72a0:
    // 0x2a72a0: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x2a72a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2a72a4:
    // 0x2a72a4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x2a72a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_2a72a8:
    // 0x2a72a8: 0xa63825  or          $a3, $a1, $a2
    ctx->pc = 0x2a72a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2a72ac:
    // 0x2a72ac: 0xae0700f0  sw          $a3, 0xF0($s0)
    ctx->pc = 0x2a72acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 7));
label_2a72b0:
    // 0x2a72b0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a72b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a72b4:
    // 0x2a72b4: 0xa5001278  sh          $zero, 0x1278($t0)
    ctx->pc = 0x2a72b4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2a72b8:
    // 0x2a72b8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2a72bc:
    if (ctx->pc == 0x2A72BCu) {
        ctx->pc = 0x2A72C0u;
        goto label_2a72c0;
    }
    ctx->pc = 0x2A72B8u;
    {
        const bool branch_taken_0x2a72b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a72b8) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A72C0u;
label_2a72c0:
    // 0x2a72c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a72c4:
    // 0x2a72c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a72c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a72c8:
    // 0x2a72c8: 0xc0b3764  jal         func_2CDD90
label_2a72cc:
    if (ctx->pc == 0x2A72CCu) {
        ctx->pc = 0x2A72D0u;
        goto label_2a72d0;
    }
    ctx->pc = 0x2A72C8u;
    SET_GPR_U32(ctx, 31, 0x2A72D0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A72C8u, 0x2A72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72D0u;
label_2a72d0:
    // 0x2a72d0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a72d4:
    // 0x2a72d4: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x2a72d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a72d8:
    // 0x2a72d8: 0x3c073a94  lui         $a3, 0x3A94
    ctx->pc = 0x2a72d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14996 << 16));
label_2a72dc:
    // 0x2a72dc: 0x34e2f209  ori         $v0, $a3, 0xF209
    ctx->pc = 0x2a72dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61961);
label_2a72e0:
    // 0x2a72e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a72e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a72e4:
    // 0x2a72e4: 0x0  nop
    ctx->pc = 0x2a72e4u;
    // NOP
label_2a72e8:
    // 0x2a72e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a72e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a72ec:
    // 0x2a72ec: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x2a72ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_2a72f0:
    // 0x2a72f0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a72f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a72f4:
    // 0x2a72f4: 0xc4c101a4  lwc1        $f1, 0x1A4($a2)
    ctx->pc = 0x2a72f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a72f8:
    // 0x2a72f8: 0x3c023a72  lui         $v0, 0x3A72
    ctx->pc = 0x2a72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14962 << 16));
label_2a72fc:
    // 0x2a72fc: 0x3443b9d6  ori         $v1, $v0, 0xB9D6
    ctx->pc = 0x2a72fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47574);
label_2a7300:
    // 0x2a7300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a7300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7304:
    // 0x2a7304: 0x0  nop
    ctx->pc = 0x2a7304u;
    // NOP
label_2a7308:
    // 0x2a7308: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a7308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a730c:
    // 0x2a730c: 0xe4c001a4  swc1        $f0, 0x1A4($a2)
    ctx->pc = 0x2a730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 420), bits); }
label_2a7310:
    // 0x2a7310: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a7310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7314:
    // 0x2a7314: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2a7314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7318:
    // 0x2a7318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a731c:
    // 0x2a731c: 0x0  nop
    ctx->pc = 0x2a731cu;
    // NOP
label_2a7320:
    // 0x2a7320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7324:
    // 0x2a7324: 0x0  nop
    ctx->pc = 0x2a7324u;
    // NOP
label_2a7328:
    // 0x2a7328: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2a732c:
    if (ctx->pc == 0x2A732Cu) {
        ctx->pc = 0x2A7330u;
        goto label_2a7330;
    }
    ctx->pc = 0x2A7328u;
    {
        const bool branch_taken_0x2a7328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7328) {
            ctx->pc = 0x2A733Cu;
            goto label_2a733c;
        }
    }
    ctx->pc = 0x2A7330u;
label_2a7330:
    // 0x2a7330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7334:
    // 0x2a7334: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a7334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7338:
    // 0x2a7338: 0xe4c001a4  swc1        $f0, 0x1A4($a2)
    ctx->pc = 0x2a7338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 420), bits); }
label_2a733c:
    // 0x2a733c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7340:
    // 0x2a7340: 0xc44101a8  lwc1        $f1, 0x1A8($v0)
    ctx->pc = 0x2a7340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7344:
    // 0x2a7344: 0x3c033a94  lui         $v1, 0x3A94
    ctx->pc = 0x2a7344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14996 << 16));
label_2a7348:
    // 0x2a7348: 0x3463f209  ori         $v1, $v1, 0xF209
    ctx->pc = 0x2a7348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61961);
label_2a734c:
    // 0x2a734c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a734cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7350:
    // 0x2a7350: 0x0  nop
    ctx->pc = 0x2a7350u;
    // NOP
label_2a7354:
    // 0x2a7354: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a7354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a7358:
    // 0x2a7358: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2a7358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
label_2a735c:
    // 0x2a735c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7360:
    // 0x2a7360: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x2a7360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a7364:
    // 0x2a7364: 0xc047fe2  jal         func_11FF88
label_2a7368:
    if (ctx->pc == 0x2A7368u) {
        ctx->pc = 0x2A736Cu;
        goto label_2a736c;
    }
    ctx->pc = 0x2A7364u;
    SET_GPR_U32(ctx, 31, 0x2A736Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2A7364u, 0x2A736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A736Cu;
label_2a736c:
    // 0x2a736c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a736cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7370:
    // 0x2a7370: 0x3c033fb9  lui         $v1, 0x3FB9
    ctx->pc = 0x2a7370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
label_2a7374:
    // 0x2a7374: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x2a7374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39321);
label_2a7378:
    // 0x2a7378: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2a7378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_2a737c:
    // 0x2a737c: 0x34059999  ori         $a1, $zero, 0x9999
    ctx->pc = 0x2a737cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
label_2a7380:
    // 0x2a7380: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x2a7380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_2a7384:
    // 0x2a7384: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2a7384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2a7388:
    // 0x2a7388: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x2a7388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2a738c:
    // 0x2a738c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a738cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a7390:
    // 0x2a7390: 0xc040048  jal         func_100120
label_2a7394:
    if (ctx->pc == 0x2A7394u) {
        ctx->pc = 0x2A7398u;
        goto label_2a7398;
    }
    ctx->pc = 0x2A7390u;
    SET_GPR_U32(ctx, 31, 0x2A7398u);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x2A7390u, 0x2A7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7398u;
label_2a7398:
    // 0x2a7398: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a7398u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a739c:
    // 0x2a739c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_2a73a0:
    if (ctx->pc == 0x2A73A0u) {
        ctx->pc = 0x2A73A4u;
        goto label_2a73a4;
    }
    ctx->pc = 0x2A739Cu;
    {
        const bool branch_taken_0x2a739c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a739c) {
            ctx->pc = 0x2A73D0u;
            goto label_2a73d0;
        }
    }
    ctx->pc = 0x2A73A4u;
label_2a73a4:
    // 0x2a73a4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2a73a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a73a8:
    // 0x2a73a8: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a73a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a73ac:
    // 0x2a73ac: 0xa0e60002  sb          $a2, 0x2($a3)
    ctx->pc = 0x2a73acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 6));
label_2a73b0:
    // 0x2a73b0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a73b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a73b4:
    // 0x2a73b4: 0x9503000e  lhu         $v1, 0xE($t0)
    ctx->pc = 0x2a73b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
label_2a73b8:
    // 0x2a73b8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x2a73b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_2a73bc:
    // 0x2a73bc: 0xa503000e  sh          $v1, 0xE($t0)
    ctx->pc = 0x2a73bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
label_2a73c0:
    // 0x2a73c0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a73c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a73c4:
    // 0x2a73c4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2a73c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2a73c8:
    // 0x2a73c8: 0x34830200  ori         $v1, $a0, 0x200
    ctx->pc = 0x2a73c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
label_2a73cc:
    // 0x2a73cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2a73ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2a73d0:
    // 0x2a73d0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a73d4:
    // 0x2a73d4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2a73d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_2a73d8:
    // 0x2a73d8: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2a73d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a73dc:
    // 0x2a73dc: 0xa4851278  sh          $a1, 0x1278($a0)
    ctx->pc = 0x2a73dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 5));
label_2a73e0:
    // 0x2a73e0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a73e4:
    // 0x2a73e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2a73e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2a73e8:
    // 0x2a73e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a73e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2a73ec:
    // 0x2a73ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a73ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2a73f0:
    // 0x2a73f0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2a73f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2a73f4:
    // 0x2a73f4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_2a73f8:
    if (ctx->pc == 0x2A73F8u) {
        ctx->pc = 0x2A73FCu;
        goto label_2a73fc;
    }
    ctx->pc = 0x2A73F4u;
    {
        const bool branch_taken_0x2a73f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a73f4) {
            ctx->pc = 0x2A7468u;
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A73FCu;
label_2a73fc:
    // 0x2a73fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a7400:
    // 0x2a7400: 0xc0675a4  jal         func_19D690
label_2a7404:
    if (ctx->pc == 0x2A7404u) {
        ctx->pc = 0x2A7408u;
        goto label_2a7408;
    }
    ctx->pc = 0x2A7400u;
    SET_GPR_U32(ctx, 31, 0x2A7408u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A7400u, 0x2A7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7408u;
label_2a7408:
    // 0x2a7408: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a7408u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a740c:
    // 0x2a740c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2a740cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_2a7410:
    // 0x2a7410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7414:
    // 0x2a7414: 0x0  nop
    ctx->pc = 0x2a7414u;
    // NOP
label_2a7418:
    // 0x2a7418: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2a7418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_2a741c:
    // 0x2a741c: 0x3c0641a0  lui         $a2, 0x41A0
    ctx->pc = 0x2a741cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16800 << 16));
label_2a7420:
    // 0x2a7420: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a7420u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7424:
    // 0x2a7424: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a7424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a7428:
    // 0x2a7428: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a7428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a742c:
    // 0x2a742c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a742cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a7430:
    // 0x2a7430: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2a7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a7434:
    // 0x2a7434: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7434u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7438:
    // 0x2a7438: 0xc0c4acc  jal         func_312B30
label_2a743c:
    if (ctx->pc == 0x2A743Cu) {
        ctx->pc = 0x2A7440u;
        goto label_2a7440;
    }
    ctx->pc = 0x2A7438u;
    SET_GPR_U32(ctx, 31, 0x2A7440u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A7438u, 0x2A7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7440u;
label_2a7440:
    // 0x2a7440: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a7440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2a7444:
    // 0x2a7444: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7448:
    // 0x2a7448: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a744c:
    // 0x2a744c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a7450:
    // 0x2a7450: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a7450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a7454:
    // 0x2a7454: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2a7454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a7458:
    // 0x2a7458: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a7458u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a745c:
    // 0x2a745c: 0xc0c4acc  jal         func_312B30
label_2a7460:
    if (ctx->pc == 0x2A7460u) {
        ctx->pc = 0x2A7464u;
        goto label_2a7464;
    }
    ctx->pc = 0x2A745Cu;
    SET_GPR_U32(ctx, 31, 0x2A7464u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A745Cu, 0x2A7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7464u;
label_2a7464:
    // 0x2a7464: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2a7464u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a7468:
    // 0x2a7468: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2a7468u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a746c:
    // 0x2a746c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a746cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7470:
    // 0x2a7470: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x2a7470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2a7474:
    // 0x2a7474: 0x3e00008  jr          $ra
label_2a7478:
    if (ctx->pc == 0x2A7478u) {
        ctx->pc = 0x2A747Cu;
        goto label_fallthrough_0x2a7474;
    }
    ctx->pc = 0x2A7474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a7474:
    ctx->pc = 0x2A747Cu;
}
