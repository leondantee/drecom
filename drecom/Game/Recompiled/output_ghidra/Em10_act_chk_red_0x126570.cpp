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

// Function: Em10_act_chk_red
// Address: 0x126570 - 0x126df8
void Em10_act_chk_red_0x126570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_red_0x126570");
#endif

    switch (ctx->pc) {
        case 0x126570u: goto label_126570;
        case 0x126574u: goto label_126574;
        case 0x126578u: goto label_126578;
        case 0x12657cu: goto label_12657c;
        case 0x126580u: goto label_126580;
        case 0x126584u: goto label_126584;
        case 0x126588u: goto label_126588;
        case 0x12658cu: goto label_12658c;
        case 0x126590u: goto label_126590;
        case 0x126594u: goto label_126594;
        case 0x126598u: goto label_126598;
        case 0x12659cu: goto label_12659c;
        case 0x1265a0u: goto label_1265a0;
        case 0x1265a4u: goto label_1265a4;
        case 0x1265a8u: goto label_1265a8;
        case 0x1265acu: goto label_1265ac;
        case 0x1265b0u: goto label_1265b0;
        case 0x1265b4u: goto label_1265b4;
        case 0x1265b8u: goto label_1265b8;
        case 0x1265bcu: goto label_1265bc;
        case 0x1265c0u: goto label_1265c0;
        case 0x1265c4u: goto label_1265c4;
        case 0x1265c8u: goto label_1265c8;
        case 0x1265ccu: goto label_1265cc;
        case 0x1265d0u: goto label_1265d0;
        case 0x1265d4u: goto label_1265d4;
        case 0x1265d8u: goto label_1265d8;
        case 0x1265dcu: goto label_1265dc;
        case 0x1265e0u: goto label_1265e0;
        case 0x1265e4u: goto label_1265e4;
        case 0x1265e8u: goto label_1265e8;
        case 0x1265ecu: goto label_1265ec;
        case 0x1265f0u: goto label_1265f0;
        case 0x1265f4u: goto label_1265f4;
        case 0x1265f8u: goto label_1265f8;
        case 0x1265fcu: goto label_1265fc;
        case 0x126600u: goto label_126600;
        case 0x126604u: goto label_126604;
        case 0x126608u: goto label_126608;
        case 0x12660cu: goto label_12660c;
        case 0x126610u: goto label_126610;
        case 0x126614u: goto label_126614;
        case 0x126618u: goto label_126618;
        case 0x12661cu: goto label_12661c;
        case 0x126620u: goto label_126620;
        case 0x126624u: goto label_126624;
        case 0x126628u: goto label_126628;
        case 0x12662cu: goto label_12662c;
        case 0x126630u: goto label_126630;
        case 0x126634u: goto label_126634;
        case 0x126638u: goto label_126638;
        case 0x12663cu: goto label_12663c;
        case 0x126640u: goto label_126640;
        case 0x126644u: goto label_126644;
        case 0x126648u: goto label_126648;
        case 0x12664cu: goto label_12664c;
        case 0x126650u: goto label_126650;
        case 0x126654u: goto label_126654;
        case 0x126658u: goto label_126658;
        case 0x12665cu: goto label_12665c;
        case 0x126660u: goto label_126660;
        case 0x126664u: goto label_126664;
        case 0x126668u: goto label_126668;
        case 0x12666cu: goto label_12666c;
        case 0x126670u: goto label_126670;
        case 0x126674u: goto label_126674;
        case 0x126678u: goto label_126678;
        case 0x12667cu: goto label_12667c;
        case 0x126680u: goto label_126680;
        case 0x126684u: goto label_126684;
        case 0x126688u: goto label_126688;
        case 0x12668cu: goto label_12668c;
        case 0x126690u: goto label_126690;
        case 0x126694u: goto label_126694;
        case 0x126698u: goto label_126698;
        case 0x12669cu: goto label_12669c;
        case 0x1266a0u: goto label_1266a0;
        case 0x1266a4u: goto label_1266a4;
        case 0x1266a8u: goto label_1266a8;
        case 0x1266acu: goto label_1266ac;
        case 0x1266b0u: goto label_1266b0;
        case 0x1266b4u: goto label_1266b4;
        case 0x1266b8u: goto label_1266b8;
        case 0x1266bcu: goto label_1266bc;
        case 0x1266c0u: goto label_1266c0;
        case 0x1266c4u: goto label_1266c4;
        case 0x1266c8u: goto label_1266c8;
        case 0x1266ccu: goto label_1266cc;
        case 0x1266d0u: goto label_1266d0;
        case 0x1266d4u: goto label_1266d4;
        case 0x1266d8u: goto label_1266d8;
        case 0x1266dcu: goto label_1266dc;
        case 0x1266e0u: goto label_1266e0;
        case 0x1266e4u: goto label_1266e4;
        case 0x1266e8u: goto label_1266e8;
        case 0x1266ecu: goto label_1266ec;
        case 0x1266f0u: goto label_1266f0;
        case 0x1266f4u: goto label_1266f4;
        case 0x1266f8u: goto label_1266f8;
        case 0x1266fcu: goto label_1266fc;
        case 0x126700u: goto label_126700;
        case 0x126704u: goto label_126704;
        case 0x126708u: goto label_126708;
        case 0x12670cu: goto label_12670c;
        case 0x126710u: goto label_126710;
        case 0x126714u: goto label_126714;
        case 0x126718u: goto label_126718;
        case 0x12671cu: goto label_12671c;
        case 0x126720u: goto label_126720;
        case 0x126724u: goto label_126724;
        case 0x126728u: goto label_126728;
        case 0x12672cu: goto label_12672c;
        case 0x126730u: goto label_126730;
        case 0x126734u: goto label_126734;
        case 0x126738u: goto label_126738;
        case 0x12673cu: goto label_12673c;
        case 0x126740u: goto label_126740;
        case 0x126744u: goto label_126744;
        case 0x126748u: goto label_126748;
        case 0x12674cu: goto label_12674c;
        case 0x126750u: goto label_126750;
        case 0x126754u: goto label_126754;
        case 0x126758u: goto label_126758;
        case 0x12675cu: goto label_12675c;
        case 0x126760u: goto label_126760;
        case 0x126764u: goto label_126764;
        case 0x126768u: goto label_126768;
        case 0x12676cu: goto label_12676c;
        case 0x126770u: goto label_126770;
        case 0x126774u: goto label_126774;
        case 0x126778u: goto label_126778;
        case 0x12677cu: goto label_12677c;
        case 0x126780u: goto label_126780;
        case 0x126784u: goto label_126784;
        case 0x126788u: goto label_126788;
        case 0x12678cu: goto label_12678c;
        case 0x126790u: goto label_126790;
        case 0x126794u: goto label_126794;
        case 0x126798u: goto label_126798;
        case 0x12679cu: goto label_12679c;
        case 0x1267a0u: goto label_1267a0;
        case 0x1267a4u: goto label_1267a4;
        case 0x1267a8u: goto label_1267a8;
        case 0x1267acu: goto label_1267ac;
        case 0x1267b0u: goto label_1267b0;
        case 0x1267b4u: goto label_1267b4;
        case 0x1267b8u: goto label_1267b8;
        case 0x1267bcu: goto label_1267bc;
        case 0x1267c0u: goto label_1267c0;
        case 0x1267c4u: goto label_1267c4;
        case 0x1267c8u: goto label_1267c8;
        case 0x1267ccu: goto label_1267cc;
        case 0x1267d0u: goto label_1267d0;
        case 0x1267d4u: goto label_1267d4;
        case 0x1267d8u: goto label_1267d8;
        case 0x1267dcu: goto label_1267dc;
        case 0x1267e0u: goto label_1267e0;
        case 0x1267e4u: goto label_1267e4;
        case 0x1267e8u: goto label_1267e8;
        case 0x1267ecu: goto label_1267ec;
        case 0x1267f0u: goto label_1267f0;
        case 0x1267f4u: goto label_1267f4;
        case 0x1267f8u: goto label_1267f8;
        case 0x1267fcu: goto label_1267fc;
        case 0x126800u: goto label_126800;
        case 0x126804u: goto label_126804;
        case 0x126808u: goto label_126808;
        case 0x12680cu: goto label_12680c;
        case 0x126810u: goto label_126810;
        case 0x126814u: goto label_126814;
        case 0x126818u: goto label_126818;
        case 0x12681cu: goto label_12681c;
        case 0x126820u: goto label_126820;
        case 0x126824u: goto label_126824;
        case 0x126828u: goto label_126828;
        case 0x12682cu: goto label_12682c;
        case 0x126830u: goto label_126830;
        case 0x126834u: goto label_126834;
        case 0x126838u: goto label_126838;
        case 0x12683cu: goto label_12683c;
        case 0x126840u: goto label_126840;
        case 0x126844u: goto label_126844;
        case 0x126848u: goto label_126848;
        case 0x12684cu: goto label_12684c;
        case 0x126850u: goto label_126850;
        case 0x126854u: goto label_126854;
        case 0x126858u: goto label_126858;
        case 0x12685cu: goto label_12685c;
        case 0x126860u: goto label_126860;
        case 0x126864u: goto label_126864;
        case 0x126868u: goto label_126868;
        case 0x12686cu: goto label_12686c;
        case 0x126870u: goto label_126870;
        case 0x126874u: goto label_126874;
        case 0x126878u: goto label_126878;
        case 0x12687cu: goto label_12687c;
        case 0x126880u: goto label_126880;
        case 0x126884u: goto label_126884;
        case 0x126888u: goto label_126888;
        case 0x12688cu: goto label_12688c;
        case 0x126890u: goto label_126890;
        case 0x126894u: goto label_126894;
        case 0x126898u: goto label_126898;
        case 0x12689cu: goto label_12689c;
        case 0x1268a0u: goto label_1268a0;
        case 0x1268a4u: goto label_1268a4;
        case 0x1268a8u: goto label_1268a8;
        case 0x1268acu: goto label_1268ac;
        case 0x1268b0u: goto label_1268b0;
        case 0x1268b4u: goto label_1268b4;
        case 0x1268b8u: goto label_1268b8;
        case 0x1268bcu: goto label_1268bc;
        case 0x1268c0u: goto label_1268c0;
        case 0x1268c4u: goto label_1268c4;
        case 0x1268c8u: goto label_1268c8;
        case 0x1268ccu: goto label_1268cc;
        case 0x1268d0u: goto label_1268d0;
        case 0x1268d4u: goto label_1268d4;
        case 0x1268d8u: goto label_1268d8;
        case 0x1268dcu: goto label_1268dc;
        case 0x1268e0u: goto label_1268e0;
        case 0x1268e4u: goto label_1268e4;
        case 0x1268e8u: goto label_1268e8;
        case 0x1268ecu: goto label_1268ec;
        case 0x1268f0u: goto label_1268f0;
        case 0x1268f4u: goto label_1268f4;
        case 0x1268f8u: goto label_1268f8;
        case 0x1268fcu: goto label_1268fc;
        case 0x126900u: goto label_126900;
        case 0x126904u: goto label_126904;
        case 0x126908u: goto label_126908;
        case 0x12690cu: goto label_12690c;
        case 0x126910u: goto label_126910;
        case 0x126914u: goto label_126914;
        case 0x126918u: goto label_126918;
        case 0x12691cu: goto label_12691c;
        case 0x126920u: goto label_126920;
        case 0x126924u: goto label_126924;
        case 0x126928u: goto label_126928;
        case 0x12692cu: goto label_12692c;
        case 0x126930u: goto label_126930;
        case 0x126934u: goto label_126934;
        case 0x126938u: goto label_126938;
        case 0x12693cu: goto label_12693c;
        case 0x126940u: goto label_126940;
        case 0x126944u: goto label_126944;
        case 0x126948u: goto label_126948;
        case 0x12694cu: goto label_12694c;
        case 0x126950u: goto label_126950;
        case 0x126954u: goto label_126954;
        case 0x126958u: goto label_126958;
        case 0x12695cu: goto label_12695c;
        case 0x126960u: goto label_126960;
        case 0x126964u: goto label_126964;
        case 0x126968u: goto label_126968;
        case 0x12696cu: goto label_12696c;
        case 0x126970u: goto label_126970;
        case 0x126974u: goto label_126974;
        case 0x126978u: goto label_126978;
        case 0x12697cu: goto label_12697c;
        case 0x126980u: goto label_126980;
        case 0x126984u: goto label_126984;
        case 0x126988u: goto label_126988;
        case 0x12698cu: goto label_12698c;
        case 0x126990u: goto label_126990;
        case 0x126994u: goto label_126994;
        case 0x126998u: goto label_126998;
        case 0x12699cu: goto label_12699c;
        case 0x1269a0u: goto label_1269a0;
        case 0x1269a4u: goto label_1269a4;
        case 0x1269a8u: goto label_1269a8;
        case 0x1269acu: goto label_1269ac;
        case 0x1269b0u: goto label_1269b0;
        case 0x1269b4u: goto label_1269b4;
        case 0x1269b8u: goto label_1269b8;
        case 0x1269bcu: goto label_1269bc;
        case 0x1269c0u: goto label_1269c0;
        case 0x1269c4u: goto label_1269c4;
        case 0x1269c8u: goto label_1269c8;
        case 0x1269ccu: goto label_1269cc;
        case 0x1269d0u: goto label_1269d0;
        case 0x1269d4u: goto label_1269d4;
        case 0x1269d8u: goto label_1269d8;
        case 0x1269dcu: goto label_1269dc;
        case 0x1269e0u: goto label_1269e0;
        case 0x1269e4u: goto label_1269e4;
        case 0x1269e8u: goto label_1269e8;
        case 0x1269ecu: goto label_1269ec;
        case 0x1269f0u: goto label_1269f0;
        case 0x1269f4u: goto label_1269f4;
        case 0x1269f8u: goto label_1269f8;
        case 0x1269fcu: goto label_1269fc;
        case 0x126a00u: goto label_126a00;
        case 0x126a04u: goto label_126a04;
        case 0x126a08u: goto label_126a08;
        case 0x126a0cu: goto label_126a0c;
        case 0x126a10u: goto label_126a10;
        case 0x126a14u: goto label_126a14;
        case 0x126a18u: goto label_126a18;
        case 0x126a1cu: goto label_126a1c;
        case 0x126a20u: goto label_126a20;
        case 0x126a24u: goto label_126a24;
        case 0x126a28u: goto label_126a28;
        case 0x126a2cu: goto label_126a2c;
        case 0x126a30u: goto label_126a30;
        case 0x126a34u: goto label_126a34;
        case 0x126a38u: goto label_126a38;
        case 0x126a3cu: goto label_126a3c;
        case 0x126a40u: goto label_126a40;
        case 0x126a44u: goto label_126a44;
        case 0x126a48u: goto label_126a48;
        case 0x126a4cu: goto label_126a4c;
        case 0x126a50u: goto label_126a50;
        case 0x126a54u: goto label_126a54;
        case 0x126a58u: goto label_126a58;
        case 0x126a5cu: goto label_126a5c;
        case 0x126a60u: goto label_126a60;
        case 0x126a64u: goto label_126a64;
        case 0x126a68u: goto label_126a68;
        case 0x126a6cu: goto label_126a6c;
        case 0x126a70u: goto label_126a70;
        case 0x126a74u: goto label_126a74;
        case 0x126a78u: goto label_126a78;
        case 0x126a7cu: goto label_126a7c;
        case 0x126a80u: goto label_126a80;
        case 0x126a84u: goto label_126a84;
        case 0x126a88u: goto label_126a88;
        case 0x126a8cu: goto label_126a8c;
        case 0x126a90u: goto label_126a90;
        case 0x126a94u: goto label_126a94;
        case 0x126a98u: goto label_126a98;
        case 0x126a9cu: goto label_126a9c;
        case 0x126aa0u: goto label_126aa0;
        case 0x126aa4u: goto label_126aa4;
        case 0x126aa8u: goto label_126aa8;
        case 0x126aacu: goto label_126aac;
        case 0x126ab0u: goto label_126ab0;
        case 0x126ab4u: goto label_126ab4;
        case 0x126ab8u: goto label_126ab8;
        case 0x126abcu: goto label_126abc;
        case 0x126ac0u: goto label_126ac0;
        case 0x126ac4u: goto label_126ac4;
        case 0x126ac8u: goto label_126ac8;
        case 0x126accu: goto label_126acc;
        case 0x126ad0u: goto label_126ad0;
        case 0x126ad4u: goto label_126ad4;
        case 0x126ad8u: goto label_126ad8;
        case 0x126adcu: goto label_126adc;
        case 0x126ae0u: goto label_126ae0;
        case 0x126ae4u: goto label_126ae4;
        case 0x126ae8u: goto label_126ae8;
        case 0x126aecu: goto label_126aec;
        case 0x126af0u: goto label_126af0;
        case 0x126af4u: goto label_126af4;
        case 0x126af8u: goto label_126af8;
        case 0x126afcu: goto label_126afc;
        case 0x126b00u: goto label_126b00;
        case 0x126b04u: goto label_126b04;
        case 0x126b08u: goto label_126b08;
        case 0x126b0cu: goto label_126b0c;
        case 0x126b10u: goto label_126b10;
        case 0x126b14u: goto label_126b14;
        case 0x126b18u: goto label_126b18;
        case 0x126b1cu: goto label_126b1c;
        case 0x126b20u: goto label_126b20;
        case 0x126b24u: goto label_126b24;
        case 0x126b28u: goto label_126b28;
        case 0x126b2cu: goto label_126b2c;
        case 0x126b30u: goto label_126b30;
        case 0x126b34u: goto label_126b34;
        case 0x126b38u: goto label_126b38;
        case 0x126b3cu: goto label_126b3c;
        case 0x126b40u: goto label_126b40;
        case 0x126b44u: goto label_126b44;
        case 0x126b48u: goto label_126b48;
        case 0x126b4cu: goto label_126b4c;
        case 0x126b50u: goto label_126b50;
        case 0x126b54u: goto label_126b54;
        case 0x126b58u: goto label_126b58;
        case 0x126b5cu: goto label_126b5c;
        case 0x126b60u: goto label_126b60;
        case 0x126b64u: goto label_126b64;
        case 0x126b68u: goto label_126b68;
        case 0x126b6cu: goto label_126b6c;
        case 0x126b70u: goto label_126b70;
        case 0x126b74u: goto label_126b74;
        case 0x126b78u: goto label_126b78;
        case 0x126b7cu: goto label_126b7c;
        case 0x126b80u: goto label_126b80;
        case 0x126b84u: goto label_126b84;
        case 0x126b88u: goto label_126b88;
        case 0x126b8cu: goto label_126b8c;
        case 0x126b90u: goto label_126b90;
        case 0x126b94u: goto label_126b94;
        case 0x126b98u: goto label_126b98;
        case 0x126b9cu: goto label_126b9c;
        case 0x126ba0u: goto label_126ba0;
        case 0x126ba4u: goto label_126ba4;
        case 0x126ba8u: goto label_126ba8;
        case 0x126bacu: goto label_126bac;
        case 0x126bb0u: goto label_126bb0;
        case 0x126bb4u: goto label_126bb4;
        case 0x126bb8u: goto label_126bb8;
        case 0x126bbcu: goto label_126bbc;
        case 0x126bc0u: goto label_126bc0;
        case 0x126bc4u: goto label_126bc4;
        case 0x126bc8u: goto label_126bc8;
        case 0x126bccu: goto label_126bcc;
        case 0x126bd0u: goto label_126bd0;
        case 0x126bd4u: goto label_126bd4;
        case 0x126bd8u: goto label_126bd8;
        case 0x126bdcu: goto label_126bdc;
        case 0x126be0u: goto label_126be0;
        case 0x126be4u: goto label_126be4;
        case 0x126be8u: goto label_126be8;
        case 0x126becu: goto label_126bec;
        case 0x126bf0u: goto label_126bf0;
        case 0x126bf4u: goto label_126bf4;
        case 0x126bf8u: goto label_126bf8;
        case 0x126bfcu: goto label_126bfc;
        case 0x126c00u: goto label_126c00;
        case 0x126c04u: goto label_126c04;
        case 0x126c08u: goto label_126c08;
        case 0x126c0cu: goto label_126c0c;
        case 0x126c10u: goto label_126c10;
        case 0x126c14u: goto label_126c14;
        case 0x126c18u: goto label_126c18;
        case 0x126c1cu: goto label_126c1c;
        case 0x126c20u: goto label_126c20;
        case 0x126c24u: goto label_126c24;
        case 0x126c28u: goto label_126c28;
        case 0x126c2cu: goto label_126c2c;
        case 0x126c30u: goto label_126c30;
        case 0x126c34u: goto label_126c34;
        case 0x126c38u: goto label_126c38;
        case 0x126c3cu: goto label_126c3c;
        case 0x126c40u: goto label_126c40;
        case 0x126c44u: goto label_126c44;
        case 0x126c48u: goto label_126c48;
        case 0x126c4cu: goto label_126c4c;
        case 0x126c50u: goto label_126c50;
        case 0x126c54u: goto label_126c54;
        case 0x126c58u: goto label_126c58;
        case 0x126c5cu: goto label_126c5c;
        case 0x126c60u: goto label_126c60;
        case 0x126c64u: goto label_126c64;
        case 0x126c68u: goto label_126c68;
        case 0x126c6cu: goto label_126c6c;
        case 0x126c70u: goto label_126c70;
        case 0x126c74u: goto label_126c74;
        case 0x126c78u: goto label_126c78;
        case 0x126c7cu: goto label_126c7c;
        case 0x126c80u: goto label_126c80;
        case 0x126c84u: goto label_126c84;
        case 0x126c88u: goto label_126c88;
        case 0x126c8cu: goto label_126c8c;
        case 0x126c90u: goto label_126c90;
        case 0x126c94u: goto label_126c94;
        case 0x126c98u: goto label_126c98;
        case 0x126c9cu: goto label_126c9c;
        case 0x126ca0u: goto label_126ca0;
        case 0x126ca4u: goto label_126ca4;
        case 0x126ca8u: goto label_126ca8;
        case 0x126cacu: goto label_126cac;
        case 0x126cb0u: goto label_126cb0;
        case 0x126cb4u: goto label_126cb4;
        case 0x126cb8u: goto label_126cb8;
        case 0x126cbcu: goto label_126cbc;
        case 0x126cc0u: goto label_126cc0;
        case 0x126cc4u: goto label_126cc4;
        case 0x126cc8u: goto label_126cc8;
        case 0x126cccu: goto label_126ccc;
        case 0x126cd0u: goto label_126cd0;
        case 0x126cd4u: goto label_126cd4;
        case 0x126cd8u: goto label_126cd8;
        case 0x126cdcu: goto label_126cdc;
        case 0x126ce0u: goto label_126ce0;
        case 0x126ce4u: goto label_126ce4;
        case 0x126ce8u: goto label_126ce8;
        case 0x126cecu: goto label_126cec;
        case 0x126cf0u: goto label_126cf0;
        case 0x126cf4u: goto label_126cf4;
        case 0x126cf8u: goto label_126cf8;
        case 0x126cfcu: goto label_126cfc;
        case 0x126d00u: goto label_126d00;
        case 0x126d04u: goto label_126d04;
        case 0x126d08u: goto label_126d08;
        case 0x126d0cu: goto label_126d0c;
        case 0x126d10u: goto label_126d10;
        case 0x126d14u: goto label_126d14;
        case 0x126d18u: goto label_126d18;
        case 0x126d1cu: goto label_126d1c;
        case 0x126d20u: goto label_126d20;
        case 0x126d24u: goto label_126d24;
        case 0x126d28u: goto label_126d28;
        case 0x126d2cu: goto label_126d2c;
        case 0x126d30u: goto label_126d30;
        case 0x126d34u: goto label_126d34;
        case 0x126d38u: goto label_126d38;
        case 0x126d3cu: goto label_126d3c;
        case 0x126d40u: goto label_126d40;
        case 0x126d44u: goto label_126d44;
        case 0x126d48u: goto label_126d48;
        case 0x126d4cu: goto label_126d4c;
        case 0x126d50u: goto label_126d50;
        case 0x126d54u: goto label_126d54;
        case 0x126d58u: goto label_126d58;
        case 0x126d5cu: goto label_126d5c;
        case 0x126d60u: goto label_126d60;
        case 0x126d64u: goto label_126d64;
        case 0x126d68u: goto label_126d68;
        case 0x126d6cu: goto label_126d6c;
        case 0x126d70u: goto label_126d70;
        case 0x126d74u: goto label_126d74;
        case 0x126d78u: goto label_126d78;
        case 0x126d7cu: goto label_126d7c;
        case 0x126d80u: goto label_126d80;
        case 0x126d84u: goto label_126d84;
        case 0x126d88u: goto label_126d88;
        case 0x126d8cu: goto label_126d8c;
        case 0x126d90u: goto label_126d90;
        case 0x126d94u: goto label_126d94;
        case 0x126d98u: goto label_126d98;
        case 0x126d9cu: goto label_126d9c;
        case 0x126da0u: goto label_126da0;
        case 0x126da4u: goto label_126da4;
        case 0x126da8u: goto label_126da8;
        case 0x126dacu: goto label_126dac;
        case 0x126db0u: goto label_126db0;
        case 0x126db4u: goto label_126db4;
        case 0x126db8u: goto label_126db8;
        case 0x126dbcu: goto label_126dbc;
        case 0x126dc0u: goto label_126dc0;
        case 0x126dc4u: goto label_126dc4;
        case 0x126dc8u: goto label_126dc8;
        case 0x126dccu: goto label_126dcc;
        case 0x126dd0u: goto label_126dd0;
        case 0x126dd4u: goto label_126dd4;
        case 0x126dd8u: goto label_126dd8;
        case 0x126ddcu: goto label_126ddc;
        case 0x126de0u: goto label_126de0;
        case 0x126de4u: goto label_126de4;
        case 0x126de8u: goto label_126de8;
        case 0x126decu: goto label_126dec;
        case 0x126df0u: goto label_126df0;
        case 0x126df4u: goto label_126df4;
        default: break;
    }

    ctx->pc = 0x126570u;

