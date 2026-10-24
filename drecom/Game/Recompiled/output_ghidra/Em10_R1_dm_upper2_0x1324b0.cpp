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

// Function: Em10_R1_dm_upper2
// Address: 0x1324b0 - 0x132b8c
void Em10_R1_dm_upper2_0x1324b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_dm_upper2_0x1324b0");
#endif

    switch (ctx->pc) {
        case 0x1324b0u: goto label_1324b0;
        case 0x1324b4u: goto label_1324b4;
        case 0x1324b8u: goto label_1324b8;
        case 0x1324bcu: goto label_1324bc;
        case 0x1324c0u: goto label_1324c0;
        case 0x1324c4u: goto label_1324c4;
        case 0x1324c8u: goto label_1324c8;
        case 0x1324ccu: goto label_1324cc;
        case 0x1324d0u: goto label_1324d0;
        case 0x1324d4u: goto label_1324d4;
        case 0x1324d8u: goto label_1324d8;
        case 0x1324dcu: goto label_1324dc;
        case 0x1324e0u: goto label_1324e0;
        case 0x1324e4u: goto label_1324e4;
        case 0x1324e8u: goto label_1324e8;
        case 0x1324ecu: goto label_1324ec;
        case 0x1324f0u: goto label_1324f0;
        case 0x1324f4u: goto label_1324f4;
        case 0x1324f8u: goto label_1324f8;
        case 0x1324fcu: goto label_1324fc;
        case 0x132500u: goto label_132500;
        case 0x132504u: goto label_132504;
        case 0x132508u: goto label_132508;
        case 0x13250cu: goto label_13250c;
        case 0x132510u: goto label_132510;
        case 0x132514u: goto label_132514;
        case 0x132518u: goto label_132518;
        case 0x13251cu: goto label_13251c;
        case 0x132520u: goto label_132520;
        case 0x132524u: goto label_132524;
        case 0x132528u: goto label_132528;
        case 0x13252cu: goto label_13252c;
        case 0x132530u: goto label_132530;
        case 0x132534u: goto label_132534;
        case 0x132538u: goto label_132538;
        case 0x13253cu: goto label_13253c;
        case 0x132540u: goto label_132540;
        case 0x132544u: goto label_132544;
        case 0x132548u: goto label_132548;
        case 0x13254cu: goto label_13254c;
        case 0x132550u: goto label_132550;
        case 0x132554u: goto label_132554;
        case 0x132558u: goto label_132558;
        case 0x13255cu: goto label_13255c;
        case 0x132560u: goto label_132560;
        case 0x132564u: goto label_132564;
        case 0x132568u: goto label_132568;
        case 0x13256cu: goto label_13256c;
        case 0x132570u: goto label_132570;
        case 0x132574u: goto label_132574;
        case 0x132578u: goto label_132578;
        case 0x13257cu: goto label_13257c;
        case 0x132580u: goto label_132580;
        case 0x132584u: goto label_132584;
        case 0x132588u: goto label_132588;
        case 0x13258cu: goto label_13258c;
        case 0x132590u: goto label_132590;
        case 0x132594u: goto label_132594;
        case 0x132598u: goto label_132598;
        case 0x13259cu: goto label_13259c;
        case 0x1325a0u: goto label_1325a0;
        case 0x1325a4u: goto label_1325a4;
        case 0x1325a8u: goto label_1325a8;
        case 0x1325acu: goto label_1325ac;
        case 0x1325b0u: goto label_1325b0;
        case 0x1325b4u: goto label_1325b4;
        case 0x1325b8u: goto label_1325b8;
        case 0x1325bcu: goto label_1325bc;
        case 0x1325c0u: goto label_1325c0;
        case 0x1325c4u: goto label_1325c4;
        case 0x1325c8u: goto label_1325c8;
        case 0x1325ccu: goto label_1325cc;
        case 0x1325d0u: goto label_1325d0;
        case 0x1325d4u: goto label_1325d4;
        case 0x1325d8u: goto label_1325d8;
        case 0x1325dcu: goto label_1325dc;
        case 0x1325e0u: goto label_1325e0;
        case 0x1325e4u: goto label_1325e4;
        case 0x1325e8u: goto label_1325e8;
        case 0x1325ecu: goto label_1325ec;
        case 0x1325f0u: goto label_1325f0;
        case 0x1325f4u: goto label_1325f4;
        case 0x1325f8u: goto label_1325f8;
        case 0x1325fcu: goto label_1325fc;
        case 0x132600u: goto label_132600;
        case 0x132604u: goto label_132604;
        case 0x132608u: goto label_132608;
        case 0x13260cu: goto label_13260c;
        case 0x132610u: goto label_132610;
        case 0x132614u: goto label_132614;
        case 0x132618u: goto label_132618;
        case 0x13261cu: goto label_13261c;
        case 0x132620u: goto label_132620;
        case 0x132624u: goto label_132624;
        case 0x132628u: goto label_132628;
        case 0x13262cu: goto label_13262c;
        case 0x132630u: goto label_132630;
        case 0x132634u: goto label_132634;
        case 0x132638u: goto label_132638;
        case 0x13263cu: goto label_13263c;
        case 0x132640u: goto label_132640;
        case 0x132644u: goto label_132644;
        case 0x132648u: goto label_132648;
        case 0x13264cu: goto label_13264c;
        case 0x132650u: goto label_132650;
        case 0x132654u: goto label_132654;
        case 0x132658u: goto label_132658;
        case 0x13265cu: goto label_13265c;
        case 0x132660u: goto label_132660;
        case 0x132664u: goto label_132664;
        case 0x132668u: goto label_132668;
        case 0x13266cu: goto label_13266c;
        case 0x132670u: goto label_132670;
        case 0x132674u: goto label_132674;
        case 0x132678u: goto label_132678;
        case 0x13267cu: goto label_13267c;
        case 0x132680u: goto label_132680;
        case 0x132684u: goto label_132684;
        case 0x132688u: goto label_132688;
        case 0x13268cu: goto label_13268c;
        case 0x132690u: goto label_132690;
        case 0x132694u: goto label_132694;
        case 0x132698u: goto label_132698;
        case 0x13269cu: goto label_13269c;
        case 0x1326a0u: goto label_1326a0;
        case 0x1326a4u: goto label_1326a4;
        case 0x1326a8u: goto label_1326a8;
        case 0x1326acu: goto label_1326ac;
        case 0x1326b0u: goto label_1326b0;
        case 0x1326b4u: goto label_1326b4;
        case 0x1326b8u: goto label_1326b8;
        case 0x1326bcu: goto label_1326bc;
        case 0x1326c0u: goto label_1326c0;
        case 0x1326c4u: goto label_1326c4;
        case 0x1326c8u: goto label_1326c8;
        case 0x1326ccu: goto label_1326cc;
        case 0x1326d0u: goto label_1326d0;
        case 0x1326d4u: goto label_1326d4;
        case 0x1326d8u: goto label_1326d8;
        case 0x1326dcu: goto label_1326dc;
        case 0x1326e0u: goto label_1326e0;
        case 0x1326e4u: goto label_1326e4;
        case 0x1326e8u: goto label_1326e8;
        case 0x1326ecu: goto label_1326ec;
        case 0x1326f0u: goto label_1326f0;
        case 0x1326f4u: goto label_1326f4;
        case 0x1326f8u: goto label_1326f8;
        case 0x1326fcu: goto label_1326fc;
        case 0x132700u: goto label_132700;
        case 0x132704u: goto label_132704;
        case 0x132708u: goto label_132708;
        case 0x13270cu: goto label_13270c;
        case 0x132710u: goto label_132710;
        case 0x132714u: goto label_132714;
        case 0x132718u: goto label_132718;
        case 0x13271cu: goto label_13271c;
        case 0x132720u: goto label_132720;
        case 0x132724u: goto label_132724;
        case 0x132728u: goto label_132728;
        case 0x13272cu: goto label_13272c;
        case 0x132730u: goto label_132730;
        case 0x132734u: goto label_132734;
        case 0x132738u: goto label_132738;
        case 0x13273cu: goto label_13273c;
        case 0x132740u: goto label_132740;
        case 0x132744u: goto label_132744;
        case 0x132748u: goto label_132748;
        case 0x13274cu: goto label_13274c;
        case 0x132750u: goto label_132750;
        case 0x132754u: goto label_132754;
        case 0x132758u: goto label_132758;
        case 0x13275cu: goto label_13275c;
        case 0x132760u: goto label_132760;
        case 0x132764u: goto label_132764;
        case 0x132768u: goto label_132768;
        case 0x13276cu: goto label_13276c;
        case 0x132770u: goto label_132770;
        case 0x132774u: goto label_132774;
        case 0x132778u: goto label_132778;
        case 0x13277cu: goto label_13277c;
        case 0x132780u: goto label_132780;
        case 0x132784u: goto label_132784;
        case 0x132788u: goto label_132788;
        case 0x13278cu: goto label_13278c;
        case 0x132790u: goto label_132790;
        case 0x132794u: goto label_132794;
        case 0x132798u: goto label_132798;
        case 0x13279cu: goto label_13279c;
        case 0x1327a0u: goto label_1327a0;
        case 0x1327a4u: goto label_1327a4;
        case 0x1327a8u: goto label_1327a8;
        case 0x1327acu: goto label_1327ac;
        case 0x1327b0u: goto label_1327b0;
        case 0x1327b4u: goto label_1327b4;
        case 0x1327b8u: goto label_1327b8;
        case 0x1327bcu: goto label_1327bc;
        case 0x1327c0u: goto label_1327c0;
        case 0x1327c4u: goto label_1327c4;
        case 0x1327c8u: goto label_1327c8;
        case 0x1327ccu: goto label_1327cc;
        case 0x1327d0u: goto label_1327d0;
        case 0x1327d4u: goto label_1327d4;
        case 0x1327d8u: goto label_1327d8;
        case 0x1327dcu: goto label_1327dc;
        case 0x1327e0u: goto label_1327e0;
        case 0x1327e4u: goto label_1327e4;
        case 0x1327e8u: goto label_1327e8;
        case 0x1327ecu: goto label_1327ec;
        case 0x1327f0u: goto label_1327f0;
        case 0x1327f4u: goto label_1327f4;
        case 0x1327f8u: goto label_1327f8;
        case 0x1327fcu: goto label_1327fc;
        case 0x132800u: goto label_132800;
        case 0x132804u: goto label_132804;
        case 0x132808u: goto label_132808;
        case 0x13280cu: goto label_13280c;
        case 0x132810u: goto label_132810;
        case 0x132814u: goto label_132814;
        case 0x132818u: goto label_132818;
        case 0x13281cu: goto label_13281c;
        case 0x132820u: goto label_132820;
        case 0x132824u: goto label_132824;
        case 0x132828u: goto label_132828;
        case 0x13282cu: goto label_13282c;
        case 0x132830u: goto label_132830;
        case 0x132834u: goto label_132834;
        case 0x132838u: goto label_132838;
        case 0x13283cu: goto label_13283c;
        case 0x132840u: goto label_132840;
        case 0x132844u: goto label_132844;
        case 0x132848u: goto label_132848;
        case 0x13284cu: goto label_13284c;
        case 0x132850u: goto label_132850;
        case 0x132854u: goto label_132854;
        case 0x132858u: goto label_132858;
        case 0x13285cu: goto label_13285c;
        case 0x132860u: goto label_132860;
        case 0x132864u: goto label_132864;
        case 0x132868u: goto label_132868;
        case 0x13286cu: goto label_13286c;
        case 0x132870u: goto label_132870;
        case 0x132874u: goto label_132874;
        case 0x132878u: goto label_132878;
        case 0x13287cu: goto label_13287c;
        case 0x132880u: goto label_132880;
        case 0x132884u: goto label_132884;
        case 0x132888u: goto label_132888;
        case 0x13288cu: goto label_13288c;
        case 0x132890u: goto label_132890;
        case 0x132894u: goto label_132894;
        case 0x132898u: goto label_132898;
        case 0x13289cu: goto label_13289c;
        case 0x1328a0u: goto label_1328a0;
        case 0x1328a4u: goto label_1328a4;
        case 0x1328a8u: goto label_1328a8;
        case 0x1328acu: goto label_1328ac;
        case 0x1328b0u: goto label_1328b0;
        case 0x1328b4u: goto label_1328b4;
        case 0x1328b8u: goto label_1328b8;
        case 0x1328bcu: goto label_1328bc;
        case 0x1328c0u: goto label_1328c0;
        case 0x1328c4u: goto label_1328c4;
        case 0x1328c8u: goto label_1328c8;
        case 0x1328ccu: goto label_1328cc;
        case 0x1328d0u: goto label_1328d0;
        case 0x1328d4u: goto label_1328d4;
        case 0x1328d8u: goto label_1328d8;
        case 0x1328dcu: goto label_1328dc;
        case 0x1328e0u: goto label_1328e0;
        case 0x1328e4u: goto label_1328e4;
        case 0x1328e8u: goto label_1328e8;
        case 0x1328ecu: goto label_1328ec;
        case 0x1328f0u: goto label_1328f0;
        case 0x1328f4u: goto label_1328f4;
        case 0x1328f8u: goto label_1328f8;
        case 0x1328fcu: goto label_1328fc;
        case 0x132900u: goto label_132900;
        case 0x132904u: goto label_132904;
        case 0x132908u: goto label_132908;
        case 0x13290cu: goto label_13290c;
        case 0x132910u: goto label_132910;
        case 0x132914u: goto label_132914;
        case 0x132918u: goto label_132918;
        case 0x13291cu: goto label_13291c;
        case 0x132920u: goto label_132920;
        case 0x132924u: goto label_132924;
        case 0x132928u: goto label_132928;
        case 0x13292cu: goto label_13292c;
        case 0x132930u: goto label_132930;
        case 0x132934u: goto label_132934;
        case 0x132938u: goto label_132938;
        case 0x13293cu: goto label_13293c;
        case 0x132940u: goto label_132940;
        case 0x132944u: goto label_132944;
        case 0x132948u: goto label_132948;
        case 0x13294cu: goto label_13294c;
        case 0x132950u: goto label_132950;
        case 0x132954u: goto label_132954;
        case 0x132958u: goto label_132958;
        case 0x13295cu: goto label_13295c;
        case 0x132960u: goto label_132960;
        case 0x132964u: goto label_132964;
        case 0x132968u: goto label_132968;
        case 0x13296cu: goto label_13296c;
        case 0x132970u: goto label_132970;
        case 0x132974u: goto label_132974;
        case 0x132978u: goto label_132978;
        case 0x13297cu: goto label_13297c;
        case 0x132980u: goto label_132980;
        case 0x132984u: goto label_132984;
        case 0x132988u: goto label_132988;
        case 0x13298cu: goto label_13298c;
        case 0x132990u: goto label_132990;
        case 0x132994u: goto label_132994;
        case 0x132998u: goto label_132998;
        case 0x13299cu: goto label_13299c;
        case 0x1329a0u: goto label_1329a0;
        case 0x1329a4u: goto label_1329a4;
        case 0x1329a8u: goto label_1329a8;
        case 0x1329acu: goto label_1329ac;
        case 0x1329b0u: goto label_1329b0;
        case 0x1329b4u: goto label_1329b4;
        case 0x1329b8u: goto label_1329b8;
        case 0x1329bcu: goto label_1329bc;
        case 0x1329c0u: goto label_1329c0;
        case 0x1329c4u: goto label_1329c4;
        case 0x1329c8u: goto label_1329c8;
        case 0x1329ccu: goto label_1329cc;
        case 0x1329d0u: goto label_1329d0;
        case 0x1329d4u: goto label_1329d4;
        case 0x1329d8u: goto label_1329d8;
        case 0x1329dcu: goto label_1329dc;
        case 0x1329e0u: goto label_1329e0;
        case 0x1329e4u: goto label_1329e4;
        case 0x1329e8u: goto label_1329e8;
        case 0x1329ecu: goto label_1329ec;
        case 0x1329f0u: goto label_1329f0;
        case 0x1329f4u: goto label_1329f4;
        case 0x1329f8u: goto label_1329f8;
        case 0x1329fcu: goto label_1329fc;
        case 0x132a00u: goto label_132a00;
        case 0x132a04u: goto label_132a04;
        case 0x132a08u: goto label_132a08;
        case 0x132a0cu: goto label_132a0c;
        case 0x132a10u: goto label_132a10;
        case 0x132a14u: goto label_132a14;
        case 0x132a18u: goto label_132a18;
        case 0x132a1cu: goto label_132a1c;
        case 0x132a20u: goto label_132a20;
        case 0x132a24u: goto label_132a24;
        case 0x132a28u: goto label_132a28;
        case 0x132a2cu: goto label_132a2c;
        case 0x132a30u: goto label_132a30;
        case 0x132a34u: goto label_132a34;
        case 0x132a38u: goto label_132a38;
        case 0x132a3cu: goto label_132a3c;
        case 0x132a40u: goto label_132a40;
        case 0x132a44u: goto label_132a44;
        case 0x132a48u: goto label_132a48;
        case 0x132a4cu: goto label_132a4c;
        case 0x132a50u: goto label_132a50;
        case 0x132a54u: goto label_132a54;
        case 0x132a58u: goto label_132a58;
        case 0x132a5cu: goto label_132a5c;
        case 0x132a60u: goto label_132a60;
        case 0x132a64u: goto label_132a64;
        case 0x132a68u: goto label_132a68;
        case 0x132a6cu: goto label_132a6c;
        case 0x132a70u: goto label_132a70;
        case 0x132a74u: goto label_132a74;
        case 0x132a78u: goto label_132a78;
        case 0x132a7cu: goto label_132a7c;
        case 0x132a80u: goto label_132a80;
        case 0x132a84u: goto label_132a84;
        case 0x132a88u: goto label_132a88;
        case 0x132a8cu: goto label_132a8c;
        case 0x132a90u: goto label_132a90;
        case 0x132a94u: goto label_132a94;
        case 0x132a98u: goto label_132a98;
        case 0x132a9cu: goto label_132a9c;
        case 0x132aa0u: goto label_132aa0;
        case 0x132aa4u: goto label_132aa4;
        case 0x132aa8u: goto label_132aa8;
        case 0x132aacu: goto label_132aac;
        case 0x132ab0u: goto label_132ab0;
        case 0x132ab4u: goto label_132ab4;
        case 0x132ab8u: goto label_132ab8;
        case 0x132abcu: goto label_132abc;
        case 0x132ac0u: goto label_132ac0;
        case 0x132ac4u: goto label_132ac4;
        case 0x132ac8u: goto label_132ac8;
        case 0x132accu: goto label_132acc;
        case 0x132ad0u: goto label_132ad0;
        case 0x132ad4u: goto label_132ad4;
        case 0x132ad8u: goto label_132ad8;
        case 0x132adcu: goto label_132adc;
        case 0x132ae0u: goto label_132ae0;
        case 0x132ae4u: goto label_132ae4;
        case 0x132ae8u: goto label_132ae8;
        case 0x132aecu: goto label_132aec;
        case 0x132af0u: goto label_132af0;
        case 0x132af4u: goto label_132af4;
        case 0x132af8u: goto label_132af8;
        case 0x132afcu: goto label_132afc;
        case 0x132b00u: goto label_132b00;
        case 0x132b04u: goto label_132b04;
        case 0x132b08u: goto label_132b08;
        case 0x132b0cu: goto label_132b0c;
        case 0x132b10u: goto label_132b10;
        case 0x132b14u: goto label_132b14;
        case 0x132b18u: goto label_132b18;
        case 0x132b1cu: goto label_132b1c;
        case 0x132b20u: goto label_132b20;
        case 0x132b24u: goto label_132b24;
        case 0x132b28u: goto label_132b28;
        case 0x132b2cu: goto label_132b2c;
        case 0x132b30u: goto label_132b30;
        case 0x132b34u: goto label_132b34;
        case 0x132b38u: goto label_132b38;
        case 0x132b3cu: goto label_132b3c;
        case 0x132b40u: goto label_132b40;
        case 0x132b44u: goto label_132b44;
        case 0x132b48u: goto label_132b48;
        case 0x132b4cu: goto label_132b4c;
        case 0x132b50u: goto label_132b50;
        case 0x132b54u: goto label_132b54;
        case 0x132b58u: goto label_132b58;
        case 0x132b5cu: goto label_132b5c;
        case 0x132b60u: goto label_132b60;
        case 0x132b64u: goto label_132b64;
        case 0x132b68u: goto label_132b68;
        case 0x132b6cu: goto label_132b6c;
        case 0x132b70u: goto label_132b70;
        case 0x132b74u: goto label_132b74;
        case 0x132b78u: goto label_132b78;
        case 0x132b7cu: goto label_132b7c;
        case 0x132b80u: goto label_132b80;
        case 0x132b84u: goto label_132b84;
        case 0x132b88u: goto label_132b88;
        default: break;
    }

    ctx->pc = 0x1324b0u;

