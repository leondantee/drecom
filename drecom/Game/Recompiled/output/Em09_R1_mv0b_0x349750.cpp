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

// Function: Em09_R1_mv0b
// Address: 0x349750 - 0x349f5c
void Em09_R1_mv0b_0x349750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv0b_0x349750");
#endif

    switch (ctx->pc) {
        case 0x349750u: goto label_349750;
        case 0x349754u: goto label_349754;
        case 0x349758u: goto label_349758;
        case 0x34975cu: goto label_34975c;
        case 0x349760u: goto label_349760;
        case 0x349764u: goto label_349764;
        case 0x349768u: goto label_349768;
        case 0x34976cu: goto label_34976c;
        case 0x349770u: goto label_349770;
        case 0x349774u: goto label_349774;
        case 0x349778u: goto label_349778;
        case 0x34977cu: goto label_34977c;
        case 0x349780u: goto label_349780;
        case 0x349784u: goto label_349784;
        case 0x349788u: goto label_349788;
        case 0x34978cu: goto label_34978c;
        case 0x349790u: goto label_349790;
        case 0x349794u: goto label_349794;
        case 0x349798u: goto label_349798;
        case 0x34979cu: goto label_34979c;
        case 0x3497a0u: goto label_3497a0;
        case 0x3497a4u: goto label_3497a4;
        case 0x3497a8u: goto label_3497a8;
        case 0x3497acu: goto label_3497ac;
        case 0x3497b0u: goto label_3497b0;
        case 0x3497b4u: goto label_3497b4;
        case 0x3497b8u: goto label_3497b8;
        case 0x3497bcu: goto label_3497bc;
        case 0x3497c0u: goto label_3497c0;
        case 0x3497c4u: goto label_3497c4;
        case 0x3497c8u: goto label_3497c8;
        case 0x3497ccu: goto label_3497cc;
        case 0x3497d0u: goto label_3497d0;
        case 0x3497d4u: goto label_3497d4;
        case 0x3497d8u: goto label_3497d8;
        case 0x3497dcu: goto label_3497dc;
        case 0x3497e0u: goto label_3497e0;
        case 0x3497e4u: goto label_3497e4;
        case 0x3497e8u: goto label_3497e8;
        case 0x3497ecu: goto label_3497ec;
        case 0x3497f0u: goto label_3497f0;
        case 0x3497f4u: goto label_3497f4;
        case 0x3497f8u: goto label_3497f8;
        case 0x3497fcu: goto label_3497fc;
        case 0x349800u: goto label_349800;
        case 0x349804u: goto label_349804;
        case 0x349808u: goto label_349808;
        case 0x34980cu: goto label_34980c;
        case 0x349810u: goto label_349810;
        case 0x349814u: goto label_349814;
        case 0x349818u: goto label_349818;
        case 0x34981cu: goto label_34981c;
        case 0x349820u: goto label_349820;
        case 0x349824u: goto label_349824;
        case 0x349828u: goto label_349828;
        case 0x34982cu: goto label_34982c;
        case 0x349830u: goto label_349830;
        case 0x349834u: goto label_349834;
        case 0x349838u: goto label_349838;
        case 0x34983cu: goto label_34983c;
        case 0x349840u: goto label_349840;
        case 0x349844u: goto label_349844;
        case 0x349848u: goto label_349848;
        case 0x34984cu: goto label_34984c;
        case 0x349850u: goto label_349850;
        case 0x349854u: goto label_349854;
        case 0x349858u: goto label_349858;
        case 0x34985cu: goto label_34985c;
        case 0x349860u: goto label_349860;
        case 0x349864u: goto label_349864;
        case 0x349868u: goto label_349868;
        case 0x34986cu: goto label_34986c;
        case 0x349870u: goto label_349870;
        case 0x349874u: goto label_349874;
        case 0x349878u: goto label_349878;
        case 0x34987cu: goto label_34987c;
        case 0x349880u: goto label_349880;
        case 0x349884u: goto label_349884;
        case 0x349888u: goto label_349888;
        case 0x34988cu: goto label_34988c;
        case 0x349890u: goto label_349890;
        case 0x349894u: goto label_349894;
        case 0x349898u: goto label_349898;
        case 0x34989cu: goto label_34989c;
        case 0x3498a0u: goto label_3498a0;
        case 0x3498a4u: goto label_3498a4;
        case 0x3498a8u: goto label_3498a8;
        case 0x3498acu: goto label_3498ac;
        case 0x3498b0u: goto label_3498b0;
        case 0x3498b4u: goto label_3498b4;
        case 0x3498b8u: goto label_3498b8;
        case 0x3498bcu: goto label_3498bc;
        case 0x3498c0u: goto label_3498c0;
        case 0x3498c4u: goto label_3498c4;
        case 0x3498c8u: goto label_3498c8;
        case 0x3498ccu: goto label_3498cc;
        case 0x3498d0u: goto label_3498d0;
        case 0x3498d4u: goto label_3498d4;
        case 0x3498d8u: goto label_3498d8;
        case 0x3498dcu: goto label_3498dc;
        case 0x3498e0u: goto label_3498e0;
        case 0x3498e4u: goto label_3498e4;
        case 0x3498e8u: goto label_3498e8;
        case 0x3498ecu: goto label_3498ec;
        case 0x3498f0u: goto label_3498f0;
        case 0x3498f4u: goto label_3498f4;
        case 0x3498f8u: goto label_3498f8;
        case 0x3498fcu: goto label_3498fc;
        case 0x349900u: goto label_349900;
        case 0x349904u: goto label_349904;
        case 0x349908u: goto label_349908;
        case 0x34990cu: goto label_34990c;
        case 0x349910u: goto label_349910;
        case 0x349914u: goto label_349914;
        case 0x349918u: goto label_349918;
        case 0x34991cu: goto label_34991c;
        case 0x349920u: goto label_349920;
        case 0x349924u: goto label_349924;
        case 0x349928u: goto label_349928;
        case 0x34992cu: goto label_34992c;
        case 0x349930u: goto label_349930;
        case 0x349934u: goto label_349934;
        case 0x349938u: goto label_349938;
        case 0x34993cu: goto label_34993c;
        case 0x349940u: goto label_349940;
        case 0x349944u: goto label_349944;
        case 0x349948u: goto label_349948;
        case 0x34994cu: goto label_34994c;
        case 0x349950u: goto label_349950;
        case 0x349954u: goto label_349954;
        case 0x349958u: goto label_349958;
        case 0x34995cu: goto label_34995c;
        case 0x349960u: goto label_349960;
        case 0x349964u: goto label_349964;
        case 0x349968u: goto label_349968;
        case 0x34996cu: goto label_34996c;
        case 0x349970u: goto label_349970;
        case 0x349974u: goto label_349974;
        case 0x349978u: goto label_349978;
        case 0x34997cu: goto label_34997c;
        case 0x349980u: goto label_349980;
        case 0x349984u: goto label_349984;
        case 0x349988u: goto label_349988;
        case 0x34998cu: goto label_34998c;
        case 0x349990u: goto label_349990;
        case 0x349994u: goto label_349994;
        case 0x349998u: goto label_349998;
        case 0x34999cu: goto label_34999c;
        case 0x3499a0u: goto label_3499a0;
        case 0x3499a4u: goto label_3499a4;
        case 0x3499a8u: goto label_3499a8;
        case 0x3499acu: goto label_3499ac;
        case 0x3499b0u: goto label_3499b0;
        case 0x3499b4u: goto label_3499b4;
        case 0x3499b8u: goto label_3499b8;
        case 0x3499bcu: goto label_3499bc;
        case 0x3499c0u: goto label_3499c0;
        case 0x3499c4u: goto label_3499c4;
        case 0x3499c8u: goto label_3499c8;
        case 0x3499ccu: goto label_3499cc;
        case 0x3499d0u: goto label_3499d0;
        case 0x3499d4u: goto label_3499d4;
        case 0x3499d8u: goto label_3499d8;
        case 0x3499dcu: goto label_3499dc;
        case 0x3499e0u: goto label_3499e0;
        case 0x3499e4u: goto label_3499e4;
        case 0x3499e8u: goto label_3499e8;
        case 0x3499ecu: goto label_3499ec;
        case 0x3499f0u: goto label_3499f0;
        case 0x3499f4u: goto label_3499f4;
        case 0x3499f8u: goto label_3499f8;
        case 0x3499fcu: goto label_3499fc;
        case 0x349a00u: goto label_349a00;
        case 0x349a04u: goto label_349a04;
        case 0x349a08u: goto label_349a08;
        case 0x349a0cu: goto label_349a0c;
        case 0x349a10u: goto label_349a10;
        case 0x349a14u: goto label_349a14;
        case 0x349a18u: goto label_349a18;
        case 0x349a1cu: goto label_349a1c;
        case 0x349a20u: goto label_349a20;
        case 0x349a24u: goto label_349a24;
        case 0x349a28u: goto label_349a28;
        case 0x349a2cu: goto label_349a2c;
        case 0x349a30u: goto label_349a30;
        case 0x349a34u: goto label_349a34;
        case 0x349a38u: goto label_349a38;
        case 0x349a3cu: goto label_349a3c;
        case 0x349a40u: goto label_349a40;
        case 0x349a44u: goto label_349a44;
        case 0x349a48u: goto label_349a48;
        case 0x349a4cu: goto label_349a4c;
        case 0x349a50u: goto label_349a50;
        case 0x349a54u: goto label_349a54;
        case 0x349a58u: goto label_349a58;
        case 0x349a5cu: goto label_349a5c;
        case 0x349a60u: goto label_349a60;
        case 0x349a64u: goto label_349a64;
        case 0x349a68u: goto label_349a68;
        case 0x349a6cu: goto label_349a6c;
        case 0x349a70u: goto label_349a70;
        case 0x349a74u: goto label_349a74;
        case 0x349a78u: goto label_349a78;
        case 0x349a7cu: goto label_349a7c;
        case 0x349a80u: goto label_349a80;
        case 0x349a84u: goto label_349a84;
        case 0x349a88u: goto label_349a88;
        case 0x349a8cu: goto label_349a8c;
        case 0x349a90u: goto label_349a90;
        case 0x349a94u: goto label_349a94;
        case 0x349a98u: goto label_349a98;
        case 0x349a9cu: goto label_349a9c;
        case 0x349aa0u: goto label_349aa0;
        case 0x349aa4u: goto label_349aa4;
        case 0x349aa8u: goto label_349aa8;
        case 0x349aacu: goto label_349aac;
        case 0x349ab0u: goto label_349ab0;
        case 0x349ab4u: goto label_349ab4;
        case 0x349ab8u: goto label_349ab8;
        case 0x349abcu: goto label_349abc;
        case 0x349ac0u: goto label_349ac0;
        case 0x349ac4u: goto label_349ac4;
        case 0x349ac8u: goto label_349ac8;
        case 0x349accu: goto label_349acc;
        case 0x349ad0u: goto label_349ad0;
        case 0x349ad4u: goto label_349ad4;
        case 0x349ad8u: goto label_349ad8;
        case 0x349adcu: goto label_349adc;
        case 0x349ae0u: goto label_349ae0;
        case 0x349ae4u: goto label_349ae4;
        case 0x349ae8u: goto label_349ae8;
        case 0x349aecu: goto label_349aec;
        case 0x349af0u: goto label_349af0;
        case 0x349af4u: goto label_349af4;
        case 0x349af8u: goto label_349af8;
        case 0x349afcu: goto label_349afc;
        case 0x349b00u: goto label_349b00;
        case 0x349b04u: goto label_349b04;
        case 0x349b08u: goto label_349b08;
        case 0x349b0cu: goto label_349b0c;
        case 0x349b10u: goto label_349b10;
        case 0x349b14u: goto label_349b14;
        case 0x349b18u: goto label_349b18;
        case 0x349b1cu: goto label_349b1c;
        case 0x349b20u: goto label_349b20;
        case 0x349b24u: goto label_349b24;
        case 0x349b28u: goto label_349b28;
        case 0x349b2cu: goto label_349b2c;
        case 0x349b30u: goto label_349b30;
        case 0x349b34u: goto label_349b34;
        case 0x349b38u: goto label_349b38;
        case 0x349b3cu: goto label_349b3c;
        case 0x349b40u: goto label_349b40;
        case 0x349b44u: goto label_349b44;
        case 0x349b48u: goto label_349b48;
        case 0x349b4cu: goto label_349b4c;
        case 0x349b50u: goto label_349b50;
        case 0x349b54u: goto label_349b54;
        case 0x349b58u: goto label_349b58;
        case 0x349b5cu: goto label_349b5c;
        case 0x349b60u: goto label_349b60;
        case 0x349b64u: goto label_349b64;
        case 0x349b68u: goto label_349b68;
        case 0x349b6cu: goto label_349b6c;
        case 0x349b70u: goto label_349b70;
        case 0x349b74u: goto label_349b74;
        case 0x349b78u: goto label_349b78;
        case 0x349b7cu: goto label_349b7c;
        case 0x349b80u: goto label_349b80;
        case 0x349b84u: goto label_349b84;
        case 0x349b88u: goto label_349b88;
        case 0x349b8cu: goto label_349b8c;
        case 0x349b90u: goto label_349b90;
        case 0x349b94u: goto label_349b94;
        case 0x349b98u: goto label_349b98;
        case 0x349b9cu: goto label_349b9c;
        case 0x349ba0u: goto label_349ba0;
        case 0x349ba4u: goto label_349ba4;
        case 0x349ba8u: goto label_349ba8;
        case 0x349bacu: goto label_349bac;
        case 0x349bb0u: goto label_349bb0;
        case 0x349bb4u: goto label_349bb4;
        case 0x349bb8u: goto label_349bb8;
        case 0x349bbcu: goto label_349bbc;
        case 0x349bc0u: goto label_349bc0;
        case 0x349bc4u: goto label_349bc4;
        case 0x349bc8u: goto label_349bc8;
        case 0x349bccu: goto label_349bcc;
        case 0x349bd0u: goto label_349bd0;
        case 0x349bd4u: goto label_349bd4;
        case 0x349bd8u: goto label_349bd8;
        case 0x349bdcu: goto label_349bdc;
        case 0x349be0u: goto label_349be0;
        case 0x349be4u: goto label_349be4;
        case 0x349be8u: goto label_349be8;
        case 0x349becu: goto label_349bec;
        case 0x349bf0u: goto label_349bf0;
        case 0x349bf4u: goto label_349bf4;
        case 0x349bf8u: goto label_349bf8;
        case 0x349bfcu: goto label_349bfc;
        case 0x349c00u: goto label_349c00;
        case 0x349c04u: goto label_349c04;
        case 0x349c08u: goto label_349c08;
        case 0x349c0cu: goto label_349c0c;
        case 0x349c10u: goto label_349c10;
        case 0x349c14u: goto label_349c14;
        case 0x349c18u: goto label_349c18;
        case 0x349c1cu: goto label_349c1c;
        case 0x349c20u: goto label_349c20;
        case 0x349c24u: goto label_349c24;
        case 0x349c28u: goto label_349c28;
        case 0x349c2cu: goto label_349c2c;
        case 0x349c30u: goto label_349c30;
        case 0x349c34u: goto label_349c34;
        case 0x349c38u: goto label_349c38;
        case 0x349c3cu: goto label_349c3c;
        case 0x349c40u: goto label_349c40;
        case 0x349c44u: goto label_349c44;
        case 0x349c48u: goto label_349c48;
        case 0x349c4cu: goto label_349c4c;
        case 0x349c50u: goto label_349c50;
        case 0x349c54u: goto label_349c54;
        case 0x349c58u: goto label_349c58;
        case 0x349c5cu: goto label_349c5c;
        case 0x349c60u: goto label_349c60;
        case 0x349c64u: goto label_349c64;
        case 0x349c68u: goto label_349c68;
        case 0x349c6cu: goto label_349c6c;
        case 0x349c70u: goto label_349c70;
        case 0x349c74u: goto label_349c74;
        case 0x349c78u: goto label_349c78;
        case 0x349c7cu: goto label_349c7c;
        case 0x349c80u: goto label_349c80;
        case 0x349c84u: goto label_349c84;
        case 0x349c88u: goto label_349c88;
        case 0x349c8cu: goto label_349c8c;
        case 0x349c90u: goto label_349c90;
        case 0x349c94u: goto label_349c94;
        case 0x349c98u: goto label_349c98;
        case 0x349c9cu: goto label_349c9c;
        case 0x349ca0u: goto label_349ca0;
        case 0x349ca4u: goto label_349ca4;
        case 0x349ca8u: goto label_349ca8;
        case 0x349cacu: goto label_349cac;
        case 0x349cb0u: goto label_349cb0;
        case 0x349cb4u: goto label_349cb4;
        case 0x349cb8u: goto label_349cb8;
        case 0x349cbcu: goto label_349cbc;
        case 0x349cc0u: goto label_349cc0;
        case 0x349cc4u: goto label_349cc4;
        case 0x349cc8u: goto label_349cc8;
        case 0x349cccu: goto label_349ccc;
        case 0x349cd0u: goto label_349cd0;
        case 0x349cd4u: goto label_349cd4;
        case 0x349cd8u: goto label_349cd8;
        case 0x349cdcu: goto label_349cdc;
        case 0x349ce0u: goto label_349ce0;
        case 0x349ce4u: goto label_349ce4;
        case 0x349ce8u: goto label_349ce8;
        case 0x349cecu: goto label_349cec;
        case 0x349cf0u: goto label_349cf0;
        case 0x349cf4u: goto label_349cf4;
        case 0x349cf8u: goto label_349cf8;
        case 0x349cfcu: goto label_349cfc;
        case 0x349d00u: goto label_349d00;
        case 0x349d04u: goto label_349d04;
        case 0x349d08u: goto label_349d08;
        case 0x349d0cu: goto label_349d0c;
        case 0x349d10u: goto label_349d10;
        case 0x349d14u: goto label_349d14;
        case 0x349d18u: goto label_349d18;
        case 0x349d1cu: goto label_349d1c;
        case 0x349d20u: goto label_349d20;
        case 0x349d24u: goto label_349d24;
        case 0x349d28u: goto label_349d28;
        case 0x349d2cu: goto label_349d2c;
        case 0x349d30u: goto label_349d30;
        case 0x349d34u: goto label_349d34;
        case 0x349d38u: goto label_349d38;
        case 0x349d3cu: goto label_349d3c;
        case 0x349d40u: goto label_349d40;
        case 0x349d44u: goto label_349d44;
        case 0x349d48u: goto label_349d48;
        case 0x349d4cu: goto label_349d4c;
        case 0x349d50u: goto label_349d50;
        case 0x349d54u: goto label_349d54;
        case 0x349d58u: goto label_349d58;
        case 0x349d5cu: goto label_349d5c;
        case 0x349d60u: goto label_349d60;
        case 0x349d64u: goto label_349d64;
        case 0x349d68u: goto label_349d68;
        case 0x349d6cu: goto label_349d6c;
        case 0x349d70u: goto label_349d70;
        case 0x349d74u: goto label_349d74;
        case 0x349d78u: goto label_349d78;
        case 0x349d7cu: goto label_349d7c;
        case 0x349d80u: goto label_349d80;
        case 0x349d84u: goto label_349d84;
        case 0x349d88u: goto label_349d88;
        case 0x349d8cu: goto label_349d8c;
        case 0x349d90u: goto label_349d90;
        case 0x349d94u: goto label_349d94;
        case 0x349d98u: goto label_349d98;
        case 0x349d9cu: goto label_349d9c;
        case 0x349da0u: goto label_349da0;
        case 0x349da4u: goto label_349da4;
        case 0x349da8u: goto label_349da8;
        case 0x349dacu: goto label_349dac;
        case 0x349db0u: goto label_349db0;
        case 0x349db4u: goto label_349db4;
        case 0x349db8u: goto label_349db8;
        case 0x349dbcu: goto label_349dbc;
        case 0x349dc0u: goto label_349dc0;
        case 0x349dc4u: goto label_349dc4;
        case 0x349dc8u: goto label_349dc8;
        case 0x349dccu: goto label_349dcc;
        case 0x349dd0u: goto label_349dd0;
        case 0x349dd4u: goto label_349dd4;
        case 0x349dd8u: goto label_349dd8;
        case 0x349ddcu: goto label_349ddc;
        case 0x349de0u: goto label_349de0;
        case 0x349de4u: goto label_349de4;
        case 0x349de8u: goto label_349de8;
        case 0x349decu: goto label_349dec;
        case 0x349df0u: goto label_349df0;
        case 0x349df4u: goto label_349df4;
        case 0x349df8u: goto label_349df8;
        case 0x349dfcu: goto label_349dfc;
        case 0x349e00u: goto label_349e00;
        case 0x349e04u: goto label_349e04;
        case 0x349e08u: goto label_349e08;
        case 0x349e0cu: goto label_349e0c;
        case 0x349e10u: goto label_349e10;
        case 0x349e14u: goto label_349e14;
        case 0x349e18u: goto label_349e18;
        case 0x349e1cu: goto label_349e1c;
        case 0x349e20u: goto label_349e20;
        case 0x349e24u: goto label_349e24;
        case 0x349e28u: goto label_349e28;
        case 0x349e2cu: goto label_349e2c;
        case 0x349e30u: goto label_349e30;
        case 0x349e34u: goto label_349e34;
        case 0x349e38u: goto label_349e38;
        case 0x349e3cu: goto label_349e3c;
        case 0x349e40u: goto label_349e40;
        case 0x349e44u: goto label_349e44;
        case 0x349e48u: goto label_349e48;
        case 0x349e4cu: goto label_349e4c;
        case 0x349e50u: goto label_349e50;
        case 0x349e54u: goto label_349e54;
        case 0x349e58u: goto label_349e58;
        case 0x349e5cu: goto label_349e5c;
        case 0x349e60u: goto label_349e60;
        case 0x349e64u: goto label_349e64;
        case 0x349e68u: goto label_349e68;
        case 0x349e6cu: goto label_349e6c;
        case 0x349e70u: goto label_349e70;
        case 0x349e74u: goto label_349e74;
        case 0x349e78u: goto label_349e78;
        case 0x349e7cu: goto label_349e7c;
        case 0x349e80u: goto label_349e80;
        case 0x349e84u: goto label_349e84;
        case 0x349e88u: goto label_349e88;
        case 0x349e8cu: goto label_349e8c;
        case 0x349e90u: goto label_349e90;
        case 0x349e94u: goto label_349e94;
        case 0x349e98u: goto label_349e98;
        case 0x349e9cu: goto label_349e9c;
        case 0x349ea0u: goto label_349ea0;
        case 0x349ea4u: goto label_349ea4;
        case 0x349ea8u: goto label_349ea8;
        case 0x349eacu: goto label_349eac;
        case 0x349eb0u: goto label_349eb0;
        case 0x349eb4u: goto label_349eb4;
        case 0x349eb8u: goto label_349eb8;
        case 0x349ebcu: goto label_349ebc;
        case 0x349ec0u: goto label_349ec0;
        case 0x349ec4u: goto label_349ec4;
        case 0x349ec8u: goto label_349ec8;
        case 0x349eccu: goto label_349ecc;
        case 0x349ed0u: goto label_349ed0;
        case 0x349ed4u: goto label_349ed4;
        case 0x349ed8u: goto label_349ed8;
        case 0x349edcu: goto label_349edc;
        case 0x349ee0u: goto label_349ee0;
        case 0x349ee4u: goto label_349ee4;
        case 0x349ee8u: goto label_349ee8;
        case 0x349eecu: goto label_349eec;
        case 0x349ef0u: goto label_349ef0;
        case 0x349ef4u: goto label_349ef4;
        case 0x349ef8u: goto label_349ef8;
        case 0x349efcu: goto label_349efc;
        case 0x349f00u: goto label_349f00;
        case 0x349f04u: goto label_349f04;
        case 0x349f08u: goto label_349f08;
        case 0x349f0cu: goto label_349f0c;
        case 0x349f10u: goto label_349f10;
        case 0x349f14u: goto label_349f14;
        case 0x349f18u: goto label_349f18;
        case 0x349f1cu: goto label_349f1c;
        case 0x349f20u: goto label_349f20;
        case 0x349f24u: goto label_349f24;
        case 0x349f28u: goto label_349f28;
        case 0x349f2cu: goto label_349f2c;
        case 0x349f30u: goto label_349f30;
        case 0x349f34u: goto label_349f34;
        case 0x349f38u: goto label_349f38;
        case 0x349f3cu: goto label_349f3c;
        case 0x349f40u: goto label_349f40;
        case 0x349f44u: goto label_349f44;
        case 0x349f48u: goto label_349f48;
        case 0x349f4cu: goto label_349f4c;
        case 0x349f50u: goto label_349f50;
        case 0x349f54u: goto label_349f54;
        case 0x349f58u: goto label_349f58;
        default: break;
    }

    ctx->pc = 0x349750u;

