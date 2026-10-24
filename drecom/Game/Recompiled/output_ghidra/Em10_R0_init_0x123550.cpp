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

// Function: Em10_R0_init
// Address: 0x123550 - 0x124608
void Em10_R0_init_0x123550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R0_init_0x123550");
#endif

    switch (ctx->pc) {
        case 0x123550u: goto label_123550;
        case 0x123554u: goto label_123554;
        case 0x123558u: goto label_123558;
        case 0x12355cu: goto label_12355c;
        case 0x123560u: goto label_123560;
        case 0x123564u: goto label_123564;
        case 0x123568u: goto label_123568;
        case 0x12356cu: goto label_12356c;
        case 0x123570u: goto label_123570;
        case 0x123574u: goto label_123574;
        case 0x123578u: goto label_123578;
        case 0x12357cu: goto label_12357c;
        case 0x123580u: goto label_123580;
        case 0x123584u: goto label_123584;
        case 0x123588u: goto label_123588;
        case 0x12358cu: goto label_12358c;
        case 0x123590u: goto label_123590;
        case 0x123594u: goto label_123594;
        case 0x123598u: goto label_123598;
        case 0x12359cu: goto label_12359c;
        case 0x1235a0u: goto label_1235a0;
        case 0x1235a4u: goto label_1235a4;
        case 0x1235a8u: goto label_1235a8;
        case 0x1235acu: goto label_1235ac;
        case 0x1235b0u: goto label_1235b0;
        case 0x1235b4u: goto label_1235b4;
        case 0x1235b8u: goto label_1235b8;
        case 0x1235bcu: goto label_1235bc;
        case 0x1235c0u: goto label_1235c0;
        case 0x1235c4u: goto label_1235c4;
        case 0x1235c8u: goto label_1235c8;
        case 0x1235ccu: goto label_1235cc;
        case 0x1235d0u: goto label_1235d0;
        case 0x1235d4u: goto label_1235d4;
        case 0x1235d8u: goto label_1235d8;
        case 0x1235dcu: goto label_1235dc;
        case 0x1235e0u: goto label_1235e0;
        case 0x1235e4u: goto label_1235e4;
        case 0x1235e8u: goto label_1235e8;
        case 0x1235ecu: goto label_1235ec;
        case 0x1235f0u: goto label_1235f0;
        case 0x1235f4u: goto label_1235f4;
        case 0x1235f8u: goto label_1235f8;
        case 0x1235fcu: goto label_1235fc;
        case 0x123600u: goto label_123600;
        case 0x123604u: goto label_123604;
        case 0x123608u: goto label_123608;
        case 0x12360cu: goto label_12360c;
        case 0x123610u: goto label_123610;
        case 0x123614u: goto label_123614;
        case 0x123618u: goto label_123618;
        case 0x12361cu: goto label_12361c;
        case 0x123620u: goto label_123620;
        case 0x123624u: goto label_123624;
        case 0x123628u: goto label_123628;
        case 0x12362cu: goto label_12362c;
        case 0x123630u: goto label_123630;
        case 0x123634u: goto label_123634;
        case 0x123638u: goto label_123638;
        case 0x12363cu: goto label_12363c;
        case 0x123640u: goto label_123640;
        case 0x123644u: goto label_123644;
        case 0x123648u: goto label_123648;
        case 0x12364cu: goto label_12364c;
        case 0x123650u: goto label_123650;
        case 0x123654u: goto label_123654;
        case 0x123658u: goto label_123658;
        case 0x12365cu: goto label_12365c;
        case 0x123660u: goto label_123660;
        case 0x123664u: goto label_123664;
        case 0x123668u: goto label_123668;
        case 0x12366cu: goto label_12366c;
        case 0x123670u: goto label_123670;
        case 0x123674u: goto label_123674;
        case 0x123678u: goto label_123678;
        case 0x12367cu: goto label_12367c;
        case 0x123680u: goto label_123680;
        case 0x123684u: goto label_123684;
        case 0x123688u: goto label_123688;
        case 0x12368cu: goto label_12368c;
        case 0x123690u: goto label_123690;
        case 0x123694u: goto label_123694;
        case 0x123698u: goto label_123698;
        case 0x12369cu: goto label_12369c;
        case 0x1236a0u: goto label_1236a0;
        case 0x1236a4u: goto label_1236a4;
        case 0x1236a8u: goto label_1236a8;
        case 0x1236acu: goto label_1236ac;
        case 0x1236b0u: goto label_1236b0;
        case 0x1236b4u: goto label_1236b4;
        case 0x1236b8u: goto label_1236b8;
        case 0x1236bcu: goto label_1236bc;
        case 0x1236c0u: goto label_1236c0;
        case 0x1236c4u: goto label_1236c4;
        case 0x1236c8u: goto label_1236c8;
        case 0x1236ccu: goto label_1236cc;
        case 0x1236d0u: goto label_1236d0;
        case 0x1236d4u: goto label_1236d4;
        case 0x1236d8u: goto label_1236d8;
        case 0x1236dcu: goto label_1236dc;
        case 0x1236e0u: goto label_1236e0;
        case 0x1236e4u: goto label_1236e4;
        case 0x1236e8u: goto label_1236e8;
        case 0x1236ecu: goto label_1236ec;
        case 0x1236f0u: goto label_1236f0;
        case 0x1236f4u: goto label_1236f4;
        case 0x1236f8u: goto label_1236f8;
        case 0x1236fcu: goto label_1236fc;
        case 0x123700u: goto label_123700;
        case 0x123704u: goto label_123704;
        case 0x123708u: goto label_123708;
        case 0x12370cu: goto label_12370c;
        case 0x123710u: goto label_123710;
        case 0x123714u: goto label_123714;
        case 0x123718u: goto label_123718;
        case 0x12371cu: goto label_12371c;
        case 0x123720u: goto label_123720;
        case 0x123724u: goto label_123724;
        case 0x123728u: goto label_123728;
        case 0x12372cu: goto label_12372c;
        case 0x123730u: goto label_123730;
        case 0x123734u: goto label_123734;
        case 0x123738u: goto label_123738;
        case 0x12373cu: goto label_12373c;
        case 0x123740u: goto label_123740;
        case 0x123744u: goto label_123744;
        case 0x123748u: goto label_123748;
        case 0x12374cu: goto label_12374c;
        case 0x123750u: goto label_123750;
        case 0x123754u: goto label_123754;
        case 0x123758u: goto label_123758;
        case 0x12375cu: goto label_12375c;
        case 0x123760u: goto label_123760;
        case 0x123764u: goto label_123764;
        case 0x123768u: goto label_123768;
        case 0x12376cu: goto label_12376c;
        case 0x123770u: goto label_123770;
        case 0x123774u: goto label_123774;
        case 0x123778u: goto label_123778;
        case 0x12377cu: goto label_12377c;
        case 0x123780u: goto label_123780;
        case 0x123784u: goto label_123784;
        case 0x123788u: goto label_123788;
        case 0x12378cu: goto label_12378c;
        case 0x123790u: goto label_123790;
        case 0x123794u: goto label_123794;
        case 0x123798u: goto label_123798;
        case 0x12379cu: goto label_12379c;
        case 0x1237a0u: goto label_1237a0;
        case 0x1237a4u: goto label_1237a4;
        case 0x1237a8u: goto label_1237a8;
        case 0x1237acu: goto label_1237ac;
        case 0x1237b0u: goto label_1237b0;
        case 0x1237b4u: goto label_1237b4;
        case 0x1237b8u: goto label_1237b8;
        case 0x1237bcu: goto label_1237bc;
        case 0x1237c0u: goto label_1237c0;
        case 0x1237c4u: goto label_1237c4;
        case 0x1237c8u: goto label_1237c8;
        case 0x1237ccu: goto label_1237cc;
        case 0x1237d0u: goto label_1237d0;
        case 0x1237d4u: goto label_1237d4;
        case 0x1237d8u: goto label_1237d8;
        case 0x1237dcu: goto label_1237dc;
        case 0x1237e0u: goto label_1237e0;
        case 0x1237e4u: goto label_1237e4;
        case 0x1237e8u: goto label_1237e8;
        case 0x1237ecu: goto label_1237ec;
        case 0x1237f0u: goto label_1237f0;
        case 0x1237f4u: goto label_1237f4;
        case 0x1237f8u: goto label_1237f8;
        case 0x1237fcu: goto label_1237fc;
        case 0x123800u: goto label_123800;
        case 0x123804u: goto label_123804;
        case 0x123808u: goto label_123808;
        case 0x12380cu: goto label_12380c;
        case 0x123810u: goto label_123810;
        case 0x123814u: goto label_123814;
        case 0x123818u: goto label_123818;
        case 0x12381cu: goto label_12381c;
        case 0x123820u: goto label_123820;
        case 0x123824u: goto label_123824;
        case 0x123828u: goto label_123828;
        case 0x12382cu: goto label_12382c;
        case 0x123830u: goto label_123830;
        case 0x123834u: goto label_123834;
        case 0x123838u: goto label_123838;
        case 0x12383cu: goto label_12383c;
        case 0x123840u: goto label_123840;
        case 0x123844u: goto label_123844;
        case 0x123848u: goto label_123848;
        case 0x12384cu: goto label_12384c;
        case 0x123850u: goto label_123850;
        case 0x123854u: goto label_123854;
        case 0x123858u: goto label_123858;
        case 0x12385cu: goto label_12385c;
        case 0x123860u: goto label_123860;
        case 0x123864u: goto label_123864;
        case 0x123868u: goto label_123868;
        case 0x12386cu: goto label_12386c;
        case 0x123870u: goto label_123870;
        case 0x123874u: goto label_123874;
        case 0x123878u: goto label_123878;
        case 0x12387cu: goto label_12387c;
        case 0x123880u: goto label_123880;
        case 0x123884u: goto label_123884;
        case 0x123888u: goto label_123888;
        case 0x12388cu: goto label_12388c;
        case 0x123890u: goto label_123890;
        case 0x123894u: goto label_123894;
        case 0x123898u: goto label_123898;
        case 0x12389cu: goto label_12389c;
        case 0x1238a0u: goto label_1238a0;
        case 0x1238a4u: goto label_1238a4;
        case 0x1238a8u: goto label_1238a8;
        case 0x1238acu: goto label_1238ac;
        case 0x1238b0u: goto label_1238b0;
        case 0x1238b4u: goto label_1238b4;
        case 0x1238b8u: goto label_1238b8;
        case 0x1238bcu: goto label_1238bc;
        case 0x1238c0u: goto label_1238c0;
        case 0x1238c4u: goto label_1238c4;
        case 0x1238c8u: goto label_1238c8;
        case 0x1238ccu: goto label_1238cc;
        case 0x1238d0u: goto label_1238d0;
        case 0x1238d4u: goto label_1238d4;
        case 0x1238d8u: goto label_1238d8;
        case 0x1238dcu: goto label_1238dc;
        case 0x1238e0u: goto label_1238e0;
        case 0x1238e4u: goto label_1238e4;
        case 0x1238e8u: goto label_1238e8;
        case 0x1238ecu: goto label_1238ec;
        case 0x1238f0u: goto label_1238f0;
        case 0x1238f4u: goto label_1238f4;
        case 0x1238f8u: goto label_1238f8;
        case 0x1238fcu: goto label_1238fc;
        case 0x123900u: goto label_123900;
        case 0x123904u: goto label_123904;
        case 0x123908u: goto label_123908;
        case 0x12390cu: goto label_12390c;
        case 0x123910u: goto label_123910;
        case 0x123914u: goto label_123914;
        case 0x123918u: goto label_123918;
        case 0x12391cu: goto label_12391c;
        case 0x123920u: goto label_123920;
        case 0x123924u: goto label_123924;
        case 0x123928u: goto label_123928;
        case 0x12392cu: goto label_12392c;
        case 0x123930u: goto label_123930;
        case 0x123934u: goto label_123934;
        case 0x123938u: goto label_123938;
        case 0x12393cu: goto label_12393c;
        case 0x123940u: goto label_123940;
        case 0x123944u: goto label_123944;
        case 0x123948u: goto label_123948;
        case 0x12394cu: goto label_12394c;
        case 0x123950u: goto label_123950;
        case 0x123954u: goto label_123954;
        case 0x123958u: goto label_123958;
        case 0x12395cu: goto label_12395c;
        case 0x123960u: goto label_123960;
        case 0x123964u: goto label_123964;
        case 0x123968u: goto label_123968;
        case 0x12396cu: goto label_12396c;
        case 0x123970u: goto label_123970;
        case 0x123974u: goto label_123974;
        case 0x123978u: goto label_123978;
        case 0x12397cu: goto label_12397c;
        case 0x123980u: goto label_123980;
        case 0x123984u: goto label_123984;
        case 0x123988u: goto label_123988;
        case 0x12398cu: goto label_12398c;
        case 0x123990u: goto label_123990;
        case 0x123994u: goto label_123994;
        case 0x123998u: goto label_123998;
        case 0x12399cu: goto label_12399c;
        case 0x1239a0u: goto label_1239a0;
        case 0x1239a4u: goto label_1239a4;
        case 0x1239a8u: goto label_1239a8;
        case 0x1239acu: goto label_1239ac;
        case 0x1239b0u: goto label_1239b0;
        case 0x1239b4u: goto label_1239b4;
        case 0x1239b8u: goto label_1239b8;
        case 0x1239bcu: goto label_1239bc;
        case 0x1239c0u: goto label_1239c0;
        case 0x1239c4u: goto label_1239c4;
        case 0x1239c8u: goto label_1239c8;
        case 0x1239ccu: goto label_1239cc;
        case 0x1239d0u: goto label_1239d0;
        case 0x1239d4u: goto label_1239d4;
        case 0x1239d8u: goto label_1239d8;
        case 0x1239dcu: goto label_1239dc;
        case 0x1239e0u: goto label_1239e0;
        case 0x1239e4u: goto label_1239e4;
        case 0x1239e8u: goto label_1239e8;
        case 0x1239ecu: goto label_1239ec;
        case 0x1239f0u: goto label_1239f0;
        case 0x1239f4u: goto label_1239f4;
        case 0x1239f8u: goto label_1239f8;
        case 0x1239fcu: goto label_1239fc;
        case 0x123a00u: goto label_123a00;
        case 0x123a04u: goto label_123a04;
        case 0x123a08u: goto label_123a08;
        case 0x123a0cu: goto label_123a0c;
        case 0x123a10u: goto label_123a10;
        case 0x123a14u: goto label_123a14;
        case 0x123a18u: goto label_123a18;
        case 0x123a1cu: goto label_123a1c;
        case 0x123a20u: goto label_123a20;
        case 0x123a24u: goto label_123a24;
        case 0x123a28u: goto label_123a28;
        case 0x123a2cu: goto label_123a2c;
        case 0x123a30u: goto label_123a30;
        case 0x123a34u: goto label_123a34;
        case 0x123a38u: goto label_123a38;
        case 0x123a3cu: goto label_123a3c;
        case 0x123a40u: goto label_123a40;
        case 0x123a44u: goto label_123a44;
        case 0x123a48u: goto label_123a48;
        case 0x123a4cu: goto label_123a4c;
        case 0x123a50u: goto label_123a50;
        case 0x123a54u: goto label_123a54;
        case 0x123a58u: goto label_123a58;
        case 0x123a5cu: goto label_123a5c;
        case 0x123a60u: goto label_123a60;
        case 0x123a64u: goto label_123a64;
        case 0x123a68u: goto label_123a68;
        case 0x123a6cu: goto label_123a6c;
        case 0x123a70u: goto label_123a70;
        case 0x123a74u: goto label_123a74;
        case 0x123a78u: goto label_123a78;
        case 0x123a7cu: goto label_123a7c;
        case 0x123a80u: goto label_123a80;
        case 0x123a84u: goto label_123a84;
        case 0x123a88u: goto label_123a88;
        case 0x123a8cu: goto label_123a8c;
        case 0x123a90u: goto label_123a90;
        case 0x123a94u: goto label_123a94;
        case 0x123a98u: goto label_123a98;
        case 0x123a9cu: goto label_123a9c;
        case 0x123aa0u: goto label_123aa0;
        case 0x123aa4u: goto label_123aa4;
        case 0x123aa8u: goto label_123aa8;
        case 0x123aacu: goto label_123aac;
        case 0x123ab0u: goto label_123ab0;
        case 0x123ab4u: goto label_123ab4;
        case 0x123ab8u: goto label_123ab8;
        case 0x123abcu: goto label_123abc;
        case 0x123ac0u: goto label_123ac0;
        case 0x123ac4u: goto label_123ac4;
        case 0x123ac8u: goto label_123ac8;
        case 0x123accu: goto label_123acc;
        case 0x123ad0u: goto label_123ad0;
        case 0x123ad4u: goto label_123ad4;
        case 0x123ad8u: goto label_123ad8;
        case 0x123adcu: goto label_123adc;
        case 0x123ae0u: goto label_123ae0;
        case 0x123ae4u: goto label_123ae4;
        case 0x123ae8u: goto label_123ae8;
        case 0x123aecu: goto label_123aec;
        case 0x123af0u: goto label_123af0;
        case 0x123af4u: goto label_123af4;
        case 0x123af8u: goto label_123af8;
        case 0x123afcu: goto label_123afc;
        case 0x123b00u: goto label_123b00;
        case 0x123b04u: goto label_123b04;
        case 0x123b08u: goto label_123b08;
        case 0x123b0cu: goto label_123b0c;
        case 0x123b10u: goto label_123b10;
        case 0x123b14u: goto label_123b14;
        case 0x123b18u: goto label_123b18;
        case 0x123b1cu: goto label_123b1c;
        case 0x123b20u: goto label_123b20;
        case 0x123b24u: goto label_123b24;
        case 0x123b28u: goto label_123b28;
        case 0x123b2cu: goto label_123b2c;
        case 0x123b30u: goto label_123b30;
        case 0x123b34u: goto label_123b34;
        case 0x123b38u: goto label_123b38;
        case 0x123b3cu: goto label_123b3c;
        case 0x123b40u: goto label_123b40;
        case 0x123b44u: goto label_123b44;
        case 0x123b48u: goto label_123b48;
        case 0x123b4cu: goto label_123b4c;
        case 0x123b50u: goto label_123b50;
        case 0x123b54u: goto label_123b54;
        case 0x123b58u: goto label_123b58;
        case 0x123b5cu: goto label_123b5c;
        case 0x123b60u: goto label_123b60;
        case 0x123b64u: goto label_123b64;
        case 0x123b68u: goto label_123b68;
        case 0x123b6cu: goto label_123b6c;
        case 0x123b70u: goto label_123b70;
        case 0x123b74u: goto label_123b74;
        case 0x123b78u: goto label_123b78;
        case 0x123b7cu: goto label_123b7c;
        case 0x123b80u: goto label_123b80;
        case 0x123b84u: goto label_123b84;
        case 0x123b88u: goto label_123b88;
        case 0x123b8cu: goto label_123b8c;
        case 0x123b90u: goto label_123b90;
        case 0x123b94u: goto label_123b94;
        case 0x123b98u: goto label_123b98;
        case 0x123b9cu: goto label_123b9c;
        case 0x123ba0u: goto label_123ba0;
        case 0x123ba4u: goto label_123ba4;
        case 0x123ba8u: goto label_123ba8;
        case 0x123bacu: goto label_123bac;
        case 0x123bb0u: goto label_123bb0;
        case 0x123bb4u: goto label_123bb4;
        case 0x123bb8u: goto label_123bb8;
        case 0x123bbcu: goto label_123bbc;
        case 0x123bc0u: goto label_123bc0;
        case 0x123bc4u: goto label_123bc4;
        case 0x123bc8u: goto label_123bc8;
        case 0x123bccu: goto label_123bcc;
        case 0x123bd0u: goto label_123bd0;
        case 0x123bd4u: goto label_123bd4;
        case 0x123bd8u: goto label_123bd8;
        case 0x123bdcu: goto label_123bdc;
        case 0x123be0u: goto label_123be0;
        case 0x123be4u: goto label_123be4;
        case 0x123be8u: goto label_123be8;
        case 0x123becu: goto label_123bec;
        case 0x123bf0u: goto label_123bf0;
        case 0x123bf4u: goto label_123bf4;
        case 0x123bf8u: goto label_123bf8;
        case 0x123bfcu: goto label_123bfc;
        case 0x123c00u: goto label_123c00;
        case 0x123c04u: goto label_123c04;
        case 0x123c08u: goto label_123c08;
        case 0x123c0cu: goto label_123c0c;
        case 0x123c10u: goto label_123c10;
        case 0x123c14u: goto label_123c14;
        case 0x123c18u: goto label_123c18;
        case 0x123c1cu: goto label_123c1c;
        case 0x123c20u: goto label_123c20;
        case 0x123c24u: goto label_123c24;
        case 0x123c28u: goto label_123c28;
        case 0x123c2cu: goto label_123c2c;
        case 0x123c30u: goto label_123c30;
        case 0x123c34u: goto label_123c34;
        case 0x123c38u: goto label_123c38;
        case 0x123c3cu: goto label_123c3c;
        case 0x123c40u: goto label_123c40;
        case 0x123c44u: goto label_123c44;
        case 0x123c48u: goto label_123c48;
        case 0x123c4cu: goto label_123c4c;
        case 0x123c50u: goto label_123c50;
        case 0x123c54u: goto label_123c54;
        case 0x123c58u: goto label_123c58;
        case 0x123c5cu: goto label_123c5c;
        case 0x123c60u: goto label_123c60;
        case 0x123c64u: goto label_123c64;
        case 0x123c68u: goto label_123c68;
        case 0x123c6cu: goto label_123c6c;
        case 0x123c70u: goto label_123c70;
        case 0x123c74u: goto label_123c74;
        case 0x123c78u: goto label_123c78;
        case 0x123c7cu: goto label_123c7c;
        case 0x123c80u: goto label_123c80;
        case 0x123c84u: goto label_123c84;
        case 0x123c88u: goto label_123c88;
        case 0x123c8cu: goto label_123c8c;
        case 0x123c90u: goto label_123c90;
        case 0x123c94u: goto label_123c94;
        case 0x123c98u: goto label_123c98;
        case 0x123c9cu: goto label_123c9c;
        case 0x123ca0u: goto label_123ca0;
        case 0x123ca4u: goto label_123ca4;
        case 0x123ca8u: goto label_123ca8;
        case 0x123cacu: goto label_123cac;
        case 0x123cb0u: goto label_123cb0;
        case 0x123cb4u: goto label_123cb4;
        case 0x123cb8u: goto label_123cb8;
        case 0x123cbcu: goto label_123cbc;
        case 0x123cc0u: goto label_123cc0;
        case 0x123cc4u: goto label_123cc4;
        case 0x123cc8u: goto label_123cc8;
        case 0x123cccu: goto label_123ccc;
        case 0x123cd0u: goto label_123cd0;
        case 0x123cd4u: goto label_123cd4;
        case 0x123cd8u: goto label_123cd8;
        case 0x123cdcu: goto label_123cdc;
        case 0x123ce0u: goto label_123ce0;
        case 0x123ce4u: goto label_123ce4;
        case 0x123ce8u: goto label_123ce8;
        case 0x123cecu: goto label_123cec;
        case 0x123cf0u: goto label_123cf0;
        case 0x123cf4u: goto label_123cf4;
        case 0x123cf8u: goto label_123cf8;
        case 0x123cfcu: goto label_123cfc;
        case 0x123d00u: goto label_123d00;
        case 0x123d04u: goto label_123d04;
        case 0x123d08u: goto label_123d08;
        case 0x123d0cu: goto label_123d0c;
        case 0x123d10u: goto label_123d10;
        case 0x123d14u: goto label_123d14;
        case 0x123d18u: goto label_123d18;
        case 0x123d1cu: goto label_123d1c;
        case 0x123d20u: goto label_123d20;
        case 0x123d24u: goto label_123d24;
        case 0x123d28u: goto label_123d28;
        case 0x123d2cu: goto label_123d2c;
        case 0x123d30u: goto label_123d30;
        case 0x123d34u: goto label_123d34;
        case 0x123d38u: goto label_123d38;
        case 0x123d3cu: goto label_123d3c;
        case 0x123d40u: goto label_123d40;
        case 0x123d44u: goto label_123d44;
        case 0x123d48u: goto label_123d48;
        case 0x123d4cu: goto label_123d4c;
        case 0x123d50u: goto label_123d50;
        case 0x123d54u: goto label_123d54;
        case 0x123d58u: goto label_123d58;
        case 0x123d5cu: goto label_123d5c;
        case 0x123d60u: goto label_123d60;
        case 0x123d64u: goto label_123d64;
        case 0x123d68u: goto label_123d68;
        case 0x123d6cu: goto label_123d6c;
        case 0x123d70u: goto label_123d70;
        case 0x123d74u: goto label_123d74;
        case 0x123d78u: goto label_123d78;
        case 0x123d7cu: goto label_123d7c;
        case 0x123d80u: goto label_123d80;
        case 0x123d84u: goto label_123d84;
        case 0x123d88u: goto label_123d88;
        case 0x123d8cu: goto label_123d8c;
        case 0x123d90u: goto label_123d90;
        case 0x123d94u: goto label_123d94;
        case 0x123d98u: goto label_123d98;
        case 0x123d9cu: goto label_123d9c;
        case 0x123da0u: goto label_123da0;
        case 0x123da4u: goto label_123da4;
        case 0x123da8u: goto label_123da8;
        case 0x123dacu: goto label_123dac;
        case 0x123db0u: goto label_123db0;
        case 0x123db4u: goto label_123db4;
        case 0x123db8u: goto label_123db8;
        case 0x123dbcu: goto label_123dbc;
        case 0x123dc0u: goto label_123dc0;
        case 0x123dc4u: goto label_123dc4;
        case 0x123dc8u: goto label_123dc8;
        case 0x123dccu: goto label_123dcc;
        case 0x123dd0u: goto label_123dd0;
        case 0x123dd4u: goto label_123dd4;
        case 0x123dd8u: goto label_123dd8;
        case 0x123ddcu: goto label_123ddc;
        case 0x123de0u: goto label_123de0;
        case 0x123de4u: goto label_123de4;
        case 0x123de8u: goto label_123de8;
        case 0x123decu: goto label_123dec;
        case 0x123df0u: goto label_123df0;
        case 0x123df4u: goto label_123df4;
        case 0x123df8u: goto label_123df8;
        case 0x123dfcu: goto label_123dfc;
        case 0x123e00u: goto label_123e00;
        case 0x123e04u: goto label_123e04;
        case 0x123e08u: goto label_123e08;
        case 0x123e0cu: goto label_123e0c;
        case 0x123e10u: goto label_123e10;
        case 0x123e14u: goto label_123e14;
        case 0x123e18u: goto label_123e18;
        case 0x123e1cu: goto label_123e1c;
        case 0x123e20u: goto label_123e20;
        case 0x123e24u: goto label_123e24;
        case 0x123e28u: goto label_123e28;
        case 0x123e2cu: goto label_123e2c;
        case 0x123e30u: goto label_123e30;
        case 0x123e34u: goto label_123e34;
        case 0x123e38u: goto label_123e38;
        case 0x123e3cu: goto label_123e3c;
        case 0x123e40u: goto label_123e40;
        case 0x123e44u: goto label_123e44;
        case 0x123e48u: goto label_123e48;
        case 0x123e4cu: goto label_123e4c;
        case 0x123e50u: goto label_123e50;
        case 0x123e54u: goto label_123e54;
        case 0x123e58u: goto label_123e58;
        case 0x123e5cu: goto label_123e5c;
        case 0x123e60u: goto label_123e60;
        case 0x123e64u: goto label_123e64;
        case 0x123e68u: goto label_123e68;
        case 0x123e6cu: goto label_123e6c;
        case 0x123e70u: goto label_123e70;
        case 0x123e74u: goto label_123e74;
        case 0x123e78u: goto label_123e78;
        case 0x123e7cu: goto label_123e7c;
        case 0x123e80u: goto label_123e80;
        case 0x123e84u: goto label_123e84;
        case 0x123e88u: goto label_123e88;
        case 0x123e8cu: goto label_123e8c;
        case 0x123e90u: goto label_123e90;
        case 0x123e94u: goto label_123e94;
        case 0x123e98u: goto label_123e98;
        case 0x123e9cu: goto label_123e9c;
        case 0x123ea0u: goto label_123ea0;
        case 0x123ea4u: goto label_123ea4;
        case 0x123ea8u: goto label_123ea8;
        case 0x123eacu: goto label_123eac;
        case 0x123eb0u: goto label_123eb0;
        case 0x123eb4u: goto label_123eb4;
        case 0x123eb8u: goto label_123eb8;
        case 0x123ebcu: goto label_123ebc;
        case 0x123ec0u: goto label_123ec0;
        case 0x123ec4u: goto label_123ec4;
        case 0x123ec8u: goto label_123ec8;
        case 0x123eccu: goto label_123ecc;
        case 0x123ed0u: goto label_123ed0;
        case 0x123ed4u: goto label_123ed4;
        case 0x123ed8u: goto label_123ed8;
        case 0x123edcu: goto label_123edc;
        case 0x123ee0u: goto label_123ee0;
        case 0x123ee4u: goto label_123ee4;
        case 0x123ee8u: goto label_123ee8;
        case 0x123eecu: goto label_123eec;
        case 0x123ef0u: goto label_123ef0;
        case 0x123ef4u: goto label_123ef4;
        case 0x123ef8u: goto label_123ef8;
        case 0x123efcu: goto label_123efc;
        case 0x123f00u: goto label_123f00;
        case 0x123f04u: goto label_123f04;
        case 0x123f08u: goto label_123f08;
        case 0x123f0cu: goto label_123f0c;
        case 0x123f10u: goto label_123f10;
        case 0x123f14u: goto label_123f14;
        case 0x123f18u: goto label_123f18;
        case 0x123f1cu: goto label_123f1c;
        case 0x123f20u: goto label_123f20;
        case 0x123f24u: goto label_123f24;
        case 0x123f28u: goto label_123f28;
        case 0x123f2cu: goto label_123f2c;
        case 0x123f30u: goto label_123f30;
        case 0x123f34u: goto label_123f34;
        case 0x123f38u: goto label_123f38;
        case 0x123f3cu: goto label_123f3c;
        case 0x123f40u: goto label_123f40;
        case 0x123f44u: goto label_123f44;
        case 0x123f48u: goto label_123f48;
        case 0x123f4cu: goto label_123f4c;
        case 0x123f50u: goto label_123f50;
        case 0x123f54u: goto label_123f54;
        case 0x123f58u: goto label_123f58;
        case 0x123f5cu: goto label_123f5c;
        case 0x123f60u: goto label_123f60;
        case 0x123f64u: goto label_123f64;
        case 0x123f68u: goto label_123f68;
        case 0x123f6cu: goto label_123f6c;
        case 0x123f70u: goto label_123f70;
        case 0x123f74u: goto label_123f74;
        case 0x123f78u: goto label_123f78;
        case 0x123f7cu: goto label_123f7c;
        case 0x123f80u: goto label_123f80;
        case 0x123f84u: goto label_123f84;
        case 0x123f88u: goto label_123f88;
        case 0x123f8cu: goto label_123f8c;
        case 0x123f90u: goto label_123f90;
        case 0x123f94u: goto label_123f94;
        case 0x123f98u: goto label_123f98;
        case 0x123f9cu: goto label_123f9c;
        case 0x123fa0u: goto label_123fa0;
        case 0x123fa4u: goto label_123fa4;
        case 0x123fa8u: goto label_123fa8;
        case 0x123facu: goto label_123fac;
        case 0x123fb0u: goto label_123fb0;
        case 0x123fb4u: goto label_123fb4;
        case 0x123fb8u: goto label_123fb8;
        case 0x123fbcu: goto label_123fbc;
        case 0x123fc0u: goto label_123fc0;
        case 0x123fc4u: goto label_123fc4;
        case 0x123fc8u: goto label_123fc8;
        case 0x123fccu: goto label_123fcc;
        case 0x123fd0u: goto label_123fd0;
        case 0x123fd4u: goto label_123fd4;
        case 0x123fd8u: goto label_123fd8;
        case 0x123fdcu: goto label_123fdc;
        case 0x123fe0u: goto label_123fe0;
        case 0x123fe4u: goto label_123fe4;
        case 0x123fe8u: goto label_123fe8;
        case 0x123fecu: goto label_123fec;
        case 0x123ff0u: goto label_123ff0;
        case 0x123ff4u: goto label_123ff4;
        case 0x123ff8u: goto label_123ff8;
        case 0x123ffcu: goto label_123ffc;
        case 0x124000u: goto label_124000;
        case 0x124004u: goto label_124004;
        case 0x124008u: goto label_124008;
        case 0x12400cu: goto label_12400c;
        case 0x124010u: goto label_124010;
        case 0x124014u: goto label_124014;
        case 0x124018u: goto label_124018;
        case 0x12401cu: goto label_12401c;
        case 0x124020u: goto label_124020;
        case 0x124024u: goto label_124024;
        case 0x124028u: goto label_124028;
        case 0x12402cu: goto label_12402c;
        case 0x124030u: goto label_124030;
        case 0x124034u: goto label_124034;
        case 0x124038u: goto label_124038;
        case 0x12403cu: goto label_12403c;
        case 0x124040u: goto label_124040;
        case 0x124044u: goto label_124044;
        case 0x124048u: goto label_124048;
        case 0x12404cu: goto label_12404c;
        case 0x124050u: goto label_124050;
        case 0x124054u: goto label_124054;
        case 0x124058u: goto label_124058;
        case 0x12405cu: goto label_12405c;
        case 0x124060u: goto label_124060;
        case 0x124064u: goto label_124064;
        case 0x124068u: goto label_124068;
        case 0x12406cu: goto label_12406c;
        case 0x124070u: goto label_124070;
        case 0x124074u: goto label_124074;
        case 0x124078u: goto label_124078;
        case 0x12407cu: goto label_12407c;
        case 0x124080u: goto label_124080;
        case 0x124084u: goto label_124084;
        case 0x124088u: goto label_124088;
        case 0x12408cu: goto label_12408c;
        case 0x124090u: goto label_124090;
        case 0x124094u: goto label_124094;
        case 0x124098u: goto label_124098;
        case 0x12409cu: goto label_12409c;
        case 0x1240a0u: goto label_1240a0;
        case 0x1240a4u: goto label_1240a4;
        case 0x1240a8u: goto label_1240a8;
        case 0x1240acu: goto label_1240ac;
        case 0x1240b0u: goto label_1240b0;
        case 0x1240b4u: goto label_1240b4;
        case 0x1240b8u: goto label_1240b8;
        case 0x1240bcu: goto label_1240bc;
        case 0x1240c0u: goto label_1240c0;
        case 0x1240c4u: goto label_1240c4;
        case 0x1240c8u: goto label_1240c8;
        case 0x1240ccu: goto label_1240cc;
        case 0x1240d0u: goto label_1240d0;
        case 0x1240d4u: goto label_1240d4;
        case 0x1240d8u: goto label_1240d8;
        case 0x1240dcu: goto label_1240dc;
        case 0x1240e0u: goto label_1240e0;
        case 0x1240e4u: goto label_1240e4;
        case 0x1240e8u: goto label_1240e8;
        case 0x1240ecu: goto label_1240ec;
        case 0x1240f0u: goto label_1240f0;
        case 0x1240f4u: goto label_1240f4;
        case 0x1240f8u: goto label_1240f8;
        case 0x1240fcu: goto label_1240fc;
        case 0x124100u: goto label_124100;
        case 0x124104u: goto label_124104;
        case 0x124108u: goto label_124108;
        case 0x12410cu: goto label_12410c;
        case 0x124110u: goto label_124110;
        case 0x124114u: goto label_124114;
        case 0x124118u: goto label_124118;
        case 0x12411cu: goto label_12411c;
        case 0x124120u: goto label_124120;
        case 0x124124u: goto label_124124;
        case 0x124128u: goto label_124128;
        case 0x12412cu: goto label_12412c;
        case 0x124130u: goto label_124130;
        case 0x124134u: goto label_124134;
        case 0x124138u: goto label_124138;
        case 0x12413cu: goto label_12413c;
        case 0x124140u: goto label_124140;
        case 0x124144u: goto label_124144;
        case 0x124148u: goto label_124148;
        case 0x12414cu: goto label_12414c;
        case 0x124150u: goto label_124150;
        case 0x124154u: goto label_124154;
        case 0x124158u: goto label_124158;
        case 0x12415cu: goto label_12415c;
        case 0x124160u: goto label_124160;
        case 0x124164u: goto label_124164;
        case 0x124168u: goto label_124168;
        case 0x12416cu: goto label_12416c;
        case 0x124170u: goto label_124170;
        case 0x124174u: goto label_124174;
        case 0x124178u: goto label_124178;
        case 0x12417cu: goto label_12417c;
        case 0x124180u: goto label_124180;
        case 0x124184u: goto label_124184;
        case 0x124188u: goto label_124188;
        case 0x12418cu: goto label_12418c;
        case 0x124190u: goto label_124190;
        case 0x124194u: goto label_124194;
        case 0x124198u: goto label_124198;
        case 0x12419cu: goto label_12419c;
        case 0x1241a0u: goto label_1241a0;
        case 0x1241a4u: goto label_1241a4;
        case 0x1241a8u: goto label_1241a8;
        case 0x1241acu: goto label_1241ac;
        case 0x1241b0u: goto label_1241b0;
        case 0x1241b4u: goto label_1241b4;
        case 0x1241b8u: goto label_1241b8;
        case 0x1241bcu: goto label_1241bc;
        case 0x1241c0u: goto label_1241c0;
        case 0x1241c4u: goto label_1241c4;
        case 0x1241c8u: goto label_1241c8;
        case 0x1241ccu: goto label_1241cc;
        case 0x1241d0u: goto label_1241d0;
        case 0x1241d4u: goto label_1241d4;
        case 0x1241d8u: goto label_1241d8;
        case 0x1241dcu: goto label_1241dc;
        case 0x1241e0u: goto label_1241e0;
        case 0x1241e4u: goto label_1241e4;
        case 0x1241e8u: goto label_1241e8;
        case 0x1241ecu: goto label_1241ec;
        case 0x1241f0u: goto label_1241f0;
        case 0x1241f4u: goto label_1241f4;
        case 0x1241f8u: goto label_1241f8;
        case 0x1241fcu: goto label_1241fc;
        case 0x124200u: goto label_124200;
        case 0x124204u: goto label_124204;
        case 0x124208u: goto label_124208;
        case 0x12420cu: goto label_12420c;
        case 0x124210u: goto label_124210;
        case 0x124214u: goto label_124214;
        case 0x124218u: goto label_124218;
        case 0x12421cu: goto label_12421c;
        case 0x124220u: goto label_124220;
        case 0x124224u: goto label_124224;
        case 0x124228u: goto label_124228;
        case 0x12422cu: goto label_12422c;
        case 0x124230u: goto label_124230;
        case 0x124234u: goto label_124234;
        case 0x124238u: goto label_124238;
        case 0x12423cu: goto label_12423c;
        case 0x124240u: goto label_124240;
        case 0x124244u: goto label_124244;
        case 0x124248u: goto label_124248;
        case 0x12424cu: goto label_12424c;
        case 0x124250u: goto label_124250;
        case 0x124254u: goto label_124254;
        case 0x124258u: goto label_124258;
        case 0x12425cu: goto label_12425c;
        case 0x124260u: goto label_124260;
        case 0x124264u: goto label_124264;
        case 0x124268u: goto label_124268;
        case 0x12426cu: goto label_12426c;
        case 0x124270u: goto label_124270;
        case 0x124274u: goto label_124274;
        case 0x124278u: goto label_124278;
        case 0x12427cu: goto label_12427c;
        case 0x124280u: goto label_124280;
        case 0x124284u: goto label_124284;
        case 0x124288u: goto label_124288;
        case 0x12428cu: goto label_12428c;
        case 0x124290u: goto label_124290;
        case 0x124294u: goto label_124294;
        case 0x124298u: goto label_124298;
        case 0x12429cu: goto label_12429c;
        case 0x1242a0u: goto label_1242a0;
        case 0x1242a4u: goto label_1242a4;
        case 0x1242a8u: goto label_1242a8;
        case 0x1242acu: goto label_1242ac;
        case 0x1242b0u: goto label_1242b0;
        case 0x1242b4u: goto label_1242b4;
        case 0x1242b8u: goto label_1242b8;
        case 0x1242bcu: goto label_1242bc;
        case 0x1242c0u: goto label_1242c0;
        case 0x1242c4u: goto label_1242c4;
        case 0x1242c8u: goto label_1242c8;
        case 0x1242ccu: goto label_1242cc;
        case 0x1242d0u: goto label_1242d0;
        case 0x1242d4u: goto label_1242d4;
        case 0x1242d8u: goto label_1242d8;
        case 0x1242dcu: goto label_1242dc;
        case 0x1242e0u: goto label_1242e0;
        case 0x1242e4u: goto label_1242e4;
        case 0x1242e8u: goto label_1242e8;
        case 0x1242ecu: goto label_1242ec;
        case 0x1242f0u: goto label_1242f0;
        case 0x1242f4u: goto label_1242f4;
        case 0x1242f8u: goto label_1242f8;
        case 0x1242fcu: goto label_1242fc;
        case 0x124300u: goto label_124300;
        case 0x124304u: goto label_124304;
        case 0x124308u: goto label_124308;
        case 0x12430cu: goto label_12430c;
        case 0x124310u: goto label_124310;
        case 0x124314u: goto label_124314;
        case 0x124318u: goto label_124318;
        case 0x12431cu: goto label_12431c;
        case 0x124320u: goto label_124320;
        case 0x124324u: goto label_124324;
        case 0x124328u: goto label_124328;
        case 0x12432cu: goto label_12432c;
        case 0x124330u: goto label_124330;
        case 0x124334u: goto label_124334;
        case 0x124338u: goto label_124338;
        case 0x12433cu: goto label_12433c;
        case 0x124340u: goto label_124340;
        case 0x124344u: goto label_124344;
        case 0x124348u: goto label_124348;
        case 0x12434cu: goto label_12434c;
        case 0x124350u: goto label_124350;
        case 0x124354u: goto label_124354;
        case 0x124358u: goto label_124358;
        case 0x12435cu: goto label_12435c;
        case 0x124360u: goto label_124360;
        case 0x124364u: goto label_124364;
        case 0x124368u: goto label_124368;
        case 0x12436cu: goto label_12436c;
        case 0x124370u: goto label_124370;
        case 0x124374u: goto label_124374;
        case 0x124378u: goto label_124378;
        case 0x12437cu: goto label_12437c;
        case 0x124380u: goto label_124380;
        case 0x124384u: goto label_124384;
        case 0x124388u: goto label_124388;
        case 0x12438cu: goto label_12438c;
        case 0x124390u: goto label_124390;
        case 0x124394u: goto label_124394;
        case 0x124398u: goto label_124398;
        case 0x12439cu: goto label_12439c;
        case 0x1243a0u: goto label_1243a0;
        case 0x1243a4u: goto label_1243a4;
        case 0x1243a8u: goto label_1243a8;
        case 0x1243acu: goto label_1243ac;
        case 0x1243b0u: goto label_1243b0;
        case 0x1243b4u: goto label_1243b4;
        case 0x1243b8u: goto label_1243b8;
        case 0x1243bcu: goto label_1243bc;
        case 0x1243c0u: goto label_1243c0;
        case 0x1243c4u: goto label_1243c4;
        case 0x1243c8u: goto label_1243c8;
        case 0x1243ccu: goto label_1243cc;
        case 0x1243d0u: goto label_1243d0;
        case 0x1243d4u: goto label_1243d4;
        case 0x1243d8u: goto label_1243d8;
        case 0x1243dcu: goto label_1243dc;
        case 0x1243e0u: goto label_1243e0;
        case 0x1243e4u: goto label_1243e4;
        case 0x1243e8u: goto label_1243e8;
        case 0x1243ecu: goto label_1243ec;
        case 0x1243f0u: goto label_1243f0;
        case 0x1243f4u: goto label_1243f4;
        case 0x1243f8u: goto label_1243f8;
        case 0x1243fcu: goto label_1243fc;
        case 0x124400u: goto label_124400;
        case 0x124404u: goto label_124404;
        case 0x124408u: goto label_124408;
        case 0x12440cu: goto label_12440c;
        case 0x124410u: goto label_124410;
        case 0x124414u: goto label_124414;
        case 0x124418u: goto label_124418;
        case 0x12441cu: goto label_12441c;
        case 0x124420u: goto label_124420;
        case 0x124424u: goto label_124424;
        case 0x124428u: goto label_124428;
        case 0x12442cu: goto label_12442c;
        case 0x124430u: goto label_124430;
        case 0x124434u: goto label_124434;
        case 0x124438u: goto label_124438;
        case 0x12443cu: goto label_12443c;
        case 0x124440u: goto label_124440;
        case 0x124444u: goto label_124444;
        case 0x124448u: goto label_124448;
        case 0x12444cu: goto label_12444c;
        case 0x124450u: goto label_124450;
        case 0x124454u: goto label_124454;
        case 0x124458u: goto label_124458;
        case 0x12445cu: goto label_12445c;
        case 0x124460u: goto label_124460;
        case 0x124464u: goto label_124464;
        case 0x124468u: goto label_124468;
        case 0x12446cu: goto label_12446c;
        case 0x124470u: goto label_124470;
        case 0x124474u: goto label_124474;
        case 0x124478u: goto label_124478;
        case 0x12447cu: goto label_12447c;
        case 0x124480u: goto label_124480;
        case 0x124484u: goto label_124484;
        case 0x124488u: goto label_124488;
        case 0x12448cu: goto label_12448c;
        case 0x124490u: goto label_124490;
        case 0x124494u: goto label_124494;
        case 0x124498u: goto label_124498;
        case 0x12449cu: goto label_12449c;
        case 0x1244a0u: goto label_1244a0;
        case 0x1244a4u: goto label_1244a4;
        case 0x1244a8u: goto label_1244a8;
        case 0x1244acu: goto label_1244ac;
        case 0x1244b0u: goto label_1244b0;
        case 0x1244b4u: goto label_1244b4;
        case 0x1244b8u: goto label_1244b8;
        case 0x1244bcu: goto label_1244bc;
        case 0x1244c0u: goto label_1244c0;
        case 0x1244c4u: goto label_1244c4;
        case 0x1244c8u: goto label_1244c8;
        case 0x1244ccu: goto label_1244cc;
        case 0x1244d0u: goto label_1244d0;
        case 0x1244d4u: goto label_1244d4;
        case 0x1244d8u: goto label_1244d8;
        case 0x1244dcu: goto label_1244dc;
        case 0x1244e0u: goto label_1244e0;
        case 0x1244e4u: goto label_1244e4;
        case 0x1244e8u: goto label_1244e8;
        case 0x1244ecu: goto label_1244ec;
        case 0x1244f0u: goto label_1244f0;
        case 0x1244f4u: goto label_1244f4;
        case 0x1244f8u: goto label_1244f8;
        case 0x1244fcu: goto label_1244fc;
        case 0x124500u: goto label_124500;
        case 0x124504u: goto label_124504;
        case 0x124508u: goto label_124508;
        case 0x12450cu: goto label_12450c;
        case 0x124510u: goto label_124510;
        case 0x124514u: goto label_124514;
        case 0x124518u: goto label_124518;
        case 0x12451cu: goto label_12451c;
        case 0x124520u: goto label_124520;
        case 0x124524u: goto label_124524;
        case 0x124528u: goto label_124528;
        case 0x12452cu: goto label_12452c;
        case 0x124530u: goto label_124530;
        case 0x124534u: goto label_124534;
        case 0x124538u: goto label_124538;
        case 0x12453cu: goto label_12453c;
        case 0x124540u: goto label_124540;
        case 0x124544u: goto label_124544;
        case 0x124548u: goto label_124548;
        case 0x12454cu: goto label_12454c;
        case 0x124550u: goto label_124550;
        case 0x124554u: goto label_124554;
        case 0x124558u: goto label_124558;
        case 0x12455cu: goto label_12455c;
        case 0x124560u: goto label_124560;
        case 0x124564u: goto label_124564;
        case 0x124568u: goto label_124568;
        case 0x12456cu: goto label_12456c;
        case 0x124570u: goto label_124570;
        case 0x124574u: goto label_124574;
        case 0x124578u: goto label_124578;
        case 0x12457cu: goto label_12457c;
        case 0x124580u: goto label_124580;
        case 0x124584u: goto label_124584;
        case 0x124588u: goto label_124588;
        case 0x12458cu: goto label_12458c;
        case 0x124590u: goto label_124590;
        case 0x124594u: goto label_124594;
        case 0x124598u: goto label_124598;
        case 0x12459cu: goto label_12459c;
        case 0x1245a0u: goto label_1245a0;
        case 0x1245a4u: goto label_1245a4;
        case 0x1245a8u: goto label_1245a8;
        case 0x1245acu: goto label_1245ac;
        case 0x1245b0u: goto label_1245b0;
        case 0x1245b4u: goto label_1245b4;
        case 0x1245b8u: goto label_1245b8;
        case 0x1245bcu: goto label_1245bc;
        case 0x1245c0u: goto label_1245c0;
        case 0x1245c4u: goto label_1245c4;
        case 0x1245c8u: goto label_1245c8;
        case 0x1245ccu: goto label_1245cc;
        case 0x1245d0u: goto label_1245d0;
        case 0x1245d4u: goto label_1245d4;
        case 0x1245d8u: goto label_1245d8;
        case 0x1245dcu: goto label_1245dc;
        case 0x1245e0u: goto label_1245e0;
        case 0x1245e4u: goto label_1245e4;
        case 0x1245e8u: goto label_1245e8;
        case 0x1245ecu: goto label_1245ec;
        case 0x1245f0u: goto label_1245f0;
        case 0x1245f4u: goto label_1245f4;
        case 0x1245f8u: goto label_1245f8;
        case 0x1245fcu: goto label_1245fc;
        case 0x124600u: goto label_124600;
        case 0x124604u: goto label_124604;
        default: break;
    }

    ctx->pc = 0x123550u;

