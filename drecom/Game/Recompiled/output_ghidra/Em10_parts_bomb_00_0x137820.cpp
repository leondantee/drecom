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

// Function: Em10_parts_bomb_00
// Address: 0x137820 - 0x1381a8
void Em10_parts_bomb_00_0x137820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_parts_bomb_00_0x137820");
#endif

    switch (ctx->pc) {
        case 0x137820u: goto label_137820;
        case 0x137824u: goto label_137824;
        case 0x137828u: goto label_137828;
        case 0x13782cu: goto label_13782c;
        case 0x137830u: goto label_137830;
        case 0x137834u: goto label_137834;
        case 0x137838u: goto label_137838;
        case 0x13783cu: goto label_13783c;
        case 0x137840u: goto label_137840;
        case 0x137844u: goto label_137844;
        case 0x137848u: goto label_137848;
        case 0x13784cu: goto label_13784c;
        case 0x137850u: goto label_137850;
        case 0x137854u: goto label_137854;
        case 0x137858u: goto label_137858;
        case 0x13785cu: goto label_13785c;
        case 0x137860u: goto label_137860;
        case 0x137864u: goto label_137864;
        case 0x137868u: goto label_137868;
        case 0x13786cu: goto label_13786c;
        case 0x137870u: goto label_137870;
        case 0x137874u: goto label_137874;
        case 0x137878u: goto label_137878;
        case 0x13787cu: goto label_13787c;
        case 0x137880u: goto label_137880;
        case 0x137884u: goto label_137884;
        case 0x137888u: goto label_137888;
        case 0x13788cu: goto label_13788c;
        case 0x137890u: goto label_137890;
        case 0x137894u: goto label_137894;
        case 0x137898u: goto label_137898;
        case 0x13789cu: goto label_13789c;
        case 0x1378a0u: goto label_1378a0;
        case 0x1378a4u: goto label_1378a4;
        case 0x1378a8u: goto label_1378a8;
        case 0x1378acu: goto label_1378ac;
        case 0x1378b0u: goto label_1378b0;
        case 0x1378b4u: goto label_1378b4;
        case 0x1378b8u: goto label_1378b8;
        case 0x1378bcu: goto label_1378bc;
        case 0x1378c0u: goto label_1378c0;
        case 0x1378c4u: goto label_1378c4;
        case 0x1378c8u: goto label_1378c8;
        case 0x1378ccu: goto label_1378cc;
        case 0x1378d0u: goto label_1378d0;
        case 0x1378d4u: goto label_1378d4;
        case 0x1378d8u: goto label_1378d8;
        case 0x1378dcu: goto label_1378dc;
        case 0x1378e0u: goto label_1378e0;
        case 0x1378e4u: goto label_1378e4;
        case 0x1378e8u: goto label_1378e8;
        case 0x1378ecu: goto label_1378ec;
        case 0x1378f0u: goto label_1378f0;
        case 0x1378f4u: goto label_1378f4;
        case 0x1378f8u: goto label_1378f8;
        case 0x1378fcu: goto label_1378fc;
        case 0x137900u: goto label_137900;
        case 0x137904u: goto label_137904;
        case 0x137908u: goto label_137908;
        case 0x13790cu: goto label_13790c;
        case 0x137910u: goto label_137910;
        case 0x137914u: goto label_137914;
        case 0x137918u: goto label_137918;
        case 0x13791cu: goto label_13791c;
        case 0x137920u: goto label_137920;
        case 0x137924u: goto label_137924;
        case 0x137928u: goto label_137928;
        case 0x13792cu: goto label_13792c;
        case 0x137930u: goto label_137930;
        case 0x137934u: goto label_137934;
        case 0x137938u: goto label_137938;
        case 0x13793cu: goto label_13793c;
        case 0x137940u: goto label_137940;
        case 0x137944u: goto label_137944;
        case 0x137948u: goto label_137948;
        case 0x13794cu: goto label_13794c;
        case 0x137950u: goto label_137950;
        case 0x137954u: goto label_137954;
        case 0x137958u: goto label_137958;
        case 0x13795cu: goto label_13795c;
        case 0x137960u: goto label_137960;
        case 0x137964u: goto label_137964;
        case 0x137968u: goto label_137968;
        case 0x13796cu: goto label_13796c;
        case 0x137970u: goto label_137970;
        case 0x137974u: goto label_137974;
        case 0x137978u: goto label_137978;
        case 0x13797cu: goto label_13797c;
        case 0x137980u: goto label_137980;
        case 0x137984u: goto label_137984;
        case 0x137988u: goto label_137988;
        case 0x13798cu: goto label_13798c;
        case 0x137990u: goto label_137990;
        case 0x137994u: goto label_137994;
        case 0x137998u: goto label_137998;
        case 0x13799cu: goto label_13799c;
        case 0x1379a0u: goto label_1379a0;
        case 0x1379a4u: goto label_1379a4;
        case 0x1379a8u: goto label_1379a8;
        case 0x1379acu: goto label_1379ac;
        case 0x1379b0u: goto label_1379b0;
        case 0x1379b4u: goto label_1379b4;
        case 0x1379b8u: goto label_1379b8;
        case 0x1379bcu: goto label_1379bc;
        case 0x1379c0u: goto label_1379c0;
        case 0x1379c4u: goto label_1379c4;
        case 0x1379c8u: goto label_1379c8;
        case 0x1379ccu: goto label_1379cc;
        case 0x1379d0u: goto label_1379d0;
        case 0x1379d4u: goto label_1379d4;
        case 0x1379d8u: goto label_1379d8;
        case 0x1379dcu: goto label_1379dc;
        case 0x1379e0u: goto label_1379e0;
        case 0x1379e4u: goto label_1379e4;
        case 0x1379e8u: goto label_1379e8;
        case 0x1379ecu: goto label_1379ec;
        case 0x1379f0u: goto label_1379f0;
        case 0x1379f4u: goto label_1379f4;
        case 0x1379f8u: goto label_1379f8;
        case 0x1379fcu: goto label_1379fc;
        case 0x137a00u: goto label_137a00;
        case 0x137a04u: goto label_137a04;
        case 0x137a08u: goto label_137a08;
        case 0x137a0cu: goto label_137a0c;
        case 0x137a10u: goto label_137a10;
        case 0x137a14u: goto label_137a14;
        case 0x137a18u: goto label_137a18;
        case 0x137a1cu: goto label_137a1c;
        case 0x137a20u: goto label_137a20;
        case 0x137a24u: goto label_137a24;
        case 0x137a28u: goto label_137a28;
        case 0x137a2cu: goto label_137a2c;
        case 0x137a30u: goto label_137a30;
        case 0x137a34u: goto label_137a34;
        case 0x137a38u: goto label_137a38;
        case 0x137a3cu: goto label_137a3c;
        case 0x137a40u: goto label_137a40;
        case 0x137a44u: goto label_137a44;
        case 0x137a48u: goto label_137a48;
        case 0x137a4cu: goto label_137a4c;
        case 0x137a50u: goto label_137a50;
        case 0x137a54u: goto label_137a54;
        case 0x137a58u: goto label_137a58;
        case 0x137a5cu: goto label_137a5c;
        case 0x137a60u: goto label_137a60;
        case 0x137a64u: goto label_137a64;
        case 0x137a68u: goto label_137a68;
        case 0x137a6cu: goto label_137a6c;
        case 0x137a70u: goto label_137a70;
        case 0x137a74u: goto label_137a74;
        case 0x137a78u: goto label_137a78;
        case 0x137a7cu: goto label_137a7c;
        case 0x137a80u: goto label_137a80;
        case 0x137a84u: goto label_137a84;
        case 0x137a88u: goto label_137a88;
        case 0x137a8cu: goto label_137a8c;
        case 0x137a90u: goto label_137a90;
        case 0x137a94u: goto label_137a94;
        case 0x137a98u: goto label_137a98;
        case 0x137a9cu: goto label_137a9c;
        case 0x137aa0u: goto label_137aa0;
        case 0x137aa4u: goto label_137aa4;
        case 0x137aa8u: goto label_137aa8;
        case 0x137aacu: goto label_137aac;
        case 0x137ab0u: goto label_137ab0;
        case 0x137ab4u: goto label_137ab4;
        case 0x137ab8u: goto label_137ab8;
        case 0x137abcu: goto label_137abc;
        case 0x137ac0u: goto label_137ac0;
        case 0x137ac4u: goto label_137ac4;
        case 0x137ac8u: goto label_137ac8;
        case 0x137accu: goto label_137acc;
        case 0x137ad0u: goto label_137ad0;
        case 0x137ad4u: goto label_137ad4;
        case 0x137ad8u: goto label_137ad8;
        case 0x137adcu: goto label_137adc;
        case 0x137ae0u: goto label_137ae0;
        case 0x137ae4u: goto label_137ae4;
        case 0x137ae8u: goto label_137ae8;
        case 0x137aecu: goto label_137aec;
        case 0x137af0u: goto label_137af0;
        case 0x137af4u: goto label_137af4;
        case 0x137af8u: goto label_137af8;
        case 0x137afcu: goto label_137afc;
        case 0x137b00u: goto label_137b00;
        case 0x137b04u: goto label_137b04;
        case 0x137b08u: goto label_137b08;
        case 0x137b0cu: goto label_137b0c;
        case 0x137b10u: goto label_137b10;
        case 0x137b14u: goto label_137b14;
        case 0x137b18u: goto label_137b18;
        case 0x137b1cu: goto label_137b1c;
        case 0x137b20u: goto label_137b20;
        case 0x137b24u: goto label_137b24;
        case 0x137b28u: goto label_137b28;
        case 0x137b2cu: goto label_137b2c;
        case 0x137b30u: goto label_137b30;
        case 0x137b34u: goto label_137b34;
        case 0x137b38u: goto label_137b38;
        case 0x137b3cu: goto label_137b3c;
        case 0x137b40u: goto label_137b40;
        case 0x137b44u: goto label_137b44;
        case 0x137b48u: goto label_137b48;
        case 0x137b4cu: goto label_137b4c;
        case 0x137b50u: goto label_137b50;
        case 0x137b54u: goto label_137b54;
        case 0x137b58u: goto label_137b58;
        case 0x137b5cu: goto label_137b5c;
        case 0x137b60u: goto label_137b60;
        case 0x137b64u: goto label_137b64;
        case 0x137b68u: goto label_137b68;
        case 0x137b6cu: goto label_137b6c;
        case 0x137b70u: goto label_137b70;
        case 0x137b74u: goto label_137b74;
        case 0x137b78u: goto label_137b78;
        case 0x137b7cu: goto label_137b7c;
        case 0x137b80u: goto label_137b80;
        case 0x137b84u: goto label_137b84;
        case 0x137b88u: goto label_137b88;
        case 0x137b8cu: goto label_137b8c;
        case 0x137b90u: goto label_137b90;
        case 0x137b94u: goto label_137b94;
        case 0x137b98u: goto label_137b98;
        case 0x137b9cu: goto label_137b9c;
        case 0x137ba0u: goto label_137ba0;
        case 0x137ba4u: goto label_137ba4;
        case 0x137ba8u: goto label_137ba8;
        case 0x137bacu: goto label_137bac;
        case 0x137bb0u: goto label_137bb0;
        case 0x137bb4u: goto label_137bb4;
        case 0x137bb8u: goto label_137bb8;
        case 0x137bbcu: goto label_137bbc;
        case 0x137bc0u: goto label_137bc0;
        case 0x137bc4u: goto label_137bc4;
        case 0x137bc8u: goto label_137bc8;
        case 0x137bccu: goto label_137bcc;
        case 0x137bd0u: goto label_137bd0;
        case 0x137bd4u: goto label_137bd4;
        case 0x137bd8u: goto label_137bd8;
        case 0x137bdcu: goto label_137bdc;
        case 0x137be0u: goto label_137be0;
        case 0x137be4u: goto label_137be4;
        case 0x137be8u: goto label_137be8;
        case 0x137becu: goto label_137bec;
        case 0x137bf0u: goto label_137bf0;
        case 0x137bf4u: goto label_137bf4;
        case 0x137bf8u: goto label_137bf8;
        case 0x137bfcu: goto label_137bfc;
        case 0x137c00u: goto label_137c00;
        case 0x137c04u: goto label_137c04;
        case 0x137c08u: goto label_137c08;
        case 0x137c0cu: goto label_137c0c;
        case 0x137c10u: goto label_137c10;
        case 0x137c14u: goto label_137c14;
        case 0x137c18u: goto label_137c18;
        case 0x137c1cu: goto label_137c1c;
        case 0x137c20u: goto label_137c20;
        case 0x137c24u: goto label_137c24;
        case 0x137c28u: goto label_137c28;
        case 0x137c2cu: goto label_137c2c;
        case 0x137c30u: goto label_137c30;
        case 0x137c34u: goto label_137c34;
        case 0x137c38u: goto label_137c38;
        case 0x137c3cu: goto label_137c3c;
        case 0x137c40u: goto label_137c40;
        case 0x137c44u: goto label_137c44;
        case 0x137c48u: goto label_137c48;
        case 0x137c4cu: goto label_137c4c;
        case 0x137c50u: goto label_137c50;
        case 0x137c54u: goto label_137c54;
        case 0x137c58u: goto label_137c58;
        case 0x137c5cu: goto label_137c5c;
        case 0x137c60u: goto label_137c60;
        case 0x137c64u: goto label_137c64;
        case 0x137c68u: goto label_137c68;
        case 0x137c6cu: goto label_137c6c;
        case 0x137c70u: goto label_137c70;
        case 0x137c74u: goto label_137c74;
        case 0x137c78u: goto label_137c78;
        case 0x137c7cu: goto label_137c7c;
        case 0x137c80u: goto label_137c80;
        case 0x137c84u: goto label_137c84;
        case 0x137c88u: goto label_137c88;
        case 0x137c8cu: goto label_137c8c;
        case 0x137c90u: goto label_137c90;
        case 0x137c94u: goto label_137c94;
        case 0x137c98u: goto label_137c98;
        case 0x137c9cu: goto label_137c9c;
        case 0x137ca0u: goto label_137ca0;
        case 0x137ca4u: goto label_137ca4;
        case 0x137ca8u: goto label_137ca8;
        case 0x137cacu: goto label_137cac;
        case 0x137cb0u: goto label_137cb0;
        case 0x137cb4u: goto label_137cb4;
        case 0x137cb8u: goto label_137cb8;
        case 0x137cbcu: goto label_137cbc;
        case 0x137cc0u: goto label_137cc0;
        case 0x137cc4u: goto label_137cc4;
        case 0x137cc8u: goto label_137cc8;
        case 0x137cccu: goto label_137ccc;
        case 0x137cd0u: goto label_137cd0;
        case 0x137cd4u: goto label_137cd4;
        case 0x137cd8u: goto label_137cd8;
        case 0x137cdcu: goto label_137cdc;
        case 0x137ce0u: goto label_137ce0;
        case 0x137ce4u: goto label_137ce4;
        case 0x137ce8u: goto label_137ce8;
        case 0x137cecu: goto label_137cec;
        case 0x137cf0u: goto label_137cf0;
        case 0x137cf4u: goto label_137cf4;
        case 0x137cf8u: goto label_137cf8;
        case 0x137cfcu: goto label_137cfc;
        case 0x137d00u: goto label_137d00;
        case 0x137d04u: goto label_137d04;
        case 0x137d08u: goto label_137d08;
        case 0x137d0cu: goto label_137d0c;
        case 0x137d10u: goto label_137d10;
        case 0x137d14u: goto label_137d14;
        case 0x137d18u: goto label_137d18;
        case 0x137d1cu: goto label_137d1c;
        case 0x137d20u: goto label_137d20;
        case 0x137d24u: goto label_137d24;
        case 0x137d28u: goto label_137d28;
        case 0x137d2cu: goto label_137d2c;
        case 0x137d30u: goto label_137d30;
        case 0x137d34u: goto label_137d34;
        case 0x137d38u: goto label_137d38;
        case 0x137d3cu: goto label_137d3c;
        case 0x137d40u: goto label_137d40;
        case 0x137d44u: goto label_137d44;
        case 0x137d48u: goto label_137d48;
        case 0x137d4cu: goto label_137d4c;
        case 0x137d50u: goto label_137d50;
        case 0x137d54u: goto label_137d54;
        case 0x137d58u: goto label_137d58;
        case 0x137d5cu: goto label_137d5c;
        case 0x137d60u: goto label_137d60;
        case 0x137d64u: goto label_137d64;
        case 0x137d68u: goto label_137d68;
        case 0x137d6cu: goto label_137d6c;
        case 0x137d70u: goto label_137d70;
        case 0x137d74u: goto label_137d74;
        case 0x137d78u: goto label_137d78;
        case 0x137d7cu: goto label_137d7c;
        case 0x137d80u: goto label_137d80;
        case 0x137d84u: goto label_137d84;
        case 0x137d88u: goto label_137d88;
        case 0x137d8cu: goto label_137d8c;
        case 0x137d90u: goto label_137d90;
        case 0x137d94u: goto label_137d94;
        case 0x137d98u: goto label_137d98;
        case 0x137d9cu: goto label_137d9c;
        case 0x137da0u: goto label_137da0;
        case 0x137da4u: goto label_137da4;
        case 0x137da8u: goto label_137da8;
        case 0x137dacu: goto label_137dac;
        case 0x137db0u: goto label_137db0;
        case 0x137db4u: goto label_137db4;
        case 0x137db8u: goto label_137db8;
        case 0x137dbcu: goto label_137dbc;
        case 0x137dc0u: goto label_137dc0;
        case 0x137dc4u: goto label_137dc4;
        case 0x137dc8u: goto label_137dc8;
        case 0x137dccu: goto label_137dcc;
        case 0x137dd0u: goto label_137dd0;
        case 0x137dd4u: goto label_137dd4;
        case 0x137dd8u: goto label_137dd8;
        case 0x137ddcu: goto label_137ddc;
        case 0x137de0u: goto label_137de0;
        case 0x137de4u: goto label_137de4;
        case 0x137de8u: goto label_137de8;
        case 0x137decu: goto label_137dec;
        case 0x137df0u: goto label_137df0;
        case 0x137df4u: goto label_137df4;
        case 0x137df8u: goto label_137df8;
        case 0x137dfcu: goto label_137dfc;
        case 0x137e00u: goto label_137e00;
        case 0x137e04u: goto label_137e04;
        case 0x137e08u: goto label_137e08;
        case 0x137e0cu: goto label_137e0c;
        case 0x137e10u: goto label_137e10;
        case 0x137e14u: goto label_137e14;
        case 0x137e18u: goto label_137e18;
        case 0x137e1cu: goto label_137e1c;
        case 0x137e20u: goto label_137e20;
        case 0x137e24u: goto label_137e24;
        case 0x137e28u: goto label_137e28;
        case 0x137e2cu: goto label_137e2c;
        case 0x137e30u: goto label_137e30;
        case 0x137e34u: goto label_137e34;
        case 0x137e38u: goto label_137e38;
        case 0x137e3cu: goto label_137e3c;
        case 0x137e40u: goto label_137e40;
        case 0x137e44u: goto label_137e44;
        case 0x137e48u: goto label_137e48;
        case 0x137e4cu: goto label_137e4c;
        case 0x137e50u: goto label_137e50;
        case 0x137e54u: goto label_137e54;
        case 0x137e58u: goto label_137e58;
        case 0x137e5cu: goto label_137e5c;
        case 0x137e60u: goto label_137e60;
        case 0x137e64u: goto label_137e64;
        case 0x137e68u: goto label_137e68;
        case 0x137e6cu: goto label_137e6c;
        case 0x137e70u: goto label_137e70;
        case 0x137e74u: goto label_137e74;
        case 0x137e78u: goto label_137e78;
        case 0x137e7cu: goto label_137e7c;
        case 0x137e80u: goto label_137e80;
        case 0x137e84u: goto label_137e84;
        case 0x137e88u: goto label_137e88;
        case 0x137e8cu: goto label_137e8c;
        case 0x137e90u: goto label_137e90;
        case 0x137e94u: goto label_137e94;
        case 0x137e98u: goto label_137e98;
        case 0x137e9cu: goto label_137e9c;
        case 0x137ea0u: goto label_137ea0;
        case 0x137ea4u: goto label_137ea4;
        case 0x137ea8u: goto label_137ea8;
        case 0x137eacu: goto label_137eac;
        case 0x137eb0u: goto label_137eb0;
        case 0x137eb4u: goto label_137eb4;
        case 0x137eb8u: goto label_137eb8;
        case 0x137ebcu: goto label_137ebc;
        case 0x137ec0u: goto label_137ec0;
        case 0x137ec4u: goto label_137ec4;
        case 0x137ec8u: goto label_137ec8;
        case 0x137eccu: goto label_137ecc;
        case 0x137ed0u: goto label_137ed0;
        case 0x137ed4u: goto label_137ed4;
        case 0x137ed8u: goto label_137ed8;
        case 0x137edcu: goto label_137edc;
        case 0x137ee0u: goto label_137ee0;
        case 0x137ee4u: goto label_137ee4;
        case 0x137ee8u: goto label_137ee8;
        case 0x137eecu: goto label_137eec;
        case 0x137ef0u: goto label_137ef0;
        case 0x137ef4u: goto label_137ef4;
        case 0x137ef8u: goto label_137ef8;
        case 0x137efcu: goto label_137efc;
        case 0x137f00u: goto label_137f00;
        case 0x137f04u: goto label_137f04;
        case 0x137f08u: goto label_137f08;
        case 0x137f0cu: goto label_137f0c;
        case 0x137f10u: goto label_137f10;
        case 0x137f14u: goto label_137f14;
        case 0x137f18u: goto label_137f18;
        case 0x137f1cu: goto label_137f1c;
        case 0x137f20u: goto label_137f20;
        case 0x137f24u: goto label_137f24;
        case 0x137f28u: goto label_137f28;
        case 0x137f2cu: goto label_137f2c;
        case 0x137f30u: goto label_137f30;
        case 0x137f34u: goto label_137f34;
        case 0x137f38u: goto label_137f38;
        case 0x137f3cu: goto label_137f3c;
        case 0x137f40u: goto label_137f40;
        case 0x137f44u: goto label_137f44;
        case 0x137f48u: goto label_137f48;
        case 0x137f4cu: goto label_137f4c;
        case 0x137f50u: goto label_137f50;
        case 0x137f54u: goto label_137f54;
        case 0x137f58u: goto label_137f58;
        case 0x137f5cu: goto label_137f5c;
        case 0x137f60u: goto label_137f60;
        case 0x137f64u: goto label_137f64;
        case 0x137f68u: goto label_137f68;
        case 0x137f6cu: goto label_137f6c;
        case 0x137f70u: goto label_137f70;
        case 0x137f74u: goto label_137f74;
        case 0x137f78u: goto label_137f78;
        case 0x137f7cu: goto label_137f7c;
        case 0x137f80u: goto label_137f80;
        case 0x137f84u: goto label_137f84;
        case 0x137f88u: goto label_137f88;
        case 0x137f8cu: goto label_137f8c;
        case 0x137f90u: goto label_137f90;
        case 0x137f94u: goto label_137f94;
        case 0x137f98u: goto label_137f98;
        case 0x137f9cu: goto label_137f9c;
        case 0x137fa0u: goto label_137fa0;
        case 0x137fa4u: goto label_137fa4;
        case 0x137fa8u: goto label_137fa8;
        case 0x137facu: goto label_137fac;
        case 0x137fb0u: goto label_137fb0;
        case 0x137fb4u: goto label_137fb4;
        case 0x137fb8u: goto label_137fb8;
        case 0x137fbcu: goto label_137fbc;
        case 0x137fc0u: goto label_137fc0;
        case 0x137fc4u: goto label_137fc4;
        case 0x137fc8u: goto label_137fc8;
        case 0x137fccu: goto label_137fcc;
        case 0x137fd0u: goto label_137fd0;
        case 0x137fd4u: goto label_137fd4;
        case 0x137fd8u: goto label_137fd8;
        case 0x137fdcu: goto label_137fdc;
        case 0x137fe0u: goto label_137fe0;
        case 0x137fe4u: goto label_137fe4;
        case 0x137fe8u: goto label_137fe8;
        case 0x137fecu: goto label_137fec;
        case 0x137ff0u: goto label_137ff0;
        case 0x137ff4u: goto label_137ff4;
        case 0x137ff8u: goto label_137ff8;
        case 0x137ffcu: goto label_137ffc;
        case 0x138000u: goto label_138000;
        case 0x138004u: goto label_138004;
        case 0x138008u: goto label_138008;
        case 0x13800cu: goto label_13800c;
        case 0x138010u: goto label_138010;
        case 0x138014u: goto label_138014;
        case 0x138018u: goto label_138018;
        case 0x13801cu: goto label_13801c;
        case 0x138020u: goto label_138020;
        case 0x138024u: goto label_138024;
        case 0x138028u: goto label_138028;
        case 0x13802cu: goto label_13802c;
        case 0x138030u: goto label_138030;
        case 0x138034u: goto label_138034;
        case 0x138038u: goto label_138038;
        case 0x13803cu: goto label_13803c;
        case 0x138040u: goto label_138040;
        case 0x138044u: goto label_138044;
        case 0x138048u: goto label_138048;
        case 0x13804cu: goto label_13804c;
        case 0x138050u: goto label_138050;
        case 0x138054u: goto label_138054;
        case 0x138058u: goto label_138058;
        case 0x13805cu: goto label_13805c;
        case 0x138060u: goto label_138060;
        case 0x138064u: goto label_138064;
        case 0x138068u: goto label_138068;
        case 0x13806cu: goto label_13806c;
        case 0x138070u: goto label_138070;
        case 0x138074u: goto label_138074;
        case 0x138078u: goto label_138078;
        case 0x13807cu: goto label_13807c;
        case 0x138080u: goto label_138080;
        case 0x138084u: goto label_138084;
        case 0x138088u: goto label_138088;
        case 0x13808cu: goto label_13808c;
        case 0x138090u: goto label_138090;
        case 0x138094u: goto label_138094;
        case 0x138098u: goto label_138098;
        case 0x13809cu: goto label_13809c;
        case 0x1380a0u: goto label_1380a0;
        case 0x1380a4u: goto label_1380a4;
        case 0x1380a8u: goto label_1380a8;
        case 0x1380acu: goto label_1380ac;
        case 0x1380b0u: goto label_1380b0;
        case 0x1380b4u: goto label_1380b4;
        case 0x1380b8u: goto label_1380b8;
        case 0x1380bcu: goto label_1380bc;
        case 0x1380c0u: goto label_1380c0;
        case 0x1380c4u: goto label_1380c4;
        case 0x1380c8u: goto label_1380c8;
        case 0x1380ccu: goto label_1380cc;
        case 0x1380d0u: goto label_1380d0;
        case 0x1380d4u: goto label_1380d4;
        case 0x1380d8u: goto label_1380d8;
        case 0x1380dcu: goto label_1380dc;
        case 0x1380e0u: goto label_1380e0;
        case 0x1380e4u: goto label_1380e4;
        case 0x1380e8u: goto label_1380e8;
        case 0x1380ecu: goto label_1380ec;
        case 0x1380f0u: goto label_1380f0;
        case 0x1380f4u: goto label_1380f4;
        case 0x1380f8u: goto label_1380f8;
        case 0x1380fcu: goto label_1380fc;
        case 0x138100u: goto label_138100;
        case 0x138104u: goto label_138104;
        case 0x138108u: goto label_138108;
        case 0x13810cu: goto label_13810c;
        case 0x138110u: goto label_138110;
        case 0x138114u: goto label_138114;
        case 0x138118u: goto label_138118;
        case 0x13811cu: goto label_13811c;
        case 0x138120u: goto label_138120;
        case 0x138124u: goto label_138124;
        case 0x138128u: goto label_138128;
        case 0x13812cu: goto label_13812c;
        case 0x138130u: goto label_138130;
        case 0x138134u: goto label_138134;
        case 0x138138u: goto label_138138;
        case 0x13813cu: goto label_13813c;
        case 0x138140u: goto label_138140;
        case 0x138144u: goto label_138144;
        case 0x138148u: goto label_138148;
        case 0x13814cu: goto label_13814c;
        case 0x138150u: goto label_138150;
        case 0x138154u: goto label_138154;
        case 0x138158u: goto label_138158;
        case 0x13815cu: goto label_13815c;
        case 0x138160u: goto label_138160;
        case 0x138164u: goto label_138164;
        case 0x138168u: goto label_138168;
        case 0x13816cu: goto label_13816c;
        case 0x138170u: goto label_138170;
        case 0x138174u: goto label_138174;
        case 0x138178u: goto label_138178;
        case 0x13817cu: goto label_13817c;
        case 0x138180u: goto label_138180;
        case 0x138184u: goto label_138184;
        case 0x138188u: goto label_138188;
        case 0x13818cu: goto label_13818c;
        case 0x138190u: goto label_138190;
        case 0x138194u: goto label_138194;
        case 0x138198u: goto label_138198;
        case 0x13819cu: goto label_13819c;
        case 0x1381a0u: goto label_1381a0;
        case 0x1381a4u: goto label_1381a4;
        default: break;
    }

    ctx->pc = 0x137820u;

