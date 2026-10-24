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

// Function: BTL_screen_ck
// Address: 0x186560 - 0x186ccc
void BTL_screen_ck_0x186560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BTL_screen_ck_0x186560");
#endif

    switch (ctx->pc) {
        case 0x186560u: goto label_186560;
        case 0x186564u: goto label_186564;
        case 0x186568u: goto label_186568;
        case 0x18656cu: goto label_18656c;
        case 0x186570u: goto label_186570;
        case 0x186574u: goto label_186574;
        case 0x186578u: goto label_186578;
        case 0x18657cu: goto label_18657c;
        case 0x186580u: goto label_186580;
        case 0x186584u: goto label_186584;
        case 0x186588u: goto label_186588;
        case 0x18658cu: goto label_18658c;
        case 0x186590u: goto label_186590;
        case 0x186594u: goto label_186594;
        case 0x186598u: goto label_186598;
        case 0x18659cu: goto label_18659c;
        case 0x1865a0u: goto label_1865a0;
        case 0x1865a4u: goto label_1865a4;
        case 0x1865a8u: goto label_1865a8;
        case 0x1865acu: goto label_1865ac;
        case 0x1865b0u: goto label_1865b0;
        case 0x1865b4u: goto label_1865b4;
        case 0x1865b8u: goto label_1865b8;
        case 0x1865bcu: goto label_1865bc;
        case 0x1865c0u: goto label_1865c0;
        case 0x1865c4u: goto label_1865c4;
        case 0x1865c8u: goto label_1865c8;
        case 0x1865ccu: goto label_1865cc;
        case 0x1865d0u: goto label_1865d0;
        case 0x1865d4u: goto label_1865d4;
        case 0x1865d8u: goto label_1865d8;
        case 0x1865dcu: goto label_1865dc;
        case 0x1865e0u: goto label_1865e0;
        case 0x1865e4u: goto label_1865e4;
        case 0x1865e8u: goto label_1865e8;
        case 0x1865ecu: goto label_1865ec;
        case 0x1865f0u: goto label_1865f0;
        case 0x1865f4u: goto label_1865f4;
        case 0x1865f8u: goto label_1865f8;
        case 0x1865fcu: goto label_1865fc;
        case 0x186600u: goto label_186600;
        case 0x186604u: goto label_186604;
        case 0x186608u: goto label_186608;
        case 0x18660cu: goto label_18660c;
        case 0x186610u: goto label_186610;
        case 0x186614u: goto label_186614;
        case 0x186618u: goto label_186618;
        case 0x18661cu: goto label_18661c;
        case 0x186620u: goto label_186620;
        case 0x186624u: goto label_186624;
        case 0x186628u: goto label_186628;
        case 0x18662cu: goto label_18662c;
        case 0x186630u: goto label_186630;
        case 0x186634u: goto label_186634;
        case 0x186638u: goto label_186638;
        case 0x18663cu: goto label_18663c;
        case 0x186640u: goto label_186640;
        case 0x186644u: goto label_186644;
        case 0x186648u: goto label_186648;
        case 0x18664cu: goto label_18664c;
        case 0x186650u: goto label_186650;
        case 0x186654u: goto label_186654;
        case 0x186658u: goto label_186658;
        case 0x18665cu: goto label_18665c;
        case 0x186660u: goto label_186660;
        case 0x186664u: goto label_186664;
        case 0x186668u: goto label_186668;
        case 0x18666cu: goto label_18666c;
        case 0x186670u: goto label_186670;
        case 0x186674u: goto label_186674;
        case 0x186678u: goto label_186678;
        case 0x18667cu: goto label_18667c;
        case 0x186680u: goto label_186680;
        case 0x186684u: goto label_186684;
        case 0x186688u: goto label_186688;
        case 0x18668cu: goto label_18668c;
        case 0x186690u: goto label_186690;
        case 0x186694u: goto label_186694;
        case 0x186698u: goto label_186698;
        case 0x18669cu: goto label_18669c;
        case 0x1866a0u: goto label_1866a0;
        case 0x1866a4u: goto label_1866a4;
        case 0x1866a8u: goto label_1866a8;
        case 0x1866acu: goto label_1866ac;
        case 0x1866b0u: goto label_1866b0;
        case 0x1866b4u: goto label_1866b4;
        case 0x1866b8u: goto label_1866b8;
        case 0x1866bcu: goto label_1866bc;
        case 0x1866c0u: goto label_1866c0;
        case 0x1866c4u: goto label_1866c4;
        case 0x1866c8u: goto label_1866c8;
        case 0x1866ccu: goto label_1866cc;
        case 0x1866d0u: goto label_1866d0;
        case 0x1866d4u: goto label_1866d4;
        case 0x1866d8u: goto label_1866d8;
        case 0x1866dcu: goto label_1866dc;
        case 0x1866e0u: goto label_1866e0;
        case 0x1866e4u: goto label_1866e4;
        case 0x1866e8u: goto label_1866e8;
        case 0x1866ecu: goto label_1866ec;
        case 0x1866f0u: goto label_1866f0;
        case 0x1866f4u: goto label_1866f4;
        case 0x1866f8u: goto label_1866f8;
        case 0x1866fcu: goto label_1866fc;
        case 0x186700u: goto label_186700;
        case 0x186704u: goto label_186704;
        case 0x186708u: goto label_186708;
        case 0x18670cu: goto label_18670c;
        case 0x186710u: goto label_186710;
        case 0x186714u: goto label_186714;
        case 0x186718u: goto label_186718;
        case 0x18671cu: goto label_18671c;
        case 0x186720u: goto label_186720;
        case 0x186724u: goto label_186724;
        case 0x186728u: goto label_186728;
        case 0x18672cu: goto label_18672c;
        case 0x186730u: goto label_186730;
        case 0x186734u: goto label_186734;
        case 0x186738u: goto label_186738;
        case 0x18673cu: goto label_18673c;
        case 0x186740u: goto label_186740;
        case 0x186744u: goto label_186744;
        case 0x186748u: goto label_186748;
        case 0x18674cu: goto label_18674c;
        case 0x186750u: goto label_186750;
        case 0x186754u: goto label_186754;
        case 0x186758u: goto label_186758;
        case 0x18675cu: goto label_18675c;
        case 0x186760u: goto label_186760;
        case 0x186764u: goto label_186764;
        case 0x186768u: goto label_186768;
        case 0x18676cu: goto label_18676c;
        case 0x186770u: goto label_186770;
        case 0x186774u: goto label_186774;
        case 0x186778u: goto label_186778;
        case 0x18677cu: goto label_18677c;
        case 0x186780u: goto label_186780;
        case 0x186784u: goto label_186784;
        case 0x186788u: goto label_186788;
        case 0x18678cu: goto label_18678c;
        case 0x186790u: goto label_186790;
        case 0x186794u: goto label_186794;
        case 0x186798u: goto label_186798;
        case 0x18679cu: goto label_18679c;
        case 0x1867a0u: goto label_1867a0;
        case 0x1867a4u: goto label_1867a4;
        case 0x1867a8u: goto label_1867a8;
        case 0x1867acu: goto label_1867ac;
        case 0x1867b0u: goto label_1867b0;
        case 0x1867b4u: goto label_1867b4;
        case 0x1867b8u: goto label_1867b8;
        case 0x1867bcu: goto label_1867bc;
        case 0x1867c0u: goto label_1867c0;
        case 0x1867c4u: goto label_1867c4;
        case 0x1867c8u: goto label_1867c8;
        case 0x1867ccu: goto label_1867cc;
        case 0x1867d0u: goto label_1867d0;
        case 0x1867d4u: goto label_1867d4;
        case 0x1867d8u: goto label_1867d8;
        case 0x1867dcu: goto label_1867dc;
        case 0x1867e0u: goto label_1867e0;
        case 0x1867e4u: goto label_1867e4;
        case 0x1867e8u: goto label_1867e8;
        case 0x1867ecu: goto label_1867ec;
        case 0x1867f0u: goto label_1867f0;
        case 0x1867f4u: goto label_1867f4;
        case 0x1867f8u: goto label_1867f8;
        case 0x1867fcu: goto label_1867fc;
        case 0x186800u: goto label_186800;
        case 0x186804u: goto label_186804;
        case 0x186808u: goto label_186808;
        case 0x18680cu: goto label_18680c;
        case 0x186810u: goto label_186810;
        case 0x186814u: goto label_186814;
        case 0x186818u: goto label_186818;
        case 0x18681cu: goto label_18681c;
        case 0x186820u: goto label_186820;
        case 0x186824u: goto label_186824;
        case 0x186828u: goto label_186828;
        case 0x18682cu: goto label_18682c;
        case 0x186830u: goto label_186830;
        case 0x186834u: goto label_186834;
        case 0x186838u: goto label_186838;
        case 0x18683cu: goto label_18683c;
        case 0x186840u: goto label_186840;
        case 0x186844u: goto label_186844;
        case 0x186848u: goto label_186848;
        case 0x18684cu: goto label_18684c;
        case 0x186850u: goto label_186850;
        case 0x186854u: goto label_186854;
        case 0x186858u: goto label_186858;
        case 0x18685cu: goto label_18685c;
        case 0x186860u: goto label_186860;
        case 0x186864u: goto label_186864;
        case 0x186868u: goto label_186868;
        case 0x18686cu: goto label_18686c;
        case 0x186870u: goto label_186870;
        case 0x186874u: goto label_186874;
        case 0x186878u: goto label_186878;
        case 0x18687cu: goto label_18687c;
        case 0x186880u: goto label_186880;
        case 0x186884u: goto label_186884;
        case 0x186888u: goto label_186888;
        case 0x18688cu: goto label_18688c;
        case 0x186890u: goto label_186890;
        case 0x186894u: goto label_186894;
        case 0x186898u: goto label_186898;
        case 0x18689cu: goto label_18689c;
        case 0x1868a0u: goto label_1868a0;
        case 0x1868a4u: goto label_1868a4;
        case 0x1868a8u: goto label_1868a8;
        case 0x1868acu: goto label_1868ac;
        case 0x1868b0u: goto label_1868b0;
        case 0x1868b4u: goto label_1868b4;
        case 0x1868b8u: goto label_1868b8;
        case 0x1868bcu: goto label_1868bc;
        case 0x1868c0u: goto label_1868c0;
        case 0x1868c4u: goto label_1868c4;
        case 0x1868c8u: goto label_1868c8;
        case 0x1868ccu: goto label_1868cc;
        case 0x1868d0u: goto label_1868d0;
        case 0x1868d4u: goto label_1868d4;
        case 0x1868d8u: goto label_1868d8;
        case 0x1868dcu: goto label_1868dc;
        case 0x1868e0u: goto label_1868e0;
        case 0x1868e4u: goto label_1868e4;
        case 0x1868e8u: goto label_1868e8;
        case 0x1868ecu: goto label_1868ec;
        case 0x1868f0u: goto label_1868f0;
        case 0x1868f4u: goto label_1868f4;
        case 0x1868f8u: goto label_1868f8;
        case 0x1868fcu: goto label_1868fc;
        case 0x186900u: goto label_186900;
        case 0x186904u: goto label_186904;
        case 0x186908u: goto label_186908;
        case 0x18690cu: goto label_18690c;
        case 0x186910u: goto label_186910;
        case 0x186914u: goto label_186914;
        case 0x186918u: goto label_186918;
        case 0x18691cu: goto label_18691c;
        case 0x186920u: goto label_186920;
        case 0x186924u: goto label_186924;
        case 0x186928u: goto label_186928;
        case 0x18692cu: goto label_18692c;
        case 0x186930u: goto label_186930;
        case 0x186934u: goto label_186934;
        case 0x186938u: goto label_186938;
        case 0x18693cu: goto label_18693c;
        case 0x186940u: goto label_186940;
        case 0x186944u: goto label_186944;
        case 0x186948u: goto label_186948;
        case 0x18694cu: goto label_18694c;
        case 0x186950u: goto label_186950;
        case 0x186954u: goto label_186954;
        case 0x186958u: goto label_186958;
        case 0x18695cu: goto label_18695c;
        case 0x186960u: goto label_186960;
        case 0x186964u: goto label_186964;
        case 0x186968u: goto label_186968;
        case 0x18696cu: goto label_18696c;
        case 0x186970u: goto label_186970;
        case 0x186974u: goto label_186974;
        case 0x186978u: goto label_186978;
        case 0x18697cu: goto label_18697c;
        case 0x186980u: goto label_186980;
        case 0x186984u: goto label_186984;
        case 0x186988u: goto label_186988;
        case 0x18698cu: goto label_18698c;
        case 0x186990u: goto label_186990;
        case 0x186994u: goto label_186994;
        case 0x186998u: goto label_186998;
        case 0x18699cu: goto label_18699c;
        case 0x1869a0u: goto label_1869a0;
        case 0x1869a4u: goto label_1869a4;
        case 0x1869a8u: goto label_1869a8;
        case 0x1869acu: goto label_1869ac;
        case 0x1869b0u: goto label_1869b0;
        case 0x1869b4u: goto label_1869b4;
        case 0x1869b8u: goto label_1869b8;
        case 0x1869bcu: goto label_1869bc;
        case 0x1869c0u: goto label_1869c0;
        case 0x1869c4u: goto label_1869c4;
        case 0x1869c8u: goto label_1869c8;
        case 0x1869ccu: goto label_1869cc;
        case 0x1869d0u: goto label_1869d0;
        case 0x1869d4u: goto label_1869d4;
        case 0x1869d8u: goto label_1869d8;
        case 0x1869dcu: goto label_1869dc;
        case 0x1869e0u: goto label_1869e0;
        case 0x1869e4u: goto label_1869e4;
        case 0x1869e8u: goto label_1869e8;
        case 0x1869ecu: goto label_1869ec;
        case 0x1869f0u: goto label_1869f0;
        case 0x1869f4u: goto label_1869f4;
        case 0x1869f8u: goto label_1869f8;
        case 0x1869fcu: goto label_1869fc;
        case 0x186a00u: goto label_186a00;
        case 0x186a04u: goto label_186a04;
        case 0x186a08u: goto label_186a08;
        case 0x186a0cu: goto label_186a0c;
        case 0x186a10u: goto label_186a10;
        case 0x186a14u: goto label_186a14;
        case 0x186a18u: goto label_186a18;
        case 0x186a1cu: goto label_186a1c;
        case 0x186a20u: goto label_186a20;
        case 0x186a24u: goto label_186a24;
        case 0x186a28u: goto label_186a28;
        case 0x186a2cu: goto label_186a2c;
        case 0x186a30u: goto label_186a30;
        case 0x186a34u: goto label_186a34;
        case 0x186a38u: goto label_186a38;
        case 0x186a3cu: goto label_186a3c;
        case 0x186a40u: goto label_186a40;
        case 0x186a44u: goto label_186a44;
        case 0x186a48u: goto label_186a48;
        case 0x186a4cu: goto label_186a4c;
        case 0x186a50u: goto label_186a50;
        case 0x186a54u: goto label_186a54;
        case 0x186a58u: goto label_186a58;
        case 0x186a5cu: goto label_186a5c;
        case 0x186a60u: goto label_186a60;
        case 0x186a64u: goto label_186a64;
        case 0x186a68u: goto label_186a68;
        case 0x186a6cu: goto label_186a6c;
        case 0x186a70u: goto label_186a70;
        case 0x186a74u: goto label_186a74;
        case 0x186a78u: goto label_186a78;
        case 0x186a7cu: goto label_186a7c;
        case 0x186a80u: goto label_186a80;
        case 0x186a84u: goto label_186a84;
        case 0x186a88u: goto label_186a88;
        case 0x186a8cu: goto label_186a8c;
        case 0x186a90u: goto label_186a90;
        case 0x186a94u: goto label_186a94;
        case 0x186a98u: goto label_186a98;
        case 0x186a9cu: goto label_186a9c;
        case 0x186aa0u: goto label_186aa0;
        case 0x186aa4u: goto label_186aa4;
        case 0x186aa8u: goto label_186aa8;
        case 0x186aacu: goto label_186aac;
        case 0x186ab0u: goto label_186ab0;
        case 0x186ab4u: goto label_186ab4;
        case 0x186ab8u: goto label_186ab8;
        case 0x186abcu: goto label_186abc;
        case 0x186ac0u: goto label_186ac0;
        case 0x186ac4u: goto label_186ac4;
        case 0x186ac8u: goto label_186ac8;
        case 0x186accu: goto label_186acc;
        case 0x186ad0u: goto label_186ad0;
        case 0x186ad4u: goto label_186ad4;
        case 0x186ad8u: goto label_186ad8;
        case 0x186adcu: goto label_186adc;
        case 0x186ae0u: goto label_186ae0;
        case 0x186ae4u: goto label_186ae4;
        case 0x186ae8u: goto label_186ae8;
        case 0x186aecu: goto label_186aec;
        case 0x186af0u: goto label_186af0;
        case 0x186af4u: goto label_186af4;
        case 0x186af8u: goto label_186af8;
        case 0x186afcu: goto label_186afc;
        case 0x186b00u: goto label_186b00;
        case 0x186b04u: goto label_186b04;
        case 0x186b08u: goto label_186b08;
        case 0x186b0cu: goto label_186b0c;
        case 0x186b10u: goto label_186b10;
        case 0x186b14u: goto label_186b14;
        case 0x186b18u: goto label_186b18;
        case 0x186b1cu: goto label_186b1c;
        case 0x186b20u: goto label_186b20;
        case 0x186b24u: goto label_186b24;
        case 0x186b28u: goto label_186b28;
        case 0x186b2cu: goto label_186b2c;
        case 0x186b30u: goto label_186b30;
        case 0x186b34u: goto label_186b34;
        case 0x186b38u: goto label_186b38;
        case 0x186b3cu: goto label_186b3c;
        case 0x186b40u: goto label_186b40;
        case 0x186b44u: goto label_186b44;
        case 0x186b48u: goto label_186b48;
        case 0x186b4cu: goto label_186b4c;
        case 0x186b50u: goto label_186b50;
        case 0x186b54u: goto label_186b54;
        case 0x186b58u: goto label_186b58;
        case 0x186b5cu: goto label_186b5c;
        case 0x186b60u: goto label_186b60;
        case 0x186b64u: goto label_186b64;
        case 0x186b68u: goto label_186b68;
        case 0x186b6cu: goto label_186b6c;
        case 0x186b70u: goto label_186b70;
        case 0x186b74u: goto label_186b74;
        case 0x186b78u: goto label_186b78;
        case 0x186b7cu: goto label_186b7c;
        case 0x186b80u: goto label_186b80;
        case 0x186b84u: goto label_186b84;
        case 0x186b88u: goto label_186b88;
        case 0x186b8cu: goto label_186b8c;
        case 0x186b90u: goto label_186b90;
        case 0x186b94u: goto label_186b94;
        case 0x186b98u: goto label_186b98;
        case 0x186b9cu: goto label_186b9c;
        case 0x186ba0u: goto label_186ba0;
        case 0x186ba4u: goto label_186ba4;
        case 0x186ba8u: goto label_186ba8;
        case 0x186bacu: goto label_186bac;
        case 0x186bb0u: goto label_186bb0;
        case 0x186bb4u: goto label_186bb4;
        case 0x186bb8u: goto label_186bb8;
        case 0x186bbcu: goto label_186bbc;
        case 0x186bc0u: goto label_186bc0;
        case 0x186bc4u: goto label_186bc4;
        case 0x186bc8u: goto label_186bc8;
        case 0x186bccu: goto label_186bcc;
        case 0x186bd0u: goto label_186bd0;
        case 0x186bd4u: goto label_186bd4;
        case 0x186bd8u: goto label_186bd8;
        case 0x186bdcu: goto label_186bdc;
        case 0x186be0u: goto label_186be0;
        case 0x186be4u: goto label_186be4;
        case 0x186be8u: goto label_186be8;
        case 0x186becu: goto label_186bec;
        case 0x186bf0u: goto label_186bf0;
        case 0x186bf4u: goto label_186bf4;
        case 0x186bf8u: goto label_186bf8;
        case 0x186bfcu: goto label_186bfc;
        case 0x186c00u: goto label_186c00;
        case 0x186c04u: goto label_186c04;
        case 0x186c08u: goto label_186c08;
        case 0x186c0cu: goto label_186c0c;
        case 0x186c10u: goto label_186c10;
        case 0x186c14u: goto label_186c14;
        case 0x186c18u: goto label_186c18;
        case 0x186c1cu: goto label_186c1c;
        case 0x186c20u: goto label_186c20;
        case 0x186c24u: goto label_186c24;
        case 0x186c28u: goto label_186c28;
        case 0x186c2cu: goto label_186c2c;
        case 0x186c30u: goto label_186c30;
        case 0x186c34u: goto label_186c34;
        case 0x186c38u: goto label_186c38;
        case 0x186c3cu: goto label_186c3c;
        case 0x186c40u: goto label_186c40;
        case 0x186c44u: goto label_186c44;
        case 0x186c48u: goto label_186c48;
        case 0x186c4cu: goto label_186c4c;
        case 0x186c50u: goto label_186c50;
        case 0x186c54u: goto label_186c54;
        case 0x186c58u: goto label_186c58;
        case 0x186c5cu: goto label_186c5c;
        case 0x186c60u: goto label_186c60;
        case 0x186c64u: goto label_186c64;
        case 0x186c68u: goto label_186c68;
        case 0x186c6cu: goto label_186c6c;
        case 0x186c70u: goto label_186c70;
        case 0x186c74u: goto label_186c74;
        case 0x186c78u: goto label_186c78;
        case 0x186c7cu: goto label_186c7c;
        case 0x186c80u: goto label_186c80;
        case 0x186c84u: goto label_186c84;
        case 0x186c88u: goto label_186c88;
        case 0x186c8cu: goto label_186c8c;
        case 0x186c90u: goto label_186c90;
        case 0x186c94u: goto label_186c94;
        case 0x186c98u: goto label_186c98;
        case 0x186c9cu: goto label_186c9c;
        case 0x186ca0u: goto label_186ca0;
        case 0x186ca4u: goto label_186ca4;
        case 0x186ca8u: goto label_186ca8;
        case 0x186cacu: goto label_186cac;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cb4u: goto label_186cb4;
        case 0x186cb8u: goto label_186cb8;
        case 0x186cbcu: goto label_186cbc;
        case 0x186cc0u: goto label_186cc0;
        case 0x186cc4u: goto label_186cc4;
        case 0x186cc8u: goto label_186cc8;
        default: break;
    }

    ctx->pc = 0x186560u;