label_126570:
    // 0x126570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x126570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_126574:
    // 0x126574: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x126574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_126578:
    // 0x126578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x126578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12657c:
    // 0x12657c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_126580:
    // 0x126580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x126580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_126584:
    // 0x126584: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x126584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_126588:
    // 0x126588: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12658c:
    // 0x12658c: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12658cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_126590:
    // 0x126590: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126594:
    // 0x126594: 0xc05cdd8  jal         func_173760
label_126598:
    if (ctx->pc == 0x126598u) {
        ctx->pc = 0x12659Cu;
        goto label_12659c;
    }
    ctx->pc = 0x126594u;
    SET_GPR_U32(ctx, 31, 0x12659Cu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x126594u, 0x12659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12659Cu;
label_12659c:
    // 0x12659c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x12659cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1265a0:
    // 0x1265a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1265a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1265a4:
    // 0x1265a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1265a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1265a8:
    // 0x1265a8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1265a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1265ac:
    // 0x1265ac: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1265acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1265b0:
    // 0x1265b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1265b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1265b4:
    // 0x1265b4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1265b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_1265b8:
    // 0x1265b8: 0xc05cc90  jal         func_173240
label_1265bc:
    if (ctx->pc == 0x1265BCu) {
        ctx->pc = 0x1265C0u;
        goto label_1265c0;
    }
    ctx->pc = 0x1265B8u;
    SET_GPR_U32(ctx, 31, 0x1265C0u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x1265B8u, 0x1265C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265C0u;
label_1265c0:
    // 0x1265c0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1265c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1265c4:
    // 0x1265c4: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x1265c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1265c8:
    // 0x1265c8: 0x10200204  beqz        $at, . + 4 + (0x204 << 2)
label_1265cc:
    if (ctx->pc == 0x1265CCu) {
        ctx->pc = 0x1265D0u;
        goto label_1265d0;
    }
    ctx->pc = 0x1265C8u;
    {
        const bool branch_taken_0x1265c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1265c8) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x1265D0u;
label_1265d0:
    // 0x1265d0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1265d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1265d4:
    // 0x1265d4: 0x2464e260  addiu       $a0, $v1, -0x1DA0
    ctx->pc = 0x1265d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959712));