label_137820:
    // 0x137820: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x137820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_137824:
    // 0x137824: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x137824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_137828:
    // 0x137828: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x137828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13782c:
    // 0x13782c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_137830:
    // 0x137830: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x137830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_137834:
    // 0x137834: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_137838:
    // 0x137838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13783c:
    // 0x13783c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_137840:
    // 0x137840: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x137840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_137844:
    // 0x137844: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137848:
    // 0x137848: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x137848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_13784c:
    // 0x13784c: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x13784cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_137850:
    // 0x137850: 0x9265009a  lbu         $a1, 0x9A($s3)
    ctx->pc = 0x137850u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
label_137854:
    // 0x137854: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x137854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_137858:
    // 0x137858: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x137858u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_13785c:
    // 0x13785c: 0x1020022c  beqz        $at, . + 4 + (0x22C << 2)
label_137860:
    if (ctx->pc == 0x137860u) {
        ctx->pc = 0x137864u;
        goto label_137864;
    }
    ctx->pc = 0x13785Cu;
    {
        const bool branch_taken_0x13785c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13785c) {
            ctx->pc = 0x138110u;
            goto label_138110;
        }
    }
    ctx->pc = 0x137864u;
label_137864:
    // 0x137864: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x137864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_137868:
    // 0x137868: 0x2464e5c0  addiu       $a0, $v1, -0x1A40
    ctx->pc = 0x137868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960576));
