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

// Function: Em10_act_chk_sniper
// Address: 0x127a80 - 0x1283f0
void Em10_act_chk_sniper_0x127a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_sniper_0x127a80");
#endif

    switch (ctx->pc) {
        case 0x127a80u: goto label_127a80;
        case 0x127a84u: goto label_127a84;
        case 0x127a88u: goto label_127a88;
        case 0x127a8cu: goto label_127a8c;
        case 0x127a90u: goto label_127a90;
        case 0x127a94u: goto label_127a94;
        case 0x127a98u: goto label_127a98;
        case 0x127a9cu: goto label_127a9c;
        case 0x127aa0u: goto label_127aa0;
        case 0x127aa4u: goto label_127aa4;
        case 0x127aa8u: goto label_127aa8;
        case 0x127aacu: goto label_127aac;
        case 0x127ab0u: goto label_127ab0;
        case 0x127ab4u: goto label_127ab4;
        case 0x127ab8u: goto label_127ab8;
        case 0x127abcu: goto label_127abc;
        case 0x127ac0u: goto label_127ac0;
        case 0x127ac4u: goto label_127ac4;
        case 0x127ac8u: goto label_127ac8;
        case 0x127accu: goto label_127acc;
        case 0x127ad0u: goto label_127ad0;
        case 0x127ad4u: goto label_127ad4;
        case 0x127ad8u: goto label_127ad8;
        case 0x127adcu: goto label_127adc;
        case 0x127ae0u: goto label_127ae0;
        case 0x127ae4u: goto label_127ae4;
        case 0x127ae8u: goto label_127ae8;
        case 0x127aecu: goto label_127aec;
        case 0x127af0u: goto label_127af0;
        case 0x127af4u: goto label_127af4;
        case 0x127af8u: goto label_127af8;
        case 0x127afcu: goto label_127afc;
        case 0x127b00u: goto label_127b00;
        case 0x127b04u: goto label_127b04;
        case 0x127b08u: goto label_127b08;
        case 0x127b0cu: goto label_127b0c;
        case 0x127b10u: goto label_127b10;
        case 0x127b14u: goto label_127b14;
        case 0x127b18u: goto label_127b18;
        case 0x127b1cu: goto label_127b1c;
        case 0x127b20u: goto label_127b20;
        case 0x127b24u: goto label_127b24;
        case 0x127b28u: goto label_127b28;
        case 0x127b2cu: goto label_127b2c;
        case 0x127b30u: goto label_127b30;
        case 0x127b34u: goto label_127b34;
        case 0x127b38u: goto label_127b38;
        case 0x127b3cu: goto label_127b3c;
        case 0x127b40u: goto label_127b40;
        case 0x127b44u: goto label_127b44;
        case 0x127b48u: goto label_127b48;
        case 0x127b4cu: goto label_127b4c;
        case 0x127b50u: goto label_127b50;
        case 0x127b54u: goto label_127b54;
        case 0x127b58u: goto label_127b58;
        case 0x127b5cu: goto label_127b5c;
        case 0x127b60u: goto label_127b60;
        case 0x127b64u: goto label_127b64;
        case 0x127b68u: goto label_127b68;
        case 0x127b6cu: goto label_127b6c;
        case 0x127b70u: goto label_127b70;
        case 0x127b74u: goto label_127b74;
        case 0x127b78u: goto label_127b78;
        case 0x127b7cu: goto label_127b7c;
        case 0x127b80u: goto label_127b80;
        case 0x127b84u: goto label_127b84;
        case 0x127b88u: goto label_127b88;
        case 0x127b8cu: goto label_127b8c;
        case 0x127b90u: goto label_127b90;
        case 0x127b94u: goto label_127b94;
        case 0x127b98u: goto label_127b98;
        case 0x127b9cu: goto label_127b9c;
        case 0x127ba0u: goto label_127ba0;
        case 0x127ba4u: goto label_127ba4;
        case 0x127ba8u: goto label_127ba8;
        case 0x127bacu: goto label_127bac;
        case 0x127bb0u: goto label_127bb0;
        case 0x127bb4u: goto label_127bb4;
        case 0x127bb8u: goto label_127bb8;
        case 0x127bbcu: goto label_127bbc;
        case 0x127bc0u: goto label_127bc0;
        case 0x127bc4u: goto label_127bc4;
        case 0x127bc8u: goto label_127bc8;
        case 0x127bccu: goto label_127bcc;
        case 0x127bd0u: goto label_127bd0;
        case 0x127bd4u: goto label_127bd4;
        case 0x127bd8u: goto label_127bd8;
        case 0x127bdcu: goto label_127bdc;
        case 0x127be0u: goto label_127be0;
        case 0x127be4u: goto label_127be4;
        case 0x127be8u: goto label_127be8;
        case 0x127becu: goto label_127bec;
        case 0x127bf0u: goto label_127bf0;
        case 0x127bf4u: goto label_127bf4;
        case 0x127bf8u: goto label_127bf8;
        case 0x127bfcu: goto label_127bfc;
        case 0x127c00u: goto label_127c00;
        case 0x127c04u: goto label_127c04;
        case 0x127c08u: goto label_127c08;
        case 0x127c0cu: goto label_127c0c;
        case 0x127c10u: goto label_127c10;
        case 0x127c14u: goto label_127c14;
        case 0x127c18u: goto label_127c18;
        case 0x127c1cu: goto label_127c1c;
        case 0x127c20u: goto label_127c20;
        case 0x127c24u: goto label_127c24;
        case 0x127c28u: goto label_127c28;
        case 0x127c2cu: goto label_127c2c;
        case 0x127c30u: goto label_127c30;
        case 0x127c34u: goto label_127c34;
        case 0x127c38u: goto label_127c38;
        case 0x127c3cu: goto label_127c3c;
        case 0x127c40u: goto label_127c40;
        case 0x127c44u: goto label_127c44;
        case 0x127c48u: goto label_127c48;
        case 0x127c4cu: goto label_127c4c;
        case 0x127c50u: goto label_127c50;
        case 0x127c54u: goto label_127c54;
        case 0x127c58u: goto label_127c58;
        case 0x127c5cu: goto label_127c5c;
        case 0x127c60u: goto label_127c60;
        case 0x127c64u: goto label_127c64;
        case 0x127c68u: goto label_127c68;
        case 0x127c6cu: goto label_127c6c;
        case 0x127c70u: goto label_127c70;
        case 0x127c74u: goto label_127c74;
        case 0x127c78u: goto label_127c78;
        case 0x127c7cu: goto label_127c7c;
        case 0x127c80u: goto label_127c80;
        case 0x127c84u: goto label_127c84;
        case 0x127c88u: goto label_127c88;
        case 0x127c8cu: goto label_127c8c;
        case 0x127c90u: goto label_127c90;
        case 0x127c94u: goto label_127c94;
        case 0x127c98u: goto label_127c98;
        case 0x127c9cu: goto label_127c9c;
        case 0x127ca0u: goto label_127ca0;
        case 0x127ca4u: goto label_127ca4;
        case 0x127ca8u: goto label_127ca8;
        case 0x127cacu: goto label_127cac;
        case 0x127cb0u: goto label_127cb0;
        case 0x127cb4u: goto label_127cb4;
        case 0x127cb8u: goto label_127cb8;
        case 0x127cbcu: goto label_127cbc;
        case 0x127cc0u: goto label_127cc0;
        case 0x127cc4u: goto label_127cc4;
        case 0x127cc8u: goto label_127cc8;
        case 0x127cccu: goto label_127ccc;
        case 0x127cd0u: goto label_127cd0;
        case 0x127cd4u: goto label_127cd4;
        case 0x127cd8u: goto label_127cd8;
        case 0x127cdcu: goto label_127cdc;
        case 0x127ce0u: goto label_127ce0;
        case 0x127ce4u: goto label_127ce4;
        case 0x127ce8u: goto label_127ce8;
        case 0x127cecu: goto label_127cec;
        case 0x127cf0u: goto label_127cf0;
        case 0x127cf4u: goto label_127cf4;
        case 0x127cf8u: goto label_127cf8;
        case 0x127cfcu: goto label_127cfc;
        case 0x127d00u: goto label_127d00;
        case 0x127d04u: goto label_127d04;
        case 0x127d08u: goto label_127d08;
        case 0x127d0cu: goto label_127d0c;
        case 0x127d10u: goto label_127d10;
        case 0x127d14u: goto label_127d14;
        case 0x127d18u: goto label_127d18;
        case 0x127d1cu: goto label_127d1c;
        case 0x127d20u: goto label_127d20;
        case 0x127d24u: goto label_127d24;
        case 0x127d28u: goto label_127d28;
        case 0x127d2cu: goto label_127d2c;
        case 0x127d30u: goto label_127d30;
        case 0x127d34u: goto label_127d34;
        case 0x127d38u: goto label_127d38;
        case 0x127d3cu: goto label_127d3c;
        case 0x127d40u: goto label_127d40;
        case 0x127d44u: goto label_127d44;
        case 0x127d48u: goto label_127d48;
        case 0x127d4cu: goto label_127d4c;
        case 0x127d50u: goto label_127d50;
        case 0x127d54u: goto label_127d54;
        case 0x127d58u: goto label_127d58;
        case 0x127d5cu: goto label_127d5c;
        case 0x127d60u: goto label_127d60;
        case 0x127d64u: goto label_127d64;
        case 0x127d68u: goto label_127d68;
        case 0x127d6cu: goto label_127d6c;
        case 0x127d70u: goto label_127d70;
        case 0x127d74u: goto label_127d74;
        case 0x127d78u: goto label_127d78;
        case 0x127d7cu: goto label_127d7c;
        case 0x127d80u: goto label_127d80;
        case 0x127d84u: goto label_127d84;
        case 0x127d88u: goto label_127d88;
        case 0x127d8cu: goto label_127d8c;
        case 0x127d90u: goto label_127d90;
        case 0x127d94u: goto label_127d94;
        case 0x127d98u: goto label_127d98;
        case 0x127d9cu: goto label_127d9c;
        case 0x127da0u: goto label_127da0;
        case 0x127da4u: goto label_127da4;
        case 0x127da8u: goto label_127da8;
        case 0x127dacu: goto label_127dac;
        case 0x127db0u: goto label_127db0;
        case 0x127db4u: goto label_127db4;
        case 0x127db8u: goto label_127db8;
        case 0x127dbcu: goto label_127dbc;
        case 0x127dc0u: goto label_127dc0;
        case 0x127dc4u: goto label_127dc4;
        case 0x127dc8u: goto label_127dc8;
        case 0x127dccu: goto label_127dcc;
        case 0x127dd0u: goto label_127dd0;
        case 0x127dd4u: goto label_127dd4;
        case 0x127dd8u: goto label_127dd8;
        case 0x127ddcu: goto label_127ddc;
        case 0x127de0u: goto label_127de0;
        case 0x127de4u: goto label_127de4;
        case 0x127de8u: goto label_127de8;
        case 0x127decu: goto label_127dec;
        case 0x127df0u: goto label_127df0;
        case 0x127df4u: goto label_127df4;
        case 0x127df8u: goto label_127df8;
        case 0x127dfcu: goto label_127dfc;
        case 0x127e00u: goto label_127e00;
        case 0x127e04u: goto label_127e04;
        case 0x127e08u: goto label_127e08;
        case 0x127e0cu: goto label_127e0c;
        case 0x127e10u: goto label_127e10;
        case 0x127e14u: goto label_127e14;
        case 0x127e18u: goto label_127e18;
        case 0x127e1cu: goto label_127e1c;
        case 0x127e20u: goto label_127e20;
        case 0x127e24u: goto label_127e24;
        case 0x127e28u: goto label_127e28;
        case 0x127e2cu: goto label_127e2c;
        case 0x127e30u: goto label_127e30;
        case 0x127e34u: goto label_127e34;
        case 0x127e38u: goto label_127e38;
        case 0x127e3cu: goto label_127e3c;
        case 0x127e40u: goto label_127e40;
        case 0x127e44u: goto label_127e44;
        case 0x127e48u: goto label_127e48;
        case 0x127e4cu: goto label_127e4c;
        case 0x127e50u: goto label_127e50;
        case 0x127e54u: goto label_127e54;
        case 0x127e58u: goto label_127e58;
        case 0x127e5cu: goto label_127e5c;
        case 0x127e60u: goto label_127e60;
        case 0x127e64u: goto label_127e64;
        case 0x127e68u: goto label_127e68;
        case 0x127e6cu: goto label_127e6c;
        case 0x127e70u: goto label_127e70;
        case 0x127e74u: goto label_127e74;
        case 0x127e78u: goto label_127e78;
        case 0x127e7cu: goto label_127e7c;
        case 0x127e80u: goto label_127e80;
        case 0x127e84u: goto label_127e84;
        case 0x127e88u: goto label_127e88;
        case 0x127e8cu: goto label_127e8c;
        case 0x127e90u: goto label_127e90;
        case 0x127e94u: goto label_127e94;
        case 0x127e98u: goto label_127e98;
        case 0x127e9cu: goto label_127e9c;
        case 0x127ea0u: goto label_127ea0;
        case 0x127ea4u: goto label_127ea4;
        case 0x127ea8u: goto label_127ea8;
        case 0x127eacu: goto label_127eac;
        case 0x127eb0u: goto label_127eb0;
        case 0x127eb4u: goto label_127eb4;
        case 0x127eb8u: goto label_127eb8;
        case 0x127ebcu: goto label_127ebc;
        case 0x127ec0u: goto label_127ec0;
        case 0x127ec4u: goto label_127ec4;
        case 0x127ec8u: goto label_127ec8;
        case 0x127eccu: goto label_127ecc;
        case 0x127ed0u: goto label_127ed0;
        case 0x127ed4u: goto label_127ed4;
        case 0x127ed8u: goto label_127ed8;
        case 0x127edcu: goto label_127edc;
        case 0x127ee0u: goto label_127ee0;
        case 0x127ee4u: goto label_127ee4;
        case 0x127ee8u: goto label_127ee8;
        case 0x127eecu: goto label_127eec;
        case 0x127ef0u: goto label_127ef0;
        case 0x127ef4u: goto label_127ef4;
        case 0x127ef8u: goto label_127ef8;
        case 0x127efcu: goto label_127efc;
        case 0x127f00u: goto label_127f00;
        case 0x127f04u: goto label_127f04;
        case 0x127f08u: goto label_127f08;
        case 0x127f0cu: goto label_127f0c;
        case 0x127f10u: goto label_127f10;
        case 0x127f14u: goto label_127f14;
        case 0x127f18u: goto label_127f18;
        case 0x127f1cu: goto label_127f1c;
        case 0x127f20u: goto label_127f20;
        case 0x127f24u: goto label_127f24;
        case 0x127f28u: goto label_127f28;
        case 0x127f2cu: goto label_127f2c;
        case 0x127f30u: goto label_127f30;
        case 0x127f34u: goto label_127f34;
        case 0x127f38u: goto label_127f38;
        case 0x127f3cu: goto label_127f3c;
        case 0x127f40u: goto label_127f40;
        case 0x127f44u: goto label_127f44;
        case 0x127f48u: goto label_127f48;
        case 0x127f4cu: goto label_127f4c;
        case 0x127f50u: goto label_127f50;
        case 0x127f54u: goto label_127f54;
        case 0x127f58u: goto label_127f58;
        case 0x127f5cu: goto label_127f5c;
        case 0x127f60u: goto label_127f60;
        case 0x127f64u: goto label_127f64;
        case 0x127f68u: goto label_127f68;
        case 0x127f6cu: goto label_127f6c;
        case 0x127f70u: goto label_127f70;
        case 0x127f74u: goto label_127f74;
        case 0x127f78u: goto label_127f78;
        case 0x127f7cu: goto label_127f7c;
        case 0x127f80u: goto label_127f80;
        case 0x127f84u: goto label_127f84;
        case 0x127f88u: goto label_127f88;
        case 0x127f8cu: goto label_127f8c;
        case 0x127f90u: goto label_127f90;
        case 0x127f94u: goto label_127f94;
        case 0x127f98u: goto label_127f98;
        case 0x127f9cu: goto label_127f9c;
        case 0x127fa0u: goto label_127fa0;
        case 0x127fa4u: goto label_127fa4;
        case 0x127fa8u: goto label_127fa8;
        case 0x127facu: goto label_127fac;
        case 0x127fb0u: goto label_127fb0;
        case 0x127fb4u: goto label_127fb4;
        case 0x127fb8u: goto label_127fb8;
        case 0x127fbcu: goto label_127fbc;
        case 0x127fc0u: goto label_127fc0;
        case 0x127fc4u: goto label_127fc4;
        case 0x127fc8u: goto label_127fc8;
        case 0x127fccu: goto label_127fcc;
        case 0x127fd0u: goto label_127fd0;
        case 0x127fd4u: goto label_127fd4;
        case 0x127fd8u: goto label_127fd8;
        case 0x127fdcu: goto label_127fdc;
        case 0x127fe0u: goto label_127fe0;
        case 0x127fe4u: goto label_127fe4;
        case 0x127fe8u: goto label_127fe8;
        case 0x127fecu: goto label_127fec;
        case 0x127ff0u: goto label_127ff0;
        case 0x127ff4u: goto label_127ff4;
        case 0x127ff8u: goto label_127ff8;
        case 0x127ffcu: goto label_127ffc;
        case 0x128000u: goto label_128000;
        case 0x128004u: goto label_128004;
        case 0x128008u: goto label_128008;
        case 0x12800cu: goto label_12800c;
        case 0x128010u: goto label_128010;
        case 0x128014u: goto label_128014;
        case 0x128018u: goto label_128018;
        case 0x12801cu: goto label_12801c;
        case 0x128020u: goto label_128020;
        case 0x128024u: goto label_128024;
        case 0x128028u: goto label_128028;
        case 0x12802cu: goto label_12802c;
        case 0x128030u: goto label_128030;
        case 0x128034u: goto label_128034;
        case 0x128038u: goto label_128038;
        case 0x12803cu: goto label_12803c;
        case 0x128040u: goto label_128040;
        case 0x128044u: goto label_128044;
        case 0x128048u: goto label_128048;
        case 0x12804cu: goto label_12804c;
        case 0x128050u: goto label_128050;
        case 0x128054u: goto label_128054;
        case 0x128058u: goto label_128058;
        case 0x12805cu: goto label_12805c;
        case 0x128060u: goto label_128060;
        case 0x128064u: goto label_128064;
        case 0x128068u: goto label_128068;
        case 0x12806cu: goto label_12806c;
        case 0x128070u: goto label_128070;
        case 0x128074u: goto label_128074;
        case 0x128078u: goto label_128078;
        case 0x12807cu: goto label_12807c;
        case 0x128080u: goto label_128080;
        case 0x128084u: goto label_128084;
        case 0x128088u: goto label_128088;
        case 0x12808cu: goto label_12808c;
        case 0x128090u: goto label_128090;
        case 0x128094u: goto label_128094;
        case 0x128098u: goto label_128098;
        case 0x12809cu: goto label_12809c;
        case 0x1280a0u: goto label_1280a0;
        case 0x1280a4u: goto label_1280a4;
        case 0x1280a8u: goto label_1280a8;
        case 0x1280acu: goto label_1280ac;
        case 0x1280b0u: goto label_1280b0;
        case 0x1280b4u: goto label_1280b4;
        case 0x1280b8u: goto label_1280b8;
        case 0x1280bcu: goto label_1280bc;
        case 0x1280c0u: goto label_1280c0;
        case 0x1280c4u: goto label_1280c4;
        case 0x1280c8u: goto label_1280c8;
        case 0x1280ccu: goto label_1280cc;
        case 0x1280d0u: goto label_1280d0;
        case 0x1280d4u: goto label_1280d4;
        case 0x1280d8u: goto label_1280d8;
        case 0x1280dcu: goto label_1280dc;
        case 0x1280e0u: goto label_1280e0;
        case 0x1280e4u: goto label_1280e4;
        case 0x1280e8u: goto label_1280e8;
        case 0x1280ecu: goto label_1280ec;
        case 0x1280f0u: goto label_1280f0;
        case 0x1280f4u: goto label_1280f4;
        case 0x1280f8u: goto label_1280f8;
        case 0x1280fcu: goto label_1280fc;
        case 0x128100u: goto label_128100;
        case 0x128104u: goto label_128104;
        case 0x128108u: goto label_128108;
        case 0x12810cu: goto label_12810c;
        case 0x128110u: goto label_128110;
        case 0x128114u: goto label_128114;
        case 0x128118u: goto label_128118;
        case 0x12811cu: goto label_12811c;
        case 0x128120u: goto label_128120;
        case 0x128124u: goto label_128124;
        case 0x128128u: goto label_128128;
        case 0x12812cu: goto label_12812c;
        case 0x128130u: goto label_128130;
        case 0x128134u: goto label_128134;
        case 0x128138u: goto label_128138;
        case 0x12813cu: goto label_12813c;
        case 0x128140u: goto label_128140;
        case 0x128144u: goto label_128144;
        case 0x128148u: goto label_128148;
        case 0x12814cu: goto label_12814c;
        case 0x128150u: goto label_128150;
        case 0x128154u: goto label_128154;
        case 0x128158u: goto label_128158;
        case 0x12815cu: goto label_12815c;
        case 0x128160u: goto label_128160;
        case 0x128164u: goto label_128164;
        case 0x128168u: goto label_128168;
        case 0x12816cu: goto label_12816c;
        case 0x128170u: goto label_128170;
        case 0x128174u: goto label_128174;
        case 0x128178u: goto label_128178;
        case 0x12817cu: goto label_12817c;
        case 0x128180u: goto label_128180;
        case 0x128184u: goto label_128184;
        case 0x128188u: goto label_128188;
        case 0x12818cu: goto label_12818c;
        case 0x128190u: goto label_128190;
        case 0x128194u: goto label_128194;
        case 0x128198u: goto label_128198;
        case 0x12819cu: goto label_12819c;
        case 0x1281a0u: goto label_1281a0;
        case 0x1281a4u: goto label_1281a4;
        case 0x1281a8u: goto label_1281a8;
        case 0x1281acu: goto label_1281ac;
        case 0x1281b0u: goto label_1281b0;
        case 0x1281b4u: goto label_1281b4;
        case 0x1281b8u: goto label_1281b8;
        case 0x1281bcu: goto label_1281bc;
        case 0x1281c0u: goto label_1281c0;
        case 0x1281c4u: goto label_1281c4;
        case 0x1281c8u: goto label_1281c8;
        case 0x1281ccu: goto label_1281cc;
        case 0x1281d0u: goto label_1281d0;
        case 0x1281d4u: goto label_1281d4;
        case 0x1281d8u: goto label_1281d8;
        case 0x1281dcu: goto label_1281dc;
        case 0x1281e0u: goto label_1281e0;
        case 0x1281e4u: goto label_1281e4;
        case 0x1281e8u: goto label_1281e8;
        case 0x1281ecu: goto label_1281ec;
        case 0x1281f0u: goto label_1281f0;
        case 0x1281f4u: goto label_1281f4;
        case 0x1281f8u: goto label_1281f8;
        case 0x1281fcu: goto label_1281fc;
        case 0x128200u: goto label_128200;
        case 0x128204u: goto label_128204;
        case 0x128208u: goto label_128208;
        case 0x12820cu: goto label_12820c;
        case 0x128210u: goto label_128210;
        case 0x128214u: goto label_128214;
        case 0x128218u: goto label_128218;
        case 0x12821cu: goto label_12821c;
        case 0x128220u: goto label_128220;
        case 0x128224u: goto label_128224;
        case 0x128228u: goto label_128228;
        case 0x12822cu: goto label_12822c;
        case 0x128230u: goto label_128230;
        case 0x128234u: goto label_128234;
        case 0x128238u: goto label_128238;
        case 0x12823cu: goto label_12823c;
        case 0x128240u: goto label_128240;
        case 0x128244u: goto label_128244;
        case 0x128248u: goto label_128248;
        case 0x12824cu: goto label_12824c;
        case 0x128250u: goto label_128250;
        case 0x128254u: goto label_128254;
        case 0x128258u: goto label_128258;
        case 0x12825cu: goto label_12825c;
        case 0x128260u: goto label_128260;
        case 0x128264u: goto label_128264;
        case 0x128268u: goto label_128268;
        case 0x12826cu: goto label_12826c;
        case 0x128270u: goto label_128270;
        case 0x128274u: goto label_128274;
        case 0x128278u: goto label_128278;
        case 0x12827cu: goto label_12827c;
        case 0x128280u: goto label_128280;
        case 0x128284u: goto label_128284;
        case 0x128288u: goto label_128288;
        case 0x12828cu: goto label_12828c;
        case 0x128290u: goto label_128290;
        case 0x128294u: goto label_128294;
        case 0x128298u: goto label_128298;
        case 0x12829cu: goto label_12829c;
        case 0x1282a0u: goto label_1282a0;
        case 0x1282a4u: goto label_1282a4;
        case 0x1282a8u: goto label_1282a8;
        case 0x1282acu: goto label_1282ac;
        case 0x1282b0u: goto label_1282b0;
        case 0x1282b4u: goto label_1282b4;
        case 0x1282b8u: goto label_1282b8;
        case 0x1282bcu: goto label_1282bc;
        case 0x1282c0u: goto label_1282c0;
        case 0x1282c4u: goto label_1282c4;
        case 0x1282c8u: goto label_1282c8;
        case 0x1282ccu: goto label_1282cc;
        case 0x1282d0u: goto label_1282d0;
        case 0x1282d4u: goto label_1282d4;
        case 0x1282d8u: goto label_1282d8;
        case 0x1282dcu: goto label_1282dc;
        case 0x1282e0u: goto label_1282e0;
        case 0x1282e4u: goto label_1282e4;
        case 0x1282e8u: goto label_1282e8;
        case 0x1282ecu: goto label_1282ec;
        case 0x1282f0u: goto label_1282f0;
        case 0x1282f4u: goto label_1282f4;
        case 0x1282f8u: goto label_1282f8;
        case 0x1282fcu: goto label_1282fc;
        case 0x128300u: goto label_128300;
        case 0x128304u: goto label_128304;
        case 0x128308u: goto label_128308;
        case 0x12830cu: goto label_12830c;
        case 0x128310u: goto label_128310;
        case 0x128314u: goto label_128314;
        case 0x128318u: goto label_128318;
        case 0x12831cu: goto label_12831c;
        case 0x128320u: goto label_128320;
        case 0x128324u: goto label_128324;
        case 0x128328u: goto label_128328;
        case 0x12832cu: goto label_12832c;
        case 0x128330u: goto label_128330;
        case 0x128334u: goto label_128334;
        case 0x128338u: goto label_128338;
        case 0x12833cu: goto label_12833c;
        case 0x128340u: goto label_128340;
        case 0x128344u: goto label_128344;
        case 0x128348u: goto label_128348;
        case 0x12834cu: goto label_12834c;
        case 0x128350u: goto label_128350;
        case 0x128354u: goto label_128354;
        case 0x128358u: goto label_128358;
        case 0x12835cu: goto label_12835c;
        case 0x128360u: goto label_128360;
        case 0x128364u: goto label_128364;
        case 0x128368u: goto label_128368;
        case 0x12836cu: goto label_12836c;
        case 0x128370u: goto label_128370;
        case 0x128374u: goto label_128374;
        case 0x128378u: goto label_128378;
        case 0x12837cu: goto label_12837c;
        case 0x128380u: goto label_128380;
        case 0x128384u: goto label_128384;
        case 0x128388u: goto label_128388;
        case 0x12838cu: goto label_12838c;
        case 0x128390u: goto label_128390;
        case 0x128394u: goto label_128394;
        case 0x128398u: goto label_128398;
        case 0x12839cu: goto label_12839c;
        case 0x1283a0u: goto label_1283a0;
        case 0x1283a4u: goto label_1283a4;
        case 0x1283a8u: goto label_1283a8;
        case 0x1283acu: goto label_1283ac;
        case 0x1283b0u: goto label_1283b0;
        case 0x1283b4u: goto label_1283b4;
        case 0x1283b8u: goto label_1283b8;
        case 0x1283bcu: goto label_1283bc;
        case 0x1283c0u: goto label_1283c0;
        case 0x1283c4u: goto label_1283c4;
        case 0x1283c8u: goto label_1283c8;
        case 0x1283ccu: goto label_1283cc;
        case 0x1283d0u: goto label_1283d0;
        case 0x1283d4u: goto label_1283d4;
        case 0x1283d8u: goto label_1283d8;
        case 0x1283dcu: goto label_1283dc;
        case 0x1283e0u: goto label_1283e0;
        case 0x1283e4u: goto label_1283e4;
        case 0x1283e8u: goto label_1283e8;
        case 0x1283ecu: goto label_1283ec;
        default: break;
    }

    ctx->pc = 0x127a80u;