label_123550:
    // 0x123550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x123550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_123554:
    // 0x123554: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x123554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_123558:
    // 0x123558: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x123558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_12355c:
    // 0x12355c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_123560:
    // 0x123560: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x123560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_123564:
    // 0x123564: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x123564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_123568:
    // 0x123568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x123568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12356c:
    // 0x12356c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_123570:
    // 0x123570: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x123570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_123574:
    // 0x123574: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x123574u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123578:
    // 0x123578: 0x265510b0  addiu       $s5, $s2, 0x10B0
    ctx->pc = 0x123578u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4272));
label_12357c:
    // 0x12357c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123580:
    // 0x123580: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x123580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_123584:
    // 0x123584: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x123584u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_123588:
    // 0x123588: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x123588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12358c:
    // 0x12358c: 0x8c300068  lw          $s0, 0x68($at)
    ctx->pc = 0x12358cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_123590:
    // 0x123590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123594:
    // 0x123594: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_123598:
    if (ctx->pc == 0x123598u) {
        ctx->pc = 0x12359Cu;
        goto label_12359c;
    }
    ctx->pc = 0x123594u;
    {
        const bool branch_taken_0x123594 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x123594) {
            ctx->pc = 0x1235C4u;
            goto label_1235c4;
        }
    }
    ctx->pc = 0x12359Cu;
