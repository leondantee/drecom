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

// Function: Em06_R1_land_run
// Address: 0x199500 - 0x199be0
void Em06_R1_land_run_0x199500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_land_run_0x199500");
#endif

    switch (ctx->pc) {
        case 0x199500u: goto label_199500;
        case 0x199504u: goto label_199504;
        case 0x199508u: goto label_199508;
        case 0x19950cu: goto label_19950c;
        case 0x199510u: goto label_199510;
        case 0x199514u: goto label_199514;
        case 0x199518u: goto label_199518;
        case 0x19951cu: goto label_19951c;
        case 0x199520u: goto label_199520;
        case 0x199524u: goto label_199524;
        case 0x199528u: goto label_199528;
        case 0x19952cu: goto label_19952c;
        case 0x199530u: goto label_199530;
        case 0x199534u: goto label_199534;
        case 0x199538u: goto label_199538;
        case 0x19953cu: goto label_19953c;
        case 0x199540u: goto label_199540;
        case 0x199544u: goto label_199544;
        case 0x199548u: goto label_199548;
        case 0x19954cu: goto label_19954c;
        case 0x199550u: goto label_199550;
        case 0x199554u: goto label_199554;
        case 0x199558u: goto label_199558;
        case 0x19955cu: goto label_19955c;
        case 0x199560u: goto label_199560;
        case 0x199564u: goto label_199564;
        case 0x199568u: goto label_199568;
        case 0x19956cu: goto label_19956c;
        case 0x199570u: goto label_199570;
        case 0x199574u: goto label_199574;
        case 0x199578u: goto label_199578;
        case 0x19957cu: goto label_19957c;
        case 0x199580u: goto label_199580;
        case 0x199584u: goto label_199584;
        case 0x199588u: goto label_199588;
        case 0x19958cu: goto label_19958c;
        case 0x199590u: goto label_199590;
        case 0x199594u: goto label_199594;
        case 0x199598u: goto label_199598;
        case 0x19959cu: goto label_19959c;
        case 0x1995a0u: goto label_1995a0;
        case 0x1995a4u: goto label_1995a4;
        case 0x1995a8u: goto label_1995a8;
        case 0x1995acu: goto label_1995ac;
        case 0x1995b0u: goto label_1995b0;
        case 0x1995b4u: goto label_1995b4;
        case 0x1995b8u: goto label_1995b8;
        case 0x1995bcu: goto label_1995bc;
        case 0x1995c0u: goto label_1995c0;
        case 0x1995c4u: goto label_1995c4;
        case 0x1995c8u: goto label_1995c8;
        case 0x1995ccu: goto label_1995cc;
        case 0x1995d0u: goto label_1995d0;
        case 0x1995d4u: goto label_1995d4;
        case 0x1995d8u: goto label_1995d8;
        case 0x1995dcu: goto label_1995dc;
        case 0x1995e0u: goto label_1995e0;
        case 0x1995e4u: goto label_1995e4;
        case 0x1995e8u: goto label_1995e8;
        case 0x1995ecu: goto label_1995ec;
        case 0x1995f0u: goto label_1995f0;
        case 0x1995f4u: goto label_1995f4;
        case 0x1995f8u: goto label_1995f8;
        case 0x1995fcu: goto label_1995fc;
        case 0x199600u: goto label_199600;
        case 0x199604u: goto label_199604;
        case 0x199608u: goto label_199608;
        case 0x19960cu: goto label_19960c;
        case 0x199610u: goto label_199610;
        case 0x199614u: goto label_199614;
        case 0x199618u: goto label_199618;
        case 0x19961cu: goto label_19961c;
        case 0x199620u: goto label_199620;
        case 0x199624u: goto label_199624;
        case 0x199628u: goto label_199628;
        case 0x19962cu: goto label_19962c;
        case 0x199630u: goto label_199630;
        case 0x199634u: goto label_199634;
        case 0x199638u: goto label_199638;
        case 0x19963cu: goto label_19963c;
        case 0x199640u: goto label_199640;
        case 0x199644u: goto label_199644;
        case 0x199648u: goto label_199648;
        case 0x19964cu: goto label_19964c;
        case 0x199650u: goto label_199650;
        case 0x199654u: goto label_199654;
        case 0x199658u: goto label_199658;
        case 0x19965cu: goto label_19965c;
        case 0x199660u: goto label_199660;
        case 0x199664u: goto label_199664;
        case 0x199668u: goto label_199668;
        case 0x19966cu: goto label_19966c;
        case 0x199670u: goto label_199670;
        case 0x199674u: goto label_199674;
        case 0x199678u: goto label_199678;
        case 0x19967cu: goto label_19967c;
        case 0x199680u: goto label_199680;
        case 0x199684u: goto label_199684;
        case 0x199688u: goto label_199688;
        case 0x19968cu: goto label_19968c;
        case 0x199690u: goto label_199690;
        case 0x199694u: goto label_199694;
        case 0x199698u: goto label_199698;
        case 0x19969cu: goto label_19969c;
        case 0x1996a0u: goto label_1996a0;
        case 0x1996a4u: goto label_1996a4;
        case 0x1996a8u: goto label_1996a8;
        case 0x1996acu: goto label_1996ac;
        case 0x1996b0u: goto label_1996b0;
        case 0x1996b4u: goto label_1996b4;
        case 0x1996b8u: goto label_1996b8;
        case 0x1996bcu: goto label_1996bc;
        case 0x1996c0u: goto label_1996c0;
        case 0x1996c4u: goto label_1996c4;
        case 0x1996c8u: goto label_1996c8;
        case 0x1996ccu: goto label_1996cc;
        case 0x1996d0u: goto label_1996d0;
        case 0x1996d4u: goto label_1996d4;
        case 0x1996d8u: goto label_1996d8;
        case 0x1996dcu: goto label_1996dc;
        case 0x1996e0u: goto label_1996e0;
        case 0x1996e4u: goto label_1996e4;
        case 0x1996e8u: goto label_1996e8;
        case 0x1996ecu: goto label_1996ec;
        case 0x1996f0u: goto label_1996f0;
        case 0x1996f4u: goto label_1996f4;
        case 0x1996f8u: goto label_1996f8;
        case 0x1996fcu: goto label_1996fc;
        case 0x199700u: goto label_199700;
        case 0x199704u: goto label_199704;
        case 0x199708u: goto label_199708;
        case 0x19970cu: goto label_19970c;
        case 0x199710u: goto label_199710;
        case 0x199714u: goto label_199714;
        case 0x199718u: goto label_199718;
        case 0x19971cu: goto label_19971c;
        case 0x199720u: goto label_199720;
        case 0x199724u: goto label_199724;
        case 0x199728u: goto label_199728;
        case 0x19972cu: goto label_19972c;
        case 0x199730u: goto label_199730;
        case 0x199734u: goto label_199734;
        case 0x199738u: goto label_199738;
        case 0x19973cu: goto label_19973c;
        case 0x199740u: goto label_199740;
        case 0x199744u: goto label_199744;
        case 0x199748u: goto label_199748;
        case 0x19974cu: goto label_19974c;
        case 0x199750u: goto label_199750;
        case 0x199754u: goto label_199754;
        case 0x199758u: goto label_199758;
        case 0x19975cu: goto label_19975c;
        case 0x199760u: goto label_199760;
        case 0x199764u: goto label_199764;
        case 0x199768u: goto label_199768;
        case 0x19976cu: goto label_19976c;
        case 0x199770u: goto label_199770;
        case 0x199774u: goto label_199774;
        case 0x199778u: goto label_199778;
        case 0x19977cu: goto label_19977c;
        case 0x199780u: goto label_199780;
        case 0x199784u: goto label_199784;
        case 0x199788u: goto label_199788;
        case 0x19978cu: goto label_19978c;
        case 0x199790u: goto label_199790;
        case 0x199794u: goto label_199794;
        case 0x199798u: goto label_199798;
        case 0x19979cu: goto label_19979c;
        case 0x1997a0u: goto label_1997a0;
        case 0x1997a4u: goto label_1997a4;
        case 0x1997a8u: goto label_1997a8;
        case 0x1997acu: goto label_1997ac;
        case 0x1997b0u: goto label_1997b0;
        case 0x1997b4u: goto label_1997b4;
        case 0x1997b8u: goto label_1997b8;
        case 0x1997bcu: goto label_1997bc;
        case 0x1997c0u: goto label_1997c0;
        case 0x1997c4u: goto label_1997c4;
        case 0x1997c8u: goto label_1997c8;
        case 0x1997ccu: goto label_1997cc;
        case 0x1997d0u: goto label_1997d0;
        case 0x1997d4u: goto label_1997d4;
        case 0x1997d8u: goto label_1997d8;
        case 0x1997dcu: goto label_1997dc;
        case 0x1997e0u: goto label_1997e0;
        case 0x1997e4u: goto label_1997e4;
        case 0x1997e8u: goto label_1997e8;
        case 0x1997ecu: goto label_1997ec;
        case 0x1997f0u: goto label_1997f0;
        case 0x1997f4u: goto label_1997f4;
        case 0x1997f8u: goto label_1997f8;
        case 0x1997fcu: goto label_1997fc;
        case 0x199800u: goto label_199800;
        case 0x199804u: goto label_199804;
        case 0x199808u: goto label_199808;
        case 0x19980cu: goto label_19980c;
        case 0x199810u: goto label_199810;
        case 0x199814u: goto label_199814;
        case 0x199818u: goto label_199818;
        case 0x19981cu: goto label_19981c;
        case 0x199820u: goto label_199820;
        case 0x199824u: goto label_199824;
        case 0x199828u: goto label_199828;
        case 0x19982cu: goto label_19982c;
        case 0x199830u: goto label_199830;
        case 0x199834u: goto label_199834;
        case 0x199838u: goto label_199838;
        case 0x19983cu: goto label_19983c;
        case 0x199840u: goto label_199840;
        case 0x199844u: goto label_199844;
        case 0x199848u: goto label_199848;
        case 0x19984cu: goto label_19984c;
        case 0x199850u: goto label_199850;
        case 0x199854u: goto label_199854;
        case 0x199858u: goto label_199858;
        case 0x19985cu: goto label_19985c;
        case 0x199860u: goto label_199860;
        case 0x199864u: goto label_199864;
        case 0x199868u: goto label_199868;
        case 0x19986cu: goto label_19986c;
        case 0x199870u: goto label_199870;
        case 0x199874u: goto label_199874;
        case 0x199878u: goto label_199878;
        case 0x19987cu: goto label_19987c;
        case 0x199880u: goto label_199880;
        case 0x199884u: goto label_199884;
        case 0x199888u: goto label_199888;
        case 0x19988cu: goto label_19988c;
        case 0x199890u: goto label_199890;
        case 0x199894u: goto label_199894;
        case 0x199898u: goto label_199898;
        case 0x19989cu: goto label_19989c;
        case 0x1998a0u: goto label_1998a0;
        case 0x1998a4u: goto label_1998a4;
        case 0x1998a8u: goto label_1998a8;
        case 0x1998acu: goto label_1998ac;
        case 0x1998b0u: goto label_1998b0;
        case 0x1998b4u: goto label_1998b4;
        case 0x1998b8u: goto label_1998b8;
        case 0x1998bcu: goto label_1998bc;
        case 0x1998c0u: goto label_1998c0;
        case 0x1998c4u: goto label_1998c4;
        case 0x1998c8u: goto label_1998c8;
        case 0x1998ccu: goto label_1998cc;
        case 0x1998d0u: goto label_1998d0;
        case 0x1998d4u: goto label_1998d4;
        case 0x1998d8u: goto label_1998d8;
        case 0x1998dcu: goto label_1998dc;
        case 0x1998e0u: goto label_1998e0;
        case 0x1998e4u: goto label_1998e4;
        case 0x1998e8u: goto label_1998e8;
        case 0x1998ecu: goto label_1998ec;
        case 0x1998f0u: goto label_1998f0;
        case 0x1998f4u: goto label_1998f4;
        case 0x1998f8u: goto label_1998f8;
        case 0x1998fcu: goto label_1998fc;
        case 0x199900u: goto label_199900;
        case 0x199904u: goto label_199904;
        case 0x199908u: goto label_199908;
        case 0x19990cu: goto label_19990c;
        case 0x199910u: goto label_199910;
        case 0x199914u: goto label_199914;
        case 0x199918u: goto label_199918;
        case 0x19991cu: goto label_19991c;
        case 0x199920u: goto label_199920;
        case 0x199924u: goto label_199924;
        case 0x199928u: goto label_199928;
        case 0x19992cu: goto label_19992c;
        case 0x199930u: goto label_199930;
        case 0x199934u: goto label_199934;
        case 0x199938u: goto label_199938;
        case 0x19993cu: goto label_19993c;
        case 0x199940u: goto label_199940;
        case 0x199944u: goto label_199944;
        case 0x199948u: goto label_199948;
        case 0x19994cu: goto label_19994c;
        case 0x199950u: goto label_199950;
        case 0x199954u: goto label_199954;
        case 0x199958u: goto label_199958;
        case 0x19995cu: goto label_19995c;
        case 0x199960u: goto label_199960;
        case 0x199964u: goto label_199964;
        case 0x199968u: goto label_199968;
        case 0x19996cu: goto label_19996c;
        case 0x199970u: goto label_199970;
        case 0x199974u: goto label_199974;
        case 0x199978u: goto label_199978;
        case 0x19997cu: goto label_19997c;
        case 0x199980u: goto label_199980;
        case 0x199984u: goto label_199984;
        case 0x199988u: goto label_199988;
        case 0x19998cu: goto label_19998c;
        case 0x199990u: goto label_199990;
        case 0x199994u: goto label_199994;
        case 0x199998u: goto label_199998;
        case 0x19999cu: goto label_19999c;
        case 0x1999a0u: goto label_1999a0;
        case 0x1999a4u: goto label_1999a4;
        case 0x1999a8u: goto label_1999a8;
        case 0x1999acu: goto label_1999ac;
        case 0x1999b0u: goto label_1999b0;
        case 0x1999b4u: goto label_1999b4;
        case 0x1999b8u: goto label_1999b8;
        case 0x1999bcu: goto label_1999bc;
        case 0x1999c0u: goto label_1999c0;
        case 0x1999c4u: goto label_1999c4;
        case 0x1999c8u: goto label_1999c8;
        case 0x1999ccu: goto label_1999cc;
        case 0x1999d0u: goto label_1999d0;
        case 0x1999d4u: goto label_1999d4;
        case 0x1999d8u: goto label_1999d8;
        case 0x1999dcu: goto label_1999dc;
        case 0x1999e0u: goto label_1999e0;
        case 0x1999e4u: goto label_1999e4;
        case 0x1999e8u: goto label_1999e8;
        case 0x1999ecu: goto label_1999ec;
        case 0x1999f0u: goto label_1999f0;
        case 0x1999f4u: goto label_1999f4;
        case 0x1999f8u: goto label_1999f8;
        case 0x1999fcu: goto label_1999fc;
        case 0x199a00u: goto label_199a00;
        case 0x199a04u: goto label_199a04;
        case 0x199a08u: goto label_199a08;
        case 0x199a0cu: goto label_199a0c;
        case 0x199a10u: goto label_199a10;
        case 0x199a14u: goto label_199a14;
        case 0x199a18u: goto label_199a18;
        case 0x199a1cu: goto label_199a1c;
        case 0x199a20u: goto label_199a20;
        case 0x199a24u: goto label_199a24;
        case 0x199a28u: goto label_199a28;
        case 0x199a2cu: goto label_199a2c;
        case 0x199a30u: goto label_199a30;
        case 0x199a34u: goto label_199a34;
        case 0x199a38u: goto label_199a38;
        case 0x199a3cu: goto label_199a3c;
        case 0x199a40u: goto label_199a40;
        case 0x199a44u: goto label_199a44;
        case 0x199a48u: goto label_199a48;
        case 0x199a4cu: goto label_199a4c;
        case 0x199a50u: goto label_199a50;
        case 0x199a54u: goto label_199a54;
        case 0x199a58u: goto label_199a58;
        case 0x199a5cu: goto label_199a5c;
        case 0x199a60u: goto label_199a60;
        case 0x199a64u: goto label_199a64;
        case 0x199a68u: goto label_199a68;
        case 0x199a6cu: goto label_199a6c;
        case 0x199a70u: goto label_199a70;
        case 0x199a74u: goto label_199a74;
        case 0x199a78u: goto label_199a78;
        case 0x199a7cu: goto label_199a7c;
        case 0x199a80u: goto label_199a80;
        case 0x199a84u: goto label_199a84;
        case 0x199a88u: goto label_199a88;
        case 0x199a8cu: goto label_199a8c;
        case 0x199a90u: goto label_199a90;
        case 0x199a94u: goto label_199a94;
        case 0x199a98u: goto label_199a98;
        case 0x199a9cu: goto label_199a9c;
        case 0x199aa0u: goto label_199aa0;
        case 0x199aa4u: goto label_199aa4;
        case 0x199aa8u: goto label_199aa8;
        case 0x199aacu: goto label_199aac;
        case 0x199ab0u: goto label_199ab0;
        case 0x199ab4u: goto label_199ab4;
        case 0x199ab8u: goto label_199ab8;
        case 0x199abcu: goto label_199abc;
        case 0x199ac0u: goto label_199ac0;
        case 0x199ac4u: goto label_199ac4;
        case 0x199ac8u: goto label_199ac8;
        case 0x199accu: goto label_199acc;
        case 0x199ad0u: goto label_199ad0;
        case 0x199ad4u: goto label_199ad4;
        case 0x199ad8u: goto label_199ad8;
        case 0x199adcu: goto label_199adc;
        case 0x199ae0u: goto label_199ae0;
        case 0x199ae4u: goto label_199ae4;
        case 0x199ae8u: goto label_199ae8;
        case 0x199aecu: goto label_199aec;
        case 0x199af0u: goto label_199af0;
        case 0x199af4u: goto label_199af4;
        case 0x199af8u: goto label_199af8;
        case 0x199afcu: goto label_199afc;
        case 0x199b00u: goto label_199b00;
        case 0x199b04u: goto label_199b04;
        case 0x199b08u: goto label_199b08;
        case 0x199b0cu: goto label_199b0c;
        case 0x199b10u: goto label_199b10;
        case 0x199b14u: goto label_199b14;
        case 0x199b18u: goto label_199b18;
        case 0x199b1cu: goto label_199b1c;
        case 0x199b20u: goto label_199b20;
        case 0x199b24u: goto label_199b24;
        case 0x199b28u: goto label_199b28;
        case 0x199b2cu: goto label_199b2c;
        case 0x199b30u: goto label_199b30;
        case 0x199b34u: goto label_199b34;
        case 0x199b38u: goto label_199b38;
        case 0x199b3cu: goto label_199b3c;
        case 0x199b40u: goto label_199b40;
        case 0x199b44u: goto label_199b44;
        case 0x199b48u: goto label_199b48;
        case 0x199b4cu: goto label_199b4c;
        case 0x199b50u: goto label_199b50;
        case 0x199b54u: goto label_199b54;
        case 0x199b58u: goto label_199b58;
        case 0x199b5cu: goto label_199b5c;
        case 0x199b60u: goto label_199b60;
        case 0x199b64u: goto label_199b64;
        case 0x199b68u: goto label_199b68;
        case 0x199b6cu: goto label_199b6c;
        case 0x199b70u: goto label_199b70;
        case 0x199b74u: goto label_199b74;
        case 0x199b78u: goto label_199b78;
        case 0x199b7cu: goto label_199b7c;
        case 0x199b80u: goto label_199b80;
        case 0x199b84u: goto label_199b84;
        case 0x199b88u: goto label_199b88;
        case 0x199b8cu: goto label_199b8c;
        case 0x199b90u: goto label_199b90;
        case 0x199b94u: goto label_199b94;
        case 0x199b98u: goto label_199b98;
        case 0x199b9cu: goto label_199b9c;
        case 0x199ba0u: goto label_199ba0;
        case 0x199ba4u: goto label_199ba4;
        case 0x199ba8u: goto label_199ba8;
        case 0x199bacu: goto label_199bac;
        case 0x199bb0u: goto label_199bb0;
        case 0x199bb4u: goto label_199bb4;
        case 0x199bb8u: goto label_199bb8;
        case 0x199bbcu: goto label_199bbc;
        case 0x199bc0u: goto label_199bc0;
        case 0x199bc4u: goto label_199bc4;
        case 0x199bc8u: goto label_199bc8;
        case 0x199bccu: goto label_199bcc;
        case 0x199bd0u: goto label_199bd0;
        case 0x199bd4u: goto label_199bd4;
        case 0x199bd8u: goto label_199bd8;
        case 0x199bdcu: goto label_199bdc;
        default: break;
    }

    ctx->pc = 0x199500u;