label_127a80:
    // 0x127a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_127a84:
    // 0x127a84: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x127a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_127a88:
    // 0x127a88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x127a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_127a8c:
    // 0x127a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_127a90:
    // 0x127a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_127a94:
    // 0x127a94: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x127a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_127a98:
    // 0x127a98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127a9c:
    // 0x127a9c: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x127a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_127aa0:
    // 0x127aa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127aa4:
    // 0x127aa4: 0xc05cdd8  jal         func_173760
label_127aa8:
    if (ctx->pc == 0x127AA8u) {
        ctx->pc = 0x127AACu;
        goto label_127aac;
    }
    ctx->pc = 0x127AA4u;
    SET_GPR_U32(ctx, 31, 0x127AACu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x127AA4u, 0x127AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AACu;
label_127aac:
    // 0x127aac: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x127aacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_127ab0:
    // 0x127ab0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127ab4:
    // 0x127ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127ab8:
    // 0x127ab8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x127ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_127abc:
    // 0x127abc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x127abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_127ac0:
    // 0x127ac0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x127ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_127ac4:
    // 0x127ac4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x127ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_127ac8:
    // 0x127ac8: 0xc05cc90  jal         func_173240
label_127acc:
    if (ctx->pc == 0x127ACCu) {
        ctx->pc = 0x127AD0u;
        goto label_127ad0;
    }
    ctx->pc = 0x127AC8u;
    SET_GPR_U32(ctx, 31, 0x127AD0u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x127AC8u, 0x127AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AD0u;
label_127ad0:
    // 0x127ad0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x127ad0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_127ad4:
    // 0x127ad4: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x127ad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_127ad8:
    // 0x127ad8: 0x1020023e  beqz        $at, . + 4 + (0x23E << 2)
label_127adc:
    if (ctx->pc == 0x127ADCu) {
        ctx->pc = 0x127AE0u;
        goto label_127ae0;
    }
    ctx->pc = 0x127AD8u;
    {
        const bool branch_taken_0x127ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ad8) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127AE0u;
label_127ae0:
    // 0x127ae0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x127ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_127ae4:
    // 0x127ae4: 0x2464e320  addiu       $a0, $v1, -0x1CE0
    ctx->pc = 0x127ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_127ae8:
    // 0x127ae8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x127ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_127aec:
    // 0x127aec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x127aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_127af0:
    // 0x127af0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x127af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_127af4:
    // 0x127af4: 0x600008  jr          $v1
label_127af8:
    if (ctx->pc == 0x127AF8u) {
        ctx->pc = 0x127AFCu;
        goto label_127afc;
    }
    ctx->pc = 0x127AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127AF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x127AFCu;
label_127afc:
    // 0x127afc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x127afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_127b00:
    // 0x127b00: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x127b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_127b04:
    // 0x127b04: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_127b08:
    if (ctx->pc == 0x127B08u) {
        ctx->pc = 0x127B0Cu;
        goto label_127b0c;
    }
    ctx->pc = 0x127B04u;
    {
        const bool branch_taken_0x127b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b04) {
            ctx->pc = 0x127B1Cu;
            goto label_127b1c;
        }
    }
    ctx->pc = 0x127B0Cu;
label_127b0c:
    // 0x127b0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127b10:
    // 0x127b10: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x127b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_127b14:
    // 0x127b14: 0x1060022f  beqz        $v1, . + 4 + (0x22F << 2)
label_127b18:
    if (ctx->pc == 0x127B18u) {
        ctx->pc = 0x127B1Cu;
        goto label_127b1c;
    }
    ctx->pc = 0x127B14u;
    {
        const bool branch_taken_0x127b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b14) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127B1Cu;
label_127b1c:
    // 0x127b1c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x127b1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_127b20:
    // 0x127b20: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_127b24:
    if (ctx->pc == 0x127B24u) {
        ctx->pc = 0x127B28u;
        goto label_127b28;
    }
    ctx->pc = 0x127B20u;
    {
        const bool branch_taken_0x127b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b20) {
            ctx->pc = 0x127B64u;
            goto label_127b64;
        }
    }
    ctx->pc = 0x127B28u;