label_186560:
    // 0x186560: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x186560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_186564:
    // 0x186564: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x186564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_186568:
    // 0x186568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x186568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18656c:
    // 0x18656c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_186570:
    // 0x186570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_186574:
    // 0x186574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_186578:
    // 0x186578: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x186578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18657c:
    // 0x18657c: 0x8c310af0  lw          $s1, 0xAF0($at)
    ctx->pc = 0x18657cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_186580:
    // 0x186580: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_186584:
    // 0x186584: 0x90230346  lbu         $v1, 0x346($at)
    ctx->pc = 0x186584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 838)));
label_186588:
    // 0x186588: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_18658c:
    if (ctx->pc == 0x18658Cu) {
        ctx->pc = 0x186590u;
        goto label_186590;
    }
    ctx->pc = 0x186588u;
    {
        const bool branch_taken_0x186588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186588) {
            ctx->pc = 0x1865ACu;
            goto label_1865ac;
        }
    }
    ctx->pc = 0x186590u;
label_186590:
    // 0x186590: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_186594:
    // 0x186594: 0x90230346  lbu         $v1, 0x346($at)
    ctx->pc = 0x186594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 838)));
label_186598:
    // 0x186598: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x186598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18659c:
    // 0x18659c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18659cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1865a0:
    // 0x1865a0: 0xa0230346  sb          $v1, 0x346($at)
    ctx->pc = 0x1865a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 838), (uint8_t)GPR_U32(ctx, 3));
