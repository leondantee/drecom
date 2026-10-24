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

// Function: Em02_R1_die00
// Address: 0x2a5570 - 0x2a6468
void Em02_R1_die00_0x2a5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_die00_0x2a5570");
#endif

    switch (ctx->pc) {
        case 0x2a5570u: goto label_2a5570;
        case 0x2a5574u: goto label_2a5574;
        case 0x2a5578u: goto label_2a5578;
        case 0x2a557cu: goto label_2a557c;
        case 0x2a5580u: goto label_2a5580;
        case 0x2a5584u: goto label_2a5584;
        case 0x2a5588u: goto label_2a5588;
        case 0x2a558cu: goto label_2a558c;
        case 0x2a5590u: goto label_2a5590;
        case 0x2a5594u: goto label_2a5594;
        case 0x2a5598u: goto label_2a5598;
        case 0x2a559cu: goto label_2a559c;
        case 0x2a55a0u: goto label_2a55a0;
        case 0x2a55a4u: goto label_2a55a4;
        case 0x2a55a8u: goto label_2a55a8;
        case 0x2a55acu: goto label_2a55ac;
        case 0x2a55b0u: goto label_2a55b0;
        case 0x2a55b4u: goto label_2a55b4;
        case 0x2a55b8u: goto label_2a55b8;
        case 0x2a55bcu: goto label_2a55bc;
        case 0x2a55c0u: goto label_2a55c0;
        case 0x2a55c4u: goto label_2a55c4;
        case 0x2a55c8u: goto label_2a55c8;
        case 0x2a55ccu: goto label_2a55cc;
        case 0x2a55d0u: goto label_2a55d0;
        case 0x2a55d4u: goto label_2a55d4;
        case 0x2a55d8u: goto label_2a55d8;
        case 0x2a55dcu: goto label_2a55dc;
        case 0x2a55e0u: goto label_2a55e0;
        case 0x2a55e4u: goto label_2a55e4;
        case 0x2a55e8u: goto label_2a55e8;
        case 0x2a55ecu: goto label_2a55ec;
        case 0x2a55f0u: goto label_2a55f0;
        case 0x2a55f4u: goto label_2a55f4;
        case 0x2a55f8u: goto label_2a55f8;
        case 0x2a55fcu: goto label_2a55fc;
        case 0x2a5600u: goto label_2a5600;
        case 0x2a5604u: goto label_2a5604;
        case 0x2a5608u: goto label_2a5608;
        case 0x2a560cu: goto label_2a560c;
        case 0x2a5610u: goto label_2a5610;
        case 0x2a5614u: goto label_2a5614;
        case 0x2a5618u: goto label_2a5618;
        case 0x2a561cu: goto label_2a561c;
        case 0x2a5620u: goto label_2a5620;
        case 0x2a5624u: goto label_2a5624;
        case 0x2a5628u: goto label_2a5628;
        case 0x2a562cu: goto label_2a562c;
        case 0x2a5630u: goto label_2a5630;
        case 0x2a5634u: goto label_2a5634;
        case 0x2a5638u: goto label_2a5638;
        case 0x2a563cu: goto label_2a563c;
        case 0x2a5640u: goto label_2a5640;
        case 0x2a5644u: goto label_2a5644;
        case 0x2a5648u: goto label_2a5648;
        case 0x2a564cu: goto label_2a564c;
        case 0x2a5650u: goto label_2a5650;
        case 0x2a5654u: goto label_2a5654;
        case 0x2a5658u: goto label_2a5658;
        case 0x2a565cu: goto label_2a565c;
        case 0x2a5660u: goto label_2a5660;
        case 0x2a5664u: goto label_2a5664;
        case 0x2a5668u: goto label_2a5668;
        case 0x2a566cu: goto label_2a566c;
        case 0x2a5670u: goto label_2a5670;
        case 0x2a5674u: goto label_2a5674;
        case 0x2a5678u: goto label_2a5678;
        case 0x2a567cu: goto label_2a567c;
        case 0x2a5680u: goto label_2a5680;
        case 0x2a5684u: goto label_2a5684;
        case 0x2a5688u: goto label_2a5688;
        case 0x2a568cu: goto label_2a568c;
        case 0x2a5690u: goto label_2a5690;
        case 0x2a5694u: goto label_2a5694;
        case 0x2a5698u: goto label_2a5698;
        case 0x2a569cu: goto label_2a569c;
        case 0x2a56a0u: goto label_2a56a0;
        case 0x2a56a4u: goto label_2a56a4;
        case 0x2a56a8u: goto label_2a56a8;
        case 0x2a56acu: goto label_2a56ac;
        case 0x2a56b0u: goto label_2a56b0;
        case 0x2a56b4u: goto label_2a56b4;
        case 0x2a56b8u: goto label_2a56b8;
        case 0x2a56bcu: goto label_2a56bc;
        case 0x2a56c0u: goto label_2a56c0;
        case 0x2a56c4u: goto label_2a56c4;
        case 0x2a56c8u: goto label_2a56c8;
        case 0x2a56ccu: goto label_2a56cc;
        case 0x2a56d0u: goto label_2a56d0;
        case 0x2a56d4u: goto label_2a56d4;
        case 0x2a56d8u: goto label_2a56d8;
        case 0x2a56dcu: goto label_2a56dc;
        case 0x2a56e0u: goto label_2a56e0;
        case 0x2a56e4u: goto label_2a56e4;
        case 0x2a56e8u: goto label_2a56e8;
        case 0x2a56ecu: goto label_2a56ec;
        case 0x2a56f0u: goto label_2a56f0;
        case 0x2a56f4u: goto label_2a56f4;
        case 0x2a56f8u: goto label_2a56f8;
        case 0x2a56fcu: goto label_2a56fc;
        case 0x2a5700u: goto label_2a5700;
        case 0x2a5704u: goto label_2a5704;
        case 0x2a5708u: goto label_2a5708;
        case 0x2a570cu: goto label_2a570c;
        case 0x2a5710u: goto label_2a5710;
        case 0x2a5714u: goto label_2a5714;
        case 0x2a5718u: goto label_2a5718;
        case 0x2a571cu: goto label_2a571c;
        case 0x2a5720u: goto label_2a5720;
        case 0x2a5724u: goto label_2a5724;
        case 0x2a5728u: goto label_2a5728;
        case 0x2a572cu: goto label_2a572c;
        case 0x2a5730u: goto label_2a5730;
        case 0x2a5734u: goto label_2a5734;
        case 0x2a5738u: goto label_2a5738;
        case 0x2a573cu: goto label_2a573c;
        case 0x2a5740u: goto label_2a5740;
        case 0x2a5744u: goto label_2a5744;
        case 0x2a5748u: goto label_2a5748;
        case 0x2a574cu: goto label_2a574c;
        case 0x2a5750u: goto label_2a5750;
        case 0x2a5754u: goto label_2a5754;
        case 0x2a5758u: goto label_2a5758;
        case 0x2a575cu: goto label_2a575c;
        case 0x2a5760u: goto label_2a5760;
        case 0x2a5764u: goto label_2a5764;
        case 0x2a5768u: goto label_2a5768;
        case 0x2a576cu: goto label_2a576c;
        case 0x2a5770u: goto label_2a5770;
        case 0x2a5774u: goto label_2a5774;
        case 0x2a5778u: goto label_2a5778;
        case 0x2a577cu: goto label_2a577c;
        case 0x2a5780u: goto label_2a5780;
        case 0x2a5784u: goto label_2a5784;
        case 0x2a5788u: goto label_2a5788;
        case 0x2a578cu: goto label_2a578c;
        case 0x2a5790u: goto label_2a5790;
        case 0x2a5794u: goto label_2a5794;
        case 0x2a5798u: goto label_2a5798;
        case 0x2a579cu: goto label_2a579c;
        case 0x2a57a0u: goto label_2a57a0;
        case 0x2a57a4u: goto label_2a57a4;
        case 0x2a57a8u: goto label_2a57a8;
        case 0x2a57acu: goto label_2a57ac;
        case 0x2a57b0u: goto label_2a57b0;
        case 0x2a57b4u: goto label_2a57b4;
        case 0x2a57b8u: goto label_2a57b8;
        case 0x2a57bcu: goto label_2a57bc;
        case 0x2a57c0u: goto label_2a57c0;
        case 0x2a57c4u: goto label_2a57c4;
        case 0x2a57c8u: goto label_2a57c8;
        case 0x2a57ccu: goto label_2a57cc;
        case 0x2a57d0u: goto label_2a57d0;
        case 0x2a57d4u: goto label_2a57d4;
        case 0x2a57d8u: goto label_2a57d8;
        case 0x2a57dcu: goto label_2a57dc;
        case 0x2a57e0u: goto label_2a57e0;
        case 0x2a57e4u: goto label_2a57e4;
        case 0x2a57e8u: goto label_2a57e8;
        case 0x2a57ecu: goto label_2a57ec;
        case 0x2a57f0u: goto label_2a57f0;
        case 0x2a57f4u: goto label_2a57f4;
        case 0x2a57f8u: goto label_2a57f8;
        case 0x2a57fcu: goto label_2a57fc;
        case 0x2a5800u: goto label_2a5800;
        case 0x2a5804u: goto label_2a5804;
        case 0x2a5808u: goto label_2a5808;
        case 0x2a580cu: goto label_2a580c;
        case 0x2a5810u: goto label_2a5810;
        case 0x2a5814u: goto label_2a5814;
        case 0x2a5818u: goto label_2a5818;
        case 0x2a581cu: goto label_2a581c;
        case 0x2a5820u: goto label_2a5820;
        case 0x2a5824u: goto label_2a5824;
        case 0x2a5828u: goto label_2a5828;
        case 0x2a582cu: goto label_2a582c;
        case 0x2a5830u: goto label_2a5830;
        case 0x2a5834u: goto label_2a5834;
        case 0x2a5838u: goto label_2a5838;
        case 0x2a583cu: goto label_2a583c;
        case 0x2a5840u: goto label_2a5840;
        case 0x2a5844u: goto label_2a5844;
        case 0x2a5848u: goto label_2a5848;
        case 0x2a584cu: goto label_2a584c;
        case 0x2a5850u: goto label_2a5850;
        case 0x2a5854u: goto label_2a5854;
        case 0x2a5858u: goto label_2a5858;
        case 0x2a585cu: goto label_2a585c;
        case 0x2a5860u: goto label_2a5860;
        case 0x2a5864u: goto label_2a5864;
        case 0x2a5868u: goto label_2a5868;
        case 0x2a586cu: goto label_2a586c;
        case 0x2a5870u: goto label_2a5870;
        case 0x2a5874u: goto label_2a5874;
        case 0x2a5878u: goto label_2a5878;
        case 0x2a587cu: goto label_2a587c;
        case 0x2a5880u: goto label_2a5880;
        case 0x2a5884u: goto label_2a5884;
        case 0x2a5888u: goto label_2a5888;
        case 0x2a588cu: goto label_2a588c;
        case 0x2a5890u: goto label_2a5890;
        case 0x2a5894u: goto label_2a5894;
        case 0x2a5898u: goto label_2a5898;
        case 0x2a589cu: goto label_2a589c;
        case 0x2a58a0u: goto label_2a58a0;
        case 0x2a58a4u: goto label_2a58a4;
        case 0x2a58a8u: goto label_2a58a8;
        case 0x2a58acu: goto label_2a58ac;
        case 0x2a58b0u: goto label_2a58b0;
        case 0x2a58b4u: goto label_2a58b4;
        case 0x2a58b8u: goto label_2a58b8;
        case 0x2a58bcu: goto label_2a58bc;
        case 0x2a58c0u: goto label_2a58c0;
        case 0x2a58c4u: goto label_2a58c4;
        case 0x2a58c8u: goto label_2a58c8;
        case 0x2a58ccu: goto label_2a58cc;
        case 0x2a58d0u: goto label_2a58d0;
        case 0x2a58d4u: goto label_2a58d4;
        case 0x2a58d8u: goto label_2a58d8;
        case 0x2a58dcu: goto label_2a58dc;
        case 0x2a58e0u: goto label_2a58e0;
        case 0x2a58e4u: goto label_2a58e4;
        case 0x2a58e8u: goto label_2a58e8;
        case 0x2a58ecu: goto label_2a58ec;
        case 0x2a58f0u: goto label_2a58f0;
        case 0x2a58f4u: goto label_2a58f4;
        case 0x2a58f8u: goto label_2a58f8;
        case 0x2a58fcu: goto label_2a58fc;
        case 0x2a5900u: goto label_2a5900;
        case 0x2a5904u: goto label_2a5904;
        case 0x2a5908u: goto label_2a5908;
        case 0x2a590cu: goto label_2a590c;
        case 0x2a5910u: goto label_2a5910;
        case 0x2a5914u: goto label_2a5914;
        case 0x2a5918u: goto label_2a5918;
        case 0x2a591cu: goto label_2a591c;
        case 0x2a5920u: goto label_2a5920;
        case 0x2a5924u: goto label_2a5924;
        case 0x2a5928u: goto label_2a5928;
        case 0x2a592cu: goto label_2a592c;
        case 0x2a5930u: goto label_2a5930;
        case 0x2a5934u: goto label_2a5934;
        case 0x2a5938u: goto label_2a5938;
        case 0x2a593cu: goto label_2a593c;
        case 0x2a5940u: goto label_2a5940;
        case 0x2a5944u: goto label_2a5944;
        case 0x2a5948u: goto label_2a5948;
        case 0x2a594cu: goto label_2a594c;
        case 0x2a5950u: goto label_2a5950;
        case 0x2a5954u: goto label_2a5954;
        case 0x2a5958u: goto label_2a5958;
        case 0x2a595cu: goto label_2a595c;
        case 0x2a5960u: goto label_2a5960;
        case 0x2a5964u: goto label_2a5964;
        case 0x2a5968u: goto label_2a5968;
        case 0x2a596cu: goto label_2a596c;
        case 0x2a5970u: goto label_2a5970;
        case 0x2a5974u: goto label_2a5974;
        case 0x2a5978u: goto label_2a5978;
        case 0x2a597cu: goto label_2a597c;
        case 0x2a5980u: goto label_2a5980;
        case 0x2a5984u: goto label_2a5984;
        case 0x2a5988u: goto label_2a5988;
        case 0x2a598cu: goto label_2a598c;
        case 0x2a5990u: goto label_2a5990;
        case 0x2a5994u: goto label_2a5994;
        case 0x2a5998u: goto label_2a5998;
        case 0x2a599cu: goto label_2a599c;
        case 0x2a59a0u: goto label_2a59a0;
        case 0x2a59a4u: goto label_2a59a4;
        case 0x2a59a8u: goto label_2a59a8;
        case 0x2a59acu: goto label_2a59ac;
        case 0x2a59b0u: goto label_2a59b0;
        case 0x2a59b4u: goto label_2a59b4;
        case 0x2a59b8u: goto label_2a59b8;
        case 0x2a59bcu: goto label_2a59bc;
        case 0x2a59c0u: goto label_2a59c0;
        case 0x2a59c4u: goto label_2a59c4;
        case 0x2a59c8u: goto label_2a59c8;
        case 0x2a59ccu: goto label_2a59cc;
        case 0x2a59d0u: goto label_2a59d0;
        case 0x2a59d4u: goto label_2a59d4;
        case 0x2a59d8u: goto label_2a59d8;
        case 0x2a59dcu: goto label_2a59dc;
        case 0x2a59e0u: goto label_2a59e0;
        case 0x2a59e4u: goto label_2a59e4;
        case 0x2a59e8u: goto label_2a59e8;
        case 0x2a59ecu: goto label_2a59ec;
        case 0x2a59f0u: goto label_2a59f0;
        case 0x2a59f4u: goto label_2a59f4;
        case 0x2a59f8u: goto label_2a59f8;
        case 0x2a59fcu: goto label_2a59fc;
        case 0x2a5a00u: goto label_2a5a00;
        case 0x2a5a04u: goto label_2a5a04;
        case 0x2a5a08u: goto label_2a5a08;
        case 0x2a5a0cu: goto label_2a5a0c;
        case 0x2a5a10u: goto label_2a5a10;
        case 0x2a5a14u: goto label_2a5a14;
        case 0x2a5a18u: goto label_2a5a18;
        case 0x2a5a1cu: goto label_2a5a1c;
        case 0x2a5a20u: goto label_2a5a20;
        case 0x2a5a24u: goto label_2a5a24;
        case 0x2a5a28u: goto label_2a5a28;
        case 0x2a5a2cu: goto label_2a5a2c;
        case 0x2a5a30u: goto label_2a5a30;
        case 0x2a5a34u: goto label_2a5a34;
        case 0x2a5a38u: goto label_2a5a38;
        case 0x2a5a3cu: goto label_2a5a3c;
        case 0x2a5a40u: goto label_2a5a40;
        case 0x2a5a44u: goto label_2a5a44;
        case 0x2a5a48u: goto label_2a5a48;
        case 0x2a5a4cu: goto label_2a5a4c;
        case 0x2a5a50u: goto label_2a5a50;
        case 0x2a5a54u: goto label_2a5a54;
        case 0x2a5a58u: goto label_2a5a58;
        case 0x2a5a5cu: goto label_2a5a5c;
        case 0x2a5a60u: goto label_2a5a60;
        case 0x2a5a64u: goto label_2a5a64;
        case 0x2a5a68u: goto label_2a5a68;
        case 0x2a5a6cu: goto label_2a5a6c;
        case 0x2a5a70u: goto label_2a5a70;
        case 0x2a5a74u: goto label_2a5a74;
        case 0x2a5a78u: goto label_2a5a78;
        case 0x2a5a7cu: goto label_2a5a7c;
        case 0x2a5a80u: goto label_2a5a80;
        case 0x2a5a84u: goto label_2a5a84;
        case 0x2a5a88u: goto label_2a5a88;
        case 0x2a5a8cu: goto label_2a5a8c;
        case 0x2a5a90u: goto label_2a5a90;
        case 0x2a5a94u: goto label_2a5a94;
        case 0x2a5a98u: goto label_2a5a98;
        case 0x2a5a9cu: goto label_2a5a9c;
        case 0x2a5aa0u: goto label_2a5aa0;
        case 0x2a5aa4u: goto label_2a5aa4;
        case 0x2a5aa8u: goto label_2a5aa8;
        case 0x2a5aacu: goto label_2a5aac;
        case 0x2a5ab0u: goto label_2a5ab0;
        case 0x2a5ab4u: goto label_2a5ab4;
        case 0x2a5ab8u: goto label_2a5ab8;
        case 0x2a5abcu: goto label_2a5abc;
        case 0x2a5ac0u: goto label_2a5ac0;
        case 0x2a5ac4u: goto label_2a5ac4;
        case 0x2a5ac8u: goto label_2a5ac8;
        case 0x2a5accu: goto label_2a5acc;
        case 0x2a5ad0u: goto label_2a5ad0;
        case 0x2a5ad4u: goto label_2a5ad4;
        case 0x2a5ad8u: goto label_2a5ad8;
        case 0x2a5adcu: goto label_2a5adc;
        case 0x2a5ae0u: goto label_2a5ae0;
        case 0x2a5ae4u: goto label_2a5ae4;
        case 0x2a5ae8u: goto label_2a5ae8;
        case 0x2a5aecu: goto label_2a5aec;
        case 0x2a5af0u: goto label_2a5af0;
        case 0x2a5af4u: goto label_2a5af4;
        case 0x2a5af8u: goto label_2a5af8;
        case 0x2a5afcu: goto label_2a5afc;
        case 0x2a5b00u: goto label_2a5b00;
        case 0x2a5b04u: goto label_2a5b04;
        case 0x2a5b08u: goto label_2a5b08;
        case 0x2a5b0cu: goto label_2a5b0c;
        case 0x2a5b10u: goto label_2a5b10;
        case 0x2a5b14u: goto label_2a5b14;
        case 0x2a5b18u: goto label_2a5b18;
        case 0x2a5b1cu: goto label_2a5b1c;
        case 0x2a5b20u: goto label_2a5b20;
        case 0x2a5b24u: goto label_2a5b24;
        case 0x2a5b28u: goto label_2a5b28;
        case 0x2a5b2cu: goto label_2a5b2c;
        case 0x2a5b30u: goto label_2a5b30;
        case 0x2a5b34u: goto label_2a5b34;
        case 0x2a5b38u: goto label_2a5b38;
        case 0x2a5b3cu: goto label_2a5b3c;
        case 0x2a5b40u: goto label_2a5b40;
        case 0x2a5b44u: goto label_2a5b44;
        case 0x2a5b48u: goto label_2a5b48;
        case 0x2a5b4cu: goto label_2a5b4c;
        case 0x2a5b50u: goto label_2a5b50;
        case 0x2a5b54u: goto label_2a5b54;
        case 0x2a5b58u: goto label_2a5b58;
        case 0x2a5b5cu: goto label_2a5b5c;
        case 0x2a5b60u: goto label_2a5b60;
        case 0x2a5b64u: goto label_2a5b64;
        case 0x2a5b68u: goto label_2a5b68;
        case 0x2a5b6cu: goto label_2a5b6c;
        case 0x2a5b70u: goto label_2a5b70;
        case 0x2a5b74u: goto label_2a5b74;
        case 0x2a5b78u: goto label_2a5b78;
        case 0x2a5b7cu: goto label_2a5b7c;
        case 0x2a5b80u: goto label_2a5b80;
        case 0x2a5b84u: goto label_2a5b84;
        case 0x2a5b88u: goto label_2a5b88;
        case 0x2a5b8cu: goto label_2a5b8c;
        case 0x2a5b90u: goto label_2a5b90;
        case 0x2a5b94u: goto label_2a5b94;
        case 0x2a5b98u: goto label_2a5b98;
        case 0x2a5b9cu: goto label_2a5b9c;
        case 0x2a5ba0u: goto label_2a5ba0;
        case 0x2a5ba4u: goto label_2a5ba4;
        case 0x2a5ba8u: goto label_2a5ba8;
        case 0x2a5bacu: goto label_2a5bac;
        case 0x2a5bb0u: goto label_2a5bb0;
        case 0x2a5bb4u: goto label_2a5bb4;
        case 0x2a5bb8u: goto label_2a5bb8;
        case 0x2a5bbcu: goto label_2a5bbc;
        case 0x2a5bc0u: goto label_2a5bc0;
        case 0x2a5bc4u: goto label_2a5bc4;
        case 0x2a5bc8u: goto label_2a5bc8;
        case 0x2a5bccu: goto label_2a5bcc;
        case 0x2a5bd0u: goto label_2a5bd0;
        case 0x2a5bd4u: goto label_2a5bd4;
        case 0x2a5bd8u: goto label_2a5bd8;
        case 0x2a5bdcu: goto label_2a5bdc;
        case 0x2a5be0u: goto label_2a5be0;
        case 0x2a5be4u: goto label_2a5be4;
        case 0x2a5be8u: goto label_2a5be8;
        case 0x2a5becu: goto label_2a5bec;
        case 0x2a5bf0u: goto label_2a5bf0;
        case 0x2a5bf4u: goto label_2a5bf4;
        case 0x2a5bf8u: goto label_2a5bf8;
        case 0x2a5bfcu: goto label_2a5bfc;
        case 0x2a5c00u: goto label_2a5c00;
        case 0x2a5c04u: goto label_2a5c04;
        case 0x2a5c08u: goto label_2a5c08;
        case 0x2a5c0cu: goto label_2a5c0c;
        case 0x2a5c10u: goto label_2a5c10;
        case 0x2a5c14u: goto label_2a5c14;
        case 0x2a5c18u: goto label_2a5c18;
        case 0x2a5c1cu: goto label_2a5c1c;
        case 0x2a5c20u: goto label_2a5c20;
        case 0x2a5c24u: goto label_2a5c24;
        case 0x2a5c28u: goto label_2a5c28;
        case 0x2a5c2cu: goto label_2a5c2c;
        case 0x2a5c30u: goto label_2a5c30;
        case 0x2a5c34u: goto label_2a5c34;
        case 0x2a5c38u: goto label_2a5c38;
        case 0x2a5c3cu: goto label_2a5c3c;
        case 0x2a5c40u: goto label_2a5c40;
        case 0x2a5c44u: goto label_2a5c44;
        case 0x2a5c48u: goto label_2a5c48;
        case 0x2a5c4cu: goto label_2a5c4c;
        case 0x2a5c50u: goto label_2a5c50;
        case 0x2a5c54u: goto label_2a5c54;
        case 0x2a5c58u: goto label_2a5c58;
        case 0x2a5c5cu: goto label_2a5c5c;
        case 0x2a5c60u: goto label_2a5c60;
        case 0x2a5c64u: goto label_2a5c64;
        case 0x2a5c68u: goto label_2a5c68;
        case 0x2a5c6cu: goto label_2a5c6c;
        case 0x2a5c70u: goto label_2a5c70;
        case 0x2a5c74u: goto label_2a5c74;
        case 0x2a5c78u: goto label_2a5c78;
        case 0x2a5c7cu: goto label_2a5c7c;
        case 0x2a5c80u: goto label_2a5c80;
        case 0x2a5c84u: goto label_2a5c84;
        case 0x2a5c88u: goto label_2a5c88;
        case 0x2a5c8cu: goto label_2a5c8c;
        case 0x2a5c90u: goto label_2a5c90;
        case 0x2a5c94u: goto label_2a5c94;
        case 0x2a5c98u: goto label_2a5c98;
        case 0x2a5c9cu: goto label_2a5c9c;
        case 0x2a5ca0u: goto label_2a5ca0;
        case 0x2a5ca4u: goto label_2a5ca4;
        case 0x2a5ca8u: goto label_2a5ca8;
        case 0x2a5cacu: goto label_2a5cac;
        case 0x2a5cb0u: goto label_2a5cb0;
        case 0x2a5cb4u: goto label_2a5cb4;
        case 0x2a5cb8u: goto label_2a5cb8;
        case 0x2a5cbcu: goto label_2a5cbc;
        case 0x2a5cc0u: goto label_2a5cc0;
        case 0x2a5cc4u: goto label_2a5cc4;
        case 0x2a5cc8u: goto label_2a5cc8;
        case 0x2a5cccu: goto label_2a5ccc;
        case 0x2a5cd0u: goto label_2a5cd0;
        case 0x2a5cd4u: goto label_2a5cd4;
        case 0x2a5cd8u: goto label_2a5cd8;
        case 0x2a5cdcu: goto label_2a5cdc;
        case 0x2a5ce0u: goto label_2a5ce0;
        case 0x2a5ce4u: goto label_2a5ce4;
        case 0x2a5ce8u: goto label_2a5ce8;
        case 0x2a5cecu: goto label_2a5cec;
        case 0x2a5cf0u: goto label_2a5cf0;
        case 0x2a5cf4u: goto label_2a5cf4;
        case 0x2a5cf8u: goto label_2a5cf8;
        case 0x2a5cfcu: goto label_2a5cfc;
        case 0x2a5d00u: goto label_2a5d00;
        case 0x2a5d04u: goto label_2a5d04;
        case 0x2a5d08u: goto label_2a5d08;
        case 0x2a5d0cu: goto label_2a5d0c;
        case 0x2a5d10u: goto label_2a5d10;
        case 0x2a5d14u: goto label_2a5d14;
        case 0x2a5d18u: goto label_2a5d18;
        case 0x2a5d1cu: goto label_2a5d1c;
        case 0x2a5d20u: goto label_2a5d20;
        case 0x2a5d24u: goto label_2a5d24;
        case 0x2a5d28u: goto label_2a5d28;
        case 0x2a5d2cu: goto label_2a5d2c;
        case 0x2a5d30u: goto label_2a5d30;
        case 0x2a5d34u: goto label_2a5d34;
        case 0x2a5d38u: goto label_2a5d38;
        case 0x2a5d3cu: goto label_2a5d3c;
        case 0x2a5d40u: goto label_2a5d40;
        case 0x2a5d44u: goto label_2a5d44;
        case 0x2a5d48u: goto label_2a5d48;
        case 0x2a5d4cu: goto label_2a5d4c;
        case 0x2a5d50u: goto label_2a5d50;
        case 0x2a5d54u: goto label_2a5d54;
        case 0x2a5d58u: goto label_2a5d58;
        case 0x2a5d5cu: goto label_2a5d5c;
        case 0x2a5d60u: goto label_2a5d60;
        case 0x2a5d64u: goto label_2a5d64;
        case 0x2a5d68u: goto label_2a5d68;
        case 0x2a5d6cu: goto label_2a5d6c;
        case 0x2a5d70u: goto label_2a5d70;
        case 0x2a5d74u: goto label_2a5d74;
        case 0x2a5d78u: goto label_2a5d78;
        case 0x2a5d7cu: goto label_2a5d7c;
        case 0x2a5d80u: goto label_2a5d80;
        case 0x2a5d84u: goto label_2a5d84;
        case 0x2a5d88u: goto label_2a5d88;
        case 0x2a5d8cu: goto label_2a5d8c;
        case 0x2a5d90u: goto label_2a5d90;
        case 0x2a5d94u: goto label_2a5d94;
        case 0x2a5d98u: goto label_2a5d98;
        case 0x2a5d9cu: goto label_2a5d9c;
        case 0x2a5da0u: goto label_2a5da0;
        case 0x2a5da4u: goto label_2a5da4;
        case 0x2a5da8u: goto label_2a5da8;
        case 0x2a5dacu: goto label_2a5dac;
        case 0x2a5db0u: goto label_2a5db0;
        case 0x2a5db4u: goto label_2a5db4;
        case 0x2a5db8u: goto label_2a5db8;
        case 0x2a5dbcu: goto label_2a5dbc;
        case 0x2a5dc0u: goto label_2a5dc0;
        case 0x2a5dc4u: goto label_2a5dc4;
        case 0x2a5dc8u: goto label_2a5dc8;
        case 0x2a5dccu: goto label_2a5dcc;
        case 0x2a5dd0u: goto label_2a5dd0;
        case 0x2a5dd4u: goto label_2a5dd4;
        case 0x2a5dd8u: goto label_2a5dd8;
        case 0x2a5ddcu: goto label_2a5ddc;
        case 0x2a5de0u: goto label_2a5de0;
        case 0x2a5de4u: goto label_2a5de4;
        case 0x2a5de8u: goto label_2a5de8;
        case 0x2a5decu: goto label_2a5dec;
        case 0x2a5df0u: goto label_2a5df0;
        case 0x2a5df4u: goto label_2a5df4;
        case 0x2a5df8u: goto label_2a5df8;
        case 0x2a5dfcu: goto label_2a5dfc;
        case 0x2a5e00u: goto label_2a5e00;
        case 0x2a5e04u: goto label_2a5e04;
        case 0x2a5e08u: goto label_2a5e08;
        case 0x2a5e0cu: goto label_2a5e0c;
        case 0x2a5e10u: goto label_2a5e10;
        case 0x2a5e14u: goto label_2a5e14;
        case 0x2a5e18u: goto label_2a5e18;
        case 0x2a5e1cu: goto label_2a5e1c;
        case 0x2a5e20u: goto label_2a5e20;
        case 0x2a5e24u: goto label_2a5e24;
        case 0x2a5e28u: goto label_2a5e28;
        case 0x2a5e2cu: goto label_2a5e2c;
        case 0x2a5e30u: goto label_2a5e30;
        case 0x2a5e34u: goto label_2a5e34;
        case 0x2a5e38u: goto label_2a5e38;
        case 0x2a5e3cu: goto label_2a5e3c;
        case 0x2a5e40u: goto label_2a5e40;
        case 0x2a5e44u: goto label_2a5e44;
        case 0x2a5e48u: goto label_2a5e48;
        case 0x2a5e4cu: goto label_2a5e4c;
        case 0x2a5e50u: goto label_2a5e50;
        case 0x2a5e54u: goto label_2a5e54;
        case 0x2a5e58u: goto label_2a5e58;
        case 0x2a5e5cu: goto label_2a5e5c;
        case 0x2a5e60u: goto label_2a5e60;
        case 0x2a5e64u: goto label_2a5e64;
        case 0x2a5e68u: goto label_2a5e68;
        case 0x2a5e6cu: goto label_2a5e6c;
        case 0x2a5e70u: goto label_2a5e70;
        case 0x2a5e74u: goto label_2a5e74;
        case 0x2a5e78u: goto label_2a5e78;
        case 0x2a5e7cu: goto label_2a5e7c;
        case 0x2a5e80u: goto label_2a5e80;
        case 0x2a5e84u: goto label_2a5e84;
        case 0x2a5e88u: goto label_2a5e88;
        case 0x2a5e8cu: goto label_2a5e8c;
        case 0x2a5e90u: goto label_2a5e90;
        case 0x2a5e94u: goto label_2a5e94;
        case 0x2a5e98u: goto label_2a5e98;
        case 0x2a5e9cu: goto label_2a5e9c;
        case 0x2a5ea0u: goto label_2a5ea0;
        case 0x2a5ea4u: goto label_2a5ea4;
        case 0x2a5ea8u: goto label_2a5ea8;
        case 0x2a5eacu: goto label_2a5eac;
        case 0x2a5eb0u: goto label_2a5eb0;
        case 0x2a5eb4u: goto label_2a5eb4;
        case 0x2a5eb8u: goto label_2a5eb8;
        case 0x2a5ebcu: goto label_2a5ebc;
        case 0x2a5ec0u: goto label_2a5ec0;
        case 0x2a5ec4u: goto label_2a5ec4;
        case 0x2a5ec8u: goto label_2a5ec8;
        case 0x2a5eccu: goto label_2a5ecc;
        case 0x2a5ed0u: goto label_2a5ed0;
        case 0x2a5ed4u: goto label_2a5ed4;
        case 0x2a5ed8u: goto label_2a5ed8;
        case 0x2a5edcu: goto label_2a5edc;
        case 0x2a5ee0u: goto label_2a5ee0;
        case 0x2a5ee4u: goto label_2a5ee4;
        case 0x2a5ee8u: goto label_2a5ee8;
        case 0x2a5eecu: goto label_2a5eec;
        case 0x2a5ef0u: goto label_2a5ef0;
        case 0x2a5ef4u: goto label_2a5ef4;
        case 0x2a5ef8u: goto label_2a5ef8;
        case 0x2a5efcu: goto label_2a5efc;
        case 0x2a5f00u: goto label_2a5f00;
        case 0x2a5f04u: goto label_2a5f04;
        case 0x2a5f08u: goto label_2a5f08;
        case 0x2a5f0cu: goto label_2a5f0c;
        case 0x2a5f10u: goto label_2a5f10;
        case 0x2a5f14u: goto label_2a5f14;
        case 0x2a5f18u: goto label_2a5f18;
        case 0x2a5f1cu: goto label_2a5f1c;
        case 0x2a5f20u: goto label_2a5f20;
        case 0x2a5f24u: goto label_2a5f24;
        case 0x2a5f28u: goto label_2a5f28;
        case 0x2a5f2cu: goto label_2a5f2c;
        case 0x2a5f30u: goto label_2a5f30;
        case 0x2a5f34u: goto label_2a5f34;
        case 0x2a5f38u: goto label_2a5f38;
        case 0x2a5f3cu: goto label_2a5f3c;
        case 0x2a5f40u: goto label_2a5f40;
        case 0x2a5f44u: goto label_2a5f44;
        case 0x2a5f48u: goto label_2a5f48;
        case 0x2a5f4cu: goto label_2a5f4c;
        case 0x2a5f50u: goto label_2a5f50;
        case 0x2a5f54u: goto label_2a5f54;
        case 0x2a5f58u: goto label_2a5f58;
        case 0x2a5f5cu: goto label_2a5f5c;
        case 0x2a5f60u: goto label_2a5f60;
        case 0x2a5f64u: goto label_2a5f64;
        case 0x2a5f68u: goto label_2a5f68;
        case 0x2a5f6cu: goto label_2a5f6c;
        case 0x2a5f70u: goto label_2a5f70;
        case 0x2a5f74u: goto label_2a5f74;
        case 0x2a5f78u: goto label_2a5f78;
        case 0x2a5f7cu: goto label_2a5f7c;
        case 0x2a5f80u: goto label_2a5f80;
        case 0x2a5f84u: goto label_2a5f84;
        case 0x2a5f88u: goto label_2a5f88;
        case 0x2a5f8cu: goto label_2a5f8c;
        case 0x2a5f90u: goto label_2a5f90;
        case 0x2a5f94u: goto label_2a5f94;
        case 0x2a5f98u: goto label_2a5f98;
        case 0x2a5f9cu: goto label_2a5f9c;
        case 0x2a5fa0u: goto label_2a5fa0;
        case 0x2a5fa4u: goto label_2a5fa4;
        case 0x2a5fa8u: goto label_2a5fa8;
        case 0x2a5facu: goto label_2a5fac;
        case 0x2a5fb0u: goto label_2a5fb0;
        case 0x2a5fb4u: goto label_2a5fb4;
        case 0x2a5fb8u: goto label_2a5fb8;
        case 0x2a5fbcu: goto label_2a5fbc;
        case 0x2a5fc0u: goto label_2a5fc0;
        case 0x2a5fc4u: goto label_2a5fc4;
        case 0x2a5fc8u: goto label_2a5fc8;
        case 0x2a5fccu: goto label_2a5fcc;
        case 0x2a5fd0u: goto label_2a5fd0;
        case 0x2a5fd4u: goto label_2a5fd4;
        case 0x2a5fd8u: goto label_2a5fd8;
        case 0x2a5fdcu: goto label_2a5fdc;
        case 0x2a5fe0u: goto label_2a5fe0;
        case 0x2a5fe4u: goto label_2a5fe4;
        case 0x2a5fe8u: goto label_2a5fe8;
        case 0x2a5fecu: goto label_2a5fec;
        case 0x2a5ff0u: goto label_2a5ff0;
        case 0x2a5ff4u: goto label_2a5ff4;
        case 0x2a5ff8u: goto label_2a5ff8;
        case 0x2a5ffcu: goto label_2a5ffc;
        case 0x2a6000u: goto label_2a6000;
        case 0x2a6004u: goto label_2a6004;
        case 0x2a6008u: goto label_2a6008;
        case 0x2a600cu: goto label_2a600c;
        case 0x2a6010u: goto label_2a6010;
        case 0x2a6014u: goto label_2a6014;
        case 0x2a6018u: goto label_2a6018;
        case 0x2a601cu: goto label_2a601c;
        case 0x2a6020u: goto label_2a6020;
        case 0x2a6024u: goto label_2a6024;
        case 0x2a6028u: goto label_2a6028;
        case 0x2a602cu: goto label_2a602c;
        case 0x2a6030u: goto label_2a6030;
        case 0x2a6034u: goto label_2a6034;
        case 0x2a6038u: goto label_2a6038;
        case 0x2a603cu: goto label_2a603c;
        case 0x2a6040u: goto label_2a6040;
        case 0x2a6044u: goto label_2a6044;
        case 0x2a6048u: goto label_2a6048;
        case 0x2a604cu: goto label_2a604c;
        case 0x2a6050u: goto label_2a6050;
        case 0x2a6054u: goto label_2a6054;
        case 0x2a6058u: goto label_2a6058;
        case 0x2a605cu: goto label_2a605c;
        case 0x2a6060u: goto label_2a6060;
        case 0x2a6064u: goto label_2a6064;
        case 0x2a6068u: goto label_2a6068;
        case 0x2a606cu: goto label_2a606c;
        case 0x2a6070u: goto label_2a6070;
        case 0x2a6074u: goto label_2a6074;
        case 0x2a6078u: goto label_2a6078;
        case 0x2a607cu: goto label_2a607c;
        case 0x2a6080u: goto label_2a6080;
        case 0x2a6084u: goto label_2a6084;
        case 0x2a6088u: goto label_2a6088;
        case 0x2a608cu: goto label_2a608c;
        case 0x2a6090u: goto label_2a6090;
        case 0x2a6094u: goto label_2a6094;
        case 0x2a6098u: goto label_2a6098;
        case 0x2a609cu: goto label_2a609c;
        case 0x2a60a0u: goto label_2a60a0;
        case 0x2a60a4u: goto label_2a60a4;
        case 0x2a60a8u: goto label_2a60a8;
        case 0x2a60acu: goto label_2a60ac;
        case 0x2a60b0u: goto label_2a60b0;
        case 0x2a60b4u: goto label_2a60b4;
        case 0x2a60b8u: goto label_2a60b8;
        case 0x2a60bcu: goto label_2a60bc;
        case 0x2a60c0u: goto label_2a60c0;
        case 0x2a60c4u: goto label_2a60c4;
        case 0x2a60c8u: goto label_2a60c8;
        case 0x2a60ccu: goto label_2a60cc;
        case 0x2a60d0u: goto label_2a60d0;
        case 0x2a60d4u: goto label_2a60d4;
        case 0x2a60d8u: goto label_2a60d8;
        case 0x2a60dcu: goto label_2a60dc;
        case 0x2a60e0u: goto label_2a60e0;
        case 0x2a60e4u: goto label_2a60e4;
        case 0x2a60e8u: goto label_2a60e8;
        case 0x2a60ecu: goto label_2a60ec;
        case 0x2a60f0u: goto label_2a60f0;
        case 0x2a60f4u: goto label_2a60f4;
        case 0x2a60f8u: goto label_2a60f8;
        case 0x2a60fcu: goto label_2a60fc;
        case 0x2a6100u: goto label_2a6100;
        case 0x2a6104u: goto label_2a6104;
        case 0x2a6108u: goto label_2a6108;
        case 0x2a610cu: goto label_2a610c;
        case 0x2a6110u: goto label_2a6110;
        case 0x2a6114u: goto label_2a6114;
        case 0x2a6118u: goto label_2a6118;
        case 0x2a611cu: goto label_2a611c;
        case 0x2a6120u: goto label_2a6120;
        case 0x2a6124u: goto label_2a6124;
        case 0x2a6128u: goto label_2a6128;
        case 0x2a612cu: goto label_2a612c;
        case 0x2a6130u: goto label_2a6130;
        case 0x2a6134u: goto label_2a6134;
        case 0x2a6138u: goto label_2a6138;
        case 0x2a613cu: goto label_2a613c;
        case 0x2a6140u: goto label_2a6140;
        case 0x2a6144u: goto label_2a6144;
        case 0x2a6148u: goto label_2a6148;
        case 0x2a614cu: goto label_2a614c;
        case 0x2a6150u: goto label_2a6150;
        case 0x2a6154u: goto label_2a6154;
        case 0x2a6158u: goto label_2a6158;
        case 0x2a615cu: goto label_2a615c;
        case 0x2a6160u: goto label_2a6160;
        case 0x2a6164u: goto label_2a6164;
        case 0x2a6168u: goto label_2a6168;
        case 0x2a616cu: goto label_2a616c;
        case 0x2a6170u: goto label_2a6170;
        case 0x2a6174u: goto label_2a6174;
        case 0x2a6178u: goto label_2a6178;
        case 0x2a617cu: goto label_2a617c;
        case 0x2a6180u: goto label_2a6180;
        case 0x2a6184u: goto label_2a6184;
        case 0x2a6188u: goto label_2a6188;
        case 0x2a618cu: goto label_2a618c;
        case 0x2a6190u: goto label_2a6190;
        case 0x2a6194u: goto label_2a6194;
        case 0x2a6198u: goto label_2a6198;
        case 0x2a619cu: goto label_2a619c;
        case 0x2a61a0u: goto label_2a61a0;
        case 0x2a61a4u: goto label_2a61a4;
        case 0x2a61a8u: goto label_2a61a8;
        case 0x2a61acu: goto label_2a61ac;
        case 0x2a61b0u: goto label_2a61b0;
        case 0x2a61b4u: goto label_2a61b4;
        case 0x2a61b8u: goto label_2a61b8;
        case 0x2a61bcu: goto label_2a61bc;
        case 0x2a61c0u: goto label_2a61c0;
        case 0x2a61c4u: goto label_2a61c4;
        case 0x2a61c8u: goto label_2a61c8;
        case 0x2a61ccu: goto label_2a61cc;
        case 0x2a61d0u: goto label_2a61d0;
        case 0x2a61d4u: goto label_2a61d4;
        case 0x2a61d8u: goto label_2a61d8;
        case 0x2a61dcu: goto label_2a61dc;
        case 0x2a61e0u: goto label_2a61e0;
        case 0x2a61e4u: goto label_2a61e4;
        case 0x2a61e8u: goto label_2a61e8;
        case 0x2a61ecu: goto label_2a61ec;
        case 0x2a61f0u: goto label_2a61f0;
        case 0x2a61f4u: goto label_2a61f4;
        case 0x2a61f8u: goto label_2a61f8;
        case 0x2a61fcu: goto label_2a61fc;
        case 0x2a6200u: goto label_2a6200;
        case 0x2a6204u: goto label_2a6204;
        case 0x2a6208u: goto label_2a6208;
        case 0x2a620cu: goto label_2a620c;
        case 0x2a6210u: goto label_2a6210;
        case 0x2a6214u: goto label_2a6214;
        case 0x2a6218u: goto label_2a6218;
        case 0x2a621cu: goto label_2a621c;
        case 0x2a6220u: goto label_2a6220;
        case 0x2a6224u: goto label_2a6224;
        case 0x2a6228u: goto label_2a6228;
        case 0x2a622cu: goto label_2a622c;
        case 0x2a6230u: goto label_2a6230;
        case 0x2a6234u: goto label_2a6234;
        case 0x2a6238u: goto label_2a6238;
        case 0x2a623cu: goto label_2a623c;
        case 0x2a6240u: goto label_2a6240;
        case 0x2a6244u: goto label_2a6244;
        case 0x2a6248u: goto label_2a6248;
        case 0x2a624cu: goto label_2a624c;
        case 0x2a6250u: goto label_2a6250;
        case 0x2a6254u: goto label_2a6254;
        case 0x2a6258u: goto label_2a6258;
        case 0x2a625cu: goto label_2a625c;
        case 0x2a6260u: goto label_2a6260;
        case 0x2a6264u: goto label_2a6264;
        case 0x2a6268u: goto label_2a6268;
        case 0x2a626cu: goto label_2a626c;
        case 0x2a6270u: goto label_2a6270;
        case 0x2a6274u: goto label_2a6274;
        case 0x2a6278u: goto label_2a6278;
        case 0x2a627cu: goto label_2a627c;
        case 0x2a6280u: goto label_2a6280;
        case 0x2a6284u: goto label_2a6284;
        case 0x2a6288u: goto label_2a6288;
        case 0x2a628cu: goto label_2a628c;
        case 0x2a6290u: goto label_2a6290;
        case 0x2a6294u: goto label_2a6294;
        case 0x2a6298u: goto label_2a6298;
        case 0x2a629cu: goto label_2a629c;
        case 0x2a62a0u: goto label_2a62a0;
        case 0x2a62a4u: goto label_2a62a4;
        case 0x2a62a8u: goto label_2a62a8;
        case 0x2a62acu: goto label_2a62ac;
        case 0x2a62b0u: goto label_2a62b0;
        case 0x2a62b4u: goto label_2a62b4;
        case 0x2a62b8u: goto label_2a62b8;
        case 0x2a62bcu: goto label_2a62bc;
        case 0x2a62c0u: goto label_2a62c0;
        case 0x2a62c4u: goto label_2a62c4;
        case 0x2a62c8u: goto label_2a62c8;
        case 0x2a62ccu: goto label_2a62cc;
        case 0x2a62d0u: goto label_2a62d0;
        case 0x2a62d4u: goto label_2a62d4;
        case 0x2a62d8u: goto label_2a62d8;
        case 0x2a62dcu: goto label_2a62dc;
        case 0x2a62e0u: goto label_2a62e0;
        case 0x2a62e4u: goto label_2a62e4;
        case 0x2a62e8u: goto label_2a62e8;
        case 0x2a62ecu: goto label_2a62ec;
        case 0x2a62f0u: goto label_2a62f0;
        case 0x2a62f4u: goto label_2a62f4;
        case 0x2a62f8u: goto label_2a62f8;
        case 0x2a62fcu: goto label_2a62fc;
        case 0x2a6300u: goto label_2a6300;
        case 0x2a6304u: goto label_2a6304;
        case 0x2a6308u: goto label_2a6308;
        case 0x2a630cu: goto label_2a630c;
        case 0x2a6310u: goto label_2a6310;
        case 0x2a6314u: goto label_2a6314;
        case 0x2a6318u: goto label_2a6318;
        case 0x2a631cu: goto label_2a631c;
        case 0x2a6320u: goto label_2a6320;
        case 0x2a6324u: goto label_2a6324;
        case 0x2a6328u: goto label_2a6328;
        case 0x2a632cu: goto label_2a632c;
        case 0x2a6330u: goto label_2a6330;
        case 0x2a6334u: goto label_2a6334;
        case 0x2a6338u: goto label_2a6338;
        case 0x2a633cu: goto label_2a633c;
        case 0x2a6340u: goto label_2a6340;
        case 0x2a6344u: goto label_2a6344;
        case 0x2a6348u: goto label_2a6348;
        case 0x2a634cu: goto label_2a634c;
        case 0x2a6350u: goto label_2a6350;
        case 0x2a6354u: goto label_2a6354;
        case 0x2a6358u: goto label_2a6358;
        case 0x2a635cu: goto label_2a635c;
        case 0x2a6360u: goto label_2a6360;
        case 0x2a6364u: goto label_2a6364;
        case 0x2a6368u: goto label_2a6368;
        case 0x2a636cu: goto label_2a636c;
        case 0x2a6370u: goto label_2a6370;
        case 0x2a6374u: goto label_2a6374;
        case 0x2a6378u: goto label_2a6378;
        case 0x2a637cu: goto label_2a637c;
        case 0x2a6380u: goto label_2a6380;
        case 0x2a6384u: goto label_2a6384;
        case 0x2a6388u: goto label_2a6388;
        case 0x2a638cu: goto label_2a638c;
        case 0x2a6390u: goto label_2a6390;
        case 0x2a6394u: goto label_2a6394;
        case 0x2a6398u: goto label_2a6398;
        case 0x2a639cu: goto label_2a639c;
        case 0x2a63a0u: goto label_2a63a0;
        case 0x2a63a4u: goto label_2a63a4;
        case 0x2a63a8u: goto label_2a63a8;
        case 0x2a63acu: goto label_2a63ac;
        case 0x2a63b0u: goto label_2a63b0;
        case 0x2a63b4u: goto label_2a63b4;
        case 0x2a63b8u: goto label_2a63b8;
        case 0x2a63bcu: goto label_2a63bc;
        case 0x2a63c0u: goto label_2a63c0;
        case 0x2a63c4u: goto label_2a63c4;
        case 0x2a63c8u: goto label_2a63c8;
        case 0x2a63ccu: goto label_2a63cc;
        case 0x2a63d0u: goto label_2a63d0;
        case 0x2a63d4u: goto label_2a63d4;
        case 0x2a63d8u: goto label_2a63d8;
        case 0x2a63dcu: goto label_2a63dc;
        case 0x2a63e0u: goto label_2a63e0;
        case 0x2a63e4u: goto label_2a63e4;
        case 0x2a63e8u: goto label_2a63e8;
        case 0x2a63ecu: goto label_2a63ec;
        case 0x2a63f0u: goto label_2a63f0;
        case 0x2a63f4u: goto label_2a63f4;
        case 0x2a63f8u: goto label_2a63f8;
        case 0x2a63fcu: goto label_2a63fc;
        case 0x2a6400u: goto label_2a6400;
        case 0x2a6404u: goto label_2a6404;
        case 0x2a6408u: goto label_2a6408;
        case 0x2a640cu: goto label_2a640c;
        case 0x2a6410u: goto label_2a6410;
        case 0x2a6414u: goto label_2a6414;
        case 0x2a6418u: goto label_2a6418;
        case 0x2a641cu: goto label_2a641c;
        case 0x2a6420u: goto label_2a6420;
        case 0x2a6424u: goto label_2a6424;
        case 0x2a6428u: goto label_2a6428;
        case 0x2a642cu: goto label_2a642c;
        case 0x2a6430u: goto label_2a6430;
        case 0x2a6434u: goto label_2a6434;
        case 0x2a6438u: goto label_2a6438;
        case 0x2a643cu: goto label_2a643c;
        case 0x2a6440u: goto label_2a6440;
        case 0x2a6444u: goto label_2a6444;
        case 0x2a6448u: goto label_2a6448;
        case 0x2a644cu: goto label_2a644c;
        case 0x2a6450u: goto label_2a6450;
        case 0x2a6454u: goto label_2a6454;
        case 0x2a6458u: goto label_2a6458;
        case 0x2a645cu: goto label_2a645c;
        case 0x2a6460u: goto label_2a6460;
        case 0x2a6464u: goto label_2a6464;
        default: break;
    }

    ctx->pc = 0x2a5570u;

