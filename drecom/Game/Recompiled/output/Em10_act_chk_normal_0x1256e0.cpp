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

// Function: Em10_act_chk_normal
// Address: 0x1256e0 - 0x125db8
void Em10_act_chk_normal_0x1256e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_normal_0x1256e0");
#endif

    switch (ctx->pc) {
        case 0x1256e0u: goto label_1256e0;
        case 0x1256e4u: goto label_1256e4;
        case 0x1256e8u: goto label_1256e8;
        case 0x1256ecu: goto label_1256ec;
        case 0x1256f0u: goto label_1256f0;
        case 0x1256f4u: goto label_1256f4;
        case 0x1256f8u: goto label_1256f8;
        case 0x1256fcu: goto label_1256fc;
        case 0x125700u: goto label_125700;
        case 0x125704u: goto label_125704;
        case 0x125708u: goto label_125708;
        case 0x12570cu: goto label_12570c;
        case 0x125710u: goto label_125710;
        case 0x125714u: goto label_125714;
        case 0x125718u: goto label_125718;
        case 0x12571cu: goto label_12571c;
        case 0x125720u: goto label_125720;
        case 0x125724u: goto label_125724;
        case 0x125728u: goto label_125728;
        case 0x12572cu: goto label_12572c;
        case 0x125730u: goto label_125730;
        case 0x125734u: goto label_125734;
        case 0x125738u: goto label_125738;
        case 0x12573cu: goto label_12573c;
        case 0x125740u: goto label_125740;
        case 0x125744u: goto label_125744;
        case 0x125748u: goto label_125748;
        case 0x12574cu: goto label_12574c;
        case 0x125750u: goto label_125750;
        case 0x125754u: goto label_125754;
        case 0x125758u: goto label_125758;
        case 0x12575cu: goto label_12575c;
        case 0x125760u: goto label_125760;
        case 0x125764u: goto label_125764;
        case 0x125768u: goto label_125768;
        case 0x12576cu: goto label_12576c;
        case 0x125770u: goto label_125770;
        case 0x125774u: goto label_125774;
        case 0x125778u: goto label_125778;
        case 0x12577cu: goto label_12577c;
        case 0x125780u: goto label_125780;
        case 0x125784u: goto label_125784;
        case 0x125788u: goto label_125788;
        case 0x12578cu: goto label_12578c;
        case 0x125790u: goto label_125790;
        case 0x125794u: goto label_125794;
        case 0x125798u: goto label_125798;
        case 0x12579cu: goto label_12579c;
        case 0x1257a0u: goto label_1257a0;
        case 0x1257a4u: goto label_1257a4;
        case 0x1257a8u: goto label_1257a8;
        case 0x1257acu: goto label_1257ac;
        case 0x1257b0u: goto label_1257b0;
        case 0x1257b4u: goto label_1257b4;
        case 0x1257b8u: goto label_1257b8;
        case 0x1257bcu: goto label_1257bc;
        case 0x1257c0u: goto label_1257c0;
        case 0x1257c4u: goto label_1257c4;
        case 0x1257c8u: goto label_1257c8;
        case 0x1257ccu: goto label_1257cc;
        case 0x1257d0u: goto label_1257d0;
        case 0x1257d4u: goto label_1257d4;
        case 0x1257d8u: goto label_1257d8;
        case 0x1257dcu: goto label_1257dc;
        case 0x1257e0u: goto label_1257e0;
        case 0x1257e4u: goto label_1257e4;
        case 0x1257e8u: goto label_1257e8;
        case 0x1257ecu: goto label_1257ec;
        case 0x1257f0u: goto label_1257f0;
        case 0x1257f4u: goto label_1257f4;
        case 0x1257f8u: goto label_1257f8;
        case 0x1257fcu: goto label_1257fc;
        case 0x125800u: goto label_125800;
        case 0x125804u: goto label_125804;
        case 0x125808u: goto label_125808;
        case 0x12580cu: goto label_12580c;
        case 0x125810u: goto label_125810;
        case 0x125814u: goto label_125814;
        case 0x125818u: goto label_125818;
        case 0x12581cu: goto label_12581c;
        case 0x125820u: goto label_125820;
        case 0x125824u: goto label_125824;
        case 0x125828u: goto label_125828;
        case 0x12582cu: goto label_12582c;
        case 0x125830u: goto label_125830;
        case 0x125834u: goto label_125834;
        case 0x125838u: goto label_125838;
        case 0x12583cu: goto label_12583c;
        case 0x125840u: goto label_125840;
        case 0x125844u: goto label_125844;
        case 0x125848u: goto label_125848;
        case 0x12584cu: goto label_12584c;
        case 0x125850u: goto label_125850;
        case 0x125854u: goto label_125854;
        case 0x125858u: goto label_125858;
        case 0x12585cu: goto label_12585c;
        case 0x125860u: goto label_125860;
        case 0x125864u: goto label_125864;
        case 0x125868u: goto label_125868;
        case 0x12586cu: goto label_12586c;
        case 0x125870u: goto label_125870;
        case 0x125874u: goto label_125874;
        case 0x125878u: goto label_125878;
        case 0x12587cu: goto label_12587c;
        case 0x125880u: goto label_125880;
        case 0x125884u: goto label_125884;
        case 0x125888u: goto label_125888;
        case 0x12588cu: goto label_12588c;
        case 0x125890u: goto label_125890;
        case 0x125894u: goto label_125894;
        case 0x125898u: goto label_125898;
        case 0x12589cu: goto label_12589c;
        case 0x1258a0u: goto label_1258a0;
        case 0x1258a4u: goto label_1258a4;
        case 0x1258a8u: goto label_1258a8;
        case 0x1258acu: goto label_1258ac;
        case 0x1258b0u: goto label_1258b0;
        case 0x1258b4u: goto label_1258b4;
        case 0x1258b8u: goto label_1258b8;
        case 0x1258bcu: goto label_1258bc;
        case 0x1258c0u: goto label_1258c0;
        case 0x1258c4u: goto label_1258c4;
        case 0x1258c8u: goto label_1258c8;
        case 0x1258ccu: goto label_1258cc;
        case 0x1258d0u: goto label_1258d0;
        case 0x1258d4u: goto label_1258d4;
        case 0x1258d8u: goto label_1258d8;
        case 0x1258dcu: goto label_1258dc;
        case 0x1258e0u: goto label_1258e0;
        case 0x1258e4u: goto label_1258e4;
        case 0x1258e8u: goto label_1258e8;
        case 0x1258ecu: goto label_1258ec;
        case 0x1258f0u: goto label_1258f0;
        case 0x1258f4u: goto label_1258f4;
        case 0x1258f8u: goto label_1258f8;
        case 0x1258fcu: goto label_1258fc;
        case 0x125900u: goto label_125900;
        case 0x125904u: goto label_125904;
        case 0x125908u: goto label_125908;
        case 0x12590cu: goto label_12590c;
        case 0x125910u: goto label_125910;
        case 0x125914u: goto label_125914;
        case 0x125918u: goto label_125918;
        case 0x12591cu: goto label_12591c;
        case 0x125920u: goto label_125920;
        case 0x125924u: goto label_125924;
        case 0x125928u: goto label_125928;
        case 0x12592cu: goto label_12592c;
        case 0x125930u: goto label_125930;
        case 0x125934u: goto label_125934;
        case 0x125938u: goto label_125938;
        case 0x12593cu: goto label_12593c;
        case 0x125940u: goto label_125940;
        case 0x125944u: goto label_125944;
        case 0x125948u: goto label_125948;
        case 0x12594cu: goto label_12594c;
        case 0x125950u: goto label_125950;
        case 0x125954u: goto label_125954;
        case 0x125958u: goto label_125958;
        case 0x12595cu: goto label_12595c;
        case 0x125960u: goto label_125960;
        case 0x125964u: goto label_125964;
        case 0x125968u: goto label_125968;
        case 0x12596cu: goto label_12596c;
        case 0x125970u: goto label_125970;
        case 0x125974u: goto label_125974;
        case 0x125978u: goto label_125978;
        case 0x12597cu: goto label_12597c;
        case 0x125980u: goto label_125980;
        case 0x125984u: goto label_125984;
        case 0x125988u: goto label_125988;
        case 0x12598cu: goto label_12598c;
        case 0x125990u: goto label_125990;
        case 0x125994u: goto label_125994;
        case 0x125998u: goto label_125998;
        case 0x12599cu: goto label_12599c;
        case 0x1259a0u: goto label_1259a0;
        case 0x1259a4u: goto label_1259a4;
        case 0x1259a8u: goto label_1259a8;
        case 0x1259acu: goto label_1259ac;
        case 0x1259b0u: goto label_1259b0;
        case 0x1259b4u: goto label_1259b4;
        case 0x1259b8u: goto label_1259b8;
        case 0x1259bcu: goto label_1259bc;
        case 0x1259c0u: goto label_1259c0;
        case 0x1259c4u: goto label_1259c4;
        case 0x1259c8u: goto label_1259c8;
        case 0x1259ccu: goto label_1259cc;
        case 0x1259d0u: goto label_1259d0;
        case 0x1259d4u: goto label_1259d4;
        case 0x1259d8u: goto label_1259d8;
        case 0x1259dcu: goto label_1259dc;
        case 0x1259e0u: goto label_1259e0;
        case 0x1259e4u: goto label_1259e4;
        case 0x1259e8u: goto label_1259e8;
        case 0x1259ecu: goto label_1259ec;
        case 0x1259f0u: goto label_1259f0;
        case 0x1259f4u: goto label_1259f4;
        case 0x1259f8u: goto label_1259f8;
        case 0x1259fcu: goto label_1259fc;
        case 0x125a00u: goto label_125a00;
        case 0x125a04u: goto label_125a04;
        case 0x125a08u: goto label_125a08;
        case 0x125a0cu: goto label_125a0c;
        case 0x125a10u: goto label_125a10;
        case 0x125a14u: goto label_125a14;
        case 0x125a18u: goto label_125a18;
        case 0x125a1cu: goto label_125a1c;
        case 0x125a20u: goto label_125a20;
        case 0x125a24u: goto label_125a24;
        case 0x125a28u: goto label_125a28;
        case 0x125a2cu: goto label_125a2c;
        case 0x125a30u: goto label_125a30;
        case 0x125a34u: goto label_125a34;
        case 0x125a38u: goto label_125a38;
        case 0x125a3cu: goto label_125a3c;
        case 0x125a40u: goto label_125a40;
        case 0x125a44u: goto label_125a44;
        case 0x125a48u: goto label_125a48;
        case 0x125a4cu: goto label_125a4c;
        case 0x125a50u: goto label_125a50;
        case 0x125a54u: goto label_125a54;
        case 0x125a58u: goto label_125a58;
        case 0x125a5cu: goto label_125a5c;
        case 0x125a60u: goto label_125a60;
        case 0x125a64u: goto label_125a64;
        case 0x125a68u: goto label_125a68;
        case 0x125a6cu: goto label_125a6c;
        case 0x125a70u: goto label_125a70;
        case 0x125a74u: goto label_125a74;
        case 0x125a78u: goto label_125a78;
        case 0x125a7cu: goto label_125a7c;
        case 0x125a80u: goto label_125a80;
        case 0x125a84u: goto label_125a84;
        case 0x125a88u: goto label_125a88;
        case 0x125a8cu: goto label_125a8c;
        case 0x125a90u: goto label_125a90;
        case 0x125a94u: goto label_125a94;
        case 0x125a98u: goto label_125a98;
        case 0x125a9cu: goto label_125a9c;
        case 0x125aa0u: goto label_125aa0;
        case 0x125aa4u: goto label_125aa4;
        case 0x125aa8u: goto label_125aa8;
        case 0x125aacu: goto label_125aac;
        case 0x125ab0u: goto label_125ab0;
        case 0x125ab4u: goto label_125ab4;
        case 0x125ab8u: goto label_125ab8;
        case 0x125abcu: goto label_125abc;
        case 0x125ac0u: goto label_125ac0;
        case 0x125ac4u: goto label_125ac4;
        case 0x125ac8u: goto label_125ac8;
        case 0x125accu: goto label_125acc;
        case 0x125ad0u: goto label_125ad0;
        case 0x125ad4u: goto label_125ad4;
        case 0x125ad8u: goto label_125ad8;
        case 0x125adcu: goto label_125adc;
        case 0x125ae0u: goto label_125ae0;
        case 0x125ae4u: goto label_125ae4;
        case 0x125ae8u: goto label_125ae8;
        case 0x125aecu: goto label_125aec;
        case 0x125af0u: goto label_125af0;
        case 0x125af4u: goto label_125af4;
        case 0x125af8u: goto label_125af8;
        case 0x125afcu: goto label_125afc;
        case 0x125b00u: goto label_125b00;
        case 0x125b04u: goto label_125b04;
        case 0x125b08u: goto label_125b08;
        case 0x125b0cu: goto label_125b0c;
        case 0x125b10u: goto label_125b10;
        case 0x125b14u: goto label_125b14;
        case 0x125b18u: goto label_125b18;
        case 0x125b1cu: goto label_125b1c;
        case 0x125b20u: goto label_125b20;
        case 0x125b24u: goto label_125b24;
        case 0x125b28u: goto label_125b28;
        case 0x125b2cu: goto label_125b2c;
        case 0x125b30u: goto label_125b30;
        case 0x125b34u: goto label_125b34;
        case 0x125b38u: goto label_125b38;
        case 0x125b3cu: goto label_125b3c;
        case 0x125b40u: goto label_125b40;
        case 0x125b44u: goto label_125b44;
        case 0x125b48u: goto label_125b48;
        case 0x125b4cu: goto label_125b4c;
        case 0x125b50u: goto label_125b50;
        case 0x125b54u: goto label_125b54;
        case 0x125b58u: goto label_125b58;
        case 0x125b5cu: goto label_125b5c;
        case 0x125b60u: goto label_125b60;
        case 0x125b64u: goto label_125b64;
        case 0x125b68u: goto label_125b68;
        case 0x125b6cu: goto label_125b6c;
        case 0x125b70u: goto label_125b70;
        case 0x125b74u: goto label_125b74;
        case 0x125b78u: goto label_125b78;
        case 0x125b7cu: goto label_125b7c;
        case 0x125b80u: goto label_125b80;
        case 0x125b84u: goto label_125b84;
        case 0x125b88u: goto label_125b88;
        case 0x125b8cu: goto label_125b8c;
        case 0x125b90u: goto label_125b90;
        case 0x125b94u: goto label_125b94;
        case 0x125b98u: goto label_125b98;
        case 0x125b9cu: goto label_125b9c;
        case 0x125ba0u: goto label_125ba0;
        case 0x125ba4u: goto label_125ba4;
        case 0x125ba8u: goto label_125ba8;
        case 0x125bacu: goto label_125bac;
        case 0x125bb0u: goto label_125bb0;
        case 0x125bb4u: goto label_125bb4;
        case 0x125bb8u: goto label_125bb8;
        case 0x125bbcu: goto label_125bbc;
        case 0x125bc0u: goto label_125bc0;
        case 0x125bc4u: goto label_125bc4;
        case 0x125bc8u: goto label_125bc8;
        case 0x125bccu: goto label_125bcc;
        case 0x125bd0u: goto label_125bd0;
        case 0x125bd4u: goto label_125bd4;
        case 0x125bd8u: goto label_125bd8;
        case 0x125bdcu: goto label_125bdc;
        case 0x125be0u: goto label_125be0;
        case 0x125be4u: goto label_125be4;
        case 0x125be8u: goto label_125be8;
        case 0x125becu: goto label_125bec;
        case 0x125bf0u: goto label_125bf0;
        case 0x125bf4u: goto label_125bf4;
        case 0x125bf8u: goto label_125bf8;
        case 0x125bfcu: goto label_125bfc;
        case 0x125c00u: goto label_125c00;
        case 0x125c04u: goto label_125c04;
        case 0x125c08u: goto label_125c08;
        case 0x125c0cu: goto label_125c0c;
        case 0x125c10u: goto label_125c10;
        case 0x125c14u: goto label_125c14;
        case 0x125c18u: goto label_125c18;
        case 0x125c1cu: goto label_125c1c;
        case 0x125c20u: goto label_125c20;
        case 0x125c24u: goto label_125c24;
        case 0x125c28u: goto label_125c28;
        case 0x125c2cu: goto label_125c2c;
        case 0x125c30u: goto label_125c30;
        case 0x125c34u: goto label_125c34;
        case 0x125c38u: goto label_125c38;
        case 0x125c3cu: goto label_125c3c;
        case 0x125c40u: goto label_125c40;
        case 0x125c44u: goto label_125c44;
        case 0x125c48u: goto label_125c48;
        case 0x125c4cu: goto label_125c4c;
        case 0x125c50u: goto label_125c50;
        case 0x125c54u: goto label_125c54;
        case 0x125c58u: goto label_125c58;
        case 0x125c5cu: goto label_125c5c;
        case 0x125c60u: goto label_125c60;
        case 0x125c64u: goto label_125c64;
        case 0x125c68u: goto label_125c68;
        case 0x125c6cu: goto label_125c6c;
        case 0x125c70u: goto label_125c70;
        case 0x125c74u: goto label_125c74;
        case 0x125c78u: goto label_125c78;
        case 0x125c7cu: goto label_125c7c;
        case 0x125c80u: goto label_125c80;
        case 0x125c84u: goto label_125c84;
        case 0x125c88u: goto label_125c88;
        case 0x125c8cu: goto label_125c8c;
        case 0x125c90u: goto label_125c90;
        case 0x125c94u: goto label_125c94;
        case 0x125c98u: goto label_125c98;
        case 0x125c9cu: goto label_125c9c;
        case 0x125ca0u: goto label_125ca0;
        case 0x125ca4u: goto label_125ca4;
        case 0x125ca8u: goto label_125ca8;
        case 0x125cacu: goto label_125cac;
        case 0x125cb0u: goto label_125cb0;
        case 0x125cb4u: goto label_125cb4;
        case 0x125cb8u: goto label_125cb8;
        case 0x125cbcu: goto label_125cbc;
        case 0x125cc0u: goto label_125cc0;
        case 0x125cc4u: goto label_125cc4;
        case 0x125cc8u: goto label_125cc8;
        case 0x125cccu: goto label_125ccc;
        case 0x125cd0u: goto label_125cd0;
        case 0x125cd4u: goto label_125cd4;
        case 0x125cd8u: goto label_125cd8;
        case 0x125cdcu: goto label_125cdc;
        case 0x125ce0u: goto label_125ce0;
        case 0x125ce4u: goto label_125ce4;
        case 0x125ce8u: goto label_125ce8;
        case 0x125cecu: goto label_125cec;
        case 0x125cf0u: goto label_125cf0;
        case 0x125cf4u: goto label_125cf4;
        case 0x125cf8u: goto label_125cf8;
        case 0x125cfcu: goto label_125cfc;
        case 0x125d00u: goto label_125d00;
        case 0x125d04u: goto label_125d04;
        case 0x125d08u: goto label_125d08;
        case 0x125d0cu: goto label_125d0c;
        case 0x125d10u: goto label_125d10;
        case 0x125d14u: goto label_125d14;
        case 0x125d18u: goto label_125d18;
        case 0x125d1cu: goto label_125d1c;
        case 0x125d20u: goto label_125d20;
        case 0x125d24u: goto label_125d24;
        case 0x125d28u: goto label_125d28;
        case 0x125d2cu: goto label_125d2c;
        case 0x125d30u: goto label_125d30;
        case 0x125d34u: goto label_125d34;
        case 0x125d38u: goto label_125d38;
        case 0x125d3cu: goto label_125d3c;
        case 0x125d40u: goto label_125d40;
        case 0x125d44u: goto label_125d44;
        case 0x125d48u: goto label_125d48;
        case 0x125d4cu: goto label_125d4c;
        case 0x125d50u: goto label_125d50;
        case 0x125d54u: goto label_125d54;
        case 0x125d58u: goto label_125d58;
        case 0x125d5cu: goto label_125d5c;
        case 0x125d60u: goto label_125d60;
        case 0x125d64u: goto label_125d64;
        case 0x125d68u: goto label_125d68;
        case 0x125d6cu: goto label_125d6c;
        case 0x125d70u: goto label_125d70;
        case 0x125d74u: goto label_125d74;
        case 0x125d78u: goto label_125d78;
        case 0x125d7cu: goto label_125d7c;
        case 0x125d80u: goto label_125d80;
        case 0x125d84u: goto label_125d84;
        case 0x125d88u: goto label_125d88;
        case 0x125d8cu: goto label_125d8c;
        case 0x125d90u: goto label_125d90;
        case 0x125d94u: goto label_125d94;
        case 0x125d98u: goto label_125d98;
        case 0x125d9cu: goto label_125d9c;
        case 0x125da0u: goto label_125da0;
        case 0x125da4u: goto label_125da4;
        case 0x125da8u: goto label_125da8;
        case 0x125dacu: goto label_125dac;
        case 0x125db0u: goto label_125db0;
        case 0x125db4u: goto label_125db4;
        default: break;
    }

    ctx->pc = 0x1256e0u;