label_199500:
    // 0x199500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_199504:
    // 0x199504: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x199504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_199508:
    // 0x199508: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x199508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_19950c:
    // 0x19950c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199510:
    // 0x199510: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x199510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_199514:
    // 0x199514: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x199514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_199518:
    // 0x199518: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x199518u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_19951c:
    // 0x19951c: 0x102001ac  beqz        $at, . + 4 + (0x1AC << 2)
label_199520:
    if (ctx->pc == 0x199520u) {
        ctx->pc = 0x199524u;
        goto label_199524;
    }
    ctx->pc = 0x19951Cu;
    {
        const bool branch_taken_0x19951c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19951c) {
            ctx->pc = 0x199BD0u;
            goto label_199bd0;
        }
    }
    ctx->pc = 0x199524u;
label_199524:
    // 0x199524: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x199524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_199528:
    // 0x199528: 0x2464edf0  addiu       $a0, $v1, -0x1210
    ctx->pc = 0x199528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962672));
label_19952c:
    // 0x19952c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19952cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_199530:
    // 0x199530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_199534:
    // 0x199534: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x199534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199538:
    // 0x199538: 0x600008  jr          $v1
label_19953c:
    if (ctx->pc == 0x19953Cu) {
        ctx->pc = 0x199540u;
        goto label_199540;
    }
    ctx->pc = 0x199538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199538u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x199540u;
