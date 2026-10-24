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

// Function: Pl_r1_jump
// Address: 0x147620 - 0x1480f8
void Pl_r1_jump_0x147620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_jump_0x147620");
#endif

    switch (ctx->pc) {
        case 0x147620u: goto label_147620;
        case 0x147624u: goto label_147624;
        case 0x147628u: goto label_147628;
        case 0x14762cu: goto label_14762c;
        case 0x147630u: goto label_147630;
        case 0x147634u: goto label_147634;
        case 0x147638u: goto label_147638;
        case 0x14763cu: goto label_14763c;
        case 0x147640u: goto label_147640;
        case 0x147644u: goto label_147644;
        case 0x147648u: goto label_147648;
        case 0x14764cu: goto label_14764c;
        case 0x147650u: goto label_147650;
        case 0x147654u: goto label_147654;
        case 0x147658u: goto label_147658;
        case 0x14765cu: goto label_14765c;
        case 0x147660u: goto label_147660;
        case 0x147664u: goto label_147664;
        case 0x147668u: goto label_147668;
        case 0x14766cu: goto label_14766c;
        case 0x147670u: goto label_147670;
        case 0x147674u: goto label_147674;
        case 0x147678u: goto label_147678;
        case 0x14767cu: goto label_14767c;
        case 0x147680u: goto label_147680;
        case 0x147684u: goto label_147684;
        case 0x147688u: goto label_147688;
        case 0x14768cu: goto label_14768c;
        case 0x147690u: goto label_147690;
        case 0x147694u: goto label_147694;
        case 0x147698u: goto label_147698;
        case 0x14769cu: goto label_14769c;
        case 0x1476a0u: goto label_1476a0;
        case 0x1476a4u: goto label_1476a4;
        case 0x1476a8u: goto label_1476a8;
        case 0x1476acu: goto label_1476ac;
        case 0x1476b0u: goto label_1476b0;
        case 0x1476b4u: goto label_1476b4;
        case 0x1476b8u: goto label_1476b8;
        case 0x1476bcu: goto label_1476bc;
        case 0x1476c0u: goto label_1476c0;
        case 0x1476c4u: goto label_1476c4;
        case 0x1476c8u: goto label_1476c8;
        case 0x1476ccu: goto label_1476cc;
        case 0x1476d0u: goto label_1476d0;
        case 0x1476d4u: goto label_1476d4;
        case 0x1476d8u: goto label_1476d8;
        case 0x1476dcu: goto label_1476dc;
        case 0x1476e0u: goto label_1476e0;
        case 0x1476e4u: goto label_1476e4;
        case 0x1476e8u: goto label_1476e8;
        case 0x1476ecu: goto label_1476ec;
        case 0x1476f0u: goto label_1476f0;
        case 0x1476f4u: goto label_1476f4;
        case 0x1476f8u: goto label_1476f8;
        case 0x1476fcu: goto label_1476fc;
        case 0x147700u: goto label_147700;
        case 0x147704u: goto label_147704;
        case 0x147708u: goto label_147708;
        case 0x14770cu: goto label_14770c;
        case 0x147710u: goto label_147710;
        case 0x147714u: goto label_147714;
        case 0x147718u: goto label_147718;
        case 0x14771cu: goto label_14771c;
        case 0x147720u: goto label_147720;
        case 0x147724u: goto label_147724;
        case 0x147728u: goto label_147728;
        case 0x14772cu: goto label_14772c;
        case 0x147730u: goto label_147730;
        case 0x147734u: goto label_147734;
        case 0x147738u: goto label_147738;
        case 0x14773cu: goto label_14773c;
        case 0x147740u: goto label_147740;
        case 0x147744u: goto label_147744;
        case 0x147748u: goto label_147748;
        case 0x14774cu: goto label_14774c;
        case 0x147750u: goto label_147750;
        case 0x147754u: goto label_147754;
        case 0x147758u: goto label_147758;
        case 0x14775cu: goto label_14775c;
        case 0x147760u: goto label_147760;
        case 0x147764u: goto label_147764;
        case 0x147768u: goto label_147768;
        case 0x14776cu: goto label_14776c;
        case 0x147770u: goto label_147770;
        case 0x147774u: goto label_147774;
        case 0x147778u: goto label_147778;
        case 0x14777cu: goto label_14777c;
        case 0x147780u: goto label_147780;
        case 0x147784u: goto label_147784;
        case 0x147788u: goto label_147788;
        case 0x14778cu: goto label_14778c;
        case 0x147790u: goto label_147790;
        case 0x147794u: goto label_147794;
        case 0x147798u: goto label_147798;
        case 0x14779cu: goto label_14779c;
        case 0x1477a0u: goto label_1477a0;
        case 0x1477a4u: goto label_1477a4;
        case 0x1477a8u: goto label_1477a8;
        case 0x1477acu: goto label_1477ac;
        case 0x1477b0u: goto label_1477b0;
        case 0x1477b4u: goto label_1477b4;
        case 0x1477b8u: goto label_1477b8;
        case 0x1477bcu: goto label_1477bc;
        case 0x1477c0u: goto label_1477c0;
        case 0x1477c4u: goto label_1477c4;
        case 0x1477c8u: goto label_1477c8;
        case 0x1477ccu: goto label_1477cc;
        case 0x1477d0u: goto label_1477d0;
        case 0x1477d4u: goto label_1477d4;
        case 0x1477d8u: goto label_1477d8;
        case 0x1477dcu: goto label_1477dc;
        case 0x1477e0u: goto label_1477e0;
        case 0x1477e4u: goto label_1477e4;
        case 0x1477e8u: goto label_1477e8;
        case 0x1477ecu: goto label_1477ec;
        case 0x1477f0u: goto label_1477f0;
        case 0x1477f4u: goto label_1477f4;
        case 0x1477f8u: goto label_1477f8;
        case 0x1477fcu: goto label_1477fc;
        case 0x147800u: goto label_147800;
        case 0x147804u: goto label_147804;
        case 0x147808u: goto label_147808;
        case 0x14780cu: goto label_14780c;
        case 0x147810u: goto label_147810;
        case 0x147814u: goto label_147814;
        case 0x147818u: goto label_147818;
        case 0x14781cu: goto label_14781c;
        case 0x147820u: goto label_147820;
        case 0x147824u: goto label_147824;
        case 0x147828u: goto label_147828;
        case 0x14782cu: goto label_14782c;
        case 0x147830u: goto label_147830;
        case 0x147834u: goto label_147834;
        case 0x147838u: goto label_147838;
        case 0x14783cu: goto label_14783c;
        case 0x147840u: goto label_147840;
        case 0x147844u: goto label_147844;
        case 0x147848u: goto label_147848;
        case 0x14784cu: goto label_14784c;
        case 0x147850u: goto label_147850;
        case 0x147854u: goto label_147854;
        case 0x147858u: goto label_147858;
        case 0x14785cu: goto label_14785c;
        case 0x147860u: goto label_147860;
        case 0x147864u: goto label_147864;
        case 0x147868u: goto label_147868;
        case 0x14786cu: goto label_14786c;
        case 0x147870u: goto label_147870;
        case 0x147874u: goto label_147874;
        case 0x147878u: goto label_147878;
        case 0x14787cu: goto label_14787c;
        case 0x147880u: goto label_147880;
        case 0x147884u: goto label_147884;
        case 0x147888u: goto label_147888;
        case 0x14788cu: goto label_14788c;
        case 0x147890u: goto label_147890;
        case 0x147894u: goto label_147894;
        case 0x147898u: goto label_147898;
        case 0x14789cu: goto label_14789c;
        case 0x1478a0u: goto label_1478a0;
        case 0x1478a4u: goto label_1478a4;
        case 0x1478a8u: goto label_1478a8;
        case 0x1478acu: goto label_1478ac;
        case 0x1478b0u: goto label_1478b0;
        case 0x1478b4u: goto label_1478b4;
        case 0x1478b8u: goto label_1478b8;
        case 0x1478bcu: goto label_1478bc;
        case 0x1478c0u: goto label_1478c0;
        case 0x1478c4u: goto label_1478c4;
        case 0x1478c8u: goto label_1478c8;
        case 0x1478ccu: goto label_1478cc;
        case 0x1478d0u: goto label_1478d0;
        case 0x1478d4u: goto label_1478d4;
        case 0x1478d8u: goto label_1478d8;
        case 0x1478dcu: goto label_1478dc;
        case 0x1478e0u: goto label_1478e0;
        case 0x1478e4u: goto label_1478e4;
        case 0x1478e8u: goto label_1478e8;
        case 0x1478ecu: goto label_1478ec;
        case 0x1478f0u: goto label_1478f0;
        case 0x1478f4u: goto label_1478f4;
        case 0x1478f8u: goto label_1478f8;
        case 0x1478fcu: goto label_1478fc;
        case 0x147900u: goto label_147900;
        case 0x147904u: goto label_147904;
        case 0x147908u: goto label_147908;
        case 0x14790cu: goto label_14790c;
        case 0x147910u: goto label_147910;
        case 0x147914u: goto label_147914;
        case 0x147918u: goto label_147918;
        case 0x14791cu: goto label_14791c;
        case 0x147920u: goto label_147920;
        case 0x147924u: goto label_147924;
        case 0x147928u: goto label_147928;
        case 0x14792cu: goto label_14792c;
        case 0x147930u: goto label_147930;
        case 0x147934u: goto label_147934;
        case 0x147938u: goto label_147938;
        case 0x14793cu: goto label_14793c;
        case 0x147940u: goto label_147940;
        case 0x147944u: goto label_147944;
        case 0x147948u: goto label_147948;
        case 0x14794cu: goto label_14794c;
        case 0x147950u: goto label_147950;
        case 0x147954u: goto label_147954;
        case 0x147958u: goto label_147958;
        case 0x14795cu: goto label_14795c;
        case 0x147960u: goto label_147960;
        case 0x147964u: goto label_147964;
        case 0x147968u: goto label_147968;
        case 0x14796cu: goto label_14796c;
        case 0x147970u: goto label_147970;
        case 0x147974u: goto label_147974;
        case 0x147978u: goto label_147978;
        case 0x14797cu: goto label_14797c;
        case 0x147980u: goto label_147980;
        case 0x147984u: goto label_147984;
        case 0x147988u: goto label_147988;
        case 0x14798cu: goto label_14798c;
        case 0x147990u: goto label_147990;
        case 0x147994u: goto label_147994;
        case 0x147998u: goto label_147998;
        case 0x14799cu: goto label_14799c;
        case 0x1479a0u: goto label_1479a0;
        case 0x1479a4u: goto label_1479a4;
        case 0x1479a8u: goto label_1479a8;
        case 0x1479acu: goto label_1479ac;
        case 0x1479b0u: goto label_1479b0;
        case 0x1479b4u: goto label_1479b4;
        case 0x1479b8u: goto label_1479b8;
        case 0x1479bcu: goto label_1479bc;
        case 0x1479c0u: goto label_1479c0;
        case 0x1479c4u: goto label_1479c4;
        case 0x1479c8u: goto label_1479c8;
        case 0x1479ccu: goto label_1479cc;
        case 0x1479d0u: goto label_1479d0;
        case 0x1479d4u: goto label_1479d4;
        case 0x1479d8u: goto label_1479d8;
        case 0x1479dcu: goto label_1479dc;
        case 0x1479e0u: goto label_1479e0;
        case 0x1479e4u: goto label_1479e4;
        case 0x1479e8u: goto label_1479e8;
        case 0x1479ecu: goto label_1479ec;
        case 0x1479f0u: goto label_1479f0;
        case 0x1479f4u: goto label_1479f4;
        case 0x1479f8u: goto label_1479f8;
        case 0x1479fcu: goto label_1479fc;
        case 0x147a00u: goto label_147a00;
        case 0x147a04u: goto label_147a04;
        case 0x147a08u: goto label_147a08;
        case 0x147a0cu: goto label_147a0c;
        case 0x147a10u: goto label_147a10;
        case 0x147a14u: goto label_147a14;
        case 0x147a18u: goto label_147a18;
        case 0x147a1cu: goto label_147a1c;
        case 0x147a20u: goto label_147a20;
        case 0x147a24u: goto label_147a24;
        case 0x147a28u: goto label_147a28;
        case 0x147a2cu: goto label_147a2c;
        case 0x147a30u: goto label_147a30;
        case 0x147a34u: goto label_147a34;
        case 0x147a38u: goto label_147a38;
        case 0x147a3cu: goto label_147a3c;
        case 0x147a40u: goto label_147a40;
        case 0x147a44u: goto label_147a44;
        case 0x147a48u: goto label_147a48;
        case 0x147a4cu: goto label_147a4c;
        case 0x147a50u: goto label_147a50;
        case 0x147a54u: goto label_147a54;
        case 0x147a58u: goto label_147a58;
        case 0x147a5cu: goto label_147a5c;
        case 0x147a60u: goto label_147a60;
        case 0x147a64u: goto label_147a64;
        case 0x147a68u: goto label_147a68;
        case 0x147a6cu: goto label_147a6c;
        case 0x147a70u: goto label_147a70;
        case 0x147a74u: goto label_147a74;
        case 0x147a78u: goto label_147a78;
        case 0x147a7cu: goto label_147a7c;
        case 0x147a80u: goto label_147a80;
        case 0x147a84u: goto label_147a84;
        case 0x147a88u: goto label_147a88;
        case 0x147a8cu: goto label_147a8c;
        case 0x147a90u: goto label_147a90;
        case 0x147a94u: goto label_147a94;
        case 0x147a98u: goto label_147a98;
        case 0x147a9cu: goto label_147a9c;
        case 0x147aa0u: goto label_147aa0;
        case 0x147aa4u: goto label_147aa4;
        case 0x147aa8u: goto label_147aa8;
        case 0x147aacu: goto label_147aac;
        case 0x147ab0u: goto label_147ab0;
        case 0x147ab4u: goto label_147ab4;
        case 0x147ab8u: goto label_147ab8;
        case 0x147abcu: goto label_147abc;
        case 0x147ac0u: goto label_147ac0;
        case 0x147ac4u: goto label_147ac4;
        case 0x147ac8u: goto label_147ac8;
        case 0x147accu: goto label_147acc;
        case 0x147ad0u: goto label_147ad0;
        case 0x147ad4u: goto label_147ad4;
        case 0x147ad8u: goto label_147ad8;
        case 0x147adcu: goto label_147adc;
        case 0x147ae0u: goto label_147ae0;
        case 0x147ae4u: goto label_147ae4;
        case 0x147ae8u: goto label_147ae8;
        case 0x147aecu: goto label_147aec;
        case 0x147af0u: goto label_147af0;
        case 0x147af4u: goto label_147af4;
        case 0x147af8u: goto label_147af8;
        case 0x147afcu: goto label_147afc;
        case 0x147b00u: goto label_147b00;
        case 0x147b04u: goto label_147b04;
        case 0x147b08u: goto label_147b08;
        case 0x147b0cu: goto label_147b0c;
        case 0x147b10u: goto label_147b10;
        case 0x147b14u: goto label_147b14;
        case 0x147b18u: goto label_147b18;
        case 0x147b1cu: goto label_147b1c;
        case 0x147b20u: goto label_147b20;
        case 0x147b24u: goto label_147b24;
        case 0x147b28u: goto label_147b28;
        case 0x147b2cu: goto label_147b2c;
        case 0x147b30u: goto label_147b30;
        case 0x147b34u: goto label_147b34;
        case 0x147b38u: goto label_147b38;
        case 0x147b3cu: goto label_147b3c;
        case 0x147b40u: goto label_147b40;
        case 0x147b44u: goto label_147b44;
        case 0x147b48u: goto label_147b48;
        case 0x147b4cu: goto label_147b4c;
        case 0x147b50u: goto label_147b50;
        case 0x147b54u: goto label_147b54;
        case 0x147b58u: goto label_147b58;
        case 0x147b5cu: goto label_147b5c;
        case 0x147b60u: goto label_147b60;
        case 0x147b64u: goto label_147b64;
        case 0x147b68u: goto label_147b68;
        case 0x147b6cu: goto label_147b6c;
        case 0x147b70u: goto label_147b70;
        case 0x147b74u: goto label_147b74;
        case 0x147b78u: goto label_147b78;
        case 0x147b7cu: goto label_147b7c;
        case 0x147b80u: goto label_147b80;
        case 0x147b84u: goto label_147b84;
        case 0x147b88u: goto label_147b88;
        case 0x147b8cu: goto label_147b8c;
        case 0x147b90u: goto label_147b90;
        case 0x147b94u: goto label_147b94;
        case 0x147b98u: goto label_147b98;
        case 0x147b9cu: goto label_147b9c;
        case 0x147ba0u: goto label_147ba0;
        case 0x147ba4u: goto label_147ba4;
        case 0x147ba8u: goto label_147ba8;
        case 0x147bacu: goto label_147bac;
        case 0x147bb0u: goto label_147bb0;
        case 0x147bb4u: goto label_147bb4;
        case 0x147bb8u: goto label_147bb8;
        case 0x147bbcu: goto label_147bbc;
        case 0x147bc0u: goto label_147bc0;
        case 0x147bc4u: goto label_147bc4;
        case 0x147bc8u: goto label_147bc8;
        case 0x147bccu: goto label_147bcc;
        case 0x147bd0u: goto label_147bd0;
        case 0x147bd4u: goto label_147bd4;
        case 0x147bd8u: goto label_147bd8;
        case 0x147bdcu: goto label_147bdc;
        case 0x147be0u: goto label_147be0;
        case 0x147be4u: goto label_147be4;
        case 0x147be8u: goto label_147be8;
        case 0x147becu: goto label_147bec;
        case 0x147bf0u: goto label_147bf0;
        case 0x147bf4u: goto label_147bf4;
        case 0x147bf8u: goto label_147bf8;
        case 0x147bfcu: goto label_147bfc;
        case 0x147c00u: goto label_147c00;
        case 0x147c04u: goto label_147c04;
        case 0x147c08u: goto label_147c08;
        case 0x147c0cu: goto label_147c0c;
        case 0x147c10u: goto label_147c10;
        case 0x147c14u: goto label_147c14;
        case 0x147c18u: goto label_147c18;
        case 0x147c1cu: goto label_147c1c;
        case 0x147c20u: goto label_147c20;
        case 0x147c24u: goto label_147c24;
        case 0x147c28u: goto label_147c28;
        case 0x147c2cu: goto label_147c2c;
        case 0x147c30u: goto label_147c30;
        case 0x147c34u: goto label_147c34;
        case 0x147c38u: goto label_147c38;
        case 0x147c3cu: goto label_147c3c;
        case 0x147c40u: goto label_147c40;
        case 0x147c44u: goto label_147c44;
        case 0x147c48u: goto label_147c48;
        case 0x147c4cu: goto label_147c4c;
        case 0x147c50u: goto label_147c50;
        case 0x147c54u: goto label_147c54;
        case 0x147c58u: goto label_147c58;
        case 0x147c5cu: goto label_147c5c;
        case 0x147c60u: goto label_147c60;
        case 0x147c64u: goto label_147c64;
        case 0x147c68u: goto label_147c68;
        case 0x147c6cu: goto label_147c6c;
        case 0x147c70u: goto label_147c70;
        case 0x147c74u: goto label_147c74;
        case 0x147c78u: goto label_147c78;
        case 0x147c7cu: goto label_147c7c;
        case 0x147c80u: goto label_147c80;
        case 0x147c84u: goto label_147c84;
        case 0x147c88u: goto label_147c88;
        case 0x147c8cu: goto label_147c8c;
        case 0x147c90u: goto label_147c90;
        case 0x147c94u: goto label_147c94;
        case 0x147c98u: goto label_147c98;
        case 0x147c9cu: goto label_147c9c;
        case 0x147ca0u: goto label_147ca0;
        case 0x147ca4u: goto label_147ca4;
        case 0x147ca8u: goto label_147ca8;
        case 0x147cacu: goto label_147cac;
        case 0x147cb0u: goto label_147cb0;
        case 0x147cb4u: goto label_147cb4;
        case 0x147cb8u: goto label_147cb8;
        case 0x147cbcu: goto label_147cbc;
        case 0x147cc0u: goto label_147cc0;
        case 0x147cc4u: goto label_147cc4;
        case 0x147cc8u: goto label_147cc8;
        case 0x147cccu: goto label_147ccc;
        case 0x147cd0u: goto label_147cd0;
        case 0x147cd4u: goto label_147cd4;
        case 0x147cd8u: goto label_147cd8;
        case 0x147cdcu: goto label_147cdc;
        case 0x147ce0u: goto label_147ce0;
        case 0x147ce4u: goto label_147ce4;
        case 0x147ce8u: goto label_147ce8;
        case 0x147cecu: goto label_147cec;
        case 0x147cf0u: goto label_147cf0;
        case 0x147cf4u: goto label_147cf4;
        case 0x147cf8u: goto label_147cf8;
        case 0x147cfcu: goto label_147cfc;
        case 0x147d00u: goto label_147d00;
        case 0x147d04u: goto label_147d04;
        case 0x147d08u: goto label_147d08;
        case 0x147d0cu: goto label_147d0c;
        case 0x147d10u: goto label_147d10;
        case 0x147d14u: goto label_147d14;
        case 0x147d18u: goto label_147d18;
        case 0x147d1cu: goto label_147d1c;
        case 0x147d20u: goto label_147d20;
        case 0x147d24u: goto label_147d24;
        case 0x147d28u: goto label_147d28;
        case 0x147d2cu: goto label_147d2c;
        case 0x147d30u: goto label_147d30;
        case 0x147d34u: goto label_147d34;
        case 0x147d38u: goto label_147d38;
        case 0x147d3cu: goto label_147d3c;
        case 0x147d40u: goto label_147d40;
        case 0x147d44u: goto label_147d44;
        case 0x147d48u: goto label_147d48;
        case 0x147d4cu: goto label_147d4c;
        case 0x147d50u: goto label_147d50;
        case 0x147d54u: goto label_147d54;
        case 0x147d58u: goto label_147d58;
        case 0x147d5cu: goto label_147d5c;
        case 0x147d60u: goto label_147d60;
        case 0x147d64u: goto label_147d64;
        case 0x147d68u: goto label_147d68;
        case 0x147d6cu: goto label_147d6c;
        case 0x147d70u: goto label_147d70;
        case 0x147d74u: goto label_147d74;
        case 0x147d78u: goto label_147d78;
        case 0x147d7cu: goto label_147d7c;
        case 0x147d80u: goto label_147d80;
        case 0x147d84u: goto label_147d84;
        case 0x147d88u: goto label_147d88;
        case 0x147d8cu: goto label_147d8c;
        case 0x147d90u: goto label_147d90;
        case 0x147d94u: goto label_147d94;
        case 0x147d98u: goto label_147d98;
        case 0x147d9cu: goto label_147d9c;
        case 0x147da0u: goto label_147da0;
        case 0x147da4u: goto label_147da4;
        case 0x147da8u: goto label_147da8;
        case 0x147dacu: goto label_147dac;
        case 0x147db0u: goto label_147db0;
        case 0x147db4u: goto label_147db4;
        case 0x147db8u: goto label_147db8;
        case 0x147dbcu: goto label_147dbc;
        case 0x147dc0u: goto label_147dc0;
        case 0x147dc4u: goto label_147dc4;
        case 0x147dc8u: goto label_147dc8;
        case 0x147dccu: goto label_147dcc;
        case 0x147dd0u: goto label_147dd0;
        case 0x147dd4u: goto label_147dd4;
        case 0x147dd8u: goto label_147dd8;
        case 0x147ddcu: goto label_147ddc;
        case 0x147de0u: goto label_147de0;
        case 0x147de4u: goto label_147de4;
        case 0x147de8u: goto label_147de8;
        case 0x147decu: goto label_147dec;
        case 0x147df0u: goto label_147df0;
        case 0x147df4u: goto label_147df4;
        case 0x147df8u: goto label_147df8;
        case 0x147dfcu: goto label_147dfc;
        case 0x147e00u: goto label_147e00;
        case 0x147e04u: goto label_147e04;
        case 0x147e08u: goto label_147e08;
        case 0x147e0cu: goto label_147e0c;
        case 0x147e10u: goto label_147e10;
        case 0x147e14u: goto label_147e14;
        case 0x147e18u: goto label_147e18;
        case 0x147e1cu: goto label_147e1c;
        case 0x147e20u: goto label_147e20;
        case 0x147e24u: goto label_147e24;
        case 0x147e28u: goto label_147e28;
        case 0x147e2cu: goto label_147e2c;
        case 0x147e30u: goto label_147e30;
        case 0x147e34u: goto label_147e34;
        case 0x147e38u: goto label_147e38;
        case 0x147e3cu: goto label_147e3c;
        case 0x147e40u: goto label_147e40;
        case 0x147e44u: goto label_147e44;
        case 0x147e48u: goto label_147e48;
        case 0x147e4cu: goto label_147e4c;
        case 0x147e50u: goto label_147e50;
        case 0x147e54u: goto label_147e54;
        case 0x147e58u: goto label_147e58;
        case 0x147e5cu: goto label_147e5c;
        case 0x147e60u: goto label_147e60;
        case 0x147e64u: goto label_147e64;
        case 0x147e68u: goto label_147e68;
        case 0x147e6cu: goto label_147e6c;
        case 0x147e70u: goto label_147e70;
        case 0x147e74u: goto label_147e74;
        case 0x147e78u: goto label_147e78;
        case 0x147e7cu: goto label_147e7c;
        case 0x147e80u: goto label_147e80;
        case 0x147e84u: goto label_147e84;
        case 0x147e88u: goto label_147e88;
        case 0x147e8cu: goto label_147e8c;
        case 0x147e90u: goto label_147e90;
        case 0x147e94u: goto label_147e94;
        case 0x147e98u: goto label_147e98;
        case 0x147e9cu: goto label_147e9c;
        case 0x147ea0u: goto label_147ea0;
        case 0x147ea4u: goto label_147ea4;
        case 0x147ea8u: goto label_147ea8;
        case 0x147eacu: goto label_147eac;
        case 0x147eb0u: goto label_147eb0;
        case 0x147eb4u: goto label_147eb4;
        case 0x147eb8u: goto label_147eb8;
        case 0x147ebcu: goto label_147ebc;
        case 0x147ec0u: goto label_147ec0;
        case 0x147ec4u: goto label_147ec4;
        case 0x147ec8u: goto label_147ec8;
        case 0x147eccu: goto label_147ecc;
        case 0x147ed0u: goto label_147ed0;
        case 0x147ed4u: goto label_147ed4;
        case 0x147ed8u: goto label_147ed8;
        case 0x147edcu: goto label_147edc;
        case 0x147ee0u: goto label_147ee0;
        case 0x147ee4u: goto label_147ee4;
        case 0x147ee8u: goto label_147ee8;
        case 0x147eecu: goto label_147eec;
        case 0x147ef0u: goto label_147ef0;
        case 0x147ef4u: goto label_147ef4;
        case 0x147ef8u: goto label_147ef8;
        case 0x147efcu: goto label_147efc;
        case 0x147f00u: goto label_147f00;
        case 0x147f04u: goto label_147f04;
        case 0x147f08u: goto label_147f08;
        case 0x147f0cu: goto label_147f0c;
        case 0x147f10u: goto label_147f10;
        case 0x147f14u: goto label_147f14;
        case 0x147f18u: goto label_147f18;
        case 0x147f1cu: goto label_147f1c;
        case 0x147f20u: goto label_147f20;
        case 0x147f24u: goto label_147f24;
        case 0x147f28u: goto label_147f28;
        case 0x147f2cu: goto label_147f2c;
        case 0x147f30u: goto label_147f30;
        case 0x147f34u: goto label_147f34;
        case 0x147f38u: goto label_147f38;
        case 0x147f3cu: goto label_147f3c;
        case 0x147f40u: goto label_147f40;
        case 0x147f44u: goto label_147f44;
        case 0x147f48u: goto label_147f48;
        case 0x147f4cu: goto label_147f4c;
        case 0x147f50u: goto label_147f50;
        case 0x147f54u: goto label_147f54;
        case 0x147f58u: goto label_147f58;
        case 0x147f5cu: goto label_147f5c;
        case 0x147f60u: goto label_147f60;
        case 0x147f64u: goto label_147f64;
        case 0x147f68u: goto label_147f68;
        case 0x147f6cu: goto label_147f6c;
        case 0x147f70u: goto label_147f70;
        case 0x147f74u: goto label_147f74;
        case 0x147f78u: goto label_147f78;
        case 0x147f7cu: goto label_147f7c;
        case 0x147f80u: goto label_147f80;
        case 0x147f84u: goto label_147f84;
        case 0x147f88u: goto label_147f88;
        case 0x147f8cu: goto label_147f8c;
        case 0x147f90u: goto label_147f90;
        case 0x147f94u: goto label_147f94;
        case 0x147f98u: goto label_147f98;
        case 0x147f9cu: goto label_147f9c;
        case 0x147fa0u: goto label_147fa0;
        case 0x147fa4u: goto label_147fa4;
        case 0x147fa8u: goto label_147fa8;
        case 0x147facu: goto label_147fac;
        case 0x147fb0u: goto label_147fb0;
        case 0x147fb4u: goto label_147fb4;
        case 0x147fb8u: goto label_147fb8;
        case 0x147fbcu: goto label_147fbc;
        case 0x147fc0u: goto label_147fc0;
        case 0x147fc4u: goto label_147fc4;
        case 0x147fc8u: goto label_147fc8;
        case 0x147fccu: goto label_147fcc;
        case 0x147fd0u: goto label_147fd0;
        case 0x147fd4u: goto label_147fd4;
        case 0x147fd8u: goto label_147fd8;
        case 0x147fdcu: goto label_147fdc;
        case 0x147fe0u: goto label_147fe0;
        case 0x147fe4u: goto label_147fe4;
        case 0x147fe8u: goto label_147fe8;
        case 0x147fecu: goto label_147fec;
        case 0x147ff0u: goto label_147ff0;
        case 0x147ff4u: goto label_147ff4;
        case 0x147ff8u: goto label_147ff8;
        case 0x147ffcu: goto label_147ffc;
        case 0x148000u: goto label_148000;
        case 0x148004u: goto label_148004;
        case 0x148008u: goto label_148008;
        case 0x14800cu: goto label_14800c;
        case 0x148010u: goto label_148010;
        case 0x148014u: goto label_148014;
        case 0x148018u: goto label_148018;
        case 0x14801cu: goto label_14801c;
        case 0x148020u: goto label_148020;
        case 0x148024u: goto label_148024;
        case 0x148028u: goto label_148028;
        case 0x14802cu: goto label_14802c;
        case 0x148030u: goto label_148030;
        case 0x148034u: goto label_148034;
        case 0x148038u: goto label_148038;
        case 0x14803cu: goto label_14803c;
        case 0x148040u: goto label_148040;
        case 0x148044u: goto label_148044;
        case 0x148048u: goto label_148048;
        case 0x14804cu: goto label_14804c;
        case 0x148050u: goto label_148050;
        case 0x148054u: goto label_148054;
        case 0x148058u: goto label_148058;
        case 0x14805cu: goto label_14805c;
        case 0x148060u: goto label_148060;
        case 0x148064u: goto label_148064;
        case 0x148068u: goto label_148068;
        case 0x14806cu: goto label_14806c;
        case 0x148070u: goto label_148070;
        case 0x148074u: goto label_148074;
        case 0x148078u: goto label_148078;
        case 0x14807cu: goto label_14807c;
        case 0x148080u: goto label_148080;
        case 0x148084u: goto label_148084;
        case 0x148088u: goto label_148088;
        case 0x14808cu: goto label_14808c;
        case 0x148090u: goto label_148090;
        case 0x148094u: goto label_148094;
        case 0x148098u: goto label_148098;
        case 0x14809cu: goto label_14809c;
        case 0x1480a0u: goto label_1480a0;
        case 0x1480a4u: goto label_1480a4;
        case 0x1480a8u: goto label_1480a8;
        case 0x1480acu: goto label_1480ac;
        case 0x1480b0u: goto label_1480b0;
        case 0x1480b4u: goto label_1480b4;
        case 0x1480b8u: goto label_1480b8;
        case 0x1480bcu: goto label_1480bc;
        case 0x1480c0u: goto label_1480c0;
        case 0x1480c4u: goto label_1480c4;
        case 0x1480c8u: goto label_1480c8;
        case 0x1480ccu: goto label_1480cc;
        case 0x1480d0u: goto label_1480d0;
        case 0x1480d4u: goto label_1480d4;
        case 0x1480d8u: goto label_1480d8;
        case 0x1480dcu: goto label_1480dc;
        case 0x1480e0u: goto label_1480e0;
        case 0x1480e4u: goto label_1480e4;
        case 0x1480e8u: goto label_1480e8;
        case 0x1480ecu: goto label_1480ec;
        case 0x1480f0u: goto label_1480f0;
        case 0x1480f4u: goto label_1480f4;
        default: break;
    }

    ctx->pc = 0x147620u;