label_1256e0:
    // 0x1256e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1256e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1256e4:
    // 0x1256e4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1256e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1256e8:
    // 0x1256e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1256e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1256ec:
    // 0x1256ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1256ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1256f0:
    // 0x1256f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1256f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1256f4:
    // 0x1256f4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1256f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1256f8:
    // 0x1256f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1256f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1256fc:
    // 0x1256fc: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x1256fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_125700:
    // 0x125700: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125704:
    // 0x125704: 0xc05cdd8  jal         func_173760
label_125708:
    if (ctx->pc == 0x125708u) {
        ctx->pc = 0x12570Cu;
        goto label_12570c;
    }
    ctx->pc = 0x125704u;
    SET_GPR_U32(ctx, 31, 0x12570Cu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x125704u, 0x12570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12570Cu;
label_12570c:
    // 0x12570c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x12570cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_125710:
    // 0x125710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125714:
    // 0x125714: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x125714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125718:
    // 0x125718: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x125718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_12571c:
    // 0x12571c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x12571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_125720:
    // 0x125720: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x125720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_125724:
    // 0x125724: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x125724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_125728:
    // 0x125728: 0xc05cc90  jal         func_173240
label_12572c:
    if (ctx->pc == 0x12572Cu) {
        ctx->pc = 0x125730u;
        goto label_125730;
    }
    ctx->pc = 0x125728u;
    SET_GPR_U32(ctx, 31, 0x125730u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x125728u, 0x125730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125730u;
label_125730:
    // 0x125730: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x125730u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_125734:
    // 0x125734: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x125734u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_125738:
    // 0x125738: 0x10200198  beqz        $at, . + 4 + (0x198 << 2)
label_12573c:
    if (ctx->pc == 0x12573Cu) {
        ctx->pc = 0x125740u;
        goto label_125740;
    }
    ctx->pc = 0x125738u;
    {
        const bool branch_taken_0x125738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125738) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125740u;
label_125740:
    // 0x125740: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x125740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_125744:
    // 0x125744: 0x2464e1f0  addiu       $a0, $v1, -0x1E10
    ctx->pc = 0x125744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959600));