label_349750:
    // 0x349750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x349750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_349754:
    // 0x349754: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x349754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_349758:
    // 0x349758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34975c:
    // 0x34975c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_349760:
    // 0x349760: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x349760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_349764:
    // 0x349764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349768:
    // 0x349768: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x349768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_34976c:
    // 0x34976c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34976cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_349770:
    // 0x349770: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x349770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_349774:
    // 0x349774: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349778:
    // 0x349778: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x349778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_34977c:
    // 0x34977c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_349780:
    // 0x349780: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x349780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_349784:
    // 0x349784: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x349784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_349788:
    // 0x349788: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_34978c:
    // 0x34978c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34978cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_349790:
    // 0x349790: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x349790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_349794:
    // 0x349794: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x349794u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_349798:
    // 0x349798: 0x102001ea  beqz        $at, . + 4 + (0x1EA << 2)
label_34979c:
    if (ctx->pc == 0x34979Cu) {
        ctx->pc = 0x3497A0u;
        goto label_3497a0;
    }
    ctx->pc = 0x349798u;
    {
        const bool branch_taken_0x349798 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x349798) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x3497A0u;
label_3497a0:
    // 0x3497a0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3497a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_3497a4:
    // 0x3497a4: 0x24642980  addiu       $a0, $v1, 0x2980
    ctx->pc = 0x3497a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10624));