label_1865a4:
    // 0x1865a4: 0x100001c1  b           . + 4 + (0x1C1 << 2)
label_1865a8:
    if (ctx->pc == 0x1865A8u) {
        ctx->pc = 0x1865ACu;
        goto label_1865ac;
    }
    ctx->pc = 0x1865A4u;
    {
        const bool branch_taken_0x1865a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1865a4) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x1865ACu;
label_1865ac:
    // 0x1865ac: 0xc061b34  jal         func_186CD0
label_1865b0:
    if (ctx->pc == 0x1865B0u) {
        ctx->pc = 0x1865B4u;
        goto label_1865b4;
    }
    ctx->pc = 0x1865ACu;
    SET_GPR_U32(ctx, 31, 0x1865B4u);
    ctx->pc = 0x186CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186CD0u, 0x1865ACu, 0x1865B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1865B4u;
label_1865b4:
    // 0x1865b4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1865b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1865b8:
    // 0x1865b8: 0x124001bc  beqz        $s2, . + 4 + (0x1BC << 2)
label_1865bc:
    if (ctx->pc == 0x1865BCu) {
        ctx->pc = 0x1865C0u;
        goto label_1865c0;
    }
    ctx->pc = 0x1865B8u;
    {
        const bool branch_taken_0x1865b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1865b8) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x1865C0u;
label_1865c0:
    // 0x1865c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1865c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1865c4:
    // 0x1865c4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1865c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1865c8:
    // 0x1865c8: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x1865c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
label_1865cc:
    // 0x1865cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1865d0:
    if (ctx->pc == 0x1865D0u) {
        ctx->pc = 0x1865D4u;
        goto label_1865d4;
    }
    ctx->pc = 0x1865CCu;
    {
        const bool branch_taken_0x1865cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1865cc) {
            ctx->pc = 0x1865ECu;
            goto label_1865ec;
        }
    }
    ctx->pc = 0x1865D4u;
label_1865d4:
    // 0x1865d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1865d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1865d8:
    // 0x1865d8: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x1865d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958024)));
label_1865dc:
    // 0x1865dc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1865dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1865e0:
    // 0x1865e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1865e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1865e4:
    // 0x1865e4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1865e8:
    if (ctx->pc == 0x1865E8u) {
        ctx->pc = 0x1865ECu;
        goto label_1865ec;
    }
    ctx->pc = 0x1865E4u;
    {
        const bool branch_taken_0x1865e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1865e4) {
            ctx->pc = 0x186634u;
            goto label_186634;
        }
    }
    ctx->pc = 0x1865ECu;
label_1865ec:
    // 0x1865ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1865ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_1865f0:
    // 0x1865f0: 0xc4200280  lwc1        $f0, 0x280($at)
    ctx->pc = 0x1865f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1865f4:
    // 0x1865f4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1865f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1865f8:
    // 0x1865f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1865f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1865fc:
    // 0x1865fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1865fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186600:
    // 0x186600: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_186604:
    // 0x186604: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x186604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186608:
    // 0x186608: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18660c:
    // 0x18660c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x18660cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_186610:
    // 0x186610: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_186614:
    // 0x186614: 0xc4200288  lwc1        $f0, 0x288($at)
    ctx->pc = 0x186614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186618:
    // 0x186618: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x186618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_18661c:
    // 0x18661c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_186620:
    // 0x186620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186624:
    // 0x186624: 0x0  nop
    ctx->pc = 0x186624u;
    // NOP
label_186628:
    // 0x186628: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x186628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_18662c:
    // 0x18662c: 0x1000000e  b           . + 4 + (0xE << 2)
label_186630:
    if (ctx->pc == 0x186630u) {
        ctx->pc = 0x186634u;
        goto label_186634;
    }
    ctx->pc = 0x18662Cu;
    {
        const bool branch_taken_0x18662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18662c) {
            ctx->pc = 0x186668u;
            goto label_186668;
        }
    }
    ctx->pc = 0x186634u;