label_125748:
    // 0x125748: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x125748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_12574c:
    // 0x12574c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12574cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_125750:
    // 0x125750: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x125750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125754:
    // 0x125754: 0x600008  jr          $v1
label_125758:
    if (ctx->pc == 0x125758u) {
        ctx->pc = 0x12575Cu;
        goto label_12575c;
    }
    ctx->pc = 0x125754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125754u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12575Cu;
label_12575c:
    // 0x12575c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_125760:
    // 0x125760: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x125760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_125764:
    // 0x125764: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_125768:
    if (ctx->pc == 0x125768u) {
        ctx->pc = 0x12576Cu;
        goto label_12576c;
    }
    ctx->pc = 0x125764u;
    {
        const bool branch_taken_0x125764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x125764) {
            ctx->pc = 0x12577Cu;
            goto label_12577c;
        }
    }
    ctx->pc = 0x12576Cu;
label_12576c:
    // 0x12576c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125770:
    // 0x125770: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x125770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_125774:
    // 0x125774: 0x10600189  beqz        $v1, . + 4 + (0x189 << 2)
label_125778:
    if (ctx->pc == 0x125778u) {
        ctx->pc = 0x12577Cu;
        goto label_12577c;
    }
    ctx->pc = 0x125774u;
    {
        const bool branch_taken_0x125774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125774) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x12577Cu;