label_199540:
    // 0x199540: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199544:
    // 0x199544: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199548:
    // 0x199548: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x199548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_19954c:
    // 0x19954c: 0x24063c03  addiu       $a2, $zero, 0x3C03
    ctx->pc = 0x19954cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15363));
label_199550:
    // 0x199550: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199554:
    // 0x199554: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x199554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_199558:
    // 0x199558: 0xc0965d0  jal         func_259740
label_19955c:
    if (ctx->pc == 0x19955Cu) {
        ctx->pc = 0x199560u;
        goto label_199560;
    }
    ctx->pc = 0x199558u;
    SET_GPR_U32(ctx, 31, 0x199560u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x199558u, 0x199560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199560u;
label_199560:
    // 0x199560: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199564:
    // 0x199564: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x199564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_199568:
    // 0x199568: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x199568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_19956c:
    // 0x19956c: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x19956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_199570:
    // 0x199570: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x199570u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
label_199574:
    // 0x199574: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x199574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_199578:
    // 0x199578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19957c:
    // 0x19957c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199580:
    // 0x199580: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x199580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_199584:
    // 0x199584: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x199584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_199588:
    // 0x199588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19958c:
    // 0x19958c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199590:
    // 0x199590: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x199590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_199594:
    // 0x199594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x199594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199598:
    // 0x199598: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19959c:
    // 0x19959c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1995a0:
    // 0x1995a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1995a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1995a4:
    // 0x1995a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1995a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1995a8:
    // 0x1995a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1995a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1995ac:
    // 0x1995ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1995acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1995b0:
    // 0x1995b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1995b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1995b4:
    // 0x1995b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1995b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1995b8:
    // 0x1995b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1995b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1995bc:
    // 0x1995bc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1995bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1995c0:
    // 0x1995c0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1995c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1995c4:
    // 0x1995c4: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x1995c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1995c8:
    // 0x1995c8: 0xc040ed8  jal         func_103B60
label_1995cc:
    if (ctx->pc == 0x1995CCu) {
        ctx->pc = 0x1995D0u;
        goto label_1995d0;
    }
    ctx->pc = 0x1995C8u;
    SET_GPR_U32(ctx, 31, 0x1995D0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1995D0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1995D0u) { return; }
    ctx->pc = 0x1995D0u;
label_1995d0:
    // 0x1995d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1995d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1995d4:
    // 0x1995d4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1995d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1995d8:
    // 0x1995d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1995d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1995dc:
    // 0x1995dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1995dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1995e0:
    // 0x1995e0: 0x0  nop
    ctx->pc = 0x1995e0u;
    // NOP
label_1995e4:
    // 0x1995e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1995e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1995e8:
    // 0x1995e8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1995e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1995ec:
    // 0x1995ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1995f0:
    // 0x1995f0: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1995f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1995f4:
    // 0x1995f4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1995f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1995f8:
    // 0x1995f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1995f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1995fc:
    // 0x1995fc: 0x0  nop
    ctx->pc = 0x1995fcu;
    // NOP
label_199600:
    // 0x199600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199604:
    // 0x199604: 0x0  nop
    ctx->pc = 0x199604u;
    // NOP
label_199608:
    // 0x199608: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_19960c:
    if (ctx->pc == 0x19960Cu) {
        ctx->pc = 0x199610u;
        goto label_199610;
    }
    ctx->pc = 0x199608u;
    {
        const bool branch_taken_0x199608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199608) {
            ctx->pc = 0x199620u;
            goto label_199620;
        }
    }
    ctx->pc = 0x199610u;