label_2a5570:
    // 0x2a5570: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2a5570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2a5574:
    // 0x2a5574: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2a5574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_2a5578:
    // 0x2a5578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a557c:
    // 0x2a557c: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x2a557cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
label_2a5580:
    // 0x2a5580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a5580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5584:
    // 0x2a5584: 0x8fb00138  lw          $s0, 0x138($sp)
    ctx->pc = 0x2a5584u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5588:
    // 0x2a5588: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x2a5588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
label_2a558c:
    // 0x2a558c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a558cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5590:
    // 0x2a5590: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2a5590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2a5594:
    // 0x2a5594: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2a5594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a5598:
    // 0x2a5598: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x2a5598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2a559c:
    // 0x2a559c: 0x102003ad  beqz        $at, . + 4 + (0x3AD << 2)
label_2a55a0:
    if (ctx->pc == 0x2A55A0u) {
        ctx->pc = 0x2A55A4u;
        goto label_2a55a4;
    }
    ctx->pc = 0x2A559Cu;
    {
        const bool branch_taken_0x2a559c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a559c) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A55A4u;
label_2a55a4:
    // 0x2a55a4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a55a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_2a55a8:
    // 0x2a55a8: 0x24831880  addiu       $v1, $a0, 0x1880
    ctx->pc = 0x2a55a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6272));