label_147620:
    // 0x147620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x147620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_147624:
    // 0x147624: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x147624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_147628:
    // 0x147628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14762c:
    // 0x14762c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x14762cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_147630:
    // 0x147630: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147634:
    // 0x147634: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_147638:
    // 0x147638: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x147638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14763c:
    // 0x14763c: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x14763cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_147640:
    // 0x147640: 0x102002a8  beqz        $at, . + 4 + (0x2A8 << 2)
label_147644:
    if (ctx->pc == 0x147644u) {
        ctx->pc = 0x147648u;
        goto label_147648;
    }
    ctx->pc = 0x147640u;
    {
        const bool branch_taken_0x147640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147640) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147648u;
label_147648:
    // 0x147648: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x147648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_14764c:
    // 0x14764c: 0x2483e740  addiu       $v1, $a0, -0x18C0
    ctx->pc = 0x14764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960960));
label_147650:
    // 0x147650: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x147650u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147654:
    // 0x147654: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x147654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_147658:
    // 0x147658: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x147658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14765c:
    // 0x14765c: 0x800008  jr          $a0
label_147660:
    if (ctx->pc == 0x147660u) {
        ctx->pc = 0x147664u;
        goto label_147664;
    }
    ctx->pc = 0x14765Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14765Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x147664u;