label_12359c:
    // 0x12359c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12359cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1235a0:
    // 0x1235a0: 0x8c26006c  lw          $a2, 0x6C($at)
    ctx->pc = 0x1235a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_1235a4:
    // 0x1235a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1235a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1235a8:
    // 0x1235a8: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
label_1235ac:
    if (ctx->pc == 0x1235ACu) {
        ctx->pc = 0x1235B0u;
        goto label_1235b0;
    }
    ctx->pc = 0x1235A8u;
    {
        const bool branch_taken_0x1235a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1235a8) {
            ctx->pc = 0x1235C4u;
            goto label_1235c4;
        }
    }
    ctx->pc = 0x1235B0u;
label_1235b0:
    // 0x1235b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1235b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1235b4:
    // 0x1235b4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1235b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1235b8:
    // 0x1235b8: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x1235b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1235bc:
    // 0x1235bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1235bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1235c0:
    // 0x1235c0: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1235c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_1235c4:
    // 0x1235c4: 0xc067694  jal         func_19DA50
label_1235c8:
    if (ctx->pc == 0x1235C8u) {
        ctx->pc = 0x1235CCu;
        goto label_1235cc;
    }
    ctx->pc = 0x1235C4u;
    SET_GPR_U32(ctx, 31, 0x1235CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1235C4u, 0x1235CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235CCu;
label_1235cc:
    // 0x1235cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1235ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1235d0:
    // 0x1235d0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1235d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1235d4:
    // 0x1235d4: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x1235d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1235d8:
    // 0x1235d8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1235d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1235dc:
    // 0x1235dc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1235dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1235e0:
    // 0x1235e0: 0x24624d80  addiu       $v0, $v1, 0x4D80
    ctx->pc = 0x1235e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19840));
label_1235e4:
    // 0x1235e4: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x1235e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1235e8:
    // 0x1235e8: 0x86320000  lh          $s2, 0x0($s1)
    ctx->pc = 0x1235e8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1235ec:
    // 0x1235ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1235ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1235f0:
    // 0x1235f0: 0xa47210a6  sh          $s2, 0x10A6($v1)
    ctx->pc = 0x1235f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 18));
label_1235f4:
    // 0x1235f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1235f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1235f8:
    // 0x1235f8: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x1235f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_1235fc:
    // 0x1235fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1235fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123600:
    // 0x123600: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x123600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_123604:
    // 0x123604: 0x14400153  bnez        $v0, . + 4 + (0x153 << 2)
label_123608:
    if (ctx->pc == 0x123608u) {
        ctx->pc = 0x12360Cu;
        goto label_12360c;
    }
    ctx->pc = 0x123604u;
    {
        const bool branch_taken_0x123604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123604) {
            ctx->pc = 0x123B54u;
            goto label_123b54;
        }
    }
    ctx->pc = 0x12360Cu;
label_12360c:
    // 0x12360c: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x12360cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
label_123610:
    // 0x123610: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x123610u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123614:
    // 0x123614: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123618:
    // 0x123618: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x123618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
label_12361c:
    // 0x12361c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x12361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_123620:
    // 0x123620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123624:
    // 0x123624: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123628:
    // 0x123628: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x123628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
label_12362c:
    // 0x12362c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x12362cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_123630:
    // 0x123630: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x123630u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123634:
    // 0x123634: 0xc06246c  jal         func_1891B0
label_123638:
    if (ctx->pc == 0x123638u) {
        ctx->pc = 0x12363Cu;
        goto label_12363c;
    }
    ctx->pc = 0x123634u;
    SET_GPR_U32(ctx, 31, 0x12363Cu);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x123634u, 0x12363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12363Cu;
label_12363c:
    // 0x12363c: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x12363cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
label_123640:
    // 0x123640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x123640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123644:
    // 0x123644: 0x0  nop
    ctx->pc = 0x123644u;
    // NOP
label_123648:
    // 0x123648: 0xe6a000d0  swc1        $f0, 0xD0($s5)
    ctx->pc = 0x123648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 208), bits); }
label_12364c:
    // 0x12364c: 0xe6a000d4  swc1        $f0, 0xD4($s5)
    ctx->pc = 0x12364cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
label_123650:
    // 0x123650: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x123650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
label_123654:
    // 0x123654: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x123654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_123658:
    // 0x123658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12365c:
    // 0x12365c: 0x0  nop
    ctx->pc = 0x12365cu;
    // NOP
label_123660:
    // 0x123660: 0xe6a000d8  swc1        $f0, 0xD8($s5)
    ctx->pc = 0x123660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 216), bits); }
label_123664:
    // 0x123664: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x123664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_123668:
    // 0x123668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x123668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12366c:
    // 0x12366c: 0x0  nop
    ctx->pc = 0x12366cu;
    // NOP