label_12577c:
    // 0x12577c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12577cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_125780:
    // 0x125780: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_125784:
    if (ctx->pc == 0x125784u) {
        ctx->pc = 0x125788u;
        goto label_125788;
    }
    ctx->pc = 0x125780u;
    {
        const bool branch_taken_0x125780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125780) {
            ctx->pc = 0x1257C4u;
            goto label_1257c4;
        }
    }
    ctx->pc = 0x125788u;
label_125788:
    // 0x125788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12578c:
    // 0x12578c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125790:
    // 0x125790: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125794:
    // 0x125794: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x125794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_125798:
    // 0x125798: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12579c:
    // 0x12579c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12579cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1257a0:
    // 0x1257a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1257a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1257a4:
    // 0x1257a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1257a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1257a8:
    // 0x1257a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1257a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1257ac:
    // 0x1257ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1257acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1257b0:
    // 0x1257b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1257b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1257b4:
    // 0x1257b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1257b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1257b8:
    // 0x1257b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1257b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1257bc:
    // 0x1257bc: 0x10000177  b           . + 4 + (0x177 << 2)
label_1257c0:
    if (ctx->pc == 0x1257C0u) {
        ctx->pc = 0x1257C4u;
        goto label_1257c4;
    }
    ctx->pc = 0x1257BCu;
    {
        const bool branch_taken_0x1257bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1257bc) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x1257C4u;
label_1257c4:
    // 0x1257c4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1257c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1257c8:
    // 0x1257c8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1257c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1257cc:
    // 0x1257cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1257d0:
    if (ctx->pc == 0x1257D0u) {
        ctx->pc = 0x1257D4u;
        goto label_1257d4;
    }
    ctx->pc = 0x1257CCu;
    {
        const bool branch_taken_0x1257cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1257cc) {
            ctx->pc = 0x1257ECu;
            goto label_1257ec;
        }
    }
    ctx->pc = 0x1257D4u;
label_1257d4:
    // 0x1257d4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1257d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1257d8:
    // 0x1257d8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1257d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1257dc:
    // 0x1257dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1257dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1257e0:
    // 0x1257e0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1257e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1257e4:
    // 0x1257e4: 0x1000016d  b           . + 4 + (0x16D << 2)
label_1257e8:
    if (ctx->pc == 0x1257E8u) {
        ctx->pc = 0x1257ECu;
        goto label_1257ec;
    }
    ctx->pc = 0x1257E4u;
    {
        const bool branch_taken_0x1257e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1257e4) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x1257ECu;
label_1257ec:
    // 0x1257ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1257ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1257f0:
    // 0x1257f0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1257f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1257f4:
    // 0x1257f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1257f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1257f8:
    // 0x1257f8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1257f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1257fc:
    // 0x1257fc: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
label_125800:
    if (ctx->pc == 0x125800u) {
        ctx->pc = 0x125804u;
        goto label_125804;
    }
    ctx->pc = 0x1257FCu;
    {
        const bool branch_taken_0x1257fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1257fc) {
            ctx->pc = 0x125A68u;
            goto label_125a68;
        }
    }
    ctx->pc = 0x125804u;
label_125804:
    // 0x125804: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125808:
    // 0x125808: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12580c:
    // 0x12580c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x12580cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_125810:
    // 0x125810: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x125810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_125814:
    // 0x125814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125818:
    // 0x125818: 0x0  nop
    ctx->pc = 0x125818u;
    // NOP
label_12581c:
    // 0x12581c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12581cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125820:
    // 0x125820: 0x0  nop
    ctx->pc = 0x125820u;
    // NOP
label_125824:
    // 0x125824: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_125828:
    if (ctx->pc == 0x125828u) {
        ctx->pc = 0x12582Cu;
        goto label_12582c;
    }
    ctx->pc = 0x125824u;
    {
        const bool branch_taken_0x125824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125824) {
            ctx->pc = 0x125870u;
            goto label_125870;
        }
    }
    ctx->pc = 0x12582Cu;
label_12582c:
    // 0x12582c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12582cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_125830:
    // 0x125830: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_125834:
    if (ctx->pc == 0x125834u) {
        ctx->pc = 0x125838u;
        goto label_125838;
    }
    ctx->pc = 0x125830u;
    {
        const bool branch_taken_0x125830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125830) {
            ctx->pc = 0x125868u;
            goto label_125868;
        }
    }
    ctx->pc = 0x125838u;
label_125838:
    // 0x125838: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12583c:
    // 0x12583c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125840:
    // 0x125840: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125844:
    // 0x125844: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x125844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_125848:
    // 0x125848: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12584c:
    // 0x12584c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12584cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125850:
    // 0x125850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125854:
    // 0x125854: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125858:
    // 0x125858: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12585c:
    // 0x12585c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12585cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125860:
    // 0x125860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125864:
    // 0x125864: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125868:
    // 0x125868: 0x1000014c  b           . + 4 + (0x14C << 2)
label_12586c:
    if (ctx->pc == 0x12586Cu) {
        ctx->pc = 0x125870u;
        goto label_125870;
    }
    ctx->pc = 0x125868u;
    {
        const bool branch_taken_0x125868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125868) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125870u;
label_125870:
    // 0x125870: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125874:
    // 0x125874: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125878:
    // 0x125878: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x125878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
label_12587c:
    // 0x12587c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x12587cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_125880:
    // 0x125880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125884:
    // 0x125884: 0x0  nop
    ctx->pc = 0x125884u;
    // NOP
label_125888:
    // 0x125888: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12588c:
    // 0x12588c: 0x0  nop
    ctx->pc = 0x12588cu;
    // NOP