label_147664:
    // 0x147664: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147668:
    // 0x147668: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14766c:
    // 0x14766c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_147670:
    // 0x147670: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x147670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_147674:
    // 0x147674: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147678:
    // 0x147678: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14767c:
    // 0x14767c: 0xc0965d0  jal         func_259740
label_147680:
    if (ctx->pc == 0x147680u) {
        ctx->pc = 0x147684u;
        goto label_147684;
    }
    ctx->pc = 0x14767Cu;
    SET_GPR_U32(ctx, 31, 0x147684u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14767Cu, 0x147684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147684u;
label_147684:
    // 0x147684: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x147684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_147688:
    // 0x147688: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14768c:
    // 0x14768c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x14768cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
label_147690:
    // 0x147690: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147694:
    // 0x147694: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_147698:
    // 0x147698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14769c:
    // 0x14769c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14769cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1476a0:
    // 0x1476a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1476a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1476a4:
    // 0x1476a4: 0x904309da  lbu         $v1, 0x9DA($v0)
    ctx->pc = 0x1476a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
label_1476a8:
    // 0x1476a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1476a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1476ac:
    // 0x1476ac: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1476acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_1476b0:
    // 0x1476b0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1476b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1476b4:
    // 0x1476b4: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
label_1476b8:
    if (ctx->pc == 0x1476B8u) {
        ctx->pc = 0x1476BCu;
        goto label_1476bc;
    }
    ctx->pc = 0x1476B4u;
    {
        const bool branch_taken_0x1476b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1476b4) {
            ctx->pc = 0x147710u;
            goto label_147710;
        }
    }
    ctx->pc = 0x1476BCu;