label_3497a8:
    // 0x3497a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3497a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3497ac:
    // 0x3497ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3497acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3497b0:
    // 0x3497b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3497b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3497b4:
    // 0x3497b4: 0xa00008  jr          $a1
label_3497b8:
    if (ctx->pc == 0x3497B8u) {
        ctx->pc = 0x3497BCu;
        goto label_3497bc;
    }
    ctx->pc = 0x3497B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3497B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3497BCu;
label_3497bc:
    // 0x3497bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3497bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3497c0:
    // 0x3497c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3497c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3497c4:
    // 0x3497c4: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x3497c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_3497c8:
    // 0x3497c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3497c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3497cc:
    // 0x3497cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3497ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3497d0:
    // 0x3497d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3497d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_3497d4:
    // 0x3497d4: 0x24060f0e  addiu       $a2, $zero, 0xF0E
    ctx->pc = 0x3497d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3854));
label_3497d8:
    // 0x3497d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3497d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3497dc:
    // 0x3497dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3497dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3497e0:
    // 0x3497e0: 0xc0965d0  jal         func_259740
label_3497e4:
    if (ctx->pc == 0x3497E4u) {
        ctx->pc = 0x3497E8u;
        goto label_3497e8;
    }
    ctx->pc = 0x3497E0u;
    SET_GPR_U32(ctx, 31, 0x3497E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3497E0u, 0x3497E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497E8u;
label_3497e8:
    // 0x3497e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3497e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3497ec:
    // 0x3497ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3497ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3497f0:
    // 0x3497f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3497f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3497f4:
    // 0x3497f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3497f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3497f8:
    // 0x3497f8: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x3497f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3497fc:
    // 0x3497fc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3497fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_349800:
    // 0x349800: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x349800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_349804:
    // 0x349804: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349808:
    // 0x349808: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x349808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_34980c:
    // 0x34980c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349810:
    // 0x349810: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x349810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_349814:
    // 0x349814: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x349814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
label_349818:
    // 0x349818: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x349818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_34981c:
    // 0x34981c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_349820:
    // 0x349820: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x349820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_349824:
    // 0x349824: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x349824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_349828:
    // 0x349828: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x349828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_34982c:
    // 0x34982c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34982cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349830:
    // 0x349830: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349834:
    // 0x349834: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x349834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349838:
    // 0x349838: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x349838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_34983c:
    // 0x34983c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34983cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_349840:
    // 0x349840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349844:
    // 0x349844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349848:
    // 0x349848: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_34984c:
    // 0x34984c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34984cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_349850:
    // 0x349850: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x349850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349854:
    // 0x349854: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x349854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_349858:
    // 0x349858: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x349858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_34985c:
    // 0x34985c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x34985cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_349860:
    // 0x349860: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x349860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_349864:
    // 0x349864: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349868:
    // 0x349868: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x349868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_34986c:
    // 0x34986c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x34986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349870:
    // 0x349870: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349874:
    // 0x349874: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x349874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349878:
    // 0x349878: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34987c:
    // 0x34987c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x34987cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_349880:
    // 0x349880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349884:
    // 0x349884: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_349888:
    // 0x349888: 0xc096b40  jal         func_25AD00
label_34988c:
    if (ctx->pc == 0x34988Cu) {
        ctx->pc = 0x349890u;
        goto label_349890;
    }
    ctx->pc = 0x349888u;
    SET_GPR_U32(ctx, 31, 0x349890u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x349888u, 0x349890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349890u;
label_349890:
    // 0x349890: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x349890u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_349894:
    // 0x349894: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349898:
    // 0x349898: 0xc05cd10  jal         func_173440
label_34989c:
    if (ctx->pc == 0x34989Cu) {
        ctx->pc = 0x3498A0u;
        goto label_3498a0;
    }
    ctx->pc = 0x349898u;
    SET_GPR_U32(ctx, 31, 0x3498A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349898u, 0x3498A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498A0u;
label_3498a0:
    // 0x3498a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3498a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3498a4:
    // 0x3498a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3498a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_3498a8:
    // 0x3498a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3498a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3498ac:
    // 0x3498ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3498acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_3498b0:
    // 0x3498b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3498b4:
    if (ctx->pc == 0x3498B4u) {
        ctx->pc = 0x3498B8u;
        goto label_3498b8;
    }
    ctx->pc = 0x3498B0u;
    {
        const bool branch_taken_0x3498b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3498b0) {
            ctx->pc = 0x3498F4u;
            goto label_3498f4;
        }
    }
    ctx->pc = 0x3498B8u;
label_3498b8:
    // 0x3498b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3498b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3498bc:
    // 0x3498bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3498bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3498c0:
    // 0x3498c0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3498c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3498c4:
    // 0x3498c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3498c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3498c8:
    // 0x3498c8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3498c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3498cc:
    // 0x3498cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3498ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3498d0:
    // 0x3498d0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x3498d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_3498d4:
    // 0x3498d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3498d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3498d8:
    // 0x3498d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3498d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_3498dc:
    // 0x3498dc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3498dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3498e0:
    // 0x3498e0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x3498e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_3498e4:
    // 0x3498e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3498e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3498e8:
    // 0x3498e8: 0x0  nop
    ctx->pc = 0x3498e8u;
    // NOP
label_3498ec:
    // 0x3498ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3498ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3498f0:
    // 0x3498f0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3498f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_3498f4:
    // 0x3498f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3498f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3498f8:
    // 0x3498f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3498f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3498fc:
    // 0x3498fc: 0xc0d0704  jal         func_341C10
label_349900:
    if (ctx->pc == 0x349900u) {
        ctx->pc = 0x349904u;
        goto label_349904;
    }
    ctx->pc = 0x3498FCu;
    SET_GPR_U32(ctx, 31, 0x349904u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3498FCu, 0x349904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349904u;
label_349904:
    // 0x349904: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349908:
    // 0x349908: 0xc0974dc  jal         func_25D370
label_34990c:
    if (ctx->pc == 0x34990Cu) {
        ctx->pc = 0x349910u;
        goto label_349910;
    }
    ctx->pc = 0x349908u;
    SET_GPR_U32(ctx, 31, 0x349910u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349908u, 0x349910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349910u;
label_349910:
    // 0x349910: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349914:
    // 0x349914: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x349914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_349918:
    // 0x349918: 0x1060018a  beqz        $v1, . + 4 + (0x18A << 2)
label_34991c:
    if (ctx->pc == 0x34991Cu) {
        ctx->pc = 0x349920u;
        goto label_349920;
    }
    ctx->pc = 0x349918u;
    {
        const bool branch_taken_0x349918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349918) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349920u;
label_349920:
    // 0x349920: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x349920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_349924:
    // 0x349924: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349928:
    // 0x349928: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_34992c:
    // 0x34992c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349930:
    // 0x349930: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349934:
    // 0x349934: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_349938:
    // 0x349938: 0x24061e0f  addiu       $a2, $zero, 0x1E0F
    ctx->pc = 0x349938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7695));
label_34993c:
    // 0x34993c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34993cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349940:
    // 0x349940: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_349944:
    // 0x349944: 0xc0965d0  jal         func_259740
label_349948:
    if (ctx->pc == 0x349948u) {
        ctx->pc = 0x34994Cu;
        goto label_34994c;
    }
    ctx->pc = 0x349944u;
    SET_GPR_U32(ctx, 31, 0x34994Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349944u, 0x34994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34994Cu;
label_34994c:
    // 0x34994c: 0x1000017d  b           . + 4 + (0x17D << 2)
label_349950:
    if (ctx->pc == 0x349950u) {
        ctx->pc = 0x349954u;
        goto label_349954;
    }
    ctx->pc = 0x34994Cu;
    {
        const bool branch_taken_0x34994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34994c) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349954u;
label_349954:
    // 0x349954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349958:
    // 0x349958: 0xc05cd10  jal         func_173440
label_34995c:
    if (ctx->pc == 0x34995Cu) {
        ctx->pc = 0x349960u;
        goto label_349960;
    }
    ctx->pc = 0x349958u;
    SET_GPR_U32(ctx, 31, 0x349960u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349958u, 0x349960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349960u;
label_349960:
    // 0x349960: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349964:
    // 0x349964: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349968:
    // 0x349968: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34996c:
    // 0x34996c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349970:
    // 0x349970: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349974:
    // 0x349974: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349978:
    // 0x349978: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x349978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_34997c:
    // 0x34997c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349980:
    // 0x349980: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349984:
    // 0x349984: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349988:
    // 0x349988: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_34998c:
    // 0x34998c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349990:
    // 0x349990: 0x0  nop
    ctx->pc = 0x349990u;
    // NOP
label_349994:
    // 0x349994: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_349998:
    // 0x349998: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_34999c:
    // 0x34999c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3499a0:
    // 0x3499a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3499a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3499a4:
    // 0x3499a4: 0xc0d0704  jal         func_341C10
label_3499a8:
    if (ctx->pc == 0x3499A8u) {
        ctx->pc = 0x3499ACu;
        goto label_3499ac;
    }
    ctx->pc = 0x3499A4u;
    SET_GPR_U32(ctx, 31, 0x3499ACu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3499A4u, 0x3499ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499ACu;
label_3499ac:
    // 0x3499ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3499acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3499b0:
    // 0x3499b0: 0xc0974dc  jal         func_25D370
label_3499b4:
    if (ctx->pc == 0x3499B4u) {
        ctx->pc = 0x3499B8u;
        goto label_3499b8;
    }
    ctx->pc = 0x3499B0u;
    SET_GPR_U32(ctx, 31, 0x3499B8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3499B0u, 0x3499B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499B8u;
label_3499b8:
    // 0x3499b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3499b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3499bc:
    // 0x3499bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3499bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3499c0:
    // 0x3499c0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3499c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3499c4:
    // 0x3499c4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3499c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_3499c8:
    // 0x3499c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3499c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3499cc:
    // 0x3499cc: 0x0  nop
    ctx->pc = 0x3499ccu;
    // NOP
label_3499d0:
    // 0x3499d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3499d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3499d4:
    // 0x3499d4: 0x0  nop
    ctx->pc = 0x3499d4u;
    // NOP
label_3499d8:
    // 0x3499d8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3499dc:
    if (ctx->pc == 0x3499DCu) {
        ctx->pc = 0x3499E0u;
        goto label_3499e0;
    }
    ctx->pc = 0x3499D8u;
    {
        const bool branch_taken_0x3499d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3499d8) {
            ctx->pc = 0x349A0Cu;
            goto label_349a0c;
        }
    }
    ctx->pc = 0x3499E0u;
label_3499e0:
    // 0x3499e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3499e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3499e4:
    // 0x3499e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3499e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3499e8:
    // 0x3499e8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3499e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_3499ec:
    // 0x3499ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3499ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3499f0:
    // 0x3499f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3499f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3499f4:
    // 0x3499f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3499f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_3499f8:
    // 0x3499f8: 0x24060810  addiu       $a2, $zero, 0x810
    ctx->pc = 0x3499f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
label_3499fc:
    // 0x3499fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3499fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349a00:
    // 0x349a00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_349a04:
    // 0x349a04: 0xc0965d0  jal         func_259740
label_349a08:
    if (ctx->pc == 0x349A08u) {
        ctx->pc = 0x349A0Cu;
        goto label_349a0c;
    }
    ctx->pc = 0x349A04u;
    SET_GPR_U32(ctx, 31, 0x349A0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349A04u, 0x349A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A0Cu;
label_349a0c:
    // 0x349a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a10:
    // 0x349a10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349a14:
    // 0x349a14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x349a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_349a18:
    // 0x349a18: 0x1060014a  beqz        $v1, . + 4 + (0x14A << 2)
label_349a1c:
    if (ctx->pc == 0x349A1Cu) {
        ctx->pc = 0x349A20u;
        goto label_349a20;
    }
    ctx->pc = 0x349A18u;
    {
        const bool branch_taken_0x349a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349a18) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349A20u;
label_349a20:
    // 0x349a20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a24:
    // 0x349a24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349a28:
    // 0x349a28: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x349a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349a2c:
    // 0x349a2c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x349a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_349a30:
    // 0x349a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349a34:
    // 0x349a34: 0x0  nop
    ctx->pc = 0x349a34u;
    // NOP
label_349a38:
    // 0x349a38: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x349a38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349a3c:
    // 0x349a3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a40:
    // 0x349a40: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349a44:
    // 0x349a44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x349a44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_349a48:
    // 0x349a48: 0x0  nop
    ctx->pc = 0x349a48u;
    // NOP
label_349a4c:
    // 0x349a4c: 0x4500013d  bc1f        . + 4 + (0x13D << 2)
label_349a50:
    if (ctx->pc == 0x349A50u) {
        ctx->pc = 0x349A54u;
        goto label_349a54;
    }
    ctx->pc = 0x349A4Cu;
    {
        const bool branch_taken_0x349a4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349a4c) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349A54u;
label_349a54:
    // 0x349a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349a58:
    // 0x349a58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a5c:
    // 0x349a5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x349a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_349a60:
    // 0x349a60: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x349a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_349a64:
    // 0x349a64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a68:
    // 0x349a68: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_349a6c:
    // 0x349a6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a70:
    // 0x349a70: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_349a74:
    // 0x349a74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a78:
    // 0x349a78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_349a7c:
    // 0x349a7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a80:
    // 0x349a80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_349a84:
    // 0x349a84: 0x1000012f  b           . + 4 + (0x12F << 2)
label_349a88:
    if (ctx->pc == 0x349A88u) {
        ctx->pc = 0x349A8Cu;
        goto label_349a8c;
    }
    ctx->pc = 0x349A84u;
    {
        const bool branch_taken_0x349a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349a84) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349A8Cu;
label_349a8c:
    // 0x349a8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a90:
    // 0x349a90: 0xc05cd10  jal         func_173440
label_349a94:
    if (ctx->pc == 0x349A94u) {
        ctx->pc = 0x349A98u;
        goto label_349a98;
    }
    ctx->pc = 0x349A90u;
    SET_GPR_U32(ctx, 31, 0x349A98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349A90u, 0x349A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A98u;
label_349a98:
    // 0x349a98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349a9c:
    // 0x349a9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349aa0:
    // 0x349aa0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349aa4:
    // 0x349aa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349aa8:
    // 0x349aa8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349aac:
    // 0x349aac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349ab0:
    // 0x349ab0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x349ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_349ab4:
    // 0x349ab4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349ab8:
    // 0x349ab8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349abc:
    // 0x349abc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349ac0:
    // 0x349ac0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_349ac4:
    // 0x349ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349ac8:
    // 0x349ac8: 0x0  nop
    ctx->pc = 0x349ac8u;
    // NOP
label_349acc:
    // 0x349acc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349accu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_349ad0:
    // 0x349ad0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_349ad4:
    // 0x349ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349ad8:
    // 0x349ad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349ad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_349adc:
    // 0x349adc: 0xc0d0704  jal         func_341C10
label_349ae0:
    if (ctx->pc == 0x349AE0u) {
        ctx->pc = 0x349AE4u;
        goto label_349ae4;
    }
    ctx->pc = 0x349ADCu;
    SET_GPR_U32(ctx, 31, 0x349AE4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349ADCu, 0x349AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349AE4u;
label_349ae4:
    // 0x349ae4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349ae8:
    // 0x349ae8: 0xc0974dc  jal         func_25D370
label_349aec:
    if (ctx->pc == 0x349AECu) {
        ctx->pc = 0x349AF0u;
        goto label_349af0;
    }
    ctx->pc = 0x349AE8u;
    SET_GPR_U32(ctx, 31, 0x349AF0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349AE8u, 0x349AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349AF0u;
label_349af0:
    // 0x349af0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349af4:
    // 0x349af4: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x349af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
label_349af8:
    // 0x349af8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_349afc:
    if (ctx->pc == 0x349AFCu) {
        ctx->pc = 0x349B00u;
        goto label_349b00;
    }
    ctx->pc = 0x349AF8u;
    {
        const bool branch_taken_0x349af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349af8) {
            ctx->pc = 0x349B2Cu;
            goto label_349b2c;
        }
    }
    ctx->pc = 0x349B00u;
label_349b00:
    // 0x349b00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x349b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_349b04:
    // 0x349b04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b08:
    // 0x349b08: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349b08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_349b0c:
    // 0x349b0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b10:
    // 0x349b10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b14:
    // 0x349b14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_349b18:
    // 0x349b18: 0x24060811  addiu       $a2, $zero, 0x811
    ctx->pc = 0x349b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2065));
label_349b1c:
    // 0x349b1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x349b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349b20:
    // 0x349b20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_349b24:
    // 0x349b24: 0xc0965d0  jal         func_259740
label_349b28:
    if (ctx->pc == 0x349B28u) {
        ctx->pc = 0x349B2Cu;
        goto label_349b2c;
    }
    ctx->pc = 0x349B24u;
    SET_GPR_U32(ctx, 31, 0x349B2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349B24u, 0x349B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B2Cu;
label_349b2c:
    // 0x349b2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b30:
    // 0x349b30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349b34:
    // 0x349b34: 0xc4410088  lwc1        $f1, 0x88($v0)
    ctx->pc = 0x349b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349b38:
    // 0x349b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b3c:
    // 0x349b3c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349b40:
    // 0x349b40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_349b44:
    // 0x349b44: 0x0  nop
    ctx->pc = 0x349b44u;
    // NOP
label_349b48:
    // 0x349b48: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_349b4c:
    if (ctx->pc == 0x349B4Cu) {
        ctx->pc = 0x349B50u;
        goto label_349b50;
    }
    ctx->pc = 0x349B48u;
    {
        const bool branch_taken_0x349b48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349b48) {
            ctx->pc = 0x349B7Cu;
            goto label_349b7c;
        }
    }
    ctx->pc = 0x349B50u;
label_349b50:
    // 0x349b50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x349b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_349b54:
    // 0x349b54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b58:
    // 0x349b58: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349b58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_349b5c:
    // 0x349b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b60:
    // 0x349b60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b64:
    // 0x349b64: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_349b68:
    // 0x349b68: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x349b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_349b6c:
    // 0x349b6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x349b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349b70:
    // 0x349b70: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_349b74:
    // 0x349b74: 0xc0965d0  jal         func_259740
label_349b78:
    if (ctx->pc == 0x349B78u) {
        ctx->pc = 0x349B7Cu;
        goto label_349b7c;
    }
    ctx->pc = 0x349B74u;
    SET_GPR_U32(ctx, 31, 0x349B7Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349B74u, 0x349B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B7Cu;
label_349b7c:
    // 0x349b7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b80:
    // 0x349b80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349b84:
    // 0x349b84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x349b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_349b88:
    // 0x349b88: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_349b8c:
    if (ctx->pc == 0x349B8Cu) {
        ctx->pc = 0x349B90u;
        goto label_349b90;
    }
    ctx->pc = 0x349B88u;
    {
        const bool branch_taken_0x349b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349b88) {
            ctx->pc = 0x349BF4u;
            goto label_349bf4;
        }
    }
    ctx->pc = 0x349B90u;
label_349b90:
    // 0x349b90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349b94:
    // 0x349b94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349b98:
    // 0x349b98: 0xc4410088  lwc1        $f1, 0x88($v0)
    ctx->pc = 0x349b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349b9c:
    // 0x349b9c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x349b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_349ba0:
    // 0x349ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349ba4:
    // 0x349ba4: 0x0  nop
    ctx->pc = 0x349ba4u;
    // NOP
label_349ba8:
    // 0x349ba8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x349ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349bac:
    // 0x349bac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349bb0:
    // 0x349bb0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349bb4:
    // 0x349bb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x349bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_349bb8:
    // 0x349bb8: 0x0  nop
    ctx->pc = 0x349bb8u;
    // NOP
label_349bbc:
    // 0x349bbc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_349bc0:
    if (ctx->pc == 0x349BC0u) {
        ctx->pc = 0x349BC4u;
        goto label_349bc4;
    }
    ctx->pc = 0x349BBCu;
    {
        const bool branch_taken_0x349bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349bbc) {
            ctx->pc = 0x349BF4u;
            goto label_349bf4;
        }
    }
    ctx->pc = 0x349BC4u;
label_349bc4:
    // 0x349bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349bc8:
    // 0x349bc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349bcc:
    // 0x349bcc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x349bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_349bd0:
    // 0x349bd0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x349bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_349bd4:
    // 0x349bd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349bd8:
    // 0x349bd8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x349bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_349bdc:
    // 0x349bdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349be0:
    // 0x349be0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x349be0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_349be4:
    // 0x349be4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349be8:
    // 0x349be8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x349be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_349bec:
    // 0x349bec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349bf0:
    // 0x349bf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x349bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_349bf4:
    // 0x349bf4: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x349bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_349bf8:
    // 0x349bf8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x349bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_349bfc:
    // 0x349bfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x349bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_349c00:
    // 0x349c00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c04:
    // 0x349c04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c08:
    // 0x349c08: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x349c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_349c0c:
    // 0x349c0c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x349c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_349c10:
    // 0x349c10: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x349c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_349c14:
    // 0x349c14: 0xc05caf8  jal         func_172BE0
label_349c18:
    if (ctx->pc == 0x349C18u) {
        ctx->pc = 0x349C1Cu;
        goto label_349c1c;
    }
    ctx->pc = 0x349C14u;
    SET_GPR_U32(ctx, 31, 0x349C1Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x349C14u, 0x349C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C1Cu;
label_349c1c:
    // 0x349c1c: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_349c20:
    if (ctx->pc == 0x349C20u) {
        ctx->pc = 0x349C24u;
        goto label_349c24;
    }
    ctx->pc = 0x349C1Cu;
    {
        const bool branch_taken_0x349c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349c1c) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349C24u;
label_349c24:
    // 0x349c24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c28:
    // 0x349c28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349c2c:
    // 0x349c2c: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x349c2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_349c30:
    // 0x349c30: 0x146000c4  bnez        $v1, . + 4 + (0xC4 << 2)
label_349c34:
    if (ctx->pc == 0x349C34u) {
        ctx->pc = 0x349C38u;
        goto label_349c38;
    }
    ctx->pc = 0x349C30u;
    {
        const bool branch_taken_0x349c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x349c30) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349C38u;
label_349c38:
    // 0x349c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349c3c:
    // 0x349c3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c40:
    // 0x349c40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x349c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_349c44:
    // 0x349c44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x349c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_349c48:
    // 0x349c48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c4c:
    // 0x349c4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_349c50:
    // 0x349c50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c54:
    // 0x349c54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_349c58:
    // 0x349c58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c5c:
    // 0x349c5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_349c60:
    // 0x349c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c64:
    // 0x349c64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_349c68:
    // 0x349c68: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_349c6c:
    if (ctx->pc == 0x349C6Cu) {
        ctx->pc = 0x349C70u;
        goto label_349c70;
    }
    ctx->pc = 0x349C68u;
    {
        const bool branch_taken_0x349c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349c68) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349C70u;
label_349c70:
    // 0x349c70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c74:
    // 0x349c74: 0xc05cd10  jal         func_173440
label_349c78:
    if (ctx->pc == 0x349C78u) {
        ctx->pc = 0x349C7Cu;
        goto label_349c7c;
    }
    ctx->pc = 0x349C74u;
    SET_GPR_U32(ctx, 31, 0x349C7Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349C74u, 0x349C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C7Cu;
label_349c7c:
    // 0x349c7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c80:
    // 0x349c80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349c84:
    // 0x349c84: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349c88:
    // 0x349c88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c8c:
    // 0x349c8c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349c90:
    // 0x349c90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349c94:
    // 0x349c94: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x349c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_349c98:
    // 0x349c98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349c9c:
    // 0x349c9c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349ca0:
    // 0x349ca0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349ca4:
    // 0x349ca4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_349ca8:
    // 0x349ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349cac:
    // 0x349cac: 0x0  nop
    ctx->pc = 0x349cacu;
    // NOP
label_349cb0:
    // 0x349cb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349cb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_349cb4:
    // 0x349cb4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_349cb8:
    // 0x349cb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349cbc:
    // 0x349cbc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_349cc0:
    // 0x349cc0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x349cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_349cc4:
    // 0x349cc4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x349cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_349cc8:
    // 0x349cc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_349ccc:
    // 0x349ccc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x349cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349cd0:
    // 0x349cd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_349cd4:
    // 0x349cd4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_349cd8:
    // 0x349cd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349cdc:
    // 0x349cdc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x349cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_349ce0:
    // 0x349ce0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x349ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_349ce4:
    // 0x349ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_349ce8:
    // 0x349ce8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x349ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349cec:
    // 0x349cec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_349cf0:
    // 0x349cf0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x349cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_349cf4:
    // 0x349cf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349cf8:
    // 0x349cf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349cf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_349cfc:
    // 0x349cfc: 0xc0d0704  jal         func_341C10
label_349d00:
    if (ctx->pc == 0x349D00u) {
        ctx->pc = 0x349D04u;
        goto label_349d04;
    }
    ctx->pc = 0x349CFCu;
    SET_GPR_U32(ctx, 31, 0x349D04u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349CFCu, 0x349D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D04u;
label_349d04:
    // 0x349d04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349d08:
    // 0x349d08: 0xc0974dc  jal         func_25D370
label_349d0c:
    if (ctx->pc == 0x349D0Cu) {
        ctx->pc = 0x349D10u;
        goto label_349d10;
    }
    ctx->pc = 0x349D08u;
    SET_GPR_U32(ctx, 31, 0x349D10u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349D08u, 0x349D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D10u;
label_349d10:
    // 0x349d10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349d14:
    // 0x349d14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349d18:
    // 0x349d18: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x349d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349d1c:
    // 0x349d1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349d20:
    // 0x349d20: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349d24:
    // 0x349d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_349d28:
    // 0x349d28: 0x0  nop
    ctx->pc = 0x349d28u;
    // NOP
label_349d2c:
    // 0x349d2c: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
label_349d30:
    if (ctx->pc == 0x349D30u) {
        ctx->pc = 0x349D34u;
        goto label_349d34;
    }
    ctx->pc = 0x349D2Cu;
    {
        const bool branch_taken_0x349d2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349d2c) {
            ctx->pc = 0x349DE4u;
            goto label_349de4;
        }
    }
    ctx->pc = 0x349D34u;
label_349d34:
    // 0x349d34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x349d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_349d38:
    // 0x349d38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349d3c:
    // 0x349d3c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_349d40:
    // 0x349d40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349d44:
    // 0x349d44: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x349d44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
label_349d48:
    // 0x349d48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349d4c:
    // 0x349d4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349d50:
    // 0x349d50: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x349d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_349d54:
    // 0x349d54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x349d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_349d58:
    // 0x349d58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x349d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_349d5c:
    // 0x349d5c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x349d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_349d60:
    // 0x349d60: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x349d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_349d64:
    // 0x349d64: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x349d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_349d68:
    // 0x349d68: 0xc05caf8  jal         func_172BE0
label_349d6c:
    if (ctx->pc == 0x349D6Cu) {
        ctx->pc = 0x349D70u;
        goto label_349d70;
    }
    ctx->pc = 0x349D68u;
    SET_GPR_U32(ctx, 31, 0x349D70u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x349D68u, 0x349D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D70u;
label_349d70:
    // 0x349d70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_349d74:
    if (ctx->pc == 0x349D74u) {
        ctx->pc = 0x349D78u;
        goto label_349d78;
    }
    ctx->pc = 0x349D70u;
    {
        const bool branch_taken_0x349d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349d70) {
            ctx->pc = 0x349DA0u;
            goto label_349da0;
        }
    }
    ctx->pc = 0x349D78u;
label_349d78:
    // 0x349d78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349d7c:
    // 0x349d7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349d80:
    // 0x349d80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_349d84:
    // 0x349d84: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x349d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_349d88:
    // 0x349d88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x349d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349d8c:
    // 0x349d8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_349d90:
    // 0x349d90: 0xc0965d0  jal         func_259740
label_349d94:
    if (ctx->pc == 0x349D94u) {
        ctx->pc = 0x349D98u;
        goto label_349d98;
    }
    ctx->pc = 0x349D90u;
    SET_GPR_U32(ctx, 31, 0x349D98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349D90u, 0x349D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D98u;
label_349d98:
    // 0x349d98: 0x1000000c  b           . + 4 + (0xC << 2)
label_349d9c:
    if (ctx->pc == 0x349D9Cu) {
        ctx->pc = 0x349DA0u;
        goto label_349da0;
    }
    ctx->pc = 0x349D98u;
    {
        const bool branch_taken_0x349d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349d98) {
            ctx->pc = 0x349DCCu;
            goto label_349dcc;
        }
    }
    ctx->pc = 0x349DA0u;
label_349da0:
    // 0x349da0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349da4:
    // 0x349da4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349da8:
    // 0x349da8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_349dac:
    // 0x349dac: 0x2406041f  addiu       $a2, $zero, 0x41F
    ctx->pc = 0x349dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
label_349db0:
    // 0x349db0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x349db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349db4:
    // 0x349db4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_349db8:
    // 0x349db8: 0xc0965d0  jal         func_259740
label_349dbc:
    if (ctx->pc == 0x349DBCu) {
        ctx->pc = 0x349DC0u;
        goto label_349dc0;
    }
    ctx->pc = 0x349DB8u;
    SET_GPR_U32(ctx, 31, 0x349DC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349DB8u, 0x349DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DC0u;
label_349dc0:
    // 0x349dc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349dc4:
    // 0x349dc4: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x349dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349dc8:
    // 0x349dc8: 0xa603127e  sh          $v1, 0x127E($s0)
    ctx->pc = 0x349dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4734), (uint16_t)GPR_U32(ctx, 3));
label_349dcc:
    // 0x349dcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349dd0:
    // 0x349dd0: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x349dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349dd4:
    // 0x349dd4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x349dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_349dd8:
    // 0x349dd8: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x349dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_349ddc:
    // 0x349ddc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x349ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_349de0:
    // 0x349de0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x349de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_349de4:
    // 0x349de4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349de8:
    // 0x349de8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349dec:
    // 0x349dec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x349decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_349df0:
    // 0x349df0: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_349df4:
    if (ctx->pc == 0x349DF4u) {
        ctx->pc = 0x349DF8u;
        goto label_349df8;
    }
    ctx->pc = 0x349DF0u;
    {
        const bool branch_taken_0x349df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349df0) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349DF8u;
label_349df8:
    // 0x349df8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349dfc:
    // 0x349dfc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x349dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349e00:
    // 0x349e00: 0xc4810088  lwc1        $f1, 0x88($a0)
    ctx->pc = 0x349e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349e04:
    // 0x349e04: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x349e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_349e08:
    // 0x349e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349e0c:
    // 0x349e0c: 0x0  nop
    ctx->pc = 0x349e0cu;
    // NOP
label_349e10:
    // 0x349e10: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x349e10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349e14:
    // 0x349e14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349e18:
    // 0x349e18: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349e1c:
    // 0x349e1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x349e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_349e20:
    // 0x349e20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x349e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349e24:
    // 0x349e24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_349e28:
    if (ctx->pc == 0x349E28u) {
        ctx->pc = 0x349E2Cu;
        goto label_349e2c;
    }
    ctx->pc = 0x349E24u;
    {
        const bool branch_taken_0x349e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349e24) {
            ctx->pc = 0x349E30u;
            goto label_349e30;
        }
    }
    ctx->pc = 0x349E2Cu;
label_349e2c:
    // 0x349e2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_349e30:
    // 0x349e30: 0x10000044  b           . + 4 + (0x44 << 2)
label_349e34:
    if (ctx->pc == 0x349E34u) {
        ctx->pc = 0x349E38u;
        goto label_349e38;
    }
    ctx->pc = 0x349E30u;
    {
        const bool branch_taken_0x349e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349e30) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349E38u;
label_349e38:
    // 0x349e38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349e3c:
    // 0x349e3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349e3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_349e40:
    // 0x349e40: 0xc096b40  jal         func_25AD00
label_349e44:
    if (ctx->pc == 0x349E44u) {
        ctx->pc = 0x349E48u;
        goto label_349e48;
    }
    ctx->pc = 0x349E40u;
    SET_GPR_U32(ctx, 31, 0x349E48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x349E40u, 0x349E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E48u;
label_349e48:
    // 0x349e48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349e4c:
    // 0x349e4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x349e4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_349e50:
    // 0x349e50: 0xc05cd10  jal         func_173440
label_349e54:
    if (ctx->pc == 0x349E54u) {
        ctx->pc = 0x349E58u;
        goto label_349e58;
    }
    ctx->pc = 0x349E50u;
    SET_GPR_U32(ctx, 31, 0x349E58u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349E50u, 0x349E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E58u;
label_349e58:
    // 0x349e58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x349e58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_349e5c:
    // 0x349e5c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x349e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349e60:
    // 0x349e60: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x349e60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_349e64:
    // 0x349e64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349e64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_349e68:
    // 0x349e68: 0xc0d0704  jal         func_341C10
label_349e6c:
    if (ctx->pc == 0x349E6Cu) {
        ctx->pc = 0x349E70u;
        goto label_349e70;
    }
    ctx->pc = 0x349E68u;
    SET_GPR_U32(ctx, 31, 0x349E70u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349E68u, 0x349E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E70u;
label_349e70:
    // 0x349e70: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x349e70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_349e74:
    // 0x349e74: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x349e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349e78:
    // 0x349e78: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x349e78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_349e7c:
    // 0x349e7c: 0xc0974dc  jal         func_25D370
label_349e80:
    if (ctx->pc == 0x349E80u) {
        ctx->pc = 0x349E84u;
        goto label_349e84;
    }
    ctx->pc = 0x349E7Cu;
    SET_GPR_U32(ctx, 31, 0x349E84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349E7Cu, 0x349E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E84u;
label_349e84:
    // 0x349e84: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x349e84u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_349e88:
    // 0x349e88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349e8c:
    // 0x349e8c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x349e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_349e90:
    // 0x349e90: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_349e94:
    if (ctx->pc == 0x349E94u) {
        ctx->pc = 0x349E98u;
        goto label_349e98;
    }
    ctx->pc = 0x349E90u;
    {
        const bool branch_taken_0x349e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349e90) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349E98u;
label_349e98:
    // 0x349e98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349e9c:
    // 0x349e9c: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x349e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
label_349ea0:
    // 0x349ea0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_349ea4:
    if (ctx->pc == 0x349EA4u) {
        ctx->pc = 0x349EA8u;
        goto label_349ea8;
    }
    ctx->pc = 0x349EA0u;
    {
        const bool branch_taken_0x349ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349ea0) {
            ctx->pc = 0x349ED4u;
            goto label_349ed4;
        }
    }
    ctx->pc = 0x349EA8u;
label_349ea8:
    // 0x349ea8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349eac:
    // 0x349eac: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x349eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_349eb0:
    // 0x349eb0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x349eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_349eb4:
    // 0x349eb4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x349eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_349eb8:
    // 0x349eb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_349ebc:
    // 0x349ebc: 0x0  nop
    ctx->pc = 0x349ebcu;
    // NOP
label_349ec0:
    // 0x349ec0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x349ec0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_349ec4:
    // 0x349ec4: 0xc058fec  jal         func_163FB0
label_349ec8:
    if (ctx->pc == 0x349EC8u) {
        ctx->pc = 0x349ECCu;
        goto label_349ecc;
    }
    ctx->pc = 0x349EC4u;
    SET_GPR_U32(ctx, 31, 0x349ECCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x349EC4u, 0x349ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349ECCu;
label_349ecc:
    // 0x349ecc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349ed0:
    // 0x349ed0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x349ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_349ed4:
    // 0x349ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349ed8:
    // 0x349ed8: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x349ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349edc:
    // 0x349edc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x349edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_349ee0:
    // 0x349ee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_349ee4:
    // 0x349ee4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349ee8:
    // 0x349ee8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_349eec:
    // 0x349eec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349ef0:
    // 0x349ef0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_349ef4:
    // 0x349ef4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349ef8:
    // 0x349ef8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_349efc:
    // 0x349efc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349f00:
    // 0x349f00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_349f04:
    // 0x349f04: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x349f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_349f08:
    // 0x349f08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349f0c:
    // 0x349f0c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349f10:
    // 0x349f10: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x349f10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
label_349f14:
    // 0x349f14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349f18:
    // 0x349f18: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x349f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349f1c:
    // 0x349f1c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x349f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_349f20:
    // 0x349f20: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x349f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_349f24:
    // 0x349f24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x349f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_349f28:
    // 0x349f28: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x349f28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_349f2c:
    // 0x349f2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_349f30:
    // 0x349f30: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x349f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_349f34:
    // 0x349f34: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x349f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_349f38:
    // 0x349f38: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x349f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_349f3c:
    // 0x349f3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x349f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_349f40:
    // 0x349f40: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x349f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_349f44:
    // 0x349f44: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x349f44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_349f48:
    // 0x349f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_349f4c:
    // 0x349f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_349f50:
    // 0x349f50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x349f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_349f54:
    // 0x349f54: 0x3e00008  jr          $ra
label_349f58:
    if (ctx->pc == 0x349F58u) {
        ctx->pc = 0x349F5Cu;
        goto label_fallthrough_0x349f54;
    }
    ctx->pc = 0x349F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x349f54:
    ctx->pc = 0x349F5Cu;
}