label_125890:
    // 0x125890: 0x45000142  bc1f        . + 4 + (0x142 << 2)
label_125894:
    if (ctx->pc == 0x125894u) {
        ctx->pc = 0x125898u;
        goto label_125898;
    }
    ctx->pc = 0x125890u;
    {
        const bool branch_taken_0x125890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125890) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125898u;
label_125898:
    // 0x125898: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12589c:
    // 0x12589c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1258a0:
    // 0x1258a0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1258a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_1258a4:
    // 0x1258a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1258a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1258a8:
    // 0x1258a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1258a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1258ac:
    // 0x1258ac: 0x0  nop
    ctx->pc = 0x1258acu;
    // NOP
label_1258b0:
    // 0x1258b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1258b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1258b4:
    // 0x1258b4: 0x0  nop
    ctx->pc = 0x1258b4u;
    // NOP
label_1258b8:
    // 0x1258b8: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_1258bc:
    if (ctx->pc == 0x1258BCu) {
        ctx->pc = 0x1258C0u;
        goto label_1258c0;
    }
    ctx->pc = 0x1258B8u;
    {
        const bool branch_taken_0x1258b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1258b8) {
            ctx->pc = 0x125990u;
            goto label_125990;
        }
    }
    ctx->pc = 0x1258C0u;
label_1258c0:
    // 0x1258c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1258c4:
    // 0x1258c4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1258c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1258c8:
    // 0x1258c8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1258c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1258cc:
    // 0x1258cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1258d0:
    if (ctx->pc == 0x1258D0u) {
        ctx->pc = 0x1258D4u;
        goto label_1258d4;
    }
    ctx->pc = 0x1258CCu;
    {
        const bool branch_taken_0x1258cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1258cc) {
            ctx->pc = 0x1258E4u;
            goto label_1258e4;
        }
    }
    ctx->pc = 0x1258D4u;
label_1258d4:
    // 0x1258d4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1258d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1258d8:
    // 0x1258d8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1258d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1258dc:
    // 0x1258dc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1258e0:
    if (ctx->pc == 0x1258E0u) {
        ctx->pc = 0x1258E4u;
        goto label_1258e4;
    }
    ctx->pc = 0x1258DCu;
    {
        const bool branch_taken_0x1258dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1258dc) {
            ctx->pc = 0x125990u;
            goto label_125990;
        }
    }
    ctx->pc = 0x1258E4u;
label_1258e4:
    // 0x1258e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1258e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1258e8:
    // 0x1258e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1258e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1258ec:
    // 0x1258ec: 0xc05d25c  jal         func_174970
label_1258f0:
    if (ctx->pc == 0x1258F0u) {
        ctx->pc = 0x1258F4u;
        goto label_1258f4;
    }
    ctx->pc = 0x1258ECu;
    SET_GPR_U32(ctx, 31, 0x1258F4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1258ECu, 0x1258F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1258F4u;
label_1258f4:
    // 0x1258f4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1258f8:
    if (ctx->pc == 0x1258F8u) {
        ctx->pc = 0x1258FCu;
        goto label_1258fc;
    }
    ctx->pc = 0x1258F4u;
    {
        const bool branch_taken_0x1258f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1258f4) {
            ctx->pc = 0x125990u;
            goto label_125990;
        }
    }
    ctx->pc = 0x1258FCu;
label_1258fc:
    // 0x1258fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1258fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125900:
    // 0x125900: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x125900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_125904:
    // 0x125904: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x125904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_125908:
    // 0x125908: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x125908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12590c:
    // 0x12590c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_125910:
    // 0x125910: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x125910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125914:
    // 0x125914: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x125914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_125918:
    // 0x125918: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x125918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12591c:
    // 0x12591c: 0x0  nop
    ctx->pc = 0x12591cu;
    // NOP
label_125920:
    // 0x125920: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_125924:
    if (ctx->pc == 0x125924u) {
        ctx->pc = 0x125928u;
        goto label_125928;
    }
    ctx->pc = 0x125920u;
    {
        const bool branch_taken_0x125920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125920) {
            ctx->pc = 0x125990u;
            goto label_125990;
        }
    }
    ctx->pc = 0x125928u;
label_125928:
    // 0x125928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12592c:
    // 0x12592c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_125930:
    // 0x125930: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x125930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_125934:
    // 0x125934: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x125934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125938:
    // 0x125938: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x125938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_12593c:
    // 0x12593c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12593cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125940:
    // 0x125940: 0x0  nop
    ctx->pc = 0x125940u;
    // NOP
label_125944:
    // 0x125944: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x125944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_125948:
    // 0x125948: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x125948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12594c:
    // 0x12594c: 0x0  nop
    ctx->pc = 0x12594cu;
    // NOP
label_125950:
    // 0x125950: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_125954:
    if (ctx->pc == 0x125954u) {
        ctx->pc = 0x125958u;
        goto label_125958;
    }
    ctx->pc = 0x125950u;
    {
        const bool branch_taken_0x125950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125950) {
            ctx->pc = 0x125990u;
            goto label_125990;
        }
    }
    ctx->pc = 0x125958u;
label_125958:
    // 0x125958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12595c:
    // 0x12595c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125960:
    // 0x125960: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125964:
    // 0x125964: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x125964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_125968:
    // 0x125968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12596c:
    // 0x12596c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12596cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125970:
    // 0x125970: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125974:
    // 0x125974: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125978:
    // 0x125978: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12597c:
    // 0x12597c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12597cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125980:
    // 0x125980: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125984:
    // 0x125984: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125988:
    // 0x125988: 0x10000104  b           . + 4 + (0x104 << 2)
label_12598c:
    if (ctx->pc == 0x12598Cu) {
        ctx->pc = 0x125990u;
        goto label_125990;
    }
    ctx->pc = 0x125988u;
    {
        const bool branch_taken_0x125988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125988) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125990u;
label_125990:
    // 0x125990: 0xc067694  jal         func_19DA50
label_125994:
    if (ctx->pc == 0x125994u) {
        ctx->pc = 0x125998u;
        goto label_125998;
    }
    ctx->pc = 0x125990u;
    SET_GPR_U32(ctx, 31, 0x125998u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x125990u, 0x125998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125998u;
label_125998:
    // 0x125998: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x125998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12599c:
    // 0x12599c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12599cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1259a0:
    // 0x1259a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1259a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1259a4:
    // 0x1259a4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1259a8:
    if (ctx->pc == 0x1259A8u) {
        ctx->pc = 0x1259ACu;
        goto label_1259ac;
    }
    ctx->pc = 0x1259A4u;
    {
        const bool branch_taken_0x1259a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1259a4) {
            ctx->pc = 0x1259BCu;
            goto label_1259bc;
        }
    }
    ctx->pc = 0x1259ACu;
label_1259ac:
    // 0x1259ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1259b0:
    if (ctx->pc == 0x1259B0u) {
        ctx->pc = 0x1259B4u;
        goto label_1259b4;
    }
    ctx->pc = 0x1259ACu;
    {
        const bool branch_taken_0x1259ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259ac) {
            ctx->pc = 0x1259BCu;
            goto label_1259bc;
        }
    }
    ctx->pc = 0x1259B4u;
label_1259b4:
    // 0x1259b4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1259b8:
    if (ctx->pc == 0x1259B8u) {
        ctx->pc = 0x1259BCu;
        goto label_1259bc;
    }
    ctx->pc = 0x1259B4u;
    {
        const bool branch_taken_0x1259b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259b4) {
            ctx->pc = 0x125A60u;
            goto label_125a60;
        }
    }
    ctx->pc = 0x1259BCu;