label_199610:
    // 0x199610: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x199610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_199614:
    // 0x199614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199618:
    // 0x199618: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19961c:
    // 0x19961c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x19961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_199620:
    // 0x199620: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199624:
    // 0x199624: 0xc05cd10  jal         func_173440
label_199628:
    if (ctx->pc == 0x199628u) {
        ctx->pc = 0x19962Cu;
        goto label_19962c;
    }
    ctx->pc = 0x199624u;
    SET_GPR_U32(ctx, 31, 0x19962Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x199624u, 0x19962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19962Cu;
label_19962c:
    // 0x19962c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199630:
    // 0x199630: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199634:
    // 0x199634: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199638:
    // 0x199638: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19963c:
    // 0x19963c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19963cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_199640:
    // 0x199640: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_199644:
    // 0x199644: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199648:
    // 0x199648: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19964c:
    // 0x19964c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199650:
    // 0x199650: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x199650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199654:
    // 0x199654: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_199658:
    // 0x199658: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x199658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_19965c:
    // 0x19965c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199660:
    // 0x199660: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199664:
    // 0x199664: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_199668:
    // 0x199668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19966c:
    // 0x19966c: 0x0  nop
    ctx->pc = 0x19966cu;
    // NOP
label_199670:
    // 0x199670: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199674:
    // 0x199674: 0x0  nop
    ctx->pc = 0x199674u;
    // NOP
label_199678:
    // 0x199678: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_19967c:
    if (ctx->pc == 0x19967Cu) {
        ctx->pc = 0x199680u;
        goto label_199680;
    }
    ctx->pc = 0x199678u;
    {
        const bool branch_taken_0x199678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199678) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199680u;
label_199680:
    // 0x199680: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199684:
    // 0x199684: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x199684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199688:
    // 0x199688: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x199688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19968c:
    // 0x19968c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19968cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_199690:
    // 0x199690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199694:
    // 0x199694: 0x0  nop
    ctx->pc = 0x199694u;
    // NOP
label_199698:
    // 0x199698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19969c:
    // 0x19969c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x19969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1996a0:
    // 0x1996a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1996a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1996a4:
    // 0x1996a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1996a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1996a8:
    // 0x1996a8: 0xc05cec4  jal         func_173B10
label_1996ac:
    if (ctx->pc == 0x1996ACu) {
        ctx->pc = 0x1996B0u;
        goto label_1996b0;
    }
    ctx->pc = 0x1996A8u;
    SET_GPR_U32(ctx, 31, 0x1996B0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1996A8u, 0x1996B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996B0u;
label_1996b0:
    // 0x1996b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1996b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1996b4:
    // 0x1996b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1996b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1996b8:
    // 0x1996b8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1996b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1996bc:
    // 0x1996bc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1996bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1996c0:
    // 0x1996c0: 0xc05cf7c  jal         func_173DF0
label_1996c4:
    if (ctx->pc == 0x1996C4u) {
        ctx->pc = 0x1996C8u;
        goto label_1996c8;
    }
    ctx->pc = 0x1996C0u;
    SET_GPR_U32(ctx, 31, 0x1996C8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1996C0u, 0x1996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996C8u;
label_1996c8:
    // 0x1996c8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1996c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1996cc:
    // 0x1996cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1996ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1996d0:
    // 0x1996d0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1996d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1996d4:
    // 0x1996d4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1996d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1996d8:
    // 0x1996d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1996d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1996dc:
    // 0x1996dc: 0x0  nop
    ctx->pc = 0x1996dcu;
    // NOP
label_1996e0:
    // 0x1996e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1996e4:
    if (ctx->pc == 0x1996E4u) {
        ctx->pc = 0x1996E8u;
        goto label_1996e8;
    }
    ctx->pc = 0x1996E0u;
    {
        const bool branch_taken_0x1996e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1996e0) {
            ctx->pc = 0x1996F4u;
            goto label_1996f4;
        }
    }
    ctx->pc = 0x1996E8u;
label_1996e8:
    // 0x1996e8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1996e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1996ec:
    // 0x1996ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1996ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1996f0:
    // 0x1996f0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1996f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1996f4:
    // 0x1996f4: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x1996f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
label_1996f8:
    // 0x1996f8: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1996f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_1996fc:
    // 0x1996fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1996fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199700:
    // 0x199700: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199704:
    // 0x199704: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199708:
    // 0x199708: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19970c:
    // 0x19970c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x19970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_199710:
    // 0x199710: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x199710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199714:
    // 0x199714: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x199714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
label_199718:
    // 0x199718: 0xc05c848  jal         func_172120
label_19971c:
    if (ctx->pc == 0x19971Cu) {
        ctx->pc = 0x199720u;
        goto label_199720;
    }
    ctx->pc = 0x199718u;
    SET_GPR_U32(ctx, 31, 0x199720u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x199718u, 0x199720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199720u;
label_199720:
    // 0x199720: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199724:
    // 0x199724: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199728:
    // 0x199728: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199728u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19972c:
    // 0x19972c: 0xc058fec  jal         func_163FB0
label_199730:
    if (ctx->pc == 0x199730u) {
        ctx->pc = 0x199734u;
        goto label_199734;
    }
    ctx->pc = 0x19972Cu;
    SET_GPR_U32(ctx, 31, 0x199734u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x19972Cu, 0x199734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199734u;
label_199734:
    // 0x199734: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199738:
    // 0x199738: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_19973c:
    // 0x19973c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199740:
    // 0x199740: 0xc0974c8  jal         func_25D320
label_199744:
    if (ctx->pc == 0x199744u) {
        ctx->pc = 0x199748u;
        goto label_199748;
    }
    ctx->pc = 0x199740u;
    SET_GPR_U32(ctx, 31, 0x199748u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x199740u, 0x199748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199748u;
label_199748:
    // 0x199748: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19974c:
    // 0x19974c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19974cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_199750:
    // 0x199750: 0x1060011f  beqz        $v1, . + 4 + (0x11F << 2)
label_199754:
    if (ctx->pc == 0x199754u) {
        ctx->pc = 0x199758u;
        goto label_199758;
    }
    ctx->pc = 0x199750u;
    {
        const bool branch_taken_0x199750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199750) {
            ctx->pc = 0x199BD0u;
            goto label_199bd0;
        }
    }
    ctx->pc = 0x199758u;
label_199758:
    // 0x199758: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19975c:
    // 0x19975c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x19975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199760:
    // 0x199760: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x199760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_199764:
    // 0x199764: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x199764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199768:
    // 0x199768: 0x0  nop
    ctx->pc = 0x199768u;
    // NOP
label_19976c:
    // 0x19976c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19976cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199770:
    // 0x199770: 0x0  nop
    ctx->pc = 0x199770u;
    // NOP
label_199774:
    // 0x199774: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_199778:
    if (ctx->pc == 0x199778u) {
        ctx->pc = 0x19977Cu;
        goto label_19977c;
    }
    ctx->pc = 0x199774u;
    {
        const bool branch_taken_0x199774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199774) {
            ctx->pc = 0x1997B4u;
            goto label_1997b4;
        }
    }
    ctx->pc = 0x19977Cu;
label_19977c:
    // 0x19977c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199780:
    // 0x199780: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199784:
    // 0x199784: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x199784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_199788:
    // 0x199788: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x199788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19978c:
    // 0x19978c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199790:
    // 0x199790: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x199790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_199794:
    // 0x199794: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199798:
    // 0x199798: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x199798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_19979c:
    // 0x19979c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1997a0:
    // 0x1997a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1997a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1997a4:
    // 0x1997a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1997a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1997a8:
    // 0x1997a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1997a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1997ac:
    // 0x1997ac: 0x10000108  b           . + 4 + (0x108 << 2)
label_1997b0:
    if (ctx->pc == 0x1997B0u) {
        ctx->pc = 0x1997B4u;
        goto label_1997b4;
    }
    ctx->pc = 0x1997ACu;
    {
        const bool branch_taken_0x1997ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1997ac) {
            ctx->pc = 0x199BD0u;
            goto label_199bd0;
        }
    }
    ctx->pc = 0x1997B4u;
label_1997b4:
    // 0x1997b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1997b8:
    // 0x1997b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1997b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1997bc:
    // 0x1997bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1997bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1997c0:
    // 0x1997c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1997c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1997c4:
    // 0x1997c4: 0x10000102  b           . + 4 + (0x102 << 2)
label_1997c8:
    if (ctx->pc == 0x1997C8u) {
        ctx->pc = 0x1997CCu;
        goto label_1997cc;
    }
    ctx->pc = 0x1997C4u;
    {
        const bool branch_taken_0x1997c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1997c4) {
            ctx->pc = 0x199BD0u;
            goto label_199bd0;
        }
    }
    ctx->pc = 0x1997CCu;
label_1997cc:
    // 0x1997cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1997ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1997d0:
    // 0x1997d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1997d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1997d4:
    // 0x1997d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1997d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1997d8:
    // 0x1997d8: 0x24063c05  addiu       $a2, $zero, 0x3C05
    ctx->pc = 0x1997d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15365));