label_1324b0:
    // 0x1324b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1324b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1324b4:
    // 0x1324b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1324b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1324b8:
    // 0x1324b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1324b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1324bc:
    // 0x1324bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1324bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1324c0:
    // 0x1324c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1324c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1324c4:
    // 0x1324c4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1324c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1324c8:
    // 0x1324c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1324c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1324cc:
    // 0x1324cc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1324ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1324d0:
    // 0x1324d0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1324d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1324d4:
    // 0x1324d4: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x1324d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1324d8:
    // 0x1324d8: 0x102001a7  beqz        $at, . + 4 + (0x1A7 << 2)
label_1324dc:
    if (ctx->pc == 0x1324DCu) {
        ctx->pc = 0x1324E0u;
        goto label_1324e0;
    }
    ctx->pc = 0x1324D8u;
    {
        const bool branch_taken_0x1324d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1324d8) {
            ctx->pc = 0x132B78u;
            goto label_132b78;
        }
    }
    ctx->pc = 0x1324E0u;
label_1324e0:
    // 0x1324e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1324e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1324e4:
    // 0x1324e4: 0x2464e560  addiu       $a0, $v1, -0x1AA0
    ctx->pc = 0x1324e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960480));
label_1324e8:
    // 0x1324e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1324e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1324ec:
    // 0x1324ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1324ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1324f0:
    // 0x1324f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1324f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1324f4:
    // 0x1324f4: 0x600008  jr          $v1