label_13786c:
    // 0x13786c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13786cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_137870:
    // 0x137870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_137874:
    // 0x137874: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_137878:
    // 0x137878: 0x600008  jr          $v1
label_13787c:
    if (ctx->pc == 0x13787Cu) {
        ctx->pc = 0x137880u;
        goto label_137880;
    }
    ctx->pc = 0x137878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137878u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x137880u;
label_137880:
    // 0x137880: 0xa260009c  sb          $zero, 0x9C($s3)
    ctx->pc = 0x137880u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 0));
label_137884:
    // 0x137884: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137888:
    // 0x137888: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x137888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_13788c:
    // 0x13788c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x13788cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_137890:
    // 0x137890: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x137890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_137894:
    // 0x137894: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_137898:
    if (ctx->pc == 0x137898u) {
        ctx->pc = 0x13789Cu;
        goto label_13789c;
    }
    ctx->pc = 0x137894u;
    {
        const bool branch_taken_0x137894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137894) {
            ctx->pc = 0x137904u;
            goto label_137904;
        }
    }
    ctx->pc = 0x13789Cu;
label_13789c:
    // 0x13789c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13789cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1378a0:
    // 0x1378a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1378a4:
    if (ctx->pc == 0x1378A4u) {
        ctx->pc = 0x1378A8u;
        goto label_1378a8;
    }
    ctx->pc = 0x1378A0u;
    {
        const bool branch_taken_0x1378a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378a0) {
            ctx->pc = 0x1378F0u;
            goto label_1378f0;
        }
    }
    ctx->pc = 0x1378A8u;