label_1476bc:
    // 0x1476bc: 0xc067694  jal         func_19DA50
label_1476c0:
    if (ctx->pc == 0x1476C0u) {
        ctx->pc = 0x1476C4u;
        goto label_1476c4;
    }
    ctx->pc = 0x1476BCu;
    SET_GPR_U32(ctx, 31, 0x1476C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1476BCu, 0x1476C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476C4u;
label_1476c4:
    // 0x1476c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1476c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1476c8:
    // 0x1476c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1476c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1476cc:
    // 0x1476cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1476ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1476d0:
    // 0x1476d0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1476d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1476d4:
    // 0x1476d4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1476d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1476d8:
    // 0x1476d8: 0x248352d8  addiu       $v1, $a0, 0x52D8
    ctx->pc = 0x1476d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
label_1476dc:
    // 0x1476dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1476dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1476e0:
    // 0x1476e0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1476e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1476e4:
    // 0x1476e4: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1476e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1476e8:
    // 0x1476e8: 0x3c06469c  lui         $a2, 0x469C
    ctx->pc = 0x1476e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18076 << 16));
label_1476ec:
    // 0x1476ec: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x1476ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_1476f0:
    // 0x1476f0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1476f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1476f4:
    // 0x1476f4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1476f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1476f8:
    // 0x1476f8: 0x8ce80130  lw          $t0, 0x130($a3)
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_1476fc:
    // 0x1476fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1476fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_147700:
    // 0x147700: 0x25050030  addiu       $a1, $t0, 0x30
    ctx->pc = 0x147700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_147704:
    // 0x147704: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x147704u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147708:
    // 0x147708: 0xc067b18  jal         func_19EC60
label_14770c:
    if (ctx->pc == 0x14770Cu) {
        ctx->pc = 0x147710u;
        goto label_147710;
    }
    ctx->pc = 0x147708u;
    SET_GPR_U32(ctx, 31, 0x147710u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x147708u, 0x147710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147710u;
label_147710:
    // 0x147710: 0x3c043e49  lui         $a0, 0x3E49
    ctx->pc = 0x147710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15945 << 16));
label_147714:
    // 0x147714: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x147714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_147718:
    // 0x147718: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x147718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14771c:
    // 0x14771c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147720:
    // 0x147720: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147724:
    // 0x147724: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x147724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_147728:
    // 0x147728: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x147728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14772c:
    // 0x14772c: 0xc058f50  jal         func_163D40
label_147730:
    if (ctx->pc == 0x147730u) {
        ctx->pc = 0x147734u;
        goto label_147734;
    }
    ctx->pc = 0x14772Cu;
    SET_GPR_U32(ctx, 31, 0x147734u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14772Cu, 0x147734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147734u;
label_147734:
    // 0x147734: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147738:
    // 0x147738: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x147738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_14773c:
    // 0x14773c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14773cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147740:
    // 0x147740: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147740u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147744:
    // 0x147744: 0xc096b40  jal         func_25AD00
label_147748:
    if (ctx->pc == 0x147748u) {
        ctx->pc = 0x14774Cu;
        goto label_14774c;
    }
    ctx->pc = 0x147744u;
    SET_GPR_U32(ctx, 31, 0x14774Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147744u, 0x14774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14774Cu;
label_14774c:
    // 0x14774c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14774cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147750:
    // 0x147750: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147754:
    // 0x147754: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x147754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_147758:
    // 0x147758: 0xc05cd58  jal         func_173560
label_14775c:
    if (ctx->pc == 0x14775Cu) {
        ctx->pc = 0x147760u;
        goto label_147760;
    }
    ctx->pc = 0x147758u;
    SET_GPR_U32(ctx, 31, 0x147760u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x147758u, 0x147760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147760u;
label_147760:
    // 0x147760: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147760u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147764:
    // 0x147764: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_147768:
    // 0x147768: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14776c:
    // 0x14776c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_147770:
    // 0x147770: 0xc057480  jal         func_15D200
label_147774:
    if (ctx->pc == 0x147774u) {
        ctx->pc = 0x147778u;
        goto label_147778;
    }
    ctx->pc = 0x147770u;
    SET_GPR_U32(ctx, 31, 0x147778u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x147770u, 0x147778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147778u;
label_147778:
    // 0x147778: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14777c:
    // 0x14777c: 0xc097530  jal         func_25D4C0
label_147780:
    if (ctx->pc == 0x147780u) {
        ctx->pc = 0x147784u;
        goto label_147784;
    }
    ctx->pc = 0x14777Cu;
    SET_GPR_U32(ctx, 31, 0x147784u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14777Cu, 0x147784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147784u;
label_147784:
    // 0x147784: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147788:
    // 0x147788: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x147788u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_14778c:
    // 0x14778c: 0x10a00255  beqz        $a1, . + 4 + (0x255 << 2)
label_147790:
    if (ctx->pc == 0x147790u) {
        ctx->pc = 0x147794u;
        goto label_147794;
    }
    ctx->pc = 0x14778Cu;
    {
        const bool branch_taken_0x14778c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14778c) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147794u;
label_147794:
    // 0x147794: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147798:
    // 0x147798: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14779c:
    // 0x14779c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14779cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1477a0:
    // 0x1477a0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1477a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1477a4:
    // 0x1477a4: 0x1000024f  b           . + 4 + (0x24F << 2)
label_1477a8:
    if (ctx->pc == 0x1477A8u) {
        ctx->pc = 0x1477ACu;
        goto label_1477ac;
    }
    ctx->pc = 0x1477A4u;
    {
        const bool branch_taken_0x1477a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1477a4) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x1477ACu;
label_1477ac:
    // 0x1477ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1477acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1477b0:
    // 0x1477b0: 0xc4601290  lwc1        $f0, 0x1290($v1)
    ctx->pc = 0x1477b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1477b4:
    // 0x1477b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1477b8:
    // 0x1477b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1477b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1477bc:
    // 0x1477bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1477bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1477c0:
    // 0x1477c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1477c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1477c4:
    // 0x1477c4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1477c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_1477c8:
    // 0x1477c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1477c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1477cc:
    // 0x1477cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1477ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1477d0:
    // 0x1477d0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1477d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1477d4:
    // 0x1477d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1477d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1477d8:
    // 0x1477d8: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1477d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1477dc:
    // 0x1477dc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1477dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1477e0:
    // 0x1477e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1477e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1477e4:
    // 0x1477e4: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
label_1477e8:
    if (ctx->pc == 0x1477E8u) {
        ctx->pc = 0x1477ECu;
        goto label_1477ec;
    }
    ctx->pc = 0x1477E4u;
    {
        const bool branch_taken_0x1477e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1477e4) {
            ctx->pc = 0x1479ACu;
            goto label_1479ac;
        }
    }
    ctx->pc = 0x1477ECu;
label_1477ec:
    // 0x1477ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1477ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1477f0:
    // 0x1477f0: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
label_1477f4:
    if (ctx->pc == 0x1477F4u) {
        ctx->pc = 0x1477F8u;
        goto label_1477f8;
    }
    ctx->pc = 0x1477F0u;
    {
        const bool branch_taken_0x1477f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1477f0) {
            ctx->pc = 0x147928u;
            goto label_147928;
        }
    }
    ctx->pc = 0x1477F8u;
label_1477f8:
    // 0x1477f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1477f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1477fc:
    // 0x1477fc: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_147800:
    if (ctx->pc == 0x147800u) {
        ctx->pc = 0x147804u;
        goto label_147804;
    }
    ctx->pc = 0x1477FCu;
    {
        const bool branch_taken_0x1477fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1477fc) {
            ctx->pc = 0x14789Cu;
            goto label_14789c;
        }
    }
    ctx->pc = 0x147804u;
label_147804:
    // 0x147804: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_147808:
    if (ctx->pc == 0x147808u) {
        ctx->pc = 0x14780Cu;
        goto label_14780c;
    }
    ctx->pc = 0x147804u;
    {
        const bool branch_taken_0x147804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147804) {
            ctx->pc = 0x147814u;
            goto label_147814;
        }
    }
    ctx->pc = 0x14780Cu;
label_14780c:
    // 0x14780c: 0x10000023  b           . + 4 + (0x23 << 2)
label_147810:
    if (ctx->pc == 0x147810u) {
        ctx->pc = 0x147814u;
        goto label_147814;
    }
    ctx->pc = 0x14780Cu;
    {
        const bool branch_taken_0x14780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14780c) {
            ctx->pc = 0x14789Cu;
            goto label_14789c;
        }
    }
    ctx->pc = 0x147814u;
label_147814:
    // 0x147814: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147818:
    // 0x147818: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14781c:
    // 0x14781c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x14781cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_147820:
    // 0x147820: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x147820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_147824:
    // 0x147824: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147828:
    // 0x147828: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14782c:
    // 0x14782c: 0xc0965d0  jal         func_259740
label_147830:
    if (ctx->pc == 0x147830u) {
        ctx->pc = 0x147834u;
        goto label_147834;
    }
    ctx->pc = 0x14782Cu;
    SET_GPR_U32(ctx, 31, 0x147834u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14782Cu, 0x147834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147834u;
label_147834:
    // 0x147834: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147834u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147838:
    // 0x147838: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14783c:
    // 0x14783c: 0x94650a02  lhu         $a1, 0xA02($v1)
    ctx->pc = 0x14783cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2562)));
label_147840:
    // 0x147840: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_147844:
    if (ctx->pc == 0x147844u) {
        ctx->pc = 0x147848u;
        goto label_147848;
    }
    ctx->pc = 0x147840u;
    {
        const bool branch_taken_0x147840 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x147840) {
            ctx->pc = 0x14785Cu;
            goto label_14785c;
        }
    }
    ctx->pc = 0x147848u;
label_147848:
    // 0x147848: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x147848u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14784c:
    // 0x14784c: 0x0  nop
    ctx->pc = 0x14784cu;
    // NOP
label_147850:
    // 0x147850: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_147854:
    // 0x147854: 0x10000008  b           . + 4 + (0x8 << 2)
label_147858:
    if (ctx->pc == 0x147858u) {
        ctx->pc = 0x14785Cu;
        goto label_14785c;
    }
    ctx->pc = 0x147854u;
    {
        const bool branch_taken_0x147854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147854) {
            ctx->pc = 0x147878u;
            goto label_147878;
        }
    }
    ctx->pc = 0x14785Cu;
label_14785c:
    // 0x14785c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x14785cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_147860:
    // 0x147860: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x147860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_147864:
    // 0x147864: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x147864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_147868:
    // 0x147868: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x147868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14786c:
    // 0x14786c: 0x0  nop
    ctx->pc = 0x14786cu;
    // NOP
label_147870:
    // 0x147870: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_147874:
    // 0x147874: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x147874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_147878:
    // 0x147878: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x147878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
label_14787c:
    // 0x14787c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14787cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147880:
    // 0x147880: 0x0  nop
    ctx->pc = 0x147880u;
    // NOP
label_147884:
    // 0x147884: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x147884u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_147888:
    // 0x147888: 0x0  nop
    ctx->pc = 0x147888u;
    // NOP
label_14788c:
    // 0x14788c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147890:
    // 0x147890: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x147890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_147894:
    // 0x147894: 0x10000064  b           . + 4 + (0x64 << 2)
label_147898:
    if (ctx->pc == 0x147898u) {
        ctx->pc = 0x14789Cu;
        goto label_14789c;
    }
    ctx->pc = 0x147894u;
    {
        const bool branch_taken_0x147894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147894) {
            ctx->pc = 0x147A28u;
            goto label_147a28;
        }
    }
    ctx->pc = 0x14789Cu;
label_14789c:
    // 0x14789c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1478a0:
    // 0x1478a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1478a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1478a4:
    // 0x1478a4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1478a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1478a8:
    // 0x1478a8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1478ac:
    // 0x1478ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1478acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1478b0:
    // 0x1478b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1478b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1478b4:
    // 0x1478b4: 0xc0965d0  jal         func_259740