label_186634:
    // 0x186634: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_186638:
    // 0x186638: 0xc4200280  lwc1        $f0, 0x280($at)
    ctx->pc = 0x186638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18663c:
    // 0x18663c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x18663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_186640:
    // 0x186640: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_186644:
    // 0x186644: 0xc4200338  lwc1        $f0, 0x338($at)
    ctx->pc = 0x186644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186648:
    // 0x186648: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x186648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_18664c:
    // 0x18664c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_186650:
    // 0x186650: 0xc4200288  lwc1        $f0, 0x288($at)
    ctx->pc = 0x186650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186654:
    // 0x186654: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x186654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_186658:
    // 0x186658: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18665c:
    // 0x18665c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18665cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186660:
    // 0x186660: 0x0  nop
    ctx->pc = 0x186660u;
    // NOP
label_186664:
    // 0x186664: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x186664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_186668:
    // 0x186668: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18666c:
    // 0x18666c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x18666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186670:
    // 0x186670: 0xc040c9e  jal         func_103278
label_186674:
    if (ctx->pc == 0x186674u) {
        ctx->pc = 0x186678u;
        goto label_186678;
    }
    ctx->pc = 0x186670u;
    SET_GPR_U32(ctx, 31, 0x186678u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186678u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186678u) { return; }
    ctx->pc = 0x186678u;
label_186678:
    // 0x186678: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x186678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18667c:
    // 0x18667c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x18667cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186680:
    // 0x186680: 0xc040c9e  jal         func_103278
label_186684:
    if (ctx->pc == 0x186684u) {
        ctx->pc = 0x186688u;
        goto label_186688;
    }
    ctx->pc = 0x186680u;
    SET_GPR_U32(ctx, 31, 0x186688u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186688u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186688u) { return; }
    ctx->pc = 0x186688u;
label_186688:
    // 0x186688: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x186688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18668c:
    // 0x18668c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x18668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_186690:
    // 0x186690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186694:
    // 0x186694: 0x0  nop
    ctx->pc = 0x186694u;
    // NOP
label_186698:
    // 0x186698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18669c:
    // 0x18669c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x18669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1866a0:
    // 0x1866a0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1866a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1866a4:
    // 0x1866a4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1866a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1866a8:
    // 0x1866a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1866ac:
    // 0x1866ac: 0x0  nop
    ctx->pc = 0x1866acu;
    // NOP
label_1866b0:
    // 0x1866b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1866b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1866b4:
    // 0x1866b4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1866b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1866b8:
    // 0x1866b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1866b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1866bc:
    // 0x1866bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1866bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1866c0:
    // 0x1866c0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1866c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1866c4:
    // 0x1866c4: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x1866c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1866c8:
    // 0x1866c8: 0xc05aa7c  jal         func_16A9F0
label_1866cc:
    if (ctx->pc == 0x1866CCu) {
        ctx->pc = 0x1866D0u;
        goto label_1866d0;
    }
    ctx->pc = 0x1866C8u;
    SET_GPR_U32(ctx, 31, 0x1866D0u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x1866C8u, 0x1866D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1866D0u;
label_1866d0:
    // 0x1866d0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1866d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1866d4:
    // 0x1866d4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1866d8:
    if (ctx->pc == 0x1866D8u) {
        ctx->pc = 0x1866DCu;
        goto label_1866dc;
    }
    ctx->pc = 0x1866D4u;
    {
        const bool branch_taken_0x1866d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1866d4) {
            ctx->pc = 0x1866F0u;
            goto label_1866f0;
        }
    }
    ctx->pc = 0x1866DCu;
label_1866dc:
    // 0x1866dc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1866dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1866e0:
    // 0x1866e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1866e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1866e4:
    // 0x1866e4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1866e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1866e8:
    // 0x1866e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1866e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1866ec:
    // 0x1866ec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1866ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1866f0:
    // 0x1866f0: 0x2e410007  sltiu       $at, $s2, 0x7
    ctx->pc = 0x1866f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1866f4:
    // 0x1866f4: 0x1020016a  beqz        $at, . + 4 + (0x16A << 2)
label_1866f8:
    if (ctx->pc == 0x1866F8u) {
        ctx->pc = 0x1866FCu;
        goto label_1866fc;
    }
    ctx->pc = 0x1866F4u;
    {
        const bool branch_taken_0x1866f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1866f4) {
            ctx->pc = 0x186CA0u;
            goto label_186ca0;
        }
    }
    ctx->pc = 0x1866FCu;
label_1866fc:
    // 0x1866fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1866fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_186700:
    // 0x186700: 0x2464ed60  addiu       $a0, $v1, -0x12A0
    ctx->pc = 0x186700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962528));
label_186704:
    // 0x186704: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x186704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_186708:
    // 0x186708: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18670c:
    // 0x18670c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186710:
    // 0x186710: 0x600008  jr          $v1
label_186714:
    if (ctx->pc == 0x186714u) {
        ctx->pc = 0x186718u;
        goto label_186718;
    }
    ctx->pc = 0x186710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x186718u;
label_186718:
    // 0x186718: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18671c:
    // 0x18671c: 0x26250190  addiu       $a1, $s1, 0x190
    ctx->pc = 0x18671cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_186720:
    // 0x186720: 0x262601a0  addiu       $a2, $s1, 0x1A0
    ctx->pc = 0x186720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_186724:
    // 0x186724: 0xc0675b0  jal         func_19D6C0
label_186728:
    if (ctx->pc == 0x186728u) {
        ctx->pc = 0x18672Cu;
        goto label_18672c;
    }
    ctx->pc = 0x186724u;
    SET_GPR_U32(ctx, 31, 0x18672Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x186724u, 0x18672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18672Cu;
label_18672c:
    // 0x18672c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x18672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186730:
    // 0x186730: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x186730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_186734:
    // 0x186734: 0xc0455e6  jal         func_115798
label_186738:
    if (ctx->pc == 0x186738u) {
        ctx->pc = 0x18673Cu;
        goto label_18673c;
    }
    ctx->pc = 0x186734u;
    SET_GPR_U32(ctx, 31, 0x18673Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x186734u, 0x18673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18673Cu;
label_18673c:
    // 0x18673c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18673cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_186740:
    // 0x186740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186744:
    // 0x186744: 0x0  nop
    ctx->pc = 0x186744u;
    // NOP
label_186748:
    // 0x186748: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_18674c:
    // 0x18674c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18674cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_186750:
    // 0x186750: 0x1000001d  b           . + 4 + (0x1D << 2)
label_186754:
    if (ctx->pc == 0x186754u) {
        ctx->pc = 0x186758u;
        goto label_186758;
    }
    ctx->pc = 0x186750u;
    {
        const bool branch_taken_0x186750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186750) {
            ctx->pc = 0x1867C8u;
            goto label_1867c8;
        }
    }
    ctx->pc = 0x186758u;
label_186758:
    // 0x186758: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18675c:
    // 0x18675c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18675cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186760:
    // 0x186760: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186764:
    // 0x186764: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_186768:
    // 0x186768: 0xc061bc0  jal         func_186F00
label_18676c:
    if (ctx->pc == 0x18676Cu) {
        ctx->pc = 0x186770u;
        goto label_186770;
    }
    ctx->pc = 0x186768u;
    SET_GPR_U32(ctx, 31, 0x186770u);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186768u, 0x186770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186770u;
label_186770:
    // 0x186770: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_186774:
    if (ctx->pc == 0x186774u) {
        ctx->pc = 0x186778u;
        goto label_186778;
    }
    ctx->pc = 0x186770u;
    {
        const bool branch_taken_0x186770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186770) {
            ctx->pc = 0x1867A0u;
            goto label_1867a0;
        }
    }
    ctx->pc = 0x186778u;
label_186778:
    // 0x186778: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_18677c:
    // 0x18677c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x18677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186780:
    // 0x186780: 0xc040c9e  jal         func_103278
label_186784:
    if (ctx->pc == 0x186784u) {
        ctx->pc = 0x186788u;
        goto label_186788;
    }
    ctx->pc = 0x186780u;
    SET_GPR_U32(ctx, 31, 0x186788u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186788u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186788u) { return; }
    ctx->pc = 0x186788u;
label_186788:
    // 0x186788: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_18678c:
    // 0x18678c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186790:
    // 0x186790: 0xc040c9e  jal         func_103278
label_186794:
    if (ctx->pc == 0x186794u) {
        ctx->pc = 0x186798u;
        goto label_186798;
    }
    ctx->pc = 0x186790u;
    SET_GPR_U32(ctx, 31, 0x186798u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186798u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186798u) { return; }
    ctx->pc = 0x186798u;
label_186798:
    // 0x186798: 0x10000144  b           . + 4 + (0x144 << 2)
label_18679c:
    if (ctx->pc == 0x18679Cu) {
        ctx->pc = 0x1867A0u;
        goto label_1867a0;
    }
    ctx->pc = 0x186798u;
    {
        const bool branch_taken_0x186798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186798) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x1867A0u;
label_1867a0:
    // 0x1867a0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1867a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1867a4:
    // 0x1867a4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1867a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_1867a8:
    // 0x1867a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1867ac:
    // 0x1867ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1867b0:
    // 0x1867b0: 0x0  nop
    ctx->pc = 0x1867b0u;
    // NOP