label_127b28:
    // 0x127b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127b2c:
    // 0x127b2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127b30:
    // 0x127b30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127b34:
    // 0x127b34: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x127b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_127b38:
    // 0x127b38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127b3c:
    // 0x127b3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127b40:
    // 0x127b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127b44:
    // 0x127b44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127b48:
    // 0x127b48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127b4c:
    // 0x127b4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127b50:
    // 0x127b50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x127b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_127b54:
    // 0x127b54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127b58:
    // 0x127b58: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x127b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_127b5c:
    // 0x127b5c: 0x1000021d  b           . + 4 + (0x21D << 2)
label_127b60:
    if (ctx->pc == 0x127B60u) {
        ctx->pc = 0x127B64u;
        goto label_127b64;
    }
    ctx->pc = 0x127B5Cu;
    {
        const bool branch_taken_0x127b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b5c) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127B64u;
label_127b64:
    // 0x127b64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x127b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_127b68:
    // 0x127b68: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x127b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_127b6c:
    // 0x127b6c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_127b70:
    if (ctx->pc == 0x127B70u) {
        ctx->pc = 0x127B74u;
        goto label_127b74;
    }
    ctx->pc = 0x127B6Cu;
    {
        const bool branch_taken_0x127b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b6c) {
            ctx->pc = 0x127B8Cu;
            goto label_127b8c;
        }
    }
    ctx->pc = 0x127B74u;