label_2a55ac:
    // 0x2a55ac: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2a55acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a55b0:
    // 0x2a55b0: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x2a55b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2a55b4:
    // 0x2a55b4: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2a55b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a55b8:
    // 0x2a55b8: 0x1000008  jr          $t0
label_2a55bc:
    if (ctx->pc == 0x2A55BCu) {
        ctx->pc = 0x2A55C0u;
        goto label_2a55c0;
    }
    ctx->pc = 0x2A55B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A55B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A55C0u;
label_2a55c0:
    // 0x2a55c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a55c4:
    // 0x2a55c4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a55c8:
    // 0x2a55c8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2a55c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2a55cc:
    // 0x2a55cc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a55d0:
    // 0x2a55d0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a55d4:
    // 0x2a55d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a55d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a55d8:
    // 0x2a55d8: 0x8c620368  lw          $v0, 0x368($v1)
    ctx->pc = 0x2a55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_2a55dc:
    // 0x2a55dc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a55dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a55e0:
    // 0x2a55e0: 0x24060409  addiu       $a2, $zero, 0x409
    ctx->pc = 0x2a55e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
label_2a55e4:
    // 0x2a55e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a55e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a55e8:
    // 0x2a55e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a55e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a55ec:
    // 0x2a55ec: 0xc0965d0  jal         func_259740