label_1997dc:
    // 0x1997dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1997dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1997e0:
    // 0x1997e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1997e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1997e4:
    // 0x1997e4: 0xc0965d0  jal         func_259740
label_1997e8:
    if (ctx->pc == 0x1997E8u) {
        ctx->pc = 0x1997ECu;
        goto label_1997ec;
    }
    ctx->pc = 0x1997E4u;
    SET_GPR_U32(ctx, 31, 0x1997ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1997E4u, 0x1997ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997ECu;
label_1997ec:
    // 0x1997ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1997ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1997f0:
    // 0x1997f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1997f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1997f4:
    // 0x1997f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1997f8:
    // 0x1997f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1997f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1997fc:
    // 0x1997fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199800:
    // 0x199800: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199804:
    // 0x199804: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199808:
    // 0x199808: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_19980c:
    // 0x19980c: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19980cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_199810:
    // 0x199810: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x199810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199814:
    // 0x199814: 0xc040ed8  jal         func_103B60
label_199818:
    if (ctx->pc == 0x199818u) {
        ctx->pc = 0x19981Cu;
        goto label_19981c;
    }
    ctx->pc = 0x199814u;
    SET_GPR_U32(ctx, 31, 0x19981Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19981Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19981Cu) { return; }
    ctx->pc = 0x19981Cu;
label_19981c:
    // 0x19981c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199820:
    // 0x199820: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x199820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199824:
    // 0x199824: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_199828:
    // 0x199828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19982c:
    // 0x19982c: 0x0  nop
    ctx->pc = 0x19982cu;
    // NOP
label_199830:
    // 0x199830: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_199834:
    // 0x199834: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x199834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_199838:
    // 0x199838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19983c:
    // 0x19983c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x19983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199840:
    // 0x199840: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x199840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_199844:
    // 0x199844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199848:
    // 0x199848: 0x0  nop
    ctx->pc = 0x199848u;
    // NOP
label_19984c:
    // 0x19984c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19984cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199850:
    // 0x199850: 0x0  nop
    ctx->pc = 0x199850u;
    // NOP
label_199854:
    // 0x199854: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_199858:
    if (ctx->pc == 0x199858u) {
        ctx->pc = 0x19985Cu;
        goto label_19985c;
    }
    ctx->pc = 0x199854u;
    {
        const bool branch_taken_0x199854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199854) {
            ctx->pc = 0x19986Cu;
            goto label_19986c;
        }
    }
    ctx->pc = 0x19985Cu;