label_1259bc:
    // 0x1259bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1259bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1259c0:
    // 0x1259c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1259c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1259c4:
    // 0x1259c4: 0xc05d25c  jal         func_174970
label_1259c8:
    if (ctx->pc == 0x1259C8u) {
        ctx->pc = 0x1259CCu;
        goto label_1259cc;
    }
    ctx->pc = 0x1259C4u;
    SET_GPR_U32(ctx, 31, 0x1259CCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1259C4u, 0x1259CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1259CCu;
label_1259cc:
    // 0x1259cc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1259d0:
    if (ctx->pc == 0x1259D0u) {
        ctx->pc = 0x1259D4u;
        goto label_1259d4;
    }
    ctx->pc = 0x1259CCu;
    {
        const bool branch_taken_0x1259cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259cc) {
            ctx->pc = 0x125A60u;
            goto label_125a60;
        }
    }
    ctx->pc = 0x1259D4u;
label_1259d4:
    // 0x1259d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1259d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1259d8:
    // 0x1259d8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1259d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1259dc:
    // 0x1259dc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1259dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1259e0:
    // 0x1259e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1259e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1259e4:
    // 0x1259e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1259e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1259e8:
    // 0x1259e8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1259e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1259ec:
    // 0x1259ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1259ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1259f0:
    // 0x1259f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1259f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1259f4:
    // 0x1259f4: 0x0  nop
    ctx->pc = 0x1259f4u;
    // NOP
label_1259f8:
    // 0x1259f8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1259fc:
    if (ctx->pc == 0x1259FCu) {
        ctx->pc = 0x125A00u;
        goto label_125a00;
    }
    ctx->pc = 0x1259F8u;
    {
        const bool branch_taken_0x1259f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1259f8) {
            ctx->pc = 0x125A60u;
            goto label_125a60;
        }
    }
    ctx->pc = 0x125A00u;
label_125a00:
    // 0x125a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125a04:
    // 0x125a04: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x125a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_125a08:
    // 0x125a08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x125a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_125a0c:
    // 0x125a0c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x125a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125a10:
    // 0x125a10: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x125a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_125a14:
    // 0x125a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125a18:
    // 0x125a18: 0x0  nop
    ctx->pc = 0x125a18u;
    // NOP
label_125a1c:
    // 0x125a1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x125a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_125a20:
    // 0x125a20: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x125a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125a24:
    // 0x125a24: 0x0  nop
    ctx->pc = 0x125a24u;
    // NOP
label_125a28:
    // 0x125a28: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_125a2c:
    if (ctx->pc == 0x125A2Cu) {
        ctx->pc = 0x125A30u;
        goto label_125a30;
    }
    ctx->pc = 0x125A28u;
    {
        const bool branch_taken_0x125a28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125a28) {
            ctx->pc = 0x125A60u;
            goto label_125a60;
        }
    }
    ctx->pc = 0x125A30u;
label_125a30:
    // 0x125a30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125a34:
    // 0x125a34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125a38:
    // 0x125a38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125a3c:
    // 0x125a3c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x125a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_125a40:
    // 0x125a40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125a44:
    // 0x125a44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125a48:
    // 0x125a48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125a4c:
    // 0x125a4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125a50:
    // 0x125a50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125a54:
    // 0x125a54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125a54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125a58:
    // 0x125a58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125a5c:
    // 0x125a5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125a60:
    // 0x125a60: 0x100000ce  b           . + 4 + (0xCE << 2)
label_125a64:
    if (ctx->pc == 0x125A64u) {
        ctx->pc = 0x125A68u;
        goto label_125a68;
    }
    ctx->pc = 0x125A60u;
    {
        const bool branch_taken_0x125a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a60) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125A68u;
label_125a68:
    // 0x125a68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125a6c:
    // 0x125a6c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125a70:
    // 0x125a70: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_125a74:
    // 0x125a74: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_125a78:
    // 0x125a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125a7c:
    // 0x125a7c: 0x0  nop
    ctx->pc = 0x125a7cu;
    // NOP
label_125a80:
    // 0x125a80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125a84:
    // 0x125a84: 0x0  nop
    ctx->pc = 0x125a84u;
    // NOP
label_125a88:
    // 0x125a88: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_125a8c:
    if (ctx->pc == 0x125A8Cu) {
        ctx->pc = 0x125A90u;
        goto label_125a90;
    }
    ctx->pc = 0x125A88u;
    {
        const bool branch_taken_0x125a88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125a88) {
            ctx->pc = 0x125B98u;
            goto label_125b98;
        }
    }
    ctx->pc = 0x125A90u;
label_125a90:
    // 0x125a90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_125a94:
    // 0x125a94: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x125a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_125a98:
    // 0x125a98: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x125a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_125a9c:
    // 0x125a9c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_125aa0:
    if (ctx->pc == 0x125AA0u) {
        ctx->pc = 0x125AA4u;
        goto label_125aa4;
    }
    ctx->pc = 0x125A9Cu;
    {
        const bool branch_taken_0x125a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a9c) {
            ctx->pc = 0x125ADCu;
            goto label_125adc;
        }
    }
    ctx->pc = 0x125AA4u;
label_125aa4:
    // 0x125aa4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125aa8:
    // 0x125aa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125aac:
    // 0x125aac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125ab0:
    // 0x125ab0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125ab4:
    // 0x125ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125ab8:
    // 0x125ab8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125abc:
    // 0x125abc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125ac0:
    // 0x125ac0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125ac4:
    // 0x125ac4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125ac8:
    // 0x125ac8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125acc:
    // 0x125acc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125ad0:
    // 0x125ad0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125ad4:
    // 0x125ad4: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_125ad8:
    if (ctx->pc == 0x125AD8u) {
        ctx->pc = 0x125ADCu;
        goto label_125adc;
    }
    ctx->pc = 0x125AD4u;
    {
        const bool branch_taken_0x125ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ad4) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125ADCu;
label_125adc:
    // 0x125adc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x125adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_125ae0:
    // 0x125ae0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_125ae4:
    if (ctx->pc == 0x125AE4u) {
        ctx->pc = 0x125AE8u;
        goto label_125ae8;
    }
    ctx->pc = 0x125AE0u;
    {
        const bool branch_taken_0x125ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ae0) {
            ctx->pc = 0x125B90u;
            goto label_125b90;
        }
    }
    ctx->pc = 0x125AE8u;
label_125ae8:
    // 0x125ae8: 0xc067694  jal         func_19DA50
label_125aec:
    if (ctx->pc == 0x125AECu) {
        ctx->pc = 0x125AF0u;
        goto label_125af0;
    }
    ctx->pc = 0x125AE8u;
    SET_GPR_U32(ctx, 31, 0x125AF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x125AE8u, 0x125AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125AF0u;
label_125af0:
    // 0x125af0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x125af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_125af4:
    // 0x125af4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x125af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_125af8:
    // 0x125af8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_125afc:
    if (ctx->pc == 0x125AFCu) {
        ctx->pc = 0x125B00u;
        goto label_125b00;
    }
    ctx->pc = 0x125AF8u;
    {
        const bool branch_taken_0x125af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125af8) {
            ctx->pc = 0x125B60u;
            goto label_125b60;
        }
    }
    ctx->pc = 0x125B00u;
label_125b00:
    // 0x125b00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b04:
    // 0x125b04: 0xc04d8bc  jal         func_1362F0
label_125b08:
    if (ctx->pc == 0x125B08u) {
        ctx->pc = 0x125B0Cu;
        goto label_125b0c;
    }
    ctx->pc = 0x125B04u;
    SET_GPR_U32(ctx, 31, 0x125B0Cu);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x125B04u, 0x125B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B0Cu;