label_127b74:
    // 0x127b74: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x127b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_127b78:
    // 0x127b78: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_127b7c:
    // 0x127b7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x127b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_127b80:
    // 0x127b80: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x127b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_127b84:
    // 0x127b84: 0x10000213  b           . + 4 + (0x213 << 2)
label_127b88:
    if (ctx->pc == 0x127B88u) {
        ctx->pc = 0x127B8Cu;
        goto label_127b8c;
    }
    ctx->pc = 0x127B84u;
    {
        const bool branch_taken_0x127b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b84) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127B8Cu;
label_127b8c:
    // 0x127b8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127b90:
    // 0x127b90: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x127b90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_127b94:
    // 0x127b94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x127b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_127b98:
    // 0x127b98: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x127b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_127b9c:
    // 0x127b9c: 0x1060012f  beqz        $v1, . + 4 + (0x12F << 2)
label_127ba0:
    if (ctx->pc == 0x127BA0u) {
        ctx->pc = 0x127BA4u;
        goto label_127ba4;
    }
    ctx->pc = 0x127B9Cu;
    {
        const bool branch_taken_0x127b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b9c) {
            ctx->pc = 0x12805Cu;
            goto label_12805c;
        }
    }
    ctx->pc = 0x127BA4u;
label_127ba4:
    // 0x127ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127ba8:
    // 0x127ba8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127bac:
    // 0x127bac: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x127bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_127bb0:
    // 0x127bb0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_127bb4:
    // 0x127bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127bb8:
    // 0x127bb8: 0x0  nop
    ctx->pc = 0x127bb8u;
    // NOP
label_127bbc:
    // 0x127bbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127bc0:
    // 0x127bc0: 0x0  nop
    ctx->pc = 0x127bc0u;
    // NOP
label_127bc4:
    // 0x127bc4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_127bc8:
    if (ctx->pc == 0x127BC8u) {
        ctx->pc = 0x127BCCu;
        goto label_127bcc;
    }
    ctx->pc = 0x127BC4u;
    {
        const bool branch_taken_0x127bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127bc4) {
            ctx->pc = 0x127C10u;
            goto label_127c10;
        }
    }
    ctx->pc = 0x127BCCu;
label_127bcc:
    // 0x127bcc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x127bccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_127bd0:
    // 0x127bd0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_127bd4:
    if (ctx->pc == 0x127BD4u) {
        ctx->pc = 0x127BD8u;
        goto label_127bd8;
    }
    ctx->pc = 0x127BD0u;
    {
        const bool branch_taken_0x127bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127bd0) {
            ctx->pc = 0x127C08u;
            goto label_127c08;
        }
    }
    ctx->pc = 0x127BD8u;
label_127bd8:
    // 0x127bd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127bdc:
    // 0x127bdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127be0:
    // 0x127be0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127be4:
    // 0x127be4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x127be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_127be8:
    // 0x127be8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127bec:
    // 0x127bec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127bf0:
    // 0x127bf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127bf4:
    // 0x127bf4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127bf8:
    // 0x127bf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127bfc:
    // 0x127bfc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127c00:
    // 0x127c00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127c04:
    // 0x127c04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127c08:
    // 0x127c08: 0x100001f2  b           . + 4 + (0x1F2 << 2)
label_127c0c:
    if (ctx->pc == 0x127C0Cu) {
        ctx->pc = 0x127C10u;
        goto label_127c10;
    }
    ctx->pc = 0x127C08u;
    {
        const bool branch_taken_0x127c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c08) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127C10u;
label_127c10:
    // 0x127c10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127c14:
    // 0x127c14: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127c18:
    // 0x127c18: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x127c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_127c1c:
    // 0x127c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127c20:
    // 0x127c20: 0x0  nop
    ctx->pc = 0x127c20u;
    // NOP
label_127c24:
    // 0x127c24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127c28:
    // 0x127c28: 0x0  nop
    ctx->pc = 0x127c28u;
    // NOP
label_127c2c:
    // 0x127c2c: 0x45000086  bc1f        . + 4 + (0x86 << 2)
label_127c30:
    if (ctx->pc == 0x127C30u) {
        ctx->pc = 0x127C34u;
        goto label_127c34;
    }
    ctx->pc = 0x127C2Cu;
    {
        const bool branch_taken_0x127c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127c2c) {
            ctx->pc = 0x127E48u;
            goto label_127e48;
        }
    }
    ctx->pc = 0x127C34u;
label_127c34:
    // 0x127c34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x127c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127c38:
    // 0x127c38: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x127c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127c3c:
    // 0x127c3c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x127c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_127c40:
    // 0x127c40: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x127c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_127c44:
    // 0x127c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127c48:
    // 0x127c48: 0x0  nop
    ctx->pc = 0x127c48u;
    // NOP
label_127c4c:
    // 0x127c4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x127c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127c50:
    // 0x127c50: 0x0  nop
    ctx->pc = 0x127c50u;
    // NOP
label_127c54:
    // 0x127c54: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_127c58:
    if (ctx->pc == 0x127C58u) {
        ctx->pc = 0x127C5Cu;
        goto label_127c5c;
    }
    ctx->pc = 0x127C54u;
    {
        const bool branch_taken_0x127c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127c54) {
            ctx->pc = 0x127D2Cu;
            goto label_127d2c;
        }
    }
    ctx->pc = 0x127C5Cu;
label_127c5c:
    // 0x127c5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_127c60:
    // 0x127c60: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x127c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_127c64:
    // 0x127c64: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x127c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_127c68:
    // 0x127c68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_127c6c:
    if (ctx->pc == 0x127C6Cu) {
        ctx->pc = 0x127C70u;
        goto label_127c70;
    }
    ctx->pc = 0x127C68u;
    {
        const bool branch_taken_0x127c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127c68) {
            ctx->pc = 0x127C80u;
            goto label_127c80;
        }
    }
    ctx->pc = 0x127C70u;
label_127c70:
    // 0x127c70: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x127c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_127c74:
    // 0x127c74: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x127c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_127c78:
    // 0x127c78: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_127c7c:
    if (ctx->pc == 0x127C7Cu) {
        ctx->pc = 0x127C80u;
        goto label_127c80;
    }
    ctx->pc = 0x127C78u;
    {
        const bool branch_taken_0x127c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c78) {
            ctx->pc = 0x127D2Cu;
            goto label_127d2c;
        }
    }
    ctx->pc = 0x127C80u;
label_127c80:
    // 0x127c80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127c84:
    // 0x127c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127c88:
    // 0x127c88: 0xc05d25c  jal         func_174970
label_127c8c:
    if (ctx->pc == 0x127C8Cu) {
        ctx->pc = 0x127C90u;
        goto label_127c90;
    }
    ctx->pc = 0x127C88u;
    SET_GPR_U32(ctx, 31, 0x127C90u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127C88u, 0x127C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C90u;
label_127c90:
    // 0x127c90: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_127c94:
    if (ctx->pc == 0x127C94u) {
        ctx->pc = 0x127C98u;
        goto label_127c98;
    }
    ctx->pc = 0x127C90u;
    {
        const bool branch_taken_0x127c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c90) {
            ctx->pc = 0x127D2Cu;
            goto label_127d2c;
        }
    }
    ctx->pc = 0x127C98u;
label_127c98:
    // 0x127c98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127c9c:
    // 0x127c9c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127ca0:
    // 0x127ca0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_127ca4:
    // 0x127ca4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127ca8:
    // 0x127ca8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127cac:
    // 0x127cac: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127cb0:
    // 0x127cb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_127cb4:
    // 0x127cb4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x127cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127cb8:
    // 0x127cb8: 0x0  nop
    ctx->pc = 0x127cb8u;
    // NOP
label_127cbc:
    // 0x127cbc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_127cc0:
    if (ctx->pc == 0x127CC0u) {
        ctx->pc = 0x127CC4u;
        goto label_127cc4;
    }
    ctx->pc = 0x127CBCu;
    {
        const bool branch_taken_0x127cbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127cbc) {
            ctx->pc = 0x127D2Cu;
            goto label_127d2c;
        }
    }
    ctx->pc = 0x127CC4u;