label_1265d8:
    // 0x1265d8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1265d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1265dc:
    // 0x1265dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1265dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1265e0:
    // 0x1265e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1265e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1265e4:
    // 0x1265e4: 0x600008  jr          $v1
label_1265e8:
    if (ctx->pc == 0x1265E8u) {
        ctx->pc = 0x1265ECu;
        goto label_1265ec;
    }
    ctx->pc = 0x1265E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1265E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1265ECu;
label_1265ec:
    // 0x1265ec: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1265ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1265f0:
    // 0x1265f0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1265f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1265f4:
    // 0x1265f4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1265f8:
    if (ctx->pc == 0x1265F8u) {
        ctx->pc = 0x1265FCu;
        goto label_1265fc;
    }
    ctx->pc = 0x1265F4u;
    {
        const bool branch_taken_0x1265f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1265f4) {
            ctx->pc = 0x12660Cu;
            goto label_12660c;
        }
    }
    ctx->pc = 0x1265FCu;
label_1265fc:
    // 0x1265fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1265fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126600:
    // 0x126600: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x126600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_126604:
    // 0x126604: 0x106001f5  beqz        $v1, . + 4 + (0x1F5 << 2)
label_126608:
    if (ctx->pc == 0x126608u) {
        ctx->pc = 0x12660Cu;
        goto label_12660c;
    }
    ctx->pc = 0x126604u;
    {
        const bool branch_taken_0x126604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126604) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x12660Cu;