label_2a55f0:
    if (ctx->pc == 0x2A55F0u) {
        ctx->pc = 0x2A55F4u;
        goto label_2a55f4;
    }
    ctx->pc = 0x2A55ECu;
    SET_GPR_U32(ctx, 31, 0x2A55F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A55ECu, 0x2A55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A55F4u;
label_2a55f4:
    // 0x2a55f4: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2a55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
label_2a55f8:
    // 0x2a55f8: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x2a55f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_2a55fc:
    // 0x2a55fc: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a55fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5600:
    // 0x2a5600: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5604:
    // 0x2a5604: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5608:
    // 0x2a5608: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a5608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_2a560c:
    // 0x2a560c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a5610:
    // 0x2a5610: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a5610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_2a5614:
    // 0x2a5614: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a5614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
label_2a5618:
    // 0x2a5618: 0xc05c848  jal         func_172120
label_2a561c:
    if (ctx->pc == 0x2A561Cu) {
        ctx->pc = 0x2A5620u;
        goto label_2a5620;
    }
    ctx->pc = 0x2A5618u;
    SET_GPR_U32(ctx, 31, 0x2A5620u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A5618u, 0x2A5620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5620u;
label_2a5620:
    // 0x2a5620: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a5620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_2a5624:
    // 0x2a5624: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5628:
    // 0x2a5628: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x2a5628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a562c:
    // 0x2a562c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5630:
    // 0x2a5630: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a5630u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a5634:
    // 0x2a5634: 0xc058fec  jal         func_163FB0
label_2a5638:
    if (ctx->pc == 0x2A5638u) {
        ctx->pc = 0x2A563Cu;
        goto label_2a563c;
    }
    ctx->pc = 0x2A5634u;
    SET_GPR_U32(ctx, 31, 0x2A563Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A5634u, 0x2A563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A563Cu;
label_2a563c:
    // 0x2a563c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5640:
    // 0x2a5640: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a5640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_2a5644:
    // 0x2a5644: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5648:
    // 0x2a5648: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a564c:
    // 0x2a564c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a564cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2a5650:
    // 0x2a5650: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a5650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5654:
    // 0x2a5654: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a5654u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a5658:
    // 0x2a5658: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a5658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2a565c:
    // 0x2a565c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a565cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5660:
    // 0x2a5660: 0x0  nop
    ctx->pc = 0x2a5660u;
    // NOP
label_2a5664:
    // 0x2a5664: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a5664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2a5668:
    // 0x2a5668: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a566c:
    // 0x2a566c: 0xc4610128  lwc1        $f1, 0x128($v1)
    ctx->pc = 0x2a566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5670:
    // 0x2a5670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a5670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2a5674:
    // 0x2a5674: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a5674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5678:
    // 0x2a5678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a5678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a567c:
    // 0x2a567c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2a5680:
    // 0x2a5680: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a5680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2a5684:
    // 0x2a5684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a5684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5688:
    // 0x2a5688: 0x0  nop
    ctx->pc = 0x2a5688u;
    // NOP
label_2a568c:
    // 0x2a568c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2a5690:
    // 0x2a5690: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a5690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a5694:
    // 0x2a5694: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a5694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a5698:
    // 0x2a5698: 0xc040c24  jal         func_103090
label_2a569c:
    if (ctx->pc == 0x2A569Cu) {
        ctx->pc = 0x2A56A0u;
        goto label_2a56a0;
    }
    ctx->pc = 0x2A5698u;
    SET_GPR_U32(ctx, 31, 0x2A56A0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A56A0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A56A0u) { return; }
    ctx->pc = 0x2A56A0u;
label_2a56a0:
    // 0x2a56a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a56a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a56a4:
    // 0x2a56a4: 0x3c07c302  lui         $a3, 0xC302
    ctx->pc = 0x2a56a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49922 << 16));
label_2a56a8:
    // 0x2a56a8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a56a8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a56ac:
    // 0x2a56ac: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a56acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a56b0:
    // 0x2a56b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a56b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a56b4:
    // 0x2a56b4: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a56b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a56b8:
    // 0x2a56b8: 0xe5000180  swc1        $f0, 0x180($t0)
    ctx->pc = 0x2a56b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 384), bits); }
label_2a56bc:
    // 0x2a56bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a56bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a56c0:
    // 0x2a56c0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a56c4:
    // 0x2a56c4: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a56c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_2a56c8:
    // 0x2a56c8: 0x3c03c302  lui         $v1, 0xC302
    ctx->pc = 0x2a56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49922 << 16));
label_2a56cc:
    // 0x2a56cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a56ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a56d0:
    // 0x2a56d0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a56d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a56d4:
    // 0x2a56d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a56d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a56d8:
    // 0x2a56d8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a56dc:
    // 0x2a56dc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a56dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_2a56e0:
    // 0x2a56e0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a56e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a56e4:
    // 0x2a56e4: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x2a56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_2a56e8:
    // 0x2a56e8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2a56e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2a56ec:
    // 0x2a56ec: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2a56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a56f0:
    // 0x2a56f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2a56f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2a56f4:
    // 0x2a56f4: 0xc067648  jal         func_19D920
label_2a56f8:
    if (ctx->pc == 0x2A56F8u) {
        ctx->pc = 0x2A56FCu;
        goto label_2a56fc;
    }
    ctx->pc = 0x2A56F4u;
    SET_GPR_U32(ctx, 31, 0x2A56FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A56F4u, 0x2A56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A56FCu;
label_2a56fc:
    // 0x2a56fc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_2a5700:
    // 0x2a5700: 0x3444fa35  ori         $a0, $v0, 0xFA35
    ctx->pc = 0x2a5700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_2a5704:
    // 0x2a5704: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a5704u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a5708:
    // 0x2a5708: 0x0  nop
    ctx->pc = 0x2a5708u;
    // NOP
label_2a570c:
    // 0x2a570c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a570cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a5710:
    // 0x2a5710: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a5710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_2a5714:
    // 0x2a5714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5718:
    // 0x2a5718: 0x0  nop
    ctx->pc = 0x2a5718u;
    // NOP
label_2a571c:
    // 0x2a571c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a571cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a5720:
    // 0x2a5720: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a5720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5724:
    // 0x2a5724: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a5724u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a5728:
    // 0x2a5728: 0xc058fec  jal         func_163FB0
label_2a572c:
    if (ctx->pc == 0x2A572Cu) {
        ctx->pc = 0x2A5730u;
        goto label_2a5730;
    }
    ctx->pc = 0x2A5728u;
    SET_GPR_U32(ctx, 31, 0x2A5730u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A5728u, 0x2A5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5730u;
label_2a5730:
    // 0x2a5730: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a5730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2a5734:
    // 0x2a5734: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5738:
    // 0x2a5738: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a5738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2a573c:
    // 0x2a573c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a573cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2a5740:
    // 0x2a5740: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2a5740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2a5744:
    // 0x2a5744: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2a5744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
label_2a5748:
    // 0x2a5748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a5748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a574c:
    // 0x2a574c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2a574cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2a5750:
    // 0x2a5750: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a5750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_2a5754:
    // 0x2a5754: 0x34a60008  ori         $a2, $a1, 0x8
    ctx->pc = 0x2a5754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_2a5758:
    // 0x2a5758: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a575c:
    // 0x2a575c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a575cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a5760:
    // 0x2a5760: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5760u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a5764:
    // 0x2a5764: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a5764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a5768:
    // 0x2a5768: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a5768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2a576c:
    // 0x2a576c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a576cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a5770:
    // 0x2a5770: 0xc06371c  jal         func_18DC70
label_2a5774:
    if (ctx->pc == 0x2A5774u) {
        ctx->pc = 0x2A5778u;
        goto label_2a5778;
    }
    ctx->pc = 0x2A5770u;
    SET_GPR_U32(ctx, 31, 0x2A5778u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A5770u, 0x2A5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5778u;
label_2a5778:
    // 0x2a5778: 0xc067648  jal         func_19D920
label_2a577c:
    if (ctx->pc == 0x2A577Cu) {
        ctx->pc = 0x2A5780u;
        goto label_2a5780;
    }
    ctx->pc = 0x2A5778u;
    SET_GPR_U32(ctx, 31, 0x2A5780u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A5778u, 0x2A5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5780u;
label_2a5780:
    // 0x2a5780: 0x3c083c8e  lui         $t0, 0x3C8E
    ctx->pc = 0x2a5780u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15502 << 16));
label_2a5784:
    // 0x2a5784: 0x3507fa35  ori         $a3, $t0, 0xFA35
    ctx->pc = 0x2a5784u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64053);
label_2a5788:
    // 0x2a5788: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a5788u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a578c:
    // 0x2a578c: 0x0  nop
    ctx->pc = 0x2a578cu;
    // NOP
label_2a5790:
    // 0x2a5790: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a5790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a5794:
    // 0x2a5794: 0x3c0942b4  lui         $t1, 0x42B4
    ctx->pc = 0x2a5794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17076 << 16));
label_2a5798:
    // 0x2a5798: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a5798u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a579c:
    // 0x2a579c: 0x0  nop
    ctx->pc = 0x2a579cu;
    // NOP
label_2a57a0:
    // 0x2a57a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a57a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a57a4:
    // 0x2a57a4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a57a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a57a8:
    // 0x2a57a8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a57a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a57ac:
    // 0x2a57ac: 0xc058fec  jal         func_163FB0