label_127cc4:
    // 0x127cc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127cc8:
    // 0x127cc8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127ccc:
    // 0x127ccc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127cd0:
    // 0x127cd0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127cd4:
    // 0x127cd4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_127cd8:
    // 0x127cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127cdc:
    // 0x127cdc: 0x0  nop
    ctx->pc = 0x127cdcu;
    // NOP
label_127ce0:
    // 0x127ce0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x127ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_127ce4:
    // 0x127ce4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x127ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127ce8:
    // 0x127ce8: 0x0  nop
    ctx->pc = 0x127ce8u;
    // NOP
label_127cec:
    // 0x127cec: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_127cf0:
    if (ctx->pc == 0x127CF0u) {
        ctx->pc = 0x127CF4u;
        goto label_127cf4;
    }
    ctx->pc = 0x127CECu;
    {
        const bool branch_taken_0x127cec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127cec) {
            ctx->pc = 0x127D2Cu;
            goto label_127d2c;
        }
    }
    ctx->pc = 0x127CF4u;
label_127cf4:
    // 0x127cf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127cf8:
    // 0x127cf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127cfc:
    // 0x127cfc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127d00:
    // 0x127d00: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x127d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_127d04:
    // 0x127d04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127d08:
    // 0x127d08: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127d0c:
    // 0x127d0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127d10:
    // 0x127d10: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127d14:
    // 0x127d14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127d18:
    // 0x127d18: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127d18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127d1c:
    // 0x127d1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127d20:
    // 0x127d20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127d24:
    // 0x127d24: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_127d28:
    if (ctx->pc == 0x127D28u) {
        ctx->pc = 0x127D2Cu;
        goto label_127d2c;
    }
    ctx->pc = 0x127D24u;
    {
        const bool branch_taken_0x127d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d24) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127D2Cu;
label_127d2c:
    // 0x127d2c: 0xc067694  jal         func_19DA50
label_127d30:
    if (ctx->pc == 0x127D30u) {
        ctx->pc = 0x127D34u;
        goto label_127d34;
    }
    ctx->pc = 0x127D2Cu;
    SET_GPR_U32(ctx, 31, 0x127D34u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127D2Cu, 0x127D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127D34u;
label_127d34:
    // 0x127d34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_127d38:
    // 0x127d38: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x127d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127d3c:
    // 0x127d3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127d40:
    // 0x127d40: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_127d44:
    if (ctx->pc == 0x127D44u) {
        ctx->pc = 0x127D48u;
        goto label_127d48;
    }
    ctx->pc = 0x127D40u;
    {
        const bool branch_taken_0x127d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x127d40) {
            ctx->pc = 0x127D58u;
            goto label_127d58;
        }
    }
    ctx->pc = 0x127D48u;
label_127d48:
    // 0x127d48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_127d4c:
    if (ctx->pc == 0x127D4Cu) {
        ctx->pc = 0x127D50u;
        goto label_127d50;
    }
    ctx->pc = 0x127D48u;
    {
        const bool branch_taken_0x127d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d48) {
            ctx->pc = 0x127D58u;
            goto label_127d58;
        }
    }
    ctx->pc = 0x127D50u;
label_127d50:
    // 0x127d50: 0x1000002c  b           . + 4 + (0x2C << 2)
label_127d54:
    if (ctx->pc == 0x127D54u) {
        ctx->pc = 0x127D58u;
        goto label_127d58;
    }
    ctx->pc = 0x127D50u;
    {
        const bool branch_taken_0x127d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d50) {
            ctx->pc = 0x127E04u;
            goto label_127e04;
        }
    }
    ctx->pc = 0x127D58u;
label_127d58:
    // 0x127d58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127d5c:
    // 0x127d5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127d60:
    // 0x127d60: 0xc05d25c  jal         func_174970
label_127d64:
    if (ctx->pc == 0x127D64u) {
        ctx->pc = 0x127D68u;
        goto label_127d68;
    }
    ctx->pc = 0x127D60u;
    SET_GPR_U32(ctx, 31, 0x127D68u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127D60u, 0x127D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127D68u;
label_127d68:
    // 0x127d68: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_127d6c:
    if (ctx->pc == 0x127D6Cu) {
        ctx->pc = 0x127D70u;
        goto label_127d70;
    }
    ctx->pc = 0x127D68u;
    {
        const bool branch_taken_0x127d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d68) {
            ctx->pc = 0x127E40u;
            goto label_127e40;
        }
    }
    ctx->pc = 0x127D70u;
label_127d70:
    // 0x127d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127d74:
    // 0x127d74: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127d78:
    // 0x127d78: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_127d7c:
    // 0x127d7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127d80:
    // 0x127d80: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127d84:
    // 0x127d84: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127d88:
    // 0x127d88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_127d8c:
    // 0x127d8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x127d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127d90:
    // 0x127d90: 0x0  nop
    ctx->pc = 0x127d90u;
    // NOP
label_127d94:
    // 0x127d94: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_127d98:
    if (ctx->pc == 0x127D98u) {
        ctx->pc = 0x127D9Cu;
        goto label_127d9c;
    }
    ctx->pc = 0x127D94u;
    {
        const bool branch_taken_0x127d94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127d94) {
            ctx->pc = 0x127E40u;
            goto label_127e40;
        }
    }
    ctx->pc = 0x127D9Cu;
label_127d9c:
    // 0x127d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127da0:
    // 0x127da0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127da4:
    // 0x127da4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127da8:
    // 0x127da8: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127dac:
    // 0x127dac: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_127db0:
    // 0x127db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127db4:
    // 0x127db4: 0x0  nop
    ctx->pc = 0x127db4u;
    // NOP
label_127db8:
    // 0x127db8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x127db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_127dbc:
    // 0x127dbc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x127dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127dc0:
    // 0x127dc0: 0x0  nop
    ctx->pc = 0x127dc0u;
    // NOP
label_127dc4:
    // 0x127dc4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_127dc8:
    if (ctx->pc == 0x127DC8u) {
        ctx->pc = 0x127DCCu;
        goto label_127dcc;
    }
    ctx->pc = 0x127DC4u;
    {
        const bool branch_taken_0x127dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127dc4) {
            ctx->pc = 0x127E40u;
            goto label_127e40;
        }
    }
    ctx->pc = 0x127DCCu;
label_127dcc:
    // 0x127dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127dd0:
    // 0x127dd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127dd4:
    // 0x127dd4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127dd8:
    // 0x127dd8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x127dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_127ddc:
    // 0x127ddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127de0:
    // 0x127de0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127de4:
    // 0x127de4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127de8:
    // 0x127de8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127dec:
    // 0x127dec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127df0:
    // 0x127df0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127df4:
    // 0x127df4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127df8:
    // 0x127df8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127dfc:
    // 0x127dfc: 0x10000010  b           . + 4 + (0x10 << 2)
label_127e00:
    if (ctx->pc == 0x127E00u) {
        ctx->pc = 0x127E04u;
        goto label_127e04;
    }
    ctx->pc = 0x127DFCu;
    {
        const bool branch_taken_0x127dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127dfc) {
            ctx->pc = 0x127E40u;
            goto label_127e40;
        }
    }
    ctx->pc = 0x127E04u;
label_127e04:
    // 0x127e04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127e08:
    // 0x127e08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127e0c:
    // 0x127e0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127e10:
    // 0x127e10: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_127e14:
    // 0x127e14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127e18:
    // 0x127e18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127e18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127e1c:
    // 0x127e1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127e20:
    // 0x127e20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127e24:
    // 0x127e24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127e28:
    // 0x127e28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127e2c:
    // 0x127e2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x127e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_127e30:
    // 0x127e30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127e34:
    // 0x127e34: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x127e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_127e38:
    // 0x127e38: 0x10000166  b           . + 4 + (0x166 << 2)
label_127e3c:
    if (ctx->pc == 0x127E3Cu) {
        ctx->pc = 0x127E40u;
        goto label_127e40;
    }
    ctx->pc = 0x127E38u;
    {
        const bool branch_taken_0x127e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e38) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127E40u;
label_127e40:
    // 0x127e40: 0x10000164  b           . + 4 + (0x164 << 2)
label_127e44:
    if (ctx->pc == 0x127E44u) {
        ctx->pc = 0x127E48u;
        goto label_127e48;
    }
    ctx->pc = 0x127E40u;
    {
        const bool branch_taken_0x127e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e40) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127E48u;
label_127e48:
    // 0x127e48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127e4c:
    // 0x127e4c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127e50:
    // 0x127e50: 0x3c0345ea  lui         $v1, 0x45EA
    ctx->pc = 0x127e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17898 << 16));
label_127e54:
    // 0x127e54: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x127e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_127e58:
    // 0x127e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127e5c:
    // 0x127e5c: 0x0  nop
    ctx->pc = 0x127e5cu;
    // NOP
label_127e60:
    // 0x127e60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127e64:
    // 0x127e64: 0x0  nop
    ctx->pc = 0x127e64u;
    // NOP
label_127e68:
    // 0x127e68: 0x4500015a  bc1f        . + 4 + (0x15A << 2)
label_127e6c:
    if (ctx->pc == 0x127E6Cu) {
        ctx->pc = 0x127E70u;
        goto label_127e70;
    }
    ctx->pc = 0x127E68u;
    {
        const bool branch_taken_0x127e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127e68) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127E70u;
label_127e70:
    // 0x127e70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x127e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127e74:
    // 0x127e74: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x127e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127e78:
    // 0x127e78: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_127e7c:
    // 0x127e7c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x127e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_127e80:
    // 0x127e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127e84:
    // 0x127e84: 0x0  nop
    ctx->pc = 0x127e84u;
    // NOP
label_127e88:
    // 0x127e88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x127e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127e8c:
    // 0x127e8c: 0x0  nop
    ctx->pc = 0x127e8cu;
    // NOP
label_127e90:
    // 0x127e90: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_127e94:
    if (ctx->pc == 0x127E94u) {
        ctx->pc = 0x127E98u;
        goto label_127e98;
    }
    ctx->pc = 0x127E90u;
    {
        const bool branch_taken_0x127e90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127e90) {
            ctx->pc = 0x127F68u;
            goto label_127f68;
        }
    }
    ctx->pc = 0x127E98u;
label_127e98:
    // 0x127e98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_127e9c:
    // 0x127e9c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x127e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_127ea0:
    // 0x127ea0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x127ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_127ea4:
    // 0x127ea4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_127ea8:
    if (ctx->pc == 0x127EA8u) {
        ctx->pc = 0x127EACu;
        goto label_127eac;
    }
    ctx->pc = 0x127EA4u;
    {
        const bool branch_taken_0x127ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127ea4) {
            ctx->pc = 0x127EBCu;
            goto label_127ebc;
        }
    }
    ctx->pc = 0x127EACu;