label_12660c:
    // 0x12660c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12660cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_126610:
    // 0x126610: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_126614:
    if (ctx->pc == 0x126614u) {
        ctx->pc = 0x126618u;
        goto label_126618;
    }
    ctx->pc = 0x126610u;
    {
        const bool branch_taken_0x126610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126610) {
            ctx->pc = 0x126654u;
            goto label_126654;
        }
    }
    ctx->pc = 0x126618u;
label_126618:
    // 0x126618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12661c:
    // 0x12661c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12661cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126620:
    // 0x126620: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126624:
    // 0x126624: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x126624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_126628:
    // 0x126628: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12662c:
    // 0x12662c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12662cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126630:
    // 0x126630: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126634:
    // 0x126634: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126638:
    // 0x126638: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12663c:
    // 0x12663c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12663cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126640:
    // 0x126640: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x126640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_126644:
    // 0x126644: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126648:
    // 0x126648: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x126648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_12664c:
    // 0x12664c: 0x100001e3  b           . + 4 + (0x1E3 << 2)
label_126650:
    if (ctx->pc == 0x126650u) {
        ctx->pc = 0x126654u;
        goto label_126654;
    }
    ctx->pc = 0x12664Cu;
    {
        const bool branch_taken_0x12664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12664c) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126654u;
label_126654:
    // 0x126654: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x126654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_126658:
    // 0x126658: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x126658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_12665c:
    // 0x12665c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_126660:
    if (ctx->pc == 0x126660u) {
        ctx->pc = 0x126664u;
        goto label_126664;
    }
    ctx->pc = 0x12665Cu;
    {
        const bool branch_taken_0x12665c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12665c) {
            ctx->pc = 0x12667Cu;
            goto label_12667c;
        }
    }
    ctx->pc = 0x126664u;
label_126664:
    // 0x126664: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x126664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_126668:
    // 0x126668: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x126668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_12666c:
    // 0x12666c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12666cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_126670:
    // 0x126670: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x126670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_126674:
    // 0x126674: 0x100001d9  b           . + 4 + (0x1D9 << 2)
label_126678:
    if (ctx->pc == 0x126678u) {
        ctx->pc = 0x12667Cu;
        goto label_12667c;
    }
    ctx->pc = 0x126674u;
    {
        const bool branch_taken_0x126674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126674) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x12667Cu;
label_12667c:
    // 0x12667c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126680:
    // 0x126680: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x126680u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_126684:
    // 0x126684: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x126684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_126688:
    // 0x126688: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x126688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_12668c:
    // 0x12668c: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
label_126690:
    if (ctx->pc == 0x126690u) {
        ctx->pc = 0x126694u;
        goto label_126694;
    }
    ctx->pc = 0x12668Cu;
    {
        const bool branch_taken_0x12668c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12668c) {
            ctx->pc = 0x126958u;
            goto label_126958;
        }
    }
    ctx->pc = 0x126694u;
label_126694:
    // 0x126694: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126698:
    // 0x126698: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12669c:
    // 0x12669c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x12669cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_1266a0:
    // 0x1266a0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1266a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1266a4:
    // 0x1266a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1266a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1266a8:
    // 0x1266a8: 0x0  nop
    ctx->pc = 0x1266a8u;
    // NOP
label_1266ac:
    // 0x1266ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1266acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1266b0:
    // 0x1266b0: 0x0  nop
    ctx->pc = 0x1266b0u;
    // NOP
label_1266b4:
    // 0x1266b4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1266b8:
    if (ctx->pc == 0x1266B8u) {
        ctx->pc = 0x1266BCu;
        goto label_1266bc;
    }
    ctx->pc = 0x1266B4u;
    {
        const bool branch_taken_0x1266b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1266b4) {
            ctx->pc = 0x126700u;
            goto label_126700;
        }
    }
    ctx->pc = 0x1266BCu;
label_1266bc:
    // 0x1266bc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1266bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1266c0:
    // 0x1266c0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1266c4:
    if (ctx->pc == 0x1266C4u) {
        ctx->pc = 0x1266C8u;
        goto label_1266c8;
    }
    ctx->pc = 0x1266C0u;
    {
        const bool branch_taken_0x1266c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1266c0) {
            ctx->pc = 0x1266F8u;
            goto label_1266f8;
        }
    }
    ctx->pc = 0x1266C8u;
label_1266c8:
    // 0x1266c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1266c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1266cc:
    // 0x1266cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1266d0:
    // 0x1266d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1266d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1266d4:
    // 0x1266d4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1266d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1266d8:
    // 0x1266d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1266dc:
    // 0x1266dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1266dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1266e0:
    // 0x1266e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1266e4:
    // 0x1266e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1266e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1266e8:
    // 0x1266e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1266ec:
    // 0x1266ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1266ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1266f0:
    // 0x1266f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1266f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1266f4:
    // 0x1266f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1266f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1266f8:
    // 0x1266f8: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_1266fc:
    if (ctx->pc == 0x1266FCu) {
        ctx->pc = 0x126700u;
        goto label_126700;
    }
    ctx->pc = 0x1266F8u;
    {
        const bool branch_taken_0x1266f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1266f8) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126700u;
label_126700:
    // 0x126700: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126704:
    // 0x126704: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126708:
    // 0x126708: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x126708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
label_12670c:
    // 0x12670c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x12670cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_126710:
    // 0x126710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126714:
    // 0x126714: 0x0  nop
    ctx->pc = 0x126714u;
    // NOP
label_126718:
    // 0x126718: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12671c:
    // 0x12671c: 0x0  nop
    ctx->pc = 0x12671cu;
    // NOP
label_126720:
    // 0x126720: 0x450001ae  bc1f        . + 4 + (0x1AE << 2)
label_126724:
    if (ctx->pc == 0x126724u) {
        ctx->pc = 0x126728u;
        goto label_126728;
    }
    ctx->pc = 0x126720u;
    {
        const bool branch_taken_0x126720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126720) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126728u;
label_126728:
    // 0x126728: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x126728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12672c:
    // 0x12672c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126730:
    // 0x126730: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x126730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_126734:
    // 0x126734: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x126734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_126738:
    // 0x126738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12673c:
    // 0x12673c: 0x0  nop
    ctx->pc = 0x12673cu;
    // NOP
label_126740:
    // 0x126740: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x126740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126744:
    // 0x126744: 0x0  nop
    ctx->pc = 0x126744u;
    // NOP
label_126748:
    // 0x126748: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_12674c:
    if (ctx->pc == 0x12674Cu) {
        ctx->pc = 0x126750u;
        goto label_126750;
    }
    ctx->pc = 0x126748u;
    {
        const bool branch_taken_0x126748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126748) {
            ctx->pc = 0x126820u;
            goto label_126820;
        }
    }
    ctx->pc = 0x126750u;