label_1378a8:
    // 0x1378a8: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x1378a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1378ac:
    // 0x1378ac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1378acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1378b0:
    // 0x1378b0: 0x24434ee0  addiu       $v1, $v0, 0x4EE0
    ctx->pc = 0x1378b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
label_1378b4:
    // 0x1378b4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1378b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1378b8:
    // 0x1378b8: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x1378b8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1378bc:
    // 0x1378bc: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x1378bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1378c0:
    // 0x1378c0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1378c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1378c4:
    // 0x1378c4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1378c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1378c8:
    // 0x1378c8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1378c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1378cc:
    // 0x1378cc: 0x8ce30058  lw          $v1, 0x58($a3)
    ctx->pc = 0x1378ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_1378d0:
    // 0x1378d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1378d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1378d4:
    // 0x1378d4: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x1378d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1378d8:
    // 0x1378d8: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x1378d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1378dc:
    // 0x1378dc: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x1378dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_1378e0:
    // 0x1378e0: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1378e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_1378e4:
    // 0x1378e4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1378e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_1378e8:
    // 0x1378e8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1378e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1378ec:
    // 0x1378ec: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1378ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1378f0:
    // 0x1378f0: 0x2a050002  slti        $a1, $s0, 0x2
    ctx->pc = 0x1378f0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1378f4:
    // 0x1378f4: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
label_1378f8:
    if (ctx->pc == 0x1378F8u) {
        ctx->pc = 0x1378FCu;
        goto label_1378fc;
    }
    ctx->pc = 0x1378F4u;
    {
        const bool branch_taken_0x1378f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1378f4) {
            ctx->pc = 0x1378A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1378a8;
        }
    }
    ctx->pc = 0x1378FCu;
label_1378fc:
    // 0x1378fc: 0x10000022  b           . + 4 + (0x22 << 2)
label_137900:
    if (ctx->pc == 0x137900u) {
        ctx->pc = 0x137904u;
        goto label_137904;
    }
    ctx->pc = 0x1378FCu;
    {
        const bool branch_taken_0x1378fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1378fc) {
            ctx->pc = 0x137988u;
            goto label_137988;
        }
    }
    ctx->pc = 0x137904u;
label_137904:
    // 0x137904: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x137904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_137908:
    // 0x137908: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x137908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_13790c:
    // 0x13790c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_137910:
    if (ctx->pc == 0x137910u) {
        ctx->pc = 0x137914u;
        goto label_137914;
    }
    ctx->pc = 0x13790Cu;
    {
        const bool branch_taken_0x13790c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13790c) {
            ctx->pc = 0x137920u;
            goto label_137920;
        }
    }
    ctx->pc = 0x137914u;
label_137914:
    // 0x137914: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x137914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_137918:
    // 0x137918: 0x10000002  b           . + 4 + (0x2 << 2)
label_13791c:
    if (ctx->pc == 0x13791Cu) {
        ctx->pc = 0x137920u;
        goto label_137920;
    }
    ctx->pc = 0x137918u;
    {
        const bool branch_taken_0x137918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137918) {
            ctx->pc = 0x137924u;
            goto label_137924;
        }
    }
    ctx->pc = 0x137920u;
label_137920:
    // 0x137920: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x137920u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_137924:
    // 0x137924: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137924u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_137928:
    // 0x137928: 0x10000013  b           . + 4 + (0x13 << 2)
label_13792c:
    if (ctx->pc == 0x13792Cu) {
        ctx->pc = 0x137930u;
        goto label_137930;
    }
    ctx->pc = 0x137928u;
    {
        const bool branch_taken_0x137928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137928) {
            ctx->pc = 0x137978u;
            goto label_137978;
        }
    }
    ctx->pc = 0x137930u;
label_137930:
    // 0x137930: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137934:
    // 0x137934: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x137934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_137938:
    // 0x137938: 0x24a64ed8  addiu       $a2, $a1, 0x4ED8
    ctx->pc = 0x137938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 20184));
label_13793c:
    // 0x13793c: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x13793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_137940:
    // 0x137940: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x137940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_137944:
    // 0x137944: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x137944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_137948:
    // 0x137948: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x137948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_13794c:
    // 0x13794c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_137950:
    // 0x137950: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x137950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_137954:
    // 0x137954: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x137954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_137958:
    // 0x137958: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x137958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_13795c:
    // 0x13795c: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x13795cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_137960:
    // 0x137960: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_137964:
    // 0x137964: 0x34650002  ori         $a1, $v1, 0x2
    ctx->pc = 0x137964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_137968:
    // 0x137968: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x137968u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
label_13796c:
    // 0x13796c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x13796cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_137970:
    // 0x137970: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x137970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137974:
    // 0x137974: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x137974u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_137978:
    // 0x137978: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x137978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_13797c:
    // 0x13797c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_137980:
    if (ctx->pc == 0x137980u) {
        ctx->pc = 0x137984u;
        goto label_137984;
    }
    ctx->pc = 0x13797Cu;
    {
        const bool branch_taken_0x13797c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13797c) {
            ctx->pc = 0x137930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137930;
        }
    }
    ctx->pc = 0x137984u;
label_137984:
    // 0x137984: 0x0  nop
    ctx->pc = 0x137984u;
    // NOP
label_137988:
    // 0x137988: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_13798c:
    // 0x13798c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_137990:
    // 0x137990: 0xa0600f30  sb          $zero, 0xF30($v1)
    ctx->pc = 0x137990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3888), (uint8_t)GPR_U32(ctx, 0));
label_137994:
    // 0x137994: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137998:
    // 0x137998: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x137998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_13799c:
    // 0x13799c: 0xa0600ea0  sb          $zero, 0xEA0($v1)
    ctx->pc = 0x13799cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3744), (uint8_t)GPR_U32(ctx, 0));
label_1379a0:
    // 0x1379a0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1379a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1379a4:
    // 0x1379a4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1379a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1379a8:
    // 0x1379a8: 0xa0801170  sb          $zero, 0x1170($a0)
    ctx->pc = 0x1379a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4464), (uint8_t)GPR_U32(ctx, 0));
label_1379ac:
    // 0x1379ac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1379acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1379b0:
    // 0x1379b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1379b4:
    if (ctx->pc == 0x1379B4u) {
        ctx->pc = 0x1379B8u;
        goto label_1379b8;
    }
    ctx->pc = 0x1379B0u;
    {
        const bool branch_taken_0x1379b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1379b0) {
            ctx->pc = 0x1379E0u;
            goto label_1379e0;
        }
    }
    ctx->pc = 0x1379B8u;
label_1379b8:
    // 0x1379b8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1379b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1379bc:
    // 0x1379bc: 0x24724e98  addiu       $s2, $v1, 0x4E98
    ctx->pc = 0x1379bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 20120));
label_1379c0:
    // 0x1379c0: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1379c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1379c4:
    // 0x1379c4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1379c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1379c8:
    // 0x1379c8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1379c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1379cc:
    // 0x1379cc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1379ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1379d0:
    // 0x1379d0: 0xc096ca4  jal         func_25B290
label_1379d4:
    if (ctx->pc == 0x1379D4u) {
        ctx->pc = 0x1379D8u;
        goto label_1379d8;
    }
    ctx->pc = 0x1379D0u;
    SET_GPR_U32(ctx, 31, 0x1379D8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x1379D0u, 0x1379D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379D8u;
label_1379d8:
    // 0x1379d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1379d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1379dc:
    // 0x1379dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1379dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1379e0:
    // 0x1379e0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1379e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1379e4:
    // 0x1379e4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1379e8:
    if (ctx->pc == 0x1379E8u) {
        ctx->pc = 0x1379ECu;
        goto label_1379ec;
    }
    ctx->pc = 0x1379E4u;
    {
        const bool branch_taken_0x1379e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1379e4) {
            ctx->pc = 0x1379B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1379b8;
        }
    }
    ctx->pc = 0x1379ECu;
label_1379ec:
    // 0x1379ec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1379ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1379f0:
    // 0x1379f0: 0xa664008e  sh          $a0, 0x8E($s3)
    ctx->pc = 0x1379f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 4));
label_1379f4:
    // 0x1379f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1379f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1379f8:
    // 0x1379f8: 0x0  nop
    ctx->pc = 0x1379f8u;
    // NOP
label_1379fc:
    // 0x1379fc: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1379fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_137a00:
    // 0x137a00: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x137a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
label_137a04:
    // 0x137a04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_137a08:
    // 0x137a08: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x137a08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
label_137a0c:
    // 0x137a0c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137a10:
    // 0x137a10: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x137a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_137a14:
    // 0x137a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x137a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137a18:
    // 0x137a18: 0x0  nop
    ctx->pc = 0x137a18u;
    // NOP
label_137a1c:
    // 0x137a1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x137a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_137a20:
    // 0x137a20: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x137a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_137a24:
    // 0x137a24: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x137a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137a28:
    // 0x137a28: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137a2c:
    // 0x137a2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137a30:
    // 0x137a30: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x137a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_137a34:
    // 0x137a34: 0x24660170  addiu       $a2, $v1, 0x170
    ctx->pc = 0x137a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
label_137a38:
    // 0x137a38: 0xc0675b0  jal         func_19D6C0