label_19985c:
    // 0x19985c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19985cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_199860:
    // 0x199860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199864:
    // 0x199864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199868:
    // 0x199868: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x199868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_19986c:
    // 0x19986c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199870:
    // 0x199870: 0xc05cd10  jal         func_173440
label_199874:
    if (ctx->pc == 0x199874u) {
        ctx->pc = 0x199878u;
        goto label_199878;
    }
    ctx->pc = 0x199870u;
    SET_GPR_U32(ctx, 31, 0x199878u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x199870u, 0x199878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199878u;
label_199878:
    // 0x199878: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19987c:
    // 0x19987c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19987cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199880:
    // 0x199880: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199884:
    // 0x199884: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199888:
    // 0x199888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19988c:
    // 0x19988c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19988cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_199890:
    // 0x199890: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199894:
    // 0x199894: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199898:
    // 0x199898: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19989c:
    // 0x19989c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19989cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1998a0:
    // 0x1998a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1998a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1998a4:
    // 0x1998a4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1998a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1998a8:
    // 0x1998a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1998a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1998ac:
    // 0x1998ac: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1998acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1998b0:
    // 0x1998b0: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_1998b4:
    // 0x1998b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1998b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1998b8:
    // 0x1998b8: 0x0  nop
    ctx->pc = 0x1998b8u;
    // NOP
label_1998bc:
    // 0x1998bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1998bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1998c0:
    // 0x1998c0: 0x0  nop
    ctx->pc = 0x1998c0u;
    // NOP
label_1998c4:
    // 0x1998c4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_1998c8:
    if (ctx->pc == 0x1998C8u) {
        ctx->pc = 0x1998CCu;
        goto label_1998cc;
    }
    ctx->pc = 0x1998C4u;
    {
        const bool branch_taken_0x1998c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1998c4) {
            ctx->pc = 0x1998ECu;
            goto label_1998ec;
        }
    }
    ctx->pc = 0x1998CCu;
label_1998cc:
    // 0x1998cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1998ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1998d0:
    // 0x1998d0: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1998d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1998d4:
    // 0x1998d4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1998d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1998d8:
    // 0x1998d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1998d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1998dc:
    // 0x1998dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1998dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1998e0:
    // 0x1998e0: 0x0  nop
    ctx->pc = 0x1998e0u;
    // NOP
label_1998e4:
    // 0x1998e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1998e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1998e8:
    // 0x1998e8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1998e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1998ec:
    // 0x1998ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1998ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1998f0:
    // 0x1998f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1998f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1998f4:
    // 0x1998f4: 0xc05cec4  jal         func_173B10