label_126750:
    // 0x126750: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_126754:
    // 0x126754: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x126754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_126758:
    // 0x126758: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x126758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_12675c:
    // 0x12675c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_126760:
    if (ctx->pc == 0x126760u) {
        ctx->pc = 0x126764u;
        goto label_126764;
    }
    ctx->pc = 0x12675Cu;
    {
        const bool branch_taken_0x12675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12675c) {
            ctx->pc = 0x126774u;
            goto label_126774;
        }
    }
    ctx->pc = 0x126764u;
label_126764:
    // 0x126764: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x126764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_126768:
    // 0x126768: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x126768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_12676c:
    // 0x12676c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_126770:
    if (ctx->pc == 0x126770u) {
        ctx->pc = 0x126774u;
        goto label_126774;
    }
    ctx->pc = 0x12676Cu;
    {
        const bool branch_taken_0x12676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12676c) {
            ctx->pc = 0x126820u;
            goto label_126820;
        }
    }
    ctx->pc = 0x126774u;
label_126774:
    // 0x126774: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126778:
    // 0x126778: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12677c:
    // 0x12677c: 0xc05d25c  jal         func_174970
label_126780:
    if (ctx->pc == 0x126780u) {
        ctx->pc = 0x126784u;
        goto label_126784;
    }
    ctx->pc = 0x12677Cu;
    SET_GPR_U32(ctx, 31, 0x126784u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12677Cu, 0x126784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126784u;
label_126784:
    // 0x126784: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_126788:
    if (ctx->pc == 0x126788u) {
        ctx->pc = 0x12678Cu;
        goto label_12678c;
    }
    ctx->pc = 0x126784u;
    {
        const bool branch_taken_0x126784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126784) {
            ctx->pc = 0x126820u;
            goto label_126820;
        }
    }
    ctx->pc = 0x12678Cu;
label_12678c:
    // 0x12678c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12678cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126790:
    // 0x126790: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x126790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_126794:
    // 0x126794: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x126794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_126798:
    // 0x126798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x126798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12679c:
    // 0x12679c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12679cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1267a0:
    // 0x1267a0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1267a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1267a4:
    // 0x1267a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1267a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1267a8:
    // 0x1267a8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1267a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1267ac:
    // 0x1267ac: 0x0  nop
    ctx->pc = 0x1267acu;
    // NOP
label_1267b0:
    // 0x1267b0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_1267b4:
    if (ctx->pc == 0x1267B4u) {
        ctx->pc = 0x1267B8u;
        goto label_1267b8;
    }
    ctx->pc = 0x1267B0u;
    {
        const bool branch_taken_0x1267b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1267b0) {
            ctx->pc = 0x126820u;
            goto label_126820;
        }
    }
    ctx->pc = 0x1267B8u;
label_1267b8:
    // 0x1267b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1267b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1267bc:
    // 0x1267bc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1267bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1267c0:
    // 0x1267c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1267c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1267c4:
    // 0x1267c4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1267c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1267c8:
    // 0x1267c8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1267c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1267cc:
    // 0x1267cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1267ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1267d0:
    // 0x1267d0: 0x0  nop
    ctx->pc = 0x1267d0u;
    // NOP
label_1267d4:
    // 0x1267d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1267d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1267d8:
    // 0x1267d8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1267d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1267dc:
    // 0x1267dc: 0x0  nop
    ctx->pc = 0x1267dcu;
    // NOP
label_1267e0:
    // 0x1267e0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_1267e4:
    if (ctx->pc == 0x1267E4u) {
        ctx->pc = 0x1267E8u;
        goto label_1267e8;
    }
    ctx->pc = 0x1267E0u;
    {
        const bool branch_taken_0x1267e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1267e0) {
            ctx->pc = 0x126820u;
            goto label_126820;
        }
    }
    ctx->pc = 0x1267E8u;
label_1267e8:
    // 0x1267e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1267e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1267ec:
    // 0x1267ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1267ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1267f0:
    // 0x1267f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1267f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1267f4:
    // 0x1267f4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1267f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1267f8:
    // 0x1267f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1267f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1267fc:
    // 0x1267fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1267fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126800:
    // 0x126800: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126804:
    // 0x126804: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126808:
    // 0x126808: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12680c:
    // 0x12680c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12680cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126810:
    // 0x126810: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126814:
    // 0x126814: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126818:
    // 0x126818: 0x10000170  b           . + 4 + (0x170 << 2)
label_12681c:
    if (ctx->pc == 0x12681Cu) {
        ctx->pc = 0x126820u;
        goto label_126820;
    }
    ctx->pc = 0x126818u;
    {
        const bool branch_taken_0x126818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126818) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126820u;
label_126820:
    // 0x126820: 0xc067694  jal         func_19DA50
label_126824:
    if (ctx->pc == 0x126824u) {
        ctx->pc = 0x126828u;
        goto label_126828;
    }
    ctx->pc = 0x126820u;
    SET_GPR_U32(ctx, 31, 0x126828u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x126820u, 0x126828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126828u;
label_126828:
    // 0x126828: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x126828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12682c:
    // 0x12682c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12682cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_126830:
    // 0x126830: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x126830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_126834:
    // 0x126834: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_126838:
    if (ctx->pc == 0x126838u) {
        ctx->pc = 0x12683Cu;
        goto label_12683c;
    }
    ctx->pc = 0x126834u;
    {
        const bool branch_taken_0x126834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126834) {
            ctx->pc = 0x12691Cu;
            goto label_12691c;
        }
    }
    ctx->pc = 0x12683Cu;
label_12683c:
    // 0x12683c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_126840:
    // 0x126840: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
label_126844:
    if (ctx->pc == 0x126844u) {
        ctx->pc = 0x126848u;
        goto label_126848;
    }
    ctx->pc = 0x126840u;
    {
        const bool branch_taken_0x126840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126840) {
            ctx->pc = 0x12691Cu;
            goto label_12691c;
        }
    }
    ctx->pc = 0x126848u;
label_126848:
    // 0x126848: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x126848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12684c:
    // 0x12684c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_126850:
    if (ctx->pc == 0x126850u) {
        ctx->pc = 0x126854u;
        goto label_126854;
    }
    ctx->pc = 0x12684Cu;
    {
        const bool branch_taken_0x12684c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12684c) {
            ctx->pc = 0x126870u;
            goto label_126870;
        }
    }
    ctx->pc = 0x126854u;
label_126854:
    // 0x126854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126858:
    // 0x126858: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_12685c:
    if (ctx->pc == 0x12685Cu) {
        ctx->pc = 0x126860u;
        goto label_126860;
    }
    ctx->pc = 0x126858u;
    {
        const bool branch_taken_0x126858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126858) {
            ctx->pc = 0x126870u;
            goto label_126870;
        }
    }
    ctx->pc = 0x126860u;
label_126860:
    // 0x126860: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_126864:
    if (ctx->pc == 0x126864u) {
        ctx->pc = 0x126868u;
        goto label_126868;
    }
    ctx->pc = 0x126860u;
    {
        const bool branch_taken_0x126860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126860) {
            ctx->pc = 0x126870u;
            goto label_126870;
        }
    }
    ctx->pc = 0x126868u;
label_126868:
    // 0x126868: 0x10000039  b           . + 4 + (0x39 << 2)
label_12686c:
    if (ctx->pc == 0x12686Cu) {
        ctx->pc = 0x126870u;
        goto label_126870;
    }
    ctx->pc = 0x126868u;
    {
        const bool branch_taken_0x126868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126868) {
            ctx->pc = 0x126950u;
            goto label_126950;
        }
    }
    ctx->pc = 0x126870u;
label_126870:
    // 0x126870: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126874:
    // 0x126874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126878:
    // 0x126878: 0xc05d25c  jal         func_174970
label_12687c:
    if (ctx->pc == 0x12687Cu) {
        ctx->pc = 0x126880u;
        goto label_126880;
    }
    ctx->pc = 0x126878u;
    SET_GPR_U32(ctx, 31, 0x126880u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x126878u, 0x126880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126880u;
label_126880:
    // 0x126880: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_126884:
    if (ctx->pc == 0x126884u) {
        ctx->pc = 0x126888u;
        goto label_126888;
    }
    ctx->pc = 0x126880u;
    {
        const bool branch_taken_0x126880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126880) {
            ctx->pc = 0x126950u;
            goto label_126950;
        }
    }
    ctx->pc = 0x126888u;
label_126888:
    // 0x126888: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12688c:
    // 0x12688c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_126890:
    // 0x126890: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x126890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_126894:
    // 0x126894: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x126894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_126898:
    // 0x126898: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x126898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_12689c:
    // 0x12689c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x12689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1268a0:
    // 0x1268a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1268a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1268a4:
    // 0x1268a4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1268a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1268a8:
    // 0x1268a8: 0x0  nop
    ctx->pc = 0x1268a8u;
    // NOP
label_1268ac:
    // 0x1268ac: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_1268b0:
    if (ctx->pc == 0x1268B0u) {
        ctx->pc = 0x1268B4u;
        goto label_1268b4;
    }
    ctx->pc = 0x1268ACu;
    {
        const bool branch_taken_0x1268ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1268ac) {
            ctx->pc = 0x126950u;
            goto label_126950;
        }
    }
    ctx->pc = 0x1268B4u;