label_127eac:
    // 0x127eac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x127eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_127eb0:
    // 0x127eb0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x127eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_127eb4:
    // 0x127eb4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_127eb8:
    if (ctx->pc == 0x127EB8u) {
        ctx->pc = 0x127EBCu;
        goto label_127ebc;
    }
    ctx->pc = 0x127EB4u;
    {
        const bool branch_taken_0x127eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127eb4) {
            ctx->pc = 0x127F68u;
            goto label_127f68;
        }
    }
    ctx->pc = 0x127EBCu;
label_127ebc:
    // 0x127ebc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127ec0:
    // 0x127ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127ec4:
    // 0x127ec4: 0xc05d25c  jal         func_174970
label_127ec8:
    if (ctx->pc == 0x127EC8u) {
        ctx->pc = 0x127ECCu;
        goto label_127ecc;
    }
    ctx->pc = 0x127EC4u;
    SET_GPR_U32(ctx, 31, 0x127ECCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127EC4u, 0x127ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127ECCu;
label_127ecc:
    // 0x127ecc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_127ed0:
    if (ctx->pc == 0x127ED0u) {
        ctx->pc = 0x127ED4u;
        goto label_127ed4;
    }
    ctx->pc = 0x127ECCu;
    {
        const bool branch_taken_0x127ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ecc) {
            ctx->pc = 0x127F68u;
            goto label_127f68;
        }
    }
    ctx->pc = 0x127ED4u;
label_127ed4:
    // 0x127ed4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127ed8:
    // 0x127ed8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127edc:
    // 0x127edc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_127ee0:
    // 0x127ee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127ee4:
    // 0x127ee4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127ee8:
    // 0x127ee8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127eec:
    // 0x127eec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_127ef0:
    // 0x127ef0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x127ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127ef4:
    // 0x127ef4: 0x0  nop
    ctx->pc = 0x127ef4u;
    // NOP
label_127ef8:
    // 0x127ef8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_127efc:
    if (ctx->pc == 0x127EFCu) {
        ctx->pc = 0x127F00u;
        goto label_127f00;
    }
    ctx->pc = 0x127EF8u;
    {
        const bool branch_taken_0x127ef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127ef8) {
            ctx->pc = 0x127F68u;
            goto label_127f68;
        }
    }
    ctx->pc = 0x127F00u;
label_127f00:
    // 0x127f00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127f04:
    // 0x127f04: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127f08:
    // 0x127f08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127f0c:
    // 0x127f0c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127f10:
    // 0x127f10: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_127f14:
    // 0x127f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127f18:
    // 0x127f18: 0x0  nop
    ctx->pc = 0x127f18u;
    // NOP
label_127f1c:
    // 0x127f1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x127f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_127f20:
    // 0x127f20: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x127f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127f24:
    // 0x127f24: 0x0  nop
    ctx->pc = 0x127f24u;
    // NOP
label_127f28:
    // 0x127f28: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_127f2c:
    if (ctx->pc == 0x127F2Cu) {
        ctx->pc = 0x127F30u;
        goto label_127f30;
    }
    ctx->pc = 0x127F28u;
    {
        const bool branch_taken_0x127f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127f28) {
            ctx->pc = 0x127F68u;
            goto label_127f68;
        }
    }
    ctx->pc = 0x127F30u;
label_127f30:
    // 0x127f30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127f34:
    // 0x127f34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127f38:
    // 0x127f38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127f3c:
    // 0x127f3c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x127f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_127f40:
    // 0x127f40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127f44:
    // 0x127f44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127f48:
    // 0x127f48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127f4c:
    // 0x127f4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127f50:
    // 0x127f50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127f54:
    // 0x127f54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127f58:
    // 0x127f58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127f5c:
    // 0x127f5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127f60:
    // 0x127f60: 0x1000011c  b           . + 4 + (0x11C << 2)
label_127f64:
    if (ctx->pc == 0x127F64u) {
        ctx->pc = 0x127F68u;
        goto label_127f68;
    }
    ctx->pc = 0x127F60u;
    {
        const bool branch_taken_0x127f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f60) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x127F68u;
label_127f68:
    // 0x127f68: 0xc067694  jal         func_19DA50
label_127f6c:
    if (ctx->pc == 0x127F6Cu) {
        ctx->pc = 0x127F70u;
        goto label_127f70;
    }
    ctx->pc = 0x127F68u;
    SET_GPR_U32(ctx, 31, 0x127F70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127F68u, 0x127F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F70u;
label_127f70:
    // 0x127f70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_127f74:
    // 0x127f74: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x127f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127f78:
    // 0x127f78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x127f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_127f7c:
    // 0x127f7c: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
label_127f80:
    if (ctx->pc == 0x127F80u) {
        ctx->pc = 0x127F84u;
        goto label_127f84;
    }
    ctx->pc = 0x127F7Cu;
    {
        const bool branch_taken_0x127f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x127f7c) {
            ctx->pc = 0x12804Cu;
            goto label_12804c;
        }
    }
    ctx->pc = 0x127F84u;
label_127f84:
    // 0x127f84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127f88:
    // 0x127f88: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_127f8c:
    if (ctx->pc == 0x127F8Cu) {
        ctx->pc = 0x127F90u;
        goto label_127f90;
    }
    ctx->pc = 0x127F88u;
    {
        const bool branch_taken_0x127f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x127f88) {
            ctx->pc = 0x127FA0u;
            goto label_127fa0;
        }
    }
    ctx->pc = 0x127F90u;
label_127f90:
    // 0x127f90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_127f94:
    if (ctx->pc == 0x127F94u) {
        ctx->pc = 0x127F98u;
        goto label_127f98;
    }
    ctx->pc = 0x127F90u;
    {
        const bool branch_taken_0x127f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f90) {
            ctx->pc = 0x127FA0u;
            goto label_127fa0;
        }
    }
    ctx->pc = 0x127F98u;
label_127f98:
    // 0x127f98: 0x1000002e  b           . + 4 + (0x2E << 2)
label_127f9c:
    if (ctx->pc == 0x127F9Cu) {
        ctx->pc = 0x127FA0u;
        goto label_127fa0;
    }
    ctx->pc = 0x127F98u;
    {
        const bool branch_taken_0x127f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f98) {
            ctx->pc = 0x128054u;
            goto label_128054;
        }
    }
    ctx->pc = 0x127FA0u;
label_127fa0:
    // 0x127fa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127fa4:
    // 0x127fa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127fa8:
    // 0x127fa8: 0xc05d25c  jal         func_174970
label_127fac:
    if (ctx->pc == 0x127FACu) {
        ctx->pc = 0x127FB0u;
        goto label_127fb0;
    }
    ctx->pc = 0x127FA8u;
    SET_GPR_U32(ctx, 31, 0x127FB0u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127FA8u, 0x127FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FB0u;
label_127fb0:
    // 0x127fb0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_127fb4:
    if (ctx->pc == 0x127FB4u) {
        ctx->pc = 0x127FB8u;
        goto label_127fb8;
    }
    ctx->pc = 0x127FB0u;
    {
        const bool branch_taken_0x127fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127fb0) {
            ctx->pc = 0x128044u;
            goto label_128044;
        }
    }
    ctx->pc = 0x127FB8u;
label_127fb8:
    // 0x127fb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127fbc:
    // 0x127fbc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127fc0:
    // 0x127fc0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_127fc4:
    // 0x127fc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127fc8:
    // 0x127fc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127fcc:
    // 0x127fcc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127fd0:
    // 0x127fd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_127fd4:
    // 0x127fd4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x127fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127fd8:
    // 0x127fd8: 0x0  nop
    ctx->pc = 0x127fd8u;
    // NOP
label_127fdc:
    // 0x127fdc: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_127fe0:
    if (ctx->pc == 0x127FE0u) {
        ctx->pc = 0x127FE4u;
        goto label_127fe4;
    }
    ctx->pc = 0x127FDCu;
    {
        const bool branch_taken_0x127fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127fdc) {
            ctx->pc = 0x128044u;
            goto label_128044;
        }
    }
    ctx->pc = 0x127FE4u;
label_127fe4:
    // 0x127fe4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127fe8:
    // 0x127fe8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127fec:
    // 0x127fec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127ff0:
    // 0x127ff0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127ff4:
    // 0x127ff4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_127ff8:
    // 0x127ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127ffc:
    // 0x127ffc: 0x0  nop
    ctx->pc = 0x127ffcu;
    // NOP
label_128000:
    // 0x128000: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128000u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_128004:
    // 0x128004: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128008:
    // 0x128008: 0x0  nop
    ctx->pc = 0x128008u;
    // NOP
label_12800c:
    // 0x12800c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_128010:
    if (ctx->pc == 0x128010u) {
        ctx->pc = 0x128014u;
        goto label_128014;
    }
    ctx->pc = 0x12800Cu;
    {
        const bool branch_taken_0x12800c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12800c) {
            ctx->pc = 0x128044u;
            goto label_128044;
        }
    }
    ctx->pc = 0x128014u;
label_128014:
    // 0x128014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128018:
    // 0x128018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12801c:
    // 0x12801c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12801cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128020:
    // 0x128020: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x128020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_128024:
    // 0x128024: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128028:
    // 0x128028: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12802c:
    // 0x12802c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128030:
    // 0x128030: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128034:
    // 0x128034: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128038:
    // 0x128038: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12803c:
    // 0x12803c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128040:
    // 0x128040: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128044:
    // 0x128044: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_128048:
    if (ctx->pc == 0x128048u) {
        ctx->pc = 0x12804Cu;
        goto label_12804c;
    }
    ctx->pc = 0x128044u;
    {
        const bool branch_taken_0x128044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128044) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x12804Cu;
label_12804c:
    // 0x12804c: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_128050:
    if (ctx->pc == 0x128050u) {
        ctx->pc = 0x128054u;
        goto label_128054;
    }
    ctx->pc = 0x12804Cu;
    {
        const bool branch_taken_0x12804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12804c) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x128054u;
label_128054:
    // 0x128054: 0x100000df  b           . + 4 + (0xDF << 2)
label_128058:
    if (ctx->pc == 0x128058u) {
        ctx->pc = 0x12805Cu;
        goto label_12805c;
    }
    ctx->pc = 0x128054u;
    {
        const bool branch_taken_0x128054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128054) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x12805Cu;