label_1998f8:
    if (ctx->pc == 0x1998F8u) {
        ctx->pc = 0x1998FCu;
        goto label_1998fc;
    }
    ctx->pc = 0x1998F4u;
    SET_GPR_U32(ctx, 31, 0x1998FCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1998F4u, 0x1998FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998FCu;
label_1998fc:
    // 0x1998fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1998fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199900:
    // 0x199900: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199904:
    // 0x199904: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x199904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_199908:
    // 0x199908: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x199908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_19990c:
    // 0x19990c: 0xc05cf7c  jal         func_173DF0
label_199910:
    if (ctx->pc == 0x199910u) {
        ctx->pc = 0x199914u;
        goto label_199914;
    }
    ctx->pc = 0x19990Cu;
    SET_GPR_U32(ctx, 31, 0x199914u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19990Cu, 0x199914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199914u;
label_199914:
    // 0x199914: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x199914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_199918:
    // 0x199918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19991c:
    // 0x19991c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199920:
    // 0x199920: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199924:
    // 0x199924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199928:
    // 0x199928: 0x0  nop
    ctx->pc = 0x199928u;
    // NOP
label_19992c:
    // 0x19992c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_199930:
    if (ctx->pc == 0x199930u) {
        ctx->pc = 0x199934u;
        goto label_199934;
    }
    ctx->pc = 0x19992Cu;
    {
        const bool branch_taken_0x19992c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19992c) {
            ctx->pc = 0x199940u;
            goto label_199940;
        }
    }
    ctx->pc = 0x199934u;
label_199934:
    // 0x199934: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199938:
    // 0x199938: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19993c:
    // 0x19993c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19993cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_199940:
    // 0x199940: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199944:
    // 0x199944: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x199944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199948:
    // 0x199948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19994c:
    // 0x19994c: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
label_199950:
    // 0x199950: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x199950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_199954:
    // 0x199954: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199958:
    // 0x199958: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x199958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_19995c:
    // 0x19995c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x19995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199960:
    // 0x199960: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
label_199964:
    // 0x199964: 0xc05c848  jal         func_172120
label_199968:
    if (ctx->pc == 0x199968u) {
        ctx->pc = 0x19996Cu;
        goto label_19996c;
    }
    ctx->pc = 0x199964u;
    SET_GPR_U32(ctx, 31, 0x19996Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x199964u, 0x19996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19996Cu;
label_19996c:
    // 0x19996c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199970:
    // 0x199970: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199974:
    // 0x199974: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199974u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_199978:
    // 0x199978: 0xc058fec  jal         func_163FB0
label_19997c:
    if (ctx->pc == 0x19997Cu) {
        ctx->pc = 0x199980u;
        goto label_199980;
    }
    ctx->pc = 0x199978u;
    SET_GPR_U32(ctx, 31, 0x199980u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x199978u, 0x199980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199980u;
label_199980:
    // 0x199980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199984:
    // 0x199984: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_199988:
    // 0x199988: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19998c:
    // 0x19998c: 0xc0974c8  jal         func_25D320
label_199990:
    if (ctx->pc == 0x199990u) {
        ctx->pc = 0x199994u;
        goto label_199994;
    }
    ctx->pc = 0x19998Cu;
    SET_GPR_U32(ctx, 31, 0x199994u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19998Cu, 0x199994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199994u;
label_199994:
    // 0x199994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199998:
    // 0x199998: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x199998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_19999c:
    // 0x19999c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
label_1999a0:
    if (ctx->pc == 0x1999A0u) {
        ctx->pc = 0x1999A4u;
        goto label_1999a4;
    }
    ctx->pc = 0x19999Cu;
    {
        const bool branch_taken_0x19999c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19999c) {
            ctx->pc = 0x199BD0u;
            goto label_199bd0;
        }
    }
    ctx->pc = 0x1999A4u;
label_1999a4:
    // 0x1999a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1999a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1999a8:
    // 0x1999a8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1999a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1999ac:
    // 0x1999ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1999b0:
    // 0x1999b0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1999b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1999b4:
    // 0x1999b4: 0x10000086  b           . + 4 + (0x86 << 2)
label_1999b8:
    if (ctx->pc == 0x1999B8u) {
        ctx->pc = 0x1999BCu;
        goto label_1999bc;
    }
    ctx->pc = 0x1999B4u;
    {
        const bool branch_taken_0x1999b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1999b4) {
            ctx->pc = 0x199BD0u;
            goto label_199bd0;
        }
    }
    ctx->pc = 0x1999BCu;
label_1999bc:
    // 0x1999bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1999bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1999c0:
    // 0x1999c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1999c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1999c4:
    // 0x1999c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1999c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1999c8:
    // 0x1999c8: 0x24062826  addiu       $a2, $zero, 0x2826
    ctx->pc = 0x1999c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10278));
label_1999cc:
    // 0x1999cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1999ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1999d0:
    // 0x1999d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1999d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1999d4:
    // 0x1999d4: 0xc0965d0  jal         func_259740
label_1999d8:
    if (ctx->pc == 0x1999D8u) {
        ctx->pc = 0x1999DCu;
        goto label_1999dc;
    }
    ctx->pc = 0x1999D4u;
    SET_GPR_U32(ctx, 31, 0x1999DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1999D4u, 0x1999DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999DCu;
label_1999dc:
    // 0x1999dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1999dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1999e0:
    // 0x1999e0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1999e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1999e4:
    // 0x1999e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1999e8:
    // 0x1999e8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1999e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1999ec:
    // 0x1999ec: 0x10000078  b           . + 4 + (0x78 << 2)
label_1999f0:
    if (ctx->pc == 0x1999F0u) {
        ctx->pc = 0x1999F4u;
        goto label_1999f4;
    }
    ctx->pc = 0x1999ECu;
    {
        const bool branch_taken_0x1999ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1999ec) {
            ctx->pc = 0x199BD0u;
            goto label_199bd0;
        }
    }
    ctx->pc = 0x1999F4u;
label_1999f4:
    // 0x1999f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1999f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1999f8:
    // 0x1999f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1999f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1999fc:
    // 0x1999fc: 0xc096b40  jal         func_25AD00
label_199a00:
    if (ctx->pc == 0x199A00u) {
        ctx->pc = 0x199A04u;
        goto label_199a04;
    }
    ctx->pc = 0x1999FCu;
    SET_GPR_U32(ctx, 31, 0x199A04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1999FCu, 0x199A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A04u;
label_199a04:
    // 0x199a04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a08:
    // 0x199a08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a0c:
    // 0x199a0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a10:
    // 0x199a10: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x199a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_199a14:
    // 0x199a14: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x199a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_199a18:
    // 0x199a18: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x199a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199a1c:
    // 0x199a1c: 0xc040ed8  jal         func_103B60
label_199a20:
    if (ctx->pc == 0x199A20u) {
        ctx->pc = 0x199A24u;
        goto label_199a24;
    }
    ctx->pc = 0x199A1Cu;
    SET_GPR_U32(ctx, 31, 0x199A24u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x199A24u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x199A24u) { return; }
    ctx->pc = 0x199A24u;
label_199a24:
    // 0x199a24: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a28:
    // 0x199a28: 0xc05cd10  jal         func_173440
label_199a2c:
    if (ctx->pc == 0x199A2Cu) {
        ctx->pc = 0x199A30u;
        goto label_199a30;
    }
    ctx->pc = 0x199A28u;
    SET_GPR_U32(ctx, 31, 0x199A30u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x199A28u, 0x199A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A30u;
label_199a30:
    // 0x199a30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a34:
    // 0x199a34: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199a38:
    // 0x199a38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a3c:
    // 0x199a3c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199a40:
    // 0x199a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_199a44:
    // 0x199a44: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_199a48:
    // 0x199a48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a4c:
    // 0x199a4c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199a50:
    // 0x199a50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a54:
    // 0x199a54: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x199a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199a58:
    // 0x199a58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_199a5c:
    // 0x199a5c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x199a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_199a60:
    // 0x199a60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a64:
    // 0x199a64: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199a68:
    // 0x199a68: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_199a6c:
    // 0x199a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199a70:
    // 0x199a70: 0x0  nop
    ctx->pc = 0x199a70u;
    // NOP
label_199a74:
    // 0x199a74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199a78:
    // 0x199a78: 0x0  nop
    ctx->pc = 0x199a78u;
    // NOP
label_199a7c:
    // 0x199a7c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_199a80:
    if (ctx->pc == 0x199A80u) {
        ctx->pc = 0x199A84u;
        goto label_199a84;
    }
    ctx->pc = 0x199A7Cu;
    {
        const bool branch_taken_0x199a7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199a7c) {
            ctx->pc = 0x199AA4u;
            goto label_199aa4;
        }
    }
    ctx->pc = 0x199A84u;
label_199a84:
    // 0x199a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199a88:
    // 0x199a88: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x199a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199a8c:
    // 0x199a8c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_199a90:
    // 0x199a90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x199a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_199a94:
    // 0x199a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199a98:
    // 0x199a98: 0x0  nop
    ctx->pc = 0x199a98u;
    // NOP
label_199a9c:
    // 0x199a9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_199aa0:
    // 0x199aa0: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x199aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_199aa4:
    // 0x199aa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199aa8:
    // 0x199aa8: 0x904209de  lbu         $v0, 0x9DE($v0)
    ctx->pc = 0x199aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2526)));