label_1268b4:
    // 0x1268b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1268b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1268b8:
    // 0x1268b8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1268b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1268bc:
    // 0x1268bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1268bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1268c0:
    // 0x1268c0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1268c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1268c4:
    // 0x1268c4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1268c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1268c8:
    // 0x1268c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1268c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1268cc:
    // 0x1268cc: 0x0  nop
    ctx->pc = 0x1268ccu;
    // NOP
label_1268d0:
    // 0x1268d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1268d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1268d4:
    // 0x1268d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1268d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1268d8:
    // 0x1268d8: 0x0  nop
    ctx->pc = 0x1268d8u;
    // NOP
label_1268dc:
    // 0x1268dc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_1268e0:
    if (ctx->pc == 0x1268E0u) {
        ctx->pc = 0x1268E4u;
        goto label_1268e4;
    }
    ctx->pc = 0x1268DCu;
    {
        const bool branch_taken_0x1268dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1268dc) {
            ctx->pc = 0x126950u;
            goto label_126950;
        }
    }
    ctx->pc = 0x1268E4u;
label_1268e4:
    // 0x1268e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1268e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1268e8:
    // 0x1268e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1268e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1268ec:
    // 0x1268ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1268ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1268f0:
    // 0x1268f0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1268f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1268f4:
    // 0x1268f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1268f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1268f8:
    // 0x1268f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1268f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1268fc:
    // 0x1268fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1268fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126900:
    // 0x126900: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126904:
    // 0x126904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126908:
    // 0x126908: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12690c:
    // 0x12690c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126910:
    // 0x126910: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126914:
    // 0x126914: 0x1000000e  b           . + 4 + (0xE << 2)
label_126918:
    if (ctx->pc == 0x126918u) {
        ctx->pc = 0x12691Cu;
        goto label_12691c;
    }
    ctx->pc = 0x126914u;
    {
        const bool branch_taken_0x126914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126914) {
            ctx->pc = 0x126950u;
            goto label_126950;
        }
    }
    ctx->pc = 0x12691Cu;
label_12691c:
    // 0x12691c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126920:
    // 0x126920: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126924:
    // 0x126924: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126928:
    // 0x126928: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x126928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_12692c:
    // 0x12692c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126930:
    // 0x126930: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126934:
    // 0x126934: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126938:
    // 0x126938: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12693c:
    // 0x12693c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126940:
    // 0x126940: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126944:
    // 0x126944: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x126944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_126948:
    // 0x126948: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12694c:
    // 0x12694c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x12694cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_126950:
    // 0x126950: 0x10000122  b           . + 4 + (0x122 << 2)
label_126954:
    if (ctx->pc == 0x126954u) {
        ctx->pc = 0x126958u;
        goto label_126958;
    }
    ctx->pc = 0x126950u;
    {
        const bool branch_taken_0x126950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126950) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126958u;
label_126958:
    // 0x126958: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12695c:
    // 0x12695c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126960:
    // 0x126960: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x126960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_126964:
    // 0x126964: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x126964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_126968:
    // 0x126968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12696c:
    // 0x12696c: 0x0  nop
    ctx->pc = 0x12696cu;
    // NOP
label_126970:
    // 0x126970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126974:
    // 0x126974: 0x0  nop
    ctx->pc = 0x126974u;
    // NOP
label_126978:
    // 0x126978: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_12697c:
    if (ctx->pc == 0x12697Cu) {
        ctx->pc = 0x126980u;
        goto label_126980;
    }
    ctx->pc = 0x126978u;
    {
        const bool branch_taken_0x126978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126978) {
            ctx->pc = 0x126A88u;
            goto label_126a88;
        }
    }
    ctx->pc = 0x126980u;
label_126980:
    // 0x126980: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_126984:
    // 0x126984: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x126984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_126988:
    // 0x126988: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x126988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_12698c:
    // 0x12698c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_126990:
    if (ctx->pc == 0x126990u) {
        ctx->pc = 0x126994u;
        goto label_126994;
    }
    ctx->pc = 0x12698Cu;
    {
        const bool branch_taken_0x12698c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12698c) {
            ctx->pc = 0x1269CCu;
            goto label_1269cc;
        }
    }
    ctx->pc = 0x126994u;
label_126994:
    // 0x126994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126998:
    // 0x126998: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12699c:
    // 0x12699c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12699cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1269a0:
    // 0x1269a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1269a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1269a4:
    // 0x1269a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1269a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1269a8:
    // 0x1269a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1269a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1269ac:
    // 0x1269ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1269acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1269b0:
    // 0x1269b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1269b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1269b4:
    // 0x1269b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1269b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1269b8:
    // 0x1269b8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1269b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1269bc:
    // 0x1269bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1269bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1269c0:
    // 0x1269c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1269c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1269c4:
    // 0x1269c4: 0x10000105  b           . + 4 + (0x105 << 2)
label_1269c8:
    if (ctx->pc == 0x1269C8u) {
        ctx->pc = 0x1269CCu;
        goto label_1269cc;
    }
    ctx->pc = 0x1269C4u;
    {
        const bool branch_taken_0x1269c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269c4) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x1269CCu;
label_1269cc:
    // 0x1269cc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1269ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1269d0:
    // 0x1269d0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_1269d4:
    if (ctx->pc == 0x1269D4u) {
        ctx->pc = 0x1269D8u;
        goto label_1269d8;
    }
    ctx->pc = 0x1269D0u;
    {
        const bool branch_taken_0x1269d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269d0) {
            ctx->pc = 0x126A80u;
            goto label_126a80;
        }
    }
    ctx->pc = 0x1269D8u;
label_1269d8:
    // 0x1269d8: 0xc067694  jal         func_19DA50
label_1269dc:
    if (ctx->pc == 0x1269DCu) {
        ctx->pc = 0x1269E0u;
        goto label_1269e0;
    }
    ctx->pc = 0x1269D8u;
    SET_GPR_U32(ctx, 31, 0x1269E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1269D8u, 0x1269E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269E0u;
label_1269e0:
    // 0x1269e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1269e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1269e4:
    // 0x1269e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1269e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1269e8:
    // 0x1269e8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1269ec:
    if (ctx->pc == 0x1269ECu) {
        ctx->pc = 0x1269F0u;
        goto label_1269f0;
    }
    ctx->pc = 0x1269E8u;
    {
        const bool branch_taken_0x1269e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269e8) {
            ctx->pc = 0x126A50u;
            goto label_126a50;
        }
    }
    ctx->pc = 0x1269F0u;
label_1269f0:
    // 0x1269f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1269f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1269f4:
    // 0x1269f4: 0xc04d8bc  jal         func_1362F0
label_1269f8:
    if (ctx->pc == 0x1269F8u) {
        ctx->pc = 0x1269FCu;
        goto label_1269fc;
    }
    ctx->pc = 0x1269F4u;
    SET_GPR_U32(ctx, 31, 0x1269FCu);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x1269F4u, 0x1269FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269FCu;
label_1269fc:
    // 0x1269fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_126a00:
    if (ctx->pc == 0x126A00u) {
        ctx->pc = 0x126A04u;
        goto label_126a04;
    }
    ctx->pc = 0x1269FCu;
    {
        const bool branch_taken_0x1269fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269fc) {
            ctx->pc = 0x126A80u;
            goto label_126a80;
        }
    }
    ctx->pc = 0x126A04u;
label_126a04:
    // 0x126a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126a08:
    // 0x126a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a0c:
    // 0x126a0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126a10:
    // 0x126a10: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x126a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_126a14:
    // 0x126a14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a18:
    // 0x126a18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126a1c:
    // 0x126a1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a20:
    // 0x126a20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126a24:
    // 0x126a24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a28:
    // 0x126a28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126a2c:
    // 0x126a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a30:
    // 0x126a30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126a34:
    // 0x126a34: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a38:
    // 0x126a38: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x126a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_126a3c:
    // 0x126a3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x126a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_126a40:
    // 0x126a40: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x126a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_126a44:
    // 0x126a44: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_126a48:
    // 0x126a48: 0x1000000d  b           . + 4 + (0xD << 2)
label_126a4c:
    if (ctx->pc == 0x126A4Cu) {
        ctx->pc = 0x126A50u;
        goto label_126a50;
    }
    ctx->pc = 0x126A48u;
    {
        const bool branch_taken_0x126a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126a48) {
            ctx->pc = 0x126A80u;
            goto label_126a80;
        }
    }
    ctx->pc = 0x126A50u;
label_126a50:
    // 0x126a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126a54:
    // 0x126a54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a58:
    // 0x126a58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126a5c:
    // 0x126a5c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x126a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_126a60:
    // 0x126a60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a64:
    // 0x126a64: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126a68:
    // 0x126a68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a6c:
    // 0x126a6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126a70:
    // 0x126a70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a74:
    // 0x126a74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126a78:
    // 0x126a78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a7c:
    // 0x126a7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126a80:
    // 0x126a80: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_126a84:
    if (ctx->pc == 0x126A84u) {
        ctx->pc = 0x126A88u;
        goto label_126a88;
    }
    ctx->pc = 0x126A80u;
    {
        const bool branch_taken_0x126a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126a80) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126A88u;
label_126a88:
    // 0x126a88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126a8c:
    // 0x126a8c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126a90:
    // 0x126a90: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x126a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
label_126a94:
    // 0x126a94: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x126a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_126a98:
    // 0x126a98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126a9c:
    // 0x126a9c: 0x0  nop
    ctx->pc = 0x126a9cu;
    // NOP