label_1478b8:
    if (ctx->pc == 0x1478B8u) {
        ctx->pc = 0x1478BCu;
        goto label_1478bc;
    }
    ctx->pc = 0x1478B4u;
    SET_GPR_U32(ctx, 31, 0x1478BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1478B4u, 0x1478BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1478BCu;
label_1478bc:
    // 0x1478bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1478bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1478c0:
    // 0x1478c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1478c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1478c4:
    // 0x1478c4: 0x94640a02  lhu         $a0, 0xA02($v1)
    ctx->pc = 0x1478c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2562)));
label_1478c8:
    // 0x1478c8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1478cc:
    if (ctx->pc == 0x1478CCu) {
        ctx->pc = 0x1478D0u;
        goto label_1478d0;
    }
    ctx->pc = 0x1478C8u;
    {
        const bool branch_taken_0x1478c8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1478c8) {
            ctx->pc = 0x1478E4u;
            goto label_1478e4;
        }
    }
    ctx->pc = 0x1478D0u;
label_1478d0:
    // 0x1478d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1478d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1478d4:
    // 0x1478d4: 0x0  nop
    ctx->pc = 0x1478d4u;
    // NOP
label_1478d8:
    // 0x1478d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1478d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1478dc:
    // 0x1478dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1478e0:
    if (ctx->pc == 0x1478E0u) {
        ctx->pc = 0x1478E4u;
        goto label_1478e4;
    }
    ctx->pc = 0x1478DCu;
    {
        const bool branch_taken_0x1478dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1478dc) {
            ctx->pc = 0x147900u;
            goto label_147900;
        }
    }
    ctx->pc = 0x1478E4u;
label_1478e4:
    // 0x1478e4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1478e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1478e8:
    // 0x1478e8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1478e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1478ec:
    // 0x1478ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1478ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1478f0:
    // 0x1478f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1478f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1478f4:
    // 0x1478f4: 0x0  nop
    ctx->pc = 0x1478f4u;
    // NOP
label_1478f8:
    // 0x1478f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1478f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1478fc:
    // 0x1478fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1478fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_147900:
    // 0x147900: 0x3c054522  lui         $a1, 0x4522
    ctx->pc = 0x147900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17698 << 16));
label_147904:
    // 0x147904: 0x34a38000  ori         $v1, $a1, 0x8000
    ctx->pc = 0x147904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_147908:
    // 0x147908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14790c:
    // 0x14790c: 0x0  nop
    ctx->pc = 0x14790cu;
    // NOP
label_147910:
    // 0x147910: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x147910u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_147914:
    // 0x147914: 0x0  nop
    ctx->pc = 0x147914u;
    // NOP
label_147918:
    // 0x147918: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14791c:
    // 0x14791c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x14791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_147920:
    // 0x147920: 0x10000041  b           . + 4 + (0x41 << 2)
label_147924:
    if (ctx->pc == 0x147924u) {
        ctx->pc = 0x147928u;
        goto label_147928;
    }
    ctx->pc = 0x147920u;
    {
        const bool branch_taken_0x147920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147920) {
            ctx->pc = 0x147A28u;
            goto label_147a28;
        }
    }
    ctx->pc = 0x147928u;
label_147928:
    // 0x147928: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14792c:
    // 0x14792c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147930:
    // 0x147930: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x147930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_147934:
    // 0x147934: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x147934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_147938:
    // 0x147938: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14793c:
    // 0x14793c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14793cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147940:
    // 0x147940: 0xc0965d0  jal         func_259740
label_147944:
    if (ctx->pc == 0x147944u) {
        ctx->pc = 0x147948u;
        goto label_147948;
    }
    ctx->pc = 0x147940u;
    SET_GPR_U32(ctx, 31, 0x147948u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147940u, 0x147948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147948u;
label_147948:
    // 0x147948: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14794c:
    // 0x14794c: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x14794cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
label_147950:
    // 0x147950: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_147954:
    if (ctx->pc == 0x147954u) {
        ctx->pc = 0x147958u;
        goto label_147958;
    }
    ctx->pc = 0x147950u;
    {
        const bool branch_taken_0x147950 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x147950) {
            ctx->pc = 0x14796Cu;
            goto label_14796c;
        }
    }
    ctx->pc = 0x147958u;
label_147958:
    // 0x147958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14795c:
    // 0x14795c: 0x0  nop
    ctx->pc = 0x14795cu;
    // NOP
label_147960:
    // 0x147960: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_147964:
    // 0x147964: 0x10000008  b           . + 4 + (0x8 << 2)
label_147968:
    if (ctx->pc == 0x147968u) {
        ctx->pc = 0x14796Cu;
        goto label_14796c;
    }
    ctx->pc = 0x147964u;
    {
        const bool branch_taken_0x147964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147964) {
            ctx->pc = 0x147988u;
            goto label_147988;
        }
    }
    ctx->pc = 0x14796Cu;
label_14796c:
    // 0x14796c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14796cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_147970:
    // 0x147970: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_147974:
    // 0x147974: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x147974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_147978:
    // 0x147978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14797c:
    // 0x14797c: 0x0  nop
    ctx->pc = 0x14797cu;
    // NOP
label_147980:
    // 0x147980: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_147984:
    // 0x147984: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x147984u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_147988:
    // 0x147988: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x147988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
label_14798c:
    // 0x14798c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14798cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147990:
    // 0x147990: 0x0  nop
    ctx->pc = 0x147990u;
    // NOP
label_147994:
    // 0x147994: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x147994u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_147998:
    // 0x147998: 0x0  nop
    ctx->pc = 0x147998u;
    // NOP
label_14799c:
    // 0x14799c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1479a0:
    // 0x1479a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1479a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1479a4:
    // 0x1479a4: 0x10000020  b           . + 4 + (0x20 << 2)
label_1479a8:
    if (ctx->pc == 0x1479A8u) {
        ctx->pc = 0x1479ACu;
        goto label_1479ac;
    }
    ctx->pc = 0x1479A4u;
    {
        const bool branch_taken_0x1479a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479a4) {
            ctx->pc = 0x147A28u;
            goto label_147a28;
        }
    }
    ctx->pc = 0x1479ACu;
label_1479ac:
    // 0x1479ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1479acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1479b0:
    // 0x1479b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1479b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1479b4:
    // 0x1479b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1479b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1479b8:
    // 0x1479b8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1479b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1479bc:
    // 0x1479bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1479bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1479c0:
    // 0x1479c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1479c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1479c4:
    // 0x1479c4: 0xc0965d0  jal         func_259740
label_1479c8:
    if (ctx->pc == 0x1479C8u) {
        ctx->pc = 0x1479CCu;
        goto label_1479cc;
    }
    ctx->pc = 0x1479C4u;
    SET_GPR_U32(ctx, 31, 0x1479CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1479C4u, 0x1479CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479CCu;
label_1479cc:
    // 0x1479cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1479d0:
    // 0x1479d0: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x1479d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
label_1479d4:
    // 0x1479d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1479d8:
    if (ctx->pc == 0x1479D8u) {
        ctx->pc = 0x1479DCu;
        goto label_1479dc;
    }
    ctx->pc = 0x1479D4u;
    {
        const bool branch_taken_0x1479d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1479d4) {
            ctx->pc = 0x1479F0u;
            goto label_1479f0;
        }
    }
    ctx->pc = 0x1479DCu;
label_1479dc:
    // 0x1479dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1479dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1479e0:
    // 0x1479e0: 0x0  nop
    ctx->pc = 0x1479e0u;
    // NOP
label_1479e4:
    // 0x1479e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1479e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1479e8:
    // 0x1479e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1479ec:
    if (ctx->pc == 0x1479ECu) {
        ctx->pc = 0x1479F0u;
        goto label_1479f0;
    }
    ctx->pc = 0x1479E8u;
    {
        const bool branch_taken_0x1479e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479e8) {
            ctx->pc = 0x147A0Cu;
            goto label_147a0c;
        }
    }
    ctx->pc = 0x1479F0u;
label_1479f0:
    // 0x1479f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1479f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1479f4:
    // 0x1479f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1479f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1479f8:
    // 0x1479f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1479f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1479fc:
    // 0x1479fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1479fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147a00:
    // 0x147a00: 0x0  nop
    ctx->pc = 0x147a00u;
    // NOP
label_147a04:
    // 0x147a04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_147a08:
    // 0x147a08: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x147a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_147a0c:
    // 0x147a0c: 0x3c02459f  lui         $v0, 0x459F
    ctx->pc = 0x147a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17823 << 16));
label_147a10:
    // 0x147a10: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x147a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
label_147a14:
    // 0x147a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147a18:
    // 0x147a18: 0x0  nop
    ctx->pc = 0x147a18u;
    // NOP
label_147a1c:
    // 0x147a1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x147a1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_147a20:
    // 0x147a20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147a24:
    // 0x147a24: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x147a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_147a28:
    // 0x147a28: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x147a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_147a2c:
    // 0x147a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147a30:
    // 0x147a30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147a34:
    // 0x147a34: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x147a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_147a38:
    // 0x147a38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147a3c:
    // 0x147a3c: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x147a3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
label_147a40:
    // 0x147a40: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_147a44:
    if (ctx->pc == 0x147A44u) {
        ctx->pc = 0x147A48u;
        goto label_147a48;
    }
    ctx->pc = 0x147A40u;
    {
        const bool branch_taken_0x147a40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x147a40) {
            ctx->pc = 0x147A5Cu;
            goto label_147a5c;
        }
    }
    ctx->pc = 0x147A48u;
label_147a48:
    // 0x147a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147a4c:
    // 0x147a4c: 0x0  nop
    ctx->pc = 0x147a4cu;
    // NOP
label_147a50:
    // 0x147a50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_147a54:
    // 0x147a54: 0x10000008  b           . + 4 + (0x8 << 2)
label_147a58:
    if (ctx->pc == 0x147A58u) {
        ctx->pc = 0x147A5Cu;
        goto label_147a5c;
    }
    ctx->pc = 0x147A54u;
    {
        const bool branch_taken_0x147a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147a54) {
            ctx->pc = 0x147A78u;
            goto label_147a78;
        }
    }
    ctx->pc = 0x147A5Cu;
label_147a5c:
    // 0x147a5c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x147a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_147a60:
    // 0x147a60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_147a64:
    // 0x147a64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x147a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_147a68:
    // 0x147a68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147a6c:
    // 0x147a6c: 0x0  nop
    ctx->pc = 0x147a6cu;
    // NOP
label_147a70:
    // 0x147a70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_147a74:
    // 0x147a74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x147a74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_147a78:
    // 0x147a78: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x147a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_147a7c:
    // 0x147a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147a80:
    // 0x147a80: 0x0  nop
    ctx->pc = 0x147a80u;
    // NOP
label_147a84:
    // 0x147a84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x147a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_147a88:
    // 0x147a88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147a8c:
    // 0x147a8c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x147a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_147a90:
    // 0x147a90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147a94:
    // 0x147a94: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x147a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147a98:
    // 0x147a98: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x147a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
label_147a9c:
    // 0x147a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147aa0:
    // 0x147aa0: 0x0  nop
    ctx->pc = 0x147aa0u;
    // NOP
label_147aa4:
    // 0x147aa4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147aa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_147aa8:
    // 0x147aa8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147aac:
    // 0x147aac: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x147aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_147ab0:
    // 0x147ab0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147ab4:
    // 0x147ab4: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x147ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
label_147ab8:
    // 0x147ab8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147abc:
    // 0x147abc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x147abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_147ac0:
    // 0x147ac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x147ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_147ac4:
    // 0x147ac4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x147ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_147ac8:
    // 0x147ac8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147acc:
    // 0x147acc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x147accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_147ad0:
    // 0x147ad0: 0xc096b40  jal         func_25AD00