label_1867b4:
    // 0x1867b4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1867b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1867b8:
    // 0x1867b8: 0xc058fec  jal         func_163FB0
label_1867bc:
    if (ctx->pc == 0x1867BCu) {
        ctx->pc = 0x1867C0u;
        goto label_1867c0;
    }
    ctx->pc = 0x1867B8u;
    SET_GPR_U32(ctx, 31, 0x1867C0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1867B8u, 0x1867C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1867C0u;
label_1867c0:
    // 0x1867c0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1867c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1867c4:
    // 0x1867c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1867c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1867c8:
    // 0x1867c8: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x1867c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1867cc:
    // 0x1867cc: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_1867d0:
    if (ctx->pc == 0x1867D0u) {
        ctx->pc = 0x1867D4u;
        goto label_1867d4;
    }
    ctx->pc = 0x1867CCu;
    {
        const bool branch_taken_0x1867cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1867cc) {
            ctx->pc = 0x186758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186758;
        }
    }
    ctx->pc = 0x1867D4u;
label_1867d4:
    // 0x1867d4: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1867d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
label_1867d8:
    // 0x1867d8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1867d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1867dc:
    // 0x1867dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1867dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1867e0:
    // 0x1867e0: 0x0  nop
    ctx->pc = 0x1867e0u;
    // NOP
label_1867e4:
    // 0x1867e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1867e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1867e8:
    // 0x1867e8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1867e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1867ec:
    // 0x1867ec: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1867f0:
    if (ctx->pc == 0x1867F0u) {
        ctx->pc = 0x1867F4u;
        goto label_1867f4;
    }
    ctx->pc = 0x1867ECu;
    {
        const bool branch_taken_0x1867ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1867ec) {
            ctx->pc = 0x186860u;
            goto label_186860;
        }
    }
    ctx->pc = 0x1867F4u;
label_1867f4:
    // 0x1867f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1867f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1867f8:
    // 0x1867f8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1867f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1867fc:
    // 0x1867fc: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x1867fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186800:
    // 0x186800: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_186804:
    // 0x186804: 0xc061bc0  jal         func_186F00
label_186808:
    if (ctx->pc == 0x186808u) {
        ctx->pc = 0x18680Cu;
        goto label_18680c;
    }
    ctx->pc = 0x186804u;
    SET_GPR_U32(ctx, 31, 0x18680Cu);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186804u, 0x18680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18680Cu;
label_18680c:
    // 0x18680c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_186810:
    if (ctx->pc == 0x186810u) {
        ctx->pc = 0x186814u;
        goto label_186814;
    }
    ctx->pc = 0x18680Cu;
    {
        const bool branch_taken_0x18680c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18680c) {
            ctx->pc = 0x18683Cu;
            goto label_18683c;
        }
    }
    ctx->pc = 0x186814u;
label_186814:
    // 0x186814: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_186818:
    // 0x186818: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18681c:
    // 0x18681c: 0xc040c9e  jal         func_103278
label_186820:
    if (ctx->pc == 0x186820u) {
        ctx->pc = 0x186824u;
        goto label_186824;
    }
    ctx->pc = 0x18681Cu;
    SET_GPR_U32(ctx, 31, 0x186824u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186824u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186824u) { return; }
    ctx->pc = 0x186824u;
label_186824:
    // 0x186824: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_186828:
    // 0x186828: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18682c:
    // 0x18682c: 0xc040c9e  jal         func_103278
label_186830:
    if (ctx->pc == 0x186830u) {
        ctx->pc = 0x186834u;
        goto label_186834;
    }
    ctx->pc = 0x18682Cu;
    SET_GPR_U32(ctx, 31, 0x186834u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186834u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186834u) { return; }
    ctx->pc = 0x186834u;
label_186834:
    // 0x186834: 0x1000011d  b           . + 4 + (0x11D << 2)
label_186838:
    if (ctx->pc == 0x186838u) {
        ctx->pc = 0x18683Cu;
        goto label_18683c;
    }
    ctx->pc = 0x186834u;
    {
        const bool branch_taken_0x186834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186834) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x18683Cu;
label_18683c:
    // 0x18683c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x18683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_186840:
    // 0x186840: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186844:
    // 0x186844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186848:
    // 0x186848: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x186848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18684c:
    // 0x18684c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x18684cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_186850:
    // 0x186850: 0xc058fec  jal         func_163FB0
label_186854:
    if (ctx->pc == 0x186854u) {
        ctx->pc = 0x186858u;
        goto label_186858;
    }
    ctx->pc = 0x186850u;
    SET_GPR_U32(ctx, 31, 0x186858u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186850u, 0x186858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186858u;
label_186858:
    // 0x186858: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_18685c:
    // 0x18685c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18685cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_186860:
    // 0x186860: 0x2e030007  sltiu       $v1, $s0, 0x7
    ctx->pc = 0x186860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_186864:
    // 0x186864: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_186868:
    if (ctx->pc == 0x186868u) {
        ctx->pc = 0x18686Cu;
        goto label_18686c;
    }
    ctx->pc = 0x186864u;
    {
        const bool branch_taken_0x186864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186864) {
            ctx->pc = 0x1867F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1867f4;
        }
    }
    ctx->pc = 0x18686Cu;
label_18686c:
    // 0x18686c: 0x1000010c  b           . + 4 + (0x10C << 2)
label_186870:
    if (ctx->pc == 0x186870u) {
        ctx->pc = 0x186874u;
        goto label_186874;
    }
    ctx->pc = 0x18686Cu;
    {
        const bool branch_taken_0x18686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18686c) {
            ctx->pc = 0x186CA0u;
            goto label_186ca0;
        }
    }
    ctx->pc = 0x186874u;
label_186874:
    // 0x186874: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_186878:
    // 0x186878: 0x26250190  addiu       $a1, $s1, 0x190
    ctx->pc = 0x186878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_18687c:
    // 0x18687c: 0x262601a0  addiu       $a2, $s1, 0x1A0
    ctx->pc = 0x18687cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_186880:
    // 0x186880: 0xc0675b0  jal         func_19D6C0
label_186884:
    if (ctx->pc == 0x186884u) {
        ctx->pc = 0x186888u;
        goto label_186888;
    }
    ctx->pc = 0x186880u;
    SET_GPR_U32(ctx, 31, 0x186888u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x186880u, 0x186888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186888u;
label_186888:
    // 0x186888: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x186888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18688c:
    // 0x18688c: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x18688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_186890:
    // 0x186890: 0xc0455e6  jal         func_115798
label_186894:
    if (ctx->pc == 0x186894u) {
        ctx->pc = 0x186898u;
        goto label_186898;
    }
    ctx->pc = 0x186890u;
    SET_GPR_U32(ctx, 31, 0x186898u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x186890u, 0x186898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186898u;
label_186898:
    // 0x186898: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x186898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_18689c:
    // 0x18689c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18689cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1868a0:
    // 0x1868a0: 0x0  nop
    ctx->pc = 0x1868a0u;
    // NOP
label_1868a4:
    // 0x1868a4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1868a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1868a8:
    // 0x1868a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1868a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1868ac:
    // 0x1868ac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1868b0:
    if (ctx->pc == 0x1868B0u) {
        ctx->pc = 0x1868B4u;
        goto label_1868b4;
    }
    ctx->pc = 0x1868ACu;
    {
        const bool branch_taken_0x1868ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868ac) {
            ctx->pc = 0x186920u;
            goto label_186920;
        }
    }
    ctx->pc = 0x1868B4u;
label_1868b4:
    // 0x1868b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1868b8:
    // 0x1868b8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1868b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1868bc:
    // 0x1868bc: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x1868bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1868c0:
    // 0x1868c0: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x1868c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1868c4:
    // 0x1868c4: 0xc061bc0  jal         func_186F00
label_1868c8:
    if (ctx->pc == 0x1868C8u) {
        ctx->pc = 0x1868CCu;
        goto label_1868cc;
    }
    ctx->pc = 0x1868C4u;
    SET_GPR_U32(ctx, 31, 0x1868CCu);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x1868C4u, 0x1868CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1868CCu;
label_1868cc:
    // 0x1868cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1868d0:
    if (ctx->pc == 0x1868D0u) {
        ctx->pc = 0x1868D4u;
        goto label_1868d4;
    }
    ctx->pc = 0x1868CCu;
    {
        const bool branch_taken_0x1868cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868cc) {
            ctx->pc = 0x1868FCu;
            goto label_1868fc;
        }
    }
    ctx->pc = 0x1868D4u;
label_1868d4:
    // 0x1868d4: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x1868d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_1868d8:
    // 0x1868d8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1868d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1868dc:
    // 0x1868dc: 0xc040c9e  jal         func_103278
label_1868e0:
    if (ctx->pc == 0x1868E0u) {
        ctx->pc = 0x1868E4u;
        goto label_1868e4;
    }
    ctx->pc = 0x1868DCu;
    SET_GPR_U32(ctx, 31, 0x1868E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1868E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1868E4u) { return; }
    ctx->pc = 0x1868E4u;
label_1868e4:
    // 0x1868e4: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x1868e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_1868e8:
    // 0x1868e8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1868e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1868ec:
    // 0x1868ec: 0xc040c9e  jal         func_103278