label_126aa0:
    // 0x126aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126aa4:
    // 0x126aa4: 0x0  nop
    ctx->pc = 0x126aa4u;
    // NOP
label_126aa8:
    // 0x126aa8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_126aac:
    if (ctx->pc == 0x126AACu) {
        ctx->pc = 0x126AB0u;
        goto label_126ab0;
    }
    ctx->pc = 0x126AA8u;
    {
        const bool branch_taken_0x126aa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126aa8) {
            ctx->pc = 0x126AF4u;
            goto label_126af4;
        }
    }
    ctx->pc = 0x126AB0u;
label_126ab0:
    // 0x126ab0: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x126ab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_126ab4:
    // 0x126ab4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_126ab8:
    if (ctx->pc == 0x126AB8u) {
        ctx->pc = 0x126ABCu;
        goto label_126abc;
    }
    ctx->pc = 0x126AB4u;
    {
        const bool branch_taken_0x126ab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ab4) {
            ctx->pc = 0x126AECu;
            goto label_126aec;
        }
    }
    ctx->pc = 0x126ABCu;
label_126abc:
    // 0x126abc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126ac0:
    // 0x126ac0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ac4:
    // 0x126ac4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126ac8:
    // 0x126ac8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_126acc:
    // 0x126acc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ad0:
    // 0x126ad0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126ad4:
    // 0x126ad4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ad8:
    // 0x126ad8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126adc:
    // 0x126adc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ae0:
    // 0x126ae0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126ae4:
    // 0x126ae4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ae8:
    // 0x126ae8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126aec:
    // 0x126aec: 0x100000bb  b           . + 4 + (0xBB << 2)
label_126af0:
    if (ctx->pc == 0x126AF0u) {
        ctx->pc = 0x126AF4u;
        goto label_126af4;
    }
    ctx->pc = 0x126AECu;
    {
        const bool branch_taken_0x126aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126aec) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126AF4u;
label_126af4:
    // 0x126af4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126af8:
    // 0x126af8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126afc:
    // 0x126afc: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x126afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_126b00:
    // 0x126b00: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_126b04:
    // 0x126b04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126b08:
    // 0x126b08: 0x0  nop
    ctx->pc = 0x126b08u;
    // NOP
label_126b0c:
    // 0x126b0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126b10:
    // 0x126b10: 0x0  nop
    ctx->pc = 0x126b10u;
    // NOP
label_126b14:
    // 0x126b14: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
label_126b18:
    if (ctx->pc == 0x126B18u) {
        ctx->pc = 0x126B1Cu;
        goto label_126b1c;
    }
    ctx->pc = 0x126B14u;
    {
        const bool branch_taken_0x126b14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126b14) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126B1Cu;
label_126b1c:
    // 0x126b1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126b20:
    // 0x126b20: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x126b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126b24:
    // 0x126b24: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x126b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_126b28:
    // 0x126b28: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x126b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_126b2c:
    // 0x126b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126b30:
    // 0x126b30: 0x0  nop
    ctx->pc = 0x126b30u;
    // NOP
label_126b34:
    // 0x126b34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x126b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126b38:
    // 0x126b38: 0x0  nop
    ctx->pc = 0x126b38u;
    // NOP
label_126b3c:
    // 0x126b3c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_126b40:
    if (ctx->pc == 0x126B40u) {
        ctx->pc = 0x126B44u;
        goto label_126b44;
    }
    ctx->pc = 0x126B3Cu;
    {
        const bool branch_taken_0x126b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126b3c) {
            ctx->pc = 0x126BB8u;
            goto label_126bb8;
        }
    }
    ctx->pc = 0x126B44u;
label_126b44:
    // 0x126b44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_126b48:
    // 0x126b48: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x126b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_126b4c:
    // 0x126b4c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x126b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_126b50:
    // 0x126b50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_126b54:
    if (ctx->pc == 0x126B54u) {
        ctx->pc = 0x126B58u;
        goto label_126b58;
    }
    ctx->pc = 0x126B50u;
    {
        const bool branch_taken_0x126b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b50) {
            ctx->pc = 0x126B68u;
            goto label_126b68;
        }
    }
    ctx->pc = 0x126B58u;
label_126b58:
    // 0x126b58: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x126b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_126b5c:
    // 0x126b5c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x126b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_126b60:
    // 0x126b60: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_126b64:
    if (ctx->pc == 0x126B64u) {
        ctx->pc = 0x126B68u;
        goto label_126b68;
    }
    ctx->pc = 0x126B60u;
    {
        const bool branch_taken_0x126b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126b60) {
            ctx->pc = 0x126BB8u;
            goto label_126bb8;
        }
    }
    ctx->pc = 0x126B68u;
label_126b68:
    // 0x126b68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126b6c:
    // 0x126b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126b70:
    // 0x126b70: 0xc05d25c  jal         func_174970
label_126b74:
    if (ctx->pc == 0x126B74u) {
        ctx->pc = 0x126B78u;
        goto label_126b78;
    }
    ctx->pc = 0x126B70u;
    SET_GPR_U32(ctx, 31, 0x126B78u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x126B70u, 0x126B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B78u;
label_126b78:
    // 0x126b78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_126b7c:
    if (ctx->pc == 0x126B7Cu) {
        ctx->pc = 0x126B80u;
        goto label_126b80;
    }
    ctx->pc = 0x126B78u;
    {
        const bool branch_taken_0x126b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126b78) {
            ctx->pc = 0x126BB8u;
            goto label_126bb8;
        }
    }
    ctx->pc = 0x126B80u;
label_126b80:
    // 0x126b80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126b84:
    // 0x126b84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126b88:
    // 0x126b88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126b88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126b8c:
    // 0x126b8c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x126b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_126b90:
    // 0x126b90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126b94:
    // 0x126b94: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126b98:
    // 0x126b98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126b9c:
    // 0x126b9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126ba0:
    // 0x126ba0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ba4:
    // 0x126ba4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126ba8:
    // 0x126ba8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126bac:
    // 0x126bac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126bb0:
    // 0x126bb0: 0x1000008a  b           . + 4 + (0x8A << 2)
label_126bb4:
    if (ctx->pc == 0x126BB4u) {
        ctx->pc = 0x126BB8u;
        goto label_126bb8;
    }
    ctx->pc = 0x126BB0u;
    {
        const bool branch_taken_0x126bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126bb0) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126BB8u;
label_126bb8:
    // 0x126bb8: 0xc067694  jal         func_19DA50
label_126bbc:
    if (ctx->pc == 0x126BBCu) {
        ctx->pc = 0x126BC0u;
        goto label_126bc0;
    }
    ctx->pc = 0x126BB8u;
    SET_GPR_U32(ctx, 31, 0x126BC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x126BB8u, 0x126BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BC0u;
label_126bc0:
    // 0x126bc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x126bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_126bc4:
    // 0x126bc4: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x126bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_126bc8:
    // 0x126bc8: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x126bc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_126bcc:
    // 0x126bcc: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
label_126bd0:
    if (ctx->pc == 0x126BD0u) {
        ctx->pc = 0x126BD4u;
        goto label_126bd4;
    }
    ctx->pc = 0x126BCCu;
    {
        const bool branch_taken_0x126bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126bcc) {
            ctx->pc = 0x126D9Cu;
            goto label_126d9c;
        }
    }
    ctx->pc = 0x126BD4u;
label_126bd4:
    // 0x126bd4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x126bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_126bd8:
    // 0x126bd8: 0x2464e230  addiu       $a0, $v1, -0x1DD0
    ctx->pc = 0x126bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959664));
label_126bdc:
    // 0x126bdc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x126bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_126be0:
    // 0x126be0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x126be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_126be4:
    // 0x126be4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x126be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_126be8:
    // 0x126be8: 0x600008  jr          $v1
label_126bec:
    if (ctx->pc == 0x126BECu) {
        ctx->pc = 0x126BF0u;
        goto label_126bf0;
    }
    ctx->pc = 0x126BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126BE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x126BF0u;
label_126bf0:
    // 0x126bf0: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
label_126bf4:
    if (ctx->pc == 0x126BF4u) {
        ctx->pc = 0x126BF8u;
        goto label_126bf8;
    }
    ctx->pc = 0x126BF0u;
    {
        const bool branch_taken_0x126bf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x126bf0) {
            ctx->pc = 0x126C50u;
            goto label_126c50;
        }
    }
    ctx->pc = 0x126BF8u;
label_126bf8:
    // 0x126bf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126bfc:
    // 0x126bfc: 0xc04d8bc  jal         func_1362F0
label_126c00:
    if (ctx->pc == 0x126C00u) {
        ctx->pc = 0x126C04u;
        goto label_126c04;
    }
    ctx->pc = 0x126BFCu;
    SET_GPR_U32(ctx, 31, 0x126C04u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x126BFCu, 0x126C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C04u;
label_126c04:
    // 0x126c04: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_126c08:
    if (ctx->pc == 0x126C08u) {
        ctx->pc = 0x126C0Cu;
        goto label_126c0c;
    }
    ctx->pc = 0x126C04u;
    {
        const bool branch_taken_0x126c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c04) {
            ctx->pc = 0x126C50u;
            goto label_126c50;
        }
    }
    ctx->pc = 0x126C0Cu;