label_125b0c:
    // 0x125b0c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_125b10:
    if (ctx->pc == 0x125B10u) {
        ctx->pc = 0x125B14u;
        goto label_125b14;
    }
    ctx->pc = 0x125B0Cu;
    {
        const bool branch_taken_0x125b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125b0c) {
            ctx->pc = 0x125B90u;
            goto label_125b90;
        }
    }
    ctx->pc = 0x125B14u;
label_125b14:
    // 0x125b14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125b18:
    // 0x125b18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b1c:
    // 0x125b1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125b20:
    // 0x125b20: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x125b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_125b24:
    // 0x125b24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b28:
    // 0x125b28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125b2c:
    // 0x125b2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b30:
    // 0x125b30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125b34:
    // 0x125b34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b38:
    // 0x125b38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125b38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125b3c:
    // 0x125b3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b40:
    // 0x125b40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125b44:
    // 0x125b44: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x125b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b48:
    // 0x125b48: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x125b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_125b4c:
    // 0x125b4c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x125b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_125b50:
    // 0x125b50: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x125b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_125b54:
    // 0x125b54: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x125b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_125b58:
    // 0x125b58: 0x1000000d  b           . + 4 + (0xD << 2)
label_125b5c:
    if (ctx->pc == 0x125B5Cu) {
        ctx->pc = 0x125B60u;
        goto label_125b60;
    }
    ctx->pc = 0x125B58u;
    {
        const bool branch_taken_0x125b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125b58) {
            ctx->pc = 0x125B90u;
            goto label_125b90;
        }
    }
    ctx->pc = 0x125B60u;
label_125b60:
    // 0x125b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125b64:
    // 0x125b64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b68:
    // 0x125b68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125b68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125b6c:
    // 0x125b6c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125b70:
    // 0x125b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b74:
    // 0x125b74: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125b78:
    // 0x125b78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b7c:
    // 0x125b7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125b80:
    // 0x125b80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b84:
    // 0x125b84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125b88:
    // 0x125b88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b8c:
    // 0x125b8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125b90:
    // 0x125b90: 0x10000082  b           . + 4 + (0x82 << 2)
label_125b94:
    if (ctx->pc == 0x125B94u) {
        ctx->pc = 0x125B98u;
        goto label_125b98;
    }
    ctx->pc = 0x125B90u;
    {
        const bool branch_taken_0x125b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125b90) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125B98u;
label_125b98:
    // 0x125b98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125b9c:
    // 0x125b9c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125ba0:
    // 0x125ba0: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x125ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
label_125ba4:
    // 0x125ba4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x125ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_125ba8:
    // 0x125ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125bac:
    // 0x125bac: 0x0  nop
    ctx->pc = 0x125bacu;
    // NOP
label_125bb0:
    // 0x125bb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125bb4:
    // 0x125bb4: 0x0  nop
    ctx->pc = 0x125bb4u;
    // NOP
label_125bb8:
    // 0x125bb8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_125bbc:
    if (ctx->pc == 0x125BBCu) {
        ctx->pc = 0x125BC0u;
        goto label_125bc0;
    }
    ctx->pc = 0x125BB8u;
    {
        const bool branch_taken_0x125bb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125bb8) {
            ctx->pc = 0x125C04u;
            goto label_125c04;
        }
    }
    ctx->pc = 0x125BC0u;
label_125bc0:
    // 0x125bc0: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x125bc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_125bc4:
    // 0x125bc4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_125bc8:
    if (ctx->pc == 0x125BC8u) {
        ctx->pc = 0x125BCCu;
        goto label_125bcc;
    }
    ctx->pc = 0x125BC4u;
    {
        const bool branch_taken_0x125bc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125bc4) {
            ctx->pc = 0x125BFCu;
            goto label_125bfc;
        }
    }
    ctx->pc = 0x125BCCu;
label_125bcc:
    // 0x125bcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125bd0:
    // 0x125bd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125bd4:
    // 0x125bd4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125bd8:
    // 0x125bd8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_125bdc:
    // 0x125bdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125be0:
    // 0x125be0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125be4:
    // 0x125be4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125be8:
    // 0x125be8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125bec:
    // 0x125bec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125bf0:
    // 0x125bf0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125bf4:
    // 0x125bf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125bf8:
    // 0x125bf8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125bfc:
    // 0x125bfc: 0x10000067  b           . + 4 + (0x67 << 2)
label_125c00:
    if (ctx->pc == 0x125C00u) {
        ctx->pc = 0x125C04u;
        goto label_125c04;
    }
    ctx->pc = 0x125BFCu;
    {
        const bool branch_taken_0x125bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125bfc) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125C04u;
label_125c04:
    // 0x125c04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125c08:
    // 0x125c08: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125c0c:
    // 0x125c0c: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x125c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_125c10:
    // 0x125c10: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x125c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_125c14:
    // 0x125c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125c18:
    // 0x125c18: 0x0  nop
    ctx->pc = 0x125c18u;
    // NOP
label_125c1c:
    // 0x125c1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125c20:
    // 0x125c20: 0x0  nop
    ctx->pc = 0x125c20u;
    // NOP
label_125c24:
    // 0x125c24: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
label_125c28:
    if (ctx->pc == 0x125C28u) {
        ctx->pc = 0x125C2Cu;
        goto label_125c2c;
    }
    ctx->pc = 0x125C24u;
    {
        const bool branch_taken_0x125c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125c24) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125C2Cu;
label_125c2c:
    // 0x125c2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x125c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125c30:
    // 0x125c30: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x125c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125c34:
    // 0x125c34: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x125c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_125c38:
    // 0x125c38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x125c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_125c3c:
    // 0x125c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125c40:
    // 0x125c40: 0x0  nop
    ctx->pc = 0x125c40u;
    // NOP
label_125c44:
    // 0x125c44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x125c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125c48:
    // 0x125c48: 0x0  nop
    ctx->pc = 0x125c48u;
    // NOP
label_125c4c:
    // 0x125c4c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_125c50:
    if (ctx->pc == 0x125C50u) {
        ctx->pc = 0x125C54u;
        goto label_125c54;
    }
    ctx->pc = 0x125C4Cu;
    {
        const bool branch_taken_0x125c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125c4c) {
            ctx->pc = 0x125CC8u;
            goto label_125cc8;
        }
    }
    ctx->pc = 0x125C54u;
label_125c54:
    // 0x125c54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x125c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_125c58:
    // 0x125c58: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x125c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_125c5c:
    // 0x125c5c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x125c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_125c60:
    // 0x125c60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_125c64:
    if (ctx->pc == 0x125C64u) {
        ctx->pc = 0x125C68u;
        goto label_125c68;
    }
    ctx->pc = 0x125C60u;
    {
        const bool branch_taken_0x125c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125c60) {
            ctx->pc = 0x125C78u;
            goto label_125c78;
        }
    }
    ctx->pc = 0x125C68u;
label_125c68:
    // 0x125c68: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x125c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_125c6c:
    // 0x125c6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x125c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_125c70:
    // 0x125c70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_125c74:
    if (ctx->pc == 0x125C74u) {
        ctx->pc = 0x125C78u;
        goto label_125c78;
    }
    ctx->pc = 0x125C70u;
    {
        const bool branch_taken_0x125c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125c70) {
            ctx->pc = 0x125CC8u;
            goto label_125cc8;
        }
    }
    ctx->pc = 0x125C78u;
label_125c78:
    // 0x125c78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125c7c:
    // 0x125c7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x125c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125c80:
    // 0x125c80: 0xc05d25c  jal         func_174970