label_199aac:
    // 0x199aac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x199aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_199ab0:
    // 0x199ab0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x199ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_199ab4:
    // 0x199ab4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_199ab8:
    if (ctx->pc == 0x199AB8u) {
        ctx->pc = 0x199ABCu;
        goto label_199abc;
    }
    ctx->pc = 0x199AB4u;
    {
        const bool branch_taken_0x199ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ab4) {
            ctx->pc = 0x199B18u;
            goto label_199b18;
        }
    }
    ctx->pc = 0x199ABCu;
label_199abc:
    // 0x199abc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199ac0:
    // 0x199ac0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199ac4:
    // 0x199ac4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_199ac8:
    // 0x199ac8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x199ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_199acc:
    // 0x199acc: 0xc05cf7c  jal         func_173DF0
label_199ad0:
    if (ctx->pc == 0x199AD0u) {
        ctx->pc = 0x199AD4u;
        goto label_199ad4;
    }
    ctx->pc = 0x199ACCu;
    SET_GPR_U32(ctx, 31, 0x199AD4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x199ACCu, 0x199AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AD4u;
label_199ad4:
    // 0x199ad4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x199ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_199ad8:
    // 0x199ad8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199adc:
    // 0x199adc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_199ae0:
    // 0x199ae0: 0xc05cec4  jal         func_173B10
label_199ae4:
    if (ctx->pc == 0x199AE4u) {
        ctx->pc = 0x199AE8u;
        goto label_199ae8;
    }
    ctx->pc = 0x199AE0u;
    SET_GPR_U32(ctx, 31, 0x199AE8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x199AE0u, 0x199AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AE8u;
label_199ae8:
    // 0x199ae8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199aec:
    // 0x199aec: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x199aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199af0:
    // 0x199af0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199af4:
    // 0x199af4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199af8:
    // 0x199af8: 0x0  nop
    ctx->pc = 0x199af8u;
    // NOP
label_199afc:
    // 0x199afc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_199b00:
    if (ctx->pc == 0x199B00u) {
        ctx->pc = 0x199B04u;
        goto label_199b04;
    }
    ctx->pc = 0x199AFCu;
    {
        const bool branch_taken_0x199afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199afc) {
            ctx->pc = 0x199B3Cu;
            goto label_199b3c;
        }
    }
    ctx->pc = 0x199B04u;
label_199b04:
    // 0x199b04: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199b08:
    // 0x199b08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b0c:
    // 0x199b0c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_199b10:
    // 0x199b10: 0x1000000a  b           . + 4 + (0xA << 2)
label_199b14:
    if (ctx->pc == 0x199B14u) {
        ctx->pc = 0x199B18u;
        goto label_199b18;
    }
    ctx->pc = 0x199B10u;
    {
        const bool branch_taken_0x199b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b10) {
            ctx->pc = 0x199B3Cu;
            goto label_199b3c;
        }
    }
    ctx->pc = 0x199B18u;
label_199b18:
    // 0x199b18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b1c:
    // 0x199b1c: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x199b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
label_199b20:
    // 0x199b20: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_199b24:
    // 0x199b24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x199b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_199b28:
    // 0x199b28: 0xac821344  sw          $v0, 0x1344($a0)
    ctx->pc = 0x199b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 2));
label_199b2c:
    // 0x199b2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b30:
    // 0x199b30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x199b30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_199b34:
    // 0x199b34: 0xc05cec4  jal         func_173B10
label_199b38:
    if (ctx->pc == 0x199B38u) {
        ctx->pc = 0x199B3Cu;
        goto label_199b3c;
    }
    ctx->pc = 0x199B34u;
    SET_GPR_U32(ctx, 31, 0x199B3Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x199B34u, 0x199B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B3Cu;
label_199b3c:
    // 0x199b3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b40:
    // 0x199b40: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x199b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b44:
    // 0x199b44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b48:
    // 0x199b48: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x199b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
label_199b4c:
    // 0x199b4c: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x199b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_199b50:
    // 0x199b50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199b54:
    // 0x199b54: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x199b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_199b58:
    // 0x199b58: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x199b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_199b5c:
    // 0x199b5c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x199b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
label_199b60:
    // 0x199b60: 0xc05c848  jal         func_172120
label_199b64:
    if (ctx->pc == 0x199B64u) {
        ctx->pc = 0x199B68u;
        goto label_199b68;
    }
    ctx->pc = 0x199B60u;
    SET_GPR_U32(ctx, 31, 0x199B68u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x199B60u, 0x199B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B68u;
label_199b68:
    // 0x199b68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b6c:
    // 0x199b6c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199b70:
    // 0x199b70: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199b70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_199b74:
    // 0x199b74: 0xc058fec  jal         func_163FB0
label_199b78:
    if (ctx->pc == 0x199B78u) {
        ctx->pc = 0x199B7Cu;
        goto label_199b7c;
    }
    ctx->pc = 0x199B74u;
    SET_GPR_U32(ctx, 31, 0x199B7Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x199B74u, 0x199B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B7Cu;
label_199b7c:
    // 0x199b7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b80:
    // 0x199b80: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_199b84:
    // 0x199b84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b88:
    // 0x199b88: 0xc0974c8  jal         func_25D320
label_199b8c:
    if (ctx->pc == 0x199B8Cu) {
        ctx->pc = 0x199B90u;
        goto label_199b90;
    }
    ctx->pc = 0x199B88u;
    SET_GPR_U32(ctx, 31, 0x199B90u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x199B88u, 0x199B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B90u;
label_199b90:
    // 0x199b90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199b94:
    // 0x199b94: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x199b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_199b98:
    // 0x199b98: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_199b9c:
    if (ctx->pc == 0x199B9Cu) {
        ctx->pc = 0x199BA0u;
        goto label_199ba0;
    }
    ctx->pc = 0x199B98u;
    {
        const bool branch_taken_0x199b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b98) {
            ctx->pc = 0x199BD0u;
            goto label_199bd0;
        }
    }
    ctx->pc = 0x199BA0u;
label_199ba0:
    // 0x199ba0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x199ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199ba4:
    // 0x199ba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199ba8:
    // 0x199ba8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x199ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_199bac:
    // 0x199bac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x199bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199bb0:
    // 0x199bb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199bb4:
    // 0x199bb4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x199bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_199bb8:
    // 0x199bb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199bbc:
    // 0x199bbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x199bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_199bc0:
    // 0x199bc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199bc4:
    // 0x199bc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x199bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_199bc8:
    // 0x199bc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199bcc:
    // 0x199bcc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x199bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_199bd0:
    // 0x199bd0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x199bd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_199bd4:
    // 0x199bd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x199bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_199bd8:
    // 0x199bd8: 0x3e00008  jr          $ra
label_199bdc:
    if (ctx->pc == 0x199BDCu) {
        ctx->pc = 0x199BE0u;
        goto label_fallthrough_0x199bd8;
    }
    ctx->pc = 0x199BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199bd8:
    ctx->pc = 0x199BE0u;
}