label_2a57b0:
    if (ctx->pc == 0x2A57B0u) {
        ctx->pc = 0x2A57B4u;
        goto label_2a57b4;
    }
    ctx->pc = 0x2A57ACu;
    SET_GPR_U32(ctx, 31, 0x2A57B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A57ACu, 0x2A57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A57B4u;
label_2a57b4:
    // 0x2a57b4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a57b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2a57b8:
    // 0x2a57b8: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a57b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a57bc:
    // 0x2a57bc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2a57bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_2a57c0:
    // 0x2a57c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a57c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2a57c4:
    // 0x2a57c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a57c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2a57c8:
    // 0x2a57c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a57c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2a57cc:
    // 0x2a57cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a57ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a57d0:
    // 0x2a57d0: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x2a57d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a57d4:
    // 0x2a57d4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a57d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_2a57d8:
    // 0x2a57d8: 0x34a60008  ori         $a2, $a1, 0x8
    ctx->pc = 0x2a57d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_2a57dc:
    // 0x2a57dc: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a57dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a57e0:
    // 0x2a57e0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a57e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a57e4:
    // 0x2a57e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a57e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a57e8:
    // 0x2a57e8: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2a57e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a57ec:
    // 0x2a57ec: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a57ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a57f0:
    // 0x2a57f0: 0x8ce90130  lw          $t1, 0x130($a3)
    ctx->pc = 0x2a57f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_2a57f4:
    // 0x2a57f4: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a57f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2a57f8:
    // 0x2a57f8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a57f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a57fc:
    // 0x2a57fc: 0xc06371c  jal         func_18DC70
label_2a5800:
    if (ctx->pc == 0x2A5800u) {
        ctx->pc = 0x2A5804u;
        goto label_2a5804;
    }
    ctx->pc = 0x2A57FCu;
    SET_GPR_U32(ctx, 31, 0x2A5804u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A57FCu, 0x2A5804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5804u;
label_2a5804:
    // 0x2a5804: 0xc067648  jal         func_19D920
label_2a5808:
    if (ctx->pc == 0x2A5808u) {
        ctx->pc = 0x2A580Cu;
        goto label_2a580c;
    }
    ctx->pc = 0x2A5804u;
    SET_GPR_U32(ctx, 31, 0x2A580Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A5804u, 0x2A580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A580Cu;
label_2a580c:
    // 0x2a580c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_2a5810:
    // 0x2a5810: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a5810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_2a5814:
    // 0x2a5814: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a5814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a5818:
    // 0x2a5818: 0x0  nop
    ctx->pc = 0x2a5818u;
    // NOP
label_2a581c:
    // 0x2a581c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a581cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a5820:
    // 0x2a5820: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a5820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_2a5824:
    // 0x2a5824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5828:
    // 0x2a5828: 0x0  nop
    ctx->pc = 0x2a5828u;
    // NOP
label_2a582c:
    // 0x2a582c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a582cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a5830:
    // 0x2a5830: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a5830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5834:
    // 0x2a5834: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a5834u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a5838:
    // 0x2a5838: 0xc058fec  jal         func_163FB0
label_2a583c:
    if (ctx->pc == 0x2A583Cu) {
        ctx->pc = 0x2A5840u;
        goto label_2a5840;
    }
    ctx->pc = 0x2A5838u;
    SET_GPR_U32(ctx, 31, 0x2A5840u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A5838u, 0x2A5840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5840u;
label_2a5840:
    // 0x2a5840: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a5840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2a5844:
    // 0x2a5844: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5848:
    // 0x2a5848: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a5848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2a584c:
    // 0x2a584c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a584cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2a5850:
    // 0x2a5850: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2a5850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2a5854:
    // 0x2a5854: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x2a5854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
label_2a5858:
    // 0x2a5858: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x2a5858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2a585c:
    // 0x2a585c: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x2a585cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_2a5860:
    // 0x2a5860: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2a5860u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
label_2a5864:
    // 0x2a5864: 0x352a0008  ori         $t2, $t1, 0x8
    ctx->pc = 0x2a5864u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8);
label_2a5868:
    // 0x2a5868: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a586c:
    // 0x2a586c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a586cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2a5870:
    // 0x2a5870: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5870u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a5874:
    // 0x2a5874: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a5874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a5878:
    // 0x2a5878: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a5878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2a587c:
    // 0x2a587c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a587cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a5880:
    // 0x2a5880: 0xc06371c  jal         func_18DC70
label_2a5884:
    if (ctx->pc == 0x2A5884u) {
        ctx->pc = 0x2A5888u;
        goto label_2a5888;
    }
    ctx->pc = 0x2A5880u;
    SET_GPR_U32(ctx, 31, 0x2A5888u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A5880u, 0x2A5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5888u;
label_2a5888:
    // 0x2a5888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a5888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a588c:
    // 0x2a588c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a588cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5890:
    // 0x2a5890: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2a5890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_2a5894:
    // 0x2a5894: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2a5894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_2a5898:
    // 0x2a5898: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a589c:
    // 0x2a589c: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x2a589cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_2a58a0:
    // 0x2a58a0: 0x14e00087  bnez        $a3, . + 4 + (0x87 << 2)
label_2a58a4:
    if (ctx->pc == 0x2A58A4u) {
        ctx->pc = 0x2A58A8u;
        goto label_2a58a8;
    }
    ctx->pc = 0x2A58A0u;
    {
        const bool branch_taken_0x2a58a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a58a0) {
            ctx->pc = 0x2A5AC0u;
            goto label_2a5ac0;
        }
    }
    ctx->pc = 0x2A58A8u;
label_2a58a8:
    // 0x2a58a8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a58a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a58ac:
    // 0x2a58ac: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a58acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a58b0:
    // 0x2a58b0: 0xc0675a4  jal         func_19D690
label_2a58b4:
    if (ctx->pc == 0x2A58B4u) {
        ctx->pc = 0x2A58B8u;
        goto label_2a58b8;
    }
    ctx->pc = 0x2A58B0u;
    SET_GPR_U32(ctx, 31, 0x2A58B8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A58B0u, 0x2A58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58B8u;
label_2a58b8:
    // 0x2a58b8: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x2a58b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a58bc:
    // 0x2a58bc: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a58bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2a58c0:
    // 0x2a58c0: 0xc0675a4  jal         func_19D690
label_2a58c4:
    if (ctx->pc == 0x2A58C4u) {
        ctx->pc = 0x2A58C8u;
        goto label_2a58c8;
    }
    ctx->pc = 0x2A58C0u;
    SET_GPR_U32(ctx, 31, 0x2A58C8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A58C0u, 0x2A58C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58C8u;
label_2a58c8:
    // 0x2a58c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a58cc:
    // 0x2a58cc: 0xc0675a4  jal         func_19D690
label_2a58d0:
    if (ctx->pc == 0x2A58D0u) {
        ctx->pc = 0x2A58D4u;
        goto label_2a58d4;
    }
    ctx->pc = 0x2A58CCu;
    SET_GPR_U32(ctx, 31, 0x2A58D4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A58CCu, 0x2A58D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58D4u;
label_2a58d4:
    // 0x2a58d4: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x2a58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
label_2a58d8:
    // 0x2a58d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a58d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a58dc:
    // 0x2a58dc: 0x0  nop
    ctx->pc = 0x2a58dcu;
    // NOP
label_2a58e0:
    // 0x2a58e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a58e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2a58e4:
    // 0x2a58e4: 0x3c0641c0  lui         $a2, 0x41C0
    ctx->pc = 0x2a58e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16832 << 16));
label_2a58e8:
    // 0x2a58e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a58e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a58ec:
    // 0x2a58ec: 0x0  nop
    ctx->pc = 0x2a58ecu;
    // NOP
label_2a58f0:
    // 0x2a58f0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a58f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2a58f4:
    // 0x2a58f4: 0x3c074180  lui         $a3, 0x4180
    ctx->pc = 0x2a58f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16768 << 16));
label_2a58f8:
    // 0x2a58f8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a58f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a58fc:
    // 0x2a58fc: 0x0  nop
    ctx->pc = 0x2a58fcu;
    // NOP
label_2a5900:
    // 0x2a5900: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a5900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2a5904:
    // 0x2a5904: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a5904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2a5908:
    // 0x2a5908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a590c:
    // 0x2a590c: 0x0  nop
    ctx->pc = 0x2a590cu;
    // NOP
label_2a5910:
    // 0x2a5910: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a5910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_2a5914:
    // 0x2a5914: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a5914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a5918:
    // 0x2a5918: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5918u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a591c:
    // 0x2a591c: 0x0  nop
    ctx->pc = 0x2a591cu;
    // NOP
label_2a5920:
    // 0x2a5920: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a5920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2a5924:
    // 0x2a5924: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2a5924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_2a5928:
    // 0x2a5928: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a5928u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a592c:
    // 0x2a592c: 0x0  nop
    ctx->pc = 0x2a592cu;
    // NOP
label_2a5930:
    // 0x2a5930: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a5930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2a5934:
    // 0x2a5934: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a5934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2a5938:
    // 0x2a5938: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a5938u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a593c:
    // 0x2a593c: 0x0  nop
    ctx->pc = 0x2a593cu;
    // NOP
label_2a5940:
    // 0x2a5940: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a5940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2a5944:
    // 0x2a5944: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a5944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_2a5948:
    // 0x2a5948: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a5948u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a594c:
    // 0x2a594c: 0x0  nop
    ctx->pc = 0x2a594cu;
    // NOP
label_2a5950:
    // 0x2a5950: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a5950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2a5954:
    // 0x2a5954: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2a5958:
    // 0x2a5958: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a5958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a595c:
    // 0x2a595c: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x2a595cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
label_2a5960:
    // 0x2a5960: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2a5960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
label_2a5964:
    // 0x2a5964: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a5964u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5968:
    // 0x2a5968: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a596c:
    // 0x2a596c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a596cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a5970:
    // 0x2a5970: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a5970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a5974:
    // 0x2a5974: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a5974u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a5978:
    // 0x2a5978: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a5978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a597c:
    // 0x2a597c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a597cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a5980:
    // 0x2a5980: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a5980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a5984:
    // 0x2a5984: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a5984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a5988:
    // 0x2a5988: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a5988u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a598c:
    // 0x2a598c: 0xc086970  jal         func_21A5C0
label_2a5990:
    if (ctx->pc == 0x2A5990u) {
        ctx->pc = 0x2A5994u;
        goto label_2a5994;
    }
    ctx->pc = 0x2A598Cu;
    SET_GPR_U32(ctx, 31, 0x2A5994u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A598Cu, 0x2A5994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5994u;
label_2a5994:
    // 0x2a5994: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a5994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_2a5998:
    // 0x2a5998: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a5998u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a599c:
    // 0x2a599c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a59a0:
    // 0x2a59a0: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x2a59a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a59a4:
    // 0x2a59a4: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a59a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a59a8:
    // 0x2a59a8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a59ac:
    // 0x2a59ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a59acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a59b0:
    // 0x2a59b0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a59b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a59b4:
    // 0x2a59b4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a59b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a59b8:
    // 0x2a59b8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a59b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a59bc:
    // 0x2a59bc: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a59bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a59c0:
    // 0x2a59c0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a59c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a59c4:
    // 0x2a59c4: 0xc086970  jal         func_21A5C0
label_2a59c8:
    if (ctx->pc == 0x2A59C8u) {
        ctx->pc = 0x2A59CCu;
        goto label_2a59cc;
    }
    ctx->pc = 0x2A59C4u;
    SET_GPR_U32(ctx, 31, 0x2A59CCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A59C4u, 0x2A59CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59CCu;
label_2a59cc:
    // 0x2a59cc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2a59d0:
    // 0x2a59d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a59d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a59d4:
    // 0x2a59d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a59d8:
    // 0x2a59d8: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a59d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a59dc:
    // 0x2a59dc: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a59dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a59e0:
    // 0x2a59e0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a59e4:
    // 0x2a59e4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2a59e8:
    // 0x2a59e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a59e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a59ec:
    // 0x2a59ec: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a59ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a59f0:
    // 0x2a59f0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a59f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a59f4:
    // 0x2a59f4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a59f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a59f8:
    // 0x2a59f8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a59f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a59fc:
    // 0x2a59fc: 0xc086970  jal         func_21A5C0
label_2a5a00:
    if (ctx->pc == 0x2A5A00u) {
        ctx->pc = 0x2A5A04u;
        goto label_2a5a04;
    }
    ctx->pc = 0x2A59FCu;
    SET_GPR_U32(ctx, 31, 0x2A5A04u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A59FCu, 0x2A5A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A04u;
label_2a5a04:
    // 0x2a5a04: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2a5a08:
    // 0x2a5a08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a5a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5a0c:
    // 0x2a5a0c: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x2a5a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
label_2a5a10:
    // 0x2a5a10: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2a5a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
label_2a5a14:
    // 0x2a5a14: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a5a14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5a18:
    // 0x2a5a18: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5a1c:
    // 0x2a5a1c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a5a1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a5a20:
    // 0x2a5a20: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2a5a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2a5a24:
    // 0x2a5a24: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a5a24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a5a28:
    // 0x2a5a28: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a5a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a5a2c:
    // 0x2a5a2c: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a5a2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a5a30:
    // 0x2a5a30: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a5a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a5a34:
    // 0x2a5a34: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a5a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a5a38:
    // 0x2a5a38: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a5a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a5a3c:
    // 0x2a5a3c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a5a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a5a40:
    // 0x2a5a40: 0xc086970  jal         func_21A5C0
label_2a5a44:
    if (ctx->pc == 0x2A5A44u) {
        ctx->pc = 0x2A5A48u;
        goto label_2a5a48;
    }
    ctx->pc = 0x2A5A40u;
    SET_GPR_U32(ctx, 31, 0x2A5A48u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5A40u, 0x2A5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A48u;
label_2a5a48:
    // 0x2a5a48: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_2a5a4c:
    // 0x2a5a4c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a5a4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5a50:
    // 0x2a5a50: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a5a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
label_2a5a54:
    // 0x2a5a54: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a5a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_2a5a58:
    // 0x2a5a58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a5a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5a5c:
    // 0x2a5a5c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5a60:
    // 0x2a5a60: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a5a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2a5a64:
    // 0x2a5a64: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a5a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a5a68:
    // 0x2a5a68: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a5a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a5a6c:
    // 0x2a5a6c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a5a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a5a70:
    // 0x2a5a70: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a5a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a5a74:
    // 0x2a5a74: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a5a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a5a78:
    // 0x2a5a78: 0xc086970  jal         func_21A5C0
label_2a5a7c:
    if (ctx->pc == 0x2A5A7Cu) {
        ctx->pc = 0x2A5A80u;
        goto label_2a5a80;
    }
    ctx->pc = 0x2A5A78u;
    SET_GPR_U32(ctx, 31, 0x2A5A80u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5A78u, 0x2A5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A80u;
label_2a5a80:
    // 0x2a5a80: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a5a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
label_2a5a84:
    // 0x2a5a84: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a5a84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5a88:
    // 0x2a5a88: 0x3c083c23  lui         $t0, 0x3C23
    ctx->pc = 0x2a5a88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15395 << 16));
label_2a5a8c:
    // 0x2a5a8c: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x2a5a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
label_2a5a90:
    // 0x2a5a90: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x2a5a90u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5a94:
    // 0x2a5a94: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5a98:
    // 0x2a5a98: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a5a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a5a9c:
    // 0x2a5a9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a5a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a5aa0:
    // 0x2a5aa0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a5aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a5aa4:
    // 0x2a5aa4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a5aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a5aa8:
    // 0x2a5aa8: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a5aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a5aac:
    // 0x2a5aac: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a5aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a5ab0:
    // 0x2a5ab0: 0xc086970  jal         func_21A5C0
label_2a5ab4:
    if (ctx->pc == 0x2A5AB4u) {
        ctx->pc = 0x2A5AB8u;
        goto label_2a5ab8;
    }
    ctx->pc = 0x2A5AB0u;
    SET_GPR_U32(ctx, 31, 0x2A5AB8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5AB0u, 0x2A5AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AB8u;
label_2a5ab8:
    // 0x2a5ab8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2a5abc:
    if (ctx->pc == 0x2A5ABCu) {
        ctx->pc = 0x2A5AC0u;
        goto label_2a5ac0;
    }
    ctx->pc = 0x2A5AB8u;
    {
        const bool branch_taken_0x2a5ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ab8) {
            ctx->pc = 0x2A5B34u;
            goto label_2a5b34;
        }
    }
    ctx->pc = 0x2A5AC0u;
label_2a5ac0:
    // 0x2a5ac0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a5ac4:
    // 0x2a5ac4: 0xc0675a4  jal         func_19D690
label_2a5ac8:
    if (ctx->pc == 0x2A5AC8u) {
        ctx->pc = 0x2A5ACCu;
        goto label_2a5acc;
    }
    ctx->pc = 0x2A5AC4u;
    SET_GPR_U32(ctx, 31, 0x2A5ACCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5AC4u, 0x2A5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5ACCu;
label_2a5acc:
    // 0x2a5acc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5ad0:
    // 0x2a5ad0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a5ad4:
    // 0x2a5ad4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a5ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a5ad8:
    // 0x2a5ad8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5adc:
    // 0x2a5adc: 0xc086b14  jal         func_21AC50
label_2a5ae0:
    if (ctx->pc == 0x2A5AE0u) {
        ctx->pc = 0x2A5AE4u;
        goto label_2a5ae4;
    }
    ctx->pc = 0x2A5ADCu;
    SET_GPR_U32(ctx, 31, 0x2A5AE4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5ADCu, 0x2A5AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AE4u;
label_2a5ae4:
    // 0x2a5ae4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5ae8:
    // 0x2a5ae8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a5ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a5aec:
    // 0x2a5aec: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a5aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a5af0:
    // 0x2a5af0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5af4:
    // 0x2a5af4: 0xc086b14  jal         func_21AC50
label_2a5af8:
    if (ctx->pc == 0x2A5AF8u) {
        ctx->pc = 0x2A5AFCu;
        goto label_2a5afc;
    }
    ctx->pc = 0x2A5AF4u;
    SET_GPR_U32(ctx, 31, 0x2A5AFCu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5AF4u, 0x2A5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AFCu;
label_2a5afc:
    // 0x2a5afc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5b00:
    // 0x2a5b00: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a5b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2a5b04:
    // 0x2a5b04: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a5b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a5b08:
    // 0x2a5b08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5b0c:
    // 0x2a5b0c: 0xc086b14  jal         func_21AC50
label_2a5b10:
    if (ctx->pc == 0x2A5B10u) {
        ctx->pc = 0x2A5B14u;
        goto label_2a5b14;
    }
    ctx->pc = 0x2A5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B14u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5B0Cu, 0x2A5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B14u;
label_2a5b14:
    // 0x2a5b14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5b14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5b18:
    // 0x2a5b18: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5b1c:
    // 0x2a5b1c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a5b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a5b20:
    // 0x2a5b20: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a5b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a5b24:
    // 0x2a5b24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5b28:
    // 0x2a5b28: 0xc086b14  jal         func_21AC50
label_2a5b2c:
    if (ctx->pc == 0x2A5B2Cu) {
        ctx->pc = 0x2A5B30u;
        goto label_2a5b30;
    }
    ctx->pc = 0x2A5B28u;
    SET_GPR_U32(ctx, 31, 0x2A5B30u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5B28u, 0x2A5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B30u;
label_2a5b30:
    // 0x2a5b30: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5b30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5b34:
    // 0x2a5b34: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2a5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_2a5b38:
    // 0x2a5b38: 0x3444fa35  ori         $a0, $v0, 0xFA35
    ctx->pc = 0x2a5b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_2a5b3c:
    // 0x2a5b3c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a5b3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5b40:
    // 0x2a5b40: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5b44:
    // 0x2a5b44: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5b48:
    // 0x2a5b48: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2a5b4c:
    // 0x2a5b4c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a5b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a5b50:
    // 0x2a5b50: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2a5b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_2a5b54:
    // 0x2a5b54: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x2a5b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
label_2a5b58:
    // 0x2a5b58: 0xc05c848  jal         func_172120
label_2a5b5c:
    if (ctx->pc == 0x2A5B5Cu) {
        ctx->pc = 0x2A5B60u;
        goto label_2a5b60;
    }
    ctx->pc = 0x2A5B58u;
    SET_GPR_U32(ctx, 31, 0x2A5B60u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A5B58u, 0x2A5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B60u;
label_2a5b60:
    // 0x2a5b60: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a5b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_2a5b64:
    // 0x2a5b64: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5b68:
    // 0x2a5b68: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a5b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5b6c:
    // 0x2a5b6c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a5b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5b70:
    // 0x2a5b70: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a5b70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a5b74:
    // 0x2a5b74: 0xc058fec  jal         func_163FB0
label_2a5b78:
    if (ctx->pc == 0x2A5B78u) {
        ctx->pc = 0x2A5B7Cu;
        goto label_2a5b7c;
    }
    ctx->pc = 0x2A5B74u;
    SET_GPR_U32(ctx, 31, 0x2A5B7Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A5B74u, 0x2A5B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B7Cu;
label_2a5b7c:
    // 0x2a5b7c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5b80:
    // 0x2a5b80: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2a5b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_2a5b84:
    // 0x2a5b84: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5b88:
    // 0x2a5b88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a5b88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2a5b8c:
    // 0x2a5b8c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2a5b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a5b90:
    // 0x2a5b90: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a5b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a5b94:
    // 0x2a5b94: 0xc096b40  jal         func_25AD00
label_2a5b98:
    if (ctx->pc == 0x2A5B98u) {
        ctx->pc = 0x2A5B9Cu;
        goto label_2a5b9c;
    }
    ctx->pc = 0x2A5B94u;
    SET_GPR_U32(ctx, 31, 0x2A5B9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5B94u, 0x2A5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B9Cu;
label_2a5b9c:
    // 0x2a5b9c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5ba0:
    // 0x2a5ba0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5ba4:
    // 0x2a5ba4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5ba8:
    // 0x2a5ba8: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_2a5bac:
    // 0x2a5bac: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a5bacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2a5bb0:
    // 0x2a5bb0: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x2a5bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2a5bb4:
    // 0x2a5bb4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a5bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a5bb8:
    // 0x2a5bb8: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_2a5bbc:
    // 0x2a5bbc: 0xc0675a8  jal         func_19D6A0
label_2a5bc0:
    if (ctx->pc == 0x2A5BC0u) {
        ctx->pc = 0x2A5BC4u;
        goto label_2a5bc4;
    }
    ctx->pc = 0x2A5BBCu;
    SET_GPR_U32(ctx, 31, 0x2A5BC4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A5BBCu, 0x2A5BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BC4u;
label_2a5bc4:
    // 0x2a5bc4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5bc8:
    // 0x2a5bc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a5bcc:
    // 0x2a5bcc: 0xc0a748c  jal         func_29D230
label_2a5bd0:
    if (ctx->pc == 0x2A5BD0u) {
        ctx->pc = 0x2A5BD4u;
        goto label_2a5bd4;
    }
    ctx->pc = 0x2A5BCCu;
    SET_GPR_U32(ctx, 31, 0x2A5BD4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A5BCCu, 0x2A5BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BD4u;
label_2a5bd4:
    // 0x2a5bd4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5bd8:
    // 0x2a5bd8: 0xc0b3764  jal         func_2CDD90
label_2a5bdc:
    if (ctx->pc == 0x2A5BDCu) {
        ctx->pc = 0x2A5BE0u;
        goto label_2a5be0;
    }
    ctx->pc = 0x2A5BD8u;
    SET_GPR_U32(ctx, 31, 0x2A5BE0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A5BD8u, 0x2A5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BE0u;
label_2a5be0:
    // 0x2a5be0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5be4:
    // 0x2a5be4: 0xc0aa354  jal         func_2A8D50
label_2a5be8:
    if (ctx->pc == 0x2A5BE8u) {
        ctx->pc = 0x2A5BECu;
        goto label_2a5bec;
    }
    ctx->pc = 0x2A5BE4u;
    SET_GPR_U32(ctx, 31, 0x2A5BECu);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A5BE4u, 0x2A5BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BECu;
label_2a5bec:
    // 0x2a5bec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5becu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5bf0:
    // 0x2a5bf0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5bf4:
    // 0x2a5bf4: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
label_2a5bf8:
    // 0x2a5bf8: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x2a5bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_2a5bfc:
    // 0x2a5bfc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a5bfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a5c00:
    // 0x2a5c00: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a5c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5c04:
    // 0x2a5c04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a5c08:
    // 0x2a5c08: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a5c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
label_2a5c0c:
    // 0x2a5c0c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5c10:
    // 0x2a5c10: 0x3c053f73  lui         $a1, 0x3F73
    ctx->pc = 0x2a5c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16243 << 16));
label_2a5c14:
    // 0x2a5c14: 0x34a43333  ori         $a0, $a1, 0x3333
    ctx->pc = 0x2a5c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
label_2a5c18:
    // 0x2a5c18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a5c18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a5c1c:
    // 0x2a5c1c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2a5c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5c20:
    // 0x2a5c20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a5c24:
    // 0x2a5c24: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a5c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_2a5c28:
    // 0x2a5c28: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5c2c:
    // 0x2a5c2c: 0x907009e7  lbu         $s0, 0x9E7($v1)
    ctx->pc = 0x2a5c2cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2a5c30:
    // 0x2a5c30: 0x12000208  beqz        $s0, . + 4 + (0x208 << 2)
label_2a5c34:
    if (ctx->pc == 0x2A5C34u) {
        ctx->pc = 0x2A5C38u;
        goto label_2a5c38;
    }
    ctx->pc = 0x2A5C30u;
    {
        const bool branch_taken_0x2a5c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c30) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A5C38u;
label_2a5c38:
    // 0x2a5c38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a5c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5c3c:
    // 0x2a5c3c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5c40:
    // 0x2a5c40: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a5c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2a5c44:
    // 0x2a5c44: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5c48:
    // 0x2a5c48: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5c4c:
    // 0x2a5c4c: 0x8ca30368  lw          $v1, 0x368($a1)
    ctx->pc = 0x2a5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_2a5c50:
    // 0x2a5c50: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2a5c50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2a5c54:
    // 0x2a5c54: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2a5c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a5c58:
    // 0x2a5c58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5c5c:
    // 0x2a5c5c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a5c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a5c60:
    // 0x2a5c60: 0xc0965d0  jal         func_259740
label_2a5c64:
    if (ctx->pc == 0x2A5C64u) {
        ctx->pc = 0x2A5C68u;
        goto label_2a5c68;
    }
    ctx->pc = 0x2A5C60u;
    SET_GPR_U32(ctx, 31, 0x2A5C68u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A5C60u, 0x2A5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C68u;
label_2a5c68:
    // 0x2a5c68: 0x100001fa  b           . + 4 + (0x1FA << 2)
label_2a5c6c:
    if (ctx->pc == 0x2A5C6Cu) {
        ctx->pc = 0x2A5C70u;
        goto label_2a5c70;
    }
    ctx->pc = 0x2A5C68u;
    {
        const bool branch_taken_0x2a5c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c68) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A5C70u;
label_2a5c70:
    // 0x2a5c70: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5c74:
    // 0x2a5c74: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a5c74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2a5c78:
    // 0x2a5c78: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a5c7c:
    // 0x2a5c7c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2a5c7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2a5c80:
    // 0x2a5c80: 0xc096b40  jal         func_25AD00
label_2a5c84:
    if (ctx->pc == 0x2A5C84u) {
        ctx->pc = 0x2A5C88u;
        goto label_2a5c88;
    }
    ctx->pc = 0x2A5C80u;
    SET_GPR_U32(ctx, 31, 0x2A5C88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5C80u, 0x2A5C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C88u;
label_2a5c88:
    // 0x2a5c88: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5c8c:
    // 0x2a5c8c: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5c90:
    // 0x2a5c90: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a5c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5c94:
    // 0x2a5c94: 0x24480120  addiu       $t0, $v0, 0x120
    ctx->pc = 0x2a5c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2a5c98:
    // 0x2a5c98: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a5c98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a5c9c:
    // 0x2a5c9c: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x2a5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_2a5ca0:
    // 0x2a5ca0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a5ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5ca4:
    // 0x2a5ca4: 0x24e60180  addiu       $a2, $a3, 0x180
    ctx->pc = 0x2a5ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
label_2a5ca8:
    // 0x2a5ca8: 0xc0675a8  jal         func_19D6A0
label_2a5cac:
    if (ctx->pc == 0x2A5CACu) {
        ctx->pc = 0x2A5CB0u;
        goto label_2a5cb0;
    }
    ctx->pc = 0x2A5CA8u;
    SET_GPR_U32(ctx, 31, 0x2A5CB0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A5CA8u, 0x2A5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CB0u;
label_2a5cb0:
    // 0x2a5cb0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5cb4:
    // 0x2a5cb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5cb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a5cb8:
    // 0x2a5cb8: 0xc0a748c  jal         func_29D230
label_2a5cbc:
    if (ctx->pc == 0x2A5CBCu) {
        ctx->pc = 0x2A5CC0u;
        goto label_2a5cc0;
    }
    ctx->pc = 0x2A5CB8u;
    SET_GPR_U32(ctx, 31, 0x2A5CC0u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A5CB8u, 0x2A5CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CC0u;
label_2a5cc0:
    // 0x2a5cc0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5cc4:
    // 0x2a5cc4: 0xc0b3764  jal         func_2CDD90
label_2a5cc8:
    if (ctx->pc == 0x2A5CC8u) {
        ctx->pc = 0x2A5CCCu;
        goto label_2a5ccc;
    }
    ctx->pc = 0x2A5CC4u;
    SET_GPR_U32(ctx, 31, 0x2A5CCCu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A5CC4u, 0x2A5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CCCu;
label_2a5ccc:
    // 0x2a5ccc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5cccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5cd0:
    // 0x2a5cd0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5cd4:
    // 0x2a5cd4: 0x24a51330  addiu       $a1, $a1, 0x1330
    ctx->pc = 0x2a5cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_2a5cd8:
    // 0x2a5cd8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2a5cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5cdc:
    // 0x2a5cdc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5ce0:
    // 0x2a5ce0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a5ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5ce4:
    // 0x2a5ce4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a5ce4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5ce8:
    // 0x2a5ce8: 0x0  nop
    ctx->pc = 0x2a5ce8u;
    // NOP
label_2a5cec:
    // 0x2a5cec: 0x450001d9  bc1f        . + 4 + (0x1D9 << 2)
label_2a5cf0:
    if (ctx->pc == 0x2A5CF0u) {
        ctx->pc = 0x2A5CF4u;
        goto label_2a5cf4;
    }
    ctx->pc = 0x2A5CECu;
    {
        const bool branch_taken_0x2a5cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5cec) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A5CF4u;
label_2a5cf4:
    // 0x2a5cf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a5cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a5cf8:
    // 0x2a5cf8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5cfc:
    // 0x2a5cfc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a5cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2a5d00:
    // 0x2a5d00: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5d04:
    // 0x2a5d04: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5d08:
    // 0x2a5d08: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a5d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_2a5d0c:
    // 0x2a5d0c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2a5d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a5d10:
    // 0x2a5d10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5d14:
    // 0x2a5d14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a5d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a5d18:
    // 0x2a5d18: 0xc0965d0  jal         func_259740
label_2a5d1c:
    if (ctx->pc == 0x2A5D1Cu) {
        ctx->pc = 0x2A5D20u;
        goto label_2a5d20;
    }
    ctx->pc = 0x2A5D18u;
    SET_GPR_U32(ctx, 31, 0x2A5D20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A5D18u, 0x2A5D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D20u;
label_2a5d20:
    // 0x2a5d20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5d24:
    // 0x2a5d24: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5d28:
    // 0x2a5d28: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2a5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2a5d2c:
    // 0x2a5d2c: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
label_2a5d30:
    if (ctx->pc == 0x2A5D30u) {
        ctx->pc = 0x2A5D34u;
        goto label_2a5d34;
    }
    ctx->pc = 0x2A5D2Cu;
    {
        const bool branch_taken_0x2a5d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5d2c) {
            ctx->pc = 0x2A5ED8u;
            goto label_2a5ed8;
        }
    }
    ctx->pc = 0x2A5D34u;
label_2a5d34:
    // 0x2a5d34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a5d38:
    // 0x2a5d38: 0xc0675a4  jal         func_19D690
label_2a5d3c:
    if (ctx->pc == 0x2A5D3Cu) {
        ctx->pc = 0x2A5D40u;
        goto label_2a5d40;
    }
    ctx->pc = 0x2A5D38u;
    SET_GPR_U32(ctx, 31, 0x2A5D40u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5D38u, 0x2A5D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D40u;
label_2a5d40:
    // 0x2a5d40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5d40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5d44:
    // 0x2a5d44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a5d48:
    // 0x2a5d48: 0xc0675a4  jal         func_19D690
label_2a5d4c:
    if (ctx->pc == 0x2A5D4Cu) {
        ctx->pc = 0x2A5D50u;
        goto label_2a5d50;
    }
    ctx->pc = 0x2A5D48u;
    SET_GPR_U32(ctx, 31, 0x2A5D50u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5D48u, 0x2A5D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D50u;
label_2a5d50:
    // 0x2a5d50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5d50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5d54:
    // 0x2a5d54: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2a5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a5d58:
    // 0x2a5d58: 0xc0675a4  jal         func_19D690
label_2a5d5c:
    if (ctx->pc == 0x2A5D5Cu) {
        ctx->pc = 0x2A5D60u;
        goto label_2a5d60;
    }
    ctx->pc = 0x2A5D58u;
    SET_GPR_U32(ctx, 31, 0x2A5D60u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5D58u, 0x2A5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D60u;
label_2a5d60:
    // 0x2a5d60: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_2a5d64:
    // 0x2a5d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5d68:
    // 0x2a5d68: 0x0  nop
    ctx->pc = 0x2a5d68u;
    // NOP
label_2a5d6c:
    // 0x2a5d6c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a5d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2a5d70:
    // 0x2a5d70: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_2a5d74:
    // 0x2a5d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5d78:
    // 0x2a5d78: 0x0  nop
    ctx->pc = 0x2a5d78u;
    // NOP
label_2a5d7c:
    // 0x2a5d7c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a5d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2a5d80:
    // 0x2a5d80: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x2a5d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
label_2a5d84:
    // 0x2a5d84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5d84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5d88:
    // 0x2a5d88: 0x0  nop
    ctx->pc = 0x2a5d88u;
    // NOP
label_2a5d8c:
    // 0x2a5d8c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a5d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2a5d90:
    // 0x2a5d90: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2a5d90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
label_2a5d94:
    // 0x2a5d94: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a5d94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5d98:
    // 0x2a5d98: 0x0  nop
    ctx->pc = 0x2a5d98u;
    // NOP
label_2a5d9c:
    // 0x2a5d9c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a5d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2a5da0:
    // 0x2a5da0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a5da4:
    // 0x2a5da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5da8:
    // 0x2a5da8: 0x0  nop
    ctx->pc = 0x2a5da8u;
    // NOP
label_2a5dac:
    // 0x2a5dac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a5dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2a5db0:
    // 0x2a5db0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a5db4:
    // 0x2a5db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5db8:
    // 0x2a5db8: 0x0  nop
    ctx->pc = 0x2a5db8u;
    // NOP
label_2a5dbc:
    // 0x2a5dbc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a5dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2a5dc0:
    // 0x2a5dc0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a5dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a5dc4:
    // 0x2a5dc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5dc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5dc8:
    // 0x2a5dc8: 0x0  nop
    ctx->pc = 0x2a5dc8u;
    // NOP
label_2a5dcc:
    // 0x2a5dcc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a5dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2a5dd0:
    // 0x2a5dd0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2a5dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_2a5dd4:
    // 0x2a5dd4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a5dd4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5dd8:
    // 0x2a5dd8: 0x0  nop
    ctx->pc = 0x2a5dd8u;
    // NOP
label_2a5ddc:
    // 0x2a5ddc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2a5ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_2a5de0:
    // 0x2a5de0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a5de4:
    // 0x2a5de4: 0x3446d70a  ori         $a2, $v0, 0xD70A
    ctx->pc = 0x2a5de4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a5de8:
    // 0x2a5de8: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a5de8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5dec:
    // 0x2a5dec: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a5decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
label_2a5df0:
    // 0x2a5df0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a5df0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5df4:
    // 0x2a5df4: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a5df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5df8:
    // 0x2a5df8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a5df8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a5dfc:
    // 0x2a5dfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5dfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a5e00:
    // 0x2a5e00: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a5e04:
    // 0x2a5e04: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a5e04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5e08:
    // 0x2a5e08: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a5e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a5e0c:
    // 0x2a5e0c: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a5e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a5e10:
    // 0x2a5e10: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a5e10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a5e14:
    // 0x2a5e14: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a5e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a5e18:
    // 0x2a5e18: 0xc086970  jal         func_21A5C0
label_2a5e1c:
    if (ctx->pc == 0x2A5E1Cu) {
        ctx->pc = 0x2A5E20u;
        goto label_2a5e20;
    }
    ctx->pc = 0x2A5E18u;
    SET_GPR_U32(ctx, 31, 0x2A5E20u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5E18u, 0x2A5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E20u;
label_2a5e20:
    // 0x2a5e20: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_2a5e24:
    // 0x2a5e24: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a5e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5e28:
    // 0x2a5e28: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_2a5e2c:
    // 0x2a5e2c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a5e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_2a5e30:
    // 0x2a5e30: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a5e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5e34:
    // 0x2a5e34: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5e38:
    // 0x2a5e38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5e3c:
    // 0x2a5e3c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a5e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a5e40:
    // 0x2a5e40: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a5e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a5e44:
    // 0x2a5e44: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a5e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a5e48:
    // 0x2a5e48: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a5e48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a5e4c:
    // 0x2a5e4c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a5e50:
    // 0x2a5e50: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5e50u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5e54:
    // 0x2a5e54: 0xc086970  jal         func_21A5C0
label_2a5e58:
    if (ctx->pc == 0x2A5E58u) {
        ctx->pc = 0x2A5E5Cu;
        goto label_2a5e5c;
    }
    ctx->pc = 0x2A5E54u;
    SET_GPR_U32(ctx, 31, 0x2A5E5Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5E54u, 0x2A5E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E5Cu;
label_2a5e5c:
    // 0x2a5e5c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2a5e60:
    // 0x2a5e60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a5e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5e64:
    // 0x2a5e64: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a5e68:
    // 0x2a5e68: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a5e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a5e6c:
    // 0x2a5e6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a5e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5e70:
    // 0x2a5e70: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5e74:
    // 0x2a5e74: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a5e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a5e78:
    // 0x2a5e78: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a5e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a5e7c:
    // 0x2a5e7c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a5e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a5e80:
    // 0x2a5e80: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a5e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a5e84:
    // 0x2a5e84: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2a5e84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a5e88:
    // 0x2a5e88: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a5e88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a5e8c:
    // 0x2a5e8c: 0xc086970  jal         func_21A5C0
label_2a5e90:
    if (ctx->pc == 0x2A5E90u) {
        ctx->pc = 0x2A5E94u;
        goto label_2a5e94;
    }
    ctx->pc = 0x2A5E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A5E94u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5E8Cu, 0x2A5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E94u;
label_2a5e94:
    // 0x2a5e94: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a5e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
label_2a5e98:
    // 0x2a5e98: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a5e98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5e9c:
    // 0x2a5e9c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a5ea0:
    // 0x2a5ea0: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x2a5ea0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a5ea4:
    // 0x2a5ea4: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x2a5ea4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5ea8:
    // 0x2a5ea8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5eac:
    // 0x2a5eac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a5eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2a5eb0:
    // 0x2a5eb0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2a5eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a5eb4:
    // 0x2a5eb4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a5eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a5eb8:
    // 0x2a5eb8: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a5eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a5ebc:
    // 0x2a5ebc: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a5ec0:
    // 0x2a5ec0: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a5ec0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5ec4:
    // 0x2a5ec4: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x2a5ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a5ec8:
    // 0x2a5ec8: 0xc086970  jal         func_21A5C0
label_2a5ecc:
    if (ctx->pc == 0x2A5ECCu) {
        ctx->pc = 0x2A5ED0u;
        goto label_2a5ed0;
    }
    ctx->pc = 0x2A5EC8u;
    SET_GPR_U32(ctx, 31, 0x2A5ED0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5EC8u, 0x2A5ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5ED0u;
label_2a5ed0:
    // 0x2a5ed0: 0x10000160  b           . + 4 + (0x160 << 2)
label_2a5ed4:
    if (ctx->pc == 0x2A5ED4u) {
        ctx->pc = 0x2A5ED8u;
        goto label_2a5ed8;
    }
    ctx->pc = 0x2A5ED0u;
    {
        const bool branch_taken_0x2a5ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ed0) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A5ED8u;
label_2a5ed8:
    // 0x2a5ed8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2a5ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a5edc:
    // 0x2a5edc: 0xc0675a4  jal         func_19D690
label_2a5ee0:
    if (ctx->pc == 0x2A5EE0u) {
        ctx->pc = 0x2A5EE4u;
        goto label_2a5ee4;
    }
    ctx->pc = 0x2A5EDCu;
    SET_GPR_U32(ctx, 31, 0x2A5EE4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5EDCu, 0x2A5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EE4u;
label_2a5ee4:
    // 0x2a5ee4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5ee8:
    // 0x2a5ee8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5ee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a5eec:
    // 0x2a5eec: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a5eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a5ef0:
    // 0x2a5ef0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5ef4:
    // 0x2a5ef4: 0xc086b14  jal         func_21AC50
label_2a5ef8:
    if (ctx->pc == 0x2A5EF8u) {
        ctx->pc = 0x2A5EFCu;
        goto label_2a5efc;
    }
    ctx->pc = 0x2A5EF4u;
    SET_GPR_U32(ctx, 31, 0x2A5EFCu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5EF4u, 0x2A5EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EFCu;
label_2a5efc:
    // 0x2a5efc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5f00:
    // 0x2a5f00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a5f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5f04:
    // 0x2a5f04: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a5f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a5f08:
    // 0x2a5f08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5f0c:
    // 0x2a5f0c: 0xc086b14  jal         func_21AC50
label_2a5f10:
    if (ctx->pc == 0x2A5F10u) {
        ctx->pc = 0x2A5F14u;
        goto label_2a5f14;
    }
    ctx->pc = 0x2A5F0Cu;
    SET_GPR_U32(ctx, 31, 0x2A5F14u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5F0Cu, 0x2A5F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F14u;
label_2a5f14:
    // 0x2a5f14: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5f18:
    // 0x2a5f18: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a5f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a5f1c:
    // 0x2a5f1c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a5f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a5f20:
    // 0x2a5f20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5f24:
    // 0x2a5f24: 0xc086b14  jal         func_21AC50
label_2a5f28:
    if (ctx->pc == 0x2A5F28u) {
        ctx->pc = 0x2A5F2Cu;
        goto label_2a5f2c;
    }
    ctx->pc = 0x2A5F24u;
    SET_GPR_U32(ctx, 31, 0x2A5F2Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5F24u, 0x2A5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F2Cu;
label_2a5f2c:
    // 0x2a5f2c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a5f2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5f30:
    // 0x2a5f30: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a5f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5f34:
    // 0x2a5f34: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a5f34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a5f38:
    // 0x2a5f38: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2a5f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2a5f3c:
    // 0x2a5f3c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a5f3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a5f40:
    // 0x2a5f40: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x2a5f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a5f44:
    // 0x2a5f44: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a5f44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2a5f48:
    // 0x2a5f48: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a5f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5f4c:
    // 0x2a5f4c: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2a5f4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2a5f50:
    // 0x2a5f50: 0xc086b14  jal         func_21AC50
label_2a5f54:
    if (ctx->pc == 0x2A5F54u) {
        ctx->pc = 0x2A5F58u;
        goto label_2a5f58;
    }
    ctx->pc = 0x2A5F50u;
    SET_GPR_U32(ctx, 31, 0x2A5F58u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5F50u, 0x2A5F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F58u;
label_2a5f58:
    // 0x2a5f58: 0x1000013e  b           . + 4 + (0x13E << 2)
label_2a5f5c:
    if (ctx->pc == 0x2A5F5Cu) {
        ctx->pc = 0x2A5F60u;
        goto label_2a5f60;
    }
    ctx->pc = 0x2A5F58u;
    {
        const bool branch_taken_0x2a5f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5f58) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A5F60u;
label_2a5f60:
    // 0x2a5f60: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5f64:
    // 0x2a5f64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a5f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a5f68:
    // 0x2a5f68: 0xc096b40  jal         func_25AD00
label_2a5f6c:
    if (ctx->pc == 0x2A5F6Cu) {
        ctx->pc = 0x2A5F70u;
        goto label_2a5f70;
    }
    ctx->pc = 0x2A5F68u;
    SET_GPR_U32(ctx, 31, 0x2A5F70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5F68u, 0x2A5F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F70u;
label_2a5f70:
    // 0x2a5f70: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5f74:
    // 0x2a5f74: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5f78:
    // 0x2a5f78: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5f7c:
    // 0x2a5f7c: 0x24870120  addiu       $a3, $a0, 0x120
    ctx->pc = 0x2a5f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_2a5f80:
    // 0x2a5f80: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a5f80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a5f84:
    // 0x2a5f84: 0x24a80120  addiu       $t0, $a1, 0x120
    ctx->pc = 0x2a5f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_2a5f88:
    // 0x2a5f88: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a5f88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_2a5f8c:
    // 0x2a5f8c: 0x24c90180  addiu       $t1, $a2, 0x180
    ctx->pc = 0x2a5f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_2a5f90:
    // 0x2a5f90: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a5f90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2a5f94:
    // 0x2a5f94: 0xc0675a8  jal         func_19D6A0
label_2a5f98:
    if (ctx->pc == 0x2A5F98u) {
        ctx->pc = 0x2A5F9Cu;
        goto label_2a5f9c;
    }
    ctx->pc = 0x2A5F94u;
    SET_GPR_U32(ctx, 31, 0x2A5F9Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A5F94u, 0x2A5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F9Cu;
label_2a5f9c:
    // 0x2a5f9c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5f9cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5fa0:
    // 0x2a5fa0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5fa4:
    // 0x2a5fa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5fa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a5fa8:
    // 0x2a5fa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5fa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a5fac:
    // 0x2a5fac: 0xc0a748c  jal         func_29D230
label_2a5fb0:
    if (ctx->pc == 0x2A5FB0u) {
        ctx->pc = 0x2A5FB4u;
        goto label_2a5fb4;
    }
    ctx->pc = 0x2A5FACu;
    SET_GPR_U32(ctx, 31, 0x2A5FB4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A5FACu, 0x2A5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FB4u;
label_2a5fb4:
    // 0x2a5fb4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5fb8:
    // 0x2a5fb8: 0xc0b3764  jal         func_2CDD90
label_2a5fbc:
    if (ctx->pc == 0x2A5FBCu) {
        ctx->pc = 0x2A5FC0u;
        goto label_2a5fc0;
    }
    ctx->pc = 0x2A5FB8u;
    SET_GPR_U32(ctx, 31, 0x2A5FC0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A5FB8u, 0x2A5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FC0u;
label_2a5fc0:
    // 0x2a5fc0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5fc4:
    // 0x2a5fc4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x2a5fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_2a5fc8:
    // 0x2a5fc8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a5fc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a5fcc:
    // 0x2a5fcc: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2a5fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5fd0:
    // 0x2a5fd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a5fd4:
    // 0x2a5fd4: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2a5fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
label_2a5fd8:
    // 0x2a5fd8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5fdc:
    // 0x2a5fdc: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x2a5fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
label_2a5fe0:
    // 0x2a5fe0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a5fe0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a5fe4:
    // 0x2a5fe4: 0xc4c00188  lwc1        $f0, 0x188($a2)
    ctx->pc = 0x2a5fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5fe8:
    // 0x2a5fe8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a5fec:
    // 0x2a5fec: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x2a5fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
label_2a5ff0:
    // 0x2a5ff0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a5ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a5ff4:
    // 0x2a5ff4: 0x910909e7  lbu         $t1, 0x9E7($t0)
    ctx->pc = 0x2a5ff4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
label_2a5ff8:
    // 0x2a5ff8: 0x11200116  beqz        $t1, . + 4 + (0x116 << 2)
label_2a5ffc:
    if (ctx->pc == 0x2A5FFCu) {
        ctx->pc = 0x2A6000u;
        goto label_2a6000;
    }
    ctx->pc = 0x2A5FF8u;
    {
        const bool branch_taken_0x2a5ff8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ff8) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A6000u;
label_2a6000:
    // 0x2a6000: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2a6000u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a6004:
    // 0x2a6004: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6008:
    // 0x2a6008: 0xa04a0002  sb          $t2, 0x2($v0)
    ctx->pc = 0x2a6008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 10));
label_2a600c:
    // 0x2a600c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6010:
    // 0x2a6010: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6014:
    // 0x2a6014: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a6014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2a6018:
    // 0x2a6018: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2a6018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2a601c:
    // 0x2a601c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a601cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6020:
    // 0x2a6020: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a6020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a6024:
    // 0x2a6024: 0xc0965d0  jal         func_259740
label_2a6028:
    if (ctx->pc == 0x2A6028u) {
        ctx->pc = 0x2A602Cu;
        goto label_2a602c;
    }
    ctx->pc = 0x2A6024u;
    SET_GPR_U32(ctx, 31, 0x2A602Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A6024u, 0x2A602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A602Cu;
label_2a602c:
    // 0x2a602c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a602cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6030:
    // 0x2a6030: 0x10000108  b           . + 4 + (0x108 << 2)
label_2a6034:
    if (ctx->pc == 0x2A6034u) {
        ctx->pc = 0x2A6038u;
        goto label_2a6038;
    }
    ctx->pc = 0x2A6030u;
    {
        const bool branch_taken_0x2a6030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6030) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A6038u;
label_2a6038:
    // 0x2a6038: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a6038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a603c:
    // 0x2a603c: 0xa10010a8  sb          $zero, 0x10A8($t0)
    ctx->pc = 0x2a603cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4264), (uint8_t)GPR_U32(ctx, 0));
label_2a6040:
    // 0x2a6040: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a6040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6044:
    // 0x2a6044: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a6044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2a6048:
    // 0x2a6048: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x2a6048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a604c:
    // 0x2a604c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2a604cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2a6050:
    // 0x2a6050: 0xc096b40  jal         func_25AD00
label_2a6054:
    if (ctx->pc == 0x2A6054u) {
        ctx->pc = 0x2A6058u;
        goto label_2a6058;
    }
    ctx->pc = 0x2A6050u;
    SET_GPR_U32(ctx, 31, 0x2A6058u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A6050u, 0x2A6058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6058u;
label_2a6058:
    // 0x2a6058: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a605c:
    // 0x2a605c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a605cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a6060:
    // 0x2a6060: 0xc0a748c  jal         func_29D230
label_2a6064:
    if (ctx->pc == 0x2A6064u) {
        ctx->pc = 0x2A6068u;
        goto label_2a6068;
    }
    ctx->pc = 0x2A6060u;
    SET_GPR_U32(ctx, 31, 0x2A6068u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A6060u, 0x2A6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6068u;
label_2a6068:
    // 0x2a6068: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a606c:
    // 0x2a606c: 0xc0b3764  jal         func_2CDD90
label_2a6070:
    if (ctx->pc == 0x2A6070u) {
        ctx->pc = 0x2A6074u;
        goto label_2a6074;
    }
    ctx->pc = 0x2A606Cu;
    SET_GPR_U32(ctx, 31, 0x2A6074u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A606Cu, 0x2A6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6074u;
label_2a6074:
    // 0x2a6074: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6078:
    // 0x2a6078: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a607c:
    // 0x2a607c: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x2a607cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_2a6080:
    // 0x2a6080: 0x10c000f4  beqz        $a2, . + 4 + (0xF4 << 2)
label_2a6084:
    if (ctx->pc == 0x2A6084u) {
        ctx->pc = 0x2A6088u;
        goto label_2a6088;
    }
    ctx->pc = 0x2A6080u;
    {
        const bool branch_taken_0x2a6080 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6080) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A6088u;
label_2a6088:
    // 0x2a6088: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2a6088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a608c:
    // 0x2a608c: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a608cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6090:
    // 0x2a6090: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x2a6090u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
label_2a6094:
    // 0x2a6094: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a6094u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6098:
    // 0x2a6098: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a6098u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a609c:
    // 0x2a609c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a609cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2a60a0:
    // 0x2a60a0: 0x8d220368  lw          $v0, 0x368($t1)
    ctx->pc = 0x2a60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 872)));
label_2a60a4:
    // 0x2a60a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a60a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a60a8:
    // 0x2a60a8: 0x24061e1e  addiu       $a2, $zero, 0x1E1E
    ctx->pc = 0x2a60a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7710));
label_2a60ac:
    // 0x2a60ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a60acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a60b0:
    // 0x2a60b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a60b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a60b4:
    // 0x2a60b4: 0xc0965d0  jal         func_259740
label_2a60b8:
    if (ctx->pc == 0x2A60B8u) {
        ctx->pc = 0x2A60BCu;
        goto label_2a60bc;
    }
    ctx->pc = 0x2A60B4u;
    SET_GPR_U32(ctx, 31, 0x2A60BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A60B4u, 0x2A60BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A60BCu;
label_2a60bc:
    // 0x2a60bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a60bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a60c0:
    // 0x2a60c0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a60c4:
    // 0x2a60c4: 0xa4a01278  sh          $zero, 0x1278($a1)
    ctx->pc = 0x2a60c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2a60c8:
    // 0x2a60c8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a60c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a60cc:
    // 0x2a60cc: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x2a60ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2a60d0:
    // 0x2a60d0: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x2a60d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
label_2a60d4:
    // 0x2a60d4: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2a60d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_2a60d8:
    // 0x2a60d8: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2a60d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_2a60dc:
    // 0x2a60dc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a60dcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a60e0:
    // 0x2a60e0: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a60e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a60e4:
    // 0x2a60e4: 0xe54001a0  swc1        $f0, 0x1A0($t2)
    ctx->pc = 0x2a60e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 416), bits); }
label_2a60e8:
    // 0x2a60e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a60ec:
    // 0x2a60ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a60ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a60f0:
    // 0x2a60f0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a60f4:
    // 0x2a60f4: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x2a60f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
label_2a60f8:
    // 0x2a60f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a60fc:
    // 0x2a60fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a60fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6100:
    // 0x2a6100: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6104:
    // 0x2a6104: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x2a6104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_2a6108:
    // 0x2a6108: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a610c:
    // 0x2a610c: 0x24a60120  addiu       $a2, $a1, 0x120
    ctx->pc = 0x2a610cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_2a6110:
    // 0x2a6110: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a6110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a6114:
    // 0x2a6114: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6118:
    // 0x2a6118: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a6118u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a611c:
    // 0x2a611c: 0xc0c7a0c  jal         func_31E830
label_2a6120:
    if (ctx->pc == 0x2A6120u) {
        ctx->pc = 0x2A6124u;
        goto label_2a6124;
    }
    ctx->pc = 0x2A611Cu;
    SET_GPR_U32(ctx, 31, 0x2A6124u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2A611Cu, 0x2A6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6124u;
label_2a6124:
    // 0x2a6124: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6128:
    // 0x2a6128: 0x9485000e  lhu         $a1, 0xE($a0)
    ctx->pc = 0x2a6128u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_2a612c:
    // 0x2a612c: 0x34a68000  ori         $a2, $a1, 0x8000
    ctx->pc = 0x2a612cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_2a6130:
    // 0x2a6130: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x2a6130u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
label_2a6134:
    // 0x2a6134: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_2a6138:
    if (ctx->pc == 0x2A6138u) {
        ctx->pc = 0x2A613Cu;
        goto label_2a613c;
    }
    ctx->pc = 0x2A6134u;
    {
        const bool branch_taken_0x2a6134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6134) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A613Cu;
label_2a613c:
    // 0x2a613c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a613cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6140:
    // 0x2a6140: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a6140u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2a6144:
    // 0x2a6144: 0xc0b3764  jal         func_2CDD90
label_2a6148:
    if (ctx->pc == 0x2A6148u) {
        ctx->pc = 0x2A614Cu;
        goto label_2a614c;
    }
    ctx->pc = 0x2A6144u;
    SET_GPR_U32(ctx, 31, 0x2A614Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A6144u, 0x2A614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A614Cu;
label_2a614c:
    // 0x2a614c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6150:
    // 0x2a6150: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x2a6150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6154:
    // 0x2a6154: 0x3c063ae1  lui         $a2, 0x3AE1
    ctx->pc = 0x2a6154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15073 << 16));
label_2a6158:
    // 0x2a6158: 0x34c5fc78  ori         $a1, $a2, 0xFC78
    ctx->pc = 0x2a6158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64632);
label_2a615c:
    // 0x2a615c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a615cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6160:
    // 0x2a6160: 0x0  nop
    ctx->pc = 0x2a6160u;
    // NOP
label_2a6164:
    // 0x2a6164: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a6164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a6168:
    // 0x2a6168: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x2a6168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
label_2a616c:
    // 0x2a616c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a616cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6170:
    // 0x2a6170: 0x84e31278  lh          $v1, 0x1278($a3)
    ctx->pc = 0x2a6170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4728)));
label_2a6174:
    // 0x2a6174: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2a6174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a6178:
    // 0x2a6178: 0xa4e41278  sh          $a0, 0x1278($a3)
    ctx->pc = 0x2a6178u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4728), (uint16_t)GPR_U32(ctx, 4));
label_2a617c:
    // 0x2a617c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a617cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6180:
    // 0x2a6180: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x2a6180u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_2a6184:
    // 0x2a6184: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x2a6184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
label_2a6188:
    // 0x2a6188: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2a6188u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_2a618c:
    // 0x2a618c: 0x30e3000f  andi        $v1, $a3, 0xF
    ctx->pc = 0x2a618cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_2a6190:
    // 0x2a6190: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_2a6194:
    if (ctx->pc == 0x2A6194u) {
        ctx->pc = 0x2A6198u;
        goto label_2a6198;
    }
    ctx->pc = 0x2A6190u;
    {
        const bool branch_taken_0x2a6190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6190) {
            ctx->pc = 0x2A6268u;
            goto label_2a6268;
        }
    }
    ctx->pc = 0x2A6198u;
label_2a6198:
    // 0x2a6198: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a6198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a619c:
    // 0x2a619c: 0xc0675a4  jal         func_19D690
label_2a61a0:
    if (ctx->pc == 0x2A61A0u) {
        ctx->pc = 0x2A61A4u;
        goto label_2a61a4;
    }
    ctx->pc = 0x2A619Cu;
    SET_GPR_U32(ctx, 31, 0x2A61A4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A619Cu, 0x2A61A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61A4u;
label_2a61a4:
    // 0x2a61a4: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x2a61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_2a61a8:
    // 0x2a61a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a61a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a61ac:
    // 0x2a61ac: 0x0  nop
    ctx->pc = 0x2a61acu;
    // NOP
label_2a61b0:
    // 0x2a61b0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a61b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2a61b4:
    // 0x2a61b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2a61b8:
    // 0x2a61b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a61b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a61bc:
    // 0x2a61bc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a61c0:
    // 0x2a61c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a61c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a61c4:
    // 0x2a61c4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a61c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a61c8:
    // 0x2a61c8: 0xc0c4acc  jal         func_312B30
label_2a61cc:
    if (ctx->pc == 0x2A61CCu) {
        ctx->pc = 0x2A61D0u;
        goto label_2a61d0;
    }
    ctx->pc = 0x2A61C8u;
    SET_GPR_U32(ctx, 31, 0x2A61D0u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A61C8u, 0x2A61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61D0u;
label_2a61d0:
    // 0x2a61d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a61d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a61d4:
    // 0x2a61d4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2a61d8:
    // 0x2a61d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a61d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a61dc:
    // 0x2a61dc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a61dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a61e0:
    // 0x2a61e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a61e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a61e4:
    // 0x2a61e4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a61e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a61e8:
    // 0x2a61e8: 0xc0c4acc  jal         func_312B30
label_2a61ec:
    if (ctx->pc == 0x2A61ECu) {
        ctx->pc = 0x2A61F0u;
        goto label_2a61f0;
    }
    ctx->pc = 0x2A61E8u;
    SET_GPR_U32(ctx, 31, 0x2A61F0u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A61E8u, 0x2A61F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61F0u;
label_2a61f0:
    // 0x2a61f0: 0x3c04c316  lui         $a0, 0xC316
    ctx->pc = 0x2a61f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49942 << 16));
label_2a61f4:
    // 0x2a61f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a61f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a61f8:
    // 0x2a61f8: 0x0  nop
    ctx->pc = 0x2a61f8u;
    // NOP
label_2a61fc:
    // 0x2a61fc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a61fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2a6200:
    // 0x2a6200: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2a6200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2a6204:
    // 0x2a6204: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a6204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6208:
    // 0x2a6208: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a620c:
    // 0x2a620c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a620cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6210:
    // 0x2a6210: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6214:
    // 0x2a6214: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a6214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a6218:
    // 0x2a6218: 0xc0c4acc  jal         func_312B30
label_2a621c:
    if (ctx->pc == 0x2A621Cu) {
        ctx->pc = 0x2A6220u;
        goto label_2a6220;
    }
    ctx->pc = 0x2A6218u;
    SET_GPR_U32(ctx, 31, 0x2A6220u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A6218u, 0x2A6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6220u;
label_2a6220:
    // 0x2a6220: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6220u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6224:
    // 0x2a6224: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2a6224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_2a6228:
    // 0x2a6228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a622c:
    // 0x2a622c: 0x0  nop
    ctx->pc = 0x2a622cu;
    // NOP
label_2a6230:
    // 0x2a6230: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a6230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2a6234:
    // 0x2a6234: 0x3c04c396  lui         $a0, 0xC396
    ctx->pc = 0x2a6234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50070 << 16));
label_2a6238:
    // 0x2a6238: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6238u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a623c:
    // 0x2a623c: 0x0  nop
    ctx->pc = 0x2a623cu;
    // NOP
label_2a6240:
    // 0x2a6240: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a6240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2a6244:
    // 0x2a6244: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a6244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2a6248:
    // 0x2a6248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a624c:
    // 0x2a624c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6250:
    // 0x2a6250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a6254:
    // 0x2a6254: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2a6254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a6258:
    // 0x2a6258: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6258u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a625c:
    // 0x2a625c: 0xc0c4acc  jal         func_312B30
label_2a6260:
    if (ctx->pc == 0x2A6260u) {
        ctx->pc = 0x2A6264u;
        goto label_2a6264;
    }
    ctx->pc = 0x2A625Cu;
    SET_GPR_U32(ctx, 31, 0x2A6264u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A625Cu, 0x2A6264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6264u;
label_2a6264:
    // 0x2a6264: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6264u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6268:
    // 0x2a6268: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a626c:
    // 0x2a626c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x2a626cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2a6270:
    // 0x2a6270: 0x10a00078  beqz        $a1, . + 4 + (0x78 << 2)
label_2a6274:
    if (ctx->pc == 0x2A6274u) {
        ctx->pc = 0x2A6278u;
        goto label_2a6278;
    }
    ctx->pc = 0x2A6270u;
    {
        const bool branch_taken_0x2a6270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6270) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A6278u;
label_2a6278:
    // 0x2a6278: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2a6278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a627c:
    // 0x2a627c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6280:
    // 0x2a6280: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a6280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2a6284:
    // 0x2a6284: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6288:
    // 0x2a6288: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a628c:
    // 0x2a628c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a628cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_2a6290:
    // 0x2a6290: 0x24061e1f  addiu       $a2, $zero, 0x1E1F
    ctx->pc = 0x2a6290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7711));
label_2a6294:
    // 0x2a6294: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6298:
    // 0x2a6298: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a6298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a629c:
    // 0x2a629c: 0xc0965d0  jal         func_259740
label_2a62a0:
    if (ctx->pc == 0x2A62A0u) {
        ctx->pc = 0x2A62A4u;
        goto label_2a62a4;
    }
    ctx->pc = 0x2A629Cu;
    SET_GPR_U32(ctx, 31, 0x2A62A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A629Cu, 0x2A62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62A4u;
label_2a62a4:
    // 0x2a62a4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a62a8:
    // 0x2a62a8: 0x247010b0  addiu       $s0, $v1, 0x10B0
    ctx->pc = 0x2a62a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
label_2a62ac:
    // 0x2a62ac: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2a62acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2a62b0:
    // 0x2a62b0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2a62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2a62b4:
    // 0x2a62b4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x2a62b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2a62b8:
    // 0x2a62b8: 0xae0500f0  sw          $a1, 0xF0($s0)
    ctx->pc = 0x2a62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 5));
label_2a62bc:
    // 0x2a62bc: 0x10000065  b           . + 4 + (0x65 << 2)
label_2a62c0:
    if (ctx->pc == 0x2A62C0u) {
        ctx->pc = 0x2A62C4u;
        goto label_2a62c4;
    }
    ctx->pc = 0x2A62BCu;
    {
        const bool branch_taken_0x2a62bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a62bc) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A62C4u;
label_2a62c4:
    // 0x2a62c4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a62c8:
    // 0x2a62c8: 0xc0b3764  jal         func_2CDD90
label_2a62cc:
    if (ctx->pc == 0x2A62CCu) {
        ctx->pc = 0x2A62D0u;
        goto label_2a62d0;
    }
    ctx->pc = 0x2A62C8u;
    SET_GPR_U32(ctx, 31, 0x2A62D0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A62C8u, 0x2A62D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62D0u;
label_2a62d0:
    // 0x2a62d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a62d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a62d4:
    // 0x2a62d4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a62d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a62d8:
    // 0x2a62d8: 0xc4c101a0  lwc1        $f1, 0x1A0($a2)
    ctx->pc = 0x2a62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a62dc:
    // 0x2a62dc: 0x3c083a94  lui         $t0, 0x3A94
    ctx->pc = 0x2a62dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)14996 << 16));
label_2a62e0:
    // 0x2a62e0: 0x3507f209  ori         $a3, $t0, 0xF209
    ctx->pc = 0x2a62e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)61961);
label_2a62e4:
    // 0x2a62e4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a62e4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a62e8:
    // 0x2a62e8: 0x0  nop
    ctx->pc = 0x2a62e8u;
    // NOP
label_2a62ec:
    // 0x2a62ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a62ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a62f0:
    // 0x2a62f0: 0xe4c001a0  swc1        $f0, 0x1A0($a2)
    ctx->pc = 0x2a62f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 416), bits); }
label_2a62f4:
    // 0x2a62f4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a62f8:
    // 0x2a62f8: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2a62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a62fc:
    // 0x2a62fc: 0x3c033a72  lui         $v1, 0x3A72
    ctx->pc = 0x2a62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14962 << 16));
label_2a6300:
    // 0x2a6300: 0x3463b9d6  ori         $v1, $v1, 0xB9D6
    ctx->pc = 0x2a6300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47574);
label_2a6304:
    // 0x2a6304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6308:
    // 0x2a6308: 0x0  nop
    ctx->pc = 0x2a6308u;
    // NOP
label_2a630c:
    // 0x2a630c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a630cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a6310:
    // 0x2a6310: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x2a6310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_2a6314:
    // 0x2a6314: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6318:
    // 0x2a6318: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2a6318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a631c:
    // 0x2a631c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a631cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6320:
    // 0x2a6320: 0x0  nop
    ctx->pc = 0x2a6320u;
    // NOP
label_2a6324:
    // 0x2a6324: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a6324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6328:
    // 0x2a6328: 0x0  nop
    ctx->pc = 0x2a6328u;
    // NOP
label_2a632c:
    // 0x2a632c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2a6330:
    if (ctx->pc == 0x2A6330u) {
        ctx->pc = 0x2A6334u;
        goto label_2a6334;
    }
    ctx->pc = 0x2A632Cu;
    {
        const bool branch_taken_0x2a632c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a632c) {
            ctx->pc = 0x2A6340u;
            goto label_2a6340;
        }
    }
    ctx->pc = 0x2A6334u;
label_2a6334:
    // 0x2a6334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6338:
    // 0x2a6338: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a633c:
    // 0x2a633c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x2a633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_2a6340:
    // 0x2a6340: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6344:
    // 0x2a6344: 0xc4c101a8  lwc1        $f1, 0x1A8($a2)
    ctx->pc = 0x2a6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6348:
    // 0x2a6348: 0x3c083a94  lui         $t0, 0x3A94
    ctx->pc = 0x2a6348u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)14996 << 16));
label_2a634c:
    // 0x2a634c: 0x3507f209  ori         $a3, $t0, 0xF209
    ctx->pc = 0x2a634cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)61961);
label_2a6350:
    // 0x2a6350: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a6350u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6354:
    // 0x2a6354: 0x0  nop
    ctx->pc = 0x2a6354u;
    // NOP
label_2a6358:
    // 0x2a6358: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a6358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a635c:
    // 0x2a635c: 0xe4c001a8  swc1        $f0, 0x1A8($a2)
    ctx->pc = 0x2a635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 424), bits); }