label_147ad4:
    if (ctx->pc == 0x147AD4u) {
        ctx->pc = 0x147AD8u;
        goto label_147ad8;
    }
    ctx->pc = 0x147AD0u;
    SET_GPR_U32(ctx, 31, 0x147AD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147AD0u, 0x147AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AD8u;
label_147ad8:
    // 0x147ad8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147adc:
    // 0x147adc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147ae0:
    // 0x147ae0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x147ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_147ae4:
    // 0x147ae4: 0xc05cd58  jal         func_173560
label_147ae8:
    if (ctx->pc == 0x147AE8u) {
        ctx->pc = 0x147AECu;
        goto label_147aec;
    }
    ctx->pc = 0x147AE4u;
    SET_GPR_U32(ctx, 31, 0x147AECu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x147AE4u, 0x147AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AECu;
label_147aec:
    // 0x147aec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_147af0:
    // 0x147af0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147af4:
    // 0x147af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x147af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147af8:
    // 0x147af8: 0xc057480  jal         func_15D200
label_147afc:
    if (ctx->pc == 0x147AFCu) {
        ctx->pc = 0x147B00u;
        goto label_147b00;
    }
    ctx->pc = 0x147AF8u;
    SET_GPR_U32(ctx, 31, 0x147B00u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x147AF8u, 0x147B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B00u;
label_147b00:
    // 0x147b00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147b04:
    // 0x147b04: 0x8c4212f4  lw          $v0, 0x12F4($v0)
    ctx->pc = 0x147b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4852)));
label_147b08:
    // 0x147b08: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x147b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_147b0c:
    // 0x147b0c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_147b10:
    if (ctx->pc == 0x147B10u) {
        ctx->pc = 0x147B14u;
        goto label_147b14;
    }
    ctx->pc = 0x147B0Cu;
    {
        const bool branch_taken_0x147b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b0c) {
            ctx->pc = 0x147B90u;
            goto label_147b90;
        }
    }
    ctx->pc = 0x147B14u;
label_147b14:
    // 0x147b14: 0xc058234  jal         func_1608D0
label_147b18:
    if (ctx->pc == 0x147B18u) {
        ctx->pc = 0x147B1Cu;
        goto label_147b1c;
    }
    ctx->pc = 0x147B14u;
    SET_GPR_U32(ctx, 31, 0x147B1Cu);
    ctx->pc = 0x1608D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1608D0u, 0x147B14u, 0x147B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B1Cu;
label_147b1c:
    // 0x147b1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147b20:
    // 0x147b20: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x147b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
label_147b24:
    // 0x147b24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147b28:
    // 0x147b28: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x147b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147b2c:
    // 0x147b2c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x147b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_147b30:
    // 0x147b30: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x147b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_147b34:
    // 0x147b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147b38:
    // 0x147b38: 0x0  nop
    ctx->pc = 0x147b38u;
    // NOP
label_147b3c:
    // 0x147b3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x147b3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_147b40:
    // 0x147b40: 0x0  nop
    ctx->pc = 0x147b40u;
    // NOP
label_147b44:
    // 0x147b44: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_147b48:
    if (ctx->pc == 0x147B48u) {
        ctx->pc = 0x147B4Cu;
        goto label_147b4c;
    }
    ctx->pc = 0x147B44u;
    {
        const bool branch_taken_0x147b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147b44) {
            ctx->pc = 0x147B90u;
            goto label_147b90;
        }
    }
    ctx->pc = 0x147B4Cu;
label_147b4c:
    // 0x147b4c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147b4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147b50:
    // 0x147b50: 0xc097530  jal         func_25D4C0
label_147b54:
    if (ctx->pc == 0x147B54u) {
        ctx->pc = 0x147B58u;
        goto label_147b58;
    }
    ctx->pc = 0x147B50u;
    SET_GPR_U32(ctx, 31, 0x147B58u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147B50u, 0x147B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B58u;
label_147b58:
    // 0x147b58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147b5c:
    // 0x147b5c: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x147b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147b60:
    // 0x147b60: 0x3c03447c  lui         $v1, 0x447C
    ctx->pc = 0x147b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17532 << 16));
label_147b64:
    // 0x147b64: 0x3463208b  ori         $v1, $v1, 0x208B
    ctx->pc = 0x147b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8331);
label_147b68:
    // 0x147b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147b6c:
    // 0x147b6c: 0x0  nop
    ctx->pc = 0x147b6cu;
    // NOP
label_147b70:
    // 0x147b70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_147b74:
    // 0x147b74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147b78:
    // 0x147b78: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x147b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_147b7c:
    // 0x147b7c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x147b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_147b80:
    // 0x147b80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147b84:
    // 0x147b84: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x147b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_147b88:
    // 0x147b88: 0x10000156  b           . + 4 + (0x156 << 2)
label_147b8c:
    if (ctx->pc == 0x147B8Cu) {
        ctx->pc = 0x147B90u;
        goto label_147b90;
    }
    ctx->pc = 0x147B88u;
    {
        const bool branch_taken_0x147b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b88) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147B90u;
label_147b90:
    // 0x147b90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147b94:
    // 0x147b94: 0xc05cf54  jal         func_173D50
label_147b98:
    if (ctx->pc == 0x147B98u) {
        ctx->pc = 0x147B9Cu;
        goto label_147b9c;
    }
    ctx->pc = 0x147B94u;
    SET_GPR_U32(ctx, 31, 0x147B9Cu);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x147B94u, 0x147B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B9Cu;
label_147b9c:
    // 0x147b9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_147ba0:
    if (ctx->pc == 0x147BA0u) {
        ctx->pc = 0x147BA4u;
        goto label_147ba4;
    }
    ctx->pc = 0x147B9Cu;
    {
        const bool branch_taken_0x147b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b9c) {
            ctx->pc = 0x147C04u;
            goto label_147c04;
        }
    }
    ctx->pc = 0x147BA4u;
label_147ba4:
    // 0x147ba4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147ba8:
    // 0x147ba8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x147ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147bac:
    // 0x147bac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147bb0:
    // 0x147bb0: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x147bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147bb4:
    // 0x147bb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_147bb8:
    // 0x147bb8: 0x0  nop
    ctx->pc = 0x147bb8u;
    // NOP
label_147bbc:
    // 0x147bbc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_147bc0:
    if (ctx->pc == 0x147BC0u) {
        ctx->pc = 0x147BC4u;
        goto label_147bc4;
    }
    ctx->pc = 0x147BBCu;
    {
        const bool branch_taken_0x147bbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147bbc) {
            ctx->pc = 0x147BD8u;
            goto label_147bd8;
        }
    }
    ctx->pc = 0x147BC4u;
label_147bc4:
    // 0x147bc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x147bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_147bc8:
    // 0x147bc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147bcc:
    // 0x147bcc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x147bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_147bd0:
    // 0x147bd0: 0x10000004  b           . + 4 + (0x4 << 2)
label_147bd4:
    if (ctx->pc == 0x147BD4u) {
        ctx->pc = 0x147BD8u;
        goto label_147bd8;
    }
    ctx->pc = 0x147BD0u;
    {
        const bool branch_taken_0x147bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147bd0) {
            ctx->pc = 0x147BE4u;
            goto label_147be4;
        }
    }
    ctx->pc = 0x147BD8u;
label_147bd8:
    // 0x147bd8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x147bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_147bdc:
    // 0x147bdc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147be0:
    // 0x147be0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x147be0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_147be4:
    // 0x147be4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147be4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147be8:
    // 0x147be8: 0xc097530  jal         func_25D4C0
label_147bec:
    if (ctx->pc == 0x147BECu) {
        ctx->pc = 0x147BF0u;
        goto label_147bf0;
    }
    ctx->pc = 0x147BE8u;
    SET_GPR_U32(ctx, 31, 0x147BF0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147BE8u, 0x147BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BF0u;
label_147bf0:
    // 0x147bf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147bf4:
    // 0x147bf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147bf8:
    // 0x147bf8: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x147bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_147bfc:
    // 0x147bfc: 0x10000139  b           . + 4 + (0x139 << 2)
label_147c00:
    if (ctx->pc == 0x147C00u) {
        ctx->pc = 0x147C04u;
        goto label_147c04;
    }
    ctx->pc = 0x147BFCu;
    {
        const bool branch_taken_0x147bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147bfc) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147C04u;
label_147c04:
    // 0x147c04: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147c08:
    // 0x147c08: 0xc097530  jal         func_25D4C0
label_147c0c:
    if (ctx->pc == 0x147C0Cu) {
        ctx->pc = 0x147C10u;
        goto label_147c10;
    }
    ctx->pc = 0x147C08u;
    SET_GPR_U32(ctx, 31, 0x147C10u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147C08u, 0x147C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C10u;
label_147c10:
    // 0x147c10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147c14:
    // 0x147c14: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x147c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_147c18:
    // 0x147c18: 0x14600132  bnez        $v1, . + 4 + (0x132 << 2)
label_147c1c:
    if (ctx->pc == 0x147C1Cu) {
        ctx->pc = 0x147C20u;
        goto label_147c20;
    }
    ctx->pc = 0x147C18u;
    {
        const bool branch_taken_0x147c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147c18) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147C20u;
label_147c20:
    // 0x147c20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147c24:
    // 0x147c24: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147c24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_147c28:
    // 0x147c28: 0x1060012e  beqz        $v1, . + 4 + (0x12E << 2)
label_147c2c:
    if (ctx->pc == 0x147C2Cu) {
        ctx->pc = 0x147C30u;
        goto label_147c30;
    }
    ctx->pc = 0x147C28u;
    {
        const bool branch_taken_0x147c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147c28) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147C30u;
label_147c30:
    // 0x147c30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147c34:
    // 0x147c34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147c38:
    // 0x147c38: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x147c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_147c3c:
    // 0x147c3c: 0x24060a0c  addiu       $a2, $zero, 0xA0C
    ctx->pc = 0x147c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2572));
label_147c40:
    // 0x147c40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147c44:
    // 0x147c44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147c48:
    // 0x147c48: 0xc0965d0  jal         func_259740