label_125c84:
    if (ctx->pc == 0x125C84u) {
        ctx->pc = 0x125C88u;
        goto label_125c88;
    }
    ctx->pc = 0x125C80u;
    SET_GPR_U32(ctx, 31, 0x125C88u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x125C80u, 0x125C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C88u;
label_125c88:
    // 0x125c88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_125c8c:
    if (ctx->pc == 0x125C8Cu) {
        ctx->pc = 0x125C90u;
        goto label_125c90;
    }
    ctx->pc = 0x125C88u;
    {
        const bool branch_taken_0x125c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125c88) {
            ctx->pc = 0x125CC8u;
            goto label_125cc8;
        }
    }
    ctx->pc = 0x125C90u;
label_125c90:
    // 0x125c90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125c94:
    // 0x125c94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125c98:
    // 0x125c98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125c9c:
    // 0x125c9c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x125c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_125ca0:
    // 0x125ca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125ca4:
    // 0x125ca4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125ca8:
    // 0x125ca8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125cac:
    // 0x125cac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125cb0:
    // 0x125cb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125cb4:
    // 0x125cb4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125cb8:
    // 0x125cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125cbc:
    // 0x125cbc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125cc0:
    // 0x125cc0: 0x10000036  b           . + 4 + (0x36 << 2)
label_125cc4:
    if (ctx->pc == 0x125CC4u) {
        ctx->pc = 0x125CC8u;
        goto label_125cc8;
    }
    ctx->pc = 0x125CC0u;
    {
        const bool branch_taken_0x125cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125cc0) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125CC8u;
label_125cc8:
    // 0x125cc8: 0xc067694  jal         func_19DA50
label_125ccc:
    if (ctx->pc == 0x125CCCu) {
        ctx->pc = 0x125CD0u;
        goto label_125cd0;
    }
    ctx->pc = 0x125CC8u;
    SET_GPR_U32(ctx, 31, 0x125CD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x125CC8u, 0x125CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CD0u;
label_125cd0:
    // 0x125cd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x125cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_125cd4:
    // 0x125cd4: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x125cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_125cd8:
    // 0x125cd8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x125cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_125cdc:
    // 0x125cdc: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_125ce0:
    if (ctx->pc == 0x125CE0u) {
        ctx->pc = 0x125CE4u;
        goto label_125ce4;
    }
    ctx->pc = 0x125CDCu;
    {
        const bool branch_taken_0x125cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125cdc) {
            ctx->pc = 0x125D5Cu;
            goto label_125d5c;
        }
    }
    ctx->pc = 0x125CE4u;
label_125ce4:
    // 0x125ce4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_125ce8:
    if (ctx->pc == 0x125CE8u) {
        ctx->pc = 0x125CECu;
        goto label_125cec;
    }
    ctx->pc = 0x125CE4u;
    {
        const bool branch_taken_0x125ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ce4) {
            ctx->pc = 0x125CF4u;
            goto label_125cf4;
        }
    }
    ctx->pc = 0x125CECu;
label_125cec:
    // 0x125cec: 0x1000001b  b           . + 4 + (0x1B << 2)
label_125cf0:
    if (ctx->pc == 0x125CF0u) {
        ctx->pc = 0x125CF4u;
        goto label_125cf4;
    }
    ctx->pc = 0x125CECu;
    {
        const bool branch_taken_0x125cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125cec) {
            ctx->pc = 0x125D5Cu;
            goto label_125d5c;
        }
    }
    ctx->pc = 0x125CF4u;
label_125cf4:
    // 0x125cf4: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
label_125cf8:
    if (ctx->pc == 0x125CF8u) {
        ctx->pc = 0x125CFCu;
        goto label_125cfc;
    }
    ctx->pc = 0x125CF4u;
    {
        const bool branch_taken_0x125cf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x125cf4) {
            ctx->pc = 0x125D54u;
            goto label_125d54;
        }
    }
    ctx->pc = 0x125CFCu;
label_125cfc:
    // 0x125cfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d00:
    // 0x125d00: 0xc04d8bc  jal         func_1362F0
label_125d04:
    if (ctx->pc == 0x125D04u) {
        ctx->pc = 0x125D08u;
        goto label_125d08;
    }
    ctx->pc = 0x125D00u;
    SET_GPR_U32(ctx, 31, 0x125D08u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x125D00u, 0x125D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D08u;
label_125d08:
    // 0x125d08: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_125d0c:
    if (ctx->pc == 0x125D0Cu) {
        ctx->pc = 0x125D10u;
        goto label_125d10;
    }
    ctx->pc = 0x125D08u;
    {
        const bool branch_taken_0x125d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d08) {
            ctx->pc = 0x125D54u;
            goto label_125d54;
        }
    }
    ctx->pc = 0x125D10u;
label_125d10:
    // 0x125d10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125d14:
    // 0x125d14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d18:
    // 0x125d18: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125d18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125d1c:
    // 0x125d1c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x125d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_125d20:
    // 0x125d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d24:
    // 0x125d24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125d28:
    // 0x125d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d2c:
    // 0x125d2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125d30:
    // 0x125d30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d34:
    // 0x125d34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125d38:
    // 0x125d38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d3c:
    // 0x125d3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125d40:
    // 0x125d40: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x125d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d44:
    // 0x125d44: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x125d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_125d48:
    // 0x125d48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x125d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_125d4c:
    // 0x125d4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x125d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_125d50:
    // 0x125d50: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x125d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_125d54:
    // 0x125d54: 0x10000011  b           . + 4 + (0x11 << 2)
label_125d58:
    if (ctx->pc == 0x125D58u) {
        ctx->pc = 0x125D5Cu;
        goto label_125d5c;
    }
    ctx->pc = 0x125D54u;
    {
        const bool branch_taken_0x125d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d54) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125D5Cu;
label_125d5c:
    // 0x125d5c: 0x1000000f  b           . + 4 + (0xF << 2)
label_125d60:
    if (ctx->pc == 0x125D60u) {
        ctx->pc = 0x125D64u;
        goto label_125d64;
    }
    ctx->pc = 0x125D5Cu;
    {
        const bool branch_taken_0x125d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d5c) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125D64u;
label_125d64:
    // 0x125d64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125d68:
    // 0x125d68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d6c:
    // 0x125d6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125d70:
    // 0x125d70: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x125d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_125d74:
    // 0x125d74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d78:
    // 0x125d78: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125d7c:
    // 0x125d7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d80:
    // 0x125d80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125d84:
    // 0x125d84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d88:
    // 0x125d88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125d8c:
    // 0x125d8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125d90:
    // 0x125d90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125d94:
    // 0x125d94: 0x10000001  b           . + 4 + (0x1 << 2)
label_125d98:
    if (ctx->pc == 0x125D98u) {
        ctx->pc = 0x125D9Cu;
        goto label_125d9c;
    }
    ctx->pc = 0x125D94u;
    {
        const bool branch_taken_0x125d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d94) {
            ctx->pc = 0x125D9Cu;
            goto label_125d9c;
        }
    }
    ctx->pc = 0x125D9Cu;
label_125d9c:
    // 0x125d9c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x125d9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125da0:
    // 0x125da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x125da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125da4:
    // 0x125da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_125da8:
    // 0x125da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_125dac:
    // 0x125dac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x125dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_125db0:
    // 0x125db0: 0x3e00008  jr          $ra
label_125db4:
    if (ctx->pc == 0x125DB4u) {
        ctx->pc = 0x125DB8u;
        goto label_fallthrough_0x125db0;
    }
    ctx->pc = 0x125DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125db0:
    ctx->pc = 0x125DB8u;
}