label_137a3c:
    if (ctx->pc == 0x137A3Cu) {
        ctx->pc = 0x137A40u;
        goto label_137a40;
    }
    ctx->pc = 0x137A38u;
    SET_GPR_U32(ctx, 31, 0x137A40u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137A38u, 0x137A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A40u;
label_137a40:
    // 0x137a40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x137a40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_137a44:
    // 0x137a44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x137a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_137a48:
    // 0x137a48: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x137a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137a4c:
    // 0x137a4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137a50:
    // 0x137a50: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137a54:
    // 0x137a54: 0xc040ed8  jal         func_103B60
label_137a58:
    if (ctx->pc == 0x137A58u) {
        ctx->pc = 0x137A5Cu;
        goto label_137a5c;
    }
    ctx->pc = 0x137A54u;
    SET_GPR_U32(ctx, 31, 0x137A5Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137A5Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137A5Cu) { return; }
    ctx->pc = 0x137A5Cu;
label_137a5c:
    // 0x137a5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x137a5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_137a60:
    // 0x137a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137a64:
    // 0x137a64: 0x0  nop
    ctx->pc = 0x137a64u;
    // NOP
label_137a68:
    // 0x137a68: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x137a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_137a6c:
    // 0x137a6c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x137a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137a70:
    // 0x137a70: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x137a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137a74:
    // 0x137a74: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x137a74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_137a78:
    // 0x137a78: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x137a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137a7c:
    // 0x137a7c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x137a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137a80:
    // 0x137a80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_137a84:
    // 0x137a84: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x137a84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_137a88:
    // 0x137a88: 0xc06757c  jal         func_19D5F0
label_137a8c:
    if (ctx->pc == 0x137A8Cu) {
        ctx->pc = 0x137A90u;
        goto label_137a90;
    }
    ctx->pc = 0x137A88u;
    SET_GPR_U32(ctx, 31, 0x137A90u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x137A88u, 0x137A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A90u;
label_137a90:
    // 0x137a90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x137a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_137a94:
    // 0x137a94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_137a98:
    // 0x137a98: 0x0  nop
    ctx->pc = 0x137a98u;
    // NOP
label_137a9c:
    // 0x137a9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_137aa0:
    // 0x137aa0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x137aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_137aa4:
    // 0x137aa4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137aa4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_137aa8:
    // 0x137aa8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_137aac:
    if (ctx->pc == 0x137AACu) {
        ctx->pc = 0x137AB0u;
        goto label_137ab0;
    }
    ctx->pc = 0x137AA8u;
    {
        const bool branch_taken_0x137aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137aa8) {
            ctx->pc = 0x137B98u;
            goto label_137b98;
        }
    }
    ctx->pc = 0x137AB0u;
label_137ab0:
    // 0x137ab0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137ab4:
    // 0x137ab4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x137ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_137ab8:
    // 0x137ab8: 0x24624e98  addiu       $v0, $v1, 0x4E98
    ctx->pc = 0x137ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20120));
label_137abc:
    // 0x137abc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_137ac0:
    // 0x137ac0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_137ac4:
    // 0x137ac4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_137ac8:
    // 0x137ac8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_137acc:
    // 0x137acc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x137accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137ad0:
    // 0x137ad0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_137ad4:
    // 0x137ad4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x137ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_137ad8:
    // 0x137ad8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_137adc:
    // 0x137adc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x137adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_137ae0:
    // 0x137ae0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x137ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137ae4:
    // 0x137ae4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137ae8:
    // 0x137ae8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137aec:
    // 0x137aec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x137aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137af0:
    // 0x137af0: 0xc0675a8  jal         func_19D6A0
label_137af4:
    if (ctx->pc == 0x137AF4u) {
        ctx->pc = 0x137AF8u;
        goto label_137af8;
    }
    ctx->pc = 0x137AF0u;
    SET_GPR_U32(ctx, 31, 0x137AF8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137AF0u, 0x137AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AF8u;
label_137af8:
    // 0x137af8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137afc:
    // 0x137afc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137b00:
    // 0x137b00: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137b04:
    // 0x137b04: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x137b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_137b08:
    // 0x137b08: 0xc0675b0  jal         func_19D6C0
label_137b0c:
    if (ctx->pc == 0x137B0Cu) {
        ctx->pc = 0x137B10u;
        goto label_137b10;
    }
    ctx->pc = 0x137B08u;
    SET_GPR_U32(ctx, 31, 0x137B10u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137B08u, 0x137B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B10u;
label_137b10:
    // 0x137b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137b14:
    // 0x137b14: 0x0  nop
    ctx->pc = 0x137b14u;
    // NOP
label_137b18:
    // 0x137b18: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x137b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_137b1c:
    // 0x137b1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137b20:
    // 0x137b20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137b24:
    // 0x137b24: 0xc040c24  jal         func_103090
label_137b28:
    if (ctx->pc == 0x137B28u) {
        ctx->pc = 0x137B2Cu;
        goto label_137b2c;
    }
    ctx->pc = 0x137B24u;
    SET_GPR_U32(ctx, 31, 0x137B2Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x137B2Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137B2Cu) { return; }
    ctx->pc = 0x137B2Cu;
label_137b2c:
    // 0x137b2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137b30:
    // 0x137b30: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137b34:
    // 0x137b34: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x137b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_137b38:
    // 0x137b38: 0xc040ed8  jal         func_103B60
label_137b3c:
    if (ctx->pc == 0x137B3Cu) {
        ctx->pc = 0x137B40u;
        goto label_137b40;
    }
    ctx->pc = 0x137B38u;
    SET_GPR_U32(ctx, 31, 0x137B40u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137B40u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137B40u) { return; }
    ctx->pc = 0x137B40u;
label_137b40:
    // 0x137b40: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137b44:
    // 0x137b44: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137b48:
    // 0x137b48: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x137b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137b4c:
    // 0x137b4c: 0xc0675a8  jal         func_19D6A0
label_137b50:
    if (ctx->pc == 0x137B50u) {
        ctx->pc = 0x137B54u;
        goto label_137b54;
    }
    ctx->pc = 0x137B4Cu;
    SET_GPR_U32(ctx, 31, 0x137B54u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137B4Cu, 0x137B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B54u;
label_137b54:
    // 0x137b54: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137b58:
    // 0x137b58: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x137b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137b5c:
    // 0x137b5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_137b60:
    // 0x137b60: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x137b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_137b64:
    // 0x137b64: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x137b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137b68:
    // 0x137b68: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137b6c:
    // 0x137b6c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x137b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137b70:
    // 0x137b70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_137b74:
    // 0x137b74: 0x0  nop
    ctx->pc = 0x137b74u;
    // NOP
label_137b78:
    // 0x137b78: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_137b7c:
    if (ctx->pc == 0x137B7Cu) {
        ctx->pc = 0x137B80u;
        goto label_137b80;
    }
    ctx->pc = 0x137B78u;
    {
        const bool branch_taken_0x137b78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137b78) {
            ctx->pc = 0x137B90u;
            goto label_137b90;
        }
    }
    ctx->pc = 0x137B80u;
label_137b80:
    // 0x137b80: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137b84:
    // 0x137b84: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x137b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137b88:
    // 0x137b88: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x137b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_137b8c:
    // 0x137b8c: 0x0  nop
    ctx->pc = 0x137b8cu;
    // NOP
label_137b90:
    // 0x137b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137b94:
    // 0x137b94: 0x0  nop
    ctx->pc = 0x137b94u;
    // NOP
label_137b98:
    // 0x137b98: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x137b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_137b9c:
    // 0x137b9c: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_137ba0:
    if (ctx->pc == 0x137BA0u) {
        ctx->pc = 0x137BA4u;
        goto label_137ba4;
    }
    ctx->pc = 0x137B9Cu;
    {
        const bool branch_taken_0x137b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137b9c) {
            ctx->pc = 0x137AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137ab0;
        }
    }
    ctx->pc = 0x137BA4u;
label_137ba4:
    // 0x137ba4: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x137ba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
label_137ba8:
    // 0x137ba8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_137bac:
    if (ctx->pc == 0x137BACu) {
        ctx->pc = 0x137BB0u;
        goto label_137bb0;
    }
    ctx->pc = 0x137BA8u;
    {
        const bool branch_taken_0x137ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ba8) {
            ctx->pc = 0x137BC4u;
            goto label_137bc4;
        }
    }
    ctx->pc = 0x137BB0u;
label_137bb0:
    // 0x137bb0: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x137bb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
label_137bb4:
    // 0x137bb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x137bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_137bb8:
    // 0x137bb8: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x137bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
label_137bbc:
    // 0x137bbc: 0x10000154  b           . + 4 + (0x154 << 2)
label_137bc0:
    if (ctx->pc == 0x137BC0u) {
        ctx->pc = 0x137BC4u;
        goto label_137bc4;
    }
    ctx->pc = 0x137BBCu;
    {
        const bool branch_taken_0x137bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137bbc) {
            ctx->pc = 0x138110u;
            goto label_138110;
        }
    }
    ctx->pc = 0x137BC4u;
label_137bc4:
    // 0x137bc4: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x137bc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
label_137bc8:
    // 0x137bc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_137bcc:
    // 0x137bcc: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x137bccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
label_137bd0:
    // 0x137bd0: 0x1000014f  b           . + 4 + (0x14F << 2)
label_137bd4:
    if (ctx->pc == 0x137BD4u) {
        ctx->pc = 0x137BD8u;
        goto label_137bd8;
    }
    ctx->pc = 0x137BD0u;
    {
        const bool branch_taken_0x137bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137bd0) {
            ctx->pc = 0x138110u;
            goto label_138110;
        }
    }
    ctx->pc = 0x137BD8u;
label_137bd8:
    // 0x137bd8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137bd8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_137bdc:
    // 0x137bdc: 0x1000000e  b           . + 4 + (0xE << 2)
label_137be0:
    if (ctx->pc == 0x137BE0u) {
        ctx->pc = 0x137BE4u;
        goto label_137be4;
    }
    ctx->pc = 0x137BDCu;
    {
        const bool branch_taken_0x137bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137bdc) {
            ctx->pc = 0x137C18u;
            goto label_137c18;
        }
    }
    ctx->pc = 0x137BE4u;
label_137be4:
    // 0x137be4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137be8:
    // 0x137be8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x137be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_137bec:
    // 0x137bec: 0x24424eb0  addiu       $v0, $v0, 0x4EB0
    ctx->pc = 0x137becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
label_137bf0:
    // 0x137bf0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_137bf4:
    // 0x137bf4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_137bf8:
    // 0x137bf8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_137bfc:
    // 0x137bfc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x137bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_137c00:
    // 0x137c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137c04:
    // 0x137c04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_137c08:
    // 0x137c08: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x137c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_137c0c:
    // 0x137c0c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x137c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137c10:
    // 0x137c10: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x137c10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_137c14:
    // 0x137c14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137c18:
    // 0x137c18: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x137c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_137c1c:
    // 0x137c1c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_137c20:
    if (ctx->pc == 0x137C20u) {
        ctx->pc = 0x137C24u;
        goto label_137c24;
    }
    ctx->pc = 0x137C1Cu;
    {
        const bool branch_taken_0x137c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137c1c) {
            ctx->pc = 0x137BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137be4;
        }
    }
    ctx->pc = 0x137C24u;