label_2a6360:
    // 0x2a6360: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6364:
    // 0x2a6364: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x2a6364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a6368:
    // 0x2a6368: 0xc047fe2  jal         func_11FF88
label_2a636c:
    if (ctx->pc == 0x2A636Cu) {
        ctx->pc = 0x2A6370u;
        goto label_2a6370;
    }
    ctx->pc = 0x2A6368u;
    SET_GPR_U32(ctx, 31, 0x2A6370u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2A6368u, 0x2A6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6370u;
label_2a6370:
    // 0x2a6370: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a6374:
    // 0x2a6374: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x2a6374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
label_2a6378:
    // 0x2a6378: 0x34829999  ori         $v0, $a0, 0x9999
    ctx->pc = 0x2a6378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
label_2a637c:
    // 0x2a637c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a637cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2a6380:
    // 0x2a6380: 0x34049999  ori         $a0, $zero, 0x9999
    ctx->pc = 0x2a6380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
label_2a6384:
    // 0x2a6384: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2a6384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_2a6388:
    // 0x2a6388: 0x3465999a  ori         $a1, $v1, 0x999A
    ctx->pc = 0x2a6388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_2a638c:
    // 0x2a638c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2a638cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2a6390:
    // 0x2a6390: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a6390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2a6394:
    // 0x2a6394: 0xc040048  jal         func_100120
label_2a6398:
    if (ctx->pc == 0x2A6398u) {
        ctx->pc = 0x2A639Cu;
        goto label_2a639c;
    }
    ctx->pc = 0x2A6394u;
    SET_GPR_U32(ctx, 31, 0x2A639Cu);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x2A6394u, 0x2A639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A639Cu;
label_2a639c:
    // 0x2a639c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a639cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a63a0:
    // 0x2a63a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2a63a4:
    if (ctx->pc == 0x2A63A4u) {
        ctx->pc = 0x2A63A8u;
        goto label_2a63a8;
    }
    ctx->pc = 0x2A63A0u;
    {
        const bool branch_taken_0x2a63a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a63a0) {
            ctx->pc = 0x2A63D4u;
            goto label_2a63d4;
        }
    }
    ctx->pc = 0x2A63A8u;