label_1324f8:
    if (ctx->pc == 0x1324F8u) {
        ctx->pc = 0x1324FCu;
        goto label_1324fc;
    }
    ctx->pc = 0x1324F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1324F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1324FCu;
label_1324fc:
    // 0x1324fc: 0xc067694  jal         func_19DA50
label_132500:
    if (ctx->pc == 0x132500u) {
        ctx->pc = 0x132504u;
        goto label_132504;
    }
    ctx->pc = 0x1324FCu;
    SET_GPR_U32(ctx, 31, 0x132504u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1324FCu, 0x132504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132504u;
label_132504:
    // 0x132504: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x132504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_132508:
    // 0x132508: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x132508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_13250c:
    // 0x13250c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_132510:
    // 0x132510: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_132514:
    if (ctx->pc == 0x132514u) {
        ctx->pc = 0x132518u;
        goto label_132518;
    }
    ctx->pc = 0x132510u;
    {
        const bool branch_taken_0x132510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132510) {
            ctx->pc = 0x132594u;
            goto label_132594;
        }
    }
    ctx->pc = 0x132518u;
label_132518:
    // 0x132518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13251c:
    // 0x13251c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_132520:
    if (ctx->pc == 0x132520u) {
        ctx->pc = 0x132524u;
        goto label_132524;
    }
    ctx->pc = 0x13251Cu;
    {
        const bool branch_taken_0x13251c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13251c) {
            ctx->pc = 0x132564u;
            goto label_132564;
        }
    }
    ctx->pc = 0x132524u;