label_123670:
    // 0x123670: 0xe6a000e4  swc1        $f0, 0xE4($s5)
    ctx->pc = 0x123670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 228), bits); }
label_123674:
    // 0x123674: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123678:
    // 0x123678: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x123678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12367c:
    // 0x12367c: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x12367cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_123680:
    // 0x123680: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x123680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_123684:
    // 0x123684: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x123684u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123688:
    // 0x123688: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x123688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_12368c:
    // 0x12368c: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x12368cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_123690:
    // 0x123690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123694:
    // 0x123694: 0x0  nop
    ctx->pc = 0x123694u;
    // NOP
label_123698:
    // 0x123698: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x123698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
label_12369c:
    // 0x12369c: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x12369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
label_1236a0:
    // 0x1236a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1236a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1236a4:
    // 0x1236a4: 0x0  nop
    ctx->pc = 0x1236a4u;
    // NOP
label_1236a8:
    // 0x1236a8: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x1236a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
label_1236ac:
    // 0x1236ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1236acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1236b0:
    // 0x1236b0: 0x0  nop
    ctx->pc = 0x1236b0u;
    // NOP
label_1236b4:
    // 0x1236b4: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x1236b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
label_1236b8:
    // 0x1236b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1236b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1236bc:
    // 0x1236bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1236bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1236c0:
    // 0x1236c0: 0x0  nop
    ctx->pc = 0x1236c0u;
    // NOP
label_1236c4:
    // 0x1236c4: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x1236c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
label_1236c8:
    // 0x1236c8: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x1236c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1236cc:
    // 0x1236cc: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x1236ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1236d0:
    // 0x1236d0: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1236d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_1236d4:
    // 0x1236d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1236d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1236d8:
    // 0x1236d8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1236d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1236dc:
    // 0x1236dc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1236dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1236e0:
    // 0x1236e0: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_1236e4:
    if (ctx->pc == 0x1236E4u) {
        ctx->pc = 0x1236E8u;
        goto label_1236e8;
    }
    ctx->pc = 0x1236E0u;
    {
        const bool branch_taken_0x1236e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1236e0) {
            ctx->pc = 0x123824u;
            goto label_123824;
        }
    }
    ctx->pc = 0x1236E8u;
label_1236e8:
    // 0x1236e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1236e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1236ec:
    // 0x1236ec: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1236f0:
    // 0x1236f0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1236f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_1236f4:
    // 0x1236f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1236f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1236f8:
    // 0x1236f8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1236f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1236fc:
    // 0x1236fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1236fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_123700:
    // 0x123700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x123700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123704:
    // 0x123704: 0xc099794  jal         func_265E50
label_123708:
    if (ctx->pc == 0x123708u) {
        ctx->pc = 0x12370Cu;
        goto label_12370c;
    }
    ctx->pc = 0x123704u;
    SET_GPR_U32(ctx, 31, 0x12370Cu);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x123704u, 0x12370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12370Cu;
label_12370c:
    // 0x12370c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x12370cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_123710:
    // 0x123710: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x123710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_123714:
    // 0x123714: 0x2443e650  addiu       $v1, $v0, -0x19B0
    ctx->pc = 0x123714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_123718:
    // 0x123718: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x123718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12371c:
    // 0x12371c: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x12371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_123720:
    // 0x123720: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123724:
    // 0x123724: 0xac226828  sw          $v0, 0x6828($at)
    ctx->pc = 0x123724u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26664), GPR_U32(ctx, 2));
label_123728:
    // 0x123728: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x123728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_12372c:
    // 0x12372c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12372cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_123730:
    // 0x123730: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123734:
    // 0x123734: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x123734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_123738:
    // 0x123738: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x123738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_12373c:
    // 0x12373c: 0xc077e7c  jal         func_1DF9F0
label_123740:
    if (ctx->pc == 0x123740u) {
        ctx->pc = 0x123744u;
        goto label_123744;
    }
    ctx->pc = 0x12373Cu;
    SET_GPR_U32(ctx, 31, 0x123744u);
    ctx->pc = 0x1DF9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9F0u, 0x12373Cu, 0x123744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123744u;
label_123744:
    // 0x123744: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123748:
    // 0x123748: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x123748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_12374c:
    // 0x12374c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_123750:
    // 0x123750: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x123750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_123754:
    // 0x123754: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x123754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_123758:
    // 0x123758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12375c:
    // 0x12375c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123760:
    // 0x123760: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x123760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_123764:
    // 0x123764: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x123764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
label_123768:
    // 0x123768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12376c:
    // 0x12376c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123770:
    // 0x123770: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x123770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_123774:
    // 0x123774: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x123774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_123778:
    // 0x123778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12377c:
    // 0x12377c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12377cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123780:
    // 0x123780: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x123780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_123784:
    // 0x123784: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x123784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
label_123788:
    // 0x123788: 0x3c04c974  lui         $a0, 0xC974
    ctx->pc = 0x123788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51572 << 16));
label_12378c:
    // 0x12378c: 0x34822400  ori         $v0, $a0, 0x2400
    ctx->pc = 0x12378cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9216);
label_123790:
    // 0x123790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123794:
    // 0x123794: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123798:
    // 0x123798: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x123798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_12379c:
    // 0x12379c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12379cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1237a0:
    // 0x1237a0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1237a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_1237a4:
    // 0x1237a4: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x1237a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_1237a8:
    // 0x1237a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1237a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1237ac:
    // 0x1237ac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_1237b0:
    // 0x1237b0: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1237b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_1237b4:
    // 0x1237b4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1237b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1237b8:
    // 0x1237b8: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x1237b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
label_1237bc:
    // 0x1237bc: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x1237bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_1237c0:
    // 0x1237c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1237c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1237c4:
    // 0x1237c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_1237c8:
    // 0x1237c8: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1237c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_1237cc:
    // 0x1237cc: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1237ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_1237d0:
    // 0x1237d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_1237d4:
    // 0x1237d4: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x1237d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_1237d8:
    // 0x1237d8: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x1237d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_1237dc:
    // 0x1237dc: 0x34620080  ori         $v0, $v1, 0x80
    ctx->pc = 0x1237dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_1237e0:
    // 0x1237e0: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x1237e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
label_1237e4:
    // 0x1237e4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_1237e8:
    // 0x1237e8: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x1237e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_1237ec:
    // 0x1237ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1237ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1237f0:
    // 0x1237f0: 0xc077e1c  jal         func_1DF870
label_1237f4:
    if (ctx->pc == 0x1237F4u) {
        ctx->pc = 0x1237F8u;
        goto label_1237f8;
    }
    ctx->pc = 0x1237F0u;
    SET_GPR_U32(ctx, 31, 0x1237F8u);
    ctx->pc = 0x1DF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF870u, 0x1237F0u, 0x1237F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237F8u;
label_1237f8:
    // 0x1237f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1237f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_1237fc:
    // 0x1237fc: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x1237fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
label_123800:
    // 0x123800: 0xc075e9c  jal         func_1D7A70
label_123804:
    if (ctx->pc == 0x123804u) {
        ctx->pc = 0x123808u;
        goto label_123808;
    }
    ctx->pc = 0x123800u;
    SET_GPR_U32(ctx, 31, 0x123808u);
    ctx->pc = 0x1D7A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7A70u, 0x123800u, 0x123808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123808u;
label_123808:
    // 0x123808: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x123808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12380c:
    // 0x12380c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x12380cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_123810:
    // 0x123810: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123814:
    // 0x123814: 0xac236830  sw          $v1, 0x6830($at)
    ctx->pc = 0x123814u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26672), GPR_U32(ctx, 3));
label_123818:
    // 0x123818: 0xa3808090  sb          $zero, -0x7F70($gp)
    ctx->pc = 0x123818u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934672), (uint8_t)GPR_U32(ctx, 0));
label_12381c:
    // 0x12381c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123820:
    // 0x123820: 0xac206838  sw          $zero, 0x6838($at)
    ctx->pc = 0x123820u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26680), GPR_U32(ctx, 0));
label_123824:
    // 0x123824: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123828:
    // 0x123828: 0xac206840  sw          $zero, 0x6840($at)
    ctx->pc = 0x123828u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26688), GPR_U32(ctx, 0));
label_12382c:
    // 0x12382c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12382cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_123830:
    // 0x123830: 0xac206844  sw          $zero, 0x6844($at)
    ctx->pc = 0x123830u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26692), GPR_U32(ctx, 0));
label_123834:
    // 0x123834: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x123834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_123838:
    // 0x123838: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x123838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
label_12383c:
    // 0x12383c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_123840:
    // 0x123840: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x123840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_123844:
    // 0x123844: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x123844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_123848:
    // 0x123848: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_12384c:
    // 0x12384c: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x12384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_123850:
    // 0x123850: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x123850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_123854:
    // 0x123854: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x123854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_123858:
    // 0x123858: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x123858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_12385c:
    // 0x12385c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12385cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_123860:
    // 0x123860: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x123860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_123864:
    // 0x123864: 0x8c330ae8  lw          $s3, 0xAE8($at)
    ctx->pc = 0x123864u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2792)));
label_123868:
    // 0x123868: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123868u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12386c:
    // 0x12386c: 0x10000026  b           . + 4 + (0x26 << 2)
label_123870:
    if (ctx->pc == 0x123870u) {
        ctx->pc = 0x123874u;
        goto label_123874;
    }
    ctx->pc = 0x12386Cu;
    {
        const bool branch_taken_0x12386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12386c) {
            ctx->pc = 0x123908u;
            goto label_123908;
        }
    }
    ctx->pc = 0x123874u;
label_123874:
    // 0x123874: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123878:
    // 0x123878: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_12387c:
    // 0x12387c: 0x24424ec8  addiu       $v0, $v0, 0x4EC8
    ctx->pc = 0x12387cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20168));
label_123880:
    // 0x123880: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x123880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_123884:
    // 0x123884: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x123884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_123888:
    // 0x123888: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12388c:
    // 0x12388c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x12388cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_123890:
    // 0x123890: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x123890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_123894:
    // 0x123894: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x123894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_123898:
    // 0x123898: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x123898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_12389c:
    // 0x12389c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x12389cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1238a0:
    // 0x1238a0: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1238a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1238a4:
    // 0x1238a4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1238a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1238a8:
    // 0x1238a8: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x1238a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_1238ac:
    // 0x1238ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1238acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1238b0:
    // 0x1238b0: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1238b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_1238b4:
    // 0x1238b4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1238b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1238b8:
    // 0x1238b8: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1238b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1238bc:
    // 0x1238bc: 0xc07801c  jal         func_1E0070
label_1238c0:
    if (ctx->pc == 0x1238C0u) {
        ctx->pc = 0x1238C4u;
        goto label_1238c4;
    }
    ctx->pc = 0x1238BCu;
    SET_GPR_U32(ctx, 31, 0x1238C4u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1238BCu, 0x1238C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238C4u;
label_1238c4:
    // 0x1238c4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1238c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1238c8:
    // 0x1238c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1238c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1238cc:
    // 0x1238cc: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x1238ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_1238d0:
    // 0x1238d0: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1238d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_1238d4:
    // 0x1238d4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1238d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1238d8:
    // 0x1238d8: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_1238dc:
    // 0x1238dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1238dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1238e0:
    // 0x1238e0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1238e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1238e4:
    // 0x1238e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1238e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1238e8:
    // 0x1238e8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1238e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1238ec:
    // 0x1238ec: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x1238ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_1238f0:
    // 0x1238f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1238f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1238f4:
    // 0x1238f4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1238f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1238f8:
    // 0x1238f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1238f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1238fc:
    // 0x1238fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1238fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_123900:
    // 0x123900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_123904:
    // 0x123904: 0x0  nop
    ctx->pc = 0x123904u;
    // NOP
label_123908:
    // 0x123908: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x123908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_12390c:
    // 0x12390c: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_123910:
    if (ctx->pc == 0x123910u) {
        ctx->pc = 0x123914u;
        goto label_123914;
    }
    ctx->pc = 0x12390Cu;
    {
        const bool branch_taken_0x12390c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12390c) {
            ctx->pc = 0x123874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123874;
        }
    }
    ctx->pc = 0x123914u;
label_123914:
    // 0x123914: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123914u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123918:
    // 0x123918: 0x10000025  b           . + 4 + (0x25 << 2)
label_12391c:
    if (ctx->pc == 0x12391Cu) {
        ctx->pc = 0x123920u;
        goto label_123920;
    }
    ctx->pc = 0x123918u;
    {
        const bool branch_taken_0x123918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123918) {
            ctx->pc = 0x1239B0u;
            goto label_1239b0;
        }
    }
    ctx->pc = 0x123920u;
label_123920:
    // 0x123920: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123924:
    // 0x123924: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_123928:
    // 0x123928: 0x24424ed8  addiu       $v0, $v0, 0x4ED8
    ctx->pc = 0x123928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20184));
label_12392c:
    // 0x12392c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x12392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_123930:
    // 0x123930: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x123930u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_123934:
    // 0x123934: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x123934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_123938:
    // 0x123938: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x123938u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_12393c:
    // 0x12393c: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x12393cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_123940:
    // 0x123940: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x123940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_123944:
    // 0x123944: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x123944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_123948:
    // 0x123948: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x123948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_12394c:
    // 0x12394c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x12394cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_123950:
    // 0x123950: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x123950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_123954:
    // 0x123954: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x123954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
label_123958:
    // 0x123958: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x123958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_12395c:
    // 0x12395c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x12395cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_123960:
    // 0x123960: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x123960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_123964:
    // 0x123964: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x123964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_123968:
    // 0x123968: 0xc07801c  jal         func_1E0070
label_12396c:
    if (ctx->pc == 0x12396Cu) {
        ctx->pc = 0x123970u;
        goto label_123970;
    }
    ctx->pc = 0x123968u;
    SET_GPR_U32(ctx, 31, 0x123970u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x123968u, 0x123970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123970u;
label_123970:
    // 0x123970: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x123970u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_123974:
    // 0x123974: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_123978:
    // 0x123978: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x123978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_12397c:
    // 0x12397c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x12397cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_123980:
    // 0x123980: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x123980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_123984:
    // 0x123984: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x123984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
label_123988:
    // 0x123988: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x123988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12398c:
    // 0x12398c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x12398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_123990:
    // 0x123990: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x123990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_123994:
    // 0x123994: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_123998:
    // 0x123998: 0x24450ae8  addiu       $a1, $v0, 0xAE8
    ctx->pc = 0x123998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_12399c:
    // 0x12399c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x12399cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1239a0:
    // 0x1239a0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1239a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1239a4:
    // 0x1239a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1239a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1239a8:
    // 0x1239a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1239a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1239ac:
    // 0x1239ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1239acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1239b0:
    // 0x1239b0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1239b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1239b4:
    // 0x1239b4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_1239b8:
    if (ctx->pc == 0x1239B8u) {
        ctx->pc = 0x1239BCu;
        goto label_1239bc;
    }
    ctx->pc = 0x1239B4u;
    {
        const bool branch_taken_0x1239b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1239b4) {
            ctx->pc = 0x123920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123920;
        }
    }
    ctx->pc = 0x1239BCu;
label_1239bc:
    // 0x1239bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1239bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1239c0:
    // 0x1239c0: 0x10000025  b           . + 4 + (0x25 << 2)
label_1239c4:
    if (ctx->pc == 0x1239C4u) {
        ctx->pc = 0x1239C8u;
        goto label_1239c8;
    }
    ctx->pc = 0x1239C0u;
    {
        const bool branch_taken_0x1239c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1239c0) {
            ctx->pc = 0x123A58u;
            goto label_123a58;
        }
    }
    ctx->pc = 0x1239C8u;
label_1239c8:
    // 0x1239c8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1239c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1239cc:
    // 0x1239cc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1239ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1239d0:
    // 0x1239d0: 0x24444ee0  addiu       $a0, $v0, 0x4EE0
    ctx->pc = 0x1239d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
label_1239d4:
    // 0x1239d4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1239d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1239d8:
    // 0x1239d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1239d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1239dc:
    // 0x1239dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1239dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1239e0:
    // 0x1239e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1239e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1239e4:
    // 0x1239e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1239e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1239e8:
    // 0x1239e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1239ec:
    // 0x1239ec: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x1239ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_1239f0:
    // 0x1239f0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1239f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1239f4:
    // 0x1239f4: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1239f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1239f8:
    // 0x1239f8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1239fc:
    // 0x1239fc: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x1239fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_123a00:
    // 0x123a00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x123a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_123a04:
    // 0x123a04: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x123a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_123a08:
    // 0x123a08: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x123a08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_123a0c:
    // 0x123a0c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x123a0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_123a10:
    // 0x123a10: 0xc07801c  jal         func_1E0070
label_123a14:
    if (ctx->pc == 0x123A14u) {
        ctx->pc = 0x123A18u;
        goto label_123a18;
    }
    ctx->pc = 0x123A10u;
    SET_GPR_U32(ctx, 31, 0x123A18u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x123A10u, 0x123A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A18u;
label_123a18:
    // 0x123a18: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x123a18u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_123a1c:
    // 0x123a1c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_123a20:
    // 0x123a20: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x123a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_123a24:
    // 0x123a24: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x123a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_123a28:
    // 0x123a28: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_123a2c:
    // 0x123a2c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x123a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_123a30:
    // 0x123a30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x123a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_123a34:
    // 0x123a34: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x123a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_123a38:
    // 0x123a38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x123a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_123a3c:
    // 0x123a3c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_123a40:
    // 0x123a40: 0x24450ae8  addiu       $a1, $v0, 0xAE8
    ctx->pc = 0x123a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_123a44:
    // 0x123a44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_123a48:
    // 0x123a48: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x123a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_123a4c:
    // 0x123a4c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x123a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_123a50:
    // 0x123a50: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x123a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_123a54:
    // 0x123a54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_123a58:
    // 0x123a58: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x123a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_123a5c:
    // 0x123a5c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_123a60:
    if (ctx->pc == 0x123A60u) {
        ctx->pc = 0x123A64u;
        goto label_123a64;
    }
    ctx->pc = 0x123A5Cu;
    {
        const bool branch_taken_0x123a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123a5c) {
            ctx->pc = 0x1239C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1239c8;
        }
    }
    ctx->pc = 0x123A64u;
label_123a64:
    // 0x123a64: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123a68:
    // 0x123a68: 0x94a3000e  lhu         $v1, 0xE($a1)
    ctx->pc = 0x123a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_123a6c:
    // 0x123a6c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x123a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_123a70:
    // 0x123a70: 0x30440018  andi        $a0, $v0, 0x18
    ctx->pc = 0x123a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