label_1868f0:
    if (ctx->pc == 0x1868F0u) {
        ctx->pc = 0x1868F4u;
        goto label_1868f4;
    }
    ctx->pc = 0x1868ECu;
    SET_GPR_U32(ctx, 31, 0x1868F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1868F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1868F4u) { return; }
    ctx->pc = 0x1868F4u;
label_1868f4:
    // 0x1868f4: 0x100000ed  b           . + 4 + (0xED << 2)
label_1868f8:
    if (ctx->pc == 0x1868F8u) {
        ctx->pc = 0x1868FCu;
        goto label_1868fc;
    }
    ctx->pc = 0x1868F4u;
    {
        const bool branch_taken_0x1868f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868f4) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x1868FCu;
label_1868fc:
    // 0x1868fc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1868fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_186900:
    // 0x186900: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186904:
    // 0x186904: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186908:
    // 0x186908: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x186908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18690c:
    // 0x18690c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x18690cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_186910:
    // 0x186910: 0xc058fec  jal         func_163FB0
label_186914:
    if (ctx->pc == 0x186914u) {
        ctx->pc = 0x186918u;
        goto label_186918;
    }
    ctx->pc = 0x186910u;
    SET_GPR_U32(ctx, 31, 0x186918u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186910u, 0x186918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186918u;
label_186918:
    // 0x186918: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_18691c:
    // 0x18691c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18691cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_186920:
    // 0x186920: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x186920u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_186924:
    // 0x186924: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_186928:
    if (ctx->pc == 0x186928u) {
        ctx->pc = 0x18692Cu;
        goto label_18692c;
    }
    ctx->pc = 0x186924u;
    {
        const bool branch_taken_0x186924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186924) {
            ctx->pc = 0x1868B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1868b4;
        }
    }
    ctx->pc = 0x18692Cu;
label_18692c:
    // 0x18692c: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x18692cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
label_186930:
    // 0x186930: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186934:
    // 0x186934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186938:
    // 0x186938: 0x0  nop
    ctx->pc = 0x186938u;
    // NOP
label_18693c:
    // 0x18693c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x18693cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_186940:
    // 0x186940: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186940u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_186944:
    // 0x186944: 0x1000001e  b           . + 4 + (0x1E << 2)
label_186948:
    if (ctx->pc == 0x186948u) {
        ctx->pc = 0x18694Cu;
        goto label_18694c;
    }
    ctx->pc = 0x186944u;
    {
        const bool branch_taken_0x186944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186944) {
            ctx->pc = 0x1869C0u;
            goto label_1869c0;
        }
    }
    ctx->pc = 0x18694Cu;
label_18694c:
    // 0x18694c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186950:
    // 0x186950: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186954:
    // 0x186954: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186958:
    // 0x186958: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18695c:
    // 0x18695c: 0xc061bc0  jal         func_186F00
label_186960:
    if (ctx->pc == 0x186960u) {
        ctx->pc = 0x186964u;
        goto label_186964;
    }
    ctx->pc = 0x18695Cu;
    SET_GPR_U32(ctx, 31, 0x186964u);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x18695Cu, 0x186964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186964u;
label_186964:
    // 0x186964: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_186968:
    if (ctx->pc == 0x186968u) {
        ctx->pc = 0x18696Cu;
        goto label_18696c;
    }
    ctx->pc = 0x186964u;
    {
        const bool branch_taken_0x186964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186964) {
            ctx->pc = 0x186994u;
            goto label_186994;
        }
    }
    ctx->pc = 0x18696Cu;
label_18696c:
    // 0x18696c: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x18696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_186970:
    // 0x186970: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186974:
    // 0x186974: 0xc040c9e  jal         func_103278
label_186978:
    if (ctx->pc == 0x186978u) {
        ctx->pc = 0x18697Cu;
        goto label_18697c;
    }
    ctx->pc = 0x186974u;
    SET_GPR_U32(ctx, 31, 0x18697Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x18697Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18697Cu) { return; }
    ctx->pc = 0x18697Cu;
label_18697c:
    // 0x18697c: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x18697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_186980:
    // 0x186980: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186984:
    // 0x186984: 0xc040c9e  jal         func_103278
label_186988:
    if (ctx->pc == 0x186988u) {
        ctx->pc = 0x18698Cu;
        goto label_18698c;
    }
    ctx->pc = 0x186984u;
    SET_GPR_U32(ctx, 31, 0x18698Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x18698Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18698Cu) { return; }
    ctx->pc = 0x18698Cu;
label_18698c:
    // 0x18698c: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_186990:
    if (ctx->pc == 0x186990u) {
        ctx->pc = 0x186994u;
        goto label_186994;
    }
    ctx->pc = 0x18698Cu;
    {
        const bool branch_taken_0x18698c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18698c) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x186994u;
label_186994:
    // 0x186994: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x186994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186998:
    // 0x186998: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x186998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_18699c:
    // 0x18699c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1869a0:
    // 0x1869a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1869a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1869a4:
    // 0x1869a4: 0x0  nop
    ctx->pc = 0x1869a4u;
    // NOP
label_1869a8:
    // 0x1869a8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1869a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1869ac:
    // 0x1869ac: 0xc058fec  jal         func_163FB0
label_1869b0:
    if (ctx->pc == 0x1869B0u) {
        ctx->pc = 0x1869B4u;
        goto label_1869b4;
    }
    ctx->pc = 0x1869ACu;
    SET_GPR_U32(ctx, 31, 0x1869B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1869ACu, 0x1869B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869B4u;
label_1869b4:
    // 0x1869b4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1869b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1869b8:
    // 0x1869b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1869b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1869bc:
    // 0x1869bc: 0x0  nop
    ctx->pc = 0x1869bcu;
    // NOP
label_1869c0:
    // 0x1869c0: 0x2e030007  sltiu       $v1, $s0, 0x7
    ctx->pc = 0x1869c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1869c4:
    // 0x1869c4: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_1869c8:
    if (ctx->pc == 0x1869C8u) {
        ctx->pc = 0x1869CCu;
        goto label_1869cc;
    }
    ctx->pc = 0x1869C4u;
    {
        const bool branch_taken_0x1869c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1869c4) {
            ctx->pc = 0x18694Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18694c;
        }
    }
    ctx->pc = 0x1869CCu;
label_1869cc:
    // 0x1869cc: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_1869d0:
    if (ctx->pc == 0x1869D0u) {
        ctx->pc = 0x1869D4u;
        goto label_1869d4;
    }
    ctx->pc = 0x1869CCu;
    {
        const bool branch_taken_0x1869cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1869cc) {
            ctx->pc = 0x186CA0u;
            goto label_186ca0;
        }
    }
    ctx->pc = 0x1869D4u;
label_1869d4:
    // 0x1869d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1869d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1869d8:
    // 0x1869d8: 0x26250190  addiu       $a1, $s1, 0x190
    ctx->pc = 0x1869d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_1869dc:
    // 0x1869dc: 0x262601a0  addiu       $a2, $s1, 0x1A0
    ctx->pc = 0x1869dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_1869e0:
    // 0x1869e0: 0xc0675b0  jal         func_19D6C0
label_1869e4:
    if (ctx->pc == 0x1869E4u) {
        ctx->pc = 0x1869E8u;
        goto label_1869e8;
    }
    ctx->pc = 0x1869E0u;
    SET_GPR_U32(ctx, 31, 0x1869E8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1869E0u, 0x1869E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869E8u;
label_1869e8:
    // 0x1869e8: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1869e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1869ec:
    // 0x1869ec: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x1869ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1869f0:
    // 0x1869f0: 0xc0455e6  jal         func_115798
label_1869f4:
    if (ctx->pc == 0x1869F4u) {
        ctx->pc = 0x1869F8u;
        goto label_1869f8;
    }
    ctx->pc = 0x1869F0u;
    SET_GPR_U32(ctx, 31, 0x1869F8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1869F0u, 0x1869F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869F8u;
label_1869f8:
    // 0x1869f8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1869f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1869fc:
    // 0x1869fc: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x1869fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
label_186a00:
    // 0x186a00: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186a04:
    // 0x186a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186a08:
    // 0x186a08: 0x0  nop
    ctx->pc = 0x186a08u;
    // NOP
label_186a0c:
    // 0x186a0c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_186a10:
    // 0x186a10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186a10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_186a14:
    // 0x186a14: 0x1000001e  b           . + 4 + (0x1E << 2)
label_186a18:
    if (ctx->pc == 0x186A18u) {
        ctx->pc = 0x186A1Cu;
        goto label_186a1c;
    }
    ctx->pc = 0x186A14u;
    {
        const bool branch_taken_0x186a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a14) {
            ctx->pc = 0x186A90u;
            goto label_186a90;
        }
    }
    ctx->pc = 0x186A1Cu;
label_186a1c:
    // 0x186a1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186a20:
    // 0x186a20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186a24:
    // 0x186a24: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186a28:
    // 0x186a28: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_186a2c:
    // 0x186a2c: 0xc061bc0  jal         func_186F00
label_186a30:
    if (ctx->pc == 0x186A30u) {
        ctx->pc = 0x186A34u;
        goto label_186a34;
    }
    ctx->pc = 0x186A2Cu;
    SET_GPR_U32(ctx, 31, 0x186A34u);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186A2Cu, 0x186A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A34u;
label_186a34:
    // 0x186a34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_186a38:
    if (ctx->pc == 0x186A38u) {
        ctx->pc = 0x186A3Cu;
        goto label_186a3c;
    }
    ctx->pc = 0x186A34u;
    {
        const bool branch_taken_0x186a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a34) {
            ctx->pc = 0x186A64u;
            goto label_186a64;
        }
    }
    ctx->pc = 0x186A3Cu;