label_137c24:
    // 0x137c24: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137c24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_137c28:
    // 0x137c28: 0x1000000b  b           . + 4 + (0xB << 2)
label_137c2c:
    if (ctx->pc == 0x137C2Cu) {
        ctx->pc = 0x137C30u;
        goto label_137c30;
    }
    ctx->pc = 0x137C28u;
    {
        const bool branch_taken_0x137c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137c28) {
            ctx->pc = 0x137C58u;
            goto label_137c58;
        }
    }
    ctx->pc = 0x137C30u;
label_137c30:
    // 0x137c30: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x137c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_137c34:
    // 0x137c34: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x137c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
label_137c38:
    // 0x137c38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_137c3c:
    // 0x137c3c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_137c40:
    // 0x137c40: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x137c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_137c44:
    // 0x137c44: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137c48:
    // 0x137c48: 0xc096ca4  jal         func_25B290
label_137c4c:
    if (ctx->pc == 0x137C4Cu) {
        ctx->pc = 0x137C50u;
        goto label_137c50;
    }
    ctx->pc = 0x137C48u;
    SET_GPR_U32(ctx, 31, 0x137C50u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x137C48u, 0x137C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C50u;
label_137c50:
    // 0x137c50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137c54:
    // 0x137c54: 0x0  nop
    ctx->pc = 0x137c54u;
    // NOP
label_137c58:
    // 0x137c58: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x137c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_137c5c:
    // 0x137c5c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_137c60:
    if (ctx->pc == 0x137C60u) {
        ctx->pc = 0x137C64u;
        goto label_137c64;
    }
    ctx->pc = 0x137C5Cu;
    {
        const bool branch_taken_0x137c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137c5c) {
            ctx->pc = 0x137C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137c30;
        }
    }
    ctx->pc = 0x137C64u;
label_137c64:
    // 0x137c64: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x137c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_137c68:
    // 0x137c68: 0xa662008e  sh          $v0, 0x8E($s3)
    ctx->pc = 0x137c68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 2));
label_137c6c:
    // 0x137c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137c70:
    // 0x137c70: 0x0  nop
    ctx->pc = 0x137c70u;
    // NOP
label_137c74:
    // 0x137c74: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x137c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_137c78:
    // 0x137c78: 0x9262009a  lbu         $v0, 0x9A($s3)
    ctx->pc = 0x137c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
label_137c7c:
    // 0x137c7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_137c80:
    // 0x137c80: 0xa262009a  sb          $v0, 0x9A($s3)
    ctx->pc = 0x137c80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 2));
label_137c84:
    // 0x137c84: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137c88:
    // 0x137c88: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_137c8c:
    // 0x137c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137c90:
    // 0x137c90: 0x0  nop
    ctx->pc = 0x137c90u;
    // NOP
label_137c94:
    // 0x137c94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x137c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_137c98:
    // 0x137c98: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x137c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_137c9c:
    // 0x137c9c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137ca0:
    // 0x137ca0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137ca4:
    // 0x137ca4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137ca8:
    // 0x137ca8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x137ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_137cac:
    // 0x137cac: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x137cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_137cb0:
    // 0x137cb0: 0xc0675b0  jal         func_19D6C0
label_137cb4:
    if (ctx->pc == 0x137CB4u) {
        ctx->pc = 0x137CB8u;
        goto label_137cb8;
    }
    ctx->pc = 0x137CB0u;
    SET_GPR_U32(ctx, 31, 0x137CB8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137CB0u, 0x137CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CB8u;
label_137cb8:
    // 0x137cb8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x137cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_137cbc:
    // 0x137cbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x137cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137cc0:
    // 0x137cc0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137cc4:
    // 0x137cc4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137cc8:
    // 0x137cc8: 0xc040ed8  jal         func_103B60
label_137ccc:
    if (ctx->pc == 0x137CCCu) {
        ctx->pc = 0x137CD0u;
        goto label_137cd0;
    }
    ctx->pc = 0x137CC8u;
    SET_GPR_U32(ctx, 31, 0x137CD0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137CD0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137CD0u) { return; }
    ctx->pc = 0x137CD0u;
label_137cd0:
    // 0x137cd0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x137cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137cd4:
    // 0x137cd4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x137cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137cd8:
    // 0x137cd8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x137cd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_137cdc:
    // 0x137cdc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x137cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137ce0:
    // 0x137ce0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x137ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137ce4:
    // 0x137ce4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_137ce8:
    // 0x137ce8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x137ce8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_137cec:
    // 0x137cec: 0xc06757c  jal         func_19D5F0
label_137cf0:
    if (ctx->pc == 0x137CF0u) {
        ctx->pc = 0x137CF4u;
        goto label_137cf4;
    }
    ctx->pc = 0x137CECu;
    SET_GPR_U32(ctx, 31, 0x137CF4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x137CECu, 0x137CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CF4u;
label_137cf4:
    // 0x137cf4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x137cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_137cf8:
    // 0x137cf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_137cfc:
    // 0x137cfc: 0x0  nop
    ctx->pc = 0x137cfcu;
    // NOP
label_137d00:
    // 0x137d00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_137d04:
    // 0x137d04: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x137d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_137d08:
    // 0x137d08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137d08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_137d0c:
    // 0x137d0c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_137d10:
    if (ctx->pc == 0x137D10u) {
        ctx->pc = 0x137D14u;
        goto label_137d14;
    }
    ctx->pc = 0x137D0Cu;
    {
        const bool branch_taken_0x137d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137d0c) {
            ctx->pc = 0x137DF8u;
            goto label_137df8;
        }
    }
    ctx->pc = 0x137D14u;
label_137d14:
    // 0x137d14: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137d18:
    // 0x137d18: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x137d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_137d1c:
    // 0x137d1c: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x137d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
label_137d20:
    // 0x137d20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_137d24:
    // 0x137d24: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_137d28:
    // 0x137d28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_137d2c:
    // 0x137d2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_137d30:
    // 0x137d30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137d34:
    // 0x137d34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_137d38:
    // 0x137d38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x137d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_137d3c:
    // 0x137d3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_137d40:
    // 0x137d40: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x137d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_137d44:
    // 0x137d44: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x137d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137d48:
    // 0x137d48: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137d4c:
    // 0x137d4c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137d50:
    // 0x137d50: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x137d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137d54:
    // 0x137d54: 0xc0675a8  jal         func_19D6A0
label_137d58:
    if (ctx->pc == 0x137D58u) {
        ctx->pc = 0x137D5Cu;
        goto label_137d5c;
    }
    ctx->pc = 0x137D54u;
    SET_GPR_U32(ctx, 31, 0x137D5Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137D54u, 0x137D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D5Cu;
label_137d5c:
    // 0x137d5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137d60:
    // 0x137d60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137d64:
    // 0x137d64: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137d68:
    // 0x137d68: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x137d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_137d6c:
    // 0x137d6c: 0xc0675b0  jal         func_19D6C0
label_137d70:
    if (ctx->pc == 0x137D70u) {
        ctx->pc = 0x137D74u;
        goto label_137d74;
    }
    ctx->pc = 0x137D6Cu;
    SET_GPR_U32(ctx, 31, 0x137D74u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137D6Cu, 0x137D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D74u;
label_137d74:
    // 0x137d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137d78:
    // 0x137d78: 0x0  nop
    ctx->pc = 0x137d78u;
    // NOP
label_137d7c:
    // 0x137d7c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x137d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_137d80:
    // 0x137d80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137d84:
    // 0x137d84: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137d88:
    // 0x137d88: 0xc040c24  jal         func_103090
label_137d8c:
    if (ctx->pc == 0x137D8Cu) {
        ctx->pc = 0x137D90u;
        goto label_137d90;
    }
    ctx->pc = 0x137D88u;
    SET_GPR_U32(ctx, 31, 0x137D90u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x137D90u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137D90u) { return; }
    ctx->pc = 0x137D90u;
label_137d90:
    // 0x137d90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137d94:
    // 0x137d94: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137d98:
    // 0x137d98: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x137d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_137d9c:
    // 0x137d9c: 0xc040ed8  jal         func_103B60
label_137da0:
    if (ctx->pc == 0x137DA0u) {
        ctx->pc = 0x137DA4u;
        goto label_137da4;
    }
    ctx->pc = 0x137D9Cu;
    SET_GPR_U32(ctx, 31, 0x137DA4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137DA4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137DA4u) { return; }
    ctx->pc = 0x137DA4u;
label_137da4:
    // 0x137da4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137da8:
    // 0x137da8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137dac:
    // 0x137dac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x137dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137db0:
    // 0x137db0: 0xc0675a8  jal         func_19D6A0
label_137db4:
    if (ctx->pc == 0x137DB4u) {
        ctx->pc = 0x137DB8u;
        goto label_137db8;
    }
    ctx->pc = 0x137DB0u;
    SET_GPR_U32(ctx, 31, 0x137DB8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137DB0u, 0x137DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DB8u;
label_137db8:
    // 0x137db8: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137dbc:
    // 0x137dbc: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x137dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137dc0:
    // 0x137dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_137dc4:
    // 0x137dc4: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x137dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_137dc8:
    // 0x137dc8: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x137dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137dcc:
    // 0x137dcc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137dd0:
    // 0x137dd0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x137dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137dd4:
    // 0x137dd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_137dd8:
    // 0x137dd8: 0x0  nop
    ctx->pc = 0x137dd8u;
    // NOP
label_137ddc:
    // 0x137ddc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_137de0:
    if (ctx->pc == 0x137DE0u) {
        ctx->pc = 0x137DE4u;
        goto label_137de4;
    }
    ctx->pc = 0x137DDCu;
    {
        const bool branch_taken_0x137ddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137ddc) {
            ctx->pc = 0x137DF0u;
            goto label_137df0;
        }
    }
    ctx->pc = 0x137DE4u;
label_137de4:
    // 0x137de4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137de8:
    // 0x137de8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x137de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137dec:
    // 0x137dec: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x137decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_137df0:
    // 0x137df0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137df4:
    // 0x137df4: 0x0  nop
    ctx->pc = 0x137df4u;
    // NOP
label_137df8:
    // 0x137df8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x137df8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_137dfc:
    // 0x137dfc: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
label_137e00:
    if (ctx->pc == 0x137E00u) {
        ctx->pc = 0x137E04u;
        goto label_137e04;
    }
    ctx->pc = 0x137DFCu;
    {
        const bool branch_taken_0x137dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137dfc) {
            ctx->pc = 0x137D14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137d14;
        }
    }
    ctx->pc = 0x137E04u;
label_137e04:
    // 0x137e04: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x137e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
label_137e08:
    // 0x137e08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_137e0c:
    if (ctx->pc == 0x137E0Cu) {
        ctx->pc = 0x137E10u;
        goto label_137e10;
    }
    ctx->pc = 0x137E08u;
    {
        const bool branch_taken_0x137e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e08) {
            ctx->pc = 0x137E24u;
            goto label_137e24;
        }
    }
    ctx->pc = 0x137E10u;
label_137e10:
    // 0x137e10: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x137e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
label_137e14:
    // 0x137e14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x137e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_137e18:
    // 0x137e18: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x137e18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
label_137e1c:
    // 0x137e1c: 0x100000bc  b           . + 4 + (0xBC << 2)
label_137e20:
    if (ctx->pc == 0x137E20u) {
        ctx->pc = 0x137E24u;
        goto label_137e24;
    }
    ctx->pc = 0x137E1Cu;
    {
        const bool branch_taken_0x137e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e1c) {
            ctx->pc = 0x138110u;
            goto label_138110;
        }
    }
    ctx->pc = 0x137E24u;