label_123a74:
    // 0x123a74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x123a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_123a78:
    // 0x123a78: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_123a7c:
    if (ctx->pc == 0x123A7Cu) {
        ctx->pc = 0x123A80u;
        goto label_123a80;
    }
    ctx->pc = 0x123A78u;
    {
        const bool branch_taken_0x123a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x123a78) {
            ctx->pc = 0x123B08u;
            goto label_123b08;
        }
    }
    ctx->pc = 0x123A80u;
label_123a80:
    // 0x123a80: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x123a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_123a84:
    // 0x123a84: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_123a88:
    if (ctx->pc == 0x123A88u) {
        ctx->pc = 0x123A8Cu;
        goto label_123a8c;
    }
    ctx->pc = 0x123A84u;
    {
        const bool branch_taken_0x123a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123a84) {
            ctx->pc = 0x123AD0u;
            goto label_123ad0;
        }
    }
    ctx->pc = 0x123A8Cu;
label_123a8c:
    // 0x123a8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_123a90:
    if (ctx->pc == 0x123A90u) {
        ctx->pc = 0x123A94u;
        goto label_123a94;
    }
    ctx->pc = 0x123A8Cu;
    {
        const bool branch_taken_0x123a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a8c) {
            ctx->pc = 0x123A9Cu;
            goto label_123a9c;
        }
    }
    ctx->pc = 0x123A94u;
label_123a94:
    // 0x123a94: 0x10000001  b           . + 4 + (0x1 << 2)
label_123a98:
    if (ctx->pc == 0x123A98u) {
        ctx->pc = 0x123A9Cu;
        goto label_123a9c;
    }
    ctx->pc = 0x123A94u;
    {
        const bool branch_taken_0x123a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a94) {
            ctx->pc = 0x123A9Cu;
            goto label_123a9c;
        }
    }
    ctx->pc = 0x123A9Cu;
label_123a9c:
    // 0x123a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123aa0:
    // 0x123aa0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123aa4:
    // 0x123aa4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x123aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_123aa8:
    // 0x123aa8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123aac:
    // 0x123aac: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x123aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_123ab0:
    // 0x123ab0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123ab4:
    // 0x123ab4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x123ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_123ab8:
    // 0x123ab8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123abc:
    // 0x123abc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x123abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_123ac0:
    // 0x123ac0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123ac4:
    // 0x123ac4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x123ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_123ac8:
    // 0x123ac8: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_123acc:
    if (ctx->pc == 0x123ACCu) {
        ctx->pc = 0x123AD0u;
        goto label_123ad0;
    }
    ctx->pc = 0x123AC8u;
    {
        const bool branch_taken_0x123ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ac8) {
            ctx->pc = 0x123E9Cu;
            goto label_123e9c;
        }
    }
    ctx->pc = 0x123AD0u;
label_123ad0:
    // 0x123ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123ad4:
    // 0x123ad4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123ad8:
    // 0x123ad8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x123ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_123adc:
    // 0x123adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123ae0:
    // 0x123ae0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123ae4:
    // 0x123ae4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x123ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_123ae8:
    // 0x123ae8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123aec:
    // 0x123aec: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x123aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_123af0:
    // 0x123af0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123af4:
    // 0x123af4: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x123af4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_123af8:
    // 0x123af8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123afc:
    // 0x123afc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x123afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_123b00:
    // 0x123b00: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_123b04:
    if (ctx->pc == 0x123B04u) {
        ctx->pc = 0x123B08u;
        goto label_123b08;
    }
    ctx->pc = 0x123B00u;
    {
        const bool branch_taken_0x123b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b00) {
            ctx->pc = 0x123E9Cu;
            goto label_123e9c;
        }
    }
    ctx->pc = 0x123B08u;
label_123b08:
    // 0x123b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123b0c:
    // 0x123b0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b10:
    // 0x123b10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x123b10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_123b14:
    // 0x123b14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x123b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_123b18:
    // 0x123b18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b1c:
    // 0x123b1c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x123b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_123b20:
    // 0x123b20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b24:
    // 0x123b24: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x123b24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_123b28:
    // 0x123b28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b2c:
    // 0x123b2c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x123b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_123b30:
    // 0x123b30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b34:
    // 0x123b34: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x123b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_123b38:
    // 0x123b38: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b3c:
    // 0x123b3c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x123b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_123b40:
    // 0x123b40: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x123b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_123b44:
    // 0x123b44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_123b48:
    // 0x123b48: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x123b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_123b4c:
    // 0x123b4c: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_123b50:
    if (ctx->pc == 0x123B50u) {
        ctx->pc = 0x123B54u;
        goto label_123b54;
    }
    ctx->pc = 0x123B4Cu;
    {
        const bool branch_taken_0x123b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b4c) {
            ctx->pc = 0x123E9Cu;
            goto label_123e9c;
        }
    }
    ctx->pc = 0x123B54u;
label_123b54:
    // 0x123b54: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x123b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_123b58:
    // 0x123b58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b5c:
    // 0x123b5c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x123b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_123b60:
    // 0x123b60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b64:
    // 0x123b64: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x123b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_123b68:
    // 0x123b68: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b6c:
    // 0x123b6c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x123b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_123b70:
    // 0x123b70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b74:
    // 0x123b74: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x123b74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_123b78:
    // 0x123b78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b7c:
    // 0x123b7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x123b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_123b80:
    // 0x123b80: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x123b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_123b84:
    // 0x123b84: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x123b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_123b88:
    // 0x123b88: 0xaea400f0  sw          $a0, 0xF0($s5)
    ctx->pc = 0x123b88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 4));
label_123b8c:
    // 0x123b8c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123b8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123b90:
    // 0x123b90: 0x10000013  b           . + 4 + (0x13 << 2)
label_123b94:
    if (ctx->pc == 0x123B94u) {
        ctx->pc = 0x123B98u;
        goto label_123b98;
    }
    ctx->pc = 0x123B90u;
    {
        const bool branch_taken_0x123b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b90) {
            ctx->pc = 0x123BE0u;
            goto label_123be0;
        }
    }
    ctx->pc = 0x123B98u;
label_123b98:
    // 0x123b98: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123b9c:
    // 0x123b9c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_123ba0:
    // 0x123ba0: 0x24424ec8  addiu       $v0, $v0, 0x4EC8
    ctx->pc = 0x123ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20168));
label_123ba4:
    // 0x123ba4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x123ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_123ba8:
    // 0x123ba8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x123ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_123bac:
    // 0x123bac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123bb0:
    // 0x123bb0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x123bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_123bb4:
    // 0x123bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123bb8:
    // 0x123bb8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x123bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_123bbc:
    // 0x123bbc: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x123bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_123bc0:
    // 0x123bc0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123bc4:
    // 0x123bc4: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x123bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_123bc8:
    // 0x123bc8: 0x8e550024  lw          $s5, 0x24($s2)
    ctx->pc = 0x123bc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_123bcc:
    // 0x123bcc: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x123bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_123bd0:
    // 0x123bd0: 0x2a22025  or          $a0, $s5, $v0
    ctx->pc = 0x123bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_123bd4:
    // 0x123bd4: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x123bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
label_123bd8:
    // 0x123bd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_123bdc:
    // 0x123bdc: 0x0  nop
    ctx->pc = 0x123bdcu;
    // NOP
label_123be0:
    // 0x123be0: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x123be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_123be4:
    // 0x123be4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_123be8:
    if (ctx->pc == 0x123BE8u) {
        ctx->pc = 0x123BECu;
        goto label_123bec;
    }
    ctx->pc = 0x123BE4u;
    {
        const bool branch_taken_0x123be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123be4) {
            ctx->pc = 0x123B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123b98;
        }
    }
    ctx->pc = 0x123BECu;
label_123bec:
    // 0x123bec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123becu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123bf0:
    // 0x123bf0: 0x10000013  b           . + 4 + (0x13 << 2)
label_123bf4:
    if (ctx->pc == 0x123BF4u) {
        ctx->pc = 0x123BF8u;
        goto label_123bf8;
    }
    ctx->pc = 0x123BF0u;
    {
        const bool branch_taken_0x123bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123bf0) {
            ctx->pc = 0x123C40u;
            goto label_123c40;
        }
    }
    ctx->pc = 0x123BF8u;
label_123bf8:
    // 0x123bf8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x123bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123bfc:
    // 0x123bfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_123c00:
    // 0x123c00: 0x24424ed8  addiu       $v0, $v0, 0x4ED8
    ctx->pc = 0x123c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20184));
label_123c04:
    // 0x123c04: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x123c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_123c08:
    // 0x123c08: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x123c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_123c0c:
    // 0x123c0c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x123c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_123c10:
    // 0x123c10: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x123c10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_123c14:
    // 0x123c14: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x123c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_123c18:
    // 0x123c18: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x123c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_123c1c:
    // 0x123c1c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x123c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_123c20:
    // 0x123c20: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123c24:
    // 0x123c24: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x123c24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_123c28:
    // 0x123c28: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x123c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_123c2c:
    // 0x123c2c: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x123c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_123c30:
    // 0x123c30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x123c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_123c34:
    // 0x123c34: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x123c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_123c38:
    // 0x123c38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_123c3c:
    // 0x123c3c: 0x0  nop
    ctx->pc = 0x123c3cu;
    // NOP
label_123c40:
    // 0x123c40: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x123c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_123c44:
    // 0x123c44: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_123c48:
    if (ctx->pc == 0x123C48u) {
        ctx->pc = 0x123C4Cu;
        goto label_123c4c;
    }
    ctx->pc = 0x123C44u;
    {
        const bool branch_taken_0x123c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123c44) {
            ctx->pc = 0x123BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123bf8;
        }
    }
    ctx->pc = 0x123C4Cu;
label_123c4c:
    // 0x123c4c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123c4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123c50:
    // 0x123c50: 0x10000013  b           . + 4 + (0x13 << 2)
label_123c54:
    if (ctx->pc == 0x123C54u) {
        ctx->pc = 0x123C58u;
        goto label_123c58;
    }
    ctx->pc = 0x123C50u;
    {
        const bool branch_taken_0x123c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123c50) {
            ctx->pc = 0x123CA0u;
            goto label_123ca0;
        }
    }
    ctx->pc = 0x123C58u;
label_123c58:
    // 0x123c58: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123c5c:
    // 0x123c5c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_123c60:
    // 0x123c60: 0x24424ee0  addiu       $v0, $v0, 0x4EE0
    ctx->pc = 0x123c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
label_123c64:
    // 0x123c64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x123c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_123c68:
    // 0x123c68: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x123c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_123c6c:
    // 0x123c6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123c70:
    // 0x123c70: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x123c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_123c74:
    // 0x123c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123c78:
    // 0x123c78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x123c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_123c7c:
    // 0x123c7c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_123c80:
    // 0x123c80: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123c84:
    // 0x123c84: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x123c84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_123c88:
    // 0x123c88: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x123c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_123c8c:
    // 0x123c8c: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x123c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_123c90:
    // 0x123c90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x123c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_123c94:
    // 0x123c94: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x123c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_123c98:
    // 0x123c98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_123c9c:
    // 0x123c9c: 0x0  nop
    ctx->pc = 0x123c9cu;
    // NOP
label_123ca0:
    // 0x123ca0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x123ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_123ca4:
    // 0x123ca4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_123ca8:
    if (ctx->pc == 0x123CA8u) {
        ctx->pc = 0x123CACu;
        goto label_123cac;
    }
    ctx->pc = 0x123CA4u;
    {
        const bool branch_taken_0x123ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123ca4) {
            ctx->pc = 0x123C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123c58;
        }
    }
    ctx->pc = 0x123CACu;
label_123cac:
    // 0x123cac: 0xc067694  jal         func_19DA50
label_123cb0:
    if (ctx->pc == 0x123CB0u) {
        ctx->pc = 0x123CB4u;
        goto label_123cb4;
    }
    ctx->pc = 0x123CACu;
    SET_GPR_U32(ctx, 31, 0x123CB4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123CACu, 0x123CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CB4u;
label_123cb4:
    // 0x123cb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123cb8:
    // 0x123cb8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x123cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_123cbc:
    // 0x123cbc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x123cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_123cc0:
    // 0x123cc0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123cc4:
    // 0x123cc4: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x123cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
label_123cc8:
    // 0x123cc8: 0xc067694  jal         func_19DA50
label_123ccc:
    if (ctx->pc == 0x123CCCu) {
        ctx->pc = 0x123CD0u;
        goto label_123cd0;
    }
    ctx->pc = 0x123CC8u;
    SET_GPR_U32(ctx, 31, 0x123CD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123CC8u, 0x123CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CD0u;
label_123cd0:
    // 0x123cd0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x123cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123cd4:
    // 0x123cd4: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x123cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_123cd8:
    // 0x123cd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_123cdc:
    if (ctx->pc == 0x123CDCu) {
        ctx->pc = 0x123CE0u;
        goto label_123ce0;
    }
    ctx->pc = 0x123CD8u;
    {
        const bool branch_taken_0x123cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123cd8) {
            ctx->pc = 0x123CF8u;
            goto label_123cf8;
        }
    }
    ctx->pc = 0x123CE0u;
label_123ce0:
    // 0x123ce0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123ce4:
    // 0x123ce4: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123ce8:
    // 0x123ce8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x123ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_123cec:
    // 0x123cec: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123cecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_123cf0:
    // 0x123cf0: 0x1000000b  b           . + 4 + (0xB << 2)
label_123cf4:
    if (ctx->pc == 0x123CF4u) {
        ctx->pc = 0x123CF8u;
        goto label_123cf8;
    }
    ctx->pc = 0x123CF0u;
    {
        const bool branch_taken_0x123cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123cf0) {
            ctx->pc = 0x123D20u;
            goto label_123d20;
        }
    }
    ctx->pc = 0x123CF8u;
label_123cf8:
    // 0x123cf8: 0xc067694  jal         func_19DA50
label_123cfc:
    if (ctx->pc == 0x123CFCu) {
        ctx->pc = 0x123D00u;
        goto label_123d00;
    }
    ctx->pc = 0x123CF8u;
    SET_GPR_U32(ctx, 31, 0x123D00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123CF8u, 0x123D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D00u;
label_123d00:
    // 0x123d00: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x123d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123d04:
    // 0x123d04: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x123d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_123d08:
    // 0x123d08: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_123d0c:
    if (ctx->pc == 0x123D0Cu) {
        ctx->pc = 0x123D10u;
        goto label_123d10;
    }
    ctx->pc = 0x123D08u;
    {
        const bool branch_taken_0x123d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d08) {
            ctx->pc = 0x123D20u;
            goto label_123d20;
        }
    }
    ctx->pc = 0x123D10u;
label_123d10:
    // 0x123d10: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123d14:
    // 0x123d14: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x123d14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_123d18:
    // 0x123d18: 0x34830004  ori         $v1, $a0, 0x4
    ctx->pc = 0x123d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_123d1c:
    // 0x123d1c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x123d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_123d20:
    // 0x123d20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123d24:
    // 0x123d24: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123d28:
    // 0x123d28: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x123d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_123d2c:
    // 0x123d2c: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_123d30:
    // 0x123d30: 0xc067694  jal         func_19DA50
label_123d34:
    if (ctx->pc == 0x123D34u) {
        ctx->pc = 0x123D38u;
        goto label_123d38;
    }
    ctx->pc = 0x123D30u;
    SET_GPR_U32(ctx, 31, 0x123D38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123D30u, 0x123D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D38u;
label_123d38:
    // 0x123d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123d3c:
    // 0x123d3c: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x123d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_123d40:
    // 0x123d40: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x123d40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_123d44:
    // 0x123d44: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_123d48:
    if (ctx->pc == 0x123D48u) {
        ctx->pc = 0x123D4Cu;
        goto label_123d4c;
    }
    ctx->pc = 0x123D44u;
    {
        const bool branch_taken_0x123d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d44) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123D4Cu;
label_123d4c:
    // 0x123d4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x123d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_123d50:
    // 0x123d50: 0x2443e1b0  addiu       $v1, $v0, -0x1E50
    ctx->pc = 0x123d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
label_123d54:
    // 0x123d54: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x123d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_123d58:
    // 0x123d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123d5c:
    // 0x123d5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x123d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123d60:
    // 0x123d60: 0x400008  jr          $v0
label_123d64:
    if (ctx->pc == 0x123D64u) {
        ctx->pc = 0x123D68u;
        goto label_123d68;
    }
    ctx->pc = 0x123D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x123D68u;
label_123d68:
    // 0x123d68: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123d6c:
    // 0x123d6c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123d70:
    // 0x123d70: 0x34441000  ori         $a0, $v0, 0x1000
    ctx->pc = 0x123d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_123d74:
    // 0x123d74: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x123d74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_123d78:
    // 0x123d78: 0x1000003b  b           . + 4 + (0x3B << 2)
label_123d7c:
    if (ctx->pc == 0x123D7Cu) {
        ctx->pc = 0x123D80u;
        goto label_123d80;
    }
    ctx->pc = 0x123D78u;
    {
        const bool branch_taken_0x123d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d78) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123D80u;
label_123d80:
    // 0x123d80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123d84:
    // 0x123d84: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123d84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123d88:
    // 0x123d88: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x123d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_123d8c:
    // 0x123d8c: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x123d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_123d90:
    // 0x123d90: 0x10000035  b           . + 4 + (0x35 << 2)
label_123d94:
    if (ctx->pc == 0x123D94u) {
        ctx->pc = 0x123D98u;
        goto label_123d98;
    }
    ctx->pc = 0x123D90u;
    {
        const bool branch_taken_0x123d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d90) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123D98u;
label_123d98:
    // 0x123d98: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123d9c:
    // 0x123d9c: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x123d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_123da0:
    // 0x123da0: 0x34443000  ori         $a0, $v0, 0x3000
    ctx->pc = 0x123da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
label_123da4:
    // 0x123da4: 0xa4a4000e  sh          $a0, 0xE($a1)
    ctx->pc = 0x123da4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 4));
label_123da8:
    // 0x123da8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_123dac:
    if (ctx->pc == 0x123DACu) {
        ctx->pc = 0x123DB0u;
        goto label_123db0;
    }
    ctx->pc = 0x123DA8u;
    {
        const bool branch_taken_0x123da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123da8) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123DB0u;
label_123db0:
    // 0x123db0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123db4:
    // 0x123db4: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x123db4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_123db8:
    // 0x123db8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x123db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_123dbc:
    // 0x123dbc: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x123dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_123dc0:
    // 0x123dc0: 0x10000029  b           . + 4 + (0x29 << 2)
label_123dc4:
    if (ctx->pc == 0x123DC4u) {
        ctx->pc = 0x123DC8u;
        goto label_123dc8;
    }
    ctx->pc = 0x123DC0u;
    {
        const bool branch_taken_0x123dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123dc0) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123DC8u;
label_123dc8:
    // 0x123dc8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123dcc:
    // 0x123dcc: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123dd0:
    // 0x123dd0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x123dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_123dd4:
    // 0x123dd4: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_123dd8:
    // 0x123dd8: 0x10000023  b           . + 4 + (0x23 << 2)