label_186a3c:
    // 0x186a3c: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_186a40:
    // 0x186a40: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186a44:
    // 0x186a44: 0xc040c9e  jal         func_103278
label_186a48:
    if (ctx->pc == 0x186A48u) {
        ctx->pc = 0x186A4Cu;
        goto label_186a4c;
    }
    ctx->pc = 0x186A44u;
    SET_GPR_U32(ctx, 31, 0x186A4Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186A4Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186A4Cu) { return; }
    ctx->pc = 0x186A4Cu;
label_186a4c:
    // 0x186a4c: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_186a50:
    // 0x186a50: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186a54:
    // 0x186a54: 0xc040c9e  jal         func_103278
label_186a58:
    if (ctx->pc == 0x186A58u) {
        ctx->pc = 0x186A5Cu;
        goto label_186a5c;
    }
    ctx->pc = 0x186A54u;
    SET_GPR_U32(ctx, 31, 0x186A5Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186A5Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186A5Cu) { return; }
    ctx->pc = 0x186A5Cu;
label_186a5c:
    // 0x186a5c: 0x10000093  b           . + 4 + (0x93 << 2)
label_186a60:
    if (ctx->pc == 0x186A60u) {
        ctx->pc = 0x186A64u;
        goto label_186a64;
    }
    ctx->pc = 0x186A5Cu;
    {
        const bool branch_taken_0x186a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a5c) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x186A64u;
label_186a64:
    // 0x186a64: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x186a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186a68:
    // 0x186a68: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x186a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_186a6c:
    // 0x186a6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186a70:
    // 0x186a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186a74:
    // 0x186a74: 0x0  nop
    ctx->pc = 0x186a74u;
    // NOP
label_186a78:
    // 0x186a78: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x186a78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_186a7c:
    // 0x186a7c: 0xc058fec  jal         func_163FB0
label_186a80:
    if (ctx->pc == 0x186A80u) {
        ctx->pc = 0x186A84u;
        goto label_186a84;
    }
    ctx->pc = 0x186A7Cu;
    SET_GPR_U32(ctx, 31, 0x186A84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186A7Cu, 0x186A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A84u;
label_186a84:
    // 0x186a84: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_186a88:
    // 0x186a88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_186a8c:
    // 0x186a8c: 0x0  nop
    ctx->pc = 0x186a8cu;
    // NOP
label_186a90:
    // 0x186a90: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x186a90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_186a94:
    // 0x186a94: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_186a98:
    if (ctx->pc == 0x186A98u) {
        ctx->pc = 0x186A9Cu;
        goto label_186a9c;
    }
    ctx->pc = 0x186A94u;
    {
        const bool branch_taken_0x186a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186a94) {
            ctx->pc = 0x186A1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186a1c;
        }
    }
    ctx->pc = 0x186A9Cu;
label_186a9c:
    // 0x186a9c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x186a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_186aa0:
    // 0x186aa0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186aa4:
    // 0x186aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186aa8:
    // 0x186aa8: 0x0  nop
    ctx->pc = 0x186aa8u;
    // NOP
label_186aac:
    // 0x186aac: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_186ab0:
    // 0x186ab0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186ab0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_186ab4:
    // 0x186ab4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_186ab8:
    if (ctx->pc == 0x186AB8u) {
        ctx->pc = 0x186ABCu;
        goto label_186abc;
    }
    ctx->pc = 0x186AB4u;
    {
        const bool branch_taken_0x186ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ab4) {
            ctx->pc = 0x186B28u;
            goto label_186b28;
        }
    }
    ctx->pc = 0x186ABCu;
label_186abc:
    // 0x186abc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186ac0:
    // 0x186ac0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186ac4:
    // 0x186ac4: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186ac8:
    // 0x186ac8: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_186acc:
    // 0x186acc: 0xc061bc0  jal         func_186F00
label_186ad0:
    if (ctx->pc == 0x186AD0u) {
        ctx->pc = 0x186AD4u;
        goto label_186ad4;
    }
    ctx->pc = 0x186ACCu;
    SET_GPR_U32(ctx, 31, 0x186AD4u);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186ACCu, 0x186AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186AD4u;
label_186ad4:
    // 0x186ad4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_186ad8:
    if (ctx->pc == 0x186AD8u) {
        ctx->pc = 0x186ADCu;
        goto label_186adc;
    }
    ctx->pc = 0x186AD4u;
    {
        const bool branch_taken_0x186ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ad4) {
            ctx->pc = 0x186B04u;
            goto label_186b04;
        }
    }
    ctx->pc = 0x186ADCu;
label_186adc:
    // 0x186adc: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_186ae0:
    // 0x186ae0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186ae4:
    // 0x186ae4: 0xc040c9e  jal         func_103278
label_186ae8:
    if (ctx->pc == 0x186AE8u) {
        ctx->pc = 0x186AECu;
        goto label_186aec;
    }
    ctx->pc = 0x186AE4u;
    SET_GPR_U32(ctx, 31, 0x186AECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186AECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186AECu) { return; }
    ctx->pc = 0x186AECu;
label_186aec:
    // 0x186aec: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_186af0:
    // 0x186af0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186af4:
    // 0x186af4: 0xc040c9e  jal         func_103278
label_186af8:
    if (ctx->pc == 0x186AF8u) {
        ctx->pc = 0x186AFCu;
        goto label_186afc;
    }
    ctx->pc = 0x186AF4u;
    SET_GPR_U32(ctx, 31, 0x186AFCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186AFCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186AFCu) { return; }
    ctx->pc = 0x186AFCu;
label_186afc:
    // 0x186afc: 0x1000006b  b           . + 4 + (0x6B << 2)
label_186b00:
    if (ctx->pc == 0x186B00u) {
        ctx->pc = 0x186B04u;
        goto label_186b04;
    }
    ctx->pc = 0x186AFCu;
    {
        const bool branch_taken_0x186afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186afc) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x186B04u;
label_186b04:
    // 0x186b04: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x186b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_186b08:
    // 0x186b08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186b0c:
    // 0x186b0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186b10:
    // 0x186b10: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x186b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186b14:
    // 0x186b14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x186b14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_186b18:
    // 0x186b18: 0xc058fec  jal         func_163FB0
label_186b1c:
    if (ctx->pc == 0x186B1Cu) {
        ctx->pc = 0x186B20u;
        goto label_186b20;
    }
    ctx->pc = 0x186B18u;
    SET_GPR_U32(ctx, 31, 0x186B20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186B18u, 0x186B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B20u;
label_186b20:
    // 0x186b20: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_186b24:
    // 0x186b24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_186b28:
    // 0x186b28: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x186b28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_186b2c:
    // 0x186b2c: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_186b30:
    if (ctx->pc == 0x186B30u) {
        ctx->pc = 0x186B34u;
        goto label_186b34;
    }
    ctx->pc = 0x186B2Cu;
    {
        const bool branch_taken_0x186b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b2c) {
            ctx->pc = 0x186ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186abc;
        }
    }
    ctx->pc = 0x186B34u;
label_186b34:
    // 0x186b34: 0x1000005a  b           . + 4 + (0x5A << 2)
label_186b38:
    if (ctx->pc == 0x186B38u) {
        ctx->pc = 0x186B3Cu;
        goto label_186b3c;
    }
    ctx->pc = 0x186B34u;
    {
        const bool branch_taken_0x186b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b34) {
            ctx->pc = 0x186CA0u;
            goto label_186ca0;
        }
    }
    ctx->pc = 0x186B3Cu;
label_186b3c:
    // 0x186b3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_186b40:
    // 0x186b40: 0x26250190  addiu       $a1, $s1, 0x190
    ctx->pc = 0x186b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_186b44:
    // 0x186b44: 0x262601a0  addiu       $a2, $s1, 0x1A0
    ctx->pc = 0x186b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_186b48:
    // 0x186b48: 0xc0675b0  jal         func_19D6C0
label_186b4c:
    if (ctx->pc == 0x186B4Cu) {
        ctx->pc = 0x186B50u;
        goto label_186b50;
    }
    ctx->pc = 0x186B48u;
    SET_GPR_U32(ctx, 31, 0x186B50u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x186B48u, 0x186B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B50u;
label_186b50:
    // 0x186b50: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x186b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186b54:
    // 0x186b54: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x186b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_186b58:
    // 0x186b58: 0xc0455e6  jal         func_115798
label_186b5c:
    if (ctx->pc == 0x186B5Cu) {
        ctx->pc = 0x186B60u;
        goto label_186b60;
    }
    ctx->pc = 0x186B58u;
    SET_GPR_U32(ctx, 31, 0x186B60u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x186B58u, 0x186B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B60u;
label_186b60:
    // 0x186b60: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x186b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_186b64:
    // 0x186b64: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x186b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_186b68:
    // 0x186b68: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186b6c:
    // 0x186b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186b70:
    // 0x186b70: 0x0  nop
    ctx->pc = 0x186b70u;
    // NOP
label_186b74:
    // 0x186b74: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_186b78:
    // 0x186b78: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186b78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_186b7c:
    // 0x186b7c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_186b80:
    if (ctx->pc == 0x186B80u) {
        ctx->pc = 0x186B84u;
        goto label_186b84;
    }
    ctx->pc = 0x186B7Cu;
    {
        const bool branch_taken_0x186b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b7c) {
            ctx->pc = 0x186BF0u;
            goto label_186bf0;
        }
    }
    ctx->pc = 0x186B84u;
label_186b84:
    // 0x186b84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186b88:
    // 0x186b88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186b8c:
    // 0x186b8c: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186b90:
    // 0x186b90: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_186b94:
    // 0x186b94: 0xc061bc0  jal         func_186F00
label_186b98:
    if (ctx->pc == 0x186B98u) {
        ctx->pc = 0x186B9Cu;
        goto label_186b9c;
    }
    ctx->pc = 0x186B94u;
    SET_GPR_U32(ctx, 31, 0x186B9Cu);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186B94u, 0x186B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B9Cu;
label_186b9c:
    // 0x186b9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_186ba0:
    if (ctx->pc == 0x186BA0u) {
        ctx->pc = 0x186BA4u;
        goto label_186ba4;
    }
    ctx->pc = 0x186B9Cu;
    {
        const bool branch_taken_0x186b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b9c) {
            ctx->pc = 0x186BCCu;
            goto label_186bcc;
        }
    }
    ctx->pc = 0x186BA4u;