label_137e24:
    // 0x137e24: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x137e24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
label_137e28:
    // 0x137e28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x137e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_137e2c:
    // 0x137e2c: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x137e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
label_137e30:
    // 0x137e30: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_137e34:
    if (ctx->pc == 0x137E34u) {
        ctx->pc = 0x137E38u;
        goto label_137e38;
    }
    ctx->pc = 0x137E30u;
    {
        const bool branch_taken_0x137e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e30) {
            ctx->pc = 0x138110u;
            goto label_138110;
        }
    }
    ctx->pc = 0x137E38u;
label_137e38:
    // 0x137e38: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137e38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_137e3c:
    // 0x137e3c: 0x1000000e  b           . + 4 + (0xE << 2)
label_137e40:
    if (ctx->pc == 0x137E40u) {
        ctx->pc = 0x137E44u;
        goto label_137e44;
    }
    ctx->pc = 0x137E3Cu;
    {
        const bool branch_taken_0x137e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e3c) {
            ctx->pc = 0x137E78u;
            goto label_137e78;
        }
    }
    ctx->pc = 0x137E44u;
label_137e44:
    // 0x137e44: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137e48:
    // 0x137e48: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x137e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_137e4c:
    // 0x137e4c: 0x24424eb8  addiu       $v0, $v0, 0x4EB8
    ctx->pc = 0x137e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20152));
label_137e50:
    // 0x137e50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_137e54:
    // 0x137e54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_137e58:
    // 0x137e58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_137e5c:
    // 0x137e5c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x137e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_137e60:
    // 0x137e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137e64:
    // 0x137e64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_137e68:
    // 0x137e68: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x137e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_137e6c:
    // 0x137e6c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x137e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137e70:
    // 0x137e70: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x137e70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_137e74:
    // 0x137e74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137e78:
    // 0x137e78: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x137e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_137e7c:
    // 0x137e7c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_137e80:
    if (ctx->pc == 0x137E80u) {
        ctx->pc = 0x137E84u;
        goto label_137e84;
    }
    ctx->pc = 0x137E7Cu;
    {
        const bool branch_taken_0x137e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137e7c) {
            ctx->pc = 0x137E44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137e44;
        }
    }
    ctx->pc = 0x137E84u;
label_137e84:
    // 0x137e84: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137e84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_137e88:
    // 0x137e88: 0x1000000b  b           . + 4 + (0xB << 2)
label_137e8c:
    if (ctx->pc == 0x137E8Cu) {
        ctx->pc = 0x137E90u;
        goto label_137e90;
    }
    ctx->pc = 0x137E88u;
    {
        const bool branch_taken_0x137e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e88) {
            ctx->pc = 0x137EB8u;
            goto label_137eb8;
        }
    }
    ctx->pc = 0x137E90u;
label_137e90:
    // 0x137e90: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x137e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_137e94:
    // 0x137e94: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x137e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
label_137e98:
    // 0x137e98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_137e9c:
    // 0x137e9c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_137ea0:
    // 0x137ea0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x137ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_137ea4:
    // 0x137ea4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137ea8:
    // 0x137ea8: 0xc096ca4  jal         func_25B290
label_137eac:
    if (ctx->pc == 0x137EACu) {
        ctx->pc = 0x137EB0u;
        goto label_137eb0;
    }
    ctx->pc = 0x137EA8u;
    SET_GPR_U32(ctx, 31, 0x137EB0u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x137EA8u, 0x137EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EB0u;
label_137eb0:
    // 0x137eb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_137eb4:
    // 0x137eb4: 0x0  nop
    ctx->pc = 0x137eb4u;
    // NOP
label_137eb8:
    // 0x137eb8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x137eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_137ebc:
    // 0x137ebc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_137ec0:
    if (ctx->pc == 0x137EC0u) {
        ctx->pc = 0x137EC4u;
        goto label_137ec4;
    }
    ctx->pc = 0x137EBCu;
    {
        const bool branch_taken_0x137ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137ebc) {
            ctx->pc = 0x137E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137e90;
        }
    }
    ctx->pc = 0x137EC4u;
label_137ec4:
    // 0x137ec4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x137ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_137ec8:
    // 0x137ec8: 0xa662008e  sh          $v0, 0x8E($s3)
    ctx->pc = 0x137ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 2));
label_137ecc:
    // 0x137ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137ed0:
    // 0x137ed0: 0x0  nop
    ctx->pc = 0x137ed0u;
    // NOP
label_137ed4:
    // 0x137ed4: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x137ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_137ed8:
    // 0x137ed8: 0x9262009a  lbu         $v0, 0x9A($s3)
    ctx->pc = 0x137ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
label_137edc:
    // 0x137edc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_137ee0:
    // 0x137ee0: 0xa262009a  sb          $v0, 0x9A($s3)
    ctx->pc = 0x137ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 2));
label_137ee4:
    // 0x137ee4: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137ee8:
    // 0x137ee8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x137ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_137eec:
    // 0x137eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137ef0:
    // 0x137ef0: 0x0  nop
    ctx->pc = 0x137ef0u;
    // NOP
label_137ef4:
    // 0x137ef4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x137ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_137ef8:
    // 0x137ef8: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x137ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_137efc:
    // 0x137efc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137f00:
    // 0x137f00: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137f04:
    // 0x137f04: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137f08:
    // 0x137f08: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x137f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_137f0c:
    // 0x137f0c: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x137f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_137f10:
    // 0x137f10: 0xc0675b0  jal         func_19D6C0
label_137f14:
    if (ctx->pc == 0x137F14u) {
        ctx->pc = 0x137F18u;
        goto label_137f18;
    }
    ctx->pc = 0x137F10u;
    SET_GPR_U32(ctx, 31, 0x137F18u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137F10u, 0x137F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F18u;
label_137f18:
    // 0x137f18: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x137f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_137f1c:
    // 0x137f1c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x137f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137f20:
    // 0x137f20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137f24:
    // 0x137f24: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x137f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137f28:
    // 0x137f28: 0xc040ed8  jal         func_103B60
label_137f2c:
    if (ctx->pc == 0x137F2Cu) {
        ctx->pc = 0x137F30u;
        goto label_137f30;
    }
    ctx->pc = 0x137F28u;
    SET_GPR_U32(ctx, 31, 0x137F30u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137F30u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137F30u) { return; }
    ctx->pc = 0x137F30u;
label_137f30:
    // 0x137f30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x137f30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_137f34:
    // 0x137f34: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x137f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137f38:
    // 0x137f38: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x137f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137f3c:
    // 0x137f3c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x137f3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_137f40:
    // 0x137f40: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x137f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137f44:
    // 0x137f44: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x137f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137f48:
    // 0x137f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_137f4c:
    // 0x137f4c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x137f4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_137f50:
    // 0x137f50: 0xc06757c  jal         func_19D5F0
label_137f54:
    if (ctx->pc == 0x137F54u) {
        ctx->pc = 0x137F58u;
        goto label_137f58;
    }
    ctx->pc = 0x137F50u;
    SET_GPR_U32(ctx, 31, 0x137F58u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x137F50u, 0x137F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F58u;
label_137f58:
    // 0x137f58: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x137f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_137f5c:
    // 0x137f5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_137f60:
    // 0x137f60: 0x0  nop
    ctx->pc = 0x137f60u;
    // NOP
label_137f64:
    // 0x137f64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_137f68:
    // 0x137f68: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x137f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_137f6c:
    // 0x137f6c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x137f6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_137f70:
    // 0x137f70: 0x1000003f  b           . + 4 + (0x3F << 2)
label_137f74:
    if (ctx->pc == 0x137F74u) {
        ctx->pc = 0x137F78u;
        goto label_137f78;
    }
    ctx->pc = 0x137F70u;
    {
        const bool branch_taken_0x137f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137f70) {
            ctx->pc = 0x138070u;
            goto label_138070;
        }
    }
    ctx->pc = 0x137F78u;
label_137f78:
    // 0x137f78: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137f7c:
    // 0x137f7c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x137f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_137f80:
    // 0x137f80: 0x24634ea8  addiu       $v1, $v1, 0x4EA8
    ctx->pc = 0x137f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20136));
label_137f84:
    // 0x137f84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x137f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_137f88:
    // 0x137f88: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x137f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_137f8c:
    // 0x137f8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_137f90:
    // 0x137f90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_137f94:
    // 0x137f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137f98:
    // 0x137f98: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x137f98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_137f9c:
    // 0x137f9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x137f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_137fa0:
    // 0x137fa0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_137fa4:
    // 0x137fa4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x137fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_137fa8:
    // 0x137fa8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x137fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137fac:
    // 0x137fac: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137fb0:
    // 0x137fb0: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137fb4:
    // 0x137fb4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x137fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137fb8:
    // 0x137fb8: 0xc0675a8  jal         func_19D6A0