label_123ddc:
    if (ctx->pc == 0x123DDCu) {
        ctx->pc = 0x123DE0u;
        goto label_123de0;
    }
    ctx->pc = 0x123DD8u;
    {
        const bool branch_taken_0x123dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123dd8) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123DE0u;
label_123de0:
    // 0x123de0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123de4:
    // 0x123de4: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x123de4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_123de8:
    // 0x123de8: 0x34836000  ori         $v1, $a0, 0x6000
    ctx->pc = 0x123de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
label_123dec:
    // 0x123dec: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x123decu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_123df0:
    // 0x123df0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_123df4:
    if (ctx->pc == 0x123DF4u) {
        ctx->pc = 0x123DF8u;
        goto label_123df8;
    }
    ctx->pc = 0x123DF0u;
    {
        const bool branch_taken_0x123df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123df0) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123DF8u;
label_123df8:
    // 0x123df8: 0xc067694  jal         func_19DA50
label_123dfc:
    if (ctx->pc == 0x123DFCu) {
        ctx->pc = 0x123E00u;
        goto label_123e00;
    }
    ctx->pc = 0x123DF8u;
    SET_GPR_U32(ctx, 31, 0x123E00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123DF8u, 0x123E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E00u;
label_123e00:
    // 0x123e00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123e04:
    // 0x123e04: 0x30530003  andi        $s3, $v0, 0x3
    ctx->pc = 0x123e04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_123e08:
    // 0x123e08: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_123e0c:
    if (ctx->pc == 0x123E0Cu) {
        ctx->pc = 0x123E10u;
        goto label_123e10;
    }
    ctx->pc = 0x123E08u;
    {
        const bool branch_taken_0x123e08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x123e08) {
            ctx->pc = 0x123E28u;
            goto label_123e28;
        }
    }
    ctx->pc = 0x123E10u;
label_123e10:
    // 0x123e10: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123e14:
    // 0x123e14: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x123e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_123e18:
    // 0x123e18: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x123e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_123e1c:
    // 0x123e1c: 0xa4a2000e  sh          $v0, 0xE($a1)
    ctx->pc = 0x123e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
label_123e20:
    // 0x123e20: 0x10000011  b           . + 4 + (0x11 << 2)
label_123e24:
    if (ctx->pc == 0x123E24u) {
        ctx->pc = 0x123E28u;
        goto label_123e28;
    }
    ctx->pc = 0x123E20u;
    {
        const bool branch_taken_0x123e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e20) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123E28u;
label_123e28:
    // 0x123e28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123e2c:
    // 0x123e2c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123e30:
    // 0x123e30: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x123e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_123e34:
    // 0x123e34: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123e34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_123e38:
    // 0x123e38: 0x1000000b  b           . + 4 + (0xB << 2)
label_123e3c:
    if (ctx->pc == 0x123E3Cu) {
        ctx->pc = 0x123E40u;
        goto label_123e40;
    }
    ctx->pc = 0x123E38u;
    {
        const bool branch_taken_0x123e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e38) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123E40u;
label_123e40:
    // 0x123e40: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123e44:
    // 0x123e44: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x123e44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_123e48:
    // 0x123e48: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x123e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_123e4c:
    // 0x123e4c: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x123e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
label_123e50:
    // 0x123e50: 0x10000005  b           . + 4 + (0x5 << 2)
label_123e54:
    if (ctx->pc == 0x123E54u) {
        ctx->pc = 0x123E58u;
        goto label_123e58;
    }
    ctx->pc = 0x123E50u;
    {
        const bool branch_taken_0x123e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e50) {
            ctx->pc = 0x123E68u;
            goto label_123e68;
        }
    }
    ctx->pc = 0x123E58u;
label_123e58:
    // 0x123e58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123e5c:
    // 0x123e5c: 0x9451000e  lhu         $s1, 0xE($v0)
    ctx->pc = 0x123e5cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_123e60:
    // 0x123e60: 0x3632f000  ori         $s2, $s1, 0xF000
    ctx->pc = 0x123e60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)61440);
label_123e64:
    // 0x123e64: 0xa452000e  sh          $s2, 0xE($v0)
    ctx->pc = 0x123e64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 18));
label_123e68:
    // 0x123e68: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x123e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
label_123e6c:
    // 0x123e6c: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x123e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946656)));
label_123e70:
    // 0x123e70: 0x2c6202bc  sltiu       $v0, $v1, 0x2BC
    ctx->pc = 0x123e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)700) ? 1 : 0);
label_123e74:
    // 0x123e74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_123e78:
    if (ctx->pc == 0x123E78u) {
        ctx->pc = 0x123E7Cu;
        goto label_123e7c;
    }
    ctx->pc = 0x123E74u;
    {
        const bool branch_taken_0x123e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123e74) {
            ctx->pc = 0x123E9Cu;
            goto label_123e9c;
        }
    }
    ctx->pc = 0x123E7Cu;
label_123e7c:
    // 0x123e7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123e80:
    // 0x123e80: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123e84:
    // 0x123e84: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x123e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_123e88:
    // 0x123e88: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123e88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_123e8c:
    // 0x123e8c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123e90:
    // 0x123e90: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123e90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_123e94:
    // 0x123e94: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x123e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_123e98:
    // 0x123e98: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123e98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_123e9c:
    // 0x123e9c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x123e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_123ea0:
    // 0x123ea0: 0x24a34da0  addiu       $v1, $a1, 0x4DA0
    ctx->pc = 0x123ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 19872));
label_123ea4:
    // 0x123ea4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123ea8:
    // 0x123ea8: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x123ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
label_123eac:
    // 0x123eac: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x123eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_123eb0:
    // 0x123eb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123eb4:
    // 0x123eb4: 0xac44121c  sw          $a0, 0x121C($v0)
    ctx->pc = 0x123eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 4));
label_123eb8:
    // 0x123eb8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x123eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_123ebc:
    // 0x123ebc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123ec0:
    // 0x123ec0: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x123ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
label_123ec4:
    // 0x123ec4: 0xa680007c  sh          $zero, 0x7C($s4)
    ctx->pc = 0x123ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 124), (uint16_t)GPR_U32(ctx, 0));
label_123ec8:
    // 0x123ec8: 0xa2800094  sb          $zero, 0x94($s4)
    ctx->pc = 0x123ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 148), (uint8_t)GPR_U32(ctx, 0));
label_123ecc:
    // 0x123ecc: 0xa2800097  sb          $zero, 0x97($s4)
    ctx->pc = 0x123eccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 151), (uint8_t)GPR_U32(ctx, 0));
label_123ed0:
    // 0x123ed0: 0xa2800098  sb          $zero, 0x98($s4)
    ctx->pc = 0x123ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 0));
label_123ed4:
    // 0x123ed4: 0xa2800096  sb          $zero, 0x96($s4)
    ctx->pc = 0x123ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 150), (uint8_t)GPR_U32(ctx, 0));
label_123ed8:
    // 0x123ed8: 0xa680008a  sh          $zero, 0x8A($s4)
    ctx->pc = 0x123ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 138), (uint16_t)GPR_U32(ctx, 0));
label_123edc:
    // 0x123edc: 0xa280009a  sb          $zero, 0x9A($s4)
    ctx->pc = 0x123edcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 0));
label_123ee0:
    // 0x123ee0: 0xa6800092  sh          $zero, 0x92($s4)
    ctx->pc = 0x123ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 0));
label_123ee4:
    // 0x123ee4: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x123ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_123ee8:
    // 0x123ee8: 0x24100100  addiu       $s0, $zero, 0x100
    ctx->pc = 0x123ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_123eec:
    // 0x123eec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123ef0:
    // 0x123ef0: 0xa450122c  sh          $s0, 0x122C($v0)
    ctx->pc = 0x123ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 16));
label_123ef4:
    // 0x123ef4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x123ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_123ef8:
    // 0x123ef8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123efc:
    // 0x123efc: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x123efcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
label_123f00:
    // 0x123f00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123f04:
    // 0x123f04: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123f08:
    // 0x123f08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x123f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_123f0c:
    // 0x123f0c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x123f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_123f10:
    // 0x123f10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x123f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123f14:
    // 0x123f14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x123f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_123f18:
    // 0x123f18: 0xc0965d0  jal         func_259740
label_123f1c:
    if (ctx->pc == 0x123F1Cu) {
        ctx->pc = 0x123F20u;
        goto label_123f20;
    }
    ctx->pc = 0x123F18u;
    SET_GPR_U32(ctx, 31, 0x123F20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x123F18u, 0x123F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F20u;
label_123f20:
    // 0x123f20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123f24:
    // 0x123f24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x123f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123f28:
    // 0x123f28: 0xc096b40  jal         func_25AD00
label_123f2c:
    if (ctx->pc == 0x123F2Cu) {
        ctx->pc = 0x123F30u;
        goto label_123f30;
    }
    ctx->pc = 0x123F28u;
    SET_GPR_U32(ctx, 31, 0x123F30u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x123F28u, 0x123F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F30u;
label_123f30:
    // 0x123f30: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x123f30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_123f34:
    // 0x123f34: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x123f34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123f38:
    // 0x123f38: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x123f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_123f3c:
    // 0x123f3c: 0xc0974dc  jal         func_25D370
label_123f40:
    if (ctx->pc == 0x123F40u) {
        ctx->pc = 0x123F44u;
        goto label_123f44;
    }
    ctx->pc = 0x123F3Cu;
    SET_GPR_U32(ctx, 31, 0x123F44u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x123F3Cu, 0x123F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F44u;
label_123f44:
    // 0x123f44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123f44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_123f48:
    // 0x123f48: 0x1000000b  b           . + 4 + (0xB << 2)
label_123f4c:
    if (ctx->pc == 0x123F4Cu) {
        ctx->pc = 0x123F50u;
        goto label_123f50;
    }
    ctx->pc = 0x123F48u;
    {
        const bool branch_taken_0x123f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f48) {
            ctx->pc = 0x123F78u;
            goto label_123f78;
        }
    }
    ctx->pc = 0x123F50u;
label_123f50:
    // 0x123f50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x123f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123f54:
    // 0x123f54: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123f58:
    // 0x123f58: 0x1098c0  sll         $s3, $s0, 3
    ctx->pc = 0x123f58u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_123f5c:
    // 0x123f5c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x123f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_123f60:
    // 0x123f60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x123f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_123f64:
    // 0x123f64: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x123f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_123f68:
    // 0x123f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x123f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_123f6c:
    // 0x123f6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x123f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_123f70:
    // 0x123f70: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x123f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_123f74:
    // 0x123f74: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x123f74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_123f78:
    // 0x123f78: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x123f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_123f7c:
    // 0x123f7c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_123f80:
    if (ctx->pc == 0x123F80u) {
        ctx->pc = 0x123F84u;
        goto label_123f84;
    }
    ctx->pc = 0x123F7Cu;
    {
        const bool branch_taken_0x123f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123f7c) {
            ctx->pc = 0x123F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123f50;
        }
    }
    ctx->pc = 0x123F84u;
label_123f84:
    // 0x123f84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123f88:
    // 0x123f88: 0x9445000e  lhu         $a1, 0xE($v0)
    ctx->pc = 0x123f88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_123f8c:
    // 0x123f8c: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x123f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_123f90:
    // 0x123f90: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x123f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_123f94:
    // 0x123f94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_123f98:
    if (ctx->pc == 0x123F98u) {
        ctx->pc = 0x123F9Cu;
        goto label_123f9c;
    }
    ctx->pc = 0x123F94u;
    {
        const bool branch_taken_0x123f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f94) {
            ctx->pc = 0x123FA8u;
            goto label_123fa8;
        }
    }
    ctx->pc = 0x123F9Cu;
label_123f9c:
    // 0x123f9c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x123f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_123fa0:
    // 0x123fa0: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x123fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123fa4:
    // 0x123fa4: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x123fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
label_123fa8:
    // 0x123fa8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_123fac:
    // 0x123fac: 0x9445000e  lhu         $a1, 0xE($v0)
    ctx->pc = 0x123facu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_123fb0:
    // 0x123fb0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x123fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_123fb4:
    // 0x123fb4: 0x3044f000  andi        $a0, $v0, 0xF000
    ctx->pc = 0x123fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_123fb8:
    // 0x123fb8: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x123fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_123fbc:
    // 0x123fbc: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
label_123fc0:
    if (ctx->pc == 0x123FC0u) {
        ctx->pc = 0x123FC4u;
        goto label_123fc4;
    }
    ctx->pc = 0x123FBCu;
    {
        const bool branch_taken_0x123fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123fbc) {
            ctx->pc = 0x124240u;
            goto label_124240;
        }
    }
    ctx->pc = 0x123FC4u;
label_123fc4:
    // 0x123fc4: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x123fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_123fc8:
    // 0x123fc8: 0x1082008e  beq         $a0, $v0, . + 4 + (0x8E << 2)
label_123fcc:
    if (ctx->pc == 0x123FCCu) {
        ctx->pc = 0x123FD0u;
        goto label_123fd0;
    }
    ctx->pc = 0x123FC8u;
    {
        const bool branch_taken_0x123fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123fc8) {
            ctx->pc = 0x124204u;
            goto label_124204;
        }
    }
    ctx->pc = 0x123FD0u;
label_123fd0:
    // 0x123fd0: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x123fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_123fd4:
    // 0x123fd4: 0x10830076  beq         $a0, $v1, . + 4 + (0x76 << 2)
label_123fd8:
    if (ctx->pc == 0x123FD8u) {
        ctx->pc = 0x123FDCu;
        goto label_123fdc;
    }
    ctx->pc = 0x123FD4u;
    {
        const bool branch_taken_0x123fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x123fd4) {
            ctx->pc = 0x1241B0u;
            goto label_1241b0;
        }
    }
    ctx->pc = 0x123FDCu;
label_123fdc:
    // 0x123fdc: 0x24023000  addiu       $v0, $zero, 0x3000
    ctx->pc = 0x123fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
label_123fe0:
    // 0x123fe0: 0x1082005e  beq         $a0, $v0, . + 4 + (0x5E << 2)
label_123fe4:
    if (ctx->pc == 0x123FE4u) {
        ctx->pc = 0x123FE8u;
        goto label_123fe8;
    }
    ctx->pc = 0x123FE0u;
    {
        const bool branch_taken_0x123fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123fe0) {
            ctx->pc = 0x12415Cu;
            goto label_12415c;
        }
    }
    ctx->pc = 0x123FE8u;
label_123fe8:
    // 0x123fe8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x123fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_123fec:
    // 0x123fec: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
label_123ff0:
    if (ctx->pc == 0x123FF0u) {
        ctx->pc = 0x123FF4u;
        goto label_123ff4;
    }
    ctx->pc = 0x123FECu;
    {
        const bool branch_taken_0x123fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123fec) {
            ctx->pc = 0x124134u;
            goto label_124134;
        }
    }
    ctx->pc = 0x123FF4u;
label_123ff4:
    // 0x123ff4: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x123ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_123ff8:
    // 0x123ff8: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
label_123ffc:
    if (ctx->pc == 0x123FFCu) {
        ctx->pc = 0x124000u;
        goto label_124000;
    }
    ctx->pc = 0x123FF8u;
    {
        const bool branch_taken_0x123ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x123ff8) {
            ctx->pc = 0x12410Cu;
            goto label_12410c;
        }
    }
    ctx->pc = 0x124000u;
label_124000:
    // 0x124000: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x124000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_124004:
    // 0x124004: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
label_124008:
    if (ctx->pc == 0x124008u) {
        ctx->pc = 0x12400Cu;
        goto label_12400c;
    }
    ctx->pc = 0x124004u;
    {
        const bool branch_taken_0x124004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x124004) {
            ctx->pc = 0x1240F4u;
            goto label_1240f4;
        }
    }
    ctx->pc = 0x12400Cu;
label_12400c:
    // 0x12400c: 0x24112000  addiu       $s1, $zero, 0x2000
    ctx->pc = 0x12400cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_124010:
    // 0x124010: 0x1091002e  beq         $a0, $s1, . + 4 + (0x2E << 2)
label_124014:
    if (ctx->pc == 0x124014u) {
        ctx->pc = 0x124018u;
        goto label_124018;
    }
    ctx->pc = 0x124010u;
    {
        const bool branch_taken_0x124010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x124010) {
            ctx->pc = 0x1240CCu;
            goto label_1240cc;
        }
    }
    ctx->pc = 0x124018u;
label_124018:
    // 0x124018: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x124018u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_12401c:
    // 0x12401c: 0x1092001f  beq         $a0, $s2, . + 4 + (0x1F << 2)
label_124020:
    if (ctx->pc == 0x124020u) {
        ctx->pc = 0x124024u;
        goto label_124024;
    }
    ctx->pc = 0x12401Cu;
    {
        const bool branch_taken_0x12401c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x12401c) {
            ctx->pc = 0x12409Cu;
            goto label_12409c;
        }
    }
    ctx->pc = 0x124024u;
label_124024:
    // 0x124024: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x124024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_124028:
    // 0x124028: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_12402c:
    if (ctx->pc == 0x12402Cu) {
        ctx->pc = 0x124030u;
        goto label_124030;
    }
    ctx->pc = 0x124028u;
    {
        const bool branch_taken_0x124028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124028) {
            ctx->pc = 0x124040u;
            goto label_124040;
        }
    }
    ctx->pc = 0x124030u;
label_124030:
    // 0x124030: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_124034:
    if (ctx->pc == 0x124034u) {
        ctx->pc = 0x124038u;
        goto label_124038;
    }
    ctx->pc = 0x124030u;
    {
        const bool branch_taken_0x124030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124030) {
            ctx->pc = 0x124040u;
            goto label_124040;
        }
    }
    ctx->pc = 0x124038u;
label_124038:
    // 0x124038: 0x10000001  b           . + 4 + (0x1 << 2)
label_12403c:
    if (ctx->pc == 0x12403Cu) {
        ctx->pc = 0x124040u;
        goto label_124040;
    }
    ctx->pc = 0x124038u;
    {
        const bool branch_taken_0x124038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124038) {
            ctx->pc = 0x124040u;
            goto label_124040;
        }
    }
    ctx->pc = 0x124040u;
label_124040:
    // 0x124040: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124044:
    // 0x124044: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x124044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124048:
    // 0x124048: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12404c:
    // 0x12404c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x12404cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_124050:
    // 0x124050: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_124054:
    if (ctx->pc == 0x124054u) {
        ctx->pc = 0x124058u;
        goto label_124058;
    }
    ctx->pc = 0x124050u;
    {
        const bool branch_taken_0x124050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124050) {
            ctx->pc = 0x124088u;
            goto label_124088;
        }
    }
    ctx->pc = 0x124058u;