label_132524:
    // 0x132524: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_132528:
    if (ctx->pc == 0x132528u) {
        ctx->pc = 0x13252Cu;
        goto label_13252c;
    }
    ctx->pc = 0x132524u;
    {
        const bool branch_taken_0x132524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132524) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x13252Cu;
label_13252c:
    // 0x13252c: 0x10000001  b           . + 4 + (0x1 << 2)
label_132530:
    if (ctx->pc == 0x132530u) {
        ctx->pc = 0x132534u;
        goto label_132534;
    }
    ctx->pc = 0x13252Cu;
    {
        const bool branch_taken_0x13252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13252c) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x132534u;
label_132534:
    // 0x132534: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132538:
    // 0x132538: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x132538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_13253c:
    // 0x13253c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13253cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_132540:
    // 0x132540: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x132540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_132544:
    // 0x132544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x132544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_132548:
    // 0x132548: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x132548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_13254c:
    // 0x13254c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x13254cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_132550:
    // 0x132550: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x132550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132554:
    // 0x132554: 0xc067b18  jal         func_19EC60
label_132558:
    if (ctx->pc == 0x132558u) {
        ctx->pc = 0x13255Cu;
        goto label_13255c;
    }
    ctx->pc = 0x132554u;
    SET_GPR_U32(ctx, 31, 0x13255Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x132554u, 0x13255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13255Cu;
label_13255c:
    // 0x13255c: 0x10000017  b           . + 4 + (0x17 << 2)
label_132560:
    if (ctx->pc == 0x132560u) {
        ctx->pc = 0x132564u;
        goto label_132564;
    }
    ctx->pc = 0x13255Cu;
    {
        const bool branch_taken_0x13255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13255c) {
            ctx->pc = 0x1325BCu;
            goto label_1325bc;
        }
    }
    ctx->pc = 0x132564u;
label_132564:
    // 0x132564: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132568:
    // 0x132568: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x132568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_13256c:
    // 0x13256c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_132570:
    // 0x132570: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x132570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_132574:
    // 0x132574: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x132574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_132578:
    // 0x132578: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x132578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
label_13257c:
    // 0x13257c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x13257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_132580:
    // 0x132580: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x132580u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132584:
    // 0x132584: 0xc067b18  jal         func_19EC60
label_132588:
    if (ctx->pc == 0x132588u) {
        ctx->pc = 0x13258Cu;
        goto label_13258c;
    }
    ctx->pc = 0x132584u;
    SET_GPR_U32(ctx, 31, 0x13258Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x132584u, 0x13258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13258Cu;
label_13258c:
    // 0x13258c: 0x1000000b  b           . + 4 + (0xB << 2)
label_132590:
    if (ctx->pc == 0x132590u) {
        ctx->pc = 0x132594u;
        goto label_132594;
    }
    ctx->pc = 0x13258Cu;
    {
        const bool branch_taken_0x13258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13258c) {
            ctx->pc = 0x1325BCu;
            goto label_1325bc;
        }
    }
    ctx->pc = 0x132594u;
label_132594:
    // 0x132594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132598:
    // 0x132598: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x132598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_13259c:
    // 0x13259c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1325a0:
    // 0x1325a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1325a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1325a4:
    // 0x1325a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1325a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1325a8:
    // 0x1325a8: 0x24040509  addiu       $a0, $zero, 0x509
    ctx->pc = 0x1325a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
label_1325ac:
    // 0x1325ac: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1325acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1325b0:
    // 0x1325b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1325b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1325b4:
    // 0x1325b4: 0xc067b18  jal         func_19EC60