label_126c0c:
    // 0x126c0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126c10:
    // 0x126c10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c14:
    // 0x126c14: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126c18:
    // 0x126c18: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x126c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_126c1c:
    // 0x126c1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c20:
    // 0x126c20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126c24:
    // 0x126c24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c28:
    // 0x126c28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126c2c:
    // 0x126c2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c30:
    // 0x126c30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126c30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126c34:
    // 0x126c34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c38:
    // 0x126c38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126c3c:
    // 0x126c3c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c40:
    // 0x126c40: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x126c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_126c44:
    // 0x126c44: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x126c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_126c48:
    // 0x126c48: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x126c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_126c4c:
    // 0x126c4c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_126c50:
    // 0x126c50: 0x10000062  b           . + 4 + (0x62 << 2)
label_126c54:
    if (ctx->pc == 0x126C54u) {
        ctx->pc = 0x126C58u;
        goto label_126c58;
    }
    ctx->pc = 0x126C50u;
    {
        const bool branch_taken_0x126c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c50) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126C58u;
label_126c58:
    // 0x126c58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c5c:
    // 0x126c5c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x126c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_126c60:
    // 0x126c60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x126c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_126c64:
    // 0x126c64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x126c64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_126c68:
    // 0x126c68: 0x286103e8  slti        $at, $v1, 0x3E8
    ctx->pc = 0x126c68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
label_126c6c:
    // 0x126c6c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_126c70:
    if (ctx->pc == 0x126C70u) {
        ctx->pc = 0x126C74u;
        goto label_126c74;
    }
    ctx->pc = 0x126C6Cu;
    {
        const bool branch_taken_0x126c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c6c) {
            ctx->pc = 0x126CACu;
            goto label_126cac;
        }
    }
    ctx->pc = 0x126C74u;
label_126c74:
    // 0x126c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126c78:
    // 0x126c78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c7c:
    // 0x126c7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126c80:
    // 0x126c80: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x126c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_126c84:
    // 0x126c84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c88:
    // 0x126c88: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126c8c:
    // 0x126c8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c90:
    // 0x126c90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126c94:
    // 0x126c94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126c98:
    // 0x126c98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126c9c:
    // 0x126c9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ca0:
    // 0x126ca0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126ca4:
    // 0x126ca4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_126ca8:
    if (ctx->pc == 0x126CA8u) {
        ctx->pc = 0x126CACu;
        goto label_126cac;
    }
    ctx->pc = 0x126CA4u;
    {
        const bool branch_taken_0x126ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ca4) {
            ctx->pc = 0x126D9Cu;
            goto label_126d9c;
        }
    }
    ctx->pc = 0x126CACu;
label_126cac:
    // 0x126cac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126cb0:
    // 0x126cb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126cb4:
    // 0x126cb4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126cb8:
    // 0x126cb8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x126cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_126cbc:
    // 0x126cbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126cc0:
    // 0x126cc0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126cc4:
    // 0x126cc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126cc8:
    // 0x126cc8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126ccc:
    // 0x126ccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126cd0:
    // 0x126cd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126cd4:
    // 0x126cd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126cd8:
    // 0x126cd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126cdc:
    // 0x126cdc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_126ce0:
    if (ctx->pc == 0x126CE0u) {
        ctx->pc = 0x126CE4u;
        goto label_126ce4;
    }
    ctx->pc = 0x126CDCu;
    {
        const bool branch_taken_0x126cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126cdc) {
            ctx->pc = 0x126D9Cu;
            goto label_126d9c;
        }
    }
    ctx->pc = 0x126CE4u;
label_126ce4:
    // 0x126ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126ce8:
    // 0x126ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126cec:
    // 0x126cec: 0xc05d25c  jal         func_174970
label_126cf0:
    if (ctx->pc == 0x126CF0u) {
        ctx->pc = 0x126CF4u;
        goto label_126cf4;
    }
    ctx->pc = 0x126CECu;
    SET_GPR_U32(ctx, 31, 0x126CF4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x126CECu, 0x126CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CF4u;
label_126cf4:
    // 0x126cf4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_126cf8:
    if (ctx->pc == 0x126CF8u) {
        ctx->pc = 0x126CFCu;
        goto label_126cfc;
    }
    ctx->pc = 0x126CF4u;
    {
        const bool branch_taken_0x126cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126cf4) {
            ctx->pc = 0x126D9Cu;
            goto label_126d9c;
        }
    }
    ctx->pc = 0x126CFCu;
label_126cfc:
    // 0x126cfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126d00:
    // 0x126d00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d04:
    // 0x126d04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126d08:
    // 0x126d08: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x126d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_126d0c:
    // 0x126d0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d10:
    // 0x126d10: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126d14:
    // 0x126d14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d18:
    // 0x126d18: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126d18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126d1c:
    // 0x126d1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d20:
    // 0x126d20: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126d20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126d24:
    // 0x126d24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d28:
    // 0x126d28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126d2c:
    // 0x126d2c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_126d30:
    if (ctx->pc == 0x126D30u) {
        ctx->pc = 0x126D34u;
        goto label_126d34;
    }
    ctx->pc = 0x126D2Cu;
    {
        const bool branch_taken_0x126d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d2c) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126D34u;
label_126d34:
    // 0x126d34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_126d38:
    // 0x126d38: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x126d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_126d3c:
    // 0x126d3c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x126d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_126d40:
    // 0x126d40: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_126d44:
    if (ctx->pc == 0x126D44u) {
        ctx->pc = 0x126D48u;
        goto label_126d48;
    }
    ctx->pc = 0x126D40u;
    {
        const bool branch_taken_0x126d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d40) {
            ctx->pc = 0x126D9Cu;
            goto label_126d9c;
        }
    }
    ctx->pc = 0x126D48u;
label_126d48:
    // 0x126d48: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x126d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_126d4c:
    // 0x126d4c: 0x8c236838  lw          $v1, 0x6838($at)
    ctx->pc = 0x126d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26680)));
label_126d50:
    // 0x126d50: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_126d54:
    if (ctx->pc == 0x126D54u) {
        ctx->pc = 0x126D58u;
        goto label_126d58;
    }
    ctx->pc = 0x126D50u;
    {
        const bool branch_taken_0x126d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d50) {
            ctx->pc = 0x126D9Cu;
            goto label_126d9c;
        }
    }
    ctx->pc = 0x126D58u;
label_126d58:
    // 0x126d58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_126d5c:
    // 0x126d5c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x126d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_126d60:
    // 0x126d60: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x126d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_126d64:
    // 0x126d64: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_126d68:
    if (ctx->pc == 0x126D68u) {
        ctx->pc = 0x126D6Cu;
        goto label_126d6c;
    }
    ctx->pc = 0x126D64u;
    {
        const bool branch_taken_0x126d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d64) {
            ctx->pc = 0x126D9Cu;
            goto label_126d9c;
        }
    }
    ctx->pc = 0x126D6Cu;
label_126d6c:
    // 0x126d6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126d70:
    // 0x126d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d74:
    // 0x126d74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126d78:
    // 0x126d78: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x126d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_126d7c:
    // 0x126d7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d80:
    // 0x126d80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126d84:
    // 0x126d84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d88:
    // 0x126d88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126d8c:
    // 0x126d8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d90:
    // 0x126d90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126d94:
    // 0x126d94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126d98:
    // 0x126d98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126d9c:
    // 0x126d9c: 0x1000000f  b           . + 4 + (0xF << 2)
label_126da0:
    if (ctx->pc == 0x126DA0u) {
        ctx->pc = 0x126DA4u;
        goto label_126da4;
    }
    ctx->pc = 0x126D9Cu;
    {
        const bool branch_taken_0x126d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d9c) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126DA4u;
label_126da4:
    // 0x126da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126da8:
    // 0x126da8: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x126da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126dac:
    // 0x126dac: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x126dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_126db0:
    // 0x126db0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x126db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_126db4:
    // 0x126db4: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x126db4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126db8:
    // 0x126db8: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x126db8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
label_126dbc:
    // 0x126dbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126dc0:
    // 0x126dc0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x126dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_126dc4:
    // 0x126dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126dc8:
    // 0x126dc8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126dcc:
    // 0x126dcc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126dd0:
    // 0x126dd0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x126dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_126dd4:
    // 0x126dd4: 0x10000001  b           . + 4 + (0x1 << 2)
label_126dd8:
    if (ctx->pc == 0x126DD8u) {
        ctx->pc = 0x126DDCu;
        goto label_126ddc;
    }
    ctx->pc = 0x126DD4u;
    {
        const bool branch_taken_0x126dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126dd4) {
            ctx->pc = 0x126DDCu;
            goto label_126ddc;
        }
    }
    ctx->pc = 0x126DDCu;
label_126ddc:
    // 0x126ddc: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x126ddcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_126de0:
    // 0x126de0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x126de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_126de4:
    // 0x126de4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126de8:
    // 0x126de8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_126dec:
    // 0x126dec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x126decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_126df0:
    // 0x126df0: 0x3e00008  jr          $ra
label_126df4:
    if (ctx->pc == 0x126DF4u) {
        ctx->pc = 0x126DF8u;
        goto label_fallthrough_0x126df0;
    }
    ctx->pc = 0x126DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x126df0:
    ctx->pc = 0x126DF8u;
}