label_12805c:
    // 0x12805c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128060:
    // 0x128060: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128064:
    // 0x128064: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x128064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_128068:
    // 0x128068: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x128068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_12806c:
    // 0x12806c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12806cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128070:
    // 0x128070: 0x0  nop
    ctx->pc = 0x128070u;
    // NOP
label_128074:
    // 0x128074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128078:
    // 0x128078: 0x0  nop
    ctx->pc = 0x128078u;
    // NOP
label_12807c:
    // 0x12807c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_128080:
    if (ctx->pc == 0x128080u) {
        ctx->pc = 0x128084u;
        goto label_128084;
    }
    ctx->pc = 0x12807Cu;
    {
        const bool branch_taken_0x12807c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12807c) {
            ctx->pc = 0x1280C8u;
            goto label_1280c8;
        }
    }
    ctx->pc = 0x128084u;
label_128084:
    // 0x128084: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x128084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_128088:
    // 0x128088: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_12808c:
    if (ctx->pc == 0x12808Cu) {
        ctx->pc = 0x128090u;
        goto label_128090;
    }
    ctx->pc = 0x128088u;
    {
        const bool branch_taken_0x128088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128088) {
            ctx->pc = 0x1280C0u;
            goto label_1280c0;
        }
    }
    ctx->pc = 0x128090u;
label_128090:
    // 0x128090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128094:
    // 0x128094: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128098:
    // 0x128098: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12809c:
    // 0x12809c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1280a0:
    // 0x1280a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1280a4:
    // 0x1280a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1280a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1280a8:
    // 0x1280a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1280ac:
    // 0x1280ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1280acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1280b0:
    // 0x1280b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1280b4:
    // 0x1280b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1280b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1280b8:
    // 0x1280b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1280bc:
    // 0x1280bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1280bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1280c0:
    // 0x1280c0: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_1280c4:
    if (ctx->pc == 0x1280C4u) {
        ctx->pc = 0x1280C8u;
        goto label_1280c8;
    }
    ctx->pc = 0x1280C0u;
    {
        const bool branch_taken_0x1280c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1280c0) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x1280C8u;
label_1280c8:
    // 0x1280c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1280cc:
    // 0x1280cc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1280ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1280d0:
    // 0x1280d0: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_1280d4:
    // 0x1280d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1280d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1280d8:
    // 0x1280d8: 0x0  nop
    ctx->pc = 0x1280d8u;
    // NOP
label_1280dc:
    // 0x1280dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1280dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1280e0:
    // 0x1280e0: 0x0  nop
    ctx->pc = 0x1280e0u;
    // NOP
label_1280e4:
    // 0x1280e4: 0x45000056  bc1f        . + 4 + (0x56 << 2)
label_1280e8:
    if (ctx->pc == 0x1280E8u) {
        ctx->pc = 0x1280ECu;
        goto label_1280ec;
    }
    ctx->pc = 0x1280E4u;
    {
        const bool branch_taken_0x1280e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1280e4) {
            ctx->pc = 0x128240u;
            goto label_128240;
        }
    }
    ctx->pc = 0x1280ECu;
label_1280ec:
    // 0x1280ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1280ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1280f0:
    // 0x1280f0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1280f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1280f4:
    // 0x1280f4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1280f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_1280f8:
    // 0x1280f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1280f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1280fc:
    // 0x1280fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1280fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128100:
    // 0x128100: 0x0  nop
    ctx->pc = 0x128100u;
    // NOP
label_128104:
    // 0x128104: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128108:
    // 0x128108: 0x0  nop
    ctx->pc = 0x128108u;
    // NOP
label_12810c:
    // 0x12810c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_128110:
    if (ctx->pc == 0x128110u) {
        ctx->pc = 0x128114u;
        goto label_128114;
    }
    ctx->pc = 0x12810Cu;
    {
        const bool branch_taken_0x12810c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12810c) {
            ctx->pc = 0x128188u;
            goto label_128188;
        }
    }
    ctx->pc = 0x128114u;
label_128114:
    // 0x128114: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_128118:
    // 0x128118: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_12811c:
    // 0x12811c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12811cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_128120:
    // 0x128120: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_128124:
    if (ctx->pc == 0x128124u) {
        ctx->pc = 0x128128u;
        goto label_128128;
    }
    ctx->pc = 0x128120u;
    {
        const bool branch_taken_0x128120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128120) {
            ctx->pc = 0x128138u;
            goto label_128138;
        }
    }
    ctx->pc = 0x128128u;
label_128128:
    // 0x128128: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_12812c:
    // 0x12812c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_128130:
    // 0x128130: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_128134:
    if (ctx->pc == 0x128134u) {
        ctx->pc = 0x128138u;
        goto label_128138;
    }
    ctx->pc = 0x128130u;
    {
        const bool branch_taken_0x128130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128130) {
            ctx->pc = 0x128188u;
            goto label_128188;
        }
    }
    ctx->pc = 0x128138u;
label_128138:
    // 0x128138: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12813c:
    // 0x12813c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128140:
    // 0x128140: 0xc05d25c  jal         func_174970
label_128144:
    if (ctx->pc == 0x128144u) {
        ctx->pc = 0x128148u;
        goto label_128148;
    }
    ctx->pc = 0x128140u;
    SET_GPR_U32(ctx, 31, 0x128148u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128140u, 0x128148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128148u;
label_128148:
    // 0x128148: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_12814c:
    if (ctx->pc == 0x12814Cu) {
        ctx->pc = 0x128150u;
        goto label_128150;
    }
    ctx->pc = 0x128148u;
    {
        const bool branch_taken_0x128148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128148) {
            ctx->pc = 0x128188u;
            goto label_128188;
        }
    }
    ctx->pc = 0x128150u;
label_128150:
    // 0x128150: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128154:
    // 0x128154: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128158:
    // 0x128158: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12815c:
    // 0x12815c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x12815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_128160:
    // 0x128160: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128164:
    // 0x128164: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128168:
    // 0x128168: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12816c:
    // 0x12816c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12816cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128170:
    // 0x128170: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128174:
    // 0x128174: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128178:
    // 0x128178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12817c:
    // 0x12817c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12817cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128180:
    // 0x128180: 0x10000094  b           . + 4 + (0x94 << 2)
label_128184:
    if (ctx->pc == 0x128184u) {
        ctx->pc = 0x128188u;
        goto label_128188;
    }
    ctx->pc = 0x128180u;
    {
        const bool branch_taken_0x128180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128180) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x128188u;
label_128188:
    // 0x128188: 0xc067694  jal         func_19DA50
label_12818c:
    if (ctx->pc == 0x12818Cu) {
        ctx->pc = 0x128190u;
        goto label_128190;
    }
    ctx->pc = 0x128188u;
    SET_GPR_U32(ctx, 31, 0x128190u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x128188u, 0x128190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128190u;
label_128190:
    // 0x128190: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x128190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_128194:
    // 0x128194: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x128194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_128198:
    // 0x128198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12819c:
    // 0x12819c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1281a0:
    if (ctx->pc == 0x1281A0u) {
        ctx->pc = 0x1281A4u;
        goto label_1281a4;
    }
    ctx->pc = 0x12819Cu;
    {
        const bool branch_taken_0x12819c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12819c) {
            ctx->pc = 0x1281B4u;
            goto label_1281b4;
        }
    }
    ctx->pc = 0x1281A4u;
label_1281a4:
    // 0x1281a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1281a8:
    if (ctx->pc == 0x1281A8u) {
        ctx->pc = 0x1281ACu;
        goto label_1281ac;
    }
    ctx->pc = 0x1281A4u;
    {
        const bool branch_taken_0x1281a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1281a4) {
            ctx->pc = 0x1281B4u;
            goto label_1281b4;
        }
    }
    ctx->pc = 0x1281ACu;
label_1281ac:
    // 0x1281ac: 0x10000015  b           . + 4 + (0x15 << 2)
label_1281b0:
    if (ctx->pc == 0x1281B0u) {
        ctx->pc = 0x1281B4u;
        goto label_1281b4;
    }
    ctx->pc = 0x1281ACu;
    {
        const bool branch_taken_0x1281ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1281ac) {
            ctx->pc = 0x128204u;
            goto label_128204;
        }
    }
    ctx->pc = 0x1281B4u;
label_1281b4:
    // 0x1281b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1281b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1281b8:
    // 0x1281b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1281b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1281bc:
    // 0x1281bc: 0xc05d25c  jal         func_174970
label_1281c0:
    if (ctx->pc == 0x1281C0u) {
        ctx->pc = 0x1281C4u;
        goto label_1281c4;
    }
    ctx->pc = 0x1281BCu;
    SET_GPR_U32(ctx, 31, 0x1281C4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1281BCu, 0x1281C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1281C4u;
label_1281c4:
    // 0x1281c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1281c8:
    if (ctx->pc == 0x1281C8u) {
        ctx->pc = 0x1281CCu;
        goto label_1281cc;
    }
    ctx->pc = 0x1281C4u;
    {
        const bool branch_taken_0x1281c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1281c4) {
            ctx->pc = 0x1281FCu;
            goto label_1281fc;
        }
    }
    ctx->pc = 0x1281CCu;
label_1281cc:
    // 0x1281cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1281ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1281d0:
    // 0x1281d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1281d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1281d4:
    // 0x1281d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1281d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1281d8:
    // 0x1281d8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1281d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1281dc:
    // 0x1281dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1281dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1281e0:
    // 0x1281e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1281e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1281e4:
    // 0x1281e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1281e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1281e8:
    // 0x1281e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1281e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1281ec:
    // 0x1281ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1281ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1281f0:
    // 0x1281f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1281f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1281f4:
    // 0x1281f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1281f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1281f8:
    // 0x1281f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1281f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1281fc:
    // 0x1281fc: 0x10000075  b           . + 4 + (0x75 << 2)
label_128200:
    if (ctx->pc == 0x128200u) {
        ctx->pc = 0x128204u;
        goto label_128204;
    }
    ctx->pc = 0x1281FCu;
    {
        const bool branch_taken_0x1281fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1281fc) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x128204u;
label_128204:
    // 0x128204: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128208:
    // 0x128208: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12820c:
    // 0x12820c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12820cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128210:
    // 0x128210: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x128210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_128214:
    // 0x128214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128218:
    // 0x128218: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12821c:
    // 0x12821c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128220:
    // 0x128220: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128224:
    // 0x128224: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128228:
    // 0x128228: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12822c:
    // 0x12822c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_128230:
    // 0x128230: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128234:
    // 0x128234: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x128234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_128238:
    // 0x128238: 0x10000066  b           . + 4 + (0x66 << 2)
label_12823c:
    if (ctx->pc == 0x12823Cu) {
        ctx->pc = 0x128240u;
        goto label_128240;
    }
    ctx->pc = 0x128238u;
    {
        const bool branch_taken_0x128238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128238) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x128240u;