label_1325b8:
    if (ctx->pc == 0x1325B8u) {
        ctx->pc = 0x1325BCu;
        goto label_1325bc;
    }
    ctx->pc = 0x1325B4u;
    SET_GPR_U32(ctx, 31, 0x1325BCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1325B4u, 0x1325BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325BCu;
label_1325bc:
    // 0x1325bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1325bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1325c0:
    // 0x1325c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1325c4:
    // 0x1325c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1325c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1325c8:
    // 0x1325c8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1325c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1325cc:
    // 0x1325cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1325ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1325d0:
    // 0x1325d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1325d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1325d4:
    // 0x1325d4: 0xc0965d0  jal         func_259740
label_1325d8:
    if (ctx->pc == 0x1325D8u) {
        ctx->pc = 0x1325DCu;
        goto label_1325dc;
    }
    ctx->pc = 0x1325D4u;
    SET_GPR_U32(ctx, 31, 0x1325DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1325D4u, 0x1325DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325DCu;
label_1325dc:
    // 0x1325dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1325dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1325e0:
    // 0x1325e0: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1325e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1325e4:
    // 0x1325e4: 0xc0675a4  jal         func_19D690
label_1325e8:
    if (ctx->pc == 0x1325E8u) {
        ctx->pc = 0x1325ECu;
        goto label_1325ec;
    }
    ctx->pc = 0x1325E4u;
    SET_GPR_U32(ctx, 31, 0x1325ECu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1325E4u, 0x1325ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325ECu;
label_1325ec:
    // 0x1325ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1325ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1325f0:
    // 0x1325f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1325f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1325f4:
    // 0x1325f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1325f8:
    if (ctx->pc == 0x1325F8u) {
        ctx->pc = 0x1325FCu;
        goto label_1325fc;
    }
    ctx->pc = 0x1325F4u;
    {
        const bool branch_taken_0x1325f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1325f4) {
            ctx->pc = 0x132614u;
            goto label_132614;
        }
    }
    ctx->pc = 0x1325FCu;
label_1325fc:
    // 0x1325fc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1325fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_132600:
    // 0x132600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132604:
    // 0x132604: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132608:
    // 0x132608: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_13260c:
    // 0x13260c: 0x10000005  b           . + 4 + (0x5 << 2)
label_132610:
    if (ctx->pc == 0x132610u) {
        ctx->pc = 0x132614u;
        goto label_132614;
    }
    ctx->pc = 0x13260Cu;
    {
        const bool branch_taken_0x13260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13260c) {
            ctx->pc = 0x132624u;
            goto label_132624;
        }
    }
    ctx->pc = 0x132614u;
label_132614:
    // 0x132614: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x132614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_132618:
    // 0x132618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13261c:
    // 0x13261c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132620:
    // 0x132620: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_132624:
    // 0x132624: 0xc067694  jal         func_19DA50
label_132628:
    if (ctx->pc == 0x132628u) {
        ctx->pc = 0x13262Cu;
        goto label_13262c;
    }
    ctx->pc = 0x132624u;
    SET_GPR_U32(ctx, 31, 0x13262Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x132624u, 0x13262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13262Cu;
label_13262c:
    // 0x13262c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_132630:
    // 0x132630: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_132634:
    // 0x132634: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_132638:
    if (ctx->pc == 0x132638u) {
        ctx->pc = 0x13263Cu;
        goto label_13263c;
    }
    ctx->pc = 0x132634u;
    {
        const bool branch_taken_0x132634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132634) {
            ctx->pc = 0x132670u;
            goto label_132670;
        }
    }
    ctx->pc = 0x13263Cu;
label_13263c:
    // 0x13263c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132640:
    // 0x132640: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x132640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132644:
    // 0x132644: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x132644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
label_132648:
    // 0x132648: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x132648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_13264c:
    // 0x13264c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13264cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132650:
    // 0x132650: 0x0  nop
    ctx->pc = 0x132650u;
    // NOP
label_132654:
    // 0x132654: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x132654u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132658:
    // 0x132658: 0xc058fec  jal         func_163FB0
label_13265c:
    if (ctx->pc == 0x13265Cu) {
        ctx->pc = 0x132660u;
        goto label_132660;
    }
    ctx->pc = 0x132658u;
    SET_GPR_U32(ctx, 31, 0x132660u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x132658u, 0x132660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132660u;
label_132660:
    // 0x132660: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132664:
    // 0x132664: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x132664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_132668:
    // 0x132668: 0x1000000c  b           . + 4 + (0xC << 2)
label_13266c:
    if (ctx->pc == 0x13266Cu) {
        ctx->pc = 0x132670u;
        goto label_132670;
    }
    ctx->pc = 0x132668u;
    {
        const bool branch_taken_0x132668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132668) {
            ctx->pc = 0x13269Cu;
            goto label_13269c;
        }
    }
    ctx->pc = 0x132670u;
label_132670:
    // 0x132670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132674:
    // 0x132674: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x132674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132678:
    // 0x132678: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x132678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
label_13267c:
    // 0x13267c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_132680:
    // 0x132680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132684:
    // 0x132684: 0x0  nop
    ctx->pc = 0x132684u;
    // NOP
label_132688:
    // 0x132688: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x132688u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13268c:
    // 0x13268c: 0xc058fec  jal         func_163FB0
label_132690:
    if (ctx->pc == 0x132690u) {
        ctx->pc = 0x132694u;
        goto label_132694;
    }
    ctx->pc = 0x13268Cu;
    SET_GPR_U32(ctx, 31, 0x132694u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x13268Cu, 0x132694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132694u;
label_132694:
    // 0x132694: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132698:
    // 0x132698: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x132698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_13269c:
    // 0x13269c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x13269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1326a0:
    // 0x1326a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1326a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1326a4:
    // 0x1326a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1326a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1326a8:
    // 0x1326a8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1326a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1326ac:
    // 0x1326ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1326acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1326b0:
    // 0x1326b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1326b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1326b4:
    // 0x1326b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1326b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1326b8:
    // 0x1326b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1326b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1326bc:
    // 0x1326bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1326bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1326c0:
    // 0x1326c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1326c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1326c4:
    // 0x1326c4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1326c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1326c8:
    // 0x1326c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1326c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1326cc:
    // 0x1326cc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1326ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1326d0:
    // 0x1326d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1326d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1326d4:
    // 0x1326d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1326d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1326d8:
    // 0x1326d8: 0xc096b40  jal         func_25AD00
label_1326dc:
    if (ctx->pc == 0x1326DCu) {
        ctx->pc = 0x1326E0u;
        goto label_1326e0;
    }
    ctx->pc = 0x1326D8u;
    SET_GPR_U32(ctx, 31, 0x1326E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1326D8u, 0x1326E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326E0u;
label_1326e0:
    // 0x1326e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1326e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1326e4:
    // 0x1326e4: 0xc05cd10  jal         func_173440
label_1326e8:
    if (ctx->pc == 0x1326E8u) {
        ctx->pc = 0x1326ECu;
        goto label_1326ec;
    }
    ctx->pc = 0x1326E4u;
    SET_GPR_U32(ctx, 31, 0x1326ECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1326E4u, 0x1326ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326ECu;
label_1326ec:
    // 0x1326ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1326ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1326f0:
    // 0x1326f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1326f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1326f4:
    // 0x1326f4: 0xc05cec4  jal         func_173B10
label_1326f8:
    if (ctx->pc == 0x1326F8u) {
        ctx->pc = 0x1326FCu;
        goto label_1326fc;
    }
    ctx->pc = 0x1326F4u;
    SET_GPR_U32(ctx, 31, 0x1326FCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1326F4u, 0x1326FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326FCu;
label_1326fc:
    // 0x1326fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1326fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132700:
    // 0x132700: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132704:
    // 0x132704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132708:
    // 0x132708: 0x0  nop
    ctx->pc = 0x132708u;
    // NOP
label_13270c:
    // 0x13270c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13270cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132710:
    // 0x132710: 0x0  nop
    ctx->pc = 0x132710u;
    // NOP
label_132714:
    // 0x132714: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_132718:
    if (ctx->pc == 0x132718u) {
        ctx->pc = 0x13271Cu;
        goto label_13271c;
    }
    ctx->pc = 0x132714u;
    {
        const bool branch_taken_0x132714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132714) {
            ctx->pc = 0x13278Cu;
            goto label_13278c;
        }
    }
    ctx->pc = 0x13271Cu;
label_13271c:
    // 0x13271c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13271cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132720:
    // 0x132720: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x132720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_132724:
    // 0x132724: 0xc057a80  jal         func_15EA00
label_132728:
    if (ctx->pc == 0x132728u) {
        ctx->pc = 0x13272Cu;
        goto label_13272c;
    }
    ctx->pc = 0x132724u;
    SET_GPR_U32(ctx, 31, 0x13272Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x132724u, 0x13272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13272Cu;
label_13272c:
    // 0x13272c: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x13272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
label_132730:
    // 0x132730: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x132730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_132734:
    // 0x132734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_132738:
    // 0x132738: 0x0  nop
    ctx->pc = 0x132738u;
    // NOP
label_13273c:
    // 0x13273c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13273cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_132740:
    // 0x132740: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x132740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_132744:
    // 0x132744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132748:
    // 0x132748: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13274c:
    // 0x13274c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132750:
    // 0x132750: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x132750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132754:
    // 0x132754: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132758:
    // 0x132758: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_13275c:
    // 0x13275c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132760:
    // 0x132760: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x132760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132764:
    // 0x132764: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132768:
    // 0x132768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x132768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13276c:
    // 0x13276c: 0x0  nop
    ctx->pc = 0x13276cu;
    // NOP
label_132770:
    // 0x132770: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
label_132774:
    if (ctx->pc == 0x132774u) {
        ctx->pc = 0x132778u;
        goto label_132778;
    }
    ctx->pc = 0x132770u;
    {
        const bool branch_taken_0x132770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132770) {
            ctx->pc = 0x13282Cu;
            goto label_13282c;
        }
    }
    ctx->pc = 0x132778u;
label_132778:
    // 0x132778: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13277c:
    // 0x13277c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132780:
    // 0x132780: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_132784:
    // 0x132784: 0x10000029  b           . + 4 + (0x29 << 2)
label_132788:
    if (ctx->pc == 0x132788u) {
        ctx->pc = 0x13278Cu;
        goto label_13278c;
    }
    ctx->pc = 0x132784u;
    {
        const bool branch_taken_0x132784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132784) {
            ctx->pc = 0x13282Cu;
            goto label_13282c;
        }
    }
    ctx->pc = 0x13278Cu;
label_13278c:
    // 0x13278c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13278cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132790:
    // 0x132790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132794:
    // 0x132794: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x132794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_132798:
    // 0x132798: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x132798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_13279c:
    // 0x13279c: 0xc05cf7c  jal         func_173DF0
label_1327a0:
    if (ctx->pc == 0x1327A0u) {
        ctx->pc = 0x1327A4u;
        goto label_1327a4;
    }
    ctx->pc = 0x13279Cu;
    SET_GPR_U32(ctx, 31, 0x1327A4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x13279Cu, 0x1327A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1327A4u;
label_1327a4:
    // 0x1327a4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1327a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1327a8:
    // 0x1327a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1327ac:
    // 0x1327ac: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1327acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1327b0:
    // 0x1327b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1327b4:
    // 0x1327b4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1327b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1327b8:
    // 0x1327b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1327b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1327bc:
    // 0x1327bc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1327bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1327c0:
    // 0x1327c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1327c4:
    // 0x1327c4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1327c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1327c8:
    // 0x1327c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1327cc:
    // 0x1327cc: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1327ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1327d0:
    // 0x1327d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1327d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1327d4:
    // 0x1327d4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1327d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1327d8:
    // 0x1327d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1327dc:
    // 0x1327dc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1327dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1327e0:
    // 0x1327e0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1327e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1327e4:
    // 0x1327e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1327e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1327e8:
    // 0x1327e8: 0x0  nop
    ctx->pc = 0x1327e8u;
    // NOP
label_1327ec:
    // 0x1327ec: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1327f0:
    if (ctx->pc == 0x1327F0u) {
        ctx->pc = 0x1327F4u;
        goto label_1327f4;
    }
    ctx->pc = 0x1327ECu;
    {
        const bool branch_taken_0x1327ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1327ec) {
            ctx->pc = 0x13282Cu;
            goto label_13282c;
        }
    }
    ctx->pc = 0x1327F4u;
label_1327f4:
    // 0x1327f4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1327f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1327f8:
    // 0x1327f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1327fc:
    // 0x1327fc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1327fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_132800:
    // 0x132800: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x132800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_132804:
    // 0x132804: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132808:
    // 0x132808: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x132808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_13280c:
    // 0x13280c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13280cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132810:
    // 0x132810: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132814:
    // 0x132814: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_132818:
    // 0x132818: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13281c:
    // 0x13281c: 0xc0974dc  jal         func_25D370
label_132820:
    if (ctx->pc == 0x132820u) {
        ctx->pc = 0x132824u;
        goto label_132824;
    }
    ctx->pc = 0x13281Cu;
    SET_GPR_U32(ctx, 31, 0x132824u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13281Cu, 0x132824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132824u;
label_132824:
    // 0x132824: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_132828:
    if (ctx->pc == 0x132828u) {
        ctx->pc = 0x13282Cu;
        goto label_13282c;
    }
    ctx->pc = 0x132824u;
    {
        const bool branch_taken_0x132824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132824) {
            ctx->pc = 0x132B78u;
            goto label_132b78;
        }
    }
    ctx->pc = 0x13282Cu;
label_13282c:
    // 0x13282c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132830:
    // 0x132830: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x132830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132834:
    // 0x132834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132838:
    // 0x132838: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x132838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13283c:
    // 0x13283c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13283cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_132840:
    // 0x132840: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_132844:
    // 0x132844: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132848:
    // 0x132848: 0xc0974dc  jal         func_25D370
label_13284c:
    if (ctx->pc == 0x13284Cu) {
        ctx->pc = 0x132850u;
        goto label_132850;
    }
    ctx->pc = 0x132848u;
    SET_GPR_U32(ctx, 31, 0x132850u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132848u, 0x132850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132850u;
label_132850:
    // 0x132850: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132854:
    // 0x132854: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_132858:
    // 0x132858: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
label_13285c:
    if (ctx->pc == 0x13285Cu) {
        ctx->pc = 0x132860u;
        goto label_132860;
    }
    ctx->pc = 0x132858u;
    {
        const bool branch_taken_0x132858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132858) {
            ctx->pc = 0x132B78u;
            goto label_132b78;
        }
    }
    ctx->pc = 0x132860u;
label_132860:
    // 0x132860: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132864:
    // 0x132864: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x132864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_132868:
    // 0x132868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_13286c:
    // 0x13286c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x13286cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_132870:
    // 0x132870: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_132874:
    if (ctx->pc == 0x132874u) {
        ctx->pc = 0x132878u;
        goto label_132878;
    }
    ctx->pc = 0x132870u;
    {
        const bool branch_taken_0x132870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132870) {
            ctx->pc = 0x132B78u;
            goto label_132b78;
        }
    }
    ctx->pc = 0x132878u;
label_132878:
    // 0x132878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13287c:
    // 0x13287c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132880:
    // 0x132880: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_132884:
    // 0x132884: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x132884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_132888:
    // 0x132888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13288c:
    // 0x13288c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13288cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_132890:
    // 0x132890: 0xc0965d0  jal         func_259740
label_132894:
    if (ctx->pc == 0x132894u) {
        ctx->pc = 0x132898u;
        goto label_132898;
    }
    ctx->pc = 0x132890u;
    SET_GPR_U32(ctx, 31, 0x132898u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132890u, 0x132898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132898u;
label_132898:
    // 0x132898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13289c:
    // 0x13289c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13289cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1328a0:
    // 0x1328a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1328a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1328a4:
    // 0x1328a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1328a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1328a8:
    // 0x1328a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1328a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1328ac:
    // 0x1328ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1328acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1328b0:
    // 0x1328b0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1328b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1328b4:
    // 0x1328b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1328b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1328b8:
    // 0x1328b8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1328b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1328bc:
    // 0x1328bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1328bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1328c0:
    // 0x1328c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1328c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1328c4:
    // 0x1328c4: 0xc096b40  jal         func_25AD00
label_1328c8:
    if (ctx->pc == 0x1328C8u) {
        ctx->pc = 0x1328CCu;
        goto label_1328cc;
    }
    ctx->pc = 0x1328C4u;
    SET_GPR_U32(ctx, 31, 0x1328CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1328C4u, 0x1328CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328CCu;
label_1328cc:
    // 0x1328cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1328ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1328d0:
    // 0x1328d0: 0xc05cd10  jal         func_173440
label_1328d4:
    if (ctx->pc == 0x1328D4u) {
        ctx->pc = 0x1328D8u;
        goto label_1328d8;
    }
    ctx->pc = 0x1328D0u;
    SET_GPR_U32(ctx, 31, 0x1328D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1328D0u, 0x1328D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328D8u;
label_1328d8:
    // 0x1328d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1328d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1328dc:
    // 0x1328dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1328dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1328e0:
    // 0x1328e0: 0xc05cec4  jal         func_173B10
label_1328e4:
    if (ctx->pc == 0x1328E4u) {
        ctx->pc = 0x1328E8u;
        goto label_1328e8;
    }
    ctx->pc = 0x1328E0u;
    SET_GPR_U32(ctx, 31, 0x1328E8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1328E0u, 0x1328E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328E8u;
label_1328e8:
    // 0x1328e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1328e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1328ec:
    // 0x1328ec: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1328ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1328f0:
    // 0x1328f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1328f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1328f4:
    // 0x1328f4: 0x0  nop
    ctx->pc = 0x1328f4u;
    // NOP
label_1328f8:
    // 0x1328f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1328f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1328fc:
    // 0x1328fc: 0x0  nop
    ctx->pc = 0x1328fcu;
    // NOP
label_132900:
    // 0x132900: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_132904:
    if (ctx->pc == 0x132904u) {
        ctx->pc = 0x132908u;
        goto label_132908;
    }
    ctx->pc = 0x132900u;
    {
        const bool branch_taken_0x132900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132900) {
            ctx->pc = 0x132978u;
            goto label_132978;
        }
    }
    ctx->pc = 0x132908u;
label_132908:
    // 0x132908: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13290c:
    // 0x13290c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x13290cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_132910:
    // 0x132910: 0xc057a80  jal         func_15EA00
label_132914:
    if (ctx->pc == 0x132914u) {
        ctx->pc = 0x132918u;
        goto label_132918;
    }
    ctx->pc = 0x132910u;
    SET_GPR_U32(ctx, 31, 0x132918u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x132910u, 0x132918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132918u;
label_132918:
    // 0x132918: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x132918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
label_13291c:
    // 0x13291c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x13291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_132920:
    // 0x132920: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_132924:
    // 0x132924: 0x0  nop
    ctx->pc = 0x132924u;
    // NOP
label_132928:
    // 0x132928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_13292c:
    // 0x13292c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x13292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_132930:
    // 0x132930: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132934:
    // 0x132934: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132938:
    // 0x132938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13293c:
    // 0x13293c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13293cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132940:
    // 0x132940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132944:
    // 0x132944: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_132948:
    // 0x132948: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13294c:
    // 0x13294c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x13294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132950:
    // 0x132950: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132954:
    // 0x132954: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x132954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132958:
    // 0x132958: 0x0  nop
    ctx->pc = 0x132958u;
    // NOP
label_13295c:
    // 0x13295c: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
label_132960:
    if (ctx->pc == 0x132960u) {
        ctx->pc = 0x132964u;
        goto label_132964;
    }
    ctx->pc = 0x13295Cu;
    {
        const bool branch_taken_0x13295c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13295c) {
            ctx->pc = 0x132A08u;
            goto label_132a08;
        }
    }
    ctx->pc = 0x132964u;
label_132964:
    // 0x132964: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132968:
    // 0x132968: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13296c:
    // 0x13296c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_132970:
    // 0x132970: 0x10000025  b           . + 4 + (0x25 << 2)
label_132974:
    if (ctx->pc == 0x132974u) {
        ctx->pc = 0x132978u;
        goto label_132978;
    }
    ctx->pc = 0x132970u;
    {
        const bool branch_taken_0x132970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132970) {
            ctx->pc = 0x132A08u;
            goto label_132a08;
        }
    }
    ctx->pc = 0x132978u;
label_132978:
    // 0x132978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13297c:
    // 0x13297c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132980:
    // 0x132980: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x132980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_132984:
    // 0x132984: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x132984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_132988:
    // 0x132988: 0xc05cf7c  jal         func_173DF0
label_13298c:
    if (ctx->pc == 0x13298Cu) {
        ctx->pc = 0x132990u;
        goto label_132990;
    }
    ctx->pc = 0x132988u;
    SET_GPR_U32(ctx, 31, 0x132990u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x132988u, 0x132990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132990u;
label_132990:
    // 0x132990: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x132990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_132994:
    // 0x132994: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132998:
    // 0x132998: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13299c:
    // 0x13299c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1329a0:
    // 0x1329a0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1329a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1329a4:
    // 0x1329a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1329a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1329a8:
    // 0x1329a8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1329a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1329ac:
    // 0x1329ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1329acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1329b0:
    // 0x1329b0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1329b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1329b4:
    // 0x1329b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1329b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1329b8:
    // 0x1329b8: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1329b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1329bc:
    // 0x1329bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1329bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1329c0:
    // 0x1329c0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1329c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1329c4:
    // 0x1329c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1329c8:
    // 0x1329c8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1329c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1329cc:
    // 0x1329cc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1329ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1329d0:
    // 0x1329d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1329d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1329d4:
    // 0x1329d4: 0x0  nop
    ctx->pc = 0x1329d4u;
    // NOP
label_1329d8:
    // 0x1329d8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1329dc:
    if (ctx->pc == 0x1329DCu) {
        ctx->pc = 0x1329E0u;
        goto label_1329e0;
    }
    ctx->pc = 0x1329D8u;
    {
        const bool branch_taken_0x1329d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1329d8) {
            ctx->pc = 0x132A08u;
            goto label_132a08;
        }
    }
    ctx->pc = 0x1329E0u;
label_1329e0:
    // 0x1329e0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1329e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1329e4:
    // 0x1329e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1329e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1329e8:
    // 0x1329e8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1329e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1329ec:
    // 0x1329ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1329ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1329f0:
    // 0x1329f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1329f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1329f4:
    // 0x1329f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1329f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1329f8:
    // 0x1329f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1329f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1329fc:
    // 0x1329fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1329fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132a00:
    // 0x132a00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a04:
    // 0x132a04: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_132a08:
    // 0x132a08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a0c:
    // 0x132a0c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x132a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132a10:
    // 0x132a10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a14:
    // 0x132a14: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x132a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132a18:
    // 0x132a18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_132a1c:
    // 0x132a1c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_132a20:
    // 0x132a20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a24:
    // 0x132a24: 0xc0974dc  jal         func_25D370
label_132a28:
    if (ctx->pc == 0x132A28u) {
        ctx->pc = 0x132A2Cu;
        goto label_132a2c;
    }
    ctx->pc = 0x132A24u;
    SET_GPR_U32(ctx, 31, 0x132A2Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132A24u, 0x132A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A2Cu;
label_132a2c:
    // 0x132a2c: 0x10000052  b           . + 4 + (0x52 << 2)
label_132a30:
    if (ctx->pc == 0x132A30u) {
        ctx->pc = 0x132A34u;
        goto label_132a34;
    }
    ctx->pc = 0x132A2Cu;
    {
        const bool branch_taken_0x132a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a2c) {
            ctx->pc = 0x132B78u;
            goto label_132b78;
        }
    }
    ctx->pc = 0x132A34u;
label_132a34:
    // 0x132a34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a38:
    // 0x132a38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a3c:
    // 0x132a3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_132a40:
    // 0x132a40: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x132a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_132a44:
    // 0x132a44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132a48:
    // 0x132a48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_132a4c:
    // 0x132a4c: 0xc0965d0  jal         func_259740
label_132a50:
    if (ctx->pc == 0x132A50u) {
        ctx->pc = 0x132A54u;
        goto label_132a54;
    }
    ctx->pc = 0x132A4Cu;
    SET_GPR_U32(ctx, 31, 0x132A54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132A4Cu, 0x132A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A54u;
label_132a54:
    // 0x132a54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a58:
    // 0x132a58: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132a5c:
    // 0x132a5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132a60:
    // 0x132a60: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_132a64:
    // 0x132a64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a68:
    // 0x132a68: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x132a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_132a6c:
    // 0x132a6c: 0xc096b40  jal         func_25AD00
label_132a70:
    if (ctx->pc == 0x132A70u) {
        ctx->pc = 0x132A74u;
        goto label_132a74;
    }
    ctx->pc = 0x132A6Cu;
    SET_GPR_U32(ctx, 31, 0x132A74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132A6Cu, 0x132A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A74u;
label_132a74:
    // 0x132a74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a78:
    // 0x132a78: 0xc05cd10  jal         func_173440
label_132a7c:
    if (ctx->pc == 0x132A7Cu) {
        ctx->pc = 0x132A80u;
        goto label_132a80;
    }
    ctx->pc = 0x132A78u;
    SET_GPR_U32(ctx, 31, 0x132A80u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132A78u, 0x132A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A80u;
label_132a80:
    // 0x132a80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a84:
    // 0x132a84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132a84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132a88:
    // 0x132a88: 0xc05cec4  jal         func_173B10
label_132a8c:
    if (ctx->pc == 0x132A8Cu) {
        ctx->pc = 0x132A90u;
        goto label_132a90;
    }
    ctx->pc = 0x132A88u;
    SET_GPR_U32(ctx, 31, 0x132A90u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132A88u, 0x132A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A90u;
label_132a90:
    // 0x132a90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132a94:
    // 0x132a94: 0xc0974dc  jal         func_25D370
label_132a98:
    if (ctx->pc == 0x132A98u) {
        ctx->pc = 0x132A9Cu;
        goto label_132a9c;
    }
    ctx->pc = 0x132A94u;
    SET_GPR_U32(ctx, 31, 0x132A9Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132A94u, 0x132A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A9Cu;
label_132a9c:
    // 0x132a9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132aa0:
    // 0x132aa0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_132aa4:
    // 0x132aa4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_132aa8:
    if (ctx->pc == 0x132AA8u) {
        ctx->pc = 0x132AACu;
        goto label_132aac;
    }
    ctx->pc = 0x132AA4u;
    {
        const bool branch_taken_0x132aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132aa4) {
            ctx->pc = 0x132B78u;
            goto label_132b78;
        }
    }
    ctx->pc = 0x132AACu;
label_132aac:
    // 0x132aac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ab0:
    // 0x132ab0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x132ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_132ab4:
    // 0x132ab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_132ab8:
    // 0x132ab8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x132ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_132abc:
    // 0x132abc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_132ac0:
    if (ctx->pc == 0x132AC0u) {
        ctx->pc = 0x132AC4u;
        goto label_132ac4;
    }
    ctx->pc = 0x132ABCu;
    {
        const bool branch_taken_0x132abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132abc) {
            ctx->pc = 0x132B78u;
            goto label_132b78;
        }
    }
    ctx->pc = 0x132AC4u;
label_132ac4:
    // 0x132ac4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ac8:
    // 0x132ac8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132acc:
    // 0x132acc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_132ad0:
    // 0x132ad0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x132ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_132ad4:
    // 0x132ad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132ad8:
    // 0x132ad8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_132adc:
    // 0x132adc: 0xc0965d0  jal         func_259740
label_132ae0:
    if (ctx->pc == 0x132AE0u) {
        ctx->pc = 0x132AE4u;
        goto label_132ae4;
    }
    ctx->pc = 0x132ADCu;
    SET_GPR_U32(ctx, 31, 0x132AE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132ADCu, 0x132AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AE4u;
label_132ae4:
    // 0x132ae4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ae8:
    // 0x132ae8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132aec:
    // 0x132aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132af0:
    // 0x132af0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_132af4:
    // 0x132af4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132af8:
    // 0x132af8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132af8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132afc:
    // 0x132afc: 0xc096b40  jal         func_25AD00
label_132b00:
    if (ctx->pc == 0x132B00u) {
        ctx->pc = 0x132B04u;
        goto label_132b04;
    }
    ctx->pc = 0x132AFCu;
    SET_GPR_U32(ctx, 31, 0x132B04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132AFCu, 0x132B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B04u;
label_132b04:
    // 0x132b04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132b08:
    // 0x132b08: 0xc05cd10  jal         func_173440
label_132b0c:
    if (ctx->pc == 0x132B0Cu) {
        ctx->pc = 0x132B10u;
        goto label_132b10;
    }
    ctx->pc = 0x132B08u;
    SET_GPR_U32(ctx, 31, 0x132B10u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132B08u, 0x132B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B10u;
label_132b10:
    // 0x132b10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132b14:
    // 0x132b14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132b18:
    // 0x132b18: 0xc05cec4  jal         func_173B10
label_132b1c:
    if (ctx->pc == 0x132B1Cu) {
        ctx->pc = 0x132B20u;
        goto label_132b20;
    }
    ctx->pc = 0x132B18u;
    SET_GPR_U32(ctx, 31, 0x132B20u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132B18u, 0x132B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B20u;
label_132b20:
    // 0x132b20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132b24:
    // 0x132b24: 0xc0974dc  jal         func_25D370
label_132b28:
    if (ctx->pc == 0x132B28u) {
        ctx->pc = 0x132B2Cu;
        goto label_132b2c;
    }
    ctx->pc = 0x132B24u;
    SET_GPR_U32(ctx, 31, 0x132B2Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132B24u, 0x132B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B2Cu;
label_132b2c:
    // 0x132b2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132b30:
    // 0x132b30: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_132b34:
    // 0x132b34: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_132b38:
    if (ctx->pc == 0x132B38u) {
        ctx->pc = 0x132B3Cu;
        goto label_132b3c;
    }
    ctx->pc = 0x132B34u;
    {
        const bool branch_taken_0x132b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b34) {
            ctx->pc = 0x132B78u;
            goto label_132b78;
        }
    }
    ctx->pc = 0x132B3Cu;
label_132b3c:
    // 0x132b3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x132b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132b40:
    // 0x132b40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132b44:
    // 0x132b44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x132b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_132b48:
    // 0x132b48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x132b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_132b4c:
    // 0x132b4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132b50:
    // 0x132b50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x132b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_132b54:
    // 0x132b54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132b58:
    // 0x132b58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x132b58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_132b5c:
    // 0x132b5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132b60:
    // 0x132b60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x132b60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_132b64:
    // 0x132b64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132b68:
    // 0x132b68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x132b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_132b6c:
    // 0x132b6c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x132b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
label_132b70:
    // 0x132b70: 0x10000001  b           . + 4 + (0x1 << 2)
label_132b74:
    if (ctx->pc == 0x132B74u) {
        ctx->pc = 0x132B78u;
        goto label_132b78;
    }
    ctx->pc = 0x132B70u;
    {
        const bool branch_taken_0x132b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b70) {
            ctx->pc = 0x132B78u;
            goto label_132b78;
        }
    }
    ctx->pc = 0x132B78u;
label_132b78:
    // 0x132b78: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x132b78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_132b7c:
    // 0x132b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_132b80:
    // 0x132b80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x132b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_132b84:
    // 0x132b84: 0x3e00008  jr          $ra
label_132b88:
    if (ctx->pc == 0x132B88u) {
        ctx->pc = 0x132B8Cu;
        goto label_fallthrough_0x132b84;
    }
    ctx->pc = 0x132B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x132b84:
    ctx->pc = 0x132B8Cu;
}