label_124058:
    // 0x124058: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12405c:
    // 0x12405c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x12405cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124060:
    // 0x124060: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x124060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_124064:
    // 0x124064: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x124064u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_124068:
    // 0x124068: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_12406c:
    if (ctx->pc == 0x12406Cu) {
        ctx->pc = 0x124070u;
        goto label_124070;
    }
    ctx->pc = 0x124068u;
    {
        const bool branch_taken_0x124068 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124068) {
            ctx->pc = 0x124088u;
            goto label_124088;
        }
    }
    ctx->pc = 0x124070u;
label_124070:
    // 0x124070: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124074:
    // 0x124074: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x124074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_124078:
    // 0x124078: 0xa0400bd0  sb          $zero, 0xBD0($v0)
    ctx->pc = 0x124078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3024), (uint8_t)GPR_U32(ctx, 0));
label_12407c:
    // 0x12407c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124080:
    // 0x124080: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x124080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_124084:
    // 0x124084: 0xa0a00ea0  sb          $zero, 0xEA0($a1)
    ctx->pc = 0x124084u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3744), (uint8_t)GPR_U32(ctx, 0));
label_124088:
    // 0x124088: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x124088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_12408c:
    // 0x12408c: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x12408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_124090:
    // 0x124090: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x124090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_124094:
    // 0x124094: 0x10000072  b           . + 4 + (0x72 << 2)
label_124098:
    if (ctx->pc == 0x124098u) {
        ctx->pc = 0x12409Cu;
        goto label_12409c;
    }
    ctx->pc = 0x124094u;
    {
        const bool branch_taken_0x124094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124094) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x12409Cu;
label_12409c:
    // 0x12409c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1240a0:
    // 0x1240a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1240a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1240a4:
    // 0x1240a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1240a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1240a8:
    // 0x1240a8: 0xc048148  jal         func_120520
label_1240ac:
    if (ctx->pc == 0x1240ACu) {
        ctx->pc = 0x1240B0u;
        goto label_1240b0;
    }
    ctx->pc = 0x1240A8u;
    SET_GPR_U32(ctx, 31, 0x1240B0u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x1240A8u, 0x1240B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240B0u;
label_1240b0:
    // 0x1240b0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1240b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1240b4:
    // 0x1240b4: 0x84a310a6  lh          $v1, 0x10A6($a1)
    ctx->pc = 0x1240b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
label_1240b8:
    // 0x1240b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1240b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1240bc:
    // 0x1240bc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1240bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1240c0:
    // 0x1240c0: 0xa4a410a6  sh          $a0, 0x10A6($a1)
    ctx->pc = 0x1240c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4262), (uint16_t)GPR_U32(ctx, 4));
label_1240c4:
    // 0x1240c4: 0x10000066  b           . + 4 + (0x66 << 2)
label_1240c8:
    if (ctx->pc == 0x1240C8u) {
        ctx->pc = 0x1240CCu;
        goto label_1240cc;
    }
    ctx->pc = 0x1240C4u;
    {
        const bool branch_taken_0x1240c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240c4) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x1240CCu;
label_1240cc:
    // 0x1240cc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1240ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1240d0:
    // 0x1240d0: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x1240d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1240d4:
    // 0x1240d4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1240d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1240d8:
    // 0x1240d8: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x1240d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_1240dc:
    // 0x1240dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1240dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1240e0:
    // 0x1240e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1240e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1240e4:
    // 0x1240e4: 0xc048148  jal         func_120520
label_1240e8:
    if (ctx->pc == 0x1240E8u) {
        ctx->pc = 0x1240ECu;
        goto label_1240ec;
    }
    ctx->pc = 0x1240E4u;
    SET_GPR_U32(ctx, 31, 0x1240ECu);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x1240E4u, 0x1240ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240ECu;
label_1240ec:
    // 0x1240ec: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1240f0:
    if (ctx->pc == 0x1240F0u) {
        ctx->pc = 0x1240F4u;
        goto label_1240f4;
    }
    ctx->pc = 0x1240ECu;
    {
        const bool branch_taken_0x1240ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240ec) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x1240F4u;
label_1240f4:
    // 0x1240f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1240f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1240f8:
    // 0x1240f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1240f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1240fc:
    // 0x1240fc: 0xc048148  jal         func_120520
label_124100:
    if (ctx->pc == 0x124100u) {
        ctx->pc = 0x124104u;
        goto label_124104;
    }
    ctx->pc = 0x1240FCu;
    SET_GPR_U32(ctx, 31, 0x124104u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x1240FCu, 0x124104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124104u;
label_124104:
    // 0x124104: 0x10000056  b           . + 4 + (0x56 << 2)
label_124108:
    if (ctx->pc == 0x124108u) {
        ctx->pc = 0x12410Cu;
        goto label_12410c;
    }
    ctx->pc = 0x124104u;
    {
        const bool branch_taken_0x124104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124104) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x12410Cu;
label_12410c:
    // 0x12410c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124110:
    // 0x124110: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x124110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_124114:
    // 0x124114: 0x34620020  ori         $v0, $v1, 0x20
    ctx->pc = 0x124114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_124118:
    // 0x124118: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x124118u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
label_12411c:
    // 0x12411c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12411cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124120:
    // 0x124120: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x124120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_124124:
    // 0x124124: 0xc048148  jal         func_120520
label_124128:
    if (ctx->pc == 0x124128u) {
        ctx->pc = 0x12412Cu;
        goto label_12412c;
    }
    ctx->pc = 0x124124u;
    SET_GPR_U32(ctx, 31, 0x12412Cu);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x124124u, 0x12412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12412Cu;
label_12412c:
    // 0x12412c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_124130:
    if (ctx->pc == 0x124130u) {
        ctx->pc = 0x124134u;
        goto label_124134;
    }
    ctx->pc = 0x12412Cu;
    {
        const bool branch_taken_0x12412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12412c) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x124134u;
label_124134:
    // 0x124134: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x124134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124138:
    // 0x124138: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x124138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_12413c:
    // 0x12413c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x12413cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_124140:
    // 0x124140: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x124140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_124144:
    // 0x124144: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124148:
    // 0x124148: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x124148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12414c:
    // 0x12414c: 0xc048148  jal         func_120520
label_124150:
    if (ctx->pc == 0x124150u) {
        ctx->pc = 0x124154u;
        goto label_124154;
    }
    ctx->pc = 0x12414Cu;
    SET_GPR_U32(ctx, 31, 0x124154u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x12414Cu, 0x124154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124154u;
label_124154:
    // 0x124154: 0x10000042  b           . + 4 + (0x42 << 2)
label_124158:
    if (ctx->pc == 0x124158u) {
        ctx->pc = 0x12415Cu;
        goto label_12415c;
    }
    ctx->pc = 0x124154u;
    {
        const bool branch_taken_0x124154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124154) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x12415Cu;
label_12415c:
    // 0x12415c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124160:
    // 0x124160: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x124160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_124164:
    // 0x124164: 0xc048148  jal         func_120520
label_124168:
    if (ctx->pc == 0x124168u) {
        ctx->pc = 0x12416Cu;
        goto label_12416c;
    }
    ctx->pc = 0x124164u;
    SET_GPR_U32(ctx, 31, 0x12416Cu);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x124164u, 0x12416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12416Cu;
label_12416c:
    // 0x12416c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124170:
    // 0x124170: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x124170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_124174:
    // 0x124174: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x124174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_124178:
    // 0x124178: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x124178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_12417c:
    // 0x12417c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_124180:
    if (ctx->pc == 0x124180u) {
        ctx->pc = 0x124184u;
        goto label_124184;
    }
    ctx->pc = 0x12417Cu;
    {
        const bool branch_taken_0x12417c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12417c) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x124184u;
label_124184:
    // 0x124184: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124188:
    // 0x124188: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x124188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_12418c:
    // 0x12418c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12418cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_124190:
    // 0x124190: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x124190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_124194:
    // 0x124194: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_124198:
    if (ctx->pc == 0x124198u) {
        ctx->pc = 0x12419Cu;
        goto label_12419c;
    }
    ctx->pc = 0x124194u;
    {
        const bool branch_taken_0x124194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124194) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x12419Cu;
label_12419c:
    // 0x12419c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1241a0:
    // 0x1241a0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1241a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1241a4:
    // 0x1241a4: 0xa0400ea0  sb          $zero, 0xEA0($v0)
    ctx->pc = 0x1241a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3744), (uint8_t)GPR_U32(ctx, 0));
label_1241a8:
    // 0x1241a8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1241ac:
    if (ctx->pc == 0x1241ACu) {
        ctx->pc = 0x1241B0u;
        goto label_1241b0;
    }
    ctx->pc = 0x1241A8u;
    {
        const bool branch_taken_0x1241a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241a8) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x1241B0u;
label_1241b0:
    // 0x1241b0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1241b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1241b4:
    // 0x1241b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1241b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1241b8:
    // 0x1241b8: 0xc048148  jal         func_120520
label_1241bc:
    if (ctx->pc == 0x1241BCu) {
        ctx->pc = 0x1241C0u;
        goto label_1241c0;
    }
    ctx->pc = 0x1241B8u;
    SET_GPR_U32(ctx, 31, 0x1241C0u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x1241B8u, 0x1241C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241C0u;
label_1241c0:
    // 0x1241c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1241c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1241c4:
    // 0x1241c4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1241c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1241c8:
    // 0x1241c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1241c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1241cc:
    // 0x1241cc: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x1241ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1241d0:
    // 0x1241d0: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
label_1241d4:
    if (ctx->pc == 0x1241D4u) {
        ctx->pc = 0x1241D8u;
        goto label_1241d8;
    }
    ctx->pc = 0x1241D0u;
    {
        const bool branch_taken_0x1241d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1241d0) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x1241D8u;
label_1241d8:
    // 0x1241d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1241d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1241dc:
    // 0x1241dc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1241dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1241e0:
    // 0x1241e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1241e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1241e4:
    // 0x1241e4: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1241e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_1241e8:
    // 0x1241e8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1241ec:
    if (ctx->pc == 0x1241ECu) {
        ctx->pc = 0x1241F0u;
        goto label_1241f0;
    }
    ctx->pc = 0x1241E8u;
    {
        const bool branch_taken_0x1241e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241e8) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x1241F0u;
label_1241f0:
    // 0x1241f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1241f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1241f4:
    // 0x1241f4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x1241f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1241f8:
    // 0x1241f8: 0xa2200ea0  sb          $zero, 0xEA0($s1)
    ctx->pc = 0x1241f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3744), (uint8_t)GPR_U32(ctx, 0));
label_1241fc:
    // 0x1241fc: 0x10000018  b           . + 4 + (0x18 << 2)
label_124200:
    if (ctx->pc == 0x124200u) {
        ctx->pc = 0x124204u;
        goto label_124204;
    }
    ctx->pc = 0x1241FCu;
    {
        const bool branch_taken_0x1241fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241fc) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x124204u;
label_124204:
    // 0x124204: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x124204u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124208:
    // 0x124208: 0x9655000e  lhu         $s5, 0xE($s2)
    ctx->pc = 0x124208u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_12420c:
    // 0x12420c: 0x36a20020  ori         $v0, $s5, 0x20
    ctx->pc = 0x12420cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_124210:
    // 0x124210: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x124210u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
label_124214:
    // 0x124214: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124218:
    // 0x124218: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x124218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12421c:
    // 0x12421c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12421cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_124220:
    // 0x124220: 0xc048148  jal         func_120520
label_124224:
    if (ctx->pc == 0x124224u) {
        ctx->pc = 0x124228u;
        goto label_124228;
    }
    ctx->pc = 0x124220u;
    SET_GPR_U32(ctx, 31, 0x124228u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x124220u, 0x124228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124228u;
label_124228:
    // 0x124228: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x124228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12422c:
    // 0x12422c: 0x84c210a6  lh          $v0, 0x10A6($a2)
    ctx->pc = 0x12422cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4262)));
label_124230:
    // 0x124230: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x124230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_124234:
    // 0x124234: 0xa4c210a6  sh          $v0, 0x10A6($a2)
    ctx->pc = 0x124234u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4262), (uint16_t)GPR_U32(ctx, 2));
label_124238:
    // 0x124238: 0x10000009  b           . + 4 + (0x9 << 2)
label_12423c:
    if (ctx->pc == 0x12423Cu) {
        ctx->pc = 0x124240u;
        goto label_124240;
    }
    ctx->pc = 0x124238u;
    {
        const bool branch_taken_0x124238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124238) {
            ctx->pc = 0x124260u;
            goto label_124260;
        }
    }
    ctx->pc = 0x124240u;
label_124240:
    // 0x124240: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124244:
    // 0x124244: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x124244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_124248:
    // 0x124248: 0xc048148  jal         func_120520
label_12424c:
    if (ctx->pc == 0x12424Cu) {
        ctx->pc = 0x124250u;
        goto label_124250;
    }
    ctx->pc = 0x124248u;
    SET_GPR_U32(ctx, 31, 0x124250u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x124248u, 0x124250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124250u;
label_124250:
    // 0x124250: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x124250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124254:
    // 0x124254: 0x84a410a6  lh          $a0, 0x10A6($a1)
    ctx->pc = 0x124254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
label_124258:
    // 0x124258: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x124258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_12425c:
    // 0x12425c: 0xa4a310a6  sh          $v1, 0x10A6($a1)
    ctx->pc = 0x12425cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4262), (uint16_t)GPR_U32(ctx, 3));
label_124260:
    // 0x124260: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124264:
    // 0x124264: 0x9451000e  lhu         $s1, 0xE($v0)
    ctx->pc = 0x124264u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_124268:
    // 0x124268: 0x3232ffff  andi        $s2, $s1, 0xFFFF
    ctx->pc = 0x124268u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_12426c:
    // 0x12426c: 0x32430020  andi        $v1, $s2, 0x20
    ctx->pc = 0x12426cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
label_124270:
    // 0x124270: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_124274:
    if (ctx->pc == 0x124274u) {
        ctx->pc = 0x124278u;
        goto label_124278;
    }
    ctx->pc = 0x124270u;
    {
        const bool branch_taken_0x124270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124270) {
            ctx->pc = 0x1242F8u;
            goto label_1242f8;
        }
    }
    ctx->pc = 0x124278u;
label_124278:
    // 0x124278: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12427c:
    // 0x12427c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x12427cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124280:
    // 0x124280: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x124280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_124284:
    // 0x124284: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x124284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_124288:
    // 0x124288: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_12428c:
    if (ctx->pc == 0x12428Cu) {
        ctx->pc = 0x124290u;
        goto label_124290;
    }
    ctx->pc = 0x124288u;
    {
        const bool branch_taken_0x124288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124288) {
            ctx->pc = 0x1242E4u;
            goto label_1242e4;
        }
    }
    ctx->pc = 0x124290u;
label_124290:
    // 0x124290: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124294:
    // 0x124294: 0x90820012  lbu         $v0, 0x12($a0)
    ctx->pc = 0x124294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_124298:
    // 0x124298: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12429c:
    // 0x12429c: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x12429cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_1242a0:
    // 0x1242a0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1242a4:
    if (ctx->pc == 0x1242A4u) {
        ctx->pc = 0x1242A8u;
        goto label_1242a8;
    }
    ctx->pc = 0x1242A0u;
    {
        const bool branch_taken_0x1242a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1242a0) {
            ctx->pc = 0x1242E4u;
            goto label_1242e4;
        }
    }
    ctx->pc = 0x1242A8u;
label_1242a8:
    // 0x1242a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1242a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1242ac:
    // 0x1242ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1242acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1242b0:
    // 0x1242b0: 0xa0400b40  sb          $zero, 0xB40($v0)
    ctx->pc = 0x1242b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2880), (uint8_t)GPR_U32(ctx, 0));
label_1242b4:
    // 0x1242b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1242b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1242b8:
    // 0x1242b8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1242b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1242bc:
    // 0x1242bc: 0xa0400ab0  sb          $zero, 0xAB0($v0)
    ctx->pc = 0x1242bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2736), (uint8_t)GPR_U32(ctx, 0));
label_1242c0:
    // 0x1242c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1242c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1242c4:
    // 0x1242c4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1242c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1242c8:
    // 0x1242c8: 0xa0600f30  sb          $zero, 0xF30($v1)
    ctx->pc = 0x1242c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3888), (uint8_t)GPR_U32(ctx, 0));
label_1242cc:
    // 0x1242cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1242ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1242d0:
    // 0x1242d0: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x1242d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1242d4:
    // 0x1242d4: 0xa2200bd0  sb          $zero, 0xBD0($s1)
    ctx->pc = 0x1242d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3024), (uint8_t)GPR_U32(ctx, 0));
label_1242d8:
    // 0x1242d8: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x1242d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1242dc:
    // 0x1242dc: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x1242dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_1242e0:
    // 0x1242e0: 0xa0600ea0  sb          $zero, 0xEA0($v1)
    ctx->pc = 0x1242e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3744), (uint8_t)GPR_U32(ctx, 0));
label_1242e4:
    // 0x1242e4: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1242e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1242e8:
    // 0x1242e8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1242e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1242ec:
    // 0x1242ec: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x1242ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_1242f0:
    // 0x1242f0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1242f4:
    if (ctx->pc == 0x1242F4u) {
        ctx->pc = 0x1242F8u;
        goto label_1242f8;
    }
    ctx->pc = 0x1242F0u;
    {
        const bool branch_taken_0x1242f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1242f0) {
            ctx->pc = 0x12434Cu;
            goto label_12434c;
        }
    }
    ctx->pc = 0x1242F8u;
label_1242f8:
    // 0x1242f8: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x1242f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1242fc:
    // 0x1242fc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1242fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_124300:
    // 0x124300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_124304:
    // 0x124304: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x124304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_124308:
    // 0x124308: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_12430c:
    if (ctx->pc == 0x12430Cu) {
        ctx->pc = 0x124310u;
        goto label_124310;
    }
    ctx->pc = 0x124308u;
    {
        const bool branch_taken_0x124308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124308) {
            ctx->pc = 0x12434Cu;
            goto label_12434c;
        }
    }
    ctx->pc = 0x124310u;
label_124310:
    // 0x124310: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124314:
    // 0x124314: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x124314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124318:
    // 0x124318: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x124318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12431c:
    // 0x12431c: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x12431cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
label_124320:
    // 0x124320: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_124324:
    if (ctx->pc == 0x124324u) {
        ctx->pc = 0x124328u;
        goto label_124328;
    }
    ctx->pc = 0x124320u;
    {
        const bool branch_taken_0x124320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124320) {
            ctx->pc = 0x12434Cu;
            goto label_12434c;
        }
    }
    ctx->pc = 0x124328u;
label_124328:
    // 0x124328: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12432c:
    // 0x12432c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x12432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_124330:
    // 0x124330: 0xa08010e0  sb          $zero, 0x10E0($a0)
    ctx->pc = 0x124330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4320), (uint8_t)GPR_U32(ctx, 0));