label_128240:
    // 0x128240: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128244:
    // 0x128244: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128248:
    // 0x128248: 0x3c0345ea  lui         $v1, 0x45EA
    ctx->pc = 0x128248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17898 << 16));
label_12824c:
    // 0x12824c: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x12824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_128250:
    // 0x128250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128254:
    // 0x128254: 0x0  nop
    ctx->pc = 0x128254u;
    // NOP
label_128258:
    // 0x128258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12825c:
    // 0x12825c: 0x0  nop
    ctx->pc = 0x12825cu;
    // NOP
label_128260:
    // 0x128260: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_128264:
    if (ctx->pc == 0x128264u) {
        ctx->pc = 0x128268u;
        goto label_128268;
    }
    ctx->pc = 0x128260u;
    {
        const bool branch_taken_0x128260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128260) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x128268u;
label_128268:
    // 0x128268: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12826c:
    // 0x12826c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128270:
    // 0x128270: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x128270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_128274:
    // 0x128274: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x128274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_128278:
    // 0x128278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12827c:
    // 0x12827c: 0x0  nop
    ctx->pc = 0x12827cu;
    // NOP
label_128280:
    // 0x128280: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128284:
    // 0x128284: 0x0  nop
    ctx->pc = 0x128284u;
    // NOP
label_128288:
    // 0x128288: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_12828c:
    if (ctx->pc == 0x12828Cu) {
        ctx->pc = 0x128290u;
        goto label_128290;
    }
    ctx->pc = 0x128288u;
    {
        const bool branch_taken_0x128288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128288) {
            ctx->pc = 0x128304u;
            goto label_128304;
        }
    }
    ctx->pc = 0x128290u;
label_128290:
    // 0x128290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_128294:
    // 0x128294: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_128298:
    // 0x128298: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x128298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_12829c:
    // 0x12829c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1282a0:
    if (ctx->pc == 0x1282A0u) {
        ctx->pc = 0x1282A4u;
        goto label_1282a4;
    }
    ctx->pc = 0x12829Cu;
    {
        const bool branch_taken_0x12829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12829c) {
            ctx->pc = 0x1282B4u;
            goto label_1282b4;
        }
    }
    ctx->pc = 0x1282A4u;
label_1282a4:
    // 0x1282a4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1282a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1282a8:
    // 0x1282a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1282a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1282ac:
    // 0x1282ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1282b0:
    if (ctx->pc == 0x1282B0u) {
        ctx->pc = 0x1282B4u;
        goto label_1282b4;
    }
    ctx->pc = 0x1282ACu;
    {
        const bool branch_taken_0x1282ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282ac) {
            ctx->pc = 0x128304u;
            goto label_128304;
        }
    }
    ctx->pc = 0x1282B4u;
label_1282b4:
    // 0x1282b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1282b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1282b8:
    // 0x1282b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1282b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1282bc:
    // 0x1282bc: 0xc05d25c  jal         func_174970
label_1282c0:
    if (ctx->pc == 0x1282C0u) {
        ctx->pc = 0x1282C4u;
        goto label_1282c4;
    }
    ctx->pc = 0x1282BCu;
    SET_GPR_U32(ctx, 31, 0x1282C4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1282BCu, 0x1282C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282C4u;
label_1282c4:
    // 0x1282c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1282c8:
    if (ctx->pc == 0x1282C8u) {
        ctx->pc = 0x1282CCu;
        goto label_1282cc;
    }
    ctx->pc = 0x1282C4u;
    {
        const bool branch_taken_0x1282c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282c4) {
            ctx->pc = 0x128304u;
            goto label_128304;
        }
    }
    ctx->pc = 0x1282CCu;
label_1282cc:
    // 0x1282cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1282ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1282d0:
    // 0x1282d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1282d4:
    // 0x1282d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1282d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1282d8:
    // 0x1282d8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1282d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1282dc:
    // 0x1282dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1282e0:
    // 0x1282e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1282e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1282e4:
    // 0x1282e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1282e8:
    // 0x1282e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1282e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1282ec:
    // 0x1282ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1282f0:
    // 0x1282f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1282f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1282f4:
    // 0x1282f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1282f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1282f8:
    // 0x1282f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1282f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1282fc:
    // 0x1282fc: 0x10000035  b           . + 4 + (0x35 << 2)
label_128300:
    if (ctx->pc == 0x128300u) {
        ctx->pc = 0x128304u;
        goto label_128304;
    }
    ctx->pc = 0x1282FCu;
    {
        const bool branch_taken_0x1282fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282fc) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x128304u;
label_128304:
    // 0x128304: 0xc067694  jal         func_19DA50
label_128308:
    if (ctx->pc == 0x128308u) {
        ctx->pc = 0x12830Cu;
        goto label_12830c;
    }
    ctx->pc = 0x128304u;
    SET_GPR_U32(ctx, 31, 0x12830Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x128304u, 0x12830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12830Cu;
label_12830c:
    // 0x12830c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12830cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_128310:
    // 0x128310: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x128310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_128314:
    // 0x128314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x128314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_128318:
    // 0x128318: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_12831c:
    if (ctx->pc == 0x12831Cu) {
        ctx->pc = 0x128320u;
        goto label_128320;
    }
    ctx->pc = 0x128318u;
    {
        const bool branch_taken_0x128318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x128318) {
            ctx->pc = 0x12838Cu;
            goto label_12838c;
        }
    }
    ctx->pc = 0x128320u;
label_128320:
    // 0x128320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128324:
    // 0x128324: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_128328:
    if (ctx->pc == 0x128328u) {
        ctx->pc = 0x12832Cu;
        goto label_12832c;
    }
    ctx->pc = 0x128324u;
    {
        const bool branch_taken_0x128324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x128324) {
            ctx->pc = 0x12833Cu;
            goto label_12833c;
        }
    }
    ctx->pc = 0x12832Cu;
label_12832c:
    // 0x12832c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_128330:
    if (ctx->pc == 0x128330u) {
        ctx->pc = 0x128334u;
        goto label_128334;
    }
    ctx->pc = 0x12832Cu;
    {
        const bool branch_taken_0x12832c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12832c) {
            ctx->pc = 0x12833Cu;
            goto label_12833c;
        }
    }
    ctx->pc = 0x128334u;
label_128334:
    // 0x128334: 0x10000017  b           . + 4 + (0x17 << 2)
label_128338:
    if (ctx->pc == 0x128338u) {
        ctx->pc = 0x12833Cu;
        goto label_12833c;
    }
    ctx->pc = 0x128334u;
    {
        const bool branch_taken_0x128334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128334) {
            ctx->pc = 0x128394u;
            goto label_128394;
        }
    }
    ctx->pc = 0x12833Cu;
label_12833c:
    // 0x12833c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128340:
    // 0x128340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128344:
    // 0x128344: 0xc05d25c  jal         func_174970
label_128348:
    if (ctx->pc == 0x128348u) {
        ctx->pc = 0x12834Cu;
        goto label_12834c;
    }
    ctx->pc = 0x128344u;
    SET_GPR_U32(ctx, 31, 0x12834Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128344u, 0x12834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12834Cu;
label_12834c:
    // 0x12834c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_128350:
    if (ctx->pc == 0x128350u) {
        ctx->pc = 0x128354u;
        goto label_128354;
    }
    ctx->pc = 0x12834Cu;
    {
        const bool branch_taken_0x12834c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12834c) {
            ctx->pc = 0x128384u;
            goto label_128384;
        }
    }
    ctx->pc = 0x128354u;
label_128354:
    // 0x128354: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128358:
    // 0x128358: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12835c:
    // 0x12835c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12835cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128360:
    // 0x128360: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x128360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_128364:
    // 0x128364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128368:
    // 0x128368: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12836c:
    // 0x12836c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128370:
    // 0x128370: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128374:
    // 0x128374: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128378:
    // 0x128378: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12837c:
    // 0x12837c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128380:
    // 0x128380: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128384:
    // 0x128384: 0x10000013  b           . + 4 + (0x13 << 2)
label_128388:
    if (ctx->pc == 0x128388u) {
        ctx->pc = 0x12838Cu;
        goto label_12838c;
    }
    ctx->pc = 0x128384u;
    {
        const bool branch_taken_0x128384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128384) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x12838Cu;
label_12838c:
    // 0x12838c: 0x10000011  b           . + 4 + (0x11 << 2)
label_128390:
    if (ctx->pc == 0x128390u) {
        ctx->pc = 0x128394u;
        goto label_128394;
    }
    ctx->pc = 0x12838Cu;
    {
        const bool branch_taken_0x12838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12838c) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x128394u;
label_128394:
    // 0x128394: 0x1000000f  b           . + 4 + (0xF << 2)
label_128398:
    if (ctx->pc == 0x128398u) {
        ctx->pc = 0x12839Cu;
        goto label_12839c;
    }
    ctx->pc = 0x128394u;
    {
        const bool branch_taken_0x128394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128394) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x12839Cu;
label_12839c:
    // 0x12839c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1283a0:
    // 0x1283a0: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1283a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1283a4:
    // 0x1283a4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1283a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1283a8:
    // 0x1283a8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1283a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1283ac:
    // 0x1283ac: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x1283acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1283b0:
    // 0x1283b0: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x1283b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
label_1283b4:
    // 0x1283b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1283b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1283b8:
    // 0x1283b8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1283b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1283bc:
    // 0x1283bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1283bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1283c0:
    // 0x1283c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1283c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1283c4:
    // 0x1283c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1283c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1283c8:
    // 0x1283c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1283c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1283cc:
    // 0x1283cc: 0x10000001  b           . + 4 + (0x1 << 2)
label_1283d0:
    if (ctx->pc == 0x1283D0u) {
        ctx->pc = 0x1283D4u;
        goto label_1283d4;
    }
    ctx->pc = 0x1283CCu;
    {
        const bool branch_taken_0x1283cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1283cc) {
            ctx->pc = 0x1283D4u;
            goto label_1283d4;
        }
    }
    ctx->pc = 0x1283D4u;
label_1283d4:
    // 0x1283d4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1283d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1283d8:
    // 0x1283d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1283d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1283dc:
    // 0x1283dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1283dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1283e0:
    // 0x1283e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1283e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1283e4:
    // 0x1283e4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1283e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1283e8:
    // 0x1283e8: 0x3e00008  jr          $ra
label_1283ec:
    if (ctx->pc == 0x1283ECu) {
        ctx->pc = 0x1283F0u;
        goto label_fallthrough_0x1283e8;
    }
    ctx->pc = 0x1283E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1283E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1283e8:
    ctx->pc = 0x1283F0u;
}