label_2a63a8:
    // 0x2a63a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2a63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a63ac:
    // 0x2a63ac: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a63b0:
    // 0x2a63b0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a63b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2a63b4:
    // 0x2a63b4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a63b8:
    // 0x2a63b8: 0x9464000e  lhu         $a0, 0xE($v1)
    ctx->pc = 0x2a63b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_2a63bc:
    // 0x2a63bc: 0x30857fff  andi        $a1, $a0, 0x7FFF
    ctx->pc = 0x2a63bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
label_2a63c0:
    // 0x2a63c0: 0xa465000e  sh          $a1, 0xE($v1)
    ctx->pc = 0x2a63c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
label_2a63c4:
    // 0x2a63c4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a63c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a63c8:
    // 0x2a63c8: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x2a63c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2a63cc:
    // 0x2a63cc: 0x34e80200  ori         $t0, $a3, 0x200
    ctx->pc = 0x2a63ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)512);
label_2a63d0:
    // 0x2a63d0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2a63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_2a63d4:
    // 0x2a63d4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a63d8:
    // 0x2a63d8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2a63d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_2a63dc:
    // 0x2a63dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a63e0:
    // 0x2a63e0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2a63e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2a63e4:
    // 0x2a63e4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a63e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a63e8:
    // 0x2a63e8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2a63e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_2a63ec:
    // 0x2a63ec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2a63ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_2a63f0:
    // 0x2a63f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2a63f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2a63f4:
    // 0x2a63f4: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x2a63f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_2a63f8:
    // 0x2a63f8: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_2a63fc:
    if (ctx->pc == 0x2A63FCu) {
        ctx->pc = 0x2A6400u;
        goto label_2a6400;
    }
    ctx->pc = 0x2A63F8u;
    {
        const bool branch_taken_0x2a63f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a63f8) {
            ctx->pc = 0x2A6454u;
            goto label_2a6454;
        }
    }
    ctx->pc = 0x2A6400u;