label_147c4c:
    if (ctx->pc == 0x147C4Cu) {
        ctx->pc = 0x147C50u;
        goto label_147c50;
    }
    ctx->pc = 0x147C48u;
    SET_GPR_U32(ctx, 31, 0x147C50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147C48u, 0x147C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C50u;
label_147c50:
    // 0x147c50: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x147c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_147c54:
    // 0x147c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147c58:
    // 0x147c58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147c5c:
    // 0x147c5c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x147c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_147c60:
    // 0x147c60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147c64:
    // 0x147c64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147c68:
    // 0x147c68: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x147c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
label_147c6c:
    // 0x147c6c: 0x1000011d  b           . + 4 + (0x11D << 2)
label_147c70:
    if (ctx->pc == 0x147C70u) {
        ctx->pc = 0x147C74u;
        goto label_147c74;
    }
    ctx->pc = 0x147C6Cu;
    {
        const bool branch_taken_0x147c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147c6c) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147C74u;
label_147c74:
    // 0x147c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147c78:
    // 0x147c78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147c7c:
    // 0x147c7c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x147c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_147c80:
    // 0x147c80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147c84:
    // 0x147c84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147c88:
    // 0x147c88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x147c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_147c8c:
    // 0x147c8c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x147c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_147c90:
    // 0x147c90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147c94:
    // 0x147c94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147c98:
    // 0x147c98: 0xc0965d0  jal         func_259740
label_147c9c:
    if (ctx->pc == 0x147C9Cu) {
        ctx->pc = 0x147CA0u;
        goto label_147ca0;
    }
    ctx->pc = 0x147C98u;
    SET_GPR_U32(ctx, 31, 0x147CA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147C98u, 0x147CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CA0u;
label_147ca0:
    // 0x147ca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147ca4:
    // 0x147ca4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x147ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_147ca8:
    // 0x147ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x147ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_147cac:
    // 0x147cac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x147cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_147cb0:
    // 0x147cb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147cb4:
    // 0x147cb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147cb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147cb8:
    // 0x147cb8: 0xc096b40  jal         func_25AD00
label_147cbc:
    if (ctx->pc == 0x147CBCu) {
        ctx->pc = 0x147CC0u;
        goto label_147cc0;
    }
    ctx->pc = 0x147CB8u;
    SET_GPR_U32(ctx, 31, 0x147CC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147CB8u, 0x147CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CC0u;
label_147cc0:
    // 0x147cc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147cc4:
    // 0x147cc4: 0xc05cd10  jal         func_173440
label_147cc8:
    if (ctx->pc == 0x147CC8u) {
        ctx->pc = 0x147CCCu;
        goto label_147ccc;
    }
    ctx->pc = 0x147CC4u;
    SET_GPR_U32(ctx, 31, 0x147CCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x147CC4u, 0x147CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CCCu;
label_147ccc:
    // 0x147ccc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_147cd0:
    // 0x147cd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147cd4:
    // 0x147cd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147cd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147cd8:
    // 0x147cd8: 0xc0573d8  jal         func_15CF60
label_147cdc:
    if (ctx->pc == 0x147CDCu) {
        ctx->pc = 0x147CE0u;
        goto label_147ce0;
    }
    ctx->pc = 0x147CD8u;
    SET_GPR_U32(ctx, 31, 0x147CE0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x147CD8u, 0x147CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CE0u;
label_147ce0:
    // 0x147ce0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147ce0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147ce4:
    // 0x147ce4: 0xc097530  jal         func_25D4C0
label_147ce8:
    if (ctx->pc == 0x147CE8u) {
        ctx->pc = 0x147CECu;
        goto label_147cec;
    }
    ctx->pc = 0x147CE4u;
    SET_GPR_U32(ctx, 31, 0x147CECu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147CE4u, 0x147CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CECu;
label_147cec:
    // 0x147cec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147cf0:
    // 0x147cf0: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x147cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_147cf4:
    // 0x147cf4: 0xc057b54  jal         func_15ED50
label_147cf8:
    if (ctx->pc == 0x147CF8u) {
        ctx->pc = 0x147CFCu;
        goto label_147cfc;
    }
    ctx->pc = 0x147CF4u;
    SET_GPR_U32(ctx, 31, 0x147CFCu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x147CF4u, 0x147CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CFCu;
label_147cfc:
    // 0x147cfc: 0x144000f9  bnez        $v0, . + 4 + (0xF9 << 2)
label_147d00:
    if (ctx->pc == 0x147D00u) {
        ctx->pc = 0x147D04u;
        goto label_147d04;
    }
    ctx->pc = 0x147CFCu;
    {
        const bool branch_taken_0x147cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147cfc) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147D04u;
label_147d04:
    // 0x147d04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d08:
    // 0x147d08: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x147d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_147d0c:
    // 0x147d0c: 0xc057b04  jal         func_15EC10
label_147d10:
    if (ctx->pc == 0x147D10u) {
        ctx->pc = 0x147D14u;
        goto label_147d14;
    }
    ctx->pc = 0x147D0Cu;
    SET_GPR_U32(ctx, 31, 0x147D14u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x147D0Cu, 0x147D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D14u;
label_147d14:
    // 0x147d14: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
label_147d18:
    if (ctx->pc == 0x147D18u) {
        ctx->pc = 0x147D1Cu;
        goto label_147d1c;
    }
    ctx->pc = 0x147D14u;
    {
        const bool branch_taken_0x147d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147d14) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147D1Cu;
label_147d1c:
    // 0x147d1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d20:
    // 0x147d20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_147d24:
    // 0x147d24: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
label_147d28:
    if (ctx->pc == 0x147D28u) {
        ctx->pc = 0x147D2Cu;
        goto label_147d2c;
    }
    ctx->pc = 0x147D24u;
    {
        const bool branch_taken_0x147d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d24) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147D2Cu;
label_147d2c:
    // 0x147d2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147d30:
    // 0x147d30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d34:
    // 0x147d34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x147d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_147d38:
    // 0x147d38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x147d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_147d3c:
    // 0x147d3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d40:
    // 0x147d40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x147d40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_147d44:
    // 0x147d44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d48:
    // 0x147d48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x147d48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_147d4c:
    // 0x147d4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d50:
    // 0x147d50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x147d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_147d54:
    // 0x147d54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d58:
    // 0x147d58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x147d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_147d5c:
    // 0x147d5c: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_147d60:
    if (ctx->pc == 0x147D60u) {
        ctx->pc = 0x147D64u;
        goto label_147d64;
    }
    ctx->pc = 0x147D5Cu;
    {
        const bool branch_taken_0x147d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d5c) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147D64u;
label_147d64:
    // 0x147d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147d68:
    // 0x147d68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d6c:
    // 0x147d6c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x147d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_147d70:
    // 0x147d70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d74:
    // 0x147d74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d78:
    // 0x147d78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x147d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_147d7c:
    // 0x147d7c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x147d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_147d80:
    // 0x147d80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147d84:
    // 0x147d84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147d88:
    // 0x147d88: 0xc0965d0  jal         func_259740
label_147d8c:
    if (ctx->pc == 0x147D8Cu) {
        ctx->pc = 0x147D90u;
        goto label_147d90;
    }
    ctx->pc = 0x147D88u;
    SET_GPR_U32(ctx, 31, 0x147D90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147D88u, 0x147D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D90u;
label_147d90:
    // 0x147d90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147d94:
    // 0x147d94: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_147d98:
    // 0x147d98: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x147d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_147d9c:
    // 0x147d9c: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x147d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_147da0:
    // 0x147da0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147da4:
    // 0x147da4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147da4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147da8:
    // 0x147da8: 0xc096b40  jal         func_25AD00
label_147dac:
    if (ctx->pc == 0x147DACu) {
        ctx->pc = 0x147DB0u;
        goto label_147db0;
    }
    ctx->pc = 0x147DA8u;
    SET_GPR_U32(ctx, 31, 0x147DB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147DA8u, 0x147DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DB0u;
label_147db0:
    // 0x147db0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147db0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147db4:
    // 0x147db4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147db8:
    // 0x147db8: 0xc05cd10  jal         func_173440
label_147dbc:
    if (ctx->pc == 0x147DBCu) {
        ctx->pc = 0x147DC0u;
        goto label_147dc0;
    }
    ctx->pc = 0x147DB8u;
    SET_GPR_U32(ctx, 31, 0x147DC0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x147DB8u, 0x147DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DC0u;
label_147dc0:
    // 0x147dc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147dc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147dc4:
    // 0x147dc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_147dc8:
    // 0x147dc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147dcc:
    // 0x147dcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147dccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147dd0:
    // 0x147dd0: 0xc0573d8  jal         func_15CF60
label_147dd4:
    if (ctx->pc == 0x147DD4u) {
        ctx->pc = 0x147DD8u;
        goto label_147dd8;
    }
    ctx->pc = 0x147DD0u;
    SET_GPR_U32(ctx, 31, 0x147DD8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x147DD0u, 0x147DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DD8u;
label_147dd8:
    // 0x147dd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147dd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147ddc:
    // 0x147ddc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147ddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147de0:
    // 0x147de0: 0xc097530  jal         func_25D4C0
label_147de4:
    if (ctx->pc == 0x147DE4u) {
        ctx->pc = 0x147DE8u;
        goto label_147de8;
    }
    ctx->pc = 0x147DE0u;
    SET_GPR_U32(ctx, 31, 0x147DE8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147DE0u, 0x147DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DE8u;
label_147de8:
    // 0x147de8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x147de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147dec:
    // 0x147dec: 0x24a612c0  addiu       $a2, $a1, 0x12C0
    ctx->pc = 0x147decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
label_147df0:
    // 0x147df0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x147df0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_147df4:
    // 0x147df4: 0xc057b54  jal         func_15ED50
label_147df8:
    if (ctx->pc == 0x147DF8u) {
        ctx->pc = 0x147DFCu;
        goto label_147dfc;
    }
    ctx->pc = 0x147DF4u;
    SET_GPR_U32(ctx, 31, 0x147DFCu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x147DF4u, 0x147DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DFCu;
label_147dfc:
    // 0x147dfc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x147dfcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147e00:
    // 0x147e00: 0x14e000b8  bnez        $a3, . + 4 + (0xB8 << 2)
label_147e04:
    if (ctx->pc == 0x147E04u) {
        ctx->pc = 0x147E08u;
        goto label_147e08;
    }
    ctx->pc = 0x147E00u;
    {
        const bool branch_taken_0x147e00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x147e00) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147E08u;
label_147e08:
    // 0x147e08: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x147e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147e0c:
    // 0x147e0c: 0x250212c0  addiu       $v0, $t0, 0x12C0
    ctx->pc = 0x147e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4800));
label_147e10:
    // 0x147e10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147e10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147e14:
    // 0x147e14: 0xc057b04  jal         func_15EC10
label_147e18:
    if (ctx->pc == 0x147E18u) {
        ctx->pc = 0x147E1Cu;
        goto label_147e1c;
    }
    ctx->pc = 0x147E14u;
    SET_GPR_U32(ctx, 31, 0x147E1Cu);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x147E14u, 0x147E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E1Cu;
label_147e1c:
    // 0x147e1c: 0x144000b1  bnez        $v0, . + 4 + (0xB1 << 2)
label_147e20:
    if (ctx->pc == 0x147E20u) {
        ctx->pc = 0x147E24u;
        goto label_147e24;
    }
    ctx->pc = 0x147E1Cu;
    {
        const bool branch_taken_0x147e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147e1c) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147E24u;
label_147e24:
    // 0x147e24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147e28:
    // 0x147e28: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x147e28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_147e2c:
    // 0x147e2c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x147e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_147e30:
    // 0x147e30: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x147e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_147e34:
    // 0x147e34: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_147e38:
    if (ctx->pc == 0x147E38u) {
        ctx->pc = 0x147E3Cu;
        goto label_147e3c;
    }
    ctx->pc = 0x147E34u;
    {
        const bool branch_taken_0x147e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e34) {
            ctx->pc = 0x147E5Cu;
            goto label_147e5c;
        }
    }
    ctx->pc = 0x147E3Cu;
label_147e3c:
    // 0x147e3c: 0xc0585dc  jal         func_161770
label_147e40:
    if (ctx->pc == 0x147E40u) {
        ctx->pc = 0x147E44u;
        goto label_147e44;
    }
    ctx->pc = 0x147E3Cu;
    SET_GPR_U32(ctx, 31, 0x147E44u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x147E3Cu, 0x147E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E44u;
label_147e44:
    // 0x147e44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_147e48:
    if (ctx->pc == 0x147E48u) {
        ctx->pc = 0x147E4Cu;
        goto label_147e4c;
    }
    ctx->pc = 0x147E44u;
    {
        const bool branch_taken_0x147e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e44) {
            ctx->pc = 0x147E5Cu;
            goto label_147e5c;
        }
    }
    ctx->pc = 0x147E4Cu;
label_147e4c:
    // 0x147e4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147e50:
    // 0x147e50: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_147e54:
    // 0x147e54: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_147e58:
    if (ctx->pc == 0x147E58u) {
        ctx->pc = 0x147E5Cu;
        goto label_147e5c;
    }
    ctx->pc = 0x147E54u;
    {
        const bool branch_taken_0x147e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e54) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147E5Cu;
label_147e5c:
    // 0x147e5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147e60:
    // 0x147e60: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_147e64:
    // 0x147e64: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
label_147e68:
    if (ctx->pc == 0x147E68u) {
        ctx->pc = 0x147E6Cu;
        goto label_147e6c;
    }
    ctx->pc = 0x147E64u;
    {
        const bool branch_taken_0x147e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e64) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147E6Cu;
label_147e6c:
    // 0x147e6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147e70:
    // 0x147e70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147e74:
    // 0x147e74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x147e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_147e78:
    // 0x147e78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147e7c:
    // 0x147e7c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x147e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_147e80:
    // 0x147e80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147e84:
    // 0x147e84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x147e84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_147e88:
    // 0x147e88: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x147e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147e8c:
    // 0x147e8c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x147e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_147e90:
    // 0x147e90: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x147e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_147e94:
    // 0x147e94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147e98:
    // 0x147e98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x147e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_147e9c:
    // 0x147e9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147ea0:
    // 0x147ea0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_147ea4:
    // 0x147ea4: 0x1000008f  b           . + 4 + (0x8F << 2)
label_147ea8:
    if (ctx->pc == 0x147EA8u) {
        ctx->pc = 0x147EACu;
        goto label_147eac;
    }
    ctx->pc = 0x147EA4u;
    {
        const bool branch_taken_0x147ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ea4) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x147EACu;
label_147eac:
    // 0x147eac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147eb0:
    // 0x147eb0: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x147eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147eb4:
    // 0x147eb4: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x147eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_147eb8:
    // 0x147eb8: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x147eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_147ebc:
    // 0x147ebc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147ec0:
    // 0x147ec0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_147ec4:
    // 0x147ec4: 0xc0965d0  jal         func_259740
label_147ec8:
    if (ctx->pc == 0x147EC8u) {
        ctx->pc = 0x147ECCu;
        goto label_147ecc;
    }
    ctx->pc = 0x147EC4u;
    SET_GPR_U32(ctx, 31, 0x147ECCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147EC4u, 0x147ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147ECCu;
label_147ecc:
    // 0x147ecc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x147eccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147ed0:
    // 0x147ed0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147ed4:
    // 0x147ed4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x147ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147ed8:
    // 0x147ed8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147edc:
    // 0x147edc: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x147edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_147ee0:
    // 0x147ee0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147ee4:
    // 0x147ee4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_147ee8:
    // 0x147ee8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x147ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_147eec:
    // 0x147eec: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x147eecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_147ef0:
    // 0x147ef0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147ef4:
    // 0x147ef4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147ef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147ef8:
    // 0x147ef8: 0xc096b40  jal         func_25AD00
label_147efc:
    if (ctx->pc == 0x147EFCu) {
        ctx->pc = 0x147F00u;
        goto label_147f00;
    }
    ctx->pc = 0x147EF8u;
    SET_GPR_U32(ctx, 31, 0x147F00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147EF8u, 0x147F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F00u;
label_147f00:
    // 0x147f00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147f00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147f04:
    // 0x147f04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f08:
    // 0x147f08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f0c:
    // 0x147f0c: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x147f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
label_147f10:
    // 0x147f10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_147f14:
    // 0x147f14: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x147f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_147f18:
    // 0x147f18: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x147f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_147f1c:
    // 0x147f1c: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x147f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_147f20:
    // 0x147f20: 0xc058f50  jal         func_163D40
label_147f24:
    if (ctx->pc == 0x147F24u) {
        ctx->pc = 0x147F28u;
        goto label_147f28;
    }
    ctx->pc = 0x147F20u;
    SET_GPR_U32(ctx, 31, 0x147F28u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x147F20u, 0x147F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F28u;
label_147f28:
    // 0x147f28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f2c:
    // 0x147f2c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x147f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_147f30:
    // 0x147f30: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x147f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f34:
    // 0x147f34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f38:
    // 0x147f38: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x147f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_147f3c:
    // 0x147f3c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x147f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_147f40:
    // 0x147f40: 0xc05cd58  jal         func_173560
label_147f44:
    if (ctx->pc == 0x147F44u) {
        ctx->pc = 0x147F48u;
        goto label_147f48;
    }
    ctx->pc = 0x147F40u;
    SET_GPR_U32(ctx, 31, 0x147F48u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x147F40u, 0x147F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F48u;
label_147f48:
    // 0x147f48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_147f4c:
    // 0x147f4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f50:
    // 0x147f50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x147f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_147f54:
    // 0x147f54: 0xc057480  jal         func_15D200
label_147f58:
    if (ctx->pc == 0x147F58u) {
        ctx->pc = 0x147F5Cu;
        goto label_147f5c;
    }
    ctx->pc = 0x147F54u;
    SET_GPR_U32(ctx, 31, 0x147F5Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x147F54u, 0x147F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F5Cu;
label_147f5c:
    // 0x147f5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147f5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147f60:
    // 0x147f60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f64:
    // 0x147f64: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x147f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_147f68:
    // 0x147f68: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x147f68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_147f6c:
    // 0x147f6c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x147f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_147f70:
    // 0x147f70: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x147f70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_147f74:
    // 0x147f74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f78:
    // 0x147f78: 0xc4401b5c  lwc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x147f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147f7c:
    // 0x147f7c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x147f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_147f80:
    // 0x147f80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f84:
    // 0x147f84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x147f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_147f88:
    // 0x147f88: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x147f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_147f8c:
    // 0x147f8c: 0xc05cf7c  jal         func_173DF0
label_147f90:
    if (ctx->pc == 0x147F90u) {
        ctx->pc = 0x147F94u;
        goto label_147f94;
    }
    ctx->pc = 0x147F8Cu;
    SET_GPR_U32(ctx, 31, 0x147F94u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x147F8Cu, 0x147F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F94u;
label_147f94:
    // 0x147f94: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x147f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_147f98:
    // 0x147f98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147f9c:
    // 0x147f9c: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x147f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147fa0:
    // 0x147fa0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x147fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147fa4:
    // 0x147fa4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x147fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_147fa8:
    // 0x147fa8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x147fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_147fac:
    // 0x147fac: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x147facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147fb0:
    // 0x147fb0: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x147fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_147fb4:
    // 0x147fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147fb8:
    // 0x147fb8: 0x0  nop
    ctx->pc = 0x147fb8u;
    // NOP
label_147fbc:
    // 0x147fbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_147fc0:
    // 0x147fc0: 0x0  nop
    ctx->pc = 0x147fc0u;
    // NOP
label_147fc4:
    // 0x147fc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_147fc8:
    if (ctx->pc == 0x147FC8u) {
        ctx->pc = 0x147FCCu;
        goto label_147fcc;
    }
    ctx->pc = 0x147FC4u;
    {
        const bool branch_taken_0x147fc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147fc4) {
            ctx->pc = 0x147FE4u;
            goto label_147fe4;
        }
    }
    ctx->pc = 0x147FCCu;
label_147fcc:
    // 0x147fcc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147fd0:
    // 0x147fd0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x147fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147fd4:
    // 0x147fd4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x147fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147fd8:
    // 0x147fd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x147fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_147fdc:
    // 0x147fdc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147fe0:
    // 0x147fe0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x147fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_147fe4:
    // 0x147fe4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147fe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_147fe8:
    // 0x147fe8: 0xc097530  jal         func_25D4C0
label_147fec:
    if (ctx->pc == 0x147FECu) {
        ctx->pc = 0x147FF0u;
        goto label_147ff0;
    }
    ctx->pc = 0x147FE8u;
    SET_GPR_U32(ctx, 31, 0x147FF0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147FE8u, 0x147FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147FF0u;
label_147ff0:
    // 0x147ff0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_147ff4:
    // 0x147ff4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_147ff8:
    // 0x147ff8: 0x906509df  lbu         $a1, 0x9DF($v1)
    ctx->pc = 0x147ff8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_147ffc:
    // 0x147ffc: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x147ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_148000:
    // 0x148000: 0x30c70010  andi        $a3, $a2, 0x10
    ctx->pc = 0x148000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_148004:
    // 0x148004: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
label_148008:
    if (ctx->pc == 0x148008u) {
        ctx->pc = 0x14800Cu;
        goto label_14800c;
    }
    ctx->pc = 0x148004u;
    {
        const bool branch_taken_0x148004 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x148004) {
            ctx->pc = 0x14806Cu;
            goto label_14806c;
        }
    }
    ctx->pc = 0x14800Cu;
label_14800c:
    // 0x14800c: 0xc057acc  jal         func_15EB30
label_148010:
    if (ctx->pc == 0x148010u) {
        ctx->pc = 0x148014u;
        goto label_148014;
    }
    ctx->pc = 0x14800Cu;
    SET_GPR_U32(ctx, 31, 0x148014u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14800Cu, 0x148014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148014u;
label_148014:
    // 0x148014: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x148014u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_148018:
    // 0x148018: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
label_14801c:
    if (ctx->pc == 0x14801Cu) {
        ctx->pc = 0x148020u;
        goto label_148020;
    }
    ctx->pc = 0x148018u;
    {
        const bool branch_taken_0x148018 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x148018) {
            ctx->pc = 0x14806Cu;
            goto label_14806c;
        }
    }
    ctx->pc = 0x148020u;
label_148020:
    // 0x148020: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x148020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_148024:
    // 0x148024: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148028:
    // 0x148028: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x148028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14802c:
    // 0x14802c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x14802cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148030:
    // 0x148030: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x148030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_148034:
    // 0x148034: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x148034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_148038:
    // 0x148038: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x148038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_14803c:
    // 0x14803c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x14803cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_148040:
    // 0x148040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148044:
    // 0x148044: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x148044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_148048:
    // 0x148048: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x148048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14804c:
    // 0x14804c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14804cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_148050:
    // 0x148050: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x148050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148054:
    // 0x148054: 0xe4801b30  swc1        $f0, 0x1B30($a0)
    ctx->pc = 0x148054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6960), bits); }
label_148058:
    // 0x148058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14805c:
    // 0x14805c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x14805cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148060:
    // 0x148060: 0xa0a310a8  sb          $v1, 0x10A8($a1)
    ctx->pc = 0x148060u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 3));
label_148064:
    // 0x148064: 0x1000001f  b           . + 4 + (0x1F << 2)
label_148068:
    if (ctx->pc == 0x148068u) {
        ctx->pc = 0x14806Cu;
        goto label_14806c;
    }
    ctx->pc = 0x148064u;
    {
        const bool branch_taken_0x148064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148064) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x14806Cu;
label_14806c:
    // 0x14806c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x14806cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148070:
    // 0x148070: 0x90c709e7  lbu         $a3, 0x9E7($a2)
    ctx->pc = 0x148070u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
label_148074:
    // 0x148074: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
label_148078:
    if (ctx->pc == 0x148078u) {
        ctx->pc = 0x14807Cu;
        goto label_14807c;
    }
    ctx->pc = 0x148074u;
    {
        const bool branch_taken_0x148074 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x148074) {
            ctx->pc = 0x1480E4u;
            goto label_1480e4;
        }
    }
    ctx->pc = 0x14807Cu;
label_14807c:
    // 0x14807c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14807cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148080:
    // 0x148080: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148084:
    // 0x148084: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x148084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
label_148088:
    // 0x148088: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14808c:
    // 0x14808c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14808cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_148090:
    // 0x148090: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x148090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_148094:
    // 0x148094: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x148094u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_148098:
    // 0x148098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14809c:
    // 0x14809c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14809cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1480a0:
    // 0x1480a0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1480a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1480a4:
    // 0x1480a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1480a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1480a8:
    // 0x1480a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1480a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1480ac:
    // 0x1480ac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1480acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1480b0:
    // 0x1480b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1480b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1480b4:
    // 0x1480b4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1480b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_1480b8:
    // 0x1480b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1480b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1480bc:
    // 0x1480bc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1480bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1480c0:
    // 0x1480c0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1480c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1480c4:
    // 0x1480c4: 0xc4a11b5c  lwc1        $f1, 0x1B5C($a1)
    ctx->pc = 0x1480c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1480c8:
    // 0x1480c8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1480c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1480cc:
    // 0x1480cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1480ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1480d0:
    // 0x1480d0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1480d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1480d4:
    // 0x1480d4: 0xe4c01b30  swc1        $f0, 0x1B30($a2)
    ctx->pc = 0x1480d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 6960), bits); }
label_1480d8:
    // 0x1480d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1480d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1480dc:
    // 0x1480dc: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1480dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1480e0:
    // 0x1480e0: 0xa10710a8  sb          $a3, 0x10A8($t0)
    ctx->pc = 0x1480e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4264), (uint8_t)GPR_U32(ctx, 7));
label_1480e4:
    // 0x1480e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1480e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1480e8:
    // 0x1480e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1480e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1480ec:
    // 0x1480ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1480ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1480f0:
    // 0x1480f0: 0x3e00008  jr          $ra
label_1480f4:
    if (ctx->pc == 0x1480F4u) {
        ctx->pc = 0x1480F8u;
        goto label_fallthrough_0x1480f0;
    }
    ctx->pc = 0x1480F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1480F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1480f0:
    ctx->pc = 0x1480F8u;
}