label_124334:
    // 0x124334: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124338:
    // 0x124338: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x124338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_12433c:
    // 0x12433c: 0xa0601050  sb          $zero, 0x1050($v1)
    ctx->pc = 0x12433cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4176), (uint8_t)GPR_U32(ctx, 0));
label_124340:
    // 0x124340: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124344:
    // 0x124344: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x124344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_124348:
    // 0x124348: 0xa0401170  sb          $zero, 0x1170($v0)
    ctx->pc = 0x124348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4464), (uint8_t)GPR_U32(ctx, 0));
label_12434c:
    // 0x12434c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124350:
    // 0x124350: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x124350u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_124354:
    // 0x124354: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x124354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_124358:
    // 0x124358: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x124358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_12435c:
    // 0x12435c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_124360:
    if (ctx->pc == 0x124360u) {
        ctx->pc = 0x124364u;
        goto label_124364;
    }
    ctx->pc = 0x12435Cu;
    {
        const bool branch_taken_0x12435c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12435c) {
            ctx->pc = 0x1243CCu;
            goto label_1243cc;
        }
    }
    ctx->pc = 0x124364u;
label_124364:
    // 0x124364: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124368:
    // 0x124368: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x124368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_12436c:
    // 0x12436c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12436cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_124370:
    // 0x124370: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x124370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_124374:
    // 0x124374: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_124378:
    if (ctx->pc == 0x124378u) {
        ctx->pc = 0x12437Cu;
        goto label_12437c;
    }
    ctx->pc = 0x124374u;
    {
        const bool branch_taken_0x124374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124374) {
            ctx->pc = 0x1244B8u;
            goto label_1244b8;
        }
    }
    ctx->pc = 0x12437Cu;
label_12437c:
    // 0x12437c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124380:
    // 0x124380: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x124380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124384:
    // 0x124384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_124388:
    // 0x124388: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x124388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_12438c:
    // 0x12438c: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
label_124390:
    if (ctx->pc == 0x124390u) {
        ctx->pc = 0x124394u;
        goto label_124394;
    }
    ctx->pc = 0x12438Cu;
    {
        const bool branch_taken_0x12438c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12438c) {
            ctx->pc = 0x1244B8u;
            goto label_1244b8;
        }
    }
    ctx->pc = 0x124394u;
label_124394:
    // 0x124394: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124398:
    // 0x124398: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x124398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_12439c:
    // 0x12439c: 0xa0400c60  sb          $zero, 0xC60($v0)
    ctx->pc = 0x12439cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3168), (uint8_t)GPR_U32(ctx, 0));
label_1243a0:
    // 0x1243a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1243a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1243a4:
    // 0x1243a4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1243a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1243a8:
    // 0x1243a8: 0xa0400cf0  sb          $zero, 0xCF0($v0)
    ctx->pc = 0x1243a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3312), (uint8_t)GPR_U32(ctx, 0));
label_1243ac:
    // 0x1243ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1243acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1243b0:
    // 0x1243b0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1243b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1243b4:
    // 0x1243b4: 0xa0400d80  sb          $zero, 0xD80($v0)
    ctx->pc = 0x1243b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3456), (uint8_t)GPR_U32(ctx, 0));
label_1243b8:
    // 0x1243b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1243b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1243bc:
    // 0x1243bc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1243bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1243c0:
    // 0x1243c0: 0xa0400e10  sb          $zero, 0xE10($v0)
    ctx->pc = 0x1243c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3600), (uint8_t)GPR_U32(ctx, 0));
label_1243c4:
    // 0x1243c4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1243c8:
    if (ctx->pc == 0x1243C8u) {
        ctx->pc = 0x1243CCu;
        goto label_1243cc;
    }
    ctx->pc = 0x1243C4u;
    {
        const bool branch_taken_0x1243c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243c4) {
            ctx->pc = 0x1244B8u;
            goto label_1244b8;
        }
    }
    ctx->pc = 0x1243CCu;
label_1243cc:
    // 0x1243cc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1243ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1243d0:
    // 0x1243d0: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x1243d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1243d4:
    // 0x1243d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1243d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1243d8:
    // 0x1243d8: 0x28440010  slti        $a0, $v0, 0x10
    ctx->pc = 0x1243d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1243dc:
    // 0x1243dc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_1243e0:
    if (ctx->pc == 0x1243E0u) {
        ctx->pc = 0x1243E4u;
        goto label_1243e4;
    }
    ctx->pc = 0x1243DCu;
    {
        const bool branch_taken_0x1243dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1243dc) {
            ctx->pc = 0x124408u;
            goto label_124408;
        }
    }
    ctx->pc = 0x1243E4u;
label_1243e4:
    // 0x1243e4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1243e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1243e8:
    // 0x1243e8: 0x90a20012  lbu         $v0, 0x12($a1)
    ctx->pc = 0x1243e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_1243ec:
    // 0x1243ec: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1243ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1243f0:
    // 0x1243f0: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x1243f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
label_1243f4:
    // 0x1243f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1243f8:
    if (ctx->pc == 0x1243F8u) {
        ctx->pc = 0x1243FCu;
        goto label_1243fc;
    }
    ctx->pc = 0x1243F4u;
    {
        const bool branch_taken_0x1243f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243f4) {
            ctx->pc = 0x124408u;
            goto label_124408;
        }
    }
    ctx->pc = 0x1243FCu;
label_1243fc:
    // 0x1243fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1243fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124400:
    // 0x124400: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x124400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_124404:
    // 0x124404: 0xa0600fc0  sb          $zero, 0xFC0($v1)
    ctx->pc = 0x124404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4032), (uint8_t)GPR_U32(ctx, 0));
label_124408:
    // 0x124408: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x124408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12440c:
    // 0x12440c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x12440cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_124410:
    // 0x124410: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x124410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_124414:
    // 0x124414: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x124414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_124418:
    // 0x124418: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_12441c:
    if (ctx->pc == 0x12441Cu) {
        ctx->pc = 0x124420u;
        goto label_124420;
    }
    ctx->pc = 0x124418u;
    {
        const bool branch_taken_0x124418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124418) {
            ctx->pc = 0x124470u;
            goto label_124470;
        }
    }
    ctx->pc = 0x124420u;
label_124420:
    // 0x124420: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124424:
    // 0x124424: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x124424u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124428:
    // 0x124428: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x124428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_12442c:
    // 0x12442c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x12442cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_124430:
    // 0x124430: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_124434:
    if (ctx->pc == 0x124434u) {
        ctx->pc = 0x124438u;
        goto label_124438;
    }
    ctx->pc = 0x124430u;
    {
        const bool branch_taken_0x124430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124430) {
            ctx->pc = 0x1244B8u;
            goto label_1244b8;
        }
    }
    ctx->pc = 0x124438u;
label_124438:
    // 0x124438: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12443c:
    // 0x12443c: 0x90530012  lbu         $s3, 0x12($v0)
    ctx->pc = 0x12443cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124440:
    // 0x124440: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x124440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_124444:
    // 0x124444: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x124444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
label_124448:
    // 0x124448: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_12444c:
    if (ctx->pc == 0x12444Cu) {
        ctx->pc = 0x124450u;
        goto label_124450;
    }
    ctx->pc = 0x124448u;
    {
        const bool branch_taken_0x124448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124448) {
            ctx->pc = 0x1244B8u;
            goto label_1244b8;
        }
    }
    ctx->pc = 0x124450u;
label_124450:
    // 0x124450: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124454:
    // 0x124454: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x124454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_124458:
    // 0x124458: 0xa0400d80  sb          $zero, 0xD80($v0)
    ctx->pc = 0x124458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3456), (uint8_t)GPR_U32(ctx, 0));
label_12445c:
    // 0x12445c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124460:
    // 0x124460: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x124460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_124464:
    // 0x124464: 0xa0400e10  sb          $zero, 0xE10($v0)
    ctx->pc = 0x124464u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3600), (uint8_t)GPR_U32(ctx, 0));
label_124468:
    // 0x124468: 0x10000013  b           . + 4 + (0x13 << 2)
label_12446c:
    if (ctx->pc == 0x12446Cu) {
        ctx->pc = 0x124470u;
        goto label_124470;
    }
    ctx->pc = 0x124468u;
    {
        const bool branch_taken_0x124468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124468) {
            ctx->pc = 0x1244B8u;
            goto label_1244b8;
        }
    }
    ctx->pc = 0x124470u;
label_124470:
    // 0x124470: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124474:
    // 0x124474: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x124474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124478:
    // 0x124478: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x124478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_12447c:
    // 0x12447c: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x12447cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_124480:
    // 0x124480: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_124484:
    if (ctx->pc == 0x124484u) {
        ctx->pc = 0x124488u;
        goto label_124488;
    }
    ctx->pc = 0x124480u;
    {
        const bool branch_taken_0x124480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124480) {
            ctx->pc = 0x1244B8u;
            goto label_1244b8;
        }
    }
    ctx->pc = 0x124488u;
label_124488:
    // 0x124488: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12448c:
    // 0x12448c: 0x90510012  lbu         $s1, 0x12($v0)
    ctx->pc = 0x12448cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124490:
    // 0x124490: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x124490u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_124494:
    // 0x124494: 0x2a410014  slti        $at, $s2, 0x14
    ctx->pc = 0x124494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
label_124498:
    // 0x124498: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_12449c:
    if (ctx->pc == 0x12449Cu) {
        ctx->pc = 0x1244A0u;
        goto label_1244a0;
    }
    ctx->pc = 0x124498u;
    {
        const bool branch_taken_0x124498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124498) {
            ctx->pc = 0x1244B8u;
            goto label_1244b8;
        }
    }
    ctx->pc = 0x1244A0u;
label_1244a0:
    // 0x1244a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1244a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1244a4:
    // 0x1244a4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1244a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1244a8:
    // 0x1244a8: 0xa0400c60  sb          $zero, 0xC60($v0)
    ctx->pc = 0x1244a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3168), (uint8_t)GPR_U32(ctx, 0));
label_1244ac:
    // 0x1244ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1244acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1244b0:
    // 0x1244b0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1244b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1244b4:
    // 0x1244b4: 0xa0400cf0  sb          $zero, 0xCF0($v0)
    ctx->pc = 0x1244b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3312), (uint8_t)GPR_U32(ctx, 0));
label_1244b8:
    // 0x1244b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1244b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1244bc:
    // 0x1244bc: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x1244bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1244c0:
    // 0x1244c0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1244c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1244c4:
    // 0x1244c4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1244c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1244c8:
    // 0x1244c8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_1244cc:
    if (ctx->pc == 0x1244CCu) {
        ctx->pc = 0x1244D0u;
        goto label_1244d0;
    }
    ctx->pc = 0x1244C8u;
    {
        const bool branch_taken_0x1244c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1244c8) {
            ctx->pc = 0x124550u;
            goto label_124550;
        }
    }
    ctx->pc = 0x1244D0u;
label_1244d0:
    // 0x1244d0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1244d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1244d4:
    // 0x1244d4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1244d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1244d8:
    // 0x1244d8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1244d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1244dc:
    // 0x1244dc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1244dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1244e0:
    // 0x1244e0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1244e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1244e4:
    // 0x1244e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1244e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1244e8:
    // 0x1244e8: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x1244e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1244ec:
    // 0x1244ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1244ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1244f0:
    // 0x1244f0: 0x28500010  slti        $s0, $v0, 0x10
    ctx->pc = 0x1244f0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1244f4:
    // 0x1244f4: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
label_1244f8:
    if (ctx->pc == 0x1244F8u) {
        ctx->pc = 0x1244FCu;
        goto label_1244fc;
    }
    ctx->pc = 0x1244F4u;
    {
        const bool branch_taken_0x1244f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1244f4) {
            ctx->pc = 0x124550u;
            goto label_124550;
        }
    }
    ctx->pc = 0x1244FCu;
label_1244fc:
    // 0x1244fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1244fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124500:
    // 0x124500: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x124500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_124504:
    // 0x124504: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x124504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_124508:
    // 0x124508: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x124508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_12450c:
    // 0x12450c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_124510:
    if (ctx->pc == 0x124510u) {
        ctx->pc = 0x124514u;
        goto label_124514;
    }
    ctx->pc = 0x12450Cu;
    {
        const bool branch_taken_0x12450c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12450c) {
            ctx->pc = 0x124550u;
            goto label_124550;
        }
    }
    ctx->pc = 0x124514u;
label_124514:
    // 0x124514: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124518:
    // 0x124518: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x124518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_12451c:
    // 0x12451c: 0xa0800fc0  sb          $zero, 0xFC0($a0)
    ctx->pc = 0x12451cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4032), (uint8_t)GPR_U32(ctx, 0));
label_124520:
    // 0x124520: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124524:
    // 0x124524: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x124524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_124528:
    // 0x124528: 0xa0c00cf0  sb          $zero, 0xCF0($a2)
    ctx->pc = 0x124528u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3312), (uint8_t)GPR_U32(ctx, 0));
label_12452c:
    // 0x12452c: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x12452cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124530:
    // 0x124530: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x124530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_124534:
    // 0x124534: 0xa1000c60  sb          $zero, 0xC60($t0)
    ctx->pc = 0x124534u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3168), (uint8_t)GPR_U32(ctx, 0));
label_124538:
    // 0x124538: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12453c:
    // 0x12453c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x12453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_124540:
    // 0x124540: 0xa0800e10  sb          $zero, 0xE10($a0)
    ctx->pc = 0x124540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3600), (uint8_t)GPR_U32(ctx, 0));
label_124544:
    // 0x124544: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x124544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_124548:
    // 0x124548: 0x8e320058  lw          $s2, 0x58($s1)
    ctx->pc = 0x124548u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_12454c:
    // 0x12454c: 0xa2400d80  sb          $zero, 0xD80($s2)
    ctx->pc = 0x12454cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3456), (uint8_t)GPR_U32(ctx, 0));
label_124550:
    // 0x124550: 0xa280004c  sb          $zero, 0x4C($s4)
    ctx->pc = 0x124550u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 76), (uint8_t)GPR_U32(ctx, 0));
label_124554:
    // 0x124554: 0xa2800054  sb          $zero, 0x54($s4)
    ctx->pc = 0x124554u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 84), (uint8_t)GPR_U32(ctx, 0));
label_124558:
    // 0x124558: 0xa280005c  sb          $zero, 0x5C($s4)
    ctx->pc = 0x124558u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 92), (uint8_t)GPR_U32(ctx, 0));
label_12455c:
    // 0x12455c: 0xa2800064  sb          $zero, 0x64($s4)
    ctx->pc = 0x12455cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 100), (uint8_t)GPR_U32(ctx, 0));
label_124560:
    // 0x124560: 0xa280006c  sb          $zero, 0x6C($s4)
    ctx->pc = 0x124560u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 108), (uint8_t)GPR_U32(ctx, 0));
label_124564:
    // 0x124564: 0xa2800074  sb          $zero, 0x74($s4)
    ctx->pc = 0x124564u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 116), (uint8_t)GPR_U32(ctx, 0));
label_124568:
    // 0x124568: 0xc067694  jal         func_19DA50
label_12456c:
    if (ctx->pc == 0x12456Cu) {
        ctx->pc = 0x124570u;
        goto label_124570;
    }
    ctx->pc = 0x124568u;
    SET_GPR_U32(ctx, 31, 0x124570u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x124568u, 0x124570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124570u;
label_124570:
    // 0x124570: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x124570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_124574:
    // 0x124574: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x124574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_124578:
    // 0x124578: 0x39e3c  dsll32      $s3, $v1, 24
    ctx->pc = 0x124578u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 24));
label_12457c:
    // 0x12457c: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x12457cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
label_124580:
    // 0x124580: 0xa2930056  sb          $s3, 0x56($s4)
    ctx->pc = 0x124580u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 86), (uint8_t)GPR_U32(ctx, 19));
label_124584:
    // 0x124584: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x124584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
label_124588:
    // 0x124588: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x124588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_12458c:
    // 0x12458c: 0xa282004e  sb          $v0, 0x4E($s4)
    ctx->pc = 0x12458cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 2));
label_124590:
    // 0x124590: 0xc067694  jal         func_19DA50
label_124594:
    if (ctx->pc == 0x124594u) {
        ctx->pc = 0x124598u;
        goto label_124598;
    }
    ctx->pc = 0x124590u;
    SET_GPR_U32(ctx, 31, 0x124598u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x124590u, 0x124598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124598u;
label_124598:
    // 0x124598: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x124598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12459c:
    // 0x12459c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x12459cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_1245a0:
    // 0x1245a0: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1245a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
label_1245a4:
    // 0x1245a4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1245a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1245a8:
    // 0x1245a8: 0xa2820066  sb          $v0, 0x66($s4)
    ctx->pc = 0x1245a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 102), (uint8_t)GPR_U32(ctx, 2));
label_1245ac:
    // 0x1245ac: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1245acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_1245b0:
    // 0x1245b0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1245b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1245b4:
    // 0x1245b4: 0xa282005e  sb          $v0, 0x5E($s4)
    ctx->pc = 0x1245b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 94), (uint8_t)GPR_U32(ctx, 2));
label_1245b8:
    // 0x1245b8: 0xc067694  jal         func_19DA50
label_1245bc:
    if (ctx->pc == 0x1245BCu) {
        ctx->pc = 0x1245C0u;
        goto label_1245c0;
    }
    ctx->pc = 0x1245B8u;
    SET_GPR_U32(ctx, 31, 0x1245C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1245B8u, 0x1245C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245C0u;
label_1245c0:
    // 0x1245c0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1245c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1245c4:
    // 0x1245c4: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x1245c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_1245c8:
    // 0x1245c8: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x1245c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_1245cc:
    // 0x1245cc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1245ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1245d0:
    // 0x1245d0: 0xa2830076  sb          $v1, 0x76($s4)
    ctx->pc = 0x1245d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 118), (uint8_t)GPR_U32(ctx, 3));
label_1245d4:
    // 0x1245d4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1245d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1245d8:
    // 0x1245d8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1245d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1245dc:
    // 0x1245dc: 0xa283006e  sb          $v1, 0x6E($s4)
    ctx->pc = 0x1245dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 110), (uint8_t)GPR_U32(ctx, 3));
label_1245e0:
    // 0x1245e0: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1245e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1245e4:
    // 0x1245e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1245e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1245e8:
    // 0x1245e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1245e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1245ec:
    // 0x1245ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1245ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1245f0:
    // 0x1245f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1245f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1245f4:
    // 0x1245f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1245f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1245f8:
    // 0x1245f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1245f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1245fc:
    // 0x1245fc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1245fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_124600:
    // 0x124600: 0x3e00008  jr          $ra
label_124604:
    if (ctx->pc == 0x124604u) {
        ctx->pc = 0x124608u;
        goto label_fallthrough_0x124600;
    }
    ctx->pc = 0x124600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x124600:
    ctx->pc = 0x124608u;
}