label_2a6400:
    // 0x2a6400: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a6404:
    // 0x2a6404: 0xc0675a4  jal         func_19D690
label_2a6408:
    if (ctx->pc == 0x2A6408u) {
        ctx->pc = 0x2A640Cu;
        goto label_2a640c;
    }
    ctx->pc = 0x2A6404u;
    SET_GPR_U32(ctx, 31, 0x2A640Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6404u, 0x2A640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A640Cu;
label_2a640c:
    // 0x2a640c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2a640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_2a6410:
    // 0x2a6410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6414:
    // 0x2a6414: 0x0  nop
    ctx->pc = 0x2a6414u;
    // NOP
label_2a6418:
    // 0x2a6418: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2a6418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_2a641c:
    // 0x2a641c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2a6420:
    // 0x2a6420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6424:
    // 0x2a6424: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6428:
    // 0x2a6428: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2a642c:
    // 0x2a642c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2a642cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a6430:
    // 0x2a6430: 0xc0c4acc  jal         func_312B30
label_2a6434:
    if (ctx->pc == 0x2A6434u) {
        ctx->pc = 0x2A6438u;
        goto label_2a6438;
    }
    ctx->pc = 0x2A6430u;
    SET_GPR_U32(ctx, 31, 0x2A6438u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A6430u, 0x2A6438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6438u;
label_2a6438:
    // 0x2a6438: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a6438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2a643c:
    // 0x2a643c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a643cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6440:
    // 0x2a6440: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2a6444:
    // 0x2a6444: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6448:
    // 0x2a6448: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2a6448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a644c:
    // 0x2a644c: 0xc0c4acc  jal         func_312B30
label_2a6450:
    if (ctx->pc == 0x2A6450u) {
        ctx->pc = 0x2A6454u;
        goto label_2a6454;
    }
    ctx->pc = 0x2A644Cu;
    SET_GPR_U32(ctx, 31, 0x2A6454u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A644Cu, 0x2A6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6454u;
label_2a6454:
    // 0x2a6454: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2a6454u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6458:
    // 0x2a6458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a645c:
    // 0x2a645c: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x2a645cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2a6460:
    // 0x2a6460: 0x3e00008  jr          $ra
label_2a6464:
    if (ctx->pc == 0x2A6464u) {
        ctx->pc = 0x2A6468u;
        goto label_fallthrough_0x2a6460;
    }
    ctx->pc = 0x2A6460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a6460:
    ctx->pc = 0x2A6468u;
}