label_137fbc:
    if (ctx->pc == 0x137FBCu) {
        ctx->pc = 0x137FC0u;
        goto label_137fc0;
    }
    ctx->pc = 0x137FB8u;
    SET_GPR_U32(ctx, 31, 0x137FC0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137FB8u, 0x137FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FC0u;
label_137fc0:
    // 0x137fc0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_137fc4:
    // 0x137fc4: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x137fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137fc8:
    // 0x137fc8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x137fc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_137fcc:
    // 0x137fcc: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x137fccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_137fd0:
    // 0x137fd0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x137fd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_137fd4:
    // 0x137fd4: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x137fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_137fd8:
    // 0x137fd8: 0xc0675b0  jal         func_19D6C0
label_137fdc:
    if (ctx->pc == 0x137FDCu) {
        ctx->pc = 0x137FE0u;
        goto label_137fe0;
    }
    ctx->pc = 0x137FD8u;
    SET_GPR_U32(ctx, 31, 0x137FE0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137FD8u, 0x137FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FE0u;
label_137fe0:
    // 0x137fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137fe4:
    // 0x137fe4: 0x0  nop
    ctx->pc = 0x137fe4u;
    // NOP
label_137fe8:
    // 0x137fe8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x137fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_137fec:
    // 0x137fec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137ff0:
    // 0x137ff0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_137ff4:
    // 0x137ff4: 0xc040c24  jal         func_103090
label_137ff8:
    if (ctx->pc == 0x137FF8u) {
        ctx->pc = 0x137FFCu;
        goto label_137ffc;
    }
    ctx->pc = 0x137FF4u;
    SET_GPR_U32(ctx, 31, 0x137FFCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x137FFCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137FFCu) { return; }
    ctx->pc = 0x137FFCu;
label_137ffc:
    // 0x137ffc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_138000:
    // 0x138000: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_138004:
    // 0x138004: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x138004u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_138008:
    // 0x138008: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x138008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13800c:
    // 0x13800c: 0xc040ed8  jal         func_103B60
label_138010:
    if (ctx->pc == 0x138010u) {
        ctx->pc = 0x138014u;
        goto label_138014;
    }
    ctx->pc = 0x13800Cu;
    SET_GPR_U32(ctx, 31, 0x138014u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x138014u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138014u) { return; }
    ctx->pc = 0x138014u;
label_138014:
    // 0x138014: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x138014u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_138018:
    // 0x138018: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_13801c:
    // 0x13801c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x13801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_138020:
    // 0x138020: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x138020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_138024:
    // 0x138024: 0xc0675a8  jal         func_19D6A0
label_138028:
    if (ctx->pc == 0x138028u) {
        ctx->pc = 0x13802Cu;
        goto label_13802c;
    }
    ctx->pc = 0x138024u;
    SET_GPR_U32(ctx, 31, 0x13802Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138024u, 0x13802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13802Cu;
label_13802c:
    // 0x13802c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x13802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138030:
    // 0x138030: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x138030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138034:
    // 0x138034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x138034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_138038:
    // 0x138038: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_13803c:
    // 0x13803c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x13803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138040:
    // 0x138040: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x138040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_138044:
    // 0x138044: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138048:
    // 0x138048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13804c:
    // 0x13804c: 0x0  nop
    ctx->pc = 0x13804cu;
    // NOP
label_138050:
    // 0x138050: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_138054:
    if (ctx->pc == 0x138054u) {
        ctx->pc = 0x138058u;
        goto label_138058;
    }
    ctx->pc = 0x138050u;
    {
        const bool branch_taken_0x138050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138050) {
            ctx->pc = 0x138068u;
            goto label_138068;
        }
    }
    ctx->pc = 0x138058u;
label_138058:
    // 0x138058: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x138058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_13805c:
    // 0x13805c: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x13805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138060:
    // 0x138060: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_138064:
    // 0x138064: 0x0  nop
    ctx->pc = 0x138064u;
    // NOP
label_138068:
    // 0x138068: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x138068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13806c:
    // 0x13806c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x13806cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_138070:
    // 0x138070: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_138074:
    // 0x138074: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_138078:
    if (ctx->pc == 0x138078u) {
        ctx->pc = 0x13807Cu;
        goto label_13807c;
    }
    ctx->pc = 0x138074u;
    {
        const bool branch_taken_0x138074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138074) {
            ctx->pc = 0x137F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137f78;
        }
    }
    ctx->pc = 0x13807Cu;
label_13807c:
    // 0x13807c: 0x8665008e  lh          $a1, 0x8E($s3)
    ctx->pc = 0x13807cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
label_138080:
    // 0x138080: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_138084:
    if (ctx->pc == 0x138084u) {
        ctx->pc = 0x138088u;
        goto label_138088;
    }
    ctx->pc = 0x138080u;
    {
        const bool branch_taken_0x138080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x138080) {
            ctx->pc = 0x13809Cu;
            goto label_13809c;
        }
    }
    ctx->pc = 0x138088u;
label_138088:
    // 0x138088: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x138088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
label_13808c:
    // 0x13808c: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x13808cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_138090:
    // 0x138090: 0xa672008e  sh          $s2, 0x8E($s3)
    ctx->pc = 0x138090u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 18));
label_138094:
    // 0x138094: 0x1000001e  b           . + 4 + (0x1E << 2)
label_138098:
    if (ctx->pc == 0x138098u) {
        ctx->pc = 0x13809Cu;
        goto label_13809c;
    }
    ctx->pc = 0x138094u;
    {
        const bool branch_taken_0x138094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138094) {
            ctx->pc = 0x138110u;
            goto label_138110;
        }
    }
    ctx->pc = 0x13809Cu;
label_13809c:
    // 0x13809c: 0x9274009a  lbu         $s4, 0x9A($s3)
    ctx->pc = 0x13809cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
label_1380a0:
    // 0x1380a0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1380a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1380a4:
    // 0x1380a4: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x1380a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
label_1380a8:
    // 0x1380a8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1380ac:
    if (ctx->pc == 0x1380ACu) {
        ctx->pc = 0x1380B0u;
        goto label_1380b0;
    }
    ctx->pc = 0x1380A8u;
    {
        const bool branch_taken_0x1380a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1380a8) {
            ctx->pc = 0x138110u;
            goto label_138110;
        }
    }
    ctx->pc = 0x1380B0u;
label_1380b0:
    // 0x1380b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1380b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1380b4:
    // 0x1380b4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1380b8:
    if (ctx->pc == 0x1380B8u) {
        ctx->pc = 0x1380BCu;
        goto label_1380bc;
    }
    ctx->pc = 0x1380B4u;
    {
        const bool branch_taken_0x1380b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1380b4) {
            ctx->pc = 0x1380F8u;
            goto label_1380f8;
        }
    }
    ctx->pc = 0x1380BCu;
label_1380bc:
    // 0x1380bc: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1380bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1380c0:
    // 0x1380c0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1380c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1380c4:
    // 0x1380c4: 0x24634ec0  addiu       $v1, $v1, 0x4EC0
    ctx->pc = 0x1380c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20160));
label_1380c8:
    // 0x1380c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1380c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1380cc:
    // 0x1380cc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1380ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1380d0:
    // 0x1380d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1380d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1380d4:
    // 0x1380d4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1380d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1380d8:
    // 0x1380d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1380d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1380dc:
    // 0x1380dc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1380dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1380e0:
    // 0x1380e0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1380e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_1380e4:
    // 0x1380e4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1380e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1380e8:
    // 0x1380e8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1380e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_1380ec:
    // 0x1380ec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1380ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1380f0:
    // 0x1380f0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1380f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1380f4:
    // 0x1380f4: 0x0  nop
    ctx->pc = 0x1380f4u;
    // NOP
label_1380f8:
    // 0x1380f8: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x1380f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1380fc:
    // 0x1380fc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_138100:
    if (ctx->pc == 0x138100u) {
        ctx->pc = 0x138104u;
        goto label_138104;
    }
    ctx->pc = 0x1380FCu;
    {
        const bool branch_taken_0x1380fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1380fc) {
            ctx->pc = 0x1380BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1380bc;
        }
    }
    ctx->pc = 0x138104u;
label_138104:
    // 0x138104: 0x9265009a  lbu         $a1, 0x9A($s3)
    ctx->pc = 0x138104u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
label_138108:
    // 0x138108: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x138108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_13810c:
    // 0x13810c: 0xa264009a  sb          $a0, 0x9A($s3)
    ctx->pc = 0x13810cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 4));
label_138110:
    // 0x138110: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x138110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_138114:
    // 0x138114: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x138114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_138118:
    // 0x138118: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x138118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_13811c:
    // 0x13811c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_138120:
    if (ctx->pc == 0x138120u) {
        ctx->pc = 0x138124u;
        goto label_138124;
    }
    ctx->pc = 0x13811Cu;
    {
        const bool branch_taken_0x13811c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13811c) {
            ctx->pc = 0x138180u;
            goto label_138180;
        }
    }
    ctx->pc = 0x138124u;
label_138124:
    // 0x138124: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x138124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_138128:
    // 0x138128: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x138128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_13812c:
    // 0x13812c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x13812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_138130:
    // 0x138130: 0x24634ec8  addiu       $v1, $v1, 0x4EC8
    ctx->pc = 0x138130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20168));
label_138134:
    // 0x138134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_138138:
    // 0x138138: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x138138u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_13813c:
    // 0x13813c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x13813cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_138140:
    // 0x138140: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_138144:
    // 0x138144: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x138144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_138148:
    // 0x138148: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x138148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13814c:
    // 0x13814c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_138150:
    // 0x138150: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_138154:
    // 0x138154: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x138154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_138158:
    // 0x138158: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x138158u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_13815c:
    // 0x13815c: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_138160:
    // 0x138160: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x138160u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_138164:
    // 0x138164: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_138168:
    // 0x138168: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_13816c:
    // 0x13816c: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x13816cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
label_138170:
    // 0x138170: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138170u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_138174:
    // 0x138174: 0x9264009c  lbu         $a0, 0x9C($s3)
    ctx->pc = 0x138174u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_138178:
    // 0x138178: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x138178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_13817c:
    // 0x13817c: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x13817cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
label_138180:
    // 0x138180: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x138180u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_138184:
    // 0x138184: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x138184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_138188:
    // 0x138188: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x138188u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13818c:
    // 0x13818c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13818cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_138190:
    // 0x138190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x138190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_138194:
    // 0x138194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_138198:
    // 0x138198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13819c:
    // 0x13819c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13819cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1381a0:
    // 0x1381a0: 0x3e00008  jr          $ra
label_1381a4:
    if (ctx->pc == 0x1381A4u) {
        ctx->pc = 0x1381A8u;
        goto label_fallthrough_0x1381a0;
    }
    ctx->pc = 0x1381A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1381A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1381a0:
    ctx->pc = 0x1381A8u;
}