label_186ba4:
    // 0x186ba4: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_186ba8:
    // 0x186ba8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186bac:
    // 0x186bac: 0xc040c9e  jal         func_103278
label_186bb0:
    if (ctx->pc == 0x186BB0u) {
        ctx->pc = 0x186BB4u;
        goto label_186bb4;
    }
    ctx->pc = 0x186BACu;
    SET_GPR_U32(ctx, 31, 0x186BB4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186BB4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186BB4u) { return; }
    ctx->pc = 0x186BB4u;
label_186bb4:
    // 0x186bb4: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_186bb8:
    // 0x186bb8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186bbc:
    // 0x186bbc: 0xc040c9e  jal         func_103278
label_186bc0:
    if (ctx->pc == 0x186BC0u) {
        ctx->pc = 0x186BC4u;
        goto label_186bc4;
    }
    ctx->pc = 0x186BBCu;
    SET_GPR_U32(ctx, 31, 0x186BC4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186BC4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186BC4u) { return; }
    ctx->pc = 0x186BC4u;
label_186bc4:
    // 0x186bc4: 0x10000039  b           . + 4 + (0x39 << 2)
label_186bc8:
    if (ctx->pc == 0x186BC8u) {
        ctx->pc = 0x186BCCu;
        goto label_186bcc;
    }
    ctx->pc = 0x186BC4u;
    {
        const bool branch_taken_0x186bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186bc4) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x186BCCu;
label_186bcc:
    // 0x186bcc: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x186bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_186bd0:
    // 0x186bd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186bd4:
    // 0x186bd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186bd8:
    // 0x186bd8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x186bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186bdc:
    // 0x186bdc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x186bdcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_186be0:
    // 0x186be0: 0xc058fec  jal         func_163FB0
label_186be4:
    if (ctx->pc == 0x186BE4u) {
        ctx->pc = 0x186BE8u;
        goto label_186be8;
    }
    ctx->pc = 0x186BE0u;
    SET_GPR_U32(ctx, 31, 0x186BE8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186BE0u, 0x186BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186BE8u;
label_186be8:
    // 0x186be8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_186bec:
    // 0x186bec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_186bf0:
    // 0x186bf0: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x186bf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_186bf4:
    // 0x186bf4: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_186bf8:
    if (ctx->pc == 0x186BF8u) {
        ctx->pc = 0x186BFCu;
        goto label_186bfc;
    }
    ctx->pc = 0x186BF4u;
    {
        const bool branch_taken_0x186bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186bf4) {
            ctx->pc = 0x186B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186b84;
        }
    }
    ctx->pc = 0x186BFCu;
label_186bfc:
    // 0x186bfc: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x186bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
label_186c00:
    // 0x186c00: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186c04:
    // 0x186c04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186c08:
    // 0x186c08: 0x0  nop
    ctx->pc = 0x186c08u;
    // NOP
label_186c0c:
    // 0x186c0c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_186c10:
    // 0x186c10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x186c10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_186c14:
    // 0x186c14: 0x1000001e  b           . + 4 + (0x1E << 2)
label_186c18:
    if (ctx->pc == 0x186C18u) {
        ctx->pc = 0x186C1Cu;
        goto label_186c1c;
    }
    ctx->pc = 0x186C14u;
    {
        const bool branch_taken_0x186c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c14) {
            ctx->pc = 0x186C90u;
            goto label_186c90;
        }
    }
    ctx->pc = 0x186C1Cu;
label_186c1c:
    // 0x186c1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186c20:
    // 0x186c20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186c24:
    // 0x186c24: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186c28:
    // 0x186c28: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_186c2c:
    // 0x186c2c: 0xc061bc0  jal         func_186F00
label_186c30:
    if (ctx->pc == 0x186C30u) {
        ctx->pc = 0x186C34u;
        goto label_186c34;
    }
    ctx->pc = 0x186C2Cu;
    SET_GPR_U32(ctx, 31, 0x186C34u);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186C2Cu, 0x186C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C34u;
label_186c34:
    // 0x186c34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_186c38:
    if (ctx->pc == 0x186C38u) {
        ctx->pc = 0x186C3Cu;
        goto label_186c3c;
    }
    ctx->pc = 0x186C34u;
    {
        const bool branch_taken_0x186c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c34) {
            ctx->pc = 0x186C64u;
            goto label_186c64;
        }
    }
    ctx->pc = 0x186C3Cu;
label_186c3c:
    // 0x186c3c: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_186c40:
    // 0x186c40: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_186c44:
    // 0x186c44: 0xc040c9e  jal         func_103278
label_186c48:
    if (ctx->pc == 0x186C48u) {
        ctx->pc = 0x186C4Cu;
        goto label_186c4c;
    }
    ctx->pc = 0x186C44u;
    SET_GPR_U32(ctx, 31, 0x186C4Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186C4Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186C4Cu) { return; }
    ctx->pc = 0x186C4Cu;
label_186c4c:
    // 0x186c4c: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_186c50:
    // 0x186c50: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186c54:
    // 0x186c54: 0xc040c9e  jal         func_103278
label_186c58:
    if (ctx->pc == 0x186C58u) {
        ctx->pc = 0x186C5Cu;
        goto label_186c5c;
    }
    ctx->pc = 0x186C54u;
    SET_GPR_U32(ctx, 31, 0x186C5Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186C5Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186C5Cu) { return; }
    ctx->pc = 0x186C5Cu;
label_186c5c:
    // 0x186c5c: 0x10000013  b           . + 4 + (0x13 << 2)
label_186c60:
    if (ctx->pc == 0x186C60u) {
        ctx->pc = 0x186C64u;
        goto label_186c64;
    }
    ctx->pc = 0x186C5Cu;
    {
        const bool branch_taken_0x186c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c5c) {
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x186C64u;
label_186c64:
    // 0x186c64: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x186c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186c68:
    // 0x186c68: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x186c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_186c6c:
    // 0x186c6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186c70:
    // 0x186c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186c74:
    // 0x186c74: 0x0  nop
    ctx->pc = 0x186c74u;
    // NOP
label_186c78:
    // 0x186c78: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x186c78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_186c7c:
    // 0x186c7c: 0xc058fec  jal         func_163FB0
label_186c80:
    if (ctx->pc == 0x186C80u) {
        ctx->pc = 0x186C84u;
        goto label_186c84;
    }
    ctx->pc = 0x186C7Cu;
    SET_GPR_U32(ctx, 31, 0x186C84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186C7Cu, 0x186C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C84u;
label_186c84:
    // 0x186c84: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_186c88:
    // 0x186c88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_186c8c:
    // 0x186c8c: 0x0  nop
    ctx->pc = 0x186c8cu;
    // NOP
label_186c90:
    // 0x186c90: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x186c90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_186c94:
    // 0x186c94: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_186c98:
    if (ctx->pc == 0x186C98u) {
        ctx->pc = 0x186C9Cu;
        goto label_186c9c;
    }
    ctx->pc = 0x186C94u;
    {
        const bool branch_taken_0x186c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186c94) {
            ctx->pc = 0x186C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186c1c;
        }
    }
    ctx->pc = 0x186C9Cu;
label_186c9c:
    // 0x186c9c: 0x0  nop
    ctx->pc = 0x186c9cu;
    // NOP
label_186ca0:
    // 0x186ca0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x186ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_186ca4:
    // 0x186ca4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_186ca8:
    // 0x186ca8: 0xa0230346  sb          $v1, 0x346($at)
    ctx->pc = 0x186ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 838), (uint8_t)GPR_U32(ctx, 3));
label_186cac:
    // 0x186cac: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x186cacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_186cb0:
    // 0x186cb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x186cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_186cb4:
    // 0x186cb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_186cb8:
    // 0x186cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_186cbc:
    // 0x186cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_186cc0:
    // 0x186cc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x186cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_186cc4:
    // 0x186cc4: 0x3e00008  jr          $ra
label_186cc8:
    if (ctx->pc == 0x186CC8u) {
        ctx->pc = 0x186CCCu;
        goto label_fallthrough_0x186cc4;
    }
    ctx->pc = 0x186CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186cc4:
    ctx->pc = 0x186CCCu;
}
